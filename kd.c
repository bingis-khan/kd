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
    enum Unit_6  (*fun) (  struct env26*  ,    struct List_7 *  ,    size_t  ,    size_t  );
    struct env26 env;
};

struct envunion72 {
    enum Unit_6  (*fun) (  struct env27*  ,    struct List_10 *  ,    size_t  ,    size_t  );
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
    ;
    struct env78 envinst78;
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
    ;
    struct env84 envinst84;
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
    ;
    ;
    struct env88 envinst88;
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
    ;
    ;
    struct env88 envinst88;
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
    ;
    ;
    ;
    struct env88 envinst88;
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
    ;
    struct env86 envinst86;
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
    ;
    ;
    ;
    ;
    struct env105 envinst105;
    ;
    struct env103 envinst103;
    struct env101 envinst101;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env97 envinst97;
    ;
    ;
    ;
    ;
    struct env99 envinst99;
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

struct envunion123 {
    enum Unit_6  (*fun) (  struct env42*  ,    struct StrBuilder_44 *  ,    struct Char_47  );
    struct env42 env;
};

struct Key_125 {
    enum {
        Key_125_Escape_t,
        Key_125_Enter_t,
        Key_125_Tab_t,
        Key_125_Backspace_t,
        Key_125_Char_t,
        Key_125_Ctrl_t,
        Key_125_Up_t,
        Key_125_Down_t,
        Key_125_Left_t,
        Key_125_Right_t,
        Key_125_Home_t,
        Key_125_End_t,
        Key_125_PageUp_t,
        Key_125_PageDown_t,
        Key_125_Delete_t,
        Key_125_Insert_t,
        Key_125_F1_t,
        Key_125_F2_t,
        Key_125_F3_t,
        Key_125_F4_t,
        Key_125_F5_t,
        Key_125_F6_t,
        Key_125_F7_t,
        Key_125_F8_t,
        Key_125_F9_t,
        Key_125_F10_t,
        Key_125_F11_t,
        Key_125_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_125_Char_s;
        struct {
            char  field0;
        } Key_125_Ctrl_s;
    } stuff;
};

static struct Key_125 Key_125_Char (  char  field0 ) {
    return ( struct Key_125 ) { .tag = Key_125_Char_t, .stuff = { .Key_125_Char_s = { .field0 = field0 } } };
};

static struct Key_125 Key_125_Ctrl (  char  field0 ) {
    return ( struct Key_125 ) { .tag = Key_125_Ctrl_t, .stuff = { .Key_125_Ctrl_s = { .field0 = field0 } } };
};

struct envunion124 {
    enum Unit_6  (*fun) (  struct env107*  ,    struct Editor_109 *  ,    struct Key_125  );
    struct env107 env;
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
    ;
    struct env95 envinst95;
    ;
    ;
    ;
    ;
    struct env42 envinst42;
    struct env107 envinst107;
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

static  struct Actions_76   mk_dash_actions257 (    enum CAllocator_8  al3572 ) {
    return ( (struct Actions_76) { .f_list = ( (  mk258 ) ( (  al3572 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct TextBuf_75   mk130 (   struct env64* env ,    enum CAllocator_8  al3576 ) {
    struct envunion65  temp131 = ( (struct envunion65){ .fun = (  struct List_7  (*) (  struct env32*  ,    struct Array_34  ,    enum CAllocator_8  ) )from_dash_iter132 , .env =  env->envinst32 } );
    return ( (struct TextBuf_75) { .f_buf = ( temp131.fun ( &temp131.env ,  ( (  from_dash_listlike249 ) ( ( (struct Array_34) { ._arr = { ( (  mk250 ) ( (  al3576 ) ) ) } } ) ) ) ,  (  al3576 ) ) ) , .f_actions = ( (  mk_dash_actions257 ) ( (  al3576 ) ) ) } );
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

static  bool   eq281 (    struct Pos_19  l3541 ,    struct Pos_19  r3543 ) {
    return ( (  eq282 ( ( (  l3541 ) .f_line ) , ( (  r3543 ) .f_line ) ) ) && (  eq282 ( ( (  l3541 ) .f_bi ) , ( (  r3543 ) .f_bi ) ) ) );
}

static  size_t   size283 (    struct List_7 *  l2127 ) {
    return ( ( * (  l2127 ) ) .f_count );
}

struct envunion286 {
    int32_t  (*fun) (  struct env66*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct StrView_20  );
    struct env66 env;
};

static  struct List_10 *   get_dash_ptr289 (    struct List_7 *  list1995 ,    size_t  i1997 ) {
    if ( ( (  cmp151 ( (  i1997 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i1997 ) , ( ( * (  list1995 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic219 ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i1997 ) ) ) ,  ( (  from_dash_string187 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list1995 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr218 ) ( ( ( * (  list1995 ) ) .f_elements ) ,  (  i1997 ) ) );
}

static  struct List_10   get288 (    struct List_7 *  list2005 ,    size_t  i2007 ) {
    return ( * ( (  get_dash_ptr289 ) ( (  list2005 ) ,  (  i2007 ) ) ) );
}

static  uint8_t *   offset_dash_ptr292 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp293;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul197 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp293 ) ) ) ) ) ) ) ) );
}

static  size_t   min294 (    size_t  l1236 ,    size_t  r1238 ) {
    if ( (  cmp151 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Slice_11   subslice291 (    struct Slice_11  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    uint8_t *  begin_dash_ptr1787 = ( (  offset_dash_ptr292 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp151 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp151 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub270 ( ( (  min294 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct Slice_11   from290 (    struct Slice_11  slice1791 ,    size_t  from1793 ) {
    return ( (  subslice291 ) ( (  slice1791 ) ,  (  from1793 ) ,  ( (  slice1791 ) .f_count ) ) );
}

static  struct Slice_11   to_dash_slice295 (    struct List_10  l2120 ) {
    uint8_t *  ptr2121 = ( ( (  l2120 ) .f_elements ) .f_ptr );
    return ( (struct Slice_11) { .f_ptr = (  ptr2121 ) , .f_count = ( (  l2120 ) .f_count ) } );
}

static  enum Unit_6   set296 (    struct List_7 *  list2015 ,    size_t  i2017 ,    struct List_10  elem2019 ) {
    if ( ( (  cmp151 ( (  i2017 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i2017 ) , ( ( * (  list2015 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic219 ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2017 ) ) ) ,  ( (  from_dash_string187 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2015 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set217 ) ( ( ( * (  list2015 ) ) .f_elements ) ,  (  i2017 ) ,  (  elem2019 ) ) );
    return ( Unit_6_Unit );
}

struct env303 {
    struct env12 envinst12;
    struct List_10 *  list2092;
};

struct envunion304 {
    enum Unit_6  (*fun) (  struct env303*  ,    uint8_t  );
    struct env303 env;
};

struct SliceIter_305 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_305   into_dash_iter307 (    struct Slice_11  self1822 ) {
    return ( (struct SliceIter_305) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_308 {
    enum {
        Maybe_308_None_t,
        Maybe_308_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_308_Just_s;
    } stuff;
};

static struct Maybe_308 Maybe_308_Just (  uint8_t  field0 ) {
    return ( struct Maybe_308 ) { .tag = Maybe_308_Just_t, .stuff = { .Maybe_308_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_308   next309 (    struct SliceIter_305 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp151 ( (  op_dash_add199 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
    uint8_t  elem1830 = ( * ( (  offset_dash_ptr292 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add199 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_308_Just ) ( (  elem1830 ) ) );
}

static  enum Unit_6   for_dash_each302 (    struct Slice_11  iterable1074 ,   struct envunion304  fun1076 ) {
    struct SliceIter_305  temp306 = ( (  into_dash_iter307 ) ( (  iterable1074 ) ) );
    struct SliceIter_305 *  it1077 = ( &temp306 );
    while ( ( true ) ) {
        struct Maybe_308  dref1078 = ( (  next309 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_308_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_308_Just_t ) {
                struct envunion304  temp310 = (  fun1076 );
                ( temp310.fun ( &temp310.env ,  ( dref1078 .stuff .Maybe_308_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

struct TypeSize_318 {
    size_t  f_size;
};

static  struct TypeSize_318   get_dash_typesize317 (  ) {
    uint8_t  temp319;
    return ( (struct TypeSize_318) { .f_size = ( sizeof( ( (  temp319 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr320 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   allocate316 (    enum CAllocator_8  dref1947 ,    size_t  count1949 ) {
    if (!(  dref1947 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1950 = ( ( ( (  get_dash_typesize317 ) ( ) ) ) .f_size );
    uint8_t *  ptr1951 = ( (  cast_dash_ptr320 ) ( ( ( malloc ) ( (  op_dash_mul212 ( (  size1950 ) , (  count1949 ) ) ) ) ) ) );
    return ( (struct Slice_11) { .f_ptr = (  ptr1951 ) , .f_count = (  count1949 ) } );
}

struct env321 {
    ;
    struct Slice_11  new_dash_slice2036;
    ;
};

struct Tuple2_323 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_323 Tuple2_323_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_323 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion322 {
    enum Unit_6  (*fun) (  struct env321*  ,    struct Tuple2_323  );
    struct env321 env;
};

static  uint8_t *   get_dash_ptr326 (    struct Slice_11  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp151 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic219 ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string187 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1760 = ( (  offset_dash_ptr292 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_6   set325 (    struct Slice_11  slice1774 ,    size_t  i1776 ,    uint8_t  x1778 ) {
    uint8_t *  ep1779 = ( (  get_dash_ptr326 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam324 (   struct env321* env ,    struct Tuple2_323  dref2037 ) {
    return ( (  set325 ) ( ( env->new_dash_slice2036 ) ,  ( (  i32_dash_size229 ) ( ( dref2037 .field1 ) ) ) ,  ( dref2037 .field0 ) ) );
}

struct Zip_328 {
    struct SliceIter_305  f_left_dash_it;
    struct FromIter_233  f_right_dash_it;
};

static  struct Zip_328   into_dash_iter330 (    struct Zip_328  self911 ) {
    return (  self911 );
}

struct Maybe_331 {
    enum {
        Maybe_331_None_t,
        Maybe_331_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_323  field0;
        } Maybe_331_Just_s;
    } stuff;
};

static struct Maybe_331 Maybe_331_Just (  struct Tuple2_323  field0 ) {
    return ( struct Maybe_331 ) { .tag = Maybe_331_Just_t, .stuff = { .Maybe_331_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_331   next332 (    struct Zip_328 *  self914 ) {
    struct Zip_328  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_308  dref916 = ( (  next309 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_308_None_t ) {
            return ( (struct Maybe_331) { .tag = Maybe_331_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_308_Just_t ) {
                struct Maybe_239  dref918 = ( (  next240 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_239_None_t ) {
                    return ( (struct Maybe_331) { .tag = Maybe_331_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_239_Just_t ) {
                        ( (  next309 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next240 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_331_Just ) ( ( ( Tuple2_323_Tuple2 ) ( ( dref916 .stuff .Maybe_308_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_239_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each327 (    struct Zip_328  iterable1074 ,   struct envunion322  fun1076 ) {
    struct Zip_328  temp329 = ( (  into_dash_iter330 ) ( (  iterable1074 ) ) );
    struct Zip_328 *  it1077 = ( &temp329 );
    while ( ( true ) ) {
        struct Maybe_331  dref1078 = ( (  next332 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_331_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_331_Just_t ) {
                struct envunion322  temp333 = (  fun1076 );
                ( temp333.fun ( &temp333.env ,  ( dref1078 .stuff .Maybe_331_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_328   zip334 (    struct Slice_11  left922 ,    struct FromIter_233  right924 ) {
    struct SliceIter_305  left_dash_it925 = ( (  into_dash_iter307 ) ( (  left922 ) ) );
    struct FromIter_233  right_dash_it926 = ( (  into_dash_iter245 ) ( (  right924 ) ) );
    return ( (struct Zip_328) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr336 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_6   free335 (    enum CAllocator_8  dref1953 ,    struct Slice_11  slice1955 ) {
    if (!(  dref1953 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr336 ) ( ( (  slice1955 ) .f_ptr ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   grow_dash_if_dash_full315 (   struct env2* env ,    struct List_10 *  list2035 ) {
    if ( (  eq206 ( ( ( * (  list2035 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2035 ) .f_elements = ( (  allocate316 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( env->starting_dash_size2030 ) ) );
    } else {
        if ( (  eq206 ( ( ( * (  list2035 ) ) .f_count ) , ( ( ( * (  list2035 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_11  new_dash_slice2036 = ( (  allocate316 ) ( ( ( * (  list2035 ) ) .f_al ) ,  (  op_dash_mul212 ( ( ( * (  list2035 ) ) .f_count ) , ( env->growth_dash_factor2031 ) ) ) ) );
            struct env321 envinst321 = {
                .new_dash_slice2036 =  new_dash_slice2036 ,
            };
            struct envunion322  fun2040 = ( (struct envunion322){ .fun = (  enum Unit_6  (*) (  struct env321*  ,    struct Tuple2_323  ) )lam324 , .env =  envinst321 } );
            ( (  for_dash_each327 ) ( ( (  zip334 ) ( ( ( * (  list2035 ) ) .f_elements ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  fun2040 ) ) );
            ( (  free335 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( ( * (  list2035 ) ) .f_elements ) ) );
            (*  list2035 ) .f_elements = (  new_dash_slice2036 );
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   add313 (   struct env12* env ,    struct List_10 *  list2043 ,    uint8_t  elem2045 ) {
    struct envunion13  temp314 = ( (struct envunion13){ .fun = (  enum Unit_6  (*) (  struct env2*  ,    struct List_10 *  ) )grow_dash_if_dash_full315 , .env =  env->envinst2 } );
    ( temp314.fun ( &temp314.env ,  (  list2043 ) ) );
    ( (  set325 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( ( * (  list2043 ) ) .f_count ) ,  (  elem2045 ) ) );
    (*  list2043 ) .f_count = (  op_dash_add199 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam311 (   struct env303* env ,    uint8_t  x2096 ) {
    struct envunion31  temp312 = ( (struct envunion31){ .fun = (  enum Unit_6  (*) (  struct env12*  ,    struct List_10 *  ,    uint8_t  ) )add313 , .env =  env->envinst12 } );
    return ( temp312.fun ( &temp312.env ,  ( env->list2092 ) ,  (  x2096 ) ) );
}

static  enum Unit_6   add_dash_all301 (   struct env30* env ,    struct List_10 *  list2092 ,    struct Slice_11  it2094 ) {
    struct env303 envinst303 = {
        .envinst12 = env->envinst12 ,
        .list2092 =  list2092 ,
    };
    ( (  for_dash_each302 ) ( (  it2094 ) ,  ( (struct envunion304){ .fun = (  enum Unit_6  (*) (  struct env303*  ,    uint8_t  ) )lam311 , .env =  envinst303 } ) ) );
    return ( Unit_6_Unit );
}

static  struct List_10   from_dash_iter298 (   struct env35* env ,    struct Slice_11  iter2130 ,    enum CAllocator_8  al2132 ) {
    struct List_10  temp299 = ( (  mk250 ) ( (  al2132 ) ) );
    struct List_10 *  list2133 = ( &temp299 );
    struct envunion36  temp300 = ( (struct envunion36){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all301 , .env =  env->envinst30 } );
    ( temp300.fun ( &temp300.env ,  (  list2133 ) ,  (  iter2130 ) ) );
    return ( * (  list2133 ) );
}

struct envunion338 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

static  struct StrView_20   or_dash_else339 (    struct Maybe_113  self1732 ,    struct StrView_20  alt1734 ) {
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

struct LineIter_341 {
    struct StrView_20  f_og;
    size_t  f_last;
};

static  uint8_t   undefined345 (  ) {
    uint8_t  temp346;
    return (  temp346 );
}

static  uint8_t   or_dash_fail344 (    struct Maybe_308  x1725 ,    struct StrConcat_220  errmsg1727 ) {
    struct Maybe_308  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_308_None_t ) {
        ( (  panic219 ) ( (  errmsg1727 ) ) );
        return ( (  undefined345 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_308_Just_t ) {
            return ( dref1728 .stuff .Maybe_308_Just_s .field0 );
        }
    }
}

static  struct Maybe_308   try_dash_get347 (    struct Slice_11  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp151 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
    uint8_t *  elem_dash_ptr1766 = ( (  offset_dash_ptr292 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_308_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  uint8_t   get343 (    struct Slice_11  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail344 ) ( ( (  try_dash_get347 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string187 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   char_dash_u8348 (    struct Char_47  c718 ) {
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

static  struct StrView_20   byte_dash_substr349 (    struct StrView_20  s2174 ,    size_t  from2176 ,    size_t  to2178 ) {
    return ( (struct StrView_20) { .f_contents = ( (  subslice291 ) ( ( (  s2174 ) .f_contents ) ,  (  from2176 ) ,  (  to2178 ) ) ) } );
}

static  struct Maybe_113   next342 (    struct LineIter_341 *  self2392 ) {
    if ( (  cmp151 ( ( ( * (  self2392 ) ) .f_last ) , ( ( ( ( * (  self2392 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_113) { .tag = Maybe_113_None_t } );
    }
    size_t  i2393 = ( ( * (  self2392 ) ) .f_last );
    while ( ( (  cmp151 ( (  i2393 ) , ( ( ( ( * (  self2392 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq175 ( ( (  get343 ) ( ( ( ( * (  self2392 ) ) .f_og ) .f_contents ) ,  (  i2393 ) ) ) , ( (  char_dash_u8348 ) ( ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2393 = (  op_dash_add199 ( (  i2393 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_20  line2394 = ( (  byte_dash_substr349 ) ( ( ( * (  self2392 ) ) .f_og ) ,  ( ( * (  self2392 ) ) .f_last ) ,  (  i2393 ) ) );
    if ( (  cmp151 ( (  i2393 ) , ( ( ( ( * (  self2392 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2393 = (  op_dash_add199 ( (  i2393 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2392 ) .f_last = (  i2393 );
    return ( ( Maybe_113_Just ) ( (  line2394 ) ) );
}

static  struct LineIter_341   into_dash_iter351 (    struct LineIter_341  self2389 ) {
    return (  self2389 );
}

static  struct Maybe_113   head340 (    struct LineIter_341  it1142 ) {
    struct LineIter_341  temp350 = ( (  into_dash_iter351 ) ( (  it1142 ) ) );
    return ( (  next342 ) ( ( &temp350 ) ) );
}

static  struct LineIter_341   lines352 (    struct StrView_20  s2386 ) {
    return ( (struct LineIter_341) { .f_og = (  s2386 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env357 {
    struct Char_47  c2210;
    ;
};

struct envunion358 {
    bool  (*fun) (  struct env357*  ,    struct Char_47  );
    struct env357 env;
};

struct SplitIter_356 {
    struct StrView_20  f_og;
    size_t  f_last;
    struct envunion358  f_fun;
};

struct Drop_355 {
    struct SplitIter_356  field0;
    size_t  field1;
};

static struct Drop_355 Drop_355_Drop (  struct SplitIter_356  field0 ,  size_t  field1 ) {
    return ( struct Drop_355 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_354 {
    struct Drop_355  f_left_dash_it;
    struct FromIter_233  f_right_dash_it;
};

static  struct Zip_354   into_dash_iter359 (    struct Zip_354  self911 ) {
    return (  self911 );
}

static  struct Drop_355   into_dash_iter361 (    struct Drop_355  self845 ) {
    return (  self845 );
}

static  struct Zip_354   zip360 (    struct Drop_355  left922 ,    struct FromIter_233  right924 ) {
    struct Drop_355  left_dash_it925 = ( (  into_dash_iter361 ) ( (  left922 ) ) );
    struct FromIter_233  right_dash_it926 = ( (  into_dash_iter245 ) ( (  right924 ) ) );
    return ( (struct Zip_354) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct SplitIter_356   into_dash_iter363 (    struct SplitIter_356  self2215 ) {
    return (  self2215 );
}

static  struct Drop_355   drop362 (    struct SplitIter_356  iterable852 ,    size_t  i854 ) {
    struct SplitIter_356  it855 = ( (  into_dash_iter363 ) ( (  iterable852 ) ) );
    return ( ( Drop_355_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SplitIter_356   split_dash_by_dash_filter365 (    struct StrView_20  s2203 ,   struct envunion358  fun2205 ) {
    return ( (struct SplitIter_356) { .f_og = (  s2203 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2205 ) } );
}

struct Tuple2_368 {
    struct CharDestructured_172  field0;
    struct CharDestructured_172  field1;
};

static struct Tuple2_368 Tuple2_368_Tuple2 (  struct CharDestructured_172  field0 ,  struct CharDestructured_172  field1 ) {
    return ( struct Tuple2_368 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int64_t   op_dash_add369 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) + (  r186 ) );
}

static  bool   eq371 (    uint32_t  l111 ,    uint32_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  bool   eq370 (    struct Scalar_173  l724 ,    struct Scalar_173  r726 ) {
    return (  eq371 ( ( (  l724 ) .f_value ) , ( (  r726 ) .f_value ) ) );
}

static  bool   eq367 (    struct Char_47  l729 ,    struct Char_47  r731 ) {
    if ( ( !  eq206 ( ( (  l729 ) .f_num_dash_bytes ) , ( (  r731 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_368  dref732 = ( ( Tuple2_368_Tuple2 ) ( ( (  destructure174 ) ( (  l729 ) ) ) ,  ( (  destructure174 ) ( (  r731 ) ) ) ) );
    if ( dref732 .field0.tag == CharDestructured_172_Ref_t && dref732 .field1.tag == CharDestructured_172_Ref_t ) {
        int64_t  i735 = (  from_dash_integral269 ( 0 ) );
        while ( (  cmp151 ( ( (size_t ) (  i735 ) ) , ( ( dref732 .field0 .stuff .CharDestructured_172_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq175 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field0 .stuff .CharDestructured_172_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field1 .stuff .CharDestructured_172_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) ) ) ) {
                return ( false );
            }
            i735 = (  op_dash_add369 ( (  i735 ) , (  from_dash_integral269 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref732 .field0.tag == CharDestructured_172_Scalar_t && dref732 .field1.tag == CharDestructured_172_Scalar_t ) {
            return (  eq370 ( ( dref732 .field0 .stuff .CharDestructured_172_Scalar_s .field0 ) , ( dref732 .field1 .stuff .CharDestructured_172_Scalar_s .field0 ) ) );
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

static  bool   lam366 (   struct env357* env ,    struct Char_47  cc2212 ) {
    return (  eq367 ( (  cc2212 ) , ( env->c2210 ) ) );
}

static  struct SplitIter_356   split_dash_by_dash_each364 (    struct StrView_20  s2208 ,    struct Char_47  c2210 ) {
    struct env357 envinst357 = {
        .c2210 =  c2210 ,
    };
    return ( (  split_dash_by_dash_filter365 ) ( (  s2208 ) ,  ( (struct envunion358){ .fun = (  bool  (*) (  struct env357*  ,    struct Char_47  ) )lam366 , .env =  envinst357 } ) ) );
}

struct Tuple2_374 {
    struct StrView_20  field0;
    int32_t  field1;
};

static struct Tuple2_374 Tuple2_374_Tuple2 (  struct StrView_20  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_374 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_373 {
    enum {
        Maybe_373_None_t,
        Maybe_373_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_374  field0;
        } Maybe_373_Just_s;
    } stuff;
};

static struct Maybe_373 Maybe_373_Just (  struct Tuple2_374  field0 ) {
    return ( struct Maybe_373 ) { .tag = Maybe_373_Just_t, .stuff = { .Maybe_373_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_113   next377 (    struct SplitIter_356 *  self2218 ) {
    if ( (  cmp151 ( ( ( * (  self2218 ) ) .f_last ) , ( ( ( ( * (  self2218 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_113) { .tag = Maybe_113_None_t } );
    }
    size_t  i2219 = ( ( * (  self2218 ) ) .f_last );
    while ( (  cmp151 ( (  i2219 ) , ( ( ( ( * (  self2218 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2220 = ( (  get_dash_ptr326 ) ( ( ( ( * (  self2218 ) ) .f_og ) .f_contents ) ,  (  i2219 ) ) );
        struct Char_47  c2221 = ( (  scan_dash_from_dash_mem190 ) ( (  ptr2220 ) ) );
        struct envunion358  temp378 = ( ( * (  self2218 ) ) .f_fun );
        if ( ( temp378.fun ( &temp378.env ,  (  c2221 ) ) ) ) {
            break;
        }
        i2219 = (  op_dash_add199 ( (  i2219 ) , ( (  next_dash_char191 ) ( (  ptr2220 ) ) ) ) );
    }
    struct StrView_20  line2222 = ( (  byte_dash_substr349 ) ( ( ( * (  self2218 ) ) .f_og ) ,  ( ( * (  self2218 ) ) .f_last ) ,  (  i2219 ) ) );
    i2219 = (  op_dash_add199 ( (  i2219 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2218 ) .f_last = (  i2219 );
    return ( ( Maybe_113_Just ) ( (  line2222 ) ) );
}

static  struct Maybe_113   next376 (    struct Drop_355 *  dref847 ) {
    while ( (  cmp151 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next377 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub270 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next377 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Maybe_373   next375 (    struct Zip_354 *  self914 ) {
    struct Zip_354  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_113  dref916 = ( (  next376 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_113_None_t ) {
            return ( (struct Maybe_373) { .tag = Maybe_373_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_113_Just_t ) {
                struct Maybe_239  dref918 = ( (  next240 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_239_None_t ) {
                    return ( (struct Maybe_373) { .tag = Maybe_373_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_239_Just_t ) {
                        ( (  next376 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next240 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_373_Just ) ( ( ( Tuple2_374_Tuple2 ) ( ( dref916 .stuff .Maybe_113_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_239_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion381 {
    struct List_10  (*fun) (  struct env35*  ,    struct Slice_11  ,    enum CAllocator_8  );
    struct env35 env;
};

static  enum Unit_6   insert383 (   struct env23* env ,    struct List_7 *  list2048 ,    size_t  i2050 ,    struct List_10  elem2052 ) {
    if ( ( (  cmp151 ( (  i2050 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i2050 ) , ( ( * (  list2048 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic219 ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2050 ) ) ) ,  ( (  from_dash_string187 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2048 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq206 ( ( ( * (  list2048 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion24  temp384 = ( (struct envunion24){ .fun = (  enum Unit_6  (*) (  struct env4*  ,    struct List_7 *  ,    struct List_10  ) )add203 , .env =  env->envinst4 } );
        ( temp384.fun ( &temp384.env ,  (  list2048 ) ,  (  elem2052 ) ) );
        return ( Unit_6_Unit );
    }
    struct envunion25  temp385 = ( (struct envunion25){ .fun = (  enum Unit_6  (*) (  struct env1*  ,    struct List_7 *  ) )grow_dash_if_dash_full205 , .env =  env->envinst1 } );
    ( temp385.fun ( &temp385.env ,  (  list2048 ) ) );
    size_t  ii2053 = (  op_dash_sub270 ( ( ( * (  list2048 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp151 ( (  ii2053 ) , (  i2050 ) ) != 0 ) ) {
        ( (  set217 ) ( ( ( * (  list2048 ) ) .f_elements ) ,  (  op_dash_add199 ( (  ii2053 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get288 ) ( (  list2048 ) ,  (  ii2053 ) ) ) ) );
        if ( (  eq206 ( (  ii2053 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2053 = (  op_dash_sub270 ( (  ii2053 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set217 ) ( ( ( * (  list2048 ) ) .f_elements ) ,  (  i2050 ) ,  (  elem2052 ) ) );
    (*  list2048 ) .f_count = (  op_dash_add199 ( ( ( * (  list2048 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   free387 (    struct List_10 *  list2029 ) {
    ( (  free335 ) ( ( ( * (  list2029 ) ) .f_al ) ,  ( ( * (  list2029 ) ) .f_elements ) ) );
    return ( Unit_6_Unit );
}

static  int32_t   add_dash_to_dash_spot287 (   struct env66* env ,    struct TextBuf_75 *  self3603 ,    struct Pos_19  p3605 ,    struct StrView_20  bytes3607 ) {
    enum CAllocator_8  al3608 = ( ( ( * (  self3603 ) ) .f_buf ) .f_al );
    struct List_7 *  buf3609 = ( & ( ( * (  self3603 ) ) .f_buf ) );
    struct List_10  extracted_dash_line_dash_buf3610 = ( (  get288 ) ( (  buf3609 ) ,  ( (  i32_dash_size229 ) ( ( (  p3605 ) .f_line ) ) ) ) );
    struct Slice_11  remaining3611 = ( (  from290 ) ( ( (  to_dash_slice295 ) ( (  extracted_dash_line_dash_buf3610 ) ) ) ,  ( (  i32_dash_size229 ) ( ( (  p3605 ) .f_bi ) ) ) ) );
    struct envunion67  temp297 = ( (struct envunion67){ .fun = (  struct List_10  (*) (  struct env35*  ,    struct Slice_11  ,    enum CAllocator_8  ) )from_dash_iter298 , .env =  env->envinst35 } );
    ( (  set296 ) ( (  buf3609 ) ,  ( (  i32_dash_size229 ) ( ( (  p3605 ) .f_line ) ) ) ,  ( temp297.fun ( &temp297.env ,  ( (  subslice291 ) ( ( (  to_dash_slice295 ) ( (  extracted_dash_line_dash_buf3610 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size229 ) ( ( (  p3605 ) .f_bi ) ) ) ) ) ,  (  al3608 ) ) ) ) );
    struct List_10 *  last_dash_line3612 = ( (  get_dash_ptr289 ) ( (  buf3609 ) ,  ( (  i32_dash_size229 ) ( ( (  p3605 ) .f_line ) ) ) ) );
    struct envunion338  temp337 = ( (struct envunion338){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all301 , .env =  env->envinst30 } );
    ( temp337.fun ( &temp337.env ,  (  last_dash_line3612 ) ,  ( ( (  or_dash_else339 ) ( ( (  head340 ) ( ( (  lines352 ) ( (  bytes3607 ) ) ) ) ) ,  ( (  from_dash_string187 ) ( ( "" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3613 = (  from_dash_integral38 ( 0 ) );
    struct Zip_354  temp353 =  into_dash_iter359 ( ( (  zip360 ) ( ( (  drop362 ) ( ( (  split_dash_by_dash_each364 ) ( (  bytes3607 ) ,  ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_373  __cond372 =  next375 (&temp353);
        if (  __cond372 .tag == 0 ) {
            break;
        }
        struct Tuple2_374  dref3614 =  __cond372 .stuff .Maybe_373_Just_s .field0;
        struct envunion381  temp380 = ( (struct envunion381){ .fun = (  struct List_10  (*) (  struct env35*  ,    struct Slice_11  ,    enum CAllocator_8  ) )from_dash_iter298 , .env =  env->envinst35 } );
        struct List_10  temp379 = ( temp380.fun ( &temp380.env ,  ( ( dref3614 .field0 ) .f_contents ) ,  (  al3608 ) ) );
        struct List_10 *  nuline3617 = ( &temp379 );
        size_t  next_dash_line3618 = ( (  i32_dash_size229 ) ( (  op_dash_add241 ( ( (  p3605 ) .f_line ) , ( dref3614 .field1 ) ) ) ) );
        struct envunion68  temp382 = ( (struct envunion68){ .fun = (  enum Unit_6  (*) (  struct env23*  ,    struct List_7 *  ,    size_t  ,    struct List_10  ) )insert383 , .env =  env->envinst23 } );
        ( temp382.fun ( &temp382.env ,  (  buf3609 ) ,  (  next_dash_line3618 ) ,  ( * (  nuline3617 ) ) ) );
        last_dash_line3612 = ( (  get_dash_ptr289 ) ( (  buf3609 ) ,  (  next_dash_line3618 ) ) );
        lines_dash_added3613 = (  op_dash_add241 ( (  lines_dash_added3613 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    struct envunion69  temp386 = ( (struct envunion69){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all301 , .env =  env->envinst30 } );
    ( temp386.fun ( &temp386.env ,  (  last_dash_line3612 ) ,  (  remaining3611 ) ) );
    ( (  free387 ) ( ( & (  extracted_dash_line_dash_buf3610 ) ) ) );
    return (  lines_dash_added3613 );
}

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_152   cmp390 (    int32_t  l159 ,    int32_t  r161 ) {
    return ( builtin_int32_tcmp( (  l159 ) , (  r161 ) ) );
}

static  enum Ordering_152   cmp389 (    struct Pos_19  l3546 ,    struct Pos_19  r3548 ) {
    enum Ordering_152  dref3549 = ( (  cmp390 ) ( ( (  l3546 ) .f_line ) ,  ( (  r3548 ) .f_line ) ) );
    switch (  dref3549 ) {
        case Ordering_152_EQ : {
            return ( (  cmp390 ) ( ( (  l3546 ) .f_bi ) ,  ( (  r3548 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_152  els3550 =  dref3549;
            return (  els3550 );
            break;
        }
    }
}

static  struct Pos_19   min388 (    struct Pos_19  l1236 ,    struct Pos_19  r1238 ) {
    if ( (  cmp389 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Pos_19   max391 (    struct Pos_19  l1315 ,    struct Pos_19  r1317 ) {
    if ( (  cmp389 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  size_t   size392 (    struct List_10 *  l2127 ) {
    return ( ( * (  l2127 ) ) .f_count );
}

struct StrConcat_398 {
    struct StrConcat_51  field0;
    struct Char_47  field1;
};

static struct StrConcat_398 StrConcat_398_StrConcat (  struct StrConcat_51  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_398 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_397 {
    struct StrConcat_398  field0;
    size_t  field1;
};

static struct StrConcat_397 StrConcat_397_StrConcat (  struct StrConcat_398  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_397 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_396 {
    struct StrConcat_397  field0;
    struct Char_47  field1;
};

static struct StrConcat_396 StrConcat_396_StrConcat (  struct StrConcat_397  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_396 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_401 {
    struct StrView_20  field0;
    struct StrConcat_396  field1;
};

static struct StrConcat_401 StrConcat_401_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_396  field1 ) {
    return ( struct StrConcat_401 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_400 {
    struct StrConcat_401  field0;
    struct Char_47  field1;
};

static struct StrConcat_400 StrConcat_400_StrConcat (  struct StrConcat_401  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_400 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str405 (    struct StrConcat_398  self1503 ) {
    struct StrConcat_398  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str167 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str170 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str404 (    struct StrConcat_397  self1503 ) {
    struct StrConcat_397  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str405 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str168 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str403 (    struct StrConcat_396  self1503 ) {
    struct StrConcat_396  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str404 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str170 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str402 (    struct StrConcat_401  self1503 ) {
    struct StrConcat_401  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str162 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str403 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str399 (    struct StrConcat_400  self1503 ) {
    struct StrConcat_400  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str402 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str170 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   panic395 (    struct StrConcat_396  errmsg1712 ) {
    ( (  print_dash_str399 ) ( ( ( StrConcat_400_StrConcat ) ( ( ( StrConcat_401_StrConcat ) ( ( (  from_dash_string187 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct Drop_407 {
    struct Zip_328  field0;
    size_t  field1;
};

static struct Drop_407 Drop_407_Drop (  struct Zip_328  field0 ,  size_t  field1 ) {
    return ( struct Drop_407 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env408 {
    struct List_10 *  list2056;
    ;
    ;
    size_t  num_dash_elems2061;
    ;
};

struct envunion409 {
    enum Unit_6  (*fun) (  struct env408*  ,    struct Tuple2_323  );
    struct env408 env;
};

static  struct Drop_407   into_dash_iter411 (    struct Drop_407  self845 ) {
    return (  self845 );
}

static  struct Maybe_331   next412 (    struct Drop_407 *  dref847 ) {
    while ( (  cmp151 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next332 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub270 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next332 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_6   for_dash_each406 (    struct Drop_407  iterable1074 ,   struct envunion409  fun1076 ) {
    struct Drop_407  temp410 = ( (  into_dash_iter411 ) ( (  iterable1074 ) ) );
    struct Drop_407 *  it1077 = ( &temp410 );
    while ( ( true ) ) {
        struct Maybe_331  dref1078 = ( (  next412 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_331_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_331_Just_t ) {
                struct envunion409  temp413 = (  fun1076 );
                ( temp413.fun ( &temp413.env ,  ( dref1078 .stuff .Maybe_331_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Drop_407   drop414 (    struct Zip_328  iterable852 ,    size_t  i854 ) {
    struct Zip_328  it855 = ( (  into_dash_iter330 ) ( (  iterable852 ) ) );
    return ( ( Drop_407_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SliceIter_305   into_dash_iter416 (    struct List_10  self2022 ) {
    return ( (  into_dash_iter307 ) ( ( (  subslice291 ) ( ( (  self2022 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2022 ) .f_count ) ) ) ) );
}

static  struct Zip_328   zip415 (    struct List_10  left922 ,    struct FromIter_233  right924 ) {
    struct SliceIter_305  left_dash_it925 = ( (  into_dash_iter416 ) ( (  left922 ) ) );
    struct FromIter_233  right_dash_it926 = ( (  into_dash_iter245 ) ( (  right924 ) ) );
    return ( (struct Zip_328) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_6   set418 (    struct List_10 *  list2015 ,    size_t  i2017 ,    uint8_t  elem2019 ) {
    if ( ( (  cmp151 ( (  i2017 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i2017 ) , ( ( * (  list2015 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic219 ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2017 ) ) ) ,  ( (  from_dash_string187 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2015 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set325 ) ( ( ( * (  list2015 ) ) .f_elements ) ,  (  i2017 ) ,  (  elem2019 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam417 (   struct env408* env ,    struct Tuple2_323  dref2062 ) {
    return ( (  set418 ) ( ( env->list2056 ) ,  (  op_dash_sub270 ( ( (  i32_dash_size229 ) ( ( dref2062 .field1 ) ) ) , ( env->num_dash_elems2061 ) ) ) ,  ( dref2062 .field0 ) ) );
}

struct StrConcat_421 {
    struct StrConcat_221  field0;
    struct StrView_20  field1;
};

static struct StrConcat_421 StrConcat_421_StrConcat (  struct StrConcat_221  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_421 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_424 {
    struct StrView_20  field0;
    struct StrConcat_421  field1;
};

static struct StrConcat_424 StrConcat_424_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_421  field1 ) {
    return ( struct StrConcat_424 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_423 {
    struct StrConcat_424  field0;
    struct Char_47  field1;
};

static struct StrConcat_423 StrConcat_423_StrConcat (  struct StrConcat_424  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_423 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str426 (    struct StrConcat_421  self1503 ) {
    struct StrConcat_421  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str227 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str162 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str425 (    struct StrConcat_424  self1503 ) {
    struct StrConcat_424  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str162 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str426 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str422 (    struct StrConcat_423  self1503 ) {
    struct StrConcat_423  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str425 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str170 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   panic420 (    struct StrConcat_421  errmsg1712 ) {
    ( (  print_dash_str422 ) ( ( ( StrConcat_423_StrConcat ) ( ( ( StrConcat_424_StrConcat ) ( ( (  from_dash_string187 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct env428 {
    ;
    struct Slice_11  dest1853;
    ;
};

struct envunion429 {
    enum Unit_6  (*fun) (  struct env428*  ,    struct Tuple2_323  );
    struct env428 env;
};

static  enum Unit_6   for_dash_each427 (    struct Zip_328  iterable1074 ,   struct envunion429  fun1076 ) {
    struct Zip_328  temp430 = ( (  into_dash_iter330 ) ( (  iterable1074 ) ) );
    struct Zip_328 *  it1077 = ( &temp430 );
    while ( ( true ) ) {
        struct Maybe_331  dref1078 = ( (  next332 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_331_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_331_Just_t ) {
                struct envunion429  temp431 = (  fun1076 );
                ( temp431.fun ( &temp431.env ,  ( dref1078 .stuff .Maybe_331_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam432 (   struct env428* env ,    struct Tuple2_323  dref1854 ) {
    return ( (  set325 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size229 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_6   copy_dash_to419 (    struct Slice_11  src1851 ,    struct Slice_11  dest1853 ) {
    if ( (  cmp151 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic420 ) ( ( ( StrConcat_421_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string187 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string187 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env428 envinst428 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each427 ) ( ( (  zip334 ) ( (  src1851 ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion429){ .fun = (  enum Unit_6  (*) (  struct env428*  ,    struct Tuple2_323  ) )lam432 , .env =  envinst428 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   remove_dash_range394 (   struct env27* env ,    struct List_10 *  list2056 ,    size_t  from2058 ,    size_t  to_dash_excl2060 ) {
    if ( (  cmp151 ( (  to_dash_excl2060 ) , (  from2058 ) ) == 0 ) ) {
        ( (  panic395 ) ( ( ( StrConcat_396_StrConcat ) ( ( ( StrConcat_397_StrConcat ) ( ( ( StrConcat_398_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2058 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2060 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp151 ( (  from2058 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic219 ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2058 ) ) ) ,  ( (  from_dash_string187 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2056 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp151 ( (  to_dash_excl2060 ) , ( ( * (  list2056 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic219 ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2060 ) ) ) ,  ( (  from_dash_string187 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2056 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2061 = (  op_dash_sub270 ( (  to_dash_excl2060 ) , (  from2058 ) ) );
    struct env408 envinst408 = {
        .list2056 =  list2056 ,
        .num_dash_elems2061 =  num_dash_elems2061 ,
    };
    ( (  for_dash_each406 ) ( ( (  drop414 ) ( ( (  zip415 ) ( ( * (  list2056 ) ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  op_dash_add199 ( (  from2058 ) , (  num_dash_elems2061 ) ) ) ) ) ,  ( (struct envunion409){ .fun = (  enum Unit_6  (*) (  struct env408*  ,    struct Tuple2_323  ) )lam417 , .env =  envinst408 } ) ) );
    (*  list2056 ) .f_count = (  op_dash_sub270 ( ( ( * (  list2056 ) ) .f_count ) , (  num_dash_elems2061 ) ) );
    size_t  capacity2065 = ( ( ( * (  list2056 ) ) .f_elements ) .f_count );
    if ( (  cmp151 ( (  op_dash_mul212 ( ( ( * (  list2056 ) ) .f_count ) , ( env->shrink_dash_factor2032 ) ) ) , (  capacity2065 ) ) == 0 ) ) {
        if ( (  eq206 ( ( ( * (  list2056 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free335 ) ( ( ( * (  list2056 ) ) .f_al ) ,  ( ( * (  list2056 ) ) .f_elements ) ) );
            (*  list2056 ) .f_elements = ( (  empty251 ) ( ) );
            return ( Unit_6_Unit );
        }
        size_t  new_dash_size2066 = (  op_dash_mul212 ( (  op_dash_add199 ( (  op_dash_div178 ( ( ( * (  list2056 ) ) .f_count ) , ( env->shrink_dash_factor2032 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2032 ) ) );
        struct Slice_11  new_dash_slice2067 = ( (  allocate316 ) ( ( ( * (  list2056 ) ) .f_al ) ,  (  new_dash_size2066 ) ) );
        ( (  copy_dash_to419 ) ( ( (  subslice291 ) ( ( ( * (  list2056 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2056 ) ) .f_count ) ) ) ,  (  new_dash_slice2067 ) ) );
        ( (  free335 ) ( ( ( * (  list2056 ) ) .f_al ) ,  ( ( * (  list2056 ) ) .f_elements ) ) );
        (*  list2056 ) .f_elements = (  new_dash_slice2067 );
    }
    return ( Unit_6_Unit );
}

struct envunion434 {
    int32_t  (*fun) (  struct env66*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct StrView_20  );
    struct env66 env;
};

static  enum Unit_6   trim435 (    struct List_10 *  l2109 ,    size_t  new_dash_count2111 ) {
    (*  l2109 ) .f_count = ( (  min294 ) ( (  new_dash_count2111 ) ,  ( ( * (  l2109 ) ) .f_count ) ) );
    return ( Unit_6_Unit );
}

static  int32_t   min436 (    int32_t  l1236 ,    int32_t  r1238 ) {
    if ( (  cmp390 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

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
    return ( ( Maybe_149_Just ) ( ( (  get288 ) ( (  list2010 ) ,  (  i2012 ) ) ) ) );
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
    size_t  count1788 = (  op_dash_sub270 ( ( (  min294 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
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
    return ( (  set296 ) ( ( env->list2056 ) ,  (  op_dash_sub270 ( ( (  i32_dash_size229 ) ( ( dref2062 .field1 ) ) ) , ( env->num_dash_elems2061 ) ) ) ,  ( dref2062 .field0 ) ) );
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
        ( (  panic420 ) ( ( ( StrConcat_421_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string187 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string187 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env465 envinst465 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each464 ) ( ( (  zip243 ) ( (  src1851 ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion466){ .fun = (  enum Unit_6  (*) (  struct env465*  ,    struct Tuple2_215  ) )lam469 , .env =  envinst465 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   remove_dash_range449 (   struct env26* env ,    struct List_7 *  list2056 ,    size_t  from2058 ,    size_t  to_dash_excl2060 ) {
    if ( (  cmp151 ( (  to_dash_excl2060 ) , (  from2058 ) ) == 0 ) ) {
        ( (  panic395 ) ( ( ( StrConcat_396_StrConcat ) ( ( ( StrConcat_397_StrConcat ) ( ( ( StrConcat_398_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2058 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2060 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
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

static  enum Unit_6   change_dash_no_dash_action280 (   struct env70* env ,    struct TextBuf_75 *  self3621 ,    struct Pos_19  from3623 ,    struct Pos_19  to3625 ,    struct StrView_20  bytes3627 ) {
    if ( (  eq281 ( (  to3625 ) , (  from3623 ) ) ) ) {
        enum CAllocator_8  al3628 = ( ( ( * (  self3621 ) ) .f_buf ) .f_al );
        if ( ( (  eq206 ( ( (  size283 ) ( ( & ( ( * (  self3621 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size229 ) ( ( (  from3623 ) .f_line ) ) ) ) ) && (  eq282 ( ( (  from3623 ) .f_bi ) , (  from_dash_integral38 ( 0 ) ) ) ) ) ) {
            struct envunion73  temp284 = ( (struct envunion73){ .fun = (  enum Unit_6  (*) (  struct env4*  ,    struct List_7 *  ,    struct List_10  ) )add203 , .env =  env->envinst4 } );
            ( temp284.fun ( &temp284.env ,  ( & ( ( * (  self3621 ) ) .f_buf ) ) ,  ( (  mk250 ) ( (  al3628 ) ) ) ) );
        }
        struct envunion286  temp285 = ( (struct envunion286){ .fun = (  int32_t  (*) (  struct env66*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct StrView_20  ) )add_dash_to_dash_spot287 , .env =  env->envinst66 } );
        ( temp285.fun ( &temp285.env ,  (  self3621 ) ,  (  from3623 ) ,  (  bytes3627 ) ) );
    } else {
        struct Pos_19  from3629 = ( (  min388 ) ( (  from3623 ) ,  (  to3625 ) ) );
        struct Pos_19  to3630 = ( (  max391 ) ( (  from3629 ) ,  (  to3625 ) ) );
        struct List_7 *  lines_dash_buf3631 = ( & ( ( * (  self3621 ) ) .f_buf ) );
        struct List_10 *  first_dash_line3632 = ( (  get_dash_ptr289 ) ( (  lines_dash_buf3631 ) ,  ( (  i32_dash_size229 ) ( ( (  from3629 ) .f_line ) ) ) ) );
        if ( ( (  eq282 ( ( (  from3629 ) .f_line ) , ( (  to3630 ) .f_line ) ) ) && (  cmp390 ( ( (  to3630 ) .f_bi ) , (  op_dash_add241 ( ( (  size_dash_i32163 ) ( ( (  size392 ) ( (  first_dash_line3632 ) ) ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion72  temp393 = ( (struct envunion72){ .fun = (  enum Unit_6  (*) (  struct env27*  ,    struct List_10 *  ,    size_t  ,    size_t  ) )remove_dash_range394 , .env =  env->envinst27 } );
            ( temp393.fun ( &temp393.env ,  (  first_dash_line3632 ) ,  ( (  i32_dash_size229 ) ( ( (  from3629 ) .f_bi ) ) ) ,  ( (  i32_dash_size229 ) ( ( (  to3630 ) .f_bi ) ) ) ) );
            struct envunion434  temp433 = ( (struct envunion434){ .fun = (  int32_t  (*) (  struct env66*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct StrView_20  ) )add_dash_to_dash_spot287 , .env =  env->envinst66 } );
            ( temp433.fun ( &temp433.env ,  (  self3621 ) ,  (  from3629 ) ,  (  bytes3627 ) ) );
        } else {
            ( (  trim435 ) ( (  first_dash_line3632 ) ,  ( (  i32_dash_size229 ) ( ( (  from3629 ) .f_bi ) ) ) ) );
            struct List_10 *  last_dash_line3633 = ( (  get_dash_ptr289 ) ( (  lines_dash_buf3631 ) ,  ( (  i32_dash_size229 ) ( ( (  to3630 ) .f_line ) ) ) ) );
            to3630 .f_bi = ( (  min436 ) ( ( (  to3630 ) .f_bi ) ,  (  op_dash_add241 ( ( (  size_dash_i32163 ) ( ( (  size392 ) ( (  last_dash_line3633 ) ) ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
            if ( (  eq282 ( ( (  to3630 ) .f_bi ) , (  op_dash_add241 ( ( (  size_dash_i32163 ) ( ( (  size392 ) ( (  last_dash_line3633 ) ) ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ) {
                to3630 .f_line = (  op_dash_add241 ( ( (  to3630 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) );
                to3630 .f_bi = (  from_dash_integral38 ( 0 ) );
            }
            struct envunion74  temp437 = ( (struct envunion74){ .fun = (  int32_t  (*) (  struct env66*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct StrView_20  ) )add_dash_to_dash_spot287 , .env =  env->envinst66 } );
            int32_t  lines_dash_added3634 = ( temp437.fun ( &temp437.env ,  (  self3621 ) ,  (  from3629 ) ,  (  bytes3627 ) ) );
            to3630 .f_line = (  op_dash_add241 ( ( (  to3630 ) .f_line ) , (  lines_dash_added3634 ) ) );
            from3629 .f_line = (  op_dash_add241 ( ( (  from3629 ) .f_line ) , (  lines_dash_added3634 ) ) );
            struct Slice_11  last_dash_line3635 = ( (  or_dash_else438 ) ( ( (  fmap_dash_maybe440 ) ( ( (  try_dash_get441 ) ( (  lines_dash_buf3631 ) ,  ( (  i32_dash_size229 ) ( ( (  to3630 ) .f_line ) ) ) ) ) ,  (  to_dash_slice295 ) ) ) ,  ( (  empty251 ) ( ) ) ) );
            struct envunion77  temp442 = ( (struct envunion77){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all301 , .env =  env->envinst30 } );
            ( temp442.fun ( &temp442.env ,  (  first_dash_line3632 ) ,  ( (  from290 ) ( (  last_dash_line3635 ) ,  ( (  i32_dash_size229 ) ( ( (  to3630 ) .f_bi ) ) ) ) ) ) );
            ( (  assert443 ) ( (  cmp390 ( ( (  to3630 ) .f_line ) , ( (  from3629 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string187 ) ( ( "there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion71  temp448 = ( (struct envunion71){ .fun = (  enum Unit_6  (*) (  struct env26*  ,    struct List_7 *  ,    size_t  ,    size_t  ) )remove_dash_range449 , .env =  env->envinst26 } );
            ( temp448.fun ( &temp448.env ,  ( & ( ( * (  self3621 ) ) .f_buf ) ) ,  ( (  i32_dash_size229 ) ( (  op_dash_add241 ( ( (  from3629 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  op_dash_add199 ( ( (  i32_dash_size229 ) ( ( (  to3630 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_6_Unit );
}

static  struct Pos_19   mk470 (    int32_t  line3553 ,    int32_t  bi3555 ) {
    return ( (struct Pos_19) { .f_line = (  line3553 ) , .f_bi = (  bi3555 ) } );
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
    struct Slice_11  file_dash_buf2912 = ( ( (  allocate316 ) ( (  al2909 ) ,  (  op_dash_add199 ( ( (  i32_dash_size229 ) ( (  file_dash_size2911 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2912 ) .f_ptr ) ,  (  file_dash_size2911 ) ,  (  from_dash_integral38 ( 1 ) ) ,  (  file2910 ) ) );
    ( (  set325 ) ( (  file_dash_buf2912 ) ,  ( (  i32_dash_size229 ) ( (  file_dash_size2911 ) ) ) ,  ( (  char_dash_u8348 ) ( ( (  nullchar495 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2910 ) ) );
    struct StrView_20  str2913 = ( (struct StrView_20) { .f_contents = ( (  subslice291 ) ( (  file_dash_buf2912 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub270 ( ( (  file_dash_buf2912 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_113_Just ) ( (  str2913 ) ) );
}

static  struct StrView_20   read_dash_contents471 (    const char*  filename2916 ,    enum CAllocator_8  al2918 ) {
    return ( (  or_dash_fail472 ) ( ( (  try_dash_read_dash_contents485 ) ( (  filename2916 ) ,  (  al2918 ) ) ) ,  ( ( StrConcat_473_StrConcat ) ( ( ( StrConcat_474_StrConcat ) ( ( (  from_dash_string187 ) ( ( "could not open file " ) ,  ( 20 ) ) ) ,  (  filename2916 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "!" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Pane_110   mk497 (    enum CAllocator_8  al3737 ,    struct TextBuf_75 *  buf3739 ) {
    return ( (struct Pane_110) { .f_buf = (  buf3739 ) , .f_cursor = ( (  mk470 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral38 ( 0 ) ) , .f_sel = ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) , .f_mode = ( Mode_111_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_112) { .f_screen_dash_top = (  from_dash_integral38 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral38 ( 0 ) ) } ) } );
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
    return ( (  offset_dash_ptr292 ) ( (  p2242 ) ,  ( (int64_t ) (  i2241 ) ) ) );
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
    uint8_t *  char_dash_ptr1375 = ( ( (  offset_dash_ptr292 ) ( ( (  cast189 ) ( ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64228 ) ( ( ( * (  self1374 ) ) .f_i ) ) ) ) ) );
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
        if ( (  cmp390 ( ( dref892 .field1 ) , ( dref892 .field0 .field1 ) ) == 2 ) ) {
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
            struct Key_125  field0;
        } InputEvent_689_Key_s;
        struct {
            struct MouseEvent_690  field0;
        } InputEvent_689_Mouse_s;
    } stuff;
};

static struct InputEvent_689 InputEvent_689_Key (  struct Key_125  field0 ) {
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
    struct Tui_58 *  tui4026;
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
    if ( (  cmp390 ( ( ( poll ) ( ( (  cast_dash_ptr707 ) ( ( & (  pfd3274 ) ) ) ) ,  (  from_dash_integral38 ( 1 ) ) ,  (  timeout_dash_ms3273 ) ) ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_704) { .tag = Maybe_704_None_t } );
    }
    char  c3275 = ( ( (  zeroed708 ) ( ) ) );
    if ( (  cmp390 ( ( ( read ) ( ( (  stdin_dash_fileno506 ) ( ) ) ,  ( (  cast_dash_ptr710 ) ( ( & (  c3275 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
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

static  uint8_t   or_dash_fail735 (    struct Maybe_308  x1725 ,    struct StrConcat_736  errmsg1727 ) {
    struct Maybe_308  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_308_None_t ) {
        ( (  panic738 ) ( (  errmsg1727 ) ) );
        return ( (  undefined345 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_308_Just_t ) {
            return ( dref1728 .stuff .Maybe_308_Just_s .field0 );
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
    return ( (  cmp192 ) ( ( (  char_dash_u8348 ) ( (  l744 ) ) ) ,  ( (  char_dash_u8348 ) ( (  r746 ) ) ) ) );
}

static  uint8_t   op_dash_sub748 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  uint8_t   op_dash_add749 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  struct Maybe_308   hex_dash_digit745 (    struct Char_47  c2533 ) {
    if ( ( (  cmp746 ( (  c2533 ) , ( (  from_dash_charlike188 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp746 ( (  c2533 ) , ( (  from_dash_charlike188 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_308_Just ) ( (  op_dash_sub748 ( ( (  char_dash_u8348 ) ( (  c2533 ) ) ) , ( (  char_dash_u8348 ) ( ( (  from_dash_charlike188 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp746 ( (  c2533 ) , ( (  from_dash_charlike188 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp746 ( (  c2533 ) , ( (  from_dash_charlike188 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_308_Just ) ( (  op_dash_add749 ( (  op_dash_sub748 ( ( (  char_dash_u8348 ) ( (  c2533 ) ) ) , ( (  char_dash_u8348 ) ( ( (  from_dash_charlike188 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral179 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp746 ( (  c2533 ) , ( (  from_dash_charlike188 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp746 ( (  c2533 ) , ( (  from_dash_charlike188 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_308_Just ) ( (  op_dash_add749 ( (  op_dash_sub748 ( ( (  char_dash_u8348 ) ( (  c2533 ) ) ) , ( (  char_dash_u8348 ) ( ( (  from_dash_charlike188 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral179 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
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
    return ( (  offset_dash_ptr292 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
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
    return ( (struct StrView_20) { .f_contents = ( (  subslice291 ) ( ( (  s2163 ) .f_contents ) ,  (  from_dash_bs2168 ) ,  (  to_dash_bs2170 ) ) ) } );
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
    return ( (  cmp192 ( ( (  char_dash_u8348 ) ( (  c2439 ) ) ) , ( (  char_dash_u8348 ) ( ( (  from_dash_charlike188 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp192 ( ( (  char_dash_u8348 ) ( (  c2439 ) ) ) , ( (  char_dash_u8348 ) ( ( (  from_dash_charlike188 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
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
        return ( ( Maybe_239_Just ) ( ( (  u8_dash_i32819 ) ( (  op_dash_sub748 ( ( (  char_dash_u8348 ) ( (  c2442 ) ) ) , ( (  char_dash_u8348 ) ( ( (  from_dash_charlike188 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
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
                    return ( ( Maybe_787_Just ) ( (  op_dash_add369 ( (  op_dash_mul197 ( ( dref2451 .stuff .Maybe_787_Just_s .field0 ) , (  from_dash_integral269 ( 10 ) ) ) ) , ( (  i32_dash_i64827 ) ( ( dref2453 .stuff .Maybe_239_Just_s .field0 ) ) ) ) ) ) );
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
    if ( (  cmp390 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
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
            return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_Up_t } ) ) ) ) );
        }
        if ( (  eq753 ( (  last3319 ) , ( (  from_dash_charlike754 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_Down_t } ) ) ) ) );
        }
        if ( (  eq753 ( (  last3319 ) , ( (  from_dash_charlike754 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_Right_t } ) ) ) ) );
        }
        if ( (  eq753 ( (  last3319 ) , ( (  from_dash_charlike754 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_Left_t } ) ) ) ) );
        }
        if ( (  eq753 ( (  last3319 ) , ( (  from_dash_charlike754 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_Home_t } ) ) ) ) );
        }
        if ( (  eq753 ( (  last3319 ) , ( (  from_dash_charlike754 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_End_t } ) ) ) ) );
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
                return ( {  int32_t  dref3330 = ( (  i64_dash_i32829 ) ( ( dref3328 .stuff .Maybe_787_Just_s .field0 ) ) ) ;  dref3330 == 1 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_Home_t } ) ) ) ) ) :  dref3330 == 2 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_Insert_t } ) ) ) ) ) :  dref3330 == 3 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_Delete_t } ) ) ) ) ) :  dref3330 == 4 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_End_t } ) ) ) ) ) :  dref3330 == 5 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_PageUp_t } ) ) ) ) ) :  dref3330 == 6 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_PageDown_t } ) ) ) ) ) :  dref3330 == 15 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_F5_t } ) ) ) ) ) :  dref3330 == 17 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_F6_t } ) ) ) ) ) :  dref3330 == 18 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_F7_t } ) ) ) ) ) :  dref3330 == 19 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_F8_t } ) ) ) ) ) :  dref3330 == 20 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_F9_t } ) ) ) ) ) :  dref3330 == 21 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_F10_t } ) ) ) ) ) :  dref3330 == 23 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_F11_t } ) ) ) ) ) :  dref3330 == 24 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_F12_t } ) ) ) ) ) : ( (struct Maybe_688) { .tag = Maybe_688_None_t } ) ; } );
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
    size_t  count1788 = (  op_dash_sub270 ( ( (  min294 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
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
            struct Key_125  field0;
        } Maybe_894_Just_s;
    } stuff;
};

static struct Maybe_894 Maybe_894_Just (  struct Key_125  field0 ) {
    return ( struct Maybe_894 ) { .tag = Maybe_894_Just_t, .stuff = { .Maybe_894_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_894   parse_dash_ss3895 (    char  c3315 ) {
    if ( (  eq753 ( (  c3315 ) , ( (  from_dash_charlike754 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_894_Just ) ( ( (struct Key_125) { .tag = Key_125_Up_t } ) ) );
    }
    if ( (  eq753 ( (  c3315 ) , ( (  from_dash_charlike754 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_894_Just ) ( ( (struct Key_125) { .tag = Key_125_Down_t } ) ) );
    }
    if ( (  eq753 ( (  c3315 ) , ( (  from_dash_charlike754 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_894_Just ) ( ( (struct Key_125) { .tag = Key_125_Right_t } ) ) );
    }
    if ( (  eq753 ( (  c3315 ) , ( (  from_dash_charlike754 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_894_Just ) ( ( (struct Key_125) { .tag = Key_125_Left_t } ) ) );
    }
    if ( (  eq753 ( (  c3315 ) , ( (  from_dash_charlike754 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_894_Just ) ( ( (struct Key_125) { .tag = Key_125_Home_t } ) ) );
    }
    if ( (  eq753 ( (  c3315 ) , ( (  from_dash_charlike754 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_894_Just ) ( ( (struct Key_125) { .tag = Key_125_End_t } ) ) );
    }
    if ( (  eq753 ( (  c3315 ) , ( (  from_dash_charlike754 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_894_Just ) ( ( (struct Key_125) { .tag = Key_125_F1_t } ) ) );
    }
    if ( (  eq753 ( (  c3315 ) , ( (  from_dash_charlike754 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_894_Just ) ( ( (struct Key_125) { .tag = Key_125_F2_t } ) ) );
    }
    if ( (  eq753 ( (  c3315 ) , ( (  from_dash_charlike754 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_894_Just ) ( ( (struct Key_125) { .tag = Key_125_F3_t } ) ) );
    }
    if ( (  eq753 ( (  c3315 ) , ( (  from_dash_charlike754 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_894_Just ) ( ( (struct Key_125) { .tag = Key_125_F4_t } ) ) );
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
        return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_Enter_t } ) ) ) ) );
    }
    if ( (  eq175 ( ( (  ascii_dash_u8712 ) ( ( * (  ch3332 ) ) ) ) , (  from_dash_integral179 ( 127 ) ) ) ) ) {
        return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp192 ( ( (  ascii_dash_u8712 ) ( ( * (  ch3332 ) ) ) ) , (  from_dash_integral179 ( 27 ) ) ) == 0 ) && ( !  eq175 ( ( (  ascii_dash_u8712 ) ( ( * (  ch3332 ) ) ) ) , (  from_dash_integral179 ( 9 ) ) ) ) ) ) {
        char  letter3335 = ( (  u8_dash_ascii713 ) ( ( (  u32_dash_u8185 ) ( ( (  u32_dash_or524 ) ( ( (  u8_dash_u32714 ) ( ( (  ascii_dash_u8712 ) ( ( * (  ch3332 ) ) ) ) ) ) ,  ( (  from_dash_hex718 ) ( ( (  from_dash_string187 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( ( Key_125_Ctrl ) ( (  letter3335 ) ) ) ) ) ) );
    }
    if ( ( !  eq175 ( ( (  ascii_dash_u8712 ) ( ( * (  ch3332 ) ) ) ) , (  from_dash_integral179 ( 27 ) ) ) ) ) {
        if ( (  cmp192 ( ( (  ascii_dash_u8712 ) ( ( * (  ch3332 ) ) ) ) , (  from_dash_integral179 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key700 ) ( ) );
        } else {
            return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( ( Key_125_Char ) ( ( * (  ch3332 ) ) ) ) ) ) ) );
        }
    }
    char  temp752 = ( (  undefined702 ) ( ) );
    char *  ch23336 = ( &temp752 );
    struct Maybe_704  dref3337 = ( (  read_dash_byte705 ) ( (  from_dash_integral38 ( 50 ) ) ) );
    if ( dref3337.tag == Maybe_704_None_t ) {
        return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_Escape_t } ) ) ) ) );
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
        while ( (  cmp390 ( (  slen3340 ) , (  from_dash_integral38 ( 31 ) ) ) == 0 ) ) {
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
            return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_Escape_t } ) ) ) ) );
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
    return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_125) { .tag = Key_125_Escape_t } ) ) ) ) );
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
    return ( temp696.fun ( &temp696.env ,  ( env->tui4026 ) ) );
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
    struct Editor_109 *  ed3970;
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
    ( (  free335 ) ( (  al2160 ) ,  ( (struct Slice_11) { .f_ptr = ( ( (  s2158 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam904 (   struct env901* env ,    struct StrView_20  msg3972 ) {
    ( (  free905 ) ( (  msg3972 ) ,  ( ( * ( env->ed3970 ) ) .f_al ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   reset_dash_msg899 (    struct Editor_109 *  ed3970 ) {
    struct env901 envinst901 = {
        .ed3970 =  ed3970 ,
    };
    ( (  if_dash_just900 ) ( ( ( * (  ed3970 ) ) .f_msg ) ,  ( (struct envunion902){ .fun = (  enum Unit_6  (*) (  struct env901*  ,    struct StrView_20  ) )lam904 , .env =  envinst901 } ) ) );
    (*  ed3970 ) .f_msg = ( (struct Maybe_113) { .tag = Maybe_113_None_t } );
    return ( Unit_6_Unit );
}

struct envunion907 {
    enum Unit_6  (*fun) (  struct env120*  ,    struct Editor_109 *  ,    struct Key_125  );
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

static  bool   eq914 (    enum CursorMovement_913  l3838 ,    enum CursorMovement_913  r3840 ) {
    return ( {  struct Tuple2_915  dref3841 = ( ( Tuple2_915_Tuple2 ) ( (  l3838 ) ,  (  r3840 ) ) ) ;  dref3841 .field0 == CursorMovement_913_NoChanges &&  dref3841 .field1 == CursorMovement_913_NoChanges ? ( true ) :  dref3841 .field0 == CursorMovement_913_UpdateVI &&  dref3841 .field1 == CursorMovement_913_UpdateVI ? ( true ) :  dref3841 .field0 == CursorMovement_913_OverrideSelect &&  dref3841 .field1 == CursorMovement_913_OverrideSelect ? ( true ) : ( false ) ; } );
}

static  struct StrView_20   from_dash_bytes919 (    struct Slice_11  sl2143 ) {
    return ( (struct StrView_20) { .f_contents = (  sl2143 ) } );
}

static  struct StrView_20   line918 (    struct TextBuf_75 *  self3579 ,    int32_t  li3581 ) {
    return ( (  from_dash_bytes919 ) ( ( (  to_dash_slice295 ) ( ( (  get288 ) ( ( & ( ( * (  self3579 ) ) .f_buf ) ) ,  ( (  i32_dash_size229 ) ( (  li3581 ) ) ) ) ) ) ) ) );
}

static  int32_t   maybe922 (    struct Maybe_113  x1282 ,    int32_t (*  fun1284 )(    struct StrView_20  ) ,    int32_t  default1286 ) {
    return ( {  struct Maybe_113  dref1287 = (  x1282 ) ; dref1287.tag == Maybe_113_Just_t ? ( (  fun1284 ) ( ( dref1287 .stuff .Maybe_113_Just_s .field0 ) ) ) : (  default1286 ) ; } );
}

static  struct Maybe_113   char_dash_replacement923 (    struct Char_47  c3742 ) {
    if ( (  eq367 ( (  c3742 ) , ( (  from_dash_charlike188 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
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

static  int32_t   lam924 (    struct StrView_20  s3747 ) {
    return ( (  size_dash_i32163 ) ( ( (  count925 ) ( ( (  chars575 ) ( (  s3747 ) ) ) ) ) ) );
}

static  int32_t   max931 (    int32_t  l1315 ,    int32_t  r1317 ) {
    if ( (  cmp390 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
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

static  int32_t   char_dash_screen_dash_width921 (    struct Char_47  c3745 ) {
    return ( (  maybe922 ) ( ( (  char_dash_replacement923 ) ( (  c3745 ) ) ) ,  (  lam924 ) ,  ( (  rendered_dash_wcwidth930 ) ( (  c3745 ) ) ) ) );
}

static  int32_t   pos_dash_vi916 (    struct TextBuf_75 *  self3761 ,    struct Pos_19  pos3763 ) {
    int32_t  bi3764 = ( (  from_dash_integral38 ( 0 ) ) );
    int32_t  vi3765 = (  from_dash_integral38 ( 0 ) );
    struct StrViewIter_570  temp917 =  into_dash_iter572 ( ( (  chars575 ) ( ( (  line918 ) ( (  self3761 ) ,  ( (  pos3763 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_573  __cond920 =  next574 (&temp917);
        if (  __cond920 .tag == 0 ) {
            break;
        }
        struct Char_47  c3767 =  __cond920 .stuff .Maybe_573_Just_s .field0;
        bi3764 = (  op_dash_add241 ( (  bi3764 ) , ( (  size_dash_i32163 ) ( ( (  c3767 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp390 ( ( (  pos3763 ) .f_bi ) , (  bi3764 ) ) == 0 ) ) {
            break;
        }
        vi3765 = (  op_dash_add241 ( (  vi3765 ) , ( (  char_dash_screen_dash_width921 ) ( (  c3767 ) ) ) ) );
    }
    return (  vi3765 );
}

struct Tuple2_949 {
    enum Mode_111  field0;
    enum Mode_111  field1;
};

static struct Tuple2_949 Tuple2_949_Tuple2 (  enum Mode_111  field0 ,  enum Mode_111  field1 ) {
    return ( struct Tuple2_949 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq948 (    enum Mode_111  l3725 ,    enum Mode_111  r3727 ) {
    return ( {  struct Tuple2_949  dref3728 = ( ( Tuple2_949_Tuple2 ) ( (  l3725 ) ,  (  r3727 ) ) ) ;  dref3728 .field0 == Mode_111_Normal &&  dref3728 .field1 == Mode_111_Normal ? ( true ) :  dref3728 .field0 == Mode_111_Insert &&  dref3728 .field1 == Mode_111_Insert ? ( true ) :  dref3728 .field0 == Mode_111_Select &&  dref3728 .field1 == Mode_111_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_6   set_dash_sel947 (    struct Pane_110 *  self3832 ,    struct Maybe_22  sel3834 ) {
    if ( ( !  eq948 ( ( ( * (  self3832 ) ) .f_mode ) , ( Mode_111_Select ) ) ) ) {
        (*  self3832 ) .f_sel = (  sel3834 );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_cursors912 (    struct Pane_110 *  self3844 ,    struct Pos_19  cur3846 ,    struct Maybe_22  sel3848 ,    enum CursorMovement_913  cursor_dash_movement_dash_type3850 ) {
    if ( ( ( !  eq914 ( (  cursor_dash_movement_dash_type3850 ) , ( CursorMovement_913_NoChanges ) ) ) && ( !  eq282 ( ( (  cur3846 ) .f_bi ) , ( ( ( * (  self3844 ) ) .f_cursor ) .f_bi ) ) ) ) ) {
        (*  self3844 ) .f_vi = ( (  pos_dash_vi916 ) ( ( ( * (  self3844 ) ) .f_buf ) ,  (  cur3846 ) ) );
    }
    (*  self3844 ) .f_cursor = (  cur3846 );
    if ( ( !  eq914 ( (  cursor_dash_movement_dash_type3850 ) , ( CursorMovement_913_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel947 ) ( (  self3844 ) ,  (  sel3848 ) ) );
    } else {
        (*  self3844 ) .f_sel = (  sel3848 );
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
    return (  op_dash_add199 ( ( (  sync_dash_char954 ) ( ( (  offset_dash_ptr292 ) ( (  p697 ) ,  (  op_dash_neg877 ( (  from_dash_integral269 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_19   left_dash_pos950 (    struct TextBuf_75 *  self3595 ,    struct Pos_19  pos3597 ) {
    if ( (  eq281 ( (  pos3597 ) , ( (  mk470 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk470 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    }
    if ( (  eq282 ( ( (  pos3597 ) .f_bi ) , (  from_dash_integral38 ( 0 ) ) ) ) ) {
        ( (  assert443 ) ( (  cmp390 ( ( (  pos3597 ) .f_line ) , (  from_dash_integral38 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string187 ) ( ( "previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk470 ) ( (  op_dash_sub779 ( ( (  pos3597 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  ( (  size_dash_i32163 ) ( ( (  num_dash_bytes951 ) ( ( (  line918 ) ( (  self3595 ) ,  (  op_dash_sub779 ( ( (  pos3597 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_20  line3598 = ( (  line918 ) ( (  self3595 ) ,  ( (  pos3597 ) .f_line ) ) );
    size_t  pos_dash_bi3599 = ( (  clamp952 ) ( ( (  i32_dash_size229 ) ( ( (  pos3597 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes951 ) ( (  line3598 ) ) ) ) );
    size_t  off3600 = ( (  previous_dash_char953 ) ( ( (  offset_dash_ptr292 ) ( ( ( (  line3598 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  pos_dash_bi3599 ) ) ) ) ) ) );
    return ( (  mk470 ) ( ( (  pos3597 ) .f_line ) ,  ( (  size_dash_i32163 ) ( (  op_dash_sub270 ( (  pos_dash_bi3599 ) , (  off3600 ) ) ) ) ) ) );
}

static  enum Unit_6   move_dash_left911 (    struct Pane_110 *  self3856 ) {
    ( (  set_dash_cursors912 ) ( (  self3856 ) ,  ( (  left_dash_pos950 ) ( ( ( * (  self3856 ) ) .f_buf ) ,  ( ( * (  self3856 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) ,  ( CursorMovement_913_UpdateVI ) ) );
    return ( Unit_6_Unit );
}

static  struct Pane_110 *   pane955 (    struct Editor_109 *  ed3953 ) {
    return ( & ( ( * (  ed3953 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines958 (    struct TextBuf_75 *  self3584 ) {
    return ( (  size_dash_i32163 ) ( ( (  size283 ) ( ( & ( ( * (  self3584 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_19   right_dash_pos957 (    struct TextBuf_75 *  self3587 ,    struct Pos_19  pos3589 ) {
    if ( (  cmp390 ( ( (  pos3589 ) .f_line ) , ( (  num_dash_lines958 ) ( (  self3587 ) ) ) ) != 0 ) ) {
        return ( (  mk470 ) ( ( (  num_dash_lines958 ) ( (  self3587 ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    }
    struct StrView_20  line3590 = ( (  line918 ) ( (  self3587 ) ,  ( (  pos3589 ) .f_line ) ) );
    int64_t  bi3591 = ( (  i32_dash_i64827 ) ( ( (  pos3589 ) .f_bi ) ) );
    if ( (  cmp876 ( (  bi3591 ) , ( (  size_dash_i64228 ) ( ( (  num_dash_bytes951 ) ( (  line3590 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp390 ( (  op_dash_add241 ( ( (  pos3589 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) , ( (  num_dash_lines958 ) ( (  self3587 ) ) ) ) != 0 ) ) {
            return ( (  mk470 ) ( ( (  pos3589 ) .f_line ) ,  ( (  size_dash_i32163 ) ( ( (  num_dash_bytes951 ) ( (  line3590 ) ) ) ) ) ) );
        }
        return ( (  mk470 ) ( (  op_dash_add241 ( ( (  pos3589 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    }
    int32_t  off3592 = ( (  size_dash_i32163 ) ( ( (  next_dash_char191 ) ( ( (  offset_dash_ptr292 ) ( ( ( (  line3590 ) .f_contents ) .f_ptr ) ,  (  bi3591 ) ) ) ) ) ) );
    return ( (  mk470 ) ( ( (  pos3589 ) .f_line ) ,  (  op_dash_add241 ( ( (  pos3589 ) .f_bi ) , (  off3592 ) ) ) ) );
}

static  enum Unit_6   move_dash_right956 (    struct Pane_110 *  self3853 ) {
    ( (  set_dash_cursors912 ) ( (  self3853 ) ,  ( (  right_dash_pos957 ) ( ( ( * (  self3853 ) ) .f_buf ) ,  ( ( * (  self3853 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) ,  ( CursorMovement_913_UpdateVI ) ) );
    return ( Unit_6_Unit );
}

static  int32_t   vi_dash_bi960 (    struct TextBuf_75 *  self3750 ,    int32_t  ln3752 ,    int32_t  vx3754 ) {
    int32_t  bi3755 = ( (  from_dash_integral38 ( 0 ) ) );
    int32_t  vi3756 = (  from_dash_integral38 ( 0 ) );
    struct StrViewIter_570  temp961 =  into_dash_iter572 ( ( (  chars575 ) ( ( (  line918 ) ( (  self3750 ) ,  (  ln3752 ) ) ) ) ) );
    while (true) {
        struct Maybe_573  __cond962 =  next574 (&temp961);
        if (  __cond962 .tag == 0 ) {
            break;
        }
        struct Char_47  c3758 =  __cond962 .stuff .Maybe_573_Just_s .field0;
        vi3756 = (  op_dash_add241 ( (  vi3756 ) , ( (  char_dash_screen_dash_width921 ) ( (  c3758 ) ) ) ) );
        if ( (  cmp390 ( (  vx3754 ) , (  vi3756 ) ) == 0 ) ) {
            break;
        }
        bi3755 = (  op_dash_add241 ( (  bi3755 ) , ( (  size_dash_i32163 ) ( ( (  c3758 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi3755 );
}

static  enum Unit_6   move_dash_down959 (    struct Pane_110 *  self3859 ) {
    struct Pos_19  cur3860 = ( ( * (  self3859 ) ) .f_cursor );
    if ( (  cmp390 ( (  op_dash_add241 ( ( (  cur3860 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) , ( (  num_dash_lines958 ) ( ( ( * (  self3859 ) ) .f_buf ) ) ) ) != 0 ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  vci3861 = ( ( * (  self3859 ) ) .f_vi );
    int32_t  bi3862 = ( (  vi_dash_bi960 ) ( ( ( * (  self3859 ) ) .f_buf ) ,  (  op_dash_add241 ( ( (  cur3860 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  vci3861 ) ) );
    ( (  set_dash_cursors912 ) ( (  self3859 ) ,  ( (struct Pos_19) { .f_line = (  op_dash_add241 ( ( (  cur3860 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) , .f_bi = (  bi3862 ) } ) ,  ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) ,  ( CursorMovement_913_NoChanges ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   move_dash_up963 (    struct Pane_110 *  self3865 ) {
    struct Pos_19  cur3866 = ( ( * (  self3865 ) ) .f_cursor );
    if ( (  cmp390 ( ( (  cur3866 ) .f_line ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  vci3867 = ( ( * (  self3865 ) ) .f_vi );
    int32_t  bi3868 = ( (  vi_dash_bi960 ) ( ( ( * (  self3865 ) ) .f_buf ) ,  (  op_dash_sub779 ( ( (  cur3866 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  vci3867 ) ) );
    ( (  set_dash_cursors912 ) ( (  self3865 ) ,  ( (struct Pos_19) { .f_line = (  op_dash_sub779 ( ( (  cur3866 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) , .f_bi = (  bi3868 ) } ) ,  ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) ,  ( CursorMovement_913_NoChanges ) ) );
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
    struct Pos_19 *  prev3890;
    ;
    struct Pane_110 *  pane3885;
    enum MoveDirection_965  dir3887;
};

struct envunion971 {
    enum Unit_6  (*fun) (  struct env969*  );
    struct env969 env;
};

static  enum Unit_6   advance972 (   struct env969* env ) {
    (* env->prev3890 ) = ( ( * ( env->pane3885 ) ) .f_cursor );
    enum MoveDirection_965  dref3892 = ( env->dir3887 );
    switch (  dref3892 ) {
        case MoveDirection_965_MoveFwd : {
            ( (  move_dash_right956 ) ( ( env->pane3885 ) ) );
            break;
        }
        case MoveDirection_965_MoveBwd : {
            ( (  move_dash_left911 ) ( ( env->pane3885 ) ) );
            break;
        }
    }
    return ( Unit_6_Unit );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end973 (    struct Pane_110 *  pane3871 ) {
    struct Pos_19  cur3872 = ( ( * (  pane3871 ) ) .f_cursor );
    return (  eq206 ( ( (  i32_dash_size229 ) ( ( (  cur3872 ) .f_bi ) ) ) , ( (  num_dash_bytes951 ) ( ( (  line918 ) ( ( ( * (  pane3871 ) ) .f_buf ) ,  ( (  cur3872 ) .f_line ) ) ) ) ) ) );
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

static  bool   eq977 (    enum CharType_978  l3706 ,    enum CharType_978  r3708 ) {
    struct Tuple2_979  dref3709 = ( ( Tuple2_979_Tuple2 ) ( (  l3706 ) ,  (  r3708 ) ) );
    if (  dref3709 .field0 == CharType_978_CharSpace &&  dref3709 .field1 == CharType_978_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3709 .field0 == CharType_978_CharWord &&  dref3709 .field1 == CharType_978_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3709 .field0 == CharType_978_CharPunctuation &&  dref3709 .field1 == CharType_978_CharPunctuation ) {
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
    return ( ( (  eq367 ( (  c2367 ) , ( (  from_dash_charlike188 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq367 ( (  c2367 ) , ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq367 ( (  c2367 ) , ( (  from_dash_charlike188 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_978   char_dash_type980 (    struct Char_47  c3712 ) {
    if ( ( ( ( (  is_dash_alphanumeric981 ) ( (  c3712 ) ) ) || (  eq367 ( (  c3712 ) , ( (  from_dash_charlike188 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq367 ( (  c3712 ) , ( (  from_dash_charlike188 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_978_CharWord );
    } else {
        if ( ( (  is_dash_whitespace987 ) ( (  c3712 ) ) ) ) {
            return ( CharType_978_CharSpace );
        } else {
            return ( CharType_978_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary976 (    struct Char_47  l3715 ,    struct Char_47  r3717 ) {
    return ( !  eq977 ( ( (  char_dash_type980 ) ( (  l3715 ) ) ) , ( (  char_dash_type980 ) ( (  r3717 ) ) ) ) );
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

static  struct Char_47   char_dash_at988 (    struct Pane_110 *  pane3770 ,    struct Pos_19  pos3772 ) {
    struct StrView_20  line3773 = ( (  line918 ) ( ( ( * (  pane3770 ) ) .f_buf ) ,  ( (  pos3772 ) .f_line ) ) );
    return ( (  or_dash_else989 ) ( ( (  head990 ) ( ( (  chars575 ) ( ( (  byte_dash_substr349 ) ( (  line3773 ) ,  ( (  i32_dash_size229 ) ( ( (  pos3772 ) .f_bi ) ) ) ,  ( (  num_dash_bytes951 ) ( (  line3773 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
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

static  bool   reached_dash_target994 (    struct Pane_110 *  pane3877 ,    enum MoveTarget_966  target3879 ,    struct Pos_19  prev3881 ) {
    return ( {  enum MoveTarget_966  dref3882 = (  target3879 ) ;  dref3882 == MoveTarget_966_NextWordStart ? ( ( (  is_dash_word_dash_boundary976 ) ( ( (  char_dash_at988 ) ( (  pane3877 ) ,  (  prev3881 ) ) ) ,  ( (  char_dash_at988 ) ( (  pane3877 ) ,  ( ( * (  pane3877 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq977 ( ( (  char_dash_type980 ) ( ( (  char_dash_at988 ) ( (  pane3877 ) ,  ( ( * (  pane3877 ) ) .f_cursor ) ) ) ) ) , ( CharType_978_CharSpace ) ) ) ) ) :  dref3882 == MoveTarget_966_NextWordEnd ? ( ( (  is_dash_word_dash_boundary976 ) ( ( (  char_dash_at988 ) ( (  pane3877 ) ,  (  prev3881 ) ) ) ,  ( (  char_dash_at988 ) ( (  pane3877 ) ,  ( ( * (  pane3877 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq977 ( ( (  char_dash_type980 ) ( ( (  char_dash_at988 ) ( (  pane3877 ) ,  (  prev3881 ) ) ) ) ) , ( CharType_978_CharSpace ) ) ) ) ) : ( (  todo995 ) ( ) ) ; } );
}

static  enum Unit_6   advance_dash_word964 (    struct Pane_110 *  pane3885 ,    enum MoveDirection_965  dir3887 ,    enum MoveTarget_966  target3889 ) {
    struct Pos_19  temp967 = ( (  own968 ) ( ( ( * (  pane3885 ) ) .f_cursor ) ) );
    struct Pos_19 *  prev3890 = ( &temp967 );
    struct env969 envinst969 = {
        .prev3890 =  prev3890 ,
        .pane3885 =  pane3885 ,
        .dir3887 =  dir3887 ,
    };
    struct Pos_19  sel3893 = ( ( * (  pane3885 ) ) .f_cursor );
    struct envunion971  temp970 = ( (struct envunion971){ .fun = (  enum Unit_6  (*) (  struct env969*  ) )advance972 , .env =  envinst969 } );
    ( temp970.fun ( &temp970.env ) );
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end973 ) ( (  pane3885 ) ) ) ) {
        if ( (  eq281 ( ( ( * (  pane3885 ) ) .f_cursor ) , ( * (  prev3890 ) ) ) ) ) {
            return ( Unit_6_Unit );
        }
        struct envunion975  temp974 = ( (struct envunion975){ .fun = (  enum Unit_6  (*) (  struct env969*  ) )advance972 , .env =  envinst969 } );
        ( temp974.fun ( &temp974.env ) );
        sel3893 = ( ( * (  pane3885 ) ) .f_cursor );
    }
    if ( ( (  is_dash_word_dash_boundary976 ) ( ( (  char_dash_at988 ) ( (  pane3885 ) ,  ( * (  prev3890 ) ) ) ) ,  ( (  char_dash_at988 ) ( (  pane3885 ) ,  ( ( * (  pane3885 ) ) .f_cursor ) ) ) ) ) ) {
        sel3893 = ( ( * (  pane3885 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion993  temp992 = ( (struct envunion993){ .fun = (  enum Unit_6  (*) (  struct env969*  ) )advance972 , .env =  envinst969 } );
        ( temp992.fun ( &temp992.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end973 ) ( (  pane3885 ) ) ) || ( (  reached_dash_target994 ) ( (  pane3885 ) ,  (  target3889 ) ,  ( * (  prev3890 ) ) ) ) ) ) {
            enum MoveDirection_965  dref3894 = (  dir3887 );
            switch (  dref3894 ) {
                case MoveDirection_965_MoveFwd : {
                    ( (  move_dash_left911 ) ( (  pane3885 ) ) );
                    break;
                }
                case MoveDirection_965_MoveBwd : {
                    ( (  move_dash_right956 ) ( (  pane3885 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq281 ( ( * (  prev3890 ) ) , ( ( * (  pane3885 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel947 ) ( (  pane3885 ) ,  ( ( Maybe_22_Just ) ( (  sel3893 ) ) ) ) );
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

static  struct Pos_19   action_dash_fwd1011 (   struct env80* env ,    struct TextBuf_75 *  self3643 ,    struct Action_18  action3645 ) {
    struct envunion81  temp1012 = ( (struct envunion81){ .fun = (  enum Unit_6  (*) (  struct env70*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ) )change_dash_no_dash_action280 , .env =  env->envinst70 } );
    ( temp1012.fun ( &temp1012.env ,  (  self3643 ) ,  ( (  action3645 ) .f_from ) ,  ( (  action3645 ) .f_to_dash_bwd ) ,  ( (  action3645 ) .f_fwd ) ) );
    return ( (  action3645 ) .f_to_dash_fwd );
}

static  struct Maybe_90   redo1002 (   struct env84* env ,    struct TextBuf_75 *  self3653 ) {
    struct Actions_76 *  actions3654 = ( & ( ( * (  self3653 ) ) .f_actions ) );
    if ( (  cmp151 ( ( ( * (  actions3654 ) ) .f_cur ) , ( (  size1003 ) ( ( & ( ( * (  actions3654 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_90) { .tag = Maybe_90_None_t } );
    }
    struct Action_18  action3655 = (  elem_dash_get1004 ( ( ( * (  actions3654 ) ) .f_list ) , ( ( * (  actions3654 ) ) .f_cur ) ) );
    struct envunion85  temp1010 = ( (struct envunion85){ .fun = (  struct Pos_19  (*) (  struct env80*  ,    struct TextBuf_75 *  ,    struct Action_18  ) )action_dash_fwd1011 , .env =  env->envinst80 } );
    struct Pos_19  to_dash_fwd3656 = ( temp1010.fun ( &temp1010.env ,  (  self3653 ) ,  (  action3655 ) ) );
    (*  actions3654 ) .f_cur = (  op_dash_add199 ( ( ( * (  actions3654 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    if ( (  cmp151 ( ( (  num_dash_bytes951 ) ( ( (  action3655 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        to_dash_fwd3656 = ( (  left_dash_pos950 ) ( (  self3653 ) ,  (  to_dash_fwd3656 ) ) );
    }
    return ( ( Maybe_90_Just ) ( ( (struct Cursors_21) { .f_cur = (  to_dash_fwd3656 ) , .f_sel = ( ( Maybe_22_Just ) ( ( (  action3655 ) .f_from ) ) ) } ) ) );
}

struct env1014 {
    struct Pane_110 *  self3923;
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

static  enum Unit_6   lam1017 (   struct env1014* env ,    struct Cursors_21  cursors3926 ) {
    ( (  set_dash_cursors912 ) ( ( env->self3923 ) ,  ( (  cursors3926 ) .f_cur ) ,  ( (  cursors3926 ) .f_sel ) ,  ( CursorMovement_913_OverrideSelect ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   redo1000 (   struct env99* env ,    struct Pane_110 *  self3923 ) {
    struct envunion100  temp1001 = ( (struct envunion100){ .fun = (  struct Maybe_90  (*) (  struct env84*  ,    struct TextBuf_75 *  ) )redo1002 , .env =  env->envinst84 } );
    struct Maybe_90  mcursors3924 = ( temp1001.fun ( &temp1001.env ,  ( ( * (  self3923 ) ) .f_buf ) ) );
    struct env1014 envinst1014 = {
        .self3923 =  self3923 ,
    };
    ( (  if_dash_just1013 ) ( (  mcursors3924 ) ,  ( (struct envunion1015){ .fun = (  enum Unit_6  (*) (  struct env1014*  ,    struct Cursors_21  ) )lam1017 , .env =  envinst1014 } ) ) );
    return ( Unit_6_Unit );
}

static  struct Pos_19   action_dash_bwd1023 (   struct env78* env ,    struct TextBuf_75 *  self3638 ,    struct Action_18  action3640 ) {
    struct envunion79  temp1024 = ( (struct envunion79){ .fun = (  enum Unit_6  (*) (  struct env70*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ) )change_dash_no_dash_action280 , .env =  env->envinst70 } );
    ( temp1024.fun ( &temp1024.env ,  (  self3638 ) ,  ( (  action3640 ) .f_from ) ,  ( (  action3640 ) .f_to_dash_fwd ) ,  ( (  action3640 ) .f_bwd ) ) );
    return ( (  action3640 ) .f_to_dash_bwd );
}

static  struct Maybe_90   undo1021 (   struct env82* env ,    struct TextBuf_75 *  self3648 ) {
    struct Actions_76 *  actions3649 = ( & ( ( * (  self3648 ) ) .f_actions ) );
    if ( (  eq206 ( ( ( * (  actions3649 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_90) { .tag = Maybe_90_None_t } );
    }
    (*  actions3649 ) .f_cur = (  op_dash_sub270 ( ( ( * (  actions3649 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_18  action3650 = (  elem_dash_get1004 ( ( ( * (  actions3649 ) ) .f_list ) , ( ( * (  actions3649 ) ) .f_cur ) ) );
    struct envunion83  temp1022 = ( (struct envunion83){ .fun = (  struct Pos_19  (*) (  struct env78*  ,    struct TextBuf_75 *  ,    struct Action_18  ) )action_dash_bwd1023 , .env =  env->envinst78 } );
    ( temp1022.fun ( &temp1022.env ,  (  self3648 ) ,  (  action3650 ) ) );
    return ( ( Maybe_90_Just ) ( ( (  action3650 ) .f_before_dash_cursors ) ) );
}

struct env1026 {
    struct Pane_110 *  self3917;
    ;
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

static  enum Unit_6   lam1029 (   struct env1026* env ,    struct Cursors_21  cursors3920 ) {
    ( (  set_dash_cursors912 ) ( ( env->self3917 ) ,  ( (  cursors3920 ) .f_cur ) ,  ( (  cursors3920 ) .f_sel ) ,  ( CursorMovement_913_OverrideSelect ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   undo1019 (   struct env97* env ,    struct Pane_110 *  self3917 ) {
    struct envunion98  temp1020 = ( (struct envunion98){ .fun = (  struct Maybe_90  (*) (  struct env82*  ,    struct TextBuf_75 *  ) )undo1021 , .env =  env->envinst82 } );
    struct Maybe_90  mcursors3918 = ( temp1020.fun ( &temp1020.env ,  ( ( * (  self3917 ) ) .f_buf ) ) );
    struct env1026 envinst1026 = {
        .self3917 =  self3917 ,
    };
    ( (  if_dash_just1025 ) ( (  mcursors3918 ) ,  ( (struct envunion1027){ .fun = (  enum Unit_6  (*) (  struct env1026*  ,    struct Cursors_21  ) )lam1029 , .env =  envinst1026 } ) ) );
    return ( Unit_6_Unit );
}

static  struct Tuple2_117   minmax1033 (    struct Pos_19  l1329 ,    struct Pos_19  r1331 ) {
    return ( (  cmp389 ( (  l1329 ) , (  r1331 ) ) == 0 ) ? ( ( Tuple2_117_Tuple2 ) ( (  l1329 ) ,  (  r1331 ) ) ) : ( ( Tuple2_117_Tuple2 ) ( (  r1331 ) ,  (  l1329 ) ) ) );
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

static  struct Tuple2_117   selection1032 (    struct Pane_110 *  self3929 ) {
    struct Tuple2_117  from_dash_to3930 = ( (  minmax1033 ) ( ( (  or_dash_else1034 ) ( ( ( * (  self3929 ) ) .f_sel ) ,  ( ( * (  self3929 ) ) .f_cursor ) ) ) ,  ( ( * (  self3929 ) ) .f_cursor ) ) );
    struct Pos_19  from3931 = ( (  fst1035 ) ( (  from_dash_to3930 ) ) );
    struct Pos_19  to3932 = ( (  right_dash_pos957 ) ( ( ( * (  self3929 ) ) .f_buf ) ,  ( (  snd1036 ) ( (  from_dash_to3930 ) ) ) ) );
    return ( ( Tuple2_117_Tuple2 ) ( (  from3931 ) ,  (  to3932 ) ) );
}

static  struct StrView_20   clone_dash_01040 (    struct StrView_20  s2146 ,    enum CAllocator_8  al2148 ) {
    size_t  cnt2149 = ( ( (  s2146 ) .f_contents ) .f_count );
    struct Slice_11  nus2150 = ( (  allocate316 ) ( (  al2148 ) ,  (  op_dash_add199 ( (  cnt2149 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to419 ) ( ( (  s2146 ) .f_contents ) ,  (  nus2150 ) ) );
    ( (  set325 ) ( (  nus2150 ) ,  (  cnt2149 ) ,  ( (  char_dash_u8348 ) ( ( (  from_dash_charlike188 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_20) { .f_contents = ( (struct Slice_11) { .f_ptr = ( (  nus2150 ) .f_ptr ) , .f_count = (  cnt2149 ) } ) } );
}

static  struct StrView_20   clone1039 (    struct StrView_20  s2153 ,    enum CAllocator_8  al2155 ) {
    return ( (  clone_dash_01040 ) ( (  s2153 ) ,  (  al2155 ) ) );
}

struct envunion1043 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

struct envunion1045 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

static  struct StrView_20   from_dash_charlike1046 (    uint8_t *  ptr77 ,    size_t  count79 ) {
    return ( (struct StrView_20) { .f_contents = ( (struct Slice_11) { .f_ptr = (  ptr77 ) , .f_count = (  count79 ) } ) } );
}

struct envunion1050 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

struct envunion1052 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

static  struct StrView_20   str_dash_between1038 (   struct env86* env ,    struct TextBuf_75 *  self3671 ,    struct Pos_19  from3673 ,    struct Pos_19  to3675 ) {
    enum CAllocator_8  al3676 = ( ( ( * (  self3671 ) ) .f_buf ) .f_al );
    if ( (  eq282 ( ( (  from3673 ) .f_line ) , ( (  to3675 ) .f_line ) ) ) ) {
        size_t  from_dash_bi3677 = ( (  i32_dash_size229 ) ( ( (  min436 ) ( ( (  from3673 ) .f_bi ) ,  ( (  to3675 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3678 = ( (  i32_dash_size229 ) ( ( (  max931 ) ( ( (  from3673 ) .f_bi ) ,  ( (  to3675 ) .f_bi ) ) ) ) );
        return ( (  clone1039 ) ( ( (  byte_dash_substr349 ) ( ( (  line918 ) ( (  self3671 ) ,  ( (  from3673 ) .f_line ) ) ) ,  (  from_dash_bi3677 ) ,  (  to_dash_bi3678 ) ) ) ,  (  al3676 ) ) );
    } else {
        struct Pos_19  from_dash_pos3679 = ( (  min388 ) ( (  from3673 ) ,  (  to3675 ) ) );
        struct Pos_19  to_dash_pos3680 = ( (  max391 ) ( (  from3673 ) ,  (  to3675 ) ) );
        struct List_10  temp1041 = ( (  mk250 ) ( (  al3676 ) ) );
        struct List_10 *  sb3681 = ( &temp1041 );
        struct StrView_20  first_dash_line3682 = ( (  line918 ) ( (  self3671 ) ,  ( (  from_dash_pos3679 ) .f_line ) ) );
        struct envunion1043  temp1042 = ( (struct envunion1043){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all301 , .env =  env->envinst30 } );
        ( temp1042.fun ( &temp1042.env ,  (  sb3681 ) ,  ( ( (  byte_dash_substr349 ) ( (  first_dash_line3682 ) ,  ( (  i32_dash_size229 ) ( ( (  from_dash_pos3679 ) .f_bi ) ) ) ,  ( (  num_dash_bytes951 ) ( (  first_dash_line3682 ) ) ) ) ) .f_contents ) ) );
        struct envunion1045  temp1044 = ( (struct envunion1045){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all301 , .env =  env->envinst30 } );
        ( temp1044.fun ( &temp1044.env ,  (  sb3681 ) ,  ( ( ( (  from_dash_charlike1046 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_656  temp1047 =  into_dash_iter658 ( ( (  to661 ) ( (  op_dash_add241 ( ( (  from_dash_pos3679 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  op_dash_sub779 ( ( (  to_dash_pos3680 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_239  __cond1048 =  next659 (&temp1047);
            if (  __cond1048 .tag == 0 ) {
                break;
            }
            int32_t  i3684 =  __cond1048 .stuff .Maybe_239_Just_s .field0;
            struct envunion1050  temp1049 = ( (struct envunion1050){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all301 , .env =  env->envinst30 } );
            ( temp1049.fun ( &temp1049.env ,  (  sb3681 ) ,  ( ( (  line918 ) ( (  self3671 ) ,  (  i3684 ) ) ) .f_contents ) ) );
            struct envunion1052  temp1051 = ( (struct envunion1052){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all301 , .env =  env->envinst30 } );
            ( temp1051.fun ( &temp1051.env ,  (  sb3681 ) ,  ( ( ( (  from_dash_charlike1046 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion87  temp1053 = ( (struct envunion87){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all301 , .env =  env->envinst30 } );
        ( temp1053.fun ( &temp1053.env ,  (  sb3681 ) ,  ( ( (  byte_dash_substr349 ) ( ( (  line918 ) ( (  self3671 ) ,  ( (  to_dash_pos3680 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size229 ) ( ( (  to_dash_pos3680 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes919 ) ( ( (  to_dash_slice295 ) ( ( * (  sb3681 ) ) ) ) ) );
    }
}

struct env1055 {
    ;
    struct Editor_109 *  ed3956;
};

struct envunion1056 {
    enum Unit_6  (*fun) (  struct env1055*  ,    struct StrView_20  );
    struct env1055 env;
};

static  enum Unit_6   if_dash_just1054 (    struct Maybe_113  x1291 ,   struct envunion1056  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion1056  temp1057 = (  fun1293 );
        ( temp1057.fun ( &temp1057.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1058 (   struct env1055* env ,    struct StrView_20  cp3960 ) {
    ( (  free905 ) ( (  cp3960 ) ,  ( ( * ( env->ed3956 ) ) .f_al ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   copy_dash_selection_dash_to_dash_clipboard1031 (   struct env103* env ,    struct Editor_109 *  ed3956 ) {
    struct Tuple2_117  from_dash_to3957 = ( (  selection1032 ) ( ( (  pane955 ) ( (  ed3956 ) ) ) ) );
    struct envunion104  temp1037 = ( (struct envunion104){ .fun = (  struct StrView_20  (*) (  struct env86*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ) )str_dash_between1038 , .env =  env->envinst86 } );
    struct StrView_20  cpd3958 = ( temp1037.fun ( &temp1037.env ,  ( ( ( * (  ed3956 ) ) .f_pane ) .f_buf ) ,  ( (  fst1035 ) ( (  from_dash_to3957 ) ) ) ,  ( (  snd1036 ) ( (  from_dash_to3957 ) ) ) ) );
    struct env1055 envinst1055 = {
        .ed3956 =  ed3956 ,
    };
    ( (  if_dash_just1054 ) ( ( ( * (  ed3956 ) ) .f_clipboard ) ,  ( (struct envunion1056){ .fun = (  enum Unit_6  (*) (  struct env1055*  ,    struct StrView_20  ) )lam1058 , .env =  envinst1055 } ) ) );
    (*  ed3956 ) .f_clipboard = ( ( Maybe_113_Just ) ( (  cpd3958 ) ) );
    return ( Unit_6_Unit );
}

struct envunion1060 {
    enum Unit_6  (*fun) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_117  ,    struct StrView_20  );
    struct env101 env;
};

struct SliceIter_1066 {
    struct Slice_17  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1065 {
    struct SliceIter_1066  field0;
    size_t  field1;
};

static struct Drop_1065 Drop_1065_Drop (  struct SliceIter_1066  field0 ,  size_t  field1 ) {
    return ( struct Drop_1065 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1065   into_dash_iter1067 (    struct Drop_1065  self845 ) {
    return (  self845 );
}

static  struct SliceIter_1066   into_dash_iter1070 (    struct Slice_17  self1822 ) {
    return ( (struct SliceIter_1066) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Slice_17   subslice1071 (    struct Slice_17  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Action_18 *  begin_dash_ptr1787 = ( (  offset_dash_ptr1008 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp151 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp151 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_17) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub270 ( ( (  min294 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_17) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_1066   into_dash_iter1069 (    struct List_16  self2022 ) {
    return ( (  into_dash_iter1070 ) ( ( (  subslice1071 ) ( ( (  self2022 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2022 ) .f_count ) ) ) ) );
}

static  struct Drop_1065   drop1068 (    struct List_16  iterable852 ,    size_t  i854 ) {
    struct SliceIter_1066  it855 = ( (  into_dash_iter1069 ) ( (  iterable852 ) ) );
    return ( ( Drop_1065_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

struct Maybe_1073 {
    enum {
        Maybe_1073_None_t,
        Maybe_1073_Just_t,
    } tag;
    union {
        struct {
            struct Action_18  field0;
        } Maybe_1073_Just_s;
    } stuff;
};

static struct Maybe_1073 Maybe_1073_Just (  struct Action_18  field0 ) {
    return ( struct Maybe_1073 ) { .tag = Maybe_1073_Just_t, .stuff = { .Maybe_1073_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1073   next1075 (    struct SliceIter_1066 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp151 ( (  op_dash_add199 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1073) { .tag = Maybe_1073_None_t } );
    }
    struct Action_18  elem1830 = ( * ( (  offset_dash_ptr1008 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add199 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1073_Just ) ( (  elem1830 ) ) );
}

static  struct Maybe_1073   next1074 (    struct Drop_1065 *  dref847 ) {
    while ( (  cmp151 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1075 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub270 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1075 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_6   free_dash_action1076 (    struct Action_18  action3566 ,    enum CAllocator_8  al3568 ) {
    ( (  free905 ) ( ( (  action3566 ) .f_fwd ) ,  (  al3568 ) ) );
    ( (  free905 ) ( ( (  action3566 ) .f_bwd ) ,  (  al3568 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   trim1077 (    struct List_16 *  l2109 ,    size_t  new_dash_count2111 ) {
    (*  l2109 ) .f_count = ( (  min294 ) ( (  new_dash_count2111 ) ,  ( ( * (  l2109 ) ) .f_count ) ) );
    return ( Unit_6_Unit );
}

struct TypeSize_1084 {
    size_t  f_size;
};

static  struct TypeSize_1084   get_dash_typesize1083 (  ) {
    struct Action_18  temp1085;
    return ( (struct TypeSize_1084) { .f_size = ( sizeof( ( (  temp1085 ) ) ) ) } );
}

static  struct Action_18 *   cast_dash_ptr1086 (    void *  p359 ) {
    return ( (struct Action_18 * ) (  p359 ) );
}

static  struct Slice_17   allocate1082 (    enum CAllocator_8  dref1947 ,    size_t  count1949 ) {
    if (!(  dref1947 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1950 = ( ( ( (  get_dash_typesize1083 ) ( ) ) ) .f_size );
    struct Action_18 *  ptr1951 = ( (  cast_dash_ptr1086 ) ( ( ( malloc ) ( (  op_dash_mul212 ( (  size1950 ) , (  count1949 ) ) ) ) ) ) );
    return ( (struct Slice_17) { .f_ptr = (  ptr1951 ) , .f_count = (  count1949 ) } );
}

struct env1087 {
    ;
    struct Slice_17  new_dash_slice2036;
    ;
};

struct Tuple2_1089 {
    struct Action_18  field0;
    int32_t  field1;
};

static struct Tuple2_1089 Tuple2_1089_Tuple2 (  struct Action_18  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1089 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1088 {
    enum Unit_6  (*fun) (  struct env1087*  ,    struct Tuple2_1089  );
    struct env1087 env;
};

static  enum Unit_6   set1091 (    struct Slice_17  slice1774 ,    size_t  i1776 ,    struct Action_18  x1778 ) {
    struct Action_18 *  ep1779 = ( (  get_dash_ptr1007 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1090 (   struct env1087* env ,    struct Tuple2_1089  dref2037 ) {
    return ( (  set1091 ) ( ( env->new_dash_slice2036 ) ,  ( (  i32_dash_size229 ) ( ( dref2037 .field1 ) ) ) ,  ( dref2037 .field0 ) ) );
}

struct Zip_1093 {
    struct SliceIter_1066  f_left_dash_it;
    struct FromIter_233  f_right_dash_it;
};

static  struct Zip_1093   into_dash_iter1095 (    struct Zip_1093  self911 ) {
    return (  self911 );
}

struct Maybe_1096 {
    enum {
        Maybe_1096_None_t,
        Maybe_1096_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1089  field0;
        } Maybe_1096_Just_s;
    } stuff;
};

static struct Maybe_1096 Maybe_1096_Just (  struct Tuple2_1089  field0 ) {
    return ( struct Maybe_1096 ) { .tag = Maybe_1096_Just_t, .stuff = { .Maybe_1096_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1096   next1097 (    struct Zip_1093 *  self914 ) {
    struct Zip_1093  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1073  dref916 = ( (  next1075 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1073_None_t ) {
            return ( (struct Maybe_1096) { .tag = Maybe_1096_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1073_Just_t ) {
                struct Maybe_239  dref918 = ( (  next240 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_239_None_t ) {
                    return ( (struct Maybe_1096) { .tag = Maybe_1096_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_239_Just_t ) {
                        ( (  next1075 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next240 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1096_Just ) ( ( ( Tuple2_1089_Tuple2 ) ( ( dref916 .stuff .Maybe_1073_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_239_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1092 (    struct Zip_1093  iterable1074 ,   struct envunion1088  fun1076 ) {
    struct Zip_1093  temp1094 = ( (  into_dash_iter1095 ) ( (  iterable1074 ) ) );
    struct Zip_1093 *  it1077 = ( &temp1094 );
    while ( ( true ) ) {
        struct Maybe_1096  dref1078 = ( (  next1097 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1096_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1096_Just_t ) {
                struct envunion1088  temp1098 = (  fun1076 );
                ( temp1098.fun ( &temp1098.env ,  ( dref1078 .stuff .Maybe_1096_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1093   zip1099 (    struct Slice_17  left922 ,    struct FromIter_233  right924 ) {
    struct SliceIter_1066  left_dash_it925 = ( (  into_dash_iter1070 ) ( (  left922 ) ) );
    struct FromIter_233  right_dash_it926 = ( (  into_dash_iter245 ) ( (  right924 ) ) );
    return ( (struct Zip_1093) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr1101 (    struct Action_18 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_6   free1100 (    enum CAllocator_8  dref1953 ,    struct Slice_17  slice1955 ) {
    if (!(  dref1953 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1101 ) ( ( (  slice1955 ) .f_ptr ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   grow_dash_if_dash_full1081 (   struct env3* env ,    struct List_16 *  list2035 ) {
    if ( (  eq206 ( ( ( * (  list2035 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2035 ) .f_elements = ( (  allocate1082 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( env->starting_dash_size2030 ) ) );
    } else {
        if ( (  eq206 ( ( ( * (  list2035 ) ) .f_count ) , ( ( ( * (  list2035 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_17  new_dash_slice2036 = ( (  allocate1082 ) ( ( ( * (  list2035 ) ) .f_al ) ,  (  op_dash_mul212 ( ( ( * (  list2035 ) ) .f_count ) , ( env->growth_dash_factor2031 ) ) ) ) );
            struct env1087 envinst1087 = {
                .new_dash_slice2036 =  new_dash_slice2036 ,
            };
            struct envunion1088  fun2040 = ( (struct envunion1088){ .fun = (  enum Unit_6  (*) (  struct env1087*  ,    struct Tuple2_1089  ) )lam1090 , .env =  envinst1087 } );
            ( (  for_dash_each1092 ) ( ( (  zip1099 ) ( ( ( * (  list2035 ) ) .f_elements ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  fun2040 ) ) );
            ( (  free1100 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( ( * (  list2035 ) ) .f_elements ) ) );
            (*  list2035 ) .f_elements = (  new_dash_slice2036 );
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   add1079 (   struct env14* env ,    struct List_16 *  list2043 ,    struct Action_18  elem2045 ) {
    struct envunion15  temp1080 = ( (struct envunion15){ .fun = (  enum Unit_6  (*) (  struct env3*  ,    struct List_16 *  ) )grow_dash_if_dash_full1081 , .env =  env->envinst3 } );
    ( temp1080.fun ( &temp1080.env ,  (  list2043 ) ) );
    ( (  set1091 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( ( * (  list2043 ) ) .f_count ) ,  (  elem2045 ) ) );
    (*  list2043 ) .f_count = (  op_dash_add199 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  struct Maybe_113   head1103 (    struct SplitIter_356  it1142 ) {
    struct SplitIter_356  temp1104 = ( (  into_dash_iter363 ) ( (  it1142 ) ) );
    return ( (  next377 ) ( ( &temp1104 ) ) );
}

static  struct Maybe_113   head1106 (    struct Drop_355  it1142 ) {
    struct Drop_355  temp1107 = ( (  into_dash_iter361 ) ( (  it1142 ) ) );
    return ( (  next376 ) ( ( &temp1107 ) ) );
}

static  bool   null1105 (    struct Drop_355  it1151 ) {
    struct Maybe_113  dref1152 = ( (  head1106 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_113_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_6   panic1109 (    struct StrView_20  errmsg1712 ) {
    ( (  print_dash_str444 ) ( ( ( StrConcat_445_StrConcat ) ( ( ( StrConcat_446_StrConcat ) ( ( (  from_dash_string187 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  struct Tuple2_374   undefined1110 (  ) {
    struct Tuple2_374  temp1111;
    return (  temp1111 );
}

static  struct Tuple2_374   or_dash_fail1108 (    struct Maybe_373  x1725 ,    struct StrView_20  errmsg1727 ) {
    struct Maybe_373  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_373_None_t ) {
        ( (  panic1109 ) ( (  errmsg1727 ) ) );
        return ( (  undefined1110 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_373_Just_t ) {
            return ( dref1728 .stuff .Maybe_373_Just_s .field0 );
        }
    }
}

static  struct Maybe_373   reduce1113 (    struct Zip_354  iterable1093 ,    struct Maybe_373  base1095 ,    struct Maybe_373 (*  fun1097 )(    struct Tuple2_374  ,    struct Maybe_373  ) ) {
    struct Maybe_373  x1098 = (  base1095 );
    struct Zip_354  it1099 = ( (  into_dash_iter359 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_373  dref1100 = ( (  next375 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_373_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_373_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_373_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1114 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1114);
    exit ( 1 );
    ( Unit_6_Unit );
    struct Maybe_373  temp1115;
    return (  temp1115 );
}

static  struct Maybe_373   lam1116 (    struct Tuple2_374  e1147 ,    struct Maybe_373  dref1148 ) {
    return ( ( Maybe_373_Just ) ( (  e1147 ) ) );
}

static  struct Maybe_373   last1112 (    struct Zip_354  it1145 ) {
    return ( (  reduce1113 ) ( (  it1145 ) ,  ( (struct Maybe_373) { .tag = Maybe_373_None_t } ) ,  (  lam1116 ) ) );
}

static  int32_t   snd1117 (    struct Tuple2_374  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct StrView_20   fst1118 (    struct Tuple2_374  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_19   pos_dash_after_dash_str1102 (    struct TextBuf_75 *  self3659 ,    struct StrView_20  bytes3661 ,    struct Pos_19  from3663 ) {
    struct SplitIter_356  lines3664 = ( (  split_dash_by_dash_each364 ) ( (  bytes3661 ) ,  ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_20  first_dash_line3665 = ( (  or_dash_else339 ) ( ( (  head1103 ) ( (  lines3664 ) ) ) ,  ( (  from_dash_string187 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_355  headless3666 = ( (  drop362 ) ( (  lines3664 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1105 ) ( (  headless3666 ) ) ) ) {
        struct Pos_19  next_dash_pos3667 = ( (  mk470 ) ( ( (  from3663 ) .f_line ) ,  (  op_dash_add241 ( ( (  from3663 ) .f_bi ) , ( (  size_dash_i32163 ) ( ( (  num_dash_bytes951 ) ( (  first_dash_line3665 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3667 );
    } else {
        struct Tuple2_374  last_dash_line3668 = ( (  or_dash_fail1108 ) ( ( (  last1112 ) ( ( (  zip360 ) ( (  headless3666 ) ,  ( (  from246 ) ( (  op_dash_add241 ( ( (  from3663 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string187 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk470 ) ( ( (  snd1117 ) ( (  last_dash_line3668 ) ) ) ,  ( (  size_dash_i32163 ) ( ( (  num_dash_bytes951 ) ( ( (  fst1118 ) ( (  last_dash_line3668 ) ) ) ) ) ) ) ) );
    }
}

static  struct Cursors_21   or_dash_else1120 (    struct Maybe_90  self1732 ,    struct Cursors_21  alt1734 ) {
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

static  struct Maybe_90   change1063 (   struct env88* env ,    struct TextBuf_75 *  self3687 ,    struct Pos_19  from3689 ,    struct Pos_19  to3691 ,    struct StrView_20  bytes3693 ,    struct Maybe_90  before_dash_cursors3695 ) {
    struct Pos_19  from_dash_pos3696 = ( (  min388 ) ( (  from3689 ) ,  (  to3691 ) ) );
    struct Pos_19  to_dash_pos3697 = ( (  max391 ) ( (  from3689 ) ,  (  to3691 ) ) );
    struct Actions_76 *  actions3698 = ( & ( ( * (  self3687 ) ) .f_actions ) );
    enum CAllocator_8  al3699 = ( ( ( * (  actions3698 ) ) .f_list ) .f_al );
    size_t  cur3700 = ( ( * (  actions3698 ) ) .f_cur );
    struct Drop_1065  temp1064 =  into_dash_iter1067 ( ( (  drop1068 ) ( ( ( * (  actions3698 ) ) .f_list ) ,  (  cur3700 ) ) ) );
    while (true) {
        struct Maybe_1073  __cond1072 =  next1074 (&temp1064);
        if (  __cond1072 .tag == 0 ) {
            break;
        }
        struct Action_18  action3702 =  __cond1072 .stuff .Maybe_1073_Just_s .field0;
        ( (  free_dash_action1076 ) ( (  action3702 ) ,  (  al3699 ) ) );
    }
    ( (  trim1077 ) ( ( & ( ( * (  actions3698 ) ) .f_list ) ) ,  (  cur3700 ) ) );
    struct envunion91  temp1078 = ( (struct envunion91){ .fun = (  enum Unit_6  (*) (  struct env14*  ,    struct List_16 *  ,    struct Action_18  ) )add1079 , .env =  env->envinst14 } );
    struct envunion92  temp1119 = ( (struct envunion92){ .fun = (  struct StrView_20  (*) (  struct env86*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ) )str_dash_between1038 , .env =  env->envinst86 } );
    ( temp1078.fun ( &temp1078.env ,  ( & ( ( * (  actions3698 ) ) .f_list ) ) ,  ( (struct Action_18) { .f_from = (  from3689 ) , .f_fwd = ( (  clone1039 ) ( (  bytes3693 ) ,  (  al3699 ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1102 ) ( (  self3687 ) ,  (  bytes3693 ) ,  (  from_dash_pos3696 ) ) ) , .f_bwd = ( temp1119.fun ( &temp1119.env ,  (  self3687 ) ,  (  from_dash_pos3696 ) ,  (  to_dash_pos3697 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3697 ) , .f_before_dash_cursors = ( (  or_dash_else1120 ) ( (  before_dash_cursors3695 ) ,  ( (struct Cursors_21) { .f_cur = (  from3689 ) , .f_sel = ( (  eq281 ( (  from3689 ) , (  to3691 ) ) ) ? ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) : ( ( Maybe_22_Just ) ( (  to3691 ) ) ) ) } ) ) ) } ) ) );
    struct envunion89  temp1121 = ( (struct envunion89){ .fun = (  struct Maybe_90  (*) (  struct env84*  ,    struct TextBuf_75 *  ) )redo1002 , .env =  env->envinst84 } );
    return ( temp1121.fun ( &temp1121.env ,  (  self3687 ) ) );
}

struct env1123 {
    ;
    struct Pane_110 *  self3935;
};

struct envunion1124 {
    enum Unit_6  (*fun) (  struct env1123*  ,    struct Cursors_21  );
    struct env1123 env;
};

static  enum Unit_6   if_dash_just1122 (    struct Maybe_90  x1291 ,   struct envunion1124  fun1293 ) {
    struct Maybe_90  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_90_Just_t ) {
        struct envunion1124  temp1125 = (  fun1293 );
        ( temp1125.fun ( &temp1125.env ,  ( dref1294 .stuff .Maybe_90_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_90_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1126 (   struct env1123* env ,    struct Cursors_21  cursors3942 ) {
    ( (  set_dash_cursors912 ) ( ( env->self3935 ) ,  ( (  cursors3942 ) .f_cur ) ,  ( (  cursors3942 ) .f_sel ) ,  ( CursorMovement_913_OverrideSelect ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   replace_dash_selection1061 (   struct env101* env ,    struct Pane_110 *  self3935 ,    struct Tuple2_117  pos_prime_s3937 ,    struct StrView_20  cp3939 ) {
    struct envunion102  temp1062 = ( (struct envunion102){ .fun = (  struct Maybe_90  (*) (  struct env88*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_90  ) )change1063 , .env =  env->envinst88 } );
    struct Maybe_90  mcursors3940 = ( temp1062.fun ( &temp1062.env ,  ( ( * (  self3935 ) ) .f_buf ) ,  ( (  fst1035 ) ( (  pos_prime_s3937 ) ) ) ,  ( (  snd1036 ) ( (  pos_prime_s3937 ) ) ) ,  (  cp3939 ) ,  ( ( Maybe_90_Just ) ( ( (struct Cursors_21) { .f_cur = ( ( * (  self3935 ) ) .f_cursor ) , .f_sel = ( ( * (  self3935 ) ) .f_sel ) } ) ) ) ) );
    struct env1123 envinst1123 = {
        .self3935 =  self3935 ,
    };
    ( (  if_dash_just1122 ) ( (  mcursors3940 ) ,  ( (struct envunion1124){ .fun = (  enum Unit_6  (*) (  struct env1123*  ,    struct Cursors_21  ) )lam1126 , .env =  envinst1123 } ) ) );
    return ( Unit_6_Unit );
}

struct envunion1128 {
    enum Unit_6  (*fun) (  struct env103*  ,    struct Editor_109 *  );
    struct env103 env;
};

struct envunion1130 {
    enum Unit_6  (*fun) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_117  ,    struct StrView_20  );
    struct env101 env;
};

struct envunion1132 {
    enum Unit_6  (*fun) (  struct env103*  ,    struct Editor_109 *  );
    struct env103 env;
};

static  struct StrBuilder_44   mk1138 (    enum CAllocator_8  al2755 ) {
    return ( (struct StrBuilder_44) { .f_chars = ( (  mk250 ) ( (  al2755 ) ) ) } );
}

struct IntStrIter_1144 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1143 {
    struct StrViewIter_570  f_left;
    struct IntStrIter_1144  f_right;
};

struct StrConcatIter_1142 {
    struct StrConcatIter_1143  f_left;
    struct StrViewIter_570  f_right;
};

struct env1145 {
    struct StrBuilder_44 *  builder2737;
    struct env42 envinst42;
};

struct envunion1146 {
    enum Unit_6  (*fun) (  struct env1145*  ,    struct Char_47  );
    struct env1145 env;
};

static  struct StrConcatIter_1142   into_dash_iter1148 (    struct StrConcatIter_1142  self1491 ) {
    return (  self1491 );
}

struct env1154 {
    ;
    size_t  base1210;
};

struct envunion1155 {
    size_t  (*fun) (  struct env1154*  ,    int32_t  ,    size_t  );
    struct env1154 env;
};

static  size_t   reduce1153 (    struct Range_653  iterable1093 ,    size_t  base1095 ,   struct envunion1155  fun1097 ) {
    size_t  x1098 = (  base1095 );
    struct RangeIter_656  it1099 = ( (  into_dash_iter658 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_239  dref1100 = ( (  next659 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_239_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_239_Just_t ) {
                struct envunion1155  temp1156 = (  fun1097 );
                x1098 = ( temp1156.fun ( &temp1156.env ,  ( dref1100 .stuff .Maybe_239_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1157 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1157);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1158;
    return (  temp1158 );
}

static  size_t   lam1159 (   struct env1154* env ,    int32_t  item1214 ,    size_t  x1216 ) {
    return (  op_dash_mul212 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  size_t   pow1152 (    size_t  base1210 ,    int32_t  p1212 ) {
    struct env1154 envinst1154 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1153 ) ( ( (  to661 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub779 ( (  p1212 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1155){ .fun = (  size_t  (*) (  struct env1154*  ,    int32_t  ,    size_t  ) )lam1159 , .env =  envinst1154 } ) ) );
}

static  uint8_t   cast1160 (    size_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_573   next1151 (    struct IntStrIter_1144 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_573_Just ) ( ( (  from_dash_charlike188 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp390 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_573) { .tag = Maybe_573_None_t } );
    }
    size_t  trim_dash_down1423 = ( (  pow1152 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub779 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    size_t  upper1424 = (  op_dash_div178 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    size_t  upper_dash_mask1425 = (  op_dash_mul212 ( (  op_dash_div178 ( (  upper1424 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1160 ) ( (  op_dash_sub270 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub779 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_47  digit_dash_char1427 = ( (  from_dash_u8859 ) ( (  op_dash_add749 ( (  digit1426 ) , (  from_dash_integral179 ( 48 ) ) ) ) ) );
    return ( ( Maybe_573_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_573   next1150 (    struct StrConcatIter_1143 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1151 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1149 (    struct StrConcatIter_1142 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1150 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   for_dash_each1141 (    struct StrConcatIter_1142  iterable1074 ,   struct envunion1146  fun1076 ) {
    struct StrConcatIter_1142  temp1147 = ( (  into_dash_iter1148 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1142 *  it1077 = ( &temp1147 );
    while ( ( true ) ) {
        struct Maybe_573  dref1078 = ( (  next1149 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_573_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_573_Just_t ) {
                struct envunion1146  temp1161 = (  fun1076 );
                ( temp1161.fun ( &temp1161.env ,  ( dref1078 .stuff .Maybe_573_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  int32_t   count_dash_digits1168 (    size_t  self1430 ) {
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

static  struct IntStrIter_1144   uint_dash_iter1167 (    size_t  int1437 ) {
    return ( (struct IntStrIter_1144) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1168 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1144   chars1166 (    size_t  self1467 ) {
    return ( (  uint_dash_iter1167 ) ( (  self1467 ) ) );
}

static  struct StrConcatIter_1143   into_dash_iter1165 (    struct StrConcat_51  dref1498 ) {
    return ( (struct StrConcatIter_1143) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1166 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1143   chars1164 (    struct StrConcat_51  self1509 ) {
    return ( (  into_dash_iter1165 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1142   into_dash_iter1163 (    struct StrConcat_50  dref1498 ) {
    return ( (struct StrConcatIter_1142) { .f_left = ( (  chars1164 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars575 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1142   chars1162 (    struct StrConcat_50  self1509 ) {
    return ( (  into_dash_iter1163 ) ( (  self1509 ) ) );
}

static  enum Unit_6   write_dash_slice1173 (   struct env40* env ,    struct StrBuilder_44 *  builder2727 ,    struct Slice_11  s2729 ) {
    struct envunion41  temp1174 = ( (struct envunion41){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all301 , .env =  env->envinst30 } );
    ( temp1174.fun ( &temp1174.env ,  ( & ( ( * (  builder2727 ) ) .f_chars ) ) ,  (  s2729 ) ) );
    return ( Unit_6_Unit );
}

static  struct Slice_11   from_dash_char1175 (    struct Char_47  c1935 ,    uint8_t *  buf1937 ) {
    struct CharDestructured_172  dref1938 = ( (  destructure174 ) ( (  c1935 ) ) );
    if ( dref1938.tag == CharDestructured_172_Ref_t ) {
        return ( (struct Slice_11) { .f_ptr = ( ( dref1938 .stuff .CharDestructured_172_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1938 .stuff .CharDestructured_172_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1938.tag == CharDestructured_172_Scalar_t ) {
            if ( (  cmp182 ( ( ( dref1938 .stuff .CharDestructured_172_Scalar_s .field0 ) .f_value ) , (  from_dash_integral183 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1176 = ( (  from_dash_string39 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp1176);
                exit ( 1 );
                ( Unit_6_Unit );
            }
            (*  buf1937 ) = ( (  u32_dash_u8185 ) ( ( ( dref1938 .stuff .CharDestructured_172_Scalar_s .field0 ) .f_value ) ) );
            return ( (struct Slice_11) { .f_ptr = (  buf1937 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_6   write_dash_char1171 (   struct env42* env ,    struct StrBuilder_44 *  builder2732 ,    struct Char_47  c2734 ) {
    struct envunion43  temp1172 = ( (struct envunion43){ .fun = (  enum Unit_6  (*) (  struct env40*  ,    struct StrBuilder_44 *  ,    struct Slice_11  ) )write_dash_slice1173 , .env =  env->envinst40 } );
    uint8_t  temp1178;
    uint8_t  temp1177 = (  temp1178 );
    ( temp1172.fun ( &temp1172.env ,  (  builder2732 ) ,  ( (  from_dash_char1175 ) ( (  c2734 ) ,  ( &temp1177 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1169 (   struct env1145* env ,    struct Char_47  c2741 ) {
    struct envunion46  temp1170 = ( (struct envunion46){ .fun = (  enum Unit_6  (*) (  struct env42*  ,    struct StrBuilder_44 *  ,    struct Char_47  ) )write_dash_char1171 , .env =  env->envinst42 } );
    return ( temp1170.fun ( &temp1170.env ,  ( env->builder2737 ) ,  (  c2741 ) ) );
}

static  enum Unit_6   write1140 (   struct env45* env ,    struct StrBuilder_44 *  builder2737 ,    struct StrConcat_50  s2739 ) {
    struct env1145 envinst1145 = {
        .builder2737 =  builder2737 ,
        .envinst42 = env->envinst42 ,
    };
    ( (  for_dash_each1141 ) ( ( (  chars1162 ) ( (  s2739 ) ) ) ,  ( (struct envunion1146){ .fun = (  enum Unit_6  (*) (  struct env1145*  ,    struct Char_47  ) )lam1169 , .env =  envinst1145 } ) ) );
    return ( Unit_6_Unit );
}

static  uint8_t *   cast_dash_ptr1182 (    uint8_t *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   cast_dash_slice1181 (    struct Slice_11  s1932 ) {
    return ( (struct Slice_11) { .f_ptr = ( (  cast_dash_ptr1182 ) ( ( (  s1932 ) .f_ptr ) ) ) , .f_count = ( (  s1932 ) .f_count ) } );
}

static  struct StrView_20   as_dash_str1180 (    struct StrBuilder_44 *  builder2761 ) {
    return ( (struct StrView_20) { .f_contents = ( (  cast_dash_slice1181 ) ( ( (  subslice291 ) ( ( ( ( * (  builder2761 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2761 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_20   mk_dash_dyn_dash_str1136 (   struct env48* env ,    struct StrConcat_50  s2781 ,    enum CAllocator_8  al2783 ) {
    struct StrBuilder_44  temp1137 = ( (  mk1138 ) ( (  al2783 ) ) );
    struct StrBuilder_44 *  sb2784 = ( &temp1137 );
    struct envunion49  temp1139 = ( (struct envunion49){ .fun = (  enum Unit_6  (*) (  struct env45*  ,    struct StrBuilder_44 *  ,    struct StrConcat_50  ) )write1140 , .env =  env->envinst45 } );
    ( temp1139.fun ( &temp1139.env ,  (  sb2784 ) ,  (  s2781 ) ) );
    struct envunion52  temp1179 = ( (struct envunion52){ .fun = (  enum Unit_6  (*) (  struct env42*  ,    struct StrBuilder_44 *  ,    struct Char_47  ) )write_dash_char1171 , .env =  env->envinst42 } );
    ( temp1179.fun ( &temp1179.env ,  (  sb2784 ) ,  ( (  nullchar495 ) ( ) ) ) );
    struct StrView_20  dynstr2785 = ( (  as_dash_str1180 ) ( (  sb2784 ) ) );
    return ( (struct StrView_20) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2785 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub270 ( ( ( (  dynstr2785 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_6   set_dash_msg1134 (   struct env105* env ,    struct Editor_109 *  ed3975 ,    struct StrConcat_50  s3977 ) {
    ( (  reset_dash_msg899 ) ( (  ed3975 ) ) );
    struct envunion106  temp1135 = ( (struct envunion106){ .fun = (  struct StrView_20  (*) (  struct env48*  ,    struct StrConcat_50  ,    enum CAllocator_8  ) )mk_dash_dyn_dash_str1136 , .env =  env->envinst48 } );
    (*  ed3975 ) .f_msg = ( ( Maybe_113_Just ) ( ( temp1135.fun ( &temp1135.env ,  (  s3977 ) ,  ( ( * (  ed3975 ) ) .f_al ) ) ) ) );
    return ( Unit_6_Unit );
}

struct envunion1185 {
    enum Unit_6  (*fun) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_117  ,    struct StrView_20  );
    struct env101 env;
};

struct env1184 {
    ;
    struct Editor_109 *  ed3980;
    ;
    ;
    struct env101 envinst101;
};

struct envunion1186 {
    enum Unit_6  (*fun) (  struct env1184*  ,    struct StrView_20  );
    struct env1184 env;
};

static  enum Unit_6   if_dash_just1183 (    struct Maybe_113  x1291 ,   struct envunion1186  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion1186  temp1187 = (  fun1293 );
        ( temp1187.fun ( &temp1187.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  struct Pos_19   max_dash_pos1189 (    struct Pane_110 *  pane3902 ) {
    return ( {  struct Maybe_22  dref3903 = ( ( * (  pane3902 ) ) .f_sel ) ; dref3903.tag == Maybe_22_Just_t ? ( (  max391 ) ( ( ( * (  pane3902 ) ) .f_cursor ) ,  ( dref3903 .stuff .Maybe_22_Just_s .field0 ) ) ) : ( ( * (  pane3902 ) ) .f_cursor ) ; } );
}

static  enum Unit_6   lam1188 (   struct env1184* env ,    struct StrView_20  cp3987 ) {
    struct Pos_19  start3988 = ( (  right_dash_pos957 ) ( ( ( ( * ( env->ed3980 ) ) .f_pane ) .f_buf ) ,  ( (  max_dash_pos1189 ) ( ( (  pane955 ) ( ( env->ed3980 ) ) ) ) ) ) );
    struct envunion1185  temp1190 = ( (struct envunion1185){ .fun = (  enum Unit_6  (*) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_117  ,    struct StrView_20  ) )replace_dash_selection1061 , .env =  env->envinst101 } );
    ( temp1190.fun ( &temp1190.env ,  ( (  pane955 ) ( ( env->ed3980 ) ) ) ,  ( ( Tuple2_117_Tuple2 ) ( (  start3988 ) ,  (  start3988 ) ) ) ,  (  cp3987 ) ) );
    return ( Unit_6_Unit );
}

struct envunion1193 {
    enum Unit_6  (*fun) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_117  ,    struct StrView_20  );
    struct env101 env;
};

struct env1192 {
    struct Editor_109 *  ed3980;
    ;
    ;
    struct env101 envinst101;
};

struct envunion1194 {
    enum Unit_6  (*fun) (  struct env1192*  ,    struct StrView_20  );
    struct env1192 env;
};

static  enum Unit_6   if_dash_just1191 (    struct Maybe_113  x1291 ,   struct envunion1194  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion1194  temp1195 = (  fun1293 );
        ( temp1195.fun ( &temp1195.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  struct Pos_19   min_dash_pos1197 (    struct Pane_110 *  pane3897 ) {
    return ( {  struct Maybe_22  dref3898 = ( ( * (  pane3897 ) ) .f_sel ) ; dref3898.tag == Maybe_22_Just_t ? ( (  min388 ) ( ( ( * (  pane3897 ) ) .f_cursor ) ,  ( dref3898 .stuff .Maybe_22_Just_s .field0 ) ) ) : ( ( * (  pane3897 ) ) .f_cursor ) ; } );
}

static  enum Unit_6   lam1196 (   struct env1192* env ,    struct StrView_20  cp3990 ) {
    struct Pos_19  start3991 = ( (  min_dash_pos1197 ) ( ( (  pane955 ) ( ( env->ed3980 ) ) ) ) );
    struct envunion1193  temp1198 = ( (struct envunion1193){ .fun = (  enum Unit_6  (*) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_117  ,    struct StrView_20  ) )replace_dash_selection1061 , .env =  env->envinst101 } );
    ( temp1198.fun ( &temp1198.env ,  ( (  pane955 ) ( ( env->ed3980 ) ) ) ,  ( ( Tuple2_117_Tuple2 ) ( (  start3991 ) ,  (  start3991 ) ) ) ,  (  cp3990 ) ) );
    return ( Unit_6_Unit );
}

struct env1200 {
    struct Editor_109 *  ed3980;
    ;
    ;
    struct env101 envinst101;
};

struct envunion1201 {
    enum Unit_6  (*fun) (  struct env1200*  ,    struct StrView_20  );
    struct env1200 env;
};

static  enum Unit_6   if_dash_just1199 (    struct Maybe_113  x1291 ,   struct envunion1201  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion1201  temp1202 = (  fun1293 );
        ( temp1202.fun ( &temp1202.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1203 (   struct env1200* env ,    struct StrView_20  cp3993 ) {
    struct Pos_19  start3994 = ( (  min_dash_pos1197 ) ( ( (  pane955 ) ( ( env->ed3980 ) ) ) ) );
    struct envunion116  temp1204 = ( (struct envunion116){ .fun = (  enum Unit_6  (*) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_117  ,    struct StrView_20  ) )replace_dash_selection1061 , .env =  env->envinst101 } );
    ( temp1204.fun ( &temp1204.env ,  ( (  pane955 ) ( ( env->ed3980 ) ) ) ,  ( ( Tuple2_117_Tuple2 ) ( (  start3994 ) ,  (  start3994 ) ) ) ,  (  cp3993 ) ) );
    return ( Unit_6_Unit );
}

static  bool   is_dash_none1205 (    struct Maybe_22  m1264 ) {
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

static  enum Unit_6   handle_dash_normal_dash_key910 (   struct env107* env ,    struct Editor_109 *  ed3980 ,    struct Key_125  key3982 ) {
    struct Key_125  dref3983 = (  key3982 );
    if ( dref3983.tag == Key_125_Char_t ) {
        if ( (  eq753 ( ( dref3983 .stuff .Key_125_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed3980 ) .f_running = ( false );
        } else {
            if ( (  eq753 ( ( dref3983 .stuff .Key_125_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left911 ) ( ( (  pane955 ) ( (  ed3980 ) ) ) ) );
            } else {
                if ( (  eq753 ( ( dref3983 .stuff .Key_125_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right956 ) ( ( (  pane955 ) ( (  ed3980 ) ) ) ) );
                } else {
                    if ( (  eq753 ( ( dref3983 .stuff .Key_125_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down959 ) ( ( (  pane955 ) ( (  ed3980 ) ) ) ) );
                    } else {
                        if ( (  eq753 ( ( dref3983 .stuff .Key_125_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up963 ) ( ( (  pane955 ) ( (  ed3980 ) ) ) ) );
                        } else {
                            if ( (  eq753 ( ( dref3983 .stuff .Key_125_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                (*  ed3980 ) .f_pane .f_mode = ( Mode_111_Insert );
                            } else {
                                if ( (  eq753 ( ( dref3983 .stuff .Key_125_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  advance_dash_word964 ) ( ( (  pane955 ) ( (  ed3980 ) ) ) ,  ( MoveDirection_965_MoveFwd ) ,  ( MoveTarget_966_NextWordStart ) ) );
                                } else {
                                    if ( (  eq753 ( ( dref3983 .stuff .Key_125_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  advance_dash_word964 ) ( ( (  pane955 ) ( (  ed3980 ) ) ) ,  ( MoveDirection_965_MoveFwd ) ,  ( MoveTarget_966_NextWordEnd ) ) );
                                    } else {
                                        if ( (  eq753 ( ( dref3983 .stuff .Key_125_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  advance_dash_word964 ) ( ( (  pane955 ) ( (  ed3980 ) ) ) ,  ( MoveDirection_965_MoveBwd ) ,  ( MoveTarget_966_NextWordEnd ) ) );
                                        } else {
                                            if ( (  eq753 ( ( dref3983 .stuff .Key_125_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct envunion119  temp999 = ( (struct envunion119){ .fun = (  enum Unit_6  (*) (  struct env99*  ,    struct Pane_110 *  ) )redo1000 , .env =  env->envinst99 } );
                                                ( temp999.fun ( &temp999.env ,  ( (  pane955 ) ( (  ed3980 ) ) ) ) );
                                            } else {
                                                if ( (  eq753 ( ( dref3983 .stuff .Key_125_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                    struct envunion118  temp1018 = ( (struct envunion118){ .fun = (  enum Unit_6  (*) (  struct env97*  ,    struct Pane_110 *  ) )undo1019 , .env =  env->envinst97 } );
                                                    ( temp1018.fun ( &temp1018.env ,  ( (  pane955 ) ( (  ed3980 ) ) ) ) );
                                                } else {
                                                    if ( (  eq753 ( ( dref3983 .stuff .Key_125_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                        struct envunion115  temp1030 = ( (struct envunion115){ .fun = (  enum Unit_6  (*) (  struct env103*  ,    struct Editor_109 *  ) )copy_dash_selection_dash_to_dash_clipboard1031 , .env =  env->envinst103 } );
                                                        ( temp1030.fun ( &temp1030.env ,  (  ed3980 ) ) );
                                                        struct envunion1060  temp1059 = ( (struct envunion1060){ .fun = (  enum Unit_6  (*) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_117  ,    struct StrView_20  ) )replace_dash_selection1061 , .env =  env->envinst101 } );
                                                        ( temp1059.fun ( &temp1059.env ,  ( (  pane955 ) ( (  ed3980 ) ) ) ,  ( (  selection1032 ) ( ( (  pane955 ) ( (  ed3980 ) ) ) ) ) ,  ( (  from_dash_string187 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                    } else {
                                                        if ( (  eq753 ( ( dref3983 .stuff .Key_125_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                            struct envunion1128  temp1127 = ( (struct envunion1128){ .fun = (  enum Unit_6  (*) (  struct env103*  ,    struct Editor_109 *  ) )copy_dash_selection_dash_to_dash_clipboard1031 , .env =  env->envinst103 } );
                                                            ( temp1127.fun ( &temp1127.env ,  (  ed3980 ) ) );
                                                            struct envunion1130  temp1129 = ( (struct envunion1130){ .fun = (  enum Unit_6  (*) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_117  ,    struct StrView_20  ) )replace_dash_selection1061 , .env =  env->envinst101 } );
                                                            ( temp1129.fun ( &temp1129.env ,  ( (  pane955 ) ( (  ed3980 ) ) ) ,  ( (  selection1032 ) ( ( (  pane955 ) ( (  ed3980 ) ) ) ) ) ,  ( (  from_dash_string187 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                            (*  ed3980 ) .f_pane .f_mode = ( Mode_111_Insert );
                                                        } else {
                                                            if ( (  eq753 ( ( dref3983 .stuff .Key_125_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion1132  temp1131 = ( (struct envunion1132){ .fun = (  enum Unit_6  (*) (  struct env103*  ,    struct Editor_109 *  ) )copy_dash_selection_dash_to_dash_clipboard1031 , .env =  env->envinst103 } );
                                                                ( temp1131.fun ( &temp1131.env ,  (  ed3980 ) ) );
                                                                size_t  bytes_dash_yanked3985 = ( (  num_dash_bytes951 ) ( ( (  or_dash_else339 ) ( ( ( * (  ed3980 ) ) .f_clipboard ) ,  ( (  from_dash_string187 ) ( ( "" ) ,  ( 0 ) ) ) ) ) ) );
                                                                struct envunion108  temp1133 = ( (struct envunion108){ .fun = (  enum Unit_6  (*) (  struct env105*  ,    struct Editor_109 *  ,    struct StrConcat_50  ) )set_dash_msg1134 , .env =  env->envinst105 } );
                                                                ( temp1133.fun ( &temp1133.env ,  (  ed3980 ) ,  ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked3985 ) ) ) ,  ( (  from_dash_string187 ) ( ( " bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                            } else {
                                                                if ( (  eq753 ( ( dref3983 .stuff .Key_125_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct env1184 envinst1184 = {
                                                                        .ed3980 =  ed3980 ,
                                                                        .envinst101 = env->envinst101 ,
                                                                    };
                                                                    ( (  if_dash_just1183 ) ( ( ( * (  ed3980 ) ) .f_clipboard ) ,  ( (struct envunion1186){ .fun = (  enum Unit_6  (*) (  struct env1184*  ,    struct StrView_20  ) )lam1188 , .env =  envinst1184 } ) ) );
                                                                } else {
                                                                    if ( (  eq753 ( ( dref3983 .stuff .Key_125_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct env1192 envinst1192 = {
                                                                            .ed3980 =  ed3980 ,
                                                                            .envinst101 = env->envinst101 ,
                                                                        };
                                                                        ( (  if_dash_just1191 ) ( ( ( * (  ed3980 ) ) .f_clipboard ) ,  ( (struct envunion1194){ .fun = (  enum Unit_6  (*) (  struct env1192*  ,    struct StrView_20  ) )lam1196 , .env =  envinst1192 } ) ) );
                                                                    } else {
                                                                        if ( (  eq753 ( ( dref3983 .stuff .Key_125_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct env1200 envinst1200 = {
                                                                                .ed3980 =  ed3980 ,
                                                                                .envinst101 = env->envinst101 ,
                                                                            };
                                                                            ( (  if_dash_just1199 ) ( ( ( * (  ed3980 ) ) .f_clipboard ) ,  ( (struct envunion1201){ .fun = (  enum Unit_6  (*) (  struct env1200*  ,    struct StrView_20  ) )lam1203 , .env =  envinst1200 } ) ) );
                                                                        } else {
                                                                            if ( (  eq753 ( ( dref3983 .stuff .Key_125_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                (*  ed3980 ) .f_pane .f_mode = ( Mode_111_Select );
                                                                                if ( ( (  is_dash_none1205 ) ( ( ( ( * (  ed3980 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                    (*  ed3980 ) .f_pane .f_sel = ( ( Maybe_22_Just ) ( ( ( ( * (  ed3980 ) ) .f_pane ) .f_cursor ) ) );
                                                                                }
                                                                            } else {
                                                                                if ( (  eq753 ( ( dref3983 .stuff .Key_125_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    (*  ed3980 ) .f_mode = ( ( EditorMode_114_Cmd ) ( ( (  mk1138 ) ( ( ( * (  ed3980 ) ) .f_al ) ) ) ) );
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
        if ( dref3983.tag == Key_125_Escape_t ) {
            (*  ed3980 ) .f_pane .f_mode = ( Mode_111_Normal );
        }
        else {
            if ( true ) {
            }
        }
    }
    return ( Unit_6_Unit );
}

struct envunion1207 {
    enum Unit_6  (*fun) (  struct env107*  ,    struct Editor_109 *  ,    struct Key_125  );
    struct env107 env;
};

static  enum Unit_6   add_dash_str_dash_at_dash_char1209 (   struct env93* env ,    struct Pane_110 *  self3907 ,    struct StrView_20  s3909 ) {
    struct Pos_19  cur3910 = ( ( * (  self3907 ) ) .f_cursor );
    struct envunion94  temp1210 = ( (struct envunion94){ .fun = (  struct Maybe_90  (*) (  struct env88*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_90  ) )change1063 , .env =  env->envinst88 } );
    ( temp1210.fun ( &temp1210.env ,  ( ( * (  self3907 ) ) .f_buf ) ,  (  cur3910 ) ,  (  cur3910 ) ,  (  s3909 ) ,  ( (struct Maybe_90) { .tag = Maybe_90_None_t } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   backspace1212 (   struct env95* env ,    struct Pane_110 *  self3913 ) {
    struct Pos_19  prev_dash_cur3914 = ( ( * (  self3913 ) ) .f_cursor );
    ( (  move_dash_left911 ) ( (  self3913 ) ) );
    struct envunion96  temp1213 = ( (struct envunion96){ .fun = (  struct Maybe_90  (*) (  struct env88*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_90  ) )change1063 , .env =  env->envinst88 } );
    ( temp1213.fun ( &temp1213.env ,  ( ( * (  self3913 ) ) .f_buf ) ,  ( ( * (  self3913 ) ) .f_cursor ) ,  (  prev_dash_cur3914 ) ,  ( (  from_dash_string187 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_90) { .tag = Maybe_90_None_t } ) ) );
    return ( Unit_6_Unit );
}

struct Array_1215 {
    char _arr [1];
};

static  char *   cast1216 (    struct Array_1215 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_769   as_dash_slice1214 (    struct Array_1215 *  arr2260 ) {
    return ( (struct Slice_769) { .f_ptr = ( (  cast1216 ) ( (  arr2260 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1215   from_dash_listlike1218 (    struct Array_1215  self330 ) {
    return (  self330 );
}

struct envunion1220 {
    enum Unit_6  (*fun) (  struct env93*  ,    struct Pane_110 *  ,    struct StrView_20  );
    struct env93 env;
};

struct Scanner_1222 {
    struct StrView_20  f_s;
};

static  struct Scanner_1222   mk_dash_from_dash_strview1224 (    struct StrView_20  s3143 ) {
    return ( (struct Scanner_1222) { .f_s = (  s3143 ) } );
}

struct TakeWhile_1229 {
    struct StrViewIter_570  f_it;
    bool (*  f_pred )(    struct Char_47  );
};

struct Map_1228 {
    struct TakeWhile_1229  field0;
    size_t (*  field1 )(    struct Char_47  );
};

static struct Map_1228 Map_1228_Map (  struct TakeWhile_1229  field0 ,  size_t (*  field1 )(    struct Char_47  ) ) {
    return ( struct Map_1228 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1228   into_dash_iter1231 (    struct Map_1228  self796 ) {
    return (  self796 );
}

struct Maybe_1232 {
    enum {
        Maybe_1232_None_t,
        Maybe_1232_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_1232_Just_s;
    } stuff;
};

static struct Maybe_1232 Maybe_1232_Just (  size_t  field0 ) {
    return ( struct Maybe_1232 ) { .tag = Maybe_1232_Just_t, .stuff = { .Maybe_1232_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_573   next1234 (    struct TakeWhile_1229 *  self964 ) {
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

static  struct Maybe_1232   next1233 (    struct Map_1228 *  dref798 ) {
    struct Maybe_573  dref801 = ( (  next1234 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_573_None_t ) {
        return ( (struct Maybe_1232) { .tag = Maybe_1232_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_573_Just_t ) {
            return ( ( Maybe_1232_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_573_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1230 (    struct Map_1228  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1228  it1099 = ( (  into_dash_iter1231 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1232  dref1100 = ( (  next1233 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1232_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1232_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1232_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1235 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1235);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1236;
    return (  temp1236 );
}

static  size_t   lam1237 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add199 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1227 (    struct Map_1228  it1110 ) {
    return ( (  reduce1230 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1237 ) ) );
}

static  struct TakeWhile_1229   into_dash_iter1239 (    struct TakeWhile_1229  self961 ) {
    return (  self961 );
}

static  struct Map_1228   map1238 (    struct TakeWhile_1229  iterable805 ,    size_t (*  fun807 )(    struct Char_47  ) ) {
    struct TakeWhile_1229  it808 = ( (  into_dash_iter1239 ) ( (  iterable805 ) ) );
    return ( ( Map_1228_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1229   take_dash_while1240 (    struct StrViewIter_570  it970 ,    bool (*  pred972 )(    struct Char_47  ) ) {
    return ( (struct TakeWhile_1229) { .f_it = ( (  into_dash_iter572 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1241 (    struct Char_47  c2193 ) {
    return ( (  c2193 ) .f_num_dash_bytes );
}

static  struct StrView_20   take_dash_while1226 (    struct StrView_20  self2189 ,    bool (*  fun2191 )(    struct Char_47  ) ) {
    size_t  bi2194 = ( (  sum1227 ) ( ( (  map1238 ) ( ( (  take_dash_while1240 ) ( ( (  chars575 ) ( (  self2189 ) ) ) ,  (  fun2191 ) ) ) ,  (  lam1241 ) ) ) ) );
    return ( (  byte_dash_substr349 ) ( (  self2189 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2194 ) ) );
}

static  struct StrView_20   byte_dash_substr_dash_from1242 (    struct StrView_20  s2181 ,    size_t  from2183 ) {
    return ( (struct StrView_20) { .f_contents = ( (  from290 ) ( ( (  s2181 ) .f_contents ) ,  (  from2183 ) ) ) } );
}

static  struct StrView_20   take_dash_str_dash_while1225 (    struct Scanner_1222 *  sc3189 ,    bool (*  fun3191 )(    struct Char_47  ) ) {
    struct StrView_20  s3192 = ( (  take_dash_while1226 ) ( ( ( * (  sc3189 ) ) .f_s ) ,  (  fun3191 ) ) );
    (*  sc3189 ) .f_s = ( (  byte_dash_substr_dash_from1242 ) ( ( ( * (  sc3189 ) ) .f_s ) ,  ( (  num_dash_bytes951 ) ( (  s3192 ) ) ) ) );
    return (  s3192 );
}

static  bool   is_dash_not_dash_whitespace1243 (    struct Char_47  c2370 ) {
    return ( ! ( (  is_dash_whitespace987 ) ( (  c2370 ) ) ) );
}

struct TakeWhile_1249 {
    struct StrViewIter_570  f_it;
    bool (*  f_pred )(    struct Char_47  );
};

struct Map_1248 {
    struct TakeWhile_1249  field0;
    size_t (*  field1 )(    struct Char_47  );
};

static struct Map_1248 Map_1248_Map (  struct TakeWhile_1249  field0 ,  size_t (*  field1 )(    struct Char_47  ) ) {
    return ( struct Map_1248 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1248   into_dash_iter1251 (    struct Map_1248  self796 ) {
    return (  self796 );
}

static  struct Maybe_573   next1253 (    struct TakeWhile_1249 *  self964 ) {
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

static  struct Maybe_1232   next1252 (    struct Map_1248 *  dref798 ) {
    struct Maybe_573  dref801 = ( (  next1253 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_573_None_t ) {
        return ( (struct Maybe_1232) { .tag = Maybe_1232_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_573_Just_t ) {
            return ( ( Maybe_1232_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_573_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1250 (    struct Map_1248  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1248  it1099 = ( (  into_dash_iter1251 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1232  dref1100 = ( (  next1252 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1232_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1232_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1232_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1254 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1254);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1255;
    return (  temp1255 );
}

static  size_t   lam1256 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add199 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1247 (    struct Map_1248  it1110 ) {
    return ( (  reduce1250 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1256 ) ) );
}

static  struct TakeWhile_1249   into_dash_iter1258 (    struct TakeWhile_1249  self961 ) {
    return (  self961 );
}

static  struct Map_1248   map1257 (    struct TakeWhile_1249  iterable805 ,    size_t (*  fun807 )(    struct Char_47  ) ) {
    struct TakeWhile_1249  it808 = ( (  into_dash_iter1258 ) ( (  iterable805 ) ) );
    return ( ( Map_1248_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1249   take_dash_while1259 (    struct StrViewIter_570  it970 ,    bool (*  pred972 )(    struct Char_47  ) ) {
    return ( (struct TakeWhile_1249) { .f_it = ( (  into_dash_iter572 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1260 (    struct Char_47  c2193 ) {
    return ( (  c2193 ) .f_num_dash_bytes );
}

static  struct StrView_20   take_dash_while1246 (    struct StrView_20  self2189 ,    bool (*  fun2191 )(    struct Char_47  ) ) {
    size_t  bi2194 = ( (  sum1247 ) ( ( (  map1257 ) ( ( (  take_dash_while1259 ) ( ( (  chars575 ) ( (  self2189 ) ) ) ,  (  fun2191 ) ) ) ,  (  lam1260 ) ) ) ) );
    return ( (  byte_dash_substr349 ) ( (  self2189 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2194 ) ) );
}

static  struct StrView_20   take_dash_str_dash_while1245 (    struct Scanner_1222 *  sc3189 ,    bool (*  fun3191 )(    struct Char_47  ) ) {
    struct StrView_20  s3192 = ( (  take_dash_while1246 ) ( ( ( * (  sc3189 ) ) .f_s ) ,  (  fun3191 ) ) );
    (*  sc3189 ) .f_s = ( (  byte_dash_substr_dash_from1242 ) ( ( ( * (  sc3189 ) ) .f_s ) ,  ( (  num_dash_bytes951 ) ( (  s3192 ) ) ) ) );
    return (  s3192 );
}

static  enum Unit_6   drop_dash_str_dash_while1244 (    struct Scanner_1222 *  sc3195 ,    bool (*  fun3197 )(    struct Char_47  ) ) {
    ( (  take_dash_str_dash_while1245 ) ( (  sc3195 ) ,  (  fun3197 ) ) );
    return ( Unit_6_Unit );
}

struct Zip_1264 {
    struct SliceIter_305  f_left_dash_it;
    struct SliceIter_305  f_right_dash_it;
};

struct Tuple2_1265 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_1265 Tuple2_1265_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_1265 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1267 {
    bool (*  fun1126 )(    struct Tuple2_1265  );
};

struct envunion1268 {
    bool  (*fun) (  struct env1267*  ,    struct Tuple2_1265  ,    bool  );
    struct env1267 env;
};

static  struct Zip_1264   into_dash_iter1269 (    struct Zip_1264  self911 ) {
    return (  self911 );
}

struct Maybe_1270 {
    enum {
        Maybe_1270_None_t,
        Maybe_1270_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1265  field0;
        } Maybe_1270_Just_s;
    } stuff;
};

static struct Maybe_1270 Maybe_1270_Just (  struct Tuple2_1265  field0 ) {
    return ( struct Maybe_1270 ) { .tag = Maybe_1270_Just_t, .stuff = { .Maybe_1270_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1270   next1271 (    struct Zip_1264 *  self914 ) {
    struct Zip_1264  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_308  dref916 = ( (  next309 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_308_None_t ) {
            return ( (struct Maybe_1270) { .tag = Maybe_1270_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_308_Just_t ) {
                struct Maybe_308  dref918 = ( (  next309 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_308_None_t ) {
                    return ( (struct Maybe_1270) { .tag = Maybe_1270_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_308_Just_t ) {
                        ( (  next309 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next309 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1270_Just ) ( ( ( Tuple2_1265_Tuple2 ) ( ( dref916 .stuff .Maybe_308_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_308_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1266 (    struct Zip_1264  iterable1093 ,    bool  base1095 ,   struct envunion1268  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_1264  it1099 = ( (  into_dash_iter1269 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1270  dref1100 = ( (  next1271 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1270_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1270_Just_t ) {
                struct envunion1268  temp1272 = (  fun1097 );
                x1098 = ( temp1272.fun ( &temp1272.env ,  ( dref1100 .stuff .Maybe_1270_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1273 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1273);
    exit ( 1 );
    ( Unit_6_Unit );
    bool  temp1274;
    return (  temp1274 );
}

static  bool   lam1275 (   struct env1267* env ,    struct Tuple2_1265  e1128 ,    bool  x1130 ) {
    return ( ( ( env->fun1126 ) ( (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1263 (    struct Zip_1264  it1124 ,    bool (*  fun1126 )(    struct Tuple2_1265  ) ) {
    struct env1267 envinst1267 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1266 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1268){ .fun = (  bool  (*) (  struct env1267*  ,    struct Tuple2_1265  ,    bool  ) )lam1275 , .env =  envinst1267 } ) ) );
}

static  struct Zip_1264   zip1276 (    struct Slice_11  left922 ,    struct Slice_11  right924 ) {
    struct SliceIter_305  left_dash_it925 = ( (  into_dash_iter307 ) ( (  left922 ) ) );
    struct SliceIter_305  right_dash_it926 = ( (  into_dash_iter307 ) ( (  right924 ) ) );
    return ( (struct Zip_1264) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  bool   lam1277 (    struct Tuple2_1265  dref1862 ) {
    return (  eq175 ( ( dref1862 .field0 ) , ( dref1862 .field1 ) ) );
}

static  bool   eq1262 (    struct Slice_11  l1859 ,    struct Slice_11  r1861 ) {
    if ( ( !  eq206 ( ( (  l1859 ) .f_count ) , ( (  r1861 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all1263 ) ( ( (  zip1276 ) ( (  l1859 ) ,  (  r1861 ) ) ) ,  (  lam1277 ) ) );
}

static  bool   eq1261 (    struct StrView_20  l2197 ,    struct StrView_20  r2199 ) {
    return (  eq1262 ( ( (  l2197 ) .f_contents ) , ( (  r2199 ) .f_contents ) ) );
}

static  enum Unit_6   undefined1279 (  ) {
    enum Unit_6  temp1280;
    return (  temp1280 );
}

static  enum Unit_6   todo1278 (  ) {
    ( (  print996 ) ( ( (  from_dash_string187 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( (  undefined1279 ) ( ) );
}

static  enum Unit_6   run_dash_cmd1221 (    struct Editor_109 *  ed3963 ,    struct StrView_20  s3965 ) {
    struct Scanner_1222  temp1223 = ( (  mk_dash_from_dash_strview1224 ) ( (  s3965 ) ) );
    struct Scanner_1222 *  sc3966 = ( &temp1223 );
    struct StrView_20  cmd3967 = ( (  take_dash_str_dash_while1225 ) ( (  sc3966 ) ,  (  is_dash_not_dash_whitespace1243 ) ) );
    ( (  drop_dash_str_dash_while1244 ) ( (  sc3966 ) ,  (  is_dash_whitespace987 ) ) );
    if ( (  eq1261 ( (  cmd3967 ) , ( (  from_dash_charlike1046 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed3963 ) .f_running = ( false );
    } else {
        if ( (  eq1261 ( (  cmd3967 ) , ( (  from_dash_string187 ) ( ( "wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq1261 ( (  cmd3967 ) , ( (  from_dash_charlike1046 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  todo1278 ) ( ) );
            } else {
                if ( (  eq1261 ( (  cmd3967 ) , ( (  from_dash_string187 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                }
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   free1281 (    struct StrBuilder_44 *  builder2767 ) {
    ( (  free387 ) ( ( & ( ( * (  builder2767 ) ) .f_chars ) ) ) );
    return ( Unit_6_Unit );
}

static  struct Char_47   ascii_dash_char1283 (    char  c782 ) {
    return ( (  from_dash_u8859 ) ( ( (  ascii_dash_u8712 ) ( (  c782 ) ) ) ) );
}

static  enum Unit_6   handle_dash_key908 (   struct env120* env ,    struct Editor_109 *  ed3997 ,    struct Key_125  key3999 ) {
    struct EditorMode_114 *  dref4000 = ( & ( ( * (  ed3997 ) ) .f_mode ) );
    if ( (* dref4000 ).tag == EditorMode_114_Normal_t ) {
        enum Mode_111  dref4001 = ( ( ( * (  ed3997 ) ) .f_pane ) .f_mode );
        switch (  dref4001 ) {
            case Mode_111_Normal : {
                struct envunion124  temp909 = ( (struct envunion124){ .fun = (  enum Unit_6  (*) (  struct env107*  ,    struct Editor_109 *  ,    struct Key_125  ) )handle_dash_normal_dash_key910 , .env =  env->envinst107 } );
                ( temp909.fun ( &temp909.env ,  (  ed3997 ) ,  (  key3999 ) ) );
                break;
            }
            case Mode_111_Select : {
                struct envunion1207  temp1206 = ( (struct envunion1207){ .fun = (  enum Unit_6  (*) (  struct env107*  ,    struct Editor_109 *  ,    struct Key_125  ) )handle_dash_normal_dash_key910 , .env =  env->envinst107 } );
                ( temp1206.fun ( &temp1206.env ,  (  ed3997 ) ,  (  key3999 ) ) );
                break;
            }
            case Mode_111_Insert : {
                struct Key_125  dref4002 = (  key3999 );
                if ( dref4002.tag == Key_125_Escape_t ) {
                    (*  ed3997 ) .f_pane .f_mode = ( Mode_111_Normal );
                }
                else {
                    if ( dref4002.tag == Key_125_Enter_t ) {
                        struct envunion121  temp1208 = ( (struct envunion121){ .fun = (  enum Unit_6  (*) (  struct env93*  ,    struct Pane_110 *  ,    struct StrView_20  ) )add_dash_str_dash_at_dash_char1209 , .env =  env->envinst93 } );
                        ( temp1208.fun ( &temp1208.env ,  ( (  pane955 ) ( (  ed3997 ) ) ) ,  ( (  from_dash_charlike1046 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right956 ) ( ( (  pane955 ) ( (  ed3997 ) ) ) ) );
                    }
                    else {
                        if ( dref4002.tag == Key_125_Backspace_t ) {
                            struct envunion122  temp1211 = ( (struct envunion122){ .fun = (  enum Unit_6  (*) (  struct env95*  ,    struct Pane_110 *  ) )backspace1212 , .env =  env->envinst95 } );
                            ( temp1211.fun ( &temp1211.env ,  ( (  pane955 ) ( (  ed3997 ) ) ) ) );
                        }
                        else {
                            if ( dref4002.tag == Key_125_Char_t ) {
                                struct Array_1215  temp1217 = ( (  from_dash_listlike1218 ) ( ( (struct Array_1215) { ._arr = { ( dref4002 .stuff .Key_125_Char_s .field0 ) } } ) ) );
                                struct StrView_20  s4004 = ( (  from_dash_ascii_dash_slice784 ) ( ( (  as_dash_slice1214 ) ( ( &temp1217 ) ) ) ) );
                                struct envunion1220  temp1219 = ( (struct envunion1220){ .fun = (  enum Unit_6  (*) (  struct env93*  ,    struct Pane_110 *  ,    struct StrView_20  ) )add_dash_str_dash_at_dash_char1209 , .env =  env->envinst93 } );
                                ( temp1219.fun ( &temp1219.env ,  ( (  pane955 ) ( (  ed3997 ) ) ) ,  (  s4004 ) ) );
                                ( (  move_dash_right956 ) ( ( (  pane955 ) ( (  ed3997 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4000 ).tag == EditorMode_114_Cmd_t ) {
            struct Key_125  dref4006 = (  key3999 );
            if ( dref4006.tag == Key_125_Escape_t ) {
                (*  ed3997 ) .f_mode = ( (struct EditorMode_114) { .tag = EditorMode_114_Normal_t } );
            }
            else {
                if ( dref4006.tag == Key_125_Enter_t ) {
                    ( (  run_dash_cmd1221 ) ( (  ed3997 ) ,  ( (  as_dash_str1180 ) ( ( & ( (* dref4000 ) .stuff .EditorMode_114_Cmd_s .field0 ) ) ) ) ) );
                    ( (  free1281 ) ( ( & ( (* dref4000 ) .stuff .EditorMode_114_Cmd_s .field0 ) ) ) );
                    (*  ed3997 ) .f_mode = ( (struct EditorMode_114) { .tag = EditorMode_114_Normal_t } );
                }
                else {
                    if ( dref4006.tag == Key_125_Char_t ) {
                        struct envunion123  temp1282 = ( (struct envunion123){ .fun = (  enum Unit_6  (*) (  struct env42*  ,    struct StrBuilder_44 *  ,    struct Char_47  ) )write_dash_char1171 , .env =  env->envinst42 } );
                        ( temp1282.fun ( &temp1282.env ,  ( & ( (* dref4000 ) .stuff .EditorMode_114_Cmd_s .field0 ) ) ,  ( (  ascii_dash_char1283 ) ( ( dref4006 .stuff .Key_125_Char_s .field0 ) ) ) ) );
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
                ( (  todo1278 ) ( ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

struct envunion1285 {
    bool  (*fun) (  struct env62*  ,    struct Screen_628 *  );
    struct env62 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1286 (   struct env62* env ,    struct Screen_628 *  screen3435 ) {
    struct Tui_58 *  tui3436 = ( ( * (  screen3435 ) ) .f_tui );
    struct envunion63  temp1287 = ( (struct envunion63){ .fun = (  bool  (*) (  struct env55*  ,    struct Tui_58 *  ) )update_dash_dimensions699 , .env =  env->envinst55 } );
    bool  updated_dash_dimensions3437 = ( temp1287.fun ( &temp1287.env ,  (  tui3436 ) ) );
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

static  bool   should_dash_redraw1288 (    struct Tui_58 *  tui3362 ) {
    bool  redraw3363 = ( ( * (  tui3362 ) ) .f_should_dash_redraw );
    (*  tui3362 ) .f_should_dash_redraw = ( false );
    return (  redraw3363 );
}

struct env1292 {
    struct Slice_629  s1905;
    struct Cell_630 (*  fun1907 )(    struct Cell_630  );
    ;
    ;
    ;
};

struct envunion1293 {
    enum Unit_6  (*fun) (  struct env1292*  ,    int32_t  );
    struct env1292 env;
};

static  enum Unit_6   for_dash_each1291 (    struct Range_653  iterable1074 ,   struct envunion1293  fun1076 ) {
    struct RangeIter_656  temp1294 = ( (  into_dash_iter658 ) ( (  iterable1074 ) ) );
    struct RangeIter_656 *  it1077 = ( &temp1294 );
    while ( ( true ) ) {
        struct Maybe_239  dref1078 = ( (  next659 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_239_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_239_Just_t ) {
                struct envunion1293  temp1295 = (  fun1076 );
                ( temp1295.fun ( &temp1295.env ,  ( dref1078 .stuff .Maybe_239_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1296 (   struct env1292* env ,    int32_t  i1909 ) {
    return ( (  set663 ) ( ( env->s1905 ) ,  ( (  i32_dash_size229 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get667 ( ( env->s1905 ) , ( (  i32_dash_size229 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_6   map1290 (    struct Slice_629  s1905 ,    struct Cell_630 (*  fun1907 )(    struct Cell_630  ) ) {
    struct env1292 envinst1292 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each1291 ) ( ( (  to661 ) ( (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_i32163 ) ( (  op_dash_sub270 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1293){ .fun = (  enum Unit_6  (*) (  struct env1292*  ,    int32_t  ) )lam1296 , .env =  envinst1292 } ) ) );
    return ( Unit_6_Unit );
}

static  struct Cell_630   lam1297 (    struct Cell_630  dref3399 ) {
    return ( (  default_dash_cell675 ) ( ) );
}

static  enum Unit_6   clear_dash_screen1289 (    struct Screen_628 *  screen3398 ) {
    ( (  map1290 ) ( ( ( * (  screen3398 ) ) .f_current ) ,  (  lam1297 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_screen_dash_fg1298 (    struct Screen_628 *  screen3444 ,    struct Color_631  c3446 ) {
    (*  screen3444 ) .f_default_dash_fg = (  c3446 );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_screen_dash_bg1299 (    struct Screen_628 *  screen3449 ,    struct Color_631  c3451 ) {
    (*  screen3449 ) .f_default_dash_bg = (  c3451 );
    return ( Unit_6_Unit );
}

struct ScreenDims_1301 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

static  int32_t   cast1303 (    uint32_t  x356 ) {
    return ( (int32_t ) (  x356 ) );
}

static  int32_t   u32_dash_i321302 (    uint32_t  x660 ) {
    return ( (  cast1303 ) ( (  x660 ) ) );
}

static  int32_t   screen_dash_width1306 (    struct ScreenDims_1301  sd3784 ) {
    return (  op_dash_add241 ( (  op_dash_sub779 ( ( (  sd3784 ) .f_to_dash_sx ) , ( (  sd3784 ) .f_from_dash_sx ) ) ) , (  from_dash_integral38 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1307 (    struct ScreenDims_1301  sd3787 ) {
    return (  op_dash_add241 ( (  op_dash_sub779 ( ( (  sd3787 ) .f_to_dash_sy ) , ( (  sd3787 ) .f_from_dash_sy ) ) ) , (  from_dash_integral38 ( 1 ) ) ) );
}

static  enum Unit_6   update_dash_screen_dash_offset1305 (    struct Pane_110 *  pane3790 ,    struct ScreenDims_1301  sd3792 ) {
    struct Pos_19  cur3793 = ( ( * (  pane3790 ) ) .f_cursor );
    int32_t  cur_dash_sx3794 = ( (  pos_dash_vi916 ) ( ( ( * (  pane3790 ) ) .f_buf ) ,  (  cur3793 ) ) );
    struct ScreenCursorOffset_112  sc_dash_off3795 = ( ( * (  pane3790 ) ) .f_sc_dash_off );
    int32_t  sw3796 = (  op_dash_sub779 ( ( (  screen_dash_width1306 ) ( (  sd3792 ) ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    int32_t  sh3797 = (  op_dash_sub779 ( ( (  screen_dash_height1307 ) ( (  sd3792 ) ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    int32_t  margin3798 = (  from_dash_integral38 ( 5 ) );
    int32_t  csi3799 = ( (  pos_dash_vi916 ) ( ( ( * (  pane3790 ) ) .f_buf ) ,  (  cur3793 ) ) );
    int32_t  csx3800 = (  op_dash_sub779 ( (  csi3799 ) , ( (  sc_dash_off3795 ) .f_screen_dash_left ) ) );
    int32_t  csy3801 = (  op_dash_sub779 ( ( (  cur3793 ) .f_line ) , ( (  sc_dash_off3795 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left3802 = ( (  sc_dash_off3795 ) .f_screen_dash_left );
    if ( (  cmp390 ( (  csx3800 ) , (  margin3798 ) ) == 0 ) ) {
        nu_dash_screen_dash_left3802 = (  op_dash_sub779 ( (  csi3799 ) , (  margin3798 ) ) );
    } else {
        if ( (  cmp390 ( (  csx3800 ) , (  op_dash_sub779 ( (  sw3796 ) , (  margin3798 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left3802 = (  op_dash_add241 ( (  op_dash_sub779 ( (  csi3799 ) , (  sw3796 ) ) ) , (  margin3798 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left3803 = ( (  max931 ) ( (  nu_dash_screen_dash_left3802 ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top3804 = ( (  sc_dash_off3795 ) .f_screen_dash_top );
    if ( (  cmp390 ( (  csy3801 ) , (  margin3798 ) ) == 0 ) ) {
        nu_dash_screen_dash_top3804 = (  op_dash_sub779 ( ( (  cur3793 ) .f_line ) , (  margin3798 ) ) );
    } else {
        if ( (  cmp390 ( (  csy3801 ) , (  op_dash_sub779 ( (  sh3797 ) , (  margin3798 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top3804 = (  op_dash_add241 ( (  op_dash_sub779 ( ( (  cur3793 ) .f_line ) , (  sh3797 ) ) ) , (  margin3798 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top3805 = ( (  max931 ) ( (  nu_dash_screen_dash_top3804 ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    (*  pane3790 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_112) { .f_screen_dash_top = (  nu_dash_screen_dash_top3805 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left3803 ) } );
    return ( Unit_6_Unit );
}

struct StrConcat_1311 {
    struct StrView_20  field0;
    int32_t  field1;
};

static struct StrConcat_1311 StrConcat_1311_StrConcat (  struct StrView_20  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1311 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1314 {
    struct StrView_20  field0;
    struct StrConcat_1311  field1;
};

static struct StrConcat_1314 StrConcat_1314_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_1311  field1 ) {
    return ( struct StrConcat_1314 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1313 {
    struct StrConcat_1314  field0;
    struct Char_47  field1;
};

static struct StrConcat_1313 StrConcat_1313_StrConcat (  struct StrConcat_1314  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1313 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str1316 (    struct StrConcat_1311  self1503 ) {
    struct StrConcat_1311  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str162 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str169 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str1315 (    struct StrConcat_1314  self1503 ) {
    struct StrConcat_1314  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str162 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str1316 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str1312 (    struct StrConcat_1313  self1503 ) {
    struct StrConcat_1313  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str1315 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str170 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   assert1310 (    bool  cond1718 ,    struct StrConcat_1311  msg1720 ) {
    if ( ( ! (  cond1718 ) ) ) {
        ( (  print_dash_str1312 ) ( ( ( StrConcat_1313_StrConcat ) ( ( ( StrConcat_1314_StrConcat ) ( ( (  from_dash_string187 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1720 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    }
    return ( Unit_6_Unit );
}

struct AppendIter_1318 {
    struct StrViewIter_570  f_it;
    struct Char_47  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1318   into_dash_iter1319 (    struct AppendIter_1318  self1019 ) {
    return (  self1019 );
}

static  struct AppendIter_1318   append1320 (    struct StrViewIter_570  it1006 ,    struct Char_47  e1008 ) {
    return ( (struct AppendIter_1318) { .f_it = ( (  into_dash_iter572 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct Maybe_573   next1322 (    struct AppendIter_1318 *  self1022 ) {
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

static  bool   between1324 (    struct Pos_19  c1337 ,    struct Pos_19  l1339 ,    struct Pos_19  r1341 ) {
    struct Pos_19  from1342 = ( (  min388 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Pos_19  to1343 = ( (  max391 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp389 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp389 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1323 (    struct Pane_110 *  pane3776 ,    struct Pos_19  pos3778 ) {
    return ( {  struct Maybe_22  dref3779 = ( ( * (  pane3776 ) ) .f_sel ) ; dref3779.tag == Maybe_22_Just_t ? ( (  between1324 ) ( (  pos3778 ) ,  ( ( * (  pane3776 ) ) .f_cursor ) ,  ( dref3779 .stuff .Maybe_22_Just_s .field0 ) ) ) : ( false ) ; } );
}

static  int32_t   op_dash_mul1326 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  enum Unit_6   put_dash_char1325 (    struct Screen_628 *  screen3482 ,    struct Char_47  c3484 ,    int32_t  x3486 ,    int32_t  y3488 ) {
    int32_t  w3489 = ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3482 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp390 ( (  x3486 ) , (  w3489 ) ) != 0 ) || (  cmp390 ( (  y3488 ) , ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3482 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp390 ( (  x3486 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) ) || (  cmp390 ( (  y3488 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    size_t  i3490 = ( (  i32_dash_size229 ) ( (  op_dash_add241 ( (  op_dash_mul1326 ( (  y3488 ) , (  w3489 ) ) ) , (  x3486 ) ) ) ) );
    struct Color_631  fg3491 = ( ( * (  screen3482 ) ) .f_default_dash_fg );
    struct Color_631  bg3492 = ( ( * (  screen3482 ) ) .f_default_dash_bg );
    struct Char_47  c3493 = (  c3484 );
    int32_t  char_dash_width3494 = ( (  wcwidth932 ) ( (  c3493 ) ) );
    if ( ( (  cmp390 ( (  x3486 ) , (  from_dash_integral38 ( 0 ) ) ) == 2 ) && (  cmp390 ( ( (  elem_dash_get667 ( ( ( * (  screen3482 ) ) .f_current ) , (  op_dash_sub270 ( (  i3490 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral38 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_630  pc3495 = (  elem_dash_get667 ( ( ( * (  screen3482 ) ) .f_current ) , (  op_dash_sub270 ( (  i3490 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set663 ) ( ( ( * (  screen3482 ) ) .f_current ) ,  (  op_dash_sub270 ( (  i3490 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_630) { .f_c = ( (  from_dash_charlike188 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3495 ) .f_fg ) , .f_bg = ( (  pc3495 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral38 ( 1 ) ) } ) ) );
    }
    ( (  set663 ) ( ( ( * (  screen3482 ) ) .f_current ) ,  (  i3490 ) ,  ( (struct Cell_630) { .f_c = (  c3493 ) , .f_fg = (  fg3491 ) , .f_bg = (  bg3492 ) , .f_char_dash_width = (  char_dash_width3494 ) } ) ) );
    struct RangeIter_656  temp1327 =  into_dash_iter658 ( ( (  to661 ) ( (  op_dash_add241 ( (  x3486 ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  ( (  min436 ) ( (  op_dash_sub779 ( (  op_dash_add241 ( (  x3486 ) , (  char_dash_width3494 ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  w3489 ) ) ) ) ) );
    while (true) {
        struct Maybe_239  __cond1328 =  next659 (&temp1327);
        if (  __cond1328 .tag == 0 ) {
            break;
        }
        int32_t  xx3497 =  __cond1328 .stuff .Maybe_239_Just_s .field0;
        size_t  i3498 = ( (  i32_dash_size229 ) ( (  op_dash_add241 ( (  op_dash_mul1326 ( (  y3488 ) , (  w3489 ) ) ) , (  xx3497 ) ) ) ) );
        ( (  set663 ) ( ( ( * (  screen3482 ) ) .f_current ) ,  (  i3498 ) ,  ( (struct Cell_630) { .f_c = ( (  from_dash_charlike188 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = (  fg3491 ) , .f_bg = (  bg3492 ) , .f_char_dash_width = (  from_dash_integral38 ( 1 ) ) } ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   render1304 (    struct Screen_628 *  screen3808 ,    struct Pane_110 *  pane3810 ,    struct ScreenDims_1301  sd3812 ) {
    ( (  update_dash_screen_dash_offset1305 ) ( (  pane3810 ) ,  (  sd3812 ) ) );
    struct ScreenCursorOffset_112  sc_dash_off3813 = ( ( * (  pane3810 ) ) .f_sc_dash_off );
    struct RangeIter_656  temp1308 =  into_dash_iter658 ( ( (  to661 ) ( (  op_dash_add241 ( ( (  sc_dash_off3813 ) .f_screen_dash_top ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  ( (  min436 ) ( ( (  num_dash_lines958 ) ( ( ( * (  pane3810 ) ) .f_buf ) ) ) ,  (  op_dash_add241 ( ( (  sc_dash_off3813 ) .f_screen_dash_top ) , ( (  screen_dash_height1307 ) ( (  sd3812 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_239  __cond1309 =  next659 (&temp1308);
        if (  __cond1309 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num3815 =  __cond1309 .stuff .Maybe_239_Just_s .field0;
        int32_t  ybi3816 = (  op_dash_sub779 ( (  line_dash_num3815 ) , (  from_dash_integral38 ( 1 ) ) ) );
        int32_t  xbi3817 = ( (  vi_dash_bi960 ) ( ( ( * (  pane3810 ) ) .f_buf ) ,  (  ybi3816 ) ,  ( (  sc_dash_off3813 ) .f_screen_dash_left ) ) );
        struct StrView_20  line_dash_content3818 = ( (  line918 ) ( ( ( * (  pane3810 ) ) .f_buf ) ,  (  ybi3816 ) ) );
        int32_t  ys3819 = (  op_dash_sub779 ( (  op_dash_sub779 ( (  op_dash_add241 ( ( (  sd3812 ) .f_from_dash_sy ) , (  line_dash_num3815 ) ) ) , ( (  sc_dash_off3813 ) .f_screen_dash_top ) ) ) , (  from_dash_integral38 ( 1 ) ) ) );
        int32_t  vx3820 = (  op_dash_sub779 ( ( (  pos_dash_vi916 ) ( ( ( * (  pane3810 ) ) .f_buf ) ,  ( (  mk470 ) ( (  ybi3816 ) ,  (  xbi3817 ) ) ) ) ) , ( (  sc_dash_off3813 ) .f_screen_dash_left ) ) );
        ( (  assert1310 ) ( (  cmp390 ( (  vx3820 ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1311_StrConcat ) ( ( (  from_dash_string187 ) ( ( "vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx3820 ) ) ) ) );
        struct AppendIter_1318  temp1317 =  into_dash_iter1319 ( ( (  append1320 ) ( ( (  chars575 ) ( ( (  byte_dash_substr_dash_from1242 ) ( (  line_dash_content3818 ) ,  ( (  i32_dash_size229 ) ( (  xbi3817 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike188 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_573  __cond1321 =  next1322 (&temp1317);
            if (  __cond1321 .tag == 0 ) {
                break;
            }
            struct Char_47  c3822 =  __cond1321 .stuff .Maybe_573_Just_s .field0;
            if ( (  cmp390 ( (  vx3820 ) , ( (  sd3812 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_19  curpos3823 = ( (  mk470 ) ( (  ybi3816 ) ,  (  xbi3817 ) ) );
            bool  is_dash_cursor3824 = (  eq281 ( (  curpos3823 ) , ( ( * (  pane3810 ) ) .f_cursor ) ) );
            bool  in_dash_selection3825 = ( (  is_dash_in_dash_selection1323 ) ( (  pane3810 ) ,  ( (  mk470 ) ( (  ybi3816 ) ,  (  xbi3817 ) ) ) ) );
            if ( (  is_dash_cursor3824 ) ) {
                (*  screen3808 ) .f_default_dash_fg = ( ( Color_631_Color8 ) ( ( Color8_632_Black8 ) ) );
                (*  screen3808 ) .f_default_dash_bg = ( ( Color_631_Color8 ) ( ( Color8_632_White8 ) ) );
            } else {
                if ( (  in_dash_selection3825 ) ) {
                    (*  screen3808 ) .f_default_dash_bg = ( ( Color_631_Color8 ) ( ( Color8_632_Cyan8 ) ) );
                }
            }
            struct Maybe_113  dref3826 = ( (  char_dash_replacement923 ) ( (  c3822 ) ) );
            if ( dref3826.tag == Maybe_113_None_t ) {
                if ( ( ! ( (  cmp390 ( (  vx3820 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp390 ( (  op_dash_sub779 ( (  op_dash_add241 ( (  vx3820 ) , ( (  char_dash_screen_dash_width921 ) ( (  c3822 ) ) ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) , ( (  sd3812 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1325 ) ( (  screen3808 ) ,  (  c3822 ) ,  (  vx3820 ) ,  (  ys3819 ) ) );
                }
                vx3820 = (  op_dash_add241 ( (  vx3820 ) , ( (  char_dash_screen_dash_width921 ) ( (  c3822 ) ) ) ) );
            }
            else {
                if ( dref3826.tag == Maybe_113_Just_t ) {
                    struct StrViewIter_570  temp1329 =  into_dash_iter572 ( ( (  chars575 ) ( ( dref3826 .stuff .Maybe_113_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_573  __cond1330 =  next574 (&temp1329);
                        if (  __cond1330 .tag == 0 ) {
                            break;
                        }
                        struct Char_47  c3829 =  __cond1330 .stuff .Maybe_573_Just_s .field0;
                        if ( (  cmp390 ( (  vx3820 ) , (  from_dash_integral38 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1325 ) ( (  screen3808 ) ,  (  c3829 ) ,  (  vx3820 ) ,  (  ys3819 ) ) );
                        }
                        vx3820 = (  op_dash_add241 ( (  vx3820 ) , ( (  char_dash_screen_dash_width921 ) ( (  c3829 ) ) ) ) );
                    }
                }
            }
            (*  screen3808 ) .f_default_dash_fg = ( (struct Color_631) { .tag = Color_631_ColorDefault_t } );
            (*  screen3808 ) .f_default_dash_bg = ( (struct Color_631) { .tag = Color_631_ColorDefault_t } );
            xbi3817 = (  op_dash_add241 ( (  xbi3817 ) , ( (  size_dash_i32163 ) ( ( (  c3822 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    return ( Unit_6_Unit );
}

struct env1332 {
    ;
    ;
    ;
    ;
    struct Screen_628 *  screen4010;
    ;
    ;
    int32_t *  curline4014;
};

struct env1333 {
    ;
    ;
    ;
    ;
    struct Screen_628 *  screen4010;
    ;
    ;
    int32_t *  curline4014;
};

struct env1334 {
    ;
    ;
    ;
    ;
    struct Screen_628 *  screen4010;
    ;
    ;
    int32_t *  curline4014;
};

struct env1335 {
    ;
    ;
    ;
    ;
    struct Screen_628 *  screen4010;
    ;
    ;
    int32_t *  curline4014;
};

struct env1336 {
    ;
    ;
    ;
    ;
    struct Screen_628 *  screen4010;
    ;
    ;
    int32_t *  curline4014;
};

struct env1337 {
    ;
    ;
    ;
    ;
    struct Screen_628 *  screen4010;
    ;
    ;
    int32_t *  curline4014;
};

struct env1338 {
    ;
    ;
    ;
    ;
    struct Screen_628 *  screen4010;
    ;
    ;
    int32_t *  curline4014;
};

struct StrConcat_1341 {
    struct StrView_20  field0;
    enum Mode_111  field1;
};

static struct StrConcat_1341 StrConcat_1341_StrConcat (  struct StrView_20  field0 ,  enum Mode_111  field1 ) {
    return ( struct StrConcat_1341 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1340 {
    enum Unit_6  (*fun) (  struct env1332*  ,    struct StrConcat_1341  );
    struct env1332 env;
};

struct StrConcatIter_1346 {
    struct StrViewIter_570  f_left;
    struct StrViewIter_570  f_right;
};

struct Map_1345 {
    struct StrConcatIter_1346  field0;
    int32_t (*  field1 )(    struct Char_47  );
};

static struct Map_1345 Map_1345_Map (  struct StrConcatIter_1346  field0 ,  int32_t (*  field1 )(    struct Char_47  ) ) {
    return ( struct Map_1345 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1345   into_dash_iter1348 (    struct Map_1345  self796 ) {
    return (  self796 );
}

static  struct Maybe_573   next1350 (    struct StrConcatIter_1346 *  self1494 ) {
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

static  struct Maybe_239   next1349 (    struct Map_1345 *  dref798 ) {
    struct Maybe_573  dref801 = ( (  next1350 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_573_None_t ) {
        return ( (struct Maybe_239) { .tag = Maybe_239_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_573_Just_t ) {
            return ( ( Maybe_239_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_573_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1347 (    struct Map_1345  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1345  it1099 = ( (  into_dash_iter1348 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_239  dref1100 = ( (  next1349 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_239_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_239_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_239_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1351 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1351);
    exit ( 1 );
    ( Unit_6_Unit );
    int32_t  temp1352;
    return (  temp1352 );
}

static  int32_t   lam1353 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add241 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1344 (    struct Map_1345  it1110 ) {
    return ( (  reduce1347 ) ( (  it1110 ) ,  (  from_dash_integral38 ( 0 ) ) ,  (  lam1353 ) ) );
}

static  struct StrConcatIter_1346   into_dash_iter1355 (    struct StrConcatIter_1346  self1491 ) {
    return (  self1491 );
}

static  struct Map_1345   map1354 (    struct StrConcatIter_1346  iterable805 ,    int32_t (*  fun807 )(    struct Char_47  ) ) {
    struct StrConcatIter_1346  it808 = ( (  into_dash_iter1355 ) ( (  iterable805 ) ) );
    return ( ( Map_1345_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrView_20   todo1359 (  ) {
    ( (  print996 ) ( ( (  from_dash_string187 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( (  undefined483 ) ( ) );
}

static  struct StrViewIter_570   chars1358 (    enum Mode_111  self3731 ) {
    return ( (  chars575 ) ( ( {  enum Mode_111  dref3732 = (  self3731 ) ;  dref3732 == Mode_111_Normal ? ( (  from_dash_string187 ) ( ( "Normal" ) ,  ( 6 ) ) ) :  dref3732 == Mode_111_Insert ? ( (  from_dash_string187 ) ( ( "Insert" ) ,  ( 6 ) ) ) :  dref3732 == Mode_111_Select ? ( (  from_dash_string187 ) ( ( "Select" ) ,  ( 6 ) ) ) : ( (  todo1359 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1346   into_dash_iter1357 (    struct StrConcat_1341  dref1498 ) {
    return ( (struct StrConcatIter_1346) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1358 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1346   chars1356 (    struct StrConcat_1341  self1509 ) {
    return ( (  into_dash_iter1357 ) ( (  self1509 ) ) );
}

static  enum Unit_6   draw_dash_str1360 (    struct Screen_628 *  screen3501 ,    struct StrConcat_1341  s3503 ,    int32_t  x3505 ,    int32_t  y3507 ) {
    int32_t  w3508 = ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp390 ( (  y3507 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp390 ( (  y3507 ) , ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3509 = (  op_dash_add241 ( (  op_dash_mul1326 ( (  y3507 ) , (  w3508 ) ) ) , (  x3505 ) ) );
    int32_t  x3510 = ( (  min436 ) ( (  x3505 ) ,  (  w3508 ) ) );
    size_t  max_dash_len3511 = ( (  i32_dash_size229 ) ( (  op_dash_sub779 ( (  w3508 ) , (  x3510 ) ) ) ) );
    int32_t  xx3512 = (  from_dash_integral38 ( 0 ) );
    struct StrConcatIter_1346  temp1361 =  into_dash_iter1355 ( ( (  chars1356 ) ( (  s3503 ) ) ) );
    while (true) {
        struct Maybe_573  __cond1362 =  next1350 (&temp1361);
        if (  __cond1362 .tag == 0 ) {
            break;
        }
        struct Char_47  c3514 =  __cond1362 .stuff .Maybe_573_Just_s .field0;
        ( (  put_dash_char1325 ) ( (  screen3501 ) ,  (  c3514 ) ,  (  op_dash_add241 ( (  x3510 ) , (  xx3512 ) ) ) ,  (  y3507 ) ) );
        xx3512 = (  op_dash_add241 ( (  xx3512 ) , ( (  rendered_dash_wcwidth930 ) ( (  c3514 ) ) ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1343 (    struct Screen_628 *  screen3517 ,    struct StrConcat_1341  s3519 ,    int32_t  x3521 ,    int32_t  y3523 ) {
    int32_t  slen3524 = ( (  sum1344 ) ( ( (  map1354 ) ( ( (  chars1356 ) ( (  s3519 ) ) ) ,  (  rendered_dash_wcwidth930 ) ) ) ) );
    int32_t  w3525 = ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3517 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3526 = (  op_dash_sub779 ( (  op_dash_sub779 ( (  w3525 ) , (  x3521 ) ) ) , (  slen3524 ) ) );
    ( (  draw_dash_str1360 ) ( (  screen3517 ) ,  (  s3519 ) ,  (  x3526 ) ,  (  y3523 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1342 (   struct env1332* env ,    struct StrConcat_1341  s4017 ) {
    ( (  draw_dash_str_dash_right1343 ) ( ( env->screen4010 ) ,  (  s4017 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline4014 ) ) ) );
    (* env->curline4014 ) = (  op_dash_add241 ( ( * ( env->curline4014 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1367 {
    struct StrView_20  field0;
    struct Pos_19  field1;
};

static struct StrConcat_1367 StrConcat_1367_StrConcat (  struct StrView_20  field0 ,  struct Pos_19  field1 ) {
    return ( struct StrConcat_1367 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1366 {
    struct StrConcat_1367  field0;
    struct StrView_20  field1;
};

static struct StrConcat_1366 StrConcat_1366_StrConcat (  struct StrConcat_1367  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_1366 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1365 {
    struct StrConcat_1366  field0;
    enum CharType_978  field1;
};

static struct StrConcat_1365 StrConcat_1365_StrConcat (  struct StrConcat_1366  field0 ,  enum CharType_978  field1 ) {
    return ( struct StrConcat_1365 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1364 {
    enum Unit_6  (*fun) (  struct env1333*  ,    struct StrConcat_1365  );
    struct env1333 env;
};

struct IntStrIter_1379 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1378 {
    struct AppendIter_840  f_left;
    struct IntStrIter_1379  f_right;
};

struct StrConcatIter_1377 {
    struct StrConcatIter_1378  f_left;
    struct StrViewIter_570  f_right;
};

struct StrConcatIter_1376 {
    struct StrConcatIter_1377  f_left;
    struct IntStrIter_1379  f_right;
};

struct StrConcatIter_1375 {
    struct StrConcatIter_1376  f_left;
    struct AppendIter_840  f_right;
};

struct StrConcatIter_1374 {
    struct StrViewIter_570  f_left;
    struct StrConcatIter_1375  f_right;
};

struct StrConcatIter_1373 {
    struct StrConcatIter_1374  f_left;
    struct StrViewIter_570  f_right;
};

struct StrConcatIter_1372 {
    struct StrConcatIter_1373  f_left;
    struct StrViewIter_570  f_right;
};

struct Map_1371 {
    struct StrConcatIter_1372  field0;
    int32_t (*  field1 )(    struct Char_47  );
};

static struct Map_1371 Map_1371_Map (  struct StrConcatIter_1372  field0 ,  int32_t (*  field1 )(    struct Char_47  ) ) {
    return ( struct Map_1371 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1371   into_dash_iter1381 (    struct Map_1371  self796 ) {
    return (  self796 );
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
    return (  op_dash_mul1326 ( (  x1216 ) , ( env->base1210 ) ) );
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

static  struct Maybe_573   next1390 (    struct IntStrIter_1379 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_573_Just ) ( ( (  from_dash_charlike188 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp390 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_573) { .tag = Maybe_573_None_t } );
    }
    int32_t  trim_dash_down1423 = ( (  pow1391 ) ( (  from_dash_integral38 ( 10 ) ) ,  (  op_dash_sub779 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    int32_t  upper1424 = (  op_dash_div1399 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    int32_t  upper_dash_mask1425 = (  op_dash_mul1326 ( (  op_dash_div1399 ( (  upper1424 ) , (  from_dash_integral38 ( 10 ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1400 ) ( (  op_dash_sub779 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub779 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_47  digit_dash_char1427 = ( (  from_dash_u8859 ) ( (  op_dash_add749 ( (  digit1426 ) , (  from_dash_integral179 ( 48 ) ) ) ) ) );
    return ( ( Maybe_573_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_573   next1389 (    struct StrConcatIter_1378 *  self1494 ) {
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

static  struct Maybe_573   next1388 (    struct StrConcatIter_1377 *  self1494 ) {
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

static  struct Maybe_573   next1387 (    struct StrConcatIter_1376 *  self1494 ) {
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

static  struct Maybe_573   next1386 (    struct StrConcatIter_1375 *  self1494 ) {
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

static  struct Maybe_573   next1385 (    struct StrConcatIter_1374 *  self1494 ) {
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

static  struct Maybe_573   next1384 (    struct StrConcatIter_1373 *  self1494 ) {
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

static  struct Maybe_573   next1383 (    struct StrConcatIter_1372 *  self1494 ) {
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

static  struct Maybe_239   next1382 (    struct Map_1371 *  dref798 ) {
    struct Maybe_573  dref801 = ( (  next1383 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_573_None_t ) {
        return ( (struct Maybe_239) { .tag = Maybe_239_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_573_Just_t ) {
            return ( ( Maybe_239_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_573_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1380 (    struct Map_1371  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1371  it1099 = ( (  into_dash_iter1381 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_239  dref1100 = ( (  next1382 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_239_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_239_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_239_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1401 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1401);
    exit ( 1 );
    ( Unit_6_Unit );
    int32_t  temp1402;
    return (  temp1402 );
}

static  int32_t   lam1403 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add241 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1370 (    struct Map_1371  it1110 ) {
    return ( (  reduce1380 ) ( (  it1110 ) ,  (  from_dash_integral38 ( 0 ) ) ,  (  lam1403 ) ) );
}

static  struct StrConcatIter_1372   into_dash_iter1405 (    struct StrConcatIter_1372  self1491 ) {
    return (  self1491 );
}

static  struct Map_1371   map1404 (    struct StrConcatIter_1372  iterable805 ,    int32_t (*  fun807 )(    struct Char_47  ) ) {
    struct StrConcatIter_1372  it808 = ( (  into_dash_iter1405 ) ( (  iterable805 ) ) );
    return ( ( Map_1371_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1417 {
    struct Char_47  field0;
    int32_t  field1;
};

static struct StrConcat_1417 StrConcat_1417_StrConcat (  struct Char_47  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1417 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1416 {
    struct StrConcat_1417  field0;
    struct StrView_20  field1;
};

static struct StrConcat_1416 StrConcat_1416_StrConcat (  struct StrConcat_1417  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_1416 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1415 {
    struct StrConcat_1416  field0;
    int32_t  field1;
};

static struct StrConcat_1415 StrConcat_1415_StrConcat (  struct StrConcat_1416  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1415 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1414 {
    struct StrConcat_1415  field0;
    struct Char_47  field1;
};

static struct StrConcat_1414 StrConcat_1414_StrConcat (  struct StrConcat_1415  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1414 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   count_dash_digits1427 (    int32_t  self1430 ) {
    if ( (  eq282 ( (  self1430 ) , (  from_dash_integral38 ( 0 ) ) ) ) ) {
        return (  from_dash_integral38 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral38 ( 0 ) );
    while ( (  cmp390 ( (  self1430 ) , (  from_dash_integral38 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1399 ( (  self1430 ) , (  from_dash_integral38 ( 10 ) ) ) );
        digits1431 = (  op_dash_add241 ( (  digits1431 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1379   int_dash_iter1426 (    int32_t  int1434 ) {
    if ( (  cmp390 ( (  int1434 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1379) { .f_int = (  op_dash_neg603 ( (  int1434 ) ) ) , .f_len = ( (  count_dash_digits1427 ) ( (  op_dash_neg603 ( (  int1434 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1379) { .f_int = (  int1434 ) , .f_len = ( (  count_dash_digits1427 ) ( (  int1434 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1379   chars1425 (    int32_t  self1443 ) {
    return ( (  int_dash_iter1426 ) ( (  self1443 ) ) );
}

static  struct StrConcatIter_1378   into_dash_iter1424 (    struct StrConcat_1417  dref1498 ) {
    return ( (struct StrConcatIter_1378) { .f_left = ( (  chars880 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1425 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1378   chars1423 (    struct StrConcat_1417  self1509 ) {
    return ( (  into_dash_iter1424 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1377   into_dash_iter1422 (    struct StrConcat_1416  dref1498 ) {
    return ( (struct StrConcatIter_1377) { .f_left = ( (  chars1423 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars575 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1377   chars1421 (    struct StrConcat_1416  self1509 ) {
    return ( (  into_dash_iter1422 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1376   into_dash_iter1420 (    struct StrConcat_1415  dref1498 ) {
    return ( (struct StrConcatIter_1376) { .f_left = ( (  chars1421 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1425 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1376   chars1419 (    struct StrConcat_1415  self1509 ) {
    return ( (  into_dash_iter1420 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1375   into_dash_iter1418 (    struct StrConcat_1414  dref1498 ) {
    return ( (struct StrConcatIter_1375) { .f_left = ( (  chars1419 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1375   chars1413 (    struct StrConcat_1414  self1509 ) {
    return ( (  into_dash_iter1418 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1375   chars1412 (    struct Pos_19  self3558 ) {
    return ( (  chars1413 ) ( ( ( StrConcat_1414_StrConcat ) ( ( ( StrConcat_1415_StrConcat ) ( ( ( StrConcat_1416_StrConcat ) ( ( ( StrConcat_1417_StrConcat ) ( ( (  from_dash_charlike188 ) ( ( "(" ) ,  ( 1 ) ) ) ,  ( (  self3558 ) .f_line ) ) ) ,  ( (  from_dash_string187 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  self3558 ) .f_bi ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrConcatIter_1374   into_dash_iter1411 (    struct StrConcat_1367  dref1498 ) {
    return ( (struct StrConcatIter_1374) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1412 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1374   chars1410 (    struct StrConcat_1367  self1509 ) {
    return ( (  into_dash_iter1411 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1373   into_dash_iter1409 (    struct StrConcat_1366  dref1498 ) {
    return ( (struct StrConcatIter_1373) { .f_left = ( (  chars1410 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars575 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1373   chars1408 (    struct StrConcat_1366  self1509 ) {
    return ( (  into_dash_iter1409 ) ( (  self1509 ) ) );
}

static  struct StrViewIter_570   chars1428 (    enum CharType_978  self3720 ) {
    return ( (  chars575 ) ( ( {  enum CharType_978  dref3721 = (  self3720 ) ;  dref3721 == CharType_978_CharPunctuation ? ( (  from_dash_string187 ) ( ( "Punct" ) ,  ( 5 ) ) ) :  dref3721 == CharType_978_CharWord ? ( (  from_dash_string187 ) ( ( "Word" ) ,  ( 4 ) ) ) :  dref3721 == CharType_978_CharSpace ? ( (  from_dash_string187 ) ( ( "Space" ) ,  ( 5 ) ) ) : ( (  todo1359 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1372   into_dash_iter1407 (    struct StrConcat_1365  dref1498 ) {
    return ( (struct StrConcatIter_1372) { .f_left = ( (  chars1408 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1428 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1372   chars1406 (    struct StrConcat_1365  self1509 ) {
    return ( (  into_dash_iter1407 ) ( (  self1509 ) ) );
}

static  enum Unit_6   draw_dash_str1429 (    struct Screen_628 *  screen3501 ,    struct StrConcat_1365  s3503 ,    int32_t  x3505 ,    int32_t  y3507 ) {
    int32_t  w3508 = ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp390 ( (  y3507 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp390 ( (  y3507 ) , ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3509 = (  op_dash_add241 ( (  op_dash_mul1326 ( (  y3507 ) , (  w3508 ) ) ) , (  x3505 ) ) );
    int32_t  x3510 = ( (  min436 ) ( (  x3505 ) ,  (  w3508 ) ) );
    size_t  max_dash_len3511 = ( (  i32_dash_size229 ) ( (  op_dash_sub779 ( (  w3508 ) , (  x3510 ) ) ) ) );
    int32_t  xx3512 = (  from_dash_integral38 ( 0 ) );
    struct StrConcatIter_1372  temp1430 =  into_dash_iter1405 ( ( (  chars1406 ) ( (  s3503 ) ) ) );
    while (true) {
        struct Maybe_573  __cond1431 =  next1383 (&temp1430);
        if (  __cond1431 .tag == 0 ) {
            break;
        }
        struct Char_47  c3514 =  __cond1431 .stuff .Maybe_573_Just_s .field0;
        ( (  put_dash_char1325 ) ( (  screen3501 ) ,  (  c3514 ) ,  (  op_dash_add241 ( (  x3510 ) , (  xx3512 ) ) ) ,  (  y3507 ) ) );
        xx3512 = (  op_dash_add241 ( (  xx3512 ) , ( (  rendered_dash_wcwidth930 ) ( (  c3514 ) ) ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1369 (    struct Screen_628 *  screen3517 ,    struct StrConcat_1365  s3519 ,    int32_t  x3521 ,    int32_t  y3523 ) {
    int32_t  slen3524 = ( (  sum1370 ) ( ( (  map1404 ) ( ( (  chars1406 ) ( (  s3519 ) ) ) ,  (  rendered_dash_wcwidth930 ) ) ) ) );
    int32_t  w3525 = ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3517 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3526 = (  op_dash_sub779 ( (  op_dash_sub779 ( (  w3525 ) , (  x3521 ) ) ) , (  slen3524 ) ) );
    ( (  draw_dash_str1429 ) ( (  screen3517 ) ,  (  s3519 ) ,  (  x3526 ) ,  (  y3523 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1368 (   struct env1333* env ,    struct StrConcat_1365  s4017 ) {
    ( (  draw_dash_str_dash_right1369 ) ( ( env->screen4010 ) ,  (  s4017 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline4014 ) ) ) );
    (* env->curline4014 ) = (  op_dash_add241 ( ( * ( env->curline4014 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1434 {
    struct StrView_20  field0;
    struct Maybe_22  field1;
};

static struct StrConcat_1434 StrConcat_1434_StrConcat (  struct StrView_20  field0 ,  struct Maybe_22  field1 ) {
    return ( struct StrConcat_1434 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1433 {
    enum Unit_6  (*fun) (  struct env1334*  ,    struct StrConcat_1434  );
    struct env1334 env;
};

struct StrConcatIter_1441 {
    struct StrConcatIter_1374  f_left;
    struct AppendIter_840  f_right;
};

struct StrCaseIter_1440 {
    enum {
        StrCaseIter_1440_StrCaseIter1_t,
        StrCaseIter_1440_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_570  field0;
        } StrCaseIter_1440_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1441  field0;
        } StrCaseIter_1440_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1440 StrCaseIter_1440_StrCaseIter1 (  struct StrViewIter_570  field0 ) {
    return ( struct StrCaseIter_1440 ) { .tag = StrCaseIter_1440_StrCaseIter1_t, .stuff = { .StrCaseIter_1440_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1440 StrCaseIter_1440_StrCaseIter2 (  struct StrConcatIter_1441  field0 ) {
    return ( struct StrCaseIter_1440 ) { .tag = StrCaseIter_1440_StrCaseIter2_t, .stuff = { .StrCaseIter_1440_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1439 {
    struct StrViewIter_570  f_left;
    struct StrCaseIter_1440  f_right;
};

struct Map_1438 {
    struct StrConcatIter_1439  field0;
    int32_t (*  field1 )(    struct Char_47  );
};

static struct Map_1438 Map_1438_Map (  struct StrConcatIter_1439  field0 ,  int32_t (*  field1 )(    struct Char_47  ) ) {
    return ( struct Map_1438 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1438   into_dash_iter1443 (    struct Map_1438  self796 ) {
    return (  self796 );
}

static  struct Maybe_573   next1447 (    struct StrConcatIter_1441 *  self1494 ) {
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

static  struct Maybe_573   next1446 (    struct StrCaseIter_1440 *  self1516 ) {
    struct StrCaseIter_1440 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1440_StrCaseIter1_t ) {
        return ( (  next574 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1440_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1440_StrCaseIter2_t ) {
            return ( (  next1447 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1440_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_573   next1445 (    struct StrConcatIter_1439 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1446 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_239   next1444 (    struct Map_1438 *  dref798 ) {
    struct Maybe_573  dref801 = ( (  next1445 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_573_None_t ) {
        return ( (struct Maybe_239) { .tag = Maybe_239_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_573_Just_t ) {
            return ( ( Maybe_239_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_573_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1442 (    struct Map_1438  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1438  it1099 = ( (  into_dash_iter1443 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_239  dref1100 = ( (  next1444 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_239_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_239_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_239_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1448 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1448);
    exit ( 1 );
    ( Unit_6_Unit );
    int32_t  temp1449;
    return (  temp1449 );
}

static  int32_t   lam1450 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add241 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1437 (    struct Map_1438  it1110 ) {
    return ( (  reduce1442 ) ( (  it1110 ) ,  (  from_dash_integral38 ( 0 ) ) ,  (  lam1450 ) ) );
}

static  struct StrConcatIter_1439   into_dash_iter1452 (    struct StrConcatIter_1439  self1491 ) {
    return (  self1491 );
}

static  struct Map_1438   map1451 (    struct StrConcatIter_1439  iterable805 ,    int32_t (*  fun807 )(    struct Char_47  ) ) {
    struct StrConcatIter_1439  it808 = ( (  into_dash_iter1452 ) ( (  iterable805 ) ) );
    return ( ( Map_1438_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1457 {
    struct StrConcat_1367  field0;
    struct Char_47  field1;
};

static struct StrConcat_1457 StrConcat_1457_StrConcat (  struct StrConcat_1367  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1457 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1456 {
    enum {
        StrCase_1456_StrCase1_t,
        StrCase_1456_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_20  field0;
        } StrCase_1456_StrCase1_s;
        struct {
            struct StrConcat_1457  field0;
        } StrCase_1456_StrCase2_s;
    } stuff;
};

static struct StrCase_1456 StrCase_1456_StrCase1 (  struct StrView_20  field0 ) {
    return ( struct StrCase_1456 ) { .tag = StrCase_1456_StrCase1_t, .stuff = { .StrCase_1456_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1456 StrCase_1456_StrCase2 (  struct StrConcat_1457  field0 ) {
    return ( struct StrCase_1456 ) { .tag = StrCase_1456_StrCase2_t, .stuff = { .StrCase_1456_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1441   into_dash_iter1462 (    struct StrConcat_1457  dref1498 ) {
    return ( (struct StrConcatIter_1441) { .f_left = ( (  chars1410 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1441   chars1461 (    struct StrConcat_1457  self1509 ) {
    return ( (  into_dash_iter1462 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1440   into_dash_iter1460 (    struct StrCase_1456  self1522 ) {
    struct StrCase_1456  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1456_StrCase1_t ) {
        return ( ( StrCaseIter_1440_StrCaseIter1 ) ( ( (  chars575 ) ( ( dref1523 .stuff .StrCase_1456_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1456_StrCase2_t ) {
            return ( ( StrCaseIter_1440_StrCaseIter2 ) ( ( (  chars1461 ) ( ( dref1523 .stuff .StrCase_1456_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1440   chars1459 (    struct StrCase_1456  self1534 ) {
    return ( (  into_dash_iter1460 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1440   chars1455 (    struct Maybe_22  self1548 ) {
    struct StrCase_1456  temp1458;
    struct StrCase_1456  c1549 = (  temp1458 );
    struct Maybe_22  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_22_None_t ) {
        c1549 = ( ( StrCase_1456_StrCase1 ) ( ( (  from_dash_string187 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_22_Just_t ) {
            c1549 = ( ( StrCase_1456_StrCase2 ) ( ( ( StrConcat_1457_StrConcat ) ( ( ( StrConcat_1367_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_22_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1459 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1439   into_dash_iter1454 (    struct StrConcat_1434  dref1498 ) {
    return ( (struct StrConcatIter_1439) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1455 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1439   chars1453 (    struct StrConcat_1434  self1509 ) {
    return ( (  into_dash_iter1454 ) ( (  self1509 ) ) );
}

static  enum Unit_6   draw_dash_str1463 (    struct Screen_628 *  screen3501 ,    struct StrConcat_1434  s3503 ,    int32_t  x3505 ,    int32_t  y3507 ) {
    int32_t  w3508 = ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp390 ( (  y3507 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp390 ( (  y3507 ) , ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3509 = (  op_dash_add241 ( (  op_dash_mul1326 ( (  y3507 ) , (  w3508 ) ) ) , (  x3505 ) ) );
    int32_t  x3510 = ( (  min436 ) ( (  x3505 ) ,  (  w3508 ) ) );
    size_t  max_dash_len3511 = ( (  i32_dash_size229 ) ( (  op_dash_sub779 ( (  w3508 ) , (  x3510 ) ) ) ) );
    int32_t  xx3512 = (  from_dash_integral38 ( 0 ) );
    struct StrConcatIter_1439  temp1464 =  into_dash_iter1452 ( ( (  chars1453 ) ( (  s3503 ) ) ) );
    while (true) {
        struct Maybe_573  __cond1465 =  next1445 (&temp1464);
        if (  __cond1465 .tag == 0 ) {
            break;
        }
        struct Char_47  c3514 =  __cond1465 .stuff .Maybe_573_Just_s .field0;
        ( (  put_dash_char1325 ) ( (  screen3501 ) ,  (  c3514 ) ,  (  op_dash_add241 ( (  x3510 ) , (  xx3512 ) ) ) ,  (  y3507 ) ) );
        xx3512 = (  op_dash_add241 ( (  xx3512 ) , ( (  rendered_dash_wcwidth930 ) ( (  c3514 ) ) ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1436 (    struct Screen_628 *  screen3517 ,    struct StrConcat_1434  s3519 ,    int32_t  x3521 ,    int32_t  y3523 ) {
    int32_t  slen3524 = ( (  sum1437 ) ( ( (  map1451 ) ( ( (  chars1453 ) ( (  s3519 ) ) ) ,  (  rendered_dash_wcwidth930 ) ) ) ) );
    int32_t  w3525 = ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3517 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3526 = (  op_dash_sub779 ( (  op_dash_sub779 ( (  w3525 ) , (  x3521 ) ) ) , (  slen3524 ) ) );
    ( (  draw_dash_str1463 ) ( (  screen3517 ) ,  (  s3519 ) ,  (  x3526 ) ,  (  y3523 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1435 (   struct env1334* env ,    struct StrConcat_1434  s4017 ) {
    ( (  draw_dash_str_dash_right1436 ) ( ( env->screen4010 ) ,  (  s4017 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline4014 ) ) ) );
    (* env->curline4014 ) = (  op_dash_add241 ( ( * ( env->curline4014 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1468 {
    struct StrView_20  field0;
    struct Maybe_113  field1;
};

static struct StrConcat_1468 StrConcat_1468_StrConcat (  struct StrView_20  field0 ,  struct Maybe_113  field1 ) {
    return ( struct StrConcat_1468 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1467 {
    enum Unit_6  (*fun) (  struct env1335*  ,    struct StrConcat_1468  );
    struct env1335 env;
};

struct StrConcatIter_1475 {
    struct StrConcatIter_1346  f_left;
    struct AppendIter_840  f_right;
};

struct StrCaseIter_1474 {
    enum {
        StrCaseIter_1474_StrCaseIter1_t,
        StrCaseIter_1474_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_570  field0;
        } StrCaseIter_1474_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1475  field0;
        } StrCaseIter_1474_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1474 StrCaseIter_1474_StrCaseIter1 (  struct StrViewIter_570  field0 ) {
    return ( struct StrCaseIter_1474 ) { .tag = StrCaseIter_1474_StrCaseIter1_t, .stuff = { .StrCaseIter_1474_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1474 StrCaseIter_1474_StrCaseIter2 (  struct StrConcatIter_1475  field0 ) {
    return ( struct StrCaseIter_1474 ) { .tag = StrCaseIter_1474_StrCaseIter2_t, .stuff = { .StrCaseIter_1474_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1473 {
    struct StrViewIter_570  f_left;
    struct StrCaseIter_1474  f_right;
};

struct Map_1472 {
    struct StrConcatIter_1473  field0;
    int32_t (*  field1 )(    struct Char_47  );
};

static struct Map_1472 Map_1472_Map (  struct StrConcatIter_1473  field0 ,  int32_t (*  field1 )(    struct Char_47  ) ) {
    return ( struct Map_1472 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1472   into_dash_iter1477 (    struct Map_1472  self796 ) {
    return (  self796 );
}

static  struct Maybe_573   next1481 (    struct StrConcatIter_1475 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1350 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next866 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1480 (    struct StrCaseIter_1474 *  self1516 ) {
    struct StrCaseIter_1474 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1474_StrCaseIter1_t ) {
        return ( (  next574 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1474_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1474_StrCaseIter2_t ) {
            return ( (  next1481 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1474_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_573   next1479 (    struct StrConcatIter_1473 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1480 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_239   next1478 (    struct Map_1472 *  dref798 ) {
    struct Maybe_573  dref801 = ( (  next1479 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_573_None_t ) {
        return ( (struct Maybe_239) { .tag = Maybe_239_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_573_Just_t ) {
            return ( ( Maybe_239_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_573_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1476 (    struct Map_1472  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1472  it1099 = ( (  into_dash_iter1477 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_239  dref1100 = ( (  next1478 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_239_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_239_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_239_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1482 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1482);
    exit ( 1 );
    ( Unit_6_Unit );
    int32_t  temp1483;
    return (  temp1483 );
}

static  int32_t   lam1484 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add241 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1471 (    struct Map_1472  it1110 ) {
    return ( (  reduce1476 ) ( (  it1110 ) ,  (  from_dash_integral38 ( 0 ) ) ,  (  lam1484 ) ) );
}

static  struct StrConcatIter_1473   into_dash_iter1486 (    struct StrConcatIter_1473  self1491 ) {
    return (  self1491 );
}

static  struct Map_1472   map1485 (    struct StrConcatIter_1473  iterable805 ,    int32_t (*  fun807 )(    struct Char_47  ) ) {
    struct StrConcatIter_1473  it808 = ( (  into_dash_iter1486 ) ( (  iterable805 ) ) );
    return ( ( Map_1472_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrCase_1490 {
    enum {
        StrCase_1490_StrCase1_t,
        StrCase_1490_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_20  field0;
        } StrCase_1490_StrCase1_s;
        struct {
            struct StrConcat_445  field0;
        } StrCase_1490_StrCase2_s;
    } stuff;
};

static struct StrCase_1490 StrCase_1490_StrCase1 (  struct StrView_20  field0 ) {
    return ( struct StrCase_1490 ) { .tag = StrCase_1490_StrCase1_t, .stuff = { .StrCase_1490_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1490 StrCase_1490_StrCase2 (  struct StrConcat_445  field0 ) {
    return ( struct StrCase_1490 ) { .tag = StrCase_1490_StrCase2_t, .stuff = { .StrCase_1490_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1346   into_dash_iter1497 (    struct StrConcat_446  dref1498 ) {
    return ( (struct StrConcatIter_1346) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars575 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1346   chars1496 (    struct StrConcat_446  self1509 ) {
    return ( (  into_dash_iter1497 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1475   into_dash_iter1495 (    struct StrConcat_445  dref1498 ) {
    return ( (struct StrConcatIter_1475) { .f_left = ( (  chars1496 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1475   chars1494 (    struct StrConcat_445  self1509 ) {
    return ( (  into_dash_iter1495 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1474   into_dash_iter1493 (    struct StrCase_1490  self1522 ) {
    struct StrCase_1490  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1490_StrCase1_t ) {
        return ( ( StrCaseIter_1474_StrCaseIter1 ) ( ( (  chars575 ) ( ( dref1523 .stuff .StrCase_1490_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1490_StrCase2_t ) {
            return ( ( StrCaseIter_1474_StrCaseIter2 ) ( ( (  chars1494 ) ( ( dref1523 .stuff .StrCase_1490_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1474   chars1492 (    struct StrCase_1490  self1534 ) {
    return ( (  into_dash_iter1493 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1474   chars1489 (    struct Maybe_113  self1548 ) {
    struct StrCase_1490  temp1491;
    struct StrCase_1490  c1549 = (  temp1491 );
    struct Maybe_113  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_113_None_t ) {
        c1549 = ( ( StrCase_1490_StrCase1 ) ( ( (  from_dash_string187 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_113_Just_t ) {
            c1549 = ( ( StrCase_1490_StrCase2 ) ( ( ( StrConcat_445_StrConcat ) ( ( ( StrConcat_446_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_113_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1492 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1473   into_dash_iter1488 (    struct StrConcat_1468  dref1498 ) {
    return ( (struct StrConcatIter_1473) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1489 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1473   chars1487 (    struct StrConcat_1468  self1509 ) {
    return ( (  into_dash_iter1488 ) ( (  self1509 ) ) );
}

static  enum Unit_6   draw_dash_str1498 (    struct Screen_628 *  screen3501 ,    struct StrConcat_1468  s3503 ,    int32_t  x3505 ,    int32_t  y3507 ) {
    int32_t  w3508 = ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp390 ( (  y3507 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp390 ( (  y3507 ) , ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3509 = (  op_dash_add241 ( (  op_dash_mul1326 ( (  y3507 ) , (  w3508 ) ) ) , (  x3505 ) ) );
    int32_t  x3510 = ( (  min436 ) ( (  x3505 ) ,  (  w3508 ) ) );
    size_t  max_dash_len3511 = ( (  i32_dash_size229 ) ( (  op_dash_sub779 ( (  w3508 ) , (  x3510 ) ) ) ) );
    int32_t  xx3512 = (  from_dash_integral38 ( 0 ) );
    struct StrConcatIter_1473  temp1499 =  into_dash_iter1486 ( ( (  chars1487 ) ( (  s3503 ) ) ) );
    while (true) {
        struct Maybe_573  __cond1500 =  next1479 (&temp1499);
        if (  __cond1500 .tag == 0 ) {
            break;
        }
        struct Char_47  c3514 =  __cond1500 .stuff .Maybe_573_Just_s .field0;
        ( (  put_dash_char1325 ) ( (  screen3501 ) ,  (  c3514 ) ,  (  op_dash_add241 ( (  x3510 ) , (  xx3512 ) ) ) ,  (  y3507 ) ) );
        xx3512 = (  op_dash_add241 ( (  xx3512 ) , ( (  rendered_dash_wcwidth930 ) ( (  c3514 ) ) ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1470 (    struct Screen_628 *  screen3517 ,    struct StrConcat_1468  s3519 ,    int32_t  x3521 ,    int32_t  y3523 ) {
    int32_t  slen3524 = ( (  sum1471 ) ( ( (  map1485 ) ( ( (  chars1487 ) ( (  s3519 ) ) ) ,  (  rendered_dash_wcwidth930 ) ) ) ) );
    int32_t  w3525 = ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3517 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3526 = (  op_dash_sub779 ( (  op_dash_sub779 ( (  w3525 ) , (  x3521 ) ) ) , (  slen3524 ) ) );
    ( (  draw_dash_str1498 ) ( (  screen3517 ) ,  (  s3519 ) ,  (  x3526 ) ,  (  y3523 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1469 (   struct env1335* env ,    struct StrConcat_1468  s4017 ) {
    ( (  draw_dash_str_dash_right1470 ) ( ( env->screen4010 ) ,  (  s4017 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline4014 ) ) ) );
    (* env->curline4014 ) = (  op_dash_add241 ( ( * ( env->curline4014 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1503 {
    struct StrView_20  field0;
    struct EditorMode_114  field1;
};

static struct StrConcat_1503 StrConcat_1503_StrConcat (  struct StrView_20  field0 ,  struct EditorMode_114  field1 ) {
    return ( struct StrConcat_1503 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1502 {
    enum Unit_6  (*fun) (  struct env1336*  ,    struct StrConcat_1503  );
    struct env1336 env;
};

struct StrConcat_1511 {
    struct StrView_20  field0;
    struct StrBuilder_44  field1;
};

static struct StrConcat_1511 StrConcat_1511_StrConcat (  struct StrView_20  field0 ,  struct StrBuilder_44  field1 ) {
    return ( struct StrConcat_1511 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1510 {
    struct StrConcat_1511  field0;
    struct Char_47  field1;
};

static struct StrConcat_1510 StrConcat_1510_StrConcat (  struct StrConcat_1511  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1510 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1509 {
    enum {
        StrCase_1509_StrCase1_t,
        StrCase_1509_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_20  field0;
        } StrCase_1509_StrCase1_s;
        struct {
            struct StrConcat_1510  field0;
        } StrCase_1509_StrCase2_s;
    } stuff;
};

static struct StrCase_1509 StrCase_1509_StrCase1 (  struct StrView_20  field0 ) {
    return ( struct StrCase_1509 ) { .tag = StrCase_1509_StrCase1_t, .stuff = { .StrCase_1509_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1509 StrCase_1509_StrCase2 (  struct StrConcat_1510  field0 ) {
    return ( struct StrCase_1509 ) { .tag = StrCase_1509_StrCase2_t, .stuff = { .StrCase_1509_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrCaseIter_1474   undefined1514 (  ) {
    struct StrCaseIter_1474  temp1515;
    return (  temp1515 );
}

static  struct StrCaseIter_1474   todo1513 (  ) {
    ( (  print996 ) ( ( (  from_dash_string187 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( (  undefined1514 ) ( ) );
}

static  struct StrViewIter_570   chars1522 (    struct StrBuilder_44  s2775 ) {
    return ( (  into_dash_iter576 ) ( ( (  as_dash_str1180 ) ( ( & (  s2775 ) ) ) ) ) );
}

static  struct StrConcatIter_1346   into_dash_iter1521 (    struct StrConcat_1511  dref1498 ) {
    return ( (struct StrConcatIter_1346) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1522 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1346   chars1520 (    struct StrConcat_1511  self1509 ) {
    return ( (  into_dash_iter1521 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1475   into_dash_iter1519 (    struct StrConcat_1510  dref1498 ) {
    return ( (struct StrConcatIter_1475) { .f_left = ( (  chars1520 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1475   chars1518 (    struct StrConcat_1510  self1509 ) {
    return ( (  into_dash_iter1519 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1474   into_dash_iter1517 (    struct StrCase_1509  self1522 ) {
    struct StrCase_1509  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1509_StrCase1_t ) {
        return ( ( StrCaseIter_1474_StrCaseIter1 ) ( ( (  chars575 ) ( ( dref1523 .stuff .StrCase_1509_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1509_StrCase2_t ) {
            return ( ( StrCaseIter_1474_StrCaseIter2 ) ( ( (  chars1518 ) ( ( dref1523 .stuff .StrCase_1509_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1474   chars1516 (    struct StrCase_1509  self1534 ) {
    return ( (  into_dash_iter1517 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1474   chars1508 (    struct EditorMode_114  self3946 ) {
    struct StrCase_1509  temp1512;
    struct StrCase_1509  c3947 = (  temp1512 );
    struct EditorMode_114  dref3948 = (  self3946 );
    if ( dref3948.tag == EditorMode_114_Normal_t ) {
        c3947 = ( ( StrCase_1509_StrCase1 ) ( ( (  from_dash_string187 ) ( ( "Normal" ) ,  ( 6 ) ) ) ) );
    }
    else {
        if ( dref3948.tag == EditorMode_114_Cmd_t ) {
            c3947 = ( ( StrCase_1509_StrCase2 ) ( ( ( StrConcat_1510_StrConcat ) ( ( ( StrConcat_1511_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Cmd(" ) ,  ( 4 ) ) ) ,  ( dref3948 .stuff .EditorMode_114_Cmd_s .field0 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
        else {
            if ( true ) {
                return ( (  todo1513 ) ( ) );
            }
        }
    }
    return ( (  chars1516 ) ( (  c3947 ) ) );
}

static  struct StrConcatIter_1473   into_dash_iter1507 (    struct StrConcat_1503  dref1498 ) {
    return ( (struct StrConcatIter_1473) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1508 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1473   chars1506 (    struct StrConcat_1503  self1509 ) {
    return ( (  into_dash_iter1507 ) ( (  self1509 ) ) );
}

static  enum Unit_6   draw_dash_str1523 (    struct Screen_628 *  screen3501 ,    struct StrConcat_1503  s3503 ,    int32_t  x3505 ,    int32_t  y3507 ) {
    int32_t  w3508 = ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp390 ( (  y3507 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp390 ( (  y3507 ) , ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3509 = (  op_dash_add241 ( (  op_dash_mul1326 ( (  y3507 ) , (  w3508 ) ) ) , (  x3505 ) ) );
    int32_t  x3510 = ( (  min436 ) ( (  x3505 ) ,  (  w3508 ) ) );
    size_t  max_dash_len3511 = ( (  i32_dash_size229 ) ( (  op_dash_sub779 ( (  w3508 ) , (  x3510 ) ) ) ) );
    int32_t  xx3512 = (  from_dash_integral38 ( 0 ) );
    struct StrConcatIter_1473  temp1524 =  into_dash_iter1486 ( ( (  chars1506 ) ( (  s3503 ) ) ) );
    while (true) {
        struct Maybe_573  __cond1525 =  next1479 (&temp1524);
        if (  __cond1525 .tag == 0 ) {
            break;
        }
        struct Char_47  c3514 =  __cond1525 .stuff .Maybe_573_Just_s .field0;
        ( (  put_dash_char1325 ) ( (  screen3501 ) ,  (  c3514 ) ,  (  op_dash_add241 ( (  x3510 ) , (  xx3512 ) ) ) ,  (  y3507 ) ) );
        xx3512 = (  op_dash_add241 ( (  xx3512 ) , ( (  rendered_dash_wcwidth930 ) ( (  c3514 ) ) ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1505 (    struct Screen_628 *  screen3517 ,    struct StrConcat_1503  s3519 ,    int32_t  x3521 ,    int32_t  y3523 ) {
    int32_t  slen3524 = ( (  sum1471 ) ( ( (  map1485 ) ( ( (  chars1506 ) ( (  s3519 ) ) ) ,  (  rendered_dash_wcwidth930 ) ) ) ) );
    int32_t  w3525 = ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3517 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3526 = (  op_dash_sub779 ( (  op_dash_sub779 ( (  w3525 ) , (  x3521 ) ) ) , (  slen3524 ) ) );
    ( (  draw_dash_str1523 ) ( (  screen3517 ) ,  (  s3519 ) ,  (  x3526 ) ,  (  y3523 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1504 (   struct env1336* env ,    struct StrConcat_1503  s4017 ) {
    ( (  draw_dash_str_dash_right1505 ) ( ( env->screen4010 ) ,  (  s4017 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline4014 ) ) ) );
    (* env->curline4014 ) = (  op_dash_add241 ( ( * ( env->curline4014 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct envunion1527 {
    enum Unit_6  (*fun) (  struct env1335*  ,    struct StrConcat_1468  );
    struct env1335 env;
};

struct StrConcat_1532 {
    struct StrConcat_1311  field0;
    struct StrView_20  field1;
};

static struct StrConcat_1532 StrConcat_1532_StrConcat (  struct StrConcat_1311  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_1532 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1531 {
    struct StrConcat_1532  field0;
    int32_t  field1;
};

static struct StrConcat_1531 StrConcat_1531_StrConcat (  struct StrConcat_1532  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1531 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1530 {
    struct StrConcat_1531  field0;
    struct Char_47  field1;
};

static struct StrConcat_1530 StrConcat_1530_StrConcat (  struct StrConcat_1531  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1530 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1529 {
    enum Unit_6  (*fun) (  struct env1337*  ,    struct StrConcat_1530  );
    struct env1337 env;
};

struct StrConcatIter_1540 {
    struct StrViewIter_570  f_left;
    struct IntStrIter_1379  f_right;
};

struct StrConcatIter_1539 {
    struct StrConcatIter_1540  f_left;
    struct StrViewIter_570  f_right;
};

struct StrConcatIter_1538 {
    struct StrConcatIter_1539  f_left;
    struct IntStrIter_1379  f_right;
};

struct StrConcatIter_1537 {
    struct StrConcatIter_1538  f_left;
    struct AppendIter_840  f_right;
};

struct Map_1536 {
    struct StrConcatIter_1537  field0;
    int32_t (*  field1 )(    struct Char_47  );
};

static struct Map_1536 Map_1536_Map (  struct StrConcatIter_1537  field0 ,  int32_t (*  field1 )(    struct Char_47  ) ) {
    return ( struct Map_1536 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1536   into_dash_iter1542 (    struct Map_1536  self796 ) {
    return (  self796 );
}

static  struct Maybe_573   next1547 (    struct StrConcatIter_1540 *  self1494 ) {
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

static  struct Maybe_573   next1546 (    struct StrConcatIter_1539 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1547 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1545 (    struct StrConcatIter_1538 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1546 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1390 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1544 (    struct StrConcatIter_1537 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1545 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next866 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_239   next1543 (    struct Map_1536 *  dref798 ) {
    struct Maybe_573  dref801 = ( (  next1544 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_573_None_t ) {
        return ( (struct Maybe_239) { .tag = Maybe_239_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_573_Just_t ) {
            return ( ( Maybe_239_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_573_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1541 (    struct Map_1536  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1536  it1099 = ( (  into_dash_iter1542 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_239  dref1100 = ( (  next1543 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_239_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_239_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_239_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1548 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1548);
    exit ( 1 );
    ( Unit_6_Unit );
    int32_t  temp1549;
    return (  temp1549 );
}

static  int32_t   lam1550 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add241 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1535 (    struct Map_1536  it1110 ) {
    return ( (  reduce1541 ) ( (  it1110 ) ,  (  from_dash_integral38 ( 0 ) ) ,  (  lam1550 ) ) );
}

static  struct StrConcatIter_1537   into_dash_iter1552 (    struct StrConcatIter_1537  self1491 ) {
    return (  self1491 );
}

static  struct Map_1536   map1551 (    struct StrConcatIter_1537  iterable805 ,    int32_t (*  fun807 )(    struct Char_47  ) ) {
    struct StrConcatIter_1537  it808 = ( (  into_dash_iter1552 ) ( (  iterable805 ) ) );
    return ( ( Map_1536_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_1540   into_dash_iter1560 (    struct StrConcat_1311  dref1498 ) {
    return ( (struct StrConcatIter_1540) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1425 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1540   chars1559 (    struct StrConcat_1311  self1509 ) {
    return ( (  into_dash_iter1560 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1539   into_dash_iter1558 (    struct StrConcat_1532  dref1498 ) {
    return ( (struct StrConcatIter_1539) { .f_left = ( (  chars1559 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars575 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1539   chars1557 (    struct StrConcat_1532  self1509 ) {
    return ( (  into_dash_iter1558 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1538   into_dash_iter1556 (    struct StrConcat_1531  dref1498 ) {
    return ( (struct StrConcatIter_1538) { .f_left = ( (  chars1557 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1425 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1538   chars1555 (    struct StrConcat_1531  self1509 ) {
    return ( (  into_dash_iter1556 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1537   into_dash_iter1554 (    struct StrConcat_1530  dref1498 ) {
    return ( (struct StrConcatIter_1537) { .f_left = ( (  chars1555 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1537   chars1553 (    struct StrConcat_1530  self1509 ) {
    return ( (  into_dash_iter1554 ) ( (  self1509 ) ) );
}

static  enum Unit_6   draw_dash_str1561 (    struct Screen_628 *  screen3501 ,    struct StrConcat_1530  s3503 ,    int32_t  x3505 ,    int32_t  y3507 ) {
    int32_t  w3508 = ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp390 ( (  y3507 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp390 ( (  y3507 ) , ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3509 = (  op_dash_add241 ( (  op_dash_mul1326 ( (  y3507 ) , (  w3508 ) ) ) , (  x3505 ) ) );
    int32_t  x3510 = ( (  min436 ) ( (  x3505 ) ,  (  w3508 ) ) );
    size_t  max_dash_len3511 = ( (  i32_dash_size229 ) ( (  op_dash_sub779 ( (  w3508 ) , (  x3510 ) ) ) ) );
    int32_t  xx3512 = (  from_dash_integral38 ( 0 ) );
    struct StrConcatIter_1537  temp1562 =  into_dash_iter1552 ( ( (  chars1553 ) ( (  s3503 ) ) ) );
    while (true) {
        struct Maybe_573  __cond1563 =  next1544 (&temp1562);
        if (  __cond1563 .tag == 0 ) {
            break;
        }
        struct Char_47  c3514 =  __cond1563 .stuff .Maybe_573_Just_s .field0;
        ( (  put_dash_char1325 ) ( (  screen3501 ) ,  (  c3514 ) ,  (  op_dash_add241 ( (  x3510 ) , (  xx3512 ) ) ) ,  (  y3507 ) ) );
        xx3512 = (  op_dash_add241 ( (  xx3512 ) , ( (  rendered_dash_wcwidth930 ) ( (  c3514 ) ) ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1534 (    struct Screen_628 *  screen3517 ,    struct StrConcat_1530  s3519 ,    int32_t  x3521 ,    int32_t  y3523 ) {
    int32_t  slen3524 = ( (  sum1535 ) ( ( (  map1551 ) ( ( (  chars1553 ) ( (  s3519 ) ) ) ,  (  rendered_dash_wcwidth930 ) ) ) ) );
    int32_t  w3525 = ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3517 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3526 = (  op_dash_sub779 ( (  op_dash_sub779 ( (  w3525 ) , (  x3521 ) ) ) , (  slen3524 ) ) );
    ( (  draw_dash_str1561 ) ( (  screen3517 ) ,  (  s3519 ) ,  (  x3526 ) ,  (  y3523 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1533 (   struct env1337* env ,    struct StrConcat_1530  s4017 ) {
    ( (  draw_dash_str_dash_right1534 ) ( ( env->screen4010 ) ,  (  s4017 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline4014 ) ) ) );
    (* env->curline4014 ) = (  op_dash_add241 ( ( * ( env->curline4014 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1566 {
    struct StrConcat_1531  field0;
    struct StrView_20  field1;
};

static struct StrConcat_1566 StrConcat_1566_StrConcat (  struct StrConcat_1531  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_1566 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1565 {
    enum Unit_6  (*fun) (  struct env1338*  ,    struct StrConcat_1566  );
    struct env1338 env;
};

struct StrConcatIter_1571 {
    struct StrConcatIter_1538  f_left;
    struct StrViewIter_570  f_right;
};

struct Map_1570 {
    struct StrConcatIter_1571  field0;
    int32_t (*  field1 )(    struct Char_47  );
};

static struct Map_1570 Map_1570_Map (  struct StrConcatIter_1571  field0 ,  int32_t (*  field1 )(    struct Char_47  ) ) {
    return ( struct Map_1570 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1570   into_dash_iter1573 (    struct Map_1570  self796 ) {
    return (  self796 );
}

static  struct Maybe_573   next1575 (    struct StrConcatIter_1571 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1545 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_239   next1574 (    struct Map_1570 *  dref798 ) {
    struct Maybe_573  dref801 = ( (  next1575 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_573_None_t ) {
        return ( (struct Maybe_239) { .tag = Maybe_239_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_573_Just_t ) {
            return ( ( Maybe_239_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_573_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1572 (    struct Map_1570  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1570  it1099 = ( (  into_dash_iter1573 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_239  dref1100 = ( (  next1574 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_239_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_239_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_239_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1576 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1576);
    exit ( 1 );
    ( Unit_6_Unit );
    int32_t  temp1577;
    return (  temp1577 );
}

static  int32_t   lam1578 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add241 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1569 (    struct Map_1570  it1110 ) {
    return ( (  reduce1572 ) ( (  it1110 ) ,  (  from_dash_integral38 ( 0 ) ) ,  (  lam1578 ) ) );
}

static  struct StrConcatIter_1571   into_dash_iter1580 (    struct StrConcatIter_1571  self1491 ) {
    return (  self1491 );
}

static  struct Map_1570   map1579 (    struct StrConcatIter_1571  iterable805 ,    int32_t (*  fun807 )(    struct Char_47  ) ) {
    struct StrConcatIter_1571  it808 = ( (  into_dash_iter1580 ) ( (  iterable805 ) ) );
    return ( ( Map_1570_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_1571   into_dash_iter1582 (    struct StrConcat_1566  dref1498 ) {
    return ( (struct StrConcatIter_1571) { .f_left = ( (  chars1555 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars575 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1571   chars1581 (    struct StrConcat_1566  self1509 ) {
    return ( (  into_dash_iter1582 ) ( (  self1509 ) ) );
}

static  enum Unit_6   draw_dash_str1583 (    struct Screen_628 *  screen3501 ,    struct StrConcat_1566  s3503 ,    int32_t  x3505 ,    int32_t  y3507 ) {
    int32_t  w3508 = ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp390 ( (  y3507 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp390 ( (  y3507 ) , ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3509 = (  op_dash_add241 ( (  op_dash_mul1326 ( (  y3507 ) , (  w3508 ) ) ) , (  x3505 ) ) );
    int32_t  x3510 = ( (  min436 ) ( (  x3505 ) ,  (  w3508 ) ) );
    size_t  max_dash_len3511 = ( (  i32_dash_size229 ) ( (  op_dash_sub779 ( (  w3508 ) , (  x3510 ) ) ) ) );
    int32_t  xx3512 = (  from_dash_integral38 ( 0 ) );
    struct StrConcatIter_1571  temp1584 =  into_dash_iter1580 ( ( (  chars1581 ) ( (  s3503 ) ) ) );
    while (true) {
        struct Maybe_573  __cond1585 =  next1575 (&temp1584);
        if (  __cond1585 .tag == 0 ) {
            break;
        }
        struct Char_47  c3514 =  __cond1585 .stuff .Maybe_573_Just_s .field0;
        ( (  put_dash_char1325 ) ( (  screen3501 ) ,  (  c3514 ) ,  (  op_dash_add241 ( (  x3510 ) , (  xx3512 ) ) ) ,  (  y3507 ) ) );
        xx3512 = (  op_dash_add241 ( (  xx3512 ) , ( (  rendered_dash_wcwidth930 ) ( (  c3514 ) ) ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1568 (    struct Screen_628 *  screen3517 ,    struct StrConcat_1566  s3519 ,    int32_t  x3521 ,    int32_t  y3523 ) {
    int32_t  slen3524 = ( (  sum1569 ) ( ( (  map1579 ) ( ( (  chars1581 ) ( (  s3519 ) ) ) ,  (  rendered_dash_wcwidth930 ) ) ) ) );
    int32_t  w3525 = ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3517 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3526 = (  op_dash_sub779 ( (  op_dash_sub779 ( (  w3525 ) , (  x3521 ) ) ) , (  slen3524 ) ) );
    ( (  draw_dash_str1583 ) ( (  screen3517 ) ,  (  s3519 ) ,  (  x3526 ) ,  (  y3523 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1567 (   struct env1338* env ,    struct StrConcat_1566  s4017 ) {
    ( (  draw_dash_str_dash_right1568 ) ( ( env->screen4010 ) ,  (  s4017 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline4014 ) ) ) );
    (* env->curline4014 ) = (  op_dash_add241 ( ( * ( env->curline4014 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   render_dash_editor1300 (    struct Screen_628 *  screen4010 ,    struct Editor_109 *  ed4012 ) {
    struct ScreenDims_1301  screen_dash_dims4013 = ( (struct ScreenDims_1301) { .f_from_dash_sx = (  from_dash_integral38 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub779 ( ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen4010 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral38 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub779 ( ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen4010 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) } );
    ( (  render1304 ) ( (  screen4010 ) ,  ( (  pane955 ) ( (  ed4012 ) ) ) ,  (  screen_dash_dims4013 ) ) );
    int32_t  temp1331 = (  from_dash_integral38 ( 0 ) );
    int32_t *  curline4014 = ( &temp1331 );
    struct env1332 envinst1332 = {
        .screen4010 =  screen4010 ,
        .curline4014 =  curline4014 ,
    };
    struct env1333 envinst1333 = {
        .screen4010 =  screen4010 ,
        .curline4014 =  curline4014 ,
    };
    struct env1334 envinst1334 = {
        .screen4010 =  screen4010 ,
        .curline4014 =  curline4014 ,
    };
    struct env1335 envinst1335 = {
        .screen4010 =  screen4010 ,
        .curline4014 =  curline4014 ,
    };
    struct env1336 envinst1336 = {
        .screen4010 =  screen4010 ,
        .curline4014 =  curline4014 ,
    };
    struct env1337 envinst1337 = {
        .screen4010 =  screen4010 ,
        .curline4014 =  curline4014 ,
    };
    struct env1338 envinst1338 = {
        .screen4010 =  screen4010 ,
        .curline4014 =  curline4014 ,
    };
    struct envunion1340  temp1339 = ( (struct envunion1340){ .fun = (  enum Unit_6  (*) (  struct env1332*  ,    struct StrConcat_1341  ) )ann1342 , .env =  envinst1332 } );
    ( temp1339.fun ( &temp1339.env ,  ( ( StrConcat_1341_StrConcat ) ( ( (  from_dash_string187 ) ( ( "mode: " ) ,  ( 6 ) ) ) ,  ( ( ( * (  ed4012 ) ) .f_pane ) .f_mode ) ) ) ) );
    enum CharType_978  cur_dash_ty4018 = ( (  char_dash_type980 ) ( ( (  char_dash_at988 ) ( ( (  pane955 ) ( (  ed4012 ) ) ) ,  ( ( ( * (  ed4012 ) ) .f_pane ) .f_cursor ) ) ) ) );
    struct envunion1364  temp1363 = ( (struct envunion1364){ .fun = (  enum Unit_6  (*) (  struct env1333*  ,    struct StrConcat_1365  ) )ann1368 , .env =  envinst1333 } );
    ( temp1363.fun ( &temp1363.env ,  ( ( StrConcat_1365_StrConcat ) ( ( ( StrConcat_1366_StrConcat ) ( ( ( StrConcat_1367_StrConcat ) ( ( (  from_dash_string187 ) ( ( "cur: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4012 ) ) .f_pane ) .f_cursor ) ) ) ,  ( (  from_dash_string187 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  (  cur_dash_ty4018 ) ) ) ) );
    struct envunion1433  temp1432 = ( (struct envunion1433){ .fun = (  enum Unit_6  (*) (  struct env1334*  ,    struct StrConcat_1434  ) )ann1435 , .env =  envinst1334 } );
    ( temp1432.fun ( &temp1432.env ,  ( ( StrConcat_1434_StrConcat ) ( ( (  from_dash_string187 ) ( ( "sel: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4012 ) ) .f_pane ) .f_sel ) ) ) ) );
    struct envunion1467  temp1466 = ( (struct envunion1467){ .fun = (  enum Unit_6  (*) (  struct env1335*  ,    struct StrConcat_1468  ) )ann1469 , .env =  envinst1335 } );
    ( temp1466.fun ( &temp1466.env ,  ( ( StrConcat_1468_StrConcat ) ( ( (  from_dash_string187 ) ( ( "cp: " ) ,  ( 4 ) ) ) ,  ( ( * (  ed4012 ) ) .f_clipboard ) ) ) ) );
    struct envunion1502  temp1501 = ( (struct envunion1502){ .fun = (  enum Unit_6  (*) (  struct env1336*  ,    struct StrConcat_1503  ) )ann1504 , .env =  envinst1336 } );
    ( temp1501.fun ( &temp1501.env ,  ( ( StrConcat_1503_StrConcat ) ( ( (  from_dash_string187 ) ( ( "edmode: " ) ,  ( 8 ) ) ) ,  ( ( * (  ed4012 ) ) .f_mode ) ) ) ) );
    struct envunion1527  temp1526 = ( (struct envunion1527){ .fun = (  enum Unit_6  (*) (  struct env1335*  ,    struct StrConcat_1468  ) )ann1469 , .env =  envinst1335 } );
    ( temp1526.fun ( &temp1526.env ,  ( ( StrConcat_1468_StrConcat ) ( ( (  from_dash_string187 ) ( ( "msg: " ) ,  ( 5 ) ) ) ,  ( ( * (  ed4012 ) ) .f_msg ) ) ) ) );
    struct envunion1529  temp1528 = ( (struct envunion1529){ .fun = (  enum Unit_6  (*) (  struct env1337*  ,    struct StrConcat_1530  ) )ann1533 , .env =  envinst1337 } );
    ( temp1528.fun ( &temp1528.env ,  ( ( StrConcat_1530_StrConcat ) ( ( ( StrConcat_1531_StrConcat ) ( ( ( StrConcat_1532_StrConcat ) ( ( ( StrConcat_1311_StrConcat ) ( ( (  from_dash_string187 ) ( ( "sc-off: (" ) ,  ( 9 ) ) ) ,  ( ( ( ( * (  ed4012 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_top ) ) ) ,  ( (  from_dash_string187 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( ( ( ( * (  ed4012 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_left ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    struct envunion1565  temp1564 = ( (struct envunion1565){ .fun = (  enum Unit_6  (*) (  struct env1338*  ,    struct StrConcat_1566  ) )ann1567 , .env =  envinst1338 } );
    ( temp1564.fun ( &temp1564.env ,  ( ( StrConcat_1566_StrConcat ) ( ( ( StrConcat_1531_StrConcat ) ( ( ( StrConcat_1532_StrConcat ) ( ( ( StrConcat_1311_StrConcat ) ( ( (  from_dash_string187 ) ( ( "dims: { " ) ,  ( 8 ) ) ) ,  ( (  screen_dash_dims4013 ) .f_to_dash_sx ) ) ) ,  ( (  from_dash_string187 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  screen_dash_dims4013 ) .f_to_dash_sy ) ) ) ,  ( (  from_dash_string187 ) ( ( " }" ) ,  ( 2 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1588 {
    struct StrView_20  field0;
    uint32_t  field1;
};

static struct StrConcat_1588 StrConcat_1588_StrConcat (  struct StrView_20  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1588 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1587 {
    struct StrConcat_1588  field0;
    struct Char_47  field1;
};

static struct StrConcat_1587 StrConcat_1587_StrConcat (  struct StrConcat_1588  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1587 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1592 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1591 {
    struct StrViewIter_570  f_left;
    struct IntStrIter_1592  f_right;
};

struct StrConcatIter_1590 {
    struct StrConcatIter_1591  f_left;
    struct AppendIter_840  f_right;
};

static  struct StrConcatIter_1590   into_dash_iter1593 (    struct StrConcatIter_1590  self1491 ) {
    return (  self1491 );
}

static  uint32_t   op_dash_div1601 (    uint32_t  l245 ,    uint32_t  r247 ) {
    return ( (  l245 ) / (  r247 ) );
}

static  int32_t   count_dash_digits1600 (    uint32_t  self1430 ) {
    if ( (  eq371 ( (  self1430 ) , (  from_dash_integral183 ( 0 ) ) ) ) ) {
        return (  from_dash_integral38 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral38 ( 0 ) );
    while ( (  cmp182 ( (  self1430 ) , (  from_dash_integral183 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1601 ( (  self1430 ) , (  from_dash_integral183 ( 10 ) ) ) );
        digits1431 = (  op_dash_add241 ( (  digits1431 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1592   uint_dash_iter1599 (    uint32_t  int1437 ) {
    return ( (struct IntStrIter_1592) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1600 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1592   chars1598 (    uint32_t  self1449 ) {
    return ( (  uint_dash_iter1599 ) ( (  self1449 ) ) );
}

static  struct StrConcatIter_1591   into_dash_iter1597 (    struct StrConcat_1588  dref1498 ) {
    return ( (struct StrConcatIter_1591) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1598 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1591   chars1596 (    struct StrConcat_1588  self1509 ) {
    return ( (  into_dash_iter1597 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1590   into_dash_iter1595 (    struct StrConcat_1587  dref1498 ) {
    return ( (struct StrConcatIter_1590) { .f_left = ( (  chars1596 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1590   chars1594 (    struct StrConcat_1587  self1509 ) {
    return ( (  into_dash_iter1595 ) ( (  self1509 ) ) );
}

struct env1608 {
    ;
    uint32_t  base1210;
};

struct envunion1609 {
    uint32_t  (*fun) (  struct env1608*  ,    int32_t  ,    uint32_t  );
    struct env1608 env;
};

static  uint32_t   reduce1607 (    struct Range_653  iterable1093 ,    uint32_t  base1095 ,   struct envunion1609  fun1097 ) {
    uint32_t  x1098 = (  base1095 );
    struct RangeIter_656  it1099 = ( (  into_dash_iter658 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_239  dref1100 = ( (  next659 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_239_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_239_Just_t ) {
                struct envunion1609  temp1610 = (  fun1097 );
                x1098 = ( temp1610.fun ( &temp1610.env ,  ( dref1100 .stuff .Maybe_239_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1611 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1611);
    exit ( 1 );
    ( Unit_6_Unit );
    uint32_t  temp1612;
    return (  temp1612 );
}

static  uint32_t   lam1613 (   struct env1608* env ,    int32_t  item1214 ,    uint32_t  x1216 ) {
    return (  op_dash_mul650 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint32_t   pow1606 (    uint32_t  base1210 ,    int32_t  p1212 ) {
    struct env1608 envinst1608 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1607 ) ( ( (  to661 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub779 ( (  p1212 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral183 ( 1 ) ) ,  ( (struct envunion1609){ .fun = (  uint32_t  (*) (  struct env1608*  ,    int32_t  ,    uint32_t  ) )lam1613 , .env =  envinst1608 } ) ) );
}

static  uint32_t   op_dash_sub1614 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) - (  r237 ) );
}

static  struct Maybe_573   next1605 (    struct IntStrIter_1592 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_573_Just ) ( ( (  from_dash_charlike188 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp390 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_573) { .tag = Maybe_573_None_t } );
    }
    uint32_t  trim_dash_down1423 = ( (  pow1606 ) ( (  from_dash_integral183 ( 10 ) ) ,  (  op_dash_sub779 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    uint32_t  upper1424 = (  op_dash_div1601 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    uint32_t  upper_dash_mask1425 = (  op_dash_mul650 ( (  op_dash_div1601 ( (  upper1424 ) , (  from_dash_integral183 ( 10 ) ) ) ) , (  from_dash_integral183 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast186 ) ( (  op_dash_sub1614 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub779 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_47  digit_dash_char1427 = ( (  from_dash_u8859 ) ( (  op_dash_add749 ( (  digit1426 ) , (  from_dash_integral179 ( 48 ) ) ) ) ) );
    return ( ( Maybe_573_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_573   next1604 (    struct StrConcatIter_1591 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1605 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1603 (    struct StrConcatIter_1590 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1604 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next866 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   draw_dash_str1586 (    struct Screen_628 *  screen3501 ,    struct StrConcat_1587  s3503 ,    int32_t  x3505 ,    int32_t  y3507 ) {
    int32_t  w3508 = ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp390 ( (  y3507 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp390 ( (  y3507 ) , ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3509 = (  op_dash_add241 ( (  op_dash_mul1326 ( (  y3507 ) , (  w3508 ) ) ) , (  x3505 ) ) );
    int32_t  x3510 = ( (  min436 ) ( (  x3505 ) ,  (  w3508 ) ) );
    size_t  max_dash_len3511 = ( (  i32_dash_size229 ) ( (  op_dash_sub779 ( (  w3508 ) , (  x3510 ) ) ) ) );
    int32_t  xx3512 = (  from_dash_integral38 ( 0 ) );
    struct StrConcatIter_1590  temp1589 =  into_dash_iter1593 ( ( (  chars1594 ) ( (  s3503 ) ) ) );
    while (true) {
        struct Maybe_573  __cond1602 =  next1603 (&temp1589);
        if (  __cond1602 .tag == 0 ) {
            break;
        }
        struct Char_47  c3514 =  __cond1602 .stuff .Maybe_573_Just_s .field0;
        ( (  put_dash_char1325 ) ( (  screen3501 ) ,  (  c3514 ) ,  (  op_dash_add241 ( (  x3510 ) , (  xx3512 ) ) ) ,  (  y3507 ) ) );
        xx3512 = (  op_dash_add241 ( (  xx3512 ) , ( (  rendered_dash_wcwidth930 ) ( (  c3514 ) ) ) ) );
    }
    return ( Unit_6_Unit );
}

struct RenderState_1616 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_631  f_fg;
    struct Color_631  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_1621 {
    struct StrConcat_1587  field0;
    uint32_t  field1;
};

static struct StrConcat_1621 StrConcat_1621_StrConcat (  struct StrConcat_1587  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1621 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1620 {
    struct StrConcat_1621  field0;
    struct Char_47  field1;
};

static struct StrConcat_1620 StrConcat_1620_StrConcat (  struct StrConcat_1621  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1620 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_1624 {
    struct StrConcatIter_1590  f_left;
    struct IntStrIter_1592  f_right;
};

struct StrConcatIter_1623 {
    struct StrConcatIter_1624  f_left;
    struct AppendIter_840  f_right;
};

static  struct StrConcatIter_1623   into_dash_iter1626 (    struct StrConcatIter_1623  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_573   next1628 (    struct StrConcatIter_1624 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1603 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1605 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1627 (    struct StrConcatIter_1623 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1628 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next866 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   for_dash_each1622 (    struct StrConcatIter_1623  iterable1074 ,    enum Unit_6 (*  fun1076 )(    struct Char_47  ) ) {
    struct StrConcatIter_1623  temp1625 = ( (  into_dash_iter1626 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1623 *  it1077 = ( &temp1625 );
    while ( ( true ) ) {
        struct Maybe_573  dref1078 = ( (  next1627 ) ( (  it1077 ) ) );
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

static  struct StrConcatIter_1624   into_dash_iter1632 (    struct StrConcat_1621  dref1498 ) {
    return ( (struct StrConcatIter_1624) { .f_left = ( (  chars1594 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1598 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1624   chars1631 (    struct StrConcat_1621  self1509 ) {
    return ( (  into_dash_iter1632 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1623   into_dash_iter1630 (    struct StrConcat_1620  dref1498 ) {
    return ( (struct StrConcatIter_1623) { .f_left = ( (  chars1631 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1623   chars1629 (    struct StrConcat_1620  self1509 ) {
    return ( (  into_dash_iter1630 ) ( (  self1509 ) ) );
}

static  enum Unit_6   print1619 (    struct StrConcat_1620  s2551 ) {
    ( (  for_dash_each1622 ) ( ( (  chars1629 ) ( (  s2551 ) ) ) ,  (  printf_dash_char171 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   move_dash_cursor_dash_to1618 (    uint32_t  x2565 ,    uint32_t  y2567 ) {
    uint32_t  x2568 = (  op_dash_add751 ( (  x2565 ) , (  from_dash_integral183 ( 1 ) ) ) );
    uint32_t  y2569 = (  op_dash_add751 ( (  y2567 ) , (  from_dash_integral183 ( 1 ) ) ) );
    ( (  print1619 ) ( ( ( StrConcat_1620_StrConcat ) ( ( ( StrConcat_1621_StrConcat ) ( ( ( StrConcat_1587_StrConcat ) ( ( ( StrConcat_1588_StrConcat ) ( ( (  from_dash_string187 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2569 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2568 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

static  struct Slice_629   subslice1635 (    struct Slice_629  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Cell_630 *  begin_dash_ptr1787 = ( (  offset_dash_ptr665 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp151 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp151 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_629) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub270 ( ( (  min294 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_629) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

struct SliceIter_1638 {
    struct Slice_629  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_1637 {
    struct SliceIter_1638  f_left_dash_it;
    struct SliceIter_1638  f_right_dash_it;
};

struct Tuple2_1639 {
    struct Cell_630  field0;
    struct Cell_630  field1;
};

static struct Tuple2_1639 Tuple2_1639_Tuple2 (  struct Cell_630  field0 ,  struct Cell_630  field1 ) {
    return ( struct Tuple2_1639 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1641 {
    bool (*  fun1135 )(    struct Tuple2_1639  );
};

struct envunion1642 {
    bool  (*fun) (  struct env1641*  ,    struct Tuple2_1639  ,    bool  );
    struct env1641 env;
};

static  struct Zip_1637   into_dash_iter1643 (    struct Zip_1637  self911 ) {
    return (  self911 );
}

struct Maybe_1644 {
    enum {
        Maybe_1644_None_t,
        Maybe_1644_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1639  field0;
        } Maybe_1644_Just_s;
    } stuff;
};

static struct Maybe_1644 Maybe_1644_Just (  struct Tuple2_1639  field0 ) {
    return ( struct Maybe_1644 ) { .tag = Maybe_1644_Just_t, .stuff = { .Maybe_1644_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_670   next1646 (    struct SliceIter_1638 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp151 ( (  op_dash_add199 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_670) { .tag = Maybe_670_None_t } );
    }
    struct Cell_630  elem1830 = ( * ( (  offset_dash_ptr665 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add199 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_670_Just ) ( (  elem1830 ) ) );
}

static  struct Maybe_1644   next1645 (    struct Zip_1637 *  self914 ) {
    struct Zip_1637  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_670  dref916 = ( (  next1646 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_670_None_t ) {
            return ( (struct Maybe_1644) { .tag = Maybe_1644_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_670_Just_t ) {
                struct Maybe_670  dref918 = ( (  next1646 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_670_None_t ) {
                    return ( (struct Maybe_1644) { .tag = Maybe_1644_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_670_Just_t ) {
                        ( (  next1646 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next1646 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1644_Just ) ( ( ( Tuple2_1639_Tuple2 ) ( ( dref916 .stuff .Maybe_670_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_670_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1640 (    struct Zip_1637  iterable1093 ,    bool  base1095 ,   struct envunion1642  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_1637  it1099 = ( (  into_dash_iter1643 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1644  dref1100 = ( (  next1645 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1644_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1644_Just_t ) {
                struct envunion1642  temp1647 = (  fun1097 );
                x1098 = ( temp1647.fun ( &temp1647.env ,  ( dref1100 .stuff .Maybe_1644_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1648 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1648);
    exit ( 1 );
    ( Unit_6_Unit );
    bool  temp1649;
    return (  temp1649 );
}

static  bool   lam1650 (   struct env1641* env ,    struct Tuple2_1639  e1137 ,    bool  x1139 ) {
    return ( ( ( env->fun1135 ) ( (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1636 (    struct Zip_1637  it1133 ,    bool (*  fun1135 )(    struct Tuple2_1639  ) ) {
    struct env1641 envinst1641 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1640 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1642){ .fun = (  bool  (*) (  struct env1641*  ,    struct Tuple2_1639  ,    bool  ) )lam1650 , .env =  envinst1641 } ) ) );
}

static  struct SliceIter_1638   into_dash_iter1652 (    struct Slice_629  self1822 ) {
    return ( (struct SliceIter_1638) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_1637   zip1651 (    struct Slice_629  left922 ,    struct Slice_629  right924 ) {
    struct SliceIter_1638  left_dash_it925 = ( (  into_dash_iter1652 ) ( (  left922 ) ) );
    struct SliceIter_1638  right_dash_it926 = ( (  into_dash_iter1652 ) ( (  right924 ) ) );
    return ( (struct Zip_1637) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

struct Tuple2_1656 {
    struct Color_631  field0;
    struct Color_631  field1;
};

static struct Tuple2_1656 Tuple2_1656_Tuple2 (  struct Color_631  field0 ,  struct Color_631  field1 ) {
    return ( struct Tuple2_1656 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_632 *   cast1660 (    int32_t *  x356 ) {
    return ( (enum Color8_632 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1658 (    enum Color8_632  x573 ) {
    int32_t  temp1659 = ( (  zeroed822 ) ( ) );
    int32_t *  y574 = ( &temp1659 );
    enum Color8_632 *  yp575 = ( (  cast1660 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq1657 (    enum Color8_632  l2593 ,    enum Color8_632  r2595 ) {
    return (  eq282 ( ( ( (  cast_dash_on_dash_zeroed1658 ) ( (  l2593 ) ) ) ) , ( (  cast_dash_on_dash_zeroed1658 ) ( (  r2595 ) ) ) ) );
}

static  enum Color16_633 *   cast1664 (    int32_t *  x356 ) {
    return ( (enum Color16_633 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1662 (    enum Color16_633  x573 ) {
    int32_t  temp1663 = ( (  zeroed822 ) ( ) );
    int32_t *  y574 = ( &temp1663 );
    enum Color16_633 *  yp575 = ( (  cast1664 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq1661 (    enum Color16_633  l2599 ,    enum Color16_633  r2601 ) {
    return (  eq282 ( ( ( (  cast_dash_on_dash_zeroed1662 ) ( (  l2599 ) ) ) ) , ( (  cast_dash_on_dash_zeroed1662 ) ( (  r2601 ) ) ) ) );
}

static  bool   eq1665 (    struct RGB_634  l2629 ,    struct RGB_634  r2631 ) {
    return ( ( (  eq175 ( ( (  l2629 ) .f_r ) , ( (  r2631 ) .f_r ) ) ) && (  eq175 ( ( (  l2629 ) .f_g ) , ( (  r2631 ) .f_g ) ) ) ) && (  eq175 ( ( (  l2629 ) .f_b ) , ( (  r2631 ) .f_b ) ) ) );
}

static  bool   eq1655 (    struct Color_631  l2652 ,    struct Color_631  r2654 ) {
    return ( {  struct Tuple2_1656  dref2655 = ( ( Tuple2_1656_Tuple2 ) ( (  l2652 ) ,  (  r2654 ) ) ) ; dref2655 .field0.tag == Color_631_ColorDefault_t && dref2655 .field1.tag == Color_631_ColorDefault_t ? ( true ) : dref2655 .field0.tag == Color_631_Color8_t && dref2655 .field1.tag == Color_631_Color8_t ? (  eq1657 ( ( dref2655 .field0 .stuff .Color_631_Color8_s .field0 ) , ( dref2655 .field1 .stuff .Color_631_Color8_s .field0 ) ) ) : dref2655 .field0.tag == Color_631_Color16_t && dref2655 .field1.tag == Color_631_Color16_t ? (  eq1661 ( ( dref2655 .field0 .stuff .Color_631_Color16_s .field0 ) , ( dref2655 .field1 .stuff .Color_631_Color16_s .field0 ) ) ) : dref2655 .field0.tag == Color_631_Color256_t && dref2655 .field1.tag == Color_631_Color256_t ? (  eq175 ( ( dref2655 .field0 .stuff .Color_631_Color256_s .field0 ) , ( dref2655 .field1 .stuff .Color_631_Color256_s .field0 ) ) ) : dref2655 .field0.tag == Color_631_ColorRGB_t && dref2655 .field1.tag == Color_631_ColorRGB_t ? (  eq1665 ( ( dref2655 .field0 .stuff .Color_631_ColorRGB_s .field0 ) , ( dref2655 .field1 .stuff .Color_631_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq1654 (    struct Cell_630  l3374 ,    struct Cell_630  r3376 ) {
    if ( ( !  eq367 ( ( (  l3374 ) .f_c ) , ( (  r3376 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq1655 ( ( (  l3374 ) .f_fg ) , ( (  r3376 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq1655 ( ( (  l3374 ) .f_bg ) , ( (  r3376 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam1653 (    struct Tuple2_1639  dref3430 ) {
    return ( !  eq1654 ( ( dref3430 .field0 ) , ( dref3430 .field1 ) ) );
}

static  enum Unit_6   set_dash_default_dash_fg1668 (  ) {
    ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg81669 (    enum Color8_632  color2604 ) {
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

static  enum Unit_6   set_dash_fg161670 (    enum Color16_633  color2608 ) {
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

struct StrConcat_1674 {
    struct StrView_20  field0;
    uint8_t  field1;
};

static struct StrConcat_1674 StrConcat_1674_StrConcat (  struct StrView_20  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1674 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1673 {
    struct StrConcat_1674  field0;
    struct Char_47  field1;
};

static struct StrConcat_1673 StrConcat_1673_StrConcat (  struct StrConcat_1674  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1673 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1678 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1677 {
    struct StrViewIter_570  f_left;
    struct IntStrIter_1678  f_right;
};

struct StrConcatIter_1676 {
    struct StrConcatIter_1677  f_left;
    struct AppendIter_840  f_right;
};

static  struct StrConcatIter_1676   into_dash_iter1680 (    struct StrConcatIter_1676  self1491 ) {
    return (  self1491 );
}

struct env1686 {
    uint8_t  base1210;
    ;
};

struct envunion1687 {
    uint8_t  (*fun) (  struct env1686*  ,    int32_t  ,    uint8_t  );
    struct env1686 env;
};

static  uint8_t   reduce1685 (    struct Range_653  iterable1093 ,    uint8_t  base1095 ,   struct envunion1687  fun1097 ) {
    uint8_t  x1098 = (  base1095 );
    struct RangeIter_656  it1099 = ( (  into_dash_iter658 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_239  dref1100 = ( (  next659 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_239_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_239_Just_t ) {
                struct envunion1687  temp1688 = (  fun1097 );
                x1098 = ( temp1688.fun ( &temp1688.env ,  ( dref1100 .stuff .Maybe_239_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1689 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1689);
    exit ( 1 );
    ( Unit_6_Unit );
    uint8_t  temp1690;
    return (  temp1690 );
}

static  uint8_t   op_dash_mul1692 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam1691 (   struct env1686* env ,    int32_t  item1214 ,    uint8_t  x1216 ) {
    return (  op_dash_mul1692 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint8_t   pow1684 (    uint8_t  base1210 ,    int32_t  p1212 ) {
    struct env1686 envinst1686 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1685 ) ( ( (  to661 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub779 ( (  p1212 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral179 ( 1 ) ) ,  ( (struct envunion1687){ .fun = (  uint8_t  (*) (  struct env1686*  ,    int32_t  ,    uint8_t  ) )lam1691 , .env =  envinst1686 } ) ) );
}

static  uint8_t   op_dash_div1693 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast1694 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_573   next1683 (    struct IntStrIter_1678 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_573_Just ) ( ( (  from_dash_charlike188 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp390 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_573) { .tag = Maybe_573_None_t } );
    }
    uint8_t  trim_dash_down1423 = ( (  pow1684 ) ( (  from_dash_integral179 ( 10 ) ) ,  (  op_dash_sub779 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    uint8_t  upper1424 = (  op_dash_div1693 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    uint8_t  upper_dash_mask1425 = (  op_dash_mul1692 ( (  op_dash_div1693 ( (  upper1424 ) , (  from_dash_integral179 ( 10 ) ) ) ) , (  from_dash_integral179 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1694 ) ( (  op_dash_sub748 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub779 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_47  digit_dash_char1427 = ( (  from_dash_u8859 ) ( (  op_dash_add749 ( (  digit1426 ) , (  from_dash_integral179 ( 48 ) ) ) ) ) );
    return ( ( Maybe_573_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_573   next1682 (    struct StrConcatIter_1677 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1683 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1681 (    struct StrConcatIter_1676 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1682 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next866 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   for_dash_each1675 (    struct StrConcatIter_1676  iterable1074 ,    enum Unit_6 (*  fun1076 )(    struct Char_47  ) ) {
    struct StrConcatIter_1676  temp1679 = ( (  into_dash_iter1680 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1676 *  it1077 = ( &temp1679 );
    while ( ( true ) ) {
        struct Maybe_573  dref1078 = ( (  next1681 ) ( (  it1077 ) ) );
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

static  int32_t   count_dash_digits1701 (    uint8_t  self1430 ) {
    if ( (  eq175 ( (  self1430 ) , (  from_dash_integral179 ( 0 ) ) ) ) ) {
        return (  from_dash_integral38 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral38 ( 0 ) );
    while ( (  cmp192 ( (  self1430 ) , (  from_dash_integral179 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1693 ( (  self1430 ) , (  from_dash_integral179 ( 10 ) ) ) );
        digits1431 = (  op_dash_add241 ( (  digits1431 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1678   uint_dash_iter1700 (    uint8_t  int1437 ) {
    return ( (struct IntStrIter_1678) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1701 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1678   chars1699 (    uint8_t  self1455 ) {
    return ( (  uint_dash_iter1700 ) ( (  self1455 ) ) );
}

static  struct StrConcatIter_1677   into_dash_iter1698 (    struct StrConcat_1674  dref1498 ) {
    return ( (struct StrConcatIter_1677) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1699 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1677   chars1697 (    struct StrConcat_1674  self1509 ) {
    return ( (  into_dash_iter1698 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1676   into_dash_iter1696 (    struct StrConcat_1673  dref1498 ) {
    return ( (struct StrConcatIter_1676) { .f_left = ( (  chars1697 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1676   chars1695 (    struct StrConcat_1673  self1509 ) {
    return ( (  into_dash_iter1696 ) ( (  self1509 ) ) );
}

static  enum Unit_6   print1672 (    struct StrConcat_1673  s2551 ) {
    ( (  for_dash_each1675 ) ( ( (  chars1695 ) ( (  s2551 ) ) ) ,  (  printf_dash_char171 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg2561671 (    uint8_t  color2622 ) {
    ( (  print1672 ) ( ( ( StrConcat_1673_StrConcat ) ( ( ( StrConcat_1674_StrConcat ) ( ( (  from_dash_string187 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2622 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1707 {
    struct StrConcat_1673  field0;
    uint8_t  field1;
};

static struct StrConcat_1707 StrConcat_1707_StrConcat (  struct StrConcat_1673  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1707 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1706 {
    struct StrConcat_1707  field0;
    struct Char_47  field1;
};

static struct StrConcat_1706 StrConcat_1706_StrConcat (  struct StrConcat_1707  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1706 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1705 {
    struct StrConcat_1706  field0;
    uint8_t  field1;
};

static struct StrConcat_1705 StrConcat_1705_StrConcat (  struct StrConcat_1706  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1705 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1704 {
    struct StrConcat_1705  field0;
    struct Char_47  field1;
};

static struct StrConcat_1704 StrConcat_1704_StrConcat (  struct StrConcat_1705  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1704 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_1712 {
    struct StrConcatIter_1676  f_left;
    struct IntStrIter_1678  f_right;
};

struct StrConcatIter_1711 {
    struct StrConcatIter_1712  f_left;
    struct AppendIter_840  f_right;
};

struct StrConcatIter_1710 {
    struct StrConcatIter_1711  f_left;
    struct IntStrIter_1678  f_right;
};

struct StrConcatIter_1709 {
    struct StrConcatIter_1710  f_left;
    struct AppendIter_840  f_right;
};

static  struct StrConcatIter_1709   into_dash_iter1714 (    struct StrConcatIter_1709  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_573   next1718 (    struct StrConcatIter_1712 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1681 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1683 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1717 (    struct StrConcatIter_1711 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1718 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next866 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1716 (    struct StrConcatIter_1710 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1717 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1683 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1715 (    struct StrConcatIter_1709 *  self1494 ) {
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

static  enum Unit_6   for_dash_each1708 (    struct StrConcatIter_1709  iterable1074 ,    enum Unit_6 (*  fun1076 )(    struct Char_47  ) ) {
    struct StrConcatIter_1709  temp1713 = ( (  into_dash_iter1714 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1709 *  it1077 = ( &temp1713 );
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

static  struct StrConcatIter_1712   into_dash_iter1726 (    struct StrConcat_1707  dref1498 ) {
    return ( (struct StrConcatIter_1712) { .f_left = ( (  chars1695 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1699 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1712   chars1725 (    struct StrConcat_1707  self1509 ) {
    return ( (  into_dash_iter1726 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1711   into_dash_iter1724 (    struct StrConcat_1706  dref1498 ) {
    return ( (struct StrConcatIter_1711) { .f_left = ( (  chars1725 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1711   chars1723 (    struct StrConcat_1706  self1509 ) {
    return ( (  into_dash_iter1724 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1710   into_dash_iter1722 (    struct StrConcat_1705  dref1498 ) {
    return ( (struct StrConcatIter_1710) { .f_left = ( (  chars1723 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1699 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1710   chars1721 (    struct StrConcat_1705  self1509 ) {
    return ( (  into_dash_iter1722 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1709   into_dash_iter1720 (    struct StrConcat_1704  dref1498 ) {
    return ( (struct StrConcatIter_1709) { .f_left = ( (  chars1721 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1709   chars1719 (    struct StrConcat_1704  self1509 ) {
    return ( (  into_dash_iter1720 ) ( (  self1509 ) ) );
}

static  enum Unit_6   print1703 (    struct StrConcat_1704  s2551 ) {
    ( (  for_dash_each1708 ) ( ( (  chars1719 ) ( (  s2551 ) ) ) ,  (  printf_dash_char171 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg_dash_rgb1702 (    struct RGB_634  c2645 ) {
    ( (  print1703 ) ( ( ( StrConcat_1704_StrConcat ) ( ( ( StrConcat_1705_StrConcat ) ( ( ( StrConcat_1706_StrConcat ) ( ( ( StrConcat_1707_StrConcat ) ( ( ( StrConcat_1673_StrConcat ) ( ( ( StrConcat_1674_StrConcat ) ( ( (  from_dash_string187 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2645 ) .f_r ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2645 ) .f_g ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2645 ) .f_b ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg1667 (    struct Color_631  c2666 ) {
    struct Color_631  dref2667 = (  c2666 );
    if ( dref2667.tag == Color_631_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg1668 ) ( ) );
    }
    else {
        if ( dref2667.tag == Color_631_Color8_t ) {
            ( (  set_dash_fg81669 ) ( ( dref2667 .stuff .Color_631_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2667.tag == Color_631_Color16_t ) {
                ( (  set_dash_fg161670 ) ( ( dref2667 .stuff .Color_631_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2667.tag == Color_631_Color256_t ) {
                    ( (  set_dash_fg2561671 ) ( ( dref2667 .stuff .Color_631_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2667.tag == Color_631_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb1702 ) ( ( dref2667 .stuff .Color_631_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_default_dash_bg1728 (  ) {
    ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg81729 (    enum Color8_632  color2612 ) {
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

static  enum Unit_6   set_dash_bg161730 (    enum Color16_633  color2616 ) {
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

static  enum Unit_6   set_dash_bg2561731 (    uint8_t  color2625 ) {
    ( (  print1672 ) ( ( ( StrConcat_1673_StrConcat ) ( ( ( StrConcat_1674_StrConcat ) ( ( (  from_dash_string187 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2625 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg_dash_rgb1732 (    struct RGB_634  c2648 ) {
    ( (  print1703 ) ( ( ( StrConcat_1704_StrConcat ) ( ( ( StrConcat_1705_StrConcat ) ( ( ( StrConcat_1706_StrConcat ) ( ( ( StrConcat_1707_StrConcat ) ( ( ( StrConcat_1673_StrConcat ) ( ( ( StrConcat_1674_StrConcat ) ( ( (  from_dash_string187 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2648 ) .f_r ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2648 ) .f_g ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2648 ) .f_b ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg1727 (    struct Color_631  c2674 ) {
    struct Color_631  dref2675 = (  c2674 );
    if ( dref2675.tag == Color_631_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg1728 ) ( ) );
    }
    else {
        if ( dref2675.tag == Color_631_Color8_t ) {
            ( (  set_dash_bg81729 ) ( ( dref2675 .stuff .Color_631_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2675.tag == Color_631_Color16_t ) {
                ( (  set_dash_bg161730 ) ( ( dref2675 .stuff .Color_631_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2675.tag == Color_631_Color256_t ) {
                    ( (  set_dash_bg2561731 ) ( ( dref2675 .stuff .Color_631_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2675.tag == Color_631_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb1732 ) ( ( dref2675 .stuff .Color_631_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_6_Unit );
}

static  uint32_t   i32_dash_u321733 (    int32_t  x603 ) {
    return ( (uint32_t ) (  x603 ) );
}

static  enum Unit_6   emit_dash_cell1666 (    struct RenderState_1616 *  rs3406 ,    struct Cell_630 *  c3408 ,    uint32_t  x3410 ,    uint32_t  y3412 ) {
    if ( ( ( !  eq371 ( (  x3410 ) , ( ( * (  rs3406 ) ) .f_x ) ) ) || ( !  eq371 ( (  y3412 ) , ( ( * (  rs3406 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1618 ) ( (  x3410 ) ,  (  y3412 ) ) );
        (*  rs3406 ) .f_x = (  x3410 );
        (*  rs3406 ) .f_y = (  y3412 );
    }
    struct Char_47  char3413 = ( ( * (  c3408 ) ) .f_c );
    struct Color_631  bg3414 = ( ( * (  c3408 ) ) .f_bg );
    if ( (  eq282 ( ( ( * (  c3408 ) ) .f_char_dash_width ) , (  op_dash_neg603 ( (  from_dash_integral38 ( 1 ) ) ) ) ) ) ) {
        char3413 = ( (  from_dash_charlike188 ) ( ( " " ) ,  ( 1 ) ) );
        bg3414 = ( ( Color_631_Color8 ) ( ( Color8_632_Red8 ) ) );
    }
    if ( ( !  eq1655 ( ( ( * (  rs3406 ) ) .f_fg ) , ( ( * (  c3408 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg1667 ) ( ( ( * (  c3408 ) ) .f_fg ) ) );
        (*  rs3406 ) .f_fg = ( ( * (  c3408 ) ) .f_fg );
    }
    if ( ( !  eq1655 ( ( ( * (  rs3406 ) ) .f_bg ) , (  bg3414 ) ) ) ) {
        ( (  set_dash_bg1727 ) ( (  bg3414 ) ) );
        (*  rs3406 ) .f_bg = (  bg3414 );
    }
    ( (  print_dash_str170 ) ( (  char3413 ) ) );
    uint32_t  char_dash_width3415 = ( (  i32_dash_u321733 ) ( ( (  max931 ) ( ( ( * (  c3408 ) ) .f_char_dash_width ) ,  (  from_dash_integral38 ( 1 ) ) ) ) ) );
    (*  rs3406 ) .f_x = (  op_dash_add751 ( ( ( * (  rs3406 ) ) .f_x ) , (  char_dash_width3415 ) ) );
    return ( Unit_6_Unit );
}

struct Zip_1736 {
    struct SliceIter_1638  f_left_dash_it;
    struct FromIter_233  f_right_dash_it;
};

struct env1737 {
    ;
    struct Slice_629  dest1853;
    ;
};

struct Tuple2_1739 {
    struct Cell_630  field0;
    int32_t  field1;
};

static struct Tuple2_1739 Tuple2_1739_Tuple2 (  struct Cell_630  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1739 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1738 {
    enum Unit_6  (*fun) (  struct env1737*  ,    struct Tuple2_1739  );
    struct env1737 env;
};

static  struct Zip_1736   into_dash_iter1741 (    struct Zip_1736  self911 ) {
    return (  self911 );
}

struct Maybe_1742 {
    enum {
        Maybe_1742_None_t,
        Maybe_1742_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1739  field0;
        } Maybe_1742_Just_s;
    } stuff;
};

static struct Maybe_1742 Maybe_1742_Just (  struct Tuple2_1739  field0 ) {
    return ( struct Maybe_1742 ) { .tag = Maybe_1742_Just_t, .stuff = { .Maybe_1742_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1742   next1743 (    struct Zip_1736 *  self914 ) {
    struct Zip_1736  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_670  dref916 = ( (  next1646 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_670_None_t ) {
            return ( (struct Maybe_1742) { .tag = Maybe_1742_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_670_Just_t ) {
                struct Maybe_239  dref918 = ( (  next240 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_239_None_t ) {
                    return ( (struct Maybe_1742) { .tag = Maybe_1742_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_239_Just_t ) {
                        ( (  next1646 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next240 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1742_Just ) ( ( ( Tuple2_1739_Tuple2 ) ( ( dref916 .stuff .Maybe_670_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_239_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1735 (    struct Zip_1736  iterable1074 ,   struct envunion1738  fun1076 ) {
    struct Zip_1736  temp1740 = ( (  into_dash_iter1741 ) ( (  iterable1074 ) ) );
    struct Zip_1736 *  it1077 = ( &temp1740 );
    while ( ( true ) ) {
        struct Maybe_1742  dref1078 = ( (  next1743 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1742_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1742_Just_t ) {
                struct envunion1738  temp1744 = (  fun1076 );
                ( temp1744.fun ( &temp1744.env ,  ( dref1078 .stuff .Maybe_1742_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1736   zip1745 (    struct Slice_629  left922 ,    struct FromIter_233  right924 ) {
    struct SliceIter_1638  left_dash_it925 = ( (  into_dash_iter1652 ) ( (  left922 ) ) );
    struct FromIter_233  right_dash_it926 = ( (  into_dash_iter245 ) ( (  right924 ) ) );
    return ( (struct Zip_1736) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_6   lam1746 (   struct env1737* env ,    struct Tuple2_1739  dref1854 ) {
    return ( (  set663 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size229 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_6   copy_dash_to1734 (    struct Slice_629  src1851 ,    struct Slice_629  dest1853 ) {
    if ( (  cmp151 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic420 ) ( ( ( StrConcat_421_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string187 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string187 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env1737 envinst1737 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each1735 ) ( ( (  zip1745 ) ( (  src1851 ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1738){ .fun = (  enum Unit_6  (*) (  struct env1737*  ,    struct Tuple2_1739  ) )lam1746 , .env =  envinst1737 } ) ) );
    return ( Unit_6_Unit );
}

static  uint32_t   render_dash_screen1615 (    struct Screen_628 *  screen3418 ) {
    int32_t  w3419 = ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3418 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3420 = ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen3418 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1616  temp1617 = ( (struct RenderState_1616) { .f_x = (  from_dash_integral183 ( 0 ) ) , .f_y = (  from_dash_integral183 ( 0 ) ) , .f_fg = ( (struct Color_631) { .tag = Color_631_ColorDefault_t } ) , .f_bg = ( (struct Color_631) { .tag = Color_631_ColorDefault_t } ) , .f_changes = (  from_dash_integral183 ( 0 ) ) } );
    struct RenderState_1616 *  rs3421 = ( &temp1617 );
    ( (  move_dash_cursor_dash_to1618 ) ( (  from_dash_integral183 ( 0 ) ) ,  (  from_dash_integral183 ( 0 ) ) ) );
    struct RangeIter_656  temp1633 =  into_dash_iter658 ( ( (  to661 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub779 ( (  h3420 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_239  __cond1634 =  next659 (&temp1633);
        if (  __cond1634 .tag == 0 ) {
            break;
        }
        int32_t  y3423 =  __cond1634 .stuff .Maybe_239_Just_s .field0;
        int32_t  x_dash_v3424 = (  from_dash_integral38 ( 0 ) );
        while ( (  cmp390 ( (  x_dash_v3424 ) , (  w3419 ) ) == 0 ) ) {
            size_t  i3425 = ( (  i32_dash_size229 ) ( (  op_dash_add241 ( (  op_dash_mul1326 ( (  y3423 ) , (  w3419 ) ) ) , (  x_dash_v3424 ) ) ) ) );
            struct Cell_630 *  cur3426 = ( (  get_dash_ptr664 ) ( ( ( * (  screen3418 ) ) .f_current ) ,  (  i3425 ) ) );
            int32_t  char_dash_width3427 = ( (  max931 ) ( ( ( * (  cur3426 ) ) .f_char_dash_width ) ,  (  from_dash_integral38 ( 1 ) ) ) );
            struct Slice_629  curs3428 = ( (  subslice1635 ) ( ( ( * (  screen3418 ) ) .f_current ) ,  (  i3425 ) ,  (  op_dash_add199 ( (  i3425 ) , ( (  i32_dash_size229 ) ( (  char_dash_width3427 ) ) ) ) ) ) );
            struct Slice_629  prevs3429 = ( (  subslice1635 ) ( ( ( * (  screen3418 ) ) .f_previous ) ,  (  i3425 ) ,  (  op_dash_add199 ( (  i3425 ) , ( (  i32_dash_size229 ) ( (  char_dash_width3427 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3418 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any1636 ) ( ( (  zip1651 ) ( (  curs3428 ) ,  (  prevs3429 ) ) ) ,  (  lam1653 ) ) ) ) ) {
                (*  rs3421 ) .f_changes = (  op_dash_add751 ( ( ( * (  rs3421 ) ) .f_changes ) , (  from_dash_integral183 ( 1 ) ) ) );
                ( (  emit_dash_cell1666 ) ( (  rs3421 ) ,  (  cur3426 ) ,  ( (  i32_dash_u321733 ) ( (  x_dash_v3424 ) ) ) ,  ( (  i32_dash_u321733 ) ( (  y3423 ) ) ) ) );
                ( (  copy_dash_to1734 ) ( (  curs3428 ) ,  (  prevs3429 ) ) );
            }
            x_dash_v3424 = (  op_dash_add241 ( (  x_dash_v3424 ) , (  char_dash_width3427 ) ) );
        }
    }
    (*  screen3418 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors577 ) ( ) );
    ( (  flush_dash_stdout580 ) ( ) );
    return ( ( * (  rs3421 ) ) .f_changes );
}

static  void *   cast_dash_ptr1753 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1754 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed1751 (  ) {
    struct timespec *  temp1752;
    struct timespec *  x570 = (  temp1752 );
    ( ( memset ) ( ( (  cast_dash_ptr1753 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of1754 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct timespec *   null_dash_ptr1750 (  ) {
    return ( (  zeroed1751 ) ( ) );
}

static  enum Unit_6   sync1747 (    struct Tui_58 *  tui3289 ) {
    if ( (  eq371 ( ( ( * (  tui3289 ) ) .f_target_dash_fps ) , (  from_dash_integral183 ( 0 ) ) ) ) ) {
        return ( Unit_6_Unit );
    }
    int64_t  frame_dash_ns3290 = (  op_dash_div856 ( (  from_dash_integral269 ( 1000000000 ) ) , ( (  size_dash_i64228 ) ( ( (  u32_dash_size642 ) ( ( ( * (  tui3289 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1748 = ( (  undefined616 ) ( ) );
    struct timespec *  now3291 = ( &temp1748 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic618 ) ( ) ) ,  (  now3291 ) ) );
    int64_t  elapsed_dash_ns3292 = (  op_dash_add369 ( (  op_dash_mul197 ( (  op_dash_sub858 ( ( ( * (  now3291 ) ) .tv_sec ) , ( ( ( * (  tui3289 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral269 ( 1000000000 ) ) ) ) , (  op_dash_sub858 ( ( ( * (  now3291 ) ) .tv_nsec ) , ( ( ( * (  tui3289 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3293 = (  op_dash_sub858 ( (  frame_dash_ns3290 ) , (  elapsed_dash_ns3292 ) ) );
    if ( (  cmp876 ( (  sleep_dash_ns3293 ) , (  from_dash_integral269 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1749 = ( (struct timespec) { .tv_sec = (  from_dash_integral269 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3293 ) } );
        struct timespec *  ts3294 = ( &temp1749 );
        ( ( nanosleep ) ( (  ts3294 ) ,  ( (  null_dash_ptr1750 ) ( ) ) ) );
    }
    struct timespec  temp1755 = ( (  undefined616 ) ( ) );
    struct timespec *  last_dash_sync3295 = ( &temp1755 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic618 ) ( ) ) ,  (  last_dash_sync3295 ) ) );
    (*  tui3289 ) .f_last_dash_sync = ( * (  last_dash_sync3295 ) );
    (*  tui3289 ) .f_fps_dash_count = (  op_dash_add751 ( ( ( * (  tui3289 ) ) .f_fps_dash_count ) , (  from_dash_integral183 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3296 = (  op_dash_add369 ( (  op_dash_mul197 ( (  op_dash_sub858 ( ( ( ( * (  tui3289 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3289 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral269 ( 1000 ) ) ) ) , (  op_dash_div856 ( (  op_dash_sub858 ( ( ( ( * (  tui3289 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3289 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral269 ( 1000000 ) ) ) ) ) );
    if ( (  cmp876 ( (  fps_dash_elapsed_dash_ms3296 ) , (  from_dash_integral269 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3289 ) .f_actual_dash_fps = ( ( * (  tui3289 ) ) .f_fps_dash_count );
        (*  tui3289 ) .f_fps_dash_count = (  from_dash_integral183 ( 0 ) );
        (*  tui3289 ) .f_fps_dash_ts = ( ( * (  tui3289 ) ) .f_last_dash_sync );
    }
    return ( Unit_6_Unit );
}

static  void *   cast_dash_ptr1758 (    struct Cell_630 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_6   free1757 (    enum CAllocator_8  dref1953 ,    struct Slice_629  slice1955 ) {
    if (!(  dref1953 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1758 ) ( ( (  slice1955 ) .f_ptr ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   free_dash_screen1756 (    struct Screen_628 *  screen3394 ) {
    enum CAllocator_8  al3395 = ( ( * (  screen3394 ) ) .f_al );
    ( (  free1757 ) ( (  al3395 ) ,  ( ( * (  screen3394 ) ) .f_current ) ) );
    ( (  free1757 ) ( (  al3395 ) ,  ( ( * (  screen3394 ) ) .f_previous ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   disable_dash_mouse1760 (  ) {
    ( (  print_dash_str162 ) ( ( (  from_dash_string187 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   show_dash_cursor1761 (  ) {
    ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   reset_dash_cursor_dash_position1762 (  ) {
    ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   disable_dash_raw_dash_mode1763 (    struct Termios_60 *  og_dash_termios3269 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno506 ) ( ) ) ,  ( (  tcsa_dash_flush566 ) ( ) ) ,  ( (  cast_dash_ptr507 ) ( (  og_dash_termios3269 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   deinit1759 (    struct Tui_58 *  tui3299 ) {
    ( (  disable_dash_mouse1760 ) ( ) );
    ( (  show_dash_cursor1761 ) ( ) );
    ( (  reset_dash_colors577 ) ( ) );
    ( (  clear_dash_screen578 ) ( ) );
    ( (  reset_dash_cursor_dash_position1762 ) ( ) );
    ( (  disable_dash_raw_dash_mode1763 ) ( ( & ( ( * (  tui3299 ) ) .f_orig_dash_termios ) ) ) );
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
        .envinst42 = envinst42 ,
        .envinst107 = envinst107 ,
    };
    enum CAllocator_8  al4019 = ( (  idc126 ) ( ) );
    struct envunion129  temp128 = ( (struct envunion129){ .fun = (  struct TextBuf_75  (*) (  struct env64*  ,    enum CAllocator_8  ) )mk130 , .env =  envinst64 } );
    struct TextBuf_75  temp127 = ( temp128.fun ( &temp128.env ,  (  al4019 ) ) );
    struct TextBuf_75 *  tb4020 = ( &temp127 );
    struct Slice_265  args4023 = ( (  get266 ) ( ) );
    if ( (  cmp151 ( ( (  args4023 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        const char*  fname4024 = (  elem_dash_get271 ( (  args4023 ) , (  from_dash_integral0 ( 0 ) ) ) );
        struct envunion279  temp278 = ( (struct envunion279){ .fun = (  enum Unit_6  (*) (  struct env70*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ) )change_dash_no_dash_action280 , .env =  envinst70 } );
        ( temp278.fun ( &temp278.env ,  (  tb4020 ) ,  ( (  mk470 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) ) ,  ( (  mk470 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) ) ,  ( (  read_dash_contents471 ) ( (  fname4024 ) ,  (  al4019 ) ) ) ) );
    }
    struct Editor_109  temp496 = ( (struct Editor_109) { .f_running = ( true ) , .f_al = (  al4019 ) , .f_pane = ( (  mk497 ) ( (  al4019 ) ,  (  tb4020 ) ) ) , .f_clipboard = ( (struct Maybe_113) { .tag = Maybe_113_None_t } ) , .f_mode = ( (struct EditorMode_114) { .tag = EditorMode_114_Normal_t } ) , .f_msg = ( (struct Maybe_113) { .tag = Maybe_113_None_t } ) } );
    struct Editor_109 *  ed4025 = ( &temp496 );
    struct envunion500  temp499 = ( (struct envunion500){ .fun = (  struct Tui_58  (*) (  struct env54*  ) )mk501 , .env =  envinst54 } );
    struct Tui_58  temp498 = ( temp499.fun ( &temp499.env ) );
    struct Tui_58 *  tui4026 = ( &temp498 );
    struct Screen_628  temp635 = ( (  mk_dash_screen636 ) ( (  tui4026 ) ,  (  al4019 ) ) );
    struct Screen_628 *  screen4027 = ( &temp635 );
    uint32_t  last_dash_redraw_dash_changes4028 = (  from_dash_integral183 ( 0 ) );
    while ( ( ( * (  ed4025 ) ) .f_running ) ) {
        struct env686 envinst686 = {
            .envinst56 = envinst56 ,
            .tui4026 =  tui4026 ,
        };
        struct FunIter_685  temp684 =  into_dash_iter693 ( ( (  from_dash_function694 ) ( ( (struct envunion692){ .fun = (  struct Maybe_688  (*) (  struct env686*  ) )lam695 , .env =  envinst686 } ) ) ) );
        while (true) {
            struct Maybe_688  __cond896 =  next897 (&temp684);
            if (  __cond896 .tag == 0 ) {
                break;
            }
            struct InputEvent_689  ev4030 =  __cond896 .stuff .Maybe_688_Just_s .field0;
            struct InputEvent_689  dref4031 = (  ev4030 );
            if ( dref4031.tag == InputEvent_689_Key_t ) {
                ( (  reset_dash_msg899 ) ( (  ed4025 ) ) );
                struct envunion907  temp906 = ( (struct envunion907){ .fun = (  enum Unit_6  (*) (  struct env120*  ,    struct Editor_109 *  ,    struct Key_125  ) )handle_dash_key908 , .env =  envinst120 } );
                ( temp906.fun ( &temp906.env ,  (  ed4025 ) ,  ( dref4031 .stuff .InputEvent_689_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1285  temp1284 = ( (struct envunion1285){ .fun = (  bool  (*) (  struct env62*  ,    struct Screen_628 *  ) )resize_dash_screen_dash_if_dash_needed1286 , .env =  envinst62 } );
        ( temp1284.fun ( &temp1284.env ,  (  screen4027 ) ) );
        if ( ( (  should_dash_redraw1288 ) ( (  tui4026 ) ) ) ) {
            (*  screen4027 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1289 ) ( (  screen4027 ) ) );
            ( (  set_dash_screen_dash_fg1298 ) ( (  screen4027 ) ,  ( (struct Color_631) { .tag = Color_631_ColorDefault_t } ) ) );
            ( (  set_dash_screen_dash_bg1299 ) ( (  screen4027 ) ,  ( (struct Color_631) { .tag = Color_631_ColorDefault_t } ) ) );
            ( (  render_dash_editor1300 ) ( (  screen4027 ) ,  (  ed4025 ) ) );
            ( (  draw_dash_str1586 ) ( (  screen4027 ) ,  ( ( StrConcat_1587_StrConcat ) ( ( ( StrConcat_1588_StrConcat ) ( ( (  from_dash_string187 ) ( ( "REDRAWS[" ) ,  ( 8 ) ) ) ,  (  last_dash_redraw_dash_changes4028 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "]" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub779 ( ( (  u32_dash_i321302 ) ( ( ( * ( ( * (  screen4027 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
            last_dash_redraw_dash_changes4028 = ( (  render_dash_screen1615 ) ( (  screen4027 ) ) );
        }
        ( (  sync1747 ) ( (  tui4026 ) ) );
    }
    ( (  free_dash_screen1756 ) ( (  screen4027 ) ) );
    ( (  deinit1759 ) ( (  tui4026 ) ) );
}
