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
    size_t  growth_dash_factor2037;
    ;
    ;
    ;
    size_t  starting_dash_size2036;
    ;
    ;
};

struct env2 {
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2037;
    ;
    ;
    ;
    size_t  starting_dash_size2036;
    ;
    ;
};

struct env3 {
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2037;
    ;
    ;
    ;
    size_t  starting_dash_size2036;
    ;
    ;
};

struct env4 {
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2037;
    ;
    ;
    ;
    size_t  starting_dash_size2036;
    ;
    ;
};

enum Unit_7 {
    Unit_7_Unit,
};

enum CAllocator_9 {
    CAllocator_9_CAllocator,
};

struct Slice_12 {
    uint8_t *  f_ptr;
    size_t  f_count;
};

struct List_11 {
    enum CAllocator_9  f_al;
    struct Slice_12  f_elements;
    size_t  f_count;
};

struct Slice_10 {
    struct List_11 *  f_ptr;
    size_t  f_count;
};

struct List_8 {
    enum CAllocator_9  f_al;
    struct Slice_10  f_elements;
    size_t  f_count;
};

struct envunion6 {
    enum Unit_7  (*fun) (  struct env1*  ,    struct List_8 *  );
    struct env1 env;
};

struct env5 {
    ;
    ;
    ;
    ;
    struct env1 envinst1;
    ;
};

struct envunion14 {
    enum Unit_7  (*fun) (  struct env2*  ,    struct List_11 *  );
    struct env2 env;
};

struct env13 {
    ;
    ;
    ;
    ;
    struct env2 envinst2;
    ;
};

struct Pos_20 {
    int32_t  f_line;
    int32_t  f_bi;
};

struct StrView_21 {
    struct Slice_12  f_contents;
};

struct Action_19 {
    struct Pos_20  f_from;
    struct StrView_21  f_fwd;
    struct Pos_20  f_to_dash_fwd;
    struct StrView_21  f_bwd;
    struct Pos_20  f_to_dash_bwd;
};

struct Slice_18 {
    struct Action_19 *  f_ptr;
    size_t  f_count;
};

struct List_17 {
    enum CAllocator_9  f_al;
    struct Slice_18  f_elements;
    size_t  f_count;
};

struct envunion16 {
    enum Unit_7  (*fun) (  struct env3*  ,    struct List_17 *  );
    struct env3 env;
};

struct env15 {
    ;
    ;
    ;
    ;
    struct env3 envinst3;
    ;
};

struct Maybe_28 {
    enum {
        Maybe_28_None_t,
        Maybe_28_Just_t,
    } tag;
    union {
        struct {
            struct Pos_20  field0;
        } Maybe_28_Just_s;
    } stuff;
};

static struct Maybe_28 Maybe_28_Just (  struct Pos_20  field0 ) {
    return ( struct Maybe_28 ) { .tag = Maybe_28_Just_t, .stuff = { .Maybe_28_Just_s = { .field0 = field0 } } };
};

struct Cursors_27 {
    struct Pos_20  f_cur;
    struct Maybe_28  f_sel;
};

struct Changeset_26 {
    struct List_17  f_parts;
    struct Cursors_27  f_before_dash_cursors;
};

struct Slice_25 {
    struct Changeset_26 *  f_ptr;
    size_t  f_count;
};

struct List_24 {
    enum CAllocator_9  f_al;
    struct Slice_25  f_elements;
    size_t  f_count;
};

struct envunion23 {
    enum Unit_7  (*fun) (  struct env4*  ,    struct List_24 *  );
    struct env4 env;
};

struct env22 {
    ;
    ;
    ;
    ;
    struct env4 envinst4;
    ;
};

struct envunion30 {
    enum Unit_7  (*fun) (  struct env1*  ,    struct List_8 *  );
    struct env1 env;
};

struct envunion31 {
    enum Unit_7  (*fun) (  struct env5*  ,    struct List_8 *  ,    struct List_11  );
    struct env5 env;
};

struct env29 {
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
    ;
    struct env5 envinst5;
};

struct env32 {
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor2038;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct env33 {
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor2038;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct envunion35 {
    enum Unit_7  (*fun) (  struct env5*  ,    struct List_8 *  ,    struct List_11  );
    struct env5 env;
};

struct env34 {
    ;
    ;
    ;
    ;
    ;
    struct env5 envinst5;
};

struct envunion37 {
    enum Unit_7  (*fun) (  struct env13*  ,    struct List_11 *  ,    uint8_t  );
    struct env13 env;
};

struct env36 {
    ;
    ;
    ;
    ;
    struct env13 envinst13;
    ;
};

struct Array_40 {
    struct List_11 _arr [1];
};

struct envunion39 {
    enum Unit_7  (*fun) (  struct env34*  ,    struct List_8 *  ,    struct Array_40  );
    struct env34 env;
};

struct env38 {
    struct env34 envinst34;
    ;
    ;
    ;
    ;
    ;
};

struct envunion42 {
    enum Unit_7  (*fun) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env36 env;
};

struct env41 {
    struct env36 envinst36;
    ;
    ;
    ;
    ;
    ;
};

static  int32_t   from_dash_integral44 (    int64_t  x49 ) {
    return ( (int32_t ) (  x49 ) );
}

static  int32_t   lc_dash_ctype43 (  ) {
    return (  from_dash_integral44 ( 0 ) );
}

static  const char*   from_dash_string45 (    uint8_t *  ptr82 ,    size_t  dref83 ) {
    return ( ( (const char* ) (  ptr82 ) ) );
}

struct envunion47 {
    enum Unit_7  (*fun) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env36 env;
};

struct env46 {
    struct env36 envinst36;
    ;
    ;
};

struct StrBuilder_50 {
    struct List_11  f_chars;
};

struct envunion49 {
    enum Unit_7  (*fun) (  struct env46*  ,    struct StrBuilder_50 *  ,    struct Slice_12  );
    struct env46 env;
};

struct env48 {
    ;
    ;
    ;
    struct env46 envinst46;
};

struct Char_53 {
    uint8_t *  f_ptr;
    size_t  f_num_dash_bytes;
};

struct envunion52 {
    enum Unit_7  (*fun) (  struct env48*  ,    struct StrBuilder_50 *  ,    struct Char_53  );
    struct env48 env;
};

struct env51 {
    ;
    ;
    struct env48 envinst48;
    ;
    ;
    ;
    ;
};

struct envunion55 {
    enum Unit_7  (*fun) (  struct env48*  ,    struct StrBuilder_50 *  ,    struct Char_53  );
    struct env48 env;
};

struct StrConcat_58 {
    struct StrView_21  field0;
    size_t  field1;
};

static struct StrConcat_58 StrConcat_58_StrConcat (  struct StrView_21  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_58 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_57 {
    struct StrConcat_58  field0;
    struct StrView_21  field1;
};

static struct StrConcat_57 StrConcat_57_StrConcat (  struct StrConcat_58  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_57 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion56 {
    enum Unit_7  (*fun) (  struct env51*  ,    struct StrBuilder_50 *  ,    struct StrConcat_57  );
    struct env51 env;
};

struct env54 {
    ;
    ;
    struct env48 envinst48;
    ;
    ;
    ;
    ;
    struct env51 envinst51;
    ;
    ;
    ;
    ;
};

struct env60 {
    bool *  should_dash_resize3305;
    ;
    ;
    ;
    ;
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

struct env61 {
    ;
    bool *  should_dash_resize3305;
    ;
    ;
};

enum ColorPalette_65 {
    ColorPalette_65_Palette8,
    ColorPalette_65_Palette16,
    ColorPalette_65_Palette256,
    ColorPalette_65_PaletteRGB,
};

struct Array_67 {
    uint8_t _arr [32];
};

struct Termios_66 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_67  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

struct Tui_64 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_65  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_66  f_orig_dash_termios;
    bool  f_should_dash_redraw;
};

struct envunion63 {
    bool  (*fun) (  struct env61*  ,    struct Tui_64 *  );
    struct env61 env;
};

struct env62 {
    struct env61 envinst61;
    ;
};

struct envunion69 {
    bool  (*fun) (  struct env61*  ,    struct Tui_64 *  );
    struct env61 env;
};

struct env68 {
    ;
    ;
    ;
    ;
    ;
    struct env61 envinst61;
};

struct envunion71 {
    struct List_8  (*fun) (  struct env38*  ,    struct Array_40  ,    enum CAllocator_9  );
    struct env38 env;
};

struct env70 {
    ;
    ;
    ;
    struct env38 envinst38;
    ;
    ;
};

struct envunion73 {
    struct List_11  (*fun) (  struct env41*  ,    struct Slice_12  ,    enum CAllocator_9  );
    struct env41 env;
};

struct envunion74 {
    enum Unit_7  (*fun) (  struct env29*  ,    struct List_8 *  ,    size_t  ,    struct List_11  );
    struct env29 env;
};

struct envunion75 {
    enum Unit_7  (*fun) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env36 env;
};

struct env72 {
    ;
    ;
    ;
    ;
    ;
    struct env41 envinst41;
    struct env29 envinst29;
    ;
    struct env36 envinst36;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct Actions_79 {
    struct List_24  f_list;
    size_t  f_cur;
    bool  f_input_dash_changeset;
};

struct TextBuf_78 {
    enum CAllocator_9  f_al;
    struct List_8  f_buf;
    struct Actions_79  f_actions;
};

struct envunion77 {
    int32_t  (*fun) (  struct env72*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct StrView_21  );
    struct env72 env;
};

struct envunion80 {
    enum Unit_7  (*fun) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env36 env;
};

struct envunion81 {
    enum Unit_7  (*fun) (  struct env32*  ,    struct List_11 *  ,    size_t  ,    size_t  );
    struct env32 env;
};

struct envunion82 {
    enum Unit_7  (*fun) (  struct env33*  ,    struct List_8 *  ,    size_t  ,    size_t  );
    struct env33 env;
};

struct envunion83 {
    enum Unit_7  (*fun) (  struct env5*  ,    struct List_8 *  ,    struct List_11  );
    struct env5 env;
};

struct env76 {
    struct env72 envinst72;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env36 envinst36;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env32 envinst32;
    struct env33 envinst33;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env5 envinst5;
};

struct envunion85 {
    enum Unit_7  (*fun) (  struct env76*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  );
    struct env76 env;
};

struct env84 {
    ;
    ;
    ;
    ;
    struct env76 envinst76;
};

struct envunion87 {
    enum Unit_7  (*fun) (  struct env76*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  );
    struct env76 env;
};

struct env86 {
    ;
    ;
    ;
    ;
    struct env76 envinst76;
};

struct envunion89 {
    struct Pos_20  (*fun) (  struct env84*  ,    struct TextBuf_78 *  ,    struct Action_19  );
    struct env84 env;
};

struct env88 {
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
};

struct envunion91 {
    struct Pos_20  (*fun) (  struct env86*  ,    struct TextBuf_78 *  ,    struct Action_19  );
    struct env86 env;
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
    ;
    ;
    ;
    ;
    ;
    ;
    struct env86 envinst86;
    ;
    ;
};

struct envunion93 {
    enum Unit_7  (*fun) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env36 env;
};

struct env92 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env36 envinst36;
    ;
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

struct envunion95 {
    struct StrView_21  (*fun) (  struct env92*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct Pos_20  );
    struct env92 env;
};

struct envunion96 {
    struct Pos_20  (*fun) (  struct env86*  ,    struct TextBuf_78 *  ,    struct Action_19  );
    struct env86 env;
};

struct envunion97 {
    enum Unit_7  (*fun) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  );
    struct env15 env;
};

struct envunion98 {
    enum Unit_7  (*fun) (  struct env22*  ,    struct List_24 *  ,    struct Changeset_26  );
    struct env22 env;
};

struct env94 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env92 envinst92;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env86 envinst86;
    struct env15 envinst15;
    struct env22 envinst22;
};

struct Maybe_101 {
    enum {
        Maybe_101_None_t,
        Maybe_101_Just_t,
    } tag;
    union {
        struct {
            struct Cursors_27  field0;
        } Maybe_101_Just_s;
    } stuff;
};

static struct Maybe_101 Maybe_101_Just (  struct Cursors_27  field0 ) {
    return ( struct Maybe_101 ) { .tag = Maybe_101_Just_t, .stuff = { .Maybe_101_Just_s = { .field0 = field0 } } };
};

struct envunion100 {
    struct Maybe_101  (*fun) (  struct env94*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_101  );
    struct env94 env;
};

struct env99 {
    ;
    ;
    ;
    ;
    struct env94 envinst94;
    ;
    ;
    ;
    ;
};

struct envunion103 {
    struct Maybe_101  (*fun) (  struct env94*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_101  );
    struct env94 env;
};

struct env102 {
    ;
    ;
    ;
    ;
    struct env94 envinst94;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion105 {
    struct Maybe_101  (*fun) (  struct env88*  ,    struct TextBuf_78 *  );
    struct env88 env;
};

struct env104 {
    ;
    ;
    ;
    ;
    ;
    struct env88 envinst88;
    ;
};

struct envunion107 {
    struct Maybe_101  (*fun) (  struct env90*  ,    struct TextBuf_78 *  );
    struct env90 env;
};

struct env106 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env90 envinst90;
};

struct envunion109 {
    struct Maybe_101  (*fun) (  struct env94*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_101  );
    struct env94 env;
};

struct env108 {
    ;
    ;
    ;
    ;
    struct env94 envinst94;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion111 {
    struct StrView_21  (*fun) (  struct env92*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct Pos_20  );
    struct env92 env;
};

struct env110 {
    ;
    ;
    ;
    ;
    struct env92 envinst92;
    ;
    ;
    ;
    ;
};

struct envunion113 {
    struct StrView_21  (*fun) (  struct env54*  ,    struct StrConcat_57  ,    enum CAllocator_9  );
    struct env54 env;
};

struct env112 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env54 envinst54;
};

enum Mode_118 {
    Mode_118_Normal,
    Mode_118_Insert,
    Mode_118_Select,
};

struct ScreenCursorOffset_119 {
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
};

struct Pane_117 {
    struct TextBuf_78 *  f_buf;
    struct Pos_20  f_cursor;
    int32_t  f_vi;
    struct Maybe_28  f_sel;
    enum Mode_118  f_mode;
    struct ScreenCursorOffset_119  f_sc_dash_off;
};

struct Maybe_120 {
    enum {
        Maybe_120_None_t,
        Maybe_120_Just_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } Maybe_120_Just_s;
    } stuff;
};

static struct Maybe_120 Maybe_120_Just (  struct StrView_21  field0 ) {
    return ( struct Maybe_120 ) { .tag = Maybe_120_Just_t, .stuff = { .Maybe_120_Just_s = { .field0 = field0 } } };
};

struct EditorMode_121 {
    enum {
        EditorMode_121_Normal_t,
        EditorMode_121_Cmd_t,
    } tag;
    union {
        struct {
            struct StrBuilder_50  field0;
        } EditorMode_121_Cmd_s;
    } stuff;
};

static struct EditorMode_121 EditorMode_121_Cmd (  struct StrBuilder_50  field0 ) {
    return ( struct EditorMode_121 ) { .tag = EditorMode_121_Cmd_t, .stuff = { .EditorMode_121_Cmd_s = { .field0 = field0 } } };
};

struct Editor_116 {
    enum CAllocator_9  f_al;
    bool  f_running;
    struct Pane_117  f_pane;
    struct Maybe_120  f_clipboard;
    struct EditorMode_121  f_mode;
    struct Maybe_120  f_msg;
};

struct envunion115 {
    enum Unit_7  (*fun) (  struct env110*  ,    struct Editor_116 *  );
    struct env110 env;
};

struct Tuple2_123 {
    struct Pos_20  field0;
    struct Pos_20  field1;
};

static struct Tuple2_123 Tuple2_123_Tuple2 (  struct Pos_20  field0 ,  struct Pos_20  field1 ) {
    return ( struct Tuple2_123 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion122 {
    enum Unit_7  (*fun) (  struct env108*  ,    struct Pane_117 *  ,    struct Tuple2_123  ,    struct StrView_21  );
    struct env108 env;
};

struct envunion124 {
    enum Unit_7  (*fun) (  struct env104*  ,    struct Pane_117 *  );
    struct env104 env;
};

struct envunion125 {
    enum Unit_7  (*fun) (  struct env106*  ,    struct Pane_117 *  );
    struct env106 env;
};

struct envunion126 {
    enum Unit_7  (*fun) (  struct env112*  ,    struct Editor_116 *  ,    struct StrConcat_57  );
    struct env112 env;
};

struct env114 {
    struct env110 envinst110;
    struct env108 envinst108;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env104 envinst104;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env106 envinst106;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env112 envinst112;
};

struct envunion128 {
    enum Unit_7  (*fun) (  struct env102*  ,    struct Pane_117 *  );
    struct env102 env;
};

struct envunion129 {
    enum Unit_7  (*fun) (  struct env48*  ,    struct StrBuilder_50 *  ,    struct Char_53  );
    struct env48 env;
};

struct Key_131 {
    enum {
        Key_131_Escape_t,
        Key_131_Enter_t,
        Key_131_Tab_t,
        Key_131_Backspace_t,
        Key_131_Char_t,
        Key_131_Ctrl_t,
        Key_131_Up_t,
        Key_131_Down_t,
        Key_131_Left_t,
        Key_131_Right_t,
        Key_131_Home_t,
        Key_131_End_t,
        Key_131_PageUp_t,
        Key_131_PageDown_t,
        Key_131_Delete_t,
        Key_131_Insert_t,
        Key_131_F1_t,
        Key_131_F2_t,
        Key_131_F3_t,
        Key_131_F4_t,
        Key_131_F5_t,
        Key_131_F6_t,
        Key_131_F7_t,
        Key_131_F8_t,
        Key_131_F9_t,
        Key_131_F10_t,
        Key_131_F11_t,
        Key_131_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_131_Char_s;
        struct {
            char  field0;
        } Key_131_Ctrl_s;
    } stuff;
};

static struct Key_131 Key_131_Char (  char  field0 ) {
    return ( struct Key_131 ) { .tag = Key_131_Char_t, .stuff = { .Key_131_Char_s = { .field0 = field0 } } };
};

static struct Key_131 Key_131_Ctrl (  char  field0 ) {
    return ( struct Key_131 ) { .tag = Key_131_Ctrl_t, .stuff = { .Key_131_Ctrl_s = { .field0 = field0 } } };
};

struct envunion130 {
    enum Unit_7  (*fun) (  struct env114*  ,    struct Editor_116 *  ,    struct Key_131  );
    struct env114 env;
};

struct envunion132 {
    enum Unit_7  (*fun) (  struct env99*  ,    struct Pane_117 *  ,    struct StrView_21  );
    struct env99 env;
};

struct env127 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env102 envinst102;
    ;
    struct env48 envinst48;
    ;
    ;
    struct env114 envinst114;
    ;
    ;
    struct env99 envinst99;
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

static  enum CAllocator_9   idc133 (  ) {
    return ( CAllocator_9_CAllocator );
}

struct envunion136 {
    struct TextBuf_78  (*fun) (  struct env70*  ,    enum CAllocator_9  ,    struct Pos_20  );
    struct env70 env;
};

static  void *   cast_dash_ptr146 (    struct List_11 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of147 (    struct List_11 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct List_11 *   zeroed144 (  ) {
    struct List_11 *  temp145;
    struct List_11 *  x570 = (  temp145 );
    ( ( memset ) ( ( (  cast_dash_ptr146 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of147 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct List_11 *   null_dash_ptr143 (  ) {
    return ( (  zeroed144 ) ( ) );
}

static  struct Slice_10   empty142 (  ) {
    return ( (struct Slice_10) { .f_ptr = ( (  null_dash_ptr143 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_8   mk141 (    enum CAllocator_9  al2031 ) {
    struct Slice_10  elements2032 = ( (  empty142 ) ( ) );
    return ( (struct List_8) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env151 {
    struct List_8 *  list2098;
    struct env5 envinst5;
};

struct envunion152 {
    enum Unit_7  (*fun) (  struct env151*  ,    struct List_11  );
    struct env151 env;
};

struct ArrayIter_153 {
    struct Array_40  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_153   into_dash_iter155 (    struct Array_40  self2322 ) {
    return ( (struct ArrayIter_153) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_156 {
    enum {
        Maybe_156_None_t,
        Maybe_156_Just_t,
    } tag;
    union {
        struct {
            struct List_11  field0;
        } Maybe_156_Just_s;
    } stuff;
};

static struct Maybe_156 Maybe_156_Just (  struct List_11  field0 ) {
    return ( struct Maybe_156 ) { .tag = Maybe_156_Just_t, .stuff = { .Maybe_156_Just_s = { .field0 = field0 } } };
};

enum Ordering_159 {
    Ordering_159_LT,
    Ordering_159_EQ,
    Ordering_159_GT,
};

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_159   cmp158 (    size_t  l179 ,    size_t  r181 ) {
    return ( builtin_size_tcmp( (  l179 ) , (  r181 ) ) );
}

struct StrConcat_164 {
    struct StrConcat_57  field0;
    int32_t  field1;
};

static struct StrConcat_164 StrConcat_164_StrConcat (  struct StrConcat_57  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_164 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_163 {
    struct StrConcat_164  field0;
    struct Char_53  field1;
};

static struct StrConcat_163 StrConcat_163_StrConcat (  struct StrConcat_164  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_163 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_167 {
    struct StrView_21  field0;
    struct StrConcat_163  field1;
};

static struct StrConcat_167 StrConcat_167_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_163  field1 ) {
    return ( struct StrConcat_167 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_166 {
    struct StrConcat_167  field0;
    struct Char_53  field1;
};

static struct StrConcat_166 StrConcat_166_StrConcat (  struct StrConcat_167  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_166 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32170 (    size_t  x630 ) {
    return ( (int32_t ) (  x630 ) );
}

static  enum Unit_7   print_dash_str169 (    struct StrView_21  self1379 ) {
    ( ( printf ) ( ( (  from_dash_string45 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32170 ) ( ( ( (  self1379 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1379 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str175 (    size_t  self1464 ) {
    ( ( printf ) ( ( (  from_dash_string45 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1464 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str174 (    struct StrConcat_58  self1503 ) {
    struct StrConcat_58  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str169 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str175 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str173 (    struct StrConcat_57  self1503 ) {
    struct StrConcat_57  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str174 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str169 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str176 (    int32_t  self1440 ) {
    ( ( printf ) ( ( (  from_dash_string45 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1440 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str172 (    struct StrConcat_164  self1503 ) {
    struct StrConcat_164  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str173 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str176 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

struct Scalar_180 {
    uint32_t  f_value;
};

struct CharDestructured_179 {
    enum {
        CharDestructured_179_Ref_t,
        CharDestructured_179_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_53  field0;
        } CharDestructured_179_Ref_s;
        struct {
            struct Scalar_180  field0;
        } CharDestructured_179_Scalar_s;
    } stuff;
};

static struct CharDestructured_179 CharDestructured_179_Ref (  struct Char_53  field0 ) {
    return ( struct CharDestructured_179 ) { .tag = CharDestructured_179_Ref_t, .stuff = { .CharDestructured_179_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_179 CharDestructured_179_Scalar (  struct Scalar_180  field0 ) {
    return ( struct CharDestructured_179 ) { .tag = CharDestructured_179_Scalar_t, .stuff = { .CharDestructured_179_Scalar_s = { .field0 = field0 } } };
};

static  bool   eq182 (    uint8_t  l116 ,    uint8_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint8_t   size_dash_u8184 (    size_t  x639 ) {
    return ( (uint8_t ) (  x639 ) );
}

static  size_t   op_dash_div185 (    size_t  l285 ,    size_t  r287 ) {
    return ( (  l285 ) / (  r287 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer183 (    uint8_t *  ptr678 ) {
    return ( (  size_dash_u8184 ) ( (  op_dash_div185 ( ( ( (size_t ) (  ptr678 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint8_t   from_dash_integral186 (    int64_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  uint32_t   size_dash_u32187 (    size_t  x633 ) {
    return ( (uint32_t ) (  x633 ) );
}

static  size_t   cast188 (    uint8_t *  x356 ) {
    return ( (size_t ) (  x356 ) );
}

static  struct CharDestructured_179   destructure181 (    struct Char_53  c712 ) {
    if ( (  eq182 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer183 ) ( ( (  c712 ) .f_ptr ) ) ) , (  from_dash_integral186 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_179_Scalar ) ( ( (struct Scalar_180) { .f_value = ( (  size_dash_u32187 ) ( ( ( (  cast188 ) ( ( (  c712 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_179_Ref ) ( (  c712 ) ) );
    }
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_159   cmp189 (    uint32_t  l164 ,    uint32_t  r166 ) {
    return ( builtin_uint32_tcmp( (  l164 ) , (  r166 ) ) );
}

static  uint32_t   from_dash_integral190 (    int64_t  x52 ) {
    return ( (uint32_t ) (  x52 ) );
}

static  uint8_t   cast193 (    uint32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  uint8_t   u32_dash_u8192 (    uint32_t  x657 ) {
    return ( (  cast193 ) ( (  x657 ) ) );
}

static  enum Unit_7   printf_dash_char178 (    struct Char_53  c758 ) {
    struct CharDestructured_179  dref759 = ( (  destructure181 ) ( (  c758 ) ) );
    if ( dref759.tag == CharDestructured_179_Ref_t ) {
        ( ( printf ) ( ( (  from_dash_string45 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32170 ) ( ( ( dref759 .stuff .CharDestructured_179_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref759 .stuff .CharDestructured_179_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref759.tag == CharDestructured_179_Scalar_t ) {
            if ( (  cmp189 ( ( ( dref759 .stuff .CharDestructured_179_Scalar_s .field0 ) .f_value ) , (  from_dash_integral190 ( 127 ) ) ) == 2 ) ) {
                const char*  temp191 = ( (  from_dash_string45 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp191);
                exit ( 1 );
                ( Unit_7_Unit );
            }
            ( ( printf ) ( ( (  from_dash_string45 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8192 ) ( ( ( dref759 .stuff .CharDestructured_179_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str177 (    struct Char_53  self1404 ) {
    ( (  printf_dash_char178 ) ( (  self1404 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str171 (    struct StrConcat_163  self1503 ) {
    struct StrConcat_163  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str172 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str177 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str168 (    struct StrConcat_167  self1503 ) {
    struct StrConcat_167  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str169 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str171 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str165 (    struct StrConcat_166  self1503 ) {
    struct StrConcat_166  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str168 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str177 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  struct StrView_21   from_dash_string194 (    uint8_t *  ptr86 ,    size_t  count88 ) {
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = (  ptr86 ) , .f_count = (  count88 ) } ) } );
}

static  uint8_t *   cast196 (    uint8_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_159   cmp199 (    uint8_t  l169 ,    uint8_t  r171 ) {
    return ( builtin_uint8_tcmp( (  l169 ) , (  r171 ) ) );
}

static  size_t   next_dash_char198 (    uint8_t *  p688 ) {
    uint8_t  pb689 = ( * (  p688 ) );
    if ( (  cmp199 ( (  pb689 ) , (  from_dash_integral186 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp199 ( (  pb689 ) , (  from_dash_integral186 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp199 ( (  pb689 ) , (  from_dash_integral186 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp199 ( (  pb689 ) , (  from_dash_integral186 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp200 = ( (  from_dash_string45 ) ( ( "(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp200);
                    exit ( 1 );
                    ( Unit_7_Unit );
                }
            }
        }
    }
}

static  struct Char_53   scan_dash_from_dash_mem197 (    uint8_t *  p700 ) {
    size_t  clen701 = ( (  next_dash_char198 ) ( (  p700 ) ) );
    if ( (  cmp158 ( (  clen701 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp201 = ( (  from_dash_string45 ) ( ( "UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp201);
        exit ( 1 );
        ( Unit_7_Unit );
    }
    return ( (struct Char_53) { .f_ptr = (  p700 ) , .f_num_dash_bytes = (  clen701 ) } );
}

static  struct Char_53   from_dash_charlike195 (    uint8_t *  ptr704 ,    size_t  num_dash_bytes706 ) {
    uint8_t *  ptr707 = ( ( (  cast196 ) ( (  ptr704 ) ) ) );
    return ( (  scan_dash_from_dash_mem197 ) ( (  ptr707 ) ) );
}

static  enum Unit_7   panic162 (    struct StrConcat_163  errmsg1712 ) {
    ( (  print_dash_str165 ) ( ( ( StrConcat_166_StrConcat ) ( ( ( StrConcat_167_StrConcat ) ( ( (  from_dash_string194 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct List_11 *   cast_dash_ptr202 (    struct Array_40 *  p359 ) {
    return ( (struct List_11 * ) (  p359 ) );
}

static  int64_t   op_dash_mul204 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) * (  r196 ) );
}

static  struct List_11 *   offset_dash_ptr203 (    struct List_11 *  x338 ,    int64_t  count340 ) {
    struct List_11  temp205;
    return ( (struct List_11 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul204 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp205 ) ) ) ) ) ) ) ) );
}

static  struct List_11 *   get_dash_ptr161 (    struct Array_40 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp158 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i2253 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic162 ) ( ( ( StrConcat_163_StrConcat ) ( ( ( StrConcat_164_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string194 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct List_11 *  p2254 = ( ( (  cast_dash_ptr202 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr203 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  struct List_11   get160 (    struct Array_40 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr161 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  size_t   op_dash_add206 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) + (  r272 ) );
}

static  struct Maybe_156   next157 (    struct ArrayIter_153 *  self2329 ) {
    if ( (  cmp158 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_156) { .tag = Maybe_156_None_t } );
    }
    struct List_11  e2331 = ( (  get160 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add206 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_156_Just ) ( (  e2331 ) ) );
}

static  enum Unit_7   for_dash_each150 (    struct Array_40  iterable1074 ,   struct envunion152  fun1076 ) {
    struct ArrayIter_153  temp154 = ( (  into_dash_iter155 ) ( (  iterable1074 ) ) );
    struct ArrayIter_153 *  it1077 = ( &temp154 );
    while ( ( true ) ) {
        struct Maybe_156  dref1078 = ( (  next157 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_156_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_156_Just_t ) {
                struct envunion152  temp207 = (  fun1076 );
                ( temp207.fun ( &temp207.env ,  ( dref1078 .stuff .Maybe_156_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  bool   eq213 (    size_t  l126 ,    size_t  r128 ) {
    return ( (  l126 ) == (  r128 ) );
}

struct TypeSize_216 {
    size_t  f_size;
};

static  struct TypeSize_216   get_dash_typesize215 (  ) {
    struct List_11  temp217;
    return ( (struct TypeSize_216) { .f_size = ( sizeof( ( (  temp217 ) ) ) ) } );
}

static  struct List_11 *   cast_dash_ptr218 (    void *  p359 ) {
    return ( (struct List_11 * ) (  p359 ) );
}

static  size_t   op_dash_mul219 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) * (  r282 ) );
}

static  struct Slice_10   allocate214 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize215 ) ( ) ) ) .f_size );
    struct List_11 *  ptr1957 = ( (  cast_dash_ptr218 ) ( ( ( malloc ) ( (  op_dash_mul219 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_10) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env220 {
    struct Slice_10  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_222 {
    struct List_11  field0;
    int32_t  field1;
};

static struct Tuple2_222 Tuple2_222_Tuple2 (  struct List_11  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_222 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion221 {
    enum Unit_7  (*fun) (  struct env220*  ,    struct Tuple2_222  );
    struct env220 env;
};

struct StrConcat_228 {
    struct StrConcat_57  field0;
    size_t  field1;
};

static struct StrConcat_228 StrConcat_228_StrConcat (  struct StrConcat_57  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_228 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_227 {
    struct StrConcat_228  field0;
    struct Char_53  field1;
};

static struct StrConcat_227 StrConcat_227_StrConcat (  struct StrConcat_228  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_227 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_231 {
    struct StrView_21  field0;
    struct StrConcat_227  field1;
};

static struct StrConcat_231 StrConcat_231_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_227  field1 ) {
    return ( struct StrConcat_231 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_230 {
    struct StrConcat_231  field0;
    struct Char_53  field1;
};

static struct StrConcat_230 StrConcat_230_StrConcat (  struct StrConcat_231  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_230 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str234 (    struct StrConcat_228  self1503 ) {
    struct StrConcat_228  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str173 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str175 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str233 (    struct StrConcat_227  self1503 ) {
    struct StrConcat_227  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str234 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str177 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str232 (    struct StrConcat_231  self1503 ) {
    struct StrConcat_231  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str169 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str233 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str229 (    struct StrConcat_230  self1503 ) {
    struct StrConcat_230  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str232 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str177 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic226 (    struct StrConcat_227  errmsg1712 ) {
    ( (  print_dash_str229 ) ( ( ( StrConcat_230_StrConcat ) ( ( ( StrConcat_231_StrConcat ) ( ( (  from_dash_string194 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  int64_t   size_dash_i64235 (    size_t  x594 ) {
    return ( (int64_t ) (  x594 ) );
}

static  struct List_11 *   get_dash_ptr225 (    struct Slice_10  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp158 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic226 ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string194 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct List_11 *  elem_dash_ptr1760 = ( (  offset_dash_ptr203 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set224 (    struct Slice_10  slice1774 ,    size_t  i1776 ,    struct List_11  x1778 ) {
    struct List_11 *  ep1779 = ( (  get_dash_ptr225 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  size_t   i32_dash_size236 (    int32_t  x609 ) {
    return ( (size_t ) ( (int64_t ) (  x609 ) ) );
}

static  enum Unit_7   lam223 (   struct env220* env ,    struct Tuple2_222  dref2043 ) {
    return ( (  set224 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size236 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct SliceIter_239 {
    struct Slice_10  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_240 {
    int32_t  f_from;
};

struct Zip_238 {
    struct SliceIter_239  f_left_dash_it;
    struct FromIter_240  f_right_dash_it;
};

static  struct Zip_238   into_dash_iter242 (    struct Zip_238  self911 ) {
    return (  self911 );
}

struct Maybe_243 {
    enum {
        Maybe_243_None_t,
        Maybe_243_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_222  field0;
        } Maybe_243_Just_s;
    } stuff;
};

static struct Maybe_243 Maybe_243_Just (  struct Tuple2_222  field0 ) {
    return ( struct Maybe_243 ) { .tag = Maybe_243_Just_t, .stuff = { .Maybe_243_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_156   next245 (    struct SliceIter_239 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp158 ( (  op_dash_add206 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_156) { .tag = Maybe_156_None_t } );
    }
    struct List_11  elem1830 = ( * ( (  offset_dash_ptr203 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add206 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_156_Just ) ( (  elem1830 ) ) );
}

struct Maybe_246 {
    enum {
        Maybe_246_None_t,
        Maybe_246_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_246_Just_s;
    } stuff;
};

static struct Maybe_246 Maybe_246_Just (  int32_t  field0 ) {
    return ( struct Maybe_246 ) { .tag = Maybe_246_Just_t, .stuff = { .Maybe_246_Just_s = { .field0 = field0 } } };
};

static  int32_t   op_dash_add248 (    int32_t  l207 ,    int32_t  r209 ) {
    return ( (  l207 ) + (  r209 ) );
}

static  struct Maybe_246   next247 (    struct FromIter_240 *  dref905 ) {
    int32_t  v907 = ( ( (* dref905 ) ) .f_from );
    (* dref905 ) .f_from = (  op_dash_add248 ( ( ( (* dref905 ) ) .f_from ) , (  from_dash_integral44 ( 1 ) ) ) );
    return ( ( Maybe_246_Just ) ( (  v907 ) ) );
}

static  struct Maybe_243   next244 (    struct Zip_238 *  self914 ) {
    struct Zip_238  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_156  dref916 = ( (  next245 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_156_None_t ) {
            return ( (struct Maybe_243) { .tag = Maybe_243_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_156_Just_t ) {
                struct Maybe_246  dref918 = ( (  next247 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_246_None_t ) {
                    return ( (struct Maybe_243) { .tag = Maybe_243_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_246_Just_t ) {
                        ( (  next245 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next247 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_243_Just ) ( ( ( Tuple2_222_Tuple2 ) ( ( dref916 .stuff .Maybe_156_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_246_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each237 (    struct Zip_238  iterable1074 ,   struct envunion221  fun1076 ) {
    struct Zip_238  temp241 = ( (  into_dash_iter242 ) ( (  iterable1074 ) ) );
    struct Zip_238 *  it1077 = ( &temp241 );
    while ( ( true ) ) {
        struct Maybe_243  dref1078 = ( (  next244 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_243_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_243_Just_t ) {
                struct envunion221  temp249 = (  fun1076 );
                ( temp249.fun ( &temp249.env ,  ( dref1078 .stuff .Maybe_243_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct SliceIter_239   into_dash_iter251 (    struct Slice_10  self1822 ) {
    return ( (struct SliceIter_239) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_240   into_dash_iter252 (    struct FromIter_240  it903 ) {
    return (  it903 );
}

static  struct Zip_238   zip250 (    struct Slice_10  left922 ,    struct FromIter_240  right924 ) {
    struct SliceIter_239  left_dash_it925 = ( (  into_dash_iter251 ) ( (  left922 ) ) );
    struct FromIter_240  right_dash_it926 = ( (  into_dash_iter252 ) ( (  right924 ) ) );
    return ( (struct Zip_238) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct FromIter_240   from253 (    int32_t  f900 ) {
    return ( (struct FromIter_240) { .f_from = (  f900 ) } );
}

static  void *   cast_dash_ptr255 (    struct List_11 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free254 (    enum CAllocator_9  dref1959 ,    struct Slice_10  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr255 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   grow_dash_if_dash_full212 (   struct env1* env ,    struct List_8 *  list2041 ) {
    if ( (  eq213 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate214 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq213 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_10  new_dash_slice2042 = ( (  allocate214 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul219 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env220 envinst220 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion221  fun2046 = ( (struct envunion221){ .fun = (  enum Unit_7  (*) (  struct env220*  ,    struct Tuple2_222  ) )lam223 , .env =  envinst220 } );
            ( (  for_dash_each237 ) ( ( (  zip250 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from253 ) ( (  from_dash_integral44 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free254 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add210 (   struct env5* env ,    struct List_8 *  list2049 ,    struct List_11  elem2051 ) {
    struct envunion6  temp211 = ( (struct envunion6){ .fun = (  enum Unit_7  (*) (  struct env1*  ,    struct List_8 *  ) )grow_dash_if_dash_full212 , .env =  env->envinst1 } );
    ( temp211.fun ( &temp211.env ,  (  list2049 ) ) );
    ( (  set224 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add206 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam208 (   struct env151* env ,    struct List_11  x2102 ) {
    struct envunion35  temp209 = ( (struct envunion35){ .fun = (  enum Unit_7  (*) (  struct env5*  ,    struct List_8 *  ,    struct List_11  ) )add210 , .env =  env->envinst5 } );
    return ( temp209.fun ( &temp209.env ,  ( env->list2098 ) ,  (  x2102 ) ) );
}

static  enum Unit_7   add_dash_all149 (   struct env34* env ,    struct List_8 *  list2098 ,    struct Array_40  it2100 ) {
    struct env151 envinst151 = {
        .list2098 =  list2098 ,
        .envinst5 = env->envinst5 ,
    };
    ( (  for_dash_each150 ) ( (  it2100 ) ,  ( (struct envunion152){ .fun = (  enum Unit_7  (*) (  struct env151*  ,    struct List_11  ) )lam208 , .env =  envinst151 } ) ) );
    return ( Unit_7_Unit );
}

static  struct List_8   from_dash_iter139 (   struct env38* env ,    struct Array_40  iter2139 ,    enum CAllocator_9  al2141 ) {
    struct List_8  temp140 = ( (  mk141 ) ( (  al2141 ) ) );
    struct List_8 *  list2142 = ( &temp140 );
    struct envunion39  temp148 = ( (struct envunion39){ .fun = (  enum Unit_7  (*) (  struct env34*  ,    struct List_8 *  ,    struct Array_40  ) )add_dash_all149 , .env =  env->envinst34 } );
    ( temp148.fun ( &temp148.env ,  (  list2142 ) ,  (  iter2139 ) ) );
    return ( * (  list2142 ) );
}

static  struct Array_40   from_dash_listlike256 (    struct Array_40  self330 ) {
    return (  self330 );
}

static  void *   cast_dash_ptr262 (    uint8_t * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of263 (    uint8_t *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint8_t *   zeroed260 (  ) {
    uint8_t *  temp261;
    uint8_t *  x570 = (  temp261 );
    ( ( memset ) ( ( (  cast_dash_ptr262 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of263 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   null_dash_ptr259 (  ) {
    return ( (  zeroed260 ) ( ) );
}

static  struct Slice_12   empty258 (  ) {
    return ( (struct Slice_12) { .f_ptr = ( (  null_dash_ptr259 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_11   mk257 (    enum CAllocator_9  al2031 ) {
    struct Slice_12  elements2032 = ( (  empty258 ) ( ) );
    return ( (struct List_11) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr270 (    struct Changeset_26 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of271 (    struct Changeset_26 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Changeset_26 *   zeroed268 (  ) {
    struct Changeset_26 *  temp269;
    struct Changeset_26 *  x570 = (  temp269 );
    ( ( memset ) ( ( (  cast_dash_ptr270 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of271 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Changeset_26 *   null_dash_ptr267 (  ) {
    return ( (  zeroed268 ) ( ) );
}

static  struct Slice_25   empty266 (  ) {
    return ( (struct Slice_25) { .f_ptr = ( (  null_dash_ptr267 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_24   mk265 (    enum CAllocator_9  al2031 ) {
    struct Slice_25  elements2032 = ( (  empty266 ) ( ) );
    return ( (struct List_24) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_79   mk_dash_actions264 (    enum CAllocator_9  al3606 ) {
    return ( (struct Actions_79) { .f_list = ( (  mk265 ) ( (  al3606 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( false ) } );
}

static  struct TextBuf_78   mk137 (   struct env70* env ,    enum CAllocator_9  al3617 ,    struct Pos_20  cursor_dash_pos3619 ) {
    struct envunion71  temp138 = ( (struct envunion71){ .fun = (  struct List_8  (*) (  struct env38*  ,    struct Array_40  ,    enum CAllocator_9  ) )from_dash_iter139 , .env =  env->envinst38 } );
    return ( (struct TextBuf_78) { .f_al = (  al3617 ) , .f_buf = ( temp138.fun ( &temp138.env ,  ( (  from_dash_listlike256 ) ( ( (struct Array_40) { ._arr = { ( (  mk257 ) ( (  al3617 ) ) ) } } ) ) ) ,  (  al3617 ) ) ) , .f_actions = ( (  mk_dash_actions264 ) ( (  al3617 ) ) ) } );
}

static  struct Pos_20   mk272 (    int32_t  line3579 ,    int32_t  bi3581 ) {
    return ( (struct Pos_20) { .f_line = (  line3579 ) , .f_bi = (  bi3581 ) } );
}

struct Slice_273 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  const char* *   offset_dash_ptr275 (    const char* *  x338 ,    int64_t  count340 ) {
    const char*  temp276;
    return ( (const char* * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul204 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp276 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral277 (    int64_t  x46 ) {
    return (  x46 );
}

static  size_t   op_dash_sub278 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) - (  r277 ) );
}

static  struct Slice_273   get274 (  ) {
    return ( (struct Slice_273) { .f_ptr = ( (  offset_dash_ptr275 ) ( ( _global_argv ) ,  (  from_dash_integral277 ( 1 ) ) ) ) , .f_count = (  op_dash_sub278 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

struct Maybe_282 {
    enum {
        Maybe_282_None_t,
        Maybe_282_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_282_Just_s;
    } stuff;
};

static struct Maybe_282 Maybe_282_Just (  const char*  field0 ) {
    return ( struct Maybe_282 ) { .tag = Maybe_282_Just_t, .stuff = { .Maybe_282_Just_s = { .field0 = field0 } } };
};

static  const char*   undefined283 (  ) {
    const char*  temp284;
    return (  temp284 );
}

static  const char*   or_dash_fail281 (    struct Maybe_282  x1725 ,    struct StrConcat_227  errmsg1727 ) {
    struct Maybe_282  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_282_None_t ) {
        ( (  panic226 ) ( (  errmsg1727 ) ) );
        return ( (  undefined283 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_282_Just_t ) {
            return ( dref1728 .stuff .Maybe_282_Just_s .field0 );
        }
    }
}

static  struct Maybe_282   try_dash_get285 (    struct Slice_273  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp158 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_282) { .tag = Maybe_282_None_t } );
    }
    const char* *  elem_dash_ptr1766 = ( (  offset_dash_ptr275 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_282_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  const char*   get280 (    struct Slice_273  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail281 ) ( ( (  try_dash_get285 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string194 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get279 (    struct Slice_273  self1867 ,    size_t  idx1869 ) {
    return ( (  get280 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

struct envunion287 {
    enum Unit_7  (*fun) (  struct env76*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  );
    struct env76 env;
};

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_159   cmp291 (    int32_t  l159 ,    int32_t  r161 ) {
    return ( builtin_int32_tcmp( (  l159 ) , (  r161 ) ) );
}

static  enum Ordering_159   cmp290 (    struct Pos_20  l3572 ,    struct Pos_20  r3574 ) {
    enum Ordering_159  dref3575 = ( (  cmp291 ) ( ( (  l3572 ) .f_line ) ,  ( (  r3574 ) .f_line ) ) );
    switch (  dref3575 ) {
        case Ordering_159_EQ : {
            return ( (  cmp291 ) ( ( (  l3572 ) .f_bi ) ,  ( (  r3574 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_159  els3576 =  dref3575;
            return (  els3576 );
            break;
        }
    }
}

static  struct Pos_20   min289 (    struct Pos_20  l1236 ,    struct Pos_20  r1238 ) {
    if ( (  cmp290 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Pos_20   max292 (    struct Pos_20  l1315 ,    struct Pos_20  r1317 ) {
    if ( (  cmp290 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  bool   eq294 (    int32_t  l106 ,    int32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq293 (    struct Pos_20  l3567 ,    struct Pos_20  r3569 ) {
    return ( (  eq294 ( ( (  l3567 ) .f_line ) , ( (  r3569 ) .f_line ) ) ) && (  eq294 ( ( (  l3567 ) .f_bi ) , ( (  r3569 ) .f_bi ) ) ) );
}

static  size_t   size295 (    struct List_8 *  l2133 ) {
    return ( ( * (  l2133 ) ) .f_count );
}

static  struct List_11 *   get_dash_ptr300 (    struct List_8 *  list2001 ,    size_t  i2003 ) {
    if ( ( (  cmp158 ( (  i2003 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i2003 ) , ( ( * (  list2001 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic226 ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2003 ) ) ) ,  ( (  from_dash_string194 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2001 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr225 ) ( ( ( * (  list2001 ) ) .f_elements ) ,  (  i2003 ) ) );
}

static  struct List_11   get299 (    struct List_8 *  list2011 ,    size_t  i2013 ) {
    return ( * ( (  get_dash_ptr300 ) ( (  list2011 ) ,  (  i2013 ) ) ) );
}

static  uint8_t *   offset_dash_ptr303 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp304;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul204 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp304 ) ) ) ) ) ) ) ) );
}

static  size_t   min305 (    size_t  l1236 ,    size_t  r1238 ) {
    if ( (  cmp158 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Slice_12   subslice302 (    struct Slice_12  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    uint8_t *  begin_dash_ptr1787 = ( (  offset_dash_ptr303 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp158 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp158 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_12) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub278 ( ( (  min305 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_12) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct Slice_12   from301 (    struct Slice_12  slice1791 ,    size_t  from1793 ) {
    return ( (  subslice302 ) ( (  slice1791 ) ,  (  from1793 ) ,  ( (  slice1791 ) .f_count ) ) );
}

static  struct Slice_12   to_dash_slice306 (    struct List_11  l2126 ) {
    uint8_t *  ptr2127 = ( ( (  l2126 ) .f_elements ) .f_ptr );
    return ( (struct Slice_12) { .f_ptr = (  ptr2127 ) , .f_count = ( (  l2126 ) .f_count ) } );
}

static  enum Unit_7   set307 (    struct List_8 *  list2021 ,    size_t  i2023 ,    struct List_11  elem2025 ) {
    if ( ( (  cmp158 ( (  i2023 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i2023 ) , ( ( * (  list2021 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic226 ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2023 ) ) ) ,  ( (  from_dash_string194 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2021 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set224 ) ( ( ( * (  list2021 ) ) .f_elements ) ,  (  i2023 ) ,  (  elem2025 ) ) );
    return ( Unit_7_Unit );
}

struct env314 {
    struct List_11 *  list2098;
    struct env13 envinst13;
};

struct envunion315 {
    enum Unit_7  (*fun) (  struct env314*  ,    uint8_t  );
    struct env314 env;
};

struct SliceIter_316 {
    struct Slice_12  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_316   into_dash_iter318 (    struct Slice_12  self1822 ) {
    return ( (struct SliceIter_316) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_319 {
    enum {
        Maybe_319_None_t,
        Maybe_319_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_319_Just_s;
    } stuff;
};

static struct Maybe_319 Maybe_319_Just (  uint8_t  field0 ) {
    return ( struct Maybe_319 ) { .tag = Maybe_319_Just_t, .stuff = { .Maybe_319_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_319   next320 (    struct SliceIter_316 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp158 ( (  op_dash_add206 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_319) { .tag = Maybe_319_None_t } );
    }
    uint8_t  elem1830 = ( * ( (  offset_dash_ptr303 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add206 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_319_Just ) ( (  elem1830 ) ) );
}

static  enum Unit_7   for_dash_each313 (    struct Slice_12  iterable1074 ,   struct envunion315  fun1076 ) {
    struct SliceIter_316  temp317 = ( (  into_dash_iter318 ) ( (  iterable1074 ) ) );
    struct SliceIter_316 *  it1077 = ( &temp317 );
    while ( ( true ) ) {
        struct Maybe_319  dref1078 = ( (  next320 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_319_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_319_Just_t ) {
                struct envunion315  temp321 = (  fun1076 );
                ( temp321.fun ( &temp321.env ,  ( dref1078 .stuff .Maybe_319_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

struct TypeSize_329 {
    size_t  f_size;
};

static  struct TypeSize_329   get_dash_typesize328 (  ) {
    uint8_t  temp330;
    return ( (struct TypeSize_329) { .f_size = ( sizeof( ( (  temp330 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr331 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_12   allocate327 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize328 ) ( ) ) ) .f_size );
    uint8_t *  ptr1957 = ( (  cast_dash_ptr331 ) ( ( ( malloc ) ( (  op_dash_mul219 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_12) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env332 {
    struct Slice_12  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_334 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_334 Tuple2_334_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_334 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion333 {
    enum Unit_7  (*fun) (  struct env332*  ,    struct Tuple2_334  );
    struct env332 env;
};

static  uint8_t *   get_dash_ptr337 (    struct Slice_12  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp158 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic226 ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string194 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1760 = ( (  offset_dash_ptr303 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set336 (    struct Slice_12  slice1774 ,    size_t  i1776 ,    uint8_t  x1778 ) {
    uint8_t *  ep1779 = ( (  get_dash_ptr337 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam335 (   struct env332* env ,    struct Tuple2_334  dref2043 ) {
    return ( (  set336 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size236 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct Zip_339 {
    struct SliceIter_316  f_left_dash_it;
    struct FromIter_240  f_right_dash_it;
};

static  struct Zip_339   into_dash_iter341 (    struct Zip_339  self911 ) {
    return (  self911 );
}

struct Maybe_342 {
    enum {
        Maybe_342_None_t,
        Maybe_342_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_334  field0;
        } Maybe_342_Just_s;
    } stuff;
};

static struct Maybe_342 Maybe_342_Just (  struct Tuple2_334  field0 ) {
    return ( struct Maybe_342 ) { .tag = Maybe_342_Just_t, .stuff = { .Maybe_342_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_342   next343 (    struct Zip_339 *  self914 ) {
    struct Zip_339  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_319  dref916 = ( (  next320 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_319_None_t ) {
            return ( (struct Maybe_342) { .tag = Maybe_342_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_319_Just_t ) {
                struct Maybe_246  dref918 = ( (  next247 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_246_None_t ) {
                    return ( (struct Maybe_342) { .tag = Maybe_342_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_246_Just_t ) {
                        ( (  next320 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next247 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_342_Just ) ( ( ( Tuple2_334_Tuple2 ) ( ( dref916 .stuff .Maybe_319_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_246_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each338 (    struct Zip_339  iterable1074 ,   struct envunion333  fun1076 ) {
    struct Zip_339  temp340 = ( (  into_dash_iter341 ) ( (  iterable1074 ) ) );
    struct Zip_339 *  it1077 = ( &temp340 );
    while ( ( true ) ) {
        struct Maybe_342  dref1078 = ( (  next343 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_342_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_342_Just_t ) {
                struct envunion333  temp344 = (  fun1076 );
                ( temp344.fun ( &temp344.env ,  ( dref1078 .stuff .Maybe_342_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_339   zip345 (    struct Slice_12  left922 ,    struct FromIter_240  right924 ) {
    struct SliceIter_316  left_dash_it925 = ( (  into_dash_iter318 ) ( (  left922 ) ) );
    struct FromIter_240  right_dash_it926 = ( (  into_dash_iter252 ) ( (  right924 ) ) );
    return ( (struct Zip_339) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr347 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free346 (    enum CAllocator_9  dref1959 ,    struct Slice_12  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr347 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   grow_dash_if_dash_full326 (   struct env2* env ,    struct List_11 *  list2041 ) {
    if ( (  eq213 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate327 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq213 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_12  new_dash_slice2042 = ( (  allocate327 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul219 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env332 envinst332 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion333  fun2046 = ( (struct envunion333){ .fun = (  enum Unit_7  (*) (  struct env332*  ,    struct Tuple2_334  ) )lam335 , .env =  envinst332 } );
            ( (  for_dash_each338 ) ( ( (  zip345 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from253 ) ( (  from_dash_integral44 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free346 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add324 (   struct env13* env ,    struct List_11 *  list2049 ,    uint8_t  elem2051 ) {
    struct envunion14  temp325 = ( (struct envunion14){ .fun = (  enum Unit_7  (*) (  struct env2*  ,    struct List_11 *  ) )grow_dash_if_dash_full326 , .env =  env->envinst2 } );
    ( temp325.fun ( &temp325.env ,  (  list2049 ) ) );
    ( (  set336 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add206 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam322 (   struct env314* env ,    uint8_t  x2102 ) {
    struct envunion37  temp323 = ( (struct envunion37){ .fun = (  enum Unit_7  (*) (  struct env13*  ,    struct List_11 *  ,    uint8_t  ) )add324 , .env =  env->envinst13 } );
    return ( temp323.fun ( &temp323.env ,  ( env->list2098 ) ,  (  x2102 ) ) );
}

static  enum Unit_7   add_dash_all312 (   struct env36* env ,    struct List_11 *  list2098 ,    struct Slice_12  it2100 ) {
    struct env314 envinst314 = {
        .list2098 =  list2098 ,
        .envinst13 = env->envinst13 ,
    };
    ( (  for_dash_each313 ) ( (  it2100 ) ,  ( (struct envunion315){ .fun = (  enum Unit_7  (*) (  struct env314*  ,    uint8_t  ) )lam322 , .env =  envinst314 } ) ) );
    return ( Unit_7_Unit );
}

static  struct List_11   from_dash_iter309 (   struct env41* env ,    struct Slice_12  iter2139 ,    enum CAllocator_9  al2141 ) {
    struct List_11  temp310 = ( (  mk257 ) ( (  al2141 ) ) );
    struct List_11 *  list2142 = ( &temp310 );
    struct envunion42  temp311 = ( (struct envunion42){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all312 , .env =  env->envinst36 } );
    ( temp311.fun ( &temp311.env ,  (  list2142 ) ,  (  iter2139 ) ) );
    return ( * (  list2142 ) );
}

static  struct StrView_21   or_dash_else349 (    struct Maybe_120  self1732 ,    struct StrView_21  alt1734 ) {
    struct Maybe_120  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_120_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_120_Just_t ) {
            return ( dref1735 .stuff .Maybe_120_Just_s .field0 );
        }
    }
}

struct LineIter_351 {
    struct StrView_21  f_og;
    size_t  f_last;
};

static  uint8_t   undefined355 (  ) {
    uint8_t  temp356;
    return (  temp356 );
}

static  uint8_t   or_dash_fail354 (    struct Maybe_319  x1725 ,    struct StrConcat_227  errmsg1727 ) {
    struct Maybe_319  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_319_None_t ) {
        ( (  panic226 ) ( (  errmsg1727 ) ) );
        return ( (  undefined355 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_319_Just_t ) {
            return ( dref1728 .stuff .Maybe_319_Just_s .field0 );
        }
    }
}

static  struct Maybe_319   try_dash_get357 (    struct Slice_12  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp158 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_319) { .tag = Maybe_319_None_t } );
    }
    uint8_t *  elem_dash_ptr1766 = ( (  offset_dash_ptr303 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_319_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  uint8_t   get353 (    struct Slice_12  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail354 ) ( ( (  try_dash_get357 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string194 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   char_dash_u8358 (    struct Char_53  c718 ) {
    struct CharDestructured_179  dref719 = ( (  destructure181 ) ( (  c718 ) ) );
    if ( dref719.tag == CharDestructured_179_Ref_t ) {
        return ( * ( ( dref719 .stuff .CharDestructured_179_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref719.tag == CharDestructured_179_Scalar_t ) {
            return ( (  u32_dash_u8192 ) ( ( ( dref719 .stuff .CharDestructured_179_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct StrView_21   byte_dash_substr359 (    struct StrView_21  s2183 ,    size_t  from2185 ,    size_t  to2187 ) {
    return ( (struct StrView_21) { .f_contents = ( (  subslice302 ) ( ( (  s2183 ) .f_contents ) ,  (  from2185 ) ,  (  to2187 ) ) ) } );
}

static  struct Maybe_120   next352 (    struct LineIter_351 *  self2404 ) {
    if ( (  cmp158 ( ( ( * (  self2404 ) ) .f_last ) , ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_120) { .tag = Maybe_120_None_t } );
    }
    size_t  i2405 = ( ( * (  self2404 ) ) .f_last );
    while ( ( (  cmp158 ( (  i2405 ) , ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq182 ( ( (  get353 ) ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) ,  (  i2405 ) ) ) , ( (  char_dash_u8358 ) ( ( (  from_dash_charlike195 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2405 = (  op_dash_add206 ( (  i2405 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_21  line2406 = ( (  byte_dash_substr359 ) ( ( ( * (  self2404 ) ) .f_og ) ,  ( ( * (  self2404 ) ) .f_last ) ,  (  i2405 ) ) );
    if ( (  cmp158 ( (  i2405 ) , ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2405 = (  op_dash_add206 ( (  i2405 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2404 ) .f_last = (  i2405 );
    return ( ( Maybe_120_Just ) ( (  line2406 ) ) );
}

static  struct LineIter_351   into_dash_iter361 (    struct LineIter_351  self2401 ) {
    return (  self2401 );
}

static  struct Maybe_120   head350 (    struct LineIter_351  it1142 ) {
    struct LineIter_351  temp360 = ( (  into_dash_iter361 ) ( (  it1142 ) ) );
    return ( (  next352 ) ( ( &temp360 ) ) );
}

static  struct LineIter_351   lines362 (    struct StrView_21  s2398 ) {
    return ( (struct LineIter_351) { .f_og = (  s2398 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env367 {
    ;
    struct Char_53  c2222;
};

struct envunion368 {
    bool  (*fun) (  struct env367*  ,    struct Char_53  );
    struct env367 env;
};

struct SplitIter_366 {
    struct StrView_21  f_og;
    size_t  f_last;
    struct envunion368  f_fun;
};

struct Drop_365 {
    struct SplitIter_366  field0;
    size_t  field1;
};

static struct Drop_365 Drop_365_Drop (  struct SplitIter_366  field0 ,  size_t  field1 ) {
    return ( struct Drop_365 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_364 {
    struct Drop_365  f_left_dash_it;
    struct FromIter_240  f_right_dash_it;
};

static  struct Zip_364   into_dash_iter369 (    struct Zip_364  self911 ) {
    return (  self911 );
}

static  struct Drop_365   into_dash_iter371 (    struct Drop_365  self845 ) {
    return (  self845 );
}

static  struct Zip_364   zip370 (    struct Drop_365  left922 ,    struct FromIter_240  right924 ) {
    struct Drop_365  left_dash_it925 = ( (  into_dash_iter371 ) ( (  left922 ) ) );
    struct FromIter_240  right_dash_it926 = ( (  into_dash_iter252 ) ( (  right924 ) ) );
    return ( (struct Zip_364) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct SplitIter_366   into_dash_iter373 (    struct SplitIter_366  self2227 ) {
    return (  self2227 );
}

static  struct Drop_365   drop372 (    struct SplitIter_366  iterable852 ,    size_t  i854 ) {
    struct SplitIter_366  it855 = ( (  into_dash_iter373 ) ( (  iterable852 ) ) );
    return ( ( Drop_365_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SplitIter_366   split_dash_by_dash_filter375 (    struct StrView_21  s2215 ,   struct envunion368  fun2217 ) {
    return ( (struct SplitIter_366) { .f_og = (  s2215 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2217 ) } );
}

struct Tuple2_378 {
    struct CharDestructured_179  field0;
    struct CharDestructured_179  field1;
};

static struct Tuple2_378 Tuple2_378_Tuple2 (  struct CharDestructured_179  field0 ,  struct CharDestructured_179  field1 ) {
    return ( struct Tuple2_378 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int64_t   op_dash_add379 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) + (  r186 ) );
}

static  bool   eq381 (    uint32_t  l111 ,    uint32_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  bool   eq380 (    struct Scalar_180  l724 ,    struct Scalar_180  r726 ) {
    return (  eq381 ( ( (  l724 ) .f_value ) , ( (  r726 ) .f_value ) ) );
}

static  bool   eq377 (    struct Char_53  l729 ,    struct Char_53  r731 ) {
    if ( ( !  eq213 ( ( (  l729 ) .f_num_dash_bytes ) , ( (  r731 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_378  dref732 = ( ( Tuple2_378_Tuple2 ) ( ( (  destructure181 ) ( (  l729 ) ) ) ,  ( (  destructure181 ) ( (  r731 ) ) ) ) );
    if ( dref732 .field0.tag == CharDestructured_179_Ref_t && dref732 .field1.tag == CharDestructured_179_Ref_t ) {
        int64_t  i735 = (  from_dash_integral277 ( 0 ) );
        while ( (  cmp158 ( ( (size_t ) (  i735 ) ) , ( ( dref732 .field0 .stuff .CharDestructured_179_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq182 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field0 .stuff .CharDestructured_179_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field1 .stuff .CharDestructured_179_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) ) ) ) {
                return ( false );
            }
            i735 = (  op_dash_add379 ( (  i735 ) , (  from_dash_integral277 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref732 .field0.tag == CharDestructured_179_Scalar_t && dref732 .field1.tag == CharDestructured_179_Scalar_t ) {
            return (  eq380 ( ( dref732 .field0 .stuff .CharDestructured_179_Scalar_s .field0 ) , ( dref732 .field1 .stuff .CharDestructured_179_Scalar_s .field0 ) ) );
        }
        else {
            if ( dref732 .field0.tag == CharDestructured_179_Scalar_t && dref732 .field1.tag == CharDestructured_179_Ref_t ) {
                return (  eq182 ( ( (  u32_dash_u8192 ) ( ( ( dref732 .field0 .stuff .CharDestructured_179_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref732 .field1 .stuff .CharDestructured_179_Ref_s .field0 ) .f_ptr ) ) ) );
            }
            else {
                if ( dref732 .field0.tag == CharDestructured_179_Ref_t && dref732 .field1.tag == CharDestructured_179_Scalar_t ) {
                    return (  eq182 ( ( (  u32_dash_u8192 ) ( ( ( dref732 .field1 .stuff .CharDestructured_179_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref732 .field0 .stuff .CharDestructured_179_Ref_s .field0 ) .f_ptr ) ) ) );
                }
            }
        }
    }
}

static  bool   lam376 (   struct env367* env ,    struct Char_53  cc2224 ) {
    return (  eq377 ( (  cc2224 ) , ( env->c2222 ) ) );
}

static  struct SplitIter_366   split_dash_by_dash_each374 (    struct StrView_21  s2220 ,    struct Char_53  c2222 ) {
    struct env367 envinst367 = {
        .c2222 =  c2222 ,
    };
    return ( (  split_dash_by_dash_filter375 ) ( (  s2220 ) ,  ( (struct envunion368){ .fun = (  bool  (*) (  struct env367*  ,    struct Char_53  ) )lam376 , .env =  envinst367 } ) ) );
}

struct Tuple2_384 {
    struct StrView_21  field0;
    int32_t  field1;
};

static struct Tuple2_384 Tuple2_384_Tuple2 (  struct StrView_21  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_384 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_383 {
    enum {
        Maybe_383_None_t,
        Maybe_383_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_384  field0;
        } Maybe_383_Just_s;
    } stuff;
};

static struct Maybe_383 Maybe_383_Just (  struct Tuple2_384  field0 ) {
    return ( struct Maybe_383 ) { .tag = Maybe_383_Just_t, .stuff = { .Maybe_383_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_120   next387 (    struct SplitIter_366 *  self2230 ) {
    if ( (  cmp158 ( ( ( * (  self2230 ) ) .f_last ) , ( ( ( ( * (  self2230 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_120) { .tag = Maybe_120_None_t } );
    }
    size_t  i2231 = ( ( * (  self2230 ) ) .f_last );
    while ( (  cmp158 ( (  i2231 ) , ( ( ( ( * (  self2230 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2232 = ( (  get_dash_ptr337 ) ( ( ( ( * (  self2230 ) ) .f_og ) .f_contents ) ,  (  i2231 ) ) );
        struct Char_53  c2233 = ( (  scan_dash_from_dash_mem197 ) ( (  ptr2232 ) ) );
        struct envunion368  temp388 = ( ( * (  self2230 ) ) .f_fun );
        if ( ( temp388.fun ( &temp388.env ,  (  c2233 ) ) ) ) {
            break;
        }
        i2231 = (  op_dash_add206 ( (  i2231 ) , ( (  next_dash_char198 ) ( (  ptr2232 ) ) ) ) );
    }
    struct StrView_21  line2234 = ( (  byte_dash_substr359 ) ( ( ( * (  self2230 ) ) .f_og ) ,  ( ( * (  self2230 ) ) .f_last ) ,  (  i2231 ) ) );
    i2231 = (  op_dash_add206 ( (  i2231 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2230 ) .f_last = (  i2231 );
    return ( ( Maybe_120_Just ) ( (  line2234 ) ) );
}

static  struct Maybe_120   next386 (    struct Drop_365 *  dref847 ) {
    while ( (  cmp158 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next387 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub278 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next387 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Maybe_383   next385 (    struct Zip_364 *  self914 ) {
    struct Zip_364  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_120  dref916 = ( (  next386 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_120_None_t ) {
            return ( (struct Maybe_383) { .tag = Maybe_383_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_120_Just_t ) {
                struct Maybe_246  dref918 = ( (  next247 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_246_None_t ) {
                    return ( (struct Maybe_383) { .tag = Maybe_383_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_246_Just_t ) {
                        ( (  next386 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next247 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_383_Just ) ( ( ( Tuple2_384_Tuple2 ) ( ( dref916 .stuff .Maybe_120_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_246_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion391 {
    struct List_11  (*fun) (  struct env41*  ,    struct Slice_12  ,    enum CAllocator_9  );
    struct env41 env;
};

static  enum Unit_7   insert393 (   struct env29* env ,    struct List_8 *  list2054 ,    size_t  i2056 ,    struct List_11  elem2058 ) {
    if ( ( (  cmp158 ( (  i2056 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i2056 ) , ( ( * (  list2054 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic226 ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2056 ) ) ) ,  ( (  from_dash_string194 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2054 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq213 ( ( ( * (  list2054 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion31  temp394 = ( (struct envunion31){ .fun = (  enum Unit_7  (*) (  struct env5*  ,    struct List_8 *  ,    struct List_11  ) )add210 , .env =  env->envinst5 } );
        ( temp394.fun ( &temp394.env ,  (  list2054 ) ,  (  elem2058 ) ) );
        return ( Unit_7_Unit );
    }
    struct envunion30  temp395 = ( (struct envunion30){ .fun = (  enum Unit_7  (*) (  struct env1*  ,    struct List_8 *  ) )grow_dash_if_dash_full212 , .env =  env->envinst1 } );
    ( temp395.fun ( &temp395.env ,  (  list2054 ) ) );
    size_t  ii2059 = (  op_dash_sub278 ( ( ( * (  list2054 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp158 ( (  ii2059 ) , (  i2056 ) ) != 0 ) ) {
        ( (  set224 ) ( ( ( * (  list2054 ) ) .f_elements ) ,  (  op_dash_add206 ( (  ii2059 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get299 ) ( (  list2054 ) ,  (  ii2059 ) ) ) ) );
        if ( (  eq213 ( (  ii2059 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2059 = (  op_dash_sub278 ( (  ii2059 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set224 ) ( ( ( * (  list2054 ) ) .f_elements ) ,  (  i2056 ) ,  (  elem2058 ) ) );
    (*  list2054 ) .f_count = (  op_dash_add206 ( ( ( * (  list2054 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct envunion397 {
    enum Unit_7  (*fun) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env36 env;
};

static  enum Unit_7   free398 (    struct List_11 *  list2035 ) {
    ( (  free346 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( ( * (  list2035 ) ) .f_elements ) ) );
    return ( Unit_7_Unit );
}

static  int32_t   add_dash_to_dash_spot298 (   struct env72* env ,    struct TextBuf_78 *  self3651 ,    struct Pos_20  p3653 ,    struct StrView_21  bytes3655 ) {
    enum CAllocator_9  al3656 = ( ( ( * (  self3651 ) ) .f_buf ) .f_al );
    struct List_8 *  buf3657 = ( & ( ( * (  self3651 ) ) .f_buf ) );
    struct List_11  extracted_dash_line_dash_buf3658 = ( (  get299 ) ( (  buf3657 ) ,  ( (  i32_dash_size236 ) ( ( (  p3653 ) .f_line ) ) ) ) );
    struct Slice_12  remaining3659 = ( (  from301 ) ( ( (  to_dash_slice306 ) ( (  extracted_dash_line_dash_buf3658 ) ) ) ,  ( (  i32_dash_size236 ) ( ( (  p3653 ) .f_bi ) ) ) ) );
    struct envunion73  temp308 = ( (struct envunion73){ .fun = (  struct List_11  (*) (  struct env41*  ,    struct Slice_12  ,    enum CAllocator_9  ) )from_dash_iter309 , .env =  env->envinst41 } );
    ( (  set307 ) ( (  buf3657 ) ,  ( (  i32_dash_size236 ) ( ( (  p3653 ) .f_line ) ) ) ,  ( temp308.fun ( &temp308.env ,  ( (  subslice302 ) ( ( (  to_dash_slice306 ) ( (  extracted_dash_line_dash_buf3658 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size236 ) ( ( (  p3653 ) .f_bi ) ) ) ) ) ,  (  al3656 ) ) ) ) );
    struct List_11 *  last_dash_line3660 = ( (  get_dash_ptr300 ) ( (  buf3657 ) ,  ( (  i32_dash_size236 ) ( ( (  p3653 ) .f_line ) ) ) ) );
    struct envunion75  temp348 = ( (struct envunion75){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all312 , .env =  env->envinst36 } );
    ( temp348.fun ( &temp348.env ,  (  last_dash_line3660 ) ,  ( ( (  or_dash_else349 ) ( ( (  head350 ) ( ( (  lines362 ) ( (  bytes3655 ) ) ) ) ) ,  ( (  from_dash_string194 ) ( ( "" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3661 = (  from_dash_integral44 ( 0 ) );
    struct Zip_364  temp363 =  into_dash_iter369 ( ( (  zip370 ) ( ( (  drop372 ) ( ( (  split_dash_by_dash_each374 ) ( (  bytes3655 ) ,  ( (  from_dash_charlike195 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from253 ) ( (  from_dash_integral44 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_383  __cond382 =  next385 (&temp363);
        if (  __cond382 .tag == 0 ) {
            break;
        }
        struct Tuple2_384  dref3662 =  __cond382 .stuff .Maybe_383_Just_s .field0;
        struct envunion391  temp390 = ( (struct envunion391){ .fun = (  struct List_11  (*) (  struct env41*  ,    struct Slice_12  ,    enum CAllocator_9  ) )from_dash_iter309 , .env =  env->envinst41 } );
        struct List_11  temp389 = ( temp390.fun ( &temp390.env ,  ( ( dref3662 .field0 ) .f_contents ) ,  (  al3656 ) ) );
        struct List_11 *  nuline3665 = ( &temp389 );
        size_t  next_dash_line3666 = ( (  i32_dash_size236 ) ( (  op_dash_add248 ( ( (  p3653 ) .f_line ) , ( dref3662 .field1 ) ) ) ) );
        struct envunion74  temp392 = ( (struct envunion74){ .fun = (  enum Unit_7  (*) (  struct env29*  ,    struct List_8 *  ,    size_t  ,    struct List_11  ) )insert393 , .env =  env->envinst29 } );
        ( temp392.fun ( &temp392.env ,  (  buf3657 ) ,  (  next_dash_line3666 ) ,  ( * (  nuline3665 ) ) ) );
        last_dash_line3660 = ( (  get_dash_ptr300 ) ( (  buf3657 ) ,  (  next_dash_line3666 ) ) );
        lines_dash_added3661 = (  op_dash_add248 ( (  lines_dash_added3661 ) , (  from_dash_integral44 ( 1 ) ) ) );
    }
    struct envunion397  temp396 = ( (struct envunion397){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all312 , .env =  env->envinst36 } );
    ( temp396.fun ( &temp396.env ,  (  last_dash_line3660 ) ,  (  remaining3659 ) ) );
    ( (  free398 ) ( ( & (  extracted_dash_line_dash_buf3658 ) ) ) );
    return (  lines_dash_added3661 );
}

static  size_t   size399 (    struct List_11 *  l2133 ) {
    return ( ( * (  l2133 ) ) .f_count );
}

struct StrConcat_405 {
    struct StrConcat_58  field0;
    struct Char_53  field1;
};

static struct StrConcat_405 StrConcat_405_StrConcat (  struct StrConcat_58  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_405 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_404 {
    struct StrConcat_405  field0;
    size_t  field1;
};

static struct StrConcat_404 StrConcat_404_StrConcat (  struct StrConcat_405  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_404 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_403 {
    struct StrConcat_404  field0;
    struct Char_53  field1;
};

static struct StrConcat_403 StrConcat_403_StrConcat (  struct StrConcat_404  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_403 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_408 {
    struct StrView_21  field0;
    struct StrConcat_403  field1;
};

static struct StrConcat_408 StrConcat_408_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_403  field1 ) {
    return ( struct StrConcat_408 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_407 {
    struct StrConcat_408  field0;
    struct Char_53  field1;
};

static struct StrConcat_407 StrConcat_407_StrConcat (  struct StrConcat_408  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_407 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str412 (    struct StrConcat_405  self1503 ) {
    struct StrConcat_405  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str174 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str177 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str411 (    struct StrConcat_404  self1503 ) {
    struct StrConcat_404  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str412 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str175 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str410 (    struct StrConcat_403  self1503 ) {
    struct StrConcat_403  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str411 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str177 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str409 (    struct StrConcat_408  self1503 ) {
    struct StrConcat_408  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str169 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str410 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str406 (    struct StrConcat_407  self1503 ) {
    struct StrConcat_407  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str409 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str177 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic402 (    struct StrConcat_403  errmsg1712 ) {
    ( (  print_dash_str406 ) ( ( ( StrConcat_407_StrConcat ) ( ( ( StrConcat_408_StrConcat ) ( ( (  from_dash_string194 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct Drop_414 {
    struct Zip_339  field0;
    size_t  field1;
};

static struct Drop_414 Drop_414_Drop (  struct Zip_339  field0 ,  size_t  field1 ) {
    return ( struct Drop_414 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env415 {
    ;
    size_t  num_dash_elems2067;
    ;
    ;
    struct List_11 *  list2062;
};

struct envunion416 {
    enum Unit_7  (*fun) (  struct env415*  ,    struct Tuple2_334  );
    struct env415 env;
};

static  struct Drop_414   into_dash_iter418 (    struct Drop_414  self845 ) {
    return (  self845 );
}

static  struct Maybe_342   next419 (    struct Drop_414 *  dref847 ) {
    while ( (  cmp158 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next343 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub278 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next343 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_7   for_dash_each413 (    struct Drop_414  iterable1074 ,   struct envunion416  fun1076 ) {
    struct Drop_414  temp417 = ( (  into_dash_iter418 ) ( (  iterable1074 ) ) );
    struct Drop_414 *  it1077 = ( &temp417 );
    while ( ( true ) ) {
        struct Maybe_342  dref1078 = ( (  next419 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_342_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_342_Just_t ) {
                struct envunion416  temp420 = (  fun1076 );
                ( temp420.fun ( &temp420.env ,  ( dref1078 .stuff .Maybe_342_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Drop_414   drop421 (    struct Zip_339  iterable852 ,    size_t  i854 ) {
    struct Zip_339  it855 = ( (  into_dash_iter341 ) ( (  iterable852 ) ) );
    return ( ( Drop_414_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SliceIter_316   into_dash_iter423 (    struct List_11  self2028 ) {
    return ( (  into_dash_iter318 ) ( ( (  subslice302 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

static  struct Zip_339   zip422 (    struct List_11  left922 ,    struct FromIter_240  right924 ) {
    struct SliceIter_316  left_dash_it925 = ( (  into_dash_iter423 ) ( (  left922 ) ) );
    struct FromIter_240  right_dash_it926 = ( (  into_dash_iter252 ) ( (  right924 ) ) );
    return ( (struct Zip_339) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   set425 (    struct List_11 *  list2021 ,    size_t  i2023 ,    uint8_t  elem2025 ) {
    if ( ( (  cmp158 ( (  i2023 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i2023 ) , ( ( * (  list2021 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic226 ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2023 ) ) ) ,  ( (  from_dash_string194 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2021 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set336 ) ( ( ( * (  list2021 ) ) .f_elements ) ,  (  i2023 ) ,  (  elem2025 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam424 (   struct env415* env ,    struct Tuple2_334  dref2068 ) {
    return ( (  set425 ) ( ( env->list2062 ) ,  (  op_dash_sub278 ( ( (  i32_dash_size236 ) ( ( dref2068 .field1 ) ) ) , ( env->num_dash_elems2067 ) ) ) ,  ( dref2068 .field0 ) ) );
}

struct StrConcat_428 {
    struct StrConcat_228  field0;
    struct StrView_21  field1;
};

static struct StrConcat_428 StrConcat_428_StrConcat (  struct StrConcat_228  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_428 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_431 {
    struct StrView_21  field0;
    struct StrConcat_428  field1;
};

static struct StrConcat_431 StrConcat_431_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_428  field1 ) {
    return ( struct StrConcat_431 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_430 {
    struct StrConcat_431  field0;
    struct Char_53  field1;
};

static struct StrConcat_430 StrConcat_430_StrConcat (  struct StrConcat_431  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_430 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str433 (    struct StrConcat_428  self1503 ) {
    struct StrConcat_428  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str234 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str169 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str432 (    struct StrConcat_431  self1503 ) {
    struct StrConcat_431  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str169 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str433 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str429 (    struct StrConcat_430  self1503 ) {
    struct StrConcat_430  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str432 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str177 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic427 (    struct StrConcat_428  errmsg1712 ) {
    ( (  print_dash_str429 ) ( ( ( StrConcat_430_StrConcat ) ( ( ( StrConcat_431_StrConcat ) ( ( (  from_dash_string194 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct env435 {
    ;
    struct Slice_12  dest1853;
    ;
};

struct envunion436 {
    enum Unit_7  (*fun) (  struct env435*  ,    struct Tuple2_334  );
    struct env435 env;
};

static  enum Unit_7   for_dash_each434 (    struct Zip_339  iterable1074 ,   struct envunion436  fun1076 ) {
    struct Zip_339  temp437 = ( (  into_dash_iter341 ) ( (  iterable1074 ) ) );
    struct Zip_339 *  it1077 = ( &temp437 );
    while ( ( true ) ) {
        struct Maybe_342  dref1078 = ( (  next343 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_342_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_342_Just_t ) {
                struct envunion436  temp438 = (  fun1076 );
                ( temp438.fun ( &temp438.env ,  ( dref1078 .stuff .Maybe_342_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam439 (   struct env435* env ,    struct Tuple2_334  dref1854 ) {
    return ( (  set336 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size236 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_7   copy_dash_to426 (    struct Slice_12  src1851 ,    struct Slice_12  dest1853 ) {
    if ( (  cmp158 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic427 ) ( ( ( StrConcat_428_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string194 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string194 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env435 envinst435 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each434 ) ( ( (  zip345 ) ( (  src1851 ) ,  ( (  from253 ) ( (  from_dash_integral44 ( 0 ) ) ) ) ) ) ,  ( (struct envunion436){ .fun = (  enum Unit_7  (*) (  struct env435*  ,    struct Tuple2_334  ) )lam439 , .env =  envinst435 } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   remove_dash_range401 (   struct env32* env ,    struct List_11 *  list2062 ,    size_t  from2064 ,    size_t  to_dash_excl2066 ) {
    if ( (  cmp158 ( (  to_dash_excl2066 ) , (  from2064 ) ) == 0 ) ) {
        ( (  panic402 ) ( ( ( StrConcat_403_StrConcat ) ( ( ( StrConcat_404_StrConcat ) ( ( ( StrConcat_405_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp158 ( (  from2064 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic226 ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_string194 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp158 ( (  to_dash_excl2066 ) , ( ( * (  list2062 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic226 ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_string194 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2067 = (  op_dash_sub278 ( (  to_dash_excl2066 ) , (  from2064 ) ) );
    struct env415 envinst415 = {
        .num_dash_elems2067 =  num_dash_elems2067 ,
        .list2062 =  list2062 ,
    };
    ( (  for_dash_each413 ) ( ( (  drop421 ) ( ( (  zip422 ) ( ( * (  list2062 ) ) ,  ( (  from253 ) ( (  from_dash_integral44 ( 0 ) ) ) ) ) ) ,  (  op_dash_add206 ( (  from2064 ) , (  num_dash_elems2067 ) ) ) ) ) ,  ( (struct envunion416){ .fun = (  enum Unit_7  (*) (  struct env415*  ,    struct Tuple2_334  ) )lam424 , .env =  envinst415 } ) ) );
    (*  list2062 ) .f_count = (  op_dash_sub278 ( ( ( * (  list2062 ) ) .f_count ) , (  num_dash_elems2067 ) ) );
    size_t  capacity2071 = ( ( ( * (  list2062 ) ) .f_elements ) .f_count );
    if ( (  cmp158 ( (  op_dash_mul219 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  capacity2071 ) ) == 0 ) ) {
        if ( (  eq213 ( ( ( * (  list2062 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free346 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
            (*  list2062 ) .f_elements = ( (  empty258 ) ( ) );
            return ( Unit_7_Unit );
        }
        size_t  new_dash_size2072 = (  op_dash_mul219 ( (  op_dash_add206 ( (  op_dash_div185 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2038 ) ) );
        struct Slice_12  new_dash_slice2073 = ( (  allocate327 ) ( ( ( * (  list2062 ) ) .f_al ) ,  (  new_dash_size2072 ) ) );
        ( (  copy_dash_to426 ) ( ( (  subslice302 ) ( ( ( * (  list2062 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  (  new_dash_slice2073 ) ) );
        ( (  free346 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
        (*  list2062 ) .f_elements = (  new_dash_slice2073 );
    }
    return ( Unit_7_Unit );
}

struct envunion441 {
    int32_t  (*fun) (  struct env72*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct StrView_21  );
    struct env72 env;
};

static  enum Unit_7   trim442 (    struct List_11 *  l2115 ,    size_t  new_dash_count2117 ) {
    (*  l2115 ) .f_count = ( (  min305 ) ( (  new_dash_count2117 ) ,  ( ( * (  l2115 ) ) .f_count ) ) );
    return ( Unit_7_Unit );
}

static  int32_t   min443 (    int32_t  l1236 ,    int32_t  r1238 ) {
    if ( (  cmp291 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

struct envunion445 {
    int32_t  (*fun) (  struct env72*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct StrView_21  );
    struct env72 env;
};

struct Maybe_447 {
    enum {
        Maybe_447_None_t,
        Maybe_447_Just_t,
    } tag;
    union {
        struct {
            struct Slice_12  field0;
        } Maybe_447_Just_s;
    } stuff;
};

static struct Maybe_447 Maybe_447_Just (  struct Slice_12  field0 ) {
    return ( struct Maybe_447 ) { .tag = Maybe_447_Just_t, .stuff = { .Maybe_447_Just_s = { .field0 = field0 } } };
};

static  struct Slice_12   or_dash_else446 (    struct Maybe_447  self1732 ,    struct Slice_12  alt1734 ) {
    struct Maybe_447  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_447_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_447_Just_t ) {
            return ( dref1735 .stuff .Maybe_447_Just_s .field0 );
        }
    }
}

static  struct Maybe_447   fmap_dash_maybe448 (    struct Maybe_156  x1275 ,    struct Slice_12 (*  fun1277 )(    struct List_11  ) ) {
    struct Maybe_156  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_156_None_t ) {
        return ( (struct Maybe_447) { .tag = Maybe_447_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_156_Just_t ) {
            return ( ( Maybe_447_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_156_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_156   try_dash_get449 (    struct List_8 *  list2016 ,    size_t  i2018 ) {
    if ( (  cmp158 ( (  i2018 ) , ( ( * (  list2016 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_156) { .tag = Maybe_156_None_t } );
    }
    return ( ( Maybe_156_Just ) ( ( (  get299 ) ( (  list2016 ) ,  (  i2018 ) ) ) ) );
}

struct StrConcat_454 {
    struct StrView_21  field0;
    struct StrView_21  field1;
};

static struct StrConcat_454 StrConcat_454_StrConcat (  struct StrView_21  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_454 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_453 {
    struct StrConcat_454  field0;
    struct Char_53  field1;
};

static struct StrConcat_453 StrConcat_453_StrConcat (  struct StrConcat_454  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_453 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str455 (    struct StrConcat_454  self1503 ) {
    struct StrConcat_454  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str169 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str169 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str452 (    struct StrConcat_453  self1503 ) {
    struct StrConcat_453  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str455 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str177 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   assert451 (    bool  cond1718 ,    struct StrView_21  msg1720 ) {
    if ( ( ! (  cond1718 ) ) ) {
        ( (  print_dash_str452 ) ( ( ( StrConcat_453_StrConcat ) ( ( ( StrConcat_454_StrConcat ) ( ( (  from_dash_string194 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1720 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    }
    return ( Unit_7_Unit );
}

struct Drop_459 {
    struct Zip_238  field0;
    size_t  field1;
};

static struct Drop_459 Drop_459_Drop (  struct Zip_238  field0 ,  size_t  field1 ) {
    return ( struct Drop_459 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env460 {
    ;
    size_t  num_dash_elems2067;
    ;
    ;
    struct List_8 *  list2062;
};

struct envunion461 {
    enum Unit_7  (*fun) (  struct env460*  ,    struct Tuple2_222  );
    struct env460 env;
};

static  struct Drop_459   into_dash_iter463 (    struct Drop_459  self845 ) {
    return (  self845 );
}

static  struct Maybe_243   next464 (    struct Drop_459 *  dref847 ) {
    while ( (  cmp158 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next244 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub278 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next244 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_7   for_dash_each458 (    struct Drop_459  iterable1074 ,   struct envunion461  fun1076 ) {
    struct Drop_459  temp462 = ( (  into_dash_iter463 ) ( (  iterable1074 ) ) );
    struct Drop_459 *  it1077 = ( &temp462 );
    while ( ( true ) ) {
        struct Maybe_243  dref1078 = ( (  next464 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_243_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_243_Just_t ) {
                struct envunion461  temp465 = (  fun1076 );
                ( temp465.fun ( &temp465.env ,  ( dref1078 .stuff .Maybe_243_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Drop_459   drop466 (    struct Zip_238  iterable852 ,    size_t  i854 ) {
    struct Zip_238  it855 = ( (  into_dash_iter242 ) ( (  iterable852 ) ) );
    return ( ( Drop_459_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct Slice_10   subslice469 (    struct Slice_10  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct List_11 *  begin_dash_ptr1787 = ( (  offset_dash_ptr203 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp158 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp158 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_10) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub278 ( ( (  min305 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_10) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_239   into_dash_iter468 (    struct List_8  self2028 ) {
    return ( (  into_dash_iter251 ) ( ( (  subslice469 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

static  struct Zip_238   zip467 (    struct List_8  left922 ,    struct FromIter_240  right924 ) {
    struct SliceIter_239  left_dash_it925 = ( (  into_dash_iter468 ) ( (  left922 ) ) );
    struct FromIter_240  right_dash_it926 = ( (  into_dash_iter252 ) ( (  right924 ) ) );
    return ( (struct Zip_238) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   lam470 (   struct env460* env ,    struct Tuple2_222  dref2068 ) {
    return ( (  set307 ) ( ( env->list2062 ) ,  (  op_dash_sub278 ( ( (  i32_dash_size236 ) ( ( dref2068 .field1 ) ) ) , ( env->num_dash_elems2067 ) ) ) ,  ( dref2068 .field0 ) ) );
}

struct env473 {
    ;
    struct Slice_10  dest1853;
    ;
};

struct envunion474 {
    enum Unit_7  (*fun) (  struct env473*  ,    struct Tuple2_222  );
    struct env473 env;
};

static  enum Unit_7   for_dash_each472 (    struct Zip_238  iterable1074 ,   struct envunion474  fun1076 ) {
    struct Zip_238  temp475 = ( (  into_dash_iter242 ) ( (  iterable1074 ) ) );
    struct Zip_238 *  it1077 = ( &temp475 );
    while ( ( true ) ) {
        struct Maybe_243  dref1078 = ( (  next244 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_243_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_243_Just_t ) {
                struct envunion474  temp476 = (  fun1076 );
                ( temp476.fun ( &temp476.env ,  ( dref1078 .stuff .Maybe_243_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam477 (   struct env473* env ,    struct Tuple2_222  dref1854 ) {
    return ( (  set224 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size236 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_7   copy_dash_to471 (    struct Slice_10  src1851 ,    struct Slice_10  dest1853 ) {
    if ( (  cmp158 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic427 ) ( ( ( StrConcat_428_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string194 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string194 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env473 envinst473 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each472 ) ( ( (  zip250 ) ( (  src1851 ) ,  ( (  from253 ) ( (  from_dash_integral44 ( 0 ) ) ) ) ) ) ,  ( (struct envunion474){ .fun = (  enum Unit_7  (*) (  struct env473*  ,    struct Tuple2_222  ) )lam477 , .env =  envinst473 } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   remove_dash_range457 (   struct env33* env ,    struct List_8 *  list2062 ,    size_t  from2064 ,    size_t  to_dash_excl2066 ) {
    if ( (  cmp158 ( (  to_dash_excl2066 ) , (  from2064 ) ) == 0 ) ) {
        ( (  panic402 ) ( ( ( StrConcat_403_StrConcat ) ( ( ( StrConcat_404_StrConcat ) ( ( ( StrConcat_405_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp158 ( (  from2064 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic226 ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_string194 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp158 ( (  to_dash_excl2066 ) , ( ( * (  list2062 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic226 ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_string194 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2067 = (  op_dash_sub278 ( (  to_dash_excl2066 ) , (  from2064 ) ) );
    struct env460 envinst460 = {
        .num_dash_elems2067 =  num_dash_elems2067 ,
        .list2062 =  list2062 ,
    };
    ( (  for_dash_each458 ) ( ( (  drop466 ) ( ( (  zip467 ) ( ( * (  list2062 ) ) ,  ( (  from253 ) ( (  from_dash_integral44 ( 0 ) ) ) ) ) ) ,  (  op_dash_add206 ( (  from2064 ) , (  num_dash_elems2067 ) ) ) ) ) ,  ( (struct envunion461){ .fun = (  enum Unit_7  (*) (  struct env460*  ,    struct Tuple2_222  ) )lam470 , .env =  envinst460 } ) ) );
    (*  list2062 ) .f_count = (  op_dash_sub278 ( ( ( * (  list2062 ) ) .f_count ) , (  num_dash_elems2067 ) ) );
    size_t  capacity2071 = ( ( ( * (  list2062 ) ) .f_elements ) .f_count );
    if ( (  cmp158 ( (  op_dash_mul219 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  capacity2071 ) ) == 0 ) ) {
        if ( (  eq213 ( ( ( * (  list2062 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free254 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
            (*  list2062 ) .f_elements = ( (  empty142 ) ( ) );
            return ( Unit_7_Unit );
        }
        size_t  new_dash_size2072 = (  op_dash_mul219 ( (  op_dash_add206 ( (  op_dash_div185 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2038 ) ) );
        struct Slice_10  new_dash_slice2073 = ( (  allocate214 ) ( ( ( * (  list2062 ) ) .f_al ) ,  (  new_dash_size2072 ) ) );
        ( (  copy_dash_to471 ) ( ( (  subslice469 ) ( ( ( * (  list2062 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  (  new_dash_slice2073 ) ) );
        ( (  free254 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
        (*  list2062 ) .f_elements = (  new_dash_slice2073 );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   change_dash_no_dash_action288 (   struct env76* env ,    struct TextBuf_78 *  self3669 ,    struct Pos_20  from_dash_pos3671 ,    struct Pos_20  to_dash_pos3673 ,    struct StrView_21  bytes3675 ) {
    struct Pos_20  from3676 = ( (  min289 ) ( (  from_dash_pos3671 ) ,  (  to_dash_pos3673 ) ) );
    struct Pos_20  to3677 = ( (  max292 ) ( (  from_dash_pos3671 ) ,  (  to_dash_pos3673 ) ) );
    if ( (  eq293 ( (  to3677 ) , (  from3676 ) ) ) ) {
        enum CAllocator_9  al3678 = ( ( ( * (  self3669 ) ) .f_buf ) .f_al );
        if ( ( (  eq213 ( ( (  size295 ) ( ( & ( ( * (  self3669 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size236 ) ( ( (  from3676 ) .f_line ) ) ) ) ) && (  eq294 ( ( (  from3676 ) .f_bi ) , (  from_dash_integral44 ( 0 ) ) ) ) ) ) {
            struct envunion83  temp296 = ( (struct envunion83){ .fun = (  enum Unit_7  (*) (  struct env5*  ,    struct List_8 *  ,    struct List_11  ) )add210 , .env =  env->envinst5 } );
            ( temp296.fun ( &temp296.env ,  ( & ( ( * (  self3669 ) ) .f_buf ) ) ,  ( (  mk257 ) ( (  al3678 ) ) ) ) );
        }
        struct envunion77  temp297 = ( (struct envunion77){ .fun = (  int32_t  (*) (  struct env72*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct StrView_21  ) )add_dash_to_dash_spot298 , .env =  env->envinst72 } );
        ( temp297.fun ( &temp297.env ,  (  self3669 ) ,  (  from3676 ) ,  (  bytes3675 ) ) );
    } else {
        struct List_8 *  lines_dash_buf3679 = ( & ( ( * (  self3669 ) ) .f_buf ) );
        struct List_11 *  first_dash_line3680 = ( (  get_dash_ptr300 ) ( (  lines_dash_buf3679 ) ,  ( (  i32_dash_size236 ) ( ( (  from3676 ) .f_line ) ) ) ) );
        if ( ( (  eq294 ( ( (  from3676 ) .f_line ) , ( (  to3677 ) .f_line ) ) ) && (  cmp291 ( ( (  to3677 ) .f_bi ) , (  op_dash_add248 ( ( (  size_dash_i32170 ) ( ( (  size399 ) ( (  first_dash_line3680 ) ) ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion81  temp400 = ( (struct envunion81){ .fun = (  enum Unit_7  (*) (  struct env32*  ,    struct List_11 *  ,    size_t  ,    size_t  ) )remove_dash_range401 , .env =  env->envinst32 } );
            ( temp400.fun ( &temp400.env ,  (  first_dash_line3680 ) ,  ( (  i32_dash_size236 ) ( ( (  from3676 ) .f_bi ) ) ) ,  ( (  i32_dash_size236 ) ( ( (  to3677 ) .f_bi ) ) ) ) );
            struct envunion441  temp440 = ( (struct envunion441){ .fun = (  int32_t  (*) (  struct env72*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct StrView_21  ) )add_dash_to_dash_spot298 , .env =  env->envinst72 } );
            ( temp440.fun ( &temp440.env ,  (  self3669 ) ,  (  from3676 ) ,  (  bytes3675 ) ) );
        } else {
            ( (  trim442 ) ( (  first_dash_line3680 ) ,  ( (  i32_dash_size236 ) ( ( (  from3676 ) .f_bi ) ) ) ) );
            struct List_11 *  last_dash_line3681 = ( (  get_dash_ptr300 ) ( (  lines_dash_buf3679 ) ,  ( (  i32_dash_size236 ) ( ( (  to3677 ) .f_line ) ) ) ) );
            to3677 .f_bi = ( (  min443 ) ( ( (  to3677 ) .f_bi ) ,  (  op_dash_add248 ( ( (  size_dash_i32170 ) ( ( (  size399 ) ( (  last_dash_line3681 ) ) ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) ) );
            if ( (  eq294 ( ( (  to3677 ) .f_bi ) , (  op_dash_add248 ( ( (  size_dash_i32170 ) ( ( (  size399 ) ( (  last_dash_line3681 ) ) ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) ) {
                to3677 .f_line = (  op_dash_add248 ( ( (  to3677 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) );
                to3677 .f_bi = (  from_dash_integral44 ( 0 ) );
            }
            struct envunion445  temp444 = ( (struct envunion445){ .fun = (  int32_t  (*) (  struct env72*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct StrView_21  ) )add_dash_to_dash_spot298 , .env =  env->envinst72 } );
            int32_t  lines_dash_added3682 = ( temp444.fun ( &temp444.env ,  (  self3669 ) ,  (  from3676 ) ,  (  bytes3675 ) ) );
            to3677 .f_line = (  op_dash_add248 ( ( (  to3677 ) .f_line ) , (  lines_dash_added3682 ) ) );
            from3676 .f_line = (  op_dash_add248 ( ( (  from3676 ) .f_line ) , (  lines_dash_added3682 ) ) );
            struct Slice_12  last_dash_line3683 = ( (  or_dash_else446 ) ( ( (  fmap_dash_maybe448 ) ( ( (  try_dash_get449 ) ( (  lines_dash_buf3679 ) ,  ( (  i32_dash_size236 ) ( ( (  to3677 ) .f_line ) ) ) ) ) ,  (  to_dash_slice306 ) ) ) ,  ( (  empty258 ) ( ) ) ) );
            struct envunion80  temp450 = ( (struct envunion80){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all312 , .env =  env->envinst36 } );
            ( temp450.fun ( &temp450.env ,  (  first_dash_line3680 ) ,  ( (  from301 ) ( (  last_dash_line3683 ) ,  ( (  i32_dash_size236 ) ( ( (  to3677 ) .f_bi ) ) ) ) ) ) );
            ( (  assert451 ) ( (  cmp291 ( ( (  to3677 ) .f_line ) , ( (  from3676 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string194 ) ( ( "there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion82  temp456 = ( (struct envunion82){ .fun = (  enum Unit_7  (*) (  struct env33*  ,    struct List_8 *  ,    size_t  ,    size_t  ) )remove_dash_range457 , .env =  env->envinst33 } );
            ( temp456.fun ( &temp456.env ,  ( & ( ( * (  self3669 ) ) .f_buf ) ) ,  ( (  i32_dash_size236 ) ( (  op_dash_add248 ( ( (  from3676 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) ,  (  op_dash_add206 ( ( (  i32_dash_size236 ) ( ( (  to3677 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_7_Unit );
}

struct StrConcat_481 {
    struct StrView_21  field0;
    const char*  field1;
};

static struct StrConcat_481 StrConcat_481_StrConcat (  struct StrView_21  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_481 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_480 {
    struct StrConcat_481  field0;
    struct Char_53  field1;
};

static struct StrConcat_480 StrConcat_480_StrConcat (  struct StrConcat_481  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_480 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_485 {
    struct StrView_21  field0;
    struct StrConcat_480  field1;
};

static struct StrConcat_485 StrConcat_485_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_480  field1 ) {
    return ( struct StrConcat_485 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_484 {
    struct StrConcat_485  field0;
    struct Char_53  field1;
};

static struct StrConcat_484 StrConcat_484_StrConcat (  struct StrConcat_485  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_484 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str489 (    const char*  self1398 ) {
    ( ( printf ) ( ( (  from_dash_string45 ) ( ( "%s" ) ,  ( 2 ) ) ) ,  (  self1398 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str488 (    struct StrConcat_481  self1503 ) {
    struct StrConcat_481  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str169 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str489 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str487 (    struct StrConcat_480  self1503 ) {
    struct StrConcat_480  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str488 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str177 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str486 (    struct StrConcat_485  self1503 ) {
    struct StrConcat_485  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str169 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str487 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str483 (    struct StrConcat_484  self1503 ) {
    struct StrConcat_484  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str486 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str177 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic482 (    struct StrConcat_480  errmsg1712 ) {
    ( (  print_dash_str483 ) ( ( ( StrConcat_484_StrConcat ) ( ( ( StrConcat_485_StrConcat ) ( ( (  from_dash_string194 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct StrView_21   undefined490 (  ) {
    struct StrView_21  temp491;
    return (  temp491 );
}

static  struct StrView_21   or_dash_fail479 (    struct Maybe_120  x1725 ,    struct StrConcat_480  errmsg1727 ) {
    struct Maybe_120  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_120_None_t ) {
        ( (  panic482 ) ( (  errmsg1727 ) ) );
        return ( (  undefined490 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_120_Just_t ) {
            return ( dref1728 .stuff .Maybe_120_Just_s .field0 );
        }
    }
}

static  const char*   from_dash_charlike493 (    uint8_t *  ptr73 ,    size_t  dref74 ) {
    return ( ( (const char* ) (  ptr73 ) ) );
}

static  void *   cast_dash_ptr498 (    FILE * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of499 (    FILE *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  FILE *   zeroed496 (  ) {
    FILE *  temp497;
    FILE *  x570 = (  temp497 );
    ( ( memset ) ( ( (  cast_dash_ptr498 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of499 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  FILE *   null_dash_ptr495 (  ) {
    return ( (  zeroed496 ) ( ) );
}

static  bool   is_dash_ptr_dash_null494 (    FILE *  p580 ) {
    return ( (  p580 ) == ( (  null_dash_ptr495 ) ( ) ) );
}

static  int32_t   seek_dash_end500 (  ) {
    return (  from_dash_integral44 ( 2 ) );
}

static  int32_t   seek_dash_set501 (  ) {
    return (  from_dash_integral44 ( 0 ) );
}

static  struct Char_53   nullchar502 (  ) {
    return ( (  from_dash_charlike195 ) ( ( "\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_120   try_dash_read_dash_contents492 (    const char*  filename2933 ,    enum CAllocator_9  al2935 ) {
    FILE *  file2936 = ( ( fopen ) ( (  filename2933 ) ,  ( (  from_dash_charlike493 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null494 ) ( (  file2936 ) ) ) ) {
        return ( (struct Maybe_120) { .tag = Maybe_120_None_t } );
    }
    ( ( fseek ) ( (  file2936 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  seek_dash_end500 ) ( ) ) ) );
    int32_t  file_dash_size2937 = ( ( ftell ) ( (  file2936 ) ) );
    ( ( fseek ) ( (  file2936 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  seek_dash_set501 ) ( ) ) ) );
    struct Slice_12  file_dash_buf2938 = ( ( (  allocate327 ) ( (  al2935 ) ,  (  op_dash_add206 ( ( (  i32_dash_size236 ) ( (  file_dash_size2937 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2938 ) .f_ptr ) ,  (  file_dash_size2937 ) ,  (  from_dash_integral44 ( 1 ) ) ,  (  file2936 ) ) );
    ( (  set336 ) ( (  file_dash_buf2938 ) ,  ( (  i32_dash_size236 ) ( (  file_dash_size2937 ) ) ) ,  ( (  char_dash_u8358 ) ( ( (  nullchar502 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2936 ) ) );
    struct StrView_21  str2939 = ( (struct StrView_21) { .f_contents = ( (  subslice302 ) ( (  file_dash_buf2938 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub278 ( ( (  file_dash_buf2938 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_120_Just ) ( (  str2939 ) ) );
}

static  struct StrView_21   read_dash_contents478 (    const char*  filename2942 ,    enum CAllocator_9  al2944 ) {
    return ( (  or_dash_fail479 ) ( ( (  try_dash_read_dash_contents492 ) ( (  filename2942 ) ,  (  al2944 ) ) ) ,  ( ( StrConcat_480_StrConcat ) ( ( ( StrConcat_481_StrConcat ) ( ( (  from_dash_string194 ) ( ( "could not open file " ) ,  ( 20 ) ) ) ,  (  filename2942 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "!" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Pane_117   mk504 (    enum CAllocator_9  al3811 ,    struct TextBuf_78 *  buf3813 ) {
    return ( (struct Pane_117) { .f_buf = (  buf3813 ) , .f_cursor = ( (  mk272 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  from_dash_integral44 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral44 ( 0 ) ) , .f_sel = ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) , .f_mode = ( Mode_118_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_119) { .f_screen_dash_top = (  from_dash_integral44 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral44 ( 0 ) ) } ) } );
}

struct envunion507 {
    struct Tui_64  (*fun) (  struct env60*  );
    struct env60 env;
};

static  struct Termios_66   undefined511 (  ) {
    struct Termios_66  temp512;
    return (  temp512 );
}

static  int32_t   stdin_dash_fileno513 (  ) {
    return (  from_dash_integral44 ( 0 ) );
}

static  struct termios *   cast_dash_ptr514 (    struct Termios_66 *  p359 ) {
    return ( (struct termios * ) (  p359 ) );
}

static  uint32_t   u32_dash_and515 (    uint32_t  l2832 ,    uint32_t  r2834 ) {
    return ( (  l2832 ) & (  r2834 ) );
}

static  uint32_t   u32_dash_neg516 (    uint32_t  l2837 ) {
    return ( ~ (  l2837 ) );
}

struct Array_518 {
    uint32_t _arr [4];
};

struct ArrayIter_520 {
    struct Array_518  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_520   into_dash_iter521 (    struct Array_518  self2322 ) {
    return ( (struct ArrayIter_520) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_522 {
    enum {
        Maybe_522_None_t,
        Maybe_522_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_522_Just_s;
    } stuff;
};

static struct Maybe_522 Maybe_522_Just (  uint32_t  field0 ) {
    return ( struct Maybe_522 ) { .tag = Maybe_522_Just_t, .stuff = { .Maybe_522_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr526 (    struct Array_518 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   offset_dash_ptr527 (    uint32_t *  x338 ,    int64_t  count340 ) {
    uint32_t  temp528;
    return ( (uint32_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul204 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp528 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr525 (    struct Array_518 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp158 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i2253 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic162 ) ( ( ( StrConcat_163_StrConcat ) ( ( ( StrConcat_164_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string194 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2254 = ( ( (  cast_dash_ptr526 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr527 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  uint32_t   get524 (    struct Array_518 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr525 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  struct Maybe_522   next523 (    struct ArrayIter_520 *  self2329 ) {
    if ( (  cmp158 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_522) { .tag = Maybe_522_None_t } );
    }
    uint32_t  e2331 = ( (  get524 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add206 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_522_Just ) ( (  e2331 ) ) );
}

static  uint32_t   reduce519 (    struct Array_518  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_520  it1099 = ( (  into_dash_iter521 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_522  dref1100 = ( (  next523 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_522_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_522_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_522_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp529 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp529);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp530;
    return (  temp530 );
}

static  uint32_t   u32_dash_or531 (    uint32_t  l2824 ,    uint32_t  r2826 ) {
    return ( (  l2824 ) | (  r2826 ) );
}

static  uint32_t   u32_dash_ors517 (    struct Array_518  vals2829 ) {
    return ( (  reduce519 ) ( (  vals2829 ) ,  (  from_dash_integral190 ( 0 ) ) ,  (  u32_dash_or531 ) ) );
}

static  struct Array_518   from_dash_listlike532 (    struct Array_518  self330 ) {
    return (  self330 );
}

static  uint32_t   echo533 (  ) {
    return (  from_dash_integral190 ( 8 ) );
}

static  uint32_t   icanon534 (  ) {
    return (  from_dash_integral190 ( 2 ) );
}

static  uint32_t   isig535 (  ) {
    return (  from_dash_integral190 ( 1 ) );
}

static  uint32_t   iexten536 (  ) {
    return (  from_dash_integral190 ( 32768 ) );
}

struct Array_538 {
    uint32_t _arr [5];
};

struct ArrayIter_540 {
    struct Array_538  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_540   into_dash_iter541 (    struct Array_538  self2322 ) {
    return ( (struct ArrayIter_540) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr545 (    struct Array_538 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr544 (    struct Array_538 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp158 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i2253 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic162 ) ( ( ( StrConcat_163_StrConcat ) ( ( ( StrConcat_164_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string194 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2254 = ( ( (  cast_dash_ptr545 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr527 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  uint32_t   get543 (    struct Array_538 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr544 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  struct Maybe_522   next542 (    struct ArrayIter_540 *  self2329 ) {
    if ( (  cmp158 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_522) { .tag = Maybe_522_None_t } );
    }
    uint32_t  e2331 = ( (  get543 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add206 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_522_Just ) ( (  e2331 ) ) );
}

static  uint32_t   reduce539 (    struct Array_538  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_540  it1099 = ( (  into_dash_iter541 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_522  dref1100 = ( (  next542 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_522_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_522_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_522_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp546 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp546);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp547;
    return (  temp547 );
}

static  uint32_t   u32_dash_ors537 (    struct Array_538  vals2829 ) {
    return ( (  reduce539 ) ( (  vals2829 ) ,  (  from_dash_integral190 ( 0 ) ) ,  (  u32_dash_or531 ) ) );
}

static  struct Array_538   from_dash_listlike548 (    struct Array_538  self330 ) {
    return (  self330 );
}

static  uint32_t   brkint549 (  ) {
    return (  from_dash_integral190 ( 2 ) );
}

static  uint32_t   icrnl550 (  ) {
    return (  from_dash_integral190 ( 256 ) );
}

static  uint32_t   inpck551 (  ) {
    return (  from_dash_integral190 ( 16 ) );
}

static  uint32_t   istrip552 (  ) {
    return (  from_dash_integral190 ( 32 ) );
}

static  uint32_t   ixon553 (  ) {
    return (  from_dash_integral190 ( 1024 ) );
}

struct Array_555 {
    uint32_t _arr [1];
};

struct ArrayIter_557 {
    struct Array_555  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_557   into_dash_iter558 (    struct Array_555  self2322 ) {
    return ( (struct ArrayIter_557) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr562 (    struct Array_555 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr561 (    struct Array_555 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp158 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i2253 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic162 ) ( ( ( StrConcat_163_StrConcat ) ( ( ( StrConcat_164_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string194 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2254 = ( ( (  cast_dash_ptr562 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr527 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  uint32_t   get560 (    struct Array_555 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr561 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  struct Maybe_522   next559 (    struct ArrayIter_557 *  self2329 ) {
    if ( (  cmp158 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_522) { .tag = Maybe_522_None_t } );
    }
    uint32_t  e2331 = ( (  get560 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add206 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_522_Just ) ( (  e2331 ) ) );
}

static  uint32_t   reduce556 (    struct Array_555  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_557  it1099 = ( (  into_dash_iter558 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_522  dref1100 = ( (  next559 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_522_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_522_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_522_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp563 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp563);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp564;
    return (  temp564 );
}

static  uint32_t   u32_dash_ors554 (    struct Array_555  vals2829 ) {
    return ( (  reduce556 ) ( (  vals2829 ) ,  (  from_dash_integral190 ( 0 ) ) ,  (  u32_dash_or531 ) ) );
}

static  struct Array_555   from_dash_listlike565 (    struct Array_555  self330 ) {
    return (  self330 );
}

static  uint32_t   opost566 (  ) {
    return (  from_dash_integral190 ( 1 ) );
}

static  uint32_t   cs8567 (  ) {
    return (  from_dash_integral190 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr570 (    struct Array_67 *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  uint8_t *   get_dash_ptr569 (    struct Array_67 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp158 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i2253 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic162 ) ( ( ( StrConcat_163_StrConcat ) ( ( ( StrConcat_164_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string194 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2254 = ( ( (  cast_dash_ptr570 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr303 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  enum Unit_7   set568 (    struct Array_67 *  arr2263 ,    size_t  i2266 ,    uint8_t  e2268 ) {
    uint8_t *  p2269 = ( (  get_dash_ptr569 ) ( (  arr2263 ) ,  (  i2266 ) ) );
    (*  p2269 ) = (  e2268 );
    return ( Unit_7_Unit );
}

static  size_t   vmin571 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime572 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush573 (  ) {
    return (  from_dash_integral44 ( 2 ) );
}

static  struct Termios_66   enable_dash_raw_dash_mode509 (  ) {
    struct Termios_66  temp510 = ( (  undefined511 ) ( ) );
    struct Termios_66 *  orig_dash_termios3291 = ( &temp510 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno513 ) ( ) ) ,  ( (  cast_dash_ptr514 ) ( (  orig_dash_termios3291 ) ) ) ) );
    struct Termios_66  raw3292 = ( * (  orig_dash_termios3291 ) );
    raw3292 .f_c_dash_lflag = ( (  u32_dash_and515 ) ( ( (  raw3292 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg516 ) ( ( (  u32_dash_ors517 ) ( ( (  from_dash_listlike532 ) ( ( (struct Array_518) { ._arr = { ( (  echo533 ) ( ) ) , ( (  icanon534 ) ( ) ) , ( (  isig535 ) ( ) ) , ( ( (  iexten536 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3292 .f_c_dash_iflag = ( (  u32_dash_and515 ) ( ( (  raw3292 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg516 ) ( ( (  u32_dash_ors537 ) ( ( (  from_dash_listlike548 ) ( ( (struct Array_538) { ._arr = { ( (  brkint549 ) ( ) ) , ( (  icrnl550 ) ( ) ) , ( (  inpck551 ) ( ) ) , ( (  istrip552 ) ( ) ) , ( ( (  ixon553 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3292 .f_c_dash_oflag = ( (  u32_dash_and515 ) ( ( (  raw3292 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg516 ) ( ( (  u32_dash_ors554 ) ( ( (  from_dash_listlike565 ) ( ( (struct Array_555) { ._arr = { ( ( (  opost566 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3292 .f_c_dash_cflag = ( (  u32_dash_or531 ) ( ( (  raw3292 ) .f_c_dash_cflag ) ,  ( (  cs8567 ) ( ) ) ) );
    ( (  set568 ) ( ( & ( (  raw3292 ) .f_c_dash_cc ) ) ,  ( (  vmin571 ) ( ) ) ,  (  from_dash_integral186 ( 0 ) ) ) );
    ( (  set568 ) ( ( & ( (  raw3292 ) .f_c_dash_cc ) ) ,  ( (  vtime572 ) ( ) ) ,  (  from_dash_integral186 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno513 ) ( ) ) ,  ( (  tcsa_dash_flush573 ) ( ) ) ,  ( (  cast_dash_ptr514 ) ( ( & (  raw3292 ) ) ) ) ) );
    return ( * (  orig_dash_termios3291 ) );
}

struct StrViewIter_577 {
    struct StrView_21  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_577   into_dash_iter579 (    struct StrViewIter_577  self1371 ) {
    return (  self1371 );
}

struct Maybe_580 {
    enum {
        Maybe_580_None_t,
        Maybe_580_Just_t,
    } tag;
    union {
        struct {
            struct Char_53  field0;
        } Maybe_580_Just_s;
    } stuff;
};

static struct Maybe_580 Maybe_580_Just (  struct Char_53  field0 ) {
    return ( struct Maybe_580 ) { .tag = Maybe_580_Just_t, .stuff = { .Maybe_580_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_580   next581 (    struct StrViewIter_577 *  self1374 ) {
    if ( (  cmp158 ( ( ( * (  self1374 ) ) .f_i ) , ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_580) { .tag = Maybe_580_None_t } );
    }
    uint8_t *  char_dash_ptr1375 = ( ( (  offset_dash_ptr303 ) ( ( (  cast196 ) ( ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64235 ) ( ( ( * (  self1374 ) ) .f_i ) ) ) ) ) );
    struct Char_53  char1376 = ( (  scan_dash_from_dash_mem197 ) ( (  char_dash_ptr1375 ) ) );
    (*  self1374 ) .f_i = (  op_dash_add206 ( ( ( * (  self1374 ) ) .f_i ) , ( (  char1376 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_580_Just ) ( (  char1376 ) ) );
}

static  enum Unit_7   for_dash_each576 (    struct StrViewIter_577  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_53  ) ) {
    struct StrViewIter_577  temp578 = ( (  into_dash_iter579 ) ( (  iterable1074 ) ) );
    struct StrViewIter_577 *  it1077 = ( &temp578 );
    while ( ( true ) ) {
        struct Maybe_580  dref1078 = ( (  next581 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_580_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_580_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_580_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrViewIter_577   into_dash_iter583 (    struct StrView_21  self1368 ) {
    return ( (struct StrViewIter_577) { .f_ds = (  self1368 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_577   chars582 (    struct StrView_21  self1382 ) {
    return ( (  into_dash_iter583 ) ( (  self1382 ) ) );
}

static  enum Unit_7   print575 (    struct StrView_21  s2563 ) {
    ( (  for_dash_each576 ) ( ( (  chars582 ) ( (  s2563 ) ) ) ,  (  printf_dash_char178 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   hide_dash_cursor574 (  ) {
    ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   reset_dash_colors584 (  ) {
    ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   clear_dash_screen585 (  ) {
    ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   enable_dash_mouse586 (  ) {
    ( (  print_dash_str169 ) ( ( (  from_dash_string194 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   flush_dash_stdout587 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr495 ) ( ) ) ) );
    return ( Unit_7_Unit );
}

static  bool   ptr_dash_eq591 (    enum Unit_7 *  l586 ,    enum Unit_7 *  r588 ) {
    return ( (  l586 ) == (  r588 ) );
}

static  enum Unit_7 *   cast592 (    const char*  x356 ) {
    return ( (enum Unit_7 * ) (  x356 ) );
}

static  void *   cast_dash_ptr596 (    enum Unit_7 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of597 (    enum Unit_7 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  enum Unit_7 *   zeroed594 (  ) {
    enum Unit_7 *  temp595;
    enum Unit_7 *  x570 = (  temp595 );
    ( ( memset ) ( ( (  cast_dash_ptr596 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of597 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  enum Unit_7 *   null_dash_ptr593 (  ) {
    return ( (  zeroed594 ) ( ) );
}

static  struct Maybe_282   from_dash_nullable_dash_c_dash_str590 (    const char*  s591 ) {
    if ( ( (  ptr_dash_eq591 ) ( ( (  cast592 ) ( (  s591 ) ) ) ,  ( ( (  null_dash_ptr593 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_282) { .tag = Maybe_282_None_t } );
    } else {
        return ( ( Maybe_282_Just ) ( (  s591 ) ) );
    }
}

static  struct Maybe_282   get589 (    const char*  s2596 ) {
    return ( (  from_dash_nullable_dash_c_dash_str590 ) ( ( ( getenv ) ( (  s2596 ) ) ) ) );
}

static  bool   eq598 (    const char*  l1691 ,    const char*  r1693 ) {
    return (  eq294 ( ( ( strcmp ) ( (  l1691 ) ,  (  r1693 ) ) ) , (  from_dash_integral44 ( 0 ) ) ) );
}

static  enum ColorPalette_65   query_dash_palette588 (  ) {
    struct Maybe_282  colorterm2597 = ( (  get589 ) ( ( (  from_dash_string45 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_282  dref2598 = (  colorterm2597 );
    if ( dref2598.tag == Maybe_282_Just_t ) {
        if ( ( (  eq598 ( ( dref2598 .stuff .Maybe_282_Just_s .field0 ) , ( (  from_dash_string45 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq598 ( ( dref2598 .stuff .Maybe_282_Just_s .field0 ) , ( (  from_dash_string45 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_65_PaletteRGB );
        }
    }
    else {
        if ( dref2598.tag == Maybe_282_None_t ) {
        }
    }
    struct Maybe_282  dref2600 = ( (  get589 ) ( ( (  from_dash_string45 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2600.tag == Maybe_282_Just_t ) {
        if ( (  eq598 ( ( dref2600 .stuff .Maybe_282_Just_s .field0 ) , ( (  from_dash_string45 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_65_Palette8 );
        }
    }
    else {
        if ( dref2600.tag == Maybe_282_None_t ) {
        }
    }
    return ( ColorPalette_65_Palette16 );
}

struct Tuple2_599 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_599 Tuple2_599_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_599 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_601 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr605 (    struct Winsize_601 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of606 (    struct Winsize_601  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Winsize_601   zeroed603 (  ) {
    struct Winsize_601  temp604;
    struct Winsize_601  x570 = (  temp604 );
    ( ( memset ) ( ( (  cast_dash_ptr605 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of606 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  int32_t   stdout_dash_fileno607 (  ) {
    return (  from_dash_integral44 ( 1 ) );
}

static  uint64_t   from_dash_integral609 (    int64_t  x64 ) {
    return ( (uint64_t ) (  x64 ) );
}

static  uint64_t   tiocgwinsz608 (  ) {
    return (  from_dash_integral609 ( 21523 ) );
}

static  int32_t   op_dash_neg610 (    int32_t  x227 ) {
    return ( (  from_dash_integral44 ( 0 ) ) - (  x227 ) );
}

static  bool   eq611 (    uint16_t  l121 ,    uint16_t  r123 ) {
    return ( (  l121 ) == (  r123 ) );
}

static  uint16_t   from_dash_integral612 (    int64_t  x55 ) {
    return ( (uint16_t ) (  x55 ) );
}

static  void *   cast_dash_ptr618 (    uint32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of619 (    uint32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint32_t   zeroed616 (  ) {
    uint32_t  temp617;
    uint32_t  x570 = (  temp617 );
    ( ( memset ) ( ( (  cast_dash_ptr618 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of619 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint16_t *   cast620 (    uint32_t *  x356 ) {
    return ( (uint16_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed614 (    uint16_t  x573 ) {
    uint32_t  temp615 = ( (  zeroed616 ) ( ) );
    uint32_t *  y574 = ( &temp615 );
    uint16_t *  yp575 = ( (  cast620 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u16_dash_u32613 (    uint16_t  x645 ) {
    return ( (  cast_dash_on_dash_zeroed614 ) ( (  x645 ) ) );
}

static  struct Tuple2_599   get_dash_dimensions600 (  ) {
    struct Winsize_601  temp602 = ( ( (  zeroed603 ) ( ) ) );
    struct Winsize_601 *  ws2585 = ( &temp602 );
    if ( ( (  eq294 ( ( ( ioctl ) ( ( (  stdout_dash_fileno607 ) ( ) ) ,  ( (  tiocgwinsz608 ) ( ) ) ,  (  ws2585 ) ) ) , (  op_dash_neg610 ( (  from_dash_integral44 ( 1 ) ) ) ) ) ) || (  eq611 ( ( ( * (  ws2585 ) ) .f_ws_dash_col ) , (  from_dash_integral612 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_599_Tuple2 ) ( (  from_dash_integral190 ( 80 ) ) ,  (  from_dash_integral190 ( 24 ) ) ) );
    }
    return ( ( Tuple2_599_Tuple2 ) ( ( (  u16_dash_u32613 ) ( ( ( * (  ws2585 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32613 ) ( ( ( * (  ws2585 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined623 (  ) {
    struct timespec  temp624;
    return (  temp624 );
}

static  int32_t   clock_dash_monotonic625 (  ) {
    return (  from_dash_integral44 ( 1 ) );
}

static  struct timespec   now621 (  ) {
    struct timespec  temp622 = ( (  undefined623 ) ( ) );
    struct timespec *  t3253 = ( &temp622 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic625 ) ( ) ) ,  (  t3253 ) ) );
    return ( * (  t3253 ) );
}

struct env626 {
    bool *  should_dash_resize3305;
};

struct envunion627 {
    enum Unit_7  (*fun) (  struct env626*  ,    int32_t  );
    struct env626 env;
};

struct envunion627  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig628 ) {
    struct envunion627  temp629 = _intr_sigarr [  __intr__sig628 ];
    temp629.fun ( &temp629.env ,  __intr__sig628 );
}

static  enum Unit_7  _intr_register_signal (    int32_t  __intr__sig630 ,   struct envunion627  __intr__fun631 ) {
    _intr_sigarr [  __intr__sig630 ] =  __intr__fun631;
    signal(  __intr__sig630 , _intr_sighandle );
    return Unit_7_Unit;
}

static  enum Unit_7   lam632 (   struct env626* env ,    int32_t  dref3312 ) {
    (* env->should_dash_resize3305 ) = ( true );
    return ( Unit_7_Unit );
}

static  uint32_t   fst633 (    struct Tuple2_599  dref1253 ) {
    return ( dref1253 .field0 );
}

static  uint32_t   snd634 (    struct Tuple2_599  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tui_64   mk508 (   struct env60* env ) {
    struct Termios_66  og_dash_termios3307 = ( (  enable_dash_raw_dash_mode509 ) ( ) );
    ( (  hide_dash_cursor574 ) ( ) );
    ( (  reset_dash_colors584 ) ( ) );
    ( (  clear_dash_screen585 ) ( ) );
    ( (  enable_dash_mouse586 ) ( ) );
    ( (  flush_dash_stdout587 ) ( ) );
    enum ColorPalette_65  palette3308 = ( (  query_dash_palette588 ) ( ) );
    struct Tuple2_599  dims3309 = ( (  get_dash_dimensions600 ) ( ) );
    uint32_t  fps3310 = (  from_dash_integral190 ( 60 ) );
    struct timespec  last_dash_sync3311 = ( (  now621 ) ( ) );
    struct env626 envinst626 = {
        .should_dash_resize3305 = env->should_dash_resize3305 ,
    };
    ( _intr_register_signal ( (  from_dash_integral44 ( 28 ) ) , ( (struct envunion627){ .fun = (  enum Unit_7  (*) (  struct env626*  ,    int32_t  ) )lam632 , .env =  envinst626 } ) ) );
    return ( (struct Tui_64) { .f_width = ( (  fst633 ) ( (  dims3309 ) ) ) , .f_height = ( (  snd634 ) ( (  dims3309 ) ) ) , .f_target_dash_fps = (  fps3310 ) , .f_actual_dash_fps = (  from_dash_integral190 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3311 ) , .f_fps_dash_ts = (  last_dash_sync3311 ) , .f_fps_dash_count = (  from_dash_integral190 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3307 ) , .f_palette = (  palette3308 ) , .f_should_dash_redraw = ( true ) } );
}

enum Color8_639 {
    Color8_639_Black8,
    Color8_639_Red8,
    Color8_639_Green8,
    Color8_639_Yellow8,
    Color8_639_Blue8,
    Color8_639_Magenta8,
    Color8_639_Cyan8,
    Color8_639_White8,
};

enum Color16_640 {
    Color16_640_Black16,
    Color16_640_Red16,
    Color16_640_Green16,
    Color16_640_Yellow16,
    Color16_640_Blue16,
    Color16_640_Magenta16,
    Color16_640_Cyan16,
    Color16_640_White16,
    Color16_640_BrightBlack16,
    Color16_640_BrightRed16,
    Color16_640_BrightGreen16,
    Color16_640_BrightYellow16,
    Color16_640_BrightBlue16,
    Color16_640_BrightMagenta16,
    Color16_640_BrightCyan16,
    Color16_640_BrightWhite16,
};

struct RGB_641 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_638 {
    enum {
        Color_638_ColorDefault_t,
        Color_638_Color8_t,
        Color_638_Color16_t,
        Color_638_Color256_t,
        Color_638_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_639  field0;
        } Color_638_Color8_s;
        struct {
            enum Color16_640  field0;
        } Color_638_Color16_s;
        struct {
            uint8_t  field0;
        } Color_638_Color256_s;
        struct {
            struct RGB_641  field0;
        } Color_638_ColorRGB_s;
    } stuff;
};

static struct Color_638 Color_638_Color8 (  enum Color8_639  field0 ) {
    return ( struct Color_638 ) { .tag = Color_638_Color8_t, .stuff = { .Color_638_Color8_s = { .field0 = field0 } } };
};

static struct Color_638 Color_638_Color16 (  enum Color16_640  field0 ) {
    return ( struct Color_638 ) { .tag = Color_638_Color16_t, .stuff = { .Color_638_Color16_s = { .field0 = field0 } } };
};

static struct Color_638 Color_638_Color256 (  uint8_t  field0 ) {
    return ( struct Color_638 ) { .tag = Color_638_Color256_t, .stuff = { .Color_638_Color256_s = { .field0 = field0 } } };
};

static struct Color_638 Color_638_ColorRGB (  struct RGB_641  field0 ) {
    return ( struct Color_638 ) { .tag = Color_638_ColorRGB_t, .stuff = { .Color_638_ColorRGB_s = { .field0 = field0 } } };
};

struct Cell_637 {
    struct Char_53  f_c;
    struct Color_638  f_fg;
    struct Color_638  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_636 {
    struct Cell_637 *  f_ptr;
    size_t  f_count;
};

struct Screen_635 {
    enum CAllocator_9  f_al;
    struct Tui_64 *  f_tui;
    struct Slice_636  f_current;
    struct Slice_636  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_638  f_default_dash_fg;
    struct Color_638  f_default_dash_bg;
};

struct TypeSize_646 {
    size_t  f_size;
};

static  struct TypeSize_646   get_dash_typesize645 (  ) {
    struct Cell_637  temp647;
    return ( (struct TypeSize_646) { .f_size = ( sizeof( ( (  temp647 ) ) ) ) } );
}

static  struct Cell_637 *   cast_dash_ptr648 (    void *  p359 ) {
    return ( (struct Cell_637 * ) (  p359 ) );
}

static  struct Slice_636   allocate644 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize645 ) ( ) ) ) .f_size );
    struct Cell_637 *  ptr1957 = ( (  cast_dash_ptr648 ) ( ( ( malloc ) ( (  op_dash_mul219 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_636) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

static  void *   cast_dash_ptr654 (    size_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of655 (    size_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  size_t   zeroed652 (  ) {
    size_t  temp653;
    size_t  x570 = (  temp653 );
    ( ( memset ) ( ( (  cast_dash_ptr654 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of655 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint32_t *   cast656 (    size_t *  x356 ) {
    return ( (uint32_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed650 (    uint32_t  x573 ) {
    size_t  temp651 = ( (  zeroed652 ) ( ) );
    size_t *  y574 = ( &temp651 );
    uint32_t *  yp575 = ( (  cast656 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u32_dash_size649 (    uint32_t  x651 ) {
    return ( (  cast_dash_on_dash_zeroed650 ) ( (  x651 ) ) );
}

static  uint32_t   op_dash_mul657 (    uint32_t  l240 ,    uint32_t  r242 ) {
    return ( (  l240 ) * (  r242 ) );
}

struct Range_660 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_660 Range_660_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_660 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env661 {
    struct Slice_636  s1905;
    struct Cell_637 (*  fun1907 )(    struct Cell_637  );
    ;
    ;
    ;
};

struct envunion662 {
    enum Unit_7  (*fun) (  struct env661*  ,    int32_t  );
    struct env661 env;
};

struct RangeIter_663 {
    struct Range_660  field0;
    int32_t  field1;
};

static struct RangeIter_663 RangeIter_663_RangeIter (  struct Range_660  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_663 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_663   into_dash_iter665 (    struct Range_660  dref883 ) {
    return ( ( RangeIter_663_RangeIter ) ( ( ( Range_660_Range ) ( ( dref883 .field0 ) ,  ( dref883 .field1 ) ) ) ,  ( dref883 .field0 ) ) );
}

static  struct Maybe_246   next666 (    struct RangeIter_663 *  self891 ) {
    struct RangeIter_663  dref892 = ( * (  self891 ) );
    if ( true ) {
        if ( (  cmp291 ( ( dref892 .field1 ) , ( dref892 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
        }
        struct Maybe_246  x896 = ( ( Maybe_246_Just ) ( ( dref892 .field1 ) ) );
        (*  self891 ) = ( ( RangeIter_663_RangeIter ) ( ( ( Range_660_Range ) ( ( dref892 .field0 .field0 ) ,  ( dref892 .field0 .field1 ) ) ) ,  (  op_dash_add248 ( ( dref892 .field1 ) , (  from_dash_integral44 ( 1 ) ) ) ) ) );
        return (  x896 );
    }
}

static  enum Unit_7   for_dash_each659 (    struct Range_660  iterable1074 ,   struct envunion662  fun1076 ) {
    struct RangeIter_663  temp664 = ( (  into_dash_iter665 ) ( (  iterable1074 ) ) );
    struct RangeIter_663 *  it1077 = ( &temp664 );
    while ( ( true ) ) {
        struct Maybe_246  dref1078 = ( (  next666 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_246_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_246_Just_t ) {
                struct envunion662  temp667 = (  fun1076 );
                ( temp667.fun ( &temp667.env ,  ( dref1078 .stuff .Maybe_246_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Range_660   to668 (    int32_t  from874 ,    int32_t  to876 ) {
    return ( ( Range_660_Range ) ( (  from874 ) ,  (  to876 ) ) );
}

static  struct Cell_637 *   offset_dash_ptr672 (    struct Cell_637 *  x338 ,    int64_t  count340 ) {
    struct Cell_637  temp673;
    return ( (struct Cell_637 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul204 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp673 ) ) ) ) ) ) ) ) );
}

static  struct Cell_637 *   get_dash_ptr671 (    struct Slice_636  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp158 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic226 ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string194 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_637 *  elem_dash_ptr1760 = ( (  offset_dash_ptr672 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set670 (    struct Slice_636  slice1774 ,    size_t  i1776 ,    struct Cell_637  x1778 ) {
    struct Cell_637 *  ep1779 = ( (  get_dash_ptr671 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

struct Maybe_677 {
    enum {
        Maybe_677_None_t,
        Maybe_677_Just_t,
    } tag;
    union {
        struct {
            struct Cell_637  field0;
        } Maybe_677_Just_s;
    } stuff;
};

static struct Maybe_677 Maybe_677_Just (  struct Cell_637  field0 ) {
    return ( struct Maybe_677 ) { .tag = Maybe_677_Just_t, .stuff = { .Maybe_677_Just_s = { .field0 = field0 } } };
};

static  struct Cell_637   undefined678 (  ) {
    struct Cell_637  temp679;
    return (  temp679 );
}

static  struct Cell_637   or_dash_fail676 (    struct Maybe_677  x1725 ,    struct StrConcat_227  errmsg1727 ) {
    struct Maybe_677  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_677_None_t ) {
        ( (  panic226 ) ( (  errmsg1727 ) ) );
        return ( (  undefined678 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_677_Just_t ) {
            return ( dref1728 .stuff .Maybe_677_Just_s .field0 );
        }
    }
}

static  struct Maybe_677   try_dash_get680 (    struct Slice_636  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp158 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_677) { .tag = Maybe_677_None_t } );
    }
    struct Cell_637 *  elem_dash_ptr1766 = ( (  offset_dash_ptr672 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_677_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  struct Cell_637   get675 (    struct Slice_636  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail676 ) ( ( (  try_dash_get680 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string194 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_637   elem_dash_get674 (    struct Slice_636  self1867 ,    size_t  idx1869 ) {
    return ( (  get675 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

static  enum Unit_7   lam669 (   struct env661* env ,    int32_t  i1909 ) {
    return ( (  set670 ) ( ( env->s1905 ) ,  ( (  i32_dash_size236 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get674 ( ( env->s1905 ) , ( (  i32_dash_size236 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_7   map658 (    struct Slice_636  s1905 ,    struct Cell_637 (*  fun1907 )(    struct Cell_637  ) ) {
    struct env661 envinst661 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each659 ) ( ( (  to668 ) ( (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_i32170 ) ( (  op_dash_sub278 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion662){ .fun = (  enum Unit_7  (*) (  struct env661*  ,    int32_t  ) )lam669 , .env =  envinst661 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Cell_637   default_dash_cell682 (  ) {
    return ( (struct Cell_637) { .f_c = ( (  from_dash_charlike195 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_638) { .tag = Color_638_ColorDefault_t } ) , .f_bg = ( (struct Color_638) { .tag = Color_638_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral44 ( 1 ) ) } );
}

static  struct Cell_637   lam681 (    struct Cell_637  dref3415 ) {
    return ( (  default_dash_cell682 ) ( ) );
}

struct env685 {
    struct Slice_636  s1905;
    struct Cell_637 (*  fun1907 )(    struct Cell_637  );
    ;
    ;
    ;
};

struct envunion686 {
    enum Unit_7  (*fun) (  struct env685*  ,    int32_t  );
    struct env685 env;
};

static  enum Unit_7   for_dash_each684 (    struct Range_660  iterable1074 ,   struct envunion686  fun1076 ) {
    struct RangeIter_663  temp687 = ( (  into_dash_iter665 ) ( (  iterable1074 ) ) );
    struct RangeIter_663 *  it1077 = ( &temp687 );
    while ( ( true ) ) {
        struct Maybe_246  dref1078 = ( (  next666 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_246_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_246_Just_t ) {
                struct envunion686  temp688 = (  fun1076 );
                ( temp688.fun ( &temp688.env ,  ( dref1078 .stuff .Maybe_246_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam689 (   struct env685* env ,    int32_t  i1909 ) {
    return ( (  set670 ) ( ( env->s1905 ) ,  ( (  i32_dash_size236 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get674 ( ( env->s1905 ) , ( (  i32_dash_size236 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_7   map683 (    struct Slice_636  s1905 ,    struct Cell_637 (*  fun1907 )(    struct Cell_637  ) ) {
    struct env685 envinst685 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each684 ) ( ( (  to668 ) ( (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_i32170 ) ( (  op_dash_sub278 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion686){ .fun = (  enum Unit_7  (*) (  struct env685*  ,    int32_t  ) )lam689 , .env =  envinst685 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Cell_637   lam690 (    struct Cell_637  dref3417 ) {
    return ( (  default_dash_cell682 ) ( ) );
}

static  struct Screen_635   mk_dash_screen643 (    struct Tui_64 *  tui3411 ,    enum CAllocator_9  al3413 ) {
    struct Slice_636  cur3414 = ( (  allocate644 ) ( (  al3413 ) ,  ( (  u32_dash_size649 ) ( (  op_dash_mul657 ( ( ( * (  tui3411 ) ) .f_width ) , ( ( * (  tui3411 ) ) .f_height ) ) ) ) ) ) );
    ( (  map658 ) ( (  cur3414 ) ,  (  lam681 ) ) );
    struct Slice_636  prev3416 = ( (  allocate644 ) ( (  al3413 ) ,  ( (  u32_dash_size649 ) ( (  op_dash_mul657 ( ( ( * (  tui3411 ) ) .f_width ) , ( ( * (  tui3411 ) ) .f_height ) ) ) ) ) ) );
    ( (  map683 ) ( (  prev3416 ) ,  (  lam690 ) ) );
    return ( (struct Screen_635) { .f_current = (  cur3414 ) , .f_previous = (  prev3416 ) , .f_al = (  al3413 ) , .f_tui = (  tui3411 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_638) { .tag = Color_638_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_638) { .tag = Color_638_ColorDefault_t } ) } );
}

enum MouseButton_698 {
    MouseButton_698_MouseLeft,
    MouseButton_698_MouseMiddle,
    MouseButton_698_MouseRight,
    MouseButton_698_ScrollUp,
    MouseButton_698_ScrollDown,
};

struct MouseEvent_697 {
    enum MouseButton_698  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_696 {
    enum {
        InputEvent_696_Key_t,
        InputEvent_696_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_131  field0;
        } InputEvent_696_Key_s;
        struct {
            struct MouseEvent_697  field0;
        } InputEvent_696_Mouse_s;
    } stuff;
};

static struct InputEvent_696 InputEvent_696_Key (  struct Key_131  field0 ) {
    return ( struct InputEvent_696 ) { .tag = InputEvent_696_Key_t, .stuff = { .InputEvent_696_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_696 InputEvent_696_Mouse (  struct MouseEvent_697  field0 ) {
    return ( struct InputEvent_696 ) { .tag = InputEvent_696_Mouse_t, .stuff = { .InputEvent_696_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_695 {
    enum {
        Maybe_695_None_t,
        Maybe_695_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_696  field0;
        } Maybe_695_Just_s;
    } stuff;
};

static struct Maybe_695 Maybe_695_Just (  struct InputEvent_696  field0 ) {
    return ( struct Maybe_695 ) { .tag = Maybe_695_Just_t, .stuff = { .Maybe_695_Just_s = { .field0 = field0 } } };
};

struct envunion694 {
    struct Maybe_695  (*fun) (  struct env62*  ,    struct Tui_64 *  );
    struct env62 env;
};

struct env693 {
    struct Tui_64 *  tui4109;
    struct env62 envinst62;
};

struct envunion699 {
    struct Maybe_695  (*fun) (  struct env693*  );
    struct env693 env;
};

struct FunIter_692 {
    struct envunion699  f_fun;
    bool  f_finished;
};

static  struct FunIter_692   into_dash_iter700 (    struct FunIter_692  self1028 ) {
    return (  self1028 );
}

static  struct FunIter_692   from_dash_function701 (   struct envunion699  fun1036 ) {
    return ( (struct FunIter_692) { .f_fun = (  fun1036 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions706 (   struct env61* env ,    struct Tui_64 *  tui3377 ) {
    if ( ( ! ( * ( env->should_dash_resize3305 ) ) ) ) {
        return ( false );
    }
    (*  tui3377 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3305 ) = ( false );
    struct Tuple2_599  dim3378 = ( (  get_dash_dimensions600 ) ( ) );
    uint32_t  w3379 = ( (  fst633 ) ( (  dim3378 ) ) );
    uint32_t  h3380 = ( (  snd634 ) ( (  dim3378 ) ) );
    (*  tui3377 ) .f_width = (  w3379 );
    (*  tui3377 ) .f_height = (  h3380 );
    return ( true );
}

static  char   undefined709 (  ) {
    char  temp710;
    return (  temp710 );
}

struct Maybe_711 {
    enum {
        Maybe_711_None_t,
        Maybe_711_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_711_Just_s;
    } stuff;
};

static struct Maybe_711 Maybe_711_Just (  char  field0 ) {
    return ( struct Maybe_711 ) { .tag = Maybe_711_Just_t, .stuff = { .Maybe_711_Just_s = { .field0 = field0 } } };
};

struct Pollfd_713 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr714 (    struct Pollfd_713 *  p359 ) {
    return ( (struct pollfd * ) (  p359 ) );
}

static  void *   cast_dash_ptr717 (    char *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of718 (    char  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  char   zeroed715 (  ) {
    char  temp716;
    char  x570 = (  temp716 );
    ( ( memset ) ( ( (  cast_dash_ptr717 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of718 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Maybe_711   read_dash_byte712 (    int32_t  timeout_dash_ms3299 ) {
    struct Pollfd_713  pfd3300 = ( (struct Pollfd_713) { .f_fd = (  from_dash_integral44 ( 0 ) ) , .f_events = (  from_dash_integral612 ( 1 ) ) , .f_revents = (  from_dash_integral612 ( 0 ) ) } );
    if ( (  cmp291 ( ( ( poll ) ( ( (  cast_dash_ptr714 ) ( ( & (  pfd3300 ) ) ) ) ,  (  from_dash_integral44 ( 1 ) ) ,  (  timeout_dash_ms3299 ) ) ) , (  from_dash_integral44 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_711) { .tag = Maybe_711_None_t } );
    }
    char  c3301 = ( ( (  zeroed715 ) ( ) ) );
    if ( (  cmp291 ( ( ( read ) ( ( (  stdin_dash_fileno513 ) ( ) ) ,  ( (  cast_dash_ptr717 ) ( ( & (  c3301 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral44 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_711) { .tag = Maybe_711_None_t } );
    }
    return ( ( Maybe_711_Just ) ( (  c3301 ) ) );
}

static  uint8_t   ascii_dash_u8719 (    char  c776 ) {
    return ( ( (uint8_t ) (  c776 ) ) );
}

static  char   u8_dash_ascii720 (    uint8_t  b779 ) {
    return ( ( (char ) (  b779 ) ) );
}

static  uint8_t *   cast724 (    uint32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed722 (    uint8_t  x573 ) {
    uint32_t  temp723 = ( (  zeroed616 ) ( ) );
    uint32_t *  y574 = ( &temp723 );
    uint8_t *  yp575 = ( (  cast724 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u8_dash_u32721 (    uint8_t  x672 ) {
    return ( (  cast_dash_on_dash_zeroed722 ) ( (  x672 ) ) );
}

struct Map_727 {
    struct StrViewIter_577  field0;
    uint32_t (*  field1 )(    struct Char_53  );
};

static struct Map_727 Map_727_Map (  struct StrViewIter_577  field0 ,  uint32_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_727 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_727   into_dash_iter728 (    struct Map_727  self796 ) {
    return (  self796 );
}

static  struct Maybe_522   next729 (    struct Map_727 *  dref798 ) {
    struct Maybe_580  dref801 = ( (  next581 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_580_None_t ) {
        return ( (struct Maybe_522) { .tag = Maybe_522_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_580_Just_t ) {
            return ( ( Maybe_522_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_580_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce726 (    struct Map_727  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct Map_727  it1099 = ( (  into_dash_iter728 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_522  dref1100 = ( (  next729 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_522_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_522_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_522_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp730 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp730);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp731;
    return (  temp731 );
}

static  struct Map_727   map732 (    struct StrView_21  iterable805 ,    uint32_t (*  fun807 )(    struct Char_53  ) ) {
    struct StrViewIter_577  it808 = ( (  into_dash_iter583 ) ( (  iterable805 ) ) );
    return ( ( Map_727_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  void *   cast_dash_ptr739 (    int64_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of740 (    int64_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int64_t   zeroed737 (  ) {
    int64_t  temp738;
    int64_t  x570 = (  temp738 );
    ( ( memset ) ( ( (  cast_dash_ptr739 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of740 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast741 (    int64_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int64_t   cast_dash_on_dash_zeroed735 (    uint8_t  x573 ) {
    int64_t  temp736 = ( (  zeroed737 ) ( ) );
    int64_t *  y574 = ( &temp736 );
    uint8_t *  yp575 = ( (  cast741 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int64_t   u8_dash_i64734 (    uint8_t  x666 ) {
    return ( (  cast_dash_on_dash_zeroed735 ) ( (  x666 ) ) );
}

struct StrConcat_744 {
    struct Char_53  field0;
    struct Char_53  field1;
};

static struct StrConcat_744 StrConcat_744_StrConcat (  struct Char_53  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_744 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_743 {
    struct StrConcat_744  field0;
    struct StrView_21  field1;
};

static struct StrConcat_743 StrConcat_743_StrConcat (  struct StrConcat_744  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_743 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_748 {
    struct StrView_21  field0;
    struct StrConcat_743  field1;
};

static struct StrConcat_748 StrConcat_748_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_743  field1 ) {
    return ( struct StrConcat_748 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_747 {
    struct StrConcat_748  field0;
    struct Char_53  field1;
};

static struct StrConcat_747 StrConcat_747_StrConcat (  struct StrConcat_748  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_747 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str751 (    struct StrConcat_744  self1503 ) {
    struct StrConcat_744  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str177 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str177 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str750 (    struct StrConcat_743  self1503 ) {
    struct StrConcat_743  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str751 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str169 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str749 (    struct StrConcat_748  self1503 ) {
    struct StrConcat_748  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str169 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str750 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str746 (    struct StrConcat_747  self1503 ) {
    struct StrConcat_747  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str749 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str177 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic745 (    struct StrConcat_743  errmsg1712 ) {
    ( (  print_dash_str746 ) ( ( ( StrConcat_747_StrConcat ) ( ( ( StrConcat_748_StrConcat ) ( ( (  from_dash_string194 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  uint8_t   or_dash_fail742 (    struct Maybe_319  x1725 ,    struct StrConcat_743  errmsg1727 ) {
    struct Maybe_319  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_319_None_t ) {
        ( (  panic745 ) ( (  errmsg1727 ) ) );
        return ( (  undefined355 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_319_Just_t ) {
            return ( dref1728 .stuff .Maybe_319_Just_s .field0 );
        }
    }
}

static  enum Ordering_159   cmp753 (    struct Char_53  l744 ,    struct Char_53  r746 ) {
    if ( ( ( !  eq213 ( ( (  l744 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq213 ( ( (  r746 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp754 = ( (  from_dash_string45 ) ( ( "(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp754);
        exit ( 1 );
        ( Unit_7_Unit );
    }
    return ( (  cmp199 ) ( ( (  char_dash_u8358 ) ( (  l744 ) ) ) ,  ( (  char_dash_u8358 ) ( (  r746 ) ) ) ) );
}

static  uint8_t   op_dash_sub755 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  uint8_t   op_dash_add756 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  struct Maybe_319   hex_dash_digit752 (    struct Char_53  c2545 ) {
    if ( ( (  cmp753 ( (  c2545 ) , ( (  from_dash_charlike195 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp753 ( (  c2545 ) , ( (  from_dash_charlike195 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_319_Just ) ( (  op_dash_sub755 ( ( (  char_dash_u8358 ) ( (  c2545 ) ) ) , ( (  char_dash_u8358 ) ( ( (  from_dash_charlike195 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp753 ( (  c2545 ) , ( (  from_dash_charlike195 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp753 ( (  c2545 ) , ( (  from_dash_charlike195 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_319_Just ) ( (  op_dash_add756 ( (  op_dash_sub755 ( ( (  char_dash_u8358 ) ( (  c2545 ) ) ) , ( (  char_dash_u8358 ) ( ( (  from_dash_charlike195 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral186 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp753 ( (  c2545 ) , ( (  from_dash_charlike195 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp753 ( (  c2545 ) , ( (  from_dash_charlike195 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_319_Just ) ( (  op_dash_add756 ( (  op_dash_sub755 ( ( (  char_dash_u8358 ) ( (  c2545 ) ) ) , ( (  char_dash_u8358 ) ( ( (  from_dash_charlike195 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral186 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_319) { .tag = Maybe_319_None_t } );
}

static  uint32_t   lam733 (    struct Char_53  c2550 ) {
    return ( (  from_dash_integral190 ) ( ( (  u8_dash_i64734 ) ( ( (  or_dash_fail742 ) ( ( (  hex_dash_digit752 ) ( (  c2550 ) ) ) ,  ( ( StrConcat_743_StrConcat ) ( ( ( StrConcat_744_StrConcat ) ( ( (  from_dash_charlike195 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2550 ) ) ) ,  ( (  from_dash_string194 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   op_dash_add758 (    uint32_t  l230 ,    uint32_t  r232 ) {
    return ( (  l230 ) + (  r232 ) );
}

static  uint32_t   lam757 (    uint32_t  elem2552 ,    uint32_t  b2554 ) {
    return (  op_dash_add758 ( (  op_dash_mul657 ( (  b2554 ) , (  from_dash_integral190 ( 16 ) ) ) ) , (  elem2552 ) ) );
}

static  uint32_t   from_dash_hex725 (    struct StrView_21  arr2548 ) {
    return ( (  reduce726 ) ( ( (  map732 ) ( (  arr2548 ) ,  (  lam733 ) ) ) ,  (  from_dash_integral190 ( 0 ) ) ,  (  lam757 ) ) );
}

static  bool   eq760 (    char  l374 ,    char  r376 ) {
    return ( (  l374 ) == (  r376 ) );
}

static  char   from_dash_charlike761 (    uint8_t *  ptr369 ,    size_t  num_dash_bytes371 ) {
    if ( ( !  eq213 ( (  num_dash_bytes371 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp762 = ( (  from_dash_string45 ) ( ( "(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp762);
        exit ( 1 );
        ( Unit_7_Unit );
    }
    return ( ( (char ) ( * (  ptr369 ) ) ) );
}

struct Array_763 {
    char _arr [32];
};

static  void *   cast_dash_ptr767 (    struct Array_763 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of768 (    struct Array_763  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Array_763   zeroed765 (  ) {
    struct Array_763  temp766;
    struct Array_763  x570 = (  temp766 );
    ( ( memset ) ( ( (  cast_dash_ptr767 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of768 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr772 (    struct Array_763 *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  char *   offset_dash_ptr773 (    char *  x338 ,    int64_t  count340 ) {
    char  temp774;
    return ( (char * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul204 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp774 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr771 (    struct Array_763 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp158 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i2253 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic162 ) ( ( ( StrConcat_163_StrConcat ) ( ( ( StrConcat_164_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string194 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2254 = ( ( (  cast_dash_ptr772 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr773 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  enum Unit_7   set770 (    struct Array_763 *  arr2263 ,    size_t  i2266 ,    char  e2268 ) {
    char *  p2269 = ( (  get_dash_ptr771 ) ( (  arr2263 ) ,  (  i2266 ) ) );
    (*  p2269 ) = (  e2268 );
    return ( Unit_7_Unit );
}

struct Slice_776 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail779 (    struct Maybe_711  x1725 ,    struct StrConcat_227  errmsg1727 ) {
    struct Maybe_711  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_711_None_t ) {
        ( (  panic226 ) ( (  errmsg1727 ) ) );
        return ( (  undefined709 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_711_Just_t ) {
            return ( dref1728 .stuff .Maybe_711_Just_s .field0 );
        }
    }
}

static  struct Maybe_711   try_dash_get780 (    struct Slice_776  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp158 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_711) { .tag = Maybe_711_None_t } );
    }
    char *  elem_dash_ptr1766 = ( (  offset_dash_ptr773 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_711_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  char   get778 (    struct Slice_776  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail779 ) ( ( (  try_dash_get780 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string194 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get777 (    struct Slice_776  self1867 ,    size_t  idx1869 ) {
    return ( (  get778 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

struct Scanner_781 {
    struct StrViewIter_577  f_s;
};

static  struct Scanner_781   mk_dash_from_dash_str783 (    struct StrView_21  s3172 ) {
    return ( (struct Scanner_781) { .f_s = ( (  chars582 ) ( (  s3172 ) ) ) } );
}

static  int32_t   op_dash_sub786 (    int32_t  l212 ,    int32_t  r214 ) {
    return ( (  l212 ) - (  r214 ) );
}

static  uint8_t *   offset_dash_ptr_prime_788 (    uint8_t *  x343 ,    size_t  count345 ) {
    return ( (  offset_dash_ptr303 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
}

static  struct StrView_21   substr784 (    struct StrView_21  s2172 ,    size_t  from2174 ,    size_t  to2176 ) {
    size_t  from_dash_bs2177 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_663  temp785 =  into_dash_iter665 ( ( (  to668 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  op_dash_sub786 ( ( (  size_dash_i32170 ) ( (  from2174 ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_246  __cond787 =  next666 (&temp785);
        if (  __cond787 .tag == 0 ) {
            break;
        }
        int32_t  dref2178 =  __cond787 .stuff .Maybe_246_Just_s .field0;
        if ( (  cmp158 ( (  from_dash_bs2177 ) , ( ( (  s2172 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2177 = (  op_dash_add206 ( (  from_dash_bs2177 ) , ( (  next_dash_char198 ) ( ( (  offset_dash_ptr_prime_788 ) ( ( ( (  s2172 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2177 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2179 = (  from_dash_bs2177 );
    struct RangeIter_663  temp789 =  into_dash_iter665 ( ( (  to668 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  op_dash_sub786 ( (  op_dash_sub786 ( ( (  size_dash_i32170 ) ( (  to2176 ) ) ) , ( (  size_dash_i32170 ) ( (  from2174 ) ) ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_246  __cond790 =  next666 (&temp789);
        if (  __cond790 .tag == 0 ) {
            break;
        }
        int32_t  dref2180 =  __cond790 .stuff .Maybe_246_Just_s .field0;
        if ( (  cmp158 ( (  to_dash_bs2179 ) , ( ( (  s2172 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2179 = (  op_dash_add206 ( (  to_dash_bs2179 ) , ( (  next_dash_char198 ) ( ( (  offset_dash_ptr_prime_788 ) ( ( ( (  s2172 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2179 ) ) ) ) ) ) );
    }
    return ( (struct StrView_21) { .f_contents = ( (  subslice302 ) ( ( (  s2172 ) .f_contents ) ,  (  from_dash_bs2177 ) ,  (  to_dash_bs2179 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr793 (    char *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_12   cast_dash_slice792 (    struct Slice_776  s1932 ) {
    return ( (struct Slice_12) { .f_ptr = ( (  cast_dash_ptr793 ) ( ( (  s1932 ) .f_ptr ) ) ) , .f_count = ( (  s1932 ) .f_count ) } );
}

static  struct StrView_21   from_dash_ascii_dash_slice791 (    struct Slice_776  sl2149 ) {
    return ( (struct StrView_21) { .f_contents = ( (  cast_dash_slice792 ) ( (  sl2149 ) ) ) } );
}

struct Maybe_794 {
    enum {
        Maybe_794_None_t,
        Maybe_794_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_794_Just_s;
    } stuff;
};

static struct Maybe_794 Maybe_794_Just (  int64_t  field0 ) {
    return ( struct Maybe_794 ) { .tag = Maybe_794_Just_t, .stuff = { .Maybe_794_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_796 {
    struct Scanner_781  f_it;
    bool (*  f_pred )(    struct Char_53  );
};

static  struct Scanner_781   into_dash_iter799 (    struct Scanner_781  self3163 ) {
    return (  self3163 );
}

static  struct Scanner_781   into_dash_iter798 (    struct Scanner_781 *  self785 ) {
    return ( (  into_dash_iter799 ) ( ( * (  self785 ) ) ) );
}

static  struct TakeWhile_796   take_dash_while797 (    struct Scanner_781 *  it970 ,    bool (*  pred972 )(    struct Char_53  ) ) {
    return ( (struct TakeWhile_796) { .f_it = ( (  into_dash_iter798 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  bool   is_dash_digit800 (    struct Char_53  c2451 ) {
    return ( (  cmp199 ( ( (  char_dash_u8358 ) ( (  c2451 ) ) ) , ( (  char_dash_u8358 ) ( ( (  from_dash_charlike195 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp199 ( ( (  char_dash_u8358 ) ( (  c2451 ) ) ) , ( (  char_dash_u8358 ) ( ( (  from_dash_charlike195 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_580   next804 (    struct Scanner_781 *  self3160 ) {
    return ( (  next581 ) ( ( & ( ( * (  self3160 ) ) .f_s ) ) ) );
}

static  struct Maybe_580   next803 (    struct TakeWhile_796 *  self964 ) {
    struct Maybe_580  mx965 = ( (  next804 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_580  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_580_None_t ) {
        return ( (struct Maybe_580) { .tag = Maybe_580_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_580_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_580_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_580_Just ) ( ( dref966 .stuff .Maybe_580_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_580) { .tag = Maybe_580_None_t } );
            }
        }
    }
}

static  struct TakeWhile_796   into_dash_iter806 (    struct TakeWhile_796  self961 ) {
    return (  self961 );
}

static  struct Maybe_580   head802 (    struct TakeWhile_796  it1142 ) {
    struct TakeWhile_796  temp805 = ( (  into_dash_iter806 ) ( (  it1142 ) ) );
    return ( (  next803 ) ( ( &temp805 ) ) );
}

static  bool   null801 (    struct TakeWhile_796  it1151 ) {
    struct Maybe_580  dref1152 = ( (  head802 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_580_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env809 {
    struct Scanner_781 *  it1186;
    ;
};

struct envunion810 {
    struct Maybe_580  (*fun) (  struct env809*  ,    int32_t  );
    struct env809 env;
};

static  enum Unit_7   for_dash_each808 (    struct Range_660  iterable1074 ,   struct envunion810  fun1076 ) {
    struct RangeIter_663  temp811 = ( (  into_dash_iter665 ) ( (  iterable1074 ) ) );
    struct RangeIter_663 *  it1077 = ( &temp811 );
    while ( ( true ) ) {
        struct Maybe_246  dref1078 = ( (  next666 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_246_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_246_Just_t ) {
                struct envunion810  temp812 = (  fun1076 );
                ( temp812.fun ( &temp812.env ,  ( dref1078 .stuff .Maybe_246_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Maybe_580   lam813 (   struct env809* env ,    int32_t  dref1189 ) {
    return ( (  next804 ) ( ( env->it1186 ) ) );
}

static  enum Unit_7   drop_prime_807 (    struct Scanner_781 *  it1186 ,    size_t  n1188 ) {
    struct env809 envinst809 = {
        .it1186 =  it1186 ,
    };
    ( (  for_dash_each808 ) ( ( (  to668 ) ( (  from_dash_integral44 ( 1 ) ) ,  ( (  size_dash_i32170 ) ( (  n1188 ) ) ) ) ) ,  ( (struct envunion810){ .fun = (  struct Maybe_580  (*) (  struct env809*  ,    int32_t  ) )lam813 , .env =  envinst809 } ) ) );
    return ( Unit_7_Unit );
}

static  size_t   reduce815 (    struct TakeWhile_796  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_53  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct TakeWhile_796  it1099 = ( (  into_dash_iter806 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_580  dref1100 = ( (  next803 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_580_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_580_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_580_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp816 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp816);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp817;
    return (  temp817 );
}

static  size_t   lam818 (    struct Char_53  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add206 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count814 (    struct TakeWhile_796  it1104 ) {
    return ( (  reduce815 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam818 ) ) );
}

static  struct TakeWhile_796   chars820 (    struct TakeWhile_796  self1651 ) {
    return (  self1651 );
}

static  struct Maybe_794   reduce821 (    struct TakeWhile_796  iterable1093 ,    struct Maybe_794  base1095 ,    struct Maybe_794 (*  fun1097 )(    struct Char_53  ,    struct Maybe_794  ) ) {
    struct Maybe_794  x1098 = (  base1095 );
    struct TakeWhile_796  it1099 = ( (  into_dash_iter806 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_580  dref1100 = ( (  next803 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_580_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_580_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_580_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp822 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp822);
    exit ( 1 );
    ( Unit_7_Unit );
    struct Maybe_794  temp823;
    return (  temp823 );
}

static  void *   cast_dash_ptr831 (    int32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of832 (    int32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int32_t   zeroed829 (  ) {
    int32_t  temp830;
    int32_t  x570 = (  temp830 );
    ( ( memset ) ( ( (  cast_dash_ptr831 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of832 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast833 (    int32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed827 (    uint8_t  x573 ) {
    int32_t  temp828 = ( (  zeroed829 ) ( ) );
    int32_t *  y574 = ( &temp828 );
    uint8_t *  yp575 = ( (  cast833 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int32_t   u8_dash_i32826 (    uint8_t  x669 ) {
    return ( (  cast_dash_on_dash_zeroed827 ) ( (  x669 ) ) );
}

static  struct Maybe_246   parse_dash_digit825 (    struct Char_53  c2454 ) {
    if ( ( (  is_dash_digit800 ) ( (  c2454 ) ) ) ) {
        return ( ( Maybe_246_Just ) ( ( (  u8_dash_i32826 ) ( (  op_dash_sub755 ( ( (  char_dash_u8358 ) ( (  c2454 ) ) ) , ( (  char_dash_u8358 ) ( ( (  from_dash_charlike195 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
}

static  int64_t   i32_dash_i64834 (    int32_t  x606 ) {
    return ( (int64_t ) (  x606 ) );
}

static  struct Maybe_794   sequence_dash_maybe824 (    struct Char_53  e2460 ,    struct Maybe_794  b2462 ) {
    struct Maybe_794  dref2463 = (  b2462 );
    if ( dref2463.tag == Maybe_794_None_t ) {
        return ( (struct Maybe_794) { .tag = Maybe_794_None_t } );
    }
    else {
        if ( dref2463.tag == Maybe_794_Just_t ) {
            struct Maybe_246  dref2465 = ( (  parse_dash_digit825 ) ( (  e2460 ) ) );
            if ( dref2465.tag == Maybe_246_None_t ) {
                return ( (struct Maybe_794) { .tag = Maybe_794_None_t } );
            }
            else {
                if ( dref2465.tag == Maybe_246_Just_t ) {
                    return ( ( Maybe_794_Just ) ( (  op_dash_add379 ( (  op_dash_mul204 ( ( dref2463 .stuff .Maybe_794_Just_s .field0 ) , (  from_dash_integral277 ( 10 ) ) ) ) , ( (  i32_dash_i64834 ) ( ( dref2465 .stuff .Maybe_246_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_794   parse_dash_int819 (    struct TakeWhile_796  s2457 ) {
    struct TakeWhile_796  cs2467 = ( (  chars820 ) ( (  s2457 ) ) );
    struct Maybe_580  dref2468 = ( (  head802 ) ( (  cs2467 ) ) );
    if ( dref2468.tag == Maybe_580_Just_t ) {
        return ( (  reduce821 ) ( (  cs2467 ) ,  ( ( Maybe_794_Just ) ( (  from_dash_integral277 ( 0 ) ) ) ) ,  (  sequence_dash_maybe824 ) ) );
    }
    else {
        if ( dref2468.tag == Maybe_580_None_t ) {
            return ( (struct Maybe_794) { .tag = Maybe_794_None_t } );
        }
    }
}

static  struct Maybe_794   scan_dash_int795 (    struct Scanner_781 *  sc3175 ) {
    struct TakeWhile_796  digit_dash_chars3176 = ( (  take_dash_while797 ) ( (  sc3175 ) ,  (  is_dash_digit800 ) ) );
    if ( ( (  null801 ) ( (  digit_dash_chars3176 ) ) ) ) {
        return ( (struct Maybe_794) { .tag = Maybe_794_None_t } );
    }
    ( (  drop_prime_807 ) ( (  sc3175 ) ,  ( (  count814 ) ( (  digit_dash_chars3176 ) ) ) ) );
    return ( (  parse_dash_int819 ) ( (  digit_dash_chars3176 ) ) );
}

static  int32_t   i64_dash_i32836 (    int64_t  x618 ) {
    return ( (int32_t ) (  x618 ) );
}

struct StrConcat_838 {
    struct StrView_21  field0;
    int64_t  field1;
};

static struct StrConcat_838 StrConcat_838_StrConcat (  struct StrView_21  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_838 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_841 {
    struct StrView_21  field0;
    struct StrConcat_838  field1;
};

static struct StrConcat_841 StrConcat_841_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_838  field1 ) {
    return ( struct StrConcat_841 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_840 {
    struct StrConcat_841  field0;
    struct Char_53  field1;
};

static struct StrConcat_840 StrConcat_840_StrConcat (  struct StrConcat_841  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_840 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_846 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_845 {
    struct StrViewIter_577  f_left;
    struct IntStrIter_846  f_right;
};

struct StrConcatIter_844 {
    struct StrViewIter_577  f_left;
    struct StrConcatIter_845  f_right;
};

enum EmptyIter_848 {
    EmptyIter_848_EmptyIter,
};

struct AppendIter_847 {
    enum EmptyIter_848  f_it;
    struct Char_53  f_elem;
    bool  f_appended;
};

struct StrConcatIter_843 {
    struct StrConcatIter_844  f_left;
    struct AppendIter_847  f_right;
};

static  struct StrConcatIter_843   into_dash_iter850 (    struct StrConcatIter_843  self1491 ) {
    return (  self1491 );
}

struct env857 {
    ;
    int64_t  base1210;
};

struct envunion858 {
    int64_t  (*fun) (  struct env857*  ,    int32_t  ,    int64_t  );
    struct env857 env;
};

static  int64_t   reduce856 (    struct Range_660  iterable1093 ,    int64_t  base1095 ,   struct envunion858  fun1097 ) {
    int64_t  x1098 = (  base1095 );
    struct RangeIter_663  it1099 = ( (  into_dash_iter665 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1100 = ( (  next666 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_246_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_246_Just_t ) {
                struct envunion858  temp859 = (  fun1097 );
                x1098 = ( temp859.fun ( &temp859.env ,  ( dref1100 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp860 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp860);
    exit ( 1 );
    ( Unit_7_Unit );
    int64_t  temp861;
    return (  temp861 );
}

static  int64_t   lam862 (   struct env857* env ,    int32_t  item1214 ,    int64_t  x1216 ) {
    return (  op_dash_mul204 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int64_t   pow855 (    int64_t  base1210 ,    int32_t  p1212 ) {
    struct env857 envinst857 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce856 ) ( ( (  to668 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  op_dash_sub786 ( (  p1212 ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral277 ( 1 ) ) ,  ( (struct envunion858){ .fun = (  int64_t  (*) (  struct env857*  ,    int32_t  ,    int64_t  ) )lam862 , .env =  envinst857 } ) ) );
}

static  int64_t   op_dash_div863 (    int64_t  l199 ,    int64_t  r201 ) {
    return ( (  l199 ) / (  r201 ) );
}

static  uint8_t   cast864 (    int64_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  int64_t   op_dash_sub865 (    int64_t  l189 ,    int64_t  r191 ) {
    return ( (  l189 ) - (  r191 ) );
}

static  uint8_t *   cast871 (    size_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed869 (    uint8_t  x573 ) {
    size_t  temp870 = ( (  zeroed652 ) ( ) );
    size_t *  y574 = ( &temp870 );
    uint8_t *  yp575 = ( (  cast871 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u8_dash_size868 (    uint8_t  x663 ) {
    return ( (  cast_dash_on_dash_zeroed869 ) ( (  x663 ) ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer867 (    uint8_t *  ptr681 ,    uint8_t  b683 ) {
    size_t  s684 = ( ( (size_t ) (  ptr681 ) ) );
    size_t  exp685 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add206 ( (  op_dash_sub278 ( (  s684 ) , ( (  u8_dash_size868 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer183 ) ( (  ptr681 ) ) ) ) ) ) ) , (  op_dash_mul219 ( (  exp685 ) , ( (  u8_dash_size868 ) ( (  b683 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast872 (    size_t  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_53   from_dash_u8866 (    uint8_t  b772 ) {
    uint8_t *  ptr773 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer867 ) ( ( ( (  cast872 ) ( ( (  u8_dash_size868 ) ( (  b772 ) ) ) ) ) ) ,  (  from_dash_integral186 ( 103 ) ) ) );
    return ( (struct Char_53) { .f_ptr = (  ptr773 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_580   next854 (    struct IntStrIter_846 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_580_Just ) ( ( (  from_dash_charlike195 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp291 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_580) { .tag = Maybe_580_None_t } );
    }
    int64_t  trim_dash_down1423 = ( (  pow855 ) ( (  from_dash_integral277 ( 10 ) ) ,  (  op_dash_sub786 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 1 ) ) ) ) ) );
    int64_t  upper1424 = (  op_dash_div863 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    int64_t  upper_dash_mask1425 = (  op_dash_mul204 ( (  op_dash_div863 ( (  upper1424 ) , (  from_dash_integral277 ( 10 ) ) ) ) , (  from_dash_integral277 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast864 ) ( (  op_dash_sub865 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub786 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 1 ) ) ) );
    struct Char_53  digit_dash_char1427 = ( (  from_dash_u8866 ) ( (  op_dash_add756 ( (  digit1426 ) , (  from_dash_integral186 ( 48 ) ) ) ) ) );
    return ( ( Maybe_580_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_580   next853 (    struct StrConcatIter_845 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next581 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next854 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next852 (    struct StrConcatIter_844 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next581 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next853 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next874 (    enum EmptyIter_848 *  dref792 ) {
    return ( (struct Maybe_580) { .tag = Maybe_580_None_t } );
}

static  struct Maybe_580   next873 (    struct AppendIter_847 *  self1022 ) {
    struct Maybe_580  dref1023 = ( (  next874 ) ( ( & ( ( * (  self1022 ) ) .f_it ) ) ) );
    if ( dref1023.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1023 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1023.tag == Maybe_580_None_t ) {
            if ( ( ! ( ( * (  self1022 ) ) .f_appended ) ) ) {
                (*  self1022 ) .f_appended = ( true );
                return ( ( Maybe_580_Just ) ( ( ( * (  self1022 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_580) { .tag = Maybe_580_None_t } );
        }
    }
}

static  struct Maybe_580   next851 (    struct StrConcatIter_843 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next852 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next873 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each842 (    struct StrConcatIter_843  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_53  ) ) {
    struct StrConcatIter_843  temp849 = ( (  into_dash_iter850 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_843 *  it1077 = ( &temp849 );
    while ( ( true ) ) {
        struct Maybe_580  dref1078 = ( (  next851 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_580_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_580_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_580_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_159   cmp883 (    int64_t  l154 ,    int64_t  r156 ) {
    return ( builtin_int64_tcmp( (  l154 ) , (  r156 ) ) );
}

static  int64_t   op_dash_neg884 (    int64_t  l204 ) {
    return ( (  from_dash_integral277 ( 0 ) ) - (  l204 ) );
}

static  bool   eq886 (    int64_t  l101 ,    int64_t  r103 ) {
    return ( (  l101 ) == (  r103 ) );
}

static  int32_t   count_dash_digits885 (    int64_t  self1430 ) {
    if ( (  eq886 ( (  self1430 ) , (  from_dash_integral277 ( 0 ) ) ) ) ) {
        return (  from_dash_integral44 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral44 ( 0 ) );
    while ( (  cmp883 ( (  self1430 ) , (  from_dash_integral277 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div863 ( (  self1430 ) , (  from_dash_integral277 ( 10 ) ) ) );
        digits1431 = (  op_dash_add248 ( (  digits1431 ) , (  from_dash_integral44 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_846   int_dash_iter882 (    int64_t  int1434 ) {
    if ( (  cmp883 ( (  int1434 ) , (  from_dash_integral277 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_846) { .f_int = (  op_dash_neg884 ( (  int1434 ) ) ) , .f_len = ( (  count_dash_digits885 ) ( (  op_dash_neg884 ( (  int1434 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_846) { .f_int = (  int1434 ) , .f_len = ( (  count_dash_digits885 ) ( (  int1434 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_846   chars881 (    int64_t  self1461 ) {
    return ( (  int_dash_iter882 ) ( (  self1461 ) ) );
}

static  struct StrConcatIter_845   into_dash_iter880 (    struct StrConcat_838  dref1498 ) {
    return ( (struct StrConcatIter_845) { .f_left = ( (  chars582 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars881 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_845   chars879 (    struct StrConcat_838  self1509 ) {
    return ( (  into_dash_iter880 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_844   into_dash_iter878 (    struct StrConcat_841  dref1498 ) {
    return ( (struct StrConcatIter_844) { .f_left = ( (  chars582 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars879 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_844   chars877 (    struct StrConcat_841  self1509 ) {
    return ( (  into_dash_iter878 ) ( (  self1509 ) ) );
}

static  enum EmptyIter_848   into_dash_iter891 (    enum EmptyIter_848  self790 ) {
    return (  self790 );
}

static  struct AppendIter_847   append890 (    enum EmptyIter_848  it1006 ,    struct Char_53  e1008 ) {
    return ( (struct AppendIter_847) { .f_it = ( (  into_dash_iter891 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_847   cons889 (    enum EmptyIter_848  it1011 ,    struct Char_53  e1013 ) {
    return ( (  append890 ) ( (  it1011 ) ,  (  e1013 ) ) );
}

static  enum EmptyIter_848   nil892 (  ) {
    return ( EmptyIter_848_EmptyIter );
}

static  struct AppendIter_847   single888 (    struct Char_53  e1016 ) {
    return ( (  cons889 ) ( ( (  nil892 ) ( ) ) ,  (  e1016 ) ) );
}

static  struct AppendIter_847   chars887 (    struct Char_53  self1407 ) {
    return ( (  single888 ) ( (  self1407 ) ) );
}

static  struct StrConcatIter_843   into_dash_iter876 (    struct StrConcat_840  dref1498 ) {
    return ( (struct StrConcatIter_843) { .f_left = ( (  chars877 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars887 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_843   chars875 (    struct StrConcat_840  self1509 ) {
    return ( (  into_dash_iter876 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print839 (    struct StrConcat_840  s1701 ) {
    ( (  for_dash_each842 ) ( ( (  chars875 ) ( (  s1701 ) ) ) ,  (  printf_dash_char178 ) ) );
    return ( Unit_7_Unit );
}

static  enum MouseButton_698   undefined893 (  ) {
    enum MouseButton_698  temp894;
    return (  temp894 );
}

static  enum MouseButton_698   panic_prime_837 (    struct StrConcat_838  errmsg1715 ) {
    ( (  print839 ) ( ( ( StrConcat_840_StrConcat ) ( ( ( StrConcat_841_StrConcat ) ( ( (  from_dash_string194 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1715 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( (  undefined893 ) ( ) );
}

static  enum MouseButton_698   btn_dash_to_dash_mouse_dash_button835 (    int64_t  btn3337 ) {
    return ( {  int32_t  dref3338 = ( (  i64_dash_i32836 ) ( (  btn3337 ) ) ) ;  dref3338 == 0 ? ( MouseButton_698_MouseLeft ) :  dref3338 == 1 ? ( MouseButton_698_MouseMiddle ) :  dref3338 == 2 ? ( MouseButton_698_MouseRight ) :  dref3338 == 64 ? ( MouseButton_698_ScrollUp ) :  dref3338 == 65 ? ( MouseButton_698_ScrollDown ) : ( (  panic_prime_837 ) ( ( ( StrConcat_838_StrConcat ) ( ( (  from_dash_string194 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3337 ) ) ) ) ) ; } );
}

static  struct Scanner_781   mk896 (    struct StrView_21  s3166 ) {
    return ( (struct Scanner_781) { .f_s = ( (  into_dash_iter583 ) ( (  s3166 ) ) ) } );
}

static  struct Maybe_695   parse_dash_csi775 (    struct Slice_776  seq3344 ) {
    if ( (  eq213 ( ( (  seq3344 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_695) { .tag = Maybe_695_None_t } );
    }
    char  last3345 = (  elem_dash_get777 ( (  seq3344 ) , (  op_dash_sub278 ( ( (  seq3344 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq760 ( (  elem_dash_get777 ( (  seq3344 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike761 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq760 ( (  last3345 ) , ( (  from_dash_charlike761 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq760 ( (  last3345 ) , ( (  from_dash_charlike761 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_781  temp782 = ( (  mk_dash_from_dash_str783 ) ( ( (  substr784 ) ( ( (  from_dash_ascii_dash_slice791 ) ( (  seq3344 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3344 ) .f_count ) ) ) ) );
        struct Scanner_781 *  sc3346 = ( &temp782 );
        struct Maybe_794  dref3347 = ( (  scan_dash_int795 ) ( (  sc3346 ) ) );
        if ( dref3347.tag == Maybe_794_None_t ) {
            return ( (struct Maybe_695) { .tag = Maybe_695_None_t } );
        }
        else {
            if ( dref3347.tag == Maybe_794_Just_t ) {
                ( (  next804 ) ( (  sc3346 ) ) );
                struct Maybe_794  dref3349 = ( (  scan_dash_int795 ) ( (  sc3346 ) ) );
                if ( dref3349.tag == Maybe_794_None_t ) {
                    return ( (struct Maybe_695) { .tag = Maybe_695_None_t } );
                }
                else {
                    if ( dref3349.tag == Maybe_794_Just_t ) {
                        ( (  next804 ) ( (  sc3346 ) ) );
                        struct Maybe_794  dref3351 = ( (  scan_dash_int795 ) ( (  sc3346 ) ) );
                        if ( dref3351.tag == Maybe_794_None_t ) {
                            return ( (struct Maybe_695) { .tag = Maybe_695_None_t } );
                        }
                        else {
                            if ( dref3351.tag == Maybe_794_Just_t ) {
                                return ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Mouse ) ( ( (struct MouseEvent_697) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button835 ) ( ( dref3347 .stuff .Maybe_794_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub786 ( ( (  i64_dash_i32836 ) ( ( dref3349 .stuff .Maybe_794_Just_s .field0 ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) , .f_y = (  op_dash_sub786 ( ( (  i64_dash_i32836 ) ( ( dref3351 .stuff .Maybe_794_Just_s .field0 ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) , .f_pressed = (  eq760 ( (  last3345 ) , ( (  from_dash_charlike761 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq213 ( ( (  seq3344 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq760 ( (  last3345 ) , ( (  from_dash_charlike761 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_Up_t } ) ) ) ) );
        }
        if ( (  eq760 ( (  last3345 ) , ( (  from_dash_charlike761 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_Down_t } ) ) ) ) );
        }
        if ( (  eq760 ( (  last3345 ) , ( (  from_dash_charlike761 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_Right_t } ) ) ) ) );
        }
        if ( (  eq760 ( (  last3345 ) , ( (  from_dash_charlike761 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_Left_t } ) ) ) ) );
        }
        if ( (  eq760 ( (  last3345 ) , ( (  from_dash_charlike761 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_Home_t } ) ) ) ) );
        }
        if ( (  eq760 ( (  last3345 ) , ( (  from_dash_charlike761 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_695) { .tag = Maybe_695_None_t } );
    }
    if ( (  eq760 ( (  last3345 ) , ( (  from_dash_charlike761 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_781  temp895 = ( (  mk896 ) ( ( (  from_dash_ascii_dash_slice791 ) ( (  seq3344 ) ) ) ) );
        struct Scanner_781 *  sc3353 = ( &temp895 );
        struct Maybe_794  dref3354 = ( (  scan_dash_int795 ) ( (  sc3353 ) ) );
        if ( dref3354.tag == Maybe_794_None_t ) {
            return ( (struct Maybe_695) { .tag = Maybe_695_None_t } );
        }
        else {
            if ( dref3354.tag == Maybe_794_Just_t ) {
                return ( {  int32_t  dref3356 = ( (  i64_dash_i32836 ) ( ( dref3354 .stuff .Maybe_794_Just_s .field0 ) ) ) ;  dref3356 == 1 ? ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_Home_t } ) ) ) ) ) :  dref3356 == 2 ? ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_Insert_t } ) ) ) ) ) :  dref3356 == 3 ? ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_Delete_t } ) ) ) ) ) :  dref3356 == 4 ? ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_End_t } ) ) ) ) ) :  dref3356 == 5 ? ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_PageUp_t } ) ) ) ) ) :  dref3356 == 6 ? ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_PageDown_t } ) ) ) ) ) :  dref3356 == 15 ? ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_F5_t } ) ) ) ) ) :  dref3356 == 17 ? ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_F6_t } ) ) ) ) ) :  dref3356 == 18 ? ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_F7_t } ) ) ) ) ) :  dref3356 == 19 ? ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_F8_t } ) ) ) ) ) :  dref3356 == 20 ? ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_F9_t } ) ) ) ) ) :  dref3356 == 21 ? ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_F10_t } ) ) ) ) ) :  dref3356 == 23 ? ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_F11_t } ) ) ) ) ) :  dref3356 == 24 ? ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_F12_t } ) ) ) ) ) : ( (struct Maybe_695) { .tag = Maybe_695_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_695) { .tag = Maybe_695_None_t } );
}

static  struct Slice_776   subslice897 (    struct Slice_776  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    char *  begin_dash_ptr1787 = ( (  offset_dash_ptr773 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp158 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp158 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_776) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub278 ( ( (  min305 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_776) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  char *   cast899 (    struct Array_763 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_776   as_dash_slice898 (    struct Array_763 *  arr2272 ) {
    return ( (struct Slice_776) { .f_ptr = ( (  cast899 ) ( (  arr2272 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_901 {
    enum {
        Maybe_901_None_t,
        Maybe_901_Just_t,
    } tag;
    union {
        struct {
            struct Key_131  field0;
        } Maybe_901_Just_s;
    } stuff;
};

static struct Maybe_901 Maybe_901_Just (  struct Key_131  field0 ) {
    return ( struct Maybe_901 ) { .tag = Maybe_901_Just_t, .stuff = { .Maybe_901_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_901   parse_dash_ss3902 (    char  c3341 ) {
    if ( (  eq760 ( (  c3341 ) , ( (  from_dash_charlike761 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_901_Just ) ( ( (struct Key_131) { .tag = Key_131_Up_t } ) ) );
    }
    if ( (  eq760 ( (  c3341 ) , ( (  from_dash_charlike761 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_901_Just ) ( ( (struct Key_131) { .tag = Key_131_Down_t } ) ) );
    }
    if ( (  eq760 ( (  c3341 ) , ( (  from_dash_charlike761 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_901_Just ) ( ( (struct Key_131) { .tag = Key_131_Right_t } ) ) );
    }
    if ( (  eq760 ( (  c3341 ) , ( (  from_dash_charlike761 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_901_Just ) ( ( (struct Key_131) { .tag = Key_131_Left_t } ) ) );
    }
    if ( (  eq760 ( (  c3341 ) , ( (  from_dash_charlike761 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_901_Just ) ( ( (struct Key_131) { .tag = Key_131_Home_t } ) ) );
    }
    if ( (  eq760 ( (  c3341 ) , ( (  from_dash_charlike761 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_901_Just ) ( ( (struct Key_131) { .tag = Key_131_End_t } ) ) );
    }
    if ( (  eq760 ( (  c3341 ) , ( (  from_dash_charlike761 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_901_Just ) ( ( (struct Key_131) { .tag = Key_131_F1_t } ) ) );
    }
    if ( (  eq760 ( (  c3341 ) , ( (  from_dash_charlike761 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_901_Just ) ( ( (struct Key_131) { .tag = Key_131_F2_t } ) ) );
    }
    if ( (  eq760 ( (  c3341 ) , ( (  from_dash_charlike761 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_901_Just ) ( ( (struct Key_131) { .tag = Key_131_F3_t } ) ) );
    }
    if ( (  eq760 ( (  c3341 ) , ( (  from_dash_charlike761 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_901_Just ) ( ( (struct Key_131) { .tag = Key_131_F4_t } ) ) );
    }
    return ( (struct Maybe_901) { .tag = Maybe_901_None_t } );
}

static  struct Maybe_695   read_dash_key707 (  ) {
    char  temp708 = ( (  undefined709 ) ( ) );
    char *  ch3358 = ( &temp708 );
    struct Maybe_711  dref3359 = ( (  read_dash_byte712 ) ( (  from_dash_integral44 ( 0 ) ) ) );
    if ( dref3359.tag == Maybe_711_None_t ) {
        return ( (struct Maybe_695) { .tag = Maybe_695_None_t } );
    }
    else {
        if ( dref3359.tag == Maybe_711_Just_t ) {
            (*  ch3358 ) = ( dref3359 .stuff .Maybe_711_Just_s .field0 );
        }
    }
    if ( (  eq182 ( ( (  ascii_dash_u8719 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral186 ( 13 ) ) ) ) ) {
        return ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_Enter_t } ) ) ) ) );
    }
    if ( (  eq182 ( ( (  ascii_dash_u8719 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral186 ( 127 ) ) ) ) ) {
        return ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp199 ( ( (  ascii_dash_u8719 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral186 ( 27 ) ) ) == 0 ) && ( !  eq182 ( ( (  ascii_dash_u8719 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral186 ( 9 ) ) ) ) ) ) {
        char  letter3361 = ( (  u8_dash_ascii720 ) ( ( (  u32_dash_u8192 ) ( ( (  u32_dash_or531 ) ( ( (  u8_dash_u32721 ) ( ( (  ascii_dash_u8719 ) ( ( * (  ch3358 ) ) ) ) ) ) ,  ( (  from_dash_hex725 ) ( ( (  from_dash_string194 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( ( Key_131_Ctrl ) ( (  letter3361 ) ) ) ) ) ) );
    }
    if ( ( !  eq182 ( ( (  ascii_dash_u8719 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral186 ( 27 ) ) ) ) ) {
        if ( (  cmp199 ( ( (  ascii_dash_u8719 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral186 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key707 ) ( ) );
        } else {
            return ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( ( Key_131_Char ) ( ( * (  ch3358 ) ) ) ) ) ) ) );
        }
    }
    char  temp759 = ( (  undefined709 ) ( ) );
    char *  ch23362 = ( &temp759 );
    struct Maybe_711  dref3363 = ( (  read_dash_byte712 ) ( (  from_dash_integral44 ( 50 ) ) ) );
    if ( dref3363.tag == Maybe_711_None_t ) {
        return ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3363.tag == Maybe_711_Just_t ) {
            (*  ch23362 ) = ( dref3363 .stuff .Maybe_711_Just_s .field0 );
        }
    }
    if ( (  eq760 ( ( * (  ch23362 ) ) , ( (  from_dash_charlike761 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_763  temp764 = ( ( (  zeroed765 ) ( ) ) );
        struct Array_763 *  seq3365 = ( &temp764 );
        int32_t  slen3366 = (  from_dash_integral44 ( 0 ) );
        while ( (  cmp291 ( (  slen3366 ) , (  from_dash_integral44 ( 31 ) ) ) == 0 ) ) {
            char  temp769 = ( (  undefined709 ) ( ) );
            char *  sc3367 = ( &temp769 );
            struct Maybe_711  dref3368 = ( (  read_dash_byte712 ) ( (  from_dash_integral44 ( 50 ) ) ) );
            if ( dref3368.tag == Maybe_711_None_t ) {
                break;
            }
            else {
                if ( dref3368.tag == Maybe_711_Just_t ) {
                    (*  sc3367 ) = ( dref3368 .stuff .Maybe_711_Just_s .field0 );
                }
            }
            ( (  set770 ) ( (  seq3365 ) ,  ( (  i32_dash_size236 ) ( (  slen3366 ) ) ) ,  ( * (  sc3367 ) ) ) );
            slen3366 = (  op_dash_add248 ( (  slen3366 ) , (  from_dash_integral44 ( 1 ) ) ) );
            if ( ( (  cmp199 ( ( (  ascii_dash_u8719 ) ( ( * (  sc3367 ) ) ) ) , (  from_dash_integral186 ( 64 ) ) ) != 0 ) && (  cmp199 ( ( (  ascii_dash_u8719 ) ( ( * (  sc3367 ) ) ) ) , (  from_dash_integral186 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi775 ) ( ( (  subslice897 ) ( ( (  as_dash_slice898 ) ( (  seq3365 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size236 ) ( (  slen3366 ) ) ) ) ) ) );
    }
    if ( (  eq760 ( ( * (  ch23362 ) ) , ( (  from_dash_charlike761 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp900 = ( (  undefined709 ) ( ) );
        char *  sc3370 = ( &temp900 );
        struct Maybe_711  dref3371 = ( (  read_dash_byte712 ) ( (  from_dash_integral44 ( 50 ) ) ) );
        if ( dref3371.tag == Maybe_711_None_t ) {
            return ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3371.tag == Maybe_711_Just_t ) {
                (*  sc3370 ) = ( dref3371 .stuff .Maybe_711_Just_s .field0 );
            }
        }
        struct Maybe_901  dref3373 = ( (  parse_dash_ss3902 ) ( ( * (  sc3370 ) ) ) );
        if ( dref3373.tag == Maybe_901_None_t ) {
            return ( (struct Maybe_695) { .tag = Maybe_695_None_t } );
        }
        else {
            if ( dref3373.tag == Maybe_901_Just_t ) {
                return ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( dref3373 .stuff .Maybe_901_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_695_Just ) ( ( ( InputEvent_696_Key ) ( ( (struct Key_131) { .tag = Key_131_Escape_t } ) ) ) ) );
}

static  struct Maybe_695   read_dash_event704 (   struct env62* env ,    struct Tui_64 *  tui3383 ) {
    struct envunion63  temp705 = ( (struct envunion63){ .fun = (  bool  (*) (  struct env61*  ,    struct Tui_64 *  ) )update_dash_dimensions706 , .env =  env->envinst61 } );
    ( temp705.fun ( &temp705.env ,  (  tui3383 ) ) );
    struct Maybe_695  dref3384 = ( (  read_dash_key707 ) ( ) );
    if ( dref3384.tag == Maybe_695_None_t ) {
        return ( (struct Maybe_695) { .tag = Maybe_695_None_t } );
    }
    else {
        if ( dref3384.tag == Maybe_695_Just_t ) {
            (*  tui3383 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_695_Just ) ( ( dref3384 .stuff .Maybe_695_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_695   lam702 (   struct env693* env ) {
    struct envunion694  temp703 = ( (struct envunion694){ .fun = (  struct Maybe_695  (*) (  struct env62*  ,    struct Tui_64 *  ) )read_dash_event704 , .env =  env->envinst62 } );
    return ( temp703.fun ( &temp703.env ,  ( env->tui4109 ) ) );
}

static  struct Maybe_695   next904 (    struct FunIter_692 *  self1031 ) {
    if ( ( ( * (  self1031 ) ) .f_finished ) ) {
        return ( (struct Maybe_695) { .tag = Maybe_695_None_t } );
    }
    struct envunion699  temp905 = ( ( * (  self1031 ) ) .f_fun );
    struct Maybe_695  dref1032 = ( temp905.fun ( &temp905.env ) );
    if ( dref1032.tag == Maybe_695_Just_t ) {
        return ( ( Maybe_695_Just ) ( ( dref1032 .stuff .Maybe_695_Just_s .field0 ) ) );
    }
    else {
        if ( dref1032.tag == Maybe_695_None_t ) {
            (*  self1031 ) .f_finished = ( true );
            return ( (struct Maybe_695) { .tag = Maybe_695_None_t } );
        }
    }
}

struct env908 {
    struct Editor_116 *  ed4050;
    ;
};

struct envunion909 {
    enum Unit_7  (*fun) (  struct env908*  ,    struct StrView_21  );
    struct env908 env;
};

static  enum Unit_7   if_dash_just907 (    struct Maybe_120  x1291 ,   struct envunion909  fun1293 ) {
    struct Maybe_120  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_120_Just_t ) {
        struct envunion909  temp910 = (  fun1293 );
        ( temp910.fun ( &temp910.env ,  ( dref1294 .stuff .Maybe_120_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_120_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   free912 (    struct StrView_21  s2167 ,    enum CAllocator_9  al2169 ) {
    ( (  free346 ) ( (  al2169 ) ,  ( (struct Slice_12) { .f_ptr = ( ( (  s2167 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam911 (   struct env908* env ,    struct StrView_21  msg4052 ) {
    ( (  free912 ) ( (  msg4052 ) ,  ( ( * ( env->ed4050 ) ) .f_al ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   reset_dash_msg906 (    struct Editor_116 *  ed4050 ) {
    struct env908 envinst908 = {
        .ed4050 =  ed4050 ,
    };
    ( (  if_dash_just907 ) ( ( ( * (  ed4050 ) ) .f_msg ) ,  ( (struct envunion909){ .fun = (  enum Unit_7  (*) (  struct env908*  ,    struct StrView_21  ) )lam911 , .env =  envinst908 } ) ) );
    (*  ed4050 ) .f_msg = ( (struct Maybe_120) { .tag = Maybe_120_None_t } );
    return ( Unit_7_Unit );
}

struct envunion914 {
    enum Unit_7  (*fun) (  struct env127*  ,    struct Editor_116 *  ,    struct Key_131  );
    struct env127 env;
};

enum CursorMovement_920 {
    CursorMovement_920_NoChanges,
    CursorMovement_920_UpdateVI,
    CursorMovement_920_OverrideSelect,
};

struct Tuple2_922 {
    enum CursorMovement_920  field0;
    enum CursorMovement_920  field1;
};

static struct Tuple2_922 Tuple2_922_Tuple2 (  enum CursorMovement_920  field0 ,  enum CursorMovement_920  field1 ) {
    return ( struct Tuple2_922 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq921 (    enum CursorMovement_920  l3917 ,    enum CursorMovement_920  r3919 ) {
    return ( {  struct Tuple2_922  dref3920 = ( ( Tuple2_922_Tuple2 ) ( (  l3917 ) ,  (  r3919 ) ) ) ;  dref3920 .field0 == CursorMovement_920_NoChanges &&  dref3920 .field1 == CursorMovement_920_NoChanges ? ( true ) :  dref3920 .field0 == CursorMovement_920_UpdateVI &&  dref3920 .field1 == CursorMovement_920_UpdateVI ? ( true ) :  dref3920 .field0 == CursorMovement_920_OverrideSelect &&  dref3920 .field1 == CursorMovement_920_OverrideSelect ? ( true ) : ( false ) ; } );
}

static  struct StrView_21   from_dash_bytes926 (    struct Slice_12  sl2152 ) {
    return ( (struct StrView_21) { .f_contents = (  sl2152 ) } );
}

static  struct StrView_21   line925 (    struct TextBuf_78 *  self3622 ,    int32_t  li3624 ) {
    return ( (  from_dash_bytes926 ) ( ( (  to_dash_slice306 ) ( ( (  get299 ) ( ( & ( ( * (  self3622 ) ) .f_buf ) ) ,  ( (  i32_dash_size236 ) ( (  li3624 ) ) ) ) ) ) ) ) );
}

static  int32_t   maybe929 (    struct Maybe_120  x1282 ,    int32_t (*  fun1284 )(    struct StrView_21  ) ,    int32_t  default1286 ) {
    return ( {  struct Maybe_120  dref1287 = (  x1282 ) ; dref1287.tag == Maybe_120_Just_t ? ( (  fun1284 ) ( ( dref1287 .stuff .Maybe_120_Just_s .field0 ) ) ) : (  default1286 ) ; } );
}

static  struct Maybe_120   char_dash_replacement930 (    struct Char_53  c3816 ) {
    if ( (  eq377 ( (  c3816 ) , ( (  from_dash_charlike195 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_120_Just ) ( ( (  from_dash_string194 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_120) { .tag = Maybe_120_None_t } );
    }
}

static  size_t   reduce933 (    struct StrViewIter_577  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_53  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct StrViewIter_577  it1099 = ( (  into_dash_iter579 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_580  dref1100 = ( (  next581 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_580_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_580_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_580_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp934 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp934);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp935;
    return (  temp935 );
}

static  size_t   lam936 (    struct Char_53  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add206 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count932 (    struct StrViewIter_577  it1104 ) {
    return ( (  reduce933 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam936 ) ) );
}

static  int32_t   lam931 (    struct StrView_21  s3821 ) {
    return ( (  size_dash_i32170 ) ( ( (  count932 ) ( ( (  chars582 ) ( (  s3821 ) ) ) ) ) ) );
}

static  int32_t   max938 (    int32_t  l1315 ,    int32_t  r1317 ) {
    if ( (  cmp291 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  void *   cast_dash_ptr944 (    wchar_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of945 (    wchar_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  wchar_t   zeroed942 (  ) {
    wchar_t  temp943;
    wchar_t  x570 = (  temp943 );
    ( ( memset ) ( ( (  cast_dash_ptr944 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of945 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr946 (    uint8_t *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  size_t   cast947 (    int64_t  x356 ) {
    return ( (size_t ) (  x356 ) );
}

struct TypeSize_950 {
    size_t  f_size;
};

static  struct TypeSize_950   get_dash_typesize949 (  ) {
    wchar_t  temp951;
    return ( (struct TypeSize_950) { .f_size = ( sizeof( ( (  temp951 ) ) ) ) } );
}

static  wchar_t   cast953 (    uint32_t  x356 ) {
    return ( (wchar_t ) (  x356 ) );
}

static  wchar_t   to_dash_c_dash_wchar940 (    struct Char_53  c750 ) {
    struct CharDestructured_179  dref751 = ( (  destructure181 ) ( (  c750 ) ) );
    if ( dref751.tag == CharDestructured_179_Ref_t ) {
        wchar_t  temp941 = ( (  zeroed942 ) ( ) );
        wchar_t *  wcp753 = ( &temp941 );
        size_t  num_dash_chars754 = ( ( mbstowcs ) ( (  wcp753 ) ,  ( (  cast_dash_ptr946 ) ( ( ( dref751 .stuff .CharDestructured_179_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq213 ( (  num_dash_chars754 ) , ( ( (  cast947 ) ( ( (  op_dash_neg884 ( (  from_dash_integral277 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp948 = ( (  from_dash_string45 ) ( ( "could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp948);
            exit ( 1 );
            ( Unit_7_Unit );
        }
        return ( * (  wcp753 ) );
    }
    else {
        if ( dref751.tag == CharDestructured_179_Scalar_t ) {
            if ( ( ! (  eq213 ( ( (  size_dash_of619 ) ( ( ( dref751 .stuff .CharDestructured_179_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize949 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp952 = ( (  from_dash_string45 ) ( ( "Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp952);
                exit ( 1 );
                ( Unit_7_Unit );
            }
            return ( (  cast953 ) ( ( ( dref751 .stuff .CharDestructured_179_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth939 (    struct Char_53  c2572 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar940 ) ( (  c2572 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth937 (    struct Char_53  c3428 ) {
    return ( (  max938 ) ( ( (  wcwidth939 ) ( (  c3428 ) ) ) ,  (  from_dash_integral44 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width928 (    struct Char_53  c3819 ) {
    return ( (  maybe929 ) ( ( (  char_dash_replacement930 ) ( (  c3819 ) ) ) ,  (  lam931 ) ,  ( (  rendered_dash_wcwidth937 ) ( (  c3819 ) ) ) ) );
}

static  int32_t   pos_dash_vi923 (    struct TextBuf_78 *  self3835 ,    struct Pos_20  pos3837 ) {
    int32_t  bi3838 = ( (  from_dash_integral44 ( 0 ) ) );
    int32_t  vi3839 = (  from_dash_integral44 ( 0 ) );
    struct StrViewIter_577  temp924 =  into_dash_iter579 ( ( (  chars582 ) ( ( (  line925 ) ( (  self3835 ) ,  ( (  pos3837 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_580  __cond927 =  next581 (&temp924);
        if (  __cond927 .tag == 0 ) {
            break;
        }
        struct Char_53  c3841 =  __cond927 .stuff .Maybe_580_Just_s .field0;
        bi3838 = (  op_dash_add248 ( (  bi3838 ) , ( (  size_dash_i32170 ) ( ( (  c3841 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp291 ( ( (  pos3837 ) .f_bi ) , (  bi3838 ) ) == 0 ) ) {
            break;
        }
        vi3839 = (  op_dash_add248 ( (  vi3839 ) , ( (  char_dash_screen_dash_width928 ) ( (  c3841 ) ) ) ) );
    }
    return (  vi3839 );
}

struct Tuple2_956 {
    enum Mode_118  field0;
    enum Mode_118  field1;
};

static struct Tuple2_956 Tuple2_956_Tuple2 (  enum Mode_118  field0 ,  enum Mode_118  field1 ) {
    return ( struct Tuple2_956 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq955 (    enum Mode_118  l3799 ,    enum Mode_118  r3801 ) {
    return ( {  struct Tuple2_956  dref3802 = ( ( Tuple2_956_Tuple2 ) ( (  l3799 ) ,  (  r3801 ) ) ) ;  dref3802 .field0 == Mode_118_Normal &&  dref3802 .field1 == Mode_118_Normal ? ( true ) :  dref3802 .field0 == Mode_118_Insert &&  dref3802 .field1 == Mode_118_Insert ? ( true ) :  dref3802 .field0 == Mode_118_Select &&  dref3802 .field1 == Mode_118_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_7   set_dash_sel954 (    struct Pane_117 *  self3906 ,    struct Maybe_28  sel3908 ) {
    if ( ( !  eq955 ( ( ( * (  self3906 ) ) .f_mode ) , ( Mode_118_Select ) ) ) ) {
        (*  self3906 ) .f_sel = (  sel3908 );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_cursors919 (    struct Pane_117 *  self3923 ,    struct Pos_20  cur3925 ,    struct Maybe_28  sel3927 ,    enum CursorMovement_920  cursor_dash_movement_dash_type3929 ) {
    if ( ( ( !  eq921 ( (  cursor_dash_movement_dash_type3929 ) , ( CursorMovement_920_NoChanges ) ) ) && ( !  eq294 ( ( (  cur3925 ) .f_bi ) , ( ( ( * (  self3923 ) ) .f_cursor ) .f_bi ) ) ) ) ) {
        (*  self3923 ) .f_vi = ( (  pos_dash_vi923 ) ( ( ( * (  self3923 ) ) .f_buf ) ,  (  cur3925 ) ) );
    }
    (*  self3923 ) .f_cursor = (  cur3925 );
    if ( ( !  eq921 ( (  cursor_dash_movement_dash_type3929 ) , ( CursorMovement_920_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel954 ) ( (  self3923 ) ,  (  sel3927 ) ) );
    } else {
        (*  self3923 ) .f_sel = (  sel3927 );
    }
    return ( Unit_7_Unit );
}

static  size_t   num_dash_bytes958 (    struct StrView_21  self2195 ) {
    return ( ( (  self2195 ) .f_contents ) .f_count );
}

static  size_t   clamp959 (    size_t  x1352 ,    size_t  mn1354 ,    size_t  mx1356 ) {
    if ( (  cmp158 ( (  x1352 ) , (  mn1354 ) ) == 0 ) ) {
        return (  mn1354 );
    } else {
        if ( (  cmp158 ( (  x1352 ) , (  mx1356 ) ) == 2 ) ) {
            return (  mx1356 );
        } else {
            return (  x1352 );
        }
    }
}

static  size_t   sync_dash_char961 (    uint8_t *  p692 ) {
    size_t  i693 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb694 = ( * ( (uint8_t * ) ( ( (void*) (  p692 ) ) + (  op_dash_neg884 ( ( (  size_dash_i64235 ) ( (  i693 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp199 ( (  pb694 ) , (  from_dash_integral186 ( 128 ) ) ) != 0 ) && (  cmp199 ( (  pb694 ) , (  op_dash_add756 ( (  from_dash_integral186 ( 128 ) ) , (  from_dash_integral186 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i693 );
        }
        i693 = (  op_dash_add206 ( (  i693 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char960 (    uint8_t *  p697 ) {
    return (  op_dash_add206 ( ( (  sync_dash_char961 ) ( ( (  offset_dash_ptr303 ) ( (  p697 ) ,  (  op_dash_neg884 ( (  from_dash_integral277 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_20   left_dash_pos957 (    struct TextBuf_78 *  self3643 ,    struct Pos_20  pos3645 ) {
    if ( (  eq293 ( (  pos3645 ) , ( (  mk272 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  from_dash_integral44 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk272 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  from_dash_integral44 ( 0 ) ) ) );
    }
    if ( (  eq294 ( ( (  pos3645 ) .f_bi ) , (  from_dash_integral44 ( 0 ) ) ) ) ) {
        ( (  assert451 ) ( (  cmp291 ( ( (  pos3645 ) .f_line ) , (  from_dash_integral44 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string194 ) ( ( "previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk272 ) ( (  op_dash_sub786 ( ( (  pos3645 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) ,  ( (  size_dash_i32170 ) ( ( (  num_dash_bytes958 ) ( ( (  line925 ) ( (  self3643 ) ,  (  op_dash_sub786 ( ( (  pos3645 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_21  line3646 = ( (  line925 ) ( (  self3643 ) ,  ( (  pos3645 ) .f_line ) ) );
    size_t  pos_dash_bi3647 = ( (  clamp959 ) ( ( (  i32_dash_size236 ) ( ( (  pos3645 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes958 ) ( (  line3646 ) ) ) ) );
    size_t  off3648 = ( (  previous_dash_char960 ) ( ( (  offset_dash_ptr303 ) ( ( ( (  line3646 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  pos_dash_bi3647 ) ) ) ) ) ) );
    return ( (  mk272 ) ( ( (  pos3645 ) .f_line ) ,  ( (  size_dash_i32170 ) ( (  op_dash_sub278 ( (  pos_dash_bi3647 ) , (  off3648 ) ) ) ) ) ) );
}

static  enum Unit_7   move_dash_left918 (    struct Pane_117 *  self3935 ) {
    ( (  set_dash_cursors919 ) ( (  self3935 ) ,  ( (  left_dash_pos957 ) ( ( ( * (  self3935 ) ) .f_buf ) ,  ( ( * (  self3935 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_920_UpdateVI ) ) );
    return ( Unit_7_Unit );
}

static  struct Pane_117 *   pane962 (    struct Editor_116 *  ed4033 ) {
    return ( & ( ( * (  ed4033 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines965 (    struct TextBuf_78 *  self3627 ) {
    return ( (  size_dash_i32170 ) ( ( (  size295 ) ( ( & ( ( * (  self3627 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_20   right_dash_pos964 (    struct TextBuf_78 *  self3635 ,    struct Pos_20  pos3637 ) {
    if ( (  cmp291 ( ( (  pos3637 ) .f_line ) , ( (  num_dash_lines965 ) ( (  self3635 ) ) ) ) != 0 ) ) {
        return ( (  mk272 ) ( ( (  num_dash_lines965 ) ( (  self3635 ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ) );
    }
    struct StrView_21  line3638 = ( (  line925 ) ( (  self3635 ) ,  ( (  pos3637 ) .f_line ) ) );
    int64_t  bi3639 = ( (  i32_dash_i64834 ) ( ( (  pos3637 ) .f_bi ) ) );
    if ( (  cmp883 ( (  bi3639 ) , ( (  size_dash_i64235 ) ( ( (  num_dash_bytes958 ) ( (  line3638 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp291 ( (  op_dash_add248 ( ( (  pos3637 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) , ( (  num_dash_lines965 ) ( (  self3635 ) ) ) ) != 0 ) ) {
            return ( (  mk272 ) ( ( (  pos3637 ) .f_line ) ,  ( (  size_dash_i32170 ) ( ( (  num_dash_bytes958 ) ( (  line3638 ) ) ) ) ) ) );
        }
        return ( (  mk272 ) ( (  op_dash_add248 ( ( (  pos3637 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ) );
    }
    int32_t  off3640 = ( (  size_dash_i32170 ) ( ( (  next_dash_char198 ) ( ( (  offset_dash_ptr303 ) ( ( ( (  line3638 ) .f_contents ) .f_ptr ) ,  (  bi3639 ) ) ) ) ) ) );
    return ( (  mk272 ) ( ( (  pos3637 ) .f_line ) ,  (  op_dash_add248 ( ( (  pos3637 ) .f_bi ) , (  off3640 ) ) ) ) );
}

static  enum Unit_7   move_dash_right963 (    struct Pane_117 *  self3932 ) {
    ( (  set_dash_cursors919 ) ( (  self3932 ) ,  ( (  right_dash_pos964 ) ( ( ( * (  self3932 ) ) .f_buf ) ,  ( ( * (  self3932 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_920_UpdateVI ) ) );
    return ( Unit_7_Unit );
}

static  int32_t   vi_dash_bi967 (    struct TextBuf_78 *  self3824 ,    int32_t  ln3826 ,    int32_t  vx3828 ) {
    int32_t  bi3829 = ( (  from_dash_integral44 ( 0 ) ) );
    int32_t  vi3830 = (  from_dash_integral44 ( 0 ) );
    struct StrViewIter_577  temp968 =  into_dash_iter579 ( ( (  chars582 ) ( ( (  line925 ) ( (  self3824 ) ,  (  ln3826 ) ) ) ) ) );
    while (true) {
        struct Maybe_580  __cond969 =  next581 (&temp968);
        if (  __cond969 .tag == 0 ) {
            break;
        }
        struct Char_53  c3832 =  __cond969 .stuff .Maybe_580_Just_s .field0;
        vi3830 = (  op_dash_add248 ( (  vi3830 ) , ( (  char_dash_screen_dash_width928 ) ( (  c3832 ) ) ) ) );
        if ( (  cmp291 ( (  vx3828 ) , (  vi3830 ) ) == 0 ) ) {
            break;
        }
        bi3829 = (  op_dash_add248 ( (  bi3829 ) , ( (  size_dash_i32170 ) ( ( (  c3832 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi3829 );
}

static  enum Unit_7   move_dash_down966 (    struct Pane_117 *  self3938 ) {
    struct Pos_20  cur3939 = ( ( * (  self3938 ) ) .f_cursor );
    if ( (  cmp291 ( (  op_dash_add248 ( ( (  cur3939 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) , ( (  num_dash_lines965 ) ( ( ( * (  self3938 ) ) .f_buf ) ) ) ) != 0 ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  vci3940 = ( ( * (  self3938 ) ) .f_vi );
    int32_t  bi3941 = ( (  vi_dash_bi967 ) ( ( ( * (  self3938 ) ) .f_buf ) ,  (  op_dash_add248 ( ( (  cur3939 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) ,  (  vci3940 ) ) );
    ( (  set_dash_cursors919 ) ( (  self3938 ) ,  ( (struct Pos_20) { .f_line = (  op_dash_add248 ( ( (  cur3939 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) , .f_bi = (  bi3941 ) } ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_920_NoChanges ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   move_dash_up970 (    struct Pane_117 *  self3944 ) {
    struct Pos_20  cur3945 = ( ( * (  self3944 ) ) .f_cursor );
    if ( (  cmp291 ( ( (  cur3945 ) .f_line ) , (  from_dash_integral44 ( 0 ) ) ) != 2 ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  vci3946 = ( ( * (  self3944 ) ) .f_vi );
    int32_t  bi3947 = ( (  vi_dash_bi967 ) ( ( ( * (  self3944 ) ) .f_buf ) ,  (  op_dash_sub786 ( ( (  cur3945 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) ,  (  vci3946 ) ) );
    ( (  set_dash_cursors919 ) ( (  self3944 ) ,  ( (struct Pos_20) { .f_line = (  op_dash_sub786 ( ( (  cur3945 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) , .f_bi = (  bi3947 ) } ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_920_NoChanges ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   flush_dash_insert_dash_action972 (    struct TextBuf_78 *  self3708 ) {
    (*  self3708 ) .f_actions .f_input_dash_changeset = ( false );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_mode971 (    struct Pane_117 *  self3911 ,    enum Mode_118  mode3913 ) {
    if ( (  eq955 ( (  mode3913 ) , ( Mode_118_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action972 ) ( ( ( * (  self3911 ) ) .f_buf ) ) );
    }
    (*  self3911 ) .f_mode = (  mode3913 );
    return ( Unit_7_Unit );
}

enum MoveDirection_974 {
    MoveDirection_974_MoveFwd,
    MoveDirection_974_MoveBwd,
};

enum MoveTarget_975 {
    MoveTarget_975_NextWordStart,
    MoveTarget_975_NextWordEnd,
};

static  struct Pos_20   own977 (    struct Pos_20  x1251 ) {
    return (  x1251 );
}

struct env978 {
    ;
    struct Pos_20 *  prev3969;
    struct Pane_117 *  pane3964;
    enum MoveDirection_974  dir3966;
    ;
};

static  bool   cursor_dash_is_dash_at_dash_line_dash_end979 (    struct Pane_117 *  pane3950 ) {
    struct Pos_20  cur3951 = ( ( * (  pane3950 ) ) .f_cursor );
    return (  eq213 ( ( (  i32_dash_size236 ) ( ( (  cur3951 ) .f_bi ) ) ) , ( (  num_dash_bytes958 ) ( ( (  line925 ) ( ( ( * (  pane3950 ) ) .f_buf ) ,  ( (  cur3951 ) .f_line ) ) ) ) ) ) );
}

struct envunion981 {
    enum Unit_7  (*fun) (  struct env978*  );
    struct env978 env;
};

static  enum Unit_7   advance982 (   struct env978* env ) {
    (* env->prev3969 ) = ( ( * ( env->pane3964 ) ) .f_cursor );
    enum MoveDirection_974  dref3971 = ( env->dir3966 );
    switch (  dref3971 ) {
        case MoveDirection_974_MoveFwd : {
            ( (  move_dash_right963 ) ( ( env->pane3964 ) ) );
            break;
        }
        case MoveDirection_974_MoveBwd : {
            ( (  move_dash_left918 ) ( ( env->pane3964 ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

enum CharType_986 {
    CharType_986_CharSpace,
    CharType_986_CharWord,
    CharType_986_CharPunctuation,
};

struct Tuple2_987 {
    enum CharType_986  field0;
    enum CharType_986  field1;
};

static struct Tuple2_987 Tuple2_987_Tuple2 (  enum CharType_986  field0 ,  enum CharType_986  field1 ) {
    return ( struct Tuple2_987 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq985 (    enum CharType_986  l3780 ,    enum CharType_986  r3782 ) {
    struct Tuple2_987  dref3783 = ( ( Tuple2_987_Tuple2 ) ( (  l3780 ) ,  (  r3782 ) ) );
    if (  dref3783 .field0 == CharType_986_CharSpace &&  dref3783 .field1 == CharType_986_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3783 .field0 == CharType_986_CharWord &&  dref3783 .field1 == CharType_986_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3783 .field0 == CharType_986_CharPunctuation &&  dref3783 .field1 == CharType_986_CharPunctuation ) {
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

static  struct Char_53   min992 (    struct Char_53  l1236 ,    struct Char_53  r1238 ) {
    if ( (  cmp753 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Char_53   max993 (    struct Char_53  l1315 ,    struct Char_53  r1317 ) {
    if ( (  cmp753 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  bool   between991 (    struct Char_53  c1337 ,    struct Char_53  l1339 ,    struct Char_53  r1341 ) {
    struct Char_53  from1342 = ( (  min992 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Char_53  to1343 = ( (  max993 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp753 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp753 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_alpha990 (    struct Char_53  c2388 ) {
    return ( ( (  cmp158 ( ( (  c2388 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between991 ) ( (  c2388 ) ,  ( (  from_dash_charlike195 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between991 ) ( (  c2388 ) ,  ( (  from_dash_charlike195 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_digit994 (    struct Char_53  c2391 ) {
    return ( (  eq213 ( ( (  c2391 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between991 ) ( (  c2391 ) ,  ( (  from_dash_charlike195 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric989 (    struct Char_53  c2394 ) {
    return ( ( (  is_dash_alpha990 ) ( (  c2394 ) ) ) || ( (  is_dash_digit994 ) ( (  c2394 ) ) ) );
}

static  bool   is_dash_whitespace995 (    struct Char_53  c2379 ) {
    return ( ( (  eq377 ( (  c2379 ) , ( (  from_dash_charlike195 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq377 ( (  c2379 ) , ( (  from_dash_charlike195 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq377 ( (  c2379 ) , ( (  from_dash_charlike195 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_986   char_dash_type988 (    struct Char_53  c3786 ) {
    if ( ( ( ( (  is_dash_alphanumeric989 ) ( (  c3786 ) ) ) || (  eq377 ( (  c3786 ) , ( (  from_dash_charlike195 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq377 ( (  c3786 ) , ( (  from_dash_charlike195 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_986_CharWord );
    } else {
        if ( ( (  is_dash_whitespace995 ) ( (  c3786 ) ) ) ) {
            return ( CharType_986_CharSpace );
        } else {
            return ( CharType_986_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary984 (    struct Char_53  l3789 ,    struct Char_53  r3791 ) {
    return ( !  eq985 ( ( (  char_dash_type988 ) ( (  l3789 ) ) ) , ( (  char_dash_type988 ) ( (  r3791 ) ) ) ) );
}

static  struct Char_53   or_dash_else997 (    struct Maybe_580  self1732 ,    struct Char_53  alt1734 ) {
    struct Maybe_580  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_580_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_580_Just_t ) {
            return ( dref1735 .stuff .Maybe_580_Just_s .field0 );
        }
    }
}

static  struct Maybe_580   head998 (    struct StrViewIter_577  it1142 ) {
    struct StrViewIter_577  temp999 = ( (  into_dash_iter579 ) ( (  it1142 ) ) );
    return ( (  next581 ) ( ( &temp999 ) ) );
}

static  struct Char_53   char_dash_at996 (    struct Pane_117 *  pane3844 ,    struct Pos_20  pos3846 ) {
    struct StrView_21  line3847 = ( (  line925 ) ( ( ( * (  pane3844 ) ) .f_buf ) ,  ( (  pos3846 ) .f_line ) ) );
    return ( (  or_dash_else997 ) ( ( (  head998 ) ( ( (  chars582 ) ( ( (  byte_dash_substr359 ) ( (  line3847 ) ,  ( (  i32_dash_size236 ) ( ( (  pos3846 ) .f_bi ) ) ) ,  ( (  num_dash_bytes958 ) ( (  line3847 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
}

static  enum Unit_7   print1001 (    struct StrView_21  s1701 ) {
    ( (  for_dash_each576 ) ( ( (  chars582 ) ( (  s1701 ) ) ) ,  (  printf_dash_char178 ) ) );
    return ( Unit_7_Unit );
}

static  bool   undefined1002 (  ) {
    bool  temp1003;
    return (  temp1003 );
}

static  bool   todo1000 (  ) {
    ( (  print1001 ) ( ( (  from_dash_string194 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( (  undefined1002 ) ( ) );
}

static  bool   reached_dash_target983 (    struct Pane_117 *  pane3956 ,    enum MoveTarget_975  target3958 ,    struct Pos_20  prev3960 ) {
    return ( {  enum MoveTarget_975  dref3961 = (  target3958 ) ;  dref3961 == MoveTarget_975_NextWordStart ? ( ( (  is_dash_word_dash_boundary984 ) ( ( (  char_dash_at996 ) ( (  pane3956 ) ,  (  prev3960 ) ) ) ,  ( (  char_dash_at996 ) ( (  pane3956 ) ,  ( ( * (  pane3956 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq985 ( ( (  char_dash_type988 ) ( ( (  char_dash_at996 ) ( (  pane3956 ) ,  ( ( * (  pane3956 ) ) .f_cursor ) ) ) ) ) , ( CharType_986_CharSpace ) ) ) ) ) :  dref3961 == MoveTarget_975_NextWordEnd ? ( ( (  is_dash_word_dash_boundary984 ) ( ( (  char_dash_at996 ) ( (  pane3956 ) ,  (  prev3960 ) ) ) ,  ( (  char_dash_at996 ) ( (  pane3956 ) ,  ( ( * (  pane3956 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq985 ( ( (  char_dash_type988 ) ( ( (  char_dash_at996 ) ( (  pane3956 ) ,  (  prev3960 ) ) ) ) ) , ( CharType_986_CharSpace ) ) ) ) ) : ( (  todo1000 ) ( ) ) ; } );
}

struct envunion1005 {
    enum Unit_7  (*fun) (  struct env978*  );
    struct env978 env;
};

struct envunion1007 {
    enum Unit_7  (*fun) (  struct env978*  );
    struct env978 env;
};

static  enum Unit_7   advance_dash_word973 (    struct Pane_117 *  pane3964 ,    enum MoveDirection_974  dir3966 ,    enum MoveTarget_975  target3968 ) {
    struct Pos_20  temp976 = ( (  own977 ) ( ( ( * (  pane3964 ) ) .f_cursor ) ) );
    struct Pos_20 *  prev3969 = ( &temp976 );
    struct env978 envinst978 = {
        .prev3969 =  prev3969 ,
        .pane3964 =  pane3964 ,
        .dir3966 =  dir3966 ,
    };
    struct Pos_20  sel3972 = ( ( * (  pane3964 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end3973 = ( (  cursor_dash_is_dash_at_dash_line_dash_end979 ) ( (  pane3964 ) ) );
    struct envunion981  temp980 = ( (struct envunion981){ .fun = (  enum Unit_7  (*) (  struct env978*  ) )advance982 , .env =  envinst978 } );
    ( temp980.fun ( &temp980.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end3973 ) || ( (  reached_dash_target983 ) ( (  pane3964 ) ,  (  target3968 ) ,  ( * (  prev3969 ) ) ) ) ) ) {
        sel3972 = ( ( * (  pane3964 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end979 ) ( (  pane3964 ) ) ) ) {
        if ( (  eq293 ( ( ( * (  pane3964 ) ) .f_cursor ) , ( * (  prev3969 ) ) ) ) ) {
            return ( Unit_7_Unit );
        }
        struct envunion1005  temp1004 = ( (struct envunion1005){ .fun = (  enum Unit_7  (*) (  struct env978*  ) )advance982 , .env =  envinst978 } );
        ( temp1004.fun ( &temp1004.env ) );
        sel3972 = ( ( * (  pane3964 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1007  temp1006 = ( (struct envunion1007){ .fun = (  enum Unit_7  (*) (  struct env978*  ) )advance982 , .env =  envinst978 } );
        ( temp1006.fun ( &temp1006.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end979 ) ( (  pane3964 ) ) ) || ( (  reached_dash_target983 ) ( (  pane3964 ) ,  (  target3968 ) ,  ( * (  prev3969 ) ) ) ) ) ) {
            enum MoveDirection_974  dref3974 = (  dir3966 );
            switch (  dref3974 ) {
                case MoveDirection_974_MoveFwd : {
                    ( (  move_dash_left918 ) ( (  pane3964 ) ) );
                    break;
                }
                case MoveDirection_974_MoveBwd : {
                    ( (  move_dash_right963 ) ( (  pane3964 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq293 ( ( * (  prev3969 ) ) , ( ( * (  pane3964 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel954 ) ( (  pane3964 ) ,  ( ( Maybe_28_Just ) ( (  sel3972 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  size_t   size1012 (    struct List_24 *  l2133 ) {
    return ( ( * (  l2133 ) ) .f_count );
}

static  struct Changeset_26 *   offset_dash_ptr1017 (    struct Changeset_26 *  x338 ,    int64_t  count340 ) {
    struct Changeset_26  temp1018;
    return ( (struct Changeset_26 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul204 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1018 ) ) ) ) ) ) ) ) );
}

static  struct Changeset_26 *   get_dash_ptr1016 (    struct Slice_25  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp158 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic226 ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string194 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_26 *  elem_dash_ptr1760 = ( (  offset_dash_ptr1017 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  struct Changeset_26 *   get_dash_ptr1015 (    struct List_24 *  list2001 ,    size_t  i2003 ) {
    if ( ( (  cmp158 ( (  i2003 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i2003 ) , ( ( * (  list2001 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic226 ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2003 ) ) ) ,  ( (  from_dash_string194 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2001 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1016 ) ( ( ( * (  list2001 ) ) .f_elements ) ,  (  i2003 ) ) );
}

static  struct Changeset_26   get1014 (    struct List_24 *  list2011 ,    size_t  i2013 ) {
    return ( * ( (  get_dash_ptr1015 ) ( (  list2011 ) ,  (  i2013 ) ) ) );
}

static  struct Changeset_26   elem_dash_get1013 (    struct List_24  self2081 ,    size_t  k2083 ) {
    return ( (  get1014 ) ( ( & (  self2081 ) ) ,  (  k2083 ) ) );
}

struct SliceIter_1021 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1021   into_dash_iter1023 (    struct Slice_18  self1822 ) {
    return ( (struct SliceIter_1021) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_19 *   offset_dash_ptr1025 (    struct Action_19 *  x338 ,    int64_t  count340 ) {
    struct Action_19  temp1026;
    return ( (struct Action_19 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul204 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1026 ) ) ) ) ) ) ) ) );
}

static  struct Slice_18   subslice1024 (    struct Slice_18  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Action_19 *  begin_dash_ptr1787 = ( (  offset_dash_ptr1025 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp158 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp158 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub278 ( ( (  min305 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_1021   into_dash_iter1022 (    struct List_17  self2028 ) {
    return ( (  into_dash_iter1023 ) ( ( (  subslice1024 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

struct Maybe_1028 {
    enum {
        Maybe_1028_None_t,
        Maybe_1028_Just_t,
    } tag;
    union {
        struct {
            struct Action_19  field0;
        } Maybe_1028_Just_s;
    } stuff;
};

static struct Maybe_1028 Maybe_1028_Just (  struct Action_19  field0 ) {
    return ( struct Maybe_1028 ) { .tag = Maybe_1028_Just_t, .stuff = { .Maybe_1028_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1028   next1029 (    struct SliceIter_1021 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp158 ( (  op_dash_add206 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1028) { .tag = Maybe_1028_None_t } );
    }
    struct Action_19  elem1830 = ( * ( (  offset_dash_ptr1025 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add206 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1028_Just ) ( (  elem1830 ) ) );
}

static  struct Pos_20   action_dash_fwd1031 (   struct env86* env ,    struct TextBuf_78 *  self3691 ,    struct Action_19  action3693 ) {
    struct envunion87  temp1032 = ( (struct envunion87){ .fun = (  enum Unit_7  (*) (  struct env76*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action288 , .env =  env->envinst76 } );
    ( temp1032.fun ( &temp1032.env ,  (  self3691 ) ,  ( (  action3693 ) .f_from ) ,  ( (  action3693 ) .f_to_dash_bwd ) ,  ( (  action3693 ) .f_fwd ) ) );
    return ( (  action3693 ) .f_to_dash_fwd );
}

static  enum Unit_7   panic1034 (    struct StrView_21  errmsg1712 ) {
    ( (  print_dash_str452 ) ( ( ( StrConcat_453_StrConcat ) ( ( ( StrConcat_454_StrConcat ) ( ( (  from_dash_string194 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Action_19   undefined1038 (  ) {
    struct Action_19  temp1039;
    return (  temp1039 );
}

static  struct Action_19   or_dash_fail1037 (    struct Maybe_1028  x1725 ,    struct StrConcat_227  errmsg1727 ) {
    struct Maybe_1028  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_1028_None_t ) {
        ( (  panic226 ) ( (  errmsg1727 ) ) );
        return ( (  undefined1038 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_1028_Just_t ) {
            return ( dref1728 .stuff .Maybe_1028_Just_s .field0 );
        }
    }
}

static  struct Maybe_1028   try_dash_get1040 (    struct Slice_18  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp158 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1028) { .tag = Maybe_1028_None_t } );
    }
    struct Action_19 *  elem_dash_ptr1766 = ( (  offset_dash_ptr1025 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_1028_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  struct Action_19   get1036 (    struct Slice_18  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail1037 ) ( ( (  try_dash_get1040 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string194 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_19   elem_dash_get1035 (    struct Slice_18  self1867 ,    size_t  idx1869 ) {
    return ( (  get1036 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

static  struct Action_19   last1033 (    struct Slice_18  s1935 ) {
    if ( (  eq213 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1034 ) ( ( (  from_dash_string194 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1035 ( (  s1935 ) , (  op_dash_sub278 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_18   to_dash_slice1041 (    struct List_17  l2126 ) {
    struct Action_19 *  ptr2127 = ( ( (  l2126 ) .f_elements ) .f_ptr );
    return ( (struct Slice_18) { .f_ptr = (  ptr2127 ) , .f_count = ( (  l2126 ) .f_count ) } );
}

static  struct Maybe_101   redo1011 (   struct env90* env ,    struct TextBuf_78 *  self3718 ) {
    ( (  flush_dash_insert_dash_action972 ) ( (  self3718 ) ) );
    struct Actions_79 *  actions3719 = ( & ( ( * (  self3718 ) ) .f_actions ) );
    if ( (  cmp158 ( ( ( * (  actions3719 ) ) .f_cur ) , ( (  size1012 ) ( ( & ( ( * (  actions3719 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_101) { .tag = Maybe_101_None_t } );
    }
    struct Changeset_26  changeset3720 = (  elem_dash_get1013 ( ( ( * (  actions3719 ) ) .f_list ) , ( ( * (  actions3719 ) ) .f_cur ) ) );
    struct Pos_20  temp1019;
    struct Pos_20  to_dash_fwd3721 = (  temp1019 );
    struct SliceIter_1021  temp1020 =  into_dash_iter1022 ( ( (  changeset3720 ) .f_parts ) );
    while (true) {
        struct Maybe_1028  __cond1027 =  next1029 (&temp1020);
        if (  __cond1027 .tag == 0 ) {
            break;
        }
        struct Action_19  action3723 =  __cond1027 .stuff .Maybe_1028_Just_s .field0;
        struct envunion91  temp1030 = ( (struct envunion91){ .fun = (  struct Pos_20  (*) (  struct env86*  ,    struct TextBuf_78 *  ,    struct Action_19  ) )action_dash_fwd1031 , .env =  env->envinst86 } );
        to_dash_fwd3721 = ( temp1030.fun ( &temp1030.env ,  (  self3718 ) ,  (  action3723 ) ) );
    }
    (*  actions3719 ) .f_cur = (  op_dash_add206 ( ( ( * (  actions3719 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_19  last_dash_action3724 = ( (  last1033 ) ( ( (  to_dash_slice1041 ) ( ( (  changeset3720 ) .f_parts ) ) ) ) );
    if ( (  cmp158 ( ( (  num_dash_bytes958 ) ( ( (  last_dash_action3724 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_20  to_dash_fwd3725 = ( (  left_dash_pos957 ) ( (  self3718 ) ,  (  to_dash_fwd3721 ) ) );
        return ( ( Maybe_101_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3725 ) , .f_sel = ( ( Maybe_28_Just ) ( ( (  last_dash_action3724 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_101_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3721 ) , .f_sel = ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) } ) ) );
    }
}

struct env1043 {
    struct Pane_117 *  self4003;
    ;
};

struct envunion1044 {
    enum Unit_7  (*fun) (  struct env1043*  ,    struct Cursors_27  );
    struct env1043 env;
};

static  enum Unit_7   if_dash_just1042 (    struct Maybe_101  x1291 ,   struct envunion1044  fun1293 ) {
    struct Maybe_101  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_101_Just_t ) {
        struct envunion1044  temp1045 = (  fun1293 );
        ( temp1045.fun ( &temp1045.env ,  ( dref1294 .stuff .Maybe_101_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_101_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1046 (   struct env1043* env ,    struct Cursors_27  cursors4006 ) {
    ( (  set_dash_cursors919 ) ( ( env->self4003 ) ,  ( (  cursors4006 ) .f_cur ) ,  ( (  cursors4006 ) .f_sel ) ,  ( CursorMovement_920_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   redo1009 (   struct env106* env ,    struct Pane_117 *  self4003 ) {
    struct envunion107  temp1010 = ( (struct envunion107){ .fun = (  struct Maybe_101  (*) (  struct env90*  ,    struct TextBuf_78 *  ) )redo1011 , .env =  env->envinst90 } );
    struct Maybe_101  mcursors4004 = ( temp1010.fun ( &temp1010.env ,  ( ( * (  self4003 ) ) .f_buf ) ) );
    struct env1043 envinst1043 = {
        .self4003 =  self4003 ,
    };
    ( (  if_dash_just1042 ) ( (  mcursors4004 ) ,  ( (struct envunion1044){ .fun = (  enum Unit_7  (*) (  struct env1043*  ,    struct Cursors_27  ) )lam1046 , .env =  envinst1043 } ) ) );
    return ( Unit_7_Unit );
}

struct SliceReversedIter_1052 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1052   into_dash_iter1053 (    struct SliceReversedIter_1052  self1898 ) {
    return (  self1898 );
}

static  struct SliceReversedIter_1052   reversed1054 (    struct Slice_18  slice1895 ) {
    return ( (struct SliceReversedIter_1052) { .f_slice = (  slice1895 ) , .f_current_dash_offset = ( (  slice1895 ) .f_count ) } );
}

static  struct Maybe_1028   next1056 (    struct SliceReversedIter_1052 *  self1901 ) {
    size_t  off1902 = ( ( * (  self1901 ) ) .f_current_dash_offset );
    if ( (  eq213 ( (  off1902 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1028) { .tag = Maybe_1028_None_t } );
    }
    (*  self1901 ) .f_current_dash_offset = (  op_dash_sub278 ( (  off1902 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1028_Just ) ( (  elem_dash_get1035 ( ( ( * (  self1901 ) ) .f_slice ) , ( ( * (  self1901 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_20   action_dash_bwd1058 (   struct env84* env ,    struct TextBuf_78 *  self3686 ,    struct Action_19  action3688 ) {
    struct envunion85  temp1059 = ( (struct envunion85){ .fun = (  enum Unit_7  (*) (  struct env76*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action288 , .env =  env->envinst76 } );
    ( temp1059.fun ( &temp1059.env ,  (  self3686 ) ,  ( (  action3688 ) .f_from ) ,  ( (  action3688 ) .f_to_dash_fwd ) ,  ( (  action3688 ) .f_bwd ) ) );
    return ( (  action3688 ) .f_to_dash_bwd );
}

static  struct Maybe_101   undo1050 (   struct env88* env ,    struct TextBuf_78 *  self3711 ) {
    ( (  flush_dash_insert_dash_action972 ) ( (  self3711 ) ) );
    struct Actions_79 *  actions3712 = ( & ( ( * (  self3711 ) ) .f_actions ) );
    if ( (  eq213 ( ( ( * (  actions3712 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_101) { .tag = Maybe_101_None_t } );
    }
    (*  actions3712 ) .f_cur = (  op_dash_sub278 ( ( ( * (  actions3712 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_26  changeset3713 = (  elem_dash_get1013 ( ( ( * (  actions3712 ) ) .f_list ) , ( ( * (  actions3712 ) ) .f_cur ) ) );
    struct SliceReversedIter_1052  temp1051 =  into_dash_iter1053 ( ( (  reversed1054 ) ( ( (  to_dash_slice1041 ) ( ( (  changeset3713 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1028  __cond1055 =  next1056 (&temp1051);
        if (  __cond1055 .tag == 0 ) {
            break;
        }
        struct Action_19  action3715 =  __cond1055 .stuff .Maybe_1028_Just_s .field0;
        struct envunion89  temp1057 = ( (struct envunion89){ .fun = (  struct Pos_20  (*) (  struct env84*  ,    struct TextBuf_78 *  ,    struct Action_19  ) )action_dash_bwd1058 , .env =  env->envinst84 } );
        ( temp1057.fun ( &temp1057.env ,  (  self3711 ) ,  (  action3715 ) ) );
    }
    return ( ( Maybe_101_Just ) ( ( (  changeset3713 ) .f_before_dash_cursors ) ) );
}

struct env1061 {
    ;
    struct Pane_117 *  self3997;
};

struct envunion1062 {
    enum Unit_7  (*fun) (  struct env1061*  ,    struct Cursors_27  );
    struct env1061 env;
};

static  enum Unit_7   if_dash_just1060 (    struct Maybe_101  x1291 ,   struct envunion1062  fun1293 ) {
    struct Maybe_101  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_101_Just_t ) {
        struct envunion1062  temp1063 = (  fun1293 );
        ( temp1063.fun ( &temp1063.env ,  ( dref1294 .stuff .Maybe_101_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_101_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1064 (   struct env1061* env ,    struct Cursors_27  cursors4000 ) {
    ( (  set_dash_cursors919 ) ( ( env->self3997 ) ,  ( (  cursors4000 ) .f_cur ) ,  ( (  cursors4000 ) .f_sel ) ,  ( CursorMovement_920_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   undo1048 (   struct env104* env ,    struct Pane_117 *  self3997 ) {
    struct envunion105  temp1049 = ( (struct envunion105){ .fun = (  struct Maybe_101  (*) (  struct env88*  ,    struct TextBuf_78 *  ) )undo1050 , .env =  env->envinst88 } );
    struct Maybe_101  mcursors3998 = ( temp1049.fun ( &temp1049.env ,  ( ( * (  self3997 ) ) .f_buf ) ) );
    struct env1061 envinst1061 = {
        .self3997 =  self3997 ,
    };
    ( (  if_dash_just1060 ) ( (  mcursors3998 ) ,  ( (struct envunion1062){ .fun = (  enum Unit_7  (*) (  struct env1061*  ,    struct Cursors_27  ) )lam1064 , .env =  envinst1061 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Tuple2_123   minmax1068 (    struct Pos_20  l1329 ,    struct Pos_20  r1331 ) {
    return ( (  cmp290 ( (  l1329 ) , (  r1331 ) ) == 0 ) ? ( ( Tuple2_123_Tuple2 ) ( (  l1329 ) ,  (  r1331 ) ) ) : ( ( Tuple2_123_Tuple2 ) ( (  r1331 ) ,  (  l1329 ) ) ) );
}

static  struct Pos_20   or_dash_else1069 (    struct Maybe_28  self1732 ,    struct Pos_20  alt1734 ) {
    struct Maybe_28  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_28_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_28_Just_t ) {
            return ( dref1735 .stuff .Maybe_28_Just_s .field0 );
        }
    }
}

static  struct Pos_20   fst1070 (    struct Tuple2_123  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_20   snd1071 (    struct Tuple2_123  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tuple2_123   selection1067 (    struct Pane_117 *  self4009 ) {
    struct Tuple2_123  from_dash_to4010 = ( (  minmax1068 ) ( ( (  or_dash_else1069 ) ( ( ( * (  self4009 ) ) .f_sel ) ,  ( ( * (  self4009 ) ) .f_cursor ) ) ) ,  ( ( * (  self4009 ) ) .f_cursor ) ) );
    struct Pos_20  from4011 = ( (  fst1070 ) ( (  from_dash_to4010 ) ) );
    struct Pos_20  to4012 = ( (  right_dash_pos964 ) ( ( ( * (  self4009 ) ) .f_buf ) ,  ( (  snd1071 ) ( (  from_dash_to4010 ) ) ) ) );
    return ( ( Tuple2_123_Tuple2 ) ( (  from4011 ) ,  (  to4012 ) ) );
}

static  struct StrView_21   clone_dash_01075 (    struct StrView_21  s2155 ,    enum CAllocator_9  al2157 ) {
    size_t  cnt2158 = ( ( (  s2155 ) .f_contents ) .f_count );
    struct Slice_12  nus2159 = ( (  allocate327 ) ( (  al2157 ) ,  (  op_dash_add206 ( (  cnt2158 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to426 ) ( ( (  s2155 ) .f_contents ) ,  (  nus2159 ) ) );
    ( (  set336 ) ( (  nus2159 ) ,  (  cnt2158 ) ,  ( (  char_dash_u8358 ) ( ( (  from_dash_charlike195 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = ( (  nus2159 ) .f_ptr ) , .f_count = (  cnt2158 ) } ) } );
}

static  struct StrView_21   clone1074 (    struct StrView_21  s2162 ,    enum CAllocator_9  al2164 ) {
    return ( (  clone_dash_01075 ) ( (  s2162 ) ,  (  al2164 ) ) );
}

struct envunion1079 {
    enum Unit_7  (*fun) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env36 env;
};

static  struct StrView_21   from_dash_charlike1080 (    uint8_t *  ptr77 ,    size_t  count79 ) {
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = (  ptr77 ) , .f_count = (  count79 ) } ) } );
}

struct envunion1084 {
    enum Unit_7  (*fun) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env36 env;
};

struct envunion1086 {
    enum Unit_7  (*fun) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env36 env;
};

struct envunion1088 {
    enum Unit_7  (*fun) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env36 env;
};

static  struct StrView_21   str_dash_between1073 (   struct env92* env ,    struct TextBuf_78 *  self3728 ,    struct Pos_20  from3730 ,    struct Pos_20  to3732 ) {
    enum CAllocator_9  al3733 = ( ( ( * (  self3728 ) ) .f_buf ) .f_al );
    if ( (  eq294 ( ( (  from3730 ) .f_line ) , ( (  to3732 ) .f_line ) ) ) ) {
        size_t  from_dash_bi3734 = ( (  i32_dash_size236 ) ( ( (  min443 ) ( ( (  from3730 ) .f_bi ) ,  ( (  to3732 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3735 = ( (  i32_dash_size236 ) ( ( (  max938 ) ( ( (  from3730 ) .f_bi ) ,  ( (  to3732 ) .f_bi ) ) ) ) );
        return ( (  clone1074 ) ( ( (  byte_dash_substr359 ) ( ( (  line925 ) ( (  self3728 ) ,  ( (  from3730 ) .f_line ) ) ) ,  (  from_dash_bi3734 ) ,  (  to_dash_bi3735 ) ) ) ,  (  al3733 ) ) );
    } else {
        struct Pos_20  from_dash_pos3736 = ( (  min289 ) ( (  from3730 ) ,  (  to3732 ) ) );
        struct Pos_20  to_dash_pos3737 = ( (  max292 ) ( (  from3730 ) ,  (  to3732 ) ) );
        struct List_11  temp1076 = ( (  mk257 ) ( (  al3733 ) ) );
        struct List_11 *  sb3738 = ( &temp1076 );
        struct StrView_21  first_dash_line3739 = ( (  line925 ) ( (  self3728 ) ,  ( (  from_dash_pos3736 ) .f_line ) ) );
        struct envunion93  temp1077 = ( (struct envunion93){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all312 , .env =  env->envinst36 } );
        ( temp1077.fun ( &temp1077.env ,  (  sb3738 ) ,  ( ( (  byte_dash_substr359 ) ( (  first_dash_line3739 ) ,  ( (  i32_dash_size236 ) ( ( (  from_dash_pos3736 ) .f_bi ) ) ) ,  ( (  num_dash_bytes958 ) ( (  first_dash_line3739 ) ) ) ) ) .f_contents ) ) );
        struct envunion1079  temp1078 = ( (struct envunion1079){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all312 , .env =  env->envinst36 } );
        ( temp1078.fun ( &temp1078.env ,  (  sb3738 ) ,  ( ( ( (  from_dash_charlike1080 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_663  temp1081 =  into_dash_iter665 ( ( (  to668 ) ( (  op_dash_add248 ( ( (  from_dash_pos3736 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) ,  (  op_dash_sub786 ( ( (  to_dash_pos3737 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_246  __cond1082 =  next666 (&temp1081);
            if (  __cond1082 .tag == 0 ) {
                break;
            }
            int32_t  i3741 =  __cond1082 .stuff .Maybe_246_Just_s .field0;
            struct envunion1084  temp1083 = ( (struct envunion1084){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all312 , .env =  env->envinst36 } );
            ( temp1083.fun ( &temp1083.env ,  (  sb3738 ) ,  ( ( (  line925 ) ( (  self3728 ) ,  (  i3741 ) ) ) .f_contents ) ) );
            struct envunion1086  temp1085 = ( (struct envunion1086){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all312 , .env =  env->envinst36 } );
            ( temp1085.fun ( &temp1085.env ,  (  sb3738 ) ,  ( ( ( (  from_dash_charlike1080 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1088  temp1087 = ( (struct envunion1088){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all312 , .env =  env->envinst36 } );
        ( temp1087.fun ( &temp1087.env ,  (  sb3738 ) ,  ( ( (  byte_dash_substr359 ) ( ( (  line925 ) ( (  self3728 ) ,  ( (  to_dash_pos3737 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size236 ) ( ( (  to_dash_pos3737 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes926 ) ( ( (  to_dash_slice306 ) ( ( * (  sb3738 ) ) ) ) ) );
    }
}

struct env1090 {
    struct Editor_116 *  ed4036;
    ;
};

struct envunion1091 {
    enum Unit_7  (*fun) (  struct env1090*  ,    struct StrView_21  );
    struct env1090 env;
};

static  enum Unit_7   if_dash_just1089 (    struct Maybe_120  x1291 ,   struct envunion1091  fun1293 ) {
    struct Maybe_120  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_120_Just_t ) {
        struct envunion1091  temp1092 = (  fun1293 );
        ( temp1092.fun ( &temp1092.env ,  ( dref1294 .stuff .Maybe_120_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_120_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1093 (   struct env1090* env ,    struct StrView_21  cp4040 ) {
    ( (  free912 ) ( (  cp4040 ) ,  ( ( * ( env->ed4036 ) ) .f_al ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   copy_dash_selection_dash_to_dash_clipboard1066 (   struct env110* env ,    struct Editor_116 *  ed4036 ) {
    struct Tuple2_123  from_dash_to4037 = ( (  selection1067 ) ( ( (  pane962 ) ( (  ed4036 ) ) ) ) );
    struct envunion111  temp1072 = ( (struct envunion111){ .fun = (  struct StrView_21  (*) (  struct env92*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct Pos_20  ) )str_dash_between1073 , .env =  env->envinst92 } );
    struct StrView_21  cpd4038 = ( temp1072.fun ( &temp1072.env ,  ( ( ( * (  ed4036 ) ) .f_pane ) .f_buf ) ,  ( (  fst1070 ) ( (  from_dash_to4037 ) ) ) ,  ( (  snd1071 ) ( (  from_dash_to4037 ) ) ) ) );
    struct env1090 envinst1090 = {
        .ed4036 =  ed4036 ,
    };
    ( (  if_dash_just1089 ) ( ( ( * (  ed4036 ) ) .f_clipboard ) ,  ( (struct envunion1091){ .fun = (  enum Unit_7  (*) (  struct env1090*  ,    struct StrView_21  ) )lam1093 , .env =  envinst1090 } ) ) );
    (*  ed4036 ) .f_clipboard = ( ( Maybe_120_Just ) ( (  cpd4038 ) ) );
    return ( Unit_7_Unit );
}

struct SliceIter_1101 {
    struct Slice_25  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1100 {
    struct SliceIter_1101  field0;
    size_t  field1;
};

static struct Drop_1100 Drop_1100_Drop (  struct SliceIter_1101  field0 ,  size_t  field1 ) {
    return ( struct Drop_1100 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1100   into_dash_iter1102 (    struct Drop_1100  self845 ) {
    return (  self845 );
}

static  struct SliceIter_1101   into_dash_iter1105 (    struct Slice_25  self1822 ) {
    return ( (struct SliceIter_1101) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Slice_25   subslice1106 (    struct Slice_25  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Changeset_26 *  begin_dash_ptr1787 = ( (  offset_dash_ptr1017 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp158 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp158 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_25) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub278 ( ( (  min305 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_25) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_1101   into_dash_iter1104 (    struct List_24  self2028 ) {
    return ( (  into_dash_iter1105 ) ( ( (  subslice1106 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

static  struct Drop_1100   drop1103 (    struct List_24  iterable852 ,    size_t  i854 ) {
    struct SliceIter_1101  it855 = ( (  into_dash_iter1104 ) ( (  iterable852 ) ) );
    return ( ( Drop_1100_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

struct Maybe_1108 {
    enum {
        Maybe_1108_None_t,
        Maybe_1108_Just_t,
    } tag;
    union {
        struct {
            struct Changeset_26  field0;
        } Maybe_1108_Just_s;
    } stuff;
};

static struct Maybe_1108 Maybe_1108_Just (  struct Changeset_26  field0 ) {
    return ( struct Maybe_1108 ) { .tag = Maybe_1108_Just_t, .stuff = { .Maybe_1108_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1108   next1110 (    struct SliceIter_1101 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp158 ( (  op_dash_add206 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1108) { .tag = Maybe_1108_None_t } );
    }
    struct Changeset_26  elem1830 = ( * ( (  offset_dash_ptr1017 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add206 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1108_Just ) ( (  elem1830 ) ) );
}

static  struct Maybe_1108   next1109 (    struct Drop_1100 *  dref847 ) {
    while ( (  cmp158 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1110 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub278 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1110 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

struct env1113 {
    enum CAllocator_9  al3600;
    ;
};

struct envunion1114 {
    enum Unit_7  (*fun) (  struct env1113*  ,    struct Action_19  );
    struct env1113 env;
};

static  enum Unit_7   for_dash_each1112 (    struct List_17  iterable1074 ,   struct envunion1114  fun1076 ) {
    struct SliceIter_1021  temp1115 = ( (  into_dash_iter1022 ) ( (  iterable1074 ) ) );
    struct SliceIter_1021 *  it1077 = ( &temp1115 );
    while ( ( true ) ) {
        struct Maybe_1028  dref1078 = ( (  next1029 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1028_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1028_Just_t ) {
                struct envunion1114  temp1116 = (  fun1076 );
                ( temp1116.fun ( &temp1116.env ,  ( dref1078 .stuff .Maybe_1028_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_action1118 (    struct Action_19  action3593 ,    enum CAllocator_9  al3595 ) {
    ( (  free912 ) ( ( (  action3593 ) .f_fwd ) ,  (  al3595 ) ) );
    ( (  free912 ) ( ( (  action3593 ) .f_bwd ) ,  (  al3595 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1117 (   struct env1113* env ,    struct Action_19  a3602 ) {
    return ( (  free_dash_action1118 ) ( (  a3602 ) ,  ( env->al3600 ) ) );
}

static  void *   cast_dash_ptr1121 (    struct Action_19 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free1120 (    enum CAllocator_9  dref1959 ,    struct Slice_18  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1121 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free1119 (    struct List_17 *  list2035 ) {
    ( (  free1120 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( ( * (  list2035 ) ) .f_elements ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_changeset1111 (    struct Changeset_26  chs3598 ,    enum CAllocator_9  al3600 ) {
    struct env1113 envinst1113 = {
        .al3600 =  al3600 ,
    };
    ( (  for_dash_each1112 ) ( ( (  chs3598 ) .f_parts ) ,  ( (struct envunion1114){ .fun = (  enum Unit_7  (*) (  struct env1113*  ,    struct Action_19  ) )lam1117 , .env =  envinst1113 } ) ) );
    ( (  free1119 ) ( ( & ( (  chs3598 ) .f_parts ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   trim1122 (    struct List_24 *  l2115 ,    size_t  new_dash_count2117 ) {
    (*  l2115 ) .f_count = ( (  min305 ) ( (  new_dash_count2117 ) ,  ( ( * (  l2115 ) ) .f_count ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   trim_dash_actions1098 (    struct Actions_79 *  actions3609 ) {
    enum CAllocator_9  al3610 = ( ( ( * (  actions3609 ) ) .f_list ) .f_al );
    size_t  cur3611 = ( ( * (  actions3609 ) ) .f_cur );
    struct Drop_1100  temp1099 =  into_dash_iter1102 ( ( (  drop1103 ) ( ( ( * (  actions3609 ) ) .f_list ) ,  (  cur3611 ) ) ) );
    while (true) {
        struct Maybe_1108  __cond1107 =  next1109 (&temp1099);
        if (  __cond1107 .tag == 0 ) {
            break;
        }
        struct Changeset_26  action3613 =  __cond1107 .stuff .Maybe_1108_Just_s .field0;
        ( (  free_dash_changeset1111 ) ( (  action3613 ) ,  (  al3610 ) ) );
    }
    ( (  trim1122 ) ( ( & ( ( * (  actions3609 ) ) .f_list ) ) ,  (  cur3611 ) ) );
    return ( Unit_7_Unit );
}

static  struct Maybe_120   head1124 (    struct SplitIter_366  it1142 ) {
    struct SplitIter_366  temp1125 = ( (  into_dash_iter373 ) ( (  it1142 ) ) );
    return ( (  next387 ) ( ( &temp1125 ) ) );
}

static  struct Maybe_120   head1127 (    struct Drop_365  it1142 ) {
    struct Drop_365  temp1128 = ( (  into_dash_iter371 ) ( (  it1142 ) ) );
    return ( (  next386 ) ( ( &temp1128 ) ) );
}

static  bool   null1126 (    struct Drop_365  it1151 ) {
    struct Maybe_120  dref1152 = ( (  head1127 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_120_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Tuple2_384   undefined1130 (  ) {
    struct Tuple2_384  temp1131;
    return (  temp1131 );
}

static  struct Tuple2_384   or_dash_fail1129 (    struct Maybe_383  x1725 ,    struct StrView_21  errmsg1727 ) {
    struct Maybe_383  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_383_None_t ) {
        ( (  panic1034 ) ( (  errmsg1727 ) ) );
        return ( (  undefined1130 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_383_Just_t ) {
            return ( dref1728 .stuff .Maybe_383_Just_s .field0 );
        }
    }
}

static  struct Maybe_383   reduce1133 (    struct Zip_364  iterable1093 ,    struct Maybe_383  base1095 ,    struct Maybe_383 (*  fun1097 )(    struct Tuple2_384  ,    struct Maybe_383  ) ) {
    struct Maybe_383  x1098 = (  base1095 );
    struct Zip_364  it1099 = ( (  into_dash_iter369 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_383  dref1100 = ( (  next385 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_383_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_383_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_383_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1134 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1134);
    exit ( 1 );
    ( Unit_7_Unit );
    struct Maybe_383  temp1135;
    return (  temp1135 );
}

static  struct Maybe_383   lam1136 (    struct Tuple2_384  e1147 ,    struct Maybe_383  dref1148 ) {
    return ( ( Maybe_383_Just ) ( (  e1147 ) ) );
}

static  struct Maybe_383   last1132 (    struct Zip_364  it1145 ) {
    return ( (  reduce1133 ) ( (  it1145 ) ,  ( (struct Maybe_383) { .tag = Maybe_383_None_t } ) ,  (  lam1136 ) ) );
}

static  int32_t   snd1137 (    struct Tuple2_384  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct StrView_21   fst1138 (    struct Tuple2_384  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_20   pos_dash_after_dash_str1123 (    struct TextBuf_78 *  self3696 ,    struct StrView_21  bytes3698 ,    struct Pos_20  from3700 ) {
    struct SplitIter_366  lines3701 = ( (  split_dash_by_dash_each374 ) ( (  bytes3698 ) ,  ( (  from_dash_charlike195 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_21  first_dash_line3702 = ( (  or_dash_else349 ) ( ( (  head1124 ) ( (  lines3701 ) ) ) ,  ( (  from_dash_string194 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_365  headless3703 = ( (  drop372 ) ( (  lines3701 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1126 ) ( (  headless3703 ) ) ) ) {
        struct Pos_20  next_dash_pos3704 = ( (  mk272 ) ( ( (  from3700 ) .f_line ) ,  (  op_dash_add248 ( ( (  from3700 ) .f_bi ) , ( (  size_dash_i32170 ) ( ( (  num_dash_bytes958 ) ( (  first_dash_line3702 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3704 );
    } else {
        struct Tuple2_384  last_dash_line3705 = ( (  or_dash_fail1129 ) ( ( (  last1132 ) ( ( (  zip370 ) ( (  headless3703 ) ,  ( (  from253 ) ( (  op_dash_add248 ( ( (  from3700 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string194 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk272 ) ( ( (  snd1137 ) ( (  last_dash_line3705 ) ) ) ,  ( (  size_dash_i32170 ) ( ( (  num_dash_bytes958 ) ( ( (  fst1138 ) ( (  last_dash_line3705 ) ) ) ) ) ) ) ) );
    }
}

static  bool   is_dash_none1140 (    struct Maybe_101  m1264 ) {
    struct Maybe_101  dref1265 = (  m1264 );
    if ( dref1265.tag == Maybe_101_None_t ) {
        return ( true );
    }
    else {
        if ( dref1265.tag == Maybe_101_Just_t ) {
            return ( false );
        }
    }
}

static  struct Changeset_26 *   last_dash_ptr1141 (    struct Slice_25  s1938 ) {
    if ( (  eq213 ( ( (  s1938 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1034 ) ( ( (  from_dash_string194 ) ( ( "(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1016 ) ( (  s1938 ) ,  (  op_dash_sub278 ( ( (  s1938 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_25   to_dash_slice1142 (    struct List_24  l2126 ) {
    struct Changeset_26 *  ptr2127 = ( ( (  l2126 ) .f_elements ) .f_ptr );
    return ( (struct Slice_25) { .f_ptr = (  ptr2127 ) , .f_count = ( (  l2126 ) .f_count ) } );
}

struct TypeSize_1149 {
    size_t  f_size;
};

static  struct TypeSize_1149   get_dash_typesize1148 (  ) {
    struct Action_19  temp1150;
    return ( (struct TypeSize_1149) { .f_size = ( sizeof( ( (  temp1150 ) ) ) ) } );
}

static  struct Action_19 *   cast_dash_ptr1151 (    void *  p359 ) {
    return ( (struct Action_19 * ) (  p359 ) );
}

static  struct Slice_18   allocate1147 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize1148 ) ( ) ) ) .f_size );
    struct Action_19 *  ptr1957 = ( (  cast_dash_ptr1151 ) ( ( ( malloc ) ( (  op_dash_mul219 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_18) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env1152 {
    struct Slice_18  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_1154 {
    struct Action_19  field0;
    int32_t  field1;
};

static struct Tuple2_1154 Tuple2_1154_Tuple2 (  struct Action_19  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1154 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1153 {
    enum Unit_7  (*fun) (  struct env1152*  ,    struct Tuple2_1154  );
    struct env1152 env;
};

static  struct Action_19 *   get_dash_ptr1157 (    struct Slice_18  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp158 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic226 ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string194 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_19 *  elem_dash_ptr1760 = ( (  offset_dash_ptr1025 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set1156 (    struct Slice_18  slice1774 ,    size_t  i1776 ,    struct Action_19  x1778 ) {
    struct Action_19 *  ep1779 = ( (  get_dash_ptr1157 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1155 (   struct env1152* env ,    struct Tuple2_1154  dref2043 ) {
    return ( (  set1156 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size236 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct Zip_1159 {
    struct SliceIter_1021  f_left_dash_it;
    struct FromIter_240  f_right_dash_it;
};

static  struct Zip_1159   into_dash_iter1161 (    struct Zip_1159  self911 ) {
    return (  self911 );
}

struct Maybe_1162 {
    enum {
        Maybe_1162_None_t,
        Maybe_1162_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1154  field0;
        } Maybe_1162_Just_s;
    } stuff;
};

static struct Maybe_1162 Maybe_1162_Just (  struct Tuple2_1154  field0 ) {
    return ( struct Maybe_1162 ) { .tag = Maybe_1162_Just_t, .stuff = { .Maybe_1162_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1162   next1163 (    struct Zip_1159 *  self914 ) {
    struct Zip_1159  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1028  dref916 = ( (  next1029 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1028_None_t ) {
            return ( (struct Maybe_1162) { .tag = Maybe_1162_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1028_Just_t ) {
                struct Maybe_246  dref918 = ( (  next247 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_246_None_t ) {
                    return ( (struct Maybe_1162) { .tag = Maybe_1162_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_246_Just_t ) {
                        ( (  next1029 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next247 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1162_Just ) ( ( ( Tuple2_1154_Tuple2 ) ( ( dref916 .stuff .Maybe_1028_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_246_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each1158 (    struct Zip_1159  iterable1074 ,   struct envunion1153  fun1076 ) {
    struct Zip_1159  temp1160 = ( (  into_dash_iter1161 ) ( (  iterable1074 ) ) );
    struct Zip_1159 *  it1077 = ( &temp1160 );
    while ( ( true ) ) {
        struct Maybe_1162  dref1078 = ( (  next1163 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1162_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1162_Just_t ) {
                struct envunion1153  temp1164 = (  fun1076 );
                ( temp1164.fun ( &temp1164.env ,  ( dref1078 .stuff .Maybe_1162_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_1159   zip1165 (    struct Slice_18  left922 ,    struct FromIter_240  right924 ) {
    struct SliceIter_1021  left_dash_it925 = ( (  into_dash_iter1023 ) ( (  left922 ) ) );
    struct FromIter_240  right_dash_it926 = ( (  into_dash_iter252 ) ( (  right924 ) ) );
    return ( (struct Zip_1159) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   grow_dash_if_dash_full1146 (   struct env3* env ,    struct List_17 *  list2041 ) {
    if ( (  eq213 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate1147 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq213 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_18  new_dash_slice2042 = ( (  allocate1147 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul219 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env1152 envinst1152 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion1153  fun2046 = ( (struct envunion1153){ .fun = (  enum Unit_7  (*) (  struct env1152*  ,    struct Tuple2_1154  ) )lam1155 , .env =  envinst1152 } );
            ( (  for_dash_each1158 ) ( ( (  zip1165 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from253 ) ( (  from_dash_integral44 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free1120 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add1144 (   struct env15* env ,    struct List_17 *  list2049 ,    struct Action_19  elem2051 ) {
    struct envunion16  temp1145 = ( (struct envunion16){ .fun = (  enum Unit_7  (*) (  struct env3*  ,    struct List_17 *  ) )grow_dash_if_dash_full1146 , .env =  env->envinst3 } );
    ( temp1145.fun ( &temp1145.env ,  (  list2049 ) ) );
    ( (  set1156 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add206 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  void *   cast_dash_ptr1172 (    struct Action_19 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1173 (    struct Action_19 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Action_19 *   zeroed1170 (  ) {
    struct Action_19 *  temp1171;
    struct Action_19 *  x570 = (  temp1171 );
    ( ( memset ) ( ( (  cast_dash_ptr1172 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of1173 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Action_19 *   null_dash_ptr1169 (  ) {
    return ( (  zeroed1170 ) ( ) );
}

static  struct Slice_18   empty1168 (  ) {
    return ( (struct Slice_18) { .f_ptr = ( (  null_dash_ptr1169 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_17   mk1167 (    enum CAllocator_9  al2031 ) {
    struct Slice_18  elements2032 = ( (  empty1168 ) ( ) );
    return ( (struct List_17) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_27   or_dash_else1174 (    struct Maybe_101  self1732 ,    struct Cursors_27  alt1734 ) {
    struct Maybe_101  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_101_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_101_Just_t ) {
            return ( dref1735 .stuff .Maybe_101_Just_s .field0 );
        }
    }
}

struct envunion1176 {
    enum Unit_7  (*fun) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  );
    struct env15 env;
};

struct TypeSize_1183 {
    size_t  f_size;
};

static  struct TypeSize_1183   get_dash_typesize1182 (  ) {
    struct Changeset_26  temp1184;
    return ( (struct TypeSize_1183) { .f_size = ( sizeof( ( (  temp1184 ) ) ) ) } );
}

static  struct Changeset_26 *   cast_dash_ptr1185 (    void *  p359 ) {
    return ( (struct Changeset_26 * ) (  p359 ) );
}

static  struct Slice_25   allocate1181 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize1182 ) ( ) ) ) .f_size );
    struct Changeset_26 *  ptr1957 = ( (  cast_dash_ptr1185 ) ( ( ( malloc ) ( (  op_dash_mul219 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_25) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env1186 {
    struct Slice_25  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_1188 {
    struct Changeset_26  field0;
    int32_t  field1;
};

static struct Tuple2_1188 Tuple2_1188_Tuple2 (  struct Changeset_26  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1188 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1187 {
    enum Unit_7  (*fun) (  struct env1186*  ,    struct Tuple2_1188  );
    struct env1186 env;
};

static  enum Unit_7   set1190 (    struct Slice_25  slice1774 ,    size_t  i1776 ,    struct Changeset_26  x1778 ) {
    struct Changeset_26 *  ep1779 = ( (  get_dash_ptr1016 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1189 (   struct env1186* env ,    struct Tuple2_1188  dref2043 ) {
    return ( (  set1190 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size236 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct Zip_1192 {
    struct SliceIter_1101  f_left_dash_it;
    struct FromIter_240  f_right_dash_it;
};

static  struct Zip_1192   into_dash_iter1194 (    struct Zip_1192  self911 ) {
    return (  self911 );
}

struct Maybe_1195 {
    enum {
        Maybe_1195_None_t,
        Maybe_1195_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1188  field0;
        } Maybe_1195_Just_s;
    } stuff;
};

static struct Maybe_1195 Maybe_1195_Just (  struct Tuple2_1188  field0 ) {
    return ( struct Maybe_1195 ) { .tag = Maybe_1195_Just_t, .stuff = { .Maybe_1195_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1195   next1196 (    struct Zip_1192 *  self914 ) {
    struct Zip_1192  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1108  dref916 = ( (  next1110 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1108_None_t ) {
            return ( (struct Maybe_1195) { .tag = Maybe_1195_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1108_Just_t ) {
                struct Maybe_246  dref918 = ( (  next247 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_246_None_t ) {
                    return ( (struct Maybe_1195) { .tag = Maybe_1195_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_246_Just_t ) {
                        ( (  next1110 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next247 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1195_Just ) ( ( ( Tuple2_1188_Tuple2 ) ( ( dref916 .stuff .Maybe_1108_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_246_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each1191 (    struct Zip_1192  iterable1074 ,   struct envunion1187  fun1076 ) {
    struct Zip_1192  temp1193 = ( (  into_dash_iter1194 ) ( (  iterable1074 ) ) );
    struct Zip_1192 *  it1077 = ( &temp1193 );
    while ( ( true ) ) {
        struct Maybe_1195  dref1078 = ( (  next1196 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1195_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1195_Just_t ) {
                struct envunion1187  temp1197 = (  fun1076 );
                ( temp1197.fun ( &temp1197.env ,  ( dref1078 .stuff .Maybe_1195_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_1192   zip1198 (    struct Slice_25  left922 ,    struct FromIter_240  right924 ) {
    struct SliceIter_1101  left_dash_it925 = ( (  into_dash_iter1105 ) ( (  left922 ) ) );
    struct FromIter_240  right_dash_it926 = ( (  into_dash_iter252 ) ( (  right924 ) ) );
    return ( (struct Zip_1192) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr1200 (    struct Changeset_26 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free1199 (    enum CAllocator_9  dref1959 ,    struct Slice_25  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1200 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   grow_dash_if_dash_full1180 (   struct env4* env ,    struct List_24 *  list2041 ) {
    if ( (  eq213 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate1181 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq213 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_25  new_dash_slice2042 = ( (  allocate1181 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul219 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env1186 envinst1186 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion1187  fun2046 = ( (struct envunion1187){ .fun = (  enum Unit_7  (*) (  struct env1186*  ,    struct Tuple2_1188  ) )lam1189 , .env =  envinst1186 } );
            ( (  for_dash_each1191 ) ( ( (  zip1198 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from253 ) ( (  from_dash_integral44 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free1199 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add1178 (   struct env22* env ,    struct List_24 *  list2049 ,    struct Changeset_26  elem2051 ) {
    struct envunion23  temp1179 = ( (struct envunion23){ .fun = (  enum Unit_7  (*) (  struct env4*  ,    struct List_24 *  ) )grow_dash_if_dash_full1180 , .env =  env->envinst4 } );
    ( temp1179.fun ( &temp1179.env ,  (  list2049 ) ) );
    ( (  set1190 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add206 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Maybe_101   change1097 (   struct env94* env ,    struct TextBuf_78 *  self3758 ,    struct Pos_20  from3760 ,    struct Pos_20  to3762 ,    struct StrView_21  bytes3764 ,    struct Maybe_101  before_dash_cursors3766 ) {
    struct Pos_20  from_dash_pos3767 = ( (  min289 ) ( (  from3760 ) ,  (  to3762 ) ) );
    struct Pos_20  to_dash_pos3768 = ( (  max292 ) ( (  from3760 ) ,  (  to3762 ) ) );
    struct Actions_79 *  actions3769 = ( & ( ( * (  self3758 ) ) .f_actions ) );
    ( (  trim_dash_actions1098 ) ( (  actions3769 ) ) );
    struct envunion95  temp1139 = ( (struct envunion95){ .fun = (  struct StrView_21  (*) (  struct env92*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct Pos_20  ) )str_dash_between1073 , .env =  env->envinst92 } );
    struct Action_19  action3770 = ( (struct Action_19) { .f_from = (  from3760 ) , .f_fwd = ( (  clone1074 ) ( (  bytes3764 ) ,  ( ( * (  self3758 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1123 ) ( (  self3758 ) ,  (  bytes3764 ) ,  (  from_dash_pos3767 ) ) ) , .f_bwd = ( temp1139.fun ( &temp1139.env ,  (  self3758 ) ,  (  from_dash_pos3767 ) ,  (  to_dash_pos3768 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3768 ) } );
    enum CAllocator_9  al3771 = ( ( ( * (  actions3769 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in3772 = ( (  is_dash_none1140 ) ( (  before_dash_cursors3766 ) ) );
    if ( ( ( ( ( * (  self3758 ) ) .f_actions ) .f_input_dash_changeset ) && (  is_dash_typed_dash_in3772 ) ) ) {
        struct Changeset_26 *  last_dash_changeset3773 = ( (  last_dash_ptr1141 ) ( ( (  to_dash_slice1142 ) ( ( ( * (  actions3769 ) ) .f_list ) ) ) ) );
        struct envunion97  temp1143 = ( (struct envunion97){ .fun = (  enum Unit_7  (*) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  ) )add1144 , .env =  env->envinst15 } );
        ( temp1143.fun ( &temp1143.env ,  ( & ( ( * (  last_dash_changeset3773 ) ) .f_parts ) ) ,  (  action3770 ) ) );
    } else {
        struct Changeset_26  temp1166 = ( (struct Changeset_26) { .f_parts = ( (  mk1167 ) ( (  al3771 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1174 ) ( (  before_dash_cursors3766 ) ,  ( (struct Cursors_27) { .f_cur = (  from3760 ) , .f_sel = ( (  eq293 ( (  from3760 ) , (  to3762 ) ) ) ? ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) : ( ( Maybe_28_Just ) ( (  to3762 ) ) ) ) } ) ) ) } );
        struct Changeset_26 *  changeset3774 = ( &temp1166 );
        struct envunion1176  temp1175 = ( (struct envunion1176){ .fun = (  enum Unit_7  (*) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  ) )add1144 , .env =  env->envinst15 } );
        ( temp1175.fun ( &temp1175.env ,  ( & ( ( * (  changeset3774 ) ) .f_parts ) ) ,  (  action3770 ) ) );
        struct envunion98  temp1177 = ( (struct envunion98){ .fun = (  enum Unit_7  (*) (  struct env22*  ,    struct List_24 *  ,    struct Changeset_26  ) )add1178 , .env =  env->envinst22 } );
        ( temp1177.fun ( &temp1177.env ,  ( & ( ( * (  actions3769 ) ) .f_list ) ) ,  ( * (  changeset3774 ) ) ) );
        (*  actions3769 ) .f_input_dash_changeset = (  is_dash_typed_dash_in3772 );
        (*  actions3769 ) .f_cur = (  op_dash_add206 ( ( ( * (  actions3769 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion96  temp1201 = ( (struct envunion96){ .fun = (  struct Pos_20  (*) (  struct env86*  ,    struct TextBuf_78 *  ,    struct Action_19  ) )action_dash_fwd1031 , .env =  env->envinst86 } );
    struct Pos_20  to_dash_fwd3775 = ( temp1201.fun ( &temp1201.env ,  (  self3758 ) ,  (  action3770 ) ) );
    if ( (  cmp158 ( ( (  num_dash_bytes958 ) ( ( (  action3770 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_20  to_dash_fwd3776 = ( (  left_dash_pos957 ) ( (  self3758 ) ,  (  to_dash_fwd3775 ) ) );
        return ( ( Maybe_101_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3776 ) , .f_sel = ( ( Maybe_28_Just ) ( ( (  action3770 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_101_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3775 ) , .f_sel = ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) } ) ) );
    }
}

struct env1203 {
    ;
    struct Pane_117 *  self4015;
};

struct envunion1204 {
    enum Unit_7  (*fun) (  struct env1203*  ,    struct Cursors_27  );
    struct env1203 env;
};

static  enum Unit_7   if_dash_just1202 (    struct Maybe_101  x1291 ,   struct envunion1204  fun1293 ) {
    struct Maybe_101  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_101_Just_t ) {
        struct envunion1204  temp1205 = (  fun1293 );
        ( temp1205.fun ( &temp1205.env ,  ( dref1294 .stuff .Maybe_101_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_101_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1206 (   struct env1203* env ,    struct Cursors_27  cursors4022 ) {
    ( (  set_dash_cursors919 ) ( ( env->self4015 ) ,  ( (  cursors4022 ) .f_cur ) ,  ( (  cursors4022 ) .f_sel ) ,  ( CursorMovement_920_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   replace_dash_selection1095 (   struct env108* env ,    struct Pane_117 *  self4015 ,    struct Tuple2_123  pos_prime_s4017 ,    struct StrView_21  cp4019 ) {
    struct envunion109  temp1096 = ( (struct envunion109){ .fun = (  struct Maybe_101  (*) (  struct env94*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_101  ) )change1097 , .env =  env->envinst94 } );
    struct Maybe_101  mcursors4020 = ( temp1096.fun ( &temp1096.env ,  ( ( * (  self4015 ) ) .f_buf ) ,  ( (  fst1070 ) ( (  pos_prime_s4017 ) ) ) ,  ( (  snd1071 ) ( (  pos_prime_s4017 ) ) ) ,  (  cp4019 ) ,  ( ( Maybe_101_Just ) ( ( (struct Cursors_27) { .f_cur = ( ( * (  self4015 ) ) .f_cursor ) , .f_sel = ( ( * (  self4015 ) ) .f_sel ) } ) ) ) ) );
    struct env1203 envinst1203 = {
        .self4015 =  self4015 ,
    };
    ( (  if_dash_just1202 ) ( (  mcursors4020 ) ,  ( (struct envunion1204){ .fun = (  enum Unit_7  (*) (  struct env1203*  ,    struct Cursors_27  ) )lam1206 , .env =  envinst1203 } ) ) );
    return ( Unit_7_Unit );
}

struct envunion1208 {
    enum Unit_7  (*fun) (  struct env110*  ,    struct Editor_116 *  );
    struct env110 env;
};

struct envunion1210 {
    enum Unit_7  (*fun) (  struct env108*  ,    struct Pane_117 *  ,    struct Tuple2_123  ,    struct StrView_21  );
    struct env108 env;
};

struct envunion1212 {
    enum Unit_7  (*fun) (  struct env110*  ,    struct Editor_116 *  );
    struct env110 env;
};

static  struct StrBuilder_50   mk1218 (    enum CAllocator_9  al2781 ) {
    return ( (struct StrBuilder_50) { .f_chars = ( (  mk257 ) ( (  al2781 ) ) ) } );
}

struct IntStrIter_1224 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1223 {
    struct StrViewIter_577  f_left;
    struct IntStrIter_1224  f_right;
};

struct StrConcatIter_1222 {
    struct StrConcatIter_1223  f_left;
    struct StrViewIter_577  f_right;
};

struct env1225 {
    struct env48 envinst48;
    struct StrBuilder_50 *  builder2749;
};

struct envunion1226 {
    enum Unit_7  (*fun) (  struct env1225*  ,    struct Char_53  );
    struct env1225 env;
};

static  struct StrConcatIter_1222   into_dash_iter1228 (    struct StrConcatIter_1222  self1491 ) {
    return (  self1491 );
}

struct env1234 {
    ;
    size_t  base1210;
};

struct envunion1235 {
    size_t  (*fun) (  struct env1234*  ,    int32_t  ,    size_t  );
    struct env1234 env;
};

static  size_t   reduce1233 (    struct Range_660  iterable1093 ,    size_t  base1095 ,   struct envunion1235  fun1097 ) {
    size_t  x1098 = (  base1095 );
    struct RangeIter_663  it1099 = ( (  into_dash_iter665 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1100 = ( (  next666 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_246_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_246_Just_t ) {
                struct envunion1235  temp1236 = (  fun1097 );
                x1098 = ( temp1236.fun ( &temp1236.env ,  ( dref1100 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1237 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1237);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1238;
    return (  temp1238 );
}

static  size_t   lam1239 (   struct env1234* env ,    int32_t  item1214 ,    size_t  x1216 ) {
    return (  op_dash_mul219 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  size_t   pow1232 (    size_t  base1210 ,    int32_t  p1212 ) {
    struct env1234 envinst1234 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1233 ) ( ( (  to668 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  op_dash_sub786 ( (  p1212 ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1235){ .fun = (  size_t  (*) (  struct env1234*  ,    int32_t  ,    size_t  ) )lam1239 , .env =  envinst1234 } ) ) );
}

static  uint8_t   cast1240 (    size_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_580   next1231 (    struct IntStrIter_1224 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_580_Just ) ( ( (  from_dash_charlike195 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp291 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_580) { .tag = Maybe_580_None_t } );
    }
    size_t  trim_dash_down1423 = ( (  pow1232 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub786 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 1 ) ) ) ) ) );
    size_t  upper1424 = (  op_dash_div185 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    size_t  upper_dash_mask1425 = (  op_dash_mul219 ( (  op_dash_div185 ( (  upper1424 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1240 ) ( (  op_dash_sub278 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub786 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 1 ) ) ) );
    struct Char_53  digit_dash_char1427 = ( (  from_dash_u8866 ) ( (  op_dash_add756 ( (  digit1426 ) , (  from_dash_integral186 ( 48 ) ) ) ) ) );
    return ( ( Maybe_580_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_580   next1230 (    struct StrConcatIter_1223 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next581 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next1231 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1229 (    struct StrConcatIter_1222 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1230 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next581 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each1221 (    struct StrConcatIter_1222  iterable1074 ,   struct envunion1226  fun1076 ) {
    struct StrConcatIter_1222  temp1227 = ( (  into_dash_iter1228 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1222 *  it1077 = ( &temp1227 );
    while ( ( true ) ) {
        struct Maybe_580  dref1078 = ( (  next1229 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_580_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_580_Just_t ) {
                struct envunion1226  temp1241 = (  fun1076 );
                ( temp1241.fun ( &temp1241.env ,  ( dref1078 .stuff .Maybe_580_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  int32_t   count_dash_digits1248 (    size_t  self1430 ) {
    if ( (  eq213 ( (  self1430 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral44 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral44 ( 0 ) );
    while ( (  cmp158 ( (  self1430 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div185 ( (  self1430 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1431 = (  op_dash_add248 ( (  digits1431 ) , (  from_dash_integral44 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1224   uint_dash_iter1247 (    size_t  int1437 ) {
    return ( (struct IntStrIter_1224) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1248 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1224   chars1246 (    size_t  self1467 ) {
    return ( (  uint_dash_iter1247 ) ( (  self1467 ) ) );
}

static  struct StrConcatIter_1223   into_dash_iter1245 (    struct StrConcat_58  dref1498 ) {
    return ( (struct StrConcatIter_1223) { .f_left = ( (  chars582 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1246 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1223   chars1244 (    struct StrConcat_58  self1509 ) {
    return ( (  into_dash_iter1245 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1222   into_dash_iter1243 (    struct StrConcat_57  dref1498 ) {
    return ( (struct StrConcatIter_1222) { .f_left = ( (  chars1244 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars582 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1222   chars1242 (    struct StrConcat_57  self1509 ) {
    return ( (  into_dash_iter1243 ) ( (  self1509 ) ) );
}

static  enum Unit_7   write_dash_slice1253 (   struct env46* env ,    struct StrBuilder_50 *  builder2739 ,    struct Slice_12  s2741 ) {
    struct envunion47  temp1254 = ( (struct envunion47){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all312 , .env =  env->envinst36 } );
    ( temp1254.fun ( &temp1254.env ,  ( & ( ( * (  builder2739 ) ) .f_chars ) ) ,  (  s2741 ) ) );
    return ( Unit_7_Unit );
}

static  struct Slice_12   from_dash_char1255 (    struct Char_53  c1941 ,    uint8_t *  buf1943 ) {
    struct CharDestructured_179  dref1944 = ( (  destructure181 ) ( (  c1941 ) ) );
    if ( dref1944.tag == CharDestructured_179_Ref_t ) {
        return ( (struct Slice_12) { .f_ptr = ( ( dref1944 .stuff .CharDestructured_179_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1944 .stuff .CharDestructured_179_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1944.tag == CharDestructured_179_Scalar_t ) {
            if ( (  cmp189 ( ( ( dref1944 .stuff .CharDestructured_179_Scalar_s .field0 ) .f_value ) , (  from_dash_integral190 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1256 = ( (  from_dash_string45 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp1256);
                exit ( 1 );
                ( Unit_7_Unit );
            }
            (*  buf1943 ) = ( (  u32_dash_u8192 ) ( ( ( dref1944 .stuff .CharDestructured_179_Scalar_s .field0 ) .f_value ) ) );
            return ( (struct Slice_12) { .f_ptr = (  buf1943 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_7   write_dash_char1251 (   struct env48* env ,    struct StrBuilder_50 *  builder2744 ,    struct Char_53  c2746 ) {
    struct envunion49  temp1252 = ( (struct envunion49){ .fun = (  enum Unit_7  (*) (  struct env46*  ,    struct StrBuilder_50 *  ,    struct Slice_12  ) )write_dash_slice1253 , .env =  env->envinst46 } );
    uint8_t  temp1258;
    uint8_t  temp1257 = (  temp1258 );
    ( temp1252.fun ( &temp1252.env ,  (  builder2744 ) ,  ( (  from_dash_char1255 ) ( (  c2746 ) ,  ( &temp1257 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1249 (   struct env1225* env ,    struct Char_53  c2753 ) {
    struct envunion52  temp1250 = ( (struct envunion52){ .fun = (  enum Unit_7  (*) (  struct env48*  ,    struct StrBuilder_50 *  ,    struct Char_53  ) )write_dash_char1251 , .env =  env->envinst48 } );
    return ( temp1250.fun ( &temp1250.env ,  ( env->builder2749 ) ,  (  c2753 ) ) );
}

static  enum Unit_7   write1220 (   struct env51* env ,    struct StrBuilder_50 *  builder2749 ,    struct StrConcat_57  s2751 ) {
    struct env1225 envinst1225 = {
        .envinst48 = env->envinst48 ,
        .builder2749 =  builder2749 ,
    };
    ( (  for_dash_each1221 ) ( ( (  chars1242 ) ( (  s2751 ) ) ) ,  ( (struct envunion1226){ .fun = (  enum Unit_7  (*) (  struct env1225*  ,    struct Char_53  ) )lam1249 , .env =  envinst1225 } ) ) );
    return ( Unit_7_Unit );
}

static  uint8_t *   cast_dash_ptr1262 (    uint8_t *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_12   cast_dash_slice1261 (    struct Slice_12  s1932 ) {
    return ( (struct Slice_12) { .f_ptr = ( (  cast_dash_ptr1262 ) ( ( (  s1932 ) .f_ptr ) ) ) , .f_count = ( (  s1932 ) .f_count ) } );
}

static  struct StrView_21   as_dash_str1260 (    struct StrBuilder_50 *  builder2787 ) {
    return ( (struct StrView_21) { .f_contents = ( (  cast_dash_slice1261 ) ( ( (  subslice302 ) ( ( ( ( * (  builder2787 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2787 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_21   mk_dash_dyn_dash_str1216 (   struct env54* env ,    struct StrConcat_57  s2807 ,    enum CAllocator_9  al2809 ) {
    struct StrBuilder_50  temp1217 = ( (  mk1218 ) ( (  al2809 ) ) );
    struct StrBuilder_50 *  sb2810 = ( &temp1217 );
    struct envunion56  temp1219 = ( (struct envunion56){ .fun = (  enum Unit_7  (*) (  struct env51*  ,    struct StrBuilder_50 *  ,    struct StrConcat_57  ) )write1220 , .env =  env->envinst51 } );
    ( temp1219.fun ( &temp1219.env ,  (  sb2810 ) ,  (  s2807 ) ) );
    struct envunion55  temp1259 = ( (struct envunion55){ .fun = (  enum Unit_7  (*) (  struct env48*  ,    struct StrBuilder_50 *  ,    struct Char_53  ) )write_dash_char1251 , .env =  env->envinst48 } );
    ( temp1259.fun ( &temp1259.env ,  (  sb2810 ) ,  ( (  nullchar502 ) ( ) ) ) );
    struct StrView_21  dynstr2811 = ( (  as_dash_str1260 ) ( (  sb2810 ) ) );
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = ( ( (  dynstr2811 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub278 ( ( ( (  dynstr2811 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_7   set_dash_msg1214 (   struct env112* env ,    struct Editor_116 *  ed4055 ,    struct StrConcat_57  s4057 ) {
    ( (  reset_dash_msg906 ) ( (  ed4055 ) ) );
    struct envunion113  temp1215 = ( (struct envunion113){ .fun = (  struct StrView_21  (*) (  struct env54*  ,    struct StrConcat_57  ,    enum CAllocator_9  ) )mk_dash_dyn_dash_str1216 , .env =  env->envinst54 } );
    (*  ed4055 ) .f_msg = ( ( Maybe_120_Just ) ( ( temp1215.fun ( &temp1215.env ,  (  s4057 ) ,  ( ( * (  ed4055 ) ) .f_al ) ) ) ) );
    return ( Unit_7_Unit );
}

struct envunion1265 {
    enum Unit_7  (*fun) (  struct env108*  ,    struct Pane_117 *  ,    struct Tuple2_123  ,    struct StrView_21  );
    struct env108 env;
};

struct env1264 {
    ;
    struct Editor_116 *  ed4060;
    ;
    ;
    struct env108 envinst108;
};

struct envunion1266 {
    enum Unit_7  (*fun) (  struct env1264*  ,    struct StrView_21  );
    struct env1264 env;
};

static  enum Unit_7   if_dash_just1263 (    struct Maybe_120  x1291 ,   struct envunion1266  fun1293 ) {
    struct Maybe_120  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_120_Just_t ) {
        struct envunion1266  temp1267 = (  fun1293 );
        ( temp1267.fun ( &temp1267.env ,  ( dref1294 .stuff .Maybe_120_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_120_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  struct Pos_20   max_dash_pos1269 (    struct Pane_117 *  pane3982 ) {
    return ( {  struct Maybe_28  dref3983 = ( ( * (  pane3982 ) ) .f_sel ) ; dref3983.tag == Maybe_28_Just_t ? ( (  max292 ) ( ( ( * (  pane3982 ) ) .f_cursor ) ,  ( dref3983 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( ( * (  pane3982 ) ) .f_cursor ) ; } );
}

static  enum Unit_7   lam1268 (   struct env1264* env ,    struct StrView_21  cp4067 ) {
    struct Pos_20  start4068 = ( (  right_dash_pos964 ) ( ( ( ( * ( env->ed4060 ) ) .f_pane ) .f_buf ) ,  ( (  max_dash_pos1269 ) ( ( (  pane962 ) ( ( env->ed4060 ) ) ) ) ) ) );
    struct envunion1265  temp1270 = ( (struct envunion1265){ .fun = (  enum Unit_7  (*) (  struct env108*  ,    struct Pane_117 *  ,    struct Tuple2_123  ,    struct StrView_21  ) )replace_dash_selection1095 , .env =  env->envinst108 } );
    ( temp1270.fun ( &temp1270.env ,  ( (  pane962 ) ( ( env->ed4060 ) ) ) ,  ( ( Tuple2_123_Tuple2 ) ( (  start4068 ) ,  (  start4068 ) ) ) ,  (  cp4067 ) ) );
    return ( Unit_7_Unit );
}

struct envunion1273 {
    enum Unit_7  (*fun) (  struct env108*  ,    struct Pane_117 *  ,    struct Tuple2_123  ,    struct StrView_21  );
    struct env108 env;
};

struct env1272 {
    struct Editor_116 *  ed4060;
    ;
    ;
    struct env108 envinst108;
};

struct envunion1274 {
    enum Unit_7  (*fun) (  struct env1272*  ,    struct StrView_21  );
    struct env1272 env;
};

static  enum Unit_7   if_dash_just1271 (    struct Maybe_120  x1291 ,   struct envunion1274  fun1293 ) {
    struct Maybe_120  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_120_Just_t ) {
        struct envunion1274  temp1275 = (  fun1293 );
        ( temp1275.fun ( &temp1275.env ,  ( dref1294 .stuff .Maybe_120_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_120_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  struct Pos_20   min_dash_pos1277 (    struct Pane_117 *  pane3977 ) {
    return ( {  struct Maybe_28  dref3978 = ( ( * (  pane3977 ) ) .f_sel ) ; dref3978.tag == Maybe_28_Just_t ? ( (  min289 ) ( ( ( * (  pane3977 ) ) .f_cursor ) ,  ( dref3978 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( ( * (  pane3977 ) ) .f_cursor ) ; } );
}

static  enum Unit_7   lam1276 (   struct env1272* env ,    struct StrView_21  cp4070 ) {
    struct Pos_20  start4071 = ( (  min_dash_pos1277 ) ( ( (  pane962 ) ( ( env->ed4060 ) ) ) ) );
    struct envunion1273  temp1278 = ( (struct envunion1273){ .fun = (  enum Unit_7  (*) (  struct env108*  ,    struct Pane_117 *  ,    struct Tuple2_123  ,    struct StrView_21  ) )replace_dash_selection1095 , .env =  env->envinst108 } );
    ( temp1278.fun ( &temp1278.env ,  ( (  pane962 ) ( ( env->ed4060 ) ) ) ,  ( ( Tuple2_123_Tuple2 ) ( (  start4071 ) ,  (  start4071 ) ) ) ,  (  cp4070 ) ) );
    return ( Unit_7_Unit );
}

struct envunion1281 {
    enum Unit_7  (*fun) (  struct env108*  ,    struct Pane_117 *  ,    struct Tuple2_123  ,    struct StrView_21  );
    struct env108 env;
};

struct env1280 {
    struct Editor_116 *  ed4060;
    ;
    ;
    struct env108 envinst108;
};

struct envunion1282 {
    enum Unit_7  (*fun) (  struct env1280*  ,    struct StrView_21  );
    struct env1280 env;
};

static  enum Unit_7   if_dash_just1279 (    struct Maybe_120  x1291 ,   struct envunion1282  fun1293 ) {
    struct Maybe_120  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_120_Just_t ) {
        struct envunion1282  temp1283 = (  fun1293 );
        ( temp1283.fun ( &temp1283.env ,  ( dref1294 .stuff .Maybe_120_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_120_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1284 (   struct env1280* env ,    struct StrView_21  cp4073 ) {
    struct Pos_20  start4074 = ( (  min_dash_pos1277 ) ( ( (  pane962 ) ( ( env->ed4060 ) ) ) ) );
    struct envunion1281  temp1285 = ( (struct envunion1281){ .fun = (  enum Unit_7  (*) (  struct env108*  ,    struct Pane_117 *  ,    struct Tuple2_123  ,    struct StrView_21  ) )replace_dash_selection1095 , .env =  env->envinst108 } );
    ( temp1285.fun ( &temp1285.env ,  ( (  pane962 ) ( ( env->ed4060 ) ) ) ,  ( ( Tuple2_123_Tuple2 ) ( (  start4074 ) ,  (  start4074 ) ) ) ,  (  cp4073 ) ) );
    return ( Unit_7_Unit );
}

static  bool   is_dash_none1286 (    struct Maybe_28  m1264 ) {
    struct Maybe_28  dref1265 = (  m1264 );
    if ( dref1265.tag == Maybe_28_None_t ) {
        return ( true );
    }
    else {
        if ( dref1265.tag == Maybe_28_Just_t ) {
            return ( false );
        }
    }
}

static  enum Unit_7   handle_dash_normal_dash_key917 (   struct env114* env ,    struct Editor_116 *  ed4060 ,    struct Key_131  key4062 ) {
    struct Key_131  dref4063 = (  key4062 );
    if ( dref4063.tag == Key_131_Char_t ) {
        if ( (  eq760 ( ( dref4063 .stuff .Key_131_Char_s .field0 ) , ( (  from_dash_charlike761 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4060 ) .f_running = ( false );
        } else {
            if ( (  eq760 ( ( dref4063 .stuff .Key_131_Char_s .field0 ) , ( (  from_dash_charlike761 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left918 ) ( ( (  pane962 ) ( (  ed4060 ) ) ) ) );
            } else {
                if ( (  eq760 ( ( dref4063 .stuff .Key_131_Char_s .field0 ) , ( (  from_dash_charlike761 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right963 ) ( ( (  pane962 ) ( (  ed4060 ) ) ) ) );
                } else {
                    if ( (  eq760 ( ( dref4063 .stuff .Key_131_Char_s .field0 ) , ( (  from_dash_charlike761 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down966 ) ( ( (  pane962 ) ( (  ed4060 ) ) ) ) );
                    } else {
                        if ( (  eq760 ( ( dref4063 .stuff .Key_131_Char_s .field0 ) , ( (  from_dash_charlike761 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up970 ) ( ( (  pane962 ) ( (  ed4060 ) ) ) ) );
                        } else {
                            if ( (  eq760 ( ( dref4063 .stuff .Key_131_Char_s .field0 ) , ( (  from_dash_charlike761 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode971 ) ( ( (  pane962 ) ( (  ed4060 ) ) ) ,  ( Mode_118_Insert ) ) );
                            } else {
                                if ( (  eq760 ( ( dref4063 .stuff .Key_131_Char_s .field0 ) , ( (  from_dash_charlike761 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  advance_dash_word973 ) ( ( (  pane962 ) ( (  ed4060 ) ) ) ,  ( MoveDirection_974_MoveFwd ) ,  ( MoveTarget_975_NextWordStart ) ) );
                                } else {
                                    if ( (  eq760 ( ( dref4063 .stuff .Key_131_Char_s .field0 ) , ( (  from_dash_charlike761 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  advance_dash_word973 ) ( ( (  pane962 ) ( (  ed4060 ) ) ) ,  ( MoveDirection_974_MoveFwd ) ,  ( MoveTarget_975_NextWordEnd ) ) );
                                    } else {
                                        if ( (  eq760 ( ( dref4063 .stuff .Key_131_Char_s .field0 ) , ( (  from_dash_charlike761 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  advance_dash_word973 ) ( ( (  pane962 ) ( (  ed4060 ) ) ) ,  ( MoveDirection_974_MoveBwd ) ,  ( MoveTarget_975_NextWordEnd ) ) );
                                        } else {
                                            if ( (  eq760 ( ( dref4063 .stuff .Key_131_Char_s .field0 ) , ( (  from_dash_charlike761 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct envunion125  temp1008 = ( (struct envunion125){ .fun = (  enum Unit_7  (*) (  struct env106*  ,    struct Pane_117 *  ) )redo1009 , .env =  env->envinst106 } );
                                                ( temp1008.fun ( &temp1008.env ,  ( (  pane962 ) ( (  ed4060 ) ) ) ) );
                                            } else {
                                                if ( (  eq760 ( ( dref4063 .stuff .Key_131_Char_s .field0 ) , ( (  from_dash_charlike761 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                    struct envunion124  temp1047 = ( (struct envunion124){ .fun = (  enum Unit_7  (*) (  struct env104*  ,    struct Pane_117 *  ) )undo1048 , .env =  env->envinst104 } );
                                                    ( temp1047.fun ( &temp1047.env ,  ( (  pane962 ) ( (  ed4060 ) ) ) ) );
                                                } else {
                                                    if ( (  eq760 ( ( dref4063 .stuff .Key_131_Char_s .field0 ) , ( (  from_dash_charlike761 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                        struct envunion115  temp1065 = ( (struct envunion115){ .fun = (  enum Unit_7  (*) (  struct env110*  ,    struct Editor_116 *  ) )copy_dash_selection_dash_to_dash_clipboard1066 , .env =  env->envinst110 } );
                                                        ( temp1065.fun ( &temp1065.env ,  (  ed4060 ) ) );
                                                        struct envunion122  temp1094 = ( (struct envunion122){ .fun = (  enum Unit_7  (*) (  struct env108*  ,    struct Pane_117 *  ,    struct Tuple2_123  ,    struct StrView_21  ) )replace_dash_selection1095 , .env =  env->envinst108 } );
                                                        ( temp1094.fun ( &temp1094.env ,  ( (  pane962 ) ( (  ed4060 ) ) ) ,  ( (  selection1067 ) ( ( (  pane962 ) ( (  ed4060 ) ) ) ) ) ,  ( (  from_dash_string194 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                        ( (  set_dash_mode971 ) ( ( (  pane962 ) ( (  ed4060 ) ) ) ,  ( Mode_118_Normal ) ) );
                                                    } else {
                                                        if ( (  eq760 ( ( dref4063 .stuff .Key_131_Char_s .field0 ) , ( (  from_dash_charlike761 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                            struct envunion1208  temp1207 = ( (struct envunion1208){ .fun = (  enum Unit_7  (*) (  struct env110*  ,    struct Editor_116 *  ) )copy_dash_selection_dash_to_dash_clipboard1066 , .env =  env->envinst110 } );
                                                            ( temp1207.fun ( &temp1207.env ,  (  ed4060 ) ) );
                                                            struct envunion1210  temp1209 = ( (struct envunion1210){ .fun = (  enum Unit_7  (*) (  struct env108*  ,    struct Pane_117 *  ,    struct Tuple2_123  ,    struct StrView_21  ) )replace_dash_selection1095 , .env =  env->envinst108 } );
                                                            ( temp1209.fun ( &temp1209.env ,  ( (  pane962 ) ( (  ed4060 ) ) ) ,  ( (  selection1067 ) ( ( (  pane962 ) ( (  ed4060 ) ) ) ) ) ,  ( (  from_dash_string194 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                            ( (  set_dash_mode971 ) ( ( (  pane962 ) ( (  ed4060 ) ) ) ,  ( Mode_118_Insert ) ) );
                                                        } else {
                                                            if ( (  eq760 ( ( dref4063 .stuff .Key_131_Char_s .field0 ) , ( (  from_dash_charlike761 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion1212  temp1211 = ( (struct envunion1212){ .fun = (  enum Unit_7  (*) (  struct env110*  ,    struct Editor_116 *  ) )copy_dash_selection_dash_to_dash_clipboard1066 , .env =  env->envinst110 } );
                                                                ( temp1211.fun ( &temp1211.env ,  (  ed4060 ) ) );
                                                                size_t  bytes_dash_yanked4065 = ( (  num_dash_bytes958 ) ( ( (  or_dash_else349 ) ( ( ( * (  ed4060 ) ) .f_clipboard ) ,  ( (  from_dash_string194 ) ( ( "" ) ,  ( 0 ) ) ) ) ) ) );
                                                                struct envunion126  temp1213 = ( (struct envunion126){ .fun = (  enum Unit_7  (*) (  struct env112*  ,    struct Editor_116 *  ,    struct StrConcat_57  ) )set_dash_msg1214 , .env =  env->envinst112 } );
                                                                ( temp1213.fun ( &temp1213.env ,  (  ed4060 ) ,  ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4065 ) ) ) ,  ( (  from_dash_string194 ) ( ( " bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                            } else {
                                                                if ( (  eq760 ( ( dref4063 .stuff .Key_131_Char_s .field0 ) , ( (  from_dash_charlike761 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct env1264 envinst1264 = {
                                                                        .ed4060 =  ed4060 ,
                                                                        .envinst108 = env->envinst108 ,
                                                                    };
                                                                    ( (  if_dash_just1263 ) ( ( ( * (  ed4060 ) ) .f_clipboard ) ,  ( (struct envunion1266){ .fun = (  enum Unit_7  (*) (  struct env1264*  ,    struct StrView_21  ) )lam1268 , .env =  envinst1264 } ) ) );
                                                                } else {
                                                                    if ( (  eq760 ( ( dref4063 .stuff .Key_131_Char_s .field0 ) , ( (  from_dash_charlike761 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct env1272 envinst1272 = {
                                                                            .ed4060 =  ed4060 ,
                                                                            .envinst108 = env->envinst108 ,
                                                                        };
                                                                        ( (  if_dash_just1271 ) ( ( ( * (  ed4060 ) ) .f_clipboard ) ,  ( (struct envunion1274){ .fun = (  enum Unit_7  (*) (  struct env1272*  ,    struct StrView_21  ) )lam1276 , .env =  envinst1272 } ) ) );
                                                                    } else {
                                                                        if ( (  eq760 ( ( dref4063 .stuff .Key_131_Char_s .field0 ) , ( (  from_dash_charlike761 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct env1280 envinst1280 = {
                                                                                .ed4060 =  ed4060 ,
                                                                                .envinst108 = env->envinst108 ,
                                                                            };
                                                                            ( (  if_dash_just1279 ) ( ( ( * (  ed4060 ) ) .f_clipboard ) ,  ( (struct envunion1282){ .fun = (  enum Unit_7  (*) (  struct env1280*  ,    struct StrView_21  ) )lam1284 , .env =  envinst1280 } ) ) );
                                                                        } else {
                                                                            if ( (  eq760 ( ( dref4063 .stuff .Key_131_Char_s .field0 ) , ( (  from_dash_charlike761 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                ( (  set_dash_mode971 ) ( ( (  pane962 ) ( (  ed4060 ) ) ) ,  ( Mode_118_Select ) ) );
                                                                                if ( ( (  is_dash_none1286 ) ( ( ( ( * (  ed4060 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                    (*  ed4060 ) .f_pane .f_sel = ( ( Maybe_28_Just ) ( ( ( ( * (  ed4060 ) ) .f_pane ) .f_cursor ) ) );
                                                                                }
                                                                            } else {
                                                                                if ( (  eq760 ( ( dref4063 .stuff .Key_131_Char_s .field0 ) , ( (  from_dash_charlike761 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    (*  ed4060 ) .f_mode = ( ( EditorMode_121_Cmd ) ( ( (  mk1218 ) ( ( ( * (  ed4060 ) ) .f_al ) ) ) ) );
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
        if ( dref4063.tag == Key_131_Escape_t ) {
            ( (  set_dash_mode971 ) ( ( (  pane962 ) ( (  ed4060 ) ) ) ,  ( Mode_118_Normal ) ) );
        }
        else {
            if ( true ) {
            }
        }
    }
    return ( Unit_7_Unit );
}

struct envunion1288 {
    enum Unit_7  (*fun) (  struct env114*  ,    struct Editor_116 *  ,    struct Key_131  );
    struct env114 env;
};

static  enum Unit_7   add_dash_str_dash_at_dash_char1290 (   struct env99* env ,    struct Pane_117 *  self3987 ,    struct StrView_21  s3989 ) {
    struct Pos_20  cur3990 = ( ( * (  self3987 ) ) .f_cursor );
    struct envunion100  temp1291 = ( (struct envunion100){ .fun = (  struct Maybe_101  (*) (  struct env94*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_101  ) )change1097 , .env =  env->envinst94 } );
    ( temp1291.fun ( &temp1291.env ,  ( ( * (  self3987 ) ) .f_buf ) ,  (  cur3990 ) ,  (  cur3990 ) ,  (  s3989 ) ,  ( (struct Maybe_101) { .tag = Maybe_101_None_t } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   backspace1293 (   struct env102* env ,    struct Pane_117 *  self3993 ) {
    struct Pos_20  prev_dash_cur3994 = ( ( * (  self3993 ) ) .f_cursor );
    ( (  move_dash_left918 ) ( (  self3993 ) ) );
    struct envunion103  temp1294 = ( (struct envunion103){ .fun = (  struct Maybe_101  (*) (  struct env94*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_101  ) )change1097 , .env =  env->envinst94 } );
    ( temp1294.fun ( &temp1294.env ,  ( ( * (  self3993 ) ) .f_buf ) ,  ( ( * (  self3993 ) ) .f_cursor ) ,  (  prev_dash_cur3994 ) ,  ( (  from_dash_string194 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_101) { .tag = Maybe_101_None_t } ) ) );
    return ( Unit_7_Unit );
}

struct Array_1296 {
    char _arr [1];
};

static  char *   cast1297 (    struct Array_1296 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_776   as_dash_slice1295 (    struct Array_1296 *  arr2272 ) {
    return ( (struct Slice_776) { .f_ptr = ( (  cast1297 ) ( (  arr2272 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1296   from_dash_listlike1299 (    struct Array_1296  self330 ) {
    return (  self330 );
}

struct envunion1301 {
    enum Unit_7  (*fun) (  struct env99*  ,    struct Pane_117 *  ,    struct StrView_21  );
    struct env99 env;
};

struct Scanner_1303 {
    struct StrView_21  f_s;
};

static  struct Scanner_1303   mk_dash_from_dash_strview1305 (    struct StrView_21  s3169 ) {
    return ( (struct Scanner_1303) { .f_s = (  s3169 ) } );
}

struct TakeWhile_1310 {
    struct StrViewIter_577  f_it;
    bool (*  f_pred )(    struct Char_53  );
};

struct Map_1309 {
    struct TakeWhile_1310  field0;
    size_t (*  field1 )(    struct Char_53  );
};

static struct Map_1309 Map_1309_Map (  struct TakeWhile_1310  field0 ,  size_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1309 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1309   into_dash_iter1312 (    struct Map_1309  self796 ) {
    return (  self796 );
}

struct Maybe_1313 {
    enum {
        Maybe_1313_None_t,
        Maybe_1313_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_1313_Just_s;
    } stuff;
};

static struct Maybe_1313 Maybe_1313_Just (  size_t  field0 ) {
    return ( struct Maybe_1313 ) { .tag = Maybe_1313_Just_t, .stuff = { .Maybe_1313_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_580   next1315 (    struct TakeWhile_1310 *  self964 ) {
    struct Maybe_580  mx965 = ( (  next581 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_580  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_580_None_t ) {
        return ( (struct Maybe_580) { .tag = Maybe_580_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_580_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_580_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_580_Just ) ( ( dref966 .stuff .Maybe_580_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_580) { .tag = Maybe_580_None_t } );
            }
        }
    }
}

static  struct Maybe_1313   next1314 (    struct Map_1309 *  dref798 ) {
    struct Maybe_580  dref801 = ( (  next1315 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_580_None_t ) {
        return ( (struct Maybe_1313) { .tag = Maybe_1313_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_580_Just_t ) {
            return ( ( Maybe_1313_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_580_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1311 (    struct Map_1309  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1309  it1099 = ( (  into_dash_iter1312 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1313  dref1100 = ( (  next1314 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1313_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1313_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1313_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1316 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1316);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1317;
    return (  temp1317 );
}

static  size_t   lam1318 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add206 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1308 (    struct Map_1309  it1110 ) {
    return ( (  reduce1311 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1318 ) ) );
}

static  struct TakeWhile_1310   into_dash_iter1320 (    struct TakeWhile_1310  self961 ) {
    return (  self961 );
}

static  struct Map_1309   map1319 (    struct TakeWhile_1310  iterable805 ,    size_t (*  fun807 )(    struct Char_53  ) ) {
    struct TakeWhile_1310  it808 = ( (  into_dash_iter1320 ) ( (  iterable805 ) ) );
    return ( ( Map_1309_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1310   take_dash_while1321 (    struct StrViewIter_577  it970 ,    bool (*  pred972 )(    struct Char_53  ) ) {
    return ( (struct TakeWhile_1310) { .f_it = ( (  into_dash_iter579 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1322 (    struct Char_53  c2202 ) {
    return ( (  c2202 ) .f_num_dash_bytes );
}

static  struct StrView_21   take_dash_while1307 (    struct StrView_21  self2198 ,    bool (*  fun2200 )(    struct Char_53  ) ) {
    size_t  bi2203 = ( (  sum1308 ) ( ( (  map1319 ) ( ( (  take_dash_while1321 ) ( ( (  chars582 ) ( (  self2198 ) ) ) ,  (  fun2200 ) ) ) ,  (  lam1322 ) ) ) ) );
    return ( (  byte_dash_substr359 ) ( (  self2198 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2203 ) ) );
}

static  struct StrView_21   byte_dash_substr_dash_from1323 (    struct StrView_21  s2190 ,    size_t  from2192 ) {
    return ( (struct StrView_21) { .f_contents = ( (  from301 ) ( ( (  s2190 ) .f_contents ) ,  (  from2192 ) ) ) } );
}

static  struct StrView_21   take_dash_str_dash_while1306 (    struct Scanner_1303 *  sc3215 ,    bool (*  fun3217 )(    struct Char_53  ) ) {
    struct StrView_21  s3218 = ( (  take_dash_while1307 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  (  fun3217 ) ) );
    (*  sc3215 ) .f_s = ( (  byte_dash_substr_dash_from1323 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  ( (  num_dash_bytes958 ) ( (  s3218 ) ) ) ) );
    return (  s3218 );
}

static  bool   is_dash_not_dash_whitespace1324 (    struct Char_53  c2382 ) {
    return ( ! ( (  is_dash_whitespace995 ) ( (  c2382 ) ) ) );
}

struct TakeWhile_1330 {
    struct StrViewIter_577  f_it;
    bool (*  f_pred )(    struct Char_53  );
};

struct Map_1329 {
    struct TakeWhile_1330  field0;
    size_t (*  field1 )(    struct Char_53  );
};

static struct Map_1329 Map_1329_Map (  struct TakeWhile_1330  field0 ,  size_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1329 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1329   into_dash_iter1332 (    struct Map_1329  self796 ) {
    return (  self796 );
}

static  struct Maybe_580   next1334 (    struct TakeWhile_1330 *  self964 ) {
    struct Maybe_580  mx965 = ( (  next581 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_580  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_580_None_t ) {
        return ( (struct Maybe_580) { .tag = Maybe_580_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_580_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_580_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_580_Just ) ( ( dref966 .stuff .Maybe_580_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_580) { .tag = Maybe_580_None_t } );
            }
        }
    }
}

static  struct Maybe_1313   next1333 (    struct Map_1329 *  dref798 ) {
    struct Maybe_580  dref801 = ( (  next1334 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_580_None_t ) {
        return ( (struct Maybe_1313) { .tag = Maybe_1313_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_580_Just_t ) {
            return ( ( Maybe_1313_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_580_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1331 (    struct Map_1329  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1329  it1099 = ( (  into_dash_iter1332 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1313  dref1100 = ( (  next1333 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1313_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1313_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1313_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1335 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1335);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1336;
    return (  temp1336 );
}

static  size_t   lam1337 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add206 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1328 (    struct Map_1329  it1110 ) {
    return ( (  reduce1331 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1337 ) ) );
}

static  struct TakeWhile_1330   into_dash_iter1339 (    struct TakeWhile_1330  self961 ) {
    return (  self961 );
}

static  struct Map_1329   map1338 (    struct TakeWhile_1330  iterable805 ,    size_t (*  fun807 )(    struct Char_53  ) ) {
    struct TakeWhile_1330  it808 = ( (  into_dash_iter1339 ) ( (  iterable805 ) ) );
    return ( ( Map_1329_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1330   take_dash_while1340 (    struct StrViewIter_577  it970 ,    bool (*  pred972 )(    struct Char_53  ) ) {
    return ( (struct TakeWhile_1330) { .f_it = ( (  into_dash_iter579 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1341 (    struct Char_53  c2202 ) {
    return ( (  c2202 ) .f_num_dash_bytes );
}

static  struct StrView_21   take_dash_while1327 (    struct StrView_21  self2198 ,    bool (*  fun2200 )(    struct Char_53  ) ) {
    size_t  bi2203 = ( (  sum1328 ) ( ( (  map1338 ) ( ( (  take_dash_while1340 ) ( ( (  chars582 ) ( (  self2198 ) ) ) ,  (  fun2200 ) ) ) ,  (  lam1341 ) ) ) ) );
    return ( (  byte_dash_substr359 ) ( (  self2198 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2203 ) ) );
}

static  struct StrView_21   take_dash_str_dash_while1326 (    struct Scanner_1303 *  sc3215 ,    bool (*  fun3217 )(    struct Char_53  ) ) {
    struct StrView_21  s3218 = ( (  take_dash_while1327 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  (  fun3217 ) ) );
    (*  sc3215 ) .f_s = ( (  byte_dash_substr_dash_from1323 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  ( (  num_dash_bytes958 ) ( (  s3218 ) ) ) ) );
    return (  s3218 );
}

static  enum Unit_7   drop_dash_str_dash_while1325 (    struct Scanner_1303 *  sc3221 ,    bool (*  fun3223 )(    struct Char_53  ) ) {
    ( (  take_dash_str_dash_while1326 ) ( (  sc3221 ) ,  (  fun3223 ) ) );
    return ( Unit_7_Unit );
}

struct Zip_1345 {
    struct SliceIter_316  f_left_dash_it;
    struct SliceIter_316  f_right_dash_it;
};

struct Tuple2_1346 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_1346 Tuple2_1346_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_1346 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1348 {
    bool (*  fun1126 )(    struct Tuple2_1346  );
};

struct envunion1349 {
    bool  (*fun) (  struct env1348*  ,    struct Tuple2_1346  ,    bool  );
    struct env1348 env;
};

static  struct Zip_1345   into_dash_iter1350 (    struct Zip_1345  self911 ) {
    return (  self911 );
}

struct Maybe_1351 {
    enum {
        Maybe_1351_None_t,
        Maybe_1351_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1346  field0;
        } Maybe_1351_Just_s;
    } stuff;
};

static struct Maybe_1351 Maybe_1351_Just (  struct Tuple2_1346  field0 ) {
    return ( struct Maybe_1351 ) { .tag = Maybe_1351_Just_t, .stuff = { .Maybe_1351_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1351   next1352 (    struct Zip_1345 *  self914 ) {
    struct Zip_1345  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_319  dref916 = ( (  next320 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_319_None_t ) {
            return ( (struct Maybe_1351) { .tag = Maybe_1351_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_319_Just_t ) {
                struct Maybe_319  dref918 = ( (  next320 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_319_None_t ) {
                    return ( (struct Maybe_1351) { .tag = Maybe_1351_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_319_Just_t ) {
                        ( (  next320 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next320 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1351_Just ) ( ( ( Tuple2_1346_Tuple2 ) ( ( dref916 .stuff .Maybe_319_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_319_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1347 (    struct Zip_1345  iterable1093 ,    bool  base1095 ,   struct envunion1349  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_1345  it1099 = ( (  into_dash_iter1350 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1351  dref1100 = ( (  next1352 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1351_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1351_Just_t ) {
                struct envunion1349  temp1353 = (  fun1097 );
                x1098 = ( temp1353.fun ( &temp1353.env ,  ( dref1100 .stuff .Maybe_1351_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1354 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1354);
    exit ( 1 );
    ( Unit_7_Unit );
    bool  temp1355;
    return (  temp1355 );
}

static  bool   lam1356 (   struct env1348* env ,    struct Tuple2_1346  e1128 ,    bool  x1130 ) {
    return ( ( ( env->fun1126 ) ( (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1344 (    struct Zip_1345  it1124 ,    bool (*  fun1126 )(    struct Tuple2_1346  ) ) {
    struct env1348 envinst1348 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1347 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1349){ .fun = (  bool  (*) (  struct env1348*  ,    struct Tuple2_1346  ,    bool  ) )lam1356 , .env =  envinst1348 } ) ) );
}

static  struct Zip_1345   zip1357 (    struct Slice_12  left922 ,    struct Slice_12  right924 ) {
    struct SliceIter_316  left_dash_it925 = ( (  into_dash_iter318 ) ( (  left922 ) ) );
    struct SliceIter_316  right_dash_it926 = ( (  into_dash_iter318 ) ( (  right924 ) ) );
    return ( (struct Zip_1345) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  bool   lam1358 (    struct Tuple2_1346  dref1862 ) {
    return (  eq182 ( ( dref1862 .field0 ) , ( dref1862 .field1 ) ) );
}

static  bool   eq1343 (    struct Slice_12  l1859 ,    struct Slice_12  r1861 ) {
    if ( ( !  eq213 ( ( (  l1859 ) .f_count ) , ( (  r1861 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all1344 ) ( ( (  zip1357 ) ( (  l1859 ) ,  (  r1861 ) ) ) ,  (  lam1358 ) ) );
}

static  bool   eq1342 (    struct StrView_21  l2209 ,    struct StrView_21  r2211 ) {
    return (  eq1343 ( ( (  l2209 ) .f_contents ) , ( (  r2211 ) .f_contents ) ) );
}

static  enum Unit_7   undefined1360 (  ) {
    enum Unit_7  temp1361;
    return (  temp1361 );
}

static  enum Unit_7   todo1359 (  ) {
    ( (  print1001 ) ( ( (  from_dash_string194 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( (  undefined1360 ) ( ) );
}

static  enum Unit_7   run_dash_cmd1302 (    struct Editor_116 *  ed4043 ,    struct StrView_21  s4045 ) {
    struct Scanner_1303  temp1304 = ( (  mk_dash_from_dash_strview1305 ) ( (  s4045 ) ) );
    struct Scanner_1303 *  sc4046 = ( &temp1304 );
    struct StrView_21  cmd4047 = ( (  take_dash_str_dash_while1306 ) ( (  sc4046 ) ,  (  is_dash_not_dash_whitespace1324 ) ) );
    ( (  drop_dash_str_dash_while1325 ) ( (  sc4046 ) ,  (  is_dash_whitespace995 ) ) );
    if ( (  eq1342 ( (  cmd4047 ) , ( (  from_dash_charlike1080 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4043 ) .f_running = ( false );
    } else {
        if ( (  eq1342 ( (  cmd4047 ) , ( (  from_dash_string194 ) ( ( "wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq1342 ( (  cmd4047 ) , ( (  from_dash_charlike1080 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  todo1359 ) ( ) );
            } else {
                if ( (  eq1342 ( (  cmd4047 ) , ( (  from_dash_string194 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   free1362 (    struct StrBuilder_50 *  builder2793 ) {
    ( (  free398 ) ( ( & ( ( * (  builder2793 ) ) .f_chars ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Char_53   ascii_dash_char1364 (    char  c782 ) {
    return ( (  from_dash_u8866 ) ( ( (  ascii_dash_u8719 ) ( (  c782 ) ) ) ) );
}

static  enum Unit_7   handle_dash_key915 (   struct env127* env ,    struct Editor_116 *  ed4077 ,    struct Key_131  key4079 ) {
    struct EditorMode_121 *  dref4080 = ( & ( ( * (  ed4077 ) ) .f_mode ) );
    if ( (* dref4080 ).tag == EditorMode_121_Normal_t ) {
        enum Mode_118  dref4081 = ( ( ( * (  ed4077 ) ) .f_pane ) .f_mode );
        switch (  dref4081 ) {
            case Mode_118_Normal : {
                struct envunion130  temp916 = ( (struct envunion130){ .fun = (  enum Unit_7  (*) (  struct env114*  ,    struct Editor_116 *  ,    struct Key_131  ) )handle_dash_normal_dash_key917 , .env =  env->envinst114 } );
                ( temp916.fun ( &temp916.env ,  (  ed4077 ) ,  (  key4079 ) ) );
                break;
            }
            case Mode_118_Select : {
                struct envunion1288  temp1287 = ( (struct envunion1288){ .fun = (  enum Unit_7  (*) (  struct env114*  ,    struct Editor_116 *  ,    struct Key_131  ) )handle_dash_normal_dash_key917 , .env =  env->envinst114 } );
                ( temp1287.fun ( &temp1287.env ,  (  ed4077 ) ,  (  key4079 ) ) );
                break;
            }
            case Mode_118_Insert : {
                struct Key_131  dref4082 = (  key4079 );
                if ( dref4082.tag == Key_131_Escape_t ) {
                    ( (  set_dash_mode971 ) ( ( (  pane962 ) ( (  ed4077 ) ) ) ,  ( Mode_118_Normal ) ) );
                }
                else {
                    if ( dref4082.tag == Key_131_Enter_t ) {
                        struct envunion132  temp1289 = ( (struct envunion132){ .fun = (  enum Unit_7  (*) (  struct env99*  ,    struct Pane_117 *  ,    struct StrView_21  ) )add_dash_str_dash_at_dash_char1290 , .env =  env->envinst99 } );
                        ( temp1289.fun ( &temp1289.env ,  ( (  pane962 ) ( (  ed4077 ) ) ) ,  ( (  from_dash_charlike1080 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right963 ) ( ( (  pane962 ) ( (  ed4077 ) ) ) ) );
                    }
                    else {
                        if ( dref4082.tag == Key_131_Backspace_t ) {
                            struct envunion128  temp1292 = ( (struct envunion128){ .fun = (  enum Unit_7  (*) (  struct env102*  ,    struct Pane_117 *  ) )backspace1293 , .env =  env->envinst102 } );
                            ( temp1292.fun ( &temp1292.env ,  ( (  pane962 ) ( (  ed4077 ) ) ) ) );
                        }
                        else {
                            if ( dref4082.tag == Key_131_Char_t ) {
                                struct Array_1296  temp1298 = ( (  from_dash_listlike1299 ) ( ( (struct Array_1296) { ._arr = { ( dref4082 .stuff .Key_131_Char_s .field0 ) } } ) ) );
                                struct StrView_21  s4084 = ( (  from_dash_ascii_dash_slice791 ) ( ( (  as_dash_slice1295 ) ( ( &temp1298 ) ) ) ) );
                                struct envunion1301  temp1300 = ( (struct envunion1301){ .fun = (  enum Unit_7  (*) (  struct env99*  ,    struct Pane_117 *  ,    struct StrView_21  ) )add_dash_str_dash_at_dash_char1290 , .env =  env->envinst99 } );
                                ( temp1300.fun ( &temp1300.env ,  ( (  pane962 ) ( (  ed4077 ) ) ) ,  (  s4084 ) ) );
                                ( (  move_dash_right963 ) ( ( (  pane962 ) ( (  ed4077 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4080 ).tag == EditorMode_121_Cmd_t ) {
            struct Key_131  dref4086 = (  key4079 );
            if ( dref4086.tag == Key_131_Escape_t ) {
                (*  ed4077 ) .f_mode = ( (struct EditorMode_121) { .tag = EditorMode_121_Normal_t } );
            }
            else {
                if ( dref4086.tag == Key_131_Enter_t ) {
                    ( (  run_dash_cmd1302 ) ( (  ed4077 ) ,  ( (  as_dash_str1260 ) ( ( & ( (* dref4080 ) .stuff .EditorMode_121_Cmd_s .field0 ) ) ) ) ) );
                    ( (  free1362 ) ( ( & ( (* dref4080 ) .stuff .EditorMode_121_Cmd_s .field0 ) ) ) );
                    (*  ed4077 ) .f_mode = ( (struct EditorMode_121) { .tag = EditorMode_121_Normal_t } );
                }
                else {
                    if ( dref4086.tag == Key_131_Char_t ) {
                        struct envunion129  temp1363 = ( (struct envunion129){ .fun = (  enum Unit_7  (*) (  struct env48*  ,    struct StrBuilder_50 *  ,    struct Char_53  ) )write_dash_char1251 , .env =  env->envinst48 } );
                        ( temp1363.fun ( &temp1363.env ,  ( & ( (* dref4080 ) .stuff .EditorMode_121_Cmd_s .field0 ) ) ,  ( (  ascii_dash_char1364 ) ( ( dref4086 .stuff .Key_131_Char_s .field0 ) ) ) ) );
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
                ( (  todo1359 ) ( ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

struct envunion1366 {
    bool  (*fun) (  struct env68*  ,    struct Screen_635 *  );
    struct env68 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1367 (   struct env68* env ,    struct Screen_635 *  screen3461 ) {
    struct Tui_64 *  tui3462 = ( ( * (  screen3461 ) ) .f_tui );
    struct envunion69  temp1368 = ( (struct envunion69){ .fun = (  bool  (*) (  struct env61*  ,    struct Tui_64 *  ) )update_dash_dimensions706 , .env =  env->envinst61 } );
    bool  updated_dash_dimensions3463 = ( temp1368.fun ( &temp1368.env ,  (  tui3462 ) ) );
    if ( ( ! (  updated_dash_dimensions3463 ) ) ) {
        return ( false );
    }
    (*  screen3461 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3464 = ( ( * ( ( * (  screen3461 ) ) .f_tui ) ) .f_width );
    uint32_t  h3465 = ( ( * ( ( * (  screen3461 ) ) .f_tui ) ) .f_height );
    size_t  nusz3466 = ( (  u32_dash_size649 ) ( (  op_dash_mul657 ( (  w3464 ) , (  h3465 ) ) ) ) );
    if ( (  cmp158 ( (  nusz3466 ) , ( ( ( * (  screen3461 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_635  nuscreen3467 = ( (  mk_dash_screen643 ) ( (  tui3462 ) ,  ( ( * (  screen3461 ) ) .f_al ) ) );
    (*  screen3461 ) .f_current = ( (  nuscreen3467 ) .f_current );
    (*  screen3461 ) .f_previous = ( (  nuscreen3467 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1369 (    struct Tui_64 *  tui3388 ) {
    bool  redraw3389 = ( ( * (  tui3388 ) ) .f_should_dash_redraw );
    (*  tui3388 ) .f_should_dash_redraw = ( false );
    return (  redraw3389 );
}

struct env1373 {
    struct Slice_636  s1905;
    struct Cell_637 (*  fun1907 )(    struct Cell_637  );
    ;
    ;
    ;
};

struct envunion1374 {
    enum Unit_7  (*fun) (  struct env1373*  ,    int32_t  );
    struct env1373 env;
};

static  enum Unit_7   for_dash_each1372 (    struct Range_660  iterable1074 ,   struct envunion1374  fun1076 ) {
    struct RangeIter_663  temp1375 = ( (  into_dash_iter665 ) ( (  iterable1074 ) ) );
    struct RangeIter_663 *  it1077 = ( &temp1375 );
    while ( ( true ) ) {
        struct Maybe_246  dref1078 = ( (  next666 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_246_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_246_Just_t ) {
                struct envunion1374  temp1376 = (  fun1076 );
                ( temp1376.fun ( &temp1376.env ,  ( dref1078 .stuff .Maybe_246_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1377 (   struct env1373* env ,    int32_t  i1909 ) {
    return ( (  set670 ) ( ( env->s1905 ) ,  ( (  i32_dash_size236 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get674 ( ( env->s1905 ) , ( (  i32_dash_size236 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_7   map1371 (    struct Slice_636  s1905 ,    struct Cell_637 (*  fun1907 )(    struct Cell_637  ) ) {
    struct env1373 envinst1373 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each1372 ) ( ( (  to668 ) ( (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_i32170 ) ( (  op_dash_sub278 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1374){ .fun = (  enum Unit_7  (*) (  struct env1373*  ,    int32_t  ) )lam1377 , .env =  envinst1373 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Cell_637   lam1378 (    struct Cell_637  dref3425 ) {
    return ( (  default_dash_cell682 ) ( ) );
}

static  enum Unit_7   clear_dash_screen1370 (    struct Screen_635 *  screen3424 ) {
    ( (  map1371 ) ( ( ( * (  screen3424 ) ) .f_current ) ,  (  lam1378 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_screen_dash_fg1379 (    struct Screen_635 *  screen3470 ,    struct Color_638  c3472 ) {
    (*  screen3470 ) .f_default_dash_fg = (  c3472 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_screen_dash_bg1380 (    struct Screen_635 *  screen3475 ,    struct Color_638  c3477 ) {
    (*  screen3475 ) .f_default_dash_bg = (  c3477 );
    return ( Unit_7_Unit );
}

struct ScreenDims_1382 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

static  int32_t   cast1384 (    uint32_t  x356 ) {
    return ( (int32_t ) (  x356 ) );
}

static  int32_t   u32_dash_i321383 (    uint32_t  x660 ) {
    return ( (  cast1384 ) ( (  x660 ) ) );
}

static  int32_t   screen_dash_width1387 (    struct ScreenDims_1382  sd3858 ) {
    return (  op_dash_add248 ( (  op_dash_sub786 ( ( (  sd3858 ) .f_to_dash_sx ) , ( (  sd3858 ) .f_from_dash_sx ) ) ) , (  from_dash_integral44 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1388 (    struct ScreenDims_1382  sd3861 ) {
    return (  op_dash_add248 ( (  op_dash_sub786 ( ( (  sd3861 ) .f_to_dash_sy ) , ( (  sd3861 ) .f_from_dash_sy ) ) ) , (  from_dash_integral44 ( 1 ) ) ) );
}

static  enum Unit_7   update_dash_screen_dash_offset1386 (    struct Pane_117 *  pane3864 ,    struct ScreenDims_1382  sd3866 ) {
    struct Pos_20  cur3867 = ( ( * (  pane3864 ) ) .f_cursor );
    int32_t  cur_dash_sx3868 = ( (  pos_dash_vi923 ) ( ( ( * (  pane3864 ) ) .f_buf ) ,  (  cur3867 ) ) );
    struct ScreenCursorOffset_119  sc_dash_off3869 = ( ( * (  pane3864 ) ) .f_sc_dash_off );
    int32_t  sw3870 = (  op_dash_sub786 ( ( (  screen_dash_width1387 ) ( (  sd3866 ) ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    int32_t  sh3871 = (  op_dash_sub786 ( ( (  screen_dash_height1388 ) ( (  sd3866 ) ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    int32_t  margin3872 = (  from_dash_integral44 ( 5 ) );
    int32_t  csi3873 = ( (  pos_dash_vi923 ) ( ( ( * (  pane3864 ) ) .f_buf ) ,  (  cur3867 ) ) );
    int32_t  csx3874 = (  op_dash_sub786 ( (  csi3873 ) , ( (  sc_dash_off3869 ) .f_screen_dash_left ) ) );
    int32_t  csy3875 = (  op_dash_sub786 ( ( (  cur3867 ) .f_line ) , ( (  sc_dash_off3869 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left3876 = ( (  sc_dash_off3869 ) .f_screen_dash_left );
    if ( (  cmp291 ( (  csx3874 ) , (  margin3872 ) ) == 0 ) ) {
        nu_dash_screen_dash_left3876 = (  op_dash_sub786 ( (  csi3873 ) , (  margin3872 ) ) );
    } else {
        if ( (  cmp291 ( (  csx3874 ) , (  op_dash_sub786 ( (  sw3870 ) , (  margin3872 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left3876 = (  op_dash_add248 ( (  op_dash_sub786 ( (  csi3873 ) , (  sw3870 ) ) ) , (  margin3872 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left3877 = ( (  max938 ) ( (  nu_dash_screen_dash_left3876 ) ,  (  from_dash_integral44 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top3878 = ( (  sc_dash_off3869 ) .f_screen_dash_top );
    if ( (  cmp291 ( (  csy3875 ) , (  margin3872 ) ) == 0 ) ) {
        nu_dash_screen_dash_top3878 = (  op_dash_sub786 ( ( (  cur3867 ) .f_line ) , (  margin3872 ) ) );
    } else {
        if ( (  cmp291 ( (  csy3875 ) , (  op_dash_sub786 ( (  sh3871 ) , (  margin3872 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top3878 = (  op_dash_add248 ( (  op_dash_sub786 ( ( (  cur3867 ) .f_line ) , (  sh3871 ) ) ) , (  margin3872 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top3879 = ( (  max938 ) ( (  nu_dash_screen_dash_top3878 ) ,  (  from_dash_integral44 ( 0 ) ) ) );
    (*  pane3864 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_119) { .f_screen_dash_top = (  nu_dash_screen_dash_top3879 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left3877 ) } );
    return ( Unit_7_Unit );
}

struct StrConcat_1392 {
    struct StrView_21  field0;
    int32_t  field1;
};

static struct StrConcat_1392 StrConcat_1392_StrConcat (  struct StrView_21  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1392 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1395 {
    struct StrView_21  field0;
    struct StrConcat_1392  field1;
};

static struct StrConcat_1395 StrConcat_1395_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_1392  field1 ) {
    return ( struct StrConcat_1395 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1394 {
    struct StrConcat_1395  field0;
    struct Char_53  field1;
};

static struct StrConcat_1394 StrConcat_1394_StrConcat (  struct StrConcat_1395  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1394 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str1397 (    struct StrConcat_1392  self1503 ) {
    struct StrConcat_1392  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str169 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str176 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str1396 (    struct StrConcat_1395  self1503 ) {
    struct StrConcat_1395  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str169 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str1397 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str1393 (    struct StrConcat_1394  self1503 ) {
    struct StrConcat_1394  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str1396 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str177 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   assert1391 (    bool  cond1718 ,    struct StrConcat_1392  msg1720 ) {
    if ( ( ! (  cond1718 ) ) ) {
        ( (  print_dash_str1393 ) ( ( ( StrConcat_1394_StrConcat ) ( ( ( StrConcat_1395_StrConcat ) ( ( (  from_dash_string194 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1720 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    }
    return ( Unit_7_Unit );
}

struct AppendIter_1399 {
    struct StrViewIter_577  f_it;
    struct Char_53  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1399   into_dash_iter1400 (    struct AppendIter_1399  self1019 ) {
    return (  self1019 );
}

static  struct AppendIter_1399   append1401 (    struct StrViewIter_577  it1006 ,    struct Char_53  e1008 ) {
    return ( (struct AppendIter_1399) { .f_it = ( (  into_dash_iter579 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct Maybe_580   next1403 (    struct AppendIter_1399 *  self1022 ) {
    struct Maybe_580  dref1023 = ( (  next581 ) ( ( & ( ( * (  self1022 ) ) .f_it ) ) ) );
    if ( dref1023.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1023 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1023.tag == Maybe_580_None_t ) {
            if ( ( ! ( ( * (  self1022 ) ) .f_appended ) ) ) {
                (*  self1022 ) .f_appended = ( true );
                return ( ( Maybe_580_Just ) ( ( ( * (  self1022 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_580) { .tag = Maybe_580_None_t } );
        }
    }
}

static  bool   between1405 (    struct Pos_20  c1337 ,    struct Pos_20  l1339 ,    struct Pos_20  r1341 ) {
    struct Pos_20  from1342 = ( (  min289 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Pos_20  to1343 = ( (  max292 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp290 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp290 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1404 (    struct Pane_117 *  pane3850 ,    struct Pos_20  pos3852 ) {
    return ( {  struct Maybe_28  dref3853 = ( ( * (  pane3850 ) ) .f_sel ) ; dref3853.tag == Maybe_28_Just_t ? ( (  between1405 ) ( (  pos3852 ) ,  ( ( * (  pane3850 ) ) .f_cursor ) ,  ( dref3853 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( false ) ; } );
}

static  int32_t   op_dash_mul1407 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  enum Unit_7   put_dash_char1406 (    struct Screen_635 *  screen3508 ,    struct Char_53  c3510 ,    int32_t  x3512 ,    int32_t  y3514 ) {
    int32_t  w3515 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3508 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp291 ( (  x3512 ) , (  w3515 ) ) != 0 ) || (  cmp291 ( (  y3514 ) , ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3508 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp291 ( (  x3512 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) ) || (  cmp291 ( (  y3514 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    size_t  i3516 = ( (  i32_dash_size236 ) ( (  op_dash_add248 ( (  op_dash_mul1407 ( (  y3514 ) , (  w3515 ) ) ) , (  x3512 ) ) ) ) );
    struct Color_638  fg3517 = ( ( * (  screen3508 ) ) .f_default_dash_fg );
    struct Color_638  bg3518 = ( ( * (  screen3508 ) ) .f_default_dash_bg );
    struct Char_53  c3519 = (  c3510 );
    int32_t  char_dash_width3520 = ( (  wcwidth939 ) ( (  c3519 ) ) );
    if ( ( (  cmp291 ( (  x3512 ) , (  from_dash_integral44 ( 0 ) ) ) == 2 ) && (  cmp291 ( ( (  elem_dash_get674 ( ( ( * (  screen3508 ) ) .f_current ) , (  op_dash_sub278 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral44 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_637  pc3521 = (  elem_dash_get674 ( ( ( * (  screen3508 ) ) .f_current ) , (  op_dash_sub278 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set670 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  op_dash_sub278 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_637) { .f_c = ( (  from_dash_charlike195 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3521 ) .f_fg ) , .f_bg = ( (  pc3521 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral44 ( 1 ) ) } ) ) );
    }
    ( (  set670 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  i3516 ) ,  ( (struct Cell_637) { .f_c = (  c3519 ) , .f_fg = (  fg3517 ) , .f_bg = (  bg3518 ) , .f_char_dash_width = (  char_dash_width3520 ) } ) ) );
    struct RangeIter_663  temp1408 =  into_dash_iter665 ( ( (  to668 ) ( (  op_dash_add248 ( (  x3512 ) , (  from_dash_integral44 ( 1 ) ) ) ) ,  ( (  min443 ) ( (  op_dash_sub786 ( (  op_dash_add248 ( (  x3512 ) , (  char_dash_width3520 ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) ,  (  w3515 ) ) ) ) ) );
    while (true) {
        struct Maybe_246  __cond1409 =  next666 (&temp1408);
        if (  __cond1409 .tag == 0 ) {
            break;
        }
        int32_t  xx3523 =  __cond1409 .stuff .Maybe_246_Just_s .field0;
        size_t  i3524 = ( (  i32_dash_size236 ) ( (  op_dash_add248 ( (  op_dash_mul1407 ( (  y3514 ) , (  w3515 ) ) ) , (  xx3523 ) ) ) ) );
        ( (  set670 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  i3524 ) ,  ( (struct Cell_637) { .f_c = ( (  from_dash_charlike195 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = (  fg3517 ) , .f_bg = (  bg3518 ) , .f_char_dash_width = (  from_dash_integral44 ( 1 ) ) } ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   render1385 (    struct Screen_635 *  screen3882 ,    struct Pane_117 *  pane3884 ,    struct ScreenDims_1382  sd3886 ) {
    ( (  update_dash_screen_dash_offset1386 ) ( (  pane3884 ) ,  (  sd3886 ) ) );
    struct ScreenCursorOffset_119  sc_dash_off3887 = ( ( * (  pane3884 ) ) .f_sc_dash_off );
    struct RangeIter_663  temp1389 =  into_dash_iter665 ( ( (  to668 ) ( (  op_dash_add248 ( ( (  sc_dash_off3887 ) .f_screen_dash_top ) , (  from_dash_integral44 ( 1 ) ) ) ) ,  ( (  min443 ) ( ( (  num_dash_lines965 ) ( ( ( * (  pane3884 ) ) .f_buf ) ) ) ,  (  op_dash_add248 ( ( (  sc_dash_off3887 ) .f_screen_dash_top ) , ( (  screen_dash_height1388 ) ( (  sd3886 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_246  __cond1390 =  next666 (&temp1389);
        if (  __cond1390 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num3889 =  __cond1390 .stuff .Maybe_246_Just_s .field0;
        int32_t  ybi3890 = (  op_dash_sub786 ( (  line_dash_num3889 ) , (  from_dash_integral44 ( 1 ) ) ) );
        int32_t  xbi3891 = ( (  vi_dash_bi967 ) ( ( ( * (  pane3884 ) ) .f_buf ) ,  (  ybi3890 ) ,  ( (  sc_dash_off3887 ) .f_screen_dash_left ) ) );
        struct StrView_21  line_dash_content3892 = ( (  line925 ) ( ( ( * (  pane3884 ) ) .f_buf ) ,  (  ybi3890 ) ) );
        int32_t  ys3893 = (  op_dash_sub786 ( (  op_dash_sub786 ( (  op_dash_add248 ( ( (  sd3886 ) .f_from_dash_sy ) , (  line_dash_num3889 ) ) ) , ( (  sc_dash_off3887 ) .f_screen_dash_top ) ) ) , (  from_dash_integral44 ( 1 ) ) ) );
        int32_t  vx3894 = (  op_dash_sub786 ( ( (  pos_dash_vi923 ) ( ( ( * (  pane3884 ) ) .f_buf ) ,  ( (  mk272 ) ( (  ybi3890 ) ,  (  xbi3891 ) ) ) ) ) , ( (  sc_dash_off3887 ) .f_screen_dash_left ) ) );
        ( (  assert1391 ) ( (  cmp291 ( (  vx3894 ) , (  from_dash_integral44 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1392_StrConcat ) ( ( (  from_dash_string194 ) ( ( "vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx3894 ) ) ) ) );
        struct AppendIter_1399  temp1398 =  into_dash_iter1400 ( ( (  append1401 ) ( ( (  chars582 ) ( ( (  byte_dash_substr_dash_from1323 ) ( (  line_dash_content3892 ) ,  ( (  i32_dash_size236 ) ( (  xbi3891 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike195 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_580  __cond1402 =  next1403 (&temp1398);
            if (  __cond1402 .tag == 0 ) {
                break;
            }
            struct Char_53  c3896 =  __cond1402 .stuff .Maybe_580_Just_s .field0;
            if ( (  cmp291 ( (  vx3894 ) , ( (  sd3886 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_20  curpos3897 = ( (  mk272 ) ( (  ybi3890 ) ,  (  xbi3891 ) ) );
            bool  is_dash_cursor3898 = (  eq293 ( (  curpos3897 ) , ( ( * (  pane3884 ) ) .f_cursor ) ) );
            bool  in_dash_selection3899 = ( (  is_dash_in_dash_selection1404 ) ( (  pane3884 ) ,  ( (  mk272 ) ( (  ybi3890 ) ,  (  xbi3891 ) ) ) ) );
            if ( (  is_dash_cursor3898 ) ) {
                (*  screen3882 ) .f_default_dash_fg = ( ( Color_638_Color8 ) ( ( Color8_639_Black8 ) ) );
                (*  screen3882 ) .f_default_dash_bg = ( ( Color_638_Color8 ) ( ( Color8_639_White8 ) ) );
            } else {
                if ( (  in_dash_selection3899 ) ) {
                    (*  screen3882 ) .f_default_dash_bg = ( ( Color_638_Color8 ) ( ( Color8_639_Cyan8 ) ) );
                }
            }
            struct Maybe_120  dref3900 = ( (  char_dash_replacement930 ) ( (  c3896 ) ) );
            if ( dref3900.tag == Maybe_120_None_t ) {
                if ( ( ! ( (  cmp291 ( (  vx3894 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp291 ( (  op_dash_sub786 ( (  op_dash_add248 ( (  vx3894 ) , ( (  char_dash_screen_dash_width928 ) ( (  c3896 ) ) ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) , ( (  sd3886 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1406 ) ( (  screen3882 ) ,  (  c3896 ) ,  (  vx3894 ) ,  (  ys3893 ) ) );
                }
                vx3894 = (  op_dash_add248 ( (  vx3894 ) , ( (  char_dash_screen_dash_width928 ) ( (  c3896 ) ) ) ) );
            }
            else {
                if ( dref3900.tag == Maybe_120_Just_t ) {
                    struct StrViewIter_577  temp1410 =  into_dash_iter579 ( ( (  chars582 ) ( ( dref3900 .stuff .Maybe_120_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_580  __cond1411 =  next581 (&temp1410);
                        if (  __cond1411 .tag == 0 ) {
                            break;
                        }
                        struct Char_53  c3903 =  __cond1411 .stuff .Maybe_580_Just_s .field0;
                        if ( (  cmp291 ( (  vx3894 ) , (  from_dash_integral44 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1406 ) ( (  screen3882 ) ,  (  c3903 ) ,  (  vx3894 ) ,  (  ys3893 ) ) );
                        }
                        vx3894 = (  op_dash_add248 ( (  vx3894 ) , ( (  char_dash_screen_dash_width928 ) ( (  c3903 ) ) ) ) );
                    }
                }
            }
            (*  screen3882 ) .f_default_dash_fg = ( (struct Color_638) { .tag = Color_638_ColorDefault_t } );
            (*  screen3882 ) .f_default_dash_bg = ( (struct Color_638) { .tag = Color_638_ColorDefault_t } );
            xbi3891 = (  op_dash_add248 ( (  xbi3891 ) , ( (  size_dash_i32170 ) ( ( (  c3896 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    return ( Unit_7_Unit );
}

struct env1413 {
    ;
    ;
    ;
    struct Screen_635 *  screen4090;
    ;
    ;
    int32_t *  curline4094;
    ;
};

struct env1414 {
    ;
    ;
    ;
    struct Screen_635 *  screen4090;
    ;
    ;
    int32_t *  curline4094;
    ;
};

struct env1415 {
    ;
    ;
    ;
    struct Screen_635 *  screen4090;
    ;
    ;
    int32_t *  curline4094;
    ;
};

struct env1416 {
    ;
    ;
    ;
    struct Screen_635 *  screen4090;
    ;
    ;
    int32_t *  curline4094;
    ;
};

struct env1417 {
    ;
    ;
    ;
    struct Screen_635 *  screen4090;
    ;
    ;
    int32_t *  curline4094;
    ;
};

struct env1418 {
    ;
    ;
    ;
    struct Screen_635 *  screen4090;
    ;
    ;
    int32_t *  curline4094;
    ;
};

struct env1419 {
    ;
    ;
    ;
    struct Screen_635 *  screen4090;
    ;
    ;
    int32_t *  curline4094;
    ;
};

struct env1420 {
    ;
    ;
    ;
    struct Screen_635 *  screen4090;
    ;
    ;
    int32_t *  curline4094;
    ;
};

struct env1421 {
    ;
    ;
    ;
    struct Screen_635 *  screen4090;
    ;
    ;
    int32_t *  curline4094;
    ;
};

struct StrConcat_1424 {
    struct StrView_21  field0;
    enum Mode_118  field1;
};

static struct StrConcat_1424 StrConcat_1424_StrConcat (  struct StrView_21  field0 ,  enum Mode_118  field1 ) {
    return ( struct StrConcat_1424 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1423 {
    enum Unit_7  (*fun) (  struct env1413*  ,    struct StrConcat_1424  );
    struct env1413 env;
};

struct StrConcatIter_1429 {
    struct StrViewIter_577  f_left;
    struct StrViewIter_577  f_right;
};

struct Map_1428 {
    struct StrConcatIter_1429  field0;
    int32_t (*  field1 )(    struct Char_53  );
};

static struct Map_1428 Map_1428_Map (  struct StrConcatIter_1429  field0 ,  int32_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1428 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1428   into_dash_iter1431 (    struct Map_1428  self796 ) {
    return (  self796 );
}

static  struct Maybe_580   next1433 (    struct StrConcatIter_1429 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next581 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next581 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_246   next1432 (    struct Map_1428 *  dref798 ) {
    struct Maybe_580  dref801 = ( (  next1433 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_580_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_580_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_580_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1430 (    struct Map_1428  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1428  it1099 = ( (  into_dash_iter1431 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1100 = ( (  next1432 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_246_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_246_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1434 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1434);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1435;
    return (  temp1435 );
}

static  int32_t   lam1436 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add248 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1427 (    struct Map_1428  it1110 ) {
    return ( (  reduce1430 ) ( (  it1110 ) ,  (  from_dash_integral44 ( 0 ) ) ,  (  lam1436 ) ) );
}

static  struct StrConcatIter_1429   into_dash_iter1438 (    struct StrConcatIter_1429  self1491 ) {
    return (  self1491 );
}

static  struct Map_1428   map1437 (    struct StrConcatIter_1429  iterable805 ,    int32_t (*  fun807 )(    struct Char_53  ) ) {
    struct StrConcatIter_1429  it808 = ( (  into_dash_iter1438 ) ( (  iterable805 ) ) );
    return ( ( Map_1428_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrView_21   todo1442 (  ) {
    ( (  print1001 ) ( ( (  from_dash_string194 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( (  undefined490 ) ( ) );
}

static  struct StrViewIter_577   chars1441 (    enum Mode_118  self3805 ) {
    return ( (  chars582 ) ( ( {  enum Mode_118  dref3806 = (  self3805 ) ;  dref3806 == Mode_118_Normal ? ( (  from_dash_string194 ) ( ( "Normal" ) ,  ( 6 ) ) ) :  dref3806 == Mode_118_Insert ? ( (  from_dash_string194 ) ( ( "Insert" ) ,  ( 6 ) ) ) :  dref3806 == Mode_118_Select ? ( (  from_dash_string194 ) ( ( "Select" ) ,  ( 6 ) ) ) : ( (  todo1442 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1429   into_dash_iter1440 (    struct StrConcat_1424  dref1498 ) {
    return ( (struct StrConcatIter_1429) { .f_left = ( (  chars582 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1441 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1429   chars1439 (    struct StrConcat_1424  self1509 ) {
    return ( (  into_dash_iter1440 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1443 (    struct Screen_635 *  screen3527 ,    struct StrConcat_1424  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp291 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp291 ( (  y3533 ) , ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add248 ( (  op_dash_mul1407 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min443 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size236 ) ( (  op_dash_sub786 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct StrConcatIter_1429  temp1444 =  into_dash_iter1438 ( ( (  chars1439 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_580  __cond1445 =  next1433 (&temp1444);
        if (  __cond1445 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1445 .stuff .Maybe_580_Just_s .field0;
        ( (  put_dash_char1406 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add248 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add248 ( (  xx3538 ) , ( (  rendered_dash_wcwidth937 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1426 (    struct Screen_635 *  screen3543 ,    struct StrConcat_1424  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1427 ) ( ( (  map1437 ) ( ( (  chars1439 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth937 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub786 ( (  op_dash_sub786 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1443 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1425 (   struct env1413* env ,    struct StrConcat_1424  s4097 ) {
    ( (  draw_dash_str_dash_right1426 ) ( ( env->screen4090 ) ,  (  s4097 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( * ( env->curline4094 ) ) ) );
    (* env->curline4094 ) = (  op_dash_add248 ( ( * ( env->curline4094 ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1450 {
    struct StrView_21  field0;
    struct Pos_20  field1;
};

static struct StrConcat_1450 StrConcat_1450_StrConcat (  struct StrView_21  field0 ,  struct Pos_20  field1 ) {
    return ( struct StrConcat_1450 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1449 {
    struct StrConcat_1450  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1449 StrConcat_1449_StrConcat (  struct StrConcat_1450  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1449 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1448 {
    struct StrConcat_1449  field0;
    enum CharType_986  field1;
};

static struct StrConcat_1448 StrConcat_1448_StrConcat (  struct StrConcat_1449  field0 ,  enum CharType_986  field1 ) {
    return ( struct StrConcat_1448 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1447 {
    enum Unit_7  (*fun) (  struct env1414*  ,    struct StrConcat_1448  );
    struct env1414 env;
};

struct IntStrIter_1462 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1461 {
    struct AppendIter_847  f_left;
    struct IntStrIter_1462  f_right;
};

struct StrConcatIter_1460 {
    struct StrConcatIter_1461  f_left;
    struct StrViewIter_577  f_right;
};

struct StrConcatIter_1459 {
    struct StrConcatIter_1460  f_left;
    struct IntStrIter_1462  f_right;
};

struct StrConcatIter_1458 {
    struct StrConcatIter_1459  f_left;
    struct AppendIter_847  f_right;
};

struct StrConcatIter_1457 {
    struct StrViewIter_577  f_left;
    struct StrConcatIter_1458  f_right;
};

struct StrConcatIter_1456 {
    struct StrConcatIter_1457  f_left;
    struct StrViewIter_577  f_right;
};

struct StrConcatIter_1455 {
    struct StrConcatIter_1456  f_left;
    struct StrViewIter_577  f_right;
};

struct Map_1454 {
    struct StrConcatIter_1455  field0;
    int32_t (*  field1 )(    struct Char_53  );
};

static struct Map_1454 Map_1454_Map (  struct StrConcatIter_1455  field0 ,  int32_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1454 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1454   into_dash_iter1464 (    struct Map_1454  self796 ) {
    return (  self796 );
}

struct env1476 {
    int32_t  base1210;
    ;
};

struct envunion1477 {
    int32_t  (*fun) (  struct env1476*  ,    int32_t  ,    int32_t  );
    struct env1476 env;
};

static  int32_t   reduce1475 (    struct Range_660  iterable1093 ,    int32_t  base1095 ,   struct envunion1477  fun1097 ) {
    int32_t  x1098 = (  base1095 );
    struct RangeIter_663  it1099 = ( (  into_dash_iter665 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1100 = ( (  next666 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_246_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_246_Just_t ) {
                struct envunion1477  temp1478 = (  fun1097 );
                x1098 = ( temp1478.fun ( &temp1478.env ,  ( dref1100 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1479 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1479);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1480;
    return (  temp1480 );
}

static  int32_t   lam1481 (   struct env1476* env ,    int32_t  item1214 ,    int32_t  x1216 ) {
    return (  op_dash_mul1407 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int32_t   pow1474 (    int32_t  base1210 ,    int32_t  p1212 ) {
    struct env1476 envinst1476 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1475 ) ( ( (  to668 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  op_dash_sub786 ( (  p1212 ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral44 ( 1 ) ) ,  ( (struct envunion1477){ .fun = (  int32_t  (*) (  struct env1476*  ,    int32_t  ,    int32_t  ) )lam1481 , .env =  envinst1476 } ) ) );
}

static  int32_t   op_dash_div1482 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  uint8_t   cast1483 (    int32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_580   next1473 (    struct IntStrIter_1462 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_580_Just ) ( ( (  from_dash_charlike195 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp291 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_580) { .tag = Maybe_580_None_t } );
    }
    int32_t  trim_dash_down1423 = ( (  pow1474 ) ( (  from_dash_integral44 ( 10 ) ) ,  (  op_dash_sub786 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 1 ) ) ) ) ) );
    int32_t  upper1424 = (  op_dash_div1482 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    int32_t  upper_dash_mask1425 = (  op_dash_mul1407 ( (  op_dash_div1482 ( (  upper1424 ) , (  from_dash_integral44 ( 10 ) ) ) ) , (  from_dash_integral44 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1483 ) ( (  op_dash_sub786 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub786 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 1 ) ) ) );
    struct Char_53  digit_dash_char1427 = ( (  from_dash_u8866 ) ( (  op_dash_add756 ( (  digit1426 ) , (  from_dash_integral186 ( 48 ) ) ) ) ) );
    return ( ( Maybe_580_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_580   next1472 (    struct StrConcatIter_1461 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next873 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next1473 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1471 (    struct StrConcatIter_1460 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1472 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next581 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1470 (    struct StrConcatIter_1459 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1471 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next1473 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1469 (    struct StrConcatIter_1458 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1470 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next873 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1468 (    struct StrConcatIter_1457 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next581 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next1469 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1467 (    struct StrConcatIter_1456 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1468 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next581 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1466 (    struct StrConcatIter_1455 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1467 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next581 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_246   next1465 (    struct Map_1454 *  dref798 ) {
    struct Maybe_580  dref801 = ( (  next1466 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_580_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_580_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_580_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1463 (    struct Map_1454  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1454  it1099 = ( (  into_dash_iter1464 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1100 = ( (  next1465 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_246_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_246_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1484 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1484);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1485;
    return (  temp1485 );
}

static  int32_t   lam1486 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add248 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1453 (    struct Map_1454  it1110 ) {
    return ( (  reduce1463 ) ( (  it1110 ) ,  (  from_dash_integral44 ( 0 ) ) ,  (  lam1486 ) ) );
}

static  struct StrConcatIter_1455   into_dash_iter1488 (    struct StrConcatIter_1455  self1491 ) {
    return (  self1491 );
}

static  struct Map_1454   map1487 (    struct StrConcatIter_1455  iterable805 ,    int32_t (*  fun807 )(    struct Char_53  ) ) {
    struct StrConcatIter_1455  it808 = ( (  into_dash_iter1488 ) ( (  iterable805 ) ) );
    return ( ( Map_1454_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1500 {
    struct Char_53  field0;
    int32_t  field1;
};

static struct StrConcat_1500 StrConcat_1500_StrConcat (  struct Char_53  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1500 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1499 {
    struct StrConcat_1500  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1499 StrConcat_1499_StrConcat (  struct StrConcat_1500  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1499 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1498 {
    struct StrConcat_1499  field0;
    int32_t  field1;
};

static struct StrConcat_1498 StrConcat_1498_StrConcat (  struct StrConcat_1499  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1498 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1497 {
    struct StrConcat_1498  field0;
    struct Char_53  field1;
};

static struct StrConcat_1497 StrConcat_1497_StrConcat (  struct StrConcat_1498  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1497 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   count_dash_digits1510 (    int32_t  self1430 ) {
    if ( (  eq294 ( (  self1430 ) , (  from_dash_integral44 ( 0 ) ) ) ) ) {
        return (  from_dash_integral44 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral44 ( 0 ) );
    while ( (  cmp291 ( (  self1430 ) , (  from_dash_integral44 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1482 ( (  self1430 ) , (  from_dash_integral44 ( 10 ) ) ) );
        digits1431 = (  op_dash_add248 ( (  digits1431 ) , (  from_dash_integral44 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1462   int_dash_iter1509 (    int32_t  int1434 ) {
    if ( (  cmp291 ( (  int1434 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1462) { .f_int = (  op_dash_neg610 ( (  int1434 ) ) ) , .f_len = ( (  count_dash_digits1510 ) ( (  op_dash_neg610 ( (  int1434 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1462) { .f_int = (  int1434 ) , .f_len = ( (  count_dash_digits1510 ) ( (  int1434 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1462   chars1508 (    int32_t  self1443 ) {
    return ( (  int_dash_iter1509 ) ( (  self1443 ) ) );
}

static  struct StrConcatIter_1461   into_dash_iter1507 (    struct StrConcat_1500  dref1498 ) {
    return ( (struct StrConcatIter_1461) { .f_left = ( (  chars887 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1508 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1461   chars1506 (    struct StrConcat_1500  self1509 ) {
    return ( (  into_dash_iter1507 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1460   into_dash_iter1505 (    struct StrConcat_1499  dref1498 ) {
    return ( (struct StrConcatIter_1460) { .f_left = ( (  chars1506 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars582 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1460   chars1504 (    struct StrConcat_1499  self1509 ) {
    return ( (  into_dash_iter1505 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1459   into_dash_iter1503 (    struct StrConcat_1498  dref1498 ) {
    return ( (struct StrConcatIter_1459) { .f_left = ( (  chars1504 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1508 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1459   chars1502 (    struct StrConcat_1498  self1509 ) {
    return ( (  into_dash_iter1503 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1458   into_dash_iter1501 (    struct StrConcat_1497  dref1498 ) {
    return ( (struct StrConcatIter_1458) { .f_left = ( (  chars1502 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars887 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1458   chars1496 (    struct StrConcat_1497  self1509 ) {
    return ( (  into_dash_iter1501 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1458   chars1495 (    struct Pos_20  self3584 ) {
    return ( (  chars1496 ) ( ( ( StrConcat_1497_StrConcat ) ( ( ( StrConcat_1498_StrConcat ) ( ( ( StrConcat_1499_StrConcat ) ( ( ( StrConcat_1500_StrConcat ) ( ( (  from_dash_charlike195 ) ( ( "(" ) ,  ( 1 ) ) ) ,  ( (  self3584 ) .f_line ) ) ) ,  ( (  from_dash_string194 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  self3584 ) .f_bi ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrConcatIter_1457   into_dash_iter1494 (    struct StrConcat_1450  dref1498 ) {
    return ( (struct StrConcatIter_1457) { .f_left = ( (  chars582 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1495 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1457   chars1493 (    struct StrConcat_1450  self1509 ) {
    return ( (  into_dash_iter1494 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1456   into_dash_iter1492 (    struct StrConcat_1449  dref1498 ) {
    return ( (struct StrConcatIter_1456) { .f_left = ( (  chars1493 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars582 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1456   chars1491 (    struct StrConcat_1449  self1509 ) {
    return ( (  into_dash_iter1492 ) ( (  self1509 ) ) );
}

static  struct StrViewIter_577   chars1511 (    enum CharType_986  self3794 ) {
    return ( (  chars582 ) ( ( {  enum CharType_986  dref3795 = (  self3794 ) ;  dref3795 == CharType_986_CharPunctuation ? ( (  from_dash_string194 ) ( ( "Punct" ) ,  ( 5 ) ) ) :  dref3795 == CharType_986_CharWord ? ( (  from_dash_string194 ) ( ( "Word" ) ,  ( 4 ) ) ) :  dref3795 == CharType_986_CharSpace ? ( (  from_dash_string194 ) ( ( "Space" ) ,  ( 5 ) ) ) : ( (  todo1442 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1455   into_dash_iter1490 (    struct StrConcat_1448  dref1498 ) {
    return ( (struct StrConcatIter_1455) { .f_left = ( (  chars1491 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1511 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1455   chars1489 (    struct StrConcat_1448  self1509 ) {
    return ( (  into_dash_iter1490 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1512 (    struct Screen_635 *  screen3527 ,    struct StrConcat_1448  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp291 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp291 ( (  y3533 ) , ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add248 ( (  op_dash_mul1407 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min443 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size236 ) ( (  op_dash_sub786 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct StrConcatIter_1455  temp1513 =  into_dash_iter1488 ( ( (  chars1489 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_580  __cond1514 =  next1466 (&temp1513);
        if (  __cond1514 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1514 .stuff .Maybe_580_Just_s .field0;
        ( (  put_dash_char1406 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add248 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add248 ( (  xx3538 ) , ( (  rendered_dash_wcwidth937 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1452 (    struct Screen_635 *  screen3543 ,    struct StrConcat_1448  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1453 ) ( ( (  map1487 ) ( ( (  chars1489 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth937 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub786 ( (  op_dash_sub786 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1512 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1451 (   struct env1414* env ,    struct StrConcat_1448  s4097 ) {
    ( (  draw_dash_str_dash_right1452 ) ( ( env->screen4090 ) ,  (  s4097 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( * ( env->curline4094 ) ) ) );
    (* env->curline4094 ) = (  op_dash_add248 ( ( * ( env->curline4094 ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1517 {
    struct StrView_21  field0;
    struct Maybe_28  field1;
};

static struct StrConcat_1517 StrConcat_1517_StrConcat (  struct StrView_21  field0 ,  struct Maybe_28  field1 ) {
    return ( struct StrConcat_1517 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1516 {
    enum Unit_7  (*fun) (  struct env1415*  ,    struct StrConcat_1517  );
    struct env1415 env;
};

struct StrConcatIter_1524 {
    struct StrConcatIter_1457  f_left;
    struct AppendIter_847  f_right;
};

struct StrCaseIter_1523 {
    enum {
        StrCaseIter_1523_StrCaseIter1_t,
        StrCaseIter_1523_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_577  field0;
        } StrCaseIter_1523_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1524  field0;
        } StrCaseIter_1523_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1523 StrCaseIter_1523_StrCaseIter1 (  struct StrViewIter_577  field0 ) {
    return ( struct StrCaseIter_1523 ) { .tag = StrCaseIter_1523_StrCaseIter1_t, .stuff = { .StrCaseIter_1523_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1523 StrCaseIter_1523_StrCaseIter2 (  struct StrConcatIter_1524  field0 ) {
    return ( struct StrCaseIter_1523 ) { .tag = StrCaseIter_1523_StrCaseIter2_t, .stuff = { .StrCaseIter_1523_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1522 {
    struct StrViewIter_577  f_left;
    struct StrCaseIter_1523  f_right;
};

struct Map_1521 {
    struct StrConcatIter_1522  field0;
    int32_t (*  field1 )(    struct Char_53  );
};

static struct Map_1521 Map_1521_Map (  struct StrConcatIter_1522  field0 ,  int32_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1521 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1521   into_dash_iter1526 (    struct Map_1521  self796 ) {
    return (  self796 );
}

static  struct Maybe_580   next1530 (    struct StrConcatIter_1524 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1468 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next873 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1529 (    struct StrCaseIter_1523 *  self1516 ) {
    struct StrCaseIter_1523 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1523_StrCaseIter1_t ) {
        return ( (  next581 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1523_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1523_StrCaseIter2_t ) {
            return ( (  next1530 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1523_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_580   next1528 (    struct StrConcatIter_1522 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next581 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next1529 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_246   next1527 (    struct Map_1521 *  dref798 ) {
    struct Maybe_580  dref801 = ( (  next1528 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_580_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_580_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_580_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1525 (    struct Map_1521  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1521  it1099 = ( (  into_dash_iter1526 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1100 = ( (  next1527 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_246_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_246_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1531 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1531);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1532;
    return (  temp1532 );
}

static  int32_t   lam1533 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add248 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1520 (    struct Map_1521  it1110 ) {
    return ( (  reduce1525 ) ( (  it1110 ) ,  (  from_dash_integral44 ( 0 ) ) ,  (  lam1533 ) ) );
}

static  struct StrConcatIter_1522   into_dash_iter1535 (    struct StrConcatIter_1522  self1491 ) {
    return (  self1491 );
}

static  struct Map_1521   map1534 (    struct StrConcatIter_1522  iterable805 ,    int32_t (*  fun807 )(    struct Char_53  ) ) {
    struct StrConcatIter_1522  it808 = ( (  into_dash_iter1535 ) ( (  iterable805 ) ) );
    return ( ( Map_1521_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1540 {
    struct StrConcat_1450  field0;
    struct Char_53  field1;
};

static struct StrConcat_1540 StrConcat_1540_StrConcat (  struct StrConcat_1450  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1540 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1539 {
    enum {
        StrCase_1539_StrCase1_t,
        StrCase_1539_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1539_StrCase1_s;
        struct {
            struct StrConcat_1540  field0;
        } StrCase_1539_StrCase2_s;
    } stuff;
};

static struct StrCase_1539 StrCase_1539_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1539 ) { .tag = StrCase_1539_StrCase1_t, .stuff = { .StrCase_1539_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1539 StrCase_1539_StrCase2 (  struct StrConcat_1540  field0 ) {
    return ( struct StrCase_1539 ) { .tag = StrCase_1539_StrCase2_t, .stuff = { .StrCase_1539_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1524   into_dash_iter1545 (    struct StrConcat_1540  dref1498 ) {
    return ( (struct StrConcatIter_1524) { .f_left = ( (  chars1493 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars887 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1524   chars1544 (    struct StrConcat_1540  self1509 ) {
    return ( (  into_dash_iter1545 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1523   into_dash_iter1543 (    struct StrCase_1539  self1522 ) {
    struct StrCase_1539  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1539_StrCase1_t ) {
        return ( ( StrCaseIter_1523_StrCaseIter1 ) ( ( (  chars582 ) ( ( dref1523 .stuff .StrCase_1539_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1539_StrCase2_t ) {
            return ( ( StrCaseIter_1523_StrCaseIter2 ) ( ( (  chars1544 ) ( ( dref1523 .stuff .StrCase_1539_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1523   chars1542 (    struct StrCase_1539  self1534 ) {
    return ( (  into_dash_iter1543 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1523   chars1538 (    struct Maybe_28  self1548 ) {
    struct StrCase_1539  temp1541;
    struct StrCase_1539  c1549 = (  temp1541 );
    struct Maybe_28  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_28_None_t ) {
        c1549 = ( ( StrCase_1539_StrCase1 ) ( ( (  from_dash_string194 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_28_Just_t ) {
            c1549 = ( ( StrCase_1539_StrCase2 ) ( ( ( StrConcat_1540_StrConcat ) ( ( ( StrConcat_1450_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_28_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1542 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1522   into_dash_iter1537 (    struct StrConcat_1517  dref1498 ) {
    return ( (struct StrConcatIter_1522) { .f_left = ( (  chars582 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1538 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1522   chars1536 (    struct StrConcat_1517  self1509 ) {
    return ( (  into_dash_iter1537 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1546 (    struct Screen_635 *  screen3527 ,    struct StrConcat_1517  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp291 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp291 ( (  y3533 ) , ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add248 ( (  op_dash_mul1407 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min443 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size236 ) ( (  op_dash_sub786 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct StrConcatIter_1522  temp1547 =  into_dash_iter1535 ( ( (  chars1536 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_580  __cond1548 =  next1528 (&temp1547);
        if (  __cond1548 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1548 .stuff .Maybe_580_Just_s .field0;
        ( (  put_dash_char1406 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add248 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add248 ( (  xx3538 ) , ( (  rendered_dash_wcwidth937 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1519 (    struct Screen_635 *  screen3543 ,    struct StrConcat_1517  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1520 ) ( ( (  map1534 ) ( ( (  chars1536 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth937 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub786 ( (  op_dash_sub786 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1546 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1518 (   struct env1415* env ,    struct StrConcat_1517  s4097 ) {
    ( (  draw_dash_str_dash_right1519 ) ( ( env->screen4090 ) ,  (  s4097 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( * ( env->curline4094 ) ) ) );
    (* env->curline4094 ) = (  op_dash_add248 ( ( * ( env->curline4094 ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct Take_1551 {
    struct StrViewIter_577  field0;
    size_t  field1;
};

static struct Take_1551 Take_1551_Take (  struct StrViewIter_577  field0 ,  size_t  field1 ) {
    return ( struct Take_1551 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1550 {
    struct Take_1551  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1550 StrConcat_1550_StrConcat (  struct Take_1551  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1550 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_1549 {
    enum {
        Maybe_1549_None_t,
        Maybe_1549_Just_t,
    } tag;
    union {
        struct {
            struct StrConcat_1550  field0;
        } Maybe_1549_Just_s;
    } stuff;
};

static struct Maybe_1549 Maybe_1549_Just (  struct StrConcat_1550  field0 ) {
    return ( struct Maybe_1549 ) { .tag = Maybe_1549_Just_t, .stuff = { .Maybe_1549_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1549   fmap_dash_maybe1552 (    struct Maybe_120  x1275 ,    struct StrConcat_1550 (*  fun1277 )(    struct StrView_21  ) ) {
    struct Maybe_120  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_120_None_t ) {
        return ( (struct Maybe_1549) { .tag = Maybe_1549_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_120_Just_t ) {
            return ( ( Maybe_1549_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_120_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Take_1551   take1554 (    struct StrView_21  it867 ,    size_t  i869 ) {
    return ( ( Take_1551_Take ) ( ( (  into_dash_iter583 ) ( (  it867 ) ) ) ,  (  i869 ) ) );
}

struct Drop_1556 {
    struct StrViewIter_577  field0;
    size_t  field1;
};

static struct Drop_1556 Drop_1556_Drop (  struct StrViewIter_577  field0 ,  size_t  field1 ) {
    return ( struct Drop_1556 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Maybe_580   next1558 (    struct Drop_1556 *  dref847 ) {
    while ( (  cmp158 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next581 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub278 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next581 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Drop_1556   into_dash_iter1560 (    struct Drop_1556  self845 ) {
    return (  self845 );
}

static  struct Maybe_580   head1557 (    struct Drop_1556  it1142 ) {
    struct Drop_1556  temp1559 = ( (  into_dash_iter1560 ) ( (  it1142 ) ) );
    return ( (  next1558 ) ( ( &temp1559 ) ) );
}

static  bool   null1555 (    struct Drop_1556  it1151 ) {
    struct Maybe_580  dref1152 = ( (  head1557 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_580_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Drop_1556   drop1561 (    struct StrView_21  iterable852 ,    size_t  i854 ) {
    struct StrViewIter_577  it855 = ( (  into_dash_iter583 ) ( (  iterable852 ) ) );
    return ( ( Drop_1556_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct StrConcat_1550   lam1553 (    struct StrView_21  s4100 ) {
    return ( ( StrConcat_1550_StrConcat ) ( ( (  take1554 ) ( (  s4100 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ,  ( ( (  null1555 ) ( ( (  drop1561 ) ( (  s4100 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ) ) ? ( (  from_dash_string194 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_string194 ) ( ( "..." ) ,  ( 3 ) ) ) ) ) );
}

struct StrConcat_1564 {
    struct StrView_21  field0;
    struct Maybe_1549  field1;
};

static struct StrConcat_1564 StrConcat_1564_StrConcat (  struct StrView_21  field0 ,  struct Maybe_1549  field1 ) {
    return ( struct StrConcat_1564 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1563 {
    enum Unit_7  (*fun) (  struct env1416*  ,    struct StrConcat_1564  );
    struct env1416 env;
};

struct StrConcatIter_1573 {
    struct Take_1551  f_left;
    struct StrViewIter_577  f_right;
};

struct StrConcatIter_1572 {
    struct StrViewIter_577  f_left;
    struct StrConcatIter_1573  f_right;
};

struct StrConcatIter_1571 {
    struct StrConcatIter_1572  f_left;
    struct AppendIter_847  f_right;
};

struct StrCaseIter_1570 {
    enum {
        StrCaseIter_1570_StrCaseIter1_t,
        StrCaseIter_1570_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_577  field0;
        } StrCaseIter_1570_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1571  field0;
        } StrCaseIter_1570_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1570 StrCaseIter_1570_StrCaseIter1 (  struct StrViewIter_577  field0 ) {
    return ( struct StrCaseIter_1570 ) { .tag = StrCaseIter_1570_StrCaseIter1_t, .stuff = { .StrCaseIter_1570_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1570 StrCaseIter_1570_StrCaseIter2 (  struct StrConcatIter_1571  field0 ) {
    return ( struct StrCaseIter_1570 ) { .tag = StrCaseIter_1570_StrCaseIter2_t, .stuff = { .StrCaseIter_1570_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1569 {
    struct StrViewIter_577  f_left;
    struct StrCaseIter_1570  f_right;
};

struct Map_1568 {
    struct StrConcatIter_1569  field0;
    int32_t (*  field1 )(    struct Char_53  );
};

static struct Map_1568 Map_1568_Map (  struct StrConcatIter_1569  field0 ,  int32_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1568 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1568   into_dash_iter1575 (    struct Map_1568  self796 ) {
    return (  self796 );
}

static  struct Maybe_580   next1582 (    struct Take_1551 *  dref861 ) {
    if ( (  cmp158 ( ( (* dref861 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_580  x864 = ( (  next581 ) ( ( & ( (* dref861 ) .field0 ) ) ) );
        (* dref861 ) .field1 = (  op_dash_sub278 ( ( (* dref861 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
        return (  x864 );
    } else {
        return ( (struct Maybe_580) { .tag = Maybe_580_None_t } );
    }
}

static  struct Maybe_580   next1581 (    struct StrConcatIter_1573 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1582 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next581 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1580 (    struct StrConcatIter_1572 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next581 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next1581 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1579 (    struct StrConcatIter_1571 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1580 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next873 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1578 (    struct StrCaseIter_1570 *  self1516 ) {
    struct StrCaseIter_1570 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1570_StrCaseIter1_t ) {
        return ( (  next581 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1570_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1570_StrCaseIter2_t ) {
            return ( (  next1579 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1570_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_580   next1577 (    struct StrConcatIter_1569 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next581 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next1578 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_246   next1576 (    struct Map_1568 *  dref798 ) {
    struct Maybe_580  dref801 = ( (  next1577 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_580_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_580_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_580_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1574 (    struct Map_1568  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1568  it1099 = ( (  into_dash_iter1575 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1100 = ( (  next1576 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_246_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_246_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1583 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1583);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1584;
    return (  temp1584 );
}

static  int32_t   lam1585 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add248 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1567 (    struct Map_1568  it1110 ) {
    return ( (  reduce1574 ) ( (  it1110 ) ,  (  from_dash_integral44 ( 0 ) ) ,  (  lam1585 ) ) );
}

static  struct StrConcatIter_1569   into_dash_iter1587 (    struct StrConcatIter_1569  self1491 ) {
    return (  self1491 );
}

static  struct Map_1568   map1586 (    struct StrConcatIter_1569  iterable805 ,    int32_t (*  fun807 )(    struct Char_53  ) ) {
    struct StrConcatIter_1569  it808 = ( (  into_dash_iter1587 ) ( (  iterable805 ) ) );
    return ( ( Map_1568_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1593 {
    struct StrView_21  field0;
    struct StrConcat_1550  field1;
};

static struct StrConcat_1593 StrConcat_1593_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_1550  field1 ) {
    return ( struct StrConcat_1593 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1592 {
    struct StrConcat_1593  field0;
    struct Char_53  field1;
};

static struct StrConcat_1592 StrConcat_1592_StrConcat (  struct StrConcat_1593  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1592 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1591 {
    enum {
        StrCase_1591_StrCase1_t,
        StrCase_1591_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1591_StrCase1_s;
        struct {
            struct StrConcat_1592  field0;
        } StrCase_1591_StrCase2_s;
    } stuff;
};

static struct StrCase_1591 StrCase_1591_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1591 ) { .tag = StrCase_1591_StrCase1_t, .stuff = { .StrCase_1591_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1591 StrCase_1591_StrCase2 (  struct StrConcat_1592  field0 ) {
    return ( struct StrCase_1591 ) { .tag = StrCase_1591_StrCase2_t, .stuff = { .StrCase_1591_StrCase2_s = { .field0 = field0 } } };
};

static  struct Take_1551   chars1603 (    struct Take_1551  self1639 ) {
    return (  self1639 );
}

static  struct StrConcatIter_1573   into_dash_iter1602 (    struct StrConcat_1550  dref1498 ) {
    return ( (struct StrConcatIter_1573) { .f_left = ( (  chars1603 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars582 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1573   chars1601 (    struct StrConcat_1550  self1509 ) {
    return ( (  into_dash_iter1602 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1572   into_dash_iter1600 (    struct StrConcat_1593  dref1498 ) {
    return ( (struct StrConcatIter_1572) { .f_left = ( (  chars582 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1601 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1572   chars1599 (    struct StrConcat_1593  self1509 ) {
    return ( (  into_dash_iter1600 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1571   into_dash_iter1598 (    struct StrConcat_1592  dref1498 ) {
    return ( (struct StrConcatIter_1571) { .f_left = ( (  chars1599 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars887 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1571   chars1597 (    struct StrConcat_1592  self1509 ) {
    return ( (  into_dash_iter1598 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1570   into_dash_iter1596 (    struct StrCase_1591  self1522 ) {
    struct StrCase_1591  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1591_StrCase1_t ) {
        return ( ( StrCaseIter_1570_StrCaseIter1 ) ( ( (  chars582 ) ( ( dref1523 .stuff .StrCase_1591_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1591_StrCase2_t ) {
            return ( ( StrCaseIter_1570_StrCaseIter2 ) ( ( (  chars1597 ) ( ( dref1523 .stuff .StrCase_1591_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1570   chars1595 (    struct StrCase_1591  self1534 ) {
    return ( (  into_dash_iter1596 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1570   chars1590 (    struct Maybe_1549  self1548 ) {
    struct StrCase_1591  temp1594;
    struct StrCase_1591  c1549 = (  temp1594 );
    struct Maybe_1549  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_1549_None_t ) {
        c1549 = ( ( StrCase_1591_StrCase1 ) ( ( (  from_dash_string194 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_1549_Just_t ) {
            c1549 = ( ( StrCase_1591_StrCase2 ) ( ( ( StrConcat_1592_StrConcat ) ( ( ( StrConcat_1593_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_1549_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1595 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1569   into_dash_iter1589 (    struct StrConcat_1564  dref1498 ) {
    return ( (struct StrConcatIter_1569) { .f_left = ( (  chars582 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1590 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1569   chars1588 (    struct StrConcat_1564  self1509 ) {
    return ( (  into_dash_iter1589 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1604 (    struct Screen_635 *  screen3527 ,    struct StrConcat_1564  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp291 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp291 ( (  y3533 ) , ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add248 ( (  op_dash_mul1407 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min443 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size236 ) ( (  op_dash_sub786 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct StrConcatIter_1569  temp1605 =  into_dash_iter1587 ( ( (  chars1588 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_580  __cond1606 =  next1577 (&temp1605);
        if (  __cond1606 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1606 .stuff .Maybe_580_Just_s .field0;
        ( (  put_dash_char1406 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add248 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add248 ( (  xx3538 ) , ( (  rendered_dash_wcwidth937 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1566 (    struct Screen_635 *  screen3543 ,    struct StrConcat_1564  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1567 ) ( ( (  map1586 ) ( ( (  chars1588 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth937 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub786 ( (  op_dash_sub786 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1604 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1565 (   struct env1416* env ,    struct StrConcat_1564  s4097 ) {
    ( (  draw_dash_str_dash_right1566 ) ( ( env->screen4090 ) ,  (  s4097 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( * ( env->curline4094 ) ) ) );
    (* env->curline4094 ) = (  op_dash_add248 ( ( * ( env->curline4094 ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1609 {
    struct StrView_21  field0;
    struct EditorMode_121  field1;
};

static struct StrConcat_1609 StrConcat_1609_StrConcat (  struct StrView_21  field0 ,  struct EditorMode_121  field1 ) {
    return ( struct StrConcat_1609 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1608 {
    enum Unit_7  (*fun) (  struct env1417*  ,    struct StrConcat_1609  );
    struct env1417 env;
};

struct StrConcatIter_1616 {
    struct StrConcatIter_1429  f_left;
    struct AppendIter_847  f_right;
};

struct StrCaseIter_1615 {
    enum {
        StrCaseIter_1615_StrCaseIter1_t,
        StrCaseIter_1615_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_577  field0;
        } StrCaseIter_1615_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1616  field0;
        } StrCaseIter_1615_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1615 StrCaseIter_1615_StrCaseIter1 (  struct StrViewIter_577  field0 ) {
    return ( struct StrCaseIter_1615 ) { .tag = StrCaseIter_1615_StrCaseIter1_t, .stuff = { .StrCaseIter_1615_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1615 StrCaseIter_1615_StrCaseIter2 (  struct StrConcatIter_1616  field0 ) {
    return ( struct StrCaseIter_1615 ) { .tag = StrCaseIter_1615_StrCaseIter2_t, .stuff = { .StrCaseIter_1615_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1614 {
    struct StrViewIter_577  f_left;
    struct StrCaseIter_1615  f_right;
};

struct Map_1613 {
    struct StrConcatIter_1614  field0;
    int32_t (*  field1 )(    struct Char_53  );
};

static struct Map_1613 Map_1613_Map (  struct StrConcatIter_1614  field0 ,  int32_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1613 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1613   into_dash_iter1618 (    struct Map_1613  self796 ) {
    return (  self796 );
}

static  struct Maybe_580   next1622 (    struct StrConcatIter_1616 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1433 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next873 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1621 (    struct StrCaseIter_1615 *  self1516 ) {
    struct StrCaseIter_1615 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1615_StrCaseIter1_t ) {
        return ( (  next581 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1615_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1615_StrCaseIter2_t ) {
            return ( (  next1622 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1615_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_580   next1620 (    struct StrConcatIter_1614 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next581 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next1621 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_246   next1619 (    struct Map_1613 *  dref798 ) {
    struct Maybe_580  dref801 = ( (  next1620 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_580_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_580_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_580_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1617 (    struct Map_1613  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1613  it1099 = ( (  into_dash_iter1618 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1100 = ( (  next1619 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_246_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_246_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1623 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1623);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1624;
    return (  temp1624 );
}

static  int32_t   lam1625 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add248 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1612 (    struct Map_1613  it1110 ) {
    return ( (  reduce1617 ) ( (  it1110 ) ,  (  from_dash_integral44 ( 0 ) ) ,  (  lam1625 ) ) );
}

static  struct StrConcatIter_1614   into_dash_iter1627 (    struct StrConcatIter_1614  self1491 ) {
    return (  self1491 );
}

static  struct Map_1613   map1626 (    struct StrConcatIter_1614  iterable805 ,    int32_t (*  fun807 )(    struct Char_53  ) ) {
    struct StrConcatIter_1614  it808 = ( (  into_dash_iter1627 ) ( (  iterable805 ) ) );
    return ( ( Map_1613_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1633 {
    struct StrView_21  field0;
    struct StrBuilder_50  field1;
};

static struct StrConcat_1633 StrConcat_1633_StrConcat (  struct StrView_21  field0 ,  struct StrBuilder_50  field1 ) {
    return ( struct StrConcat_1633 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1632 {
    struct StrConcat_1633  field0;
    struct Char_53  field1;
};

static struct StrConcat_1632 StrConcat_1632_StrConcat (  struct StrConcat_1633  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1632 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1631 {
    enum {
        StrCase_1631_StrCase1_t,
        StrCase_1631_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1631_StrCase1_s;
        struct {
            struct StrConcat_1632  field0;
        } StrCase_1631_StrCase2_s;
    } stuff;
};

static struct StrCase_1631 StrCase_1631_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1631 ) { .tag = StrCase_1631_StrCase1_t, .stuff = { .StrCase_1631_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1631 StrCase_1631_StrCase2 (  struct StrConcat_1632  field0 ) {
    return ( struct StrCase_1631 ) { .tag = StrCase_1631_StrCase2_t, .stuff = { .StrCase_1631_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrCaseIter_1615   undefined1636 (  ) {
    struct StrCaseIter_1615  temp1637;
    return (  temp1637 );
}

static  struct StrCaseIter_1615   todo1635 (  ) {
    ( (  print1001 ) ( ( (  from_dash_string194 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( (  undefined1636 ) ( ) );
}

static  struct StrViewIter_577   chars1644 (    struct StrBuilder_50  s2801 ) {
    return ( (  into_dash_iter583 ) ( ( (  as_dash_str1260 ) ( ( & (  s2801 ) ) ) ) ) );
}

static  struct StrConcatIter_1429   into_dash_iter1643 (    struct StrConcat_1633  dref1498 ) {
    return ( (struct StrConcatIter_1429) { .f_left = ( (  chars582 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1644 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1429   chars1642 (    struct StrConcat_1633  self1509 ) {
    return ( (  into_dash_iter1643 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1616   into_dash_iter1641 (    struct StrConcat_1632  dref1498 ) {
    return ( (struct StrConcatIter_1616) { .f_left = ( (  chars1642 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars887 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1616   chars1640 (    struct StrConcat_1632  self1509 ) {
    return ( (  into_dash_iter1641 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1615   into_dash_iter1639 (    struct StrCase_1631  self1522 ) {
    struct StrCase_1631  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1631_StrCase1_t ) {
        return ( ( StrCaseIter_1615_StrCaseIter1 ) ( ( (  chars582 ) ( ( dref1523 .stuff .StrCase_1631_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1631_StrCase2_t ) {
            return ( ( StrCaseIter_1615_StrCaseIter2 ) ( ( (  chars1640 ) ( ( dref1523 .stuff .StrCase_1631_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1615   chars1638 (    struct StrCase_1631  self1534 ) {
    return ( (  into_dash_iter1639 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1615   chars1630 (    struct EditorMode_121  self4026 ) {
    struct StrCase_1631  temp1634;
    struct StrCase_1631  c4027 = (  temp1634 );
    struct EditorMode_121  dref4028 = (  self4026 );
    if ( dref4028.tag == EditorMode_121_Normal_t ) {
        c4027 = ( ( StrCase_1631_StrCase1 ) ( ( (  from_dash_string194 ) ( ( "Normal" ) ,  ( 6 ) ) ) ) );
    }
    else {
        if ( dref4028.tag == EditorMode_121_Cmd_t ) {
            c4027 = ( ( StrCase_1631_StrCase2 ) ( ( ( StrConcat_1632_StrConcat ) ( ( ( StrConcat_1633_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Cmd(" ) ,  ( 4 ) ) ) ,  ( dref4028 .stuff .EditorMode_121_Cmd_s .field0 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
        else {
            if ( true ) {
                return ( (  todo1635 ) ( ) );
            }
        }
    }
    return ( (  chars1638 ) ( (  c4027 ) ) );
}

static  struct StrConcatIter_1614   into_dash_iter1629 (    struct StrConcat_1609  dref1498 ) {
    return ( (struct StrConcatIter_1614) { .f_left = ( (  chars582 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1630 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1614   chars1628 (    struct StrConcat_1609  self1509 ) {
    return ( (  into_dash_iter1629 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1645 (    struct Screen_635 *  screen3527 ,    struct StrConcat_1609  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp291 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp291 ( (  y3533 ) , ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add248 ( (  op_dash_mul1407 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min443 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size236 ) ( (  op_dash_sub786 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct StrConcatIter_1614  temp1646 =  into_dash_iter1627 ( ( (  chars1628 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_580  __cond1647 =  next1620 (&temp1646);
        if (  __cond1647 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1647 .stuff .Maybe_580_Just_s .field0;
        ( (  put_dash_char1406 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add248 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add248 ( (  xx3538 ) , ( (  rendered_dash_wcwidth937 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1611 (    struct Screen_635 *  screen3543 ,    struct StrConcat_1609  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1612 ) ( ( (  map1626 ) ( ( (  chars1628 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth937 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub786 ( (  op_dash_sub786 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1645 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1610 (   struct env1417* env ,    struct StrConcat_1609  s4097 ) {
    ( (  draw_dash_str_dash_right1611 ) ( ( env->screen4090 ) ,  (  s4097 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( * ( env->curline4094 ) ) ) );
    (* env->curline4094 ) = (  op_dash_add248 ( ( * ( env->curline4094 ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1650 {
    struct StrView_21  field0;
    struct Maybe_120  field1;
};

static struct StrConcat_1650 StrConcat_1650_StrConcat (  struct StrView_21  field0 ,  struct Maybe_120  field1 ) {
    return ( struct StrConcat_1650 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1649 {
    enum Unit_7  (*fun) (  struct env1418*  ,    struct StrConcat_1650  );
    struct env1418 env;
};

struct StrCase_1656 {
    enum {
        StrCase_1656_StrCase1_t,
        StrCase_1656_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1656_StrCase1_s;
        struct {
            struct StrConcat_453  field0;
        } StrCase_1656_StrCase2_s;
    } stuff;
};

static struct StrCase_1656 StrCase_1656_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1656 ) { .tag = StrCase_1656_StrCase1_t, .stuff = { .StrCase_1656_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1656 StrCase_1656_StrCase2 (  struct StrConcat_453  field0 ) {
    return ( struct StrCase_1656 ) { .tag = StrCase_1656_StrCase2_t, .stuff = { .StrCase_1656_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1429   into_dash_iter1663 (    struct StrConcat_454  dref1498 ) {
    return ( (struct StrConcatIter_1429) { .f_left = ( (  chars582 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars582 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1429   chars1662 (    struct StrConcat_454  self1509 ) {
    return ( (  into_dash_iter1663 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1616   into_dash_iter1661 (    struct StrConcat_453  dref1498 ) {
    return ( (struct StrConcatIter_1616) { .f_left = ( (  chars1662 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars887 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1616   chars1660 (    struct StrConcat_453  self1509 ) {
    return ( (  into_dash_iter1661 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1615   into_dash_iter1659 (    struct StrCase_1656  self1522 ) {
    struct StrCase_1656  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1656_StrCase1_t ) {
        return ( ( StrCaseIter_1615_StrCaseIter1 ) ( ( (  chars582 ) ( ( dref1523 .stuff .StrCase_1656_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1656_StrCase2_t ) {
            return ( ( StrCaseIter_1615_StrCaseIter2 ) ( ( (  chars1660 ) ( ( dref1523 .stuff .StrCase_1656_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1615   chars1658 (    struct StrCase_1656  self1534 ) {
    return ( (  into_dash_iter1659 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1615   chars1655 (    struct Maybe_120  self1548 ) {
    struct StrCase_1656  temp1657;
    struct StrCase_1656  c1549 = (  temp1657 );
    struct Maybe_120  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_120_None_t ) {
        c1549 = ( ( StrCase_1656_StrCase1 ) ( ( (  from_dash_string194 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_120_Just_t ) {
            c1549 = ( ( StrCase_1656_StrCase2 ) ( ( ( StrConcat_453_StrConcat ) ( ( ( StrConcat_454_StrConcat ) ( ( (  from_dash_string194 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_120_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1658 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1614   into_dash_iter1654 (    struct StrConcat_1650  dref1498 ) {
    return ( (struct StrConcatIter_1614) { .f_left = ( (  chars582 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1655 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1614   chars1653 (    struct StrConcat_1650  self1509 ) {
    return ( (  into_dash_iter1654 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1664 (    struct Screen_635 *  screen3527 ,    struct StrConcat_1650  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp291 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp291 ( (  y3533 ) , ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add248 ( (  op_dash_mul1407 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min443 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size236 ) ( (  op_dash_sub786 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct StrConcatIter_1614  temp1665 =  into_dash_iter1627 ( ( (  chars1653 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_580  __cond1666 =  next1620 (&temp1665);
        if (  __cond1666 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1666 .stuff .Maybe_580_Just_s .field0;
        ( (  put_dash_char1406 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add248 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add248 ( (  xx3538 ) , ( (  rendered_dash_wcwidth937 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1652 (    struct Screen_635 *  screen3543 ,    struct StrConcat_1650  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1612 ) ( ( (  map1626 ) ( ( (  chars1653 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth937 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub786 ( (  op_dash_sub786 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1664 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1651 (   struct env1418* env ,    struct StrConcat_1650  s4097 ) {
    ( (  draw_dash_str_dash_right1652 ) ( ( env->screen4090 ) ,  (  s4097 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( * ( env->curline4094 ) ) ) );
    (* env->curline4094 ) = (  op_dash_add248 ( ( * ( env->curline4094 ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1671 {
    struct StrConcat_1392  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1671 StrConcat_1671_StrConcat (  struct StrConcat_1392  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1671 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1670 {
    struct StrConcat_1671  field0;
    int32_t  field1;
};

static struct StrConcat_1670 StrConcat_1670_StrConcat (  struct StrConcat_1671  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1670 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1669 {
    struct StrConcat_1670  field0;
    struct Char_53  field1;
};

static struct StrConcat_1669 StrConcat_1669_StrConcat (  struct StrConcat_1670  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1669 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1668 {
    enum Unit_7  (*fun) (  struct env1419*  ,    struct StrConcat_1669  );
    struct env1419 env;
};

struct StrConcatIter_1679 {
    struct StrViewIter_577  f_left;
    struct IntStrIter_1462  f_right;
};

struct StrConcatIter_1678 {
    struct StrConcatIter_1679  f_left;
    struct StrViewIter_577  f_right;
};

struct StrConcatIter_1677 {
    struct StrConcatIter_1678  f_left;
    struct IntStrIter_1462  f_right;
};

struct StrConcatIter_1676 {
    struct StrConcatIter_1677  f_left;
    struct AppendIter_847  f_right;
};

struct Map_1675 {
    struct StrConcatIter_1676  field0;
    int32_t (*  field1 )(    struct Char_53  );
};

static struct Map_1675 Map_1675_Map (  struct StrConcatIter_1676  field0 ,  int32_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1675 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1675   into_dash_iter1681 (    struct Map_1675  self796 ) {
    return (  self796 );
}

static  struct Maybe_580   next1686 (    struct StrConcatIter_1679 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next581 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next1473 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1685 (    struct StrConcatIter_1678 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1686 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next581 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1684 (    struct StrConcatIter_1677 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1685 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next1473 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1683 (    struct StrConcatIter_1676 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1684 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next873 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_246   next1682 (    struct Map_1675 *  dref798 ) {
    struct Maybe_580  dref801 = ( (  next1683 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_580_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_580_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_580_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1680 (    struct Map_1675  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1675  it1099 = ( (  into_dash_iter1681 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1100 = ( (  next1682 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_246_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_246_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1687 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1687);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1688;
    return (  temp1688 );
}

static  int32_t   lam1689 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add248 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1674 (    struct Map_1675  it1110 ) {
    return ( (  reduce1680 ) ( (  it1110 ) ,  (  from_dash_integral44 ( 0 ) ) ,  (  lam1689 ) ) );
}

static  struct StrConcatIter_1676   into_dash_iter1691 (    struct StrConcatIter_1676  self1491 ) {
    return (  self1491 );
}

static  struct Map_1675   map1690 (    struct StrConcatIter_1676  iterable805 ,    int32_t (*  fun807 )(    struct Char_53  ) ) {
    struct StrConcatIter_1676  it808 = ( (  into_dash_iter1691 ) ( (  iterable805 ) ) );
    return ( ( Map_1675_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_1679   into_dash_iter1699 (    struct StrConcat_1392  dref1498 ) {
    return ( (struct StrConcatIter_1679) { .f_left = ( (  chars582 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1508 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1679   chars1698 (    struct StrConcat_1392  self1509 ) {
    return ( (  into_dash_iter1699 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1678   into_dash_iter1697 (    struct StrConcat_1671  dref1498 ) {
    return ( (struct StrConcatIter_1678) { .f_left = ( (  chars1698 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars582 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1678   chars1696 (    struct StrConcat_1671  self1509 ) {
    return ( (  into_dash_iter1697 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1677   into_dash_iter1695 (    struct StrConcat_1670  dref1498 ) {
    return ( (struct StrConcatIter_1677) { .f_left = ( (  chars1696 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1508 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1677   chars1694 (    struct StrConcat_1670  self1509 ) {
    return ( (  into_dash_iter1695 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1676   into_dash_iter1693 (    struct StrConcat_1669  dref1498 ) {
    return ( (struct StrConcatIter_1676) { .f_left = ( (  chars1694 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars887 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1676   chars1692 (    struct StrConcat_1669  self1509 ) {
    return ( (  into_dash_iter1693 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1700 (    struct Screen_635 *  screen3527 ,    struct StrConcat_1669  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp291 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp291 ( (  y3533 ) , ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add248 ( (  op_dash_mul1407 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min443 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size236 ) ( (  op_dash_sub786 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct StrConcatIter_1676  temp1701 =  into_dash_iter1691 ( ( (  chars1692 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_580  __cond1702 =  next1683 (&temp1701);
        if (  __cond1702 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1702 .stuff .Maybe_580_Just_s .field0;
        ( (  put_dash_char1406 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add248 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add248 ( (  xx3538 ) , ( (  rendered_dash_wcwidth937 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1673 (    struct Screen_635 *  screen3543 ,    struct StrConcat_1669  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1674 ) ( ( (  map1690 ) ( ( (  chars1692 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth937 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub786 ( (  op_dash_sub786 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1700 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1672 (   struct env1419* env ,    struct StrConcat_1669  s4097 ) {
    ( (  draw_dash_str_dash_right1673 ) ( ( env->screen4090 ) ,  (  s4097 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( * ( env->curline4094 ) ) ) );
    (* env->curline4094 ) = (  op_dash_add248 ( ( * ( env->curline4094 ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1705 {
    struct StrConcat_1670  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1705 StrConcat_1705_StrConcat (  struct StrConcat_1670  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1705 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1704 {
    enum Unit_7  (*fun) (  struct env1420*  ,    struct StrConcat_1705  );
    struct env1420 env;
};

struct StrConcatIter_1710 {
    struct StrConcatIter_1677  f_left;
    struct StrViewIter_577  f_right;
};

struct Map_1709 {
    struct StrConcatIter_1710  field0;
    int32_t (*  field1 )(    struct Char_53  );
};

static struct Map_1709 Map_1709_Map (  struct StrConcatIter_1710  field0 ,  int32_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1709 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1709   into_dash_iter1712 (    struct Map_1709  self796 ) {
    return (  self796 );
}

static  struct Maybe_580   next1714 (    struct StrConcatIter_1710 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1684 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next581 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_246   next1713 (    struct Map_1709 *  dref798 ) {
    struct Maybe_580  dref801 = ( (  next1714 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_580_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_580_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_580_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1711 (    struct Map_1709  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1709  it1099 = ( (  into_dash_iter1712 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1100 = ( (  next1713 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_246_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_246_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1715 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1715);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1716;
    return (  temp1716 );
}

static  int32_t   lam1717 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add248 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1708 (    struct Map_1709  it1110 ) {
    return ( (  reduce1711 ) ( (  it1110 ) ,  (  from_dash_integral44 ( 0 ) ) ,  (  lam1717 ) ) );
}

static  struct StrConcatIter_1710   into_dash_iter1719 (    struct StrConcatIter_1710  self1491 ) {
    return (  self1491 );
}

static  struct Map_1709   map1718 (    struct StrConcatIter_1710  iterable805 ,    int32_t (*  fun807 )(    struct Char_53  ) ) {
    struct StrConcatIter_1710  it808 = ( (  into_dash_iter1719 ) ( (  iterable805 ) ) );
    return ( ( Map_1709_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_1710   into_dash_iter1721 (    struct StrConcat_1705  dref1498 ) {
    return ( (struct StrConcatIter_1710) { .f_left = ( (  chars1694 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars582 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1710   chars1720 (    struct StrConcat_1705  self1509 ) {
    return ( (  into_dash_iter1721 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1722 (    struct Screen_635 *  screen3527 ,    struct StrConcat_1705  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp291 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp291 ( (  y3533 ) , ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add248 ( (  op_dash_mul1407 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min443 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size236 ) ( (  op_dash_sub786 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct StrConcatIter_1710  temp1723 =  into_dash_iter1719 ( ( (  chars1720 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_580  __cond1724 =  next1714 (&temp1723);
        if (  __cond1724 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1724 .stuff .Maybe_580_Just_s .field0;
        ( (  put_dash_char1406 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add248 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add248 ( (  xx3538 ) , ( (  rendered_dash_wcwidth937 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1707 (    struct Screen_635 *  screen3543 ,    struct StrConcat_1705  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1708 ) ( ( (  map1718 ) ( ( (  chars1720 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth937 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub786 ( (  op_dash_sub786 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1722 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1706 (   struct env1420* env ,    struct StrConcat_1705  s4097 ) {
    ( (  draw_dash_str_dash_right1707 ) ( ( env->screen4090 ) ,  (  s4097 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( * ( env->curline4094 ) ) ) );
    (* env->curline4094 ) = (  op_dash_add248 ( ( * ( env->curline4094 ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct envunion1726 {
    enum Unit_7  (*fun) (  struct env1421*  ,    struct StrConcat_58  );
    struct env1421 env;
};

struct Map_1730 {
    struct StrConcatIter_1223  field0;
    int32_t (*  field1 )(    struct Char_53  );
};

static struct Map_1730 Map_1730_Map (  struct StrConcatIter_1223  field0 ,  int32_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1730 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1730   into_dash_iter1732 (    struct Map_1730  self796 ) {
    return (  self796 );
}

static  struct Maybe_246   next1733 (    struct Map_1730 *  dref798 ) {
    struct Maybe_580  dref801 = ( (  next1230 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_580_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_580_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_580_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1731 (    struct Map_1730  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1730  it1099 = ( (  into_dash_iter1732 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1100 = ( (  next1733 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_246_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_246_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1734 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1734);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1735;
    return (  temp1735 );
}

static  int32_t   lam1736 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add248 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1729 (    struct Map_1730  it1110 ) {
    return ( (  reduce1731 ) ( (  it1110 ) ,  (  from_dash_integral44 ( 0 ) ) ,  (  lam1736 ) ) );
}

static  struct StrConcatIter_1223   into_dash_iter1738 (    struct StrConcatIter_1223  self1491 ) {
    return (  self1491 );
}

static  struct Map_1730   map1737 (    struct StrConcatIter_1223  iterable805 ,    int32_t (*  fun807 )(    struct Char_53  ) ) {
    struct StrConcatIter_1223  it808 = ( (  into_dash_iter1738 ) ( (  iterable805 ) ) );
    return ( ( Map_1730_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  enum Unit_7   draw_dash_str1739 (    struct Screen_635 *  screen3527 ,    struct StrConcat_58  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp291 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp291 ( (  y3533 ) , ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add248 ( (  op_dash_mul1407 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min443 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size236 ) ( (  op_dash_sub786 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct StrConcatIter_1223  temp1740 =  into_dash_iter1738 ( ( (  chars1244 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_580  __cond1741 =  next1230 (&temp1740);
        if (  __cond1741 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1741 .stuff .Maybe_580_Just_s .field0;
        ( (  put_dash_char1406 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add248 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add248 ( (  xx3538 ) , ( (  rendered_dash_wcwidth937 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1728 (    struct Screen_635 *  screen3543 ,    struct StrConcat_58  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1729 ) ( ( (  map1737 ) ( ( (  chars1244 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth937 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub786 ( (  op_dash_sub786 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1739 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1727 (   struct env1421* env ,    struct StrConcat_58  s4097 ) {
    ( (  draw_dash_str_dash_right1728 ) ( ( env->screen4090 ) ,  (  s4097 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( * ( env->curline4094 ) ) ) );
    (* env->curline4094 ) = (  op_dash_add248 ( ( * ( env->curline4094 ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   render_dash_editor1381 (    struct Screen_635 *  screen4090 ,    struct Editor_116 *  ed4092 ) {
    struct ScreenDims_1382  screen_dash_dims4093 = ( (struct ScreenDims_1382) { .f_from_dash_sx = (  from_dash_integral44 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub786 ( ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen4090 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral44 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub786 ( ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen4090 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) } );
    ( (  render1385 ) ( (  screen4090 ) ,  ( (  pane962 ) ( (  ed4092 ) ) ) ,  (  screen_dash_dims4093 ) ) );
    int32_t  temp1412 = (  from_dash_integral44 ( 0 ) );
    int32_t *  curline4094 = ( &temp1412 );
    struct env1413 envinst1413 = {
        .screen4090 =  screen4090 ,
        .curline4094 =  curline4094 ,
    };
    struct env1414 envinst1414 = {
        .screen4090 =  screen4090 ,
        .curline4094 =  curline4094 ,
    };
    struct env1415 envinst1415 = {
        .screen4090 =  screen4090 ,
        .curline4094 =  curline4094 ,
    };
    struct env1416 envinst1416 = {
        .screen4090 =  screen4090 ,
        .curline4094 =  curline4094 ,
    };
    struct env1417 envinst1417 = {
        .screen4090 =  screen4090 ,
        .curline4094 =  curline4094 ,
    };
    struct env1418 envinst1418 = {
        .screen4090 =  screen4090 ,
        .curline4094 =  curline4094 ,
    };
    struct env1419 envinst1419 = {
        .screen4090 =  screen4090 ,
        .curline4094 =  curline4094 ,
    };
    struct env1420 envinst1420 = {
        .screen4090 =  screen4090 ,
        .curline4094 =  curline4094 ,
    };
    struct env1421 envinst1421 = {
        .screen4090 =  screen4090 ,
        .curline4094 =  curline4094 ,
    };
    struct envunion1423  temp1422 = ( (struct envunion1423){ .fun = (  enum Unit_7  (*) (  struct env1413*  ,    struct StrConcat_1424  ) )ann1425 , .env =  envinst1413 } );
    ( temp1422.fun ( &temp1422.env ,  ( ( StrConcat_1424_StrConcat ) ( ( (  from_dash_string194 ) ( ( "mode: " ) ,  ( 6 ) ) ) ,  ( ( ( * (  ed4092 ) ) .f_pane ) .f_mode ) ) ) ) );
    enum CharType_986  cur_dash_ty4098 = ( (  char_dash_type988 ) ( ( (  char_dash_at996 ) ( ( (  pane962 ) ( (  ed4092 ) ) ) ,  ( ( ( * (  ed4092 ) ) .f_pane ) .f_cursor ) ) ) ) );
    struct envunion1447  temp1446 = ( (struct envunion1447){ .fun = (  enum Unit_7  (*) (  struct env1414*  ,    struct StrConcat_1448  ) )ann1451 , .env =  envinst1414 } );
    ( temp1446.fun ( &temp1446.env ,  ( ( StrConcat_1448_StrConcat ) ( ( ( StrConcat_1449_StrConcat ) ( ( ( StrConcat_1450_StrConcat ) ( ( (  from_dash_string194 ) ( ( "cur: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4092 ) ) .f_pane ) .f_cursor ) ) ) ,  ( (  from_dash_string194 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  (  cur_dash_ty4098 ) ) ) ) );
    struct envunion1516  temp1515 = ( (struct envunion1516){ .fun = (  enum Unit_7  (*) (  struct env1415*  ,    struct StrConcat_1517  ) )ann1518 , .env =  envinst1415 } );
    ( temp1515.fun ( &temp1515.env ,  ( ( StrConcat_1517_StrConcat ) ( ( (  from_dash_string194 ) ( ( "sel: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4092 ) ) .f_pane ) .f_sel ) ) ) ) );
    struct Maybe_1549  cp4101 = ( (  fmap_dash_maybe1552 ) ( ( ( * (  ed4092 ) ) .f_clipboard ) ,  (  lam1553 ) ) );
    struct envunion1563  temp1562 = ( (struct envunion1563){ .fun = (  enum Unit_7  (*) (  struct env1416*  ,    struct StrConcat_1564  ) )ann1565 , .env =  envinst1416 } );
    ( temp1562.fun ( &temp1562.env ,  ( ( StrConcat_1564_StrConcat ) ( ( (  from_dash_string194 ) ( ( "cp: " ) ,  ( 4 ) ) ) ,  (  cp4101 ) ) ) ) );
    struct envunion1608  temp1607 = ( (struct envunion1608){ .fun = (  enum Unit_7  (*) (  struct env1417*  ,    struct StrConcat_1609  ) )ann1610 , .env =  envinst1417 } );
    ( temp1607.fun ( &temp1607.env ,  ( ( StrConcat_1609_StrConcat ) ( ( (  from_dash_string194 ) ( ( "edmode: " ) ,  ( 8 ) ) ) ,  ( ( * (  ed4092 ) ) .f_mode ) ) ) ) );
    struct envunion1649  temp1648 = ( (struct envunion1649){ .fun = (  enum Unit_7  (*) (  struct env1418*  ,    struct StrConcat_1650  ) )ann1651 , .env =  envinst1418 } );
    ( temp1648.fun ( &temp1648.env ,  ( ( StrConcat_1650_StrConcat ) ( ( (  from_dash_string194 ) ( ( "msg: " ) ,  ( 5 ) ) ) ,  ( ( * (  ed4092 ) ) .f_msg ) ) ) ) );
    struct envunion1668  temp1667 = ( (struct envunion1668){ .fun = (  enum Unit_7  (*) (  struct env1419*  ,    struct StrConcat_1669  ) )ann1672 , .env =  envinst1419 } );
    ( temp1667.fun ( &temp1667.env ,  ( ( StrConcat_1669_StrConcat ) ( ( ( StrConcat_1670_StrConcat ) ( ( ( StrConcat_1671_StrConcat ) ( ( ( StrConcat_1392_StrConcat ) ( ( (  from_dash_string194 ) ( ( "sc-off: (" ) ,  ( 9 ) ) ) ,  ( ( ( ( * (  ed4092 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_top ) ) ) ,  ( (  from_dash_string194 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( ( ( ( * (  ed4092 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_left ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    struct envunion1704  temp1703 = ( (struct envunion1704){ .fun = (  enum Unit_7  (*) (  struct env1420*  ,    struct StrConcat_1705  ) )ann1706 , .env =  envinst1420 } );
    ( temp1703.fun ( &temp1703.env ,  ( ( StrConcat_1705_StrConcat ) ( ( ( StrConcat_1670_StrConcat ) ( ( ( StrConcat_1671_StrConcat ) ( ( ( StrConcat_1392_StrConcat ) ( ( (  from_dash_string194 ) ( ( "dims: { " ) ,  ( 8 ) ) ) ,  ( (  screen_dash_dims4093 ) .f_to_dash_sx ) ) ) ,  ( (  from_dash_string194 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  screen_dash_dims4093 ) .f_to_dash_sy ) ) ) ,  ( (  from_dash_string194 ) ( ( " }" ) ,  ( 2 ) ) ) ) ) ) );
    struct envunion1726  temp1725 = ( (struct envunion1726){ .fun = (  enum Unit_7  (*) (  struct env1421*  ,    struct StrConcat_58  ) )ann1727 , .env =  envinst1421 } );
    ( temp1725.fun ( &temp1725.env ,  ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "num actions: " ) ,  ( 13 ) ) ) ,  ( ( ( ( * ( ( ( * (  ed4092 ) ) .f_pane ) .f_buf ) ) .f_actions ) .f_list ) .f_count ) ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1744 {
    struct StrView_21  field0;
    uint32_t  field1;
};

static struct StrConcat_1744 StrConcat_1744_StrConcat (  struct StrView_21  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1744 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1743 {
    struct StrConcat_1744  field0;
    struct Char_53  field1;
};

static struct StrConcat_1743 StrConcat_1743_StrConcat (  struct StrConcat_1744  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1743 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1748 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1747 {
    struct StrViewIter_577  f_left;
    struct IntStrIter_1748  f_right;
};

struct StrConcatIter_1746 {
    struct StrConcatIter_1747  f_left;
    struct AppendIter_847  f_right;
};

static  struct StrConcatIter_1746   into_dash_iter1749 (    struct StrConcatIter_1746  self1491 ) {
    return (  self1491 );
}

static  uint32_t   op_dash_div1757 (    uint32_t  l245 ,    uint32_t  r247 ) {
    return ( (  l245 ) / (  r247 ) );
}

static  int32_t   count_dash_digits1756 (    uint32_t  self1430 ) {
    if ( (  eq381 ( (  self1430 ) , (  from_dash_integral190 ( 0 ) ) ) ) ) {
        return (  from_dash_integral44 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral44 ( 0 ) );
    while ( (  cmp189 ( (  self1430 ) , (  from_dash_integral190 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1757 ( (  self1430 ) , (  from_dash_integral190 ( 10 ) ) ) );
        digits1431 = (  op_dash_add248 ( (  digits1431 ) , (  from_dash_integral44 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1748   uint_dash_iter1755 (    uint32_t  int1437 ) {
    return ( (struct IntStrIter_1748) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1756 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1748   chars1754 (    uint32_t  self1449 ) {
    return ( (  uint_dash_iter1755 ) ( (  self1449 ) ) );
}

static  struct StrConcatIter_1747   into_dash_iter1753 (    struct StrConcat_1744  dref1498 ) {
    return ( (struct StrConcatIter_1747) { .f_left = ( (  chars582 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1754 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1747   chars1752 (    struct StrConcat_1744  self1509 ) {
    return ( (  into_dash_iter1753 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1746   into_dash_iter1751 (    struct StrConcat_1743  dref1498 ) {
    return ( (struct StrConcatIter_1746) { .f_left = ( (  chars1752 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars887 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1746   chars1750 (    struct StrConcat_1743  self1509 ) {
    return ( (  into_dash_iter1751 ) ( (  self1509 ) ) );
}

struct env1764 {
    ;
    uint32_t  base1210;
};

struct envunion1765 {
    uint32_t  (*fun) (  struct env1764*  ,    int32_t  ,    uint32_t  );
    struct env1764 env;
};

static  uint32_t   reduce1763 (    struct Range_660  iterable1093 ,    uint32_t  base1095 ,   struct envunion1765  fun1097 ) {
    uint32_t  x1098 = (  base1095 );
    struct RangeIter_663  it1099 = ( (  into_dash_iter665 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1100 = ( (  next666 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_246_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_246_Just_t ) {
                struct envunion1765  temp1766 = (  fun1097 );
                x1098 = ( temp1766.fun ( &temp1766.env ,  ( dref1100 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1767 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1767);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp1768;
    return (  temp1768 );
}

static  uint32_t   lam1769 (   struct env1764* env ,    int32_t  item1214 ,    uint32_t  x1216 ) {
    return (  op_dash_mul657 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint32_t   pow1762 (    uint32_t  base1210 ,    int32_t  p1212 ) {
    struct env1764 envinst1764 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1763 ) ( ( (  to668 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  op_dash_sub786 ( (  p1212 ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral190 ( 1 ) ) ,  ( (struct envunion1765){ .fun = (  uint32_t  (*) (  struct env1764*  ,    int32_t  ,    uint32_t  ) )lam1769 , .env =  envinst1764 } ) ) );
}

static  uint32_t   op_dash_sub1770 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) - (  r237 ) );
}

static  struct Maybe_580   next1761 (    struct IntStrIter_1748 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_580_Just ) ( ( (  from_dash_charlike195 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp291 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_580) { .tag = Maybe_580_None_t } );
    }
    uint32_t  trim_dash_down1423 = ( (  pow1762 ) ( (  from_dash_integral190 ( 10 ) ) ,  (  op_dash_sub786 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 1 ) ) ) ) ) );
    uint32_t  upper1424 = (  op_dash_div1757 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    uint32_t  upper_dash_mask1425 = (  op_dash_mul657 ( (  op_dash_div1757 ( (  upper1424 ) , (  from_dash_integral190 ( 10 ) ) ) ) , (  from_dash_integral190 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast193 ) ( (  op_dash_sub1770 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub786 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 1 ) ) ) );
    struct Char_53  digit_dash_char1427 = ( (  from_dash_u8866 ) ( (  op_dash_add756 ( (  digit1426 ) , (  from_dash_integral186 ( 48 ) ) ) ) ) );
    return ( ( Maybe_580_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_580   next1760 (    struct StrConcatIter_1747 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next581 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next1761 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1759 (    struct StrConcatIter_1746 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1760 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next873 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   draw_dash_str1742 (    struct Screen_635 *  screen3527 ,    struct StrConcat_1743  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp291 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp291 ( (  y3533 ) , ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add248 ( (  op_dash_mul1407 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min443 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size236 ) ( (  op_dash_sub786 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct StrConcatIter_1746  temp1745 =  into_dash_iter1749 ( ( (  chars1750 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_580  __cond1758 =  next1759 (&temp1745);
        if (  __cond1758 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1758 .stuff .Maybe_580_Just_s .field0;
        ( (  put_dash_char1406 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add248 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add248 ( (  xx3538 ) , ( (  rendered_dash_wcwidth937 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

struct RenderState_1772 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_638  f_fg;
    struct Color_638  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_1777 {
    struct StrConcat_1743  field0;
    uint32_t  field1;
};

static struct StrConcat_1777 StrConcat_1777_StrConcat (  struct StrConcat_1743  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1777 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1776 {
    struct StrConcat_1777  field0;
    struct Char_53  field1;
};

static struct StrConcat_1776 StrConcat_1776_StrConcat (  struct StrConcat_1777  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1776 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_1780 {
    struct StrConcatIter_1746  f_left;
    struct IntStrIter_1748  f_right;
};

struct StrConcatIter_1779 {
    struct StrConcatIter_1780  f_left;
    struct AppendIter_847  f_right;
};

static  struct StrConcatIter_1779   into_dash_iter1782 (    struct StrConcatIter_1779  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_580   next1784 (    struct StrConcatIter_1780 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1759 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next1761 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1783 (    struct StrConcatIter_1779 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1784 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next873 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each1778 (    struct StrConcatIter_1779  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_53  ) ) {
    struct StrConcatIter_1779  temp1781 = ( (  into_dash_iter1782 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1779 *  it1077 = ( &temp1781 );
    while ( ( true ) ) {
        struct Maybe_580  dref1078 = ( (  next1783 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_580_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_580_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_580_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrConcatIter_1780   into_dash_iter1788 (    struct StrConcat_1777  dref1498 ) {
    return ( (struct StrConcatIter_1780) { .f_left = ( (  chars1750 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1754 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1780   chars1787 (    struct StrConcat_1777  self1509 ) {
    return ( (  into_dash_iter1788 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1779   into_dash_iter1786 (    struct StrConcat_1776  dref1498 ) {
    return ( (struct StrConcatIter_1779) { .f_left = ( (  chars1787 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars887 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1779   chars1785 (    struct StrConcat_1776  self1509 ) {
    return ( (  into_dash_iter1786 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print1775 (    struct StrConcat_1776  s2563 ) {
    ( (  for_dash_each1778 ) ( ( (  chars1785 ) ( (  s2563 ) ) ) ,  (  printf_dash_char178 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   move_dash_cursor_dash_to1774 (    uint32_t  x2577 ,    uint32_t  y2579 ) {
    uint32_t  x2580 = (  op_dash_add758 ( (  x2577 ) , (  from_dash_integral190 ( 1 ) ) ) );
    uint32_t  y2581 = (  op_dash_add758 ( (  y2579 ) , (  from_dash_integral190 ( 1 ) ) ) );
    ( (  print1775 ) ( ( ( StrConcat_1776_StrConcat ) ( ( ( StrConcat_1777_StrConcat ) ( ( ( StrConcat_1743_StrConcat ) ( ( ( StrConcat_1744_StrConcat ) ( ( (  from_dash_string194 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2581 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2580 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Slice_636   subslice1791 (    struct Slice_636  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Cell_637 *  begin_dash_ptr1787 = ( (  offset_dash_ptr672 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp158 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp158 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_636) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub278 ( ( (  min305 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_636) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

struct SliceIter_1794 {
    struct Slice_636  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_1793 {
    struct SliceIter_1794  f_left_dash_it;
    struct SliceIter_1794  f_right_dash_it;
};

struct Tuple2_1795 {
    struct Cell_637  field0;
    struct Cell_637  field1;
};

static struct Tuple2_1795 Tuple2_1795_Tuple2 (  struct Cell_637  field0 ,  struct Cell_637  field1 ) {
    return ( struct Tuple2_1795 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1797 {
    bool (*  fun1135 )(    struct Tuple2_1795  );
};

struct envunion1798 {
    bool  (*fun) (  struct env1797*  ,    struct Tuple2_1795  ,    bool  );
    struct env1797 env;
};

static  struct Zip_1793   into_dash_iter1799 (    struct Zip_1793  self911 ) {
    return (  self911 );
}

struct Maybe_1800 {
    enum {
        Maybe_1800_None_t,
        Maybe_1800_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1795  field0;
        } Maybe_1800_Just_s;
    } stuff;
};

static struct Maybe_1800 Maybe_1800_Just (  struct Tuple2_1795  field0 ) {
    return ( struct Maybe_1800 ) { .tag = Maybe_1800_Just_t, .stuff = { .Maybe_1800_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_677   next1802 (    struct SliceIter_1794 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp158 ( (  op_dash_add206 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_677) { .tag = Maybe_677_None_t } );
    }
    struct Cell_637  elem1830 = ( * ( (  offset_dash_ptr672 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64235 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add206 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_677_Just ) ( (  elem1830 ) ) );
}

static  struct Maybe_1800   next1801 (    struct Zip_1793 *  self914 ) {
    struct Zip_1793  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_677  dref916 = ( (  next1802 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_677_None_t ) {
            return ( (struct Maybe_1800) { .tag = Maybe_1800_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_677_Just_t ) {
                struct Maybe_677  dref918 = ( (  next1802 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_677_None_t ) {
                    return ( (struct Maybe_1800) { .tag = Maybe_1800_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_677_Just_t ) {
                        ( (  next1802 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next1802 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1800_Just ) ( ( ( Tuple2_1795_Tuple2 ) ( ( dref916 .stuff .Maybe_677_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_677_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1796 (    struct Zip_1793  iterable1093 ,    bool  base1095 ,   struct envunion1798  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_1793  it1099 = ( (  into_dash_iter1799 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1800  dref1100 = ( (  next1801 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1800_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1800_Just_t ) {
                struct envunion1798  temp1803 = (  fun1097 );
                x1098 = ( temp1803.fun ( &temp1803.env ,  ( dref1100 .stuff .Maybe_1800_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1804 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1804);
    exit ( 1 );
    ( Unit_7_Unit );
    bool  temp1805;
    return (  temp1805 );
}

static  bool   lam1806 (   struct env1797* env ,    struct Tuple2_1795  e1137 ,    bool  x1139 ) {
    return ( ( ( env->fun1135 ) ( (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1792 (    struct Zip_1793  it1133 ,    bool (*  fun1135 )(    struct Tuple2_1795  ) ) {
    struct env1797 envinst1797 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1796 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1798){ .fun = (  bool  (*) (  struct env1797*  ,    struct Tuple2_1795  ,    bool  ) )lam1806 , .env =  envinst1797 } ) ) );
}

static  struct SliceIter_1794   into_dash_iter1808 (    struct Slice_636  self1822 ) {
    return ( (struct SliceIter_1794) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_1793   zip1807 (    struct Slice_636  left922 ,    struct Slice_636  right924 ) {
    struct SliceIter_1794  left_dash_it925 = ( (  into_dash_iter1808 ) ( (  left922 ) ) );
    struct SliceIter_1794  right_dash_it926 = ( (  into_dash_iter1808 ) ( (  right924 ) ) );
    return ( (struct Zip_1793) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

struct Tuple2_1812 {
    struct Color_638  field0;
    struct Color_638  field1;
};

static struct Tuple2_1812 Tuple2_1812_Tuple2 (  struct Color_638  field0 ,  struct Color_638  field1 ) {
    return ( struct Tuple2_1812 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_639 *   cast1816 (    int32_t *  x356 ) {
    return ( (enum Color8_639 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1814 (    enum Color8_639  x573 ) {
    int32_t  temp1815 = ( (  zeroed829 ) ( ) );
    int32_t *  y574 = ( &temp1815 );
    enum Color8_639 *  yp575 = ( (  cast1816 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq1813 (    enum Color8_639  l2605 ,    enum Color8_639  r2607 ) {
    return (  eq294 ( ( ( (  cast_dash_on_dash_zeroed1814 ) ( (  l2605 ) ) ) ) , ( (  cast_dash_on_dash_zeroed1814 ) ( (  r2607 ) ) ) ) );
}

static  enum Color16_640 *   cast1820 (    int32_t *  x356 ) {
    return ( (enum Color16_640 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1818 (    enum Color16_640  x573 ) {
    int32_t  temp1819 = ( (  zeroed829 ) ( ) );
    int32_t *  y574 = ( &temp1819 );
    enum Color16_640 *  yp575 = ( (  cast1820 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq1817 (    enum Color16_640  l2611 ,    enum Color16_640  r2613 ) {
    return (  eq294 ( ( ( (  cast_dash_on_dash_zeroed1818 ) ( (  l2611 ) ) ) ) , ( (  cast_dash_on_dash_zeroed1818 ) ( (  r2613 ) ) ) ) );
}

static  bool   eq1821 (    struct RGB_641  l2641 ,    struct RGB_641  r2643 ) {
    return ( ( (  eq182 ( ( (  l2641 ) .f_r ) , ( (  r2643 ) .f_r ) ) ) && (  eq182 ( ( (  l2641 ) .f_g ) , ( (  r2643 ) .f_g ) ) ) ) && (  eq182 ( ( (  l2641 ) .f_b ) , ( (  r2643 ) .f_b ) ) ) );
}

static  bool   eq1811 (    struct Color_638  l2664 ,    struct Color_638  r2666 ) {
    return ( {  struct Tuple2_1812  dref2667 = ( ( Tuple2_1812_Tuple2 ) ( (  l2664 ) ,  (  r2666 ) ) ) ; dref2667 .field0.tag == Color_638_ColorDefault_t && dref2667 .field1.tag == Color_638_ColorDefault_t ? ( true ) : dref2667 .field0.tag == Color_638_Color8_t && dref2667 .field1.tag == Color_638_Color8_t ? (  eq1813 ( ( dref2667 .field0 .stuff .Color_638_Color8_s .field0 ) , ( dref2667 .field1 .stuff .Color_638_Color8_s .field0 ) ) ) : dref2667 .field0.tag == Color_638_Color16_t && dref2667 .field1.tag == Color_638_Color16_t ? (  eq1817 ( ( dref2667 .field0 .stuff .Color_638_Color16_s .field0 ) , ( dref2667 .field1 .stuff .Color_638_Color16_s .field0 ) ) ) : dref2667 .field0.tag == Color_638_Color256_t && dref2667 .field1.tag == Color_638_Color256_t ? (  eq182 ( ( dref2667 .field0 .stuff .Color_638_Color256_s .field0 ) , ( dref2667 .field1 .stuff .Color_638_Color256_s .field0 ) ) ) : dref2667 .field0.tag == Color_638_ColorRGB_t && dref2667 .field1.tag == Color_638_ColorRGB_t ? (  eq1821 ( ( dref2667 .field0 .stuff .Color_638_ColorRGB_s .field0 ) , ( dref2667 .field1 .stuff .Color_638_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq1810 (    struct Cell_637  l3400 ,    struct Cell_637  r3402 ) {
    if ( ( !  eq377 ( ( (  l3400 ) .f_c ) , ( (  r3402 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq1811 ( ( (  l3400 ) .f_fg ) , ( (  r3402 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq1811 ( ( (  l3400 ) .f_bg ) , ( (  r3402 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam1809 (    struct Tuple2_1795  dref3456 ) {
    return ( !  eq1810 ( ( dref3456 .field0 ) , ( dref3456 .field1 ) ) );
}

static  enum Unit_7   set_dash_default_dash_fg1824 (  ) {
    ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg81825 (    enum Color8_639  color2616 ) {
    enum Color8_639  dref2617 = (  color2616 );
    switch (  dref2617 ) {
        case Color8_639_Black8 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_639_Red8 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_639_Green8 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_639_Yellow8 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_639_Blue8 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_639_Magenta8 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_639_Cyan8 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_639_White8 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg161826 (    enum Color16_640  color2620 ) {
    enum Color16_640  dref2621 = (  color2620 );
    switch (  dref2621 ) {
        case Color16_640_Black16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_Red16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_Green16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_Yellow16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_Blue16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_Magenta16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_Cyan16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_White16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_BrightBlack16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_BrightRed16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_BrightGreen16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_BrightYellow16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_BrightBlue16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_BrightMagenta16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_BrightCyan16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_BrightWhite16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

struct StrConcat_1830 {
    struct StrView_21  field0;
    uint8_t  field1;
};

static struct StrConcat_1830 StrConcat_1830_StrConcat (  struct StrView_21  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1830 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1829 {
    struct StrConcat_1830  field0;
    struct Char_53  field1;
};

static struct StrConcat_1829 StrConcat_1829_StrConcat (  struct StrConcat_1830  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1829 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1834 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1833 {
    struct StrViewIter_577  f_left;
    struct IntStrIter_1834  f_right;
};

struct StrConcatIter_1832 {
    struct StrConcatIter_1833  f_left;
    struct AppendIter_847  f_right;
};

static  struct StrConcatIter_1832   into_dash_iter1836 (    struct StrConcatIter_1832  self1491 ) {
    return (  self1491 );
}

struct env1842 {
    uint8_t  base1210;
    ;
};

struct envunion1843 {
    uint8_t  (*fun) (  struct env1842*  ,    int32_t  ,    uint8_t  );
    struct env1842 env;
};

static  uint8_t   reduce1841 (    struct Range_660  iterable1093 ,    uint8_t  base1095 ,   struct envunion1843  fun1097 ) {
    uint8_t  x1098 = (  base1095 );
    struct RangeIter_663  it1099 = ( (  into_dash_iter665 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1100 = ( (  next666 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_246_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_246_Just_t ) {
                struct envunion1843  temp1844 = (  fun1097 );
                x1098 = ( temp1844.fun ( &temp1844.env ,  ( dref1100 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1845 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1845);
    exit ( 1 );
    ( Unit_7_Unit );
    uint8_t  temp1846;
    return (  temp1846 );
}

static  uint8_t   op_dash_mul1848 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam1847 (   struct env1842* env ,    int32_t  item1214 ,    uint8_t  x1216 ) {
    return (  op_dash_mul1848 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint8_t   pow1840 (    uint8_t  base1210 ,    int32_t  p1212 ) {
    struct env1842 envinst1842 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1841 ) ( ( (  to668 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  op_dash_sub786 ( (  p1212 ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral186 ( 1 ) ) ,  ( (struct envunion1843){ .fun = (  uint8_t  (*) (  struct env1842*  ,    int32_t  ,    uint8_t  ) )lam1847 , .env =  envinst1842 } ) ) );
}

static  uint8_t   op_dash_div1849 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast1850 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_580   next1839 (    struct IntStrIter_1834 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_580_Just ) ( ( (  from_dash_charlike195 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp291 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_580) { .tag = Maybe_580_None_t } );
    }
    uint8_t  trim_dash_down1423 = ( (  pow1840 ) ( (  from_dash_integral186 ( 10 ) ) ,  (  op_dash_sub786 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 1 ) ) ) ) ) );
    uint8_t  upper1424 = (  op_dash_div1849 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    uint8_t  upper_dash_mask1425 = (  op_dash_mul1848 ( (  op_dash_div1849 ( (  upper1424 ) , (  from_dash_integral186 ( 10 ) ) ) ) , (  from_dash_integral186 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1850 ) ( (  op_dash_sub755 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub786 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 1 ) ) ) );
    struct Char_53  digit_dash_char1427 = ( (  from_dash_u8866 ) ( (  op_dash_add756 ( (  digit1426 ) , (  from_dash_integral186 ( 48 ) ) ) ) ) );
    return ( ( Maybe_580_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_580   next1838 (    struct StrConcatIter_1833 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next581 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next1839 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1837 (    struct StrConcatIter_1832 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1838 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next873 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each1831 (    struct StrConcatIter_1832  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_53  ) ) {
    struct StrConcatIter_1832  temp1835 = ( (  into_dash_iter1836 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1832 *  it1077 = ( &temp1835 );
    while ( ( true ) ) {
        struct Maybe_580  dref1078 = ( (  next1837 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_580_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_580_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_580_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  int32_t   count_dash_digits1857 (    uint8_t  self1430 ) {
    if ( (  eq182 ( (  self1430 ) , (  from_dash_integral186 ( 0 ) ) ) ) ) {
        return (  from_dash_integral44 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral44 ( 0 ) );
    while ( (  cmp199 ( (  self1430 ) , (  from_dash_integral186 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1849 ( (  self1430 ) , (  from_dash_integral186 ( 10 ) ) ) );
        digits1431 = (  op_dash_add248 ( (  digits1431 ) , (  from_dash_integral44 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1834   uint_dash_iter1856 (    uint8_t  int1437 ) {
    return ( (struct IntStrIter_1834) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1857 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1834   chars1855 (    uint8_t  self1455 ) {
    return ( (  uint_dash_iter1856 ) ( (  self1455 ) ) );
}

static  struct StrConcatIter_1833   into_dash_iter1854 (    struct StrConcat_1830  dref1498 ) {
    return ( (struct StrConcatIter_1833) { .f_left = ( (  chars582 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1855 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1833   chars1853 (    struct StrConcat_1830  self1509 ) {
    return ( (  into_dash_iter1854 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1832   into_dash_iter1852 (    struct StrConcat_1829  dref1498 ) {
    return ( (struct StrConcatIter_1832) { .f_left = ( (  chars1853 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars887 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1832   chars1851 (    struct StrConcat_1829  self1509 ) {
    return ( (  into_dash_iter1852 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print1828 (    struct StrConcat_1829  s2563 ) {
    ( (  for_dash_each1831 ) ( ( (  chars1851 ) ( (  s2563 ) ) ) ,  (  printf_dash_char178 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg2561827 (    uint8_t  color2634 ) {
    ( (  print1828 ) ( ( ( StrConcat_1829_StrConcat ) ( ( ( StrConcat_1830_StrConcat ) ( ( (  from_dash_string194 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2634 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1863 {
    struct StrConcat_1829  field0;
    uint8_t  field1;
};

static struct StrConcat_1863 StrConcat_1863_StrConcat (  struct StrConcat_1829  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1863 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1862 {
    struct StrConcat_1863  field0;
    struct Char_53  field1;
};

static struct StrConcat_1862 StrConcat_1862_StrConcat (  struct StrConcat_1863  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1862 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1861 {
    struct StrConcat_1862  field0;
    uint8_t  field1;
};

static struct StrConcat_1861 StrConcat_1861_StrConcat (  struct StrConcat_1862  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1861 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1860 {
    struct StrConcat_1861  field0;
    struct Char_53  field1;
};

static struct StrConcat_1860 StrConcat_1860_StrConcat (  struct StrConcat_1861  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1860 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_1868 {
    struct StrConcatIter_1832  f_left;
    struct IntStrIter_1834  f_right;
};

struct StrConcatIter_1867 {
    struct StrConcatIter_1868  f_left;
    struct AppendIter_847  f_right;
};

struct StrConcatIter_1866 {
    struct StrConcatIter_1867  f_left;
    struct IntStrIter_1834  f_right;
};

struct StrConcatIter_1865 {
    struct StrConcatIter_1866  f_left;
    struct AppendIter_847  f_right;
};

static  struct StrConcatIter_1865   into_dash_iter1870 (    struct StrConcatIter_1865  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_580   next1874 (    struct StrConcatIter_1868 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1837 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next1839 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1873 (    struct StrConcatIter_1867 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1874 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next873 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1872 (    struct StrConcatIter_1866 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1873 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next1839 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_580   next1871 (    struct StrConcatIter_1865 *  self1494 ) {
    struct Maybe_580  dref1495 = ( (  next1872 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_580_Just_t ) {
        return ( ( Maybe_580_Just ) ( ( dref1495 .stuff .Maybe_580_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_580_None_t ) {
            return ( (  next873 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each1864 (    struct StrConcatIter_1865  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_53  ) ) {
    struct StrConcatIter_1865  temp1869 = ( (  into_dash_iter1870 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1865 *  it1077 = ( &temp1869 );
    while ( ( true ) ) {
        struct Maybe_580  dref1078 = ( (  next1871 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_580_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_580_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_580_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrConcatIter_1868   into_dash_iter1882 (    struct StrConcat_1863  dref1498 ) {
    return ( (struct StrConcatIter_1868) { .f_left = ( (  chars1851 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1855 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1868   chars1881 (    struct StrConcat_1863  self1509 ) {
    return ( (  into_dash_iter1882 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1867   into_dash_iter1880 (    struct StrConcat_1862  dref1498 ) {
    return ( (struct StrConcatIter_1867) { .f_left = ( (  chars1881 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars887 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1867   chars1879 (    struct StrConcat_1862  self1509 ) {
    return ( (  into_dash_iter1880 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1866   into_dash_iter1878 (    struct StrConcat_1861  dref1498 ) {
    return ( (struct StrConcatIter_1866) { .f_left = ( (  chars1879 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1855 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1866   chars1877 (    struct StrConcat_1861  self1509 ) {
    return ( (  into_dash_iter1878 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1865   into_dash_iter1876 (    struct StrConcat_1860  dref1498 ) {
    return ( (struct StrConcatIter_1865) { .f_left = ( (  chars1877 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars887 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1865   chars1875 (    struct StrConcat_1860  self1509 ) {
    return ( (  into_dash_iter1876 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print1859 (    struct StrConcat_1860  s2563 ) {
    ( (  for_dash_each1864 ) ( ( (  chars1875 ) ( (  s2563 ) ) ) ,  (  printf_dash_char178 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg_dash_rgb1858 (    struct RGB_641  c2657 ) {
    ( (  print1859 ) ( ( ( StrConcat_1860_StrConcat ) ( ( ( StrConcat_1861_StrConcat ) ( ( ( StrConcat_1862_StrConcat ) ( ( ( StrConcat_1863_StrConcat ) ( ( ( StrConcat_1829_StrConcat ) ( ( ( StrConcat_1830_StrConcat ) ( ( (  from_dash_string194 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2657 ) .f_r ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2657 ) .f_g ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2657 ) .f_b ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg1823 (    struct Color_638  c2678 ) {
    struct Color_638  dref2679 = (  c2678 );
    if ( dref2679.tag == Color_638_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg1824 ) ( ) );
    }
    else {
        if ( dref2679.tag == Color_638_Color8_t ) {
            ( (  set_dash_fg81825 ) ( ( dref2679 .stuff .Color_638_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2679.tag == Color_638_Color16_t ) {
                ( (  set_dash_fg161826 ) ( ( dref2679 .stuff .Color_638_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2679.tag == Color_638_Color256_t ) {
                    ( (  set_dash_fg2561827 ) ( ( dref2679 .stuff .Color_638_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2679.tag == Color_638_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb1858 ) ( ( dref2679 .stuff .Color_638_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_default_dash_bg1884 (  ) {
    ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg81885 (    enum Color8_639  color2624 ) {
    enum Color8_639  dref2625 = (  color2624 );
    switch (  dref2625 ) {
        case Color8_639_Black8 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_639_Red8 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_639_Green8 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_639_Yellow8 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_639_Blue8 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_639_Magenta8 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_639_Cyan8 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_639_White8 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg161886 (    enum Color16_640  color2628 ) {
    enum Color16_640  dref2629 = (  color2628 );
    switch (  dref2629 ) {
        case Color16_640_Black16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_Red16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_Green16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_Yellow16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_Blue16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_Magenta16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_Cyan16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_White16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_640_BrightBlack16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_640_BrightRed16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_640_BrightGreen16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_640_BrightYellow16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_640_BrightBlue16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_640_BrightMagenta16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_640_BrightCyan16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_640_BrightWhite16 : {
            ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg2561887 (    uint8_t  color2637 ) {
    ( (  print1828 ) ( ( ( StrConcat_1829_StrConcat ) ( ( ( StrConcat_1830_StrConcat ) ( ( (  from_dash_string194 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2637 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg_dash_rgb1888 (    struct RGB_641  c2660 ) {
    ( (  print1859 ) ( ( ( StrConcat_1860_StrConcat ) ( ( ( StrConcat_1861_StrConcat ) ( ( ( StrConcat_1862_StrConcat ) ( ( ( StrConcat_1863_StrConcat ) ( ( ( StrConcat_1829_StrConcat ) ( ( ( StrConcat_1830_StrConcat ) ( ( (  from_dash_string194 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2660 ) .f_r ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2660 ) .f_g ) ) ) ,  ( (  from_dash_charlike195 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2660 ) .f_b ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg1883 (    struct Color_638  c2686 ) {
    struct Color_638  dref2687 = (  c2686 );
    if ( dref2687.tag == Color_638_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg1884 ) ( ) );
    }
    else {
        if ( dref2687.tag == Color_638_Color8_t ) {
            ( (  set_dash_bg81885 ) ( ( dref2687 .stuff .Color_638_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2687.tag == Color_638_Color16_t ) {
                ( (  set_dash_bg161886 ) ( ( dref2687 .stuff .Color_638_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2687.tag == Color_638_Color256_t ) {
                    ( (  set_dash_bg2561887 ) ( ( dref2687 .stuff .Color_638_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2687.tag == Color_638_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb1888 ) ( ( dref2687 .stuff .Color_638_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  uint32_t   i32_dash_u321889 (    int32_t  x603 ) {
    return ( (uint32_t ) (  x603 ) );
}

static  enum Unit_7   emit_dash_cell1822 (    struct RenderState_1772 *  rs3432 ,    struct Cell_637 *  c3434 ,    uint32_t  x3436 ,    uint32_t  y3438 ) {
    if ( ( ( !  eq381 ( (  x3436 ) , ( ( * (  rs3432 ) ) .f_x ) ) ) || ( !  eq381 ( (  y3438 ) , ( ( * (  rs3432 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1774 ) ( (  x3436 ) ,  (  y3438 ) ) );
        (*  rs3432 ) .f_x = (  x3436 );
        (*  rs3432 ) .f_y = (  y3438 );
    }
    struct Char_53  char3439 = ( ( * (  c3434 ) ) .f_c );
    struct Color_638  bg3440 = ( ( * (  c3434 ) ) .f_bg );
    if ( (  eq294 ( ( ( * (  c3434 ) ) .f_char_dash_width ) , (  op_dash_neg610 ( (  from_dash_integral44 ( 1 ) ) ) ) ) ) ) {
        char3439 = ( (  from_dash_charlike195 ) ( ( " " ) ,  ( 1 ) ) );
        bg3440 = ( ( Color_638_Color8 ) ( ( Color8_639_Red8 ) ) );
    }
    if ( ( !  eq1811 ( ( ( * (  rs3432 ) ) .f_fg ) , ( ( * (  c3434 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg1823 ) ( ( ( * (  c3434 ) ) .f_fg ) ) );
        (*  rs3432 ) .f_fg = ( ( * (  c3434 ) ) .f_fg );
    }
    if ( ( !  eq1811 ( ( ( * (  rs3432 ) ) .f_bg ) , (  bg3440 ) ) ) ) {
        ( (  set_dash_bg1883 ) ( (  bg3440 ) ) );
        (*  rs3432 ) .f_bg = (  bg3440 );
    }
    ( (  print_dash_str177 ) ( (  char3439 ) ) );
    uint32_t  char_dash_width3441 = ( (  i32_dash_u321889 ) ( ( (  max938 ) ( ( ( * (  c3434 ) ) .f_char_dash_width ) ,  (  from_dash_integral44 ( 1 ) ) ) ) ) );
    (*  rs3432 ) .f_x = (  op_dash_add758 ( ( ( * (  rs3432 ) ) .f_x ) , (  char_dash_width3441 ) ) );
    return ( Unit_7_Unit );
}

struct Zip_1892 {
    struct SliceIter_1794  f_left_dash_it;
    struct FromIter_240  f_right_dash_it;
};

struct env1893 {
    ;
    struct Slice_636  dest1853;
    ;
};

struct Tuple2_1895 {
    struct Cell_637  field0;
    int32_t  field1;
};

static struct Tuple2_1895 Tuple2_1895_Tuple2 (  struct Cell_637  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1895 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1894 {
    enum Unit_7  (*fun) (  struct env1893*  ,    struct Tuple2_1895  );
    struct env1893 env;
};

static  struct Zip_1892   into_dash_iter1897 (    struct Zip_1892  self911 ) {
    return (  self911 );
}

struct Maybe_1898 {
    enum {
        Maybe_1898_None_t,
        Maybe_1898_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1895  field0;
        } Maybe_1898_Just_s;
    } stuff;
};

static struct Maybe_1898 Maybe_1898_Just (  struct Tuple2_1895  field0 ) {
    return ( struct Maybe_1898 ) { .tag = Maybe_1898_Just_t, .stuff = { .Maybe_1898_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1898   next1899 (    struct Zip_1892 *  self914 ) {
    struct Zip_1892  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_677  dref916 = ( (  next1802 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_677_None_t ) {
            return ( (struct Maybe_1898) { .tag = Maybe_1898_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_677_Just_t ) {
                struct Maybe_246  dref918 = ( (  next247 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_246_None_t ) {
                    return ( (struct Maybe_1898) { .tag = Maybe_1898_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_246_Just_t ) {
                        ( (  next1802 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next247 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1898_Just ) ( ( ( Tuple2_1895_Tuple2 ) ( ( dref916 .stuff .Maybe_677_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_246_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each1891 (    struct Zip_1892  iterable1074 ,   struct envunion1894  fun1076 ) {
    struct Zip_1892  temp1896 = ( (  into_dash_iter1897 ) ( (  iterable1074 ) ) );
    struct Zip_1892 *  it1077 = ( &temp1896 );
    while ( ( true ) ) {
        struct Maybe_1898  dref1078 = ( (  next1899 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1898_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1898_Just_t ) {
                struct envunion1894  temp1900 = (  fun1076 );
                ( temp1900.fun ( &temp1900.env ,  ( dref1078 .stuff .Maybe_1898_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_1892   zip1901 (    struct Slice_636  left922 ,    struct FromIter_240  right924 ) {
    struct SliceIter_1794  left_dash_it925 = ( (  into_dash_iter1808 ) ( (  left922 ) ) );
    struct FromIter_240  right_dash_it926 = ( (  into_dash_iter252 ) ( (  right924 ) ) );
    return ( (struct Zip_1892) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   lam1902 (   struct env1893* env ,    struct Tuple2_1895  dref1854 ) {
    return ( (  set670 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size236 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_7   copy_dash_to1890 (    struct Slice_636  src1851 ,    struct Slice_636  dest1853 ) {
    if ( (  cmp158 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic427 ) ( ( ( StrConcat_428_StrConcat ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_57_StrConcat ) ( ( ( StrConcat_58_StrConcat ) ( ( (  from_dash_string194 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string194 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string194 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env1893 envinst1893 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each1891 ) ( ( (  zip1901 ) ( (  src1851 ) ,  ( (  from253 ) ( (  from_dash_integral44 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1894){ .fun = (  enum Unit_7  (*) (  struct env1893*  ,    struct Tuple2_1895  ) )lam1902 , .env =  envinst1893 } ) ) );
    return ( Unit_7_Unit );
}

static  uint32_t   render_dash_screen1771 (    struct Screen_635 *  screen3444 ) {
    int32_t  w3445 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3444 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3446 = ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen3444 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1772  temp1773 = ( (struct RenderState_1772) { .f_x = (  from_dash_integral190 ( 0 ) ) , .f_y = (  from_dash_integral190 ( 0 ) ) , .f_fg = ( (struct Color_638) { .tag = Color_638_ColorDefault_t } ) , .f_bg = ( (struct Color_638) { .tag = Color_638_ColorDefault_t } ) , .f_changes = (  from_dash_integral190 ( 0 ) ) } );
    struct RenderState_1772 *  rs3447 = ( &temp1773 );
    ( (  move_dash_cursor_dash_to1774 ) ( (  from_dash_integral190 ( 0 ) ) ,  (  from_dash_integral190 ( 0 ) ) ) );
    struct RangeIter_663  temp1789 =  into_dash_iter665 ( ( (  to668 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  op_dash_sub786 ( (  h3446 ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_246  __cond1790 =  next666 (&temp1789);
        if (  __cond1790 .tag == 0 ) {
            break;
        }
        int32_t  y3449 =  __cond1790 .stuff .Maybe_246_Just_s .field0;
        int32_t  x_dash_v3450 = (  from_dash_integral44 ( 0 ) );
        while ( (  cmp291 ( (  x_dash_v3450 ) , (  w3445 ) ) == 0 ) ) {
            size_t  i3451 = ( (  i32_dash_size236 ) ( (  op_dash_add248 ( (  op_dash_mul1407 ( (  y3449 ) , (  w3445 ) ) ) , (  x_dash_v3450 ) ) ) ) );
            struct Cell_637 *  cur3452 = ( (  get_dash_ptr671 ) ( ( ( * (  screen3444 ) ) .f_current ) ,  (  i3451 ) ) );
            int32_t  char_dash_width3453 = ( (  max938 ) ( ( ( * (  cur3452 ) ) .f_char_dash_width ) ,  (  from_dash_integral44 ( 1 ) ) ) );
            struct Slice_636  curs3454 = ( (  subslice1791 ) ( ( ( * (  screen3444 ) ) .f_current ) ,  (  i3451 ) ,  (  op_dash_add206 ( (  i3451 ) , ( (  i32_dash_size236 ) ( (  char_dash_width3453 ) ) ) ) ) ) );
            struct Slice_636  prevs3455 = ( (  subslice1791 ) ( ( ( * (  screen3444 ) ) .f_previous ) ,  (  i3451 ) ,  (  op_dash_add206 ( (  i3451 ) , ( (  i32_dash_size236 ) ( (  char_dash_width3453 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3444 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any1792 ) ( ( (  zip1807 ) ( (  curs3454 ) ,  (  prevs3455 ) ) ) ,  (  lam1809 ) ) ) ) ) {
                (*  rs3447 ) .f_changes = (  op_dash_add758 ( ( ( * (  rs3447 ) ) .f_changes ) , (  from_dash_integral190 ( 1 ) ) ) );
                ( (  emit_dash_cell1822 ) ( (  rs3447 ) ,  (  cur3452 ) ,  ( (  i32_dash_u321889 ) ( (  x_dash_v3450 ) ) ) ,  ( (  i32_dash_u321889 ) ( (  y3449 ) ) ) ) );
                ( (  copy_dash_to1890 ) ( (  curs3454 ) ,  (  prevs3455 ) ) );
            }
            x_dash_v3450 = (  op_dash_add248 ( (  x_dash_v3450 ) , (  char_dash_width3453 ) ) );
        }
    }
    (*  screen3444 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors584 ) ( ) );
    ( (  flush_dash_stdout587 ) ( ) );
    return ( ( * (  rs3447 ) ) .f_changes );
}

static  void *   cast_dash_ptr1909 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1910 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed1907 (  ) {
    struct timespec *  temp1908;
    struct timespec *  x570 = (  temp1908 );
    ( ( memset ) ( ( (  cast_dash_ptr1909 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of1910 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct timespec *   null_dash_ptr1906 (  ) {
    return ( (  zeroed1907 ) ( ) );
}

static  enum Unit_7   sync1903 (    struct Tui_64 *  tui3315 ) {
    if ( (  eq381 ( ( ( * (  tui3315 ) ) .f_target_dash_fps ) , (  from_dash_integral190 ( 0 ) ) ) ) ) {
        return ( Unit_7_Unit );
    }
    int64_t  frame_dash_ns3316 = (  op_dash_div863 ( (  from_dash_integral277 ( 1000000000 ) ) , ( (  size_dash_i64235 ) ( ( (  u32_dash_size649 ) ( ( ( * (  tui3315 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1904 = ( (  undefined623 ) ( ) );
    struct timespec *  now3317 = ( &temp1904 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic625 ) ( ) ) ,  (  now3317 ) ) );
    int64_t  elapsed_dash_ns3318 = (  op_dash_add379 ( (  op_dash_mul204 ( (  op_dash_sub865 ( ( ( * (  now3317 ) ) .tv_sec ) , ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral277 ( 1000000000 ) ) ) ) , (  op_dash_sub865 ( ( ( * (  now3317 ) ) .tv_nsec ) , ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3319 = (  op_dash_sub865 ( (  frame_dash_ns3316 ) , (  elapsed_dash_ns3318 ) ) );
    if ( (  cmp883 ( (  sleep_dash_ns3319 ) , (  from_dash_integral277 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1905 = ( (struct timespec) { .tv_sec = (  from_dash_integral277 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3319 ) } );
        struct timespec *  ts3320 = ( &temp1905 );
        ( ( nanosleep ) ( (  ts3320 ) ,  ( (  null_dash_ptr1906 ) ( ) ) ) );
    }
    struct timespec  temp1911 = ( (  undefined623 ) ( ) );
    struct timespec *  last_dash_sync3321 = ( &temp1911 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic625 ) ( ) ) ,  (  last_dash_sync3321 ) ) );
    (*  tui3315 ) .f_last_dash_sync = ( * (  last_dash_sync3321 ) );
    (*  tui3315 ) .f_fps_dash_count = (  op_dash_add758 ( ( ( * (  tui3315 ) ) .f_fps_dash_count ) , (  from_dash_integral190 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3322 = (  op_dash_add379 ( (  op_dash_mul204 ( (  op_dash_sub865 ( ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3315 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral277 ( 1000 ) ) ) ) , (  op_dash_div863 ( (  op_dash_sub865 ( ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3315 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral277 ( 1000000 ) ) ) ) ) );
    if ( (  cmp883 ( (  fps_dash_elapsed_dash_ms3322 ) , (  from_dash_integral277 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3315 ) .f_actual_dash_fps = ( ( * (  tui3315 ) ) .f_fps_dash_count );
        (*  tui3315 ) .f_fps_dash_count = (  from_dash_integral190 ( 0 ) );
        (*  tui3315 ) .f_fps_dash_ts = ( ( * (  tui3315 ) ) .f_last_dash_sync );
    }
    return ( Unit_7_Unit );
}

static  void *   cast_dash_ptr1914 (    struct Cell_637 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free1913 (    enum CAllocator_9  dref1959 ,    struct Slice_636  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1914 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_screen1912 (    struct Screen_635 *  screen3420 ) {
    enum CAllocator_9  al3421 = ( ( * (  screen3420 ) ) .f_al );
    ( (  free1913 ) ( (  al3421 ) ,  ( ( * (  screen3420 ) ) .f_current ) ) );
    ( (  free1913 ) ( (  al3421 ) ,  ( ( * (  screen3420 ) ) .f_previous ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   disable_dash_mouse1916 (  ) {
    ( (  print_dash_str169 ) ( ( (  from_dash_string194 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   show_dash_cursor1917 (  ) {
    ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   reset_dash_cursor_dash_position1918 (  ) {
    ( (  print575 ) ( ( (  from_dash_string194 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   disable_dash_raw_dash_mode1919 (    struct Termios_66 *  og_dash_termios3295 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno513 ) ( ) ) ,  ( (  tcsa_dash_flush573 ) ( ) ) ,  ( (  cast_dash_ptr514 ) ( (  og_dash_termios3295 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   deinit1915 (    struct Tui_64 *  tui3325 ) {
    ( (  disable_dash_mouse1916 ) ( ) );
    ( (  show_dash_cursor1917 ) ( ) );
    ( (  reset_dash_colors584 ) ( ) );
    ( (  clear_dash_screen585 ) ( ) );
    ( (  reset_dash_cursor_dash_position1918 ) ( ) );
    ( (  disable_dash_raw_dash_mode1919 ) ( ( & ( ( * (  tui3325 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout587 ) ( ) );
    return ( Unit_7_Unit );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size2036 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor2037 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor2038 = ( (  from_dash_integral0 ( 8 ) ) );
    struct env1 envinst1 = {
        .growth_dash_factor2037 =  growth_dash_factor2037 ,
        .starting_dash_size2036 =  starting_dash_size2036 ,
    };
    struct env2 envinst2 = {
        .growth_dash_factor2037 =  growth_dash_factor2037 ,
        .starting_dash_size2036 =  starting_dash_size2036 ,
    };
    struct env3 envinst3 = {
        .growth_dash_factor2037 =  growth_dash_factor2037 ,
        .starting_dash_size2036 =  starting_dash_size2036 ,
    };
    struct env4 envinst4 = {
        .growth_dash_factor2037 =  growth_dash_factor2037 ,
        .starting_dash_size2036 =  starting_dash_size2036 ,
    };
    struct env5 envinst5 = {
        .envinst1 = envinst1 ,
    };
    struct env13 envinst13 = {
        .envinst2 = envinst2 ,
    };
    struct env15 envinst15 = {
        .envinst3 = envinst3 ,
    };
    struct env22 envinst22 = {
        .envinst4 = envinst4 ,
    };
    struct env29 envinst29 = {
        .envinst1 = envinst1 ,
        .envinst5 = envinst5 ,
    };
    struct env32 envinst32 = {
        .shrink_dash_factor2038 =  shrink_dash_factor2038 ,
    };
    struct env33 envinst33 = {
        .shrink_dash_factor2038 =  shrink_dash_factor2038 ,
    };
    struct env34 envinst34 = {
        .envinst5 = envinst5 ,
    };
    struct env36 envinst36 = {
        .envinst13 = envinst13 ,
    };
    struct env38 envinst38 = {
        .envinst34 = envinst34 ,
    };
    struct env41 envinst41 = {
        .envinst36 = envinst36 ,
    };
    ( ( setlocale ) ( ( (  lc_dash_ctype43 ) ( ) ) ,  ( (  from_dash_string45 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct env46 envinst46 = {
        .envinst36 = envinst36 ,
    };
    struct env48 envinst48 = {
        .envinst46 = envinst46 ,
    };
    struct env51 envinst51 = {
        .envinst48 = envinst48 ,
    };
    struct env54 envinst54 = {
        .envinst48 = envinst48 ,
        .envinst51 = envinst51 ,
    };
    bool  temp59 = ( false );
    bool *  should_dash_resize3305 = ( &temp59 );
    struct env60 envinst60 = {
        .should_dash_resize3305 =  should_dash_resize3305 ,
    };
    struct env61 envinst61 = {
        .should_dash_resize3305 =  should_dash_resize3305 ,
    };
    struct env62 envinst62 = {
        .envinst61 = envinst61 ,
    };
    struct env68 envinst68 = {
        .envinst61 = envinst61 ,
    };
    struct env70 envinst70 = {
        .envinst38 = envinst38 ,
    };
    struct env72 envinst72 = {
        .envinst41 = envinst41 ,
        .envinst29 = envinst29 ,
        .envinst36 = envinst36 ,
    };
    struct env76 envinst76 = {
        .envinst72 = envinst72 ,
        .envinst36 = envinst36 ,
        .envinst32 = envinst32 ,
        .envinst33 = envinst33 ,
        .envinst5 = envinst5 ,
    };
    struct env84 envinst84 = {
        .envinst76 = envinst76 ,
    };
    struct env86 envinst86 = {
        .envinst76 = envinst76 ,
    };
    struct env88 envinst88 = {
        .envinst84 = envinst84 ,
    };
    struct env90 envinst90 = {
        .envinst86 = envinst86 ,
    };
    struct env92 envinst92 = {
        .envinst36 = envinst36 ,
    };
    struct env94 envinst94 = {
        .envinst92 = envinst92 ,
        .envinst86 = envinst86 ,
        .envinst15 = envinst15 ,
        .envinst22 = envinst22 ,
    };
    struct env99 envinst99 = {
        .envinst94 = envinst94 ,
    };
    struct env102 envinst102 = {
        .envinst94 = envinst94 ,
    };
    struct env104 envinst104 = {
        .envinst88 = envinst88 ,
    };
    struct env106 envinst106 = {
        .envinst90 = envinst90 ,
    };
    struct env108 envinst108 = {
        .envinst94 = envinst94 ,
    };
    struct env110 envinst110 = {
        .envinst92 = envinst92 ,
    };
    struct env112 envinst112 = {
        .envinst54 = envinst54 ,
    };
    struct env114 envinst114 = {
        .envinst110 = envinst110 ,
        .envinst108 = envinst108 ,
        .envinst104 = envinst104 ,
        .envinst106 = envinst106 ,
        .envinst112 = envinst112 ,
    };
    struct env127 envinst127 = {
        .envinst102 = envinst102 ,
        .envinst48 = envinst48 ,
        .envinst114 = envinst114 ,
        .envinst99 = envinst99 ,
    };
    enum CAllocator_9  al4102 = ( (  idc133 ) ( ) );
    struct envunion136  temp135 = ( (struct envunion136){ .fun = (  struct TextBuf_78  (*) (  struct env70*  ,    enum CAllocator_9  ,    struct Pos_20  ) )mk137 , .env =  envinst70 } );
    struct TextBuf_78  temp134 = ( temp135.fun ( &temp135.env ,  (  al4102 ) ,  ( (  mk272 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  from_dash_integral44 ( 0 ) ) ) ) ) );
    struct TextBuf_78 *  tb4103 = ( &temp134 );
    struct Slice_273  args4106 = ( (  get274 ) ( ) );
    if ( (  cmp158 ( ( (  args4106 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        const char*  fname4107 = (  elem_dash_get279 ( (  args4106 ) , (  from_dash_integral0 ( 0 ) ) ) );
        struct envunion287  temp286 = ( (struct envunion287){ .fun = (  enum Unit_7  (*) (  struct env76*  ,    struct TextBuf_78 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action288 , .env =  envinst76 } );
        ( temp286.fun ( &temp286.env ,  (  tb4103 ) ,  ( (  mk272 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  from_dash_integral44 ( 0 ) ) ) ) ,  ( (  mk272 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  from_dash_integral44 ( 0 ) ) ) ) ,  ( (  read_dash_contents478 ) ( (  fname4107 ) ,  (  al4102 ) ) ) ) );
    }
    struct Editor_116  temp503 = ( (struct Editor_116) { .f_running = ( true ) , .f_al = (  al4102 ) , .f_pane = ( (  mk504 ) ( (  al4102 ) ,  (  tb4103 ) ) ) , .f_clipboard = ( (struct Maybe_120) { .tag = Maybe_120_None_t } ) , .f_mode = ( (struct EditorMode_121) { .tag = EditorMode_121_Normal_t } ) , .f_msg = ( (struct Maybe_120) { .tag = Maybe_120_None_t } ) } );
    struct Editor_116 *  ed4108 = ( &temp503 );
    struct envunion507  temp506 = ( (struct envunion507){ .fun = (  struct Tui_64  (*) (  struct env60*  ) )mk508 , .env =  envinst60 } );
    struct Tui_64  temp505 = ( temp506.fun ( &temp506.env ) );
    struct Tui_64 *  tui4109 = ( &temp505 );
    struct Screen_635  temp642 = ( (  mk_dash_screen643 ) ( (  tui4109 ) ,  (  al4102 ) ) );
    struct Screen_635 *  screen4110 = ( &temp642 );
    uint32_t  last_dash_redraw_dash_changes4111 = (  from_dash_integral190 ( 0 ) );
    while ( ( ( * (  ed4108 ) ) .f_running ) ) {
        struct env693 envinst693 = {
            .tui4109 =  tui4109 ,
            .envinst62 = envinst62 ,
        };
        struct FunIter_692  temp691 =  into_dash_iter700 ( ( (  from_dash_function701 ) ( ( (struct envunion699){ .fun = (  struct Maybe_695  (*) (  struct env693*  ) )lam702 , .env =  envinst693 } ) ) ) );
        while (true) {
            struct Maybe_695  __cond903 =  next904 (&temp691);
            if (  __cond903 .tag == 0 ) {
                break;
            }
            struct InputEvent_696  ev4113 =  __cond903 .stuff .Maybe_695_Just_s .field0;
            struct InputEvent_696  dref4114 = (  ev4113 );
            if ( dref4114.tag == InputEvent_696_Key_t ) {
                ( (  reset_dash_msg906 ) ( (  ed4108 ) ) );
                struct envunion914  temp913 = ( (struct envunion914){ .fun = (  enum Unit_7  (*) (  struct env127*  ,    struct Editor_116 *  ,    struct Key_131  ) )handle_dash_key915 , .env =  envinst127 } );
                ( temp913.fun ( &temp913.env ,  (  ed4108 ) ,  ( dref4114 .stuff .InputEvent_696_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1366  temp1365 = ( (struct envunion1366){ .fun = (  bool  (*) (  struct env68*  ,    struct Screen_635 *  ) )resize_dash_screen_dash_if_dash_needed1367 , .env =  envinst68 } );
        ( temp1365.fun ( &temp1365.env ,  (  screen4110 ) ) );
        if ( ( (  should_dash_redraw1369 ) ( (  tui4109 ) ) ) ) {
            (*  screen4110 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1370 ) ( (  screen4110 ) ) );
            ( (  set_dash_screen_dash_fg1379 ) ( (  screen4110 ) ,  ( (struct Color_638) { .tag = Color_638_ColorDefault_t } ) ) );
            ( (  set_dash_screen_dash_bg1380 ) ( (  screen4110 ) ,  ( (struct Color_638) { .tag = Color_638_ColorDefault_t } ) ) );
            ( (  render_dash_editor1381 ) ( (  screen4110 ) ,  (  ed4108 ) ) );
            ( (  draw_dash_str1742 ) ( (  screen4110 ) ,  ( ( StrConcat_1743_StrConcat ) ( ( ( StrConcat_1744_StrConcat ) ( ( (  from_dash_string194 ) ( ( "REDRAWS[" ) ,  ( 8 ) ) ) ,  (  last_dash_redraw_dash_changes4111 ) ) ) ,  ( (  from_dash_charlike195 ) ( ( "]" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  (  op_dash_sub786 ( ( (  u32_dash_i321383 ) ( ( ( * ( ( * (  screen4110 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) ) );
            last_dash_redraw_dash_changes4111 = ( (  render_dash_screen1771 ) ( (  screen4110 ) ) );
        }
        ( (  sync1903 ) ( (  tui4109 ) ) );
    }
    ( (  free_dash_screen1912 ) ( (  screen4110 ) ) );
    ( (  deinit1915 ) ( (  tui4109 ) ) );
}
