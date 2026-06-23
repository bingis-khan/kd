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

struct env54 {
    ;
    ;
    struct env48 envinst48;
    ;
    ;
    ;
    ;
};

struct envunion56 {
    enum Unit_7  (*fun) (  struct env48*  ,    struct StrBuilder_50 *  ,    struct Char_53  );
    struct env48 env;
};

struct envunion57 {
    enum Unit_7  (*fun) (  struct env51*  ,    struct StrBuilder_50 *  ,    struct StrView_21  );
    struct env51 env;
};

struct env55 {
    ;
    ;
    struct env48 envinst48;
    ;
    ;
    ;
    ;
    ;
    struct env51 envinst51;
    ;
    ;
    ;
};

struct StrConcat_61 {
    struct StrView_21  field0;
    size_t  field1;
};

static struct StrConcat_61 StrConcat_61_StrConcat (  struct StrView_21  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_61 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_60 {
    struct StrConcat_61  field0;
    struct StrView_21  field1;
};

static struct StrConcat_60 StrConcat_60_StrConcat (  struct StrConcat_61  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_60 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion59 {
    enum Unit_7  (*fun) (  struct env54*  ,    struct StrBuilder_50 *  ,    struct StrConcat_60  );
    struct env54 env;
};

struct env58 {
    ;
    ;
    struct env48 envinst48;
    ;
    ;
    ;
    ;
    struct env54 envinst54;
    ;
    ;
    ;
    ;
};

struct env63 {
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

struct env64 {
    ;
    bool *  should_dash_resize3305;
    ;
    ;
};

enum ColorPalette_68 {
    ColorPalette_68_Palette8,
    ColorPalette_68_Palette16,
    ColorPalette_68_Palette256,
    ColorPalette_68_PaletteRGB,
};

struct Array_70 {
    uint8_t _arr [32];
};

struct Termios_69 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_70  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

struct Tui_67 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_68  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_69  f_orig_dash_termios;
    bool  f_should_dash_redraw;
};

struct envunion66 {
    bool  (*fun) (  struct env64*  ,    struct Tui_67 *  );
    struct env64 env;
};

struct env65 {
    struct env64 envinst64;
    ;
};

struct envunion72 {
    bool  (*fun) (  struct env64*  ,    struct Tui_67 *  );
    struct env64 env;
};

struct env71 {
    ;
    ;
    ;
    ;
    ;
    struct env64 envinst64;
};

struct envunion74 {
    struct List_8  (*fun) (  struct env38*  ,    struct Array_40  ,    enum CAllocator_9  );
    struct env38 env;
};

struct env73 {
    ;
    ;
    ;
    struct env38 envinst38;
    ;
    ;
};

struct envunion76 {
    struct List_11  (*fun) (  struct env41*  ,    struct Slice_12  ,    enum CAllocator_9  );
    struct env41 env;
};

struct envunion77 {
    enum Unit_7  (*fun) (  struct env29*  ,    struct List_8 *  ,    size_t  ,    struct List_11  );
    struct env29 env;
};

struct envunion78 {
    enum Unit_7  (*fun) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env36 env;
};

struct env75 {
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

struct Actions_82 {
    struct List_24  f_list;
    size_t  f_cur;
    bool  f_input_dash_changeset;
};

struct TextBuf_81 {
    enum CAllocator_9  f_al;
    struct List_8  f_buf;
    struct Actions_82  f_actions;
};

struct envunion80 {
    int32_t  (*fun) (  struct env75*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct StrView_21  );
    struct env75 env;
};

struct envunion83 {
    enum Unit_7  (*fun) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env36 env;
};

struct envunion84 {
    enum Unit_7  (*fun) (  struct env32*  ,    struct List_11 *  ,    size_t  ,    size_t  );
    struct env32 env;
};

struct envunion85 {
    enum Unit_7  (*fun) (  struct env33*  ,    struct List_8 *  ,    size_t  ,    size_t  );
    struct env33 env;
};

struct envunion86 {
    enum Unit_7  (*fun) (  struct env5*  ,    struct List_8 *  ,    struct List_11  );
    struct env5 env;
};

struct env79 {
    struct env75 envinst75;
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

struct envunion88 {
    enum Unit_7  (*fun) (  struct env79*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  );
    struct env79 env;
};

struct env87 {
    ;
    ;
    ;
    ;
    struct env79 envinst79;
};

struct envunion90 {
    enum Unit_7  (*fun) (  struct env79*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  );
    struct env79 env;
};

struct env89 {
    ;
    ;
    ;
    ;
    struct env79 envinst79;
};

struct envunion92 {
    struct Pos_20  (*fun) (  struct env87*  ,    struct TextBuf_81 *  ,    struct Action_19  );
    struct env87 env;
};

struct env91 {
    ;
    ;
    ;
    ;
    ;
    struct env87 envinst87;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion94 {
    struct Pos_20  (*fun) (  struct env89*  ,    struct TextBuf_81 *  ,    struct Action_19  );
    struct env89 env;
};

struct env93 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env89 envinst89;
    ;
    ;
};

struct envunion96 {
    enum Unit_7  (*fun) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env36 env;
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

struct envunion98 {
    struct StrView_21  (*fun) (  struct env95*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct Pos_20  );
    struct env95 env;
};

struct envunion99 {
    struct Pos_20  (*fun) (  struct env89*  ,    struct TextBuf_81 *  ,    struct Action_19  );
    struct env89 env;
};

struct envunion100 {
    enum Unit_7  (*fun) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  );
    struct env15 env;
};

struct envunion101 {
    enum Unit_7  (*fun) (  struct env22*  ,    struct List_24 *  ,    struct Changeset_26  );
    struct env22 env;
};

struct env97 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    ;
    ;
    ;
    ;
    struct env89 envinst89;
    struct env15 envinst15;
    struct env22 envinst22;
};

struct Maybe_104 {
    enum {
        Maybe_104_None_t,
        Maybe_104_Just_t,
    } tag;
    union {
        struct {
            struct Cursors_27  field0;
        } Maybe_104_Just_s;
    } stuff;
};

static struct Maybe_104 Maybe_104_Just (  struct Cursors_27  field0 ) {
    return ( struct Maybe_104 ) { .tag = Maybe_104_Just_t, .stuff = { .Maybe_104_Just_s = { .field0 = field0 } } };
};

struct envunion103 {
    struct Maybe_104  (*fun) (  struct env97*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_104  );
    struct env97 env;
};

struct env102 {
    ;
    ;
    ;
    ;
    struct env97 envinst97;
    ;
    ;
    ;
    ;
};

struct envunion106 {
    struct Maybe_104  (*fun) (  struct env97*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_104  );
    struct env97 env;
};

struct env105 {
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
};

struct envunion108 {
    struct Maybe_104  (*fun) (  struct env91*  ,    struct TextBuf_81 *  );
    struct env91 env;
};

struct env107 {
    ;
    ;
    ;
    ;
    ;
    struct env91 envinst91;
    ;
};

struct envunion110 {
    struct Maybe_104  (*fun) (  struct env93*  ,    struct TextBuf_81 *  );
    struct env93 env;
};

struct env109 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env93 envinst93;
};

struct envunion112 {
    struct Maybe_104  (*fun) (  struct env97*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_104  );
    struct env97 env;
};

struct env111 {
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
};

struct envunion114 {
    struct StrView_21  (*fun) (  struct env95*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct Pos_20  );
    struct env95 env;
};

struct env113 {
    ;
    ;
    ;
    ;
    struct env95 envinst95;
    ;
    ;
    ;
    ;
};

struct envunion116 {
    struct StrView_21  (*fun) (  struct env55*  ,    struct StrView_21  ,    enum CAllocator_9  );
    struct env55 env;
};

struct env115 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env55 envinst55;
};

struct envunion118 {
    struct StrView_21  (*fun) (  struct env58*  ,    struct StrConcat_60  ,    enum CAllocator_9  );
    struct env58 env;
};

struct env117 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env58 envinst58;
};

enum Mode_123 {
    Mode_123_Normal,
    Mode_123_Insert,
    Mode_123_Select,
};

struct ScreenCursorOffset_124 {
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
};

struct Pane_122 {
    struct TextBuf_81 *  f_buf;
    struct Pos_20  f_cursor;
    int32_t  f_vi;
    struct Maybe_28  f_sel;
    enum Mode_123  f_mode;
    struct ScreenCursorOffset_124  f_sc_dash_off;
};

struct Maybe_125 {
    enum {
        Maybe_125_None_t,
        Maybe_125_Just_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } Maybe_125_Just_s;
    } stuff;
};

static struct Maybe_125 Maybe_125_Just (  struct StrView_21  field0 ) {
    return ( struct Maybe_125 ) { .tag = Maybe_125_Just_t, .stuff = { .Maybe_125_Just_s = { .field0 = field0 } } };
};

struct EditorMode_126 {
    enum {
        EditorMode_126_Normal_t,
        EditorMode_126_Cmd_t,
    } tag;
    union {
        struct {
            struct StrBuilder_50  field0;
        } EditorMode_126_Cmd_s;
    } stuff;
};

static struct EditorMode_126 EditorMode_126_Cmd (  struct StrBuilder_50  field0 ) {
    return ( struct EditorMode_126 ) { .tag = EditorMode_126_Cmd_t, .stuff = { .EditorMode_126_Cmd_s = { .field0 = field0 } } };
};

struct Editor_121 {
    enum CAllocator_9  f_al;
    bool  f_running;
    struct Pane_122  f_pane;
    struct Maybe_125  f_clipboard;
    struct EditorMode_126  f_mode;
    struct Maybe_125  f_msg;
};

struct envunion120 {
    enum Unit_7  (*fun) (  struct env115*  ,    struct Editor_121 *  ,    struct StrView_21  );
    struct env115 env;
};

struct env119 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env115 envinst115;
    ;
    ;
    ;
    ;
    ;
};

struct envunion128 {
    enum Unit_7  (*fun) (  struct env107*  ,    struct Pane_122 *  );
    struct env107 env;
};

struct envunion129 {
    enum Unit_7  (*fun) (  struct env109*  ,    struct Pane_122 *  );
    struct env109 env;
};

struct envunion130 {
    enum Unit_7  (*fun) (  struct env117*  ,    struct Editor_121 *  ,    struct StrConcat_60  );
    struct env117 env;
};

struct Tuple2_132 {
    struct Pos_20  field0;
    struct Pos_20  field1;
};

static struct Tuple2_132 Tuple2_132_Tuple2 (  struct Pos_20  field0 ,  struct Pos_20  field1 ) {
    return ( struct Tuple2_132 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion131 {
    enum Unit_7  (*fun) (  struct env111*  ,    struct Pane_122 *  ,    struct Tuple2_132  ,    struct StrView_21  );
    struct env111 env;
};

struct envunion133 {
    enum Unit_7  (*fun) (  struct env113*  ,    struct Editor_121 *  );
    struct env113 env;
};

struct env127 {
    ;
    struct env107 envinst107;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env109 envinst109;
    ;
    ;
    struct env117 envinst117;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env111 envinst111;
    struct env113 envinst113;
    ;
    ;
    ;
};

struct envunion135 {
    enum Unit_7  (*fun) (  struct env102*  ,    struct Pane_122 *  ,    struct StrView_21  );
    struct env102 env;
};

struct envunion136 {
    enum Unit_7  (*fun) (  struct env48*  ,    struct StrBuilder_50 *  ,    struct Char_53  );
    struct env48 env;
};

struct envunion137 {
    enum Unit_7  (*fun) (  struct env119*  ,    struct Editor_121 *  ,    struct StrView_21  );
    struct env119 env;
};

struct envunion138 {
    enum Unit_7  (*fun) (  struct env105*  ,    struct Pane_122 *  );
    struct env105 env;
};

struct Key_140 {
    enum {
        Key_140_Escape_t,
        Key_140_Enter_t,
        Key_140_Tab_t,
        Key_140_Backspace_t,
        Key_140_Char_t,
        Key_140_Ctrl_t,
        Key_140_Up_t,
        Key_140_Down_t,
        Key_140_Left_t,
        Key_140_Right_t,
        Key_140_Home_t,
        Key_140_End_t,
        Key_140_PageUp_t,
        Key_140_PageDown_t,
        Key_140_Delete_t,
        Key_140_Insert_t,
        Key_140_F1_t,
        Key_140_F2_t,
        Key_140_F3_t,
        Key_140_F4_t,
        Key_140_F5_t,
        Key_140_F6_t,
        Key_140_F7_t,
        Key_140_F8_t,
        Key_140_F9_t,
        Key_140_F10_t,
        Key_140_F11_t,
        Key_140_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_140_Char_s;
        struct {
            char  field0;
        } Key_140_Ctrl_s;
    } stuff;
};

static struct Key_140 Key_140_Char (  char  field0 ) {
    return ( struct Key_140 ) { .tag = Key_140_Char_t, .stuff = { .Key_140_Char_s = { .field0 = field0 } } };
};

static struct Key_140 Key_140_Ctrl (  char  field0 ) {
    return ( struct Key_140 ) { .tag = Key_140_Ctrl_t, .stuff = { .Key_140_Ctrl_s = { .field0 = field0 } } };
};

struct envunion139 {
    enum Unit_7  (*fun) (  struct env127*  ,    struct Editor_121 *  ,    struct Key_140  );
    struct env127 env;
};

struct env134 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env102 envinst102;
    ;
    struct env48 envinst48;
    struct env119 envinst119;
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
    ;
    struct env127 envinst127;
    ;
};

static  enum CAllocator_9   idc141 (  ) {
    return ( CAllocator_9_CAllocator );
}

struct envunion144 {
    struct TextBuf_81  (*fun) (  struct env73*  ,    enum CAllocator_9  ,    struct Pos_20  );
    struct env73 env;
};

static  void *   cast_dash_ptr154 (    struct List_11 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of155 (    struct List_11 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct List_11 *   zeroed152 (  ) {
    struct List_11 *  temp153;
    struct List_11 *  x570 = (  temp153 );
    ( ( memset ) ( ( (  cast_dash_ptr154 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of155 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct List_11 *   null_dash_ptr151 (  ) {
    return ( (  zeroed152 ) ( ) );
}

static  struct Slice_10   empty150 (  ) {
    return ( (struct Slice_10) { .f_ptr = ( (  null_dash_ptr151 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_8   mk149 (    enum CAllocator_9  al2031 ) {
    struct Slice_10  elements2032 = ( (  empty150 ) ( ) );
    return ( (struct List_8) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env159 {
    struct List_8 *  list2098;
    struct env5 envinst5;
};

struct envunion160 {
    enum Unit_7  (*fun) (  struct env159*  ,    struct List_11  );
    struct env159 env;
};

struct ArrayIter_161 {
    struct Array_40  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_161   into_dash_iter163 (    struct Array_40  self2322 ) {
    return ( (struct ArrayIter_161) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_164 {
    enum {
        Maybe_164_None_t,
        Maybe_164_Just_t,
    } tag;
    union {
        struct {
            struct List_11  field0;
        } Maybe_164_Just_s;
    } stuff;
};

static struct Maybe_164 Maybe_164_Just (  struct List_11  field0 ) {
    return ( struct Maybe_164 ) { .tag = Maybe_164_Just_t, .stuff = { .Maybe_164_Just_s = { .field0 = field0 } } };
};

enum Ordering_167 {
    Ordering_167_LT,
    Ordering_167_EQ,
    Ordering_167_GT,
};

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_167   cmp166 (    size_t  l179 ,    size_t  r181 ) {
    return ( builtin_size_tcmp( (  l179 ) , (  r181 ) ) );
}

struct StrConcat_172 {
    struct StrConcat_60  field0;
    int32_t  field1;
};

static struct StrConcat_172 StrConcat_172_StrConcat (  struct StrConcat_60  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_172 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_171 {
    struct StrConcat_172  field0;
    struct Char_53  field1;
};

static struct StrConcat_171 StrConcat_171_StrConcat (  struct StrConcat_172  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_171 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_175 {
    struct StrView_21  field0;
    struct StrConcat_171  field1;
};

static struct StrConcat_175 StrConcat_175_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_171  field1 ) {
    return ( struct StrConcat_175 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_174 {
    struct StrConcat_175  field0;
    struct Char_53  field1;
};

static struct StrConcat_174 StrConcat_174_StrConcat (  struct StrConcat_175  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_174 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32178 (    size_t  x630 ) {
    return ( (int32_t ) (  x630 ) );
}

static  enum Unit_7   print_dash_str177 (    struct StrView_21  self1379 ) {
    ( ( printf ) ( ( (  from_dash_string45 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32178 ) ( ( ( (  self1379 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1379 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str183 (    size_t  self1464 ) {
    ( ( printf ) ( ( (  from_dash_string45 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1464 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str182 (    struct StrConcat_61  self1503 ) {
    struct StrConcat_61  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str177 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str183 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str181 (    struct StrConcat_60  self1503 ) {
    struct StrConcat_60  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str182 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str177 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str184 (    int32_t  self1440 ) {
    ( ( printf ) ( ( (  from_dash_string45 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1440 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str180 (    struct StrConcat_172  self1503 ) {
    struct StrConcat_172  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str181 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str184 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

struct Scalar_188 {
    uint32_t  f_value;
};

struct CharDestructured_187 {
    enum {
        CharDestructured_187_Ref_t,
        CharDestructured_187_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_53  field0;
        } CharDestructured_187_Ref_s;
        struct {
            struct Scalar_188  field0;
        } CharDestructured_187_Scalar_s;
    } stuff;
};

static struct CharDestructured_187 CharDestructured_187_Ref (  struct Char_53  field0 ) {
    return ( struct CharDestructured_187 ) { .tag = CharDestructured_187_Ref_t, .stuff = { .CharDestructured_187_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_187 CharDestructured_187_Scalar (  struct Scalar_188  field0 ) {
    return ( struct CharDestructured_187 ) { .tag = CharDestructured_187_Scalar_t, .stuff = { .CharDestructured_187_Scalar_s = { .field0 = field0 } } };
};

static  bool   eq190 (    uint8_t  l116 ,    uint8_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint8_t   size_dash_u8192 (    size_t  x639 ) {
    return ( (uint8_t ) (  x639 ) );
}

static  size_t   op_dash_div193 (    size_t  l285 ,    size_t  r287 ) {
    return ( (  l285 ) / (  r287 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer191 (    uint8_t *  ptr678 ) {
    return ( (  size_dash_u8192 ) ( (  op_dash_div193 ( ( ( (size_t ) (  ptr678 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint8_t   from_dash_integral194 (    int64_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  uint32_t   size_dash_u32195 (    size_t  x633 ) {
    return ( (uint32_t ) (  x633 ) );
}

static  size_t   cast196 (    uint8_t *  x356 ) {
    return ( (size_t ) (  x356 ) );
}

static  struct CharDestructured_187   destructure189 (    struct Char_53  c712 ) {
    if ( (  eq190 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer191 ) ( ( (  c712 ) .f_ptr ) ) ) , (  from_dash_integral194 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_187_Scalar ) ( ( (struct Scalar_188) { .f_value = ( (  size_dash_u32195 ) ( ( ( (  cast196 ) ( ( (  c712 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_187_Ref ) ( (  c712 ) ) );
    }
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_167   cmp197 (    uint32_t  l164 ,    uint32_t  r166 ) {
    return ( builtin_uint32_tcmp( (  l164 ) , (  r166 ) ) );
}

static  uint32_t   from_dash_integral198 (    int64_t  x52 ) {
    return ( (uint32_t ) (  x52 ) );
}

static  uint8_t   cast201 (    uint32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  uint8_t   u32_dash_u8200 (    uint32_t  x657 ) {
    return ( (  cast201 ) ( (  x657 ) ) );
}

static  enum Unit_7   printf_dash_char186 (    struct Char_53  c758 ) {
    struct CharDestructured_187  dref759 = ( (  destructure189 ) ( (  c758 ) ) );
    if ( dref759.tag == CharDestructured_187_Ref_t ) {
        ( ( printf ) ( ( (  from_dash_string45 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32178 ) ( ( ( dref759 .stuff .CharDestructured_187_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref759 .stuff .CharDestructured_187_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref759.tag == CharDestructured_187_Scalar_t ) {
            if ( (  cmp197 ( ( ( dref759 .stuff .CharDestructured_187_Scalar_s .field0 ) .f_value ) , (  from_dash_integral198 ( 127 ) ) ) == 2 ) ) {
                const char*  temp199 = ( (  from_dash_string45 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp199);
                exit ( 1 );
                ( Unit_7_Unit );
            }
            ( ( printf ) ( ( (  from_dash_string45 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8200 ) ( ( ( dref759 .stuff .CharDestructured_187_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str185 (    struct Char_53  self1404 ) {
    ( (  printf_dash_char186 ) ( (  self1404 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str179 (    struct StrConcat_171  self1503 ) {
    struct StrConcat_171  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str180 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str185 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str176 (    struct StrConcat_175  self1503 ) {
    struct StrConcat_175  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str177 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str179 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str173 (    struct StrConcat_174  self1503 ) {
    struct StrConcat_174  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str176 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str185 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  struct StrView_21   from_dash_string202 (    uint8_t *  ptr86 ,    size_t  count88 ) {
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = (  ptr86 ) , .f_count = (  count88 ) } ) } );
}

static  uint8_t *   cast204 (    uint8_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_167   cmp207 (    uint8_t  l169 ,    uint8_t  r171 ) {
    return ( builtin_uint8_tcmp( (  l169 ) , (  r171 ) ) );
}

static  size_t   next_dash_char206 (    uint8_t *  p688 ) {
    uint8_t  pb689 = ( * (  p688 ) );
    if ( (  cmp207 ( (  pb689 ) , (  from_dash_integral194 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp207 ( (  pb689 ) , (  from_dash_integral194 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp207 ( (  pb689 ) , (  from_dash_integral194 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp207 ( (  pb689 ) , (  from_dash_integral194 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp208 = ( (  from_dash_string45 ) ( ( "(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp208);
                    exit ( 1 );
                    ( Unit_7_Unit );
                }
            }
        }
    }
}

static  struct Char_53   scan_dash_from_dash_mem205 (    uint8_t *  p700 ) {
    size_t  clen701 = ( (  next_dash_char206 ) ( (  p700 ) ) );
    if ( (  cmp166 ( (  clen701 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp209 = ( (  from_dash_string45 ) ( ( "UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp209);
        exit ( 1 );
        ( Unit_7_Unit );
    }
    return ( (struct Char_53) { .f_ptr = (  p700 ) , .f_num_dash_bytes = (  clen701 ) } );
}

static  struct Char_53   from_dash_charlike203 (    uint8_t *  ptr704 ,    size_t  num_dash_bytes706 ) {
    uint8_t *  ptr707 = ( ( (  cast204 ) ( (  ptr704 ) ) ) );
    return ( (  scan_dash_from_dash_mem205 ) ( (  ptr707 ) ) );
}

static  enum Unit_7   panic170 (    struct StrConcat_171  errmsg1712 ) {
    ( (  print_dash_str173 ) ( ( ( StrConcat_174_StrConcat ) ( ( ( StrConcat_175_StrConcat ) ( ( (  from_dash_string202 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct List_11 *   cast_dash_ptr210 (    struct Array_40 *  p359 ) {
    return ( (struct List_11 * ) (  p359 ) );
}

static  int64_t   op_dash_mul212 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) * (  r196 ) );
}

static  struct List_11 *   offset_dash_ptr211 (    struct List_11 *  x338 ,    int64_t  count340 ) {
    struct List_11  temp213;
    return ( (struct List_11 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul212 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp213 ) ) ) ) ) ) ) ) );
}

static  struct List_11 *   get_dash_ptr169 (    struct Array_40 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp166 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i2253 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic170 ) ( ( ( StrConcat_171_StrConcat ) ( ( ( StrConcat_172_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string202 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct List_11 *  p2254 = ( ( (  cast_dash_ptr210 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr211 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  struct List_11   get168 (    struct Array_40 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr169 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  size_t   op_dash_add214 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) + (  r272 ) );
}

static  struct Maybe_164   next165 (    struct ArrayIter_161 *  self2329 ) {
    if ( (  cmp166 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
    struct List_11  e2331 = ( (  get168 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add214 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_164_Just ) ( (  e2331 ) ) );
}

static  enum Unit_7   for_dash_each158 (    struct Array_40  iterable1074 ,   struct envunion160  fun1076 ) {
    struct ArrayIter_161  temp162 = ( (  into_dash_iter163 ) ( (  iterable1074 ) ) );
    struct ArrayIter_161 *  it1077 = ( &temp162 );
    while ( ( true ) ) {
        struct Maybe_164  dref1078 = ( (  next165 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_164_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_164_Just_t ) {
                struct envunion160  temp215 = (  fun1076 );
                ( temp215.fun ( &temp215.env ,  ( dref1078 .stuff .Maybe_164_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  bool   eq221 (    size_t  l126 ,    size_t  r128 ) {
    return ( (  l126 ) == (  r128 ) );
}

struct TypeSize_224 {
    size_t  f_size;
};

static  struct TypeSize_224   get_dash_typesize223 (  ) {
    struct List_11  temp225;
    return ( (struct TypeSize_224) { .f_size = ( sizeof( ( (  temp225 ) ) ) ) } );
}

static  struct List_11 *   cast_dash_ptr226 (    void *  p359 ) {
    return ( (struct List_11 * ) (  p359 ) );
}

static  size_t   op_dash_mul227 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) * (  r282 ) );
}

static  struct Slice_10   allocate222 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize223 ) ( ) ) ) .f_size );
    struct List_11 *  ptr1957 = ( (  cast_dash_ptr226 ) ( ( ( malloc ) ( (  op_dash_mul227 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_10) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env228 {
    struct Slice_10  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_230 {
    struct List_11  field0;
    int32_t  field1;
};

static struct Tuple2_230 Tuple2_230_Tuple2 (  struct List_11  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_230 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion229 {
    enum Unit_7  (*fun) (  struct env228*  ,    struct Tuple2_230  );
    struct env228 env;
};

struct StrConcat_236 {
    struct StrConcat_60  field0;
    size_t  field1;
};

static struct StrConcat_236 StrConcat_236_StrConcat (  struct StrConcat_60  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_236 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_235 {
    struct StrConcat_236  field0;
    struct Char_53  field1;
};

static struct StrConcat_235 StrConcat_235_StrConcat (  struct StrConcat_236  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_235 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_239 {
    struct StrView_21  field0;
    struct StrConcat_235  field1;
};

static struct StrConcat_239 StrConcat_239_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_235  field1 ) {
    return ( struct StrConcat_239 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_238 {
    struct StrConcat_239  field0;
    struct Char_53  field1;
};

static struct StrConcat_238 StrConcat_238_StrConcat (  struct StrConcat_239  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_238 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str242 (    struct StrConcat_236  self1503 ) {
    struct StrConcat_236  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str181 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str183 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str241 (    struct StrConcat_235  self1503 ) {
    struct StrConcat_235  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str242 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str185 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str240 (    struct StrConcat_239  self1503 ) {
    struct StrConcat_239  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str177 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str241 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str237 (    struct StrConcat_238  self1503 ) {
    struct StrConcat_238  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str240 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str185 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic234 (    struct StrConcat_235  errmsg1712 ) {
    ( (  print_dash_str237 ) ( ( ( StrConcat_238_StrConcat ) ( ( ( StrConcat_239_StrConcat ) ( ( (  from_dash_string202 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  int64_t   size_dash_i64243 (    size_t  x594 ) {
    return ( (int64_t ) (  x594 ) );
}

static  struct List_11 *   get_dash_ptr233 (    struct Slice_10  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp166 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic234 ) ( ( ( StrConcat_235_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string202 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct List_11 *  elem_dash_ptr1760 = ( (  offset_dash_ptr211 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set232 (    struct Slice_10  slice1774 ,    size_t  i1776 ,    struct List_11  x1778 ) {
    struct List_11 *  ep1779 = ( (  get_dash_ptr233 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  size_t   i32_dash_size244 (    int32_t  x609 ) {
    return ( (size_t ) ( (int64_t ) (  x609 ) ) );
}

static  enum Unit_7   lam231 (   struct env228* env ,    struct Tuple2_230  dref2043 ) {
    return ( (  set232 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size244 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct SliceIter_247 {
    struct Slice_10  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_248 {
    int32_t  f_from;
};

struct Zip_246 {
    struct SliceIter_247  f_left_dash_it;
    struct FromIter_248  f_right_dash_it;
};

static  struct Zip_246   into_dash_iter250 (    struct Zip_246  self911 ) {
    return (  self911 );
}

struct Maybe_251 {
    enum {
        Maybe_251_None_t,
        Maybe_251_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_230  field0;
        } Maybe_251_Just_s;
    } stuff;
};

static struct Maybe_251 Maybe_251_Just (  struct Tuple2_230  field0 ) {
    return ( struct Maybe_251 ) { .tag = Maybe_251_Just_t, .stuff = { .Maybe_251_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_164   next253 (    struct SliceIter_247 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp166 ( (  op_dash_add214 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
    struct List_11  elem1830 = ( * ( (  offset_dash_ptr211 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add214 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_164_Just ) ( (  elem1830 ) ) );
}

struct Maybe_254 {
    enum {
        Maybe_254_None_t,
        Maybe_254_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_254_Just_s;
    } stuff;
};

static struct Maybe_254 Maybe_254_Just (  int32_t  field0 ) {
    return ( struct Maybe_254 ) { .tag = Maybe_254_Just_t, .stuff = { .Maybe_254_Just_s = { .field0 = field0 } } };
};

static  int32_t   op_dash_add256 (    int32_t  l207 ,    int32_t  r209 ) {
    return ( (  l207 ) + (  r209 ) );
}

static  struct Maybe_254   next255 (    struct FromIter_248 *  dref905 ) {
    int32_t  v907 = ( ( (* dref905 ) ) .f_from );
    (* dref905 ) .f_from = (  op_dash_add256 ( ( ( (* dref905 ) ) .f_from ) , (  from_dash_integral44 ( 1 ) ) ) );
    return ( ( Maybe_254_Just ) ( (  v907 ) ) );
}

static  struct Maybe_251   next252 (    struct Zip_246 *  self914 ) {
    struct Zip_246  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_164  dref916 = ( (  next253 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_164_None_t ) {
            return ( (struct Maybe_251) { .tag = Maybe_251_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_164_Just_t ) {
                struct Maybe_254  dref918 = ( (  next255 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_254_None_t ) {
                    return ( (struct Maybe_251) { .tag = Maybe_251_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_254_Just_t ) {
                        ( (  next253 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next255 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_251_Just ) ( ( ( Tuple2_230_Tuple2 ) ( ( dref916 .stuff .Maybe_164_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_254_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each245 (    struct Zip_246  iterable1074 ,   struct envunion229  fun1076 ) {
    struct Zip_246  temp249 = ( (  into_dash_iter250 ) ( (  iterable1074 ) ) );
    struct Zip_246 *  it1077 = ( &temp249 );
    while ( ( true ) ) {
        struct Maybe_251  dref1078 = ( (  next252 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_251_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_251_Just_t ) {
                struct envunion229  temp257 = (  fun1076 );
                ( temp257.fun ( &temp257.env ,  ( dref1078 .stuff .Maybe_251_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct SliceIter_247   into_dash_iter259 (    struct Slice_10  self1822 ) {
    return ( (struct SliceIter_247) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_248   into_dash_iter260 (    struct FromIter_248  it903 ) {
    return (  it903 );
}

static  struct Zip_246   zip258 (    struct Slice_10  left922 ,    struct FromIter_248  right924 ) {
    struct SliceIter_247  left_dash_it925 = ( (  into_dash_iter259 ) ( (  left922 ) ) );
    struct FromIter_248  right_dash_it926 = ( (  into_dash_iter260 ) ( (  right924 ) ) );
    return ( (struct Zip_246) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct FromIter_248   from261 (    int32_t  f900 ) {
    return ( (struct FromIter_248) { .f_from = (  f900 ) } );
}

static  void *   cast_dash_ptr263 (    struct List_11 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free262 (    enum CAllocator_9  dref1959 ,    struct Slice_10  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr263 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   grow_dash_if_dash_full220 (   struct env1* env ,    struct List_8 *  list2041 ) {
    if ( (  eq221 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate222 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq221 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_10  new_dash_slice2042 = ( (  allocate222 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul227 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env228 envinst228 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion229  fun2046 = ( (struct envunion229){ .fun = (  enum Unit_7  (*) (  struct env228*  ,    struct Tuple2_230  ) )lam231 , .env =  envinst228 } );
            ( (  for_dash_each245 ) ( ( (  zip258 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from261 ) ( (  from_dash_integral44 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free262 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add218 (   struct env5* env ,    struct List_8 *  list2049 ,    struct List_11  elem2051 ) {
    struct envunion6  temp219 = ( (struct envunion6){ .fun = (  enum Unit_7  (*) (  struct env1*  ,    struct List_8 *  ) )grow_dash_if_dash_full220 , .env =  env->envinst1 } );
    ( temp219.fun ( &temp219.env ,  (  list2049 ) ) );
    ( (  set232 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add214 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam216 (   struct env159* env ,    struct List_11  x2102 ) {
    struct envunion35  temp217 = ( (struct envunion35){ .fun = (  enum Unit_7  (*) (  struct env5*  ,    struct List_8 *  ,    struct List_11  ) )add218 , .env =  env->envinst5 } );
    return ( temp217.fun ( &temp217.env ,  ( env->list2098 ) ,  (  x2102 ) ) );
}

static  enum Unit_7   add_dash_all157 (   struct env34* env ,    struct List_8 *  list2098 ,    struct Array_40  it2100 ) {
    struct env159 envinst159 = {
        .list2098 =  list2098 ,
        .envinst5 = env->envinst5 ,
    };
    ( (  for_dash_each158 ) ( (  it2100 ) ,  ( (struct envunion160){ .fun = (  enum Unit_7  (*) (  struct env159*  ,    struct List_11  ) )lam216 , .env =  envinst159 } ) ) );
    return ( Unit_7_Unit );
}

static  struct List_8   from_dash_iter147 (   struct env38* env ,    struct Array_40  iter2139 ,    enum CAllocator_9  al2141 ) {
    struct List_8  temp148 = ( (  mk149 ) ( (  al2141 ) ) );
    struct List_8 *  list2142 = ( &temp148 );
    struct envunion39  temp156 = ( (struct envunion39){ .fun = (  enum Unit_7  (*) (  struct env34*  ,    struct List_8 *  ,    struct Array_40  ) )add_dash_all157 , .env =  env->envinst34 } );
    ( temp156.fun ( &temp156.env ,  (  list2142 ) ,  (  iter2139 ) ) );
    return ( * (  list2142 ) );
}

static  struct Array_40   from_dash_listlike264 (    struct Array_40  self330 ) {
    return (  self330 );
}

static  void *   cast_dash_ptr270 (    uint8_t * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of271 (    uint8_t *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint8_t *   zeroed268 (  ) {
    uint8_t *  temp269;
    uint8_t *  x570 = (  temp269 );
    ( ( memset ) ( ( (  cast_dash_ptr270 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of271 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   null_dash_ptr267 (  ) {
    return ( (  zeroed268 ) ( ) );
}

static  struct Slice_12   empty266 (  ) {
    return ( (struct Slice_12) { .f_ptr = ( (  null_dash_ptr267 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_11   mk265 (    enum CAllocator_9  al2031 ) {
    struct Slice_12  elements2032 = ( (  empty266 ) ( ) );
    return ( (struct List_11) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr278 (    struct Changeset_26 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of279 (    struct Changeset_26 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Changeset_26 *   zeroed276 (  ) {
    struct Changeset_26 *  temp277;
    struct Changeset_26 *  x570 = (  temp277 );
    ( ( memset ) ( ( (  cast_dash_ptr278 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of279 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Changeset_26 *   null_dash_ptr275 (  ) {
    return ( (  zeroed276 ) ( ) );
}

static  struct Slice_25   empty274 (  ) {
    return ( (struct Slice_25) { .f_ptr = ( (  null_dash_ptr275 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_24   mk273 (    enum CAllocator_9  al2031 ) {
    struct Slice_25  elements2032 = ( (  empty274 ) ( ) );
    return ( (struct List_24) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_82   mk_dash_actions272 (    enum CAllocator_9  al3606 ) {
    return ( (struct Actions_82) { .f_list = ( (  mk273 ) ( (  al3606 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( false ) } );
}

static  struct TextBuf_81   mk145 (   struct env73* env ,    enum CAllocator_9  al3617 ,    struct Pos_20  cursor_dash_pos3619 ) {
    struct envunion74  temp146 = ( (struct envunion74){ .fun = (  struct List_8  (*) (  struct env38*  ,    struct Array_40  ,    enum CAllocator_9  ) )from_dash_iter147 , .env =  env->envinst38 } );
    return ( (struct TextBuf_81) { .f_al = (  al3617 ) , .f_buf = ( temp146.fun ( &temp146.env ,  ( (  from_dash_listlike264 ) ( ( (struct Array_40) { ._arr = { ( (  mk265 ) ( (  al3617 ) ) ) } } ) ) ) ,  (  al3617 ) ) ) , .f_actions = ( (  mk_dash_actions272 ) ( (  al3617 ) ) ) } );
}

static  struct Pos_20   mk280 (    int32_t  line3579 ,    int32_t  bi3581 ) {
    return ( (struct Pos_20) { .f_line = (  line3579 ) , .f_bi = (  bi3581 ) } );
}

struct Slice_281 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  const char* *   offset_dash_ptr283 (    const char* *  x338 ,    int64_t  count340 ) {
    const char*  temp284;
    return ( (const char* * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul212 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp284 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral285 (    int64_t  x46 ) {
    return (  x46 );
}

static  size_t   op_dash_sub286 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) - (  r277 ) );
}

static  struct Slice_281   get282 (  ) {
    return ( (struct Slice_281) { .f_ptr = ( (  offset_dash_ptr283 ) ( ( _global_argv ) ,  (  from_dash_integral285 ( 1 ) ) ) ) , .f_count = (  op_dash_sub286 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

struct Maybe_290 {
    enum {
        Maybe_290_None_t,
        Maybe_290_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_290_Just_s;
    } stuff;
};

static struct Maybe_290 Maybe_290_Just (  const char*  field0 ) {
    return ( struct Maybe_290 ) { .tag = Maybe_290_Just_t, .stuff = { .Maybe_290_Just_s = { .field0 = field0 } } };
};

static  const char*   undefined291 (  ) {
    const char*  temp292;
    return (  temp292 );
}

static  const char*   or_dash_fail289 (    struct Maybe_290  x1725 ,    struct StrConcat_235  errmsg1727 ) {
    struct Maybe_290  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_290_None_t ) {
        ( (  panic234 ) ( (  errmsg1727 ) ) );
        return ( (  undefined291 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_290_Just_t ) {
            return ( dref1728 .stuff .Maybe_290_Just_s .field0 );
        }
    }
}

static  struct Maybe_290   try_dash_get293 (    struct Slice_281  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp166 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_290) { .tag = Maybe_290_None_t } );
    }
    const char* *  elem_dash_ptr1766 = ( (  offset_dash_ptr283 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_290_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  const char*   get288 (    struct Slice_281  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail289 ) ( ( (  try_dash_get293 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_235_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string202 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get287 (    struct Slice_281  self1867 ,    size_t  idx1869 ) {
    return ( (  get288 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

struct envunion295 {
    enum Unit_7  (*fun) (  struct env79*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  );
    struct env79 env;
};

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_167   cmp299 (    int32_t  l159 ,    int32_t  r161 ) {
    return ( builtin_int32_tcmp( (  l159 ) , (  r161 ) ) );
}

static  enum Ordering_167   cmp298 (    struct Pos_20  l3572 ,    struct Pos_20  r3574 ) {
    enum Ordering_167  dref3575 = ( (  cmp299 ) ( ( (  l3572 ) .f_line ) ,  ( (  r3574 ) .f_line ) ) );
    switch (  dref3575 ) {
        case Ordering_167_EQ : {
            return ( (  cmp299 ) ( ( (  l3572 ) .f_bi ) ,  ( (  r3574 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_167  els3576 =  dref3575;
            return (  els3576 );
            break;
        }
    }
}

static  struct Pos_20   min297 (    struct Pos_20  l1236 ,    struct Pos_20  r1238 ) {
    if ( (  cmp298 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Pos_20   max300 (    struct Pos_20  l1315 ,    struct Pos_20  r1317 ) {
    if ( (  cmp298 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  bool   eq302 (    int32_t  l106 ,    int32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq301 (    struct Pos_20  l3567 ,    struct Pos_20  r3569 ) {
    return ( (  eq302 ( ( (  l3567 ) .f_line ) , ( (  r3569 ) .f_line ) ) ) && (  eq302 ( ( (  l3567 ) .f_bi ) , ( (  r3569 ) .f_bi ) ) ) );
}

static  size_t   size303 (    struct List_8 *  l2133 ) {
    return ( ( * (  l2133 ) ) .f_count );
}

static  struct List_11 *   get_dash_ptr308 (    struct List_8 *  list2001 ,    size_t  i2003 ) {
    if ( ( (  cmp166 ( (  i2003 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i2003 ) , ( ( * (  list2001 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic234 ) ( ( ( StrConcat_235_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2003 ) ) ) ,  ( (  from_dash_string202 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2001 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr233 ) ( ( ( * (  list2001 ) ) .f_elements ) ,  (  i2003 ) ) );
}

static  struct List_11   get307 (    struct List_8 *  list2011 ,    size_t  i2013 ) {
    return ( * ( (  get_dash_ptr308 ) ( (  list2011 ) ,  (  i2013 ) ) ) );
}

static  uint8_t *   offset_dash_ptr311 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp312;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul212 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp312 ) ) ) ) ) ) ) ) );
}

static  size_t   min313 (    size_t  l1236 ,    size_t  r1238 ) {
    if ( (  cmp166 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Slice_12   subslice310 (    struct Slice_12  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    uint8_t *  begin_dash_ptr1787 = ( (  offset_dash_ptr311 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp166 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp166 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_12) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub286 ( ( (  min313 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_12) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct Slice_12   from309 (    struct Slice_12  slice1791 ,    size_t  from1793 ) {
    return ( (  subslice310 ) ( (  slice1791 ) ,  (  from1793 ) ,  ( (  slice1791 ) .f_count ) ) );
}

static  struct Slice_12   to_dash_slice314 (    struct List_11  l2126 ) {
    uint8_t *  ptr2127 = ( ( (  l2126 ) .f_elements ) .f_ptr );
    return ( (struct Slice_12) { .f_ptr = (  ptr2127 ) , .f_count = ( (  l2126 ) .f_count ) } );
}

static  enum Unit_7   set315 (    struct List_8 *  list2021 ,    size_t  i2023 ,    struct List_11  elem2025 ) {
    if ( ( (  cmp166 ( (  i2023 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i2023 ) , ( ( * (  list2021 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic234 ) ( ( ( StrConcat_235_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2023 ) ) ) ,  ( (  from_dash_string202 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2021 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set232 ) ( ( ( * (  list2021 ) ) .f_elements ) ,  (  i2023 ) ,  (  elem2025 ) ) );
    return ( Unit_7_Unit );
}

struct env322 {
    struct List_11 *  list2098;
    struct env13 envinst13;
};

struct envunion323 {
    enum Unit_7  (*fun) (  struct env322*  ,    uint8_t  );
    struct env322 env;
};

struct SliceIter_324 {
    struct Slice_12  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_324   into_dash_iter326 (    struct Slice_12  self1822 ) {
    return ( (struct SliceIter_324) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_327 {
    enum {
        Maybe_327_None_t,
        Maybe_327_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_327_Just_s;
    } stuff;
};

static struct Maybe_327 Maybe_327_Just (  uint8_t  field0 ) {
    return ( struct Maybe_327 ) { .tag = Maybe_327_Just_t, .stuff = { .Maybe_327_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_327   next328 (    struct SliceIter_324 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp166 ( (  op_dash_add214 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_327) { .tag = Maybe_327_None_t } );
    }
    uint8_t  elem1830 = ( * ( (  offset_dash_ptr311 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add214 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_327_Just ) ( (  elem1830 ) ) );
}

static  enum Unit_7   for_dash_each321 (    struct Slice_12  iterable1074 ,   struct envunion323  fun1076 ) {
    struct SliceIter_324  temp325 = ( (  into_dash_iter326 ) ( (  iterable1074 ) ) );
    struct SliceIter_324 *  it1077 = ( &temp325 );
    while ( ( true ) ) {
        struct Maybe_327  dref1078 = ( (  next328 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_327_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_327_Just_t ) {
                struct envunion323  temp329 = (  fun1076 );
                ( temp329.fun ( &temp329.env ,  ( dref1078 .stuff .Maybe_327_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

struct TypeSize_337 {
    size_t  f_size;
};

static  struct TypeSize_337   get_dash_typesize336 (  ) {
    uint8_t  temp338;
    return ( (struct TypeSize_337) { .f_size = ( sizeof( ( (  temp338 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr339 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_12   allocate335 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize336 ) ( ) ) ) .f_size );
    uint8_t *  ptr1957 = ( (  cast_dash_ptr339 ) ( ( ( malloc ) ( (  op_dash_mul227 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_12) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env340 {
    struct Slice_12  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_342 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_342 Tuple2_342_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_342 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion341 {
    enum Unit_7  (*fun) (  struct env340*  ,    struct Tuple2_342  );
    struct env340 env;
};

static  uint8_t *   get_dash_ptr345 (    struct Slice_12  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp166 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic234 ) ( ( ( StrConcat_235_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string202 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1760 = ( (  offset_dash_ptr311 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set344 (    struct Slice_12  slice1774 ,    size_t  i1776 ,    uint8_t  x1778 ) {
    uint8_t *  ep1779 = ( (  get_dash_ptr345 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam343 (   struct env340* env ,    struct Tuple2_342  dref2043 ) {
    return ( (  set344 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size244 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct Zip_347 {
    struct SliceIter_324  f_left_dash_it;
    struct FromIter_248  f_right_dash_it;
};

static  struct Zip_347   into_dash_iter349 (    struct Zip_347  self911 ) {
    return (  self911 );
}

struct Maybe_350 {
    enum {
        Maybe_350_None_t,
        Maybe_350_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_342  field0;
        } Maybe_350_Just_s;
    } stuff;
};

static struct Maybe_350 Maybe_350_Just (  struct Tuple2_342  field0 ) {
    return ( struct Maybe_350 ) { .tag = Maybe_350_Just_t, .stuff = { .Maybe_350_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_350   next351 (    struct Zip_347 *  self914 ) {
    struct Zip_347  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_327  dref916 = ( (  next328 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_327_None_t ) {
            return ( (struct Maybe_350) { .tag = Maybe_350_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_327_Just_t ) {
                struct Maybe_254  dref918 = ( (  next255 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_254_None_t ) {
                    return ( (struct Maybe_350) { .tag = Maybe_350_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_254_Just_t ) {
                        ( (  next328 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next255 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_350_Just ) ( ( ( Tuple2_342_Tuple2 ) ( ( dref916 .stuff .Maybe_327_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_254_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each346 (    struct Zip_347  iterable1074 ,   struct envunion341  fun1076 ) {
    struct Zip_347  temp348 = ( (  into_dash_iter349 ) ( (  iterable1074 ) ) );
    struct Zip_347 *  it1077 = ( &temp348 );
    while ( ( true ) ) {
        struct Maybe_350  dref1078 = ( (  next351 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_350_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_350_Just_t ) {
                struct envunion341  temp352 = (  fun1076 );
                ( temp352.fun ( &temp352.env ,  ( dref1078 .stuff .Maybe_350_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_347   zip353 (    struct Slice_12  left922 ,    struct FromIter_248  right924 ) {
    struct SliceIter_324  left_dash_it925 = ( (  into_dash_iter326 ) ( (  left922 ) ) );
    struct FromIter_248  right_dash_it926 = ( (  into_dash_iter260 ) ( (  right924 ) ) );
    return ( (struct Zip_347) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr355 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free354 (    enum CAllocator_9  dref1959 ,    struct Slice_12  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr355 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   grow_dash_if_dash_full334 (   struct env2* env ,    struct List_11 *  list2041 ) {
    if ( (  eq221 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate335 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq221 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_12  new_dash_slice2042 = ( (  allocate335 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul227 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env340 envinst340 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion341  fun2046 = ( (struct envunion341){ .fun = (  enum Unit_7  (*) (  struct env340*  ,    struct Tuple2_342  ) )lam343 , .env =  envinst340 } );
            ( (  for_dash_each346 ) ( ( (  zip353 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from261 ) ( (  from_dash_integral44 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free354 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add332 (   struct env13* env ,    struct List_11 *  list2049 ,    uint8_t  elem2051 ) {
    struct envunion14  temp333 = ( (struct envunion14){ .fun = (  enum Unit_7  (*) (  struct env2*  ,    struct List_11 *  ) )grow_dash_if_dash_full334 , .env =  env->envinst2 } );
    ( temp333.fun ( &temp333.env ,  (  list2049 ) ) );
    ( (  set344 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add214 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam330 (   struct env322* env ,    uint8_t  x2102 ) {
    struct envunion37  temp331 = ( (struct envunion37){ .fun = (  enum Unit_7  (*) (  struct env13*  ,    struct List_11 *  ,    uint8_t  ) )add332 , .env =  env->envinst13 } );
    return ( temp331.fun ( &temp331.env ,  ( env->list2098 ) ,  (  x2102 ) ) );
}

static  enum Unit_7   add_dash_all320 (   struct env36* env ,    struct List_11 *  list2098 ,    struct Slice_12  it2100 ) {
    struct env322 envinst322 = {
        .list2098 =  list2098 ,
        .envinst13 = env->envinst13 ,
    };
    ( (  for_dash_each321 ) ( (  it2100 ) ,  ( (struct envunion323){ .fun = (  enum Unit_7  (*) (  struct env322*  ,    uint8_t  ) )lam330 , .env =  envinst322 } ) ) );
    return ( Unit_7_Unit );
}

static  struct List_11   from_dash_iter317 (   struct env41* env ,    struct Slice_12  iter2139 ,    enum CAllocator_9  al2141 ) {
    struct List_11  temp318 = ( (  mk265 ) ( (  al2141 ) ) );
    struct List_11 *  list2142 = ( &temp318 );
    struct envunion42  temp319 = ( (struct envunion42){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all320 , .env =  env->envinst36 } );
    ( temp319.fun ( &temp319.env ,  (  list2142 ) ,  (  iter2139 ) ) );
    return ( * (  list2142 ) );
}

static  struct StrView_21   or_dash_else357 (    struct Maybe_125  self1732 ,    struct StrView_21  alt1734 ) {
    struct Maybe_125  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_125_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_125_Just_t ) {
            return ( dref1735 .stuff .Maybe_125_Just_s .field0 );
        }
    }
}

struct LineIter_359 {
    struct StrView_21  f_og;
    size_t  f_last;
};

static  uint8_t   undefined363 (  ) {
    uint8_t  temp364;
    return (  temp364 );
}

static  uint8_t   or_dash_fail362 (    struct Maybe_327  x1725 ,    struct StrConcat_235  errmsg1727 ) {
    struct Maybe_327  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_327_None_t ) {
        ( (  panic234 ) ( (  errmsg1727 ) ) );
        return ( (  undefined363 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_327_Just_t ) {
            return ( dref1728 .stuff .Maybe_327_Just_s .field0 );
        }
    }
}

static  struct Maybe_327   try_dash_get365 (    struct Slice_12  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp166 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_327) { .tag = Maybe_327_None_t } );
    }
    uint8_t *  elem_dash_ptr1766 = ( (  offset_dash_ptr311 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_327_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  uint8_t   get361 (    struct Slice_12  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail362 ) ( ( (  try_dash_get365 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_235_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string202 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   char_dash_u8366 (    struct Char_53  c718 ) {
    struct CharDestructured_187  dref719 = ( (  destructure189 ) ( (  c718 ) ) );
    if ( dref719.tag == CharDestructured_187_Ref_t ) {
        return ( * ( ( dref719 .stuff .CharDestructured_187_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref719.tag == CharDestructured_187_Scalar_t ) {
            return ( (  u32_dash_u8200 ) ( ( ( dref719 .stuff .CharDestructured_187_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct StrView_21   byte_dash_substr367 (    struct StrView_21  s2183 ,    size_t  from2185 ,    size_t  to2187 ) {
    return ( (struct StrView_21) { .f_contents = ( (  subslice310 ) ( ( (  s2183 ) .f_contents ) ,  (  from2185 ) ,  (  to2187 ) ) ) } );
}

static  struct Maybe_125   next360 (    struct LineIter_359 *  self2404 ) {
    if ( (  cmp166 ( ( ( * (  self2404 ) ) .f_last ) , ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    size_t  i2405 = ( ( * (  self2404 ) ) .f_last );
    while ( ( (  cmp166 ( (  i2405 ) , ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq190 ( ( (  get361 ) ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) ,  (  i2405 ) ) ) , ( (  char_dash_u8366 ) ( ( (  from_dash_charlike203 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2405 = (  op_dash_add214 ( (  i2405 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_21  line2406 = ( (  byte_dash_substr367 ) ( ( ( * (  self2404 ) ) .f_og ) ,  ( ( * (  self2404 ) ) .f_last ) ,  (  i2405 ) ) );
    if ( (  cmp166 ( (  i2405 ) , ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2405 = (  op_dash_add214 ( (  i2405 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2404 ) .f_last = (  i2405 );
    return ( ( Maybe_125_Just ) ( (  line2406 ) ) );
}

static  struct LineIter_359   into_dash_iter369 (    struct LineIter_359  self2401 ) {
    return (  self2401 );
}

static  struct Maybe_125   head358 (    struct LineIter_359  it1142 ) {
    struct LineIter_359  temp368 = ( (  into_dash_iter369 ) ( (  it1142 ) ) );
    return ( (  next360 ) ( ( &temp368 ) ) );
}

static  struct LineIter_359   lines370 (    struct StrView_21  s2398 ) {
    return ( (struct LineIter_359) { .f_og = (  s2398 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env375 {
    ;
    struct Char_53  c2222;
};

struct envunion376 {
    bool  (*fun) (  struct env375*  ,    struct Char_53  );
    struct env375 env;
};

struct SplitIter_374 {
    struct StrView_21  f_og;
    size_t  f_last;
    struct envunion376  f_fun;
};

struct Drop_373 {
    struct SplitIter_374  field0;
    size_t  field1;
};

static struct Drop_373 Drop_373_Drop (  struct SplitIter_374  field0 ,  size_t  field1 ) {
    return ( struct Drop_373 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_372 {
    struct Drop_373  f_left_dash_it;
    struct FromIter_248  f_right_dash_it;
};

static  struct Zip_372   into_dash_iter377 (    struct Zip_372  self911 ) {
    return (  self911 );
}

static  struct Drop_373   into_dash_iter379 (    struct Drop_373  self845 ) {
    return (  self845 );
}

static  struct Zip_372   zip378 (    struct Drop_373  left922 ,    struct FromIter_248  right924 ) {
    struct Drop_373  left_dash_it925 = ( (  into_dash_iter379 ) ( (  left922 ) ) );
    struct FromIter_248  right_dash_it926 = ( (  into_dash_iter260 ) ( (  right924 ) ) );
    return ( (struct Zip_372) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct SplitIter_374   into_dash_iter381 (    struct SplitIter_374  self2227 ) {
    return (  self2227 );
}

static  struct Drop_373   drop380 (    struct SplitIter_374  iterable852 ,    size_t  i854 ) {
    struct SplitIter_374  it855 = ( (  into_dash_iter381 ) ( (  iterable852 ) ) );
    return ( ( Drop_373_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SplitIter_374   split_dash_by_dash_filter383 (    struct StrView_21  s2215 ,   struct envunion376  fun2217 ) {
    return ( (struct SplitIter_374) { .f_og = (  s2215 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2217 ) } );
}

struct Tuple2_386 {
    struct CharDestructured_187  field0;
    struct CharDestructured_187  field1;
};

static struct Tuple2_386 Tuple2_386_Tuple2 (  struct CharDestructured_187  field0 ,  struct CharDestructured_187  field1 ) {
    return ( struct Tuple2_386 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int64_t   op_dash_add387 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) + (  r186 ) );
}

static  bool   eq389 (    uint32_t  l111 ,    uint32_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  bool   eq388 (    struct Scalar_188  l724 ,    struct Scalar_188  r726 ) {
    return (  eq389 ( ( (  l724 ) .f_value ) , ( (  r726 ) .f_value ) ) );
}

static  bool   eq385 (    struct Char_53  l729 ,    struct Char_53  r731 ) {
    if ( ( !  eq221 ( ( (  l729 ) .f_num_dash_bytes ) , ( (  r731 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_386  dref732 = ( ( Tuple2_386_Tuple2 ) ( ( (  destructure189 ) ( (  l729 ) ) ) ,  ( (  destructure189 ) ( (  r731 ) ) ) ) );
    if ( dref732 .field0.tag == CharDestructured_187_Ref_t && dref732 .field1.tag == CharDestructured_187_Ref_t ) {
        int64_t  i735 = (  from_dash_integral285 ( 0 ) );
        while ( (  cmp166 ( ( (size_t ) (  i735 ) ) , ( ( dref732 .field0 .stuff .CharDestructured_187_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq190 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field0 .stuff .CharDestructured_187_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field1 .stuff .CharDestructured_187_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) ) ) ) {
                return ( false );
            }
            i735 = (  op_dash_add387 ( (  i735 ) , (  from_dash_integral285 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref732 .field0.tag == CharDestructured_187_Scalar_t && dref732 .field1.tag == CharDestructured_187_Scalar_t ) {
            return (  eq388 ( ( dref732 .field0 .stuff .CharDestructured_187_Scalar_s .field0 ) , ( dref732 .field1 .stuff .CharDestructured_187_Scalar_s .field0 ) ) );
        }
        else {
            if ( dref732 .field0.tag == CharDestructured_187_Scalar_t && dref732 .field1.tag == CharDestructured_187_Ref_t ) {
                return (  eq190 ( ( (  u32_dash_u8200 ) ( ( ( dref732 .field0 .stuff .CharDestructured_187_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref732 .field1 .stuff .CharDestructured_187_Ref_s .field0 ) .f_ptr ) ) ) );
            }
            else {
                if ( dref732 .field0.tag == CharDestructured_187_Ref_t && dref732 .field1.tag == CharDestructured_187_Scalar_t ) {
                    return (  eq190 ( ( (  u32_dash_u8200 ) ( ( ( dref732 .field1 .stuff .CharDestructured_187_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref732 .field0 .stuff .CharDestructured_187_Ref_s .field0 ) .f_ptr ) ) ) );
                }
            }
        }
    }
}

static  bool   lam384 (   struct env375* env ,    struct Char_53  cc2224 ) {
    return (  eq385 ( (  cc2224 ) , ( env->c2222 ) ) );
}

static  struct SplitIter_374   split_dash_by_dash_each382 (    struct StrView_21  s2220 ,    struct Char_53  c2222 ) {
    struct env375 envinst375 = {
        .c2222 =  c2222 ,
    };
    return ( (  split_dash_by_dash_filter383 ) ( (  s2220 ) ,  ( (struct envunion376){ .fun = (  bool  (*) (  struct env375*  ,    struct Char_53  ) )lam384 , .env =  envinst375 } ) ) );
}

struct Tuple2_392 {
    struct StrView_21  field0;
    int32_t  field1;
};

static struct Tuple2_392 Tuple2_392_Tuple2 (  struct StrView_21  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_392 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_391 {
    enum {
        Maybe_391_None_t,
        Maybe_391_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_392  field0;
        } Maybe_391_Just_s;
    } stuff;
};

static struct Maybe_391 Maybe_391_Just (  struct Tuple2_392  field0 ) {
    return ( struct Maybe_391 ) { .tag = Maybe_391_Just_t, .stuff = { .Maybe_391_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_125   next395 (    struct SplitIter_374 *  self2230 ) {
    if ( (  cmp166 ( ( ( * (  self2230 ) ) .f_last ) , ( ( ( ( * (  self2230 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    size_t  i2231 = ( ( * (  self2230 ) ) .f_last );
    while ( (  cmp166 ( (  i2231 ) , ( ( ( ( * (  self2230 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2232 = ( (  get_dash_ptr345 ) ( ( ( ( * (  self2230 ) ) .f_og ) .f_contents ) ,  (  i2231 ) ) );
        struct Char_53  c2233 = ( (  scan_dash_from_dash_mem205 ) ( (  ptr2232 ) ) );
        struct envunion376  temp396 = ( ( * (  self2230 ) ) .f_fun );
        if ( ( temp396.fun ( &temp396.env ,  (  c2233 ) ) ) ) {
            break;
        }
        i2231 = (  op_dash_add214 ( (  i2231 ) , ( (  next_dash_char206 ) ( (  ptr2232 ) ) ) ) );
    }
    struct StrView_21  line2234 = ( (  byte_dash_substr367 ) ( ( ( * (  self2230 ) ) .f_og ) ,  ( ( * (  self2230 ) ) .f_last ) ,  (  i2231 ) ) );
    i2231 = (  op_dash_add214 ( (  i2231 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2230 ) .f_last = (  i2231 );
    return ( ( Maybe_125_Just ) ( (  line2234 ) ) );
}

static  struct Maybe_125   next394 (    struct Drop_373 *  dref847 ) {
    while ( (  cmp166 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next395 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub286 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next395 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Maybe_391   next393 (    struct Zip_372 *  self914 ) {
    struct Zip_372  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_125  dref916 = ( (  next394 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_125_None_t ) {
            return ( (struct Maybe_391) { .tag = Maybe_391_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_125_Just_t ) {
                struct Maybe_254  dref918 = ( (  next255 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_254_None_t ) {
                    return ( (struct Maybe_391) { .tag = Maybe_391_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_254_Just_t ) {
                        ( (  next394 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next255 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_391_Just ) ( ( ( Tuple2_392_Tuple2 ) ( ( dref916 .stuff .Maybe_125_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_254_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion399 {
    struct List_11  (*fun) (  struct env41*  ,    struct Slice_12  ,    enum CAllocator_9  );
    struct env41 env;
};

static  enum Unit_7   insert401 (   struct env29* env ,    struct List_8 *  list2054 ,    size_t  i2056 ,    struct List_11  elem2058 ) {
    if ( ( (  cmp166 ( (  i2056 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i2056 ) , ( ( * (  list2054 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic234 ) ( ( ( StrConcat_235_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2056 ) ) ) ,  ( (  from_dash_string202 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2054 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq221 ( ( ( * (  list2054 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion31  temp402 = ( (struct envunion31){ .fun = (  enum Unit_7  (*) (  struct env5*  ,    struct List_8 *  ,    struct List_11  ) )add218 , .env =  env->envinst5 } );
        ( temp402.fun ( &temp402.env ,  (  list2054 ) ,  (  elem2058 ) ) );
        return ( Unit_7_Unit );
    }
    struct envunion30  temp403 = ( (struct envunion30){ .fun = (  enum Unit_7  (*) (  struct env1*  ,    struct List_8 *  ) )grow_dash_if_dash_full220 , .env =  env->envinst1 } );
    ( temp403.fun ( &temp403.env ,  (  list2054 ) ) );
    size_t  ii2059 = (  op_dash_sub286 ( ( ( * (  list2054 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp166 ( (  ii2059 ) , (  i2056 ) ) != 0 ) ) {
        ( (  set232 ) ( ( ( * (  list2054 ) ) .f_elements ) ,  (  op_dash_add214 ( (  ii2059 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get307 ) ( (  list2054 ) ,  (  ii2059 ) ) ) ) );
        if ( (  eq221 ( (  ii2059 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2059 = (  op_dash_sub286 ( (  ii2059 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set232 ) ( ( ( * (  list2054 ) ) .f_elements ) ,  (  i2056 ) ,  (  elem2058 ) ) );
    (*  list2054 ) .f_count = (  op_dash_add214 ( ( ( * (  list2054 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct envunion405 {
    enum Unit_7  (*fun) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env36 env;
};

static  enum Unit_7   free406 (    struct List_11 *  list2035 ) {
    ( (  free354 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( ( * (  list2035 ) ) .f_elements ) ) );
    return ( Unit_7_Unit );
}

static  int32_t   add_dash_to_dash_spot306 (   struct env75* env ,    struct TextBuf_81 *  self3651 ,    struct Pos_20  p3653 ,    struct StrView_21  bytes3655 ) {
    enum CAllocator_9  al3656 = ( ( ( * (  self3651 ) ) .f_buf ) .f_al );
    struct List_8 *  buf3657 = ( & ( ( * (  self3651 ) ) .f_buf ) );
    struct List_11  extracted_dash_line_dash_buf3658 = ( (  get307 ) ( (  buf3657 ) ,  ( (  i32_dash_size244 ) ( ( (  p3653 ) .f_line ) ) ) ) );
    struct Slice_12  remaining3659 = ( (  from309 ) ( ( (  to_dash_slice314 ) ( (  extracted_dash_line_dash_buf3658 ) ) ) ,  ( (  i32_dash_size244 ) ( ( (  p3653 ) .f_bi ) ) ) ) );
    struct envunion76  temp316 = ( (struct envunion76){ .fun = (  struct List_11  (*) (  struct env41*  ,    struct Slice_12  ,    enum CAllocator_9  ) )from_dash_iter317 , .env =  env->envinst41 } );
    ( (  set315 ) ( (  buf3657 ) ,  ( (  i32_dash_size244 ) ( ( (  p3653 ) .f_line ) ) ) ,  ( temp316.fun ( &temp316.env ,  ( (  subslice310 ) ( ( (  to_dash_slice314 ) ( (  extracted_dash_line_dash_buf3658 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size244 ) ( ( (  p3653 ) .f_bi ) ) ) ) ) ,  (  al3656 ) ) ) ) );
    struct List_11 *  last_dash_line3660 = ( (  get_dash_ptr308 ) ( (  buf3657 ) ,  ( (  i32_dash_size244 ) ( ( (  p3653 ) .f_line ) ) ) ) );
    struct envunion78  temp356 = ( (struct envunion78){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all320 , .env =  env->envinst36 } );
    ( temp356.fun ( &temp356.env ,  (  last_dash_line3660 ) ,  ( ( (  or_dash_else357 ) ( ( (  head358 ) ( ( (  lines370 ) ( (  bytes3655 ) ) ) ) ) ,  ( (  from_dash_string202 ) ( ( "" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3661 = (  from_dash_integral44 ( 0 ) );
    struct Zip_372  temp371 =  into_dash_iter377 ( ( (  zip378 ) ( ( (  drop380 ) ( ( (  split_dash_by_dash_each382 ) ( (  bytes3655 ) ,  ( (  from_dash_charlike203 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from261 ) ( (  from_dash_integral44 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_391  __cond390 =  next393 (&temp371);
        if (  __cond390 .tag == 0 ) {
            break;
        }
        struct Tuple2_392  dref3662 =  __cond390 .stuff .Maybe_391_Just_s .field0;
        struct envunion399  temp398 = ( (struct envunion399){ .fun = (  struct List_11  (*) (  struct env41*  ,    struct Slice_12  ,    enum CAllocator_9  ) )from_dash_iter317 , .env =  env->envinst41 } );
        struct List_11  temp397 = ( temp398.fun ( &temp398.env ,  ( ( dref3662 .field0 ) .f_contents ) ,  (  al3656 ) ) );
        struct List_11 *  nuline3665 = ( &temp397 );
        size_t  next_dash_line3666 = ( (  i32_dash_size244 ) ( (  op_dash_add256 ( ( (  p3653 ) .f_line ) , ( dref3662 .field1 ) ) ) ) );
        struct envunion77  temp400 = ( (struct envunion77){ .fun = (  enum Unit_7  (*) (  struct env29*  ,    struct List_8 *  ,    size_t  ,    struct List_11  ) )insert401 , .env =  env->envinst29 } );
        ( temp400.fun ( &temp400.env ,  (  buf3657 ) ,  (  next_dash_line3666 ) ,  ( * (  nuline3665 ) ) ) );
        last_dash_line3660 = ( (  get_dash_ptr308 ) ( (  buf3657 ) ,  (  next_dash_line3666 ) ) );
        lines_dash_added3661 = (  op_dash_add256 ( (  lines_dash_added3661 ) , (  from_dash_integral44 ( 1 ) ) ) );
    }
    struct envunion405  temp404 = ( (struct envunion405){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all320 , .env =  env->envinst36 } );
    ( temp404.fun ( &temp404.env ,  (  last_dash_line3660 ) ,  (  remaining3659 ) ) );
    ( (  free406 ) ( ( & (  extracted_dash_line_dash_buf3658 ) ) ) );
    return (  lines_dash_added3661 );
}

static  size_t   size407 (    struct List_11 *  l2133 ) {
    return ( ( * (  l2133 ) ) .f_count );
}

struct StrConcat_413 {
    struct StrConcat_61  field0;
    struct Char_53  field1;
};

static struct StrConcat_413 StrConcat_413_StrConcat (  struct StrConcat_61  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_413 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_412 {
    struct StrConcat_413  field0;
    size_t  field1;
};

static struct StrConcat_412 StrConcat_412_StrConcat (  struct StrConcat_413  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_412 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_411 {
    struct StrConcat_412  field0;
    struct Char_53  field1;
};

static struct StrConcat_411 StrConcat_411_StrConcat (  struct StrConcat_412  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_411 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_416 {
    struct StrView_21  field0;
    struct StrConcat_411  field1;
};

static struct StrConcat_416 StrConcat_416_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_411  field1 ) {
    return ( struct StrConcat_416 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_415 {
    struct StrConcat_416  field0;
    struct Char_53  field1;
};

static struct StrConcat_415 StrConcat_415_StrConcat (  struct StrConcat_416  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_415 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str420 (    struct StrConcat_413  self1503 ) {
    struct StrConcat_413  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str182 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str185 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str419 (    struct StrConcat_412  self1503 ) {
    struct StrConcat_412  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str420 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str183 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str418 (    struct StrConcat_411  self1503 ) {
    struct StrConcat_411  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str419 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str185 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str417 (    struct StrConcat_416  self1503 ) {
    struct StrConcat_416  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str177 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str418 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str414 (    struct StrConcat_415  self1503 ) {
    struct StrConcat_415  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str417 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str185 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic410 (    struct StrConcat_411  errmsg1712 ) {
    ( (  print_dash_str414 ) ( ( ( StrConcat_415_StrConcat ) ( ( ( StrConcat_416_StrConcat ) ( ( (  from_dash_string202 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct Drop_422 {
    struct Zip_347  field0;
    size_t  field1;
};

static struct Drop_422 Drop_422_Drop (  struct Zip_347  field0 ,  size_t  field1 ) {
    return ( struct Drop_422 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env423 {
    ;
    size_t  num_dash_elems2067;
    ;
    ;
    struct List_11 *  list2062;
};

struct envunion424 {
    enum Unit_7  (*fun) (  struct env423*  ,    struct Tuple2_342  );
    struct env423 env;
};

static  struct Drop_422   into_dash_iter426 (    struct Drop_422  self845 ) {
    return (  self845 );
}

static  struct Maybe_350   next427 (    struct Drop_422 *  dref847 ) {
    while ( (  cmp166 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next351 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub286 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next351 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_7   for_dash_each421 (    struct Drop_422  iterable1074 ,   struct envunion424  fun1076 ) {
    struct Drop_422  temp425 = ( (  into_dash_iter426 ) ( (  iterable1074 ) ) );
    struct Drop_422 *  it1077 = ( &temp425 );
    while ( ( true ) ) {
        struct Maybe_350  dref1078 = ( (  next427 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_350_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_350_Just_t ) {
                struct envunion424  temp428 = (  fun1076 );
                ( temp428.fun ( &temp428.env ,  ( dref1078 .stuff .Maybe_350_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Drop_422   drop429 (    struct Zip_347  iterable852 ,    size_t  i854 ) {
    struct Zip_347  it855 = ( (  into_dash_iter349 ) ( (  iterable852 ) ) );
    return ( ( Drop_422_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SliceIter_324   into_dash_iter431 (    struct List_11  self2028 ) {
    return ( (  into_dash_iter326 ) ( ( (  subslice310 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

static  struct Zip_347   zip430 (    struct List_11  left922 ,    struct FromIter_248  right924 ) {
    struct SliceIter_324  left_dash_it925 = ( (  into_dash_iter431 ) ( (  left922 ) ) );
    struct FromIter_248  right_dash_it926 = ( (  into_dash_iter260 ) ( (  right924 ) ) );
    return ( (struct Zip_347) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   set433 (    struct List_11 *  list2021 ,    size_t  i2023 ,    uint8_t  elem2025 ) {
    if ( ( (  cmp166 ( (  i2023 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i2023 ) , ( ( * (  list2021 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic234 ) ( ( ( StrConcat_235_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2023 ) ) ) ,  ( (  from_dash_string202 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2021 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set344 ) ( ( ( * (  list2021 ) ) .f_elements ) ,  (  i2023 ) ,  (  elem2025 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam432 (   struct env423* env ,    struct Tuple2_342  dref2068 ) {
    return ( (  set433 ) ( ( env->list2062 ) ,  (  op_dash_sub286 ( ( (  i32_dash_size244 ) ( ( dref2068 .field1 ) ) ) , ( env->num_dash_elems2067 ) ) ) ,  ( dref2068 .field0 ) ) );
}

struct StrConcat_436 {
    struct StrConcat_236  field0;
    struct StrView_21  field1;
};

static struct StrConcat_436 StrConcat_436_StrConcat (  struct StrConcat_236  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_436 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_439 {
    struct StrView_21  field0;
    struct StrConcat_436  field1;
};

static struct StrConcat_439 StrConcat_439_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_436  field1 ) {
    return ( struct StrConcat_439 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_438 {
    struct StrConcat_439  field0;
    struct Char_53  field1;
};

static struct StrConcat_438 StrConcat_438_StrConcat (  struct StrConcat_439  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_438 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str441 (    struct StrConcat_436  self1503 ) {
    struct StrConcat_436  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str242 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str177 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str440 (    struct StrConcat_439  self1503 ) {
    struct StrConcat_439  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str177 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str441 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str437 (    struct StrConcat_438  self1503 ) {
    struct StrConcat_438  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str440 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str185 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic435 (    struct StrConcat_436  errmsg1712 ) {
    ( (  print_dash_str437 ) ( ( ( StrConcat_438_StrConcat ) ( ( ( StrConcat_439_StrConcat ) ( ( (  from_dash_string202 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct env443 {
    ;
    struct Slice_12  dest1853;
    ;
};

struct envunion444 {
    enum Unit_7  (*fun) (  struct env443*  ,    struct Tuple2_342  );
    struct env443 env;
};

static  enum Unit_7   for_dash_each442 (    struct Zip_347  iterable1074 ,   struct envunion444  fun1076 ) {
    struct Zip_347  temp445 = ( (  into_dash_iter349 ) ( (  iterable1074 ) ) );
    struct Zip_347 *  it1077 = ( &temp445 );
    while ( ( true ) ) {
        struct Maybe_350  dref1078 = ( (  next351 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_350_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_350_Just_t ) {
                struct envunion444  temp446 = (  fun1076 );
                ( temp446.fun ( &temp446.env ,  ( dref1078 .stuff .Maybe_350_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam447 (   struct env443* env ,    struct Tuple2_342  dref1854 ) {
    return ( (  set344 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size244 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_7   copy_dash_to434 (    struct Slice_12  src1851 ,    struct Slice_12  dest1853 ) {
    if ( (  cmp166 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic435 ) ( ( ( StrConcat_436_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string202 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string202 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env443 envinst443 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each442 ) ( ( (  zip353 ) ( (  src1851 ) ,  ( (  from261 ) ( (  from_dash_integral44 ( 0 ) ) ) ) ) ) ,  ( (struct envunion444){ .fun = (  enum Unit_7  (*) (  struct env443*  ,    struct Tuple2_342  ) )lam447 , .env =  envinst443 } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   remove_dash_range409 (   struct env32* env ,    struct List_11 *  list2062 ,    size_t  from2064 ,    size_t  to_dash_excl2066 ) {
    if ( (  cmp166 ( (  to_dash_excl2066 ) , (  from2064 ) ) == 0 ) ) {
        ( (  panic410 ) ( ( ( StrConcat_411_StrConcat ) ( ( ( StrConcat_412_StrConcat ) ( ( ( StrConcat_413_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp166 ( (  from2064 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic234 ) ( ( ( StrConcat_235_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_string202 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp166 ( (  to_dash_excl2066 ) , ( ( * (  list2062 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic234 ) ( ( ( StrConcat_235_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_string202 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2067 = (  op_dash_sub286 ( (  to_dash_excl2066 ) , (  from2064 ) ) );
    struct env423 envinst423 = {
        .num_dash_elems2067 =  num_dash_elems2067 ,
        .list2062 =  list2062 ,
    };
    ( (  for_dash_each421 ) ( ( (  drop429 ) ( ( (  zip430 ) ( ( * (  list2062 ) ) ,  ( (  from261 ) ( (  from_dash_integral44 ( 0 ) ) ) ) ) ) ,  (  op_dash_add214 ( (  from2064 ) , (  num_dash_elems2067 ) ) ) ) ) ,  ( (struct envunion424){ .fun = (  enum Unit_7  (*) (  struct env423*  ,    struct Tuple2_342  ) )lam432 , .env =  envinst423 } ) ) );
    (*  list2062 ) .f_count = (  op_dash_sub286 ( ( ( * (  list2062 ) ) .f_count ) , (  num_dash_elems2067 ) ) );
    size_t  capacity2071 = ( ( ( * (  list2062 ) ) .f_elements ) .f_count );
    if ( (  cmp166 ( (  op_dash_mul227 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  capacity2071 ) ) == 0 ) ) {
        if ( (  eq221 ( ( ( * (  list2062 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free354 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
            (*  list2062 ) .f_elements = ( (  empty266 ) ( ) );
            return ( Unit_7_Unit );
        }
        size_t  new_dash_size2072 = (  op_dash_mul227 ( (  op_dash_add214 ( (  op_dash_div193 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2038 ) ) );
        struct Slice_12  new_dash_slice2073 = ( (  allocate335 ) ( ( ( * (  list2062 ) ) .f_al ) ,  (  new_dash_size2072 ) ) );
        ( (  copy_dash_to434 ) ( ( (  subslice310 ) ( ( ( * (  list2062 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  (  new_dash_slice2073 ) ) );
        ( (  free354 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
        (*  list2062 ) .f_elements = (  new_dash_slice2073 );
    }
    return ( Unit_7_Unit );
}

struct envunion449 {
    int32_t  (*fun) (  struct env75*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct StrView_21  );
    struct env75 env;
};

static  enum Unit_7   trim450 (    struct List_11 *  l2115 ,    size_t  new_dash_count2117 ) {
    (*  l2115 ) .f_count = ( (  min313 ) ( (  new_dash_count2117 ) ,  ( ( * (  l2115 ) ) .f_count ) ) );
    return ( Unit_7_Unit );
}

static  int32_t   min451 (    int32_t  l1236 ,    int32_t  r1238 ) {
    if ( (  cmp299 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

struct envunion453 {
    int32_t  (*fun) (  struct env75*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct StrView_21  );
    struct env75 env;
};

struct Maybe_455 {
    enum {
        Maybe_455_None_t,
        Maybe_455_Just_t,
    } tag;
    union {
        struct {
            struct Slice_12  field0;
        } Maybe_455_Just_s;
    } stuff;
};

static struct Maybe_455 Maybe_455_Just (  struct Slice_12  field0 ) {
    return ( struct Maybe_455 ) { .tag = Maybe_455_Just_t, .stuff = { .Maybe_455_Just_s = { .field0 = field0 } } };
};

static  struct Slice_12   or_dash_else454 (    struct Maybe_455  self1732 ,    struct Slice_12  alt1734 ) {
    struct Maybe_455  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_455_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_455_Just_t ) {
            return ( dref1735 .stuff .Maybe_455_Just_s .field0 );
        }
    }
}

static  struct Maybe_455   fmap_dash_maybe456 (    struct Maybe_164  x1275 ,    struct Slice_12 (*  fun1277 )(    struct List_11  ) ) {
    struct Maybe_164  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_164_None_t ) {
        return ( (struct Maybe_455) { .tag = Maybe_455_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_164_Just_t ) {
            return ( ( Maybe_455_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_164   try_dash_get457 (    struct List_8 *  list2016 ,    size_t  i2018 ) {
    if ( (  cmp166 ( (  i2018 ) , ( ( * (  list2016 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
    return ( ( Maybe_164_Just ) ( ( (  get307 ) ( (  list2016 ) ,  (  i2018 ) ) ) ) );
}

struct StrConcat_462 {
    struct StrView_21  field0;
    struct StrView_21  field1;
};

static struct StrConcat_462 StrConcat_462_StrConcat (  struct StrView_21  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_462 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_461 {
    struct StrConcat_462  field0;
    struct Char_53  field1;
};

static struct StrConcat_461 StrConcat_461_StrConcat (  struct StrConcat_462  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_461 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str463 (    struct StrConcat_462  self1503 ) {
    struct StrConcat_462  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str177 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str177 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str460 (    struct StrConcat_461  self1503 ) {
    struct StrConcat_461  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str463 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str185 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   assert459 (    bool  cond1718 ,    struct StrView_21  msg1720 ) {
    if ( ( ! (  cond1718 ) ) ) {
        ( (  print_dash_str460 ) ( ( ( StrConcat_461_StrConcat ) ( ( ( StrConcat_462_StrConcat ) ( ( (  from_dash_string202 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1720 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    }
    return ( Unit_7_Unit );
}

struct Drop_467 {
    struct Zip_246  field0;
    size_t  field1;
};

static struct Drop_467 Drop_467_Drop (  struct Zip_246  field0 ,  size_t  field1 ) {
    return ( struct Drop_467 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env468 {
    ;
    size_t  num_dash_elems2067;
    ;
    ;
    struct List_8 *  list2062;
};

struct envunion469 {
    enum Unit_7  (*fun) (  struct env468*  ,    struct Tuple2_230  );
    struct env468 env;
};

static  struct Drop_467   into_dash_iter471 (    struct Drop_467  self845 ) {
    return (  self845 );
}

static  struct Maybe_251   next472 (    struct Drop_467 *  dref847 ) {
    while ( (  cmp166 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next252 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub286 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next252 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_7   for_dash_each466 (    struct Drop_467  iterable1074 ,   struct envunion469  fun1076 ) {
    struct Drop_467  temp470 = ( (  into_dash_iter471 ) ( (  iterable1074 ) ) );
    struct Drop_467 *  it1077 = ( &temp470 );
    while ( ( true ) ) {
        struct Maybe_251  dref1078 = ( (  next472 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_251_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_251_Just_t ) {
                struct envunion469  temp473 = (  fun1076 );
                ( temp473.fun ( &temp473.env ,  ( dref1078 .stuff .Maybe_251_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Drop_467   drop474 (    struct Zip_246  iterable852 ,    size_t  i854 ) {
    struct Zip_246  it855 = ( (  into_dash_iter250 ) ( (  iterable852 ) ) );
    return ( ( Drop_467_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct Slice_10   subslice477 (    struct Slice_10  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct List_11 *  begin_dash_ptr1787 = ( (  offset_dash_ptr211 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp166 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp166 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_10) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub286 ( ( (  min313 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_10) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_247   into_dash_iter476 (    struct List_8  self2028 ) {
    return ( (  into_dash_iter259 ) ( ( (  subslice477 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

static  struct Zip_246   zip475 (    struct List_8  left922 ,    struct FromIter_248  right924 ) {
    struct SliceIter_247  left_dash_it925 = ( (  into_dash_iter476 ) ( (  left922 ) ) );
    struct FromIter_248  right_dash_it926 = ( (  into_dash_iter260 ) ( (  right924 ) ) );
    return ( (struct Zip_246) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   lam478 (   struct env468* env ,    struct Tuple2_230  dref2068 ) {
    return ( (  set315 ) ( ( env->list2062 ) ,  (  op_dash_sub286 ( ( (  i32_dash_size244 ) ( ( dref2068 .field1 ) ) ) , ( env->num_dash_elems2067 ) ) ) ,  ( dref2068 .field0 ) ) );
}

struct env481 {
    ;
    struct Slice_10  dest1853;
    ;
};

struct envunion482 {
    enum Unit_7  (*fun) (  struct env481*  ,    struct Tuple2_230  );
    struct env481 env;
};

static  enum Unit_7   for_dash_each480 (    struct Zip_246  iterable1074 ,   struct envunion482  fun1076 ) {
    struct Zip_246  temp483 = ( (  into_dash_iter250 ) ( (  iterable1074 ) ) );
    struct Zip_246 *  it1077 = ( &temp483 );
    while ( ( true ) ) {
        struct Maybe_251  dref1078 = ( (  next252 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_251_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_251_Just_t ) {
                struct envunion482  temp484 = (  fun1076 );
                ( temp484.fun ( &temp484.env ,  ( dref1078 .stuff .Maybe_251_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam485 (   struct env481* env ,    struct Tuple2_230  dref1854 ) {
    return ( (  set232 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size244 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_7   copy_dash_to479 (    struct Slice_10  src1851 ,    struct Slice_10  dest1853 ) {
    if ( (  cmp166 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic435 ) ( ( ( StrConcat_436_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string202 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string202 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env481 envinst481 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each480 ) ( ( (  zip258 ) ( (  src1851 ) ,  ( (  from261 ) ( (  from_dash_integral44 ( 0 ) ) ) ) ) ) ,  ( (struct envunion482){ .fun = (  enum Unit_7  (*) (  struct env481*  ,    struct Tuple2_230  ) )lam485 , .env =  envinst481 } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   remove_dash_range465 (   struct env33* env ,    struct List_8 *  list2062 ,    size_t  from2064 ,    size_t  to_dash_excl2066 ) {
    if ( (  cmp166 ( (  to_dash_excl2066 ) , (  from2064 ) ) == 0 ) ) {
        ( (  panic410 ) ( ( ( StrConcat_411_StrConcat ) ( ( ( StrConcat_412_StrConcat ) ( ( ( StrConcat_413_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp166 ( (  from2064 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic234 ) ( ( ( StrConcat_235_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_string202 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp166 ( (  to_dash_excl2066 ) , ( ( * (  list2062 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic234 ) ( ( ( StrConcat_235_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_string202 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2067 = (  op_dash_sub286 ( (  to_dash_excl2066 ) , (  from2064 ) ) );
    struct env468 envinst468 = {
        .num_dash_elems2067 =  num_dash_elems2067 ,
        .list2062 =  list2062 ,
    };
    ( (  for_dash_each466 ) ( ( (  drop474 ) ( ( (  zip475 ) ( ( * (  list2062 ) ) ,  ( (  from261 ) ( (  from_dash_integral44 ( 0 ) ) ) ) ) ) ,  (  op_dash_add214 ( (  from2064 ) , (  num_dash_elems2067 ) ) ) ) ) ,  ( (struct envunion469){ .fun = (  enum Unit_7  (*) (  struct env468*  ,    struct Tuple2_230  ) )lam478 , .env =  envinst468 } ) ) );
    (*  list2062 ) .f_count = (  op_dash_sub286 ( ( ( * (  list2062 ) ) .f_count ) , (  num_dash_elems2067 ) ) );
    size_t  capacity2071 = ( ( ( * (  list2062 ) ) .f_elements ) .f_count );
    if ( (  cmp166 ( (  op_dash_mul227 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  capacity2071 ) ) == 0 ) ) {
        if ( (  eq221 ( ( ( * (  list2062 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free262 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
            (*  list2062 ) .f_elements = ( (  empty150 ) ( ) );
            return ( Unit_7_Unit );
        }
        size_t  new_dash_size2072 = (  op_dash_mul227 ( (  op_dash_add214 ( (  op_dash_div193 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2038 ) ) );
        struct Slice_10  new_dash_slice2073 = ( (  allocate222 ) ( ( ( * (  list2062 ) ) .f_al ) ,  (  new_dash_size2072 ) ) );
        ( (  copy_dash_to479 ) ( ( (  subslice477 ) ( ( ( * (  list2062 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  (  new_dash_slice2073 ) ) );
        ( (  free262 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
        (*  list2062 ) .f_elements = (  new_dash_slice2073 );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   change_dash_no_dash_action296 (   struct env79* env ,    struct TextBuf_81 *  self3669 ,    struct Pos_20  from_dash_pos3671 ,    struct Pos_20  to_dash_pos3673 ,    struct StrView_21  bytes3675 ) {
    struct Pos_20  from3676 = ( (  min297 ) ( (  from_dash_pos3671 ) ,  (  to_dash_pos3673 ) ) );
    struct Pos_20  to3677 = ( (  max300 ) ( (  from_dash_pos3671 ) ,  (  to_dash_pos3673 ) ) );
    if ( (  eq301 ( (  to3677 ) , (  from3676 ) ) ) ) {
        enum CAllocator_9  al3678 = ( ( ( * (  self3669 ) ) .f_buf ) .f_al );
        if ( ( (  eq221 ( ( (  size303 ) ( ( & ( ( * (  self3669 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size244 ) ( ( (  from3676 ) .f_line ) ) ) ) ) && (  eq302 ( ( (  from3676 ) .f_bi ) , (  from_dash_integral44 ( 0 ) ) ) ) ) ) {
            struct envunion86  temp304 = ( (struct envunion86){ .fun = (  enum Unit_7  (*) (  struct env5*  ,    struct List_8 *  ,    struct List_11  ) )add218 , .env =  env->envinst5 } );
            ( temp304.fun ( &temp304.env ,  ( & ( ( * (  self3669 ) ) .f_buf ) ) ,  ( (  mk265 ) ( (  al3678 ) ) ) ) );
        }
        struct envunion80  temp305 = ( (struct envunion80){ .fun = (  int32_t  (*) (  struct env75*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct StrView_21  ) )add_dash_to_dash_spot306 , .env =  env->envinst75 } );
        ( temp305.fun ( &temp305.env ,  (  self3669 ) ,  (  from3676 ) ,  (  bytes3675 ) ) );
    } else {
        struct List_8 *  lines_dash_buf3679 = ( & ( ( * (  self3669 ) ) .f_buf ) );
        struct List_11 *  first_dash_line3680 = ( (  get_dash_ptr308 ) ( (  lines_dash_buf3679 ) ,  ( (  i32_dash_size244 ) ( ( (  from3676 ) .f_line ) ) ) ) );
        if ( ( (  eq302 ( ( (  from3676 ) .f_line ) , ( (  to3677 ) .f_line ) ) ) && (  cmp299 ( ( (  to3677 ) .f_bi ) , (  op_dash_add256 ( ( (  size_dash_i32178 ) ( ( (  size407 ) ( (  first_dash_line3680 ) ) ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion84  temp408 = ( (struct envunion84){ .fun = (  enum Unit_7  (*) (  struct env32*  ,    struct List_11 *  ,    size_t  ,    size_t  ) )remove_dash_range409 , .env =  env->envinst32 } );
            ( temp408.fun ( &temp408.env ,  (  first_dash_line3680 ) ,  ( (  i32_dash_size244 ) ( ( (  from3676 ) .f_bi ) ) ) ,  ( (  i32_dash_size244 ) ( ( (  to3677 ) .f_bi ) ) ) ) );
            struct envunion449  temp448 = ( (struct envunion449){ .fun = (  int32_t  (*) (  struct env75*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct StrView_21  ) )add_dash_to_dash_spot306 , .env =  env->envinst75 } );
            ( temp448.fun ( &temp448.env ,  (  self3669 ) ,  (  from3676 ) ,  (  bytes3675 ) ) );
        } else {
            ( (  trim450 ) ( (  first_dash_line3680 ) ,  ( (  i32_dash_size244 ) ( ( (  from3676 ) .f_bi ) ) ) ) );
            struct List_11 *  last_dash_line3681 = ( (  get_dash_ptr308 ) ( (  lines_dash_buf3679 ) ,  ( (  i32_dash_size244 ) ( ( (  to3677 ) .f_line ) ) ) ) );
            to3677 .f_bi = ( (  min451 ) ( ( (  to3677 ) .f_bi ) ,  (  op_dash_add256 ( ( (  size_dash_i32178 ) ( ( (  size407 ) ( (  last_dash_line3681 ) ) ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) ) );
            if ( (  eq302 ( ( (  to3677 ) .f_bi ) , (  op_dash_add256 ( ( (  size_dash_i32178 ) ( ( (  size407 ) ( (  last_dash_line3681 ) ) ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) ) {
                to3677 .f_line = (  op_dash_add256 ( ( (  to3677 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) );
                to3677 .f_bi = (  from_dash_integral44 ( 0 ) );
            }
            struct envunion453  temp452 = ( (struct envunion453){ .fun = (  int32_t  (*) (  struct env75*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct StrView_21  ) )add_dash_to_dash_spot306 , .env =  env->envinst75 } );
            int32_t  lines_dash_added3682 = ( temp452.fun ( &temp452.env ,  (  self3669 ) ,  (  from3676 ) ,  (  bytes3675 ) ) );
            to3677 .f_line = (  op_dash_add256 ( ( (  to3677 ) .f_line ) , (  lines_dash_added3682 ) ) );
            from3676 .f_line = (  op_dash_add256 ( ( (  from3676 ) .f_line ) , (  lines_dash_added3682 ) ) );
            struct Slice_12  last_dash_line3683 = ( (  or_dash_else454 ) ( ( (  fmap_dash_maybe456 ) ( ( (  try_dash_get457 ) ( (  lines_dash_buf3679 ) ,  ( (  i32_dash_size244 ) ( ( (  to3677 ) .f_line ) ) ) ) ) ,  (  to_dash_slice314 ) ) ) ,  ( (  empty266 ) ( ) ) ) );
            struct envunion83  temp458 = ( (struct envunion83){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all320 , .env =  env->envinst36 } );
            ( temp458.fun ( &temp458.env ,  (  first_dash_line3680 ) ,  ( (  from309 ) ( (  last_dash_line3683 ) ,  ( (  i32_dash_size244 ) ( ( (  to3677 ) .f_bi ) ) ) ) ) ) );
            ( (  assert459 ) ( (  cmp299 ( ( (  to3677 ) .f_line ) , ( (  from3676 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string202 ) ( ( "there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion85  temp464 = ( (struct envunion85){ .fun = (  enum Unit_7  (*) (  struct env33*  ,    struct List_8 *  ,    size_t  ,    size_t  ) )remove_dash_range465 , .env =  env->envinst33 } );
            ( temp464.fun ( &temp464.env ,  ( & ( ( * (  self3669 ) ) .f_buf ) ) ,  ( (  i32_dash_size244 ) ( (  op_dash_add256 ( ( (  from3676 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) ,  (  op_dash_add214 ( ( (  i32_dash_size244 ) ( ( (  to3677 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_7_Unit );
}

struct StrConcat_489 {
    struct StrView_21  field0;
    const char*  field1;
};

static struct StrConcat_489 StrConcat_489_StrConcat (  struct StrView_21  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_489 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_488 {
    struct StrConcat_489  field0;
    struct Char_53  field1;
};

static struct StrConcat_488 StrConcat_488_StrConcat (  struct StrConcat_489  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_488 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_493 {
    struct StrView_21  field0;
    struct StrConcat_488  field1;
};

static struct StrConcat_493 StrConcat_493_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_488  field1 ) {
    return ( struct StrConcat_493 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_492 {
    struct StrConcat_493  field0;
    struct Char_53  field1;
};

static struct StrConcat_492 StrConcat_492_StrConcat (  struct StrConcat_493  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_492 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str497 (    const char*  self1398 ) {
    ( ( printf ) ( ( (  from_dash_string45 ) ( ( "%s" ) ,  ( 2 ) ) ) ,  (  self1398 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str496 (    struct StrConcat_489  self1503 ) {
    struct StrConcat_489  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str177 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str497 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str495 (    struct StrConcat_488  self1503 ) {
    struct StrConcat_488  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str496 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str185 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str494 (    struct StrConcat_493  self1503 ) {
    struct StrConcat_493  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str177 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str495 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str491 (    struct StrConcat_492  self1503 ) {
    struct StrConcat_492  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str494 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str185 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic490 (    struct StrConcat_488  errmsg1712 ) {
    ( (  print_dash_str491 ) ( ( ( StrConcat_492_StrConcat ) ( ( ( StrConcat_493_StrConcat ) ( ( (  from_dash_string202 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct StrView_21   undefined498 (  ) {
    struct StrView_21  temp499;
    return (  temp499 );
}

static  struct StrView_21   or_dash_fail487 (    struct Maybe_125  x1725 ,    struct StrConcat_488  errmsg1727 ) {
    struct Maybe_125  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_125_None_t ) {
        ( (  panic490 ) ( (  errmsg1727 ) ) );
        return ( (  undefined498 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_125_Just_t ) {
            return ( dref1728 .stuff .Maybe_125_Just_s .field0 );
        }
    }
}

static  const char*   from_dash_charlike501 (    uint8_t *  ptr73 ,    size_t  dref74 ) {
    return ( ( (const char* ) (  ptr73 ) ) );
}

static  void *   cast_dash_ptr506 (    FILE * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of507 (    FILE *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  FILE *   zeroed504 (  ) {
    FILE *  temp505;
    FILE *  x570 = (  temp505 );
    ( ( memset ) ( ( (  cast_dash_ptr506 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of507 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  FILE *   null_dash_ptr503 (  ) {
    return ( (  zeroed504 ) ( ) );
}

static  bool   is_dash_ptr_dash_null502 (    FILE *  p580 ) {
    return ( (  p580 ) == ( (  null_dash_ptr503 ) ( ) ) );
}

static  int32_t   seek_dash_end508 (  ) {
    return (  from_dash_integral44 ( 2 ) );
}

static  int32_t   seek_dash_set509 (  ) {
    return (  from_dash_integral44 ( 0 ) );
}

static  struct Char_53   nullchar510 (  ) {
    return ( (  from_dash_charlike203 ) ( ( "\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_125   try_dash_read_dash_contents500 (    const char*  filename2933 ,    enum CAllocator_9  al2935 ) {
    FILE *  file2936 = ( ( fopen ) ( (  filename2933 ) ,  ( (  from_dash_charlike501 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null502 ) ( (  file2936 ) ) ) ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    ( ( fseek ) ( (  file2936 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  seek_dash_end508 ) ( ) ) ) );
    int32_t  file_dash_size2937 = ( ( ftell ) ( (  file2936 ) ) );
    ( ( fseek ) ( (  file2936 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  seek_dash_set509 ) ( ) ) ) );
    struct Slice_12  file_dash_buf2938 = ( ( (  allocate335 ) ( (  al2935 ) ,  (  op_dash_add214 ( ( (  i32_dash_size244 ) ( (  file_dash_size2937 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2938 ) .f_ptr ) ,  (  file_dash_size2937 ) ,  (  from_dash_integral44 ( 1 ) ) ,  (  file2936 ) ) );
    ( (  set344 ) ( (  file_dash_buf2938 ) ,  ( (  i32_dash_size244 ) ( (  file_dash_size2937 ) ) ) ,  ( (  char_dash_u8366 ) ( ( (  nullchar510 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2936 ) ) );
    struct StrView_21  str2939 = ( (struct StrView_21) { .f_contents = ( (  subslice310 ) ( (  file_dash_buf2938 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub286 ( ( (  file_dash_buf2938 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_125_Just ) ( (  str2939 ) ) );
}

static  struct StrView_21   read_dash_contents486 (    const char*  filename2942 ,    enum CAllocator_9  al2944 ) {
    return ( (  or_dash_fail487 ) ( ( (  try_dash_read_dash_contents500 ) ( (  filename2942 ) ,  (  al2944 ) ) ) ,  ( ( StrConcat_488_StrConcat ) ( ( ( StrConcat_489_StrConcat ) ( ( (  from_dash_string202 ) ( ( "could not open file " ) ,  ( 20 ) ) ) ,  (  filename2942 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "!" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Pane_122   mk512 (    enum CAllocator_9  al3811 ,    struct TextBuf_81 *  buf3813 ) {
    return ( (struct Pane_122) { .f_buf = (  buf3813 ) , .f_cursor = ( (  mk280 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  from_dash_integral44 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral44 ( 0 ) ) , .f_sel = ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) , .f_mode = ( Mode_123_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_124) { .f_screen_dash_top = (  from_dash_integral44 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral44 ( 0 ) ) } ) } );
}

struct envunion515 {
    struct Tui_67  (*fun) (  struct env63*  );
    struct env63 env;
};

static  struct Termios_69   undefined519 (  ) {
    struct Termios_69  temp520;
    return (  temp520 );
}

static  int32_t   stdin_dash_fileno521 (  ) {
    return (  from_dash_integral44 ( 0 ) );
}

static  struct termios *   cast_dash_ptr522 (    struct Termios_69 *  p359 ) {
    return ( (struct termios * ) (  p359 ) );
}

static  uint32_t   u32_dash_and523 (    uint32_t  l2832 ,    uint32_t  r2834 ) {
    return ( (  l2832 ) & (  r2834 ) );
}

static  uint32_t   u32_dash_neg524 (    uint32_t  l2837 ) {
    return ( ~ (  l2837 ) );
}

struct Array_526 {
    uint32_t _arr [4];
};

struct ArrayIter_528 {
    struct Array_526  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_528   into_dash_iter529 (    struct Array_526  self2322 ) {
    return ( (struct ArrayIter_528) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_530 {
    enum {
        Maybe_530_None_t,
        Maybe_530_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_530_Just_s;
    } stuff;
};

static struct Maybe_530 Maybe_530_Just (  uint32_t  field0 ) {
    return ( struct Maybe_530 ) { .tag = Maybe_530_Just_t, .stuff = { .Maybe_530_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr534 (    struct Array_526 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   offset_dash_ptr535 (    uint32_t *  x338 ,    int64_t  count340 ) {
    uint32_t  temp536;
    return ( (uint32_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul212 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp536 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr533 (    struct Array_526 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp166 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i2253 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic170 ) ( ( ( StrConcat_171_StrConcat ) ( ( ( StrConcat_172_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string202 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2254 = ( ( (  cast_dash_ptr534 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr535 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  uint32_t   get532 (    struct Array_526 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr533 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  struct Maybe_530   next531 (    struct ArrayIter_528 *  self2329 ) {
    if ( (  cmp166 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_530) { .tag = Maybe_530_None_t } );
    }
    uint32_t  e2331 = ( (  get532 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add214 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_530_Just ) ( (  e2331 ) ) );
}

static  uint32_t   reduce527 (    struct Array_526  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_528  it1099 = ( (  into_dash_iter529 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_530  dref1100 = ( (  next531 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_530_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_530_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_530_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp537 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp537);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp538;
    return (  temp538 );
}

static  uint32_t   u32_dash_or539 (    uint32_t  l2824 ,    uint32_t  r2826 ) {
    return ( (  l2824 ) | (  r2826 ) );
}

static  uint32_t   u32_dash_ors525 (    struct Array_526  vals2829 ) {
    return ( (  reduce527 ) ( (  vals2829 ) ,  (  from_dash_integral198 ( 0 ) ) ,  (  u32_dash_or539 ) ) );
}

static  struct Array_526   from_dash_listlike540 (    struct Array_526  self330 ) {
    return (  self330 );
}

static  uint32_t   echo541 (  ) {
    return (  from_dash_integral198 ( 8 ) );
}

static  uint32_t   icanon542 (  ) {
    return (  from_dash_integral198 ( 2 ) );
}

static  uint32_t   isig543 (  ) {
    return (  from_dash_integral198 ( 1 ) );
}

static  uint32_t   iexten544 (  ) {
    return (  from_dash_integral198 ( 32768 ) );
}

struct Array_546 {
    uint32_t _arr [5];
};

struct ArrayIter_548 {
    struct Array_546  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_548   into_dash_iter549 (    struct Array_546  self2322 ) {
    return ( (struct ArrayIter_548) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr553 (    struct Array_546 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr552 (    struct Array_546 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp166 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i2253 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic170 ) ( ( ( StrConcat_171_StrConcat ) ( ( ( StrConcat_172_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string202 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2254 = ( ( (  cast_dash_ptr553 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr535 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  uint32_t   get551 (    struct Array_546 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr552 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  struct Maybe_530   next550 (    struct ArrayIter_548 *  self2329 ) {
    if ( (  cmp166 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_530) { .tag = Maybe_530_None_t } );
    }
    uint32_t  e2331 = ( (  get551 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add214 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_530_Just ) ( (  e2331 ) ) );
}

static  uint32_t   reduce547 (    struct Array_546  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_548  it1099 = ( (  into_dash_iter549 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_530  dref1100 = ( (  next550 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_530_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_530_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_530_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp554 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp554);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp555;
    return (  temp555 );
}

static  uint32_t   u32_dash_ors545 (    struct Array_546  vals2829 ) {
    return ( (  reduce547 ) ( (  vals2829 ) ,  (  from_dash_integral198 ( 0 ) ) ,  (  u32_dash_or539 ) ) );
}

static  struct Array_546   from_dash_listlike556 (    struct Array_546  self330 ) {
    return (  self330 );
}

static  uint32_t   brkint557 (  ) {
    return (  from_dash_integral198 ( 2 ) );
}

static  uint32_t   icrnl558 (  ) {
    return (  from_dash_integral198 ( 256 ) );
}

static  uint32_t   inpck559 (  ) {
    return (  from_dash_integral198 ( 16 ) );
}

static  uint32_t   istrip560 (  ) {
    return (  from_dash_integral198 ( 32 ) );
}

static  uint32_t   ixon561 (  ) {
    return (  from_dash_integral198 ( 1024 ) );
}

struct Array_563 {
    uint32_t _arr [1];
};

struct ArrayIter_565 {
    struct Array_563  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_565   into_dash_iter566 (    struct Array_563  self2322 ) {
    return ( (struct ArrayIter_565) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr570 (    struct Array_563 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr569 (    struct Array_563 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp166 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i2253 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic170 ) ( ( ( StrConcat_171_StrConcat ) ( ( ( StrConcat_172_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string202 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2254 = ( ( (  cast_dash_ptr570 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr535 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  uint32_t   get568 (    struct Array_563 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr569 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  struct Maybe_530   next567 (    struct ArrayIter_565 *  self2329 ) {
    if ( (  cmp166 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_530) { .tag = Maybe_530_None_t } );
    }
    uint32_t  e2331 = ( (  get568 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add214 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_530_Just ) ( (  e2331 ) ) );
}

static  uint32_t   reduce564 (    struct Array_563  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_565  it1099 = ( (  into_dash_iter566 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_530  dref1100 = ( (  next567 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_530_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_530_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_530_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp571 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp571);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp572;
    return (  temp572 );
}

static  uint32_t   u32_dash_ors562 (    struct Array_563  vals2829 ) {
    return ( (  reduce564 ) ( (  vals2829 ) ,  (  from_dash_integral198 ( 0 ) ) ,  (  u32_dash_or539 ) ) );
}

static  struct Array_563   from_dash_listlike573 (    struct Array_563  self330 ) {
    return (  self330 );
}

static  uint32_t   opost574 (  ) {
    return (  from_dash_integral198 ( 1 ) );
}

static  uint32_t   cs8575 (  ) {
    return (  from_dash_integral198 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr578 (    struct Array_70 *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  uint8_t *   get_dash_ptr577 (    struct Array_70 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp166 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i2253 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic170 ) ( ( ( StrConcat_171_StrConcat ) ( ( ( StrConcat_172_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string202 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2254 = ( ( (  cast_dash_ptr578 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr311 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  enum Unit_7   set576 (    struct Array_70 *  arr2263 ,    size_t  i2266 ,    uint8_t  e2268 ) {
    uint8_t *  p2269 = ( (  get_dash_ptr577 ) ( (  arr2263 ) ,  (  i2266 ) ) );
    (*  p2269 ) = (  e2268 );
    return ( Unit_7_Unit );
}

static  size_t   vmin579 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime580 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush581 (  ) {
    return (  from_dash_integral44 ( 2 ) );
}

static  struct Termios_69   enable_dash_raw_dash_mode517 (  ) {
    struct Termios_69  temp518 = ( (  undefined519 ) ( ) );
    struct Termios_69 *  orig_dash_termios3291 = ( &temp518 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno521 ) ( ) ) ,  ( (  cast_dash_ptr522 ) ( (  orig_dash_termios3291 ) ) ) ) );
    struct Termios_69  raw3292 = ( * (  orig_dash_termios3291 ) );
    raw3292 .f_c_dash_lflag = ( (  u32_dash_and523 ) ( ( (  raw3292 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg524 ) ( ( (  u32_dash_ors525 ) ( ( (  from_dash_listlike540 ) ( ( (struct Array_526) { ._arr = { ( (  echo541 ) ( ) ) , ( (  icanon542 ) ( ) ) , ( (  isig543 ) ( ) ) , ( ( (  iexten544 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3292 .f_c_dash_iflag = ( (  u32_dash_and523 ) ( ( (  raw3292 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg524 ) ( ( (  u32_dash_ors545 ) ( ( (  from_dash_listlike556 ) ( ( (struct Array_546) { ._arr = { ( (  brkint557 ) ( ) ) , ( (  icrnl558 ) ( ) ) , ( (  inpck559 ) ( ) ) , ( (  istrip560 ) ( ) ) , ( ( (  ixon561 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3292 .f_c_dash_oflag = ( (  u32_dash_and523 ) ( ( (  raw3292 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg524 ) ( ( (  u32_dash_ors562 ) ( ( (  from_dash_listlike573 ) ( ( (struct Array_563) { ._arr = { ( ( (  opost574 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3292 .f_c_dash_cflag = ( (  u32_dash_or539 ) ( ( (  raw3292 ) .f_c_dash_cflag ) ,  ( (  cs8575 ) ( ) ) ) );
    ( (  set576 ) ( ( & ( (  raw3292 ) .f_c_dash_cc ) ) ,  ( (  vmin579 ) ( ) ) ,  (  from_dash_integral194 ( 0 ) ) ) );
    ( (  set576 ) ( ( & ( (  raw3292 ) .f_c_dash_cc ) ) ,  ( (  vtime580 ) ( ) ) ,  (  from_dash_integral194 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno521 ) ( ) ) ,  ( (  tcsa_dash_flush581 ) ( ) ) ,  ( (  cast_dash_ptr522 ) ( ( & (  raw3292 ) ) ) ) ) );
    return ( * (  orig_dash_termios3291 ) );
}

struct StrViewIter_585 {
    struct StrView_21  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_585   into_dash_iter587 (    struct StrViewIter_585  self1371 ) {
    return (  self1371 );
}

struct Maybe_588 {
    enum {
        Maybe_588_None_t,
        Maybe_588_Just_t,
    } tag;
    union {
        struct {
            struct Char_53  field0;
        } Maybe_588_Just_s;
    } stuff;
};

static struct Maybe_588 Maybe_588_Just (  struct Char_53  field0 ) {
    return ( struct Maybe_588 ) { .tag = Maybe_588_Just_t, .stuff = { .Maybe_588_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_588   next589 (    struct StrViewIter_585 *  self1374 ) {
    if ( (  cmp166 ( ( ( * (  self1374 ) ) .f_i ) , ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_588) { .tag = Maybe_588_None_t } );
    }
    uint8_t *  char_dash_ptr1375 = ( ( (  offset_dash_ptr311 ) ( ( (  cast204 ) ( ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64243 ) ( ( ( * (  self1374 ) ) .f_i ) ) ) ) ) );
    struct Char_53  char1376 = ( (  scan_dash_from_dash_mem205 ) ( (  char_dash_ptr1375 ) ) );
    (*  self1374 ) .f_i = (  op_dash_add214 ( ( ( * (  self1374 ) ) .f_i ) , ( (  char1376 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_588_Just ) ( (  char1376 ) ) );
}

static  enum Unit_7   for_dash_each584 (    struct StrViewIter_585  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_53  ) ) {
    struct StrViewIter_585  temp586 = ( (  into_dash_iter587 ) ( (  iterable1074 ) ) );
    struct StrViewIter_585 *  it1077 = ( &temp586 );
    while ( ( true ) ) {
        struct Maybe_588  dref1078 = ( (  next589 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_588_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_588_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_588_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrViewIter_585   into_dash_iter591 (    struct StrView_21  self1368 ) {
    return ( (struct StrViewIter_585) { .f_ds = (  self1368 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_585   chars590 (    struct StrView_21  self1382 ) {
    return ( (  into_dash_iter591 ) ( (  self1382 ) ) );
}

static  enum Unit_7   print583 (    struct StrView_21  s2563 ) {
    ( (  for_dash_each584 ) ( ( (  chars590 ) ( (  s2563 ) ) ) ,  (  printf_dash_char186 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   hide_dash_cursor582 (  ) {
    ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   reset_dash_colors592 (  ) {
    ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   clear_dash_screen593 (  ) {
    ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   enable_dash_mouse594 (  ) {
    ( (  print_dash_str177 ) ( ( (  from_dash_string202 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   flush_dash_stdout595 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr503 ) ( ) ) ) );
    return ( Unit_7_Unit );
}

static  bool   ptr_dash_eq599 (    enum Unit_7 *  l586 ,    enum Unit_7 *  r588 ) {
    return ( (  l586 ) == (  r588 ) );
}

static  enum Unit_7 *   cast600 (    const char*  x356 ) {
    return ( (enum Unit_7 * ) (  x356 ) );
}

static  void *   cast_dash_ptr604 (    enum Unit_7 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of605 (    enum Unit_7 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  enum Unit_7 *   zeroed602 (  ) {
    enum Unit_7 *  temp603;
    enum Unit_7 *  x570 = (  temp603 );
    ( ( memset ) ( ( (  cast_dash_ptr604 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of605 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  enum Unit_7 *   null_dash_ptr601 (  ) {
    return ( (  zeroed602 ) ( ) );
}

static  struct Maybe_290   from_dash_nullable_dash_c_dash_str598 (    const char*  s591 ) {
    if ( ( (  ptr_dash_eq599 ) ( ( (  cast600 ) ( (  s591 ) ) ) ,  ( ( (  null_dash_ptr601 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_290) { .tag = Maybe_290_None_t } );
    } else {
        return ( ( Maybe_290_Just ) ( (  s591 ) ) );
    }
}

static  struct Maybe_290   get597 (    const char*  s2596 ) {
    return ( (  from_dash_nullable_dash_c_dash_str598 ) ( ( ( getenv ) ( (  s2596 ) ) ) ) );
}

static  bool   eq606 (    const char*  l1691 ,    const char*  r1693 ) {
    return (  eq302 ( ( ( strcmp ) ( (  l1691 ) ,  (  r1693 ) ) ) , (  from_dash_integral44 ( 0 ) ) ) );
}

static  enum ColorPalette_68   query_dash_palette596 (  ) {
    struct Maybe_290  colorterm2597 = ( (  get597 ) ( ( (  from_dash_string45 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_290  dref2598 = (  colorterm2597 );
    if ( dref2598.tag == Maybe_290_Just_t ) {
        if ( ( (  eq606 ( ( dref2598 .stuff .Maybe_290_Just_s .field0 ) , ( (  from_dash_string45 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq606 ( ( dref2598 .stuff .Maybe_290_Just_s .field0 ) , ( (  from_dash_string45 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_68_PaletteRGB );
        }
    }
    else {
        if ( dref2598.tag == Maybe_290_None_t ) {
        }
    }
    struct Maybe_290  dref2600 = ( (  get597 ) ( ( (  from_dash_string45 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2600.tag == Maybe_290_Just_t ) {
        if ( (  eq606 ( ( dref2600 .stuff .Maybe_290_Just_s .field0 ) , ( (  from_dash_string45 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_68_Palette8 );
        }
    }
    else {
        if ( dref2600.tag == Maybe_290_None_t ) {
        }
    }
    return ( ColorPalette_68_Palette16 );
}

struct Tuple2_607 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_607 Tuple2_607_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_607 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_609 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr613 (    struct Winsize_609 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of614 (    struct Winsize_609  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Winsize_609   zeroed611 (  ) {
    struct Winsize_609  temp612;
    struct Winsize_609  x570 = (  temp612 );
    ( ( memset ) ( ( (  cast_dash_ptr613 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of614 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  int32_t   stdout_dash_fileno615 (  ) {
    return (  from_dash_integral44 ( 1 ) );
}

static  uint64_t   from_dash_integral617 (    int64_t  x64 ) {
    return ( (uint64_t ) (  x64 ) );
}

static  uint64_t   tiocgwinsz616 (  ) {
    return (  from_dash_integral617 ( 21523 ) );
}

static  int32_t   op_dash_neg618 (    int32_t  x227 ) {
    return ( (  from_dash_integral44 ( 0 ) ) - (  x227 ) );
}

static  bool   eq619 (    uint16_t  l121 ,    uint16_t  r123 ) {
    return ( (  l121 ) == (  r123 ) );
}

static  uint16_t   from_dash_integral620 (    int64_t  x55 ) {
    return ( (uint16_t ) (  x55 ) );
}

static  void *   cast_dash_ptr626 (    uint32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of627 (    uint32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint32_t   zeroed624 (  ) {
    uint32_t  temp625;
    uint32_t  x570 = (  temp625 );
    ( ( memset ) ( ( (  cast_dash_ptr626 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of627 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint16_t *   cast628 (    uint32_t *  x356 ) {
    return ( (uint16_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed622 (    uint16_t  x573 ) {
    uint32_t  temp623 = ( (  zeroed624 ) ( ) );
    uint32_t *  y574 = ( &temp623 );
    uint16_t *  yp575 = ( (  cast628 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u16_dash_u32621 (    uint16_t  x645 ) {
    return ( (  cast_dash_on_dash_zeroed622 ) ( (  x645 ) ) );
}

static  struct Tuple2_607   get_dash_dimensions608 (  ) {
    struct Winsize_609  temp610 = ( ( (  zeroed611 ) ( ) ) );
    struct Winsize_609 *  ws2585 = ( &temp610 );
    if ( ( (  eq302 ( ( ( ioctl ) ( ( (  stdout_dash_fileno615 ) ( ) ) ,  ( (  tiocgwinsz616 ) ( ) ) ,  (  ws2585 ) ) ) , (  op_dash_neg618 ( (  from_dash_integral44 ( 1 ) ) ) ) ) ) || (  eq619 ( ( ( * (  ws2585 ) ) .f_ws_dash_col ) , (  from_dash_integral620 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_607_Tuple2 ) ( (  from_dash_integral198 ( 80 ) ) ,  (  from_dash_integral198 ( 24 ) ) ) );
    }
    return ( ( Tuple2_607_Tuple2 ) ( ( (  u16_dash_u32621 ) ( ( ( * (  ws2585 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32621 ) ( ( ( * (  ws2585 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined631 (  ) {
    struct timespec  temp632;
    return (  temp632 );
}

static  int32_t   clock_dash_monotonic633 (  ) {
    return (  from_dash_integral44 ( 1 ) );
}

static  struct timespec   now629 (  ) {
    struct timespec  temp630 = ( (  undefined631 ) ( ) );
    struct timespec *  t3253 = ( &temp630 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic633 ) ( ) ) ,  (  t3253 ) ) );
    return ( * (  t3253 ) );
}

struct env634 {
    bool *  should_dash_resize3305;
};

struct envunion635 {
    enum Unit_7  (*fun) (  struct env634*  ,    int32_t  );
    struct env634 env;
};

struct envunion635  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig636 ) {
    struct envunion635  temp637 = _intr_sigarr [  __intr__sig636 ];
    temp637.fun ( &temp637.env ,  __intr__sig636 );
}

static  enum Unit_7  _intr_register_signal (    int32_t  __intr__sig638 ,   struct envunion635  __intr__fun639 ) {
    _intr_sigarr [  __intr__sig638 ] =  __intr__fun639;
    signal(  __intr__sig638 , _intr_sighandle );
    return Unit_7_Unit;
}

static  enum Unit_7   lam640 (   struct env634* env ,    int32_t  dref3312 ) {
    (* env->should_dash_resize3305 ) = ( true );
    return ( Unit_7_Unit );
}

static  uint32_t   fst641 (    struct Tuple2_607  dref1253 ) {
    return ( dref1253 .field0 );
}

static  uint32_t   snd642 (    struct Tuple2_607  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tui_67   mk516 (   struct env63* env ) {
    struct Termios_69  og_dash_termios3307 = ( (  enable_dash_raw_dash_mode517 ) ( ) );
    ( (  hide_dash_cursor582 ) ( ) );
    ( (  reset_dash_colors592 ) ( ) );
    ( (  clear_dash_screen593 ) ( ) );
    ( (  enable_dash_mouse594 ) ( ) );
    ( (  flush_dash_stdout595 ) ( ) );
    enum ColorPalette_68  palette3308 = ( (  query_dash_palette596 ) ( ) );
    struct Tuple2_607  dims3309 = ( (  get_dash_dimensions608 ) ( ) );
    uint32_t  fps3310 = (  from_dash_integral198 ( 60 ) );
    struct timespec  last_dash_sync3311 = ( (  now629 ) ( ) );
    struct env634 envinst634 = {
        .should_dash_resize3305 = env->should_dash_resize3305 ,
    };
    ( _intr_register_signal ( (  from_dash_integral44 ( 28 ) ) , ( (struct envunion635){ .fun = (  enum Unit_7  (*) (  struct env634*  ,    int32_t  ) )lam640 , .env =  envinst634 } ) ) );
    return ( (struct Tui_67) { .f_width = ( (  fst641 ) ( (  dims3309 ) ) ) , .f_height = ( (  snd642 ) ( (  dims3309 ) ) ) , .f_target_dash_fps = (  fps3310 ) , .f_actual_dash_fps = (  from_dash_integral198 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3311 ) , .f_fps_dash_ts = (  last_dash_sync3311 ) , .f_fps_dash_count = (  from_dash_integral198 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3307 ) , .f_palette = (  palette3308 ) , .f_should_dash_redraw = ( true ) } );
}

enum Color8_647 {
    Color8_647_Black8,
    Color8_647_Red8,
    Color8_647_Green8,
    Color8_647_Yellow8,
    Color8_647_Blue8,
    Color8_647_Magenta8,
    Color8_647_Cyan8,
    Color8_647_White8,
};

enum Color16_648 {
    Color16_648_Black16,
    Color16_648_Red16,
    Color16_648_Green16,
    Color16_648_Yellow16,
    Color16_648_Blue16,
    Color16_648_Magenta16,
    Color16_648_Cyan16,
    Color16_648_White16,
    Color16_648_BrightBlack16,
    Color16_648_BrightRed16,
    Color16_648_BrightGreen16,
    Color16_648_BrightYellow16,
    Color16_648_BrightBlue16,
    Color16_648_BrightMagenta16,
    Color16_648_BrightCyan16,
    Color16_648_BrightWhite16,
};

struct RGB_649 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_646 {
    enum {
        Color_646_ColorDefault_t,
        Color_646_Color8_t,
        Color_646_Color16_t,
        Color_646_Color256_t,
        Color_646_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_647  field0;
        } Color_646_Color8_s;
        struct {
            enum Color16_648  field0;
        } Color_646_Color16_s;
        struct {
            uint8_t  field0;
        } Color_646_Color256_s;
        struct {
            struct RGB_649  field0;
        } Color_646_ColorRGB_s;
    } stuff;
};

static struct Color_646 Color_646_Color8 (  enum Color8_647  field0 ) {
    return ( struct Color_646 ) { .tag = Color_646_Color8_t, .stuff = { .Color_646_Color8_s = { .field0 = field0 } } };
};

static struct Color_646 Color_646_Color16 (  enum Color16_648  field0 ) {
    return ( struct Color_646 ) { .tag = Color_646_Color16_t, .stuff = { .Color_646_Color16_s = { .field0 = field0 } } };
};

static struct Color_646 Color_646_Color256 (  uint8_t  field0 ) {
    return ( struct Color_646 ) { .tag = Color_646_Color256_t, .stuff = { .Color_646_Color256_s = { .field0 = field0 } } };
};

static struct Color_646 Color_646_ColorRGB (  struct RGB_649  field0 ) {
    return ( struct Color_646 ) { .tag = Color_646_ColorRGB_t, .stuff = { .Color_646_ColorRGB_s = { .field0 = field0 } } };
};

struct Cell_645 {
    struct Char_53  f_c;
    struct Color_646  f_fg;
    struct Color_646  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_644 {
    struct Cell_645 *  f_ptr;
    size_t  f_count;
};

struct Screen_643 {
    enum CAllocator_9  f_al;
    struct Tui_67 *  f_tui;
    struct Slice_644  f_current;
    struct Slice_644  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_646  f_default_dash_fg;
    struct Color_646  f_default_dash_bg;
};

struct TypeSize_654 {
    size_t  f_size;
};

static  struct TypeSize_654   get_dash_typesize653 (  ) {
    struct Cell_645  temp655;
    return ( (struct TypeSize_654) { .f_size = ( sizeof( ( (  temp655 ) ) ) ) } );
}

static  struct Cell_645 *   cast_dash_ptr656 (    void *  p359 ) {
    return ( (struct Cell_645 * ) (  p359 ) );
}

static  struct Slice_644   allocate652 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize653 ) ( ) ) ) .f_size );
    struct Cell_645 *  ptr1957 = ( (  cast_dash_ptr656 ) ( ( ( malloc ) ( (  op_dash_mul227 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_644) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

static  void *   cast_dash_ptr662 (    size_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of663 (    size_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  size_t   zeroed660 (  ) {
    size_t  temp661;
    size_t  x570 = (  temp661 );
    ( ( memset ) ( ( (  cast_dash_ptr662 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of663 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint32_t *   cast664 (    size_t *  x356 ) {
    return ( (uint32_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed658 (    uint32_t  x573 ) {
    size_t  temp659 = ( (  zeroed660 ) ( ) );
    size_t *  y574 = ( &temp659 );
    uint32_t *  yp575 = ( (  cast664 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u32_dash_size657 (    uint32_t  x651 ) {
    return ( (  cast_dash_on_dash_zeroed658 ) ( (  x651 ) ) );
}

static  uint32_t   op_dash_mul665 (    uint32_t  l240 ,    uint32_t  r242 ) {
    return ( (  l240 ) * (  r242 ) );
}

struct Range_668 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_668 Range_668_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_668 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env669 {
    struct Slice_644  s1905;
    struct Cell_645 (*  fun1907 )(    struct Cell_645  );
    ;
    ;
    ;
};

struct envunion670 {
    enum Unit_7  (*fun) (  struct env669*  ,    int32_t  );
    struct env669 env;
};

struct RangeIter_671 {
    struct Range_668  field0;
    int32_t  field1;
};

static struct RangeIter_671 RangeIter_671_RangeIter (  struct Range_668  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_671 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_671   into_dash_iter673 (    struct Range_668  dref883 ) {
    return ( ( RangeIter_671_RangeIter ) ( ( ( Range_668_Range ) ( ( dref883 .field0 ) ,  ( dref883 .field1 ) ) ) ,  ( dref883 .field0 ) ) );
}

static  struct Maybe_254   next674 (    struct RangeIter_671 *  self891 ) {
    struct RangeIter_671  dref892 = ( * (  self891 ) );
    if ( true ) {
        if ( (  cmp299 ( ( dref892 .field1 ) , ( dref892 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
        }
        struct Maybe_254  x896 = ( ( Maybe_254_Just ) ( ( dref892 .field1 ) ) );
        (*  self891 ) = ( ( RangeIter_671_RangeIter ) ( ( ( Range_668_Range ) ( ( dref892 .field0 .field0 ) ,  ( dref892 .field0 .field1 ) ) ) ,  (  op_dash_add256 ( ( dref892 .field1 ) , (  from_dash_integral44 ( 1 ) ) ) ) ) );
        return (  x896 );
    }
}

static  enum Unit_7   for_dash_each667 (    struct Range_668  iterable1074 ,   struct envunion670  fun1076 ) {
    struct RangeIter_671  temp672 = ( (  into_dash_iter673 ) ( (  iterable1074 ) ) );
    struct RangeIter_671 *  it1077 = ( &temp672 );
    while ( ( true ) ) {
        struct Maybe_254  dref1078 = ( (  next674 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_254_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_254_Just_t ) {
                struct envunion670  temp675 = (  fun1076 );
                ( temp675.fun ( &temp675.env ,  ( dref1078 .stuff .Maybe_254_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Range_668   to676 (    int32_t  from874 ,    int32_t  to876 ) {
    return ( ( Range_668_Range ) ( (  from874 ) ,  (  to876 ) ) );
}

static  struct Cell_645 *   offset_dash_ptr680 (    struct Cell_645 *  x338 ,    int64_t  count340 ) {
    struct Cell_645  temp681;
    return ( (struct Cell_645 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul212 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp681 ) ) ) ) ) ) ) ) );
}

static  struct Cell_645 *   get_dash_ptr679 (    struct Slice_644  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp166 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic234 ) ( ( ( StrConcat_235_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string202 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_645 *  elem_dash_ptr1760 = ( (  offset_dash_ptr680 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set678 (    struct Slice_644  slice1774 ,    size_t  i1776 ,    struct Cell_645  x1778 ) {
    struct Cell_645 *  ep1779 = ( (  get_dash_ptr679 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

struct Maybe_685 {
    enum {
        Maybe_685_None_t,
        Maybe_685_Just_t,
    } tag;
    union {
        struct {
            struct Cell_645  field0;
        } Maybe_685_Just_s;
    } stuff;
};

static struct Maybe_685 Maybe_685_Just (  struct Cell_645  field0 ) {
    return ( struct Maybe_685 ) { .tag = Maybe_685_Just_t, .stuff = { .Maybe_685_Just_s = { .field0 = field0 } } };
};

static  struct Cell_645   undefined686 (  ) {
    struct Cell_645  temp687;
    return (  temp687 );
}

static  struct Cell_645   or_dash_fail684 (    struct Maybe_685  x1725 ,    struct StrConcat_235  errmsg1727 ) {
    struct Maybe_685  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_685_None_t ) {
        ( (  panic234 ) ( (  errmsg1727 ) ) );
        return ( (  undefined686 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_685_Just_t ) {
            return ( dref1728 .stuff .Maybe_685_Just_s .field0 );
        }
    }
}

static  struct Maybe_685   try_dash_get688 (    struct Slice_644  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp166 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_685) { .tag = Maybe_685_None_t } );
    }
    struct Cell_645 *  elem_dash_ptr1766 = ( (  offset_dash_ptr680 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_685_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  struct Cell_645   get683 (    struct Slice_644  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail684 ) ( ( (  try_dash_get688 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_235_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string202 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_645   elem_dash_get682 (    struct Slice_644  self1867 ,    size_t  idx1869 ) {
    return ( (  get683 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

static  enum Unit_7   lam677 (   struct env669* env ,    int32_t  i1909 ) {
    return ( (  set678 ) ( ( env->s1905 ) ,  ( (  i32_dash_size244 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get682 ( ( env->s1905 ) , ( (  i32_dash_size244 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_7   map666 (    struct Slice_644  s1905 ,    struct Cell_645 (*  fun1907 )(    struct Cell_645  ) ) {
    struct env669 envinst669 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each667 ) ( ( (  to676 ) ( (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_i32178 ) ( (  op_dash_sub286 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion670){ .fun = (  enum Unit_7  (*) (  struct env669*  ,    int32_t  ) )lam677 , .env =  envinst669 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Cell_645   default_dash_cell690 (  ) {
    return ( (struct Cell_645) { .f_c = ( (  from_dash_charlike203 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_646) { .tag = Color_646_ColorDefault_t } ) , .f_bg = ( (struct Color_646) { .tag = Color_646_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral44 ( 1 ) ) } );
}

static  struct Cell_645   lam689 (    struct Cell_645  dref3415 ) {
    return ( (  default_dash_cell690 ) ( ) );
}

struct env693 {
    struct Slice_644  s1905;
    struct Cell_645 (*  fun1907 )(    struct Cell_645  );
    ;
    ;
    ;
};

struct envunion694 {
    enum Unit_7  (*fun) (  struct env693*  ,    int32_t  );
    struct env693 env;
};

static  enum Unit_7   for_dash_each692 (    struct Range_668  iterable1074 ,   struct envunion694  fun1076 ) {
    struct RangeIter_671  temp695 = ( (  into_dash_iter673 ) ( (  iterable1074 ) ) );
    struct RangeIter_671 *  it1077 = ( &temp695 );
    while ( ( true ) ) {
        struct Maybe_254  dref1078 = ( (  next674 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_254_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_254_Just_t ) {
                struct envunion694  temp696 = (  fun1076 );
                ( temp696.fun ( &temp696.env ,  ( dref1078 .stuff .Maybe_254_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam697 (   struct env693* env ,    int32_t  i1909 ) {
    return ( (  set678 ) ( ( env->s1905 ) ,  ( (  i32_dash_size244 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get682 ( ( env->s1905 ) , ( (  i32_dash_size244 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_7   map691 (    struct Slice_644  s1905 ,    struct Cell_645 (*  fun1907 )(    struct Cell_645  ) ) {
    struct env693 envinst693 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each692 ) ( ( (  to676 ) ( (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_i32178 ) ( (  op_dash_sub286 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion694){ .fun = (  enum Unit_7  (*) (  struct env693*  ,    int32_t  ) )lam697 , .env =  envinst693 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Cell_645   lam698 (    struct Cell_645  dref3417 ) {
    return ( (  default_dash_cell690 ) ( ) );
}

static  struct Screen_643   mk_dash_screen651 (    struct Tui_67 *  tui3411 ,    enum CAllocator_9  al3413 ) {
    struct Slice_644  cur3414 = ( (  allocate652 ) ( (  al3413 ) ,  ( (  u32_dash_size657 ) ( (  op_dash_mul665 ( ( ( * (  tui3411 ) ) .f_width ) , ( ( * (  tui3411 ) ) .f_height ) ) ) ) ) ) );
    ( (  map666 ) ( (  cur3414 ) ,  (  lam689 ) ) );
    struct Slice_644  prev3416 = ( (  allocate652 ) ( (  al3413 ) ,  ( (  u32_dash_size657 ) ( (  op_dash_mul665 ( ( ( * (  tui3411 ) ) .f_width ) , ( ( * (  tui3411 ) ) .f_height ) ) ) ) ) ) );
    ( (  map691 ) ( (  prev3416 ) ,  (  lam698 ) ) );
    return ( (struct Screen_643) { .f_current = (  cur3414 ) , .f_previous = (  prev3416 ) , .f_al = (  al3413 ) , .f_tui = (  tui3411 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_646) { .tag = Color_646_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_646) { .tag = Color_646_ColorDefault_t } ) } );
}

enum MouseButton_706 {
    MouseButton_706_MouseLeft,
    MouseButton_706_MouseMiddle,
    MouseButton_706_MouseRight,
    MouseButton_706_ScrollUp,
    MouseButton_706_ScrollDown,
};

struct MouseEvent_705 {
    enum MouseButton_706  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_704 {
    enum {
        InputEvent_704_Key_t,
        InputEvent_704_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_140  field0;
        } InputEvent_704_Key_s;
        struct {
            struct MouseEvent_705  field0;
        } InputEvent_704_Mouse_s;
    } stuff;
};

static struct InputEvent_704 InputEvent_704_Key (  struct Key_140  field0 ) {
    return ( struct InputEvent_704 ) { .tag = InputEvent_704_Key_t, .stuff = { .InputEvent_704_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_704 InputEvent_704_Mouse (  struct MouseEvent_705  field0 ) {
    return ( struct InputEvent_704 ) { .tag = InputEvent_704_Mouse_t, .stuff = { .InputEvent_704_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_703 {
    enum {
        Maybe_703_None_t,
        Maybe_703_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_704  field0;
        } Maybe_703_Just_s;
    } stuff;
};

static struct Maybe_703 Maybe_703_Just (  struct InputEvent_704  field0 ) {
    return ( struct Maybe_703 ) { .tag = Maybe_703_Just_t, .stuff = { .Maybe_703_Just_s = { .field0 = field0 } } };
};

struct envunion702 {
    struct Maybe_703  (*fun) (  struct env65*  ,    struct Tui_67 *  );
    struct env65 env;
};

struct env701 {
    struct Tui_67 *  tui4125;
    struct env65 envinst65;
};

struct envunion707 {
    struct Maybe_703  (*fun) (  struct env701*  );
    struct env701 env;
};

struct FunIter_700 {
    struct envunion707  f_fun;
    bool  f_finished;
};

static  struct FunIter_700   into_dash_iter708 (    struct FunIter_700  self1028 ) {
    return (  self1028 );
}

static  struct FunIter_700   from_dash_function709 (   struct envunion707  fun1036 ) {
    return ( (struct FunIter_700) { .f_fun = (  fun1036 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions714 (   struct env64* env ,    struct Tui_67 *  tui3377 ) {
    if ( ( ! ( * ( env->should_dash_resize3305 ) ) ) ) {
        return ( false );
    }
    (*  tui3377 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3305 ) = ( false );
    struct Tuple2_607  dim3378 = ( (  get_dash_dimensions608 ) ( ) );
    uint32_t  w3379 = ( (  fst641 ) ( (  dim3378 ) ) );
    uint32_t  h3380 = ( (  snd642 ) ( (  dim3378 ) ) );
    (*  tui3377 ) .f_width = (  w3379 );
    (*  tui3377 ) .f_height = (  h3380 );
    return ( true );
}

static  char   undefined717 (  ) {
    char  temp718;
    return (  temp718 );
}

struct Maybe_719 {
    enum {
        Maybe_719_None_t,
        Maybe_719_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_719_Just_s;
    } stuff;
};

static struct Maybe_719 Maybe_719_Just (  char  field0 ) {
    return ( struct Maybe_719 ) { .tag = Maybe_719_Just_t, .stuff = { .Maybe_719_Just_s = { .field0 = field0 } } };
};

struct Pollfd_721 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr722 (    struct Pollfd_721 *  p359 ) {
    return ( (struct pollfd * ) (  p359 ) );
}

static  void *   cast_dash_ptr725 (    char *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of726 (    char  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  char   zeroed723 (  ) {
    char  temp724;
    char  x570 = (  temp724 );
    ( ( memset ) ( ( (  cast_dash_ptr725 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of726 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Maybe_719   read_dash_byte720 (    int32_t  timeout_dash_ms3299 ) {
    struct Pollfd_721  pfd3300 = ( (struct Pollfd_721) { .f_fd = (  from_dash_integral44 ( 0 ) ) , .f_events = (  from_dash_integral620 ( 1 ) ) , .f_revents = (  from_dash_integral620 ( 0 ) ) } );
    if ( (  cmp299 ( ( ( poll ) ( ( (  cast_dash_ptr722 ) ( ( & (  pfd3300 ) ) ) ) ,  (  from_dash_integral44 ( 1 ) ) ,  (  timeout_dash_ms3299 ) ) ) , (  from_dash_integral44 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_719) { .tag = Maybe_719_None_t } );
    }
    char  c3301 = ( ( (  zeroed723 ) ( ) ) );
    if ( (  cmp299 ( ( ( read ) ( ( (  stdin_dash_fileno521 ) ( ) ) ,  ( (  cast_dash_ptr725 ) ( ( & (  c3301 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral44 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_719) { .tag = Maybe_719_None_t } );
    }
    return ( ( Maybe_719_Just ) ( (  c3301 ) ) );
}

static  uint8_t   ascii_dash_u8727 (    char  c776 ) {
    return ( ( (uint8_t ) (  c776 ) ) );
}

static  char   u8_dash_ascii728 (    uint8_t  b779 ) {
    return ( ( (char ) (  b779 ) ) );
}

static  uint8_t *   cast732 (    uint32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed730 (    uint8_t  x573 ) {
    uint32_t  temp731 = ( (  zeroed624 ) ( ) );
    uint32_t *  y574 = ( &temp731 );
    uint8_t *  yp575 = ( (  cast732 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u8_dash_u32729 (    uint8_t  x672 ) {
    return ( (  cast_dash_on_dash_zeroed730 ) ( (  x672 ) ) );
}

struct Map_735 {
    struct StrViewIter_585  field0;
    uint32_t (*  field1 )(    struct Char_53  );
};

static struct Map_735 Map_735_Map (  struct StrViewIter_585  field0 ,  uint32_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_735 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_735   into_dash_iter736 (    struct Map_735  self796 ) {
    return (  self796 );
}

static  struct Maybe_530   next737 (    struct Map_735 *  dref798 ) {
    struct Maybe_588  dref801 = ( (  next589 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_588_None_t ) {
        return ( (struct Maybe_530) { .tag = Maybe_530_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_588_Just_t ) {
            return ( ( Maybe_530_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_588_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce734 (    struct Map_735  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct Map_735  it1099 = ( (  into_dash_iter736 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_530  dref1100 = ( (  next737 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_530_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_530_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_530_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp738 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp738);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp739;
    return (  temp739 );
}

static  struct Map_735   map740 (    struct StrView_21  iterable805 ,    uint32_t (*  fun807 )(    struct Char_53  ) ) {
    struct StrViewIter_585  it808 = ( (  into_dash_iter591 ) ( (  iterable805 ) ) );
    return ( ( Map_735_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  void *   cast_dash_ptr747 (    int64_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of748 (    int64_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int64_t   zeroed745 (  ) {
    int64_t  temp746;
    int64_t  x570 = (  temp746 );
    ( ( memset ) ( ( (  cast_dash_ptr747 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of748 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast749 (    int64_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int64_t   cast_dash_on_dash_zeroed743 (    uint8_t  x573 ) {
    int64_t  temp744 = ( (  zeroed745 ) ( ) );
    int64_t *  y574 = ( &temp744 );
    uint8_t *  yp575 = ( (  cast749 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int64_t   u8_dash_i64742 (    uint8_t  x666 ) {
    return ( (  cast_dash_on_dash_zeroed743 ) ( (  x666 ) ) );
}

struct StrConcat_752 {
    struct Char_53  field0;
    struct Char_53  field1;
};

static struct StrConcat_752 StrConcat_752_StrConcat (  struct Char_53  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_752 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_751 {
    struct StrConcat_752  field0;
    struct StrView_21  field1;
};

static struct StrConcat_751 StrConcat_751_StrConcat (  struct StrConcat_752  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_751 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_756 {
    struct StrView_21  field0;
    struct StrConcat_751  field1;
};

static struct StrConcat_756 StrConcat_756_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_751  field1 ) {
    return ( struct StrConcat_756 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_755 {
    struct StrConcat_756  field0;
    struct Char_53  field1;
};

static struct StrConcat_755 StrConcat_755_StrConcat (  struct StrConcat_756  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_755 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str759 (    struct StrConcat_752  self1503 ) {
    struct StrConcat_752  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str185 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str185 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str758 (    struct StrConcat_751  self1503 ) {
    struct StrConcat_751  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str759 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str177 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str757 (    struct StrConcat_756  self1503 ) {
    struct StrConcat_756  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str177 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str758 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str754 (    struct StrConcat_755  self1503 ) {
    struct StrConcat_755  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str757 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str185 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic753 (    struct StrConcat_751  errmsg1712 ) {
    ( (  print_dash_str754 ) ( ( ( StrConcat_755_StrConcat ) ( ( ( StrConcat_756_StrConcat ) ( ( (  from_dash_string202 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  uint8_t   or_dash_fail750 (    struct Maybe_327  x1725 ,    struct StrConcat_751  errmsg1727 ) {
    struct Maybe_327  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_327_None_t ) {
        ( (  panic753 ) ( (  errmsg1727 ) ) );
        return ( (  undefined363 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_327_Just_t ) {
            return ( dref1728 .stuff .Maybe_327_Just_s .field0 );
        }
    }
}

static  enum Ordering_167   cmp761 (    struct Char_53  l744 ,    struct Char_53  r746 ) {
    if ( ( ( !  eq221 ( ( (  l744 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq221 ( ( (  r746 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp762 = ( (  from_dash_string45 ) ( ( "(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp762);
        exit ( 1 );
        ( Unit_7_Unit );
    }
    return ( (  cmp207 ) ( ( (  char_dash_u8366 ) ( (  l744 ) ) ) ,  ( (  char_dash_u8366 ) ( (  r746 ) ) ) ) );
}

static  uint8_t   op_dash_sub763 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  uint8_t   op_dash_add764 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  struct Maybe_327   hex_dash_digit760 (    struct Char_53  c2545 ) {
    if ( ( (  cmp761 ( (  c2545 ) , ( (  from_dash_charlike203 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp761 ( (  c2545 ) , ( (  from_dash_charlike203 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_327_Just ) ( (  op_dash_sub763 ( ( (  char_dash_u8366 ) ( (  c2545 ) ) ) , ( (  char_dash_u8366 ) ( ( (  from_dash_charlike203 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp761 ( (  c2545 ) , ( (  from_dash_charlike203 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp761 ( (  c2545 ) , ( (  from_dash_charlike203 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_327_Just ) ( (  op_dash_add764 ( (  op_dash_sub763 ( ( (  char_dash_u8366 ) ( (  c2545 ) ) ) , ( (  char_dash_u8366 ) ( ( (  from_dash_charlike203 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral194 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp761 ( (  c2545 ) , ( (  from_dash_charlike203 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp761 ( (  c2545 ) , ( (  from_dash_charlike203 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_327_Just ) ( (  op_dash_add764 ( (  op_dash_sub763 ( ( (  char_dash_u8366 ) ( (  c2545 ) ) ) , ( (  char_dash_u8366 ) ( ( (  from_dash_charlike203 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral194 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_327) { .tag = Maybe_327_None_t } );
}

static  uint32_t   lam741 (    struct Char_53  c2550 ) {
    return ( (  from_dash_integral198 ) ( ( (  u8_dash_i64742 ) ( ( (  or_dash_fail750 ) ( ( (  hex_dash_digit760 ) ( (  c2550 ) ) ) ,  ( ( StrConcat_751_StrConcat ) ( ( ( StrConcat_752_StrConcat ) ( ( (  from_dash_charlike203 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2550 ) ) ) ,  ( (  from_dash_string202 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   op_dash_add766 (    uint32_t  l230 ,    uint32_t  r232 ) {
    return ( (  l230 ) + (  r232 ) );
}

static  uint32_t   lam765 (    uint32_t  elem2552 ,    uint32_t  b2554 ) {
    return (  op_dash_add766 ( (  op_dash_mul665 ( (  b2554 ) , (  from_dash_integral198 ( 16 ) ) ) ) , (  elem2552 ) ) );
}

static  uint32_t   from_dash_hex733 (    struct StrView_21  arr2548 ) {
    return ( (  reduce734 ) ( ( (  map740 ) ( (  arr2548 ) ,  (  lam741 ) ) ) ,  (  from_dash_integral198 ( 0 ) ) ,  (  lam765 ) ) );
}

static  bool   eq768 (    char  l374 ,    char  r376 ) {
    return ( (  l374 ) == (  r376 ) );
}

static  char   from_dash_charlike769 (    uint8_t *  ptr369 ,    size_t  num_dash_bytes371 ) {
    if ( ( !  eq221 ( (  num_dash_bytes371 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp770 = ( (  from_dash_string45 ) ( ( "(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp770);
        exit ( 1 );
        ( Unit_7_Unit );
    }
    return ( ( (char ) ( * (  ptr369 ) ) ) );
}

struct Array_771 {
    char _arr [32];
};

static  void *   cast_dash_ptr775 (    struct Array_771 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of776 (    struct Array_771  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Array_771   zeroed773 (  ) {
    struct Array_771  temp774;
    struct Array_771  x570 = (  temp774 );
    ( ( memset ) ( ( (  cast_dash_ptr775 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of776 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr780 (    struct Array_771 *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  char *   offset_dash_ptr781 (    char *  x338 ,    int64_t  count340 ) {
    char  temp782;
    return ( (char * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul212 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp782 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr779 (    struct Array_771 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp166 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i2253 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic170 ) ( ( ( StrConcat_171_StrConcat ) ( ( ( StrConcat_172_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string202 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2254 = ( ( (  cast_dash_ptr780 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr781 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  enum Unit_7   set778 (    struct Array_771 *  arr2263 ,    size_t  i2266 ,    char  e2268 ) {
    char *  p2269 = ( (  get_dash_ptr779 ) ( (  arr2263 ) ,  (  i2266 ) ) );
    (*  p2269 ) = (  e2268 );
    return ( Unit_7_Unit );
}

struct Slice_784 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail787 (    struct Maybe_719  x1725 ,    struct StrConcat_235  errmsg1727 ) {
    struct Maybe_719  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_719_None_t ) {
        ( (  panic234 ) ( (  errmsg1727 ) ) );
        return ( (  undefined717 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_719_Just_t ) {
            return ( dref1728 .stuff .Maybe_719_Just_s .field0 );
        }
    }
}

static  struct Maybe_719   try_dash_get788 (    struct Slice_784  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp166 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_719) { .tag = Maybe_719_None_t } );
    }
    char *  elem_dash_ptr1766 = ( (  offset_dash_ptr781 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_719_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  char   get786 (    struct Slice_784  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail787 ) ( ( (  try_dash_get788 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_235_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string202 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get785 (    struct Slice_784  self1867 ,    size_t  idx1869 ) {
    return ( (  get786 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

struct Scanner_789 {
    struct StrViewIter_585  f_s;
};

static  struct Scanner_789   mk_dash_from_dash_str791 (    struct StrView_21  s3172 ) {
    return ( (struct Scanner_789) { .f_s = ( (  chars590 ) ( (  s3172 ) ) ) } );
}

static  int32_t   op_dash_sub794 (    int32_t  l212 ,    int32_t  r214 ) {
    return ( (  l212 ) - (  r214 ) );
}

static  uint8_t *   offset_dash_ptr_prime_796 (    uint8_t *  x343 ,    size_t  count345 ) {
    return ( (  offset_dash_ptr311 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
}

static  struct StrView_21   substr792 (    struct StrView_21  s2172 ,    size_t  from2174 ,    size_t  to2176 ) {
    size_t  from_dash_bs2177 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_671  temp793 =  into_dash_iter673 ( ( (  to676 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  op_dash_sub794 ( ( (  size_dash_i32178 ) ( (  from2174 ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_254  __cond795 =  next674 (&temp793);
        if (  __cond795 .tag == 0 ) {
            break;
        }
        int32_t  dref2178 =  __cond795 .stuff .Maybe_254_Just_s .field0;
        if ( (  cmp166 ( (  from_dash_bs2177 ) , ( ( (  s2172 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2177 = (  op_dash_add214 ( (  from_dash_bs2177 ) , ( (  next_dash_char206 ) ( ( (  offset_dash_ptr_prime_796 ) ( ( ( (  s2172 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2177 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2179 = (  from_dash_bs2177 );
    struct RangeIter_671  temp797 =  into_dash_iter673 ( ( (  to676 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  op_dash_sub794 ( (  op_dash_sub794 ( ( (  size_dash_i32178 ) ( (  to2176 ) ) ) , ( (  size_dash_i32178 ) ( (  from2174 ) ) ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_254  __cond798 =  next674 (&temp797);
        if (  __cond798 .tag == 0 ) {
            break;
        }
        int32_t  dref2180 =  __cond798 .stuff .Maybe_254_Just_s .field0;
        if ( (  cmp166 ( (  to_dash_bs2179 ) , ( ( (  s2172 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2179 = (  op_dash_add214 ( (  to_dash_bs2179 ) , ( (  next_dash_char206 ) ( ( (  offset_dash_ptr_prime_796 ) ( ( ( (  s2172 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2179 ) ) ) ) ) ) );
    }
    return ( (struct StrView_21) { .f_contents = ( (  subslice310 ) ( ( (  s2172 ) .f_contents ) ,  (  from_dash_bs2177 ) ,  (  to_dash_bs2179 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr801 (    char *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_12   cast_dash_slice800 (    struct Slice_784  s1932 ) {
    return ( (struct Slice_12) { .f_ptr = ( (  cast_dash_ptr801 ) ( ( (  s1932 ) .f_ptr ) ) ) , .f_count = ( (  s1932 ) .f_count ) } );
}

static  struct StrView_21   from_dash_ascii_dash_slice799 (    struct Slice_784  sl2149 ) {
    return ( (struct StrView_21) { .f_contents = ( (  cast_dash_slice800 ) ( (  sl2149 ) ) ) } );
}

struct Maybe_802 {
    enum {
        Maybe_802_None_t,
        Maybe_802_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_802_Just_s;
    } stuff;
};

static struct Maybe_802 Maybe_802_Just (  int64_t  field0 ) {
    return ( struct Maybe_802 ) { .tag = Maybe_802_Just_t, .stuff = { .Maybe_802_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_804 {
    struct Scanner_789  f_it;
    bool (*  f_pred )(    struct Char_53  );
};

static  struct Scanner_789   into_dash_iter807 (    struct Scanner_789  self3163 ) {
    return (  self3163 );
}

static  struct Scanner_789   into_dash_iter806 (    struct Scanner_789 *  self785 ) {
    return ( (  into_dash_iter807 ) ( ( * (  self785 ) ) ) );
}

static  struct TakeWhile_804   take_dash_while805 (    struct Scanner_789 *  it970 ,    bool (*  pred972 )(    struct Char_53  ) ) {
    return ( (struct TakeWhile_804) { .f_it = ( (  into_dash_iter806 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  bool   is_dash_digit808 (    struct Char_53  c2451 ) {
    return ( (  cmp207 ( ( (  char_dash_u8366 ) ( (  c2451 ) ) ) , ( (  char_dash_u8366 ) ( ( (  from_dash_charlike203 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp207 ( ( (  char_dash_u8366 ) ( (  c2451 ) ) ) , ( (  char_dash_u8366 ) ( ( (  from_dash_charlike203 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_588   next812 (    struct Scanner_789 *  self3160 ) {
    return ( (  next589 ) ( ( & ( ( * (  self3160 ) ) .f_s ) ) ) );
}

static  struct Maybe_588   next811 (    struct TakeWhile_804 *  self964 ) {
    struct Maybe_588  mx965 = ( (  next812 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_588  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_588_None_t ) {
        return ( (struct Maybe_588) { .tag = Maybe_588_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_588_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_588_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_588_Just ) ( ( dref966 .stuff .Maybe_588_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_588) { .tag = Maybe_588_None_t } );
            }
        }
    }
}

static  struct TakeWhile_804   into_dash_iter814 (    struct TakeWhile_804  self961 ) {
    return (  self961 );
}

static  struct Maybe_588   head810 (    struct TakeWhile_804  it1142 ) {
    struct TakeWhile_804  temp813 = ( (  into_dash_iter814 ) ( (  it1142 ) ) );
    return ( (  next811 ) ( ( &temp813 ) ) );
}

static  bool   null809 (    struct TakeWhile_804  it1151 ) {
    struct Maybe_588  dref1152 = ( (  head810 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_588_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env817 {
    struct Scanner_789 *  it1186;
    ;
};

struct envunion818 {
    struct Maybe_588  (*fun) (  struct env817*  ,    int32_t  );
    struct env817 env;
};

static  enum Unit_7   for_dash_each816 (    struct Range_668  iterable1074 ,   struct envunion818  fun1076 ) {
    struct RangeIter_671  temp819 = ( (  into_dash_iter673 ) ( (  iterable1074 ) ) );
    struct RangeIter_671 *  it1077 = ( &temp819 );
    while ( ( true ) ) {
        struct Maybe_254  dref1078 = ( (  next674 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_254_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_254_Just_t ) {
                struct envunion818  temp820 = (  fun1076 );
                ( temp820.fun ( &temp820.env ,  ( dref1078 .stuff .Maybe_254_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Maybe_588   lam821 (   struct env817* env ,    int32_t  dref1189 ) {
    return ( (  next812 ) ( ( env->it1186 ) ) );
}

static  enum Unit_7   drop_prime_815 (    struct Scanner_789 *  it1186 ,    size_t  n1188 ) {
    struct env817 envinst817 = {
        .it1186 =  it1186 ,
    };
    ( (  for_dash_each816 ) ( ( (  to676 ) ( (  from_dash_integral44 ( 1 ) ) ,  ( (  size_dash_i32178 ) ( (  n1188 ) ) ) ) ) ,  ( (struct envunion818){ .fun = (  struct Maybe_588  (*) (  struct env817*  ,    int32_t  ) )lam821 , .env =  envinst817 } ) ) );
    return ( Unit_7_Unit );
}

static  size_t   reduce823 (    struct TakeWhile_804  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_53  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct TakeWhile_804  it1099 = ( (  into_dash_iter814 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_588  dref1100 = ( (  next811 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_588_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_588_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_588_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp824 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp824);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp825;
    return (  temp825 );
}

static  size_t   lam826 (    struct Char_53  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add214 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count822 (    struct TakeWhile_804  it1104 ) {
    return ( (  reduce823 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam826 ) ) );
}

static  struct TakeWhile_804   chars828 (    struct TakeWhile_804  self1651 ) {
    return (  self1651 );
}

static  struct Maybe_802   reduce829 (    struct TakeWhile_804  iterable1093 ,    struct Maybe_802  base1095 ,    struct Maybe_802 (*  fun1097 )(    struct Char_53  ,    struct Maybe_802  ) ) {
    struct Maybe_802  x1098 = (  base1095 );
    struct TakeWhile_804  it1099 = ( (  into_dash_iter814 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_588  dref1100 = ( (  next811 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_588_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_588_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_588_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp830 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp830);
    exit ( 1 );
    ( Unit_7_Unit );
    struct Maybe_802  temp831;
    return (  temp831 );
}

static  void *   cast_dash_ptr839 (    int32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of840 (    int32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int32_t   zeroed837 (  ) {
    int32_t  temp838;
    int32_t  x570 = (  temp838 );
    ( ( memset ) ( ( (  cast_dash_ptr839 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of840 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast841 (    int32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed835 (    uint8_t  x573 ) {
    int32_t  temp836 = ( (  zeroed837 ) ( ) );
    int32_t *  y574 = ( &temp836 );
    uint8_t *  yp575 = ( (  cast841 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int32_t   u8_dash_i32834 (    uint8_t  x669 ) {
    return ( (  cast_dash_on_dash_zeroed835 ) ( (  x669 ) ) );
}

static  struct Maybe_254   parse_dash_digit833 (    struct Char_53  c2454 ) {
    if ( ( (  is_dash_digit808 ) ( (  c2454 ) ) ) ) {
        return ( ( Maybe_254_Just ) ( ( (  u8_dash_i32834 ) ( (  op_dash_sub763 ( ( (  char_dash_u8366 ) ( (  c2454 ) ) ) , ( (  char_dash_u8366 ) ( ( (  from_dash_charlike203 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
    }
}

static  int64_t   i32_dash_i64842 (    int32_t  x606 ) {
    return ( (int64_t ) (  x606 ) );
}

static  struct Maybe_802   sequence_dash_maybe832 (    struct Char_53  e2460 ,    struct Maybe_802  b2462 ) {
    struct Maybe_802  dref2463 = (  b2462 );
    if ( dref2463.tag == Maybe_802_None_t ) {
        return ( (struct Maybe_802) { .tag = Maybe_802_None_t } );
    }
    else {
        if ( dref2463.tag == Maybe_802_Just_t ) {
            struct Maybe_254  dref2465 = ( (  parse_dash_digit833 ) ( (  e2460 ) ) );
            if ( dref2465.tag == Maybe_254_None_t ) {
                return ( (struct Maybe_802) { .tag = Maybe_802_None_t } );
            }
            else {
                if ( dref2465.tag == Maybe_254_Just_t ) {
                    return ( ( Maybe_802_Just ) ( (  op_dash_add387 ( (  op_dash_mul212 ( ( dref2463 .stuff .Maybe_802_Just_s .field0 ) , (  from_dash_integral285 ( 10 ) ) ) ) , ( (  i32_dash_i64842 ) ( ( dref2465 .stuff .Maybe_254_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_802   parse_dash_int827 (    struct TakeWhile_804  s2457 ) {
    struct TakeWhile_804  cs2467 = ( (  chars828 ) ( (  s2457 ) ) );
    struct Maybe_588  dref2468 = ( (  head810 ) ( (  cs2467 ) ) );
    if ( dref2468.tag == Maybe_588_Just_t ) {
        return ( (  reduce829 ) ( (  cs2467 ) ,  ( ( Maybe_802_Just ) ( (  from_dash_integral285 ( 0 ) ) ) ) ,  (  sequence_dash_maybe832 ) ) );
    }
    else {
        if ( dref2468.tag == Maybe_588_None_t ) {
            return ( (struct Maybe_802) { .tag = Maybe_802_None_t } );
        }
    }
}

static  struct Maybe_802   scan_dash_int803 (    struct Scanner_789 *  sc3175 ) {
    struct TakeWhile_804  digit_dash_chars3176 = ( (  take_dash_while805 ) ( (  sc3175 ) ,  (  is_dash_digit808 ) ) );
    if ( ( (  null809 ) ( (  digit_dash_chars3176 ) ) ) ) {
        return ( (struct Maybe_802) { .tag = Maybe_802_None_t } );
    }
    ( (  drop_prime_815 ) ( (  sc3175 ) ,  ( (  count822 ) ( (  digit_dash_chars3176 ) ) ) ) );
    return ( (  parse_dash_int827 ) ( (  digit_dash_chars3176 ) ) );
}

static  int32_t   i64_dash_i32844 (    int64_t  x618 ) {
    return ( (int32_t ) (  x618 ) );
}

struct StrConcat_846 {
    struct StrView_21  field0;
    int64_t  field1;
};

static struct StrConcat_846 StrConcat_846_StrConcat (  struct StrView_21  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_846 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_849 {
    struct StrView_21  field0;
    struct StrConcat_846  field1;
};

static struct StrConcat_849 StrConcat_849_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_846  field1 ) {
    return ( struct StrConcat_849 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_848 {
    struct StrConcat_849  field0;
    struct Char_53  field1;
};

static struct StrConcat_848 StrConcat_848_StrConcat (  struct StrConcat_849  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_848 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_854 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_853 {
    struct StrViewIter_585  f_left;
    struct IntStrIter_854  f_right;
};

struct StrConcatIter_852 {
    struct StrViewIter_585  f_left;
    struct StrConcatIter_853  f_right;
};

enum EmptyIter_856 {
    EmptyIter_856_EmptyIter,
};

struct AppendIter_855 {
    enum EmptyIter_856  f_it;
    struct Char_53  f_elem;
    bool  f_appended;
};

struct StrConcatIter_851 {
    struct StrConcatIter_852  f_left;
    struct AppendIter_855  f_right;
};

static  struct StrConcatIter_851   into_dash_iter858 (    struct StrConcatIter_851  self1491 ) {
    return (  self1491 );
}

struct env865 {
    ;
    int64_t  base1210;
};

struct envunion866 {
    int64_t  (*fun) (  struct env865*  ,    int32_t  ,    int64_t  );
    struct env865 env;
};

static  int64_t   reduce864 (    struct Range_668  iterable1093 ,    int64_t  base1095 ,   struct envunion866  fun1097 ) {
    int64_t  x1098 = (  base1095 );
    struct RangeIter_671  it1099 = ( (  into_dash_iter673 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1100 = ( (  next674 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_254_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_254_Just_t ) {
                struct envunion866  temp867 = (  fun1097 );
                x1098 = ( temp867.fun ( &temp867.env ,  ( dref1100 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp868 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp868);
    exit ( 1 );
    ( Unit_7_Unit );
    int64_t  temp869;
    return (  temp869 );
}

static  int64_t   lam870 (   struct env865* env ,    int32_t  item1214 ,    int64_t  x1216 ) {
    return (  op_dash_mul212 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int64_t   pow863 (    int64_t  base1210 ,    int32_t  p1212 ) {
    struct env865 envinst865 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce864 ) ( ( (  to676 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  op_dash_sub794 ( (  p1212 ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral285 ( 1 ) ) ,  ( (struct envunion866){ .fun = (  int64_t  (*) (  struct env865*  ,    int32_t  ,    int64_t  ) )lam870 , .env =  envinst865 } ) ) );
}

static  int64_t   op_dash_div871 (    int64_t  l199 ,    int64_t  r201 ) {
    return ( (  l199 ) / (  r201 ) );
}

static  uint8_t   cast872 (    int64_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  int64_t   op_dash_sub873 (    int64_t  l189 ,    int64_t  r191 ) {
    return ( (  l189 ) - (  r191 ) );
}

static  uint8_t *   cast879 (    size_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed877 (    uint8_t  x573 ) {
    size_t  temp878 = ( (  zeroed660 ) ( ) );
    size_t *  y574 = ( &temp878 );
    uint8_t *  yp575 = ( (  cast879 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u8_dash_size876 (    uint8_t  x663 ) {
    return ( (  cast_dash_on_dash_zeroed877 ) ( (  x663 ) ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer875 (    uint8_t *  ptr681 ,    uint8_t  b683 ) {
    size_t  s684 = ( ( (size_t ) (  ptr681 ) ) );
    size_t  exp685 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add214 ( (  op_dash_sub286 ( (  s684 ) , ( (  u8_dash_size876 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer191 ) ( (  ptr681 ) ) ) ) ) ) ) , (  op_dash_mul227 ( (  exp685 ) , ( (  u8_dash_size876 ) ( (  b683 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast880 (    size_t  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_53   from_dash_u8874 (    uint8_t  b772 ) {
    uint8_t *  ptr773 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer875 ) ( ( ( (  cast880 ) ( ( (  u8_dash_size876 ) ( (  b772 ) ) ) ) ) ) ,  (  from_dash_integral194 ( 103 ) ) ) );
    return ( (struct Char_53) { .f_ptr = (  ptr773 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_588   next862 (    struct IntStrIter_854 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_588_Just ) ( ( (  from_dash_charlike203 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp299 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_588) { .tag = Maybe_588_None_t } );
    }
    int64_t  trim_dash_down1423 = ( (  pow863 ) ( (  from_dash_integral285 ( 10 ) ) ,  (  op_dash_sub794 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 1 ) ) ) ) ) );
    int64_t  upper1424 = (  op_dash_div871 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    int64_t  upper_dash_mask1425 = (  op_dash_mul212 ( (  op_dash_div871 ( (  upper1424 ) , (  from_dash_integral285 ( 10 ) ) ) ) , (  from_dash_integral285 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast872 ) ( (  op_dash_sub873 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub794 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 1 ) ) ) );
    struct Char_53  digit_dash_char1427 = ( (  from_dash_u8874 ) ( (  op_dash_add764 ( (  digit1426 ) , (  from_dash_integral194 ( 48 ) ) ) ) ) );
    return ( ( Maybe_588_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_588   next861 (    struct StrConcatIter_853 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next589 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next862 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next860 (    struct StrConcatIter_852 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next589 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next861 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next882 (    enum EmptyIter_856 *  dref792 ) {
    return ( (struct Maybe_588) { .tag = Maybe_588_None_t } );
}

static  struct Maybe_588   next881 (    struct AppendIter_855 *  self1022 ) {
    struct Maybe_588  dref1023 = ( (  next882 ) ( ( & ( ( * (  self1022 ) ) .f_it ) ) ) );
    if ( dref1023.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1023 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1023.tag == Maybe_588_None_t ) {
            if ( ( ! ( ( * (  self1022 ) ) .f_appended ) ) ) {
                (*  self1022 ) .f_appended = ( true );
                return ( ( Maybe_588_Just ) ( ( ( * (  self1022 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_588) { .tag = Maybe_588_None_t } );
        }
    }
}

static  struct Maybe_588   next859 (    struct StrConcatIter_851 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next860 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next881 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each850 (    struct StrConcatIter_851  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_53  ) ) {
    struct StrConcatIter_851  temp857 = ( (  into_dash_iter858 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_851 *  it1077 = ( &temp857 );
    while ( ( true ) ) {
        struct Maybe_588  dref1078 = ( (  next859 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_588_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_588_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_588_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_167   cmp891 (    int64_t  l154 ,    int64_t  r156 ) {
    return ( builtin_int64_tcmp( (  l154 ) , (  r156 ) ) );
}

static  int64_t   op_dash_neg892 (    int64_t  l204 ) {
    return ( (  from_dash_integral285 ( 0 ) ) - (  l204 ) );
}

static  bool   eq894 (    int64_t  l101 ,    int64_t  r103 ) {
    return ( (  l101 ) == (  r103 ) );
}

static  int32_t   count_dash_digits893 (    int64_t  self1430 ) {
    if ( (  eq894 ( (  self1430 ) , (  from_dash_integral285 ( 0 ) ) ) ) ) {
        return (  from_dash_integral44 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral44 ( 0 ) );
    while ( (  cmp891 ( (  self1430 ) , (  from_dash_integral285 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div871 ( (  self1430 ) , (  from_dash_integral285 ( 10 ) ) ) );
        digits1431 = (  op_dash_add256 ( (  digits1431 ) , (  from_dash_integral44 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_854   int_dash_iter890 (    int64_t  int1434 ) {
    if ( (  cmp891 ( (  int1434 ) , (  from_dash_integral285 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_854) { .f_int = (  op_dash_neg892 ( (  int1434 ) ) ) , .f_len = ( (  count_dash_digits893 ) ( (  op_dash_neg892 ( (  int1434 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_854) { .f_int = (  int1434 ) , .f_len = ( (  count_dash_digits893 ) ( (  int1434 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_854   chars889 (    int64_t  self1461 ) {
    return ( (  int_dash_iter890 ) ( (  self1461 ) ) );
}

static  struct StrConcatIter_853   into_dash_iter888 (    struct StrConcat_846  dref1498 ) {
    return ( (struct StrConcatIter_853) { .f_left = ( (  chars590 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars889 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_853   chars887 (    struct StrConcat_846  self1509 ) {
    return ( (  into_dash_iter888 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_852   into_dash_iter886 (    struct StrConcat_849  dref1498 ) {
    return ( (struct StrConcatIter_852) { .f_left = ( (  chars590 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars887 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_852   chars885 (    struct StrConcat_849  self1509 ) {
    return ( (  into_dash_iter886 ) ( (  self1509 ) ) );
}

static  enum EmptyIter_856   into_dash_iter899 (    enum EmptyIter_856  self790 ) {
    return (  self790 );
}

static  struct AppendIter_855   append898 (    enum EmptyIter_856  it1006 ,    struct Char_53  e1008 ) {
    return ( (struct AppendIter_855) { .f_it = ( (  into_dash_iter899 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_855   cons897 (    enum EmptyIter_856  it1011 ,    struct Char_53  e1013 ) {
    return ( (  append898 ) ( (  it1011 ) ,  (  e1013 ) ) );
}

static  enum EmptyIter_856   nil900 (  ) {
    return ( EmptyIter_856_EmptyIter );
}

static  struct AppendIter_855   single896 (    struct Char_53  e1016 ) {
    return ( (  cons897 ) ( ( (  nil900 ) ( ) ) ,  (  e1016 ) ) );
}

static  struct AppendIter_855   chars895 (    struct Char_53  self1407 ) {
    return ( (  single896 ) ( (  self1407 ) ) );
}

static  struct StrConcatIter_851   into_dash_iter884 (    struct StrConcat_848  dref1498 ) {
    return ( (struct StrConcatIter_851) { .f_left = ( (  chars885 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars895 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_851   chars883 (    struct StrConcat_848  self1509 ) {
    return ( (  into_dash_iter884 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print847 (    struct StrConcat_848  s1701 ) {
    ( (  for_dash_each850 ) ( ( (  chars883 ) ( (  s1701 ) ) ) ,  (  printf_dash_char186 ) ) );
    return ( Unit_7_Unit );
}

static  enum MouseButton_706   undefined901 (  ) {
    enum MouseButton_706  temp902;
    return (  temp902 );
}

static  enum MouseButton_706   panic_prime_845 (    struct StrConcat_846  errmsg1715 ) {
    ( (  print847 ) ( ( ( StrConcat_848_StrConcat ) ( ( ( StrConcat_849_StrConcat ) ( ( (  from_dash_string202 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1715 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( (  undefined901 ) ( ) );
}

static  enum MouseButton_706   btn_dash_to_dash_mouse_dash_button843 (    int64_t  btn3337 ) {
    return ( {  int32_t  dref3338 = ( (  i64_dash_i32844 ) ( (  btn3337 ) ) ) ;  dref3338 == 0 ? ( MouseButton_706_MouseLeft ) :  dref3338 == 1 ? ( MouseButton_706_MouseMiddle ) :  dref3338 == 2 ? ( MouseButton_706_MouseRight ) :  dref3338 == 64 ? ( MouseButton_706_ScrollUp ) :  dref3338 == 65 ? ( MouseButton_706_ScrollDown ) : ( (  panic_prime_845 ) ( ( ( StrConcat_846_StrConcat ) ( ( (  from_dash_string202 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3337 ) ) ) ) ) ; } );
}

static  struct Scanner_789   mk904 (    struct StrView_21  s3166 ) {
    return ( (struct Scanner_789) { .f_s = ( (  into_dash_iter591 ) ( (  s3166 ) ) ) } );
}

static  struct Maybe_703   parse_dash_csi783 (    struct Slice_784  seq3344 ) {
    if ( (  eq221 ( ( (  seq3344 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_703) { .tag = Maybe_703_None_t } );
    }
    char  last3345 = (  elem_dash_get785 ( (  seq3344 ) , (  op_dash_sub286 ( ( (  seq3344 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq768 ( (  elem_dash_get785 ( (  seq3344 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike769 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq768 ( (  last3345 ) , ( (  from_dash_charlike769 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq768 ( (  last3345 ) , ( (  from_dash_charlike769 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_789  temp790 = ( (  mk_dash_from_dash_str791 ) ( ( (  substr792 ) ( ( (  from_dash_ascii_dash_slice799 ) ( (  seq3344 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3344 ) .f_count ) ) ) ) );
        struct Scanner_789 *  sc3346 = ( &temp790 );
        struct Maybe_802  dref3347 = ( (  scan_dash_int803 ) ( (  sc3346 ) ) );
        if ( dref3347.tag == Maybe_802_None_t ) {
            return ( (struct Maybe_703) { .tag = Maybe_703_None_t } );
        }
        else {
            if ( dref3347.tag == Maybe_802_Just_t ) {
                ( (  next812 ) ( (  sc3346 ) ) );
                struct Maybe_802  dref3349 = ( (  scan_dash_int803 ) ( (  sc3346 ) ) );
                if ( dref3349.tag == Maybe_802_None_t ) {
                    return ( (struct Maybe_703) { .tag = Maybe_703_None_t } );
                }
                else {
                    if ( dref3349.tag == Maybe_802_Just_t ) {
                        ( (  next812 ) ( (  sc3346 ) ) );
                        struct Maybe_802  dref3351 = ( (  scan_dash_int803 ) ( (  sc3346 ) ) );
                        if ( dref3351.tag == Maybe_802_None_t ) {
                            return ( (struct Maybe_703) { .tag = Maybe_703_None_t } );
                        }
                        else {
                            if ( dref3351.tag == Maybe_802_Just_t ) {
                                return ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Mouse ) ( ( (struct MouseEvent_705) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button843 ) ( ( dref3347 .stuff .Maybe_802_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub794 ( ( (  i64_dash_i32844 ) ( ( dref3349 .stuff .Maybe_802_Just_s .field0 ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) , .f_y = (  op_dash_sub794 ( ( (  i64_dash_i32844 ) ( ( dref3351 .stuff .Maybe_802_Just_s .field0 ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) , .f_pressed = (  eq768 ( (  last3345 ) , ( (  from_dash_charlike769 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq221 ( ( (  seq3344 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq768 ( (  last3345 ) , ( (  from_dash_charlike769 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_Up_t } ) ) ) ) );
        }
        if ( (  eq768 ( (  last3345 ) , ( (  from_dash_charlike769 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_Down_t } ) ) ) ) );
        }
        if ( (  eq768 ( (  last3345 ) , ( (  from_dash_charlike769 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_Right_t } ) ) ) ) );
        }
        if ( (  eq768 ( (  last3345 ) , ( (  from_dash_charlike769 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_Left_t } ) ) ) ) );
        }
        if ( (  eq768 ( (  last3345 ) , ( (  from_dash_charlike769 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_Home_t } ) ) ) ) );
        }
        if ( (  eq768 ( (  last3345 ) , ( (  from_dash_charlike769 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_703) { .tag = Maybe_703_None_t } );
    }
    if ( (  eq768 ( (  last3345 ) , ( (  from_dash_charlike769 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_789  temp903 = ( (  mk904 ) ( ( (  from_dash_ascii_dash_slice799 ) ( (  seq3344 ) ) ) ) );
        struct Scanner_789 *  sc3353 = ( &temp903 );
        struct Maybe_802  dref3354 = ( (  scan_dash_int803 ) ( (  sc3353 ) ) );
        if ( dref3354.tag == Maybe_802_None_t ) {
            return ( (struct Maybe_703) { .tag = Maybe_703_None_t } );
        }
        else {
            if ( dref3354.tag == Maybe_802_Just_t ) {
                return ( {  int32_t  dref3356 = ( (  i64_dash_i32844 ) ( ( dref3354 .stuff .Maybe_802_Just_s .field0 ) ) ) ;  dref3356 == 1 ? ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_Home_t } ) ) ) ) ) :  dref3356 == 2 ? ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_Insert_t } ) ) ) ) ) :  dref3356 == 3 ? ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_Delete_t } ) ) ) ) ) :  dref3356 == 4 ? ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_End_t } ) ) ) ) ) :  dref3356 == 5 ? ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_PageUp_t } ) ) ) ) ) :  dref3356 == 6 ? ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_PageDown_t } ) ) ) ) ) :  dref3356 == 15 ? ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_F5_t } ) ) ) ) ) :  dref3356 == 17 ? ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_F6_t } ) ) ) ) ) :  dref3356 == 18 ? ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_F7_t } ) ) ) ) ) :  dref3356 == 19 ? ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_F8_t } ) ) ) ) ) :  dref3356 == 20 ? ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_F9_t } ) ) ) ) ) :  dref3356 == 21 ? ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_F10_t } ) ) ) ) ) :  dref3356 == 23 ? ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_F11_t } ) ) ) ) ) :  dref3356 == 24 ? ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_F12_t } ) ) ) ) ) : ( (struct Maybe_703) { .tag = Maybe_703_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_703) { .tag = Maybe_703_None_t } );
}

static  struct Slice_784   subslice905 (    struct Slice_784  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    char *  begin_dash_ptr1787 = ( (  offset_dash_ptr781 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp166 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp166 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_784) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub286 ( ( (  min313 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_784) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  char *   cast907 (    struct Array_771 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_784   as_dash_slice906 (    struct Array_771 *  arr2272 ) {
    return ( (struct Slice_784) { .f_ptr = ( (  cast907 ) ( (  arr2272 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_909 {
    enum {
        Maybe_909_None_t,
        Maybe_909_Just_t,
    } tag;
    union {
        struct {
            struct Key_140  field0;
        } Maybe_909_Just_s;
    } stuff;
};

static struct Maybe_909 Maybe_909_Just (  struct Key_140  field0 ) {
    return ( struct Maybe_909 ) { .tag = Maybe_909_Just_t, .stuff = { .Maybe_909_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_909   parse_dash_ss3910 (    char  c3341 ) {
    if ( (  eq768 ( (  c3341 ) , ( (  from_dash_charlike769 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_909_Just ) ( ( (struct Key_140) { .tag = Key_140_Up_t } ) ) );
    }
    if ( (  eq768 ( (  c3341 ) , ( (  from_dash_charlike769 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_909_Just ) ( ( (struct Key_140) { .tag = Key_140_Down_t } ) ) );
    }
    if ( (  eq768 ( (  c3341 ) , ( (  from_dash_charlike769 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_909_Just ) ( ( (struct Key_140) { .tag = Key_140_Right_t } ) ) );
    }
    if ( (  eq768 ( (  c3341 ) , ( (  from_dash_charlike769 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_909_Just ) ( ( (struct Key_140) { .tag = Key_140_Left_t } ) ) );
    }
    if ( (  eq768 ( (  c3341 ) , ( (  from_dash_charlike769 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_909_Just ) ( ( (struct Key_140) { .tag = Key_140_Home_t } ) ) );
    }
    if ( (  eq768 ( (  c3341 ) , ( (  from_dash_charlike769 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_909_Just ) ( ( (struct Key_140) { .tag = Key_140_End_t } ) ) );
    }
    if ( (  eq768 ( (  c3341 ) , ( (  from_dash_charlike769 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_909_Just ) ( ( (struct Key_140) { .tag = Key_140_F1_t } ) ) );
    }
    if ( (  eq768 ( (  c3341 ) , ( (  from_dash_charlike769 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_909_Just ) ( ( (struct Key_140) { .tag = Key_140_F2_t } ) ) );
    }
    if ( (  eq768 ( (  c3341 ) , ( (  from_dash_charlike769 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_909_Just ) ( ( (struct Key_140) { .tag = Key_140_F3_t } ) ) );
    }
    if ( (  eq768 ( (  c3341 ) , ( (  from_dash_charlike769 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_909_Just ) ( ( (struct Key_140) { .tag = Key_140_F4_t } ) ) );
    }
    return ( (struct Maybe_909) { .tag = Maybe_909_None_t } );
}

static  struct Maybe_703   read_dash_key715 (  ) {
    char  temp716 = ( (  undefined717 ) ( ) );
    char *  ch3358 = ( &temp716 );
    struct Maybe_719  dref3359 = ( (  read_dash_byte720 ) ( (  from_dash_integral44 ( 0 ) ) ) );
    if ( dref3359.tag == Maybe_719_None_t ) {
        return ( (struct Maybe_703) { .tag = Maybe_703_None_t } );
    }
    else {
        if ( dref3359.tag == Maybe_719_Just_t ) {
            (*  ch3358 ) = ( dref3359 .stuff .Maybe_719_Just_s .field0 );
        }
    }
    if ( (  eq190 ( ( (  ascii_dash_u8727 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral194 ( 13 ) ) ) ) ) {
        return ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_Enter_t } ) ) ) ) );
    }
    if ( (  eq190 ( ( (  ascii_dash_u8727 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral194 ( 127 ) ) ) ) ) {
        return ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp207 ( ( (  ascii_dash_u8727 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral194 ( 27 ) ) ) == 0 ) && ( !  eq190 ( ( (  ascii_dash_u8727 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral194 ( 9 ) ) ) ) ) ) {
        char  letter3361 = ( (  u8_dash_ascii728 ) ( ( (  u32_dash_u8200 ) ( ( (  u32_dash_or539 ) ( ( (  u8_dash_u32729 ) ( ( (  ascii_dash_u8727 ) ( ( * (  ch3358 ) ) ) ) ) ) ,  ( (  from_dash_hex733 ) ( ( (  from_dash_string202 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( ( Key_140_Ctrl ) ( (  letter3361 ) ) ) ) ) ) );
    }
    if ( ( !  eq190 ( ( (  ascii_dash_u8727 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral194 ( 27 ) ) ) ) ) {
        if ( (  cmp207 ( ( (  ascii_dash_u8727 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral194 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key715 ) ( ) );
        } else {
            return ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( ( Key_140_Char ) ( ( * (  ch3358 ) ) ) ) ) ) ) );
        }
    }
    char  temp767 = ( (  undefined717 ) ( ) );
    char *  ch23362 = ( &temp767 );
    struct Maybe_719  dref3363 = ( (  read_dash_byte720 ) ( (  from_dash_integral44 ( 50 ) ) ) );
    if ( dref3363.tag == Maybe_719_None_t ) {
        return ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3363.tag == Maybe_719_Just_t ) {
            (*  ch23362 ) = ( dref3363 .stuff .Maybe_719_Just_s .field0 );
        }
    }
    if ( (  eq768 ( ( * (  ch23362 ) ) , ( (  from_dash_charlike769 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_771  temp772 = ( ( (  zeroed773 ) ( ) ) );
        struct Array_771 *  seq3365 = ( &temp772 );
        int32_t  slen3366 = (  from_dash_integral44 ( 0 ) );
        while ( (  cmp299 ( (  slen3366 ) , (  from_dash_integral44 ( 31 ) ) ) == 0 ) ) {
            char  temp777 = ( (  undefined717 ) ( ) );
            char *  sc3367 = ( &temp777 );
            struct Maybe_719  dref3368 = ( (  read_dash_byte720 ) ( (  from_dash_integral44 ( 50 ) ) ) );
            if ( dref3368.tag == Maybe_719_None_t ) {
                break;
            }
            else {
                if ( dref3368.tag == Maybe_719_Just_t ) {
                    (*  sc3367 ) = ( dref3368 .stuff .Maybe_719_Just_s .field0 );
                }
            }
            ( (  set778 ) ( (  seq3365 ) ,  ( (  i32_dash_size244 ) ( (  slen3366 ) ) ) ,  ( * (  sc3367 ) ) ) );
            slen3366 = (  op_dash_add256 ( (  slen3366 ) , (  from_dash_integral44 ( 1 ) ) ) );
            if ( ( (  cmp207 ( ( (  ascii_dash_u8727 ) ( ( * (  sc3367 ) ) ) ) , (  from_dash_integral194 ( 64 ) ) ) != 0 ) && (  cmp207 ( ( (  ascii_dash_u8727 ) ( ( * (  sc3367 ) ) ) ) , (  from_dash_integral194 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi783 ) ( ( (  subslice905 ) ( ( (  as_dash_slice906 ) ( (  seq3365 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size244 ) ( (  slen3366 ) ) ) ) ) ) );
    }
    if ( (  eq768 ( ( * (  ch23362 ) ) , ( (  from_dash_charlike769 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp908 = ( (  undefined717 ) ( ) );
        char *  sc3370 = ( &temp908 );
        struct Maybe_719  dref3371 = ( (  read_dash_byte720 ) ( (  from_dash_integral44 ( 50 ) ) ) );
        if ( dref3371.tag == Maybe_719_None_t ) {
            return ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3371.tag == Maybe_719_Just_t ) {
                (*  sc3370 ) = ( dref3371 .stuff .Maybe_719_Just_s .field0 );
            }
        }
        struct Maybe_909  dref3373 = ( (  parse_dash_ss3910 ) ( ( * (  sc3370 ) ) ) );
        if ( dref3373.tag == Maybe_909_None_t ) {
            return ( (struct Maybe_703) { .tag = Maybe_703_None_t } );
        }
        else {
            if ( dref3373.tag == Maybe_909_Just_t ) {
                return ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( dref3373 .stuff .Maybe_909_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_703_Just ) ( ( ( InputEvent_704_Key ) ( ( (struct Key_140) { .tag = Key_140_Escape_t } ) ) ) ) );
}

static  struct Maybe_703   read_dash_event712 (   struct env65* env ,    struct Tui_67 *  tui3383 ) {
    struct envunion66  temp713 = ( (struct envunion66){ .fun = (  bool  (*) (  struct env64*  ,    struct Tui_67 *  ) )update_dash_dimensions714 , .env =  env->envinst64 } );
    ( temp713.fun ( &temp713.env ,  (  tui3383 ) ) );
    struct Maybe_703  dref3384 = ( (  read_dash_key715 ) ( ) );
    if ( dref3384.tag == Maybe_703_None_t ) {
        return ( (struct Maybe_703) { .tag = Maybe_703_None_t } );
    }
    else {
        if ( dref3384.tag == Maybe_703_Just_t ) {
            (*  tui3383 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_703_Just ) ( ( dref3384 .stuff .Maybe_703_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_703   lam710 (   struct env701* env ) {
    struct envunion702  temp711 = ( (struct envunion702){ .fun = (  struct Maybe_703  (*) (  struct env65*  ,    struct Tui_67 *  ) )read_dash_event712 , .env =  env->envinst65 } );
    return ( temp711.fun ( &temp711.env ,  ( env->tui4125 ) ) );
}

static  struct Maybe_703   next912 (    struct FunIter_700 *  self1031 ) {
    if ( ( ( * (  self1031 ) ) .f_finished ) ) {
        return ( (struct Maybe_703) { .tag = Maybe_703_None_t } );
    }
    struct envunion707  temp913 = ( ( * (  self1031 ) ) .f_fun );
    struct Maybe_703  dref1032 = ( temp913.fun ( &temp913.env ) );
    if ( dref1032.tag == Maybe_703_Just_t ) {
        return ( ( Maybe_703_Just ) ( ( dref1032 .stuff .Maybe_703_Just_s .field0 ) ) );
    }
    else {
        if ( dref1032.tag == Maybe_703_None_t ) {
            (*  self1031 ) .f_finished = ( true );
            return ( (struct Maybe_703) { .tag = Maybe_703_None_t } );
        }
    }
}

struct env916 {
    struct Editor_121 *  ed4059;
    ;
};

struct envunion917 {
    enum Unit_7  (*fun) (  struct env916*  ,    struct StrView_21  );
    struct env916 env;
};

static  enum Unit_7   if_dash_just915 (    struct Maybe_125  x1291 ,   struct envunion917  fun1293 ) {
    struct Maybe_125  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_125_Just_t ) {
        struct envunion917  temp918 = (  fun1293 );
        ( temp918.fun ( &temp918.env ,  ( dref1294 .stuff .Maybe_125_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_125_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   free920 (    struct StrView_21  s2167 ,    enum CAllocator_9  al2169 ) {
    ( (  free354 ) ( (  al2169 ) ,  ( (struct Slice_12) { .f_ptr = ( ( (  s2167 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam919 (   struct env916* env ,    struct StrView_21  msg4061 ) {
    ( (  free920 ) ( (  msg4061 ) ,  ( ( * ( env->ed4059 ) ) .f_al ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   reset_dash_msg914 (    struct Editor_121 *  ed4059 ) {
    struct env916 envinst916 = {
        .ed4059 =  ed4059 ,
    };
    ( (  if_dash_just915 ) ( ( ( * (  ed4059 ) ) .f_msg ) ,  ( (struct envunion917){ .fun = (  enum Unit_7  (*) (  struct env916*  ,    struct StrView_21  ) )lam919 , .env =  envinst916 } ) ) );
    (*  ed4059 ) .f_msg = ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    return ( Unit_7_Unit );
}

struct envunion922 {
    enum Unit_7  (*fun) (  struct env134*  ,    struct Editor_121 *  ,    struct Key_140  );
    struct env134 env;
};

enum CursorMovement_928 {
    CursorMovement_928_NoChanges,
    CursorMovement_928_UpdateVI,
    CursorMovement_928_OverrideSelect,
};

struct Tuple2_930 {
    enum CursorMovement_928  field0;
    enum CursorMovement_928  field1;
};

static struct Tuple2_930 Tuple2_930_Tuple2 (  enum CursorMovement_928  field0 ,  enum CursorMovement_928  field1 ) {
    return ( struct Tuple2_930 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq929 (    enum CursorMovement_928  l3922 ,    enum CursorMovement_928  r3924 ) {
    return ( {  struct Tuple2_930  dref3925 = ( ( Tuple2_930_Tuple2 ) ( (  l3922 ) ,  (  r3924 ) ) ) ;  dref3925 .field0 == CursorMovement_928_NoChanges &&  dref3925 .field1 == CursorMovement_928_NoChanges ? ( true ) :  dref3925 .field0 == CursorMovement_928_UpdateVI &&  dref3925 .field1 == CursorMovement_928_UpdateVI ? ( true ) :  dref3925 .field0 == CursorMovement_928_OverrideSelect &&  dref3925 .field1 == CursorMovement_928_OverrideSelect ? ( true ) : ( false ) ; } );
}

static  struct StrView_21   from_dash_bytes934 (    struct Slice_12  sl2152 ) {
    return ( (struct StrView_21) { .f_contents = (  sl2152 ) } );
}

static  struct StrView_21   line933 (    struct TextBuf_81 *  self3622 ,    int32_t  li3624 ) {
    return ( (  from_dash_bytes934 ) ( ( (  to_dash_slice314 ) ( ( (  get307 ) ( ( & ( ( * (  self3622 ) ) .f_buf ) ) ,  ( (  i32_dash_size244 ) ( (  li3624 ) ) ) ) ) ) ) ) );
}

static  int32_t   maybe937 (    struct Maybe_125  x1282 ,    int32_t (*  fun1284 )(    struct StrView_21  ) ,    int32_t  default1286 ) {
    return ( {  struct Maybe_125  dref1287 = (  x1282 ) ; dref1287.tag == Maybe_125_Just_t ? ( (  fun1284 ) ( ( dref1287 .stuff .Maybe_125_Just_s .field0 ) ) ) : (  default1286 ) ; } );
}

static  struct Maybe_125   char_dash_replacement938 (    struct Char_53  c3816 ) {
    if ( (  eq385 ( (  c3816 ) , ( (  from_dash_charlike203 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_125_Just ) ( ( (  from_dash_string202 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
}

static  size_t   reduce941 (    struct StrViewIter_585  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_53  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct StrViewIter_585  it1099 = ( (  into_dash_iter587 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_588  dref1100 = ( (  next589 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_588_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_588_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_588_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp942 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp942);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp943;
    return (  temp943 );
}

static  size_t   lam944 (    struct Char_53  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add214 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count940 (    struct StrViewIter_585  it1104 ) {
    return ( (  reduce941 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam944 ) ) );
}

static  int32_t   lam939 (    struct StrView_21  s3821 ) {
    return ( (  size_dash_i32178 ) ( ( (  count940 ) ( ( (  chars590 ) ( (  s3821 ) ) ) ) ) ) );
}

static  int32_t   max946 (    int32_t  l1315 ,    int32_t  r1317 ) {
    if ( (  cmp299 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  void *   cast_dash_ptr952 (    wchar_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of953 (    wchar_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  wchar_t   zeroed950 (  ) {
    wchar_t  temp951;
    wchar_t  x570 = (  temp951 );
    ( ( memset ) ( ( (  cast_dash_ptr952 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of953 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr954 (    uint8_t *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  size_t   cast955 (    int64_t  x356 ) {
    return ( (size_t ) (  x356 ) );
}

struct TypeSize_958 {
    size_t  f_size;
};

static  struct TypeSize_958   get_dash_typesize957 (  ) {
    wchar_t  temp959;
    return ( (struct TypeSize_958) { .f_size = ( sizeof( ( (  temp959 ) ) ) ) } );
}

static  wchar_t   cast961 (    uint32_t  x356 ) {
    return ( (wchar_t ) (  x356 ) );
}

static  wchar_t   to_dash_c_dash_wchar948 (    struct Char_53  c750 ) {
    struct CharDestructured_187  dref751 = ( (  destructure189 ) ( (  c750 ) ) );
    if ( dref751.tag == CharDestructured_187_Ref_t ) {
        wchar_t  temp949 = ( (  zeroed950 ) ( ) );
        wchar_t *  wcp753 = ( &temp949 );
        size_t  num_dash_chars754 = ( ( mbstowcs ) ( (  wcp753 ) ,  ( (  cast_dash_ptr954 ) ( ( ( dref751 .stuff .CharDestructured_187_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq221 ( (  num_dash_chars754 ) , ( ( (  cast955 ) ( ( (  op_dash_neg892 ( (  from_dash_integral285 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp956 = ( (  from_dash_string45 ) ( ( "could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp956);
            exit ( 1 );
            ( Unit_7_Unit );
        }
        return ( * (  wcp753 ) );
    }
    else {
        if ( dref751.tag == CharDestructured_187_Scalar_t ) {
            if ( ( ! (  eq221 ( ( (  size_dash_of627 ) ( ( ( dref751 .stuff .CharDestructured_187_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize957 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp960 = ( (  from_dash_string45 ) ( ( "Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp960);
                exit ( 1 );
                ( Unit_7_Unit );
            }
            return ( (  cast961 ) ( ( ( dref751 .stuff .CharDestructured_187_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth947 (    struct Char_53  c2572 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar948 ) ( (  c2572 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth945 (    struct Char_53  c3428 ) {
    return ( (  max946 ) ( ( (  wcwidth947 ) ( (  c3428 ) ) ) ,  (  from_dash_integral44 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width936 (    struct Char_53  c3819 ) {
    return ( (  maybe937 ) ( ( (  char_dash_replacement938 ) ( (  c3819 ) ) ) ,  (  lam939 ) ,  ( (  rendered_dash_wcwidth945 ) ( (  c3819 ) ) ) ) );
}

static  int32_t   pos_dash_vi931 (    struct TextBuf_81 *  self3835 ,    struct Pos_20  pos3837 ) {
    int32_t  bi3838 = ( (  from_dash_integral44 ( 0 ) ) );
    int32_t  vi3839 = (  from_dash_integral44 ( 0 ) );
    struct StrViewIter_585  temp932 =  into_dash_iter587 ( ( (  chars590 ) ( ( (  line933 ) ( (  self3835 ) ,  ( (  pos3837 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_588  __cond935 =  next589 (&temp932);
        if (  __cond935 .tag == 0 ) {
            break;
        }
        struct Char_53  c3841 =  __cond935 .stuff .Maybe_588_Just_s .field0;
        bi3838 = (  op_dash_add256 ( (  bi3838 ) , ( (  size_dash_i32178 ) ( ( (  c3841 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp299 ( ( (  pos3837 ) .f_bi ) , (  bi3838 ) ) == 0 ) ) {
            break;
        }
        vi3839 = (  op_dash_add256 ( (  vi3839 ) , ( (  char_dash_screen_dash_width936 ) ( (  c3841 ) ) ) ) );
    }
    return (  vi3839 );
}

struct Tuple2_964 {
    enum Mode_123  field0;
    enum Mode_123  field1;
};

static struct Tuple2_964 Tuple2_964_Tuple2 (  enum Mode_123  field0 ,  enum Mode_123  field1 ) {
    return ( struct Tuple2_964 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq963 (    enum Mode_123  l3799 ,    enum Mode_123  r3801 ) {
    return ( {  struct Tuple2_964  dref3802 = ( ( Tuple2_964_Tuple2 ) ( (  l3799 ) ,  (  r3801 ) ) ) ;  dref3802 .field0 == Mode_123_Normal &&  dref3802 .field1 == Mode_123_Normal ? ( true ) :  dref3802 .field0 == Mode_123_Insert &&  dref3802 .field1 == Mode_123_Insert ? ( true ) :  dref3802 .field0 == Mode_123_Select &&  dref3802 .field1 == Mode_123_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_7   set_dash_sel962 (    struct Pane_122 *  self3911 ,    struct Maybe_28  sel3913 ) {
    if ( ( !  eq963 ( ( ( * (  self3911 ) ) .f_mode ) , ( Mode_123_Select ) ) ) ) {
        (*  self3911 ) .f_sel = (  sel3913 );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_cursors927 (    struct Pane_122 *  self3928 ,    struct Pos_20  cur3930 ,    struct Maybe_28  sel3932 ,    enum CursorMovement_928  cursor_dash_movement_dash_type3934 ) {
    if ( ( ( !  eq929 ( (  cursor_dash_movement_dash_type3934 ) , ( CursorMovement_928_NoChanges ) ) ) && ( !  eq302 ( ( (  cur3930 ) .f_bi ) , ( ( ( * (  self3928 ) ) .f_cursor ) .f_bi ) ) ) ) ) {
        (*  self3928 ) .f_vi = ( (  pos_dash_vi931 ) ( ( ( * (  self3928 ) ) .f_buf ) ,  (  cur3930 ) ) );
    }
    (*  self3928 ) .f_cursor = (  cur3930 );
    if ( ( !  eq929 ( (  cursor_dash_movement_dash_type3934 ) , ( CursorMovement_928_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel962 ) ( (  self3928 ) ,  (  sel3932 ) ) );
    } else {
        (*  self3928 ) .f_sel = (  sel3932 );
    }
    return ( Unit_7_Unit );
}

static  size_t   num_dash_bytes966 (    struct StrView_21  self2195 ) {
    return ( ( (  self2195 ) .f_contents ) .f_count );
}

static  size_t   clamp967 (    size_t  x1352 ,    size_t  mn1354 ,    size_t  mx1356 ) {
    if ( (  cmp166 ( (  x1352 ) , (  mn1354 ) ) == 0 ) ) {
        return (  mn1354 );
    } else {
        if ( (  cmp166 ( (  x1352 ) , (  mx1356 ) ) == 2 ) ) {
            return (  mx1356 );
        } else {
            return (  x1352 );
        }
    }
}

static  size_t   sync_dash_char969 (    uint8_t *  p692 ) {
    size_t  i693 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb694 = ( * ( (uint8_t * ) ( ( (void*) (  p692 ) ) + (  op_dash_neg892 ( ( (  size_dash_i64243 ) ( (  i693 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp207 ( (  pb694 ) , (  from_dash_integral194 ( 128 ) ) ) != 0 ) && (  cmp207 ( (  pb694 ) , (  op_dash_add764 ( (  from_dash_integral194 ( 128 ) ) , (  from_dash_integral194 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i693 );
        }
        i693 = (  op_dash_add214 ( (  i693 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char968 (    uint8_t *  p697 ) {
    return (  op_dash_add214 ( ( (  sync_dash_char969 ) ( ( (  offset_dash_ptr311 ) ( (  p697 ) ,  (  op_dash_neg892 ( (  from_dash_integral285 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_20   left_dash_pos965 (    struct TextBuf_81 *  self3643 ,    struct Pos_20  pos3645 ) {
    if ( (  eq301 ( (  pos3645 ) , ( (  mk280 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  from_dash_integral44 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk280 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  from_dash_integral44 ( 0 ) ) ) );
    }
    if ( (  eq302 ( ( (  pos3645 ) .f_bi ) , (  from_dash_integral44 ( 0 ) ) ) ) ) {
        ( (  assert459 ) ( (  cmp299 ( ( (  pos3645 ) .f_line ) , (  from_dash_integral44 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string202 ) ( ( "previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk280 ) ( (  op_dash_sub794 ( ( (  pos3645 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) ,  ( (  size_dash_i32178 ) ( ( (  num_dash_bytes966 ) ( ( (  line933 ) ( (  self3643 ) ,  (  op_dash_sub794 ( ( (  pos3645 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_21  line3646 = ( (  line933 ) ( (  self3643 ) ,  ( (  pos3645 ) .f_line ) ) );
    size_t  pos_dash_bi3647 = ( (  clamp967 ) ( ( (  i32_dash_size244 ) ( ( (  pos3645 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes966 ) ( (  line3646 ) ) ) ) );
    size_t  off3648 = ( (  previous_dash_char968 ) ( ( (  offset_dash_ptr311 ) ( ( ( (  line3646 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  pos_dash_bi3647 ) ) ) ) ) ) );
    return ( (  mk280 ) ( ( (  pos3645 ) .f_line ) ,  ( (  size_dash_i32178 ) ( (  op_dash_sub286 ( (  pos_dash_bi3647 ) , (  off3648 ) ) ) ) ) ) );
}

static  enum Unit_7   move_dash_left926 (    struct Pane_122 *  self3940 ) {
    ( (  set_dash_cursors927 ) ( (  self3940 ) ,  ( (  left_dash_pos965 ) ( ( ( * (  self3940 ) ) .f_buf ) ,  ( ( * (  self3940 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_928_UpdateVI ) ) );
    return ( Unit_7_Unit );
}

static  struct Pane_122 *   pane970 (    struct Editor_121 *  ed4049 ) {
    return ( & ( ( * (  ed4049 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines973 (    struct TextBuf_81 *  self3627 ) {
    return ( (  size_dash_i32178 ) ( ( (  size303 ) ( ( & ( ( * (  self3627 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_20   right_dash_pos972 (    struct TextBuf_81 *  self3635 ,    struct Pos_20  pos3637 ) {
    if ( (  cmp299 ( ( (  pos3637 ) .f_line ) , ( (  num_dash_lines973 ) ( (  self3635 ) ) ) ) != 0 ) ) {
        return ( (  mk280 ) ( ( (  num_dash_lines973 ) ( (  self3635 ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ) );
    }
    struct StrView_21  line3638 = ( (  line933 ) ( (  self3635 ) ,  ( (  pos3637 ) .f_line ) ) );
    int64_t  bi3639 = ( (  i32_dash_i64842 ) ( ( (  pos3637 ) .f_bi ) ) );
    if ( (  cmp891 ( (  bi3639 ) , ( (  size_dash_i64243 ) ( ( (  num_dash_bytes966 ) ( (  line3638 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp299 ( (  op_dash_add256 ( ( (  pos3637 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) , ( (  num_dash_lines973 ) ( (  self3635 ) ) ) ) != 0 ) ) {
            return ( (  mk280 ) ( ( (  pos3637 ) .f_line ) ,  ( (  size_dash_i32178 ) ( ( (  num_dash_bytes966 ) ( (  line3638 ) ) ) ) ) ) );
        }
        return ( (  mk280 ) ( (  op_dash_add256 ( ( (  pos3637 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ) );
    }
    int32_t  off3640 = ( (  size_dash_i32178 ) ( ( (  next_dash_char206 ) ( ( (  offset_dash_ptr311 ) ( ( ( (  line3638 ) .f_contents ) .f_ptr ) ,  (  bi3639 ) ) ) ) ) ) );
    return ( (  mk280 ) ( ( (  pos3637 ) .f_line ) ,  (  op_dash_add256 ( ( (  pos3637 ) .f_bi ) , (  off3640 ) ) ) ) );
}

static  enum Unit_7   move_dash_right971 (    struct Pane_122 *  self3937 ) {
    ( (  set_dash_cursors927 ) ( (  self3937 ) ,  ( (  right_dash_pos972 ) ( ( ( * (  self3937 ) ) .f_buf ) ,  ( ( * (  self3937 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_928_UpdateVI ) ) );
    return ( Unit_7_Unit );
}

static  int32_t   vi_dash_bi975 (    struct TextBuf_81 *  self3824 ,    int32_t  ln3826 ,    int32_t  vx3828 ) {
    int32_t  bi3829 = ( (  from_dash_integral44 ( 0 ) ) );
    int32_t  vi3830 = (  from_dash_integral44 ( 0 ) );
    struct StrViewIter_585  temp976 =  into_dash_iter587 ( ( (  chars590 ) ( ( (  line933 ) ( (  self3824 ) ,  (  ln3826 ) ) ) ) ) );
    while (true) {
        struct Maybe_588  __cond977 =  next589 (&temp976);
        if (  __cond977 .tag == 0 ) {
            break;
        }
        struct Char_53  c3832 =  __cond977 .stuff .Maybe_588_Just_s .field0;
        vi3830 = (  op_dash_add256 ( (  vi3830 ) , ( (  char_dash_screen_dash_width936 ) ( (  c3832 ) ) ) ) );
        if ( (  cmp299 ( (  vx3828 ) , (  vi3830 ) ) == 0 ) ) {
            break;
        }
        bi3829 = (  op_dash_add256 ( (  bi3829 ) , ( (  size_dash_i32178 ) ( ( (  c3832 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi3829 );
}

static  enum Unit_7   move_dash_down974 (    struct Pane_122 *  self3943 ) {
    struct Pos_20  cur3944 = ( ( * (  self3943 ) ) .f_cursor );
    if ( (  cmp299 ( (  op_dash_add256 ( ( (  cur3944 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) , ( (  num_dash_lines973 ) ( ( ( * (  self3943 ) ) .f_buf ) ) ) ) != 0 ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  vci3945 = ( ( * (  self3943 ) ) .f_vi );
    int32_t  bi3946 = ( (  vi_dash_bi975 ) ( ( ( * (  self3943 ) ) .f_buf ) ,  (  op_dash_add256 ( ( (  cur3944 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) ,  (  vci3945 ) ) );
    ( (  set_dash_cursors927 ) ( (  self3943 ) ,  ( (struct Pos_20) { .f_line = (  op_dash_add256 ( ( (  cur3944 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) , .f_bi = (  bi3946 ) } ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_928_NoChanges ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   move_dash_up978 (    struct Pane_122 *  self3949 ) {
    struct Pos_20  cur3950 = ( ( * (  self3949 ) ) .f_cursor );
    if ( (  cmp299 ( ( (  cur3950 ) .f_line ) , (  from_dash_integral44 ( 0 ) ) ) != 2 ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  vci3951 = ( ( * (  self3949 ) ) .f_vi );
    int32_t  bi3952 = ( (  vi_dash_bi975 ) ( ( ( * (  self3949 ) ) .f_buf ) ,  (  op_dash_sub794 ( ( (  cur3950 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) ,  (  vci3951 ) ) );
    ( (  set_dash_cursors927 ) ( (  self3949 ) ,  ( (struct Pos_20) { .f_line = (  op_dash_sub794 ( ( (  cur3950 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) , .f_bi = (  bi3952 ) } ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_928_NoChanges ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   flush_dash_insert_dash_action980 (    struct TextBuf_81 *  self3708 ) {
    (*  self3708 ) .f_actions .f_input_dash_changeset = ( false );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_mode979 (    struct Pane_122 *  self3916 ,    enum Mode_123  mode3918 ) {
    if ( (  eq963 ( (  mode3918 ) , ( Mode_123_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action980 ) ( ( ( * (  self3916 ) ) .f_buf ) ) );
    }
    (*  self3916 ) .f_mode = (  mode3918 );
    return ( Unit_7_Unit );
}

enum MoveDirection_982 {
    MoveDirection_982_MoveFwd,
    MoveDirection_982_MoveBwd,
};

enum MoveTarget_983 {
    MoveTarget_983_NextWordStart,
    MoveTarget_983_NextWordEnd,
};

static  struct Pos_20   own985 (    struct Pos_20  x1251 ) {
    return (  x1251 );
}

struct env986 {
    enum MoveDirection_982  dir3975;
    struct Pos_20 *  prev3978;
    struct Pane_122 *  pane3973;
    ;
    ;
};

static  bool   is_dash_at_dash_line_dash_end988 (    struct Pane_122 *  pane3955 ,    struct Pos_20  pos3957 ) {
    return (  eq221 ( ( (  i32_dash_size244 ) ( ( (  pos3957 ) .f_bi ) ) ) , ( (  num_dash_bytes966 ) ( ( (  line933 ) ( ( ( * (  pane3955 ) ) .f_buf ) ,  ( (  pos3957 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end987 (    struct Pane_122 *  pane3960 ) {
    return ( (  is_dash_at_dash_line_dash_end988 ) ( (  pane3960 ) ,  ( ( * (  pane3960 ) ) .f_cursor ) ) );
}

struct envunion990 {
    enum Unit_7  (*fun) (  struct env986*  );
    struct env986 env;
};

static  enum Unit_7   advance991 (   struct env986* env ) {
    (* env->prev3978 ) = ( ( * ( env->pane3973 ) ) .f_cursor );
    enum MoveDirection_982  dref3980 = ( env->dir3975 );
    switch (  dref3980 ) {
        case MoveDirection_982_MoveFwd : {
            ( (  move_dash_right971 ) ( ( env->pane3973 ) ) );
            break;
        }
        case MoveDirection_982_MoveBwd : {
            ( (  move_dash_left926 ) ( ( env->pane3973 ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

enum CharType_995 {
    CharType_995_CharSpace,
    CharType_995_CharWord,
    CharType_995_CharPunctuation,
};

struct Tuple2_996 {
    enum CharType_995  field0;
    enum CharType_995  field1;
};

static struct Tuple2_996 Tuple2_996_Tuple2 (  enum CharType_995  field0 ,  enum CharType_995  field1 ) {
    return ( struct Tuple2_996 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq994 (    enum CharType_995  l3780 ,    enum CharType_995  r3782 ) {
    struct Tuple2_996  dref3783 = ( ( Tuple2_996_Tuple2 ) ( (  l3780 ) ,  (  r3782 ) ) );
    if (  dref3783 .field0 == CharType_995_CharSpace &&  dref3783 .field1 == CharType_995_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3783 .field0 == CharType_995_CharWord &&  dref3783 .field1 == CharType_995_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3783 .field0 == CharType_995_CharPunctuation &&  dref3783 .field1 == CharType_995_CharPunctuation ) {
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

static  struct Char_53   min1001 (    struct Char_53  l1236 ,    struct Char_53  r1238 ) {
    if ( (  cmp761 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Char_53   max1002 (    struct Char_53  l1315 ,    struct Char_53  r1317 ) {
    if ( (  cmp761 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  bool   between1000 (    struct Char_53  c1337 ,    struct Char_53  l1339 ,    struct Char_53  r1341 ) {
    struct Char_53  from1342 = ( (  min1001 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Char_53  to1343 = ( (  max1002 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp761 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp761 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_alpha999 (    struct Char_53  c2388 ) {
    return ( ( (  cmp166 ( ( (  c2388 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between1000 ) ( (  c2388 ) ,  ( (  from_dash_charlike203 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1000 ) ( (  c2388 ) ,  ( (  from_dash_charlike203 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_digit1003 (    struct Char_53  c2391 ) {
    return ( (  eq221 ( ( (  c2391 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1000 ) ( (  c2391 ) ,  ( (  from_dash_charlike203 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric998 (    struct Char_53  c2394 ) {
    return ( ( (  is_dash_alpha999 ) ( (  c2394 ) ) ) || ( (  is_dash_digit1003 ) ( (  c2394 ) ) ) );
}

static  bool   is_dash_whitespace1004 (    struct Char_53  c2379 ) {
    return ( ( (  eq385 ( (  c2379 ) , ( (  from_dash_charlike203 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq385 ( (  c2379 ) , ( (  from_dash_charlike203 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq385 ( (  c2379 ) , ( (  from_dash_charlike203 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_995   char_dash_type997 (    struct Char_53  c3786 ) {
    if ( ( ( ( (  is_dash_alphanumeric998 ) ( (  c3786 ) ) ) || (  eq385 ( (  c3786 ) , ( (  from_dash_charlike203 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq385 ( (  c3786 ) , ( (  from_dash_charlike203 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_995_CharWord );
    } else {
        if ( ( (  is_dash_whitespace1004 ) ( (  c3786 ) ) ) ) {
            return ( CharType_995_CharSpace );
        } else {
            return ( CharType_995_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary993 (    struct Char_53  l3789 ,    struct Char_53  r3791 ) {
    return ( !  eq994 ( ( (  char_dash_type997 ) ( (  l3789 ) ) ) , ( (  char_dash_type997 ) ( (  r3791 ) ) ) ) );
}

static  struct Char_53   or_dash_else1006 (    struct Maybe_588  self1732 ,    struct Char_53  alt1734 ) {
    struct Maybe_588  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_588_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_588_Just_t ) {
            return ( dref1735 .stuff .Maybe_588_Just_s .field0 );
        }
    }
}

static  struct Maybe_588   head1007 (    struct StrViewIter_585  it1142 ) {
    struct StrViewIter_585  temp1008 = ( (  into_dash_iter587 ) ( (  it1142 ) ) );
    return ( (  next589 ) ( ( &temp1008 ) ) );
}

static  struct Char_53   char_dash_at1005 (    struct Pane_122 *  pane3844 ,    struct Pos_20  pos3846 ) {
    struct StrView_21  line3847 = ( (  line933 ) ( ( ( * (  pane3844 ) ) .f_buf ) ,  ( (  pos3846 ) .f_line ) ) );
    return ( (  or_dash_else1006 ) ( ( (  head1007 ) ( ( (  chars590 ) ( ( (  byte_dash_substr367 ) ( (  line3847 ) ,  ( (  i32_dash_size244 ) ( ( (  pos3846 ) .f_bi ) ) ) ,  ( (  num_dash_bytes966 ) ( (  line3847 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
}

static  enum Unit_7   print1010 (    struct StrView_21  s1701 ) {
    ( (  for_dash_each584 ) ( ( (  chars590 ) ( (  s1701 ) ) ) ,  (  printf_dash_char186 ) ) );
    return ( Unit_7_Unit );
}

static  bool   undefined1011 (  ) {
    bool  temp1012;
    return (  temp1012 );
}

static  bool   todo1009 (  ) {
    ( (  print1010 ) ( ( (  from_dash_string202 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( (  undefined1011 ) ( ) );
}

static  bool   reached_dash_target992 (    struct Pane_122 *  pane3965 ,    enum MoveTarget_983  target3967 ,    struct Pos_20  prev3969 ) {
    return ( {  enum MoveTarget_983  dref3970 = (  target3967 ) ;  dref3970 == MoveTarget_983_NextWordStart ? ( ( (  is_dash_word_dash_boundary993 ) ( ( (  char_dash_at1005 ) ( (  pane3965 ) ,  (  prev3969 ) ) ) ,  ( (  char_dash_at1005 ) ( (  pane3965 ) ,  ( ( * (  pane3965 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq994 ( ( (  char_dash_type997 ) ( ( (  char_dash_at1005 ) ( (  pane3965 ) ,  ( ( * (  pane3965 ) ) .f_cursor ) ) ) ) ) , ( CharType_995_CharSpace ) ) ) ) ) :  dref3970 == MoveTarget_983_NextWordEnd ? ( ( (  is_dash_word_dash_boundary993 ) ( ( (  char_dash_at1005 ) ( (  pane3965 ) ,  (  prev3969 ) ) ) ,  ( (  char_dash_at1005 ) ( (  pane3965 ) ,  ( ( * (  pane3965 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq994 ( ( (  char_dash_type997 ) ( ( (  char_dash_at1005 ) ( (  pane3965 ) ,  (  prev3969 ) ) ) ) ) , ( CharType_995_CharSpace ) ) ) ) ) : ( (  todo1009 ) ( ) ) ; } );
}

struct envunion1014 {
    enum Unit_7  (*fun) (  struct env986*  );
    struct env986 env;
};

struct envunion1016 {
    enum Unit_7  (*fun) (  struct env986*  );
    struct env986 env;
};

static  enum Unit_7   advance_dash_word981 (    struct Pane_122 *  pane3973 ,    enum MoveDirection_982  dir3975 ,    enum MoveTarget_983  target3977 ) {
    struct Pos_20  temp984 = ( (  own985 ) ( ( ( * (  pane3973 ) ) .f_cursor ) ) );
    struct Pos_20 *  prev3978 = ( &temp984 );
    struct env986 envinst986 = {
        .dir3975 =  dir3975 ,
        .prev3978 =  prev3978 ,
        .pane3973 =  pane3973 ,
    };
    struct Pos_20  sel3981 = ( ( * (  pane3973 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end3982 = ( (  cursor_dash_is_dash_at_dash_line_dash_end987 ) ( (  pane3973 ) ) );
    struct envunion990  temp989 = ( (struct envunion990){ .fun = (  enum Unit_7  (*) (  struct env986*  ) )advance991 , .env =  envinst986 } );
    ( temp989.fun ( &temp989.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end3982 ) || ( (  reached_dash_target992 ) ( (  pane3973 ) ,  (  target3977 ) ,  ( * (  prev3978 ) ) ) ) ) ) {
        sel3981 = ( ( * (  pane3973 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end987 ) ( (  pane3973 ) ) ) ) {
        if ( (  eq301 ( ( ( * (  pane3973 ) ) .f_cursor ) , ( * (  prev3978 ) ) ) ) ) {
            return ( Unit_7_Unit );
        }
        struct envunion1014  temp1013 = ( (struct envunion1014){ .fun = (  enum Unit_7  (*) (  struct env986*  ) )advance991 , .env =  envinst986 } );
        ( temp1013.fun ( &temp1013.env ) );
        sel3981 = ( ( * (  pane3973 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1016  temp1015 = ( (struct envunion1016){ .fun = (  enum Unit_7  (*) (  struct env986*  ) )advance991 , .env =  envinst986 } );
        ( temp1015.fun ( &temp1015.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end987 ) ( (  pane3973 ) ) ) || ( (  reached_dash_target992 ) ( (  pane3973 ) ,  (  target3977 ) ,  ( * (  prev3978 ) ) ) ) ) ) {
            enum MoveDirection_982  dref3983 = (  dir3975 );
            switch (  dref3983 ) {
                case MoveDirection_982_MoveFwd : {
                    ( (  move_dash_left926 ) ( (  pane3973 ) ) );
                    break;
                }
                case MoveDirection_982_MoveBwd : {
                    ( (  move_dash_right971 ) ( (  pane3973 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq301 ( ( * (  prev3978 ) ) , ( ( * (  pane3973 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel962 ) ( (  pane3973 ) ,  ( ( Maybe_28_Just ) ( (  sel3981 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  size_t   size1021 (    struct List_24 *  l2133 ) {
    return ( ( * (  l2133 ) ) .f_count );
}

static  struct Changeset_26 *   offset_dash_ptr1026 (    struct Changeset_26 *  x338 ,    int64_t  count340 ) {
    struct Changeset_26  temp1027;
    return ( (struct Changeset_26 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul212 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1027 ) ) ) ) ) ) ) ) );
}

static  struct Changeset_26 *   get_dash_ptr1025 (    struct Slice_25  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp166 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic234 ) ( ( ( StrConcat_235_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string202 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_26 *  elem_dash_ptr1760 = ( (  offset_dash_ptr1026 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  struct Changeset_26 *   get_dash_ptr1024 (    struct List_24 *  list2001 ,    size_t  i2003 ) {
    if ( ( (  cmp166 ( (  i2003 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i2003 ) , ( ( * (  list2001 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic234 ) ( ( ( StrConcat_235_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2003 ) ) ) ,  ( (  from_dash_string202 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2001 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1025 ) ( ( ( * (  list2001 ) ) .f_elements ) ,  (  i2003 ) ) );
}

static  struct Changeset_26   get1023 (    struct List_24 *  list2011 ,    size_t  i2013 ) {
    return ( * ( (  get_dash_ptr1024 ) ( (  list2011 ) ,  (  i2013 ) ) ) );
}

static  struct Changeset_26   elem_dash_get1022 (    struct List_24  self2081 ,    size_t  k2083 ) {
    return ( (  get1023 ) ( ( & (  self2081 ) ) ,  (  k2083 ) ) );
}

struct SliceIter_1030 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1030   into_dash_iter1032 (    struct Slice_18  self1822 ) {
    return ( (struct SliceIter_1030) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_19 *   offset_dash_ptr1034 (    struct Action_19 *  x338 ,    int64_t  count340 ) {
    struct Action_19  temp1035;
    return ( (struct Action_19 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul212 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1035 ) ) ) ) ) ) ) ) );
}

static  struct Slice_18   subslice1033 (    struct Slice_18  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Action_19 *  begin_dash_ptr1787 = ( (  offset_dash_ptr1034 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp166 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp166 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub286 ( ( (  min313 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_1030   into_dash_iter1031 (    struct List_17  self2028 ) {
    return ( (  into_dash_iter1032 ) ( ( (  subslice1033 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

struct Maybe_1037 {
    enum {
        Maybe_1037_None_t,
        Maybe_1037_Just_t,
    } tag;
    union {
        struct {
            struct Action_19  field0;
        } Maybe_1037_Just_s;
    } stuff;
};

static struct Maybe_1037 Maybe_1037_Just (  struct Action_19  field0 ) {
    return ( struct Maybe_1037 ) { .tag = Maybe_1037_Just_t, .stuff = { .Maybe_1037_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1037   next1038 (    struct SliceIter_1030 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp166 ( (  op_dash_add214 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1037) { .tag = Maybe_1037_None_t } );
    }
    struct Action_19  elem1830 = ( * ( (  offset_dash_ptr1034 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add214 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1037_Just ) ( (  elem1830 ) ) );
}

static  struct Pos_20   action_dash_fwd1040 (   struct env89* env ,    struct TextBuf_81 *  self3691 ,    struct Action_19  action3693 ) {
    struct envunion90  temp1041 = ( (struct envunion90){ .fun = (  enum Unit_7  (*) (  struct env79*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action296 , .env =  env->envinst79 } );
    ( temp1041.fun ( &temp1041.env ,  (  self3691 ) ,  ( (  action3693 ) .f_from ) ,  ( (  action3693 ) .f_to_dash_bwd ) ,  ( (  action3693 ) .f_fwd ) ) );
    return ( (  action3693 ) .f_to_dash_fwd );
}

static  enum Unit_7   panic1043 (    struct StrView_21  errmsg1712 ) {
    ( (  print_dash_str460 ) ( ( ( StrConcat_461_StrConcat ) ( ( ( StrConcat_462_StrConcat ) ( ( (  from_dash_string202 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Action_19   undefined1047 (  ) {
    struct Action_19  temp1048;
    return (  temp1048 );
}

static  struct Action_19   or_dash_fail1046 (    struct Maybe_1037  x1725 ,    struct StrConcat_235  errmsg1727 ) {
    struct Maybe_1037  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_1037_None_t ) {
        ( (  panic234 ) ( (  errmsg1727 ) ) );
        return ( (  undefined1047 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_1037_Just_t ) {
            return ( dref1728 .stuff .Maybe_1037_Just_s .field0 );
        }
    }
}

static  struct Maybe_1037   try_dash_get1049 (    struct Slice_18  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp166 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1037) { .tag = Maybe_1037_None_t } );
    }
    struct Action_19 *  elem_dash_ptr1766 = ( (  offset_dash_ptr1034 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_1037_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  struct Action_19   get1045 (    struct Slice_18  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail1046 ) ( ( (  try_dash_get1049 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_235_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string202 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_19   elem_dash_get1044 (    struct Slice_18  self1867 ,    size_t  idx1869 ) {
    return ( (  get1045 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

static  struct Action_19   last1042 (    struct Slice_18  s1935 ) {
    if ( (  eq221 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1043 ) ( ( (  from_dash_string202 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1044 ( (  s1935 ) , (  op_dash_sub286 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_18   to_dash_slice1050 (    struct List_17  l2126 ) {
    struct Action_19 *  ptr2127 = ( ( (  l2126 ) .f_elements ) .f_ptr );
    return ( (struct Slice_18) { .f_ptr = (  ptr2127 ) , .f_count = ( (  l2126 ) .f_count ) } );
}

static  struct Maybe_104   redo1020 (   struct env93* env ,    struct TextBuf_81 *  self3718 ) {
    ( (  flush_dash_insert_dash_action980 ) ( (  self3718 ) ) );
    struct Actions_82 *  actions3719 = ( & ( ( * (  self3718 ) ) .f_actions ) );
    if ( (  cmp166 ( ( ( * (  actions3719 ) ) .f_cur ) , ( (  size1021 ) ( ( & ( ( * (  actions3719 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_104) { .tag = Maybe_104_None_t } );
    }
    struct Changeset_26  changeset3720 = (  elem_dash_get1022 ( ( ( * (  actions3719 ) ) .f_list ) , ( ( * (  actions3719 ) ) .f_cur ) ) );
    struct Pos_20  temp1028;
    struct Pos_20  to_dash_fwd3721 = (  temp1028 );
    struct SliceIter_1030  temp1029 =  into_dash_iter1031 ( ( (  changeset3720 ) .f_parts ) );
    while (true) {
        struct Maybe_1037  __cond1036 =  next1038 (&temp1029);
        if (  __cond1036 .tag == 0 ) {
            break;
        }
        struct Action_19  action3723 =  __cond1036 .stuff .Maybe_1037_Just_s .field0;
        struct envunion94  temp1039 = ( (struct envunion94){ .fun = (  struct Pos_20  (*) (  struct env89*  ,    struct TextBuf_81 *  ,    struct Action_19  ) )action_dash_fwd1040 , .env =  env->envinst89 } );
        to_dash_fwd3721 = ( temp1039.fun ( &temp1039.env ,  (  self3718 ) ,  (  action3723 ) ) );
    }
    (*  actions3719 ) .f_cur = (  op_dash_add214 ( ( ( * (  actions3719 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_19  last_dash_action3724 = ( (  last1042 ) ( ( (  to_dash_slice1050 ) ( ( (  changeset3720 ) .f_parts ) ) ) ) );
    if ( (  cmp166 ( ( (  num_dash_bytes966 ) ( ( (  last_dash_action3724 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_20  to_dash_fwd3725 = ( (  left_dash_pos965 ) ( (  self3718 ) ,  (  to_dash_fwd3721 ) ) );
        return ( ( Maybe_104_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3725 ) , .f_sel = ( ( Maybe_28_Just ) ( ( (  last_dash_action3724 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_104_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3721 ) , .f_sel = ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) } ) ) );
    }
}

struct env1052 {
    ;
    struct Pane_122 *  self4019;
};

struct envunion1053 {
    enum Unit_7  (*fun) (  struct env1052*  ,    struct Cursors_27  );
    struct env1052 env;
};

static  enum Unit_7   if_dash_just1051 (    struct Maybe_104  x1291 ,   struct envunion1053  fun1293 ) {
    struct Maybe_104  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_104_Just_t ) {
        struct envunion1053  temp1054 = (  fun1293 );
        ( temp1054.fun ( &temp1054.env ,  ( dref1294 .stuff .Maybe_104_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_104_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1055 (   struct env1052* env ,    struct Cursors_27  cursors4022 ) {
    ( (  set_dash_cursors927 ) ( ( env->self4019 ) ,  ( (  cursors4022 ) .f_cur ) ,  ( (  cursors4022 ) .f_sel ) ,  ( CursorMovement_928_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   redo1018 (   struct env109* env ,    struct Pane_122 *  self4019 ) {
    struct envunion110  temp1019 = ( (struct envunion110){ .fun = (  struct Maybe_104  (*) (  struct env93*  ,    struct TextBuf_81 *  ) )redo1020 , .env =  env->envinst93 } );
    struct Maybe_104  mcursors4020 = ( temp1019.fun ( &temp1019.env ,  ( ( * (  self4019 ) ) .f_buf ) ) );
    struct env1052 envinst1052 = {
        .self4019 =  self4019 ,
    };
    ( (  if_dash_just1051 ) ( (  mcursors4020 ) ,  ( (struct envunion1053){ .fun = (  enum Unit_7  (*) (  struct env1052*  ,    struct Cursors_27  ) )lam1055 , .env =  envinst1052 } ) ) );
    return ( Unit_7_Unit );
}

struct SliceReversedIter_1061 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1061   into_dash_iter1062 (    struct SliceReversedIter_1061  self1898 ) {
    return (  self1898 );
}

static  struct SliceReversedIter_1061   reversed1063 (    struct Slice_18  slice1895 ) {
    return ( (struct SliceReversedIter_1061) { .f_slice = (  slice1895 ) , .f_current_dash_offset = ( (  slice1895 ) .f_count ) } );
}

static  struct Maybe_1037   next1065 (    struct SliceReversedIter_1061 *  self1901 ) {
    size_t  off1902 = ( ( * (  self1901 ) ) .f_current_dash_offset );
    if ( (  eq221 ( (  off1902 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1037) { .tag = Maybe_1037_None_t } );
    }
    (*  self1901 ) .f_current_dash_offset = (  op_dash_sub286 ( (  off1902 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1037_Just ) ( (  elem_dash_get1044 ( ( ( * (  self1901 ) ) .f_slice ) , ( ( * (  self1901 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_20   action_dash_bwd1067 (   struct env87* env ,    struct TextBuf_81 *  self3686 ,    struct Action_19  action3688 ) {
    struct envunion88  temp1068 = ( (struct envunion88){ .fun = (  enum Unit_7  (*) (  struct env79*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action296 , .env =  env->envinst79 } );
    ( temp1068.fun ( &temp1068.env ,  (  self3686 ) ,  ( (  action3688 ) .f_from ) ,  ( (  action3688 ) .f_to_dash_fwd ) ,  ( (  action3688 ) .f_bwd ) ) );
    return ( (  action3688 ) .f_to_dash_bwd );
}

static  struct Maybe_104   undo1059 (   struct env91* env ,    struct TextBuf_81 *  self3711 ) {
    ( (  flush_dash_insert_dash_action980 ) ( (  self3711 ) ) );
    struct Actions_82 *  actions3712 = ( & ( ( * (  self3711 ) ) .f_actions ) );
    if ( (  eq221 ( ( ( * (  actions3712 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_104) { .tag = Maybe_104_None_t } );
    }
    (*  actions3712 ) .f_cur = (  op_dash_sub286 ( ( ( * (  actions3712 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_26  changeset3713 = (  elem_dash_get1022 ( ( ( * (  actions3712 ) ) .f_list ) , ( ( * (  actions3712 ) ) .f_cur ) ) );
    struct SliceReversedIter_1061  temp1060 =  into_dash_iter1062 ( ( (  reversed1063 ) ( ( (  to_dash_slice1050 ) ( ( (  changeset3713 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1037  __cond1064 =  next1065 (&temp1060);
        if (  __cond1064 .tag == 0 ) {
            break;
        }
        struct Action_19  action3715 =  __cond1064 .stuff .Maybe_1037_Just_s .field0;
        struct envunion92  temp1066 = ( (struct envunion92){ .fun = (  struct Pos_20  (*) (  struct env87*  ,    struct TextBuf_81 *  ,    struct Action_19  ) )action_dash_bwd1067 , .env =  env->envinst87 } );
        ( temp1066.fun ( &temp1066.env ,  (  self3711 ) ,  (  action3715 ) ) );
    }
    return ( ( Maybe_104_Just ) ( ( (  changeset3713 ) .f_before_dash_cursors ) ) );
}

struct env1070 {
    ;
    struct Pane_122 *  self4013;
};

struct envunion1071 {
    enum Unit_7  (*fun) (  struct env1070*  ,    struct Cursors_27  );
    struct env1070 env;
};

static  enum Unit_7   if_dash_just1069 (    struct Maybe_104  x1291 ,   struct envunion1071  fun1293 ) {
    struct Maybe_104  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_104_Just_t ) {
        struct envunion1071  temp1072 = (  fun1293 );
        ( temp1072.fun ( &temp1072.env ,  ( dref1294 .stuff .Maybe_104_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_104_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1073 (   struct env1070* env ,    struct Cursors_27  cursors4016 ) {
    ( (  set_dash_cursors927 ) ( ( env->self4013 ) ,  ( (  cursors4016 ) .f_cur ) ,  ( (  cursors4016 ) .f_sel ) ,  ( CursorMovement_928_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   undo1057 (   struct env107* env ,    struct Pane_122 *  self4013 ) {
    struct envunion108  temp1058 = ( (struct envunion108){ .fun = (  struct Maybe_104  (*) (  struct env91*  ,    struct TextBuf_81 *  ) )undo1059 , .env =  env->envinst91 } );
    struct Maybe_104  mcursors4014 = ( temp1058.fun ( &temp1058.env ,  ( ( * (  self4013 ) ) .f_buf ) ) );
    struct env1070 envinst1070 = {
        .self4013 =  self4013 ,
    };
    ( (  if_dash_just1069 ) ( (  mcursors4014 ) ,  ( (struct envunion1071){ .fun = (  enum Unit_7  (*) (  struct env1070*  ,    struct Cursors_27  ) )lam1073 , .env =  envinst1070 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Tuple2_132   minmax1077 (    struct Pos_20  l1329 ,    struct Pos_20  r1331 ) {
    return ( (  cmp298 ( (  l1329 ) , (  r1331 ) ) == 0 ) ? ( ( Tuple2_132_Tuple2 ) ( (  l1329 ) ,  (  r1331 ) ) ) : ( ( Tuple2_132_Tuple2 ) ( (  r1331 ) ,  (  l1329 ) ) ) );
}

static  struct Pos_20   or_dash_else1078 (    struct Maybe_28  self1732 ,    struct Pos_20  alt1734 ) {
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

static  struct Pos_20   fst1079 (    struct Tuple2_132  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_20   snd1080 (    struct Tuple2_132  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tuple2_132   selection1076 (    struct Pane_122 *  self4025 ) {
    struct Tuple2_132  from_dash_to4026 = ( (  minmax1077 ) ( ( (  or_dash_else1078 ) ( ( ( * (  self4025 ) ) .f_sel ) ,  ( ( * (  self4025 ) ) .f_cursor ) ) ) ,  ( ( * (  self4025 ) ) .f_cursor ) ) );
    struct Pos_20  from4027 = ( (  fst1079 ) ( (  from_dash_to4026 ) ) );
    struct Pos_20  to4028 = ( (  right_dash_pos972 ) ( ( ( * (  self4025 ) ) .f_buf ) ,  ( (  snd1080 ) ( (  from_dash_to4026 ) ) ) ) );
    return ( ( Tuple2_132_Tuple2 ) ( (  from4027 ) ,  (  to4028 ) ) );
}

static  struct StrView_21   clone_dash_01084 (    struct StrView_21  s2155 ,    enum CAllocator_9  al2157 ) {
    size_t  cnt2158 = ( ( (  s2155 ) .f_contents ) .f_count );
    struct Slice_12  nus2159 = ( (  allocate335 ) ( (  al2157 ) ,  (  op_dash_add214 ( (  cnt2158 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to434 ) ( ( (  s2155 ) .f_contents ) ,  (  nus2159 ) ) );
    ( (  set344 ) ( (  nus2159 ) ,  (  cnt2158 ) ,  ( (  char_dash_u8366 ) ( ( (  from_dash_charlike203 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = ( (  nus2159 ) .f_ptr ) , .f_count = (  cnt2158 ) } ) } );
}

static  struct StrView_21   clone1083 (    struct StrView_21  s2162 ,    enum CAllocator_9  al2164 ) {
    return ( (  clone_dash_01084 ) ( (  s2162 ) ,  (  al2164 ) ) );
}

struct envunion1088 {
    enum Unit_7  (*fun) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env36 env;
};

static  struct StrView_21   from_dash_charlike1089 (    uint8_t *  ptr77 ,    size_t  count79 ) {
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = (  ptr77 ) , .f_count = (  count79 ) } ) } );
}

struct envunion1093 {
    enum Unit_7  (*fun) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env36 env;
};

struct envunion1095 {
    enum Unit_7  (*fun) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env36 env;
};

struct envunion1097 {
    enum Unit_7  (*fun) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env36 env;
};

static  struct StrView_21   str_dash_between1082 (   struct env95* env ,    struct TextBuf_81 *  self3728 ,    struct Pos_20  from3730 ,    struct Pos_20  to3732 ) {
    enum CAllocator_9  al3733 = ( ( ( * (  self3728 ) ) .f_buf ) .f_al );
    if ( (  eq302 ( ( (  from3730 ) .f_line ) , ( (  to3732 ) .f_line ) ) ) ) {
        size_t  from_dash_bi3734 = ( (  i32_dash_size244 ) ( ( (  min451 ) ( ( (  from3730 ) .f_bi ) ,  ( (  to3732 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3735 = ( (  i32_dash_size244 ) ( ( (  max946 ) ( ( (  from3730 ) .f_bi ) ,  ( (  to3732 ) .f_bi ) ) ) ) );
        return ( (  clone1083 ) ( ( (  byte_dash_substr367 ) ( ( (  line933 ) ( (  self3728 ) ,  ( (  from3730 ) .f_line ) ) ) ,  (  from_dash_bi3734 ) ,  (  to_dash_bi3735 ) ) ) ,  (  al3733 ) ) );
    } else {
        struct Pos_20  from_dash_pos3736 = ( (  min297 ) ( (  from3730 ) ,  (  to3732 ) ) );
        struct Pos_20  to_dash_pos3737 = ( (  max300 ) ( (  from3730 ) ,  (  to3732 ) ) );
        struct List_11  temp1085 = ( (  mk265 ) ( (  al3733 ) ) );
        struct List_11 *  sb3738 = ( &temp1085 );
        struct StrView_21  first_dash_line3739 = ( (  line933 ) ( (  self3728 ) ,  ( (  from_dash_pos3736 ) .f_line ) ) );
        struct envunion96  temp1086 = ( (struct envunion96){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all320 , .env =  env->envinst36 } );
        ( temp1086.fun ( &temp1086.env ,  (  sb3738 ) ,  ( ( (  byte_dash_substr367 ) ( (  first_dash_line3739 ) ,  ( (  i32_dash_size244 ) ( ( (  from_dash_pos3736 ) .f_bi ) ) ) ,  ( (  num_dash_bytes966 ) ( (  first_dash_line3739 ) ) ) ) ) .f_contents ) ) );
        struct envunion1088  temp1087 = ( (struct envunion1088){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all320 , .env =  env->envinst36 } );
        ( temp1087.fun ( &temp1087.env ,  (  sb3738 ) ,  ( ( ( (  from_dash_charlike1089 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_671  temp1090 =  into_dash_iter673 ( ( (  to676 ) ( (  op_dash_add256 ( ( (  from_dash_pos3736 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) ,  (  op_dash_sub794 ( ( (  to_dash_pos3737 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_254  __cond1091 =  next674 (&temp1090);
            if (  __cond1091 .tag == 0 ) {
                break;
            }
            int32_t  i3741 =  __cond1091 .stuff .Maybe_254_Just_s .field0;
            struct envunion1093  temp1092 = ( (struct envunion1093){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all320 , .env =  env->envinst36 } );
            ( temp1092.fun ( &temp1092.env ,  (  sb3738 ) ,  ( ( (  line933 ) ( (  self3728 ) ,  (  i3741 ) ) ) .f_contents ) ) );
            struct envunion1095  temp1094 = ( (struct envunion1095){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all320 , .env =  env->envinst36 } );
            ( temp1094.fun ( &temp1094.env ,  (  sb3738 ) ,  ( ( ( (  from_dash_charlike1089 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1097  temp1096 = ( (struct envunion1097){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all320 , .env =  env->envinst36 } );
        ( temp1096.fun ( &temp1096.env ,  (  sb3738 ) ,  ( ( (  byte_dash_substr367 ) ( ( (  line933 ) ( (  self3728 ) ,  ( (  to_dash_pos3737 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size244 ) ( ( (  to_dash_pos3737 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes934 ) ( ( (  to_dash_slice314 ) ( ( * (  sb3738 ) ) ) ) ) );
    }
}

struct env1099 {
    struct Editor_121 *  ed4052;
    ;
};

struct envunion1100 {
    enum Unit_7  (*fun) (  struct env1099*  ,    struct StrView_21  );
    struct env1099 env;
};

static  enum Unit_7   if_dash_just1098 (    struct Maybe_125  x1291 ,   struct envunion1100  fun1293 ) {
    struct Maybe_125  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_125_Just_t ) {
        struct envunion1100  temp1101 = (  fun1293 );
        ( temp1101.fun ( &temp1101.env ,  ( dref1294 .stuff .Maybe_125_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_125_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1102 (   struct env1099* env ,    struct StrView_21  cp4056 ) {
    ( (  free920 ) ( (  cp4056 ) ,  ( ( * ( env->ed4052 ) ) .f_al ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   copy_dash_selection_dash_to_dash_clipboard1075 (   struct env113* env ,    struct Editor_121 *  ed4052 ) {
    struct Tuple2_132  from_dash_to4053 = ( (  selection1076 ) ( ( (  pane970 ) ( (  ed4052 ) ) ) ) );
    struct envunion114  temp1081 = ( (struct envunion114){ .fun = (  struct StrView_21  (*) (  struct env95*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct Pos_20  ) )str_dash_between1082 , .env =  env->envinst95 } );
    struct StrView_21  cpd4054 = ( temp1081.fun ( &temp1081.env ,  ( ( ( * (  ed4052 ) ) .f_pane ) .f_buf ) ,  ( (  fst1079 ) ( (  from_dash_to4053 ) ) ) ,  ( (  snd1080 ) ( (  from_dash_to4053 ) ) ) ) );
    struct env1099 envinst1099 = {
        .ed4052 =  ed4052 ,
    };
    ( (  if_dash_just1098 ) ( ( ( * (  ed4052 ) ) .f_clipboard ) ,  ( (struct envunion1100){ .fun = (  enum Unit_7  (*) (  struct env1099*  ,    struct StrView_21  ) )lam1102 , .env =  envinst1099 } ) ) );
    (*  ed4052 ) .f_clipboard = ( ( Maybe_125_Just ) ( (  cpd4054 ) ) );
    return ( Unit_7_Unit );
}

struct envunion1104 {
    enum Unit_7  (*fun) (  struct env111*  ,    struct Pane_122 *  ,    struct Tuple2_132  ,    struct StrView_21  );
    struct env111 env;
};

struct SliceIter_1111 {
    struct Slice_25  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1110 {
    struct SliceIter_1111  field0;
    size_t  field1;
};

static struct Drop_1110 Drop_1110_Drop (  struct SliceIter_1111  field0 ,  size_t  field1 ) {
    return ( struct Drop_1110 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1110   into_dash_iter1112 (    struct Drop_1110  self845 ) {
    return (  self845 );
}

static  struct SliceIter_1111   into_dash_iter1115 (    struct Slice_25  self1822 ) {
    return ( (struct SliceIter_1111) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Slice_25   subslice1116 (    struct Slice_25  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Changeset_26 *  begin_dash_ptr1787 = ( (  offset_dash_ptr1026 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp166 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp166 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_25) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub286 ( ( (  min313 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_25) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_1111   into_dash_iter1114 (    struct List_24  self2028 ) {
    return ( (  into_dash_iter1115 ) ( ( (  subslice1116 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

static  struct Drop_1110   drop1113 (    struct List_24  iterable852 ,    size_t  i854 ) {
    struct SliceIter_1111  it855 = ( (  into_dash_iter1114 ) ( (  iterable852 ) ) );
    return ( ( Drop_1110_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

struct Maybe_1118 {
    enum {
        Maybe_1118_None_t,
        Maybe_1118_Just_t,
    } tag;
    union {
        struct {
            struct Changeset_26  field0;
        } Maybe_1118_Just_s;
    } stuff;
};

static struct Maybe_1118 Maybe_1118_Just (  struct Changeset_26  field0 ) {
    return ( struct Maybe_1118 ) { .tag = Maybe_1118_Just_t, .stuff = { .Maybe_1118_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1118   next1120 (    struct SliceIter_1111 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp166 ( (  op_dash_add214 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1118) { .tag = Maybe_1118_None_t } );
    }
    struct Changeset_26  elem1830 = ( * ( (  offset_dash_ptr1026 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add214 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1118_Just ) ( (  elem1830 ) ) );
}

static  struct Maybe_1118   next1119 (    struct Drop_1110 *  dref847 ) {
    while ( (  cmp166 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1120 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub286 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1120 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

struct env1123 {
    enum CAllocator_9  al3600;
    ;
};

struct envunion1124 {
    enum Unit_7  (*fun) (  struct env1123*  ,    struct Action_19  );
    struct env1123 env;
};

static  enum Unit_7   for_dash_each1122 (    struct List_17  iterable1074 ,   struct envunion1124  fun1076 ) {
    struct SliceIter_1030  temp1125 = ( (  into_dash_iter1031 ) ( (  iterable1074 ) ) );
    struct SliceIter_1030 *  it1077 = ( &temp1125 );
    while ( ( true ) ) {
        struct Maybe_1037  dref1078 = ( (  next1038 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1037_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1037_Just_t ) {
                struct envunion1124  temp1126 = (  fun1076 );
                ( temp1126.fun ( &temp1126.env ,  ( dref1078 .stuff .Maybe_1037_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_action1128 (    struct Action_19  action3593 ,    enum CAllocator_9  al3595 ) {
    ( (  free920 ) ( ( (  action3593 ) .f_fwd ) ,  (  al3595 ) ) );
    ( (  free920 ) ( ( (  action3593 ) .f_bwd ) ,  (  al3595 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1127 (   struct env1123* env ,    struct Action_19  a3602 ) {
    return ( (  free_dash_action1128 ) ( (  a3602 ) ,  ( env->al3600 ) ) );
}

static  void *   cast_dash_ptr1131 (    struct Action_19 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free1130 (    enum CAllocator_9  dref1959 ,    struct Slice_18  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1131 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free1129 (    struct List_17 *  list2035 ) {
    ( (  free1130 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( ( * (  list2035 ) ) .f_elements ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_changeset1121 (    struct Changeset_26  chs3598 ,    enum CAllocator_9  al3600 ) {
    struct env1123 envinst1123 = {
        .al3600 =  al3600 ,
    };
    ( (  for_dash_each1122 ) ( ( (  chs3598 ) .f_parts ) ,  ( (struct envunion1124){ .fun = (  enum Unit_7  (*) (  struct env1123*  ,    struct Action_19  ) )lam1127 , .env =  envinst1123 } ) ) );
    ( (  free1129 ) ( ( & ( (  chs3598 ) .f_parts ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   trim1132 (    struct List_24 *  l2115 ,    size_t  new_dash_count2117 ) {
    (*  l2115 ) .f_count = ( (  min313 ) ( (  new_dash_count2117 ) ,  ( ( * (  l2115 ) ) .f_count ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   trim_dash_actions1108 (    struct Actions_82 *  actions3609 ) {
    enum CAllocator_9  al3610 = ( ( ( * (  actions3609 ) ) .f_list ) .f_al );
    size_t  cur3611 = ( ( * (  actions3609 ) ) .f_cur );
    struct Drop_1110  temp1109 =  into_dash_iter1112 ( ( (  drop1113 ) ( ( ( * (  actions3609 ) ) .f_list ) ,  (  cur3611 ) ) ) );
    while (true) {
        struct Maybe_1118  __cond1117 =  next1119 (&temp1109);
        if (  __cond1117 .tag == 0 ) {
            break;
        }
        struct Changeset_26  action3613 =  __cond1117 .stuff .Maybe_1118_Just_s .field0;
        ( (  free_dash_changeset1121 ) ( (  action3613 ) ,  (  al3610 ) ) );
    }
    ( (  trim1132 ) ( ( & ( ( * (  actions3609 ) ) .f_list ) ) ,  (  cur3611 ) ) );
    return ( Unit_7_Unit );
}

static  struct Maybe_125   head1134 (    struct SplitIter_374  it1142 ) {
    struct SplitIter_374  temp1135 = ( (  into_dash_iter381 ) ( (  it1142 ) ) );
    return ( (  next395 ) ( ( &temp1135 ) ) );
}

static  struct Maybe_125   head1137 (    struct Drop_373  it1142 ) {
    struct Drop_373  temp1138 = ( (  into_dash_iter379 ) ( (  it1142 ) ) );
    return ( (  next394 ) ( ( &temp1138 ) ) );
}

static  bool   null1136 (    struct Drop_373  it1151 ) {
    struct Maybe_125  dref1152 = ( (  head1137 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_125_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Tuple2_392   undefined1140 (  ) {
    struct Tuple2_392  temp1141;
    return (  temp1141 );
}

static  struct Tuple2_392   or_dash_fail1139 (    struct Maybe_391  x1725 ,    struct StrView_21  errmsg1727 ) {
    struct Maybe_391  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_391_None_t ) {
        ( (  panic1043 ) ( (  errmsg1727 ) ) );
        return ( (  undefined1140 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_391_Just_t ) {
            return ( dref1728 .stuff .Maybe_391_Just_s .field0 );
        }
    }
}

static  struct Maybe_391   reduce1143 (    struct Zip_372  iterable1093 ,    struct Maybe_391  base1095 ,    struct Maybe_391 (*  fun1097 )(    struct Tuple2_392  ,    struct Maybe_391  ) ) {
    struct Maybe_391  x1098 = (  base1095 );
    struct Zip_372  it1099 = ( (  into_dash_iter377 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_391  dref1100 = ( (  next393 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_391_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_391_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_391_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1144 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1144);
    exit ( 1 );
    ( Unit_7_Unit );
    struct Maybe_391  temp1145;
    return (  temp1145 );
}

static  struct Maybe_391   lam1146 (    struct Tuple2_392  e1147 ,    struct Maybe_391  dref1148 ) {
    return ( ( Maybe_391_Just ) ( (  e1147 ) ) );
}

static  struct Maybe_391   last1142 (    struct Zip_372  it1145 ) {
    return ( (  reduce1143 ) ( (  it1145 ) ,  ( (struct Maybe_391) { .tag = Maybe_391_None_t } ) ,  (  lam1146 ) ) );
}

static  int32_t   snd1147 (    struct Tuple2_392  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct StrView_21   fst1148 (    struct Tuple2_392  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_20   pos_dash_after_dash_str1133 (    struct TextBuf_81 *  self3696 ,    struct StrView_21  bytes3698 ,    struct Pos_20  from3700 ) {
    struct SplitIter_374  lines3701 = ( (  split_dash_by_dash_each382 ) ( (  bytes3698 ) ,  ( (  from_dash_charlike203 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_21  first_dash_line3702 = ( (  or_dash_else357 ) ( ( (  head1134 ) ( (  lines3701 ) ) ) ,  ( (  from_dash_string202 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_373  headless3703 = ( (  drop380 ) ( (  lines3701 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1136 ) ( (  headless3703 ) ) ) ) {
        struct Pos_20  next_dash_pos3704 = ( (  mk280 ) ( ( (  from3700 ) .f_line ) ,  (  op_dash_add256 ( ( (  from3700 ) .f_bi ) , ( (  size_dash_i32178 ) ( ( (  num_dash_bytes966 ) ( (  first_dash_line3702 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3704 );
    } else {
        struct Tuple2_392  last_dash_line3705 = ( (  or_dash_fail1139 ) ( ( (  last1142 ) ( ( (  zip378 ) ( (  headless3703 ) ,  ( (  from261 ) ( (  op_dash_add256 ( ( (  from3700 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string202 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk280 ) ( ( (  snd1147 ) ( (  last_dash_line3705 ) ) ) ,  ( (  size_dash_i32178 ) ( ( (  num_dash_bytes966 ) ( ( (  fst1148 ) ( (  last_dash_line3705 ) ) ) ) ) ) ) ) );
    }
}

static  bool   is_dash_none1150 (    struct Maybe_104  m1264 ) {
    struct Maybe_104  dref1265 = (  m1264 );
    if ( dref1265.tag == Maybe_104_None_t ) {
        return ( true );
    }
    else {
        if ( dref1265.tag == Maybe_104_Just_t ) {
            return ( false );
        }
    }
}

static  struct Changeset_26 *   last_dash_ptr1151 (    struct Slice_25  s1938 ) {
    if ( (  eq221 ( ( (  s1938 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1043 ) ( ( (  from_dash_string202 ) ( ( "(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1025 ) ( (  s1938 ) ,  (  op_dash_sub286 ( ( (  s1938 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_25   to_dash_slice1152 (    struct List_24  l2126 ) {
    struct Changeset_26 *  ptr2127 = ( ( (  l2126 ) .f_elements ) .f_ptr );
    return ( (struct Slice_25) { .f_ptr = (  ptr2127 ) , .f_count = ( (  l2126 ) .f_count ) } );
}

struct TypeSize_1159 {
    size_t  f_size;
};

static  struct TypeSize_1159   get_dash_typesize1158 (  ) {
    struct Action_19  temp1160;
    return ( (struct TypeSize_1159) { .f_size = ( sizeof( ( (  temp1160 ) ) ) ) } );
}

static  struct Action_19 *   cast_dash_ptr1161 (    void *  p359 ) {
    return ( (struct Action_19 * ) (  p359 ) );
}

static  struct Slice_18   allocate1157 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize1158 ) ( ) ) ) .f_size );
    struct Action_19 *  ptr1957 = ( (  cast_dash_ptr1161 ) ( ( ( malloc ) ( (  op_dash_mul227 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_18) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env1162 {
    struct Slice_18  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_1164 {
    struct Action_19  field0;
    int32_t  field1;
};

static struct Tuple2_1164 Tuple2_1164_Tuple2 (  struct Action_19  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1164 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1163 {
    enum Unit_7  (*fun) (  struct env1162*  ,    struct Tuple2_1164  );
    struct env1162 env;
};

static  struct Action_19 *   get_dash_ptr1167 (    struct Slice_18  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp166 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic234 ) ( ( ( StrConcat_235_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string202 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_19 *  elem_dash_ptr1760 = ( (  offset_dash_ptr1034 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set1166 (    struct Slice_18  slice1774 ,    size_t  i1776 ,    struct Action_19  x1778 ) {
    struct Action_19 *  ep1779 = ( (  get_dash_ptr1167 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1165 (   struct env1162* env ,    struct Tuple2_1164  dref2043 ) {
    return ( (  set1166 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size244 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct Zip_1169 {
    struct SliceIter_1030  f_left_dash_it;
    struct FromIter_248  f_right_dash_it;
};

static  struct Zip_1169   into_dash_iter1171 (    struct Zip_1169  self911 ) {
    return (  self911 );
}

struct Maybe_1172 {
    enum {
        Maybe_1172_None_t,
        Maybe_1172_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1164  field0;
        } Maybe_1172_Just_s;
    } stuff;
};

static struct Maybe_1172 Maybe_1172_Just (  struct Tuple2_1164  field0 ) {
    return ( struct Maybe_1172 ) { .tag = Maybe_1172_Just_t, .stuff = { .Maybe_1172_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1172   next1173 (    struct Zip_1169 *  self914 ) {
    struct Zip_1169  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1037  dref916 = ( (  next1038 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1037_None_t ) {
            return ( (struct Maybe_1172) { .tag = Maybe_1172_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1037_Just_t ) {
                struct Maybe_254  dref918 = ( (  next255 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_254_None_t ) {
                    return ( (struct Maybe_1172) { .tag = Maybe_1172_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_254_Just_t ) {
                        ( (  next1038 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next255 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1172_Just ) ( ( ( Tuple2_1164_Tuple2 ) ( ( dref916 .stuff .Maybe_1037_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_254_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each1168 (    struct Zip_1169  iterable1074 ,   struct envunion1163  fun1076 ) {
    struct Zip_1169  temp1170 = ( (  into_dash_iter1171 ) ( (  iterable1074 ) ) );
    struct Zip_1169 *  it1077 = ( &temp1170 );
    while ( ( true ) ) {
        struct Maybe_1172  dref1078 = ( (  next1173 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1172_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1172_Just_t ) {
                struct envunion1163  temp1174 = (  fun1076 );
                ( temp1174.fun ( &temp1174.env ,  ( dref1078 .stuff .Maybe_1172_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_1169   zip1175 (    struct Slice_18  left922 ,    struct FromIter_248  right924 ) {
    struct SliceIter_1030  left_dash_it925 = ( (  into_dash_iter1032 ) ( (  left922 ) ) );
    struct FromIter_248  right_dash_it926 = ( (  into_dash_iter260 ) ( (  right924 ) ) );
    return ( (struct Zip_1169) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   grow_dash_if_dash_full1156 (   struct env3* env ,    struct List_17 *  list2041 ) {
    if ( (  eq221 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate1157 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq221 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_18  new_dash_slice2042 = ( (  allocate1157 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul227 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env1162 envinst1162 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion1163  fun2046 = ( (struct envunion1163){ .fun = (  enum Unit_7  (*) (  struct env1162*  ,    struct Tuple2_1164  ) )lam1165 , .env =  envinst1162 } );
            ( (  for_dash_each1168 ) ( ( (  zip1175 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from261 ) ( (  from_dash_integral44 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free1130 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add1154 (   struct env15* env ,    struct List_17 *  list2049 ,    struct Action_19  elem2051 ) {
    struct envunion16  temp1155 = ( (struct envunion16){ .fun = (  enum Unit_7  (*) (  struct env3*  ,    struct List_17 *  ) )grow_dash_if_dash_full1156 , .env =  env->envinst3 } );
    ( temp1155.fun ( &temp1155.env ,  (  list2049 ) ) );
    ( (  set1166 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add214 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  void *   cast_dash_ptr1182 (    struct Action_19 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1183 (    struct Action_19 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Action_19 *   zeroed1180 (  ) {
    struct Action_19 *  temp1181;
    struct Action_19 *  x570 = (  temp1181 );
    ( ( memset ) ( ( (  cast_dash_ptr1182 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of1183 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Action_19 *   null_dash_ptr1179 (  ) {
    return ( (  zeroed1180 ) ( ) );
}

static  struct Slice_18   empty1178 (  ) {
    return ( (struct Slice_18) { .f_ptr = ( (  null_dash_ptr1179 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_17   mk1177 (    enum CAllocator_9  al2031 ) {
    struct Slice_18  elements2032 = ( (  empty1178 ) ( ) );
    return ( (struct List_17) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_27   or_dash_else1184 (    struct Maybe_104  self1732 ,    struct Cursors_27  alt1734 ) {
    struct Maybe_104  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_104_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_104_Just_t ) {
            return ( dref1735 .stuff .Maybe_104_Just_s .field0 );
        }
    }
}

struct envunion1186 {
    enum Unit_7  (*fun) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  );
    struct env15 env;
};

struct TypeSize_1193 {
    size_t  f_size;
};

static  struct TypeSize_1193   get_dash_typesize1192 (  ) {
    struct Changeset_26  temp1194;
    return ( (struct TypeSize_1193) { .f_size = ( sizeof( ( (  temp1194 ) ) ) ) } );
}

static  struct Changeset_26 *   cast_dash_ptr1195 (    void *  p359 ) {
    return ( (struct Changeset_26 * ) (  p359 ) );
}

static  struct Slice_25   allocate1191 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize1192 ) ( ) ) ) .f_size );
    struct Changeset_26 *  ptr1957 = ( (  cast_dash_ptr1195 ) ( ( ( malloc ) ( (  op_dash_mul227 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_25) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env1196 {
    struct Slice_25  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_1198 {
    struct Changeset_26  field0;
    int32_t  field1;
};

static struct Tuple2_1198 Tuple2_1198_Tuple2 (  struct Changeset_26  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1198 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1197 {
    enum Unit_7  (*fun) (  struct env1196*  ,    struct Tuple2_1198  );
    struct env1196 env;
};

static  enum Unit_7   set1200 (    struct Slice_25  slice1774 ,    size_t  i1776 ,    struct Changeset_26  x1778 ) {
    struct Changeset_26 *  ep1779 = ( (  get_dash_ptr1025 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1199 (   struct env1196* env ,    struct Tuple2_1198  dref2043 ) {
    return ( (  set1200 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size244 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct Zip_1202 {
    struct SliceIter_1111  f_left_dash_it;
    struct FromIter_248  f_right_dash_it;
};

static  struct Zip_1202   into_dash_iter1204 (    struct Zip_1202  self911 ) {
    return (  self911 );
}

struct Maybe_1205 {
    enum {
        Maybe_1205_None_t,
        Maybe_1205_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1198  field0;
        } Maybe_1205_Just_s;
    } stuff;
};

static struct Maybe_1205 Maybe_1205_Just (  struct Tuple2_1198  field0 ) {
    return ( struct Maybe_1205 ) { .tag = Maybe_1205_Just_t, .stuff = { .Maybe_1205_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1205   next1206 (    struct Zip_1202 *  self914 ) {
    struct Zip_1202  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1118  dref916 = ( (  next1120 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1118_None_t ) {
            return ( (struct Maybe_1205) { .tag = Maybe_1205_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1118_Just_t ) {
                struct Maybe_254  dref918 = ( (  next255 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_254_None_t ) {
                    return ( (struct Maybe_1205) { .tag = Maybe_1205_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_254_Just_t ) {
                        ( (  next1120 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next255 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1205_Just ) ( ( ( Tuple2_1198_Tuple2 ) ( ( dref916 .stuff .Maybe_1118_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_254_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each1201 (    struct Zip_1202  iterable1074 ,   struct envunion1197  fun1076 ) {
    struct Zip_1202  temp1203 = ( (  into_dash_iter1204 ) ( (  iterable1074 ) ) );
    struct Zip_1202 *  it1077 = ( &temp1203 );
    while ( ( true ) ) {
        struct Maybe_1205  dref1078 = ( (  next1206 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1205_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1205_Just_t ) {
                struct envunion1197  temp1207 = (  fun1076 );
                ( temp1207.fun ( &temp1207.env ,  ( dref1078 .stuff .Maybe_1205_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_1202   zip1208 (    struct Slice_25  left922 ,    struct FromIter_248  right924 ) {
    struct SliceIter_1111  left_dash_it925 = ( (  into_dash_iter1115 ) ( (  left922 ) ) );
    struct FromIter_248  right_dash_it926 = ( (  into_dash_iter260 ) ( (  right924 ) ) );
    return ( (struct Zip_1202) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr1210 (    struct Changeset_26 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free1209 (    enum CAllocator_9  dref1959 ,    struct Slice_25  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1210 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   grow_dash_if_dash_full1190 (   struct env4* env ,    struct List_24 *  list2041 ) {
    if ( (  eq221 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate1191 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq221 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_25  new_dash_slice2042 = ( (  allocate1191 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul227 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env1196 envinst1196 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion1197  fun2046 = ( (struct envunion1197){ .fun = (  enum Unit_7  (*) (  struct env1196*  ,    struct Tuple2_1198  ) )lam1199 , .env =  envinst1196 } );
            ( (  for_dash_each1201 ) ( ( (  zip1208 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from261 ) ( (  from_dash_integral44 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free1209 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add1188 (   struct env22* env ,    struct List_24 *  list2049 ,    struct Changeset_26  elem2051 ) {
    struct envunion23  temp1189 = ( (struct envunion23){ .fun = (  enum Unit_7  (*) (  struct env4*  ,    struct List_24 *  ) )grow_dash_if_dash_full1190 , .env =  env->envinst4 } );
    ( temp1189.fun ( &temp1189.env ,  (  list2049 ) ) );
    ( (  set1200 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add214 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Maybe_104   change1107 (   struct env97* env ,    struct TextBuf_81 *  self3758 ,    struct Pos_20  from3760 ,    struct Pos_20  to3762 ,    struct StrView_21  bytes3764 ,    struct Maybe_104  before_dash_cursors3766 ) {
    struct Pos_20  from_dash_pos3767 = ( (  min297 ) ( (  from3760 ) ,  (  to3762 ) ) );
    struct Pos_20  to_dash_pos3768 = ( (  max300 ) ( (  from3760 ) ,  (  to3762 ) ) );
    struct Actions_82 *  actions3769 = ( & ( ( * (  self3758 ) ) .f_actions ) );
    ( (  trim_dash_actions1108 ) ( (  actions3769 ) ) );
    struct envunion98  temp1149 = ( (struct envunion98){ .fun = (  struct StrView_21  (*) (  struct env95*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct Pos_20  ) )str_dash_between1082 , .env =  env->envinst95 } );
    struct Action_19  action3770 = ( (struct Action_19) { .f_from = (  from3760 ) , .f_fwd = ( (  clone1083 ) ( (  bytes3764 ) ,  ( ( * (  self3758 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1133 ) ( (  self3758 ) ,  (  bytes3764 ) ,  (  from_dash_pos3767 ) ) ) , .f_bwd = ( temp1149.fun ( &temp1149.env ,  (  self3758 ) ,  (  from_dash_pos3767 ) ,  (  to_dash_pos3768 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3768 ) } );
    enum CAllocator_9  al3771 = ( ( ( * (  actions3769 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in3772 = ( (  is_dash_none1150 ) ( (  before_dash_cursors3766 ) ) );
    if ( ( ( ( ( * (  self3758 ) ) .f_actions ) .f_input_dash_changeset ) && (  is_dash_typed_dash_in3772 ) ) ) {
        struct Changeset_26 *  last_dash_changeset3773 = ( (  last_dash_ptr1151 ) ( ( (  to_dash_slice1152 ) ( ( ( * (  actions3769 ) ) .f_list ) ) ) ) );
        struct envunion100  temp1153 = ( (struct envunion100){ .fun = (  enum Unit_7  (*) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  ) )add1154 , .env =  env->envinst15 } );
        ( temp1153.fun ( &temp1153.env ,  ( & ( ( * (  last_dash_changeset3773 ) ) .f_parts ) ) ,  (  action3770 ) ) );
    } else {
        struct Changeset_26  temp1176 = ( (struct Changeset_26) { .f_parts = ( (  mk1177 ) ( (  al3771 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1184 ) ( (  before_dash_cursors3766 ) ,  ( (struct Cursors_27) { .f_cur = (  from3760 ) , .f_sel = ( (  eq301 ( (  from3760 ) , (  to3762 ) ) ) ? ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) : ( ( Maybe_28_Just ) ( (  to3762 ) ) ) ) } ) ) ) } );
        struct Changeset_26 *  changeset3774 = ( &temp1176 );
        struct envunion1186  temp1185 = ( (struct envunion1186){ .fun = (  enum Unit_7  (*) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  ) )add1154 , .env =  env->envinst15 } );
        ( temp1185.fun ( &temp1185.env ,  ( & ( ( * (  changeset3774 ) ) .f_parts ) ) ,  (  action3770 ) ) );
        struct envunion101  temp1187 = ( (struct envunion101){ .fun = (  enum Unit_7  (*) (  struct env22*  ,    struct List_24 *  ,    struct Changeset_26  ) )add1188 , .env =  env->envinst22 } );
        ( temp1187.fun ( &temp1187.env ,  ( & ( ( * (  actions3769 ) ) .f_list ) ) ,  ( * (  changeset3774 ) ) ) );
        (*  actions3769 ) .f_input_dash_changeset = (  is_dash_typed_dash_in3772 );
        (*  actions3769 ) .f_cur = (  op_dash_add214 ( ( ( * (  actions3769 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion99  temp1211 = ( (struct envunion99){ .fun = (  struct Pos_20  (*) (  struct env89*  ,    struct TextBuf_81 *  ,    struct Action_19  ) )action_dash_fwd1040 , .env =  env->envinst89 } );
    struct Pos_20  to_dash_fwd3775 = ( temp1211.fun ( &temp1211.env ,  (  self3758 ) ,  (  action3770 ) ) );
    if ( (  cmp166 ( ( (  num_dash_bytes966 ) ( ( (  action3770 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_20  to_dash_fwd3776 = ( (  left_dash_pos965 ) ( (  self3758 ) ,  (  to_dash_fwd3775 ) ) );
        return ( ( Maybe_104_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3776 ) , .f_sel = ( ( Maybe_28_Just ) ( ( (  action3770 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_104_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3775 ) , .f_sel = ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) } ) ) );
    }
}

struct env1213 {
    ;
    struct Pane_122 *  self4031;
};

struct envunion1214 {
    enum Unit_7  (*fun) (  struct env1213*  ,    struct Cursors_27  );
    struct env1213 env;
};

static  enum Unit_7   if_dash_just1212 (    struct Maybe_104  x1291 ,   struct envunion1214  fun1293 ) {
    struct Maybe_104  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_104_Just_t ) {
        struct envunion1214  temp1215 = (  fun1293 );
        ( temp1215.fun ( &temp1215.env ,  ( dref1294 .stuff .Maybe_104_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_104_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1216 (   struct env1213* env ,    struct Cursors_27  cursors4038 ) {
    ( (  set_dash_cursors927 ) ( ( env->self4031 ) ,  ( (  cursors4038 ) .f_cur ) ,  ( (  cursors4038 ) .f_sel ) ,  ( CursorMovement_928_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   replace_dash_selection1105 (   struct env111* env ,    struct Pane_122 *  self4031 ,    struct Tuple2_132  pos_prime_s4033 ,    struct StrView_21  cp4035 ) {
    struct envunion112  temp1106 = ( (struct envunion112){ .fun = (  struct Maybe_104  (*) (  struct env97*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_104  ) )change1107 , .env =  env->envinst97 } );
    struct Maybe_104  mcursors4036 = ( temp1106.fun ( &temp1106.env ,  ( ( * (  self4031 ) ) .f_buf ) ,  ( (  fst1079 ) ( (  pos_prime_s4033 ) ) ) ,  ( (  snd1080 ) ( (  pos_prime_s4033 ) ) ) ,  (  cp4035 ) ,  ( ( Maybe_104_Just ) ( ( (struct Cursors_27) { .f_cur = ( ( * (  self4031 ) ) .f_cursor ) , .f_sel = ( ( * (  self4031 ) ) .f_sel ) } ) ) ) ) );
    struct env1213 envinst1213 = {
        .self4031 =  self4031 ,
    };
    ( (  if_dash_just1212 ) ( (  mcursors4036 ) ,  ( (struct envunion1214){ .fun = (  enum Unit_7  (*) (  struct env1213*  ,    struct Cursors_27  ) )lam1216 , .env =  envinst1213 } ) ) );
    return ( Unit_7_Unit );
}

struct envunion1218 {
    enum Unit_7  (*fun) (  struct env113*  ,    struct Editor_121 *  );
    struct env113 env;
};

struct envunion1220 {
    enum Unit_7  (*fun) (  struct env111*  ,    struct Pane_122 *  ,    struct Tuple2_132  ,    struct StrView_21  );
    struct env111 env;
};

struct envunion1222 {
    enum Unit_7  (*fun) (  struct env113*  ,    struct Editor_121 *  );
    struct env113 env;
};

static  struct StrBuilder_50   mk1228 (    enum CAllocator_9  al2781 ) {
    return ( (struct StrBuilder_50) { .f_chars = ( (  mk265 ) ( (  al2781 ) ) ) } );
}

struct IntStrIter_1234 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1233 {
    struct StrViewIter_585  f_left;
    struct IntStrIter_1234  f_right;
};

struct StrConcatIter_1232 {
    struct StrConcatIter_1233  f_left;
    struct StrViewIter_585  f_right;
};

struct env1235 {
    struct env48 envinst48;
    struct StrBuilder_50 *  builder2749;
};

struct envunion1236 {
    enum Unit_7  (*fun) (  struct env1235*  ,    struct Char_53  );
    struct env1235 env;
};

static  struct StrConcatIter_1232   into_dash_iter1238 (    struct StrConcatIter_1232  self1491 ) {
    return (  self1491 );
}

struct env1244 {
    ;
    size_t  base1210;
};

struct envunion1245 {
    size_t  (*fun) (  struct env1244*  ,    int32_t  ,    size_t  );
    struct env1244 env;
};

static  size_t   reduce1243 (    struct Range_668  iterable1093 ,    size_t  base1095 ,   struct envunion1245  fun1097 ) {
    size_t  x1098 = (  base1095 );
    struct RangeIter_671  it1099 = ( (  into_dash_iter673 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1100 = ( (  next674 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_254_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_254_Just_t ) {
                struct envunion1245  temp1246 = (  fun1097 );
                x1098 = ( temp1246.fun ( &temp1246.env ,  ( dref1100 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1247 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1247);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1248;
    return (  temp1248 );
}

static  size_t   lam1249 (   struct env1244* env ,    int32_t  item1214 ,    size_t  x1216 ) {
    return (  op_dash_mul227 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  size_t   pow1242 (    size_t  base1210 ,    int32_t  p1212 ) {
    struct env1244 envinst1244 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1243 ) ( ( (  to676 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  op_dash_sub794 ( (  p1212 ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1245){ .fun = (  size_t  (*) (  struct env1244*  ,    int32_t  ,    size_t  ) )lam1249 , .env =  envinst1244 } ) ) );
}

static  uint8_t   cast1250 (    size_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_588   next1241 (    struct IntStrIter_1234 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_588_Just ) ( ( (  from_dash_charlike203 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp299 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_588) { .tag = Maybe_588_None_t } );
    }
    size_t  trim_dash_down1423 = ( (  pow1242 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub794 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 1 ) ) ) ) ) );
    size_t  upper1424 = (  op_dash_div193 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    size_t  upper_dash_mask1425 = (  op_dash_mul227 ( (  op_dash_div193 ( (  upper1424 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1250 ) ( (  op_dash_sub286 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub794 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 1 ) ) ) );
    struct Char_53  digit_dash_char1427 = ( (  from_dash_u8874 ) ( (  op_dash_add764 ( (  digit1426 ) , (  from_dash_integral194 ( 48 ) ) ) ) ) );
    return ( ( Maybe_588_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_588   next1240 (    struct StrConcatIter_1233 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next589 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next1241 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1239 (    struct StrConcatIter_1232 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1240 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next589 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each1231 (    struct StrConcatIter_1232  iterable1074 ,   struct envunion1236  fun1076 ) {
    struct StrConcatIter_1232  temp1237 = ( (  into_dash_iter1238 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1232 *  it1077 = ( &temp1237 );
    while ( ( true ) ) {
        struct Maybe_588  dref1078 = ( (  next1239 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_588_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_588_Just_t ) {
                struct envunion1236  temp1251 = (  fun1076 );
                ( temp1251.fun ( &temp1251.env ,  ( dref1078 .stuff .Maybe_588_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  int32_t   count_dash_digits1258 (    size_t  self1430 ) {
    if ( (  eq221 ( (  self1430 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral44 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral44 ( 0 ) );
    while ( (  cmp166 ( (  self1430 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div193 ( (  self1430 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1431 = (  op_dash_add256 ( (  digits1431 ) , (  from_dash_integral44 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1234   uint_dash_iter1257 (    size_t  int1437 ) {
    return ( (struct IntStrIter_1234) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1258 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1234   chars1256 (    size_t  self1467 ) {
    return ( (  uint_dash_iter1257 ) ( (  self1467 ) ) );
}

static  struct StrConcatIter_1233   into_dash_iter1255 (    struct StrConcat_61  dref1498 ) {
    return ( (struct StrConcatIter_1233) { .f_left = ( (  chars590 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1256 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1233   chars1254 (    struct StrConcat_61  self1509 ) {
    return ( (  into_dash_iter1255 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1232   into_dash_iter1253 (    struct StrConcat_60  dref1498 ) {
    return ( (struct StrConcatIter_1232) { .f_left = ( (  chars1254 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars590 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1232   chars1252 (    struct StrConcat_60  self1509 ) {
    return ( (  into_dash_iter1253 ) ( (  self1509 ) ) );
}

static  enum Unit_7   write_dash_slice1263 (   struct env46* env ,    struct StrBuilder_50 *  builder2739 ,    struct Slice_12  s2741 ) {
    struct envunion47  temp1264 = ( (struct envunion47){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all320 , .env =  env->envinst36 } );
    ( temp1264.fun ( &temp1264.env ,  ( & ( ( * (  builder2739 ) ) .f_chars ) ) ,  (  s2741 ) ) );
    return ( Unit_7_Unit );
}

static  struct Slice_12   from_dash_char1265 (    struct Char_53  c1941 ,    uint8_t *  buf1943 ) {
    struct CharDestructured_187  dref1944 = ( (  destructure189 ) ( (  c1941 ) ) );
    if ( dref1944.tag == CharDestructured_187_Ref_t ) {
        return ( (struct Slice_12) { .f_ptr = ( ( dref1944 .stuff .CharDestructured_187_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1944 .stuff .CharDestructured_187_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1944.tag == CharDestructured_187_Scalar_t ) {
            if ( (  cmp197 ( ( ( dref1944 .stuff .CharDestructured_187_Scalar_s .field0 ) .f_value ) , (  from_dash_integral198 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1266 = ( (  from_dash_string45 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp1266);
                exit ( 1 );
                ( Unit_7_Unit );
            }
            (*  buf1943 ) = ( (  u32_dash_u8200 ) ( ( ( dref1944 .stuff .CharDestructured_187_Scalar_s .field0 ) .f_value ) ) );
            return ( (struct Slice_12) { .f_ptr = (  buf1943 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_7   write_dash_char1261 (   struct env48* env ,    struct StrBuilder_50 *  builder2744 ,    struct Char_53  c2746 ) {
    struct envunion49  temp1262 = ( (struct envunion49){ .fun = (  enum Unit_7  (*) (  struct env46*  ,    struct StrBuilder_50 *  ,    struct Slice_12  ) )write_dash_slice1263 , .env =  env->envinst46 } );
    uint8_t  temp1268;
    uint8_t  temp1267 = (  temp1268 );
    ( temp1262.fun ( &temp1262.env ,  (  builder2744 ) ,  ( (  from_dash_char1265 ) ( (  c2746 ) ,  ( &temp1267 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1259 (   struct env1235* env ,    struct Char_53  c2753 ) {
    struct envunion52  temp1260 = ( (struct envunion52){ .fun = (  enum Unit_7  (*) (  struct env48*  ,    struct StrBuilder_50 *  ,    struct Char_53  ) )write_dash_char1261 , .env =  env->envinst48 } );
    return ( temp1260.fun ( &temp1260.env ,  ( env->builder2749 ) ,  (  c2753 ) ) );
}

static  enum Unit_7   write1230 (   struct env54* env ,    struct StrBuilder_50 *  builder2749 ,    struct StrConcat_60  s2751 ) {
    struct env1235 envinst1235 = {
        .envinst48 = env->envinst48 ,
        .builder2749 =  builder2749 ,
    };
    ( (  for_dash_each1231 ) ( ( (  chars1252 ) ( (  s2751 ) ) ) ,  ( (struct envunion1236){ .fun = (  enum Unit_7  (*) (  struct env1235*  ,    struct Char_53  ) )lam1259 , .env =  envinst1235 } ) ) );
    return ( Unit_7_Unit );
}

static  uint8_t *   cast_dash_ptr1272 (    uint8_t *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_12   cast_dash_slice1271 (    struct Slice_12  s1932 ) {
    return ( (struct Slice_12) { .f_ptr = ( (  cast_dash_ptr1272 ) ( ( (  s1932 ) .f_ptr ) ) ) , .f_count = ( (  s1932 ) .f_count ) } );
}

static  struct StrView_21   as_dash_str1270 (    struct StrBuilder_50 *  builder2787 ) {
    return ( (struct StrView_21) { .f_contents = ( (  cast_dash_slice1271 ) ( ( (  subslice310 ) ( ( ( ( * (  builder2787 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2787 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_21   mk_dash_dyn_dash_str1226 (   struct env58* env ,    struct StrConcat_60  s2807 ,    enum CAllocator_9  al2809 ) {
    struct StrBuilder_50  temp1227 = ( (  mk1228 ) ( (  al2809 ) ) );
    struct StrBuilder_50 *  sb2810 = ( &temp1227 );
    struct envunion59  temp1229 = ( (struct envunion59){ .fun = (  enum Unit_7  (*) (  struct env54*  ,    struct StrBuilder_50 *  ,    struct StrConcat_60  ) )write1230 , .env =  env->envinst54 } );
    ( temp1229.fun ( &temp1229.env ,  (  sb2810 ) ,  (  s2807 ) ) );
    struct envunion56  temp1269 = ( (struct envunion56){ .fun = (  enum Unit_7  (*) (  struct env48*  ,    struct StrBuilder_50 *  ,    struct Char_53  ) )write_dash_char1261 , .env =  env->envinst48 } );
    ( temp1269.fun ( &temp1269.env ,  (  sb2810 ) ,  ( (  nullchar510 ) ( ) ) ) );
    struct StrView_21  dynstr2811 = ( (  as_dash_str1270 ) ( (  sb2810 ) ) );
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = ( ( (  dynstr2811 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub286 ( ( ( (  dynstr2811 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_7   set_dash_msg1224 (   struct env117* env ,    struct Editor_121 *  ed4064 ,    struct StrConcat_60  s4066 ) {
    ( (  reset_dash_msg914 ) ( (  ed4064 ) ) );
    struct envunion118  temp1225 = ( (struct envunion118){ .fun = (  struct StrView_21  (*) (  struct env58*  ,    struct StrConcat_60  ,    enum CAllocator_9  ) )mk_dash_dyn_dash_str1226 , .env =  env->envinst58 } );
    (*  ed4064 ) .f_msg = ( ( Maybe_125_Just ) ( ( temp1225.fun ( &temp1225.env ,  (  s4066 ) ,  ( ( * (  ed4064 ) ) .f_al ) ) ) ) );
    return ( Unit_7_Unit );
}

struct env1274 {
    ;
    ;
    struct Editor_121 *  ed4076;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env111 envinst111;
    ;
    ;
};

struct envunion1275 {
    enum Unit_7  (*fun) (  struct env1274*  ,    struct StrView_21  );
    struct env1274 env;
};

static  enum Unit_7   if_dash_just1273 (    struct Maybe_125  x1291 ,   struct envunion1275  fun1293 ) {
    struct Maybe_125  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_125_Just_t ) {
        struct envunion1275  temp1276 = (  fun1293 );
        ( temp1276.fun ( &temp1276.env ,  ( dref1294 .stuff .Maybe_125_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_125_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  struct Pos_20   max_dash_pos1278 (    struct Pane_122 *  pane3991 ) {
    return ( {  struct Maybe_28  dref3992 = ( ( * (  pane3991 ) ) .f_sel ) ; dref3992.tag == Maybe_28_Just_t ? ( (  max300 ) ( ( ( * (  pane3991 ) ) .f_cursor ) ,  ( dref3992 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( ( * (  pane3991 ) ) .f_cursor ) ; } );
}

static  uint8_t   elem_dash_get1280 (    struct Slice_12  self1867 ,    size_t  idx1869 ) {
    return ( (  get361 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

static  uint8_t   last1279 (    struct Slice_12  s1935 ) {
    if ( (  eq221 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1043 ) ( ( (  from_dash_string202 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1280 ( (  s1935 ) , (  op_dash_sub286 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1281 (    int32_t  x1352 ,    int32_t  mn1354 ,    int32_t  mx1356 ) {
    if ( (  cmp299 ( (  x1352 ) , (  mn1354 ) ) == 0 ) ) {
        return (  mn1354 );
    } else {
        if ( (  cmp299 ( (  x1352 ) , (  mx1356 ) ) == 2 ) ) {
            return (  mx1356 );
        } else {
            return (  x1352 );
        }
    }
}

static  enum Unit_7   lam1277 (   struct env1274* env ,    struct StrView_21  cp4083 ) {
    struct Pos_20  start4084 = ( (  max_dash_pos1278 ) ( ( (  pane970 ) ( ( env->ed4076 ) ) ) ) );
    if ( (  eq190 ( ( (  last1279 ) ( ( (  cp4083 ) .f_contents ) ) ) , ( (  ascii_dash_u8727 ) ( ( (  from_dash_charlike769 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        start4084 = ( (struct Pos_20) { .f_line = ( (  clamp1281 ) ( (  op_dash_add256 ( ( (  start4084 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  num_dash_lines973 ) ( ( ( * ( (  pane970 ) ( ( env->ed4076 ) ) ) ) .f_buf ) ) ) ) ) , .f_bi = (  from_dash_integral44 ( 0 ) ) } );
    } else {
        start4084 = ( (  right_dash_pos972 ) ( ( ( ( * ( env->ed4076 ) ) .f_pane ) .f_buf ) ,  (  start4084 ) ) );
    }
    struct envunion131  temp1282 = ( (struct envunion131){ .fun = (  enum Unit_7  (*) (  struct env111*  ,    struct Pane_122 *  ,    struct Tuple2_132  ,    struct StrView_21  ) )replace_dash_selection1105 , .env =  env->envinst111 } );
    ( temp1282.fun ( &temp1282.env ,  ( (  pane970 ) ( ( env->ed4076 ) ) ) ,  ( ( Tuple2_132_Tuple2 ) ( (  start4084 ) ,  (  start4084 ) ) ) ,  (  cp4083 ) ) );
    return ( Unit_7_Unit );
}

struct envunion1285 {
    enum Unit_7  (*fun) (  struct env111*  ,    struct Pane_122 *  ,    struct Tuple2_132  ,    struct StrView_21  );
    struct env111 env;
};

struct env1284 {
    ;
    ;
    ;
    ;
    struct env111 envinst111;
    struct Editor_121 *  ed4076;
    ;
    ;
    ;
};

struct envunion1286 {
    enum Unit_7  (*fun) (  struct env1284*  ,    struct StrView_21  );
    struct env1284 env;
};

static  enum Unit_7   if_dash_just1283 (    struct Maybe_125  x1291 ,   struct envunion1286  fun1293 ) {
    struct Maybe_125  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_125_Just_t ) {
        struct envunion1286  temp1287 = (  fun1293 );
        ( temp1287.fun ( &temp1287.env ,  ( dref1294 .stuff .Maybe_125_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_125_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  struct Pos_20   min_dash_pos1289 (    struct Pane_122 *  pane3986 ) {
    return ( {  struct Maybe_28  dref3987 = ( ( * (  pane3986 ) ) .f_sel ) ; dref3987.tag == Maybe_28_Just_t ? ( (  min297 ) ( ( ( * (  pane3986 ) ) .f_cursor ) ,  ( dref3987 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( ( * (  pane3986 ) ) .f_cursor ) ; } );
}

static  enum Unit_7   lam1288 (   struct env1284* env ,    struct StrView_21  cp4086 ) {
    struct Pos_20  start4087 = ( (  min_dash_pos1289 ) ( ( (  pane970 ) ( ( env->ed4076 ) ) ) ) );
    if ( (  eq190 ( ( (  last1279 ) ( ( (  cp4086 ) .f_contents ) ) ) , ( (  ascii_dash_u8727 ) ( ( (  from_dash_charlike769 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_20  temp1290 = (  start4087 );
        temp1290 .  f_bi = (  from_dash_integral44 ( 0 ) );
        start4087 = ( temp1290 );
    }
    struct envunion1285  temp1291 = ( (struct envunion1285){ .fun = (  enum Unit_7  (*) (  struct env111*  ,    struct Pane_122 *  ,    struct Tuple2_132  ,    struct StrView_21  ) )replace_dash_selection1105 , .env =  env->envinst111 } );
    ( temp1291.fun ( &temp1291.env ,  ( (  pane970 ) ( ( env->ed4076 ) ) ) ,  ( ( Tuple2_132_Tuple2 ) ( (  start4087 ) ,  (  start4087 ) ) ) ,  (  cp4086 ) ) );
    return ( Unit_7_Unit );
}

struct envunion1294 {
    enum Unit_7  (*fun) (  struct env111*  ,    struct Pane_122 *  ,    struct Tuple2_132  ,    struct StrView_21  );
    struct env111 env;
};

struct env1293 {
    ;
    struct Editor_121 *  ed4076;
    ;
    struct env111 envinst111;
};

struct envunion1295 {
    enum Unit_7  (*fun) (  struct env1293*  ,    struct StrView_21  );
    struct env1293 env;
};

static  enum Unit_7   if_dash_just1292 (    struct Maybe_125  x1291 ,   struct envunion1295  fun1293 ) {
    struct Maybe_125  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_125_Just_t ) {
        struct envunion1295  temp1296 = (  fun1293 );
        ( temp1296.fun ( &temp1296.env ,  ( dref1294 .stuff .Maybe_125_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_125_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1297 (   struct env1293* env ,    struct StrView_21  cp4089 ) {
    struct Pos_20  start4090 = ( (  min_dash_pos1289 ) ( ( (  pane970 ) ( ( env->ed4076 ) ) ) ) );
    struct envunion1294  temp1298 = ( (struct envunion1294){ .fun = (  enum Unit_7  (*) (  struct env111*  ,    struct Pane_122 *  ,    struct Tuple2_132  ,    struct StrView_21  ) )replace_dash_selection1105 , .env =  env->envinst111 } );
    ( temp1298.fun ( &temp1298.env ,  ( (  pane970 ) ( ( env->ed4076 ) ) ) ,  ( ( Tuple2_132_Tuple2 ) ( (  start4090 ) ,  (  start4090 ) ) ) ,  (  cp4089 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   expand1299 (    struct Pane_122 *  pane3996 ) {
    struct Pos_20  min_dash_pos3997 = ( (  min_dash_pos1289 ) ( (  pane3996 ) ) );
    struct Pos_20  max_dash_pos3998 = ( (  max_dash_pos1278 ) ( (  pane3996 ) ) );
    int32_t  max_dash_pos_dash_max3999 = ( (  size_dash_i32178 ) ( ( (  num_dash_bytes966 ) ( ( (  line933 ) ( ( ( * (  pane3996 ) ) .f_buf ) ,  ( (  max_dash_pos3998 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq302 ( ( (  min_dash_pos3997 ) .f_bi ) , (  from_dash_integral44 ( 0 ) ) ) ) && (  eq302 ( ( (  max_dash_pos3998 ) .f_bi ) , (  max_dash_pos_dash_max3999 ) ) ) ) ) ) {
        struct Pos_20  temp1300 = (  min_dash_pos3997 );
        temp1300 .  f_bi = (  from_dash_integral44 ( 0 ) );
        (*  pane3996 ) .f_sel = ( ( Maybe_28_Just ) ( ( temp1300 ) ) );
        struct Pos_20  temp1301 = (  max_dash_pos3998 );
        temp1301 .  f_bi = (  max_dash_pos_dash_max3999 );
        (*  pane3996 ) .f_cursor = ( temp1301 );
    } else {
        if ( (  cmp299 ( (  op_dash_add256 ( ( (  max_dash_pos3998 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) ) , ( (  num_dash_lines973 ) ( ( ( * (  pane3996 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_7_Unit );
        }
        struct Pos_20  temp1302 = (  min_dash_pos3997 );
        temp1302 .  f_bi = (  from_dash_integral44 ( 0 ) );
        (*  pane3996 ) .f_sel = ( ( Maybe_28_Just ) ( ( temp1302 ) ) );
        int32_t  next_dash_line4000 = (  op_dash_add256 ( ( (  max_dash_pos3998 ) .f_line ) , (  from_dash_integral44 ( 1 ) ) ) );
        (*  pane3996 ) .f_cursor = ( (struct Pos_20) { .f_line = (  next_dash_line4000 ) , .f_bi = ( (  size_dash_i32178 ) ( ( (  num_dash_bytes966 ) ( ( (  line933 ) ( ( ( * (  pane3996 ) ) .f_buf ) ,  (  next_dash_line4000 ) ) ) ) ) ) ) } );
    }
    return ( Unit_7_Unit );
}

static  bool   is_dash_none1303 (    struct Maybe_28  m1264 ) {
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

static  enum Unit_7   handle_dash_normal_dash_key925 (   struct env127* env ,    struct Editor_121 *  ed4076 ,    struct Key_140  key4078 ) {
    struct Key_140  dref4079 = (  key4078 );
    if ( dref4079.tag == Key_140_Char_t ) {
        if ( (  eq768 ( ( dref4079 .stuff .Key_140_Char_s .field0 ) , ( (  from_dash_charlike769 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4076 ) .f_running = ( false );
        } else {
            if ( (  eq768 ( ( dref4079 .stuff .Key_140_Char_s .field0 ) , ( (  from_dash_charlike769 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left926 ) ( ( (  pane970 ) ( (  ed4076 ) ) ) ) );
            } else {
                if ( (  eq768 ( ( dref4079 .stuff .Key_140_Char_s .field0 ) , ( (  from_dash_charlike769 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right971 ) ( ( (  pane970 ) ( (  ed4076 ) ) ) ) );
                } else {
                    if ( (  eq768 ( ( dref4079 .stuff .Key_140_Char_s .field0 ) , ( (  from_dash_charlike769 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down974 ) ( ( (  pane970 ) ( (  ed4076 ) ) ) ) );
                    } else {
                        if ( (  eq768 ( ( dref4079 .stuff .Key_140_Char_s .field0 ) , ( (  from_dash_charlike769 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up978 ) ( ( (  pane970 ) ( (  ed4076 ) ) ) ) );
                        } else {
                            if ( (  eq768 ( ( dref4079 .stuff .Key_140_Char_s .field0 ) , ( (  from_dash_charlike769 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode979 ) ( ( (  pane970 ) ( (  ed4076 ) ) ) ,  ( Mode_123_Insert ) ) );
                            } else {
                                if ( (  eq768 ( ( dref4079 .stuff .Key_140_Char_s .field0 ) , ( (  from_dash_charlike769 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  advance_dash_word981 ) ( ( (  pane970 ) ( (  ed4076 ) ) ) ,  ( MoveDirection_982_MoveFwd ) ,  ( MoveTarget_983_NextWordStart ) ) );
                                } else {
                                    if ( (  eq768 ( ( dref4079 .stuff .Key_140_Char_s .field0 ) , ( (  from_dash_charlike769 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  advance_dash_word981 ) ( ( (  pane970 ) ( (  ed4076 ) ) ) ,  ( MoveDirection_982_MoveFwd ) ,  ( MoveTarget_983_NextWordEnd ) ) );
                                    } else {
                                        if ( (  eq768 ( ( dref4079 .stuff .Key_140_Char_s .field0 ) , ( (  from_dash_charlike769 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  advance_dash_word981 ) ( ( (  pane970 ) ( (  ed4076 ) ) ) ,  ( MoveDirection_982_MoveBwd ) ,  ( MoveTarget_983_NextWordEnd ) ) );
                                        } else {
                                            if ( (  eq768 ( ( dref4079 .stuff .Key_140_Char_s .field0 ) , ( (  from_dash_charlike769 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct envunion129  temp1017 = ( (struct envunion129){ .fun = (  enum Unit_7  (*) (  struct env109*  ,    struct Pane_122 *  ) )redo1018 , .env =  env->envinst109 } );
                                                ( temp1017.fun ( &temp1017.env ,  ( (  pane970 ) ( (  ed4076 ) ) ) ) );
                                            } else {
                                                if ( (  eq768 ( ( dref4079 .stuff .Key_140_Char_s .field0 ) , ( (  from_dash_charlike769 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                    struct envunion128  temp1056 = ( (struct envunion128){ .fun = (  enum Unit_7  (*) (  struct env107*  ,    struct Pane_122 *  ) )undo1057 , .env =  env->envinst107 } );
                                                    ( temp1056.fun ( &temp1056.env ,  ( (  pane970 ) ( (  ed4076 ) ) ) ) );
                                                } else {
                                                    if ( (  eq768 ( ( dref4079 .stuff .Key_140_Char_s .field0 ) , ( (  from_dash_charlike769 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                        struct envunion133  temp1074 = ( (struct envunion133){ .fun = (  enum Unit_7  (*) (  struct env113*  ,    struct Editor_121 *  ) )copy_dash_selection_dash_to_dash_clipboard1075 , .env =  env->envinst113 } );
                                                        ( temp1074.fun ( &temp1074.env ,  (  ed4076 ) ) );
                                                        struct envunion1104  temp1103 = ( (struct envunion1104){ .fun = (  enum Unit_7  (*) (  struct env111*  ,    struct Pane_122 *  ,    struct Tuple2_132  ,    struct StrView_21  ) )replace_dash_selection1105 , .env =  env->envinst111 } );
                                                        ( temp1103.fun ( &temp1103.env ,  ( (  pane970 ) ( (  ed4076 ) ) ) ,  ( (  selection1076 ) ( ( (  pane970 ) ( (  ed4076 ) ) ) ) ) ,  ( (  from_dash_string202 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                        ( (  set_dash_mode979 ) ( ( (  pane970 ) ( (  ed4076 ) ) ) ,  ( Mode_123_Normal ) ) );
                                                    } else {
                                                        if ( (  eq768 ( ( dref4079 .stuff .Key_140_Char_s .field0 ) , ( (  from_dash_charlike769 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                            struct envunion1218  temp1217 = ( (struct envunion1218){ .fun = (  enum Unit_7  (*) (  struct env113*  ,    struct Editor_121 *  ) )copy_dash_selection_dash_to_dash_clipboard1075 , .env =  env->envinst113 } );
                                                            ( temp1217.fun ( &temp1217.env ,  (  ed4076 ) ) );
                                                            struct envunion1220  temp1219 = ( (struct envunion1220){ .fun = (  enum Unit_7  (*) (  struct env111*  ,    struct Pane_122 *  ,    struct Tuple2_132  ,    struct StrView_21  ) )replace_dash_selection1105 , .env =  env->envinst111 } );
                                                            ( temp1219.fun ( &temp1219.env ,  ( (  pane970 ) ( (  ed4076 ) ) ) ,  ( (  selection1076 ) ( ( (  pane970 ) ( (  ed4076 ) ) ) ) ) ,  ( (  from_dash_string202 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                            ( (  set_dash_mode979 ) ( ( (  pane970 ) ( (  ed4076 ) ) ) ,  ( Mode_123_Insert ) ) );
                                                        } else {
                                                            if ( (  eq768 ( ( dref4079 .stuff .Key_140_Char_s .field0 ) , ( (  from_dash_charlike769 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion1222  temp1221 = ( (struct envunion1222){ .fun = (  enum Unit_7  (*) (  struct env113*  ,    struct Editor_121 *  ) )copy_dash_selection_dash_to_dash_clipboard1075 , .env =  env->envinst113 } );
                                                                ( temp1221.fun ( &temp1221.env ,  (  ed4076 ) ) );
                                                                size_t  bytes_dash_yanked4081 = ( (  num_dash_bytes966 ) ( ( (  or_dash_else357 ) ( ( ( * (  ed4076 ) ) .f_clipboard ) ,  ( (  from_dash_string202 ) ( ( "" ) ,  ( 0 ) ) ) ) ) ) );
                                                                struct envunion130  temp1223 = ( (struct envunion130){ .fun = (  enum Unit_7  (*) (  struct env117*  ,    struct Editor_121 *  ,    struct StrConcat_60  ) )set_dash_msg1224 , .env =  env->envinst117 } );
                                                                ( temp1223.fun ( &temp1223.env ,  (  ed4076 ) ,  ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4081 ) ) ) ,  ( (  from_dash_string202 ) ( ( " bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                            } else {
                                                                if ( (  eq768 ( ( dref4079 .stuff .Key_140_Char_s .field0 ) , ( (  from_dash_charlike769 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct env1274 envinst1274 = {
                                                                        .ed4076 =  ed4076 ,
                                                                        .envinst111 = env->envinst111 ,
                                                                    };
                                                                    ( (  if_dash_just1273 ) ( ( ( * (  ed4076 ) ) .f_clipboard ) ,  ( (struct envunion1275){ .fun = (  enum Unit_7  (*) (  struct env1274*  ,    struct StrView_21  ) )lam1277 , .env =  envinst1274 } ) ) );
                                                                } else {
                                                                    if ( (  eq768 ( ( dref4079 .stuff .Key_140_Char_s .field0 ) , ( (  from_dash_charlike769 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct env1284 envinst1284 = {
                                                                            .envinst111 = env->envinst111 ,
                                                                            .ed4076 =  ed4076 ,
                                                                        };
                                                                        ( (  if_dash_just1283 ) ( ( ( * (  ed4076 ) ) .f_clipboard ) ,  ( (struct envunion1286){ .fun = (  enum Unit_7  (*) (  struct env1284*  ,    struct StrView_21  ) )lam1288 , .env =  envinst1284 } ) ) );
                                                                    } else {
                                                                        if ( (  eq768 ( ( dref4079 .stuff .Key_140_Char_s .field0 ) , ( (  from_dash_charlike769 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct env1293 envinst1293 = {
                                                                                .ed4076 =  ed4076 ,
                                                                                .envinst111 = env->envinst111 ,
                                                                            };
                                                                            ( (  if_dash_just1292 ) ( ( ( * (  ed4076 ) ) .f_clipboard ) ,  ( (struct envunion1295){ .fun = (  enum Unit_7  (*) (  struct env1293*  ,    struct StrView_21  ) )lam1297 , .env =  envinst1293 } ) ) );
                                                                        } else {
                                                                            if ( (  eq768 ( ( dref4079 .stuff .Key_140_Char_s .field0 ) , ( (  from_dash_charlike769 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                ( (  expand1299 ) ( ( (  pane970 ) ( (  ed4076 ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq768 ( ( dref4079 .stuff .Key_140_Char_s .field0 ) , ( (  from_dash_charlike769 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    ( (  set_dash_mode979 ) ( ( (  pane970 ) ( (  ed4076 ) ) ) ,  ( Mode_123_Select ) ) );
                                                                                    if ( ( (  is_dash_none1303 ) ( ( ( ( * (  ed4076 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                        (*  ed4076 ) .f_pane .f_sel = ( ( Maybe_28_Just ) ( ( ( ( * (  ed4076 ) ) .f_pane ) .f_cursor ) ) );
                                                                                    }
                                                                                } else {
                                                                                    if ( (  eq768 ( ( dref4079 .stuff .Key_140_Char_s .field0 ) , ( (  from_dash_charlike769 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        (*  ed4076 ) .f_mode = ( ( EditorMode_126_Cmd ) ( ( (  mk1228 ) ( ( ( * (  ed4076 ) ) .f_al ) ) ) ) );
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
    }
    else {
        if ( dref4079.tag == Key_140_Escape_t ) {
            ( (  set_dash_mode979 ) ( ( (  pane970 ) ( (  ed4076 ) ) ) ,  ( Mode_123_Normal ) ) );
        }
        else {
            if ( true ) {
            }
        }
    }
    return ( Unit_7_Unit );
}

struct envunion1305 {
    enum Unit_7  (*fun) (  struct env127*  ,    struct Editor_121 *  ,    struct Key_140  );
    struct env127 env;
};

static  enum Unit_7   add_dash_str_dash_at_dash_char1307 (   struct env102* env ,    struct Pane_122 *  self4003 ,    struct StrView_21  s4005 ) {
    struct Pos_20  cur4006 = ( ( * (  self4003 ) ) .f_cursor );
    struct envunion103  temp1308 = ( (struct envunion103){ .fun = (  struct Maybe_104  (*) (  struct env97*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_104  ) )change1107 , .env =  env->envinst97 } );
    ( temp1308.fun ( &temp1308.env ,  ( ( * (  self4003 ) ) .f_buf ) ,  (  cur4006 ) ,  (  cur4006 ) ,  (  s4005 ) ,  ( (struct Maybe_104) { .tag = Maybe_104_None_t } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   backspace1310 (   struct env105* env ,    struct Pane_122 *  self4009 ) {
    struct Pos_20  prev_dash_cur4010 = ( ( * (  self4009 ) ) .f_cursor );
    ( (  move_dash_left926 ) ( (  self4009 ) ) );
    struct envunion106  temp1311 = ( (struct envunion106){ .fun = (  struct Maybe_104  (*) (  struct env97*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_104  ) )change1107 , .env =  env->envinst97 } );
    ( temp1311.fun ( &temp1311.env ,  ( ( * (  self4009 ) ) .f_buf ) ,  ( ( * (  self4009 ) ) .f_cursor ) ,  (  prev_dash_cur4010 ) ,  ( (  from_dash_string202 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_104) { .tag = Maybe_104_None_t } ) ) );
    return ( Unit_7_Unit );
}

struct Array_1313 {
    char _arr [1];
};

static  char *   cast1314 (    struct Array_1313 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_784   as_dash_slice1312 (    struct Array_1313 *  arr2272 ) {
    return ( (struct Slice_784) { .f_ptr = ( (  cast1314 ) ( (  arr2272 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1313   from_dash_listlike1316 (    struct Array_1313  self330 ) {
    return (  self330 );
}

struct envunion1318 {
    enum Unit_7  (*fun) (  struct env102*  ,    struct Pane_122 *  ,    struct StrView_21  );
    struct env102 env;
};

struct Scanner_1321 {
    struct StrView_21  f_s;
};

static  struct Scanner_1321   mk_dash_from_dash_strview1323 (    struct StrView_21  s3169 ) {
    return ( (struct Scanner_1321) { .f_s = (  s3169 ) } );
}

struct TakeWhile_1328 {
    struct StrViewIter_585  f_it;
    bool (*  f_pred )(    struct Char_53  );
};

struct Map_1327 {
    struct TakeWhile_1328  field0;
    size_t (*  field1 )(    struct Char_53  );
};

static struct Map_1327 Map_1327_Map (  struct TakeWhile_1328  field0 ,  size_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1327 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1327   into_dash_iter1330 (    struct Map_1327  self796 ) {
    return (  self796 );
}

struct Maybe_1331 {
    enum {
        Maybe_1331_None_t,
        Maybe_1331_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_1331_Just_s;
    } stuff;
};

static struct Maybe_1331 Maybe_1331_Just (  size_t  field0 ) {
    return ( struct Maybe_1331 ) { .tag = Maybe_1331_Just_t, .stuff = { .Maybe_1331_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_588   next1333 (    struct TakeWhile_1328 *  self964 ) {
    struct Maybe_588  mx965 = ( (  next589 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_588  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_588_None_t ) {
        return ( (struct Maybe_588) { .tag = Maybe_588_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_588_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_588_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_588_Just ) ( ( dref966 .stuff .Maybe_588_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_588) { .tag = Maybe_588_None_t } );
            }
        }
    }
}

static  struct Maybe_1331   next1332 (    struct Map_1327 *  dref798 ) {
    struct Maybe_588  dref801 = ( (  next1333 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_588_None_t ) {
        return ( (struct Maybe_1331) { .tag = Maybe_1331_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_588_Just_t ) {
            return ( ( Maybe_1331_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_588_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1329 (    struct Map_1327  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1327  it1099 = ( (  into_dash_iter1330 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1331  dref1100 = ( (  next1332 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1331_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1331_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1331_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1334 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1334);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1335;
    return (  temp1335 );
}

static  size_t   lam1336 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add214 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1326 (    struct Map_1327  it1110 ) {
    return ( (  reduce1329 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1336 ) ) );
}

static  struct TakeWhile_1328   into_dash_iter1338 (    struct TakeWhile_1328  self961 ) {
    return (  self961 );
}

static  struct Map_1327   map1337 (    struct TakeWhile_1328  iterable805 ,    size_t (*  fun807 )(    struct Char_53  ) ) {
    struct TakeWhile_1328  it808 = ( (  into_dash_iter1338 ) ( (  iterable805 ) ) );
    return ( ( Map_1327_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1328   take_dash_while1339 (    struct StrViewIter_585  it970 ,    bool (*  pred972 )(    struct Char_53  ) ) {
    return ( (struct TakeWhile_1328) { .f_it = ( (  into_dash_iter587 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1340 (    struct Char_53  c2202 ) {
    return ( (  c2202 ) .f_num_dash_bytes );
}

static  struct StrView_21   take_dash_while1325 (    struct StrView_21  self2198 ,    bool (*  fun2200 )(    struct Char_53  ) ) {
    size_t  bi2203 = ( (  sum1326 ) ( ( (  map1337 ) ( ( (  take_dash_while1339 ) ( ( (  chars590 ) ( (  self2198 ) ) ) ,  (  fun2200 ) ) ) ,  (  lam1340 ) ) ) ) );
    return ( (  byte_dash_substr367 ) ( (  self2198 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2203 ) ) );
}

static  struct StrView_21   byte_dash_substr_dash_from1341 (    struct StrView_21  s2190 ,    size_t  from2192 ) {
    return ( (struct StrView_21) { .f_contents = ( (  from309 ) ( ( (  s2190 ) .f_contents ) ,  (  from2192 ) ) ) } );
}

static  struct StrView_21   take_dash_str_dash_while1324 (    struct Scanner_1321 *  sc3215 ,    bool (*  fun3217 )(    struct Char_53  ) ) {
    struct StrView_21  s3218 = ( (  take_dash_while1325 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  (  fun3217 ) ) );
    (*  sc3215 ) .f_s = ( (  byte_dash_substr_dash_from1341 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  ( (  num_dash_bytes966 ) ( (  s3218 ) ) ) ) );
    return (  s3218 );
}

static  bool   is_dash_not_dash_whitespace1342 (    struct Char_53  c2382 ) {
    return ( ! ( (  is_dash_whitespace1004 ) ( (  c2382 ) ) ) );
}

struct TakeWhile_1348 {
    struct StrViewIter_585  f_it;
    bool (*  f_pred )(    struct Char_53  );
};

struct Map_1347 {
    struct TakeWhile_1348  field0;
    size_t (*  field1 )(    struct Char_53  );
};

static struct Map_1347 Map_1347_Map (  struct TakeWhile_1348  field0 ,  size_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1347 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1347   into_dash_iter1350 (    struct Map_1347  self796 ) {
    return (  self796 );
}

static  struct Maybe_588   next1352 (    struct TakeWhile_1348 *  self964 ) {
    struct Maybe_588  mx965 = ( (  next589 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_588  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_588_None_t ) {
        return ( (struct Maybe_588) { .tag = Maybe_588_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_588_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_588_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_588_Just ) ( ( dref966 .stuff .Maybe_588_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_588) { .tag = Maybe_588_None_t } );
            }
        }
    }
}

static  struct Maybe_1331   next1351 (    struct Map_1347 *  dref798 ) {
    struct Maybe_588  dref801 = ( (  next1352 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_588_None_t ) {
        return ( (struct Maybe_1331) { .tag = Maybe_1331_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_588_Just_t ) {
            return ( ( Maybe_1331_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_588_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1349 (    struct Map_1347  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1347  it1099 = ( (  into_dash_iter1350 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1331  dref1100 = ( (  next1351 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1331_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1331_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1331_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1353 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1353);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1354;
    return (  temp1354 );
}

static  size_t   lam1355 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add214 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1346 (    struct Map_1347  it1110 ) {
    return ( (  reduce1349 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1355 ) ) );
}

static  struct TakeWhile_1348   into_dash_iter1357 (    struct TakeWhile_1348  self961 ) {
    return (  self961 );
}

static  struct Map_1347   map1356 (    struct TakeWhile_1348  iterable805 ,    size_t (*  fun807 )(    struct Char_53  ) ) {
    struct TakeWhile_1348  it808 = ( (  into_dash_iter1357 ) ( (  iterable805 ) ) );
    return ( ( Map_1347_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1348   take_dash_while1358 (    struct StrViewIter_585  it970 ,    bool (*  pred972 )(    struct Char_53  ) ) {
    return ( (struct TakeWhile_1348) { .f_it = ( (  into_dash_iter587 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1359 (    struct Char_53  c2202 ) {
    return ( (  c2202 ) .f_num_dash_bytes );
}

static  struct StrView_21   take_dash_while1345 (    struct StrView_21  self2198 ,    bool (*  fun2200 )(    struct Char_53  ) ) {
    size_t  bi2203 = ( (  sum1346 ) ( ( (  map1356 ) ( ( (  take_dash_while1358 ) ( ( (  chars590 ) ( (  self2198 ) ) ) ,  (  fun2200 ) ) ) ,  (  lam1359 ) ) ) ) );
    return ( (  byte_dash_substr367 ) ( (  self2198 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2203 ) ) );
}

static  struct StrView_21   take_dash_str_dash_while1344 (    struct Scanner_1321 *  sc3215 ,    bool (*  fun3217 )(    struct Char_53  ) ) {
    struct StrView_21  s3218 = ( (  take_dash_while1345 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  (  fun3217 ) ) );
    (*  sc3215 ) .f_s = ( (  byte_dash_substr_dash_from1341 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  ( (  num_dash_bytes966 ) ( (  s3218 ) ) ) ) );
    return (  s3218 );
}

static  enum Unit_7   drop_dash_str_dash_while1343 (    struct Scanner_1321 *  sc3221 ,    bool (*  fun3223 )(    struct Char_53  ) ) {
    ( (  take_dash_str_dash_while1344 ) ( (  sc3221 ) ,  (  fun3223 ) ) );
    return ( Unit_7_Unit );
}

struct Zip_1363 {
    struct SliceIter_324  f_left_dash_it;
    struct SliceIter_324  f_right_dash_it;
};

struct Tuple2_1364 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_1364 Tuple2_1364_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_1364 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1366 {
    bool (*  fun1126 )(    struct Tuple2_1364  );
};

struct envunion1367 {
    bool  (*fun) (  struct env1366*  ,    struct Tuple2_1364  ,    bool  );
    struct env1366 env;
};

static  struct Zip_1363   into_dash_iter1368 (    struct Zip_1363  self911 ) {
    return (  self911 );
}

struct Maybe_1369 {
    enum {
        Maybe_1369_None_t,
        Maybe_1369_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1364  field0;
        } Maybe_1369_Just_s;
    } stuff;
};

static struct Maybe_1369 Maybe_1369_Just (  struct Tuple2_1364  field0 ) {
    return ( struct Maybe_1369 ) { .tag = Maybe_1369_Just_t, .stuff = { .Maybe_1369_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1369   next1370 (    struct Zip_1363 *  self914 ) {
    struct Zip_1363  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_327  dref916 = ( (  next328 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_327_None_t ) {
            return ( (struct Maybe_1369) { .tag = Maybe_1369_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_327_Just_t ) {
                struct Maybe_327  dref918 = ( (  next328 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_327_None_t ) {
                    return ( (struct Maybe_1369) { .tag = Maybe_1369_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_327_Just_t ) {
                        ( (  next328 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next328 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1369_Just ) ( ( ( Tuple2_1364_Tuple2 ) ( ( dref916 .stuff .Maybe_327_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_327_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1365 (    struct Zip_1363  iterable1093 ,    bool  base1095 ,   struct envunion1367  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_1363  it1099 = ( (  into_dash_iter1368 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1369  dref1100 = ( (  next1370 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1369_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1369_Just_t ) {
                struct envunion1367  temp1371 = (  fun1097 );
                x1098 = ( temp1371.fun ( &temp1371.env ,  ( dref1100 .stuff .Maybe_1369_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1372 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1372);
    exit ( 1 );
    ( Unit_7_Unit );
    bool  temp1373;
    return (  temp1373 );
}

static  bool   lam1374 (   struct env1366* env ,    struct Tuple2_1364  e1128 ,    bool  x1130 ) {
    return ( ( ( env->fun1126 ) ( (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1362 (    struct Zip_1363  it1124 ,    bool (*  fun1126 )(    struct Tuple2_1364  ) ) {
    struct env1366 envinst1366 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1365 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1367){ .fun = (  bool  (*) (  struct env1366*  ,    struct Tuple2_1364  ,    bool  ) )lam1374 , .env =  envinst1366 } ) ) );
}

static  struct Zip_1363   zip1375 (    struct Slice_12  left922 ,    struct Slice_12  right924 ) {
    struct SliceIter_324  left_dash_it925 = ( (  into_dash_iter326 ) ( (  left922 ) ) );
    struct SliceIter_324  right_dash_it926 = ( (  into_dash_iter326 ) ( (  right924 ) ) );
    return ( (struct Zip_1363) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  bool   lam1376 (    struct Tuple2_1364  dref1862 ) {
    return (  eq190 ( ( dref1862 .field0 ) , ( dref1862 .field1 ) ) );
}

static  bool   eq1361 (    struct Slice_12  l1859 ,    struct Slice_12  r1861 ) {
    if ( ( !  eq221 ( ( (  l1859 ) .f_count ) , ( (  r1861 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all1362 ) ( ( (  zip1375 ) ( (  l1859 ) ,  (  r1861 ) ) ) ,  (  lam1376 ) ) );
}

static  bool   eq1360 (    struct StrView_21  l2209 ,    struct StrView_21  r2211 ) {
    return (  eq1361 ( ( (  l2209 ) .f_contents ) , ( (  r2211 ) .f_contents ) ) );
}

static  enum Unit_7   undefined1378 (  ) {
    enum Unit_7  temp1379;
    return (  temp1379 );
}

static  enum Unit_7   todo1377 (  ) {
    ( (  print1010 ) ( ( (  from_dash_string202 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( (  undefined1378 ) ( ) );
}

struct env1388 {
    struct env48 envinst48;
    struct StrBuilder_50 *  builder2749;
};

struct envunion1389 {
    enum Unit_7  (*fun) (  struct env1388*  ,    struct Char_53  );
    struct env1388 env;
};

static  enum Unit_7   for_dash_each1387 (    struct StrViewIter_585  iterable1074 ,   struct envunion1389  fun1076 ) {
    struct StrViewIter_585  temp1390 = ( (  into_dash_iter587 ) ( (  iterable1074 ) ) );
    struct StrViewIter_585 *  it1077 = ( &temp1390 );
    while ( ( true ) ) {
        struct Maybe_588  dref1078 = ( (  next589 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_588_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_588_Just_t ) {
                struct envunion1389  temp1391 = (  fun1076 );
                ( temp1391.fun ( &temp1391.env ,  ( dref1078 .stuff .Maybe_588_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1392 (   struct env1388* env ,    struct Char_53  c2753 ) {
    struct envunion52  temp1393 = ( (struct envunion52){ .fun = (  enum Unit_7  (*) (  struct env48*  ,    struct StrBuilder_50 *  ,    struct Char_53  ) )write_dash_char1261 , .env =  env->envinst48 } );
    return ( temp1393.fun ( &temp1393.env ,  ( env->builder2749 ) ,  (  c2753 ) ) );
}

static  enum Unit_7   write1386 (   struct env51* env ,    struct StrBuilder_50 *  builder2749 ,    struct StrView_21  s2751 ) {
    struct env1388 envinst1388 = {
        .envinst48 = env->envinst48 ,
        .builder2749 =  builder2749 ,
    };
    ( (  for_dash_each1387 ) ( ( (  chars590 ) ( (  s2751 ) ) ) ,  ( (struct envunion1389){ .fun = (  enum Unit_7  (*) (  struct env1388*  ,    struct Char_53  ) )lam1392 , .env =  envinst1388 } ) ) );
    return ( Unit_7_Unit );
}

static  struct StrView_21   mk_dash_dyn_dash_str1383 (   struct env55* env ,    struct StrView_21  s2807 ,    enum CAllocator_9  al2809 ) {
    struct StrBuilder_50  temp1384 = ( (  mk1228 ) ( (  al2809 ) ) );
    struct StrBuilder_50 *  sb2810 = ( &temp1384 );
    struct envunion57  temp1385 = ( (struct envunion57){ .fun = (  enum Unit_7  (*) (  struct env51*  ,    struct StrBuilder_50 *  ,    struct StrView_21  ) )write1386 , .env =  env->envinst51 } );
    ( temp1385.fun ( &temp1385.env ,  (  sb2810 ) ,  (  s2807 ) ) );
    struct envunion56  temp1394 = ( (struct envunion56){ .fun = (  enum Unit_7  (*) (  struct env48*  ,    struct StrBuilder_50 *  ,    struct Char_53  ) )write_dash_char1261 , .env =  env->envinst48 } );
    ( temp1394.fun ( &temp1394.env ,  (  sb2810 ) ,  ( (  nullchar510 ) ( ) ) ) );
    struct StrView_21  dynstr2811 = ( (  as_dash_str1270 ) ( (  sb2810 ) ) );
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = ( ( (  dynstr2811 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub286 ( ( ( (  dynstr2811 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_7   set_dash_msg1381 (   struct env115* env ,    struct Editor_121 *  ed4064 ,    struct StrView_21  s4066 ) {
    ( (  reset_dash_msg914 ) ( (  ed4064 ) ) );
    struct envunion116  temp1382 = ( (struct envunion116){ .fun = (  struct StrView_21  (*) (  struct env55*  ,    struct StrView_21  ,    enum CAllocator_9  ) )mk_dash_dyn_dash_str1383 , .env =  env->envinst55 } );
    (*  ed4064 ) .f_msg = ( ( Maybe_125_Just ) ( ( temp1382.fun ( &temp1382.env ,  (  s4066 ) ,  ( ( * (  ed4064 ) ) .f_al ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   run_dash_cmd1320 (   struct env119* env ,    struct Editor_121 *  ed4069 ,    struct StrView_21  s4071 ) {
    struct Scanner_1321  temp1322 = ( (  mk_dash_from_dash_strview1323 ) ( (  s4071 ) ) );
    struct Scanner_1321 *  sc4072 = ( &temp1322 );
    struct StrView_21  cmd4073 = ( (  take_dash_str_dash_while1324 ) ( (  sc4072 ) ,  (  is_dash_not_dash_whitespace1342 ) ) );
    ( (  drop_dash_str_dash_while1343 ) ( (  sc4072 ) ,  (  is_dash_whitespace1004 ) ) );
    if ( (  eq1360 ( (  cmd4073 ) , ( (  from_dash_charlike1089 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4069 ) .f_running = ( false );
    } else {
        if ( (  eq1360 ( (  cmd4073 ) , ( (  from_dash_string202 ) ( ( "wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq1360 ( (  cmd4073 ) , ( (  from_dash_charlike1089 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  todo1377 ) ( ) );
            } else {
                if ( (  eq1360 ( (  cmd4073 ) , ( (  from_dash_string202 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                } else {
                    struct envunion120  temp1380 = ( (struct envunion120){ .fun = (  enum Unit_7  (*) (  struct env115*  ,    struct Editor_121 *  ,    struct StrView_21  ) )set_dash_msg1381 , .env =  env->envinst115 } );
                    ( temp1380.fun ( &temp1380.env ,  (  ed4069 ) ,  ( (  from_dash_string202 ) ( ( "unknown command" ) ,  ( 15 ) ) ) ) );
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   free1395 (    struct StrBuilder_50 *  builder2793 ) {
    ( (  free406 ) ( ( & ( ( * (  builder2793 ) ) .f_chars ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Char_53   ascii_dash_char1397 (    char  c782 ) {
    return ( (  from_dash_u8874 ) ( ( (  ascii_dash_u8727 ) ( (  c782 ) ) ) ) );
}

static  enum Unit_7   handle_dash_key923 (   struct env134* env ,    struct Editor_121 *  ed4093 ,    struct Key_140  key4095 ) {
    struct EditorMode_126 *  dref4096 = ( & ( ( * (  ed4093 ) ) .f_mode ) );
    if ( (* dref4096 ).tag == EditorMode_126_Normal_t ) {
        enum Mode_123  dref4097 = ( ( ( * (  ed4093 ) ) .f_pane ) .f_mode );
        switch (  dref4097 ) {
            case Mode_123_Normal : {
                struct envunion139  temp924 = ( (struct envunion139){ .fun = (  enum Unit_7  (*) (  struct env127*  ,    struct Editor_121 *  ,    struct Key_140  ) )handle_dash_normal_dash_key925 , .env =  env->envinst127 } );
                ( temp924.fun ( &temp924.env ,  (  ed4093 ) ,  (  key4095 ) ) );
                break;
            }
            case Mode_123_Select : {
                struct envunion1305  temp1304 = ( (struct envunion1305){ .fun = (  enum Unit_7  (*) (  struct env127*  ,    struct Editor_121 *  ,    struct Key_140  ) )handle_dash_normal_dash_key925 , .env =  env->envinst127 } );
                ( temp1304.fun ( &temp1304.env ,  (  ed4093 ) ,  (  key4095 ) ) );
                break;
            }
            case Mode_123_Insert : {
                struct Key_140  dref4098 = (  key4095 );
                if ( dref4098.tag == Key_140_Escape_t ) {
                    ( (  set_dash_mode979 ) ( ( (  pane970 ) ( (  ed4093 ) ) ) ,  ( Mode_123_Normal ) ) );
                }
                else {
                    if ( dref4098.tag == Key_140_Enter_t ) {
                        struct envunion135  temp1306 = ( (struct envunion135){ .fun = (  enum Unit_7  (*) (  struct env102*  ,    struct Pane_122 *  ,    struct StrView_21  ) )add_dash_str_dash_at_dash_char1307 , .env =  env->envinst102 } );
                        ( temp1306.fun ( &temp1306.env ,  ( (  pane970 ) ( (  ed4093 ) ) ) ,  ( (  from_dash_charlike1089 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right971 ) ( ( (  pane970 ) ( (  ed4093 ) ) ) ) );
                    }
                    else {
                        if ( dref4098.tag == Key_140_Backspace_t ) {
                            struct envunion138  temp1309 = ( (struct envunion138){ .fun = (  enum Unit_7  (*) (  struct env105*  ,    struct Pane_122 *  ) )backspace1310 , .env =  env->envinst105 } );
                            ( temp1309.fun ( &temp1309.env ,  ( (  pane970 ) ( (  ed4093 ) ) ) ) );
                        }
                        else {
                            if ( dref4098.tag == Key_140_Char_t ) {
                                struct Array_1313  temp1315 = ( (  from_dash_listlike1316 ) ( ( (struct Array_1313) { ._arr = { ( dref4098 .stuff .Key_140_Char_s .field0 ) } } ) ) );
                                struct StrView_21  s4100 = ( (  from_dash_ascii_dash_slice799 ) ( ( (  as_dash_slice1312 ) ( ( &temp1315 ) ) ) ) );
                                struct envunion1318  temp1317 = ( (struct envunion1318){ .fun = (  enum Unit_7  (*) (  struct env102*  ,    struct Pane_122 *  ,    struct StrView_21  ) )add_dash_str_dash_at_dash_char1307 , .env =  env->envinst102 } );
                                ( temp1317.fun ( &temp1317.env ,  ( (  pane970 ) ( (  ed4093 ) ) ) ,  (  s4100 ) ) );
                                ( (  move_dash_right971 ) ( ( (  pane970 ) ( (  ed4093 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4096 ).tag == EditorMode_126_Cmd_t ) {
            struct Key_140  dref4102 = (  key4095 );
            if ( dref4102.tag == Key_140_Escape_t ) {
                (*  ed4093 ) .f_mode = ( (struct EditorMode_126) { .tag = EditorMode_126_Normal_t } );
            }
            else {
                if ( dref4102.tag == Key_140_Enter_t ) {
                    struct envunion137  temp1319 = ( (struct envunion137){ .fun = (  enum Unit_7  (*) (  struct env119*  ,    struct Editor_121 *  ,    struct StrView_21  ) )run_dash_cmd1320 , .env =  env->envinst119 } );
                    ( temp1319.fun ( &temp1319.env ,  (  ed4093 ) ,  ( (  as_dash_str1270 ) ( ( & ( (* dref4096 ) .stuff .EditorMode_126_Cmd_s .field0 ) ) ) ) ) );
                    ( (  free1395 ) ( ( & ( (* dref4096 ) .stuff .EditorMode_126_Cmd_s .field0 ) ) ) );
                    (*  ed4093 ) .f_mode = ( (struct EditorMode_126) { .tag = EditorMode_126_Normal_t } );
                }
                else {
                    if ( dref4102.tag == Key_140_Char_t ) {
                        struct envunion136  temp1396 = ( (struct envunion136){ .fun = (  enum Unit_7  (*) (  struct env48*  ,    struct StrBuilder_50 *  ,    struct Char_53  ) )write_dash_char1261 , .env =  env->envinst48 } );
                        ( temp1396.fun ( &temp1396.env ,  ( & ( (* dref4096 ) .stuff .EditorMode_126_Cmd_s .field0 ) ) ,  ( (  ascii_dash_char1397 ) ( ( dref4102 .stuff .Key_140_Char_s .field0 ) ) ) ) );
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
                ( (  todo1377 ) ( ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

struct envunion1399 {
    bool  (*fun) (  struct env71*  ,    struct Screen_643 *  );
    struct env71 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1400 (   struct env71* env ,    struct Screen_643 *  screen3461 ) {
    struct Tui_67 *  tui3462 = ( ( * (  screen3461 ) ) .f_tui );
    struct envunion72  temp1401 = ( (struct envunion72){ .fun = (  bool  (*) (  struct env64*  ,    struct Tui_67 *  ) )update_dash_dimensions714 , .env =  env->envinst64 } );
    bool  updated_dash_dimensions3463 = ( temp1401.fun ( &temp1401.env ,  (  tui3462 ) ) );
    if ( ( ! (  updated_dash_dimensions3463 ) ) ) {
        return ( false );
    }
    (*  screen3461 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3464 = ( ( * ( ( * (  screen3461 ) ) .f_tui ) ) .f_width );
    uint32_t  h3465 = ( ( * ( ( * (  screen3461 ) ) .f_tui ) ) .f_height );
    size_t  nusz3466 = ( (  u32_dash_size657 ) ( (  op_dash_mul665 ( (  w3464 ) , (  h3465 ) ) ) ) );
    if ( (  cmp166 ( (  nusz3466 ) , ( ( ( * (  screen3461 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_643  nuscreen3467 = ( (  mk_dash_screen651 ) ( (  tui3462 ) ,  ( ( * (  screen3461 ) ) .f_al ) ) );
    (*  screen3461 ) .f_current = ( (  nuscreen3467 ) .f_current );
    (*  screen3461 ) .f_previous = ( (  nuscreen3467 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1402 (    struct Tui_67 *  tui3388 ) {
    bool  redraw3389 = ( ( * (  tui3388 ) ) .f_should_dash_redraw );
    (*  tui3388 ) .f_should_dash_redraw = ( false );
    return (  redraw3389 );
}

struct env1406 {
    struct Slice_644  s1905;
    struct Cell_645 (*  fun1907 )(    struct Cell_645  );
    ;
    ;
    ;
};

struct envunion1407 {
    enum Unit_7  (*fun) (  struct env1406*  ,    int32_t  );
    struct env1406 env;
};

static  enum Unit_7   for_dash_each1405 (    struct Range_668  iterable1074 ,   struct envunion1407  fun1076 ) {
    struct RangeIter_671  temp1408 = ( (  into_dash_iter673 ) ( (  iterable1074 ) ) );
    struct RangeIter_671 *  it1077 = ( &temp1408 );
    while ( ( true ) ) {
        struct Maybe_254  dref1078 = ( (  next674 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_254_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_254_Just_t ) {
                struct envunion1407  temp1409 = (  fun1076 );
                ( temp1409.fun ( &temp1409.env ,  ( dref1078 .stuff .Maybe_254_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1410 (   struct env1406* env ,    int32_t  i1909 ) {
    return ( (  set678 ) ( ( env->s1905 ) ,  ( (  i32_dash_size244 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get682 ( ( env->s1905 ) , ( (  i32_dash_size244 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_7   map1404 (    struct Slice_644  s1905 ,    struct Cell_645 (*  fun1907 )(    struct Cell_645  ) ) {
    struct env1406 envinst1406 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each1405 ) ( ( (  to676 ) ( (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_i32178 ) ( (  op_dash_sub286 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1407){ .fun = (  enum Unit_7  (*) (  struct env1406*  ,    int32_t  ) )lam1410 , .env =  envinst1406 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Cell_645   lam1411 (    struct Cell_645  dref3425 ) {
    return ( (  default_dash_cell690 ) ( ) );
}

static  enum Unit_7   clear_dash_screen1403 (    struct Screen_643 *  screen3424 ) {
    ( (  map1404 ) ( ( ( * (  screen3424 ) ) .f_current ) ,  (  lam1411 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_screen_dash_fg1412 (    struct Screen_643 *  screen3470 ,    struct Color_646  c3472 ) {
    (*  screen3470 ) .f_default_dash_fg = (  c3472 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_screen_dash_bg1413 (    struct Screen_643 *  screen3475 ,    struct Color_646  c3477 ) {
    (*  screen3475 ) .f_default_dash_bg = (  c3477 );
    return ( Unit_7_Unit );
}

struct ScreenDims_1415 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

static  int32_t   cast1417 (    uint32_t  x356 ) {
    return ( (int32_t ) (  x356 ) );
}

static  int32_t   u32_dash_i321416 (    uint32_t  x660 ) {
    return ( (  cast1417 ) ( (  x660 ) ) );
}

static  int32_t   screen_dash_width1420 (    struct ScreenDims_1415  sd3858 ) {
    return (  op_dash_add256 ( (  op_dash_sub794 ( ( (  sd3858 ) .f_to_dash_sx ) , ( (  sd3858 ) .f_from_dash_sx ) ) ) , (  from_dash_integral44 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1421 (    struct ScreenDims_1415  sd3861 ) {
    return (  op_dash_add256 ( (  op_dash_sub794 ( ( (  sd3861 ) .f_to_dash_sy ) , ( (  sd3861 ) .f_from_dash_sy ) ) ) , (  from_dash_integral44 ( 1 ) ) ) );
}

static  enum Unit_7   update_dash_screen_dash_offset1419 (    struct Pane_122 *  pane3864 ,    struct ScreenDims_1415  sd3866 ) {
    struct Pos_20  cur3867 = ( ( * (  pane3864 ) ) .f_cursor );
    int32_t  cur_dash_sx3868 = ( (  pos_dash_vi931 ) ( ( ( * (  pane3864 ) ) .f_buf ) ,  (  cur3867 ) ) );
    struct ScreenCursorOffset_124  sc_dash_off3869 = ( ( * (  pane3864 ) ) .f_sc_dash_off );
    int32_t  sw3870 = (  op_dash_sub794 ( ( (  screen_dash_width1420 ) ( (  sd3866 ) ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    int32_t  sh3871 = (  op_dash_sub794 ( ( (  screen_dash_height1421 ) ( (  sd3866 ) ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    int32_t  margin3872 = (  from_dash_integral44 ( 5 ) );
    int32_t  csi3873 = ( (  pos_dash_vi931 ) ( ( ( * (  pane3864 ) ) .f_buf ) ,  (  cur3867 ) ) );
    int32_t  csx3874 = (  op_dash_sub794 ( (  csi3873 ) , ( (  sc_dash_off3869 ) .f_screen_dash_left ) ) );
    int32_t  csy3875 = (  op_dash_sub794 ( ( (  cur3867 ) .f_line ) , ( (  sc_dash_off3869 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left3876 = ( (  sc_dash_off3869 ) .f_screen_dash_left );
    if ( (  cmp299 ( (  csx3874 ) , (  margin3872 ) ) == 0 ) ) {
        nu_dash_screen_dash_left3876 = (  op_dash_sub794 ( (  csi3873 ) , (  margin3872 ) ) );
    } else {
        if ( (  cmp299 ( (  csx3874 ) , (  op_dash_sub794 ( (  sw3870 ) , (  margin3872 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left3876 = (  op_dash_add256 ( (  op_dash_sub794 ( (  csi3873 ) , (  sw3870 ) ) ) , (  margin3872 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left3877 = ( (  max946 ) ( (  nu_dash_screen_dash_left3876 ) ,  (  from_dash_integral44 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top3878 = ( (  sc_dash_off3869 ) .f_screen_dash_top );
    if ( (  cmp299 ( (  csy3875 ) , (  margin3872 ) ) == 0 ) ) {
        nu_dash_screen_dash_top3878 = (  op_dash_sub794 ( ( (  cur3867 ) .f_line ) , (  margin3872 ) ) );
    } else {
        if ( (  cmp299 ( (  csy3875 ) , (  op_dash_sub794 ( (  sh3871 ) , (  margin3872 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top3878 = (  op_dash_add256 ( (  op_dash_sub794 ( ( (  cur3867 ) .f_line ) , (  sh3871 ) ) ) , (  margin3872 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top3879 = ( (  max946 ) ( (  nu_dash_screen_dash_top3878 ) ,  (  from_dash_integral44 ( 0 ) ) ) );
    (*  pane3864 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_124) { .f_screen_dash_top = (  nu_dash_screen_dash_top3879 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left3877 ) } );
    return ( Unit_7_Unit );
}

struct IntStrIter_1423 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

static  struct IntStrIter_1423   into_dash_iter1425 (    struct IntStrIter_1423  self1419 ) {
    return (  self1419 );
}

struct env1429 {
    int32_t  base1210;
    ;
};

struct envunion1430 {
    int32_t  (*fun) (  struct env1429*  ,    int32_t  ,    int32_t  );
    struct env1429 env;
};

static  int32_t   reduce1428 (    struct Range_668  iterable1093 ,    int32_t  base1095 ,   struct envunion1430  fun1097 ) {
    int32_t  x1098 = (  base1095 );
    struct RangeIter_671  it1099 = ( (  into_dash_iter673 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1100 = ( (  next674 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_254_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_254_Just_t ) {
                struct envunion1430  temp1431 = (  fun1097 );
                x1098 = ( temp1431.fun ( &temp1431.env ,  ( dref1100 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1432 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1432);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1433;
    return (  temp1433 );
}

static  int32_t   op_dash_mul1435 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  int32_t   lam1434 (   struct env1429* env ,    int32_t  item1214 ,    int32_t  x1216 ) {
    return (  op_dash_mul1435 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int32_t   pow1427 (    int32_t  base1210 ,    int32_t  p1212 ) {
    struct env1429 envinst1429 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1428 ) ( ( (  to676 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  op_dash_sub794 ( (  p1212 ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral44 ( 1 ) ) ,  ( (struct envunion1430){ .fun = (  int32_t  (*) (  struct env1429*  ,    int32_t  ,    int32_t  ) )lam1434 , .env =  envinst1429 } ) ) );
}

static  int32_t   op_dash_div1436 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  uint8_t   cast1437 (    int32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_588   next1426 (    struct IntStrIter_1423 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_588_Just ) ( ( (  from_dash_charlike203 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp299 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_588) { .tag = Maybe_588_None_t } );
    }
    int32_t  trim_dash_down1423 = ( (  pow1427 ) ( (  from_dash_integral44 ( 10 ) ) ,  (  op_dash_sub794 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 1 ) ) ) ) ) );
    int32_t  upper1424 = (  op_dash_div1436 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    int32_t  upper_dash_mask1425 = (  op_dash_mul1435 ( (  op_dash_div1436 ( (  upper1424 ) , (  from_dash_integral44 ( 10 ) ) ) ) , (  from_dash_integral44 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1437 ) ( (  op_dash_sub794 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub794 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 1 ) ) ) );
    struct Char_53  digit_dash_char1427 = ( (  from_dash_u8874 ) ( (  op_dash_add764 ( (  digit1426 ) , (  from_dash_integral194 ( 48 ) ) ) ) ) );
    return ( ( Maybe_588_Just ) ( (  digit_dash_char1427 ) ) );
}

static  size_t   reduce1424 (    struct IntStrIter_1423  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_53  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct IntStrIter_1423  it1099 = ( (  into_dash_iter1425 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_588  dref1100 = ( (  next1426 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_588_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_588_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_588_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1438 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1438);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1439;
    return (  temp1439 );
}

static  size_t   lam1440 (    struct Char_53  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add214 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1422 (    struct IntStrIter_1423  it1104 ) {
    return ( (  reduce1424 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1440 ) ) );
}

static  int32_t   count_dash_digits1443 (    int32_t  self1430 ) {
    if ( (  eq302 ( (  self1430 ) , (  from_dash_integral44 ( 0 ) ) ) ) ) {
        return (  from_dash_integral44 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral44 ( 0 ) );
    while ( (  cmp299 ( (  self1430 ) , (  from_dash_integral44 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1436 ( (  self1430 ) , (  from_dash_integral44 ( 10 ) ) ) );
        digits1431 = (  op_dash_add256 ( (  digits1431 ) , (  from_dash_integral44 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1423   int_dash_iter1442 (    int32_t  int1434 ) {
    if ( (  cmp299 ( (  int1434 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1423) { .f_int = (  op_dash_neg618 ( (  int1434 ) ) ) , .f_len = ( (  count_dash_digits1443 ) ( (  op_dash_neg618 ( (  int1434 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1423) { .f_int = (  int1434 ) , .f_len = ( (  count_dash_digits1443 ) ( (  int1434 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1423   chars1441 (    int32_t  self1443 ) {
    return ( (  int_dash_iter1442 ) ( (  self1443 ) ) );
}

struct Map_1448 {
    struct IntStrIter_1423  field0;
    int32_t (*  field1 )(    struct Char_53  );
};

static struct Map_1448 Map_1448_Map (  struct IntStrIter_1423  field0 ,  int32_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1448 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1448   into_dash_iter1450 (    struct Map_1448  self796 ) {
    return (  self796 );
}

static  struct Maybe_254   next1451 (    struct Map_1448 *  dref798 ) {
    struct Maybe_588  dref801 = ( (  next1426 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_588_None_t ) {
        return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_588_Just_t ) {
            return ( ( Maybe_254_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_588_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1449 (    struct Map_1448  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1448  it1099 = ( (  into_dash_iter1450 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1100 = ( (  next1451 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_254_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_254_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1452 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1452);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1453;
    return (  temp1453 );
}

static  int32_t   lam1454 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add256 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1447 (    struct Map_1448  it1110 ) {
    return ( (  reduce1449 ) ( (  it1110 ) ,  (  from_dash_integral44 ( 0 ) ) ,  (  lam1454 ) ) );
}

static  struct Map_1448   map1455 (    struct IntStrIter_1423  iterable805 ,    int32_t (*  fun807 )(    struct Char_53  ) ) {
    struct IntStrIter_1423  it808 = ( (  into_dash_iter1425 ) ( (  iterable805 ) ) );
    return ( ( Map_1448_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  enum Unit_7   put_dash_char1459 (    struct Screen_643 *  screen3508 ,    struct Char_53  c3510 ,    int32_t  x3512 ,    int32_t  y3514 ) {
    int32_t  w3515 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3508 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp299 ( (  x3512 ) , (  w3515 ) ) != 0 ) || (  cmp299 ( (  y3514 ) , ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3508 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp299 ( (  x3512 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) ) || (  cmp299 ( (  y3514 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    size_t  i3516 = ( (  i32_dash_size244 ) ( (  op_dash_add256 ( (  op_dash_mul1435 ( (  y3514 ) , (  w3515 ) ) ) , (  x3512 ) ) ) ) );
    struct Color_646  fg3517 = ( ( * (  screen3508 ) ) .f_default_dash_fg );
    struct Color_646  bg3518 = ( ( * (  screen3508 ) ) .f_default_dash_bg );
    struct Char_53  c3519 = (  c3510 );
    int32_t  char_dash_width3520 = ( (  wcwidth947 ) ( (  c3519 ) ) );
    if ( ( (  cmp299 ( (  x3512 ) , (  from_dash_integral44 ( 0 ) ) ) == 2 ) && (  cmp299 ( ( (  elem_dash_get682 ( ( ( * (  screen3508 ) ) .f_current ) , (  op_dash_sub286 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral44 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_645  pc3521 = (  elem_dash_get682 ( ( ( * (  screen3508 ) ) .f_current ) , (  op_dash_sub286 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set678 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  op_dash_sub286 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_645) { .f_c = ( (  from_dash_charlike203 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3521 ) .f_fg ) , .f_bg = ( (  pc3521 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral44 ( 1 ) ) } ) ) );
    }
    ( (  set678 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  i3516 ) ,  ( (struct Cell_645) { .f_c = (  c3519 ) , .f_fg = (  fg3517 ) , .f_bg = (  bg3518 ) , .f_char_dash_width = (  char_dash_width3520 ) } ) ) );
    struct RangeIter_671  temp1460 =  into_dash_iter673 ( ( (  to676 ) ( (  op_dash_add256 ( (  x3512 ) , (  from_dash_integral44 ( 1 ) ) ) ) ,  ( (  min451 ) ( (  op_dash_sub794 ( (  op_dash_add256 ( (  x3512 ) , (  char_dash_width3520 ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) ,  (  w3515 ) ) ) ) ) );
    while (true) {
        struct Maybe_254  __cond1461 =  next674 (&temp1460);
        if (  __cond1461 .tag == 0 ) {
            break;
        }
        int32_t  xx3523 =  __cond1461 .stuff .Maybe_254_Just_s .field0;
        size_t  i3524 = ( (  i32_dash_size244 ) ( (  op_dash_add256 ( (  op_dash_mul1435 ( (  y3514 ) , (  w3515 ) ) ) , (  xx3523 ) ) ) ) );
        ( (  set678 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  i3524 ) ,  ( (struct Cell_645) { .f_c = ( (  from_dash_charlike203 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = (  fg3517 ) , .f_bg = (  bg3518 ) , .f_char_dash_width = (  from_dash_integral44 ( 1 ) ) } ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str1456 (    struct Screen_643 *  screen3527 ,    int32_t  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp299 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  y3533 ) , ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add256 ( (  op_dash_mul1435 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min451 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size244 ) ( (  op_dash_sub794 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct IntStrIter_1423  temp1457 =  into_dash_iter1425 ( ( (  chars1441 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_588  __cond1458 =  next1426 (&temp1457);
        if (  __cond1458 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1458 .stuff .Maybe_588_Just_s .field0;
        ( (  put_dash_char1459 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add256 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add256 ( (  xx3538 ) , ( (  rendered_dash_wcwidth945 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1446 (    struct Screen_643 *  screen3543 ,    int32_t  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1447 ) ( ( (  map1455 ) ( ( (  chars1441 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth945 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub794 ( (  op_dash_sub794 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1456 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1463 {
    struct StrView_21  field0;
    int32_t  field1;
};

static struct StrConcat_1463 StrConcat_1463_StrConcat (  struct StrView_21  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1463 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1466 {
    struct StrView_21  field0;
    struct StrConcat_1463  field1;
};

static struct StrConcat_1466 StrConcat_1466_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_1463  field1 ) {
    return ( struct StrConcat_1466 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1465 {
    struct StrConcat_1466  field0;
    struct Char_53  field1;
};

static struct StrConcat_1465 StrConcat_1465_StrConcat (  struct StrConcat_1466  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1465 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str1468 (    struct StrConcat_1463  self1503 ) {
    struct StrConcat_1463  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str177 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str184 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str1467 (    struct StrConcat_1466  self1503 ) {
    struct StrConcat_1466  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str177 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str1468 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str1464 (    struct StrConcat_1465  self1503 ) {
    struct StrConcat_1465  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str1467 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str185 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   assert1462 (    bool  cond1718 ,    struct StrConcat_1463  msg1720 ) {
    if ( ( ! (  cond1718 ) ) ) {
        ( (  print_dash_str1464 ) ( ( ( StrConcat_1465_StrConcat ) ( ( ( StrConcat_1466_StrConcat ) ( ( (  from_dash_string202 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1720 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    }
    return ( Unit_7_Unit );
}

struct AppendIter_1470 {
    struct StrViewIter_585  f_it;
    struct Char_53  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1470   into_dash_iter1471 (    struct AppendIter_1470  self1019 ) {
    return (  self1019 );
}

static  struct AppendIter_1470   append1472 (    struct StrViewIter_585  it1006 ,    struct Char_53  e1008 ) {
    return ( (struct AppendIter_1470) { .f_it = ( (  into_dash_iter587 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct Maybe_588   next1474 (    struct AppendIter_1470 *  self1022 ) {
    struct Maybe_588  dref1023 = ( (  next589 ) ( ( & ( ( * (  self1022 ) ) .f_it ) ) ) );
    if ( dref1023.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1023 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1023.tag == Maybe_588_None_t ) {
            if ( ( ! ( ( * (  self1022 ) ) .f_appended ) ) ) {
                (*  self1022 ) .f_appended = ( true );
                return ( ( Maybe_588_Just ) ( ( ( * (  self1022 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_588) { .tag = Maybe_588_None_t } );
        }
    }
}

static  bool   between1476 (    struct Pos_20  c1337 ,    struct Pos_20  l1339 ,    struct Pos_20  r1341 ) {
    struct Pos_20  from1342 = ( (  min297 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Pos_20  to1343 = ( (  max300 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp298 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp298 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1475 (    struct Pane_122 *  pane3850 ,    struct Pos_20  pos3852 ) {
    return ( {  struct Maybe_28  dref3853 = ( ( * (  pane3850 ) ) .f_sel ) ; dref3853.tag == Maybe_28_Just_t ? ( (  between1476 ) ( (  pos3852 ) ,  ( ( * (  pane3850 ) ) .f_cursor ) ,  ( dref3853 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( false ) ; } );
}

static  enum Unit_7   render1418 (    struct Screen_643 *  screen3882 ,    struct Pane_122 *  pane3884 ,    struct ScreenDims_1415  sd3886 ) {
    ( (  update_dash_screen_dash_offset1419 ) ( (  pane3884 ) ,  (  sd3886 ) ) );
    struct ScreenCursorOffset_124  sc_dash_off3887 = ( ( * (  pane3884 ) ) .f_sc_dash_off );
    int32_t  max_dash_line_dash_num_dash_chars3888 = ( (  size_dash_i32178 ) ( ( (  count1422 ) ( ( (  chars1441 ) ( ( (  num_dash_lines973 ) ( ( ( * (  pane3884 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin3889 = (  from_dash_integral44 ( 2 ) );
    int32_t  num_dash_back_dash_margin3890 = (  from_dash_integral44 ( 2 ) );
    int32_t  total_dash_margin3891 = (  op_dash_add256 ( (  op_dash_add256 ( (  max_dash_line_dash_num_dash_chars3888 ) , (  num_dash_front_dash_margin3889 ) ) ) , (  num_dash_back_dash_margin3890 ) ) );
    struct RangeIter_671  temp1444 =  into_dash_iter673 ( ( (  to676 ) ( (  op_dash_add256 ( ( (  sc_dash_off3887 ) .f_screen_dash_top ) , (  from_dash_integral44 ( 1 ) ) ) ) ,  ( (  min451 ) ( ( (  num_dash_lines973 ) ( ( ( * (  pane3884 ) ) .f_buf ) ) ) ,  (  op_dash_add256 ( ( (  sc_dash_off3887 ) .f_screen_dash_top ) , ( (  screen_dash_height1421 ) ( (  sd3886 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_254  __cond1445 =  next674 (&temp1444);
        if (  __cond1445 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num3893 =  __cond1445 .stuff .Maybe_254_Just_s .field0;
        int32_t  ybi3894 = (  op_dash_sub794 ( (  line_dash_num3893 ) , (  from_dash_integral44 ( 1 ) ) ) );
        int32_t  xbi3895 = ( (  vi_dash_bi975 ) ( ( ( * (  pane3884 ) ) .f_buf ) ,  (  ybi3894 ) ,  ( (  sc_dash_off3887 ) .f_screen_dash_left ) ) );
        struct StrView_21  line_dash_content3896 = ( (  line933 ) ( ( ( * (  pane3884 ) ) .f_buf ) ,  (  ybi3894 ) ) );
        int32_t  ys3897 = (  op_dash_sub794 ( (  op_dash_sub794 ( (  op_dash_add256 ( ( (  sd3886 ) .f_from_dash_sy ) , (  line_dash_num3893 ) ) ) , ( (  sc_dash_off3887 ) .f_screen_dash_top ) ) ) , (  from_dash_integral44 ( 1 ) ) ) );
        ( (  draw_dash_str_dash_right1446 ) ( (  screen3882 ) ,  (  line_dash_num3893 ) ,  (  op_dash_add256 ( (  op_dash_sub794 ( (  op_dash_sub794 ( ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3882 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd3886 ) .f_from_dash_sx ) ) ) , (  total_dash_margin3891 ) ) ) , (  num_dash_back_dash_margin3890 ) ) ) ,  (  ys3897 ) ) );
        int32_t  vx3898 = (  op_dash_sub794 ( ( (  pos_dash_vi931 ) ( ( ( * (  pane3884 ) ) .f_buf ) ,  ( (  mk280 ) ( (  ybi3894 ) ,  (  xbi3895 ) ) ) ) ) , ( (  sc_dash_off3887 ) .f_screen_dash_left ) ) );
        ( (  assert1462 ) ( (  cmp299 ( (  vx3898 ) , (  from_dash_integral44 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1463_StrConcat ) ( ( (  from_dash_string202 ) ( ( "vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx3898 ) ) ) ) );
        int32_t  left_dash_offset3899 = (  op_dash_add256 ( ( (  sd3886 ) .f_from_dash_sx ) , (  total_dash_margin3891 ) ) );
        struct AppendIter_1470  temp1469 =  into_dash_iter1471 ( ( (  append1472 ) ( ( (  chars590 ) ( ( (  byte_dash_substr_dash_from1341 ) ( (  line_dash_content3896 ) ,  ( (  i32_dash_size244 ) ( (  xbi3895 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike203 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_588  __cond1473 =  next1474 (&temp1469);
            if (  __cond1473 .tag == 0 ) {
                break;
            }
            struct Char_53  c3901 =  __cond1473 .stuff .Maybe_588_Just_s .field0;
            if ( (  cmp299 ( (  vx3898 ) , ( (  sd3886 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_20  curpos3902 = ( (  mk280 ) ( (  ybi3894 ) ,  (  xbi3895 ) ) );
            bool  is_dash_cursor3903 = (  eq301 ( (  curpos3902 ) , ( ( * (  pane3884 ) ) .f_cursor ) ) );
            bool  in_dash_selection3904 = ( (  is_dash_in_dash_selection1475 ) ( (  pane3884 ) ,  ( (  mk280 ) ( (  ybi3894 ) ,  (  xbi3895 ) ) ) ) );
            if ( (  is_dash_cursor3903 ) ) {
                (*  screen3882 ) .f_default_dash_fg = ( ( Color_646_Color8 ) ( ( Color8_647_Black8 ) ) );
                (*  screen3882 ) .f_default_dash_bg = ( ( Color_646_Color8 ) ( ( Color8_647_White8 ) ) );
            } else {
                if ( (  in_dash_selection3904 ) ) {
                    (*  screen3882 ) .f_default_dash_bg = ( ( Color_646_Color8 ) ( ( Color8_647_Cyan8 ) ) );
                }
            }
            struct Maybe_125  dref3905 = ( (  char_dash_replacement938 ) ( (  c3901 ) ) );
            if ( dref3905.tag == Maybe_125_None_t ) {
                if ( ( ! ( (  cmp299 ( (  vx3898 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  op_dash_sub794 ( (  op_dash_add256 ( (  vx3898 ) , ( (  char_dash_screen_dash_width936 ) ( (  c3901 ) ) ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) , ( (  sd3886 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1459 ) ( (  screen3882 ) ,  (  c3901 ) ,  (  op_dash_add256 ( (  left_dash_offset3899 ) , (  vx3898 ) ) ) ,  (  ys3897 ) ) );
                }
                vx3898 = (  op_dash_add256 ( (  vx3898 ) , ( (  char_dash_screen_dash_width936 ) ( (  c3901 ) ) ) ) );
            }
            else {
                if ( dref3905.tag == Maybe_125_Just_t ) {
                    struct StrViewIter_585  temp1477 =  into_dash_iter587 ( ( (  chars590 ) ( ( dref3905 .stuff .Maybe_125_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_588  __cond1478 =  next589 (&temp1477);
                        if (  __cond1478 .tag == 0 ) {
                            break;
                        }
                        struct Char_53  c3908 =  __cond1478 .stuff .Maybe_588_Just_s .field0;
                        if ( (  cmp299 ( (  vx3898 ) , (  from_dash_integral44 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1459 ) ( (  screen3882 ) ,  (  c3908 ) ,  (  op_dash_add256 ( (  left_dash_offset3899 ) , (  vx3898 ) ) ) ,  (  ys3897 ) ) );
                        }
                        vx3898 = (  op_dash_add256 ( (  vx3898 ) , ( (  char_dash_screen_dash_width936 ) ( (  c3908 ) ) ) ) );
                    }
                }
            }
            (*  screen3882 ) .f_default_dash_fg = ( (struct Color_646) { .tag = Color_646_ColorDefault_t } );
            (*  screen3882 ) .f_default_dash_bg = ( (struct Color_646) { .tag = Color_646_ColorDefault_t } );
            xbi3895 = (  op_dash_add256 ( (  xbi3895 ) , ( (  size_dash_i32178 ) ( ( (  c3901 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    return ( Unit_7_Unit );
}

struct env1480 {
    ;
    ;
    ;
    struct Screen_643 *  screen4106;
    ;
    ;
    int32_t *  curline4110;
    ;
};

struct env1481 {
    ;
    ;
    ;
    struct Screen_643 *  screen4106;
    ;
    ;
    int32_t *  curline4110;
    ;
};

struct env1482 {
    ;
    ;
    ;
    struct Screen_643 *  screen4106;
    ;
    ;
    int32_t *  curline4110;
    ;
};

struct env1483 {
    ;
    ;
    ;
    struct Screen_643 *  screen4106;
    ;
    ;
    int32_t *  curline4110;
    ;
};

struct env1484 {
    ;
    ;
    ;
    struct Screen_643 *  screen4106;
    ;
    ;
    int32_t *  curline4110;
    ;
};

struct env1485 {
    ;
    ;
    ;
    struct Screen_643 *  screen4106;
    ;
    ;
    int32_t *  curline4110;
    ;
};

struct env1486 {
    ;
    ;
    ;
    struct Screen_643 *  screen4106;
    ;
    ;
    int32_t *  curline4110;
    ;
};

struct env1487 {
    ;
    ;
    ;
    struct Screen_643 *  screen4106;
    ;
    ;
    int32_t *  curline4110;
    ;
};

struct env1488 {
    ;
    ;
    ;
    struct Screen_643 *  screen4106;
    ;
    ;
    int32_t *  curline4110;
    ;
};

struct StrConcat_1491 {
    struct StrView_21  field0;
    enum Mode_123  field1;
};

static struct StrConcat_1491 StrConcat_1491_StrConcat (  struct StrView_21  field0 ,  enum Mode_123  field1 ) {
    return ( struct StrConcat_1491 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1490 {
    enum Unit_7  (*fun) (  struct env1480*  ,    struct StrConcat_1491  );
    struct env1480 env;
};

struct StrConcatIter_1496 {
    struct StrViewIter_585  f_left;
    struct StrViewIter_585  f_right;
};

struct Map_1495 {
    struct StrConcatIter_1496  field0;
    int32_t (*  field1 )(    struct Char_53  );
};

static struct Map_1495 Map_1495_Map (  struct StrConcatIter_1496  field0 ,  int32_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1495 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1495   into_dash_iter1498 (    struct Map_1495  self796 ) {
    return (  self796 );
}

static  struct Maybe_588   next1500 (    struct StrConcatIter_1496 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next589 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next589 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_254   next1499 (    struct Map_1495 *  dref798 ) {
    struct Maybe_588  dref801 = ( (  next1500 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_588_None_t ) {
        return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_588_Just_t ) {
            return ( ( Maybe_254_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_588_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1497 (    struct Map_1495  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1495  it1099 = ( (  into_dash_iter1498 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1100 = ( (  next1499 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_254_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_254_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1501 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1501);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1502;
    return (  temp1502 );
}

static  int32_t   lam1503 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add256 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1494 (    struct Map_1495  it1110 ) {
    return ( (  reduce1497 ) ( (  it1110 ) ,  (  from_dash_integral44 ( 0 ) ) ,  (  lam1503 ) ) );
}

static  struct StrConcatIter_1496   into_dash_iter1505 (    struct StrConcatIter_1496  self1491 ) {
    return (  self1491 );
}

static  struct Map_1495   map1504 (    struct StrConcatIter_1496  iterable805 ,    int32_t (*  fun807 )(    struct Char_53  ) ) {
    struct StrConcatIter_1496  it808 = ( (  into_dash_iter1505 ) ( (  iterable805 ) ) );
    return ( ( Map_1495_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrView_21   todo1509 (  ) {
    ( (  print1010 ) ( ( (  from_dash_string202 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( (  undefined498 ) ( ) );
}

static  struct StrViewIter_585   chars1508 (    enum Mode_123  self3805 ) {
    return ( (  chars590 ) ( ( {  enum Mode_123  dref3806 = (  self3805 ) ;  dref3806 == Mode_123_Normal ? ( (  from_dash_string202 ) ( ( "Normal" ) ,  ( 6 ) ) ) :  dref3806 == Mode_123_Insert ? ( (  from_dash_string202 ) ( ( "Insert" ) ,  ( 6 ) ) ) :  dref3806 == Mode_123_Select ? ( (  from_dash_string202 ) ( ( "Select" ) ,  ( 6 ) ) ) : ( (  todo1509 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1496   into_dash_iter1507 (    struct StrConcat_1491  dref1498 ) {
    return ( (struct StrConcatIter_1496) { .f_left = ( (  chars590 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1508 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1496   chars1506 (    struct StrConcat_1491  self1509 ) {
    return ( (  into_dash_iter1507 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1510 (    struct Screen_643 *  screen3527 ,    struct StrConcat_1491  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp299 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  y3533 ) , ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add256 ( (  op_dash_mul1435 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min451 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size244 ) ( (  op_dash_sub794 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct StrConcatIter_1496  temp1511 =  into_dash_iter1505 ( ( (  chars1506 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_588  __cond1512 =  next1500 (&temp1511);
        if (  __cond1512 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1512 .stuff .Maybe_588_Just_s .field0;
        ( (  put_dash_char1459 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add256 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add256 ( (  xx3538 ) , ( (  rendered_dash_wcwidth945 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1493 (    struct Screen_643 *  screen3543 ,    struct StrConcat_1491  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1494 ) ( ( (  map1504 ) ( ( (  chars1506 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth945 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub794 ( (  op_dash_sub794 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1510 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1492 (   struct env1480* env ,    struct StrConcat_1491  s4113 ) {
    ( (  draw_dash_str_dash_right1493 ) ( ( env->screen4106 ) ,  (  s4113 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( * ( env->curline4110 ) ) ) );
    (* env->curline4110 ) = (  op_dash_add256 ( ( * ( env->curline4110 ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1517 {
    struct StrView_21  field0;
    struct Pos_20  field1;
};

static struct StrConcat_1517 StrConcat_1517_StrConcat (  struct StrView_21  field0 ,  struct Pos_20  field1 ) {
    return ( struct StrConcat_1517 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1516 {
    struct StrConcat_1517  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1516 StrConcat_1516_StrConcat (  struct StrConcat_1517  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1516 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1515 {
    struct StrConcat_1516  field0;
    enum CharType_995  field1;
};

static struct StrConcat_1515 StrConcat_1515_StrConcat (  struct StrConcat_1516  field0 ,  enum CharType_995  field1 ) {
    return ( struct StrConcat_1515 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1514 {
    enum Unit_7  (*fun) (  struct env1481*  ,    struct StrConcat_1515  );
    struct env1481 env;
};

struct StrConcatIter_1528 {
    struct AppendIter_855  f_left;
    struct IntStrIter_1423  f_right;
};

struct StrConcatIter_1527 {
    struct StrConcatIter_1528  f_left;
    struct StrViewIter_585  f_right;
};

struct StrConcatIter_1526 {
    struct StrConcatIter_1527  f_left;
    struct IntStrIter_1423  f_right;
};

struct StrConcatIter_1525 {
    struct StrConcatIter_1526  f_left;
    struct AppendIter_855  f_right;
};

struct StrConcatIter_1524 {
    struct StrViewIter_585  f_left;
    struct StrConcatIter_1525  f_right;
};

struct StrConcatIter_1523 {
    struct StrConcatIter_1524  f_left;
    struct StrViewIter_585  f_right;
};

struct StrConcatIter_1522 {
    struct StrConcatIter_1523  f_left;
    struct StrViewIter_585  f_right;
};

struct Map_1521 {
    struct StrConcatIter_1522  field0;
    int32_t (*  field1 )(    struct Char_53  );
};

static struct Map_1521 Map_1521_Map (  struct StrConcatIter_1522  field0 ,  int32_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1521 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1521   into_dash_iter1530 (    struct Map_1521  self796 ) {
    return (  self796 );
}

static  struct Maybe_588   next1538 (    struct StrConcatIter_1528 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next881 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next1426 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1537 (    struct StrConcatIter_1527 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1538 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next589 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1536 (    struct StrConcatIter_1526 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1537 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next1426 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1535 (    struct StrConcatIter_1525 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1536 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next881 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1534 (    struct StrConcatIter_1524 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next589 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next1535 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1533 (    struct StrConcatIter_1523 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1534 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next589 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1532 (    struct StrConcatIter_1522 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1533 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next589 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_254   next1531 (    struct Map_1521 *  dref798 ) {
    struct Maybe_588  dref801 = ( (  next1532 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_588_None_t ) {
        return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_588_Just_t ) {
            return ( ( Maybe_254_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_588_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1529 (    struct Map_1521  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1521  it1099 = ( (  into_dash_iter1530 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1100 = ( (  next1531 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_254_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_254_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1539 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1539);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1540;
    return (  temp1540 );
}

static  int32_t   lam1541 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add256 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1520 (    struct Map_1521  it1110 ) {
    return ( (  reduce1529 ) ( (  it1110 ) ,  (  from_dash_integral44 ( 0 ) ) ,  (  lam1541 ) ) );
}

static  struct StrConcatIter_1522   into_dash_iter1543 (    struct StrConcatIter_1522  self1491 ) {
    return (  self1491 );
}

static  struct Map_1521   map1542 (    struct StrConcatIter_1522  iterable805 ,    int32_t (*  fun807 )(    struct Char_53  ) ) {
    struct StrConcatIter_1522  it808 = ( (  into_dash_iter1543 ) ( (  iterable805 ) ) );
    return ( ( Map_1521_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1555 {
    struct Char_53  field0;
    int32_t  field1;
};

static struct StrConcat_1555 StrConcat_1555_StrConcat (  struct Char_53  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1555 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1554 {
    struct StrConcat_1555  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1554 StrConcat_1554_StrConcat (  struct StrConcat_1555  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1554 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1553 {
    struct StrConcat_1554  field0;
    int32_t  field1;
};

static struct StrConcat_1553 StrConcat_1553_StrConcat (  struct StrConcat_1554  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1553 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1552 {
    struct StrConcat_1553  field0;
    struct Char_53  field1;
};

static struct StrConcat_1552 StrConcat_1552_StrConcat (  struct StrConcat_1553  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1552 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_1528   into_dash_iter1562 (    struct StrConcat_1555  dref1498 ) {
    return ( (struct StrConcatIter_1528) { .f_left = ( (  chars895 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1441 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1528   chars1561 (    struct StrConcat_1555  self1509 ) {
    return ( (  into_dash_iter1562 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1527   into_dash_iter1560 (    struct StrConcat_1554  dref1498 ) {
    return ( (struct StrConcatIter_1527) { .f_left = ( (  chars1561 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars590 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1527   chars1559 (    struct StrConcat_1554  self1509 ) {
    return ( (  into_dash_iter1560 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1526   into_dash_iter1558 (    struct StrConcat_1553  dref1498 ) {
    return ( (struct StrConcatIter_1526) { .f_left = ( (  chars1559 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1441 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1526   chars1557 (    struct StrConcat_1553  self1509 ) {
    return ( (  into_dash_iter1558 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1525   into_dash_iter1556 (    struct StrConcat_1552  dref1498 ) {
    return ( (struct StrConcatIter_1525) { .f_left = ( (  chars1557 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars895 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1525   chars1551 (    struct StrConcat_1552  self1509 ) {
    return ( (  into_dash_iter1556 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1525   chars1550 (    struct Pos_20  self3584 ) {
    return ( (  chars1551 ) ( ( ( StrConcat_1552_StrConcat ) ( ( ( StrConcat_1553_StrConcat ) ( ( ( StrConcat_1554_StrConcat ) ( ( ( StrConcat_1555_StrConcat ) ( ( (  from_dash_charlike203 ) ( ( "(" ) ,  ( 1 ) ) ) ,  ( (  self3584 ) .f_line ) ) ) ,  ( (  from_dash_string202 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  self3584 ) .f_bi ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrConcatIter_1524   into_dash_iter1549 (    struct StrConcat_1517  dref1498 ) {
    return ( (struct StrConcatIter_1524) { .f_left = ( (  chars590 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1550 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1524   chars1548 (    struct StrConcat_1517  self1509 ) {
    return ( (  into_dash_iter1549 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1523   into_dash_iter1547 (    struct StrConcat_1516  dref1498 ) {
    return ( (struct StrConcatIter_1523) { .f_left = ( (  chars1548 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars590 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1523   chars1546 (    struct StrConcat_1516  self1509 ) {
    return ( (  into_dash_iter1547 ) ( (  self1509 ) ) );
}

static  struct StrViewIter_585   chars1563 (    enum CharType_995  self3794 ) {
    return ( (  chars590 ) ( ( {  enum CharType_995  dref3795 = (  self3794 ) ;  dref3795 == CharType_995_CharPunctuation ? ( (  from_dash_string202 ) ( ( "Punct" ) ,  ( 5 ) ) ) :  dref3795 == CharType_995_CharWord ? ( (  from_dash_string202 ) ( ( "Word" ) ,  ( 4 ) ) ) :  dref3795 == CharType_995_CharSpace ? ( (  from_dash_string202 ) ( ( "Space" ) ,  ( 5 ) ) ) : ( (  todo1509 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1522   into_dash_iter1545 (    struct StrConcat_1515  dref1498 ) {
    return ( (struct StrConcatIter_1522) { .f_left = ( (  chars1546 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1563 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1522   chars1544 (    struct StrConcat_1515  self1509 ) {
    return ( (  into_dash_iter1545 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1564 (    struct Screen_643 *  screen3527 ,    struct StrConcat_1515  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp299 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  y3533 ) , ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add256 ( (  op_dash_mul1435 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min451 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size244 ) ( (  op_dash_sub794 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct StrConcatIter_1522  temp1565 =  into_dash_iter1543 ( ( (  chars1544 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_588  __cond1566 =  next1532 (&temp1565);
        if (  __cond1566 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1566 .stuff .Maybe_588_Just_s .field0;
        ( (  put_dash_char1459 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add256 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add256 ( (  xx3538 ) , ( (  rendered_dash_wcwidth945 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1519 (    struct Screen_643 *  screen3543 ,    struct StrConcat_1515  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1520 ) ( ( (  map1542 ) ( ( (  chars1544 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth945 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub794 ( (  op_dash_sub794 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1564 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1518 (   struct env1481* env ,    struct StrConcat_1515  s4113 ) {
    ( (  draw_dash_str_dash_right1519 ) ( ( env->screen4106 ) ,  (  s4113 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( * ( env->curline4110 ) ) ) );
    (* env->curline4110 ) = (  op_dash_add256 ( ( * ( env->curline4110 ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1569 {
    struct StrView_21  field0;
    struct Maybe_28  field1;
};

static struct StrConcat_1569 StrConcat_1569_StrConcat (  struct StrView_21  field0 ,  struct Maybe_28  field1 ) {
    return ( struct StrConcat_1569 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1568 {
    enum Unit_7  (*fun) (  struct env1482*  ,    struct StrConcat_1569  );
    struct env1482 env;
};

struct StrConcatIter_1576 {
    struct StrConcatIter_1524  f_left;
    struct AppendIter_855  f_right;
};

struct StrCaseIter_1575 {
    enum {
        StrCaseIter_1575_StrCaseIter1_t,
        StrCaseIter_1575_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_585  field0;
        } StrCaseIter_1575_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1576  field0;
        } StrCaseIter_1575_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1575 StrCaseIter_1575_StrCaseIter1 (  struct StrViewIter_585  field0 ) {
    return ( struct StrCaseIter_1575 ) { .tag = StrCaseIter_1575_StrCaseIter1_t, .stuff = { .StrCaseIter_1575_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1575 StrCaseIter_1575_StrCaseIter2 (  struct StrConcatIter_1576  field0 ) {
    return ( struct StrCaseIter_1575 ) { .tag = StrCaseIter_1575_StrCaseIter2_t, .stuff = { .StrCaseIter_1575_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1574 {
    struct StrViewIter_585  f_left;
    struct StrCaseIter_1575  f_right;
};

struct Map_1573 {
    struct StrConcatIter_1574  field0;
    int32_t (*  field1 )(    struct Char_53  );
};

static struct Map_1573 Map_1573_Map (  struct StrConcatIter_1574  field0 ,  int32_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1573 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1573   into_dash_iter1578 (    struct Map_1573  self796 ) {
    return (  self796 );
}

static  struct Maybe_588   next1582 (    struct StrConcatIter_1576 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1534 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next881 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1581 (    struct StrCaseIter_1575 *  self1516 ) {
    struct StrCaseIter_1575 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1575_StrCaseIter1_t ) {
        return ( (  next589 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1575_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1575_StrCaseIter2_t ) {
            return ( (  next1582 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1575_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_588   next1580 (    struct StrConcatIter_1574 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next589 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next1581 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_254   next1579 (    struct Map_1573 *  dref798 ) {
    struct Maybe_588  dref801 = ( (  next1580 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_588_None_t ) {
        return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_588_Just_t ) {
            return ( ( Maybe_254_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_588_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1577 (    struct Map_1573  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1573  it1099 = ( (  into_dash_iter1578 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1100 = ( (  next1579 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_254_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_254_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1098 ) ) );
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
    return (  op_dash_add256 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1572 (    struct Map_1573  it1110 ) {
    return ( (  reduce1577 ) ( (  it1110 ) ,  (  from_dash_integral44 ( 0 ) ) ,  (  lam1585 ) ) );
}

static  struct StrConcatIter_1574   into_dash_iter1587 (    struct StrConcatIter_1574  self1491 ) {
    return (  self1491 );
}

static  struct Map_1573   map1586 (    struct StrConcatIter_1574  iterable805 ,    int32_t (*  fun807 )(    struct Char_53  ) ) {
    struct StrConcatIter_1574  it808 = ( (  into_dash_iter1587 ) ( (  iterable805 ) ) );
    return ( ( Map_1573_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1592 {
    struct StrConcat_1517  field0;
    struct Char_53  field1;
};

static struct StrConcat_1592 StrConcat_1592_StrConcat (  struct StrConcat_1517  field0 ,  struct Char_53  field1 ) {
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

static  struct StrConcatIter_1576   into_dash_iter1597 (    struct StrConcat_1592  dref1498 ) {
    return ( (struct StrConcatIter_1576) { .f_left = ( (  chars1548 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars895 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1576   chars1596 (    struct StrConcat_1592  self1509 ) {
    return ( (  into_dash_iter1597 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1575   into_dash_iter1595 (    struct StrCase_1591  self1522 ) {
    struct StrCase_1591  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1591_StrCase1_t ) {
        return ( ( StrCaseIter_1575_StrCaseIter1 ) ( ( (  chars590 ) ( ( dref1523 .stuff .StrCase_1591_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1591_StrCase2_t ) {
            return ( ( StrCaseIter_1575_StrCaseIter2 ) ( ( (  chars1596 ) ( ( dref1523 .stuff .StrCase_1591_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1575   chars1594 (    struct StrCase_1591  self1534 ) {
    return ( (  into_dash_iter1595 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1575   chars1590 (    struct Maybe_28  self1548 ) {
    struct StrCase_1591  temp1593;
    struct StrCase_1591  c1549 = (  temp1593 );
    struct Maybe_28  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_28_None_t ) {
        c1549 = ( ( StrCase_1591_StrCase1 ) ( ( (  from_dash_string202 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_28_Just_t ) {
            c1549 = ( ( StrCase_1591_StrCase2 ) ( ( ( StrConcat_1592_StrConcat ) ( ( ( StrConcat_1517_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_28_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1594 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1574   into_dash_iter1589 (    struct StrConcat_1569  dref1498 ) {
    return ( (struct StrConcatIter_1574) { .f_left = ( (  chars590 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1590 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1574   chars1588 (    struct StrConcat_1569  self1509 ) {
    return ( (  into_dash_iter1589 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1598 (    struct Screen_643 *  screen3527 ,    struct StrConcat_1569  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp299 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  y3533 ) , ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add256 ( (  op_dash_mul1435 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min451 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size244 ) ( (  op_dash_sub794 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct StrConcatIter_1574  temp1599 =  into_dash_iter1587 ( ( (  chars1588 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_588  __cond1600 =  next1580 (&temp1599);
        if (  __cond1600 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1600 .stuff .Maybe_588_Just_s .field0;
        ( (  put_dash_char1459 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add256 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add256 ( (  xx3538 ) , ( (  rendered_dash_wcwidth945 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1571 (    struct Screen_643 *  screen3543 ,    struct StrConcat_1569  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1572 ) ( ( (  map1586 ) ( ( (  chars1588 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth945 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub794 ( (  op_dash_sub794 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1598 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1570 (   struct env1482* env ,    struct StrConcat_1569  s4113 ) {
    ( (  draw_dash_str_dash_right1571 ) ( ( env->screen4106 ) ,  (  s4113 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( * ( env->curline4110 ) ) ) );
    (* env->curline4110 ) = (  op_dash_add256 ( ( * ( env->curline4110 ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct Take_1603 {
    struct StrViewIter_585  field0;
    size_t  field1;
};

static struct Take_1603 Take_1603_Take (  struct StrViewIter_585  field0 ,  size_t  field1 ) {
    return ( struct Take_1603 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1602 {
    struct Take_1603  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1602 StrConcat_1602_StrConcat (  struct Take_1603  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1602 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_1601 {
    enum {
        Maybe_1601_None_t,
        Maybe_1601_Just_t,
    } tag;
    union {
        struct {
            struct StrConcat_1602  field0;
        } Maybe_1601_Just_s;
    } stuff;
};

static struct Maybe_1601 Maybe_1601_Just (  struct StrConcat_1602  field0 ) {
    return ( struct Maybe_1601 ) { .tag = Maybe_1601_Just_t, .stuff = { .Maybe_1601_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1601   fmap_dash_maybe1604 (    struct Maybe_125  x1275 ,    struct StrConcat_1602 (*  fun1277 )(    struct StrView_21  ) ) {
    struct Maybe_125  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_125_None_t ) {
        return ( (struct Maybe_1601) { .tag = Maybe_1601_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_125_Just_t ) {
            return ( ( Maybe_1601_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_125_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Take_1603   take1606 (    struct StrView_21  it867 ,    size_t  i869 ) {
    return ( ( Take_1603_Take ) ( ( (  into_dash_iter591 ) ( (  it867 ) ) ) ,  (  i869 ) ) );
}

struct Drop_1608 {
    struct StrViewIter_585  field0;
    size_t  field1;
};

static struct Drop_1608 Drop_1608_Drop (  struct StrViewIter_585  field0 ,  size_t  field1 ) {
    return ( struct Drop_1608 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Maybe_588   next1610 (    struct Drop_1608 *  dref847 ) {
    while ( (  cmp166 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next589 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub286 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next589 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Drop_1608   into_dash_iter1612 (    struct Drop_1608  self845 ) {
    return (  self845 );
}

static  struct Maybe_588   head1609 (    struct Drop_1608  it1142 ) {
    struct Drop_1608  temp1611 = ( (  into_dash_iter1612 ) ( (  it1142 ) ) );
    return ( (  next1610 ) ( ( &temp1611 ) ) );
}

static  bool   null1607 (    struct Drop_1608  it1151 ) {
    struct Maybe_588  dref1152 = ( (  head1609 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_588_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Drop_1608   drop1613 (    struct StrView_21  iterable852 ,    size_t  i854 ) {
    struct StrViewIter_585  it855 = ( (  into_dash_iter591 ) ( (  iterable852 ) ) );
    return ( ( Drop_1608_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct StrConcat_1602   lam1605 (    struct StrView_21  s4116 ) {
    return ( ( StrConcat_1602_StrConcat ) ( ( (  take1606 ) ( (  s4116 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ,  ( ( (  null1607 ) ( ( (  drop1613 ) ( (  s4116 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ) ) ? ( (  from_dash_string202 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_string202 ) ( ( "..." ) ,  ( 3 ) ) ) ) ) );
}

struct StrConcat_1616 {
    struct StrView_21  field0;
    struct Maybe_1601  field1;
};

static struct StrConcat_1616 StrConcat_1616_StrConcat (  struct StrView_21  field0 ,  struct Maybe_1601  field1 ) {
    return ( struct StrConcat_1616 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1615 {
    enum Unit_7  (*fun) (  struct env1483*  ,    struct StrConcat_1616  );
    struct env1483 env;
};

struct StrConcatIter_1625 {
    struct Take_1603  f_left;
    struct StrViewIter_585  f_right;
};

struct StrConcatIter_1624 {
    struct StrViewIter_585  f_left;
    struct StrConcatIter_1625  f_right;
};

struct StrConcatIter_1623 {
    struct StrConcatIter_1624  f_left;
    struct AppendIter_855  f_right;
};

struct StrCaseIter_1622 {
    enum {
        StrCaseIter_1622_StrCaseIter1_t,
        StrCaseIter_1622_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_585  field0;
        } StrCaseIter_1622_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1623  field0;
        } StrCaseIter_1622_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1622 StrCaseIter_1622_StrCaseIter1 (  struct StrViewIter_585  field0 ) {
    return ( struct StrCaseIter_1622 ) { .tag = StrCaseIter_1622_StrCaseIter1_t, .stuff = { .StrCaseIter_1622_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1622 StrCaseIter_1622_StrCaseIter2 (  struct StrConcatIter_1623  field0 ) {
    return ( struct StrCaseIter_1622 ) { .tag = StrCaseIter_1622_StrCaseIter2_t, .stuff = { .StrCaseIter_1622_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1621 {
    struct StrViewIter_585  f_left;
    struct StrCaseIter_1622  f_right;
};

struct Map_1620 {
    struct StrConcatIter_1621  field0;
    int32_t (*  field1 )(    struct Char_53  );
};

static struct Map_1620 Map_1620_Map (  struct StrConcatIter_1621  field0 ,  int32_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1620 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1620   into_dash_iter1627 (    struct Map_1620  self796 ) {
    return (  self796 );
}

static  struct Maybe_588   next1634 (    struct Take_1603 *  dref861 ) {
    if ( (  cmp166 ( ( (* dref861 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_588  x864 = ( (  next589 ) ( ( & ( (* dref861 ) .field0 ) ) ) );
        (* dref861 ) .field1 = (  op_dash_sub286 ( ( (* dref861 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
        return (  x864 );
    } else {
        return ( (struct Maybe_588) { .tag = Maybe_588_None_t } );
    }
}

static  struct Maybe_588   next1633 (    struct StrConcatIter_1625 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1634 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next589 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1632 (    struct StrConcatIter_1624 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next589 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next1633 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1631 (    struct StrConcatIter_1623 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1632 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next881 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1630 (    struct StrCaseIter_1622 *  self1516 ) {
    struct StrCaseIter_1622 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1622_StrCaseIter1_t ) {
        return ( (  next589 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1622_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1622_StrCaseIter2_t ) {
            return ( (  next1631 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1622_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_588   next1629 (    struct StrConcatIter_1621 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next589 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next1630 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_254   next1628 (    struct Map_1620 *  dref798 ) {
    struct Maybe_588  dref801 = ( (  next1629 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_588_None_t ) {
        return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_588_Just_t ) {
            return ( ( Maybe_254_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_588_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1626 (    struct Map_1620  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1620  it1099 = ( (  into_dash_iter1627 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1100 = ( (  next1628 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_254_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_254_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1635 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1635);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1636;
    return (  temp1636 );
}

static  int32_t   lam1637 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add256 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1619 (    struct Map_1620  it1110 ) {
    return ( (  reduce1626 ) ( (  it1110 ) ,  (  from_dash_integral44 ( 0 ) ) ,  (  lam1637 ) ) );
}

static  struct StrConcatIter_1621   into_dash_iter1639 (    struct StrConcatIter_1621  self1491 ) {
    return (  self1491 );
}

static  struct Map_1620   map1638 (    struct StrConcatIter_1621  iterable805 ,    int32_t (*  fun807 )(    struct Char_53  ) ) {
    struct StrConcatIter_1621  it808 = ( (  into_dash_iter1639 ) ( (  iterable805 ) ) );
    return ( ( Map_1620_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1645 {
    struct StrView_21  field0;
    struct StrConcat_1602  field1;
};

static struct StrConcat_1645 StrConcat_1645_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_1602  field1 ) {
    return ( struct StrConcat_1645 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1644 {
    struct StrConcat_1645  field0;
    struct Char_53  field1;
};

static struct StrConcat_1644 StrConcat_1644_StrConcat (  struct StrConcat_1645  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1644 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1643 {
    enum {
        StrCase_1643_StrCase1_t,
        StrCase_1643_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1643_StrCase1_s;
        struct {
            struct StrConcat_1644  field0;
        } StrCase_1643_StrCase2_s;
    } stuff;
};

static struct StrCase_1643 StrCase_1643_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1643 ) { .tag = StrCase_1643_StrCase1_t, .stuff = { .StrCase_1643_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1643 StrCase_1643_StrCase2 (  struct StrConcat_1644  field0 ) {
    return ( struct StrCase_1643 ) { .tag = StrCase_1643_StrCase2_t, .stuff = { .StrCase_1643_StrCase2_s = { .field0 = field0 } } };
};

static  struct Take_1603   chars1655 (    struct Take_1603  self1639 ) {
    return (  self1639 );
}

static  struct StrConcatIter_1625   into_dash_iter1654 (    struct StrConcat_1602  dref1498 ) {
    return ( (struct StrConcatIter_1625) { .f_left = ( (  chars1655 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars590 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1625   chars1653 (    struct StrConcat_1602  self1509 ) {
    return ( (  into_dash_iter1654 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1624   into_dash_iter1652 (    struct StrConcat_1645  dref1498 ) {
    return ( (struct StrConcatIter_1624) { .f_left = ( (  chars590 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1653 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1624   chars1651 (    struct StrConcat_1645  self1509 ) {
    return ( (  into_dash_iter1652 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1623   into_dash_iter1650 (    struct StrConcat_1644  dref1498 ) {
    return ( (struct StrConcatIter_1623) { .f_left = ( (  chars1651 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars895 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1623   chars1649 (    struct StrConcat_1644  self1509 ) {
    return ( (  into_dash_iter1650 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1622   into_dash_iter1648 (    struct StrCase_1643  self1522 ) {
    struct StrCase_1643  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1643_StrCase1_t ) {
        return ( ( StrCaseIter_1622_StrCaseIter1 ) ( ( (  chars590 ) ( ( dref1523 .stuff .StrCase_1643_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1643_StrCase2_t ) {
            return ( ( StrCaseIter_1622_StrCaseIter2 ) ( ( (  chars1649 ) ( ( dref1523 .stuff .StrCase_1643_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1622   chars1647 (    struct StrCase_1643  self1534 ) {
    return ( (  into_dash_iter1648 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1622   chars1642 (    struct Maybe_1601  self1548 ) {
    struct StrCase_1643  temp1646;
    struct StrCase_1643  c1549 = (  temp1646 );
    struct Maybe_1601  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_1601_None_t ) {
        c1549 = ( ( StrCase_1643_StrCase1 ) ( ( (  from_dash_string202 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_1601_Just_t ) {
            c1549 = ( ( StrCase_1643_StrCase2 ) ( ( ( StrConcat_1644_StrConcat ) ( ( ( StrConcat_1645_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_1601_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1647 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1621   into_dash_iter1641 (    struct StrConcat_1616  dref1498 ) {
    return ( (struct StrConcatIter_1621) { .f_left = ( (  chars590 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1642 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1621   chars1640 (    struct StrConcat_1616  self1509 ) {
    return ( (  into_dash_iter1641 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1656 (    struct Screen_643 *  screen3527 ,    struct StrConcat_1616  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp299 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  y3533 ) , ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add256 ( (  op_dash_mul1435 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min451 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size244 ) ( (  op_dash_sub794 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct StrConcatIter_1621  temp1657 =  into_dash_iter1639 ( ( (  chars1640 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_588  __cond1658 =  next1629 (&temp1657);
        if (  __cond1658 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1658 .stuff .Maybe_588_Just_s .field0;
        ( (  put_dash_char1459 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add256 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add256 ( (  xx3538 ) , ( (  rendered_dash_wcwidth945 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1618 (    struct Screen_643 *  screen3543 ,    struct StrConcat_1616  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1619 ) ( ( (  map1638 ) ( ( (  chars1640 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth945 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub794 ( (  op_dash_sub794 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1656 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1617 (   struct env1483* env ,    struct StrConcat_1616  s4113 ) {
    ( (  draw_dash_str_dash_right1618 ) ( ( env->screen4106 ) ,  (  s4113 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( * ( env->curline4110 ) ) ) );
    (* env->curline4110 ) = (  op_dash_add256 ( ( * ( env->curline4110 ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1661 {
    struct StrView_21  field0;
    struct EditorMode_126  field1;
};

static struct StrConcat_1661 StrConcat_1661_StrConcat (  struct StrView_21  field0 ,  struct EditorMode_126  field1 ) {
    return ( struct StrConcat_1661 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1660 {
    enum Unit_7  (*fun) (  struct env1484*  ,    struct StrConcat_1661  );
    struct env1484 env;
};

struct StrConcatIter_1668 {
    struct StrConcatIter_1496  f_left;
    struct AppendIter_855  f_right;
};

struct StrCaseIter_1667 {
    enum {
        StrCaseIter_1667_StrCaseIter1_t,
        StrCaseIter_1667_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_585  field0;
        } StrCaseIter_1667_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1668  field0;
        } StrCaseIter_1667_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1667 StrCaseIter_1667_StrCaseIter1 (  struct StrViewIter_585  field0 ) {
    return ( struct StrCaseIter_1667 ) { .tag = StrCaseIter_1667_StrCaseIter1_t, .stuff = { .StrCaseIter_1667_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1667 StrCaseIter_1667_StrCaseIter2 (  struct StrConcatIter_1668  field0 ) {
    return ( struct StrCaseIter_1667 ) { .tag = StrCaseIter_1667_StrCaseIter2_t, .stuff = { .StrCaseIter_1667_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1666 {
    struct StrViewIter_585  f_left;
    struct StrCaseIter_1667  f_right;
};

struct Map_1665 {
    struct StrConcatIter_1666  field0;
    int32_t (*  field1 )(    struct Char_53  );
};

static struct Map_1665 Map_1665_Map (  struct StrConcatIter_1666  field0 ,  int32_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1665 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1665   into_dash_iter1670 (    struct Map_1665  self796 ) {
    return (  self796 );
}

static  struct Maybe_588   next1674 (    struct StrConcatIter_1668 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1500 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next881 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1673 (    struct StrCaseIter_1667 *  self1516 ) {
    struct StrCaseIter_1667 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1667_StrCaseIter1_t ) {
        return ( (  next589 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1667_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1667_StrCaseIter2_t ) {
            return ( (  next1674 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1667_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_588   next1672 (    struct StrConcatIter_1666 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next589 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next1673 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_254   next1671 (    struct Map_1665 *  dref798 ) {
    struct Maybe_588  dref801 = ( (  next1672 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_588_None_t ) {
        return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_588_Just_t ) {
            return ( ( Maybe_254_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_588_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1669 (    struct Map_1665  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1665  it1099 = ( (  into_dash_iter1670 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1100 = ( (  next1671 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_254_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_254_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1675 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1675);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1676;
    return (  temp1676 );
}

static  int32_t   lam1677 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add256 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1664 (    struct Map_1665  it1110 ) {
    return ( (  reduce1669 ) ( (  it1110 ) ,  (  from_dash_integral44 ( 0 ) ) ,  (  lam1677 ) ) );
}

static  struct StrConcatIter_1666   into_dash_iter1679 (    struct StrConcatIter_1666  self1491 ) {
    return (  self1491 );
}

static  struct Map_1665   map1678 (    struct StrConcatIter_1666  iterable805 ,    int32_t (*  fun807 )(    struct Char_53  ) ) {
    struct StrConcatIter_1666  it808 = ( (  into_dash_iter1679 ) ( (  iterable805 ) ) );
    return ( ( Map_1665_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1685 {
    struct StrView_21  field0;
    struct StrBuilder_50  field1;
};

static struct StrConcat_1685 StrConcat_1685_StrConcat (  struct StrView_21  field0 ,  struct StrBuilder_50  field1 ) {
    return ( struct StrConcat_1685 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1684 {
    struct StrConcat_1685  field0;
    struct Char_53  field1;
};

static struct StrConcat_1684 StrConcat_1684_StrConcat (  struct StrConcat_1685  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1684 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1683 {
    enum {
        StrCase_1683_StrCase1_t,
        StrCase_1683_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1683_StrCase1_s;
        struct {
            struct StrConcat_1684  field0;
        } StrCase_1683_StrCase2_s;
    } stuff;
};

static struct StrCase_1683 StrCase_1683_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1683 ) { .tag = StrCase_1683_StrCase1_t, .stuff = { .StrCase_1683_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1683 StrCase_1683_StrCase2 (  struct StrConcat_1684  field0 ) {
    return ( struct StrCase_1683 ) { .tag = StrCase_1683_StrCase2_t, .stuff = { .StrCase_1683_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrCaseIter_1667   undefined1688 (  ) {
    struct StrCaseIter_1667  temp1689;
    return (  temp1689 );
}

static  struct StrCaseIter_1667   todo1687 (  ) {
    ( (  print1010 ) ( ( (  from_dash_string202 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral44 ( 1 ) ) ) );
    return ( (  undefined1688 ) ( ) );
}

static  struct StrViewIter_585   chars1696 (    struct StrBuilder_50  s2801 ) {
    return ( (  into_dash_iter591 ) ( ( (  as_dash_str1270 ) ( ( & (  s2801 ) ) ) ) ) );
}

static  struct StrConcatIter_1496   into_dash_iter1695 (    struct StrConcat_1685  dref1498 ) {
    return ( (struct StrConcatIter_1496) { .f_left = ( (  chars590 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1696 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1496   chars1694 (    struct StrConcat_1685  self1509 ) {
    return ( (  into_dash_iter1695 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1668   into_dash_iter1693 (    struct StrConcat_1684  dref1498 ) {
    return ( (struct StrConcatIter_1668) { .f_left = ( (  chars1694 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars895 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1668   chars1692 (    struct StrConcat_1684  self1509 ) {
    return ( (  into_dash_iter1693 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1667   into_dash_iter1691 (    struct StrCase_1683  self1522 ) {
    struct StrCase_1683  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1683_StrCase1_t ) {
        return ( ( StrCaseIter_1667_StrCaseIter1 ) ( ( (  chars590 ) ( ( dref1523 .stuff .StrCase_1683_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1683_StrCase2_t ) {
            return ( ( StrCaseIter_1667_StrCaseIter2 ) ( ( (  chars1692 ) ( ( dref1523 .stuff .StrCase_1683_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1667   chars1690 (    struct StrCase_1683  self1534 ) {
    return ( (  into_dash_iter1691 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1667   chars1682 (    struct EditorMode_126  self4042 ) {
    struct StrCase_1683  temp1686;
    struct StrCase_1683  c4043 = (  temp1686 );
    struct EditorMode_126  dref4044 = (  self4042 );
    if ( dref4044.tag == EditorMode_126_Normal_t ) {
        c4043 = ( ( StrCase_1683_StrCase1 ) ( ( (  from_dash_string202 ) ( ( "Normal" ) ,  ( 6 ) ) ) ) );
    }
    else {
        if ( dref4044.tag == EditorMode_126_Cmd_t ) {
            c4043 = ( ( StrCase_1683_StrCase2 ) ( ( ( StrConcat_1684_StrConcat ) ( ( ( StrConcat_1685_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Cmd(" ) ,  ( 4 ) ) ) ,  ( dref4044 .stuff .EditorMode_126_Cmd_s .field0 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
        else {
            if ( true ) {
                return ( (  todo1687 ) ( ) );
            }
        }
    }
    return ( (  chars1690 ) ( (  c4043 ) ) );
}

static  struct StrConcatIter_1666   into_dash_iter1681 (    struct StrConcat_1661  dref1498 ) {
    return ( (struct StrConcatIter_1666) { .f_left = ( (  chars590 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1682 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1666   chars1680 (    struct StrConcat_1661  self1509 ) {
    return ( (  into_dash_iter1681 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1697 (    struct Screen_643 *  screen3527 ,    struct StrConcat_1661  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp299 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  y3533 ) , ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add256 ( (  op_dash_mul1435 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min451 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size244 ) ( (  op_dash_sub794 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct StrConcatIter_1666  temp1698 =  into_dash_iter1679 ( ( (  chars1680 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_588  __cond1699 =  next1672 (&temp1698);
        if (  __cond1699 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1699 .stuff .Maybe_588_Just_s .field0;
        ( (  put_dash_char1459 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add256 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add256 ( (  xx3538 ) , ( (  rendered_dash_wcwidth945 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1663 (    struct Screen_643 *  screen3543 ,    struct StrConcat_1661  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1664 ) ( ( (  map1678 ) ( ( (  chars1680 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth945 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub794 ( (  op_dash_sub794 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1697 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1662 (   struct env1484* env ,    struct StrConcat_1661  s4113 ) {
    ( (  draw_dash_str_dash_right1663 ) ( ( env->screen4106 ) ,  (  s4113 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( * ( env->curline4110 ) ) ) );
    (* env->curline4110 ) = (  op_dash_add256 ( ( * ( env->curline4110 ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1702 {
    struct StrView_21  field0;
    struct Maybe_125  field1;
};

static struct StrConcat_1702 StrConcat_1702_StrConcat (  struct StrView_21  field0 ,  struct Maybe_125  field1 ) {
    return ( struct StrConcat_1702 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1701 {
    enum Unit_7  (*fun) (  struct env1485*  ,    struct StrConcat_1702  );
    struct env1485 env;
};

struct StrCase_1708 {
    enum {
        StrCase_1708_StrCase1_t,
        StrCase_1708_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1708_StrCase1_s;
        struct {
            struct StrConcat_461  field0;
        } StrCase_1708_StrCase2_s;
    } stuff;
};

static struct StrCase_1708 StrCase_1708_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1708 ) { .tag = StrCase_1708_StrCase1_t, .stuff = { .StrCase_1708_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1708 StrCase_1708_StrCase2 (  struct StrConcat_461  field0 ) {
    return ( struct StrCase_1708 ) { .tag = StrCase_1708_StrCase2_t, .stuff = { .StrCase_1708_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1496   into_dash_iter1715 (    struct StrConcat_462  dref1498 ) {
    return ( (struct StrConcatIter_1496) { .f_left = ( (  chars590 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars590 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1496   chars1714 (    struct StrConcat_462  self1509 ) {
    return ( (  into_dash_iter1715 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1668   into_dash_iter1713 (    struct StrConcat_461  dref1498 ) {
    return ( (struct StrConcatIter_1668) { .f_left = ( (  chars1714 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars895 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1668   chars1712 (    struct StrConcat_461  self1509 ) {
    return ( (  into_dash_iter1713 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1667   into_dash_iter1711 (    struct StrCase_1708  self1522 ) {
    struct StrCase_1708  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1708_StrCase1_t ) {
        return ( ( StrCaseIter_1667_StrCaseIter1 ) ( ( (  chars590 ) ( ( dref1523 .stuff .StrCase_1708_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1708_StrCase2_t ) {
            return ( ( StrCaseIter_1667_StrCaseIter2 ) ( ( (  chars1712 ) ( ( dref1523 .stuff .StrCase_1708_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1667   chars1710 (    struct StrCase_1708  self1534 ) {
    return ( (  into_dash_iter1711 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1667   chars1707 (    struct Maybe_125  self1548 ) {
    struct StrCase_1708  temp1709;
    struct StrCase_1708  c1549 = (  temp1709 );
    struct Maybe_125  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_125_None_t ) {
        c1549 = ( ( StrCase_1708_StrCase1 ) ( ( (  from_dash_string202 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_125_Just_t ) {
            c1549 = ( ( StrCase_1708_StrCase2 ) ( ( ( StrConcat_461_StrConcat ) ( ( ( StrConcat_462_StrConcat ) ( ( (  from_dash_string202 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_125_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1710 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1666   into_dash_iter1706 (    struct StrConcat_1702  dref1498 ) {
    return ( (struct StrConcatIter_1666) { .f_left = ( (  chars590 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1707 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1666   chars1705 (    struct StrConcat_1702  self1509 ) {
    return ( (  into_dash_iter1706 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1716 (    struct Screen_643 *  screen3527 ,    struct StrConcat_1702  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp299 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  y3533 ) , ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add256 ( (  op_dash_mul1435 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min451 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size244 ) ( (  op_dash_sub794 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct StrConcatIter_1666  temp1717 =  into_dash_iter1679 ( ( (  chars1705 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_588  __cond1718 =  next1672 (&temp1717);
        if (  __cond1718 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1718 .stuff .Maybe_588_Just_s .field0;
        ( (  put_dash_char1459 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add256 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add256 ( (  xx3538 ) , ( (  rendered_dash_wcwidth945 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1704 (    struct Screen_643 *  screen3543 ,    struct StrConcat_1702  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1664 ) ( ( (  map1678 ) ( ( (  chars1705 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth945 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub794 ( (  op_dash_sub794 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1716 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1703 (   struct env1485* env ,    struct StrConcat_1702  s4113 ) {
    ( (  draw_dash_str_dash_right1704 ) ( ( env->screen4106 ) ,  (  s4113 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( * ( env->curline4110 ) ) ) );
    (* env->curline4110 ) = (  op_dash_add256 ( ( * ( env->curline4110 ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1723 {
    struct StrConcat_1463  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1723 StrConcat_1723_StrConcat (  struct StrConcat_1463  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1723 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1722 {
    struct StrConcat_1723  field0;
    int32_t  field1;
};

static struct StrConcat_1722 StrConcat_1722_StrConcat (  struct StrConcat_1723  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1722 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1721 {
    struct StrConcat_1722  field0;
    struct Char_53  field1;
};

static struct StrConcat_1721 StrConcat_1721_StrConcat (  struct StrConcat_1722  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1721 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1720 {
    enum Unit_7  (*fun) (  struct env1486*  ,    struct StrConcat_1721  );
    struct env1486 env;
};

struct StrConcatIter_1731 {
    struct StrViewIter_585  f_left;
    struct IntStrIter_1423  f_right;
};

struct StrConcatIter_1730 {
    struct StrConcatIter_1731  f_left;
    struct StrViewIter_585  f_right;
};

struct StrConcatIter_1729 {
    struct StrConcatIter_1730  f_left;
    struct IntStrIter_1423  f_right;
};

struct StrConcatIter_1728 {
    struct StrConcatIter_1729  f_left;
    struct AppendIter_855  f_right;
};

struct Map_1727 {
    struct StrConcatIter_1728  field0;
    int32_t (*  field1 )(    struct Char_53  );
};

static struct Map_1727 Map_1727_Map (  struct StrConcatIter_1728  field0 ,  int32_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1727 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1727   into_dash_iter1733 (    struct Map_1727  self796 ) {
    return (  self796 );
}

static  struct Maybe_588   next1738 (    struct StrConcatIter_1731 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next589 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next1426 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1737 (    struct StrConcatIter_1730 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1738 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next589 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1736 (    struct StrConcatIter_1729 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1737 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next1426 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1735 (    struct StrConcatIter_1728 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1736 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next881 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_254   next1734 (    struct Map_1727 *  dref798 ) {
    struct Maybe_588  dref801 = ( (  next1735 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_588_None_t ) {
        return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_588_Just_t ) {
            return ( ( Maybe_254_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_588_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1732 (    struct Map_1727  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1727  it1099 = ( (  into_dash_iter1733 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1100 = ( (  next1734 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_254_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_254_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1739 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1739);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1740;
    return (  temp1740 );
}

static  int32_t   lam1741 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add256 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1726 (    struct Map_1727  it1110 ) {
    return ( (  reduce1732 ) ( (  it1110 ) ,  (  from_dash_integral44 ( 0 ) ) ,  (  lam1741 ) ) );
}

static  struct StrConcatIter_1728   into_dash_iter1743 (    struct StrConcatIter_1728  self1491 ) {
    return (  self1491 );
}

static  struct Map_1727   map1742 (    struct StrConcatIter_1728  iterable805 ,    int32_t (*  fun807 )(    struct Char_53  ) ) {
    struct StrConcatIter_1728  it808 = ( (  into_dash_iter1743 ) ( (  iterable805 ) ) );
    return ( ( Map_1727_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_1731   into_dash_iter1751 (    struct StrConcat_1463  dref1498 ) {
    return ( (struct StrConcatIter_1731) { .f_left = ( (  chars590 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1441 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1731   chars1750 (    struct StrConcat_1463  self1509 ) {
    return ( (  into_dash_iter1751 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1730   into_dash_iter1749 (    struct StrConcat_1723  dref1498 ) {
    return ( (struct StrConcatIter_1730) { .f_left = ( (  chars1750 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars590 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1730   chars1748 (    struct StrConcat_1723  self1509 ) {
    return ( (  into_dash_iter1749 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1729   into_dash_iter1747 (    struct StrConcat_1722  dref1498 ) {
    return ( (struct StrConcatIter_1729) { .f_left = ( (  chars1748 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1441 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1729   chars1746 (    struct StrConcat_1722  self1509 ) {
    return ( (  into_dash_iter1747 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1728   into_dash_iter1745 (    struct StrConcat_1721  dref1498 ) {
    return ( (struct StrConcatIter_1728) { .f_left = ( (  chars1746 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars895 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1728   chars1744 (    struct StrConcat_1721  self1509 ) {
    return ( (  into_dash_iter1745 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1752 (    struct Screen_643 *  screen3527 ,    struct StrConcat_1721  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp299 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  y3533 ) , ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add256 ( (  op_dash_mul1435 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min451 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size244 ) ( (  op_dash_sub794 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct StrConcatIter_1728  temp1753 =  into_dash_iter1743 ( ( (  chars1744 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_588  __cond1754 =  next1735 (&temp1753);
        if (  __cond1754 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1754 .stuff .Maybe_588_Just_s .field0;
        ( (  put_dash_char1459 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add256 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add256 ( (  xx3538 ) , ( (  rendered_dash_wcwidth945 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1725 (    struct Screen_643 *  screen3543 ,    struct StrConcat_1721  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1726 ) ( ( (  map1742 ) ( ( (  chars1744 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth945 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub794 ( (  op_dash_sub794 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1752 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1724 (   struct env1486* env ,    struct StrConcat_1721  s4113 ) {
    ( (  draw_dash_str_dash_right1725 ) ( ( env->screen4106 ) ,  (  s4113 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( * ( env->curline4110 ) ) ) );
    (* env->curline4110 ) = (  op_dash_add256 ( ( * ( env->curline4110 ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1757 {
    struct StrConcat_1722  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1757 StrConcat_1757_StrConcat (  struct StrConcat_1722  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1757 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1756 {
    enum Unit_7  (*fun) (  struct env1487*  ,    struct StrConcat_1757  );
    struct env1487 env;
};

struct StrConcatIter_1762 {
    struct StrConcatIter_1729  f_left;
    struct StrViewIter_585  f_right;
};

struct Map_1761 {
    struct StrConcatIter_1762  field0;
    int32_t (*  field1 )(    struct Char_53  );
};

static struct Map_1761 Map_1761_Map (  struct StrConcatIter_1762  field0 ,  int32_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1761 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1761   into_dash_iter1764 (    struct Map_1761  self796 ) {
    return (  self796 );
}

static  struct Maybe_588   next1766 (    struct StrConcatIter_1762 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1736 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next589 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_254   next1765 (    struct Map_1761 *  dref798 ) {
    struct Maybe_588  dref801 = ( (  next1766 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_588_None_t ) {
        return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_588_Just_t ) {
            return ( ( Maybe_254_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_588_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1763 (    struct Map_1761  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1761  it1099 = ( (  into_dash_iter1764 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1100 = ( (  next1765 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_254_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_254_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1767 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1767);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1768;
    return (  temp1768 );
}

static  int32_t   lam1769 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add256 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1760 (    struct Map_1761  it1110 ) {
    return ( (  reduce1763 ) ( (  it1110 ) ,  (  from_dash_integral44 ( 0 ) ) ,  (  lam1769 ) ) );
}

static  struct StrConcatIter_1762   into_dash_iter1771 (    struct StrConcatIter_1762  self1491 ) {
    return (  self1491 );
}

static  struct Map_1761   map1770 (    struct StrConcatIter_1762  iterable805 ,    int32_t (*  fun807 )(    struct Char_53  ) ) {
    struct StrConcatIter_1762  it808 = ( (  into_dash_iter1771 ) ( (  iterable805 ) ) );
    return ( ( Map_1761_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_1762   into_dash_iter1773 (    struct StrConcat_1757  dref1498 ) {
    return ( (struct StrConcatIter_1762) { .f_left = ( (  chars1746 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars590 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1762   chars1772 (    struct StrConcat_1757  self1509 ) {
    return ( (  into_dash_iter1773 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1774 (    struct Screen_643 *  screen3527 ,    struct StrConcat_1757  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp299 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  y3533 ) , ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add256 ( (  op_dash_mul1435 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min451 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size244 ) ( (  op_dash_sub794 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct StrConcatIter_1762  temp1775 =  into_dash_iter1771 ( ( (  chars1772 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_588  __cond1776 =  next1766 (&temp1775);
        if (  __cond1776 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1776 .stuff .Maybe_588_Just_s .field0;
        ( (  put_dash_char1459 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add256 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add256 ( (  xx3538 ) , ( (  rendered_dash_wcwidth945 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1759 (    struct Screen_643 *  screen3543 ,    struct StrConcat_1757  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1760 ) ( ( (  map1770 ) ( ( (  chars1772 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth945 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub794 ( (  op_dash_sub794 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1774 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1758 (   struct env1487* env ,    struct StrConcat_1757  s4113 ) {
    ( (  draw_dash_str_dash_right1759 ) ( ( env->screen4106 ) ,  (  s4113 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( * ( env->curline4110 ) ) ) );
    (* env->curline4110 ) = (  op_dash_add256 ( ( * ( env->curline4110 ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct envunion1778 {
    enum Unit_7  (*fun) (  struct env1488*  ,    struct StrConcat_61  );
    struct env1488 env;
};

struct Map_1782 {
    struct StrConcatIter_1233  field0;
    int32_t (*  field1 )(    struct Char_53  );
};

static struct Map_1782 Map_1782_Map (  struct StrConcatIter_1233  field0 ,  int32_t (*  field1 )(    struct Char_53  ) ) {
    return ( struct Map_1782 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1782   into_dash_iter1784 (    struct Map_1782  self796 ) {
    return (  self796 );
}

static  struct Maybe_254   next1785 (    struct Map_1782 *  dref798 ) {
    struct Maybe_588  dref801 = ( (  next1240 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_588_None_t ) {
        return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_588_Just_t ) {
            return ( ( Maybe_254_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_588_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1783 (    struct Map_1782  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1782  it1099 = ( (  into_dash_iter1784 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1100 = ( (  next1785 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_254_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_254_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1786 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1786);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1787;
    return (  temp1787 );
}

static  int32_t   lam1788 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add256 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1781 (    struct Map_1782  it1110 ) {
    return ( (  reduce1783 ) ( (  it1110 ) ,  (  from_dash_integral44 ( 0 ) ) ,  (  lam1788 ) ) );
}

static  struct StrConcatIter_1233   into_dash_iter1790 (    struct StrConcatIter_1233  self1491 ) {
    return (  self1491 );
}

static  struct Map_1782   map1789 (    struct StrConcatIter_1233  iterable805 ,    int32_t (*  fun807 )(    struct Char_53  ) ) {
    struct StrConcatIter_1233  it808 = ( (  into_dash_iter1790 ) ( (  iterable805 ) ) );
    return ( ( Map_1782_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  enum Unit_7   draw_dash_str1791 (    struct Screen_643 *  screen3527 ,    struct StrConcat_61  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp299 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  y3533 ) , ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add256 ( (  op_dash_mul1435 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min451 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size244 ) ( (  op_dash_sub794 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct StrConcatIter_1233  temp1792 =  into_dash_iter1790 ( ( (  chars1254 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_588  __cond1793 =  next1240 (&temp1792);
        if (  __cond1793 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1793 .stuff .Maybe_588_Just_s .field0;
        ( (  put_dash_char1459 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add256 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add256 ( (  xx3538 ) , ( (  rendered_dash_wcwidth945 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1780 (    struct Screen_643 *  screen3543 ,    struct StrConcat_61  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1781 ) ( ( (  map1789 ) ( ( (  chars1254 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth945 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub794 ( (  op_dash_sub794 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1791 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1779 (   struct env1488* env ,    struct StrConcat_61  s4113 ) {
    ( (  draw_dash_str_dash_right1780 ) ( ( env->screen4106 ) ,  (  s4113 ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( * ( env->curline4110 ) ) ) );
    (* env->curline4110 ) = (  op_dash_add256 ( ( * ( env->curline4110 ) ) , (  from_dash_integral44 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   render_dash_editor1414 (    struct Screen_643 *  screen4106 ,    struct Editor_121 *  ed4108 ) {
    struct ScreenDims_1415  screen_dash_dims4109 = ( (struct ScreenDims_1415) { .f_from_dash_sx = (  from_dash_integral44 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub794 ( ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen4106 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral44 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub794 ( ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen4106 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) } );
    ( (  render1418 ) ( (  screen4106 ) ,  ( (  pane970 ) ( (  ed4108 ) ) ) ,  (  screen_dash_dims4109 ) ) );
    int32_t  temp1479 = (  from_dash_integral44 ( 0 ) );
    int32_t *  curline4110 = ( &temp1479 );
    struct env1480 envinst1480 = {
        .screen4106 =  screen4106 ,
        .curline4110 =  curline4110 ,
    };
    struct env1481 envinst1481 = {
        .screen4106 =  screen4106 ,
        .curline4110 =  curline4110 ,
    };
    struct env1482 envinst1482 = {
        .screen4106 =  screen4106 ,
        .curline4110 =  curline4110 ,
    };
    struct env1483 envinst1483 = {
        .screen4106 =  screen4106 ,
        .curline4110 =  curline4110 ,
    };
    struct env1484 envinst1484 = {
        .screen4106 =  screen4106 ,
        .curline4110 =  curline4110 ,
    };
    struct env1485 envinst1485 = {
        .screen4106 =  screen4106 ,
        .curline4110 =  curline4110 ,
    };
    struct env1486 envinst1486 = {
        .screen4106 =  screen4106 ,
        .curline4110 =  curline4110 ,
    };
    struct env1487 envinst1487 = {
        .screen4106 =  screen4106 ,
        .curline4110 =  curline4110 ,
    };
    struct env1488 envinst1488 = {
        .screen4106 =  screen4106 ,
        .curline4110 =  curline4110 ,
    };
    struct envunion1490  temp1489 = ( (struct envunion1490){ .fun = (  enum Unit_7  (*) (  struct env1480*  ,    struct StrConcat_1491  ) )ann1492 , .env =  envinst1480 } );
    ( temp1489.fun ( &temp1489.env ,  ( ( StrConcat_1491_StrConcat ) ( ( (  from_dash_string202 ) ( ( "mode: " ) ,  ( 6 ) ) ) ,  ( ( ( * (  ed4108 ) ) .f_pane ) .f_mode ) ) ) ) );
    enum CharType_995  cur_dash_ty4114 = ( (  char_dash_type997 ) ( ( (  char_dash_at1005 ) ( ( (  pane970 ) ( (  ed4108 ) ) ) ,  ( ( ( * (  ed4108 ) ) .f_pane ) .f_cursor ) ) ) ) );
    struct envunion1514  temp1513 = ( (struct envunion1514){ .fun = (  enum Unit_7  (*) (  struct env1481*  ,    struct StrConcat_1515  ) )ann1518 , .env =  envinst1481 } );
    ( temp1513.fun ( &temp1513.env ,  ( ( StrConcat_1515_StrConcat ) ( ( ( StrConcat_1516_StrConcat ) ( ( ( StrConcat_1517_StrConcat ) ( ( (  from_dash_string202 ) ( ( "cur: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4108 ) ) .f_pane ) .f_cursor ) ) ) ,  ( (  from_dash_string202 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  (  cur_dash_ty4114 ) ) ) ) );
    struct envunion1568  temp1567 = ( (struct envunion1568){ .fun = (  enum Unit_7  (*) (  struct env1482*  ,    struct StrConcat_1569  ) )ann1570 , .env =  envinst1482 } );
    ( temp1567.fun ( &temp1567.env ,  ( ( StrConcat_1569_StrConcat ) ( ( (  from_dash_string202 ) ( ( "sel: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4108 ) ) .f_pane ) .f_sel ) ) ) ) );
    struct Maybe_1601  cp4117 = ( (  fmap_dash_maybe1604 ) ( ( ( * (  ed4108 ) ) .f_clipboard ) ,  (  lam1605 ) ) );
    struct envunion1615  temp1614 = ( (struct envunion1615){ .fun = (  enum Unit_7  (*) (  struct env1483*  ,    struct StrConcat_1616  ) )ann1617 , .env =  envinst1483 } );
    ( temp1614.fun ( &temp1614.env ,  ( ( StrConcat_1616_StrConcat ) ( ( (  from_dash_string202 ) ( ( "cp: " ) ,  ( 4 ) ) ) ,  (  cp4117 ) ) ) ) );
    struct envunion1660  temp1659 = ( (struct envunion1660){ .fun = (  enum Unit_7  (*) (  struct env1484*  ,    struct StrConcat_1661  ) )ann1662 , .env =  envinst1484 } );
    ( temp1659.fun ( &temp1659.env ,  ( ( StrConcat_1661_StrConcat ) ( ( (  from_dash_string202 ) ( ( "edmode: " ) ,  ( 8 ) ) ) ,  ( ( * (  ed4108 ) ) .f_mode ) ) ) ) );
    struct envunion1701  temp1700 = ( (struct envunion1701){ .fun = (  enum Unit_7  (*) (  struct env1485*  ,    struct StrConcat_1702  ) )ann1703 , .env =  envinst1485 } );
    ( temp1700.fun ( &temp1700.env ,  ( ( StrConcat_1702_StrConcat ) ( ( (  from_dash_string202 ) ( ( "msg: " ) ,  ( 5 ) ) ) ,  ( ( * (  ed4108 ) ) .f_msg ) ) ) ) );
    struct envunion1720  temp1719 = ( (struct envunion1720){ .fun = (  enum Unit_7  (*) (  struct env1486*  ,    struct StrConcat_1721  ) )ann1724 , .env =  envinst1486 } );
    ( temp1719.fun ( &temp1719.env ,  ( ( StrConcat_1721_StrConcat ) ( ( ( StrConcat_1722_StrConcat ) ( ( ( StrConcat_1723_StrConcat ) ( ( ( StrConcat_1463_StrConcat ) ( ( (  from_dash_string202 ) ( ( "sc-off: (" ) ,  ( 9 ) ) ) ,  ( ( ( ( * (  ed4108 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_top ) ) ) ,  ( (  from_dash_string202 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( ( ( ( * (  ed4108 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_left ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    struct envunion1756  temp1755 = ( (struct envunion1756){ .fun = (  enum Unit_7  (*) (  struct env1487*  ,    struct StrConcat_1757  ) )ann1758 , .env =  envinst1487 } );
    ( temp1755.fun ( &temp1755.env ,  ( ( StrConcat_1757_StrConcat ) ( ( ( StrConcat_1722_StrConcat ) ( ( ( StrConcat_1723_StrConcat ) ( ( ( StrConcat_1463_StrConcat ) ( ( (  from_dash_string202 ) ( ( "dims: { " ) ,  ( 8 ) ) ) ,  ( (  screen_dash_dims4109 ) .f_to_dash_sx ) ) ) ,  ( (  from_dash_string202 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  screen_dash_dims4109 ) .f_to_dash_sy ) ) ) ,  ( (  from_dash_string202 ) ( ( " }" ) ,  ( 2 ) ) ) ) ) ) );
    struct envunion1778  temp1777 = ( (struct envunion1778){ .fun = (  enum Unit_7  (*) (  struct env1488*  ,    struct StrConcat_61  ) )ann1779 , .env =  envinst1488 } );
    ( temp1777.fun ( &temp1777.env ,  ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "num actions: " ) ,  ( 13 ) ) ) ,  ( ( ( ( * ( ( ( * (  ed4108 ) ) .f_pane ) .f_buf ) ) .f_actions ) .f_list ) .f_count ) ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1796 {
    struct StrView_21  field0;
    uint32_t  field1;
};

static struct StrConcat_1796 StrConcat_1796_StrConcat (  struct StrView_21  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1796 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1795 {
    struct StrConcat_1796  field0;
    struct Char_53  field1;
};

static struct StrConcat_1795 StrConcat_1795_StrConcat (  struct StrConcat_1796  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1795 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1800 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1799 {
    struct StrViewIter_585  f_left;
    struct IntStrIter_1800  f_right;
};

struct StrConcatIter_1798 {
    struct StrConcatIter_1799  f_left;
    struct AppendIter_855  f_right;
};

static  struct StrConcatIter_1798   into_dash_iter1801 (    struct StrConcatIter_1798  self1491 ) {
    return (  self1491 );
}

static  uint32_t   op_dash_div1809 (    uint32_t  l245 ,    uint32_t  r247 ) {
    return ( (  l245 ) / (  r247 ) );
}

static  int32_t   count_dash_digits1808 (    uint32_t  self1430 ) {
    if ( (  eq389 ( (  self1430 ) , (  from_dash_integral198 ( 0 ) ) ) ) ) {
        return (  from_dash_integral44 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral44 ( 0 ) );
    while ( (  cmp197 ( (  self1430 ) , (  from_dash_integral198 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1809 ( (  self1430 ) , (  from_dash_integral198 ( 10 ) ) ) );
        digits1431 = (  op_dash_add256 ( (  digits1431 ) , (  from_dash_integral44 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1800   uint_dash_iter1807 (    uint32_t  int1437 ) {
    return ( (struct IntStrIter_1800) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1808 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1800   chars1806 (    uint32_t  self1449 ) {
    return ( (  uint_dash_iter1807 ) ( (  self1449 ) ) );
}

static  struct StrConcatIter_1799   into_dash_iter1805 (    struct StrConcat_1796  dref1498 ) {
    return ( (struct StrConcatIter_1799) { .f_left = ( (  chars590 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1806 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1799   chars1804 (    struct StrConcat_1796  self1509 ) {
    return ( (  into_dash_iter1805 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1798   into_dash_iter1803 (    struct StrConcat_1795  dref1498 ) {
    return ( (struct StrConcatIter_1798) { .f_left = ( (  chars1804 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars895 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1798   chars1802 (    struct StrConcat_1795  self1509 ) {
    return ( (  into_dash_iter1803 ) ( (  self1509 ) ) );
}

struct env1816 {
    ;
    uint32_t  base1210;
};

struct envunion1817 {
    uint32_t  (*fun) (  struct env1816*  ,    int32_t  ,    uint32_t  );
    struct env1816 env;
};

static  uint32_t   reduce1815 (    struct Range_668  iterable1093 ,    uint32_t  base1095 ,   struct envunion1817  fun1097 ) {
    uint32_t  x1098 = (  base1095 );
    struct RangeIter_671  it1099 = ( (  into_dash_iter673 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1100 = ( (  next674 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_254_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_254_Just_t ) {
                struct envunion1817  temp1818 = (  fun1097 );
                x1098 = ( temp1818.fun ( &temp1818.env ,  ( dref1100 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1819 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1819);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp1820;
    return (  temp1820 );
}

static  uint32_t   lam1821 (   struct env1816* env ,    int32_t  item1214 ,    uint32_t  x1216 ) {
    return (  op_dash_mul665 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint32_t   pow1814 (    uint32_t  base1210 ,    int32_t  p1212 ) {
    struct env1816 envinst1816 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1815 ) ( ( (  to676 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  op_dash_sub794 ( (  p1212 ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral198 ( 1 ) ) ,  ( (struct envunion1817){ .fun = (  uint32_t  (*) (  struct env1816*  ,    int32_t  ,    uint32_t  ) )lam1821 , .env =  envinst1816 } ) ) );
}

static  uint32_t   op_dash_sub1822 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) - (  r237 ) );
}

static  struct Maybe_588   next1813 (    struct IntStrIter_1800 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_588_Just ) ( ( (  from_dash_charlike203 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp299 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_588) { .tag = Maybe_588_None_t } );
    }
    uint32_t  trim_dash_down1423 = ( (  pow1814 ) ( (  from_dash_integral198 ( 10 ) ) ,  (  op_dash_sub794 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 1 ) ) ) ) ) );
    uint32_t  upper1424 = (  op_dash_div1809 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    uint32_t  upper_dash_mask1425 = (  op_dash_mul665 ( (  op_dash_div1809 ( (  upper1424 ) , (  from_dash_integral198 ( 10 ) ) ) ) , (  from_dash_integral198 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast201 ) ( (  op_dash_sub1822 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub794 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 1 ) ) ) );
    struct Char_53  digit_dash_char1427 = ( (  from_dash_u8874 ) ( (  op_dash_add764 ( (  digit1426 ) , (  from_dash_integral194 ( 48 ) ) ) ) ) );
    return ( ( Maybe_588_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_588   next1812 (    struct StrConcatIter_1799 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next589 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next1813 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1811 (    struct StrConcatIter_1798 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1812 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next881 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   draw_dash_str1794 (    struct Screen_643 *  screen3527 ,    struct StrConcat_1795  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp299 ( (  y3533 ) , (  from_dash_integral44 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  y3533 ) , ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add256 ( (  op_dash_mul1435 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min451 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size244 ) ( (  op_dash_sub794 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral44 ( 0 ) );
    struct StrConcatIter_1798  temp1797 =  into_dash_iter1801 ( ( (  chars1802 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_588  __cond1810 =  next1811 (&temp1797);
        if (  __cond1810 .tag == 0 ) {
            break;
        }
        struct Char_53  c3540 =  __cond1810 .stuff .Maybe_588_Just_s .field0;
        ( (  put_dash_char1459 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add256 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add256 ( (  xx3538 ) , ( (  rendered_dash_wcwidth945 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

struct RenderState_1824 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_646  f_fg;
    struct Color_646  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_1829 {
    struct StrConcat_1795  field0;
    uint32_t  field1;
};

static struct StrConcat_1829 StrConcat_1829_StrConcat (  struct StrConcat_1795  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1829 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1828 {
    struct StrConcat_1829  field0;
    struct Char_53  field1;
};

static struct StrConcat_1828 StrConcat_1828_StrConcat (  struct StrConcat_1829  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1828 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_1832 {
    struct StrConcatIter_1798  f_left;
    struct IntStrIter_1800  f_right;
};

struct StrConcatIter_1831 {
    struct StrConcatIter_1832  f_left;
    struct AppendIter_855  f_right;
};

static  struct StrConcatIter_1831   into_dash_iter1834 (    struct StrConcatIter_1831  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_588   next1836 (    struct StrConcatIter_1832 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1811 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next1813 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1835 (    struct StrConcatIter_1831 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1836 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next881 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each1830 (    struct StrConcatIter_1831  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_53  ) ) {
    struct StrConcatIter_1831  temp1833 = ( (  into_dash_iter1834 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1831 *  it1077 = ( &temp1833 );
    while ( ( true ) ) {
        struct Maybe_588  dref1078 = ( (  next1835 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_588_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_588_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_588_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrConcatIter_1832   into_dash_iter1840 (    struct StrConcat_1829  dref1498 ) {
    return ( (struct StrConcatIter_1832) { .f_left = ( (  chars1802 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1806 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1832   chars1839 (    struct StrConcat_1829  self1509 ) {
    return ( (  into_dash_iter1840 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1831   into_dash_iter1838 (    struct StrConcat_1828  dref1498 ) {
    return ( (struct StrConcatIter_1831) { .f_left = ( (  chars1839 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars895 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1831   chars1837 (    struct StrConcat_1828  self1509 ) {
    return ( (  into_dash_iter1838 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print1827 (    struct StrConcat_1828  s2563 ) {
    ( (  for_dash_each1830 ) ( ( (  chars1837 ) ( (  s2563 ) ) ) ,  (  printf_dash_char186 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   move_dash_cursor_dash_to1826 (    uint32_t  x2577 ,    uint32_t  y2579 ) {
    uint32_t  x2580 = (  op_dash_add766 ( (  x2577 ) , (  from_dash_integral198 ( 1 ) ) ) );
    uint32_t  y2581 = (  op_dash_add766 ( (  y2579 ) , (  from_dash_integral198 ( 1 ) ) ) );
    ( (  print1827 ) ( ( ( StrConcat_1828_StrConcat ) ( ( ( StrConcat_1829_StrConcat ) ( ( ( StrConcat_1795_StrConcat ) ( ( ( StrConcat_1796_StrConcat ) ( ( (  from_dash_string202 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2581 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2580 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Slice_644   subslice1843 (    struct Slice_644  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Cell_645 *  begin_dash_ptr1787 = ( (  offset_dash_ptr680 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp166 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp166 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_644) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub286 ( ( (  min313 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_644) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

struct SliceIter_1846 {
    struct Slice_644  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_1845 {
    struct SliceIter_1846  f_left_dash_it;
    struct SliceIter_1846  f_right_dash_it;
};

struct Tuple2_1847 {
    struct Cell_645  field0;
    struct Cell_645  field1;
};

static struct Tuple2_1847 Tuple2_1847_Tuple2 (  struct Cell_645  field0 ,  struct Cell_645  field1 ) {
    return ( struct Tuple2_1847 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1849 {
    bool (*  fun1135 )(    struct Tuple2_1847  );
};

struct envunion1850 {
    bool  (*fun) (  struct env1849*  ,    struct Tuple2_1847  ,    bool  );
    struct env1849 env;
};

static  struct Zip_1845   into_dash_iter1851 (    struct Zip_1845  self911 ) {
    return (  self911 );
}

struct Maybe_1852 {
    enum {
        Maybe_1852_None_t,
        Maybe_1852_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1847  field0;
        } Maybe_1852_Just_s;
    } stuff;
};

static struct Maybe_1852 Maybe_1852_Just (  struct Tuple2_1847  field0 ) {
    return ( struct Maybe_1852 ) { .tag = Maybe_1852_Just_t, .stuff = { .Maybe_1852_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_685   next1854 (    struct SliceIter_1846 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp166 ( (  op_dash_add214 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_685) { .tag = Maybe_685_None_t } );
    }
    struct Cell_645  elem1830 = ( * ( (  offset_dash_ptr680 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64243 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add214 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_685_Just ) ( (  elem1830 ) ) );
}

static  struct Maybe_1852   next1853 (    struct Zip_1845 *  self914 ) {
    struct Zip_1845  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_685  dref916 = ( (  next1854 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_685_None_t ) {
            return ( (struct Maybe_1852) { .tag = Maybe_1852_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_685_Just_t ) {
                struct Maybe_685  dref918 = ( (  next1854 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_685_None_t ) {
                    return ( (struct Maybe_1852) { .tag = Maybe_1852_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_685_Just_t ) {
                        ( (  next1854 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next1854 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1852_Just ) ( ( ( Tuple2_1847_Tuple2 ) ( ( dref916 .stuff .Maybe_685_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_685_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1848 (    struct Zip_1845  iterable1093 ,    bool  base1095 ,   struct envunion1850  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_1845  it1099 = ( (  into_dash_iter1851 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1852  dref1100 = ( (  next1853 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1852_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1852_Just_t ) {
                struct envunion1850  temp1855 = (  fun1097 );
                x1098 = ( temp1855.fun ( &temp1855.env ,  ( dref1100 .stuff .Maybe_1852_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1856 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1856);
    exit ( 1 );
    ( Unit_7_Unit );
    bool  temp1857;
    return (  temp1857 );
}

static  bool   lam1858 (   struct env1849* env ,    struct Tuple2_1847  e1137 ,    bool  x1139 ) {
    return ( ( ( env->fun1135 ) ( (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1844 (    struct Zip_1845  it1133 ,    bool (*  fun1135 )(    struct Tuple2_1847  ) ) {
    struct env1849 envinst1849 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1848 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1850){ .fun = (  bool  (*) (  struct env1849*  ,    struct Tuple2_1847  ,    bool  ) )lam1858 , .env =  envinst1849 } ) ) );
}

static  struct SliceIter_1846   into_dash_iter1860 (    struct Slice_644  self1822 ) {
    return ( (struct SliceIter_1846) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_1845   zip1859 (    struct Slice_644  left922 ,    struct Slice_644  right924 ) {
    struct SliceIter_1846  left_dash_it925 = ( (  into_dash_iter1860 ) ( (  left922 ) ) );
    struct SliceIter_1846  right_dash_it926 = ( (  into_dash_iter1860 ) ( (  right924 ) ) );
    return ( (struct Zip_1845) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

struct Tuple2_1864 {
    struct Color_646  field0;
    struct Color_646  field1;
};

static struct Tuple2_1864 Tuple2_1864_Tuple2 (  struct Color_646  field0 ,  struct Color_646  field1 ) {
    return ( struct Tuple2_1864 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_647 *   cast1868 (    int32_t *  x356 ) {
    return ( (enum Color8_647 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1866 (    enum Color8_647  x573 ) {
    int32_t  temp1867 = ( (  zeroed837 ) ( ) );
    int32_t *  y574 = ( &temp1867 );
    enum Color8_647 *  yp575 = ( (  cast1868 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq1865 (    enum Color8_647  l2605 ,    enum Color8_647  r2607 ) {
    return (  eq302 ( ( ( (  cast_dash_on_dash_zeroed1866 ) ( (  l2605 ) ) ) ) , ( (  cast_dash_on_dash_zeroed1866 ) ( (  r2607 ) ) ) ) );
}

static  enum Color16_648 *   cast1872 (    int32_t *  x356 ) {
    return ( (enum Color16_648 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1870 (    enum Color16_648  x573 ) {
    int32_t  temp1871 = ( (  zeroed837 ) ( ) );
    int32_t *  y574 = ( &temp1871 );
    enum Color16_648 *  yp575 = ( (  cast1872 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq1869 (    enum Color16_648  l2611 ,    enum Color16_648  r2613 ) {
    return (  eq302 ( ( ( (  cast_dash_on_dash_zeroed1870 ) ( (  l2611 ) ) ) ) , ( (  cast_dash_on_dash_zeroed1870 ) ( (  r2613 ) ) ) ) );
}

static  bool   eq1873 (    struct RGB_649  l2641 ,    struct RGB_649  r2643 ) {
    return ( ( (  eq190 ( ( (  l2641 ) .f_r ) , ( (  r2643 ) .f_r ) ) ) && (  eq190 ( ( (  l2641 ) .f_g ) , ( (  r2643 ) .f_g ) ) ) ) && (  eq190 ( ( (  l2641 ) .f_b ) , ( (  r2643 ) .f_b ) ) ) );
}

static  bool   eq1863 (    struct Color_646  l2664 ,    struct Color_646  r2666 ) {
    return ( {  struct Tuple2_1864  dref2667 = ( ( Tuple2_1864_Tuple2 ) ( (  l2664 ) ,  (  r2666 ) ) ) ; dref2667 .field0.tag == Color_646_ColorDefault_t && dref2667 .field1.tag == Color_646_ColorDefault_t ? ( true ) : dref2667 .field0.tag == Color_646_Color8_t && dref2667 .field1.tag == Color_646_Color8_t ? (  eq1865 ( ( dref2667 .field0 .stuff .Color_646_Color8_s .field0 ) , ( dref2667 .field1 .stuff .Color_646_Color8_s .field0 ) ) ) : dref2667 .field0.tag == Color_646_Color16_t && dref2667 .field1.tag == Color_646_Color16_t ? (  eq1869 ( ( dref2667 .field0 .stuff .Color_646_Color16_s .field0 ) , ( dref2667 .field1 .stuff .Color_646_Color16_s .field0 ) ) ) : dref2667 .field0.tag == Color_646_Color256_t && dref2667 .field1.tag == Color_646_Color256_t ? (  eq190 ( ( dref2667 .field0 .stuff .Color_646_Color256_s .field0 ) , ( dref2667 .field1 .stuff .Color_646_Color256_s .field0 ) ) ) : dref2667 .field0.tag == Color_646_ColorRGB_t && dref2667 .field1.tag == Color_646_ColorRGB_t ? (  eq1873 ( ( dref2667 .field0 .stuff .Color_646_ColorRGB_s .field0 ) , ( dref2667 .field1 .stuff .Color_646_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq1862 (    struct Cell_645  l3400 ,    struct Cell_645  r3402 ) {
    if ( ( !  eq385 ( ( (  l3400 ) .f_c ) , ( (  r3402 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq1863 ( ( (  l3400 ) .f_fg ) , ( (  r3402 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq1863 ( ( (  l3400 ) .f_bg ) , ( (  r3402 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam1861 (    struct Tuple2_1847  dref3456 ) {
    return ( !  eq1862 ( ( dref3456 .field0 ) , ( dref3456 .field1 ) ) );
}

static  enum Unit_7   set_dash_default_dash_fg1876 (  ) {
    ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg81877 (    enum Color8_647  color2616 ) {
    enum Color8_647  dref2617 = (  color2616 );
    switch (  dref2617 ) {
        case Color8_647_Black8 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_647_Red8 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_647_Green8 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_647_Yellow8 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_647_Blue8 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_647_Magenta8 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_647_Cyan8 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_647_White8 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg161878 (    enum Color16_648  color2620 ) {
    enum Color16_648  dref2621 = (  color2620 );
    switch (  dref2621 ) {
        case Color16_648_Black16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_Red16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_Green16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_Yellow16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_Blue16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_Magenta16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_Cyan16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_White16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_BrightBlack16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_BrightRed16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_BrightGreen16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_BrightYellow16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_BrightBlue16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_BrightMagenta16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_BrightCyan16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_BrightWhite16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

struct StrConcat_1882 {
    struct StrView_21  field0;
    uint8_t  field1;
};

static struct StrConcat_1882 StrConcat_1882_StrConcat (  struct StrView_21  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1882 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1881 {
    struct StrConcat_1882  field0;
    struct Char_53  field1;
};

static struct StrConcat_1881 StrConcat_1881_StrConcat (  struct StrConcat_1882  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1881 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1886 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1885 {
    struct StrViewIter_585  f_left;
    struct IntStrIter_1886  f_right;
};

struct StrConcatIter_1884 {
    struct StrConcatIter_1885  f_left;
    struct AppendIter_855  f_right;
};

static  struct StrConcatIter_1884   into_dash_iter1888 (    struct StrConcatIter_1884  self1491 ) {
    return (  self1491 );
}

struct env1894 {
    uint8_t  base1210;
    ;
};

struct envunion1895 {
    uint8_t  (*fun) (  struct env1894*  ,    int32_t  ,    uint8_t  );
    struct env1894 env;
};

static  uint8_t   reduce1893 (    struct Range_668  iterable1093 ,    uint8_t  base1095 ,   struct envunion1895  fun1097 ) {
    uint8_t  x1098 = (  base1095 );
    struct RangeIter_671  it1099 = ( (  into_dash_iter673 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1100 = ( (  next674 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_254_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_254_Just_t ) {
                struct envunion1895  temp1896 = (  fun1097 );
                x1098 = ( temp1896.fun ( &temp1896.env ,  ( dref1100 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1897 = ( (  from_dash_string45 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1897);
    exit ( 1 );
    ( Unit_7_Unit );
    uint8_t  temp1898;
    return (  temp1898 );
}

static  uint8_t   op_dash_mul1900 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam1899 (   struct env1894* env ,    int32_t  item1214 ,    uint8_t  x1216 ) {
    return (  op_dash_mul1900 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint8_t   pow1892 (    uint8_t  base1210 ,    int32_t  p1212 ) {
    struct env1894 envinst1894 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1893 ) ( ( (  to676 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  op_dash_sub794 ( (  p1212 ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral194 ( 1 ) ) ,  ( (struct envunion1895){ .fun = (  uint8_t  (*) (  struct env1894*  ,    int32_t  ,    uint8_t  ) )lam1899 , .env =  envinst1894 } ) ) );
}

static  uint8_t   op_dash_div1901 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast1902 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_588   next1891 (    struct IntStrIter_1886 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_588_Just ) ( ( (  from_dash_charlike203 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp299 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_588) { .tag = Maybe_588_None_t } );
    }
    uint8_t  trim_dash_down1423 = ( (  pow1892 ) ( (  from_dash_integral194 ( 10 ) ) ,  (  op_dash_sub794 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 1 ) ) ) ) ) );
    uint8_t  upper1424 = (  op_dash_div1901 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    uint8_t  upper_dash_mask1425 = (  op_dash_mul1900 ( (  op_dash_div1901 ( (  upper1424 ) , (  from_dash_integral194 ( 10 ) ) ) ) , (  from_dash_integral194 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1902 ) ( (  op_dash_sub763 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub794 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral44 ( 1 ) ) ) );
    struct Char_53  digit_dash_char1427 = ( (  from_dash_u8874 ) ( (  op_dash_add764 ( (  digit1426 ) , (  from_dash_integral194 ( 48 ) ) ) ) ) );
    return ( ( Maybe_588_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_588   next1890 (    struct StrConcatIter_1885 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next589 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next1891 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1889 (    struct StrConcatIter_1884 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1890 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next881 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each1883 (    struct StrConcatIter_1884  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_53  ) ) {
    struct StrConcatIter_1884  temp1887 = ( (  into_dash_iter1888 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1884 *  it1077 = ( &temp1887 );
    while ( ( true ) ) {
        struct Maybe_588  dref1078 = ( (  next1889 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_588_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_588_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_588_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  int32_t   count_dash_digits1909 (    uint8_t  self1430 ) {
    if ( (  eq190 ( (  self1430 ) , (  from_dash_integral194 ( 0 ) ) ) ) ) {
        return (  from_dash_integral44 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral44 ( 0 ) );
    while ( (  cmp207 ( (  self1430 ) , (  from_dash_integral194 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1901 ( (  self1430 ) , (  from_dash_integral194 ( 10 ) ) ) );
        digits1431 = (  op_dash_add256 ( (  digits1431 ) , (  from_dash_integral44 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1886   uint_dash_iter1908 (    uint8_t  int1437 ) {
    return ( (struct IntStrIter_1886) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1909 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1886   chars1907 (    uint8_t  self1455 ) {
    return ( (  uint_dash_iter1908 ) ( (  self1455 ) ) );
}

static  struct StrConcatIter_1885   into_dash_iter1906 (    struct StrConcat_1882  dref1498 ) {
    return ( (struct StrConcatIter_1885) { .f_left = ( (  chars590 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1907 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1885   chars1905 (    struct StrConcat_1882  self1509 ) {
    return ( (  into_dash_iter1906 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1884   into_dash_iter1904 (    struct StrConcat_1881  dref1498 ) {
    return ( (struct StrConcatIter_1884) { .f_left = ( (  chars1905 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars895 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1884   chars1903 (    struct StrConcat_1881  self1509 ) {
    return ( (  into_dash_iter1904 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print1880 (    struct StrConcat_1881  s2563 ) {
    ( (  for_dash_each1883 ) ( ( (  chars1903 ) ( (  s2563 ) ) ) ,  (  printf_dash_char186 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg2561879 (    uint8_t  color2634 ) {
    ( (  print1880 ) ( ( ( StrConcat_1881_StrConcat ) ( ( ( StrConcat_1882_StrConcat ) ( ( (  from_dash_string202 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2634 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1915 {
    struct StrConcat_1881  field0;
    uint8_t  field1;
};

static struct StrConcat_1915 StrConcat_1915_StrConcat (  struct StrConcat_1881  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1915 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1914 {
    struct StrConcat_1915  field0;
    struct Char_53  field1;
};

static struct StrConcat_1914 StrConcat_1914_StrConcat (  struct StrConcat_1915  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1914 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1913 {
    struct StrConcat_1914  field0;
    uint8_t  field1;
};

static struct StrConcat_1913 StrConcat_1913_StrConcat (  struct StrConcat_1914  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1913 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1912 {
    struct StrConcat_1913  field0;
    struct Char_53  field1;
};

static struct StrConcat_1912 StrConcat_1912_StrConcat (  struct StrConcat_1913  field0 ,  struct Char_53  field1 ) {
    return ( struct StrConcat_1912 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_1920 {
    struct StrConcatIter_1884  f_left;
    struct IntStrIter_1886  f_right;
};

struct StrConcatIter_1919 {
    struct StrConcatIter_1920  f_left;
    struct AppendIter_855  f_right;
};

struct StrConcatIter_1918 {
    struct StrConcatIter_1919  f_left;
    struct IntStrIter_1886  f_right;
};

struct StrConcatIter_1917 {
    struct StrConcatIter_1918  f_left;
    struct AppendIter_855  f_right;
};

static  struct StrConcatIter_1917   into_dash_iter1922 (    struct StrConcatIter_1917  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_588   next1926 (    struct StrConcatIter_1920 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1889 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next1891 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1925 (    struct StrConcatIter_1919 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1926 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next881 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1924 (    struct StrConcatIter_1918 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1925 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next1891 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_588   next1923 (    struct StrConcatIter_1917 *  self1494 ) {
    struct Maybe_588  dref1495 = ( (  next1924 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_588_Just_t ) {
        return ( ( Maybe_588_Just ) ( ( dref1495 .stuff .Maybe_588_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_588_None_t ) {
            return ( (  next881 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each1916 (    struct StrConcatIter_1917  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_53  ) ) {
    struct StrConcatIter_1917  temp1921 = ( (  into_dash_iter1922 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1917 *  it1077 = ( &temp1921 );
    while ( ( true ) ) {
        struct Maybe_588  dref1078 = ( (  next1923 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_588_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_588_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_588_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrConcatIter_1920   into_dash_iter1934 (    struct StrConcat_1915  dref1498 ) {
    return ( (struct StrConcatIter_1920) { .f_left = ( (  chars1903 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1907 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1920   chars1933 (    struct StrConcat_1915  self1509 ) {
    return ( (  into_dash_iter1934 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1919   into_dash_iter1932 (    struct StrConcat_1914  dref1498 ) {
    return ( (struct StrConcatIter_1919) { .f_left = ( (  chars1933 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars895 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1919   chars1931 (    struct StrConcat_1914  self1509 ) {
    return ( (  into_dash_iter1932 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1918   into_dash_iter1930 (    struct StrConcat_1913  dref1498 ) {
    return ( (struct StrConcatIter_1918) { .f_left = ( (  chars1931 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1907 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1918   chars1929 (    struct StrConcat_1913  self1509 ) {
    return ( (  into_dash_iter1930 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1917   into_dash_iter1928 (    struct StrConcat_1912  dref1498 ) {
    return ( (struct StrConcatIter_1917) { .f_left = ( (  chars1929 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars895 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1917   chars1927 (    struct StrConcat_1912  self1509 ) {
    return ( (  into_dash_iter1928 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print1911 (    struct StrConcat_1912  s2563 ) {
    ( (  for_dash_each1916 ) ( ( (  chars1927 ) ( (  s2563 ) ) ) ,  (  printf_dash_char186 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg_dash_rgb1910 (    struct RGB_649  c2657 ) {
    ( (  print1911 ) ( ( ( StrConcat_1912_StrConcat ) ( ( ( StrConcat_1913_StrConcat ) ( ( ( StrConcat_1914_StrConcat ) ( ( ( StrConcat_1915_StrConcat ) ( ( ( StrConcat_1881_StrConcat ) ( ( ( StrConcat_1882_StrConcat ) ( ( (  from_dash_string202 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2657 ) .f_r ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2657 ) .f_g ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2657 ) .f_b ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg1875 (    struct Color_646  c2678 ) {
    struct Color_646  dref2679 = (  c2678 );
    if ( dref2679.tag == Color_646_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg1876 ) ( ) );
    }
    else {
        if ( dref2679.tag == Color_646_Color8_t ) {
            ( (  set_dash_fg81877 ) ( ( dref2679 .stuff .Color_646_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2679.tag == Color_646_Color16_t ) {
                ( (  set_dash_fg161878 ) ( ( dref2679 .stuff .Color_646_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2679.tag == Color_646_Color256_t ) {
                    ( (  set_dash_fg2561879 ) ( ( dref2679 .stuff .Color_646_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2679.tag == Color_646_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb1910 ) ( ( dref2679 .stuff .Color_646_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_default_dash_bg1936 (  ) {
    ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg81937 (    enum Color8_647  color2624 ) {
    enum Color8_647  dref2625 = (  color2624 );
    switch (  dref2625 ) {
        case Color8_647_Black8 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_647_Red8 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_647_Green8 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_647_Yellow8 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_647_Blue8 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_647_Magenta8 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_647_Cyan8 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_647_White8 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg161938 (    enum Color16_648  color2628 ) {
    enum Color16_648  dref2629 = (  color2628 );
    switch (  dref2629 ) {
        case Color16_648_Black16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_Red16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_Green16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_Yellow16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_Blue16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_Magenta16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_Cyan16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_White16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_648_BrightBlack16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_648_BrightRed16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_648_BrightGreen16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_648_BrightYellow16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_648_BrightBlue16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_648_BrightMagenta16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_648_BrightCyan16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_648_BrightWhite16 : {
            ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg2561939 (    uint8_t  color2637 ) {
    ( (  print1880 ) ( ( ( StrConcat_1881_StrConcat ) ( ( ( StrConcat_1882_StrConcat ) ( ( (  from_dash_string202 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2637 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg_dash_rgb1940 (    struct RGB_649  c2660 ) {
    ( (  print1911 ) ( ( ( StrConcat_1912_StrConcat ) ( ( ( StrConcat_1913_StrConcat ) ( ( ( StrConcat_1914_StrConcat ) ( ( ( StrConcat_1915_StrConcat ) ( ( ( StrConcat_1881_StrConcat ) ( ( ( StrConcat_1882_StrConcat ) ( ( (  from_dash_string202 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2660 ) .f_r ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2660 ) .f_g ) ) ) ,  ( (  from_dash_charlike203 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2660 ) .f_b ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg1935 (    struct Color_646  c2686 ) {
    struct Color_646  dref2687 = (  c2686 );
    if ( dref2687.tag == Color_646_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg1936 ) ( ) );
    }
    else {
        if ( dref2687.tag == Color_646_Color8_t ) {
            ( (  set_dash_bg81937 ) ( ( dref2687 .stuff .Color_646_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2687.tag == Color_646_Color16_t ) {
                ( (  set_dash_bg161938 ) ( ( dref2687 .stuff .Color_646_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2687.tag == Color_646_Color256_t ) {
                    ( (  set_dash_bg2561939 ) ( ( dref2687 .stuff .Color_646_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2687.tag == Color_646_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb1940 ) ( ( dref2687 .stuff .Color_646_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  uint32_t   i32_dash_u321941 (    int32_t  x603 ) {
    return ( (uint32_t ) (  x603 ) );
}

static  enum Unit_7   emit_dash_cell1874 (    struct RenderState_1824 *  rs3432 ,    struct Cell_645 *  c3434 ,    uint32_t  x3436 ,    uint32_t  y3438 ) {
    if ( ( ( !  eq389 ( (  x3436 ) , ( ( * (  rs3432 ) ) .f_x ) ) ) || ( !  eq389 ( (  y3438 ) , ( ( * (  rs3432 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1826 ) ( (  x3436 ) ,  (  y3438 ) ) );
        (*  rs3432 ) .f_x = (  x3436 );
        (*  rs3432 ) .f_y = (  y3438 );
    }
    struct Char_53  char3439 = ( ( * (  c3434 ) ) .f_c );
    struct Color_646  bg3440 = ( ( * (  c3434 ) ) .f_bg );
    if ( (  eq302 ( ( ( * (  c3434 ) ) .f_char_dash_width ) , (  op_dash_neg618 ( (  from_dash_integral44 ( 1 ) ) ) ) ) ) ) {
        char3439 = ( (  from_dash_charlike203 ) ( ( " " ) ,  ( 1 ) ) );
        bg3440 = ( ( Color_646_Color8 ) ( ( Color8_647_Red8 ) ) );
    }
    if ( ( !  eq1863 ( ( ( * (  rs3432 ) ) .f_fg ) , ( ( * (  c3434 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg1875 ) ( ( ( * (  c3434 ) ) .f_fg ) ) );
        (*  rs3432 ) .f_fg = ( ( * (  c3434 ) ) .f_fg );
    }
    if ( ( !  eq1863 ( ( ( * (  rs3432 ) ) .f_bg ) , (  bg3440 ) ) ) ) {
        ( (  set_dash_bg1935 ) ( (  bg3440 ) ) );
        (*  rs3432 ) .f_bg = (  bg3440 );
    }
    ( (  print_dash_str185 ) ( (  char3439 ) ) );
    uint32_t  char_dash_width3441 = ( (  i32_dash_u321941 ) ( ( (  max946 ) ( ( ( * (  c3434 ) ) .f_char_dash_width ) ,  (  from_dash_integral44 ( 1 ) ) ) ) ) );
    (*  rs3432 ) .f_x = (  op_dash_add766 ( ( ( * (  rs3432 ) ) .f_x ) , (  char_dash_width3441 ) ) );
    return ( Unit_7_Unit );
}

struct Zip_1944 {
    struct SliceIter_1846  f_left_dash_it;
    struct FromIter_248  f_right_dash_it;
};

struct env1945 {
    ;
    struct Slice_644  dest1853;
    ;
};

struct Tuple2_1947 {
    struct Cell_645  field0;
    int32_t  field1;
};

static struct Tuple2_1947 Tuple2_1947_Tuple2 (  struct Cell_645  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1947 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1946 {
    enum Unit_7  (*fun) (  struct env1945*  ,    struct Tuple2_1947  );
    struct env1945 env;
};

static  struct Zip_1944   into_dash_iter1949 (    struct Zip_1944  self911 ) {
    return (  self911 );
}

struct Maybe_1950 {
    enum {
        Maybe_1950_None_t,
        Maybe_1950_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1947  field0;
        } Maybe_1950_Just_s;
    } stuff;
};

static struct Maybe_1950 Maybe_1950_Just (  struct Tuple2_1947  field0 ) {
    return ( struct Maybe_1950 ) { .tag = Maybe_1950_Just_t, .stuff = { .Maybe_1950_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1950   next1951 (    struct Zip_1944 *  self914 ) {
    struct Zip_1944  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_685  dref916 = ( (  next1854 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_685_None_t ) {
            return ( (struct Maybe_1950) { .tag = Maybe_1950_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_685_Just_t ) {
                struct Maybe_254  dref918 = ( (  next255 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_254_None_t ) {
                    return ( (struct Maybe_1950) { .tag = Maybe_1950_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_254_Just_t ) {
                        ( (  next1854 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next255 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1950_Just ) ( ( ( Tuple2_1947_Tuple2 ) ( ( dref916 .stuff .Maybe_685_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_254_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each1943 (    struct Zip_1944  iterable1074 ,   struct envunion1946  fun1076 ) {
    struct Zip_1944  temp1948 = ( (  into_dash_iter1949 ) ( (  iterable1074 ) ) );
    struct Zip_1944 *  it1077 = ( &temp1948 );
    while ( ( true ) ) {
        struct Maybe_1950  dref1078 = ( (  next1951 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1950_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1950_Just_t ) {
                struct envunion1946  temp1952 = (  fun1076 );
                ( temp1952.fun ( &temp1952.env ,  ( dref1078 .stuff .Maybe_1950_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_1944   zip1953 (    struct Slice_644  left922 ,    struct FromIter_248  right924 ) {
    struct SliceIter_1846  left_dash_it925 = ( (  into_dash_iter1860 ) ( (  left922 ) ) );
    struct FromIter_248  right_dash_it926 = ( (  into_dash_iter260 ) ( (  right924 ) ) );
    return ( (struct Zip_1944) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   lam1954 (   struct env1945* env ,    struct Tuple2_1947  dref1854 ) {
    return ( (  set678 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size244 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_7   copy_dash_to1942 (    struct Slice_644  src1851 ,    struct Slice_644  dest1853 ) {
    if ( (  cmp166 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic435 ) ( ( ( StrConcat_436_StrConcat ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_60_StrConcat ) ( ( ( StrConcat_61_StrConcat ) ( ( (  from_dash_string202 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string202 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string202 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env1945 envinst1945 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each1943 ) ( ( (  zip1953 ) ( (  src1851 ) ,  ( (  from261 ) ( (  from_dash_integral44 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1946){ .fun = (  enum Unit_7  (*) (  struct env1945*  ,    struct Tuple2_1947  ) )lam1954 , .env =  envinst1945 } ) ) );
    return ( Unit_7_Unit );
}

static  uint32_t   render_dash_screen1823 (    struct Screen_643 *  screen3444 ) {
    int32_t  w3445 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3444 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3446 = ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen3444 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1824  temp1825 = ( (struct RenderState_1824) { .f_x = (  from_dash_integral198 ( 0 ) ) , .f_y = (  from_dash_integral198 ( 0 ) ) , .f_fg = ( (struct Color_646) { .tag = Color_646_ColorDefault_t } ) , .f_bg = ( (struct Color_646) { .tag = Color_646_ColorDefault_t } ) , .f_changes = (  from_dash_integral198 ( 0 ) ) } );
    struct RenderState_1824 *  rs3447 = ( &temp1825 );
    ( (  move_dash_cursor_dash_to1826 ) ( (  from_dash_integral198 ( 0 ) ) ,  (  from_dash_integral198 ( 0 ) ) ) );
    struct RangeIter_671  temp1841 =  into_dash_iter673 ( ( (  to676 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  op_dash_sub794 ( (  h3446 ) , (  from_dash_integral44 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_254  __cond1842 =  next674 (&temp1841);
        if (  __cond1842 .tag == 0 ) {
            break;
        }
        int32_t  y3449 =  __cond1842 .stuff .Maybe_254_Just_s .field0;
        int32_t  x_dash_v3450 = (  from_dash_integral44 ( 0 ) );
        while ( (  cmp299 ( (  x_dash_v3450 ) , (  w3445 ) ) == 0 ) ) {
            size_t  i3451 = ( (  i32_dash_size244 ) ( (  op_dash_add256 ( (  op_dash_mul1435 ( (  y3449 ) , (  w3445 ) ) ) , (  x_dash_v3450 ) ) ) ) );
            struct Cell_645 *  cur3452 = ( (  get_dash_ptr679 ) ( ( ( * (  screen3444 ) ) .f_current ) ,  (  i3451 ) ) );
            int32_t  char_dash_width3453 = ( (  max946 ) ( ( ( * (  cur3452 ) ) .f_char_dash_width ) ,  (  from_dash_integral44 ( 1 ) ) ) );
            struct Slice_644  curs3454 = ( (  subslice1843 ) ( ( ( * (  screen3444 ) ) .f_current ) ,  (  i3451 ) ,  (  op_dash_add214 ( (  i3451 ) , ( (  i32_dash_size244 ) ( (  char_dash_width3453 ) ) ) ) ) ) );
            struct Slice_644  prevs3455 = ( (  subslice1843 ) ( ( ( * (  screen3444 ) ) .f_previous ) ,  (  i3451 ) ,  (  op_dash_add214 ( (  i3451 ) , ( (  i32_dash_size244 ) ( (  char_dash_width3453 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3444 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any1844 ) ( ( (  zip1859 ) ( (  curs3454 ) ,  (  prevs3455 ) ) ) ,  (  lam1861 ) ) ) ) ) {
                (*  rs3447 ) .f_changes = (  op_dash_add766 ( ( ( * (  rs3447 ) ) .f_changes ) , (  from_dash_integral198 ( 1 ) ) ) );
                ( (  emit_dash_cell1874 ) ( (  rs3447 ) ,  (  cur3452 ) ,  ( (  i32_dash_u321941 ) ( (  x_dash_v3450 ) ) ) ,  ( (  i32_dash_u321941 ) ( (  y3449 ) ) ) ) );
                ( (  copy_dash_to1942 ) ( (  curs3454 ) ,  (  prevs3455 ) ) );
            }
            x_dash_v3450 = (  op_dash_add256 ( (  x_dash_v3450 ) , (  char_dash_width3453 ) ) );
        }
    }
    (*  screen3444 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors592 ) ( ) );
    ( (  flush_dash_stdout595 ) ( ) );
    return ( ( * (  rs3447 ) ) .f_changes );
}

static  void *   cast_dash_ptr1961 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1962 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed1959 (  ) {
    struct timespec *  temp1960;
    struct timespec *  x570 = (  temp1960 );
    ( ( memset ) ( ( (  cast_dash_ptr1961 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  ( (  size_dash_of1962 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct timespec *   null_dash_ptr1958 (  ) {
    return ( (  zeroed1959 ) ( ) );
}

static  enum Unit_7   sync1955 (    struct Tui_67 *  tui3315 ) {
    if ( (  eq389 ( ( ( * (  tui3315 ) ) .f_target_dash_fps ) , (  from_dash_integral198 ( 0 ) ) ) ) ) {
        return ( Unit_7_Unit );
    }
    int64_t  frame_dash_ns3316 = (  op_dash_div871 ( (  from_dash_integral285 ( 1000000000 ) ) , ( (  size_dash_i64243 ) ( ( (  u32_dash_size657 ) ( ( ( * (  tui3315 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1956 = ( (  undefined631 ) ( ) );
    struct timespec *  now3317 = ( &temp1956 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic633 ) ( ) ) ,  (  now3317 ) ) );
    int64_t  elapsed_dash_ns3318 = (  op_dash_add387 ( (  op_dash_mul212 ( (  op_dash_sub873 ( ( ( * (  now3317 ) ) .tv_sec ) , ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral285 ( 1000000000 ) ) ) ) , (  op_dash_sub873 ( ( ( * (  now3317 ) ) .tv_nsec ) , ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3319 = (  op_dash_sub873 ( (  frame_dash_ns3316 ) , (  elapsed_dash_ns3318 ) ) );
    if ( (  cmp891 ( (  sleep_dash_ns3319 ) , (  from_dash_integral285 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1957 = ( (struct timespec) { .tv_sec = (  from_dash_integral285 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3319 ) } );
        struct timespec *  ts3320 = ( &temp1957 );
        ( ( nanosleep ) ( (  ts3320 ) ,  ( (  null_dash_ptr1958 ) ( ) ) ) );
    }
    struct timespec  temp1963 = ( (  undefined631 ) ( ) );
    struct timespec *  last_dash_sync3321 = ( &temp1963 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic633 ) ( ) ) ,  (  last_dash_sync3321 ) ) );
    (*  tui3315 ) .f_last_dash_sync = ( * (  last_dash_sync3321 ) );
    (*  tui3315 ) .f_fps_dash_count = (  op_dash_add766 ( ( ( * (  tui3315 ) ) .f_fps_dash_count ) , (  from_dash_integral198 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3322 = (  op_dash_add387 ( (  op_dash_mul212 ( (  op_dash_sub873 ( ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3315 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral285 ( 1000 ) ) ) ) , (  op_dash_div871 ( (  op_dash_sub873 ( ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3315 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral285 ( 1000000 ) ) ) ) ) );
    if ( (  cmp891 ( (  fps_dash_elapsed_dash_ms3322 ) , (  from_dash_integral285 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3315 ) .f_actual_dash_fps = ( ( * (  tui3315 ) ) .f_fps_dash_count );
        (*  tui3315 ) .f_fps_dash_count = (  from_dash_integral198 ( 0 ) );
        (*  tui3315 ) .f_fps_dash_ts = ( ( * (  tui3315 ) ) .f_last_dash_sync );
    }
    return ( Unit_7_Unit );
}

static  void *   cast_dash_ptr1966 (    struct Cell_645 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free1965 (    enum CAllocator_9  dref1959 ,    struct Slice_644  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1966 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_screen1964 (    struct Screen_643 *  screen3420 ) {
    enum CAllocator_9  al3421 = ( ( * (  screen3420 ) ) .f_al );
    ( (  free1965 ) ( (  al3421 ) ,  ( ( * (  screen3420 ) ) .f_current ) ) );
    ( (  free1965 ) ( (  al3421 ) ,  ( ( * (  screen3420 ) ) .f_previous ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   disable_dash_mouse1968 (  ) {
    ( (  print_dash_str177 ) ( ( (  from_dash_string202 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   show_dash_cursor1969 (  ) {
    ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   reset_dash_cursor_dash_position1970 (  ) {
    ( (  print583 ) ( ( (  from_dash_string202 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   disable_dash_raw_dash_mode1971 (    struct Termios_69 *  og_dash_termios3295 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno521 ) ( ) ) ,  ( (  tcsa_dash_flush581 ) ( ) ) ,  ( (  cast_dash_ptr522 ) ( (  og_dash_termios3295 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   deinit1967 (    struct Tui_67 *  tui3325 ) {
    ( (  disable_dash_mouse1968 ) ( ) );
    ( (  show_dash_cursor1969 ) ( ) );
    ( (  reset_dash_colors592 ) ( ) );
    ( (  clear_dash_screen593 ) ( ) );
    ( (  reset_dash_cursor_dash_position1970 ) ( ) );
    ( (  disable_dash_raw_dash_mode1971 ) ( ( & ( ( * (  tui3325 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout595 ) ( ) );
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
    };
    struct env55 envinst55 = {
        .envinst48 = envinst48 ,
        .envinst51 = envinst51 ,
    };
    struct env58 envinst58 = {
        .envinst48 = envinst48 ,
        .envinst54 = envinst54 ,
    };
    bool  temp62 = ( false );
    bool *  should_dash_resize3305 = ( &temp62 );
    struct env63 envinst63 = {
        .should_dash_resize3305 =  should_dash_resize3305 ,
    };
    struct env64 envinst64 = {
        .should_dash_resize3305 =  should_dash_resize3305 ,
    };
    struct env65 envinst65 = {
        .envinst64 = envinst64 ,
    };
    struct env71 envinst71 = {
        .envinst64 = envinst64 ,
    };
    struct env73 envinst73 = {
        .envinst38 = envinst38 ,
    };
    struct env75 envinst75 = {
        .envinst41 = envinst41 ,
        .envinst29 = envinst29 ,
        .envinst36 = envinst36 ,
    };
    struct env79 envinst79 = {
        .envinst75 = envinst75 ,
        .envinst36 = envinst36 ,
        .envinst32 = envinst32 ,
        .envinst33 = envinst33 ,
        .envinst5 = envinst5 ,
    };
    struct env87 envinst87 = {
        .envinst79 = envinst79 ,
    };
    struct env89 envinst89 = {
        .envinst79 = envinst79 ,
    };
    struct env91 envinst91 = {
        .envinst87 = envinst87 ,
    };
    struct env93 envinst93 = {
        .envinst89 = envinst89 ,
    };
    struct env95 envinst95 = {
        .envinst36 = envinst36 ,
    };
    struct env97 envinst97 = {
        .envinst95 = envinst95 ,
        .envinst89 = envinst89 ,
        .envinst15 = envinst15 ,
        .envinst22 = envinst22 ,
    };
    struct env102 envinst102 = {
        .envinst97 = envinst97 ,
    };
    struct env105 envinst105 = {
        .envinst97 = envinst97 ,
    };
    struct env107 envinst107 = {
        .envinst91 = envinst91 ,
    };
    struct env109 envinst109 = {
        .envinst93 = envinst93 ,
    };
    struct env111 envinst111 = {
        .envinst97 = envinst97 ,
    };
    struct env113 envinst113 = {
        .envinst95 = envinst95 ,
    };
    struct env115 envinst115 = {
        .envinst55 = envinst55 ,
    };
    struct env117 envinst117 = {
        .envinst58 = envinst58 ,
    };
    struct env119 envinst119 = {
        .envinst115 = envinst115 ,
    };
    struct env127 envinst127 = {
        .envinst107 = envinst107 ,
        .envinst109 = envinst109 ,
        .envinst117 = envinst117 ,
        .envinst111 = envinst111 ,
        .envinst113 = envinst113 ,
    };
    struct env134 envinst134 = {
        .envinst102 = envinst102 ,
        .envinst48 = envinst48 ,
        .envinst119 = envinst119 ,
        .envinst105 = envinst105 ,
        .envinst127 = envinst127 ,
    };
    enum CAllocator_9  al4118 = ( (  idc141 ) ( ) );
    struct envunion144  temp143 = ( (struct envunion144){ .fun = (  struct TextBuf_81  (*) (  struct env73*  ,    enum CAllocator_9  ,    struct Pos_20  ) )mk145 , .env =  envinst73 } );
    struct TextBuf_81  temp142 = ( temp143.fun ( &temp143.env ,  (  al4118 ) ,  ( (  mk280 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  from_dash_integral44 ( 0 ) ) ) ) ) );
    struct TextBuf_81 *  tb4119 = ( &temp142 );
    struct Slice_281  args4122 = ( (  get282 ) ( ) );
    if ( (  cmp166 ( ( (  args4122 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        const char*  fname4123 = (  elem_dash_get287 ( (  args4122 ) , (  from_dash_integral0 ( 0 ) ) ) );
        struct envunion295  temp294 = ( (struct envunion295){ .fun = (  enum Unit_7  (*) (  struct env79*  ,    struct TextBuf_81 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action296 , .env =  envinst79 } );
        ( temp294.fun ( &temp294.env ,  (  tb4119 ) ,  ( (  mk280 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  from_dash_integral44 ( 0 ) ) ) ) ,  ( (  mk280 ) ( (  from_dash_integral44 ( 0 ) ) ,  (  from_dash_integral44 ( 0 ) ) ) ) ,  ( (  read_dash_contents486 ) ( (  fname4123 ) ,  (  al4118 ) ) ) ) );
    }
    struct Editor_121  temp511 = ( (struct Editor_121) { .f_running = ( true ) , .f_al = (  al4118 ) , .f_pane = ( (  mk512 ) ( (  al4118 ) ,  (  tb4119 ) ) ) , .f_clipboard = ( (struct Maybe_125) { .tag = Maybe_125_None_t } ) , .f_mode = ( (struct EditorMode_126) { .tag = EditorMode_126_Normal_t } ) , .f_msg = ( (struct Maybe_125) { .tag = Maybe_125_None_t } ) } );
    struct Editor_121 *  ed4124 = ( &temp511 );
    struct envunion515  temp514 = ( (struct envunion515){ .fun = (  struct Tui_67  (*) (  struct env63*  ) )mk516 , .env =  envinst63 } );
    struct Tui_67  temp513 = ( temp514.fun ( &temp514.env ) );
    struct Tui_67 *  tui4125 = ( &temp513 );
    struct Screen_643  temp650 = ( (  mk_dash_screen651 ) ( (  tui4125 ) ,  (  al4118 ) ) );
    struct Screen_643 *  screen4126 = ( &temp650 );
    uint32_t  last_dash_redraw_dash_changes4127 = (  from_dash_integral198 ( 0 ) );
    while ( ( ( * (  ed4124 ) ) .f_running ) ) {
        struct env701 envinst701 = {
            .tui4125 =  tui4125 ,
            .envinst65 = envinst65 ,
        };
        struct FunIter_700  temp699 =  into_dash_iter708 ( ( (  from_dash_function709 ) ( ( (struct envunion707){ .fun = (  struct Maybe_703  (*) (  struct env701*  ) )lam710 , .env =  envinst701 } ) ) ) );
        while (true) {
            struct Maybe_703  __cond911 =  next912 (&temp699);
            if (  __cond911 .tag == 0 ) {
                break;
            }
            struct InputEvent_704  ev4129 =  __cond911 .stuff .Maybe_703_Just_s .field0;
            struct InputEvent_704  dref4130 = (  ev4129 );
            if ( dref4130.tag == InputEvent_704_Key_t ) {
                ( (  reset_dash_msg914 ) ( (  ed4124 ) ) );
                struct envunion922  temp921 = ( (struct envunion922){ .fun = (  enum Unit_7  (*) (  struct env134*  ,    struct Editor_121 *  ,    struct Key_140  ) )handle_dash_key923 , .env =  envinst134 } );
                ( temp921.fun ( &temp921.env ,  (  ed4124 ) ,  ( dref4130 .stuff .InputEvent_704_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1399  temp1398 = ( (struct envunion1399){ .fun = (  bool  (*) (  struct env71*  ,    struct Screen_643 *  ) )resize_dash_screen_dash_if_dash_needed1400 , .env =  envinst71 } );
        ( temp1398.fun ( &temp1398.env ,  (  screen4126 ) ) );
        if ( ( (  should_dash_redraw1402 ) ( (  tui4125 ) ) ) ) {
            (*  screen4126 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1403 ) ( (  screen4126 ) ) );
            ( (  set_dash_screen_dash_fg1412 ) ( (  screen4126 ) ,  ( (struct Color_646) { .tag = Color_646_ColorDefault_t } ) ) );
            ( (  set_dash_screen_dash_bg1413 ) ( (  screen4126 ) ,  ( (struct Color_646) { .tag = Color_646_ColorDefault_t } ) ) );
            ( (  render_dash_editor1414 ) ( (  screen4126 ) ,  (  ed4124 ) ) );
            ( (  draw_dash_str1794 ) ( (  screen4126 ) ,  ( ( StrConcat_1795_StrConcat ) ( ( ( StrConcat_1796_StrConcat ) ( ( (  from_dash_string202 ) ( ( "REDRAWS[" ) ,  ( 8 ) ) ) ,  (  last_dash_redraw_dash_changes4127 ) ) ) ,  ( (  from_dash_charlike203 ) ( ( "]" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral44 ( 0 ) ) ,  (  op_dash_sub794 ( ( (  u32_dash_i321416 ) ( ( ( * ( ( * (  screen4126 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral44 ( 1 ) ) ) ) ) );
            last_dash_redraw_dash_changes4127 = ( (  render_dash_screen1823 ) ( (  screen4126 ) ) );
        }
        ( (  sync1955 ) ( (  tui4125 ) ) );
    }
    ( (  free_dash_screen1964 ) ( (  screen4126 ) ) );
    ( (  deinit1967 ) ( (  tui4125 ) ) );
}
