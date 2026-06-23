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
    enum Unit_7  (*fun) (  struct env32*  ,    struct List_11 *  ,    size_t  ,    size_t  );
    struct env32 env;
};

struct env34 {
    ;
    ;
    ;
    struct env32 envinst32;
    ;
};

struct envunion37 {
    enum Unit_7  (*fun) (  struct env34*  ,    struct List_11 *  ,    size_t  );
    struct env34 env;
};

struct env36 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env34 envinst34;
};

struct envunion39 {
    enum Unit_7  (*fun) (  struct env5*  ,    struct List_8 *  ,    struct List_11  );
    struct env5 env;
};

struct env38 {
    ;
    ;
    ;
    ;
    ;
    struct env5 envinst5;
};

struct envunion41 {
    enum Unit_7  (*fun) (  struct env13*  ,    struct List_11 *  ,    uint8_t  );
    struct env13 env;
};

struct env40 {
    ;
    ;
    ;
    ;
    struct env13 envinst13;
    ;
};

struct Array_44 {
    struct List_11 _arr [1];
};

struct envunion43 {
    enum Unit_7  (*fun) (  struct env38*  ,    struct List_8 *  ,    struct Array_44  );
    struct env38 env;
};

struct env42 {
    struct env38 envinst38;
    ;
    ;
    ;
    ;
    ;
};

struct envunion46 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

struct env45 {
    struct env40 envinst40;
    ;
    ;
    ;
    ;
    ;
};

static  int32_t   from_dash_integral48 (    int64_t  x49 ) {
    return ( (int32_t ) (  x49 ) );
}

static  int32_t   lc_dash_ctype47 (  ) {
    return (  from_dash_integral48 ( 0 ) );
}

static  const char*   from_dash_string49 (    uint8_t *  ptr82 ,    size_t  dref83 ) {
    return ( ( (const char* ) (  ptr82 ) ) );
}

struct envunion51 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

struct env50 {
    struct env40 envinst40;
    ;
    ;
};

struct StrBuilder_54 {
    struct List_11  f_chars;
};

struct envunion53 {
    enum Unit_7  (*fun) (  struct env50*  ,    struct StrBuilder_54 *  ,    struct Slice_12  );
    struct env50 env;
};

struct env52 {
    ;
    ;
    ;
    struct env50 envinst50;
};

struct Char_57 {
    uint8_t *  f_ptr;
    size_t  f_num_dash_bytes;
};

struct envunion56 {
    enum Unit_7  (*fun) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  );
    struct env52 env;
};

struct env55 {
    ;
    ;
    struct env52 envinst52;
    ;
    ;
    ;
    ;
};

struct env58 {
    ;
    ;
    struct env52 envinst52;
    ;
    ;
    ;
    ;
};

struct envunion60 {
    enum Unit_7  (*fun) (  struct env36*  ,    struct List_11 *  );
    struct env36 env;
};

struct env59 {
    ;
    ;
    struct env36 envinst36;
};

struct envunion62 {
    enum Unit_7  (*fun) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  );
    struct env52 env;
};

struct StrConcat_65 {
    struct StrView_21  field0;
    size_t  field1;
};

static struct StrConcat_65 StrConcat_65_StrConcat (  struct StrView_21  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_65 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_64 {
    struct StrConcat_65  field0;
    struct StrView_21  field1;
};

static struct StrConcat_64 StrConcat_64_StrConcat (  struct StrConcat_65  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_64 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion63 {
    enum Unit_7  (*fun) (  struct env55*  ,    struct StrBuilder_54 *  ,    struct StrConcat_64  );
    struct env55 env;
};

struct env61 {
    ;
    ;
    struct env52 envinst52;
    ;
    ;
    ;
    ;
    struct env55 envinst55;
    ;
    ;
    ;
    ;
};

struct envunion67 {
    enum Unit_7  (*fun) (  struct env58*  ,    struct StrBuilder_54 *  ,    struct StrView_21  );
    struct env58 env;
};

struct env66 {
    ;
    ;
    struct env52 envinst52;
    ;
    ;
    ;
    ;
    ;
    struct env58 envinst58;
    ;
    ;
    ;
};

struct env69 {
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

struct env70 {
    ;
    bool *  should_dash_resize3305;
    ;
    ;
};

enum ColorPalette_74 {
    ColorPalette_74_Palette8,
    ColorPalette_74_Palette16,
    ColorPalette_74_Palette256,
    ColorPalette_74_PaletteRGB,
};

struct Array_76 {
    uint8_t _arr [32];
};

struct Termios_75 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_76  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

struct Tui_73 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_74  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_75  f_orig_dash_termios;
    bool  f_should_dash_redraw;
};

struct envunion72 {
    bool  (*fun) (  struct env70*  ,    struct Tui_73 *  );
    struct env70 env;
};

struct env71 {
    struct env70 envinst70;
    ;
};

struct envunion78 {
    bool  (*fun) (  struct env70*  ,    struct Tui_73 *  );
    struct env70 env;
};

struct env77 {
    ;
    ;
    ;
    ;
    ;
    struct env70 envinst70;
};

struct envunion80 {
    struct List_8  (*fun) (  struct env42*  ,    struct Array_44  ,    enum CAllocator_9  );
    struct env42 env;
};

struct env79 {
    ;
    ;
    ;
    struct env42 envinst42;
    ;
    ;
};

struct envunion82 {
    struct List_11  (*fun) (  struct env45*  ,    struct Slice_12  ,    enum CAllocator_9  );
    struct env45 env;
};

struct envunion83 {
    enum Unit_7  (*fun) (  struct env29*  ,    struct List_8 *  ,    size_t  ,    struct List_11  );
    struct env29 env;
};

struct envunion84 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

struct env81 {
    ;
    ;
    ;
    ;
    ;
    struct env45 envinst45;
    struct env29 envinst29;
    ;
    struct env40 envinst40;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct Actions_88 {
    struct List_24  f_list;
    size_t  f_cur;
    bool  f_input_dash_changeset;
};

struct TextBuf_87 {
    enum CAllocator_9  f_al;
    struct List_8  f_buf;
    struct Actions_88  f_actions;
};

struct envunion86 {
    int32_t  (*fun) (  struct env81*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct StrView_21  );
    struct env81 env;
};

struct envunion89 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

struct envunion90 {
    enum Unit_7  (*fun) (  struct env32*  ,    struct List_11 *  ,    size_t  ,    size_t  );
    struct env32 env;
};

struct envunion91 {
    enum Unit_7  (*fun) (  struct env33*  ,    struct List_8 *  ,    size_t  ,    size_t  );
    struct env33 env;
};

struct envunion92 {
    enum Unit_7  (*fun) (  struct env5*  ,    struct List_8 *  ,    struct List_11  );
    struct env5 env;
};

struct env85 {
    struct env81 envinst81;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env40 envinst40;
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

struct envunion94 {
    enum Unit_7  (*fun) (  struct env85*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  );
    struct env85 env;
};

struct env93 {
    ;
    ;
    ;
    ;
    struct env85 envinst85;
};

struct envunion96 {
    enum Unit_7  (*fun) (  struct env85*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  );
    struct env85 env;
};

struct env95 {
    ;
    ;
    ;
    ;
    struct env85 envinst85;
};

struct envunion98 {
    struct Pos_20  (*fun) (  struct env93*  ,    struct TextBuf_87 *  ,    struct Action_19  );
    struct env93 env;
};

struct env97 {
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
};

struct envunion100 {
    struct Pos_20  (*fun) (  struct env95*  ,    struct TextBuf_87 *  ,    struct Action_19  );
    struct env95 env;
};

struct env99 {
    ;
    ;
    ;
    ;
    ;
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
};

struct envunion102 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
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
    ;
    ;
    ;
    struct env40 envinst40;
    ;
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

struct envunion104 {
    struct StrView_21  (*fun) (  struct env101*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct Pos_20  );
    struct env101 env;
};

struct envunion105 {
    struct Pos_20  (*fun) (  struct env95*  ,    struct TextBuf_87 *  ,    struct Action_19  );
    struct env95 env;
};

struct envunion106 {
    enum Unit_7  (*fun) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  );
    struct env15 env;
};

struct envunion107 {
    enum Unit_7  (*fun) (  struct env22*  ,    struct List_24 *  ,    struct Changeset_26  );
    struct env22 env;
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env101 envinst101;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env95 envinst95;
    struct env15 envinst15;
    struct env22 envinst22;
};

struct Maybe_110 {
    enum {
        Maybe_110_None_t,
        Maybe_110_Just_t,
    } tag;
    union {
        struct {
            struct Cursors_27  field0;
        } Maybe_110_Just_s;
    } stuff;
};

static struct Maybe_110 Maybe_110_Just (  struct Cursors_27  field0 ) {
    return ( struct Maybe_110 ) { .tag = Maybe_110_Just_t, .stuff = { .Maybe_110_Just_s = { .field0 = field0 } } };
};

struct envunion109 {
    struct Maybe_110  (*fun) (  struct env103*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_110  );
    struct env103 env;
};

struct env108 {
    ;
    ;
    ;
    ;
    struct env103 envinst103;
    ;
    ;
    ;
    ;
};

struct envunion112 {
    struct Maybe_110  (*fun) (  struct env103*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_110  );
    struct env103 env;
};

struct env111 {
    ;
    ;
    ;
    ;
    struct env103 envinst103;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion114 {
    struct Maybe_110  (*fun) (  struct env97*  ,    struct TextBuf_87 *  );
    struct env97 env;
};

struct env113 {
    ;
    ;
    ;
    ;
    ;
    struct env97 envinst97;
    ;
};

struct envunion116 {
    struct Maybe_110  (*fun) (  struct env99*  ,    struct TextBuf_87 *  );
    struct env99 env;
};

struct env115 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env99 envinst99;
};

struct envunion118 {
    struct Maybe_110  (*fun) (  struct env103*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_110  );
    struct env103 env;
};

struct env117 {
    ;
    ;
    ;
    ;
    struct env103 envinst103;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion120 {
    struct StrView_21  (*fun) (  struct env101*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct Pos_20  );
    struct env101 env;
};

struct env119 {
    ;
    ;
    ;
    ;
    ;
    struct env101 envinst101;
    ;
    ;
    ;
};

struct envunion122 {
    struct StrView_21  (*fun) (  struct env61*  ,    struct StrConcat_64  ,    enum CAllocator_9  );
    struct env61 env;
};

struct env121 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env61 envinst61;
};

struct envunion124 {
    struct StrView_21  (*fun) (  struct env66*  ,    struct StrView_21  ,    enum CAllocator_9  );
    struct env66 env;
};

struct env123 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env66 envinst66;
};

enum Mode_129 {
    Mode_129_Normal,
    Mode_129_Insert,
    Mode_129_Select,
};

struct ScreenCursorOffset_130 {
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
};

struct Pane_128 {
    struct TextBuf_87 *  f_buf;
    struct Pos_20  f_cursor;
    int32_t  f_vi;
    struct Maybe_28  f_sel;
    enum Mode_129  f_mode;
    struct ScreenCursorOffset_130  f_sc_dash_off;
};

struct Maybe_131 {
    enum {
        Maybe_131_None_t,
        Maybe_131_Just_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } Maybe_131_Just_s;
    } stuff;
};

static struct Maybe_131 Maybe_131_Just (  struct StrView_21  field0 ) {
    return ( struct Maybe_131 ) { .tag = Maybe_131_Just_t, .stuff = { .Maybe_131_Just_s = { .field0 = field0 } } };
};

struct EditorMode_132 {
    enum {
        EditorMode_132_Normal_t,
        EditorMode_132_Cmd_t,
        EditorMode_132_Search_t,
    } tag;
    union {
        struct {
            struct Pos_20  field0;
            struct StrBuilder_54  field1;
        } EditorMode_132_Cmd_s;
        struct {
            struct Pos_20  field0;
            struct StrBuilder_54  field1;
        } EditorMode_132_Search_s;
    } stuff;
};

static struct EditorMode_132 EditorMode_132_Cmd (  struct Pos_20  field0 ,  struct StrBuilder_54  field1 ) {
    return ( struct EditorMode_132 ) { .tag = EditorMode_132_Cmd_t, .stuff = { .EditorMode_132_Cmd_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct EditorMode_132 EditorMode_132_Search (  struct Pos_20  field0 ,  struct StrBuilder_54  field1 ) {
    return ( struct EditorMode_132 ) { .tag = EditorMode_132_Search_t, .stuff = { .EditorMode_132_Search_s = { .field0 = field0 ,  .field1 = field1 } } };
};

struct Editor_127 {
    enum CAllocator_9  f_al;
    bool  f_running;
    struct Pane_128  f_pane;
    struct Maybe_131  f_clipboard;
    struct Maybe_131  f_search_dash_term;
    struct EditorMode_132  f_mode;
    struct Maybe_131  f_msg;
};

struct envunion126 {
    enum Unit_7  (*fun) (  struct env123*  ,    struct Editor_127 *  ,    struct StrView_21  );
    struct env123 env;
};

struct env125 {
    ;
    struct env123 envinst123;
    ;
    ;
    ;
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

struct envunion134 {
    enum Unit_7  (*fun) (  struct env113*  ,    struct Pane_128 *  );
    struct env113 env;
};

struct envunion135 {
    enum Unit_7  (*fun) (  struct env115*  ,    struct Pane_128 *  );
    struct env115 env;
};

struct envunion136 {
    enum Unit_7  (*fun) (  struct env121*  ,    struct Editor_127 *  ,    struct StrConcat_64  );
    struct env121 env;
};

struct Tuple2_138 {
    struct Pos_20  field0;
    struct Pos_20  field1;
};

static struct Tuple2_138 Tuple2_138_Tuple2 (  struct Pos_20  field0 ,  struct Pos_20  field1 ) {
    return ( struct Tuple2_138 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion137 {
    enum Unit_7  (*fun) (  struct env117*  ,    struct Pane_128 *  ,    struct Tuple2_138  ,    struct StrView_21  );
    struct env117 env;
};

struct envunion139 {
    enum Unit_7  (*fun) (  struct env119*  ,    struct Editor_127 *  );
    struct env119 env;
};

struct env133 {
    ;
    ;
    struct env113 envinst113;
    ;
    ;
    ;
    ;
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env121 envinst121;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env117 envinst117;
    ;
    ;
    struct env119 envinst119;
    ;
};

struct envunion141 {
    enum Unit_7  (*fun) (  struct env125*  ,    struct Editor_127 *  ,    struct StrView_21  );
    struct env125 env;
};

struct envunion142 {
    enum Unit_7  (*fun) (  struct env59*  ,    struct StrBuilder_54 *  );
    struct env59 env;
};

struct Key_144 {
    enum {
        Key_144_Escape_t,
        Key_144_Enter_t,
        Key_144_Tab_t,
        Key_144_Backspace_t,
        Key_144_Char_t,
        Key_144_Ctrl_t,
        Key_144_Up_t,
        Key_144_Down_t,
        Key_144_Left_t,
        Key_144_Right_t,
        Key_144_Home_t,
        Key_144_End_t,
        Key_144_PageUp_t,
        Key_144_PageDown_t,
        Key_144_Delete_t,
        Key_144_Insert_t,
        Key_144_F1_t,
        Key_144_F2_t,
        Key_144_F3_t,
        Key_144_F4_t,
        Key_144_F5_t,
        Key_144_F6_t,
        Key_144_F7_t,
        Key_144_F8_t,
        Key_144_F9_t,
        Key_144_F10_t,
        Key_144_F11_t,
        Key_144_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_144_Char_s;
        struct {
            char  field0;
        } Key_144_Ctrl_s;
    } stuff;
};

static struct Key_144 Key_144_Char (  char  field0 ) {
    return ( struct Key_144 ) { .tag = Key_144_Char_t, .stuff = { .Key_144_Char_s = { .field0 = field0 } } };
};

static struct Key_144 Key_144_Ctrl (  char  field0 ) {
    return ( struct Key_144 ) { .tag = Key_144_Ctrl_t, .stuff = { .Key_144_Ctrl_s = { .field0 = field0 } } };
};

struct envunion143 {
    enum Unit_7  (*fun) (  struct env133*  ,    struct Editor_127 *  ,    struct Key_144  );
    struct env133 env;
};

struct envunion145 {
    enum Unit_7  (*fun) (  struct env108*  ,    struct Pane_128 *  ,    struct StrView_21  );
    struct env108 env;
};

struct envunion146 {
    enum Unit_7  (*fun) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  );
    struct env52 env;
};

struct envunion147 {
    enum Unit_7  (*fun) (  struct env111*  ,    struct Pane_128 *  );
    struct env111 env;
};

struct env140 {
    ;
    ;
    struct env125 envinst125;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env59 envinst59;
    ;
    ;
    struct env133 envinst133;
    struct env108 envinst108;
    struct env52 envinst52;
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

static  enum CAllocator_9   idc148 (  ) {
    return ( CAllocator_9_CAllocator );
}

struct envunion151 {
    struct TextBuf_87  (*fun) (  struct env79*  ,    enum CAllocator_9  ,    struct Pos_20  );
    struct env79 env;
};

static  void *   cast_dash_ptr161 (    struct List_11 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of162 (    struct List_11 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct List_11 *   zeroed159 (  ) {
    struct List_11 *  temp160;
    struct List_11 *  x570 = (  temp160 );
    ( ( memset ) ( ( (  cast_dash_ptr161 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of162 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct List_11 *   null_dash_ptr158 (  ) {
    return ( (  zeroed159 ) ( ) );
}

static  struct Slice_10   empty157 (  ) {
    return ( (struct Slice_10) { .f_ptr = ( (  null_dash_ptr158 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_8   mk156 (    enum CAllocator_9  al2031 ) {
    struct Slice_10  elements2032 = ( (  empty157 ) ( ) );
    return ( (struct List_8) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env166 {
    struct List_8 *  list2098;
    struct env5 envinst5;
};

struct envunion167 {
    enum Unit_7  (*fun) (  struct env166*  ,    struct List_11  );
    struct env166 env;
};

struct ArrayIter_168 {
    struct Array_44  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_168   into_dash_iter170 (    struct Array_44  self2322 ) {
    return ( (struct ArrayIter_168) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_171 {
    enum {
        Maybe_171_None_t,
        Maybe_171_Just_t,
    } tag;
    union {
        struct {
            struct List_11  field0;
        } Maybe_171_Just_s;
    } stuff;
};

static struct Maybe_171 Maybe_171_Just (  struct List_11  field0 ) {
    return ( struct Maybe_171 ) { .tag = Maybe_171_Just_t, .stuff = { .Maybe_171_Just_s = { .field0 = field0 } } };
};

enum Ordering_174 {
    Ordering_174_LT,
    Ordering_174_EQ,
    Ordering_174_GT,
};

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_174   cmp173 (    size_t  l179 ,    size_t  r181 ) {
    return ( builtin_size_tcmp( (  l179 ) , (  r181 ) ) );
}

struct StrConcat_179 {
    struct StrConcat_64  field0;
    int32_t  field1;
};

static struct StrConcat_179 StrConcat_179_StrConcat (  struct StrConcat_64  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_179 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_178 {
    struct StrConcat_179  field0;
    struct Char_57  field1;
};

static struct StrConcat_178 StrConcat_178_StrConcat (  struct StrConcat_179  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_178 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_182 {
    struct StrView_21  field0;
    struct StrConcat_178  field1;
};

static struct StrConcat_182 StrConcat_182_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_178  field1 ) {
    return ( struct StrConcat_182 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_181 {
    struct StrConcat_182  field0;
    struct Char_57  field1;
};

static struct StrConcat_181 StrConcat_181_StrConcat (  struct StrConcat_182  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_181 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32185 (    size_t  x630 ) {
    return ( (int32_t ) (  x630 ) );
}

static  enum Unit_7   print_dash_str184 (    struct StrView_21  self1379 ) {
    ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32185 ) ( ( ( (  self1379 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1379 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str190 (    size_t  self1464 ) {
    ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1464 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str189 (    struct StrConcat_65  self1503 ) {
    struct StrConcat_65  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str184 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str190 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str188 (    struct StrConcat_64  self1503 ) {
    struct StrConcat_64  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str189 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str184 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str191 (    int32_t  self1440 ) {
    ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1440 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str187 (    struct StrConcat_179  self1503 ) {
    struct StrConcat_179  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str188 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str191 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

struct Scalar_195 {
    uint32_t  f_value;
};

struct CharDestructured_194 {
    enum {
        CharDestructured_194_Ref_t,
        CharDestructured_194_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_57  field0;
        } CharDestructured_194_Ref_s;
        struct {
            struct Scalar_195  field0;
        } CharDestructured_194_Scalar_s;
    } stuff;
};

static struct CharDestructured_194 CharDestructured_194_Ref (  struct Char_57  field0 ) {
    return ( struct CharDestructured_194 ) { .tag = CharDestructured_194_Ref_t, .stuff = { .CharDestructured_194_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_194 CharDestructured_194_Scalar (  struct Scalar_195  field0 ) {
    return ( struct CharDestructured_194 ) { .tag = CharDestructured_194_Scalar_t, .stuff = { .CharDestructured_194_Scalar_s = { .field0 = field0 } } };
};

static  bool   eq197 (    uint8_t  l116 ,    uint8_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint8_t   size_dash_u8199 (    size_t  x639 ) {
    return ( (uint8_t ) (  x639 ) );
}

static  size_t   op_dash_div200 (    size_t  l285 ,    size_t  r287 ) {
    return ( (  l285 ) / (  r287 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer198 (    uint8_t *  ptr678 ) {
    return ( (  size_dash_u8199 ) ( (  op_dash_div200 ( ( ( (size_t ) (  ptr678 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint8_t   from_dash_integral201 (    int64_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  uint32_t   size_dash_u32202 (    size_t  x633 ) {
    return ( (uint32_t ) (  x633 ) );
}

static  size_t   cast203 (    uint8_t *  x356 ) {
    return ( (size_t ) (  x356 ) );
}

static  struct CharDestructured_194   destructure196 (    struct Char_57  c712 ) {
    if ( (  eq197 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer198 ) ( ( (  c712 ) .f_ptr ) ) ) , (  from_dash_integral201 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_194_Scalar ) ( ( (struct Scalar_195) { .f_value = ( (  size_dash_u32202 ) ( ( ( (  cast203 ) ( ( (  c712 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_194_Ref ) ( (  c712 ) ) );
    }
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_174   cmp204 (    uint32_t  l164 ,    uint32_t  r166 ) {
    return ( builtin_uint32_tcmp( (  l164 ) , (  r166 ) ) );
}

static  uint32_t   from_dash_integral205 (    int64_t  x52 ) {
    return ( (uint32_t ) (  x52 ) );
}

static  uint8_t   cast208 (    uint32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  uint8_t   u32_dash_u8207 (    uint32_t  x657 ) {
    return ( (  cast208 ) ( (  x657 ) ) );
}

static  enum Unit_7   printf_dash_char193 (    struct Char_57  c758 ) {
    struct CharDestructured_194  dref759 = ( (  destructure196 ) ( (  c758 ) ) );
    if ( dref759.tag == CharDestructured_194_Ref_t ) {
        ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32185 ) ( ( ( dref759 .stuff .CharDestructured_194_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref759 .stuff .CharDestructured_194_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref759.tag == CharDestructured_194_Scalar_t ) {
            if ( (  cmp204 ( ( ( dref759 .stuff .CharDestructured_194_Scalar_s .field0 ) .f_value ) , (  from_dash_integral205 ( 127 ) ) ) == 2 ) ) {
                const char*  temp206 = ( (  from_dash_string49 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp206);
                exit ( 1 );
                ( Unit_7_Unit );
            }
            ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8207 ) ( ( ( dref759 .stuff .CharDestructured_194_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str192 (    struct Char_57  self1404 ) {
    ( (  printf_dash_char193 ) ( (  self1404 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str186 (    struct StrConcat_178  self1503 ) {
    struct StrConcat_178  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str187 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str192 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str183 (    struct StrConcat_182  self1503 ) {
    struct StrConcat_182  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str184 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str186 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str180 (    struct StrConcat_181  self1503 ) {
    struct StrConcat_181  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str183 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str192 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  struct StrView_21   from_dash_string209 (    uint8_t *  ptr86 ,    size_t  count88 ) {
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = (  ptr86 ) , .f_count = (  count88 ) } ) } );
}

static  uint8_t *   cast211 (    uint8_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_174   cmp214 (    uint8_t  l169 ,    uint8_t  r171 ) {
    return ( builtin_uint8_tcmp( (  l169 ) , (  r171 ) ) );
}

static  size_t   next_dash_char213 (    uint8_t *  p688 ) {
    uint8_t  pb689 = ( * (  p688 ) );
    if ( (  cmp214 ( (  pb689 ) , (  from_dash_integral201 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp214 ( (  pb689 ) , (  from_dash_integral201 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp214 ( (  pb689 ) , (  from_dash_integral201 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp214 ( (  pb689 ) , (  from_dash_integral201 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp215 = ( (  from_dash_string49 ) ( ( "(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp215);
                    exit ( 1 );
                    ( Unit_7_Unit );
                }
            }
        }
    }
}

static  struct Char_57   scan_dash_from_dash_mem212 (    uint8_t *  p700 ) {
    size_t  clen701 = ( (  next_dash_char213 ) ( (  p700 ) ) );
    if ( (  cmp173 ( (  clen701 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp216 = ( (  from_dash_string49 ) ( ( "UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp216);
        exit ( 1 );
        ( Unit_7_Unit );
    }
    return ( (struct Char_57) { .f_ptr = (  p700 ) , .f_num_dash_bytes = (  clen701 ) } );
}

static  struct Char_57   from_dash_charlike210 (    uint8_t *  ptr704 ,    size_t  num_dash_bytes706 ) {
    uint8_t *  ptr707 = ( ( (  cast211 ) ( (  ptr704 ) ) ) );
    return ( (  scan_dash_from_dash_mem212 ) ( (  ptr707 ) ) );
}

static  enum Unit_7   panic177 (    struct StrConcat_178  errmsg1712 ) {
    ( (  print_dash_str180 ) ( ( ( StrConcat_181_StrConcat ) ( ( ( StrConcat_182_StrConcat ) ( ( (  from_dash_string209 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct List_11 *   cast_dash_ptr217 (    struct Array_44 *  p359 ) {
    return ( (struct List_11 * ) (  p359 ) );
}

static  int64_t   op_dash_mul219 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) * (  r196 ) );
}

static  struct List_11 *   offset_dash_ptr218 (    struct List_11 *  x338 ,    int64_t  count340 ) {
    struct List_11  temp220;
    return ( (struct List_11 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul219 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp220 ) ) ) ) ) ) ) ) );
}

static  struct List_11 *   get_dash_ptr176 (    struct Array_44 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp173 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i2253 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic177 ) ( ( ( StrConcat_178_StrConcat ) ( ( ( StrConcat_179_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string209 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct List_11 *  p2254 = ( ( (  cast_dash_ptr217 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr218 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  struct List_11   get175 (    struct Array_44 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr176 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  size_t   op_dash_add221 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) + (  r272 ) );
}

static  struct Maybe_171   next172 (    struct ArrayIter_168 *  self2329 ) {
    if ( (  cmp173 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
    }
    struct List_11  e2331 = ( (  get175 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add221 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_171_Just ) ( (  e2331 ) ) );
}

static  enum Unit_7   for_dash_each165 (    struct Array_44  iterable1074 ,   struct envunion167  fun1076 ) {
    struct ArrayIter_168  temp169 = ( (  into_dash_iter170 ) ( (  iterable1074 ) ) );
    struct ArrayIter_168 *  it1077 = ( &temp169 );
    while ( ( true ) ) {
        struct Maybe_171  dref1078 = ( (  next172 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_171_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_171_Just_t ) {
                struct envunion167  temp222 = (  fun1076 );
                ( temp222.fun ( &temp222.env ,  ( dref1078 .stuff .Maybe_171_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  bool   eq228 (    size_t  l126 ,    size_t  r128 ) {
    return ( (  l126 ) == (  r128 ) );
}

struct TypeSize_231 {
    size_t  f_size;
};

static  struct TypeSize_231   get_dash_typesize230 (  ) {
    struct List_11  temp232;
    return ( (struct TypeSize_231) { .f_size = ( sizeof( ( (  temp232 ) ) ) ) } );
}

static  struct List_11 *   cast_dash_ptr233 (    void *  p359 ) {
    return ( (struct List_11 * ) (  p359 ) );
}

static  size_t   op_dash_mul234 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) * (  r282 ) );
}

static  struct Slice_10   allocate229 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize230 ) ( ) ) ) .f_size );
    struct List_11 *  ptr1957 = ( (  cast_dash_ptr233 ) ( ( ( malloc ) ( (  op_dash_mul234 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_10) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env235 {
    struct Slice_10  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_237 {
    struct List_11  field0;
    int32_t  field1;
};

static struct Tuple2_237 Tuple2_237_Tuple2 (  struct List_11  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_237 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion236 {
    enum Unit_7  (*fun) (  struct env235*  ,    struct Tuple2_237  );
    struct env235 env;
};

struct StrConcat_243 {
    struct StrConcat_64  field0;
    size_t  field1;
};

static struct StrConcat_243 StrConcat_243_StrConcat (  struct StrConcat_64  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_243 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_242 {
    struct StrConcat_243  field0;
    struct Char_57  field1;
};

static struct StrConcat_242 StrConcat_242_StrConcat (  struct StrConcat_243  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_242 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_246 {
    struct StrView_21  field0;
    struct StrConcat_242  field1;
};

static struct StrConcat_246 StrConcat_246_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_242  field1 ) {
    return ( struct StrConcat_246 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_245 {
    struct StrConcat_246  field0;
    struct Char_57  field1;
};

static struct StrConcat_245 StrConcat_245_StrConcat (  struct StrConcat_246  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_245 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str249 (    struct StrConcat_243  self1503 ) {
    struct StrConcat_243  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str188 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str190 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str248 (    struct StrConcat_242  self1503 ) {
    struct StrConcat_242  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str249 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str192 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str247 (    struct StrConcat_246  self1503 ) {
    struct StrConcat_246  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str184 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str248 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str244 (    struct StrConcat_245  self1503 ) {
    struct StrConcat_245  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str247 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str192 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic241 (    struct StrConcat_242  errmsg1712 ) {
    ( (  print_dash_str244 ) ( ( ( StrConcat_245_StrConcat ) ( ( ( StrConcat_246_StrConcat ) ( ( (  from_dash_string209 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  int64_t   size_dash_i64250 (    size_t  x594 ) {
    return ( (int64_t ) (  x594 ) );
}

static  struct List_11 *   get_dash_ptr240 (    struct Slice_10  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp173 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic241 ) ( ( ( StrConcat_242_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string209 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct List_11 *  elem_dash_ptr1760 = ( (  offset_dash_ptr218 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set239 (    struct Slice_10  slice1774 ,    size_t  i1776 ,    struct List_11  x1778 ) {
    struct List_11 *  ep1779 = ( (  get_dash_ptr240 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  size_t   i32_dash_size251 (    int32_t  x609 ) {
    return ( (size_t ) ( (int64_t ) (  x609 ) ) );
}

static  enum Unit_7   lam238 (   struct env235* env ,    struct Tuple2_237  dref2043 ) {
    return ( (  set239 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size251 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct SliceIter_254 {
    struct Slice_10  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_255 {
    int32_t  f_from;
};

struct Zip_253 {
    struct SliceIter_254  f_left_dash_it;
    struct FromIter_255  f_right_dash_it;
};

static  struct Zip_253   into_dash_iter257 (    struct Zip_253  self911 ) {
    return (  self911 );
}

struct Maybe_258 {
    enum {
        Maybe_258_None_t,
        Maybe_258_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_237  field0;
        } Maybe_258_Just_s;
    } stuff;
};

static struct Maybe_258 Maybe_258_Just (  struct Tuple2_237  field0 ) {
    return ( struct Maybe_258 ) { .tag = Maybe_258_Just_t, .stuff = { .Maybe_258_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_171   next260 (    struct SliceIter_254 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp173 ( (  op_dash_add221 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
    }
    struct List_11  elem1830 = ( * ( (  offset_dash_ptr218 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add221 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_171_Just ) ( (  elem1830 ) ) );
}

struct Maybe_261 {
    enum {
        Maybe_261_None_t,
        Maybe_261_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_261_Just_s;
    } stuff;
};

static struct Maybe_261 Maybe_261_Just (  int32_t  field0 ) {
    return ( struct Maybe_261 ) { .tag = Maybe_261_Just_t, .stuff = { .Maybe_261_Just_s = { .field0 = field0 } } };
};

static  int32_t   op_dash_add263 (    int32_t  l207 ,    int32_t  r209 ) {
    return ( (  l207 ) + (  r209 ) );
}

static  struct Maybe_261   next262 (    struct FromIter_255 *  dref905 ) {
    int32_t  v907 = ( ( (* dref905 ) ) .f_from );
    (* dref905 ) .f_from = (  op_dash_add263 ( ( ( (* dref905 ) ) .f_from ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( ( Maybe_261_Just ) ( (  v907 ) ) );
}

static  struct Maybe_258   next259 (    struct Zip_253 *  self914 ) {
    struct Zip_253  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_171  dref916 = ( (  next260 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_171_None_t ) {
            return ( (struct Maybe_258) { .tag = Maybe_258_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_171_Just_t ) {
                struct Maybe_261  dref918 = ( (  next262 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_261_None_t ) {
                    return ( (struct Maybe_258) { .tag = Maybe_258_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_261_Just_t ) {
                        ( (  next260 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next262 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_258_Just ) ( ( ( Tuple2_237_Tuple2 ) ( ( dref916 .stuff .Maybe_171_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_261_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each252 (    struct Zip_253  iterable1074 ,   struct envunion236  fun1076 ) {
    struct Zip_253  temp256 = ( (  into_dash_iter257 ) ( (  iterable1074 ) ) );
    struct Zip_253 *  it1077 = ( &temp256 );
    while ( ( true ) ) {
        struct Maybe_258  dref1078 = ( (  next259 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_258_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_258_Just_t ) {
                struct envunion236  temp264 = (  fun1076 );
                ( temp264.fun ( &temp264.env ,  ( dref1078 .stuff .Maybe_258_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct SliceIter_254   into_dash_iter266 (    struct Slice_10  self1822 ) {
    return ( (struct SliceIter_254) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_255   into_dash_iter267 (    struct FromIter_255  it903 ) {
    return (  it903 );
}

static  struct Zip_253   zip265 (    struct Slice_10  left922 ,    struct FromIter_255  right924 ) {
    struct SliceIter_254  left_dash_it925 = ( (  into_dash_iter266 ) ( (  left922 ) ) );
    struct FromIter_255  right_dash_it926 = ( (  into_dash_iter267 ) ( (  right924 ) ) );
    return ( (struct Zip_253) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct FromIter_255   from268 (    int32_t  f900 ) {
    return ( (struct FromIter_255) { .f_from = (  f900 ) } );
}

static  void *   cast_dash_ptr270 (    struct List_11 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free269 (    enum CAllocator_9  dref1959 ,    struct Slice_10  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr270 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   grow_dash_if_dash_full227 (   struct env1* env ,    struct List_8 *  list2041 ) {
    if ( (  eq228 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate229 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq228 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_10  new_dash_slice2042 = ( (  allocate229 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul234 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env235 envinst235 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion236  fun2046 = ( (struct envunion236){ .fun = (  enum Unit_7  (*) (  struct env235*  ,    struct Tuple2_237  ) )lam238 , .env =  envinst235 } );
            ( (  for_dash_each252 ) ( ( (  zip265 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from268 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free269 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add225 (   struct env5* env ,    struct List_8 *  list2049 ,    struct List_11  elem2051 ) {
    struct envunion6  temp226 = ( (struct envunion6){ .fun = (  enum Unit_7  (*) (  struct env1*  ,    struct List_8 *  ) )grow_dash_if_dash_full227 , .env =  env->envinst1 } );
    ( temp226.fun ( &temp226.env ,  (  list2049 ) ) );
    ( (  set239 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add221 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam223 (   struct env166* env ,    struct List_11  x2102 ) {
    struct envunion39  temp224 = ( (struct envunion39){ .fun = (  enum Unit_7  (*) (  struct env5*  ,    struct List_8 *  ,    struct List_11  ) )add225 , .env =  env->envinst5 } );
    return ( temp224.fun ( &temp224.env ,  ( env->list2098 ) ,  (  x2102 ) ) );
}

static  enum Unit_7   add_dash_all164 (   struct env38* env ,    struct List_8 *  list2098 ,    struct Array_44  it2100 ) {
    struct env166 envinst166 = {
        .list2098 =  list2098 ,
        .envinst5 = env->envinst5 ,
    };
    ( (  for_dash_each165 ) ( (  it2100 ) ,  ( (struct envunion167){ .fun = (  enum Unit_7  (*) (  struct env166*  ,    struct List_11  ) )lam223 , .env =  envinst166 } ) ) );
    return ( Unit_7_Unit );
}

static  struct List_8   from_dash_iter154 (   struct env42* env ,    struct Array_44  iter2139 ,    enum CAllocator_9  al2141 ) {
    struct List_8  temp155 = ( (  mk156 ) ( (  al2141 ) ) );
    struct List_8 *  list2142 = ( &temp155 );
    struct envunion43  temp163 = ( (struct envunion43){ .fun = (  enum Unit_7  (*) (  struct env38*  ,    struct List_8 *  ,    struct Array_44  ) )add_dash_all164 , .env =  env->envinst38 } );
    ( temp163.fun ( &temp163.env ,  (  list2142 ) ,  (  iter2139 ) ) );
    return ( * (  list2142 ) );
}

static  struct Array_44   from_dash_listlike271 (    struct Array_44  self330 ) {
    return (  self330 );
}

static  void *   cast_dash_ptr277 (    uint8_t * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of278 (    uint8_t *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint8_t *   zeroed275 (  ) {
    uint8_t *  temp276;
    uint8_t *  x570 = (  temp276 );
    ( ( memset ) ( ( (  cast_dash_ptr277 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of278 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   null_dash_ptr274 (  ) {
    return ( (  zeroed275 ) ( ) );
}

static  struct Slice_12   empty273 (  ) {
    return ( (struct Slice_12) { .f_ptr = ( (  null_dash_ptr274 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_11   mk272 (    enum CAllocator_9  al2031 ) {
    struct Slice_12  elements2032 = ( (  empty273 ) ( ) );
    return ( (struct List_11) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr285 (    struct Changeset_26 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of286 (    struct Changeset_26 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Changeset_26 *   zeroed283 (  ) {
    struct Changeset_26 *  temp284;
    struct Changeset_26 *  x570 = (  temp284 );
    ( ( memset ) ( ( (  cast_dash_ptr285 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of286 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Changeset_26 *   null_dash_ptr282 (  ) {
    return ( (  zeroed283 ) ( ) );
}

static  struct Slice_25   empty281 (  ) {
    return ( (struct Slice_25) { .f_ptr = ( (  null_dash_ptr282 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_24   mk280 (    enum CAllocator_9  al2031 ) {
    struct Slice_25  elements2032 = ( (  empty281 ) ( ) );
    return ( (struct List_24) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_88   mk_dash_actions279 (    enum CAllocator_9  al3606 ) {
    return ( (struct Actions_88) { .f_list = ( (  mk280 ) ( (  al3606 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( false ) } );
}

static  struct TextBuf_87   mk152 (   struct env79* env ,    enum CAllocator_9  al3617 ,    struct Pos_20  cursor_dash_pos3619 ) {
    struct envunion80  temp153 = ( (struct envunion80){ .fun = (  struct List_8  (*) (  struct env42*  ,    struct Array_44  ,    enum CAllocator_9  ) )from_dash_iter154 , .env =  env->envinst42 } );
    return ( (struct TextBuf_87) { .f_al = (  al3617 ) , .f_buf = ( temp153.fun ( &temp153.env ,  ( (  from_dash_listlike271 ) ( ( (struct Array_44) { ._arr = { ( (  mk272 ) ( (  al3617 ) ) ) } } ) ) ) ,  (  al3617 ) ) ) , .f_actions = ( (  mk_dash_actions279 ) ( (  al3617 ) ) ) } );
}

static  struct Pos_20   mk287 (    int32_t  line3579 ,    int32_t  bi3581 ) {
    return ( (struct Pos_20) { .f_line = (  line3579 ) , .f_bi = (  bi3581 ) } );
}

struct Slice_288 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  const char* *   offset_dash_ptr290 (    const char* *  x338 ,    int64_t  count340 ) {
    const char*  temp291;
    return ( (const char* * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul219 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp291 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral292 (    int64_t  x46 ) {
    return (  x46 );
}

static  size_t   op_dash_sub293 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) - (  r277 ) );
}

static  struct Slice_288   get289 (  ) {
    return ( (struct Slice_288) { .f_ptr = ( (  offset_dash_ptr290 ) ( ( _global_argv ) ,  (  from_dash_integral292 ( 1 ) ) ) ) , .f_count = (  op_dash_sub293 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

struct Maybe_297 {
    enum {
        Maybe_297_None_t,
        Maybe_297_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_297_Just_s;
    } stuff;
};

static struct Maybe_297 Maybe_297_Just (  const char*  field0 ) {
    return ( struct Maybe_297 ) { .tag = Maybe_297_Just_t, .stuff = { .Maybe_297_Just_s = { .field0 = field0 } } };
};

static  const char*   undefined298 (  ) {
    const char*  temp299;
    return (  temp299 );
}

static  const char*   or_dash_fail296 (    struct Maybe_297  x1725 ,    struct StrConcat_242  errmsg1727 ) {
    struct Maybe_297  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_297_None_t ) {
        ( (  panic241 ) ( (  errmsg1727 ) ) );
        return ( (  undefined298 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_297_Just_t ) {
            return ( dref1728 .stuff .Maybe_297_Just_s .field0 );
        }
    }
}

static  struct Maybe_297   try_dash_get300 (    struct Slice_288  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp173 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    const char* *  elem_dash_ptr1766 = ( (  offset_dash_ptr290 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_297_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  const char*   get295 (    struct Slice_288  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail296 ) ( ( (  try_dash_get300 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_242_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string209 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get294 (    struct Slice_288  self1867 ,    size_t  idx1869 ) {
    return ( (  get295 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

struct envunion302 {
    enum Unit_7  (*fun) (  struct env85*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  );
    struct env85 env;
};

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_174   cmp306 (    int32_t  l159 ,    int32_t  r161 ) {
    return ( builtin_int32_tcmp( (  l159 ) , (  r161 ) ) );
}

static  enum Ordering_174   cmp305 (    struct Pos_20  l3572 ,    struct Pos_20  r3574 ) {
    enum Ordering_174  dref3575 = ( (  cmp306 ) ( ( (  l3572 ) .f_line ) ,  ( (  r3574 ) .f_line ) ) );
    switch (  dref3575 ) {
        case Ordering_174_EQ : {
            return ( (  cmp306 ) ( ( (  l3572 ) .f_bi ) ,  ( (  r3574 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_174  els3576 =  dref3575;
            return (  els3576 );
            break;
        }
    }
}

static  struct Pos_20   min304 (    struct Pos_20  l1236 ,    struct Pos_20  r1238 ) {
    if ( (  cmp305 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Pos_20   max307 (    struct Pos_20  l1315 ,    struct Pos_20  r1317 ) {
    if ( (  cmp305 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  bool   eq309 (    int32_t  l106 ,    int32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq308 (    struct Pos_20  l3567 ,    struct Pos_20  r3569 ) {
    return ( (  eq309 ( ( (  l3567 ) .f_line ) , ( (  r3569 ) .f_line ) ) ) && (  eq309 ( ( (  l3567 ) .f_bi ) , ( (  r3569 ) .f_bi ) ) ) );
}

static  size_t   size310 (    struct List_8 *  l2133 ) {
    return ( ( * (  l2133 ) ) .f_count );
}

static  struct List_11 *   get_dash_ptr315 (    struct List_8 *  list2001 ,    size_t  i2003 ) {
    if ( ( (  cmp173 ( (  i2003 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i2003 ) , ( ( * (  list2001 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic241 ) ( ( ( StrConcat_242_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2003 ) ) ) ,  ( (  from_dash_string209 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2001 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr240 ) ( ( ( * (  list2001 ) ) .f_elements ) ,  (  i2003 ) ) );
}

static  struct List_11   get314 (    struct List_8 *  list2011 ,    size_t  i2013 ) {
    return ( * ( (  get_dash_ptr315 ) ( (  list2011 ) ,  (  i2013 ) ) ) );
}

static  uint8_t *   offset_dash_ptr318 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp319;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul219 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp319 ) ) ) ) ) ) ) ) );
}

static  size_t   min320 (    size_t  l1236 ,    size_t  r1238 ) {
    if ( (  cmp173 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Slice_12   subslice317 (    struct Slice_12  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    uint8_t *  begin_dash_ptr1787 = ( (  offset_dash_ptr318 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp173 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp173 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_12) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub293 ( ( (  min320 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_12) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct Slice_12   from316 (    struct Slice_12  slice1791 ,    size_t  from1793 ) {
    return ( (  subslice317 ) ( (  slice1791 ) ,  (  from1793 ) ,  ( (  slice1791 ) .f_count ) ) );
}

static  struct Slice_12   to_dash_slice321 (    struct List_11  l2126 ) {
    uint8_t *  ptr2127 = ( ( (  l2126 ) .f_elements ) .f_ptr );
    return ( (struct Slice_12) { .f_ptr = (  ptr2127 ) , .f_count = ( (  l2126 ) .f_count ) } );
}

static  enum Unit_7   set322 (    struct List_8 *  list2021 ,    size_t  i2023 ,    struct List_11  elem2025 ) {
    if ( ( (  cmp173 ( (  i2023 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i2023 ) , ( ( * (  list2021 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic241 ) ( ( ( StrConcat_242_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2023 ) ) ) ,  ( (  from_dash_string209 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2021 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set239 ) ( ( ( * (  list2021 ) ) .f_elements ) ,  (  i2023 ) ,  (  elem2025 ) ) );
    return ( Unit_7_Unit );
}

struct env329 {
    struct List_11 *  list2098;
    struct env13 envinst13;
};

struct envunion330 {
    enum Unit_7  (*fun) (  struct env329*  ,    uint8_t  );
    struct env329 env;
};

struct SliceIter_331 {
    struct Slice_12  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_331   into_dash_iter333 (    struct Slice_12  self1822 ) {
    return ( (struct SliceIter_331) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_334 {
    enum {
        Maybe_334_None_t,
        Maybe_334_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_334_Just_s;
    } stuff;
};

static struct Maybe_334 Maybe_334_Just (  uint8_t  field0 ) {
    return ( struct Maybe_334 ) { .tag = Maybe_334_Just_t, .stuff = { .Maybe_334_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_334   next335 (    struct SliceIter_331 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp173 ( (  op_dash_add221 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_334) { .tag = Maybe_334_None_t } );
    }
    uint8_t  elem1830 = ( * ( (  offset_dash_ptr318 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add221 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_334_Just ) ( (  elem1830 ) ) );
}

static  enum Unit_7   for_dash_each328 (    struct Slice_12  iterable1074 ,   struct envunion330  fun1076 ) {
    struct SliceIter_331  temp332 = ( (  into_dash_iter333 ) ( (  iterable1074 ) ) );
    struct SliceIter_331 *  it1077 = ( &temp332 );
    while ( ( true ) ) {
        struct Maybe_334  dref1078 = ( (  next335 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_334_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_334_Just_t ) {
                struct envunion330  temp336 = (  fun1076 );
                ( temp336.fun ( &temp336.env ,  ( dref1078 .stuff .Maybe_334_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

struct TypeSize_344 {
    size_t  f_size;
};

static  struct TypeSize_344   get_dash_typesize343 (  ) {
    uint8_t  temp345;
    return ( (struct TypeSize_344) { .f_size = ( sizeof( ( (  temp345 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr346 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_12   allocate342 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize343 ) ( ) ) ) .f_size );
    uint8_t *  ptr1957 = ( (  cast_dash_ptr346 ) ( ( ( malloc ) ( (  op_dash_mul234 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_12) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env347 {
    struct Slice_12  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_349 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_349 Tuple2_349_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_349 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion348 {
    enum Unit_7  (*fun) (  struct env347*  ,    struct Tuple2_349  );
    struct env347 env;
};

static  uint8_t *   get_dash_ptr352 (    struct Slice_12  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp173 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic241 ) ( ( ( StrConcat_242_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string209 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1760 = ( (  offset_dash_ptr318 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set351 (    struct Slice_12  slice1774 ,    size_t  i1776 ,    uint8_t  x1778 ) {
    uint8_t *  ep1779 = ( (  get_dash_ptr352 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam350 (   struct env347* env ,    struct Tuple2_349  dref2043 ) {
    return ( (  set351 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size251 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct Zip_354 {
    struct SliceIter_331  f_left_dash_it;
    struct FromIter_255  f_right_dash_it;
};

static  struct Zip_354   into_dash_iter356 (    struct Zip_354  self911 ) {
    return (  self911 );
}

struct Maybe_357 {
    enum {
        Maybe_357_None_t,
        Maybe_357_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_349  field0;
        } Maybe_357_Just_s;
    } stuff;
};

static struct Maybe_357 Maybe_357_Just (  struct Tuple2_349  field0 ) {
    return ( struct Maybe_357 ) { .tag = Maybe_357_Just_t, .stuff = { .Maybe_357_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_357   next358 (    struct Zip_354 *  self914 ) {
    struct Zip_354  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_334  dref916 = ( (  next335 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_334_None_t ) {
            return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_334_Just_t ) {
                struct Maybe_261  dref918 = ( (  next262 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_261_None_t ) {
                    return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_261_Just_t ) {
                        ( (  next335 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next262 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_357_Just ) ( ( ( Tuple2_349_Tuple2 ) ( ( dref916 .stuff .Maybe_334_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_261_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each353 (    struct Zip_354  iterable1074 ,   struct envunion348  fun1076 ) {
    struct Zip_354  temp355 = ( (  into_dash_iter356 ) ( (  iterable1074 ) ) );
    struct Zip_354 *  it1077 = ( &temp355 );
    while ( ( true ) ) {
        struct Maybe_357  dref1078 = ( (  next358 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_357_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_357_Just_t ) {
                struct envunion348  temp359 = (  fun1076 );
                ( temp359.fun ( &temp359.env ,  ( dref1078 .stuff .Maybe_357_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_354   zip360 (    struct Slice_12  left922 ,    struct FromIter_255  right924 ) {
    struct SliceIter_331  left_dash_it925 = ( (  into_dash_iter333 ) ( (  left922 ) ) );
    struct FromIter_255  right_dash_it926 = ( (  into_dash_iter267 ) ( (  right924 ) ) );
    return ( (struct Zip_354) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr362 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free361 (    enum CAllocator_9  dref1959 ,    struct Slice_12  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr362 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   grow_dash_if_dash_full341 (   struct env2* env ,    struct List_11 *  list2041 ) {
    if ( (  eq228 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate342 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq228 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_12  new_dash_slice2042 = ( (  allocate342 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul234 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env347 envinst347 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion348  fun2046 = ( (struct envunion348){ .fun = (  enum Unit_7  (*) (  struct env347*  ,    struct Tuple2_349  ) )lam350 , .env =  envinst347 } );
            ( (  for_dash_each353 ) ( ( (  zip360 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from268 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free361 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add339 (   struct env13* env ,    struct List_11 *  list2049 ,    uint8_t  elem2051 ) {
    struct envunion14  temp340 = ( (struct envunion14){ .fun = (  enum Unit_7  (*) (  struct env2*  ,    struct List_11 *  ) )grow_dash_if_dash_full341 , .env =  env->envinst2 } );
    ( temp340.fun ( &temp340.env ,  (  list2049 ) ) );
    ( (  set351 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add221 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam337 (   struct env329* env ,    uint8_t  x2102 ) {
    struct envunion41  temp338 = ( (struct envunion41){ .fun = (  enum Unit_7  (*) (  struct env13*  ,    struct List_11 *  ,    uint8_t  ) )add339 , .env =  env->envinst13 } );
    return ( temp338.fun ( &temp338.env ,  ( env->list2098 ) ,  (  x2102 ) ) );
}

static  enum Unit_7   add_dash_all327 (   struct env40* env ,    struct List_11 *  list2098 ,    struct Slice_12  it2100 ) {
    struct env329 envinst329 = {
        .list2098 =  list2098 ,
        .envinst13 = env->envinst13 ,
    };
    ( (  for_dash_each328 ) ( (  it2100 ) ,  ( (struct envunion330){ .fun = (  enum Unit_7  (*) (  struct env329*  ,    uint8_t  ) )lam337 , .env =  envinst329 } ) ) );
    return ( Unit_7_Unit );
}

static  struct List_11   from_dash_iter324 (   struct env45* env ,    struct Slice_12  iter2139 ,    enum CAllocator_9  al2141 ) {
    struct List_11  temp325 = ( (  mk272 ) ( (  al2141 ) ) );
    struct List_11 *  list2142 = ( &temp325 );
    struct envunion46  temp326 = ( (struct envunion46){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all327 , .env =  env->envinst40 } );
    ( temp326.fun ( &temp326.env ,  (  list2142 ) ,  (  iter2139 ) ) );
    return ( * (  list2142 ) );
}

static  struct StrView_21   or_dash_else364 (    struct Maybe_131  self1732 ,    struct StrView_21  alt1734 ) {
    struct Maybe_131  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_131_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_131_Just_t ) {
            return ( dref1735 .stuff .Maybe_131_Just_s .field0 );
        }
    }
}

struct LineIter_366 {
    struct StrView_21  f_og;
    size_t  f_last;
};

static  uint8_t   undefined370 (  ) {
    uint8_t  temp371;
    return (  temp371 );
}

static  uint8_t   or_dash_fail369 (    struct Maybe_334  x1725 ,    struct StrConcat_242  errmsg1727 ) {
    struct Maybe_334  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_334_None_t ) {
        ( (  panic241 ) ( (  errmsg1727 ) ) );
        return ( (  undefined370 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_334_Just_t ) {
            return ( dref1728 .stuff .Maybe_334_Just_s .field0 );
        }
    }
}

static  struct Maybe_334   try_dash_get372 (    struct Slice_12  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp173 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_334) { .tag = Maybe_334_None_t } );
    }
    uint8_t *  elem_dash_ptr1766 = ( (  offset_dash_ptr318 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_334_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  uint8_t   get368 (    struct Slice_12  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail369 ) ( ( (  try_dash_get372 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_242_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string209 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   char_dash_u8373 (    struct Char_57  c718 ) {
    struct CharDestructured_194  dref719 = ( (  destructure196 ) ( (  c718 ) ) );
    if ( dref719.tag == CharDestructured_194_Ref_t ) {
        return ( * ( ( dref719 .stuff .CharDestructured_194_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref719.tag == CharDestructured_194_Scalar_t ) {
            return ( (  u32_dash_u8207 ) ( ( ( dref719 .stuff .CharDestructured_194_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct StrView_21   byte_dash_substr374 (    struct StrView_21  s2183 ,    size_t  from2185 ,    size_t  to2187 ) {
    return ( (struct StrView_21) { .f_contents = ( (  subslice317 ) ( ( (  s2183 ) .f_contents ) ,  (  from2185 ) ,  (  to2187 ) ) ) } );
}

static  struct Maybe_131   next367 (    struct LineIter_366 *  self2404 ) {
    if ( (  cmp173 ( ( ( * (  self2404 ) ) .f_last ) , ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_131) { .tag = Maybe_131_None_t } );
    }
    size_t  i2405 = ( ( * (  self2404 ) ) .f_last );
    while ( ( (  cmp173 ( (  i2405 ) , ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq197 ( ( (  get368 ) ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) ,  (  i2405 ) ) ) , ( (  char_dash_u8373 ) ( ( (  from_dash_charlike210 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2405 = (  op_dash_add221 ( (  i2405 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_21  line2406 = ( (  byte_dash_substr374 ) ( ( ( * (  self2404 ) ) .f_og ) ,  ( ( * (  self2404 ) ) .f_last ) ,  (  i2405 ) ) );
    if ( (  cmp173 ( (  i2405 ) , ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2405 = (  op_dash_add221 ( (  i2405 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2404 ) .f_last = (  i2405 );
    return ( ( Maybe_131_Just ) ( (  line2406 ) ) );
}

static  struct LineIter_366   into_dash_iter376 (    struct LineIter_366  self2401 ) {
    return (  self2401 );
}

static  struct Maybe_131   head365 (    struct LineIter_366  it1142 ) {
    struct LineIter_366  temp375 = ( (  into_dash_iter376 ) ( (  it1142 ) ) );
    return ( (  next367 ) ( ( &temp375 ) ) );
}

static  struct LineIter_366   lines377 (    struct StrView_21  s2398 ) {
    return ( (struct LineIter_366) { .f_og = (  s2398 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env382 {
    ;
    struct Char_57  c2222;
};

struct envunion383 {
    bool  (*fun) (  struct env382*  ,    struct Char_57  );
    struct env382 env;
};

struct SplitIter_381 {
    struct StrView_21  f_og;
    size_t  f_last;
    struct envunion383  f_fun;
};

struct Drop_380 {
    struct SplitIter_381  field0;
    size_t  field1;
};

static struct Drop_380 Drop_380_Drop (  struct SplitIter_381  field0 ,  size_t  field1 ) {
    return ( struct Drop_380 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_379 {
    struct Drop_380  f_left_dash_it;
    struct FromIter_255  f_right_dash_it;
};

static  struct Zip_379   into_dash_iter384 (    struct Zip_379  self911 ) {
    return (  self911 );
}

static  struct Drop_380   into_dash_iter386 (    struct Drop_380  self845 ) {
    return (  self845 );
}

static  struct Zip_379   zip385 (    struct Drop_380  left922 ,    struct FromIter_255  right924 ) {
    struct Drop_380  left_dash_it925 = ( (  into_dash_iter386 ) ( (  left922 ) ) );
    struct FromIter_255  right_dash_it926 = ( (  into_dash_iter267 ) ( (  right924 ) ) );
    return ( (struct Zip_379) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct SplitIter_381   into_dash_iter388 (    struct SplitIter_381  self2227 ) {
    return (  self2227 );
}

static  struct Drop_380   drop387 (    struct SplitIter_381  iterable852 ,    size_t  i854 ) {
    struct SplitIter_381  it855 = ( (  into_dash_iter388 ) ( (  iterable852 ) ) );
    return ( ( Drop_380_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SplitIter_381   split_dash_by_dash_filter390 (    struct StrView_21  s2215 ,   struct envunion383  fun2217 ) {
    return ( (struct SplitIter_381) { .f_og = (  s2215 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2217 ) } );
}

struct Tuple2_393 {
    struct CharDestructured_194  field0;
    struct CharDestructured_194  field1;
};

static struct Tuple2_393 Tuple2_393_Tuple2 (  struct CharDestructured_194  field0 ,  struct CharDestructured_194  field1 ) {
    return ( struct Tuple2_393 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int64_t   op_dash_add394 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) + (  r186 ) );
}

static  bool   eq396 (    uint32_t  l111 ,    uint32_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  bool   eq395 (    struct Scalar_195  l724 ,    struct Scalar_195  r726 ) {
    return (  eq396 ( ( (  l724 ) .f_value ) , ( (  r726 ) .f_value ) ) );
}

static  bool   eq392 (    struct Char_57  l729 ,    struct Char_57  r731 ) {
    if ( ( !  eq228 ( ( (  l729 ) .f_num_dash_bytes ) , ( (  r731 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_393  dref732 = ( ( Tuple2_393_Tuple2 ) ( ( (  destructure196 ) ( (  l729 ) ) ) ,  ( (  destructure196 ) ( (  r731 ) ) ) ) );
    if ( dref732 .field0.tag == CharDestructured_194_Ref_t && dref732 .field1.tag == CharDestructured_194_Ref_t ) {
        int64_t  i735 = (  from_dash_integral292 ( 0 ) );
        while ( (  cmp173 ( ( (size_t ) (  i735 ) ) , ( ( dref732 .field0 .stuff .CharDestructured_194_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq197 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field0 .stuff .CharDestructured_194_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field1 .stuff .CharDestructured_194_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) ) ) ) {
                return ( false );
            }
            i735 = (  op_dash_add394 ( (  i735 ) , (  from_dash_integral292 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref732 .field0.tag == CharDestructured_194_Scalar_t && dref732 .field1.tag == CharDestructured_194_Scalar_t ) {
            return (  eq395 ( ( dref732 .field0 .stuff .CharDestructured_194_Scalar_s .field0 ) , ( dref732 .field1 .stuff .CharDestructured_194_Scalar_s .field0 ) ) );
        }
        else {
            if ( dref732 .field0.tag == CharDestructured_194_Scalar_t && dref732 .field1.tag == CharDestructured_194_Ref_t ) {
                return (  eq197 ( ( (  u32_dash_u8207 ) ( ( ( dref732 .field0 .stuff .CharDestructured_194_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref732 .field1 .stuff .CharDestructured_194_Ref_s .field0 ) .f_ptr ) ) ) );
            }
            else {
                if ( dref732 .field0.tag == CharDestructured_194_Ref_t && dref732 .field1.tag == CharDestructured_194_Scalar_t ) {
                    return (  eq197 ( ( (  u32_dash_u8207 ) ( ( ( dref732 .field1 .stuff .CharDestructured_194_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref732 .field0 .stuff .CharDestructured_194_Ref_s .field0 ) .f_ptr ) ) ) );
                }
            }
        }
    }
}

static  bool   lam391 (   struct env382* env ,    struct Char_57  cc2224 ) {
    return (  eq392 ( (  cc2224 ) , ( env->c2222 ) ) );
}

static  struct SplitIter_381   split_dash_by_dash_each389 (    struct StrView_21  s2220 ,    struct Char_57  c2222 ) {
    struct env382 envinst382 = {
        .c2222 =  c2222 ,
    };
    return ( (  split_dash_by_dash_filter390 ) ( (  s2220 ) ,  ( (struct envunion383){ .fun = (  bool  (*) (  struct env382*  ,    struct Char_57  ) )lam391 , .env =  envinst382 } ) ) );
}

struct Tuple2_399 {
    struct StrView_21  field0;
    int32_t  field1;
};

static struct Tuple2_399 Tuple2_399_Tuple2 (  struct StrView_21  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_399 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_398 {
    enum {
        Maybe_398_None_t,
        Maybe_398_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_399  field0;
        } Maybe_398_Just_s;
    } stuff;
};

static struct Maybe_398 Maybe_398_Just (  struct Tuple2_399  field0 ) {
    return ( struct Maybe_398 ) { .tag = Maybe_398_Just_t, .stuff = { .Maybe_398_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_131   next402 (    struct SplitIter_381 *  self2230 ) {
    if ( (  cmp173 ( ( ( * (  self2230 ) ) .f_last ) , ( ( ( ( * (  self2230 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_131) { .tag = Maybe_131_None_t } );
    }
    size_t  i2231 = ( ( * (  self2230 ) ) .f_last );
    while ( (  cmp173 ( (  i2231 ) , ( ( ( ( * (  self2230 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2232 = ( (  get_dash_ptr352 ) ( ( ( ( * (  self2230 ) ) .f_og ) .f_contents ) ,  (  i2231 ) ) );
        struct Char_57  c2233 = ( (  scan_dash_from_dash_mem212 ) ( (  ptr2232 ) ) );
        struct envunion383  temp403 = ( ( * (  self2230 ) ) .f_fun );
        if ( ( temp403.fun ( &temp403.env ,  (  c2233 ) ) ) ) {
            break;
        }
        i2231 = (  op_dash_add221 ( (  i2231 ) , ( (  next_dash_char213 ) ( (  ptr2232 ) ) ) ) );
    }
    struct StrView_21  line2234 = ( (  byte_dash_substr374 ) ( ( ( * (  self2230 ) ) .f_og ) ,  ( ( * (  self2230 ) ) .f_last ) ,  (  i2231 ) ) );
    i2231 = (  op_dash_add221 ( (  i2231 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2230 ) .f_last = (  i2231 );
    return ( ( Maybe_131_Just ) ( (  line2234 ) ) );
}

static  struct Maybe_131   next401 (    struct Drop_380 *  dref847 ) {
    while ( (  cmp173 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next402 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub293 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next402 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Maybe_398   next400 (    struct Zip_379 *  self914 ) {
    struct Zip_379  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_131  dref916 = ( (  next401 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_131_None_t ) {
            return ( (struct Maybe_398) { .tag = Maybe_398_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_131_Just_t ) {
                struct Maybe_261  dref918 = ( (  next262 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_261_None_t ) {
                    return ( (struct Maybe_398) { .tag = Maybe_398_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_261_Just_t ) {
                        ( (  next401 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next262 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_398_Just ) ( ( ( Tuple2_399_Tuple2 ) ( ( dref916 .stuff .Maybe_131_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_261_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion406 {
    struct List_11  (*fun) (  struct env45*  ,    struct Slice_12  ,    enum CAllocator_9  );
    struct env45 env;
};

static  enum Unit_7   insert408 (   struct env29* env ,    struct List_8 *  list2054 ,    size_t  i2056 ,    struct List_11  elem2058 ) {
    if ( ( (  cmp173 ( (  i2056 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i2056 ) , ( ( * (  list2054 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic241 ) ( ( ( StrConcat_242_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2056 ) ) ) ,  ( (  from_dash_string209 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2054 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq228 ( ( ( * (  list2054 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion31  temp409 = ( (struct envunion31){ .fun = (  enum Unit_7  (*) (  struct env5*  ,    struct List_8 *  ,    struct List_11  ) )add225 , .env =  env->envinst5 } );
        ( temp409.fun ( &temp409.env ,  (  list2054 ) ,  (  elem2058 ) ) );
        return ( Unit_7_Unit );
    }
    struct envunion30  temp410 = ( (struct envunion30){ .fun = (  enum Unit_7  (*) (  struct env1*  ,    struct List_8 *  ) )grow_dash_if_dash_full227 , .env =  env->envinst1 } );
    ( temp410.fun ( &temp410.env ,  (  list2054 ) ) );
    size_t  ii2059 = (  op_dash_sub293 ( ( ( * (  list2054 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp173 ( (  ii2059 ) , (  i2056 ) ) != 0 ) ) {
        ( (  set239 ) ( ( ( * (  list2054 ) ) .f_elements ) ,  (  op_dash_add221 ( (  ii2059 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get314 ) ( (  list2054 ) ,  (  ii2059 ) ) ) ) );
        if ( (  eq228 ( (  ii2059 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2059 = (  op_dash_sub293 ( (  ii2059 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set239 ) ( ( ( * (  list2054 ) ) .f_elements ) ,  (  i2056 ) ,  (  elem2058 ) ) );
    (*  list2054 ) .f_count = (  op_dash_add221 ( ( ( * (  list2054 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct envunion412 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

static  enum Unit_7   free413 (    struct List_11 *  list2035 ) {
    ( (  free361 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( ( * (  list2035 ) ) .f_elements ) ) );
    return ( Unit_7_Unit );
}

static  int32_t   add_dash_to_dash_spot313 (   struct env81* env ,    struct TextBuf_87 *  self3651 ,    struct Pos_20  p3653 ,    struct StrView_21  bytes3655 ) {
    enum CAllocator_9  al3656 = ( ( ( * (  self3651 ) ) .f_buf ) .f_al );
    struct List_8 *  buf3657 = ( & ( ( * (  self3651 ) ) .f_buf ) );
    struct List_11  extracted_dash_line_dash_buf3658 = ( (  get314 ) ( (  buf3657 ) ,  ( (  i32_dash_size251 ) ( ( (  p3653 ) .f_line ) ) ) ) );
    struct Slice_12  remaining3659 = ( (  from316 ) ( ( (  to_dash_slice321 ) ( (  extracted_dash_line_dash_buf3658 ) ) ) ,  ( (  i32_dash_size251 ) ( ( (  p3653 ) .f_bi ) ) ) ) );
    struct envunion82  temp323 = ( (struct envunion82){ .fun = (  struct List_11  (*) (  struct env45*  ,    struct Slice_12  ,    enum CAllocator_9  ) )from_dash_iter324 , .env =  env->envinst45 } );
    ( (  set322 ) ( (  buf3657 ) ,  ( (  i32_dash_size251 ) ( ( (  p3653 ) .f_line ) ) ) ,  ( temp323.fun ( &temp323.env ,  ( (  subslice317 ) ( ( (  to_dash_slice321 ) ( (  extracted_dash_line_dash_buf3658 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size251 ) ( ( (  p3653 ) .f_bi ) ) ) ) ) ,  (  al3656 ) ) ) ) );
    struct List_11 *  last_dash_line3660 = ( (  get_dash_ptr315 ) ( (  buf3657 ) ,  ( (  i32_dash_size251 ) ( ( (  p3653 ) .f_line ) ) ) ) );
    struct envunion84  temp363 = ( (struct envunion84){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all327 , .env =  env->envinst40 } );
    ( temp363.fun ( &temp363.env ,  (  last_dash_line3660 ) ,  ( ( (  or_dash_else364 ) ( ( (  head365 ) ( ( (  lines377 ) ( (  bytes3655 ) ) ) ) ) ,  ( (  from_dash_string209 ) ( ( "" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3661 = (  from_dash_integral48 ( 0 ) );
    struct Zip_379  temp378 =  into_dash_iter384 ( ( (  zip385 ) ( ( (  drop387 ) ( ( (  split_dash_by_dash_each389 ) ( (  bytes3655 ) ,  ( (  from_dash_charlike210 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from268 ) ( (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_398  __cond397 =  next400 (&temp378);
        if (  __cond397 .tag == 0 ) {
            break;
        }
        struct Tuple2_399  dref3662 =  __cond397 .stuff .Maybe_398_Just_s .field0;
        struct envunion406  temp405 = ( (struct envunion406){ .fun = (  struct List_11  (*) (  struct env45*  ,    struct Slice_12  ,    enum CAllocator_9  ) )from_dash_iter324 , .env =  env->envinst45 } );
        struct List_11  temp404 = ( temp405.fun ( &temp405.env ,  ( ( dref3662 .field0 ) .f_contents ) ,  (  al3656 ) ) );
        struct List_11 *  nuline3665 = ( &temp404 );
        size_t  next_dash_line3666 = ( (  i32_dash_size251 ) ( (  op_dash_add263 ( ( (  p3653 ) .f_line ) , ( dref3662 .field1 ) ) ) ) );
        struct envunion83  temp407 = ( (struct envunion83){ .fun = (  enum Unit_7  (*) (  struct env29*  ,    struct List_8 *  ,    size_t  ,    struct List_11  ) )insert408 , .env =  env->envinst29 } );
        ( temp407.fun ( &temp407.env ,  (  buf3657 ) ,  (  next_dash_line3666 ) ,  ( * (  nuline3665 ) ) ) );
        last_dash_line3660 = ( (  get_dash_ptr315 ) ( (  buf3657 ) ,  (  next_dash_line3666 ) ) );
        lines_dash_added3661 = (  op_dash_add263 ( (  lines_dash_added3661 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    struct envunion412  temp411 = ( (struct envunion412){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all327 , .env =  env->envinst40 } );
    ( temp411.fun ( &temp411.env ,  (  last_dash_line3660 ) ,  (  remaining3659 ) ) );
    ( (  free413 ) ( ( & (  extracted_dash_line_dash_buf3658 ) ) ) );
    return (  lines_dash_added3661 );
}

static  size_t   size414 (    struct List_11 *  l2133 ) {
    return ( ( * (  l2133 ) ) .f_count );
}

struct StrConcat_420 {
    struct StrConcat_65  field0;
    struct Char_57  field1;
};

static struct StrConcat_420 StrConcat_420_StrConcat (  struct StrConcat_65  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_420 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_419 {
    struct StrConcat_420  field0;
    size_t  field1;
};

static struct StrConcat_419 StrConcat_419_StrConcat (  struct StrConcat_420  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_419 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_418 {
    struct StrConcat_419  field0;
    struct Char_57  field1;
};

static struct StrConcat_418 StrConcat_418_StrConcat (  struct StrConcat_419  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_418 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_423 {
    struct StrView_21  field0;
    struct StrConcat_418  field1;
};

static struct StrConcat_423 StrConcat_423_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_418  field1 ) {
    return ( struct StrConcat_423 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_422 {
    struct StrConcat_423  field0;
    struct Char_57  field1;
};

static struct StrConcat_422 StrConcat_422_StrConcat (  struct StrConcat_423  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_422 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str427 (    struct StrConcat_420  self1503 ) {
    struct StrConcat_420  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str189 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str192 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str426 (    struct StrConcat_419  self1503 ) {
    struct StrConcat_419  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str427 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str190 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str425 (    struct StrConcat_418  self1503 ) {
    struct StrConcat_418  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str426 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str192 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str424 (    struct StrConcat_423  self1503 ) {
    struct StrConcat_423  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str184 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str425 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str421 (    struct StrConcat_422  self1503 ) {
    struct StrConcat_422  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str424 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str192 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic417 (    struct StrConcat_418  errmsg1712 ) {
    ( (  print_dash_str421 ) ( ( ( StrConcat_422_StrConcat ) ( ( ( StrConcat_423_StrConcat ) ( ( (  from_dash_string209 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct Drop_429 {
    struct Zip_354  field0;
    size_t  field1;
};

static struct Drop_429 Drop_429_Drop (  struct Zip_354  field0 ,  size_t  field1 ) {
    return ( struct Drop_429 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env430 {
    ;
    size_t  num_dash_elems2067;
    ;
    ;
    struct List_11 *  list2062;
};

struct envunion431 {
    enum Unit_7  (*fun) (  struct env430*  ,    struct Tuple2_349  );
    struct env430 env;
};

static  struct Drop_429   into_dash_iter433 (    struct Drop_429  self845 ) {
    return (  self845 );
}

static  struct Maybe_357   next434 (    struct Drop_429 *  dref847 ) {
    while ( (  cmp173 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next358 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub293 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next358 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_7   for_dash_each428 (    struct Drop_429  iterable1074 ,   struct envunion431  fun1076 ) {
    struct Drop_429  temp432 = ( (  into_dash_iter433 ) ( (  iterable1074 ) ) );
    struct Drop_429 *  it1077 = ( &temp432 );
    while ( ( true ) ) {
        struct Maybe_357  dref1078 = ( (  next434 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_357_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_357_Just_t ) {
                struct envunion431  temp435 = (  fun1076 );
                ( temp435.fun ( &temp435.env ,  ( dref1078 .stuff .Maybe_357_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Drop_429   drop436 (    struct Zip_354  iterable852 ,    size_t  i854 ) {
    struct Zip_354  it855 = ( (  into_dash_iter356 ) ( (  iterable852 ) ) );
    return ( ( Drop_429_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SliceIter_331   into_dash_iter438 (    struct List_11  self2028 ) {
    return ( (  into_dash_iter333 ) ( ( (  subslice317 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

static  struct Zip_354   zip437 (    struct List_11  left922 ,    struct FromIter_255  right924 ) {
    struct SliceIter_331  left_dash_it925 = ( (  into_dash_iter438 ) ( (  left922 ) ) );
    struct FromIter_255  right_dash_it926 = ( (  into_dash_iter267 ) ( (  right924 ) ) );
    return ( (struct Zip_354) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   set440 (    struct List_11 *  list2021 ,    size_t  i2023 ,    uint8_t  elem2025 ) {
    if ( ( (  cmp173 ( (  i2023 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i2023 ) , ( ( * (  list2021 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic241 ) ( ( ( StrConcat_242_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2023 ) ) ) ,  ( (  from_dash_string209 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2021 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set351 ) ( ( ( * (  list2021 ) ) .f_elements ) ,  (  i2023 ) ,  (  elem2025 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam439 (   struct env430* env ,    struct Tuple2_349  dref2068 ) {
    return ( (  set440 ) ( ( env->list2062 ) ,  (  op_dash_sub293 ( ( (  i32_dash_size251 ) ( ( dref2068 .field1 ) ) ) , ( env->num_dash_elems2067 ) ) ) ,  ( dref2068 .field0 ) ) );
}

struct StrConcat_443 {
    struct StrConcat_243  field0;
    struct StrView_21  field1;
};

static struct StrConcat_443 StrConcat_443_StrConcat (  struct StrConcat_243  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_443 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_446 {
    struct StrView_21  field0;
    struct StrConcat_443  field1;
};

static struct StrConcat_446 StrConcat_446_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_443  field1 ) {
    return ( struct StrConcat_446 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_445 {
    struct StrConcat_446  field0;
    struct Char_57  field1;
};

static struct StrConcat_445 StrConcat_445_StrConcat (  struct StrConcat_446  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_445 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str448 (    struct StrConcat_443  self1503 ) {
    struct StrConcat_443  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str249 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str184 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str447 (    struct StrConcat_446  self1503 ) {
    struct StrConcat_446  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str184 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str448 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str444 (    struct StrConcat_445  self1503 ) {
    struct StrConcat_445  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str447 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str192 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic442 (    struct StrConcat_443  errmsg1712 ) {
    ( (  print_dash_str444 ) ( ( ( StrConcat_445_StrConcat ) ( ( ( StrConcat_446_StrConcat ) ( ( (  from_dash_string209 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct env450 {
    ;
    struct Slice_12  dest1853;
    ;
};

struct envunion451 {
    enum Unit_7  (*fun) (  struct env450*  ,    struct Tuple2_349  );
    struct env450 env;
};

static  enum Unit_7   for_dash_each449 (    struct Zip_354  iterable1074 ,   struct envunion451  fun1076 ) {
    struct Zip_354  temp452 = ( (  into_dash_iter356 ) ( (  iterable1074 ) ) );
    struct Zip_354 *  it1077 = ( &temp452 );
    while ( ( true ) ) {
        struct Maybe_357  dref1078 = ( (  next358 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_357_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_357_Just_t ) {
                struct envunion451  temp453 = (  fun1076 );
                ( temp453.fun ( &temp453.env ,  ( dref1078 .stuff .Maybe_357_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam454 (   struct env450* env ,    struct Tuple2_349  dref1854 ) {
    return ( (  set351 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size251 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_7   copy_dash_to441 (    struct Slice_12  src1851 ,    struct Slice_12  dest1853 ) {
    if ( (  cmp173 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic442 ) ( ( ( StrConcat_443_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string209 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string209 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env450 envinst450 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each449 ) ( ( (  zip360 ) ( (  src1851 ) ,  ( (  from268 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  ( (struct envunion451){ .fun = (  enum Unit_7  (*) (  struct env450*  ,    struct Tuple2_349  ) )lam454 , .env =  envinst450 } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   remove_dash_range416 (   struct env32* env ,    struct List_11 *  list2062 ,    size_t  from2064 ,    size_t  to_dash_excl2066 ) {
    if ( (  cmp173 ( (  to_dash_excl2066 ) , (  from2064 ) ) == 0 ) ) {
        ( (  panic417 ) ( ( ( StrConcat_418_StrConcat ) ( ( ( StrConcat_419_StrConcat ) ( ( ( StrConcat_420_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp173 ( (  from2064 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic241 ) ( ( ( StrConcat_242_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_string209 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp173 ( (  to_dash_excl2066 ) , ( ( * (  list2062 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic241 ) ( ( ( StrConcat_242_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_string209 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2067 = (  op_dash_sub293 ( (  to_dash_excl2066 ) , (  from2064 ) ) );
    struct env430 envinst430 = {
        .num_dash_elems2067 =  num_dash_elems2067 ,
        .list2062 =  list2062 ,
    };
    ( (  for_dash_each428 ) ( ( (  drop436 ) ( ( (  zip437 ) ( ( * (  list2062 ) ) ,  ( (  from268 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  op_dash_add221 ( (  from2064 ) , (  num_dash_elems2067 ) ) ) ) ) ,  ( (struct envunion431){ .fun = (  enum Unit_7  (*) (  struct env430*  ,    struct Tuple2_349  ) )lam439 , .env =  envinst430 } ) ) );
    (*  list2062 ) .f_count = (  op_dash_sub293 ( ( ( * (  list2062 ) ) .f_count ) , (  num_dash_elems2067 ) ) );
    size_t  capacity2071 = ( ( ( * (  list2062 ) ) .f_elements ) .f_count );
    if ( (  cmp173 ( (  op_dash_mul234 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  capacity2071 ) ) == 0 ) ) {
        if ( (  eq228 ( ( ( * (  list2062 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free361 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
            (*  list2062 ) .f_elements = ( (  empty273 ) ( ) );
            return ( Unit_7_Unit );
        }
        size_t  new_dash_size2072 = (  op_dash_mul234 ( (  op_dash_add221 ( (  op_dash_div200 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2038 ) ) );
        struct Slice_12  new_dash_slice2073 = ( (  allocate342 ) ( ( ( * (  list2062 ) ) .f_al ) ,  (  new_dash_size2072 ) ) );
        ( (  copy_dash_to441 ) ( ( (  subslice317 ) ( ( ( * (  list2062 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  (  new_dash_slice2073 ) ) );
        ( (  free361 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
        (*  list2062 ) .f_elements = (  new_dash_slice2073 );
    }
    return ( Unit_7_Unit );
}

struct envunion456 {
    int32_t  (*fun) (  struct env81*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct StrView_21  );
    struct env81 env;
};

static  enum Unit_7   trim457 (    struct List_11 *  l2115 ,    size_t  new_dash_count2117 ) {
    (*  l2115 ) .f_count = ( (  min320 ) ( (  new_dash_count2117 ) ,  ( ( * (  l2115 ) ) .f_count ) ) );
    return ( Unit_7_Unit );
}

static  int32_t   min458 (    int32_t  l1236 ,    int32_t  r1238 ) {
    if ( (  cmp306 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

struct envunion460 {
    int32_t  (*fun) (  struct env81*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct StrView_21  );
    struct env81 env;
};

struct Maybe_462 {
    enum {
        Maybe_462_None_t,
        Maybe_462_Just_t,
    } tag;
    union {
        struct {
            struct Slice_12  field0;
        } Maybe_462_Just_s;
    } stuff;
};

static struct Maybe_462 Maybe_462_Just (  struct Slice_12  field0 ) {
    return ( struct Maybe_462 ) { .tag = Maybe_462_Just_t, .stuff = { .Maybe_462_Just_s = { .field0 = field0 } } };
};

static  struct Slice_12   or_dash_else461 (    struct Maybe_462  self1732 ,    struct Slice_12  alt1734 ) {
    struct Maybe_462  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_462_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_462_Just_t ) {
            return ( dref1735 .stuff .Maybe_462_Just_s .field0 );
        }
    }
}

static  struct Maybe_462   fmap_dash_maybe463 (    struct Maybe_171  x1275 ,    struct Slice_12 (*  fun1277 )(    struct List_11  ) ) {
    struct Maybe_171  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_171_None_t ) {
        return ( (struct Maybe_462) { .tag = Maybe_462_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_171_Just_t ) {
            return ( ( Maybe_462_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_171   try_dash_get464 (    struct List_8 *  list2016 ,    size_t  i2018 ) {
    if ( (  cmp173 ( (  i2018 ) , ( ( * (  list2016 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
    }
    return ( ( Maybe_171_Just ) ( ( (  get314 ) ( (  list2016 ) ,  (  i2018 ) ) ) ) );
}

struct StrConcat_469 {
    struct StrView_21  field0;
    struct StrView_21  field1;
};

static struct StrConcat_469 StrConcat_469_StrConcat (  struct StrView_21  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_469 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_468 {
    struct StrConcat_469  field0;
    struct Char_57  field1;
};

static struct StrConcat_468 StrConcat_468_StrConcat (  struct StrConcat_469  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_468 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str470 (    struct StrConcat_469  self1503 ) {
    struct StrConcat_469  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str184 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str184 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str467 (    struct StrConcat_468  self1503 ) {
    struct StrConcat_468  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str470 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str192 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   assert466 (    bool  cond1718 ,    struct StrView_21  msg1720 ) {
    if ( ( ! (  cond1718 ) ) ) {
        ( (  print_dash_str467 ) ( ( ( StrConcat_468_StrConcat ) ( ( ( StrConcat_469_StrConcat ) ( ( (  from_dash_string209 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1720 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    }
    return ( Unit_7_Unit );
}

struct Drop_474 {
    struct Zip_253  field0;
    size_t  field1;
};

static struct Drop_474 Drop_474_Drop (  struct Zip_253  field0 ,  size_t  field1 ) {
    return ( struct Drop_474 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env475 {
    ;
    size_t  num_dash_elems2067;
    ;
    ;
    struct List_8 *  list2062;
};

struct envunion476 {
    enum Unit_7  (*fun) (  struct env475*  ,    struct Tuple2_237  );
    struct env475 env;
};

static  struct Drop_474   into_dash_iter478 (    struct Drop_474  self845 ) {
    return (  self845 );
}

static  struct Maybe_258   next479 (    struct Drop_474 *  dref847 ) {
    while ( (  cmp173 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next259 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub293 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next259 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_7   for_dash_each473 (    struct Drop_474  iterable1074 ,   struct envunion476  fun1076 ) {
    struct Drop_474  temp477 = ( (  into_dash_iter478 ) ( (  iterable1074 ) ) );
    struct Drop_474 *  it1077 = ( &temp477 );
    while ( ( true ) ) {
        struct Maybe_258  dref1078 = ( (  next479 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_258_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_258_Just_t ) {
                struct envunion476  temp480 = (  fun1076 );
                ( temp480.fun ( &temp480.env ,  ( dref1078 .stuff .Maybe_258_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Drop_474   drop481 (    struct Zip_253  iterable852 ,    size_t  i854 ) {
    struct Zip_253  it855 = ( (  into_dash_iter257 ) ( (  iterable852 ) ) );
    return ( ( Drop_474_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct Slice_10   subslice484 (    struct Slice_10  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct List_11 *  begin_dash_ptr1787 = ( (  offset_dash_ptr218 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp173 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp173 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_10) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub293 ( ( (  min320 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_10) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_254   into_dash_iter483 (    struct List_8  self2028 ) {
    return ( (  into_dash_iter266 ) ( ( (  subslice484 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

static  struct Zip_253   zip482 (    struct List_8  left922 ,    struct FromIter_255  right924 ) {
    struct SliceIter_254  left_dash_it925 = ( (  into_dash_iter483 ) ( (  left922 ) ) );
    struct FromIter_255  right_dash_it926 = ( (  into_dash_iter267 ) ( (  right924 ) ) );
    return ( (struct Zip_253) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   lam485 (   struct env475* env ,    struct Tuple2_237  dref2068 ) {
    return ( (  set322 ) ( ( env->list2062 ) ,  (  op_dash_sub293 ( ( (  i32_dash_size251 ) ( ( dref2068 .field1 ) ) ) , ( env->num_dash_elems2067 ) ) ) ,  ( dref2068 .field0 ) ) );
}

struct env488 {
    ;
    struct Slice_10  dest1853;
    ;
};

struct envunion489 {
    enum Unit_7  (*fun) (  struct env488*  ,    struct Tuple2_237  );
    struct env488 env;
};

static  enum Unit_7   for_dash_each487 (    struct Zip_253  iterable1074 ,   struct envunion489  fun1076 ) {
    struct Zip_253  temp490 = ( (  into_dash_iter257 ) ( (  iterable1074 ) ) );
    struct Zip_253 *  it1077 = ( &temp490 );
    while ( ( true ) ) {
        struct Maybe_258  dref1078 = ( (  next259 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_258_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_258_Just_t ) {
                struct envunion489  temp491 = (  fun1076 );
                ( temp491.fun ( &temp491.env ,  ( dref1078 .stuff .Maybe_258_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam492 (   struct env488* env ,    struct Tuple2_237  dref1854 ) {
    return ( (  set239 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size251 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_7   copy_dash_to486 (    struct Slice_10  src1851 ,    struct Slice_10  dest1853 ) {
    if ( (  cmp173 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic442 ) ( ( ( StrConcat_443_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string209 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string209 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env488 envinst488 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each487 ) ( ( (  zip265 ) ( (  src1851 ) ,  ( (  from268 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  ( (struct envunion489){ .fun = (  enum Unit_7  (*) (  struct env488*  ,    struct Tuple2_237  ) )lam492 , .env =  envinst488 } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   remove_dash_range472 (   struct env33* env ,    struct List_8 *  list2062 ,    size_t  from2064 ,    size_t  to_dash_excl2066 ) {
    if ( (  cmp173 ( (  to_dash_excl2066 ) , (  from2064 ) ) == 0 ) ) {
        ( (  panic417 ) ( ( ( StrConcat_418_StrConcat ) ( ( ( StrConcat_419_StrConcat ) ( ( ( StrConcat_420_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp173 ( (  from2064 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic241 ) ( ( ( StrConcat_242_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_string209 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp173 ( (  to_dash_excl2066 ) , ( ( * (  list2062 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic241 ) ( ( ( StrConcat_242_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_string209 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2067 = (  op_dash_sub293 ( (  to_dash_excl2066 ) , (  from2064 ) ) );
    struct env475 envinst475 = {
        .num_dash_elems2067 =  num_dash_elems2067 ,
        .list2062 =  list2062 ,
    };
    ( (  for_dash_each473 ) ( ( (  drop481 ) ( ( (  zip482 ) ( ( * (  list2062 ) ) ,  ( (  from268 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  op_dash_add221 ( (  from2064 ) , (  num_dash_elems2067 ) ) ) ) ) ,  ( (struct envunion476){ .fun = (  enum Unit_7  (*) (  struct env475*  ,    struct Tuple2_237  ) )lam485 , .env =  envinst475 } ) ) );
    (*  list2062 ) .f_count = (  op_dash_sub293 ( ( ( * (  list2062 ) ) .f_count ) , (  num_dash_elems2067 ) ) );
    size_t  capacity2071 = ( ( ( * (  list2062 ) ) .f_elements ) .f_count );
    if ( (  cmp173 ( (  op_dash_mul234 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  capacity2071 ) ) == 0 ) ) {
        if ( (  eq228 ( ( ( * (  list2062 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free269 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
            (*  list2062 ) .f_elements = ( (  empty157 ) ( ) );
            return ( Unit_7_Unit );
        }
        size_t  new_dash_size2072 = (  op_dash_mul234 ( (  op_dash_add221 ( (  op_dash_div200 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2038 ) ) );
        struct Slice_10  new_dash_slice2073 = ( (  allocate229 ) ( ( ( * (  list2062 ) ) .f_al ) ,  (  new_dash_size2072 ) ) );
        ( (  copy_dash_to486 ) ( ( (  subslice484 ) ( ( ( * (  list2062 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  (  new_dash_slice2073 ) ) );
        ( (  free269 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
        (*  list2062 ) .f_elements = (  new_dash_slice2073 );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   change_dash_no_dash_action303 (   struct env85* env ,    struct TextBuf_87 *  self3669 ,    struct Pos_20  from_dash_pos3671 ,    struct Pos_20  to_dash_pos3673 ,    struct StrView_21  bytes3675 ) {
    struct Pos_20  from3676 = ( (  min304 ) ( (  from_dash_pos3671 ) ,  (  to_dash_pos3673 ) ) );
    struct Pos_20  to3677 = ( (  max307 ) ( (  from_dash_pos3671 ) ,  (  to_dash_pos3673 ) ) );
    if ( (  eq308 ( (  to3677 ) , (  from3676 ) ) ) ) {
        enum CAllocator_9  al3678 = ( ( ( * (  self3669 ) ) .f_buf ) .f_al );
        if ( ( (  eq228 ( ( (  size310 ) ( ( & ( ( * (  self3669 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size251 ) ( ( (  from3676 ) .f_line ) ) ) ) ) && (  eq309 ( ( (  from3676 ) .f_bi ) , (  from_dash_integral48 ( 0 ) ) ) ) ) ) {
            struct envunion92  temp311 = ( (struct envunion92){ .fun = (  enum Unit_7  (*) (  struct env5*  ,    struct List_8 *  ,    struct List_11  ) )add225 , .env =  env->envinst5 } );
            ( temp311.fun ( &temp311.env ,  ( & ( ( * (  self3669 ) ) .f_buf ) ) ,  ( (  mk272 ) ( (  al3678 ) ) ) ) );
        }
        struct envunion86  temp312 = ( (struct envunion86){ .fun = (  int32_t  (*) (  struct env81*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct StrView_21  ) )add_dash_to_dash_spot313 , .env =  env->envinst81 } );
        ( temp312.fun ( &temp312.env ,  (  self3669 ) ,  (  from3676 ) ,  (  bytes3675 ) ) );
    } else {
        struct List_8 *  lines_dash_buf3679 = ( & ( ( * (  self3669 ) ) .f_buf ) );
        struct List_11 *  first_dash_line3680 = ( (  get_dash_ptr315 ) ( (  lines_dash_buf3679 ) ,  ( (  i32_dash_size251 ) ( ( (  from3676 ) .f_line ) ) ) ) );
        if ( ( (  eq309 ( ( (  from3676 ) .f_line ) , ( (  to3677 ) .f_line ) ) ) && (  cmp306 ( ( (  to3677 ) .f_bi ) , (  op_dash_add263 ( ( (  size_dash_i32185 ) ( ( (  size414 ) ( (  first_dash_line3680 ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion90  temp415 = ( (struct envunion90){ .fun = (  enum Unit_7  (*) (  struct env32*  ,    struct List_11 *  ,    size_t  ,    size_t  ) )remove_dash_range416 , .env =  env->envinst32 } );
            ( temp415.fun ( &temp415.env ,  (  first_dash_line3680 ) ,  ( (  i32_dash_size251 ) ( ( (  from3676 ) .f_bi ) ) ) ,  ( (  i32_dash_size251 ) ( ( (  to3677 ) .f_bi ) ) ) ) );
            struct envunion456  temp455 = ( (struct envunion456){ .fun = (  int32_t  (*) (  struct env81*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct StrView_21  ) )add_dash_to_dash_spot313 , .env =  env->envinst81 } );
            ( temp455.fun ( &temp455.env ,  (  self3669 ) ,  (  from3676 ) ,  (  bytes3675 ) ) );
        } else {
            ( (  trim457 ) ( (  first_dash_line3680 ) ,  ( (  i32_dash_size251 ) ( ( (  from3676 ) .f_bi ) ) ) ) );
            struct List_11 *  last_dash_line3681 = ( (  get_dash_ptr315 ) ( (  lines_dash_buf3679 ) ,  ( (  i32_dash_size251 ) ( ( (  to3677 ) .f_line ) ) ) ) );
            to3677 .f_bi = ( (  min458 ) ( ( (  to3677 ) .f_bi ) ,  (  op_dash_add263 ( ( (  size_dash_i32185 ) ( ( (  size414 ) ( (  last_dash_line3681 ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
            if ( (  eq309 ( ( (  to3677 ) .f_bi ) , (  op_dash_add263 ( ( (  size_dash_i32185 ) ( ( (  size414 ) ( (  last_dash_line3681 ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ) {
                to3677 .f_line = (  op_dash_add263 ( ( (  to3677 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) );
                to3677 .f_bi = (  from_dash_integral48 ( 0 ) );
            }
            struct envunion460  temp459 = ( (struct envunion460){ .fun = (  int32_t  (*) (  struct env81*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct StrView_21  ) )add_dash_to_dash_spot313 , .env =  env->envinst81 } );
            int32_t  lines_dash_added3682 = ( temp459.fun ( &temp459.env ,  (  self3669 ) ,  (  from3676 ) ,  (  bytes3675 ) ) );
            to3677 .f_line = (  op_dash_add263 ( ( (  to3677 ) .f_line ) , (  lines_dash_added3682 ) ) );
            from3676 .f_line = (  op_dash_add263 ( ( (  from3676 ) .f_line ) , (  lines_dash_added3682 ) ) );
            struct Slice_12  last_dash_line3683 = ( (  or_dash_else461 ) ( ( (  fmap_dash_maybe463 ) ( ( (  try_dash_get464 ) ( (  lines_dash_buf3679 ) ,  ( (  i32_dash_size251 ) ( ( (  to3677 ) .f_line ) ) ) ) ) ,  (  to_dash_slice321 ) ) ) ,  ( (  empty273 ) ( ) ) ) );
            struct envunion89  temp465 = ( (struct envunion89){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all327 , .env =  env->envinst40 } );
            ( temp465.fun ( &temp465.env ,  (  first_dash_line3680 ) ,  ( (  from316 ) ( (  last_dash_line3683 ) ,  ( (  i32_dash_size251 ) ( ( (  to3677 ) .f_bi ) ) ) ) ) ) );
            ( (  assert466 ) ( (  cmp306 ( ( (  to3677 ) .f_line ) , ( (  from3676 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string209 ) ( ( "there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion91  temp471 = ( (struct envunion91){ .fun = (  enum Unit_7  (*) (  struct env33*  ,    struct List_8 *  ,    size_t  ,    size_t  ) )remove_dash_range472 , .env =  env->envinst33 } );
            ( temp471.fun ( &temp471.env ,  ( & ( ( * (  self3669 ) ) .f_buf ) ) ,  ( (  i32_dash_size251 ) ( (  op_dash_add263 ( ( (  from3676 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  op_dash_add221 ( ( (  i32_dash_size251 ) ( ( (  to3677 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_7_Unit );
}

struct StrConcat_496 {
    struct StrView_21  field0;
    const char*  field1;
};

static struct StrConcat_496 StrConcat_496_StrConcat (  struct StrView_21  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_496 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_495 {
    struct StrConcat_496  field0;
    struct Char_57  field1;
};

static struct StrConcat_495 StrConcat_495_StrConcat (  struct StrConcat_496  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_495 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_500 {
    struct StrView_21  field0;
    struct StrConcat_495  field1;
};

static struct StrConcat_500 StrConcat_500_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_495  field1 ) {
    return ( struct StrConcat_500 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_499 {
    struct StrConcat_500  field0;
    struct Char_57  field1;
};

static struct StrConcat_499 StrConcat_499_StrConcat (  struct StrConcat_500  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_499 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str504 (    const char*  self1398 ) {
    ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%s" ) ,  ( 2 ) ) ) ,  (  self1398 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str503 (    struct StrConcat_496  self1503 ) {
    struct StrConcat_496  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str184 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str504 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str502 (    struct StrConcat_495  self1503 ) {
    struct StrConcat_495  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str503 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str192 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str501 (    struct StrConcat_500  self1503 ) {
    struct StrConcat_500  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str184 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str502 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str498 (    struct StrConcat_499  self1503 ) {
    struct StrConcat_499  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str501 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str192 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic497 (    struct StrConcat_495  errmsg1712 ) {
    ( (  print_dash_str498 ) ( ( ( StrConcat_499_StrConcat ) ( ( ( StrConcat_500_StrConcat ) ( ( (  from_dash_string209 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct StrView_21   undefined505 (  ) {
    struct StrView_21  temp506;
    return (  temp506 );
}

static  struct StrView_21   or_dash_fail494 (    struct Maybe_131  x1725 ,    struct StrConcat_495  errmsg1727 ) {
    struct Maybe_131  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_131_None_t ) {
        ( (  panic497 ) ( (  errmsg1727 ) ) );
        return ( (  undefined505 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_131_Just_t ) {
            return ( dref1728 .stuff .Maybe_131_Just_s .field0 );
        }
    }
}

static  const char*   from_dash_charlike508 (    uint8_t *  ptr73 ,    size_t  dref74 ) {
    return ( ( (const char* ) (  ptr73 ) ) );
}

static  void *   cast_dash_ptr513 (    FILE * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of514 (    FILE *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  FILE *   zeroed511 (  ) {
    FILE *  temp512;
    FILE *  x570 = (  temp512 );
    ( ( memset ) ( ( (  cast_dash_ptr513 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of514 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  FILE *   null_dash_ptr510 (  ) {
    return ( (  zeroed511 ) ( ) );
}

static  bool   is_dash_ptr_dash_null509 (    FILE *  p580 ) {
    return ( (  p580 ) == ( (  null_dash_ptr510 ) ( ) ) );
}

static  int32_t   seek_dash_end515 (  ) {
    return (  from_dash_integral48 ( 2 ) );
}

static  int32_t   seek_dash_set516 (  ) {
    return (  from_dash_integral48 ( 0 ) );
}

static  struct Char_57   nullchar517 (  ) {
    return ( (  from_dash_charlike210 ) ( ( "\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_131   try_dash_read_dash_contents507 (    const char*  filename2933 ,    enum CAllocator_9  al2935 ) {
    FILE *  file2936 = ( ( fopen ) ( (  filename2933 ) ,  ( (  from_dash_charlike508 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null509 ) ( (  file2936 ) ) ) ) {
        return ( (struct Maybe_131) { .tag = Maybe_131_None_t } );
    }
    ( ( fseek ) ( (  file2936 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  seek_dash_end515 ) ( ) ) ) );
    int32_t  file_dash_size2937 = ( ( ftell ) ( (  file2936 ) ) );
    ( ( fseek ) ( (  file2936 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  seek_dash_set516 ) ( ) ) ) );
    struct Slice_12  file_dash_buf2938 = ( ( (  allocate342 ) ( (  al2935 ) ,  (  op_dash_add221 ( ( (  i32_dash_size251 ) ( (  file_dash_size2937 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2938 ) .f_ptr ) ,  (  file_dash_size2937 ) ,  (  from_dash_integral48 ( 1 ) ) ,  (  file2936 ) ) );
    ( (  set351 ) ( (  file_dash_buf2938 ) ,  ( (  i32_dash_size251 ) ( (  file_dash_size2937 ) ) ) ,  ( (  char_dash_u8373 ) ( ( (  nullchar517 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2936 ) ) );
    struct StrView_21  str2939 = ( (struct StrView_21) { .f_contents = ( (  subslice317 ) ( (  file_dash_buf2938 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub293 ( ( (  file_dash_buf2938 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_131_Just ) ( (  str2939 ) ) );
}

static  struct StrView_21   read_dash_contents493 (    const char*  filename2942 ,    enum CAllocator_9  al2944 ) {
    return ( (  or_dash_fail494 ) ( ( (  try_dash_read_dash_contents507 ) ( (  filename2942 ) ,  (  al2944 ) ) ) ,  ( ( StrConcat_495_StrConcat ) ( ( ( StrConcat_496_StrConcat ) ( ( (  from_dash_string209 ) ( ( "could not open file " ) ,  ( 20 ) ) ) ,  (  filename2942 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "!" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Pane_128   mk519 (    enum CAllocator_9  al3811 ,    struct TextBuf_87 *  buf3813 ) {
    return ( (struct Pane_128) { .f_buf = (  buf3813 ) , .f_cursor = ( (  mk287 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral48 ( 0 ) ) , .f_sel = ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) , .f_mode = ( Mode_129_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_130) { .f_screen_dash_top = (  from_dash_integral48 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral48 ( 0 ) ) } ) } );
}

struct envunion522 {
    struct Tui_73  (*fun) (  struct env69*  );
    struct env69 env;
};

static  struct Termios_75   undefined526 (  ) {
    struct Termios_75  temp527;
    return (  temp527 );
}

static  int32_t   stdin_dash_fileno528 (  ) {
    return (  from_dash_integral48 ( 0 ) );
}

static  struct termios *   cast_dash_ptr529 (    struct Termios_75 *  p359 ) {
    return ( (struct termios * ) (  p359 ) );
}

static  uint32_t   u32_dash_and530 (    uint32_t  l2832 ,    uint32_t  r2834 ) {
    return ( (  l2832 ) & (  r2834 ) );
}

static  uint32_t   u32_dash_neg531 (    uint32_t  l2837 ) {
    return ( ~ (  l2837 ) );
}

struct Array_533 {
    uint32_t _arr [4];
};

struct ArrayIter_535 {
    struct Array_533  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_535   into_dash_iter536 (    struct Array_533  self2322 ) {
    return ( (struct ArrayIter_535) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_537 {
    enum {
        Maybe_537_None_t,
        Maybe_537_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_537_Just_s;
    } stuff;
};

static struct Maybe_537 Maybe_537_Just (  uint32_t  field0 ) {
    return ( struct Maybe_537 ) { .tag = Maybe_537_Just_t, .stuff = { .Maybe_537_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr541 (    struct Array_533 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   offset_dash_ptr542 (    uint32_t *  x338 ,    int64_t  count340 ) {
    uint32_t  temp543;
    return ( (uint32_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul219 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp543 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr540 (    struct Array_533 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp173 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i2253 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic177 ) ( ( ( StrConcat_178_StrConcat ) ( ( ( StrConcat_179_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string209 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2254 = ( ( (  cast_dash_ptr541 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr542 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  uint32_t   get539 (    struct Array_533 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr540 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  struct Maybe_537   next538 (    struct ArrayIter_535 *  self2329 ) {
    if ( (  cmp173 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_537) { .tag = Maybe_537_None_t } );
    }
    uint32_t  e2331 = ( (  get539 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add221 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_537_Just ) ( (  e2331 ) ) );
}

static  uint32_t   reduce534 (    struct Array_533  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_535  it1099 = ( (  into_dash_iter536 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_537  dref1100 = ( (  next538 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_537_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_537_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_537_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp544 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp544);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp545;
    return (  temp545 );
}

static  uint32_t   u32_dash_or546 (    uint32_t  l2824 ,    uint32_t  r2826 ) {
    return ( (  l2824 ) | (  r2826 ) );
}

static  uint32_t   u32_dash_ors532 (    struct Array_533  vals2829 ) {
    return ( (  reduce534 ) ( (  vals2829 ) ,  (  from_dash_integral205 ( 0 ) ) ,  (  u32_dash_or546 ) ) );
}

static  struct Array_533   from_dash_listlike547 (    struct Array_533  self330 ) {
    return (  self330 );
}

static  uint32_t   echo548 (  ) {
    return (  from_dash_integral205 ( 8 ) );
}

static  uint32_t   icanon549 (  ) {
    return (  from_dash_integral205 ( 2 ) );
}

static  uint32_t   isig550 (  ) {
    return (  from_dash_integral205 ( 1 ) );
}

static  uint32_t   iexten551 (  ) {
    return (  from_dash_integral205 ( 32768 ) );
}

struct Array_553 {
    uint32_t _arr [5];
};

struct ArrayIter_555 {
    struct Array_553  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_555   into_dash_iter556 (    struct Array_553  self2322 ) {
    return ( (struct ArrayIter_555) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr560 (    struct Array_553 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr559 (    struct Array_553 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp173 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i2253 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic177 ) ( ( ( StrConcat_178_StrConcat ) ( ( ( StrConcat_179_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string209 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2254 = ( ( (  cast_dash_ptr560 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr542 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  uint32_t   get558 (    struct Array_553 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr559 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  struct Maybe_537   next557 (    struct ArrayIter_555 *  self2329 ) {
    if ( (  cmp173 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_537) { .tag = Maybe_537_None_t } );
    }
    uint32_t  e2331 = ( (  get558 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add221 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_537_Just ) ( (  e2331 ) ) );
}

static  uint32_t   reduce554 (    struct Array_553  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_555  it1099 = ( (  into_dash_iter556 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_537  dref1100 = ( (  next557 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_537_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_537_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_537_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp561 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp561);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp562;
    return (  temp562 );
}

static  uint32_t   u32_dash_ors552 (    struct Array_553  vals2829 ) {
    return ( (  reduce554 ) ( (  vals2829 ) ,  (  from_dash_integral205 ( 0 ) ) ,  (  u32_dash_or546 ) ) );
}

static  struct Array_553   from_dash_listlike563 (    struct Array_553  self330 ) {
    return (  self330 );
}

static  uint32_t   brkint564 (  ) {
    return (  from_dash_integral205 ( 2 ) );
}

static  uint32_t   icrnl565 (  ) {
    return (  from_dash_integral205 ( 256 ) );
}

static  uint32_t   inpck566 (  ) {
    return (  from_dash_integral205 ( 16 ) );
}

static  uint32_t   istrip567 (  ) {
    return (  from_dash_integral205 ( 32 ) );
}

static  uint32_t   ixon568 (  ) {
    return (  from_dash_integral205 ( 1024 ) );
}

struct Array_570 {
    uint32_t _arr [1];
};

struct ArrayIter_572 {
    struct Array_570  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_572   into_dash_iter573 (    struct Array_570  self2322 ) {
    return ( (struct ArrayIter_572) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr577 (    struct Array_570 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr576 (    struct Array_570 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp173 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i2253 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic177 ) ( ( ( StrConcat_178_StrConcat ) ( ( ( StrConcat_179_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string209 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2254 = ( ( (  cast_dash_ptr577 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr542 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  uint32_t   get575 (    struct Array_570 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr576 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  struct Maybe_537   next574 (    struct ArrayIter_572 *  self2329 ) {
    if ( (  cmp173 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_537) { .tag = Maybe_537_None_t } );
    }
    uint32_t  e2331 = ( (  get575 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add221 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_537_Just ) ( (  e2331 ) ) );
}

static  uint32_t   reduce571 (    struct Array_570  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_572  it1099 = ( (  into_dash_iter573 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_537  dref1100 = ( (  next574 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_537_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_537_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_537_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp578 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp578);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp579;
    return (  temp579 );
}

static  uint32_t   u32_dash_ors569 (    struct Array_570  vals2829 ) {
    return ( (  reduce571 ) ( (  vals2829 ) ,  (  from_dash_integral205 ( 0 ) ) ,  (  u32_dash_or546 ) ) );
}

static  struct Array_570   from_dash_listlike580 (    struct Array_570  self330 ) {
    return (  self330 );
}

static  uint32_t   opost581 (  ) {
    return (  from_dash_integral205 ( 1 ) );
}

static  uint32_t   cs8582 (  ) {
    return (  from_dash_integral205 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr585 (    struct Array_76 *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  uint8_t *   get_dash_ptr584 (    struct Array_76 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp173 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i2253 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic177 ) ( ( ( StrConcat_178_StrConcat ) ( ( ( StrConcat_179_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string209 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2254 = ( ( (  cast_dash_ptr585 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr318 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  enum Unit_7   set583 (    struct Array_76 *  arr2263 ,    size_t  i2266 ,    uint8_t  e2268 ) {
    uint8_t *  p2269 = ( (  get_dash_ptr584 ) ( (  arr2263 ) ,  (  i2266 ) ) );
    (*  p2269 ) = (  e2268 );
    return ( Unit_7_Unit );
}

static  size_t   vmin586 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime587 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush588 (  ) {
    return (  from_dash_integral48 ( 2 ) );
}

static  struct Termios_75   enable_dash_raw_dash_mode524 (  ) {
    struct Termios_75  temp525 = ( (  undefined526 ) ( ) );
    struct Termios_75 *  orig_dash_termios3291 = ( &temp525 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno528 ) ( ) ) ,  ( (  cast_dash_ptr529 ) ( (  orig_dash_termios3291 ) ) ) ) );
    struct Termios_75  raw3292 = ( * (  orig_dash_termios3291 ) );
    raw3292 .f_c_dash_lflag = ( (  u32_dash_and530 ) ( ( (  raw3292 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg531 ) ( ( (  u32_dash_ors532 ) ( ( (  from_dash_listlike547 ) ( ( (struct Array_533) { ._arr = { ( (  echo548 ) ( ) ) , ( (  icanon549 ) ( ) ) , ( (  isig550 ) ( ) ) , ( ( (  iexten551 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3292 .f_c_dash_iflag = ( (  u32_dash_and530 ) ( ( (  raw3292 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg531 ) ( ( (  u32_dash_ors552 ) ( ( (  from_dash_listlike563 ) ( ( (struct Array_553) { ._arr = { ( (  brkint564 ) ( ) ) , ( (  icrnl565 ) ( ) ) , ( (  inpck566 ) ( ) ) , ( (  istrip567 ) ( ) ) , ( ( (  ixon568 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3292 .f_c_dash_oflag = ( (  u32_dash_and530 ) ( ( (  raw3292 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg531 ) ( ( (  u32_dash_ors569 ) ( ( (  from_dash_listlike580 ) ( ( (struct Array_570) { ._arr = { ( ( (  opost581 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3292 .f_c_dash_cflag = ( (  u32_dash_or546 ) ( ( (  raw3292 ) .f_c_dash_cflag ) ,  ( (  cs8582 ) ( ) ) ) );
    ( (  set583 ) ( ( & ( (  raw3292 ) .f_c_dash_cc ) ) ,  ( (  vmin586 ) ( ) ) ,  (  from_dash_integral201 ( 0 ) ) ) );
    ( (  set583 ) ( ( & ( (  raw3292 ) .f_c_dash_cc ) ) ,  ( (  vtime587 ) ( ) ) ,  (  from_dash_integral201 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno528 ) ( ) ) ,  ( (  tcsa_dash_flush588 ) ( ) ) ,  ( (  cast_dash_ptr529 ) ( ( & (  raw3292 ) ) ) ) ) );
    return ( * (  orig_dash_termios3291 ) );
}

struct StrViewIter_592 {
    struct StrView_21  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_592   into_dash_iter594 (    struct StrViewIter_592  self1371 ) {
    return (  self1371 );
}

struct Maybe_595 {
    enum {
        Maybe_595_None_t,
        Maybe_595_Just_t,
    } tag;
    union {
        struct {
            struct Char_57  field0;
        } Maybe_595_Just_s;
    } stuff;
};

static struct Maybe_595 Maybe_595_Just (  struct Char_57  field0 ) {
    return ( struct Maybe_595 ) { .tag = Maybe_595_Just_t, .stuff = { .Maybe_595_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_595   next596 (    struct StrViewIter_592 *  self1374 ) {
    if ( (  cmp173 ( ( ( * (  self1374 ) ) .f_i ) , ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
    }
    uint8_t *  char_dash_ptr1375 = ( ( (  offset_dash_ptr318 ) ( ( (  cast211 ) ( ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64250 ) ( ( ( * (  self1374 ) ) .f_i ) ) ) ) ) );
    struct Char_57  char1376 = ( (  scan_dash_from_dash_mem212 ) ( (  char_dash_ptr1375 ) ) );
    (*  self1374 ) .f_i = (  op_dash_add221 ( ( ( * (  self1374 ) ) .f_i ) , ( (  char1376 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_595_Just ) ( (  char1376 ) ) );
}

static  enum Unit_7   for_dash_each591 (    struct StrViewIter_592  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrViewIter_592  temp593 = ( (  into_dash_iter594 ) ( (  iterable1074 ) ) );
    struct StrViewIter_592 *  it1077 = ( &temp593 );
    while ( ( true ) ) {
        struct Maybe_595  dref1078 = ( (  next596 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_595_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_595_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_595_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrViewIter_592   into_dash_iter598 (    struct StrView_21  self1368 ) {
    return ( (struct StrViewIter_592) { .f_ds = (  self1368 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_592   chars597 (    struct StrView_21  self1382 ) {
    return ( (  into_dash_iter598 ) ( (  self1382 ) ) );
}

static  enum Unit_7   print590 (    struct StrView_21  s2563 ) {
    ( (  for_dash_each591 ) ( ( (  chars597 ) ( (  s2563 ) ) ) ,  (  printf_dash_char193 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   hide_dash_cursor589 (  ) {
    ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   reset_dash_colors599 (  ) {
    ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   clear_dash_screen600 (  ) {
    ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   enable_dash_mouse601 (  ) {
    ( (  print_dash_str184 ) ( ( (  from_dash_string209 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   flush_dash_stdout602 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr510 ) ( ) ) ) );
    return ( Unit_7_Unit );
}

static  bool   ptr_dash_eq606 (    enum Unit_7 *  l586 ,    enum Unit_7 *  r588 ) {
    return ( (  l586 ) == (  r588 ) );
}

static  enum Unit_7 *   cast607 (    const char*  x356 ) {
    return ( (enum Unit_7 * ) (  x356 ) );
}

static  void *   cast_dash_ptr611 (    enum Unit_7 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of612 (    enum Unit_7 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  enum Unit_7 *   zeroed609 (  ) {
    enum Unit_7 *  temp610;
    enum Unit_7 *  x570 = (  temp610 );
    ( ( memset ) ( ( (  cast_dash_ptr611 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of612 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  enum Unit_7 *   null_dash_ptr608 (  ) {
    return ( (  zeroed609 ) ( ) );
}

static  struct Maybe_297   from_dash_nullable_dash_c_dash_str605 (    const char*  s591 ) {
    if ( ( (  ptr_dash_eq606 ) ( ( (  cast607 ) ( (  s591 ) ) ) ,  ( ( (  null_dash_ptr608 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    } else {
        return ( ( Maybe_297_Just ) ( (  s591 ) ) );
    }
}

static  struct Maybe_297   get604 (    const char*  s2596 ) {
    return ( (  from_dash_nullable_dash_c_dash_str605 ) ( ( ( getenv ) ( (  s2596 ) ) ) ) );
}

static  bool   eq613 (    const char*  l1691 ,    const char*  r1693 ) {
    return (  eq309 ( ( ( strcmp ) ( (  l1691 ) ,  (  r1693 ) ) ) , (  from_dash_integral48 ( 0 ) ) ) );
}

static  enum ColorPalette_74   query_dash_palette603 (  ) {
    struct Maybe_297  colorterm2597 = ( (  get604 ) ( ( (  from_dash_string49 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_297  dref2598 = (  colorterm2597 );
    if ( dref2598.tag == Maybe_297_Just_t ) {
        if ( ( (  eq613 ( ( dref2598 .stuff .Maybe_297_Just_s .field0 ) , ( (  from_dash_string49 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq613 ( ( dref2598 .stuff .Maybe_297_Just_s .field0 ) , ( (  from_dash_string49 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_74_PaletteRGB );
        }
    }
    else {
        if ( dref2598.tag == Maybe_297_None_t ) {
        }
    }
    struct Maybe_297  dref2600 = ( (  get604 ) ( ( (  from_dash_string49 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2600.tag == Maybe_297_Just_t ) {
        if ( (  eq613 ( ( dref2600 .stuff .Maybe_297_Just_s .field0 ) , ( (  from_dash_string49 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_74_Palette8 );
        }
    }
    else {
        if ( dref2600.tag == Maybe_297_None_t ) {
        }
    }
    return ( ColorPalette_74_Palette16 );
}

struct Tuple2_614 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_614 Tuple2_614_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_614 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_616 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr620 (    struct Winsize_616 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of621 (    struct Winsize_616  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Winsize_616   zeroed618 (  ) {
    struct Winsize_616  temp619;
    struct Winsize_616  x570 = (  temp619 );
    ( ( memset ) ( ( (  cast_dash_ptr620 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of621 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  int32_t   stdout_dash_fileno622 (  ) {
    return (  from_dash_integral48 ( 1 ) );
}

static  uint64_t   from_dash_integral624 (    int64_t  x64 ) {
    return ( (uint64_t ) (  x64 ) );
}

static  uint64_t   tiocgwinsz623 (  ) {
    return (  from_dash_integral624 ( 21523 ) );
}

static  int32_t   op_dash_neg625 (    int32_t  x227 ) {
    return ( (  from_dash_integral48 ( 0 ) ) - (  x227 ) );
}

static  bool   eq626 (    uint16_t  l121 ,    uint16_t  r123 ) {
    return ( (  l121 ) == (  r123 ) );
}

static  uint16_t   from_dash_integral627 (    int64_t  x55 ) {
    return ( (uint16_t ) (  x55 ) );
}

static  void *   cast_dash_ptr633 (    uint32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of634 (    uint32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint32_t   zeroed631 (  ) {
    uint32_t  temp632;
    uint32_t  x570 = (  temp632 );
    ( ( memset ) ( ( (  cast_dash_ptr633 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of634 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint16_t *   cast635 (    uint32_t *  x356 ) {
    return ( (uint16_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed629 (    uint16_t  x573 ) {
    uint32_t  temp630 = ( (  zeroed631 ) ( ) );
    uint32_t *  y574 = ( &temp630 );
    uint16_t *  yp575 = ( (  cast635 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u16_dash_u32628 (    uint16_t  x645 ) {
    return ( (  cast_dash_on_dash_zeroed629 ) ( (  x645 ) ) );
}

static  struct Tuple2_614   get_dash_dimensions615 (  ) {
    struct Winsize_616  temp617 = ( ( (  zeroed618 ) ( ) ) );
    struct Winsize_616 *  ws2585 = ( &temp617 );
    if ( ( (  eq309 ( ( ( ioctl ) ( ( (  stdout_dash_fileno622 ) ( ) ) ,  ( (  tiocgwinsz623 ) ( ) ) ,  (  ws2585 ) ) ) , (  op_dash_neg625 ( (  from_dash_integral48 ( 1 ) ) ) ) ) ) || (  eq626 ( ( ( * (  ws2585 ) ) .f_ws_dash_col ) , (  from_dash_integral627 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_614_Tuple2 ) ( (  from_dash_integral205 ( 80 ) ) ,  (  from_dash_integral205 ( 24 ) ) ) );
    }
    return ( ( Tuple2_614_Tuple2 ) ( ( (  u16_dash_u32628 ) ( ( ( * (  ws2585 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32628 ) ( ( ( * (  ws2585 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined638 (  ) {
    struct timespec  temp639;
    return (  temp639 );
}

static  int32_t   clock_dash_monotonic640 (  ) {
    return (  from_dash_integral48 ( 1 ) );
}

static  struct timespec   now636 (  ) {
    struct timespec  temp637 = ( (  undefined638 ) ( ) );
    struct timespec *  t3253 = ( &temp637 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic640 ) ( ) ) ,  (  t3253 ) ) );
    return ( * (  t3253 ) );
}

struct env641 {
    bool *  should_dash_resize3305;
};

struct envunion642 {
    enum Unit_7  (*fun) (  struct env641*  ,    int32_t  );
    struct env641 env;
};

struct envunion642  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig643 ) {
    struct envunion642  temp644 = _intr_sigarr [  __intr__sig643 ];
    temp644.fun ( &temp644.env ,  __intr__sig643 );
}

static  enum Unit_7  _intr_register_signal (    int32_t  __intr__sig645 ,   struct envunion642  __intr__fun646 ) {
    _intr_sigarr [  __intr__sig645 ] =  __intr__fun646;
    signal(  __intr__sig645 , _intr_sighandle );
    return Unit_7_Unit;
}

static  enum Unit_7   lam647 (   struct env641* env ,    int32_t  dref3312 ) {
    (* env->should_dash_resize3305 ) = ( true );
    return ( Unit_7_Unit );
}

static  uint32_t   fst648 (    struct Tuple2_614  dref1253 ) {
    return ( dref1253 .field0 );
}

static  uint32_t   snd649 (    struct Tuple2_614  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tui_73   mk523 (   struct env69* env ) {
    struct Termios_75  og_dash_termios3307 = ( (  enable_dash_raw_dash_mode524 ) ( ) );
    ( (  hide_dash_cursor589 ) ( ) );
    ( (  reset_dash_colors599 ) ( ) );
    ( (  clear_dash_screen600 ) ( ) );
    ( (  enable_dash_mouse601 ) ( ) );
    ( (  flush_dash_stdout602 ) ( ) );
    enum ColorPalette_74  palette3308 = ( (  query_dash_palette603 ) ( ) );
    struct Tuple2_614  dims3309 = ( (  get_dash_dimensions615 ) ( ) );
    uint32_t  fps3310 = (  from_dash_integral205 ( 60 ) );
    struct timespec  last_dash_sync3311 = ( (  now636 ) ( ) );
    struct env641 envinst641 = {
        .should_dash_resize3305 = env->should_dash_resize3305 ,
    };
    ( _intr_register_signal ( (  from_dash_integral48 ( 28 ) ) , ( (struct envunion642){ .fun = (  enum Unit_7  (*) (  struct env641*  ,    int32_t  ) )lam647 , .env =  envinst641 } ) ) );
    return ( (struct Tui_73) { .f_width = ( (  fst648 ) ( (  dims3309 ) ) ) , .f_height = ( (  snd649 ) ( (  dims3309 ) ) ) , .f_target_dash_fps = (  fps3310 ) , .f_actual_dash_fps = (  from_dash_integral205 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3311 ) , .f_fps_dash_ts = (  last_dash_sync3311 ) , .f_fps_dash_count = (  from_dash_integral205 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3307 ) , .f_palette = (  palette3308 ) , .f_should_dash_redraw = ( true ) } );
}

enum Color8_654 {
    Color8_654_Black8,
    Color8_654_Red8,
    Color8_654_Green8,
    Color8_654_Yellow8,
    Color8_654_Blue8,
    Color8_654_Magenta8,
    Color8_654_Cyan8,
    Color8_654_White8,
};

enum Color16_655 {
    Color16_655_Black16,
    Color16_655_Red16,
    Color16_655_Green16,
    Color16_655_Yellow16,
    Color16_655_Blue16,
    Color16_655_Magenta16,
    Color16_655_Cyan16,
    Color16_655_White16,
    Color16_655_BrightBlack16,
    Color16_655_BrightRed16,
    Color16_655_BrightGreen16,
    Color16_655_BrightYellow16,
    Color16_655_BrightBlue16,
    Color16_655_BrightMagenta16,
    Color16_655_BrightCyan16,
    Color16_655_BrightWhite16,
};

struct RGB_656 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_653 {
    enum {
        Color_653_ColorDefault_t,
        Color_653_Color8_t,
        Color_653_Color16_t,
        Color_653_Color256_t,
        Color_653_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_654  field0;
        } Color_653_Color8_s;
        struct {
            enum Color16_655  field0;
        } Color_653_Color16_s;
        struct {
            uint8_t  field0;
        } Color_653_Color256_s;
        struct {
            struct RGB_656  field0;
        } Color_653_ColorRGB_s;
    } stuff;
};

static struct Color_653 Color_653_Color8 (  enum Color8_654  field0 ) {
    return ( struct Color_653 ) { .tag = Color_653_Color8_t, .stuff = { .Color_653_Color8_s = { .field0 = field0 } } };
};

static struct Color_653 Color_653_Color16 (  enum Color16_655  field0 ) {
    return ( struct Color_653 ) { .tag = Color_653_Color16_t, .stuff = { .Color_653_Color16_s = { .field0 = field0 } } };
};

static struct Color_653 Color_653_Color256 (  uint8_t  field0 ) {
    return ( struct Color_653 ) { .tag = Color_653_Color256_t, .stuff = { .Color_653_Color256_s = { .field0 = field0 } } };
};

static struct Color_653 Color_653_ColorRGB (  struct RGB_656  field0 ) {
    return ( struct Color_653 ) { .tag = Color_653_ColorRGB_t, .stuff = { .Color_653_ColorRGB_s = { .field0 = field0 } } };
};

struct Cell_652 {
    struct Char_57  f_c;
    struct Color_653  f_fg;
    struct Color_653  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_651 {
    struct Cell_652 *  f_ptr;
    size_t  f_count;
};

struct Screen_650 {
    enum CAllocator_9  f_al;
    struct Tui_73 *  f_tui;
    struct Slice_651  f_current;
    struct Slice_651  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_653  f_default_dash_fg;
    struct Color_653  f_default_dash_bg;
};

struct TypeSize_661 {
    size_t  f_size;
};

static  struct TypeSize_661   get_dash_typesize660 (  ) {
    struct Cell_652  temp662;
    return ( (struct TypeSize_661) { .f_size = ( sizeof( ( (  temp662 ) ) ) ) } );
}

static  struct Cell_652 *   cast_dash_ptr663 (    void *  p359 ) {
    return ( (struct Cell_652 * ) (  p359 ) );
}

static  struct Slice_651   allocate659 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize660 ) ( ) ) ) .f_size );
    struct Cell_652 *  ptr1957 = ( (  cast_dash_ptr663 ) ( ( ( malloc ) ( (  op_dash_mul234 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_651) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

static  void *   cast_dash_ptr669 (    size_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of670 (    size_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  size_t   zeroed667 (  ) {
    size_t  temp668;
    size_t  x570 = (  temp668 );
    ( ( memset ) ( ( (  cast_dash_ptr669 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of670 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint32_t *   cast671 (    size_t *  x356 ) {
    return ( (uint32_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed665 (    uint32_t  x573 ) {
    size_t  temp666 = ( (  zeroed667 ) ( ) );
    size_t *  y574 = ( &temp666 );
    uint32_t *  yp575 = ( (  cast671 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u32_dash_size664 (    uint32_t  x651 ) {
    return ( (  cast_dash_on_dash_zeroed665 ) ( (  x651 ) ) );
}

static  uint32_t   op_dash_mul672 (    uint32_t  l240 ,    uint32_t  r242 ) {
    return ( (  l240 ) * (  r242 ) );
}

struct Range_675 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_675 Range_675_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_675 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env676 {
    struct Slice_651  s1905;
    struct Cell_652 (*  fun1907 )(    struct Cell_652  );
    ;
    ;
    ;
};

struct envunion677 {
    enum Unit_7  (*fun) (  struct env676*  ,    int32_t  );
    struct env676 env;
};

struct RangeIter_678 {
    struct Range_675  field0;
    int32_t  field1;
};

static struct RangeIter_678 RangeIter_678_RangeIter (  struct Range_675  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_678 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_678   into_dash_iter680 (    struct Range_675  dref883 ) {
    return ( ( RangeIter_678_RangeIter ) ( ( ( Range_675_Range ) ( ( dref883 .field0 ) ,  ( dref883 .field1 ) ) ) ,  ( dref883 .field0 ) ) );
}

static  struct Maybe_261   next681 (    struct RangeIter_678 *  self891 ) {
    struct RangeIter_678  dref892 = ( * (  self891 ) );
    if ( true ) {
        if ( (  cmp306 ( ( dref892 .field1 ) , ( dref892 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_261) { .tag = Maybe_261_None_t } );
        }
        struct Maybe_261  x896 = ( ( Maybe_261_Just ) ( ( dref892 .field1 ) ) );
        (*  self891 ) = ( ( RangeIter_678_RangeIter ) ( ( ( Range_675_Range ) ( ( dref892 .field0 .field0 ) ,  ( dref892 .field0 .field1 ) ) ) ,  (  op_dash_add263 ( ( dref892 .field1 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
        return (  x896 );
    }
}

static  enum Unit_7   for_dash_each674 (    struct Range_675  iterable1074 ,   struct envunion677  fun1076 ) {
    struct RangeIter_678  temp679 = ( (  into_dash_iter680 ) ( (  iterable1074 ) ) );
    struct RangeIter_678 *  it1077 = ( &temp679 );
    while ( ( true ) ) {
        struct Maybe_261  dref1078 = ( (  next681 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_261_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_261_Just_t ) {
                struct envunion677  temp682 = (  fun1076 );
                ( temp682.fun ( &temp682.env ,  ( dref1078 .stuff .Maybe_261_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Range_675   to683 (    int32_t  from874 ,    int32_t  to876 ) {
    return ( ( Range_675_Range ) ( (  from874 ) ,  (  to876 ) ) );
}

static  struct Cell_652 *   offset_dash_ptr687 (    struct Cell_652 *  x338 ,    int64_t  count340 ) {
    struct Cell_652  temp688;
    return ( (struct Cell_652 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul219 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp688 ) ) ) ) ) ) ) ) );
}

static  struct Cell_652 *   get_dash_ptr686 (    struct Slice_651  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp173 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic241 ) ( ( ( StrConcat_242_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string209 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_652 *  elem_dash_ptr1760 = ( (  offset_dash_ptr687 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set685 (    struct Slice_651  slice1774 ,    size_t  i1776 ,    struct Cell_652  x1778 ) {
    struct Cell_652 *  ep1779 = ( (  get_dash_ptr686 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

struct Maybe_692 {
    enum {
        Maybe_692_None_t,
        Maybe_692_Just_t,
    } tag;
    union {
        struct {
            struct Cell_652  field0;
        } Maybe_692_Just_s;
    } stuff;
};

static struct Maybe_692 Maybe_692_Just (  struct Cell_652  field0 ) {
    return ( struct Maybe_692 ) { .tag = Maybe_692_Just_t, .stuff = { .Maybe_692_Just_s = { .field0 = field0 } } };
};

static  struct Cell_652   undefined693 (  ) {
    struct Cell_652  temp694;
    return (  temp694 );
}

static  struct Cell_652   or_dash_fail691 (    struct Maybe_692  x1725 ,    struct StrConcat_242  errmsg1727 ) {
    struct Maybe_692  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_692_None_t ) {
        ( (  panic241 ) ( (  errmsg1727 ) ) );
        return ( (  undefined693 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_692_Just_t ) {
            return ( dref1728 .stuff .Maybe_692_Just_s .field0 );
        }
    }
}

static  struct Maybe_692   try_dash_get695 (    struct Slice_651  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp173 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_692) { .tag = Maybe_692_None_t } );
    }
    struct Cell_652 *  elem_dash_ptr1766 = ( (  offset_dash_ptr687 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_692_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  struct Cell_652   get690 (    struct Slice_651  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail691 ) ( ( (  try_dash_get695 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_242_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string209 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_652   elem_dash_get689 (    struct Slice_651  self1867 ,    size_t  idx1869 ) {
    return ( (  get690 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

static  enum Unit_7   lam684 (   struct env676* env ,    int32_t  i1909 ) {
    return ( (  set685 ) ( ( env->s1905 ) ,  ( (  i32_dash_size251 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get689 ( ( env->s1905 ) , ( (  i32_dash_size251 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_7   map673 (    struct Slice_651  s1905 ,    struct Cell_652 (*  fun1907 )(    struct Cell_652  ) ) {
    struct env676 envinst676 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each674 ) ( ( (  to683 ) ( (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_i32185 ) ( (  op_dash_sub293 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion677){ .fun = (  enum Unit_7  (*) (  struct env676*  ,    int32_t  ) )lam684 , .env =  envinst676 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Cell_652   default_dash_cell697 (  ) {
    return ( (struct Cell_652) { .f_c = ( (  from_dash_charlike210 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_653) { .tag = Color_653_ColorDefault_t } ) , .f_bg = ( (struct Color_653) { .tag = Color_653_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral48 ( 1 ) ) } );
}

static  struct Cell_652   lam696 (    struct Cell_652  dref3415 ) {
    return ( (  default_dash_cell697 ) ( ) );
}

struct env700 {
    struct Slice_651  s1905;
    struct Cell_652 (*  fun1907 )(    struct Cell_652  );
    ;
    ;
    ;
};

struct envunion701 {
    enum Unit_7  (*fun) (  struct env700*  ,    int32_t  );
    struct env700 env;
};

static  enum Unit_7   for_dash_each699 (    struct Range_675  iterable1074 ,   struct envunion701  fun1076 ) {
    struct RangeIter_678  temp702 = ( (  into_dash_iter680 ) ( (  iterable1074 ) ) );
    struct RangeIter_678 *  it1077 = ( &temp702 );
    while ( ( true ) ) {
        struct Maybe_261  dref1078 = ( (  next681 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_261_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_261_Just_t ) {
                struct envunion701  temp703 = (  fun1076 );
                ( temp703.fun ( &temp703.env ,  ( dref1078 .stuff .Maybe_261_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam704 (   struct env700* env ,    int32_t  i1909 ) {
    return ( (  set685 ) ( ( env->s1905 ) ,  ( (  i32_dash_size251 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get689 ( ( env->s1905 ) , ( (  i32_dash_size251 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_7   map698 (    struct Slice_651  s1905 ,    struct Cell_652 (*  fun1907 )(    struct Cell_652  ) ) {
    struct env700 envinst700 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each699 ) ( ( (  to683 ) ( (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_i32185 ) ( (  op_dash_sub293 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion701){ .fun = (  enum Unit_7  (*) (  struct env700*  ,    int32_t  ) )lam704 , .env =  envinst700 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Cell_652   lam705 (    struct Cell_652  dref3417 ) {
    return ( (  default_dash_cell697 ) ( ) );
}

static  struct Screen_650   mk_dash_screen658 (    struct Tui_73 *  tui3411 ,    enum CAllocator_9  al3413 ) {
    struct Slice_651  cur3414 = ( (  allocate659 ) ( (  al3413 ) ,  ( (  u32_dash_size664 ) ( (  op_dash_mul672 ( ( ( * (  tui3411 ) ) .f_width ) , ( ( * (  tui3411 ) ) .f_height ) ) ) ) ) ) );
    ( (  map673 ) ( (  cur3414 ) ,  (  lam696 ) ) );
    struct Slice_651  prev3416 = ( (  allocate659 ) ( (  al3413 ) ,  ( (  u32_dash_size664 ) ( (  op_dash_mul672 ( ( ( * (  tui3411 ) ) .f_width ) , ( ( * (  tui3411 ) ) .f_height ) ) ) ) ) ) );
    ( (  map698 ) ( (  prev3416 ) ,  (  lam705 ) ) );
    return ( (struct Screen_650) { .f_current = (  cur3414 ) , .f_previous = (  prev3416 ) , .f_al = (  al3413 ) , .f_tui = (  tui3411 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_653) { .tag = Color_653_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_653) { .tag = Color_653_ColorDefault_t } ) } );
}

enum MouseButton_713 {
    MouseButton_713_MouseLeft,
    MouseButton_713_MouseMiddle,
    MouseButton_713_MouseRight,
    MouseButton_713_ScrollUp,
    MouseButton_713_ScrollDown,
};

struct MouseEvent_712 {
    enum MouseButton_713  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_711 {
    enum {
        InputEvent_711_Key_t,
        InputEvent_711_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_144  field0;
        } InputEvent_711_Key_s;
        struct {
            struct MouseEvent_712  field0;
        } InputEvent_711_Mouse_s;
    } stuff;
};

static struct InputEvent_711 InputEvent_711_Key (  struct Key_144  field0 ) {
    return ( struct InputEvent_711 ) { .tag = InputEvent_711_Key_t, .stuff = { .InputEvent_711_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_711 InputEvent_711_Mouse (  struct MouseEvent_712  field0 ) {
    return ( struct InputEvent_711 ) { .tag = InputEvent_711_Mouse_t, .stuff = { .InputEvent_711_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_710 {
    enum {
        Maybe_710_None_t,
        Maybe_710_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_711  field0;
        } Maybe_710_Just_s;
    } stuff;
};

static struct Maybe_710 Maybe_710_Just (  struct InputEvent_711  field0 ) {
    return ( struct Maybe_710 ) { .tag = Maybe_710_Just_t, .stuff = { .Maybe_710_Just_s = { .field0 = field0 } } };
};

struct envunion709 {
    struct Maybe_710  (*fun) (  struct env71*  ,    struct Tui_73 *  );
    struct env71 env;
};

struct env708 {
    struct Tui_73 *  tui4216;
    struct env71 envinst71;
};

struct envunion714 {
    struct Maybe_710  (*fun) (  struct env708*  );
    struct env708 env;
};

struct FunIter_707 {
    struct envunion714  f_fun;
    bool  f_finished;
};

static  struct FunIter_707   into_dash_iter715 (    struct FunIter_707  self1028 ) {
    return (  self1028 );
}

static  struct FunIter_707   from_dash_function716 (   struct envunion714  fun1036 ) {
    return ( (struct FunIter_707) { .f_fun = (  fun1036 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions721 (   struct env70* env ,    struct Tui_73 *  tui3377 ) {
    if ( ( ! ( * ( env->should_dash_resize3305 ) ) ) ) {
        return ( false );
    }
    (*  tui3377 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3305 ) = ( false );
    struct Tuple2_614  dim3378 = ( (  get_dash_dimensions615 ) ( ) );
    uint32_t  w3379 = ( (  fst648 ) ( (  dim3378 ) ) );
    uint32_t  h3380 = ( (  snd649 ) ( (  dim3378 ) ) );
    (*  tui3377 ) .f_width = (  w3379 );
    (*  tui3377 ) .f_height = (  h3380 );
    return ( true );
}

static  char   undefined724 (  ) {
    char  temp725;
    return (  temp725 );
}

struct Maybe_726 {
    enum {
        Maybe_726_None_t,
        Maybe_726_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_726_Just_s;
    } stuff;
};

static struct Maybe_726 Maybe_726_Just (  char  field0 ) {
    return ( struct Maybe_726 ) { .tag = Maybe_726_Just_t, .stuff = { .Maybe_726_Just_s = { .field0 = field0 } } };
};

struct Pollfd_728 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr729 (    struct Pollfd_728 *  p359 ) {
    return ( (struct pollfd * ) (  p359 ) );
}

static  void *   cast_dash_ptr732 (    char *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of733 (    char  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  char   zeroed730 (  ) {
    char  temp731;
    char  x570 = (  temp731 );
    ( ( memset ) ( ( (  cast_dash_ptr732 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of733 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Maybe_726   read_dash_byte727 (    int32_t  timeout_dash_ms3299 ) {
    struct Pollfd_728  pfd3300 = ( (struct Pollfd_728) { .f_fd = (  from_dash_integral48 ( 0 ) ) , .f_events = (  from_dash_integral627 ( 1 ) ) , .f_revents = (  from_dash_integral627 ( 0 ) ) } );
    if ( (  cmp306 ( ( ( poll ) ( ( (  cast_dash_ptr729 ) ( ( & (  pfd3300 ) ) ) ) ,  (  from_dash_integral48 ( 1 ) ) ,  (  timeout_dash_ms3299 ) ) ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_726) { .tag = Maybe_726_None_t } );
    }
    char  c3301 = ( ( (  zeroed730 ) ( ) ) );
    if ( (  cmp306 ( ( ( read ) ( ( (  stdin_dash_fileno528 ) ( ) ) ,  ( (  cast_dash_ptr732 ) ( ( & (  c3301 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_726) { .tag = Maybe_726_None_t } );
    }
    return ( ( Maybe_726_Just ) ( (  c3301 ) ) );
}

static  uint8_t   ascii_dash_u8734 (    char  c776 ) {
    return ( ( (uint8_t ) (  c776 ) ) );
}

static  char   u8_dash_ascii735 (    uint8_t  b779 ) {
    return ( ( (char ) (  b779 ) ) );
}

static  uint8_t *   cast739 (    uint32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed737 (    uint8_t  x573 ) {
    uint32_t  temp738 = ( (  zeroed631 ) ( ) );
    uint32_t *  y574 = ( &temp738 );
    uint8_t *  yp575 = ( (  cast739 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u8_dash_u32736 (    uint8_t  x672 ) {
    return ( (  cast_dash_on_dash_zeroed737 ) ( (  x672 ) ) );
}

struct Map_742 {
    struct StrViewIter_592  field0;
    uint32_t (*  field1 )(    struct Char_57  );
};

static struct Map_742 Map_742_Map (  struct StrViewIter_592  field0 ,  uint32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_742 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_742   into_dash_iter743 (    struct Map_742  self796 ) {
    return (  self796 );
}

static  struct Maybe_537   next744 (    struct Map_742 *  dref798 ) {
    struct Maybe_595  dref801 = ( (  next596 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_595_None_t ) {
        return ( (struct Maybe_537) { .tag = Maybe_537_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_595_Just_t ) {
            return ( ( Maybe_537_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_595_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce741 (    struct Map_742  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct Map_742  it1099 = ( (  into_dash_iter743 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_537  dref1100 = ( (  next744 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_537_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_537_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_537_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp745 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp745);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp746;
    return (  temp746 );
}

static  struct Map_742   map747 (    struct StrView_21  iterable805 ,    uint32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrViewIter_592  it808 = ( (  into_dash_iter598 ) ( (  iterable805 ) ) );
    return ( ( Map_742_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  void *   cast_dash_ptr754 (    int64_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of755 (    int64_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int64_t   zeroed752 (  ) {
    int64_t  temp753;
    int64_t  x570 = (  temp753 );
    ( ( memset ) ( ( (  cast_dash_ptr754 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of755 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast756 (    int64_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int64_t   cast_dash_on_dash_zeroed750 (    uint8_t  x573 ) {
    int64_t  temp751 = ( (  zeroed752 ) ( ) );
    int64_t *  y574 = ( &temp751 );
    uint8_t *  yp575 = ( (  cast756 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int64_t   u8_dash_i64749 (    uint8_t  x666 ) {
    return ( (  cast_dash_on_dash_zeroed750 ) ( (  x666 ) ) );
}

struct StrConcat_759 {
    struct Char_57  field0;
    struct Char_57  field1;
};

static struct StrConcat_759 StrConcat_759_StrConcat (  struct Char_57  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_759 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_758 {
    struct StrConcat_759  field0;
    struct StrView_21  field1;
};

static struct StrConcat_758 StrConcat_758_StrConcat (  struct StrConcat_759  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_758 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_763 {
    struct StrView_21  field0;
    struct StrConcat_758  field1;
};

static struct StrConcat_763 StrConcat_763_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_758  field1 ) {
    return ( struct StrConcat_763 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_762 {
    struct StrConcat_763  field0;
    struct Char_57  field1;
};

static struct StrConcat_762 StrConcat_762_StrConcat (  struct StrConcat_763  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_762 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str766 (    struct StrConcat_759  self1503 ) {
    struct StrConcat_759  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str192 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str192 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str765 (    struct StrConcat_758  self1503 ) {
    struct StrConcat_758  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str766 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str184 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str764 (    struct StrConcat_763  self1503 ) {
    struct StrConcat_763  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str184 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str765 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str761 (    struct StrConcat_762  self1503 ) {
    struct StrConcat_762  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str764 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str192 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic760 (    struct StrConcat_758  errmsg1712 ) {
    ( (  print_dash_str761 ) ( ( ( StrConcat_762_StrConcat ) ( ( ( StrConcat_763_StrConcat ) ( ( (  from_dash_string209 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  uint8_t   or_dash_fail757 (    struct Maybe_334  x1725 ,    struct StrConcat_758  errmsg1727 ) {
    struct Maybe_334  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_334_None_t ) {
        ( (  panic760 ) ( (  errmsg1727 ) ) );
        return ( (  undefined370 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_334_Just_t ) {
            return ( dref1728 .stuff .Maybe_334_Just_s .field0 );
        }
    }
}

static  enum Ordering_174   cmp768 (    struct Char_57  l744 ,    struct Char_57  r746 ) {
    if ( ( ( !  eq228 ( ( (  l744 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq228 ( ( (  r746 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp769 = ( (  from_dash_string49 ) ( ( "(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp769);
        exit ( 1 );
        ( Unit_7_Unit );
    }
    return ( (  cmp214 ) ( ( (  char_dash_u8373 ) ( (  l744 ) ) ) ,  ( (  char_dash_u8373 ) ( (  r746 ) ) ) ) );
}

static  uint8_t   op_dash_sub770 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  uint8_t   op_dash_add771 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  struct Maybe_334   hex_dash_digit767 (    struct Char_57  c2545 ) {
    if ( ( (  cmp768 ( (  c2545 ) , ( (  from_dash_charlike210 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp768 ( (  c2545 ) , ( (  from_dash_charlike210 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_334_Just ) ( (  op_dash_sub770 ( ( (  char_dash_u8373 ) ( (  c2545 ) ) ) , ( (  char_dash_u8373 ) ( ( (  from_dash_charlike210 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp768 ( (  c2545 ) , ( (  from_dash_charlike210 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp768 ( (  c2545 ) , ( (  from_dash_charlike210 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_334_Just ) ( (  op_dash_add771 ( (  op_dash_sub770 ( ( (  char_dash_u8373 ) ( (  c2545 ) ) ) , ( (  char_dash_u8373 ) ( ( (  from_dash_charlike210 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral201 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp768 ( (  c2545 ) , ( (  from_dash_charlike210 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp768 ( (  c2545 ) , ( (  from_dash_charlike210 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_334_Just ) ( (  op_dash_add771 ( (  op_dash_sub770 ( ( (  char_dash_u8373 ) ( (  c2545 ) ) ) , ( (  char_dash_u8373 ) ( ( (  from_dash_charlike210 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral201 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_334) { .tag = Maybe_334_None_t } );
}

static  uint32_t   lam748 (    struct Char_57  c2550 ) {
    return ( (  from_dash_integral205 ) ( ( (  u8_dash_i64749 ) ( ( (  or_dash_fail757 ) ( ( (  hex_dash_digit767 ) ( (  c2550 ) ) ) ,  ( ( StrConcat_758_StrConcat ) ( ( ( StrConcat_759_StrConcat ) ( ( (  from_dash_charlike210 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2550 ) ) ) ,  ( (  from_dash_string209 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   op_dash_add773 (    uint32_t  l230 ,    uint32_t  r232 ) {
    return ( (  l230 ) + (  r232 ) );
}

static  uint32_t   lam772 (    uint32_t  elem2552 ,    uint32_t  b2554 ) {
    return (  op_dash_add773 ( (  op_dash_mul672 ( (  b2554 ) , (  from_dash_integral205 ( 16 ) ) ) ) , (  elem2552 ) ) );
}

static  uint32_t   from_dash_hex740 (    struct StrView_21  arr2548 ) {
    return ( (  reduce741 ) ( ( (  map747 ) ( (  arr2548 ) ,  (  lam748 ) ) ) ,  (  from_dash_integral205 ( 0 ) ) ,  (  lam772 ) ) );
}

static  bool   eq775 (    char  l374 ,    char  r376 ) {
    return ( (  l374 ) == (  r376 ) );
}

static  char   from_dash_charlike776 (    uint8_t *  ptr369 ,    size_t  num_dash_bytes371 ) {
    if ( ( !  eq228 ( (  num_dash_bytes371 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp777 = ( (  from_dash_string49 ) ( ( "(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp777);
        exit ( 1 );
        ( Unit_7_Unit );
    }
    return ( ( (char ) ( * (  ptr369 ) ) ) );
}

struct Array_778 {
    char _arr [32];
};

static  void *   cast_dash_ptr782 (    struct Array_778 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of783 (    struct Array_778  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Array_778   zeroed780 (  ) {
    struct Array_778  temp781;
    struct Array_778  x570 = (  temp781 );
    ( ( memset ) ( ( (  cast_dash_ptr782 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of783 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr787 (    struct Array_778 *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  char *   offset_dash_ptr788 (    char *  x338 ,    int64_t  count340 ) {
    char  temp789;
    return ( (char * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul219 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp789 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr786 (    struct Array_778 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp173 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i2253 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic177 ) ( ( ( StrConcat_178_StrConcat ) ( ( ( StrConcat_179_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string209 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2254 = ( ( (  cast_dash_ptr787 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr788 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  enum Unit_7   set785 (    struct Array_778 *  arr2263 ,    size_t  i2266 ,    char  e2268 ) {
    char *  p2269 = ( (  get_dash_ptr786 ) ( (  arr2263 ) ,  (  i2266 ) ) );
    (*  p2269 ) = (  e2268 );
    return ( Unit_7_Unit );
}

struct Slice_791 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail794 (    struct Maybe_726  x1725 ,    struct StrConcat_242  errmsg1727 ) {
    struct Maybe_726  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_726_None_t ) {
        ( (  panic241 ) ( (  errmsg1727 ) ) );
        return ( (  undefined724 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_726_Just_t ) {
            return ( dref1728 .stuff .Maybe_726_Just_s .field0 );
        }
    }
}

static  struct Maybe_726   try_dash_get795 (    struct Slice_791  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp173 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_726) { .tag = Maybe_726_None_t } );
    }
    char *  elem_dash_ptr1766 = ( (  offset_dash_ptr788 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_726_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  char   get793 (    struct Slice_791  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail794 ) ( ( (  try_dash_get795 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_242_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string209 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get792 (    struct Slice_791  self1867 ,    size_t  idx1869 ) {
    return ( (  get793 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

struct Scanner_796 {
    struct StrViewIter_592  f_s;
};

static  struct Scanner_796   mk_dash_from_dash_str798 (    struct StrView_21  s3172 ) {
    return ( (struct Scanner_796) { .f_s = ( (  chars597 ) ( (  s3172 ) ) ) } );
}

static  int32_t   op_dash_sub801 (    int32_t  l212 ,    int32_t  r214 ) {
    return ( (  l212 ) - (  r214 ) );
}

static  uint8_t *   offset_dash_ptr_prime_803 (    uint8_t *  x343 ,    size_t  count345 ) {
    return ( (  offset_dash_ptr318 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
}

static  struct StrView_21   substr799 (    struct StrView_21  s2172 ,    size_t  from2174 ,    size_t  to2176 ) {
    size_t  from_dash_bs2177 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_678  temp800 =  into_dash_iter680 ( ( (  to683 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub801 ( ( (  size_dash_i32185 ) ( (  from2174 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_261  __cond802 =  next681 (&temp800);
        if (  __cond802 .tag == 0 ) {
            break;
        }
        int32_t  dref2178 =  __cond802 .stuff .Maybe_261_Just_s .field0;
        if ( (  cmp173 ( (  from_dash_bs2177 ) , ( ( (  s2172 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2177 = (  op_dash_add221 ( (  from_dash_bs2177 ) , ( (  next_dash_char213 ) ( ( (  offset_dash_ptr_prime_803 ) ( ( ( (  s2172 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2177 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2179 = (  from_dash_bs2177 );
    struct RangeIter_678  temp804 =  into_dash_iter680 ( ( (  to683 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub801 ( (  op_dash_sub801 ( ( (  size_dash_i32185 ) ( (  to2176 ) ) ) , ( (  size_dash_i32185 ) ( (  from2174 ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_261  __cond805 =  next681 (&temp804);
        if (  __cond805 .tag == 0 ) {
            break;
        }
        int32_t  dref2180 =  __cond805 .stuff .Maybe_261_Just_s .field0;
        if ( (  cmp173 ( (  to_dash_bs2179 ) , ( ( (  s2172 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2179 = (  op_dash_add221 ( (  to_dash_bs2179 ) , ( (  next_dash_char213 ) ( ( (  offset_dash_ptr_prime_803 ) ( ( ( (  s2172 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2179 ) ) ) ) ) ) );
    }
    return ( (struct StrView_21) { .f_contents = ( (  subslice317 ) ( ( (  s2172 ) .f_contents ) ,  (  from_dash_bs2177 ) ,  (  to_dash_bs2179 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr808 (    char *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_12   cast_dash_slice807 (    struct Slice_791  s1932 ) {
    return ( (struct Slice_12) { .f_ptr = ( (  cast_dash_ptr808 ) ( ( (  s1932 ) .f_ptr ) ) ) , .f_count = ( (  s1932 ) .f_count ) } );
}

static  struct StrView_21   from_dash_ascii_dash_slice806 (    struct Slice_791  sl2149 ) {
    return ( (struct StrView_21) { .f_contents = ( (  cast_dash_slice807 ) ( (  sl2149 ) ) ) } );
}

struct Maybe_809 {
    enum {
        Maybe_809_None_t,
        Maybe_809_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_809_Just_s;
    } stuff;
};

static struct Maybe_809 Maybe_809_Just (  int64_t  field0 ) {
    return ( struct Maybe_809 ) { .tag = Maybe_809_Just_t, .stuff = { .Maybe_809_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_811 {
    struct Scanner_796  f_it;
    bool (*  f_pred )(    struct Char_57  );
};

static  struct Scanner_796   into_dash_iter814 (    struct Scanner_796  self3163 ) {
    return (  self3163 );
}

static  struct Scanner_796   into_dash_iter813 (    struct Scanner_796 *  self785 ) {
    return ( (  into_dash_iter814 ) ( ( * (  self785 ) ) ) );
}

static  struct TakeWhile_811   take_dash_while812 (    struct Scanner_796 *  it970 ,    bool (*  pred972 )(    struct Char_57  ) ) {
    return ( (struct TakeWhile_811) { .f_it = ( (  into_dash_iter813 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  bool   is_dash_digit815 (    struct Char_57  c2451 ) {
    return ( (  cmp214 ( ( (  char_dash_u8373 ) ( (  c2451 ) ) ) , ( (  char_dash_u8373 ) ( ( (  from_dash_charlike210 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp214 ( ( (  char_dash_u8373 ) ( (  c2451 ) ) ) , ( (  char_dash_u8373 ) ( ( (  from_dash_charlike210 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_595   next819 (    struct Scanner_796 *  self3160 ) {
    return ( (  next596 ) ( ( & ( ( * (  self3160 ) ) .f_s ) ) ) );
}

static  struct Maybe_595   next818 (    struct TakeWhile_811 *  self964 ) {
    struct Maybe_595  mx965 = ( (  next819 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_595  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_595_None_t ) {
        return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_595_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_595_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_595_Just ) ( ( dref966 .stuff .Maybe_595_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
            }
        }
    }
}

static  struct TakeWhile_811   into_dash_iter821 (    struct TakeWhile_811  self961 ) {
    return (  self961 );
}

static  struct Maybe_595   head817 (    struct TakeWhile_811  it1142 ) {
    struct TakeWhile_811  temp820 = ( (  into_dash_iter821 ) ( (  it1142 ) ) );
    return ( (  next818 ) ( ( &temp820 ) ) );
}

static  bool   null816 (    struct TakeWhile_811  it1151 ) {
    struct Maybe_595  dref1152 = ( (  head817 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_595_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env824 {
    struct Scanner_796 *  it1186;
    ;
};

struct envunion825 {
    struct Maybe_595  (*fun) (  struct env824*  ,    int32_t  );
    struct env824 env;
};

static  enum Unit_7   for_dash_each823 (    struct Range_675  iterable1074 ,   struct envunion825  fun1076 ) {
    struct RangeIter_678  temp826 = ( (  into_dash_iter680 ) ( (  iterable1074 ) ) );
    struct RangeIter_678 *  it1077 = ( &temp826 );
    while ( ( true ) ) {
        struct Maybe_261  dref1078 = ( (  next681 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_261_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_261_Just_t ) {
                struct envunion825  temp827 = (  fun1076 );
                ( temp827.fun ( &temp827.env ,  ( dref1078 .stuff .Maybe_261_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Maybe_595   lam828 (   struct env824* env ,    int32_t  dref1189 ) {
    return ( (  next819 ) ( ( env->it1186 ) ) );
}

static  enum Unit_7   drop_prime_822 (    struct Scanner_796 *  it1186 ,    size_t  n1188 ) {
    struct env824 envinst824 = {
        .it1186 =  it1186 ,
    };
    ( (  for_dash_each823 ) ( ( (  to683 ) ( (  from_dash_integral48 ( 1 ) ) ,  ( (  size_dash_i32185 ) ( (  n1188 ) ) ) ) ) ,  ( (struct envunion825){ .fun = (  struct Maybe_595  (*) (  struct env824*  ,    int32_t  ) )lam828 , .env =  envinst824 } ) ) );
    return ( Unit_7_Unit );
}

static  size_t   reduce830 (    struct TakeWhile_811  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_57  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct TakeWhile_811  it1099 = ( (  into_dash_iter821 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_595  dref1100 = ( (  next818 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_595_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_595_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_595_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp831 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp831);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp832;
    return (  temp832 );
}

static  size_t   lam833 (    struct Char_57  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add221 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count829 (    struct TakeWhile_811  it1104 ) {
    return ( (  reduce830 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam833 ) ) );
}

static  struct TakeWhile_811   chars835 (    struct TakeWhile_811  self1651 ) {
    return (  self1651 );
}

static  struct Maybe_809   reduce836 (    struct TakeWhile_811  iterable1093 ,    struct Maybe_809  base1095 ,    struct Maybe_809 (*  fun1097 )(    struct Char_57  ,    struct Maybe_809  ) ) {
    struct Maybe_809  x1098 = (  base1095 );
    struct TakeWhile_811  it1099 = ( (  into_dash_iter821 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_595  dref1100 = ( (  next818 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_595_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_595_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_595_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp837 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp837);
    exit ( 1 );
    ( Unit_7_Unit );
    struct Maybe_809  temp838;
    return (  temp838 );
}

static  void *   cast_dash_ptr846 (    int32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of847 (    int32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int32_t   zeroed844 (  ) {
    int32_t  temp845;
    int32_t  x570 = (  temp845 );
    ( ( memset ) ( ( (  cast_dash_ptr846 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of847 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast848 (    int32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed842 (    uint8_t  x573 ) {
    int32_t  temp843 = ( (  zeroed844 ) ( ) );
    int32_t *  y574 = ( &temp843 );
    uint8_t *  yp575 = ( (  cast848 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int32_t   u8_dash_i32841 (    uint8_t  x669 ) {
    return ( (  cast_dash_on_dash_zeroed842 ) ( (  x669 ) ) );
}

static  struct Maybe_261   parse_dash_digit840 (    struct Char_57  c2454 ) {
    if ( ( (  is_dash_digit815 ) ( (  c2454 ) ) ) ) {
        return ( ( Maybe_261_Just ) ( ( (  u8_dash_i32841 ) ( (  op_dash_sub770 ( ( (  char_dash_u8373 ) ( (  c2454 ) ) ) , ( (  char_dash_u8373 ) ( ( (  from_dash_charlike210 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_261) { .tag = Maybe_261_None_t } );
    }
}

static  int64_t   i32_dash_i64849 (    int32_t  x606 ) {
    return ( (int64_t ) (  x606 ) );
}

static  struct Maybe_809   sequence_dash_maybe839 (    struct Char_57  e2460 ,    struct Maybe_809  b2462 ) {
    struct Maybe_809  dref2463 = (  b2462 );
    if ( dref2463.tag == Maybe_809_None_t ) {
        return ( (struct Maybe_809) { .tag = Maybe_809_None_t } );
    }
    else {
        if ( dref2463.tag == Maybe_809_Just_t ) {
            struct Maybe_261  dref2465 = ( (  parse_dash_digit840 ) ( (  e2460 ) ) );
            if ( dref2465.tag == Maybe_261_None_t ) {
                return ( (struct Maybe_809) { .tag = Maybe_809_None_t } );
            }
            else {
                if ( dref2465.tag == Maybe_261_Just_t ) {
                    return ( ( Maybe_809_Just ) ( (  op_dash_add394 ( (  op_dash_mul219 ( ( dref2463 .stuff .Maybe_809_Just_s .field0 ) , (  from_dash_integral292 ( 10 ) ) ) ) , ( (  i32_dash_i64849 ) ( ( dref2465 .stuff .Maybe_261_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_809   parse_dash_int834 (    struct TakeWhile_811  s2457 ) {
    struct TakeWhile_811  cs2467 = ( (  chars835 ) ( (  s2457 ) ) );
    struct Maybe_595  dref2468 = ( (  head817 ) ( (  cs2467 ) ) );
    if ( dref2468.tag == Maybe_595_Just_t ) {
        return ( (  reduce836 ) ( (  cs2467 ) ,  ( ( Maybe_809_Just ) ( (  from_dash_integral292 ( 0 ) ) ) ) ,  (  sequence_dash_maybe839 ) ) );
    }
    else {
        if ( dref2468.tag == Maybe_595_None_t ) {
            return ( (struct Maybe_809) { .tag = Maybe_809_None_t } );
        }
    }
}

static  struct Maybe_809   scan_dash_int810 (    struct Scanner_796 *  sc3175 ) {
    struct TakeWhile_811  digit_dash_chars3176 = ( (  take_dash_while812 ) ( (  sc3175 ) ,  (  is_dash_digit815 ) ) );
    if ( ( (  null816 ) ( (  digit_dash_chars3176 ) ) ) ) {
        return ( (struct Maybe_809) { .tag = Maybe_809_None_t } );
    }
    ( (  drop_prime_822 ) ( (  sc3175 ) ,  ( (  count829 ) ( (  digit_dash_chars3176 ) ) ) ) );
    return ( (  parse_dash_int834 ) ( (  digit_dash_chars3176 ) ) );
}

static  int32_t   i64_dash_i32851 (    int64_t  x618 ) {
    return ( (int32_t ) (  x618 ) );
}

struct StrConcat_853 {
    struct StrView_21  field0;
    int64_t  field1;
};

static struct StrConcat_853 StrConcat_853_StrConcat (  struct StrView_21  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_853 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_856 {
    struct StrView_21  field0;
    struct StrConcat_853  field1;
};

static struct StrConcat_856 StrConcat_856_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_853  field1 ) {
    return ( struct StrConcat_856 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_855 {
    struct StrConcat_856  field0;
    struct Char_57  field1;
};

static struct StrConcat_855 StrConcat_855_StrConcat (  struct StrConcat_856  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_855 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_861 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_860 {
    struct StrViewIter_592  f_left;
    struct IntStrIter_861  f_right;
};

struct StrConcatIter_859 {
    struct StrViewIter_592  f_left;
    struct StrConcatIter_860  f_right;
};

enum EmptyIter_863 {
    EmptyIter_863_EmptyIter,
};

struct AppendIter_862 {
    enum EmptyIter_863  f_it;
    struct Char_57  f_elem;
    bool  f_appended;
};

struct StrConcatIter_858 {
    struct StrConcatIter_859  f_left;
    struct AppendIter_862  f_right;
};

static  struct StrConcatIter_858   into_dash_iter865 (    struct StrConcatIter_858  self1491 ) {
    return (  self1491 );
}

struct env872 {
    ;
    int64_t  base1210;
};

struct envunion873 {
    int64_t  (*fun) (  struct env872*  ,    int32_t  ,    int64_t  );
    struct env872 env;
};

static  int64_t   reduce871 (    struct Range_675  iterable1093 ,    int64_t  base1095 ,   struct envunion873  fun1097 ) {
    int64_t  x1098 = (  base1095 );
    struct RangeIter_678  it1099 = ( (  into_dash_iter680 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_261  dref1100 = ( (  next681 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_261_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_261_Just_t ) {
                struct envunion873  temp874 = (  fun1097 );
                x1098 = ( temp874.fun ( &temp874.env ,  ( dref1100 .stuff .Maybe_261_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp875 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp875);
    exit ( 1 );
    ( Unit_7_Unit );
    int64_t  temp876;
    return (  temp876 );
}

static  int64_t   lam877 (   struct env872* env ,    int32_t  item1214 ,    int64_t  x1216 ) {
    return (  op_dash_mul219 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int64_t   pow870 (    int64_t  base1210 ,    int32_t  p1212 ) {
    struct env872 envinst872 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce871 ) ( ( (  to683 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub801 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral292 ( 1 ) ) ,  ( (struct envunion873){ .fun = (  int64_t  (*) (  struct env872*  ,    int32_t  ,    int64_t  ) )lam877 , .env =  envinst872 } ) ) );
}

static  int64_t   op_dash_div878 (    int64_t  l199 ,    int64_t  r201 ) {
    return ( (  l199 ) / (  r201 ) );
}

static  uint8_t   cast879 (    int64_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  int64_t   op_dash_sub880 (    int64_t  l189 ,    int64_t  r191 ) {
    return ( (  l189 ) - (  r191 ) );
}

static  uint8_t *   cast886 (    size_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed884 (    uint8_t  x573 ) {
    size_t  temp885 = ( (  zeroed667 ) ( ) );
    size_t *  y574 = ( &temp885 );
    uint8_t *  yp575 = ( (  cast886 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u8_dash_size883 (    uint8_t  x663 ) {
    return ( (  cast_dash_on_dash_zeroed884 ) ( (  x663 ) ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer882 (    uint8_t *  ptr681 ,    uint8_t  b683 ) {
    size_t  s684 = ( ( (size_t ) (  ptr681 ) ) );
    size_t  exp685 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add221 ( (  op_dash_sub293 ( (  s684 ) , ( (  u8_dash_size883 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer198 ) ( (  ptr681 ) ) ) ) ) ) ) , (  op_dash_mul234 ( (  exp685 ) , ( (  u8_dash_size883 ) ( (  b683 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast887 (    size_t  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_57   from_dash_u8881 (    uint8_t  b772 ) {
    uint8_t *  ptr773 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer882 ) ( ( ( (  cast887 ) ( ( (  u8_dash_size883 ) ( (  b772 ) ) ) ) ) ) ,  (  from_dash_integral201 ( 103 ) ) ) );
    return ( (struct Char_57) { .f_ptr = (  ptr773 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_595   next869 (    struct IntStrIter_861 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_595_Just ) ( ( (  from_dash_charlike210 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp306 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
    }
    int64_t  trim_dash_down1423 = ( (  pow870 ) ( (  from_dash_integral292 ( 10 ) ) ,  (  op_dash_sub801 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    int64_t  upper1424 = (  op_dash_div878 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    int64_t  upper_dash_mask1425 = (  op_dash_mul219 ( (  op_dash_div878 ( (  upper1424 ) , (  from_dash_integral292 ( 10 ) ) ) ) , (  from_dash_integral292 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast879 ) ( (  op_dash_sub880 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub801 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8881 ) ( (  op_dash_add771 ( (  digit1426 ) , (  from_dash_integral201 ( 48 ) ) ) ) ) );
    return ( ( Maybe_595_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_595   next868 (    struct StrConcatIter_860 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next869 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next867 (    struct StrConcatIter_859 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next868 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next889 (    enum EmptyIter_863 *  dref792 ) {
    return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
}

static  struct Maybe_595   next888 (    struct AppendIter_862 *  self1022 ) {
    struct Maybe_595  dref1023 = ( (  next889 ) ( ( & ( ( * (  self1022 ) ) .f_it ) ) ) );
    if ( dref1023.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1023 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1023.tag == Maybe_595_None_t ) {
            if ( ( ! ( ( * (  self1022 ) ) .f_appended ) ) ) {
                (*  self1022 ) .f_appended = ( true );
                return ( ( Maybe_595_Just ) ( ( ( * (  self1022 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
        }
    }
}

static  struct Maybe_595   next866 (    struct StrConcatIter_858 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next867 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next888 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each857 (    struct StrConcatIter_858  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrConcatIter_858  temp864 = ( (  into_dash_iter865 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_858 *  it1077 = ( &temp864 );
    while ( ( true ) ) {
        struct Maybe_595  dref1078 = ( (  next866 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_595_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_595_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_595_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_174   cmp898 (    int64_t  l154 ,    int64_t  r156 ) {
    return ( builtin_int64_tcmp( (  l154 ) , (  r156 ) ) );
}

static  int64_t   op_dash_neg899 (    int64_t  l204 ) {
    return ( (  from_dash_integral292 ( 0 ) ) - (  l204 ) );
}

static  bool   eq901 (    int64_t  l101 ,    int64_t  r103 ) {
    return ( (  l101 ) == (  r103 ) );
}

static  int32_t   count_dash_digits900 (    int64_t  self1430 ) {
    if ( (  eq901 ( (  self1430 ) , (  from_dash_integral292 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp898 ( (  self1430 ) , (  from_dash_integral292 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div878 ( (  self1430 ) , (  from_dash_integral292 ( 10 ) ) ) );
        digits1431 = (  op_dash_add263 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_861   int_dash_iter897 (    int64_t  int1434 ) {
    if ( (  cmp898 ( (  int1434 ) , (  from_dash_integral292 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_861) { .f_int = (  op_dash_neg899 ( (  int1434 ) ) ) , .f_len = ( (  count_dash_digits900 ) ( (  op_dash_neg899 ( (  int1434 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_861) { .f_int = (  int1434 ) , .f_len = ( (  count_dash_digits900 ) ( (  int1434 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_861   chars896 (    int64_t  self1461 ) {
    return ( (  int_dash_iter897 ) ( (  self1461 ) ) );
}

static  struct StrConcatIter_860   into_dash_iter895 (    struct StrConcat_853  dref1498 ) {
    return ( (struct StrConcatIter_860) { .f_left = ( (  chars597 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars896 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_860   chars894 (    struct StrConcat_853  self1509 ) {
    return ( (  into_dash_iter895 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_859   into_dash_iter893 (    struct StrConcat_856  dref1498 ) {
    return ( (struct StrConcatIter_859) { .f_left = ( (  chars597 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars894 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_859   chars892 (    struct StrConcat_856  self1509 ) {
    return ( (  into_dash_iter893 ) ( (  self1509 ) ) );
}

static  enum EmptyIter_863   into_dash_iter906 (    enum EmptyIter_863  self790 ) {
    return (  self790 );
}

static  struct AppendIter_862   append905 (    enum EmptyIter_863  it1006 ,    struct Char_57  e1008 ) {
    return ( (struct AppendIter_862) { .f_it = ( (  into_dash_iter906 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_862   cons904 (    enum EmptyIter_863  it1011 ,    struct Char_57  e1013 ) {
    return ( (  append905 ) ( (  it1011 ) ,  (  e1013 ) ) );
}

static  enum EmptyIter_863   nil907 (  ) {
    return ( EmptyIter_863_EmptyIter );
}

static  struct AppendIter_862   single903 (    struct Char_57  e1016 ) {
    return ( (  cons904 ) ( ( (  nil907 ) ( ) ) ,  (  e1016 ) ) );
}

static  struct AppendIter_862   chars902 (    struct Char_57  self1407 ) {
    return ( (  single903 ) ( (  self1407 ) ) );
}

static  struct StrConcatIter_858   into_dash_iter891 (    struct StrConcat_855  dref1498 ) {
    return ( (struct StrConcatIter_858) { .f_left = ( (  chars892 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars902 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_858   chars890 (    struct StrConcat_855  self1509 ) {
    return ( (  into_dash_iter891 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print854 (    struct StrConcat_855  s1701 ) {
    ( (  for_dash_each857 ) ( ( (  chars890 ) ( (  s1701 ) ) ) ,  (  printf_dash_char193 ) ) );
    return ( Unit_7_Unit );
}

static  enum MouseButton_713   undefined908 (  ) {
    enum MouseButton_713  temp909;
    return (  temp909 );
}

static  enum MouseButton_713   panic_prime_852 (    struct StrConcat_853  errmsg1715 ) {
    ( (  print854 ) ( ( ( StrConcat_855_StrConcat ) ( ( ( StrConcat_856_StrConcat ) ( ( (  from_dash_string209 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1715 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined908 ) ( ) );
}

static  enum MouseButton_713   btn_dash_to_dash_mouse_dash_button850 (    int64_t  btn3337 ) {
    return ( {  int32_t  dref3338 = ( (  i64_dash_i32851 ) ( (  btn3337 ) ) ) ;  dref3338 == 0 ? ( MouseButton_713_MouseLeft ) :  dref3338 == 1 ? ( MouseButton_713_MouseMiddle ) :  dref3338 == 2 ? ( MouseButton_713_MouseRight ) :  dref3338 == 64 ? ( MouseButton_713_ScrollUp ) :  dref3338 == 65 ? ( MouseButton_713_ScrollDown ) : ( (  panic_prime_852 ) ( ( ( StrConcat_853_StrConcat ) ( ( (  from_dash_string209 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3337 ) ) ) ) ) ; } );
}

static  struct Scanner_796   mk911 (    struct StrView_21  s3166 ) {
    return ( (struct Scanner_796) { .f_s = ( (  into_dash_iter598 ) ( (  s3166 ) ) ) } );
}

static  struct Maybe_710   parse_dash_csi790 (    struct Slice_791  seq3344 ) {
    if ( (  eq228 ( ( (  seq3344 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_710) { .tag = Maybe_710_None_t } );
    }
    char  last3345 = (  elem_dash_get792 ( (  seq3344 ) , (  op_dash_sub293 ( ( (  seq3344 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq775 ( (  elem_dash_get792 ( (  seq3344 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike776 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq775 ( (  last3345 ) , ( (  from_dash_charlike776 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq775 ( (  last3345 ) , ( (  from_dash_charlike776 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_796  temp797 = ( (  mk_dash_from_dash_str798 ) ( ( (  substr799 ) ( ( (  from_dash_ascii_dash_slice806 ) ( (  seq3344 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3344 ) .f_count ) ) ) ) );
        struct Scanner_796 *  sc3346 = ( &temp797 );
        struct Maybe_809  dref3347 = ( (  scan_dash_int810 ) ( (  sc3346 ) ) );
        if ( dref3347.tag == Maybe_809_None_t ) {
            return ( (struct Maybe_710) { .tag = Maybe_710_None_t } );
        }
        else {
            if ( dref3347.tag == Maybe_809_Just_t ) {
                ( (  next819 ) ( (  sc3346 ) ) );
                struct Maybe_809  dref3349 = ( (  scan_dash_int810 ) ( (  sc3346 ) ) );
                if ( dref3349.tag == Maybe_809_None_t ) {
                    return ( (struct Maybe_710) { .tag = Maybe_710_None_t } );
                }
                else {
                    if ( dref3349.tag == Maybe_809_Just_t ) {
                        ( (  next819 ) ( (  sc3346 ) ) );
                        struct Maybe_809  dref3351 = ( (  scan_dash_int810 ) ( (  sc3346 ) ) );
                        if ( dref3351.tag == Maybe_809_None_t ) {
                            return ( (struct Maybe_710) { .tag = Maybe_710_None_t } );
                        }
                        else {
                            if ( dref3351.tag == Maybe_809_Just_t ) {
                                return ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Mouse ) ( ( (struct MouseEvent_712) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button850 ) ( ( dref3347 .stuff .Maybe_809_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub801 ( ( (  i64_dash_i32851 ) ( ( dref3349 .stuff .Maybe_809_Just_s .field0 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) , .f_y = (  op_dash_sub801 ( ( (  i64_dash_i32851 ) ( ( dref3351 .stuff .Maybe_809_Just_s .field0 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) , .f_pressed = (  eq775 ( (  last3345 ) , ( (  from_dash_charlike776 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq228 ( ( (  seq3344 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq775 ( (  last3345 ) , ( (  from_dash_charlike776 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_Up_t } ) ) ) ) );
        }
        if ( (  eq775 ( (  last3345 ) , ( (  from_dash_charlike776 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_Down_t } ) ) ) ) );
        }
        if ( (  eq775 ( (  last3345 ) , ( (  from_dash_charlike776 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_Right_t } ) ) ) ) );
        }
        if ( (  eq775 ( (  last3345 ) , ( (  from_dash_charlike776 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_Left_t } ) ) ) ) );
        }
        if ( (  eq775 ( (  last3345 ) , ( (  from_dash_charlike776 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_Home_t } ) ) ) ) );
        }
        if ( (  eq775 ( (  last3345 ) , ( (  from_dash_charlike776 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_710) { .tag = Maybe_710_None_t } );
    }
    if ( (  eq775 ( (  last3345 ) , ( (  from_dash_charlike776 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_796  temp910 = ( (  mk911 ) ( ( (  from_dash_ascii_dash_slice806 ) ( (  seq3344 ) ) ) ) );
        struct Scanner_796 *  sc3353 = ( &temp910 );
        struct Maybe_809  dref3354 = ( (  scan_dash_int810 ) ( (  sc3353 ) ) );
        if ( dref3354.tag == Maybe_809_None_t ) {
            return ( (struct Maybe_710) { .tag = Maybe_710_None_t } );
        }
        else {
            if ( dref3354.tag == Maybe_809_Just_t ) {
                return ( {  int32_t  dref3356 = ( (  i64_dash_i32851 ) ( ( dref3354 .stuff .Maybe_809_Just_s .field0 ) ) ) ;  dref3356 == 1 ? ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_Home_t } ) ) ) ) ) :  dref3356 == 2 ? ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_Insert_t } ) ) ) ) ) :  dref3356 == 3 ? ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_Delete_t } ) ) ) ) ) :  dref3356 == 4 ? ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_End_t } ) ) ) ) ) :  dref3356 == 5 ? ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_PageUp_t } ) ) ) ) ) :  dref3356 == 6 ? ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_PageDown_t } ) ) ) ) ) :  dref3356 == 15 ? ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_F5_t } ) ) ) ) ) :  dref3356 == 17 ? ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_F6_t } ) ) ) ) ) :  dref3356 == 18 ? ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_F7_t } ) ) ) ) ) :  dref3356 == 19 ? ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_F8_t } ) ) ) ) ) :  dref3356 == 20 ? ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_F9_t } ) ) ) ) ) :  dref3356 == 21 ? ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_F10_t } ) ) ) ) ) :  dref3356 == 23 ? ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_F11_t } ) ) ) ) ) :  dref3356 == 24 ? ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_F12_t } ) ) ) ) ) : ( (struct Maybe_710) { .tag = Maybe_710_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_710) { .tag = Maybe_710_None_t } );
}

static  struct Slice_791   subslice912 (    struct Slice_791  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    char *  begin_dash_ptr1787 = ( (  offset_dash_ptr788 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp173 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp173 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_791) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub293 ( ( (  min320 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_791) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  char *   cast914 (    struct Array_778 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_791   as_dash_slice913 (    struct Array_778 *  arr2272 ) {
    return ( (struct Slice_791) { .f_ptr = ( (  cast914 ) ( (  arr2272 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_916 {
    enum {
        Maybe_916_None_t,
        Maybe_916_Just_t,
    } tag;
    union {
        struct {
            struct Key_144  field0;
        } Maybe_916_Just_s;
    } stuff;
};

static struct Maybe_916 Maybe_916_Just (  struct Key_144  field0 ) {
    return ( struct Maybe_916 ) { .tag = Maybe_916_Just_t, .stuff = { .Maybe_916_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_916   parse_dash_ss3917 (    char  c3341 ) {
    if ( (  eq775 ( (  c3341 ) , ( (  from_dash_charlike776 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_916_Just ) ( ( (struct Key_144) { .tag = Key_144_Up_t } ) ) );
    }
    if ( (  eq775 ( (  c3341 ) , ( (  from_dash_charlike776 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_916_Just ) ( ( (struct Key_144) { .tag = Key_144_Down_t } ) ) );
    }
    if ( (  eq775 ( (  c3341 ) , ( (  from_dash_charlike776 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_916_Just ) ( ( (struct Key_144) { .tag = Key_144_Right_t } ) ) );
    }
    if ( (  eq775 ( (  c3341 ) , ( (  from_dash_charlike776 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_916_Just ) ( ( (struct Key_144) { .tag = Key_144_Left_t } ) ) );
    }
    if ( (  eq775 ( (  c3341 ) , ( (  from_dash_charlike776 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_916_Just ) ( ( (struct Key_144) { .tag = Key_144_Home_t } ) ) );
    }
    if ( (  eq775 ( (  c3341 ) , ( (  from_dash_charlike776 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_916_Just ) ( ( (struct Key_144) { .tag = Key_144_End_t } ) ) );
    }
    if ( (  eq775 ( (  c3341 ) , ( (  from_dash_charlike776 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_916_Just ) ( ( (struct Key_144) { .tag = Key_144_F1_t } ) ) );
    }
    if ( (  eq775 ( (  c3341 ) , ( (  from_dash_charlike776 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_916_Just ) ( ( (struct Key_144) { .tag = Key_144_F2_t } ) ) );
    }
    if ( (  eq775 ( (  c3341 ) , ( (  from_dash_charlike776 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_916_Just ) ( ( (struct Key_144) { .tag = Key_144_F3_t } ) ) );
    }
    if ( (  eq775 ( (  c3341 ) , ( (  from_dash_charlike776 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_916_Just ) ( ( (struct Key_144) { .tag = Key_144_F4_t } ) ) );
    }
    return ( (struct Maybe_916) { .tag = Maybe_916_None_t } );
}

static  struct Maybe_710   read_dash_key722 (  ) {
    char  temp723 = ( (  undefined724 ) ( ) );
    char *  ch3358 = ( &temp723 );
    struct Maybe_726  dref3359 = ( (  read_dash_byte727 ) ( (  from_dash_integral48 ( 0 ) ) ) );
    if ( dref3359.tag == Maybe_726_None_t ) {
        return ( (struct Maybe_710) { .tag = Maybe_710_None_t } );
    }
    else {
        if ( dref3359.tag == Maybe_726_Just_t ) {
            (*  ch3358 ) = ( dref3359 .stuff .Maybe_726_Just_s .field0 );
        }
    }
    if ( (  eq197 ( ( (  ascii_dash_u8734 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral201 ( 13 ) ) ) ) ) {
        return ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_Enter_t } ) ) ) ) );
    }
    if ( (  eq197 ( ( (  ascii_dash_u8734 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral201 ( 127 ) ) ) ) ) {
        return ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp214 ( ( (  ascii_dash_u8734 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral201 ( 27 ) ) ) == 0 ) && ( !  eq197 ( ( (  ascii_dash_u8734 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral201 ( 9 ) ) ) ) ) ) {
        char  letter3361 = ( (  u8_dash_ascii735 ) ( ( (  u32_dash_u8207 ) ( ( (  u32_dash_or546 ) ( ( (  u8_dash_u32736 ) ( ( (  ascii_dash_u8734 ) ( ( * (  ch3358 ) ) ) ) ) ) ,  ( (  from_dash_hex740 ) ( ( (  from_dash_string209 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( ( Key_144_Ctrl ) ( (  letter3361 ) ) ) ) ) ) );
    }
    if ( ( !  eq197 ( ( (  ascii_dash_u8734 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral201 ( 27 ) ) ) ) ) {
        if ( (  cmp214 ( ( (  ascii_dash_u8734 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral201 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key722 ) ( ) );
        } else {
            return ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( ( Key_144_Char ) ( ( * (  ch3358 ) ) ) ) ) ) ) );
        }
    }
    char  temp774 = ( (  undefined724 ) ( ) );
    char *  ch23362 = ( &temp774 );
    struct Maybe_726  dref3363 = ( (  read_dash_byte727 ) ( (  from_dash_integral48 ( 50 ) ) ) );
    if ( dref3363.tag == Maybe_726_None_t ) {
        return ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3363.tag == Maybe_726_Just_t ) {
            (*  ch23362 ) = ( dref3363 .stuff .Maybe_726_Just_s .field0 );
        }
    }
    if ( (  eq775 ( ( * (  ch23362 ) ) , ( (  from_dash_charlike776 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_778  temp779 = ( ( (  zeroed780 ) ( ) ) );
        struct Array_778 *  seq3365 = ( &temp779 );
        int32_t  slen3366 = (  from_dash_integral48 ( 0 ) );
        while ( (  cmp306 ( (  slen3366 ) , (  from_dash_integral48 ( 31 ) ) ) == 0 ) ) {
            char  temp784 = ( (  undefined724 ) ( ) );
            char *  sc3367 = ( &temp784 );
            struct Maybe_726  dref3368 = ( (  read_dash_byte727 ) ( (  from_dash_integral48 ( 50 ) ) ) );
            if ( dref3368.tag == Maybe_726_None_t ) {
                break;
            }
            else {
                if ( dref3368.tag == Maybe_726_Just_t ) {
                    (*  sc3367 ) = ( dref3368 .stuff .Maybe_726_Just_s .field0 );
                }
            }
            ( (  set785 ) ( (  seq3365 ) ,  ( (  i32_dash_size251 ) ( (  slen3366 ) ) ) ,  ( * (  sc3367 ) ) ) );
            slen3366 = (  op_dash_add263 ( (  slen3366 ) , (  from_dash_integral48 ( 1 ) ) ) );
            if ( ( (  cmp214 ( ( (  ascii_dash_u8734 ) ( ( * (  sc3367 ) ) ) ) , (  from_dash_integral201 ( 64 ) ) ) != 0 ) && (  cmp214 ( ( (  ascii_dash_u8734 ) ( ( * (  sc3367 ) ) ) ) , (  from_dash_integral201 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi790 ) ( ( (  subslice912 ) ( ( (  as_dash_slice913 ) ( (  seq3365 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size251 ) ( (  slen3366 ) ) ) ) ) ) );
    }
    if ( (  eq775 ( ( * (  ch23362 ) ) , ( (  from_dash_charlike776 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp915 = ( (  undefined724 ) ( ) );
        char *  sc3370 = ( &temp915 );
        struct Maybe_726  dref3371 = ( (  read_dash_byte727 ) ( (  from_dash_integral48 ( 50 ) ) ) );
        if ( dref3371.tag == Maybe_726_None_t ) {
            return ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3371.tag == Maybe_726_Just_t ) {
                (*  sc3370 ) = ( dref3371 .stuff .Maybe_726_Just_s .field0 );
            }
        }
        struct Maybe_916  dref3373 = ( (  parse_dash_ss3917 ) ( ( * (  sc3370 ) ) ) );
        if ( dref3373.tag == Maybe_916_None_t ) {
            return ( (struct Maybe_710) { .tag = Maybe_710_None_t } );
        }
        else {
            if ( dref3373.tag == Maybe_916_Just_t ) {
                return ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( dref3373 .stuff .Maybe_916_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_710_Just ) ( ( ( InputEvent_711_Key ) ( ( (struct Key_144) { .tag = Key_144_Escape_t } ) ) ) ) );
}

static  struct Maybe_710   read_dash_event719 (   struct env71* env ,    struct Tui_73 *  tui3383 ) {
    struct envunion72  temp720 = ( (struct envunion72){ .fun = (  bool  (*) (  struct env70*  ,    struct Tui_73 *  ) )update_dash_dimensions721 , .env =  env->envinst70 } );
    ( temp720.fun ( &temp720.env ,  (  tui3383 ) ) );
    struct Maybe_710  dref3384 = ( (  read_dash_key722 ) ( ) );
    if ( dref3384.tag == Maybe_710_None_t ) {
        return ( (struct Maybe_710) { .tag = Maybe_710_None_t } );
    }
    else {
        if ( dref3384.tag == Maybe_710_Just_t ) {
            (*  tui3383 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_710_Just ) ( ( dref3384 .stuff .Maybe_710_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_710   lam717 (   struct env708* env ) {
    struct envunion709  temp718 = ( (struct envunion709){ .fun = (  struct Maybe_710  (*) (  struct env71*  ,    struct Tui_73 *  ) )read_dash_event719 , .env =  env->envinst71 } );
    return ( temp718.fun ( &temp718.env ,  ( env->tui4216 ) ) );
}

static  struct Maybe_710   next919 (    struct FunIter_707 *  self1031 ) {
    if ( ( ( * (  self1031 ) ) .f_finished ) ) {
        return ( (struct Maybe_710) { .tag = Maybe_710_None_t } );
    }
    struct envunion714  temp920 = ( ( * (  self1031 ) ) .f_fun );
    struct Maybe_710  dref1032 = ( temp920.fun ( &temp920.env ) );
    if ( dref1032.tag == Maybe_710_Just_t ) {
        return ( ( Maybe_710_Just ) ( ( dref1032 .stuff .Maybe_710_Just_s .field0 ) ) );
    }
    else {
        if ( dref1032.tag == Maybe_710_None_t ) {
            (*  self1031 ) .f_finished = ( true );
            return ( (struct Maybe_710) { .tag = Maybe_710_None_t } );
        }
    }
}

struct env923 {
    struct Editor_127 *  ed4104;
    ;
};

struct envunion924 {
    enum Unit_7  (*fun) (  struct env923*  ,    struct StrView_21  );
    struct env923 env;
};

static  enum Unit_7   if_dash_just922 (    struct Maybe_131  x1291 ,   struct envunion924  fun1293 ) {
    struct Maybe_131  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_131_Just_t ) {
        struct envunion924  temp925 = (  fun1293 );
        ( temp925.fun ( &temp925.env ,  ( dref1294 .stuff .Maybe_131_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_131_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   free927 (    struct StrView_21  s2167 ,    enum CAllocator_9  al2169 ) {
    ( (  free361 ) ( (  al2169 ) ,  ( (struct Slice_12) { .f_ptr = ( ( (  s2167 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam926 (   struct env923* env ,    struct StrView_21  msg4106 ) {
    ( (  free927 ) ( (  msg4106 ) ,  ( ( * ( env->ed4104 ) ) .f_al ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   reset_dash_msg921 (    struct Editor_127 *  ed4104 ) {
    struct env923 envinst923 = {
        .ed4104 =  ed4104 ,
    };
    ( (  if_dash_just922 ) ( ( ( * (  ed4104 ) ) .f_msg ) ,  ( (struct envunion924){ .fun = (  enum Unit_7  (*) (  struct env923*  ,    struct StrView_21  ) )lam926 , .env =  envinst923 } ) ) );
    (*  ed4104 ) .f_msg = ( (struct Maybe_131) { .tag = Maybe_131_None_t } );
    return ( Unit_7_Unit );
}

struct envunion929 {
    enum Unit_7  (*fun) (  struct env140*  ,    struct Editor_127 *  ,    struct Key_144  );
    struct env140 env;
};

enum CursorMovement_935 {
    CursorMovement_935_NoChanges,
    CursorMovement_935_UpdateVI,
    CursorMovement_935_OverrideSelect,
};

struct Tuple2_937 {
    enum CursorMovement_935  field0;
    enum CursorMovement_935  field1;
};

static struct Tuple2_937 Tuple2_937_Tuple2 (  enum CursorMovement_935  field0 ,  enum CursorMovement_935  field1 ) {
    return ( struct Tuple2_937 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq936 (    enum CursorMovement_935  l3923 ,    enum CursorMovement_935  r3925 ) {
    return ( {  struct Tuple2_937  dref3926 = ( ( Tuple2_937_Tuple2 ) ( (  l3923 ) ,  (  r3925 ) ) ) ;  dref3926 .field0 == CursorMovement_935_NoChanges &&  dref3926 .field1 == CursorMovement_935_NoChanges ? ( true ) :  dref3926 .field0 == CursorMovement_935_UpdateVI &&  dref3926 .field1 == CursorMovement_935_UpdateVI ? ( true ) :  dref3926 .field0 == CursorMovement_935_OverrideSelect &&  dref3926 .field1 == CursorMovement_935_OverrideSelect ? ( true ) : ( false ) ; } );
}

static  struct StrView_21   from_dash_bytes941 (    struct Slice_12  sl2152 ) {
    return ( (struct StrView_21) { .f_contents = (  sl2152 ) } );
}

static  struct StrView_21   line940 (    struct TextBuf_87 *  self3622 ,    int32_t  li3624 ) {
    return ( (  from_dash_bytes941 ) ( ( (  to_dash_slice321 ) ( ( (  get314 ) ( ( & ( ( * (  self3622 ) ) .f_buf ) ) ,  ( (  i32_dash_size251 ) ( (  li3624 ) ) ) ) ) ) ) ) );
}

static  int32_t   maybe944 (    struct Maybe_131  x1282 ,    int32_t (*  fun1284 )(    struct StrView_21  ) ,    int32_t  default1286 ) {
    return ( {  struct Maybe_131  dref1287 = (  x1282 ) ; dref1287.tag == Maybe_131_Just_t ? ( (  fun1284 ) ( ( dref1287 .stuff .Maybe_131_Just_s .field0 ) ) ) : (  default1286 ) ; } );
}

static  struct Maybe_131   char_dash_replacement945 (    struct Char_57  c3816 ) {
    if ( (  eq392 ( (  c3816 ) , ( (  from_dash_charlike210 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_131_Just ) ( ( (  from_dash_string209 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_131) { .tag = Maybe_131_None_t } );
    }
}

static  size_t   reduce948 (    struct StrViewIter_592  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_57  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct StrViewIter_592  it1099 = ( (  into_dash_iter594 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_595  dref1100 = ( (  next596 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_595_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_595_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_595_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp949 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp949);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp950;
    return (  temp950 );
}

static  size_t   lam951 (    struct Char_57  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add221 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count947 (    struct StrViewIter_592  it1104 ) {
    return ( (  reduce948 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam951 ) ) );
}

static  int32_t   lam946 (    struct StrView_21  s3821 ) {
    return ( (  size_dash_i32185 ) ( ( (  count947 ) ( ( (  chars597 ) ( (  s3821 ) ) ) ) ) ) );
}

static  int32_t   max953 (    int32_t  l1315 ,    int32_t  r1317 ) {
    if ( (  cmp306 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  void *   cast_dash_ptr959 (    wchar_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of960 (    wchar_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  wchar_t   zeroed957 (  ) {
    wchar_t  temp958;
    wchar_t  x570 = (  temp958 );
    ( ( memset ) ( ( (  cast_dash_ptr959 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of960 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr961 (    uint8_t *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  size_t   cast962 (    int64_t  x356 ) {
    return ( (size_t ) (  x356 ) );
}

struct TypeSize_965 {
    size_t  f_size;
};

static  struct TypeSize_965   get_dash_typesize964 (  ) {
    wchar_t  temp966;
    return ( (struct TypeSize_965) { .f_size = ( sizeof( ( (  temp966 ) ) ) ) } );
}

static  wchar_t   cast968 (    uint32_t  x356 ) {
    return ( (wchar_t ) (  x356 ) );
}

static  wchar_t   to_dash_c_dash_wchar955 (    struct Char_57  c750 ) {
    struct CharDestructured_194  dref751 = ( (  destructure196 ) ( (  c750 ) ) );
    if ( dref751.tag == CharDestructured_194_Ref_t ) {
        wchar_t  temp956 = ( (  zeroed957 ) ( ) );
        wchar_t *  wcp753 = ( &temp956 );
        size_t  num_dash_chars754 = ( ( mbstowcs ) ( (  wcp753 ) ,  ( (  cast_dash_ptr961 ) ( ( ( dref751 .stuff .CharDestructured_194_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq228 ( (  num_dash_chars754 ) , ( ( (  cast962 ) ( ( (  op_dash_neg899 ( (  from_dash_integral292 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp963 = ( (  from_dash_string49 ) ( ( "could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp963);
            exit ( 1 );
            ( Unit_7_Unit );
        }
        return ( * (  wcp753 ) );
    }
    else {
        if ( dref751.tag == CharDestructured_194_Scalar_t ) {
            if ( ( ! (  eq228 ( ( (  size_dash_of634 ) ( ( ( dref751 .stuff .CharDestructured_194_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize964 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp967 = ( (  from_dash_string49 ) ( ( "Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp967);
                exit ( 1 );
                ( Unit_7_Unit );
            }
            return ( (  cast968 ) ( ( ( dref751 .stuff .CharDestructured_194_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth954 (    struct Char_57  c2572 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar955 ) ( (  c2572 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth952 (    struct Char_57  c3428 ) {
    return ( (  max953 ) ( ( (  wcwidth954 ) ( (  c3428 ) ) ) ,  (  from_dash_integral48 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width943 (    struct Char_57  c3819 ) {
    return ( (  maybe944 ) ( ( (  char_dash_replacement945 ) ( (  c3819 ) ) ) ,  (  lam946 ) ,  ( (  rendered_dash_wcwidth952 ) ( (  c3819 ) ) ) ) );
}

static  int32_t   pos_dash_vi938 (    struct TextBuf_87 *  self3835 ,    struct Pos_20  pos3837 ) {
    int32_t  bi3838 = ( (  from_dash_integral48 ( 0 ) ) );
    int32_t  vi3839 = (  from_dash_integral48 ( 0 ) );
    struct StrViewIter_592  temp939 =  into_dash_iter594 ( ( (  chars597 ) ( ( (  line940 ) ( (  self3835 ) ,  ( (  pos3837 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_595  __cond942 =  next596 (&temp939);
        if (  __cond942 .tag == 0 ) {
            break;
        }
        struct Char_57  c3841 =  __cond942 .stuff .Maybe_595_Just_s .field0;
        bi3838 = (  op_dash_add263 ( (  bi3838 ) , ( (  size_dash_i32185 ) ( ( (  c3841 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp306 ( ( (  pos3837 ) .f_bi ) , (  bi3838 ) ) == 0 ) ) {
            break;
        }
        vi3839 = (  op_dash_add263 ( (  vi3839 ) , ( (  char_dash_screen_dash_width943 ) ( (  c3841 ) ) ) ) );
    }
    return (  vi3839 );
}

struct Tuple2_971 {
    enum Mode_129  field0;
    enum Mode_129  field1;
};

static struct Tuple2_971 Tuple2_971_Tuple2 (  enum Mode_129  field0 ,  enum Mode_129  field1 ) {
    return ( struct Tuple2_971 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq970 (    enum Mode_129  l3799 ,    enum Mode_129  r3801 ) {
    return ( {  struct Tuple2_971  dref3802 = ( ( Tuple2_971_Tuple2 ) ( (  l3799 ) ,  (  r3801 ) ) ) ;  dref3802 .field0 == Mode_129_Normal &&  dref3802 .field1 == Mode_129_Normal ? ( true ) :  dref3802 .field0 == Mode_129_Insert &&  dref3802 .field1 == Mode_129_Insert ? ( true ) :  dref3802 .field0 == Mode_129_Select &&  dref3802 .field1 == Mode_129_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_7   set_dash_sel969 (    struct Pane_128 *  self3912 ,    struct Maybe_28  sel3914 ) {
    if ( ( !  eq970 ( ( ( * (  self3912 ) ) .f_mode ) , ( Mode_129_Select ) ) ) ) {
        (*  self3912 ) .f_sel = (  sel3914 );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_cursors934 (    struct Pane_128 *  self3929 ,    struct Pos_20  cur3931 ,    struct Maybe_28  sel3933 ,    enum CursorMovement_935  cursor_dash_movement_dash_type3935 ) {
    if ( ( !  eq936 ( (  cursor_dash_movement_dash_type3935 ) , ( CursorMovement_935_NoChanges ) ) ) ) {
        (*  self3929 ) .f_vi = ( (  pos_dash_vi938 ) ( ( ( * (  self3929 ) ) .f_buf ) ,  (  cur3931 ) ) );
    }
    (*  self3929 ) .f_cursor = (  cur3931 );
    if ( ( !  eq936 ( (  cursor_dash_movement_dash_type3935 ) , ( CursorMovement_935_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel969 ) ( (  self3929 ) ,  (  sel3933 ) ) );
    } else {
        (*  self3929 ) .f_sel = (  sel3933 );
    }
    return ( Unit_7_Unit );
}

static  size_t   num_dash_bytes973 (    struct StrView_21  self2195 ) {
    return ( ( (  self2195 ) .f_contents ) .f_count );
}

static  size_t   clamp974 (    size_t  x1352 ,    size_t  mn1354 ,    size_t  mx1356 ) {
    if ( (  cmp173 ( (  x1352 ) , (  mn1354 ) ) == 0 ) ) {
        return (  mn1354 );
    } else {
        if ( (  cmp173 ( (  x1352 ) , (  mx1356 ) ) == 2 ) ) {
            return (  mx1356 );
        } else {
            return (  x1352 );
        }
    }
}

static  size_t   sync_dash_char976 (    uint8_t *  p692 ) {
    size_t  i693 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb694 = ( * ( (uint8_t * ) ( ( (void*) (  p692 ) ) + (  op_dash_neg899 ( ( (  size_dash_i64250 ) ( (  i693 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp214 ( (  pb694 ) , (  from_dash_integral201 ( 128 ) ) ) != 0 ) && (  cmp214 ( (  pb694 ) , (  op_dash_add771 ( (  from_dash_integral201 ( 128 ) ) , (  from_dash_integral201 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i693 );
        }
        i693 = (  op_dash_add221 ( (  i693 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char975 (    uint8_t *  p697 ) {
    return (  op_dash_add221 ( ( (  sync_dash_char976 ) ( ( (  offset_dash_ptr318 ) ( (  p697 ) ,  (  op_dash_neg899 ( (  from_dash_integral292 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_20   left_dash_pos972 (    struct TextBuf_87 *  self3643 ,    struct Pos_20  pos3645 ) {
    if ( (  eq308 ( (  pos3645 ) , ( (  mk287 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk287 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    }
    if ( (  eq309 ( ( (  pos3645 ) .f_bi ) , (  from_dash_integral48 ( 0 ) ) ) ) ) {
        ( (  assert466 ) ( (  cmp306 ( ( (  pos3645 ) .f_line ) , (  from_dash_integral48 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string209 ) ( ( "previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk287 ) ( (  op_dash_sub801 ( ( (  pos3645 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  ( (  size_dash_i32185 ) ( ( (  num_dash_bytes973 ) ( ( (  line940 ) ( (  self3643 ) ,  (  op_dash_sub801 ( ( (  pos3645 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_21  line3646 = ( (  line940 ) ( (  self3643 ) ,  ( (  pos3645 ) .f_line ) ) );
    size_t  pos_dash_bi3647 = ( (  clamp974 ) ( ( (  i32_dash_size251 ) ( ( (  pos3645 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes973 ) ( (  line3646 ) ) ) ) );
    size_t  off3648 = ( (  previous_dash_char975 ) ( ( (  offset_dash_ptr318 ) ( ( ( (  line3646 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  pos_dash_bi3647 ) ) ) ) ) ) );
    return ( (  mk287 ) ( ( (  pos3645 ) .f_line ) ,  ( (  size_dash_i32185 ) ( (  op_dash_sub293 ( (  pos_dash_bi3647 ) , (  off3648 ) ) ) ) ) ) );
}

static  enum Unit_7   move_dash_left933 (    struct Pane_128 *  self3941 ) {
    ( (  set_dash_cursors934 ) ( (  self3941 ) ,  ( (  left_dash_pos972 ) ( ( ( * (  self3941 ) ) .f_buf ) ,  ( ( * (  self3941 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_935_UpdateVI ) ) );
    return ( Unit_7_Unit );
}

static  struct Pane_128 *   pane977 (    struct Editor_127 *  ed4094 ) {
    return ( & ( ( * (  ed4094 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines980 (    struct TextBuf_87 *  self3627 ) {
    return ( (  size_dash_i32185 ) ( ( (  size310 ) ( ( & ( ( * (  self3627 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_20   right_dash_pos979 (    struct TextBuf_87 *  self3635 ,    struct Pos_20  pos3637 ) {
    if ( (  cmp306 ( ( (  pos3637 ) .f_line ) , ( (  num_dash_lines980 ) ( (  self3635 ) ) ) ) != 0 ) ) {
        return ( (  mk287 ) ( ( (  num_dash_lines980 ) ( (  self3635 ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    }
    struct StrView_21  line3638 = ( (  line940 ) ( (  self3635 ) ,  ( (  pos3637 ) .f_line ) ) );
    int64_t  bi3639 = ( (  i32_dash_i64849 ) ( ( (  pos3637 ) .f_bi ) ) );
    if ( (  cmp898 ( (  bi3639 ) , ( (  size_dash_i64250 ) ( ( (  num_dash_bytes973 ) ( (  line3638 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp306 ( (  op_dash_add263 ( ( (  pos3637 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) , ( (  num_dash_lines980 ) ( (  self3635 ) ) ) ) != 0 ) ) {
            return ( (  mk287 ) ( ( (  pos3637 ) .f_line ) ,  ( (  size_dash_i32185 ) ( ( (  num_dash_bytes973 ) ( (  line3638 ) ) ) ) ) ) );
        }
        return ( (  mk287 ) ( (  op_dash_add263 ( ( (  pos3637 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    }
    int32_t  off3640 = ( (  size_dash_i32185 ) ( ( (  next_dash_char213 ) ( ( (  offset_dash_ptr318 ) ( ( ( (  line3638 ) .f_contents ) .f_ptr ) ,  (  bi3639 ) ) ) ) ) ) );
    return ( (  mk287 ) ( ( (  pos3637 ) .f_line ) ,  (  op_dash_add263 ( ( (  pos3637 ) .f_bi ) , (  off3640 ) ) ) ) );
}

static  enum Unit_7   move_dash_right978 (    struct Pane_128 *  self3938 ) {
    ( (  set_dash_cursors934 ) ( (  self3938 ) ,  ( (  right_dash_pos979 ) ( ( ( * (  self3938 ) ) .f_buf ) ,  ( ( * (  self3938 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_935_UpdateVI ) ) );
    return ( Unit_7_Unit );
}

static  int32_t   vi_dash_bi982 (    struct TextBuf_87 *  self3824 ,    int32_t  ln3826 ,    int32_t  vx3828 ) {
    int32_t  bi3829 = ( (  from_dash_integral48 ( 0 ) ) );
    int32_t  vi3830 = (  from_dash_integral48 ( 0 ) );
    struct StrViewIter_592  temp983 =  into_dash_iter594 ( ( (  chars597 ) ( ( (  line940 ) ( (  self3824 ) ,  (  ln3826 ) ) ) ) ) );
    while (true) {
        struct Maybe_595  __cond984 =  next596 (&temp983);
        if (  __cond984 .tag == 0 ) {
            break;
        }
        struct Char_57  c3832 =  __cond984 .stuff .Maybe_595_Just_s .field0;
        vi3830 = (  op_dash_add263 ( (  vi3830 ) , ( (  char_dash_screen_dash_width943 ) ( (  c3832 ) ) ) ) );
        if ( (  cmp306 ( (  vx3828 ) , (  vi3830 ) ) == 0 ) ) {
            break;
        }
        bi3829 = (  op_dash_add263 ( (  bi3829 ) , ( (  size_dash_i32185 ) ( ( (  c3832 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi3829 );
}

static  enum Unit_7   move_dash_down981 (    struct Pane_128 *  self3944 ) {
    struct Pos_20  cur3945 = ( ( * (  self3944 ) ) .f_cursor );
    if ( (  cmp306 ( (  op_dash_add263 ( ( (  cur3945 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) , ( (  num_dash_lines980 ) ( ( ( * (  self3944 ) ) .f_buf ) ) ) ) != 0 ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  vci3946 = ( ( * (  self3944 ) ) .f_vi );
    int32_t  bi3947 = ( (  vi_dash_bi982 ) ( ( ( * (  self3944 ) ) .f_buf ) ,  (  op_dash_add263 ( ( (  cur3945 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  vci3946 ) ) );
    ( (  set_dash_cursors934 ) ( (  self3944 ) ,  ( (struct Pos_20) { .f_line = (  op_dash_add263 ( ( (  cur3945 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) , .f_bi = (  bi3947 ) } ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_935_NoChanges ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   move_dash_up985 (    struct Pane_128 *  self3950 ) {
    struct Pos_20  cur3951 = ( ( * (  self3950 ) ) .f_cursor );
    if ( (  cmp306 ( ( (  cur3951 ) .f_line ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  vci3952 = ( ( * (  self3950 ) ) .f_vi );
    int32_t  bi3953 = ( (  vi_dash_bi982 ) ( ( ( * (  self3950 ) ) .f_buf ) ,  (  op_dash_sub801 ( ( (  cur3951 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  vci3952 ) ) );
    ( (  set_dash_cursors934 ) ( (  self3950 ) ,  ( (struct Pos_20) { .f_line = (  op_dash_sub801 ( ( (  cur3951 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) , .f_bi = (  bi3953 ) } ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_935_NoChanges ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   flush_dash_insert_dash_action987 (    struct TextBuf_87 *  self3708 ) {
    (*  self3708 ) .f_actions .f_input_dash_changeset = ( false );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_mode986 (    struct Pane_128 *  self3917 ,    enum Mode_129  mode3919 ) {
    if ( (  eq970 ( (  mode3919 ) , ( Mode_129_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action987 ) ( ( ( * (  self3917 ) ) .f_buf ) ) );
    }
    (*  self3917 ) .f_mode = (  mode3919 );
    return ( Unit_7_Unit );
}

enum MoveDirection_989 {
    MoveDirection_989_MoveFwd,
    MoveDirection_989_MoveBwd,
};

enum MoveTarget_990 {
    MoveTarget_990_NextWordStart,
    MoveTarget_990_NextWordEnd,
};

static  struct Pos_20   own992 (    struct Pos_20  x1251 ) {
    return (  x1251 );
}

struct env993 {
    enum MoveDirection_989  dir3976;
    ;
    ;
    struct Pos_20 *  prev3979;
    struct Pane_128 *  pane3974;
};

static  bool   is_dash_at_dash_line_dash_end995 (    struct Pane_128 *  pane3956 ,    struct Pos_20  pos3958 ) {
    return (  eq228 ( ( (  i32_dash_size251 ) ( ( (  pos3958 ) .f_bi ) ) ) , ( (  num_dash_bytes973 ) ( ( (  line940 ) ( ( ( * (  pane3956 ) ) .f_buf ) ,  ( (  pos3958 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end994 (    struct Pane_128 *  pane3961 ) {
    return ( (  is_dash_at_dash_line_dash_end995 ) ( (  pane3961 ) ,  ( ( * (  pane3961 ) ) .f_cursor ) ) );
}

struct envunion997 {
    enum Unit_7  (*fun) (  struct env993*  );
    struct env993 env;
};

static  enum Unit_7   advance998 (   struct env993* env ) {
    (* env->prev3979 ) = ( ( * ( env->pane3974 ) ) .f_cursor );
    enum MoveDirection_989  dref3981 = ( env->dir3976 );
    switch (  dref3981 ) {
        case MoveDirection_989_MoveFwd : {
            ( (  move_dash_right978 ) ( ( env->pane3974 ) ) );
            break;
        }
        case MoveDirection_989_MoveBwd : {
            ( (  move_dash_left933 ) ( ( env->pane3974 ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

enum CharType_1002 {
    CharType_1002_CharSpace,
    CharType_1002_CharWord,
    CharType_1002_CharPunctuation,
};

struct Tuple2_1003 {
    enum CharType_1002  field0;
    enum CharType_1002  field1;
};

static struct Tuple2_1003 Tuple2_1003_Tuple2 (  enum CharType_1002  field0 ,  enum CharType_1002  field1 ) {
    return ( struct Tuple2_1003 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1001 (    enum CharType_1002  l3780 ,    enum CharType_1002  r3782 ) {
    struct Tuple2_1003  dref3783 = ( ( Tuple2_1003_Tuple2 ) ( (  l3780 ) ,  (  r3782 ) ) );
    if (  dref3783 .field0 == CharType_1002_CharSpace &&  dref3783 .field1 == CharType_1002_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3783 .field0 == CharType_1002_CharWord &&  dref3783 .field1 == CharType_1002_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3783 .field0 == CharType_1002_CharPunctuation &&  dref3783 .field1 == CharType_1002_CharPunctuation ) {
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

static  struct Char_57   min1008 (    struct Char_57  l1236 ,    struct Char_57  r1238 ) {
    if ( (  cmp768 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Char_57   max1009 (    struct Char_57  l1315 ,    struct Char_57  r1317 ) {
    if ( (  cmp768 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  bool   between1007 (    struct Char_57  c1337 ,    struct Char_57  l1339 ,    struct Char_57  r1341 ) {
    struct Char_57  from1342 = ( (  min1008 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Char_57  to1343 = ( (  max1009 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp768 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp768 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_alpha1006 (    struct Char_57  c2388 ) {
    return ( ( (  cmp173 ( ( (  c2388 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between1007 ) ( (  c2388 ) ,  ( (  from_dash_charlike210 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1007 ) ( (  c2388 ) ,  ( (  from_dash_charlike210 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_digit1010 (    struct Char_57  c2391 ) {
    return ( (  eq228 ( ( (  c2391 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1007 ) ( (  c2391 ) ,  ( (  from_dash_charlike210 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1005 (    struct Char_57  c2394 ) {
    return ( ( (  is_dash_alpha1006 ) ( (  c2394 ) ) ) || ( (  is_dash_digit1010 ) ( (  c2394 ) ) ) );
}

static  bool   is_dash_whitespace1011 (    struct Char_57  c2379 ) {
    return ( ( (  eq392 ( (  c2379 ) , ( (  from_dash_charlike210 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq392 ( (  c2379 ) , ( (  from_dash_charlike210 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq392 ( (  c2379 ) , ( (  from_dash_charlike210 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_1002   char_dash_type1004 (    struct Char_57  c3786 ) {
    if ( ( ( ( (  is_dash_alphanumeric1005 ) ( (  c3786 ) ) ) || (  eq392 ( (  c3786 ) , ( (  from_dash_charlike210 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq392 ( (  c3786 ) , ( (  from_dash_charlike210 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1002_CharWord );
    } else {
        if ( ( (  is_dash_whitespace1011 ) ( (  c3786 ) ) ) ) {
            return ( CharType_1002_CharSpace );
        } else {
            return ( CharType_1002_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1000 (    struct Char_57  l3789 ,    struct Char_57  r3791 ) {
    return ( !  eq1001 ( ( (  char_dash_type1004 ) ( (  l3789 ) ) ) , ( (  char_dash_type1004 ) ( (  r3791 ) ) ) ) );
}

static  struct Char_57   or_dash_else1013 (    struct Maybe_595  self1732 ,    struct Char_57  alt1734 ) {
    struct Maybe_595  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_595_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_595_Just_t ) {
            return ( dref1735 .stuff .Maybe_595_Just_s .field0 );
        }
    }
}

static  struct Maybe_595   head1014 (    struct StrViewIter_592  it1142 ) {
    struct StrViewIter_592  temp1015 = ( (  into_dash_iter594 ) ( (  it1142 ) ) );
    return ( (  next596 ) ( ( &temp1015 ) ) );
}

static  struct Char_57   char_dash_at1012 (    struct Pane_128 *  pane3844 ,    struct Pos_20  pos3846 ) {
    struct StrView_21  line3847 = ( (  line940 ) ( ( ( * (  pane3844 ) ) .f_buf ) ,  ( (  pos3846 ) .f_line ) ) );
    return ( (  or_dash_else1013 ) ( ( (  head1014 ) ( ( (  chars597 ) ( ( (  byte_dash_substr374 ) ( (  line3847 ) ,  ( (  i32_dash_size251 ) ( ( (  pos3846 ) .f_bi ) ) ) ,  ( (  num_dash_bytes973 ) ( (  line3847 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
}

static  enum Unit_7   print1017 (    struct StrView_21  s1701 ) {
    ( (  for_dash_each591 ) ( ( (  chars597 ) ( (  s1701 ) ) ) ,  (  printf_dash_char193 ) ) );
    return ( Unit_7_Unit );
}

static  bool   undefined1018 (  ) {
    bool  temp1019;
    return (  temp1019 );
}

static  bool   todo1016 (  ) {
    ( (  print1017 ) ( ( (  from_dash_string209 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined1018 ) ( ) );
}

static  bool   reached_dash_target999 (    struct Pane_128 *  pane3966 ,    enum MoveTarget_990  target3968 ,    struct Pos_20  prev3970 ) {
    return ( {  enum MoveTarget_990  dref3971 = (  target3968 ) ;  dref3971 == MoveTarget_990_NextWordStart ? ( ( (  is_dash_word_dash_boundary1000 ) ( ( (  char_dash_at1012 ) ( (  pane3966 ) ,  (  prev3970 ) ) ) ,  ( (  char_dash_at1012 ) ( (  pane3966 ) ,  ( ( * (  pane3966 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1001 ( ( (  char_dash_type1004 ) ( ( (  char_dash_at1012 ) ( (  pane3966 ) ,  ( ( * (  pane3966 ) ) .f_cursor ) ) ) ) ) , ( CharType_1002_CharSpace ) ) ) ) ) :  dref3971 == MoveTarget_990_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1000 ) ( ( (  char_dash_at1012 ) ( (  pane3966 ) ,  (  prev3970 ) ) ) ,  ( (  char_dash_at1012 ) ( (  pane3966 ) ,  ( ( * (  pane3966 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1001 ( ( (  char_dash_type1004 ) ( ( (  char_dash_at1012 ) ( (  pane3966 ) ,  (  prev3970 ) ) ) ) ) , ( CharType_1002_CharSpace ) ) ) ) ) : ( (  todo1016 ) ( ) ) ; } );
}

struct envunion1021 {
    enum Unit_7  (*fun) (  struct env993*  );
    struct env993 env;
};

struct envunion1023 {
    enum Unit_7  (*fun) (  struct env993*  );
    struct env993 env;
};

static  enum Unit_7   advance_dash_word988 (    struct Pane_128 *  pane3974 ,    enum MoveDirection_989  dir3976 ,    enum MoveTarget_990  target3978 ) {
    struct Pos_20  temp991 = ( (  own992 ) ( ( ( * (  pane3974 ) ) .f_cursor ) ) );
    struct Pos_20 *  prev3979 = ( &temp991 );
    struct env993 envinst993 = {
        .dir3976 =  dir3976 ,
        .prev3979 =  prev3979 ,
        .pane3974 =  pane3974 ,
    };
    struct Pos_20  sel3982 = ( ( * (  pane3974 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end3983 = ( (  cursor_dash_is_dash_at_dash_line_dash_end994 ) ( (  pane3974 ) ) );
    struct envunion997  temp996 = ( (struct envunion997){ .fun = (  enum Unit_7  (*) (  struct env993*  ) )advance998 , .env =  envinst993 } );
    ( temp996.fun ( &temp996.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end3983 ) || ( (  reached_dash_target999 ) ( (  pane3974 ) ,  (  target3978 ) ,  ( * (  prev3979 ) ) ) ) ) ) {
        sel3982 = ( ( * (  pane3974 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end994 ) ( (  pane3974 ) ) ) ) {
        if ( (  eq308 ( ( ( * (  pane3974 ) ) .f_cursor ) , ( * (  prev3979 ) ) ) ) ) {
            return ( Unit_7_Unit );
        }
        struct envunion1021  temp1020 = ( (struct envunion1021){ .fun = (  enum Unit_7  (*) (  struct env993*  ) )advance998 , .env =  envinst993 } );
        ( temp1020.fun ( &temp1020.env ) );
        sel3982 = ( ( * (  pane3974 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1023  temp1022 = ( (struct envunion1023){ .fun = (  enum Unit_7  (*) (  struct env993*  ) )advance998 , .env =  envinst993 } );
        ( temp1022.fun ( &temp1022.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end994 ) ( (  pane3974 ) ) ) || ( (  reached_dash_target999 ) ( (  pane3974 ) ,  (  target3978 ) ,  ( * (  prev3979 ) ) ) ) ) ) {
            enum MoveDirection_989  dref3984 = (  dir3976 );
            switch (  dref3984 ) {
                case MoveDirection_989_MoveFwd : {
                    ( (  move_dash_left933 ) ( (  pane3974 ) ) );
                    break;
                }
                case MoveDirection_989_MoveBwd : {
                    ( (  move_dash_right978 ) ( (  pane3974 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq308 ( ( * (  prev3979 ) ) , ( ( * (  pane3974 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel969 ) ( (  pane3974 ) ,  ( ( Maybe_28_Just ) ( (  sel3982 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  size_t   size1028 (    struct List_24 *  l2133 ) {
    return ( ( * (  l2133 ) ) .f_count );
}

static  struct Changeset_26 *   offset_dash_ptr1033 (    struct Changeset_26 *  x338 ,    int64_t  count340 ) {
    struct Changeset_26  temp1034;
    return ( (struct Changeset_26 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul219 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1034 ) ) ) ) ) ) ) ) );
}

static  struct Changeset_26 *   get_dash_ptr1032 (    struct Slice_25  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp173 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic241 ) ( ( ( StrConcat_242_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string209 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_26 *  elem_dash_ptr1760 = ( (  offset_dash_ptr1033 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  struct Changeset_26 *   get_dash_ptr1031 (    struct List_24 *  list2001 ,    size_t  i2003 ) {
    if ( ( (  cmp173 ( (  i2003 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i2003 ) , ( ( * (  list2001 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic241 ) ( ( ( StrConcat_242_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2003 ) ) ) ,  ( (  from_dash_string209 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2001 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1032 ) ( ( ( * (  list2001 ) ) .f_elements ) ,  (  i2003 ) ) );
}

static  struct Changeset_26   get1030 (    struct List_24 *  list2011 ,    size_t  i2013 ) {
    return ( * ( (  get_dash_ptr1031 ) ( (  list2011 ) ,  (  i2013 ) ) ) );
}

static  struct Changeset_26   elem_dash_get1029 (    struct List_24  self2081 ,    size_t  k2083 ) {
    return ( (  get1030 ) ( ( & (  self2081 ) ) ,  (  k2083 ) ) );
}

struct SliceIter_1037 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1037   into_dash_iter1039 (    struct Slice_18  self1822 ) {
    return ( (struct SliceIter_1037) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_19 *   offset_dash_ptr1041 (    struct Action_19 *  x338 ,    int64_t  count340 ) {
    struct Action_19  temp1042;
    return ( (struct Action_19 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul219 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1042 ) ) ) ) ) ) ) ) );
}

static  struct Slice_18   subslice1040 (    struct Slice_18  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Action_19 *  begin_dash_ptr1787 = ( (  offset_dash_ptr1041 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp173 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp173 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub293 ( ( (  min320 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_1037   into_dash_iter1038 (    struct List_17  self2028 ) {
    return ( (  into_dash_iter1039 ) ( ( (  subslice1040 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

struct Maybe_1044 {
    enum {
        Maybe_1044_None_t,
        Maybe_1044_Just_t,
    } tag;
    union {
        struct {
            struct Action_19  field0;
        } Maybe_1044_Just_s;
    } stuff;
};

static struct Maybe_1044 Maybe_1044_Just (  struct Action_19  field0 ) {
    return ( struct Maybe_1044 ) { .tag = Maybe_1044_Just_t, .stuff = { .Maybe_1044_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1044   next1045 (    struct SliceIter_1037 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp173 ( (  op_dash_add221 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1044) { .tag = Maybe_1044_None_t } );
    }
    struct Action_19  elem1830 = ( * ( (  offset_dash_ptr1041 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add221 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1044_Just ) ( (  elem1830 ) ) );
}

static  struct Pos_20   action_dash_fwd1047 (   struct env95* env ,    struct TextBuf_87 *  self3691 ,    struct Action_19  action3693 ) {
    struct envunion96  temp1048 = ( (struct envunion96){ .fun = (  enum Unit_7  (*) (  struct env85*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action303 , .env =  env->envinst85 } );
    ( temp1048.fun ( &temp1048.env ,  (  self3691 ) ,  ( (  action3693 ) .f_from ) ,  ( (  action3693 ) .f_to_dash_bwd ) ,  ( (  action3693 ) .f_fwd ) ) );
    return ( (  action3693 ) .f_to_dash_fwd );
}

static  enum Unit_7   panic1050 (    struct StrView_21  errmsg1712 ) {
    ( (  print_dash_str467 ) ( ( ( StrConcat_468_StrConcat ) ( ( ( StrConcat_469_StrConcat ) ( ( (  from_dash_string209 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Action_19   undefined1054 (  ) {
    struct Action_19  temp1055;
    return (  temp1055 );
}

static  struct Action_19   or_dash_fail1053 (    struct Maybe_1044  x1725 ,    struct StrConcat_242  errmsg1727 ) {
    struct Maybe_1044  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_1044_None_t ) {
        ( (  panic241 ) ( (  errmsg1727 ) ) );
        return ( (  undefined1054 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_1044_Just_t ) {
            return ( dref1728 .stuff .Maybe_1044_Just_s .field0 );
        }
    }
}

static  struct Maybe_1044   try_dash_get1056 (    struct Slice_18  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp173 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1044) { .tag = Maybe_1044_None_t } );
    }
    struct Action_19 *  elem_dash_ptr1766 = ( (  offset_dash_ptr1041 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_1044_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  struct Action_19   get1052 (    struct Slice_18  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail1053 ) ( ( (  try_dash_get1056 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_242_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string209 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_19   elem_dash_get1051 (    struct Slice_18  self1867 ,    size_t  idx1869 ) {
    return ( (  get1052 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

static  struct Action_19   last1049 (    struct Slice_18  s1935 ) {
    if ( (  eq228 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1050 ) ( ( (  from_dash_string209 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1051 ( (  s1935 ) , (  op_dash_sub293 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_18   to_dash_slice1057 (    struct List_17  l2126 ) {
    struct Action_19 *  ptr2127 = ( ( (  l2126 ) .f_elements ) .f_ptr );
    return ( (struct Slice_18) { .f_ptr = (  ptr2127 ) , .f_count = ( (  l2126 ) .f_count ) } );
}

static  struct Maybe_110   redo1027 (   struct env99* env ,    struct TextBuf_87 *  self3718 ) {
    ( (  flush_dash_insert_dash_action987 ) ( (  self3718 ) ) );
    struct Actions_88 *  actions3719 = ( & ( ( * (  self3718 ) ) .f_actions ) );
    if ( (  cmp173 ( ( ( * (  actions3719 ) ) .f_cur ) , ( (  size1028 ) ( ( & ( ( * (  actions3719 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_110) { .tag = Maybe_110_None_t } );
    }
    struct Changeset_26  changeset3720 = (  elem_dash_get1029 ( ( ( * (  actions3719 ) ) .f_list ) , ( ( * (  actions3719 ) ) .f_cur ) ) );
    struct Pos_20  temp1035;
    struct Pos_20  to_dash_fwd3721 = (  temp1035 );
    struct SliceIter_1037  temp1036 =  into_dash_iter1038 ( ( (  changeset3720 ) .f_parts ) );
    while (true) {
        struct Maybe_1044  __cond1043 =  next1045 (&temp1036);
        if (  __cond1043 .tag == 0 ) {
            break;
        }
        struct Action_19  action3723 =  __cond1043 .stuff .Maybe_1044_Just_s .field0;
        struct envunion100  temp1046 = ( (struct envunion100){ .fun = (  struct Pos_20  (*) (  struct env95*  ,    struct TextBuf_87 *  ,    struct Action_19  ) )action_dash_fwd1047 , .env =  env->envinst95 } );
        to_dash_fwd3721 = ( temp1046.fun ( &temp1046.env ,  (  self3718 ) ,  (  action3723 ) ) );
    }
    (*  actions3719 ) .f_cur = (  op_dash_add221 ( ( ( * (  actions3719 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_19  last_dash_action3724 = ( (  last1049 ) ( ( (  to_dash_slice1057 ) ( ( (  changeset3720 ) .f_parts ) ) ) ) );
    if ( (  cmp173 ( ( (  num_dash_bytes973 ) ( ( (  last_dash_action3724 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_20  to_dash_fwd3725 = ( (  left_dash_pos972 ) ( (  self3718 ) ,  (  to_dash_fwd3721 ) ) );
        return ( ( Maybe_110_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3725 ) , .f_sel = ( ( Maybe_28_Just ) ( ( (  last_dash_action3724 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_110_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3721 ) , .f_sel = ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) } ) ) );
    }
}

struct env1059 {
    struct Pane_128 *  self4020;
    ;
};

struct envunion1060 {
    enum Unit_7  (*fun) (  struct env1059*  ,    struct Cursors_27  );
    struct env1059 env;
};

static  enum Unit_7   if_dash_just1058 (    struct Maybe_110  x1291 ,   struct envunion1060  fun1293 ) {
    struct Maybe_110  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_110_Just_t ) {
        struct envunion1060  temp1061 = (  fun1293 );
        ( temp1061.fun ( &temp1061.env ,  ( dref1294 .stuff .Maybe_110_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_110_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1062 (   struct env1059* env ,    struct Cursors_27  cursors4023 ) {
    ( (  set_dash_cursors934 ) ( ( env->self4020 ) ,  ( (  cursors4023 ) .f_cur ) ,  ( (  cursors4023 ) .f_sel ) ,  ( CursorMovement_935_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   redo1025 (   struct env115* env ,    struct Pane_128 *  self4020 ) {
    struct envunion116  temp1026 = ( (struct envunion116){ .fun = (  struct Maybe_110  (*) (  struct env99*  ,    struct TextBuf_87 *  ) )redo1027 , .env =  env->envinst99 } );
    struct Maybe_110  mcursors4021 = ( temp1026.fun ( &temp1026.env ,  ( ( * (  self4020 ) ) .f_buf ) ) );
    struct env1059 envinst1059 = {
        .self4020 =  self4020 ,
    };
    ( (  if_dash_just1058 ) ( (  mcursors4021 ) ,  ( (struct envunion1060){ .fun = (  enum Unit_7  (*) (  struct env1059*  ,    struct Cursors_27  ) )lam1062 , .env =  envinst1059 } ) ) );
    return ( Unit_7_Unit );
}

struct SliceReversedIter_1068 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1068   into_dash_iter1069 (    struct SliceReversedIter_1068  self1898 ) {
    return (  self1898 );
}

static  struct SliceReversedIter_1068   reversed1070 (    struct Slice_18  slice1895 ) {
    return ( (struct SliceReversedIter_1068) { .f_slice = (  slice1895 ) , .f_current_dash_offset = ( (  slice1895 ) .f_count ) } );
}

static  struct Maybe_1044   next1072 (    struct SliceReversedIter_1068 *  self1901 ) {
    size_t  off1902 = ( ( * (  self1901 ) ) .f_current_dash_offset );
    if ( (  eq228 ( (  off1902 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1044) { .tag = Maybe_1044_None_t } );
    }
    (*  self1901 ) .f_current_dash_offset = (  op_dash_sub293 ( (  off1902 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1044_Just ) ( (  elem_dash_get1051 ( ( ( * (  self1901 ) ) .f_slice ) , ( ( * (  self1901 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_20   action_dash_bwd1074 (   struct env93* env ,    struct TextBuf_87 *  self3686 ,    struct Action_19  action3688 ) {
    struct envunion94  temp1075 = ( (struct envunion94){ .fun = (  enum Unit_7  (*) (  struct env85*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action303 , .env =  env->envinst85 } );
    ( temp1075.fun ( &temp1075.env ,  (  self3686 ) ,  ( (  action3688 ) .f_from ) ,  ( (  action3688 ) .f_to_dash_fwd ) ,  ( (  action3688 ) .f_bwd ) ) );
    return ( (  action3688 ) .f_to_dash_bwd );
}

static  struct Maybe_110   undo1066 (   struct env97* env ,    struct TextBuf_87 *  self3711 ) {
    ( (  flush_dash_insert_dash_action987 ) ( (  self3711 ) ) );
    struct Actions_88 *  actions3712 = ( & ( ( * (  self3711 ) ) .f_actions ) );
    if ( (  eq228 ( ( ( * (  actions3712 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_110) { .tag = Maybe_110_None_t } );
    }
    (*  actions3712 ) .f_cur = (  op_dash_sub293 ( ( ( * (  actions3712 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_26  changeset3713 = (  elem_dash_get1029 ( ( ( * (  actions3712 ) ) .f_list ) , ( ( * (  actions3712 ) ) .f_cur ) ) );
    struct SliceReversedIter_1068  temp1067 =  into_dash_iter1069 ( ( (  reversed1070 ) ( ( (  to_dash_slice1057 ) ( ( (  changeset3713 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1044  __cond1071 =  next1072 (&temp1067);
        if (  __cond1071 .tag == 0 ) {
            break;
        }
        struct Action_19  action3715 =  __cond1071 .stuff .Maybe_1044_Just_s .field0;
        struct envunion98  temp1073 = ( (struct envunion98){ .fun = (  struct Pos_20  (*) (  struct env93*  ,    struct TextBuf_87 *  ,    struct Action_19  ) )action_dash_bwd1074 , .env =  env->envinst93 } );
        ( temp1073.fun ( &temp1073.env ,  (  self3711 ) ,  (  action3715 ) ) );
    }
    return ( ( Maybe_110_Just ) ( ( (  changeset3713 ) .f_before_dash_cursors ) ) );
}

struct env1077 {
    ;
    struct Pane_128 *  self4014;
};

struct envunion1078 {
    enum Unit_7  (*fun) (  struct env1077*  ,    struct Cursors_27  );
    struct env1077 env;
};

static  enum Unit_7   if_dash_just1076 (    struct Maybe_110  x1291 ,   struct envunion1078  fun1293 ) {
    struct Maybe_110  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_110_Just_t ) {
        struct envunion1078  temp1079 = (  fun1293 );
        ( temp1079.fun ( &temp1079.env ,  ( dref1294 .stuff .Maybe_110_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_110_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1080 (   struct env1077* env ,    struct Cursors_27  cursors4017 ) {
    ( (  set_dash_cursors934 ) ( ( env->self4014 ) ,  ( (  cursors4017 ) .f_cur ) ,  ( (  cursors4017 ) .f_sel ) ,  ( CursorMovement_935_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   undo1064 (   struct env113* env ,    struct Pane_128 *  self4014 ) {
    struct envunion114  temp1065 = ( (struct envunion114){ .fun = (  struct Maybe_110  (*) (  struct env97*  ,    struct TextBuf_87 *  ) )undo1066 , .env =  env->envinst97 } );
    struct Maybe_110  mcursors4015 = ( temp1065.fun ( &temp1065.env ,  ( ( * (  self4014 ) ) .f_buf ) ) );
    struct env1077 envinst1077 = {
        .self4014 =  self4014 ,
    };
    ( (  if_dash_just1076 ) ( (  mcursors4015 ) ,  ( (struct envunion1078){ .fun = (  enum Unit_7  (*) (  struct env1077*  ,    struct Cursors_27  ) )lam1080 , .env =  envinst1077 } ) ) );
    return ( Unit_7_Unit );
}

struct envunion1082 {
    enum Unit_7  (*fun) (  struct env119*  ,    struct Editor_127 *  );
    struct env119 env;
};

static  struct Tuple2_138   minmax1085 (    struct Pos_20  l1329 ,    struct Pos_20  r1331 ) {
    return ( (  cmp305 ( (  l1329 ) , (  r1331 ) ) == 0 ) ? ( ( Tuple2_138_Tuple2 ) ( (  l1329 ) ,  (  r1331 ) ) ) : ( ( Tuple2_138_Tuple2 ) ( (  r1331 ) ,  (  l1329 ) ) ) );
}

static  struct Pos_20   or_dash_else1086 (    struct Maybe_28  self1732 ,    struct Pos_20  alt1734 ) {
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

static  struct Pos_20   fst1087 (    struct Tuple2_138  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_20   snd1088 (    struct Tuple2_138  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tuple2_138   selection1084 (    struct Pane_128 *  self4026 ) {
    struct Tuple2_138  from_dash_to4027 = ( (  minmax1085 ) ( ( (  or_dash_else1086 ) ( ( ( * (  self4026 ) ) .f_sel ) ,  ( ( * (  self4026 ) ) .f_cursor ) ) ) ,  ( ( * (  self4026 ) ) .f_cursor ) ) );
    struct Pos_20  from4028 = ( (  fst1087 ) ( (  from_dash_to4027 ) ) );
    struct Pos_20  to4029 = ( (  right_dash_pos979 ) ( ( ( * (  self4026 ) ) .f_buf ) ,  ( (  snd1088 ) ( (  from_dash_to4027 ) ) ) ) );
    return ( ( Tuple2_138_Tuple2 ) ( (  from4028 ) ,  (  to4029 ) ) );
}

static  struct StrView_21   clone_dash_01092 (    struct StrView_21  s2155 ,    enum CAllocator_9  al2157 ) {
    size_t  cnt2158 = ( ( (  s2155 ) .f_contents ) .f_count );
    struct Slice_12  nus2159 = ( (  allocate342 ) ( (  al2157 ) ,  (  op_dash_add221 ( (  cnt2158 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to441 ) ( ( (  s2155 ) .f_contents ) ,  (  nus2159 ) ) );
    ( (  set351 ) ( (  nus2159 ) ,  (  cnt2158 ) ,  ( (  char_dash_u8373 ) ( ( (  from_dash_charlike210 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = ( (  nus2159 ) .f_ptr ) , .f_count = (  cnt2158 ) } ) } );
}

static  struct StrView_21   clone1091 (    struct StrView_21  s2162 ,    enum CAllocator_9  al2164 ) {
    return ( (  clone_dash_01092 ) ( (  s2162 ) ,  (  al2164 ) ) );
}

struct envunion1096 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

static  struct StrView_21   from_dash_charlike1097 (    uint8_t *  ptr77 ,    size_t  count79 ) {
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = (  ptr77 ) , .f_count = (  count79 ) } ) } );
}

struct envunion1101 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

struct envunion1103 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

struct envunion1105 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

static  struct StrView_21   str_dash_between1090 (   struct env101* env ,    struct TextBuf_87 *  self3728 ,    struct Pos_20  from3730 ,    struct Pos_20  to3732 ) {
    enum CAllocator_9  al3733 = ( ( ( * (  self3728 ) ) .f_buf ) .f_al );
    if ( (  eq309 ( ( (  from3730 ) .f_line ) , ( (  to3732 ) .f_line ) ) ) ) {
        size_t  from_dash_bi3734 = ( (  i32_dash_size251 ) ( ( (  min458 ) ( ( (  from3730 ) .f_bi ) ,  ( (  to3732 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3735 = ( (  i32_dash_size251 ) ( ( (  max953 ) ( ( (  from3730 ) .f_bi ) ,  ( (  to3732 ) .f_bi ) ) ) ) );
        return ( (  clone1091 ) ( ( (  byte_dash_substr374 ) ( ( (  line940 ) ( (  self3728 ) ,  ( (  from3730 ) .f_line ) ) ) ,  (  from_dash_bi3734 ) ,  (  to_dash_bi3735 ) ) ) ,  (  al3733 ) ) );
    } else {
        struct Pos_20  from_dash_pos3736 = ( (  min304 ) ( (  from3730 ) ,  (  to3732 ) ) );
        struct Pos_20  to_dash_pos3737 = ( (  max307 ) ( (  from3730 ) ,  (  to3732 ) ) );
        struct List_11  temp1093 = ( (  mk272 ) ( (  al3733 ) ) );
        struct List_11 *  sb3738 = ( &temp1093 );
        struct StrView_21  first_dash_line3739 = ( (  line940 ) ( (  self3728 ) ,  ( (  from_dash_pos3736 ) .f_line ) ) );
        struct envunion102  temp1094 = ( (struct envunion102){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all327 , .env =  env->envinst40 } );
        ( temp1094.fun ( &temp1094.env ,  (  sb3738 ) ,  ( ( (  byte_dash_substr374 ) ( (  first_dash_line3739 ) ,  ( (  i32_dash_size251 ) ( ( (  from_dash_pos3736 ) .f_bi ) ) ) ,  ( (  num_dash_bytes973 ) ( (  first_dash_line3739 ) ) ) ) ) .f_contents ) ) );
        struct envunion1096  temp1095 = ( (struct envunion1096){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all327 , .env =  env->envinst40 } );
        ( temp1095.fun ( &temp1095.env ,  (  sb3738 ) ,  ( ( ( (  from_dash_charlike1097 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_678  temp1098 =  into_dash_iter680 ( ( (  to683 ) ( (  op_dash_add263 ( ( (  from_dash_pos3736 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  op_dash_sub801 ( ( (  to_dash_pos3737 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_261  __cond1099 =  next681 (&temp1098);
            if (  __cond1099 .tag == 0 ) {
                break;
            }
            int32_t  i3741 =  __cond1099 .stuff .Maybe_261_Just_s .field0;
            struct envunion1101  temp1100 = ( (struct envunion1101){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all327 , .env =  env->envinst40 } );
            ( temp1100.fun ( &temp1100.env ,  (  sb3738 ) ,  ( ( (  line940 ) ( (  self3728 ) ,  (  i3741 ) ) ) .f_contents ) ) );
            struct envunion1103  temp1102 = ( (struct envunion1103){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all327 , .env =  env->envinst40 } );
            ( temp1102.fun ( &temp1102.env ,  (  sb3738 ) ,  ( ( ( (  from_dash_charlike1097 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1105  temp1104 = ( (struct envunion1105){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all327 , .env =  env->envinst40 } );
        ( temp1104.fun ( &temp1104.env ,  (  sb3738 ) ,  ( ( (  byte_dash_substr374 ) ( ( (  line940 ) ( (  self3728 ) ,  ( (  to_dash_pos3737 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size251 ) ( ( (  to_dash_pos3737 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes941 ) ( ( (  to_dash_slice321 ) ( ( * (  sb3738 ) ) ) ) ) );
    }
}

struct env1107 {
    struct Editor_127 *  ed4097;
    ;
};

struct envunion1108 {
    enum Unit_7  (*fun) (  struct env1107*  ,    struct StrView_21  );
    struct env1107 env;
};

static  enum Unit_7   if_dash_just1106 (    struct Maybe_131  x1291 ,   struct envunion1108  fun1293 ) {
    struct Maybe_131  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_131_Just_t ) {
        struct envunion1108  temp1109 = (  fun1293 );
        ( temp1109.fun ( &temp1109.env ,  ( dref1294 .stuff .Maybe_131_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_131_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1110 (   struct env1107* env ,    struct StrView_21  cp4101 ) {
    ( (  free927 ) ( (  cp4101 ) ,  ( ( * ( env->ed4097 ) ) .f_al ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   copy_dash_selection_dash_to_dash_clipboard1083 (   struct env119* env ,    struct Editor_127 *  ed4097 ) {
    struct Tuple2_138  from_dash_to4098 = ( (  selection1084 ) ( ( (  pane977 ) ( (  ed4097 ) ) ) ) );
    struct envunion120  temp1089 = ( (struct envunion120){ .fun = (  struct StrView_21  (*) (  struct env101*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct Pos_20  ) )str_dash_between1090 , .env =  env->envinst101 } );
    struct StrView_21  cpd4099 = ( temp1089.fun ( &temp1089.env ,  ( ( ( * (  ed4097 ) ) .f_pane ) .f_buf ) ,  ( (  fst1087 ) ( (  from_dash_to4098 ) ) ) ,  ( (  snd1088 ) ( (  from_dash_to4098 ) ) ) ) );
    struct env1107 envinst1107 = {
        .ed4097 =  ed4097 ,
    };
    ( (  if_dash_just1106 ) ( ( ( * (  ed4097 ) ) .f_clipboard ) ,  ( (struct envunion1108){ .fun = (  enum Unit_7  (*) (  struct env1107*  ,    struct StrView_21  ) )lam1110 , .env =  envinst1107 } ) ) );
    (*  ed4097 ) .f_clipboard = ( ( Maybe_131_Just ) ( (  cpd4099 ) ) );
    return ( Unit_7_Unit );
}

struct envunion1112 {
    enum Unit_7  (*fun) (  struct env117*  ,    struct Pane_128 *  ,    struct Tuple2_138  ,    struct StrView_21  );
    struct env117 env;
};

struct SliceIter_1119 {
    struct Slice_25  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1118 {
    struct SliceIter_1119  field0;
    size_t  field1;
};

static struct Drop_1118 Drop_1118_Drop (  struct SliceIter_1119  field0 ,  size_t  field1 ) {
    return ( struct Drop_1118 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1118   into_dash_iter1120 (    struct Drop_1118  self845 ) {
    return (  self845 );
}

static  struct SliceIter_1119   into_dash_iter1123 (    struct Slice_25  self1822 ) {
    return ( (struct SliceIter_1119) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Slice_25   subslice1124 (    struct Slice_25  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Changeset_26 *  begin_dash_ptr1787 = ( (  offset_dash_ptr1033 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp173 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp173 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_25) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub293 ( ( (  min320 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_25) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_1119   into_dash_iter1122 (    struct List_24  self2028 ) {
    return ( (  into_dash_iter1123 ) ( ( (  subslice1124 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

static  struct Drop_1118   drop1121 (    struct List_24  iterable852 ,    size_t  i854 ) {
    struct SliceIter_1119  it855 = ( (  into_dash_iter1122 ) ( (  iterable852 ) ) );
    return ( ( Drop_1118_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

struct Maybe_1126 {
    enum {
        Maybe_1126_None_t,
        Maybe_1126_Just_t,
    } tag;
    union {
        struct {
            struct Changeset_26  field0;
        } Maybe_1126_Just_s;
    } stuff;
};

static struct Maybe_1126 Maybe_1126_Just (  struct Changeset_26  field0 ) {
    return ( struct Maybe_1126 ) { .tag = Maybe_1126_Just_t, .stuff = { .Maybe_1126_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1126   next1128 (    struct SliceIter_1119 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp173 ( (  op_dash_add221 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1126) { .tag = Maybe_1126_None_t } );
    }
    struct Changeset_26  elem1830 = ( * ( (  offset_dash_ptr1033 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add221 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1126_Just ) ( (  elem1830 ) ) );
}

static  struct Maybe_1126   next1127 (    struct Drop_1118 *  dref847 ) {
    while ( (  cmp173 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1128 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub293 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1128 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

struct env1131 {
    enum CAllocator_9  al3600;
    ;
};

struct envunion1132 {
    enum Unit_7  (*fun) (  struct env1131*  ,    struct Action_19  );
    struct env1131 env;
};

static  enum Unit_7   for_dash_each1130 (    struct List_17  iterable1074 ,   struct envunion1132  fun1076 ) {
    struct SliceIter_1037  temp1133 = ( (  into_dash_iter1038 ) ( (  iterable1074 ) ) );
    struct SliceIter_1037 *  it1077 = ( &temp1133 );
    while ( ( true ) ) {
        struct Maybe_1044  dref1078 = ( (  next1045 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1044_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1044_Just_t ) {
                struct envunion1132  temp1134 = (  fun1076 );
                ( temp1134.fun ( &temp1134.env ,  ( dref1078 .stuff .Maybe_1044_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_action1136 (    struct Action_19  action3593 ,    enum CAllocator_9  al3595 ) {
    ( (  free927 ) ( ( (  action3593 ) .f_fwd ) ,  (  al3595 ) ) );
    ( (  free927 ) ( ( (  action3593 ) .f_bwd ) ,  (  al3595 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1135 (   struct env1131* env ,    struct Action_19  a3602 ) {
    return ( (  free_dash_action1136 ) ( (  a3602 ) ,  ( env->al3600 ) ) );
}

static  void *   cast_dash_ptr1139 (    struct Action_19 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free1138 (    enum CAllocator_9  dref1959 ,    struct Slice_18  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1139 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free1137 (    struct List_17 *  list2035 ) {
    ( (  free1138 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( ( * (  list2035 ) ) .f_elements ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_changeset1129 (    struct Changeset_26  chs3598 ,    enum CAllocator_9  al3600 ) {
    struct env1131 envinst1131 = {
        .al3600 =  al3600 ,
    };
    ( (  for_dash_each1130 ) ( ( (  chs3598 ) .f_parts ) ,  ( (struct envunion1132){ .fun = (  enum Unit_7  (*) (  struct env1131*  ,    struct Action_19  ) )lam1135 , .env =  envinst1131 } ) ) );
    ( (  free1137 ) ( ( & ( (  chs3598 ) .f_parts ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   trim1140 (    struct List_24 *  l2115 ,    size_t  new_dash_count2117 ) {
    (*  l2115 ) .f_count = ( (  min320 ) ( (  new_dash_count2117 ) ,  ( ( * (  l2115 ) ) .f_count ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   trim_dash_actions1116 (    struct Actions_88 *  actions3609 ) {
    enum CAllocator_9  al3610 = ( ( ( * (  actions3609 ) ) .f_list ) .f_al );
    size_t  cur3611 = ( ( * (  actions3609 ) ) .f_cur );
    struct Drop_1118  temp1117 =  into_dash_iter1120 ( ( (  drop1121 ) ( ( ( * (  actions3609 ) ) .f_list ) ,  (  cur3611 ) ) ) );
    while (true) {
        struct Maybe_1126  __cond1125 =  next1127 (&temp1117);
        if (  __cond1125 .tag == 0 ) {
            break;
        }
        struct Changeset_26  action3613 =  __cond1125 .stuff .Maybe_1126_Just_s .field0;
        ( (  free_dash_changeset1129 ) ( (  action3613 ) ,  (  al3610 ) ) );
    }
    ( (  trim1140 ) ( ( & ( ( * (  actions3609 ) ) .f_list ) ) ,  (  cur3611 ) ) );
    return ( Unit_7_Unit );
}

static  struct Maybe_131   head1142 (    struct SplitIter_381  it1142 ) {
    struct SplitIter_381  temp1143 = ( (  into_dash_iter388 ) ( (  it1142 ) ) );
    return ( (  next402 ) ( ( &temp1143 ) ) );
}

static  struct Maybe_131   head1145 (    struct Drop_380  it1142 ) {
    struct Drop_380  temp1146 = ( (  into_dash_iter386 ) ( (  it1142 ) ) );
    return ( (  next401 ) ( ( &temp1146 ) ) );
}

static  bool   null1144 (    struct Drop_380  it1151 ) {
    struct Maybe_131  dref1152 = ( (  head1145 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_131_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Tuple2_399   undefined1148 (  ) {
    struct Tuple2_399  temp1149;
    return (  temp1149 );
}

static  struct Tuple2_399   or_dash_fail1147 (    struct Maybe_398  x1725 ,    struct StrView_21  errmsg1727 ) {
    struct Maybe_398  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_398_None_t ) {
        ( (  panic1050 ) ( (  errmsg1727 ) ) );
        return ( (  undefined1148 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_398_Just_t ) {
            return ( dref1728 .stuff .Maybe_398_Just_s .field0 );
        }
    }
}

static  struct Maybe_398   reduce1151 (    struct Zip_379  iterable1093 ,    struct Maybe_398  base1095 ,    struct Maybe_398 (*  fun1097 )(    struct Tuple2_399  ,    struct Maybe_398  ) ) {
    struct Maybe_398  x1098 = (  base1095 );
    struct Zip_379  it1099 = ( (  into_dash_iter384 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_398  dref1100 = ( (  next400 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_398_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_398_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_398_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1152 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1152);
    exit ( 1 );
    ( Unit_7_Unit );
    struct Maybe_398  temp1153;
    return (  temp1153 );
}

static  struct Maybe_398   lam1154 (    struct Tuple2_399  e1147 ,    struct Maybe_398  dref1148 ) {
    return ( ( Maybe_398_Just ) ( (  e1147 ) ) );
}

static  struct Maybe_398   last1150 (    struct Zip_379  it1145 ) {
    return ( (  reduce1151 ) ( (  it1145 ) ,  ( (struct Maybe_398) { .tag = Maybe_398_None_t } ) ,  (  lam1154 ) ) );
}

static  int32_t   snd1155 (    struct Tuple2_399  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct StrView_21   fst1156 (    struct Tuple2_399  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_20   pos_dash_after_dash_str1141 (    struct TextBuf_87 *  self3696 ,    struct StrView_21  bytes3698 ,    struct Pos_20  from3700 ) {
    struct SplitIter_381  lines3701 = ( (  split_dash_by_dash_each389 ) ( (  bytes3698 ) ,  ( (  from_dash_charlike210 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_21  first_dash_line3702 = ( (  or_dash_else364 ) ( ( (  head1142 ) ( (  lines3701 ) ) ) ,  ( (  from_dash_string209 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_380  headless3703 = ( (  drop387 ) ( (  lines3701 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1144 ) ( (  headless3703 ) ) ) ) {
        struct Pos_20  next_dash_pos3704 = ( (  mk287 ) ( ( (  from3700 ) .f_line ) ,  (  op_dash_add263 ( ( (  from3700 ) .f_bi ) , ( (  size_dash_i32185 ) ( ( (  num_dash_bytes973 ) ( (  first_dash_line3702 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3704 );
    } else {
        struct Tuple2_399  last_dash_line3705 = ( (  or_dash_fail1147 ) ( ( (  last1150 ) ( ( (  zip385 ) ( (  headless3703 ) ,  ( (  from268 ) ( (  op_dash_add263 ( ( (  from3700 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string209 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk287 ) ( ( (  snd1155 ) ( (  last_dash_line3705 ) ) ) ,  ( (  size_dash_i32185 ) ( ( (  num_dash_bytes973 ) ( ( (  fst1156 ) ( (  last_dash_line3705 ) ) ) ) ) ) ) ) );
    }
}

static  bool   is_dash_none1158 (    struct Maybe_110  m1264 ) {
    struct Maybe_110  dref1265 = (  m1264 );
    if ( dref1265.tag == Maybe_110_None_t ) {
        return ( true );
    }
    else {
        if ( dref1265.tag == Maybe_110_Just_t ) {
            return ( false );
        }
    }
}

static  struct Changeset_26 *   last_dash_ptr1159 (    struct Slice_25  s1938 ) {
    if ( (  eq228 ( ( (  s1938 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1050 ) ( ( (  from_dash_string209 ) ( ( "(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1032 ) ( (  s1938 ) ,  (  op_dash_sub293 ( ( (  s1938 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_25   to_dash_slice1160 (    struct List_24  l2126 ) {
    struct Changeset_26 *  ptr2127 = ( ( (  l2126 ) .f_elements ) .f_ptr );
    return ( (struct Slice_25) { .f_ptr = (  ptr2127 ) , .f_count = ( (  l2126 ) .f_count ) } );
}

struct TypeSize_1167 {
    size_t  f_size;
};

static  struct TypeSize_1167   get_dash_typesize1166 (  ) {
    struct Action_19  temp1168;
    return ( (struct TypeSize_1167) { .f_size = ( sizeof( ( (  temp1168 ) ) ) ) } );
}

static  struct Action_19 *   cast_dash_ptr1169 (    void *  p359 ) {
    return ( (struct Action_19 * ) (  p359 ) );
}

static  struct Slice_18   allocate1165 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize1166 ) ( ) ) ) .f_size );
    struct Action_19 *  ptr1957 = ( (  cast_dash_ptr1169 ) ( ( ( malloc ) ( (  op_dash_mul234 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_18) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env1170 {
    struct Slice_18  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_1172 {
    struct Action_19  field0;
    int32_t  field1;
};

static struct Tuple2_1172 Tuple2_1172_Tuple2 (  struct Action_19  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1172 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1171 {
    enum Unit_7  (*fun) (  struct env1170*  ,    struct Tuple2_1172  );
    struct env1170 env;
};

static  struct Action_19 *   get_dash_ptr1175 (    struct Slice_18  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp173 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic241 ) ( ( ( StrConcat_242_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string209 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_19 *  elem_dash_ptr1760 = ( (  offset_dash_ptr1041 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set1174 (    struct Slice_18  slice1774 ,    size_t  i1776 ,    struct Action_19  x1778 ) {
    struct Action_19 *  ep1779 = ( (  get_dash_ptr1175 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1173 (   struct env1170* env ,    struct Tuple2_1172  dref2043 ) {
    return ( (  set1174 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size251 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct Zip_1177 {
    struct SliceIter_1037  f_left_dash_it;
    struct FromIter_255  f_right_dash_it;
};

static  struct Zip_1177   into_dash_iter1179 (    struct Zip_1177  self911 ) {
    return (  self911 );
}

struct Maybe_1180 {
    enum {
        Maybe_1180_None_t,
        Maybe_1180_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1172  field0;
        } Maybe_1180_Just_s;
    } stuff;
};

static struct Maybe_1180 Maybe_1180_Just (  struct Tuple2_1172  field0 ) {
    return ( struct Maybe_1180 ) { .tag = Maybe_1180_Just_t, .stuff = { .Maybe_1180_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1180   next1181 (    struct Zip_1177 *  self914 ) {
    struct Zip_1177  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1044  dref916 = ( (  next1045 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1044_None_t ) {
            return ( (struct Maybe_1180) { .tag = Maybe_1180_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1044_Just_t ) {
                struct Maybe_261  dref918 = ( (  next262 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_261_None_t ) {
                    return ( (struct Maybe_1180) { .tag = Maybe_1180_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_261_Just_t ) {
                        ( (  next1045 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next262 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1180_Just ) ( ( ( Tuple2_1172_Tuple2 ) ( ( dref916 .stuff .Maybe_1044_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_261_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each1176 (    struct Zip_1177  iterable1074 ,   struct envunion1171  fun1076 ) {
    struct Zip_1177  temp1178 = ( (  into_dash_iter1179 ) ( (  iterable1074 ) ) );
    struct Zip_1177 *  it1077 = ( &temp1178 );
    while ( ( true ) ) {
        struct Maybe_1180  dref1078 = ( (  next1181 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1180_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1180_Just_t ) {
                struct envunion1171  temp1182 = (  fun1076 );
                ( temp1182.fun ( &temp1182.env ,  ( dref1078 .stuff .Maybe_1180_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_1177   zip1183 (    struct Slice_18  left922 ,    struct FromIter_255  right924 ) {
    struct SliceIter_1037  left_dash_it925 = ( (  into_dash_iter1039 ) ( (  left922 ) ) );
    struct FromIter_255  right_dash_it926 = ( (  into_dash_iter267 ) ( (  right924 ) ) );
    return ( (struct Zip_1177) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   grow_dash_if_dash_full1164 (   struct env3* env ,    struct List_17 *  list2041 ) {
    if ( (  eq228 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate1165 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq228 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_18  new_dash_slice2042 = ( (  allocate1165 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul234 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env1170 envinst1170 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion1171  fun2046 = ( (struct envunion1171){ .fun = (  enum Unit_7  (*) (  struct env1170*  ,    struct Tuple2_1172  ) )lam1173 , .env =  envinst1170 } );
            ( (  for_dash_each1176 ) ( ( (  zip1183 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from268 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free1138 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add1162 (   struct env15* env ,    struct List_17 *  list2049 ,    struct Action_19  elem2051 ) {
    struct envunion16  temp1163 = ( (struct envunion16){ .fun = (  enum Unit_7  (*) (  struct env3*  ,    struct List_17 *  ) )grow_dash_if_dash_full1164 , .env =  env->envinst3 } );
    ( temp1163.fun ( &temp1163.env ,  (  list2049 ) ) );
    ( (  set1174 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add221 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  void *   cast_dash_ptr1190 (    struct Action_19 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1191 (    struct Action_19 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Action_19 *   zeroed1188 (  ) {
    struct Action_19 *  temp1189;
    struct Action_19 *  x570 = (  temp1189 );
    ( ( memset ) ( ( (  cast_dash_ptr1190 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of1191 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Action_19 *   null_dash_ptr1187 (  ) {
    return ( (  zeroed1188 ) ( ) );
}

static  struct Slice_18   empty1186 (  ) {
    return ( (struct Slice_18) { .f_ptr = ( (  null_dash_ptr1187 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_17   mk1185 (    enum CAllocator_9  al2031 ) {
    struct Slice_18  elements2032 = ( (  empty1186 ) ( ) );
    return ( (struct List_17) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_27   or_dash_else1192 (    struct Maybe_110  self1732 ,    struct Cursors_27  alt1734 ) {
    struct Maybe_110  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_110_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_110_Just_t ) {
            return ( dref1735 .stuff .Maybe_110_Just_s .field0 );
        }
    }
}

struct envunion1194 {
    enum Unit_7  (*fun) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  );
    struct env15 env;
};

struct TypeSize_1201 {
    size_t  f_size;
};

static  struct TypeSize_1201   get_dash_typesize1200 (  ) {
    struct Changeset_26  temp1202;
    return ( (struct TypeSize_1201) { .f_size = ( sizeof( ( (  temp1202 ) ) ) ) } );
}

static  struct Changeset_26 *   cast_dash_ptr1203 (    void *  p359 ) {
    return ( (struct Changeset_26 * ) (  p359 ) );
}

static  struct Slice_25   allocate1199 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize1200 ) ( ) ) ) .f_size );
    struct Changeset_26 *  ptr1957 = ( (  cast_dash_ptr1203 ) ( ( ( malloc ) ( (  op_dash_mul234 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_25) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env1204 {
    struct Slice_25  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_1206 {
    struct Changeset_26  field0;
    int32_t  field1;
};

static struct Tuple2_1206 Tuple2_1206_Tuple2 (  struct Changeset_26  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1206 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1205 {
    enum Unit_7  (*fun) (  struct env1204*  ,    struct Tuple2_1206  );
    struct env1204 env;
};

static  enum Unit_7   set1208 (    struct Slice_25  slice1774 ,    size_t  i1776 ,    struct Changeset_26  x1778 ) {
    struct Changeset_26 *  ep1779 = ( (  get_dash_ptr1032 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1207 (   struct env1204* env ,    struct Tuple2_1206  dref2043 ) {
    return ( (  set1208 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size251 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct Zip_1210 {
    struct SliceIter_1119  f_left_dash_it;
    struct FromIter_255  f_right_dash_it;
};

static  struct Zip_1210   into_dash_iter1212 (    struct Zip_1210  self911 ) {
    return (  self911 );
}

struct Maybe_1213 {
    enum {
        Maybe_1213_None_t,
        Maybe_1213_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1206  field0;
        } Maybe_1213_Just_s;
    } stuff;
};

static struct Maybe_1213 Maybe_1213_Just (  struct Tuple2_1206  field0 ) {
    return ( struct Maybe_1213 ) { .tag = Maybe_1213_Just_t, .stuff = { .Maybe_1213_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1213   next1214 (    struct Zip_1210 *  self914 ) {
    struct Zip_1210  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1126  dref916 = ( (  next1128 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1126_None_t ) {
            return ( (struct Maybe_1213) { .tag = Maybe_1213_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1126_Just_t ) {
                struct Maybe_261  dref918 = ( (  next262 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_261_None_t ) {
                    return ( (struct Maybe_1213) { .tag = Maybe_1213_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_261_Just_t ) {
                        ( (  next1128 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next262 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1213_Just ) ( ( ( Tuple2_1206_Tuple2 ) ( ( dref916 .stuff .Maybe_1126_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_261_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each1209 (    struct Zip_1210  iterable1074 ,   struct envunion1205  fun1076 ) {
    struct Zip_1210  temp1211 = ( (  into_dash_iter1212 ) ( (  iterable1074 ) ) );
    struct Zip_1210 *  it1077 = ( &temp1211 );
    while ( ( true ) ) {
        struct Maybe_1213  dref1078 = ( (  next1214 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1213_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1213_Just_t ) {
                struct envunion1205  temp1215 = (  fun1076 );
                ( temp1215.fun ( &temp1215.env ,  ( dref1078 .stuff .Maybe_1213_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_1210   zip1216 (    struct Slice_25  left922 ,    struct FromIter_255  right924 ) {
    struct SliceIter_1119  left_dash_it925 = ( (  into_dash_iter1123 ) ( (  left922 ) ) );
    struct FromIter_255  right_dash_it926 = ( (  into_dash_iter267 ) ( (  right924 ) ) );
    return ( (struct Zip_1210) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr1218 (    struct Changeset_26 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free1217 (    enum CAllocator_9  dref1959 ,    struct Slice_25  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1218 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   grow_dash_if_dash_full1198 (   struct env4* env ,    struct List_24 *  list2041 ) {
    if ( (  eq228 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate1199 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq228 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_25  new_dash_slice2042 = ( (  allocate1199 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul234 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env1204 envinst1204 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion1205  fun2046 = ( (struct envunion1205){ .fun = (  enum Unit_7  (*) (  struct env1204*  ,    struct Tuple2_1206  ) )lam1207 , .env =  envinst1204 } );
            ( (  for_dash_each1209 ) ( ( (  zip1216 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from268 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free1217 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add1196 (   struct env22* env ,    struct List_24 *  list2049 ,    struct Changeset_26  elem2051 ) {
    struct envunion23  temp1197 = ( (struct envunion23){ .fun = (  enum Unit_7  (*) (  struct env4*  ,    struct List_24 *  ) )grow_dash_if_dash_full1198 , .env =  env->envinst4 } );
    ( temp1197.fun ( &temp1197.env ,  (  list2049 ) ) );
    ( (  set1208 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add221 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Maybe_110   change1115 (   struct env103* env ,    struct TextBuf_87 *  self3758 ,    struct Pos_20  from3760 ,    struct Pos_20  to3762 ,    struct StrView_21  bytes3764 ,    struct Maybe_110  before_dash_cursors3766 ) {
    struct Pos_20  from_dash_pos3767 = ( (  min304 ) ( (  from3760 ) ,  (  to3762 ) ) );
    struct Pos_20  to_dash_pos3768 = ( (  max307 ) ( (  from3760 ) ,  (  to3762 ) ) );
    struct Actions_88 *  actions3769 = ( & ( ( * (  self3758 ) ) .f_actions ) );
    ( (  trim_dash_actions1116 ) ( (  actions3769 ) ) );
    struct envunion104  temp1157 = ( (struct envunion104){ .fun = (  struct StrView_21  (*) (  struct env101*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct Pos_20  ) )str_dash_between1090 , .env =  env->envinst101 } );
    struct Action_19  action3770 = ( (struct Action_19) { .f_from = (  from3760 ) , .f_fwd = ( (  clone1091 ) ( (  bytes3764 ) ,  ( ( * (  self3758 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1141 ) ( (  self3758 ) ,  (  bytes3764 ) ,  (  from_dash_pos3767 ) ) ) , .f_bwd = ( temp1157.fun ( &temp1157.env ,  (  self3758 ) ,  (  from_dash_pos3767 ) ,  (  to_dash_pos3768 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3768 ) } );
    enum CAllocator_9  al3771 = ( ( ( * (  actions3769 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in3772 = ( (  is_dash_none1158 ) ( (  before_dash_cursors3766 ) ) );
    if ( ( ( ( ( * (  self3758 ) ) .f_actions ) .f_input_dash_changeset ) && (  is_dash_typed_dash_in3772 ) ) ) {
        struct Changeset_26 *  last_dash_changeset3773 = ( (  last_dash_ptr1159 ) ( ( (  to_dash_slice1160 ) ( ( ( * (  actions3769 ) ) .f_list ) ) ) ) );
        struct envunion106  temp1161 = ( (struct envunion106){ .fun = (  enum Unit_7  (*) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  ) )add1162 , .env =  env->envinst15 } );
        ( temp1161.fun ( &temp1161.env ,  ( & ( ( * (  last_dash_changeset3773 ) ) .f_parts ) ) ,  (  action3770 ) ) );
    } else {
        struct Changeset_26  temp1184 = ( (struct Changeset_26) { .f_parts = ( (  mk1185 ) ( (  al3771 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1192 ) ( (  before_dash_cursors3766 ) ,  ( (struct Cursors_27) { .f_cur = (  from3760 ) , .f_sel = ( (  eq308 ( (  from3760 ) , (  to3762 ) ) ) ? ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) : ( ( Maybe_28_Just ) ( (  to3762 ) ) ) ) } ) ) ) } );
        struct Changeset_26 *  changeset3774 = ( &temp1184 );
        struct envunion1194  temp1193 = ( (struct envunion1194){ .fun = (  enum Unit_7  (*) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  ) )add1162 , .env =  env->envinst15 } );
        ( temp1193.fun ( &temp1193.env ,  ( & ( ( * (  changeset3774 ) ) .f_parts ) ) ,  (  action3770 ) ) );
        struct envunion107  temp1195 = ( (struct envunion107){ .fun = (  enum Unit_7  (*) (  struct env22*  ,    struct List_24 *  ,    struct Changeset_26  ) )add1196 , .env =  env->envinst22 } );
        ( temp1195.fun ( &temp1195.env ,  ( & ( ( * (  actions3769 ) ) .f_list ) ) ,  ( * (  changeset3774 ) ) ) );
        (*  actions3769 ) .f_input_dash_changeset = (  is_dash_typed_dash_in3772 );
        (*  actions3769 ) .f_cur = (  op_dash_add221 ( ( ( * (  actions3769 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion105  temp1219 = ( (struct envunion105){ .fun = (  struct Pos_20  (*) (  struct env95*  ,    struct TextBuf_87 *  ,    struct Action_19  ) )action_dash_fwd1047 , .env =  env->envinst95 } );
    struct Pos_20  to_dash_fwd3775 = ( temp1219.fun ( &temp1219.env ,  (  self3758 ) ,  (  action3770 ) ) );
    if ( (  cmp173 ( ( (  num_dash_bytes973 ) ( ( (  action3770 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_20  to_dash_fwd3776 = ( (  left_dash_pos972 ) ( (  self3758 ) ,  (  to_dash_fwd3775 ) ) );
        return ( ( Maybe_110_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3776 ) , .f_sel = ( ( Maybe_28_Just ) ( ( (  action3770 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_110_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3775 ) , .f_sel = ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) } ) ) );
    }
}

struct env1221 {
    struct Pane_128 *  self4032;
    ;
};

struct envunion1222 {
    enum Unit_7  (*fun) (  struct env1221*  ,    struct Cursors_27  );
    struct env1221 env;
};

static  enum Unit_7   if_dash_just1220 (    struct Maybe_110  x1291 ,   struct envunion1222  fun1293 ) {
    struct Maybe_110  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_110_Just_t ) {
        struct envunion1222  temp1223 = (  fun1293 );
        ( temp1223.fun ( &temp1223.env ,  ( dref1294 .stuff .Maybe_110_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_110_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1224 (   struct env1221* env ,    struct Cursors_27  cursors4039 ) {
    ( (  set_dash_cursors934 ) ( ( env->self4032 ) ,  ( (  cursors4039 ) .f_cur ) ,  ( (  cursors4039 ) .f_sel ) ,  ( CursorMovement_935_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   replace_dash_selection1113 (   struct env117* env ,    struct Pane_128 *  self4032 ,    struct Tuple2_138  pos_prime_s4034 ,    struct StrView_21  cp4036 ) {
    struct envunion118  temp1114 = ( (struct envunion118){ .fun = (  struct Maybe_110  (*) (  struct env103*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_110  ) )change1115 , .env =  env->envinst103 } );
    struct Maybe_110  mcursors4037 = ( temp1114.fun ( &temp1114.env ,  ( ( * (  self4032 ) ) .f_buf ) ,  ( (  fst1087 ) ( (  pos_prime_s4034 ) ) ) ,  ( (  snd1088 ) ( (  pos_prime_s4034 ) ) ) ,  (  cp4036 ) ,  ( ( Maybe_110_Just ) ( ( (struct Cursors_27) { .f_cur = ( ( * (  self4032 ) ) .f_cursor ) , .f_sel = ( ( * (  self4032 ) ) .f_sel ) } ) ) ) ) );
    struct env1221 envinst1221 = {
        .self4032 =  self4032 ,
    };
    ( (  if_dash_just1220 ) ( (  mcursors4037 ) ,  ( (struct envunion1222){ .fun = (  enum Unit_7  (*) (  struct env1221*  ,    struct Cursors_27  ) )lam1224 , .env =  envinst1221 } ) ) );
    return ( Unit_7_Unit );
}

struct envunion1226 {
    enum Unit_7  (*fun) (  struct env119*  ,    struct Editor_127 *  );
    struct env119 env;
};

struct envunion1228 {
    enum Unit_7  (*fun) (  struct env117*  ,    struct Pane_128 *  ,    struct Tuple2_138  ,    struct StrView_21  );
    struct env117 env;
};

static  struct StrBuilder_54   mk1235 (    enum CAllocator_9  al2781 ) {
    return ( (struct StrBuilder_54) { .f_chars = ( (  mk272 ) ( (  al2781 ) ) ) } );
}

struct IntStrIter_1241 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1240 {
    struct StrViewIter_592  f_left;
    struct IntStrIter_1241  f_right;
};

struct StrConcatIter_1239 {
    struct StrConcatIter_1240  f_left;
    struct StrViewIter_592  f_right;
};

struct env1242 {
    struct env52 envinst52;
    struct StrBuilder_54 *  builder2749;
};

struct envunion1243 {
    enum Unit_7  (*fun) (  struct env1242*  ,    struct Char_57  );
    struct env1242 env;
};

static  struct StrConcatIter_1239   into_dash_iter1245 (    struct StrConcatIter_1239  self1491 ) {
    return (  self1491 );
}

struct env1251 {
    ;
    size_t  base1210;
};

struct envunion1252 {
    size_t  (*fun) (  struct env1251*  ,    int32_t  ,    size_t  );
    struct env1251 env;
};

static  size_t   reduce1250 (    struct Range_675  iterable1093 ,    size_t  base1095 ,   struct envunion1252  fun1097 ) {
    size_t  x1098 = (  base1095 );
    struct RangeIter_678  it1099 = ( (  into_dash_iter680 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_261  dref1100 = ( (  next681 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_261_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_261_Just_t ) {
                struct envunion1252  temp1253 = (  fun1097 );
                x1098 = ( temp1253.fun ( &temp1253.env ,  ( dref1100 .stuff .Maybe_261_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1254 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1254);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1255;
    return (  temp1255 );
}

static  size_t   lam1256 (   struct env1251* env ,    int32_t  item1214 ,    size_t  x1216 ) {
    return (  op_dash_mul234 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  size_t   pow1249 (    size_t  base1210 ,    int32_t  p1212 ) {
    struct env1251 envinst1251 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1250 ) ( ( (  to683 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub801 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1252){ .fun = (  size_t  (*) (  struct env1251*  ,    int32_t  ,    size_t  ) )lam1256 , .env =  envinst1251 } ) ) );
}

static  uint8_t   cast1257 (    size_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_595   next1248 (    struct IntStrIter_1241 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_595_Just ) ( ( (  from_dash_charlike210 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp306 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
    }
    size_t  trim_dash_down1423 = ( (  pow1249 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub801 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    size_t  upper1424 = (  op_dash_div200 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    size_t  upper_dash_mask1425 = (  op_dash_mul234 ( (  op_dash_div200 ( (  upper1424 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1257 ) ( (  op_dash_sub293 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub801 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8881 ) ( (  op_dash_add771 ( (  digit1426 ) , (  from_dash_integral201 ( 48 ) ) ) ) ) );
    return ( ( Maybe_595_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_595   next1247 (    struct StrConcatIter_1240 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next1248 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next1246 (    struct StrConcatIter_1239 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1247 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each1238 (    struct StrConcatIter_1239  iterable1074 ,   struct envunion1243  fun1076 ) {
    struct StrConcatIter_1239  temp1244 = ( (  into_dash_iter1245 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1239 *  it1077 = ( &temp1244 );
    while ( ( true ) ) {
        struct Maybe_595  dref1078 = ( (  next1246 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_595_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_595_Just_t ) {
                struct envunion1243  temp1258 = (  fun1076 );
                ( temp1258.fun ( &temp1258.env ,  ( dref1078 .stuff .Maybe_595_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  int32_t   count_dash_digits1265 (    size_t  self1430 ) {
    if ( (  eq228 ( (  self1430 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp173 ( (  self1430 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div200 ( (  self1430 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1431 = (  op_dash_add263 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1241   uint_dash_iter1264 (    size_t  int1437 ) {
    return ( (struct IntStrIter_1241) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1265 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1241   chars1263 (    size_t  self1467 ) {
    return ( (  uint_dash_iter1264 ) ( (  self1467 ) ) );
}

static  struct StrConcatIter_1240   into_dash_iter1262 (    struct StrConcat_65  dref1498 ) {
    return ( (struct StrConcatIter_1240) { .f_left = ( (  chars597 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1263 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1240   chars1261 (    struct StrConcat_65  self1509 ) {
    return ( (  into_dash_iter1262 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1239   into_dash_iter1260 (    struct StrConcat_64  dref1498 ) {
    return ( (struct StrConcatIter_1239) { .f_left = ( (  chars1261 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars597 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1239   chars1259 (    struct StrConcat_64  self1509 ) {
    return ( (  into_dash_iter1260 ) ( (  self1509 ) ) );
}

static  enum Unit_7   write_dash_slice1270 (   struct env50* env ,    struct StrBuilder_54 *  builder2739 ,    struct Slice_12  s2741 ) {
    struct envunion51  temp1271 = ( (struct envunion51){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all327 , .env =  env->envinst40 } );
    ( temp1271.fun ( &temp1271.env ,  ( & ( ( * (  builder2739 ) ) .f_chars ) ) ,  (  s2741 ) ) );
    return ( Unit_7_Unit );
}

static  struct Slice_12   from_dash_char1272 (    struct Char_57  c1941 ,    uint8_t *  buf1943 ) {
    struct CharDestructured_194  dref1944 = ( (  destructure196 ) ( (  c1941 ) ) );
    if ( dref1944.tag == CharDestructured_194_Ref_t ) {
        return ( (struct Slice_12) { .f_ptr = ( ( dref1944 .stuff .CharDestructured_194_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1944 .stuff .CharDestructured_194_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1944.tag == CharDestructured_194_Scalar_t ) {
            if ( (  cmp204 ( ( ( dref1944 .stuff .CharDestructured_194_Scalar_s .field0 ) .f_value ) , (  from_dash_integral205 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1273 = ( (  from_dash_string49 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp1273);
                exit ( 1 );
                ( Unit_7_Unit );
            }
            (*  buf1943 ) = ( (  u32_dash_u8207 ) ( ( ( dref1944 .stuff .CharDestructured_194_Scalar_s .field0 ) .f_value ) ) );
            return ( (struct Slice_12) { .f_ptr = (  buf1943 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_7   write_dash_char1268 (   struct env52* env ,    struct StrBuilder_54 *  builder2744 ,    struct Char_57  c2746 ) {
    struct envunion53  temp1269 = ( (struct envunion53){ .fun = (  enum Unit_7  (*) (  struct env50*  ,    struct StrBuilder_54 *  ,    struct Slice_12  ) )write_dash_slice1270 , .env =  env->envinst50 } );
    uint8_t  temp1275;
    uint8_t  temp1274 = (  temp1275 );
    ( temp1269.fun ( &temp1269.env ,  (  builder2744 ) ,  ( (  from_dash_char1272 ) ( (  c2746 ) ,  ( &temp1274 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1266 (   struct env1242* env ,    struct Char_57  c2753 ) {
    struct envunion56  temp1267 = ( (struct envunion56){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1268 , .env =  env->envinst52 } );
    return ( temp1267.fun ( &temp1267.env ,  ( env->builder2749 ) ,  (  c2753 ) ) );
}

static  enum Unit_7   write1237 (   struct env55* env ,    struct StrBuilder_54 *  builder2749 ,    struct StrConcat_64  s2751 ) {
    struct env1242 envinst1242 = {
        .envinst52 = env->envinst52 ,
        .builder2749 =  builder2749 ,
    };
    ( (  for_dash_each1238 ) ( ( (  chars1259 ) ( (  s2751 ) ) ) ,  ( (struct envunion1243){ .fun = (  enum Unit_7  (*) (  struct env1242*  ,    struct Char_57  ) )lam1266 , .env =  envinst1242 } ) ) );
    return ( Unit_7_Unit );
}

static  uint8_t *   cast_dash_ptr1279 (    uint8_t *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_12   cast_dash_slice1278 (    struct Slice_12  s1932 ) {
    return ( (struct Slice_12) { .f_ptr = ( (  cast_dash_ptr1279 ) ( ( (  s1932 ) .f_ptr ) ) ) , .f_count = ( (  s1932 ) .f_count ) } );
}

static  struct StrView_21   as_dash_str1277 (    struct StrBuilder_54 *  builder2787 ) {
    return ( (struct StrView_21) { .f_contents = ( (  cast_dash_slice1278 ) ( ( (  subslice317 ) ( ( ( ( * (  builder2787 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2787 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_21   mk_dash_dyn_dash_str1233 (   struct env61* env ,    struct StrConcat_64  s2807 ,    enum CAllocator_9  al2809 ) {
    struct StrBuilder_54  temp1234 = ( (  mk1235 ) ( (  al2809 ) ) );
    struct StrBuilder_54 *  sb2810 = ( &temp1234 );
    struct envunion63  temp1236 = ( (struct envunion63){ .fun = (  enum Unit_7  (*) (  struct env55*  ,    struct StrBuilder_54 *  ,    struct StrConcat_64  ) )write1237 , .env =  env->envinst55 } );
    ( temp1236.fun ( &temp1236.env ,  (  sb2810 ) ,  (  s2807 ) ) );
    struct envunion62  temp1276 = ( (struct envunion62){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1268 , .env =  env->envinst52 } );
    ( temp1276.fun ( &temp1276.env ,  (  sb2810 ) ,  ( (  nullchar517 ) ( ) ) ) );
    struct StrView_21  dynstr2811 = ( (  as_dash_str1277 ) ( (  sb2810 ) ) );
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = ( ( (  dynstr2811 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub293 ( ( ( (  dynstr2811 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_7   set_dash_msg1231 (   struct env121* env ,    struct Editor_127 *  ed4109 ,    struct StrConcat_64  s4111 ) {
    ( (  reset_dash_msg921 ) ( (  ed4109 ) ) );
    struct envunion122  temp1232 = ( (struct envunion122){ .fun = (  struct StrView_21  (*) (  struct env61*  ,    struct StrConcat_64  ,    enum CAllocator_9  ) )mk_dash_dyn_dash_str1233 , .env =  env->envinst61 } );
    (*  ed4109 ) .f_msg = ( ( Maybe_131_Just ) ( ( temp1232.fun ( &temp1232.env ,  (  s4111 ) ,  ( ( * (  ed4109 ) ) .f_al ) ) ) ) );
    return ( Unit_7_Unit );
}

struct envunion1282 {
    enum Unit_7  (*fun) (  struct env117*  ,    struct Pane_128 *  ,    struct Tuple2_138  ,    struct StrView_21  );
    struct env117 env;
};

struct env1281 {
    ;
    struct Editor_127 *  ed4155;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env117 envinst117;
    ;
};

struct envunion1283 {
    enum Unit_7  (*fun) (  struct env1281*  ,    struct StrView_21  );
    struct env1281 env;
};

static  enum Unit_7   if_dash_just1280 (    struct Maybe_131  x1291 ,   struct envunion1283  fun1293 ) {
    struct Maybe_131  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_131_Just_t ) {
        struct envunion1283  temp1284 = (  fun1293 );
        ( temp1284.fun ( &temp1284.env ,  ( dref1294 .stuff .Maybe_131_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_131_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  struct Pos_20   max_dash_pos1286 (    struct Pane_128 *  pane3992 ) {
    return ( {  struct Maybe_28  dref3993 = ( ( * (  pane3992 ) ) .f_sel ) ; dref3993.tag == Maybe_28_Just_t ? ( (  max307 ) ( ( ( * (  pane3992 ) ) .f_cursor ) ,  ( dref3993 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( ( * (  pane3992 ) ) .f_cursor ) ; } );
}

static  uint8_t   elem_dash_get1288 (    struct Slice_12  self1867 ,    size_t  idx1869 ) {
    return ( (  get368 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

static  uint8_t   last1287 (    struct Slice_12  s1935 ) {
    if ( (  eq228 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1050 ) ( ( (  from_dash_string209 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1288 ( (  s1935 ) , (  op_dash_sub293 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1289 (    int32_t  x1352 ,    int32_t  mn1354 ,    int32_t  mx1356 ) {
    if ( (  cmp306 ( (  x1352 ) , (  mn1354 ) ) == 0 ) ) {
        return (  mn1354 );
    } else {
        if ( (  cmp306 ( (  x1352 ) , (  mx1356 ) ) == 2 ) ) {
            return (  mx1356 );
        } else {
            return (  x1352 );
        }
    }
}

static  enum Unit_7   lam1285 (   struct env1281* env ,    struct StrView_21  cp4162 ) {
    struct Pos_20  start4163 = ( (  max_dash_pos1286 ) ( ( (  pane977 ) ( ( env->ed4155 ) ) ) ) );
    if ( (  eq197 ( ( (  last1287 ) ( ( (  cp4162 ) .f_contents ) ) ) , ( (  ascii_dash_u8734 ) ( ( (  from_dash_charlike776 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        start4163 = ( (struct Pos_20) { .f_line = ( (  clamp1289 ) ( (  op_dash_add263 ( ( (  start4163 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  num_dash_lines980 ) ( ( ( * ( (  pane977 ) ( ( env->ed4155 ) ) ) ) .f_buf ) ) ) ) ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } );
    } else {
        start4163 = ( (  right_dash_pos979 ) ( ( ( ( * ( env->ed4155 ) ) .f_pane ) .f_buf ) ,  (  start4163 ) ) );
    }
    struct envunion1282  temp1290 = ( (struct envunion1282){ .fun = (  enum Unit_7  (*) (  struct env117*  ,    struct Pane_128 *  ,    struct Tuple2_138  ,    struct StrView_21  ) )replace_dash_selection1113 , .env =  env->envinst117 } );
    ( temp1290.fun ( &temp1290.env ,  ( (  pane977 ) ( ( env->ed4155 ) ) ) ,  ( ( Tuple2_138_Tuple2 ) ( (  start4163 ) ,  (  start4163 ) ) ) ,  (  cp4162 ) ) );
    return ( Unit_7_Unit );
}

struct env1292 {
    ;
    struct Editor_127 *  ed4155;
    ;
    ;
    ;
    ;
    struct env117 envinst117;
    ;
    ;
};

struct envunion1293 {
    enum Unit_7  (*fun) (  struct env1292*  ,    struct StrView_21  );
    struct env1292 env;
};

static  enum Unit_7   if_dash_just1291 (    struct Maybe_131  x1291 ,   struct envunion1293  fun1293 ) {
    struct Maybe_131  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_131_Just_t ) {
        struct envunion1293  temp1294 = (  fun1293 );
        ( temp1294.fun ( &temp1294.env ,  ( dref1294 .stuff .Maybe_131_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_131_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  struct Pos_20   min_dash_pos1296 (    struct Pane_128 *  pane3987 ) {
    return ( {  struct Maybe_28  dref3988 = ( ( * (  pane3987 ) ) .f_sel ) ; dref3988.tag == Maybe_28_Just_t ? ( (  min304 ) ( ( ( * (  pane3987 ) ) .f_cursor ) ,  ( dref3988 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( ( * (  pane3987 ) ) .f_cursor ) ; } );
}

static  enum Unit_7   lam1295 (   struct env1292* env ,    struct StrView_21  cp4165 ) {
    struct Pos_20  start4166 = ( (  min_dash_pos1296 ) ( ( (  pane977 ) ( ( env->ed4155 ) ) ) ) );
    if ( (  eq197 ( ( (  last1287 ) ( ( (  cp4165 ) .f_contents ) ) ) , ( (  ascii_dash_u8734 ) ( ( (  from_dash_charlike776 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_20  temp1297 = (  start4166 );
        temp1297 .  f_bi = (  from_dash_integral48 ( 0 ) );
        start4166 = ( temp1297 );
    }
    struct envunion137  temp1298 = ( (struct envunion137){ .fun = (  enum Unit_7  (*) (  struct env117*  ,    struct Pane_128 *  ,    struct Tuple2_138  ,    struct StrView_21  ) )replace_dash_selection1113 , .env =  env->envinst117 } );
    ( temp1298.fun ( &temp1298.env ,  ( (  pane977 ) ( ( env->ed4155 ) ) ) ,  ( ( Tuple2_138_Tuple2 ) ( (  start4166 ) ,  (  start4166 ) ) ) ,  (  cp4165 ) ) );
    return ( Unit_7_Unit );
}

struct envunion1301 {
    enum Unit_7  (*fun) (  struct env117*  ,    struct Pane_128 *  ,    struct Tuple2_138  ,    struct StrView_21  );
    struct env117 env;
};

struct env1300 {
    struct env117 envinst117;
    struct Editor_127 *  ed4155;
    ;
    ;
};

struct envunion1302 {
    enum Unit_7  (*fun) (  struct env1300*  ,    struct StrView_21  );
    struct env1300 env;
};

static  enum Unit_7   if_dash_just1299 (    struct Maybe_131  x1291 ,   struct envunion1302  fun1293 ) {
    struct Maybe_131  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_131_Just_t ) {
        struct envunion1302  temp1303 = (  fun1293 );
        ( temp1303.fun ( &temp1303.env ,  ( dref1294 .stuff .Maybe_131_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_131_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1304 (   struct env1300* env ,    struct StrView_21  cp4168 ) {
    struct Pos_20  start4169 = ( (  min_dash_pos1296 ) ( ( (  pane977 ) ( ( env->ed4155 ) ) ) ) );
    struct envunion1301  temp1305 = ( (struct envunion1301){ .fun = (  enum Unit_7  (*) (  struct env117*  ,    struct Pane_128 *  ,    struct Tuple2_138  ,    struct StrView_21  ) )replace_dash_selection1113 , .env =  env->envinst117 } );
    ( temp1305.fun ( &temp1305.env ,  ( (  pane977 ) ( ( env->ed4155 ) ) ) ,  ( ( Tuple2_138_Tuple2 ) ( (  start4169 ) ,  (  start4169 ) ) ) ,  (  cp4168 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   expand1306 (    struct Pane_128 *  pane3997 ) {
    struct Pos_20  min_dash_pos3998 = ( (  min_dash_pos1296 ) ( (  pane3997 ) ) );
    struct Pos_20  max_dash_pos3999 = ( (  max_dash_pos1286 ) ( (  pane3997 ) ) );
    int32_t  max_dash_pos_dash_max4000 = ( (  size_dash_i32185 ) ( ( (  num_dash_bytes973 ) ( ( (  line940 ) ( ( ( * (  pane3997 ) ) .f_buf ) ,  ( (  max_dash_pos3999 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq309 ( ( (  min_dash_pos3998 ) .f_bi ) , (  from_dash_integral48 ( 0 ) ) ) ) && (  eq309 ( ( (  max_dash_pos3999 ) .f_bi ) , (  max_dash_pos_dash_max4000 ) ) ) ) ) ) {
        struct Pos_20  temp1307 = (  min_dash_pos3998 );
        temp1307 .  f_bi = (  from_dash_integral48 ( 0 ) );
        (*  pane3997 ) .f_sel = ( ( Maybe_28_Just ) ( ( temp1307 ) ) );
        struct Pos_20  temp1308 = (  max_dash_pos3999 );
        temp1308 .  f_bi = (  max_dash_pos_dash_max4000 );
        (*  pane3997 ) .f_cursor = ( temp1308 );
    } else {
        if ( (  cmp306 ( (  op_dash_add263 ( ( (  max_dash_pos3999 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) , ( (  num_dash_lines980 ) ( ( ( * (  pane3997 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_7_Unit );
        }
        struct Pos_20  temp1309 = (  min_dash_pos3998 );
        temp1309 .  f_bi = (  from_dash_integral48 ( 0 ) );
        (*  pane3997 ) .f_sel = ( ( Maybe_28_Just ) ( ( temp1309 ) ) );
        int32_t  next_dash_line4001 = (  op_dash_add263 ( ( (  max_dash_pos3999 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) );
        (*  pane3997 ) .f_cursor = ( (struct Pos_20) { .f_line = (  next_dash_line4001 ) , .f_bi = ( (  size_dash_i32185 ) ( ( (  num_dash_bytes973 ) ( ( (  line940 ) ( ( ( * (  pane3997 ) ) .f_buf ) ,  (  next_dash_line4001 ) ) ) ) ) ) ) } );
    }
    return ( Unit_7_Unit );
}

static  bool   is_dash_none1310 (    struct Maybe_28  m1264 ) {
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

struct Maybe_1312 {
    enum {
        Maybe_1312_None_t,
        Maybe_1312_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_138  field0;
        } Maybe_1312_Just_s;
    } stuff;
};

static struct Maybe_1312 Maybe_1312_Just (  struct Tuple2_138  field0 ) {
    return ( struct Maybe_1312 ) { .tag = Maybe_1312_Just_t, .stuff = { .Maybe_1312_Just_s = { .field0 = field0 } } };
};

struct env1314 {
    struct Pane_128 *  pane4042;
    ;
    ;
    ;
    ;
    struct StrView_21  query4046;
};

struct Maybe_1315 {
    enum {
        Maybe_1315_None_t,
        Maybe_1315_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_1315_Just_s;
    } stuff;
};

static struct Maybe_1315 Maybe_1315_Just (  size_t  field0 ) {
    return ( struct Maybe_1315 ) { .tag = Maybe_1315_Just_t, .stuff = { .Maybe_1315_Just_s = { .field0 = field0 } } };
};

struct envunion1317 {
    struct Maybe_1315  (*fun) (  struct env1314*  ,    struct Pos_20  );
    struct env1314 env;
};

struct Zip_1324 {
    struct SliceIter_331  f_left_dash_it;
    struct SliceIter_331  f_right_dash_it;
};

struct Tuple2_1325 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_1325 Tuple2_1325_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_1325 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1327 {
    bool (*  fun1126 )(    struct Tuple2_1325  );
};

struct envunion1328 {
    bool  (*fun) (  struct env1327*  ,    struct Tuple2_1325  ,    bool  );
    struct env1327 env;
};

static  struct Zip_1324   into_dash_iter1329 (    struct Zip_1324  self911 ) {
    return (  self911 );
}

struct Maybe_1330 {
    enum {
        Maybe_1330_None_t,
        Maybe_1330_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1325  field0;
        } Maybe_1330_Just_s;
    } stuff;
};

static struct Maybe_1330 Maybe_1330_Just (  struct Tuple2_1325  field0 ) {
    return ( struct Maybe_1330 ) { .tag = Maybe_1330_Just_t, .stuff = { .Maybe_1330_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1330   next1331 (    struct Zip_1324 *  self914 ) {
    struct Zip_1324  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_334  dref916 = ( (  next335 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_334_None_t ) {
            return ( (struct Maybe_1330) { .tag = Maybe_1330_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_334_Just_t ) {
                struct Maybe_334  dref918 = ( (  next335 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_334_None_t ) {
                    return ( (struct Maybe_1330) { .tag = Maybe_1330_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_334_Just_t ) {
                        ( (  next335 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next335 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1330_Just ) ( ( ( Tuple2_1325_Tuple2 ) ( ( dref916 .stuff .Maybe_334_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_334_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1326 (    struct Zip_1324  iterable1093 ,    bool  base1095 ,   struct envunion1328  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_1324  it1099 = ( (  into_dash_iter1329 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1330  dref1100 = ( (  next1331 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1330_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1330_Just_t ) {
                struct envunion1328  temp1332 = (  fun1097 );
                x1098 = ( temp1332.fun ( &temp1332.env ,  ( dref1100 .stuff .Maybe_1330_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1333 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1333);
    exit ( 1 );
    ( Unit_7_Unit );
    bool  temp1334;
    return (  temp1334 );
}

static  bool   lam1335 (   struct env1327* env ,    struct Tuple2_1325  e1128 ,    bool  x1130 ) {
    return ( ( ( env->fun1126 ) ( (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1323 (    struct Zip_1324  it1124 ,    bool (*  fun1126 )(    struct Tuple2_1325  ) ) {
    struct env1327 envinst1327 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1326 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1328){ .fun = (  bool  (*) (  struct env1327*  ,    struct Tuple2_1325  ,    bool  ) )lam1335 , .env =  envinst1327 } ) ) );
}

static  struct Zip_1324   zip1336 (    struct Slice_12  left922 ,    struct Slice_12  right924 ) {
    struct SliceIter_331  left_dash_it925 = ( (  into_dash_iter333 ) ( (  left922 ) ) );
    struct SliceIter_331  right_dash_it926 = ( (  into_dash_iter333 ) ( (  right924 ) ) );
    return ( (struct Zip_1324) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  bool   lam1337 (    struct Tuple2_1325  dref1862 ) {
    return (  eq197 ( ( dref1862 .field0 ) , ( dref1862 .field1 ) ) );
}

static  bool   eq1322 (    struct Slice_12  l1859 ,    struct Slice_12  r1861 ) {
    if ( ( !  eq228 ( ( (  l1859 ) .f_count ) , ( (  r1861 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all1323 ) ( ( (  zip1336 ) ( (  l1859 ) ,  (  r1861 ) ) ) ,  (  lam1337 ) ) );
}

static  struct Maybe_1315   find_dash_slice1319 (    struct Slice_12  haystack1912 ,    struct Slice_12  needle1914 ) {
    struct RangeIter_678  temp1320 =  into_dash_iter680 ( ( (  to683 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub801 ( ( (  size_dash_i32185 ) ( ( (  haystack1912 ) .f_count ) ) ) , ( (  size_dash_i32185 ) ( ( (  needle1914 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_261  __cond1321 =  next681 (&temp1320);
        if (  __cond1321 .tag == 0 ) {
            break;
        }
        int32_t  i1916 =  __cond1321 .stuff .Maybe_261_Just_s .field0;
        if ( (  eq1322 ( ( (  subslice317 ) ( (  haystack1912 ) ,  ( (  i32_dash_size251 ) ( (  i1916 ) ) ) ,  (  op_dash_add221 ( ( (  i32_dash_size251 ) ( (  i1916 ) ) ) , ( (  needle1914 ) .f_count ) ) ) ) ) , (  needle1914 ) ) ) ) {
            return ( ( Maybe_1315_Just ) ( ( (  i32_dash_size251 ) ( (  i1916 ) ) ) ) );
        }
    }
    return ( (struct Maybe_1315) { .tag = Maybe_1315_None_t } );
}

static  struct StrView_21   byte_dash_substr_dash_from1338 (    struct StrView_21  s2190 ,    size_t  from2192 ) {
    return ( (struct StrView_21) { .f_contents = ( (  from316 ) ( ( (  s2190 ) .f_contents ) ,  (  from2192 ) ) ) } );
}

static  struct Maybe_1315   search_dash_on_dash_line1318 (   struct env1314* env ,    struct Pos_20  pos4049 ) {
    return ( (  find_dash_slice1319 ) ( ( ( (  byte_dash_substr_dash_from1338 ) ( ( (  line940 ) ( ( ( * ( env->pane4042 ) ) .f_buf ) ,  ( (  pos4049 ) .f_line ) ) ) ,  ( (  i32_dash_size251 ) ( ( (  pos4049 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4046 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1344 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  int32_t   op_dash_mul1345 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  int32_t   mod1343 (    int32_t  l1229 ,    int32_t  d1231 ) {
    int32_t  r1232 = (  op_dash_div1344 ( (  l1229 ) , (  d1231 ) ) );
    int32_t  m1233 = (  op_dash_sub801 ( (  l1229 ) , (  op_dash_mul1345 ( (  r1232 ) , (  d1231 ) ) ) ) );
    if ( (  cmp306 ( (  m1233 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add263 ( (  d1231 ) , (  m1233 ) ) );
    } else {
        return (  m1233 );
    }
}

struct envunion1347 {
    struct Maybe_1315  (*fun) (  struct env1314*  ,    struct Pos_20  );
    struct env1314 env;
};

static  struct Maybe_1312   search_dash_from1313 (    struct Pane_128 *  pane4042 ,    struct Pos_20  pos4044 ,    struct StrView_21  query4046 ) {
    struct env1314 envinst1314 = {
        .pane4042 =  pane4042 ,
        .query4046 =  query4046 ,
    };
    struct envunion1317  temp1316 = ( (struct envunion1317){ .fun = (  struct Maybe_1315  (*) (  struct env1314*  ,    struct Pos_20  ) )search_dash_on_dash_line1318 , .env =  envinst1314 } );
    struct Maybe_1315  dref4050 = ( temp1316.fun ( &temp1316.env ,  (  pos4044 ) ) );
    if ( dref4050.tag == Maybe_1315_Just_t ) {
        struct Pos_20  temp1339 = (  pos4044 );
        temp1339 .  f_bi = (  op_dash_add263 ( ( (  pos4044 ) .f_bi ) , ( (  size_dash_i32185 ) ( ( dref4050 .stuff .Maybe_1315_Just_s .field0 ) ) ) ) );
        struct Pos_20  sel_dash_pos4052 = ( temp1339 );
        struct Pos_20  temp1340 = (  pos4044 );
        temp1340 .  f_bi = (  op_dash_sub801 ( (  op_dash_add263 ( ( (  pos4044 ) .f_bi ) , ( (  size_dash_i32185 ) ( (  op_dash_add221 ( ( dref4050 .stuff .Maybe_1315_Just_s .field0 ) , ( (  num_dash_bytes973 ) ( (  query4046 ) ) ) ) ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
        struct Pos_20  cur_dash_pos4053 = ( temp1340 );
        return ( ( Maybe_1312_Just ) ( ( ( Tuple2_138_Tuple2 ) ( (  sel_dash_pos4052 ) ,  (  cur_dash_pos4053 ) ) ) ) );
    }
    else {
        if ( dref4050.tag == Maybe_1315_None_t ) {
            int32_t  num_dash_lines4054 = ( (  num_dash_lines980 ) ( ( ( * (  pane4042 ) ) .f_buf ) ) );
            struct RangeIter_678  temp1341 =  into_dash_iter680 ( ( (  to683 ) ( (  from_dash_integral48 ( 1 ) ) ,  (  num_dash_lines4054 ) ) ) );
            while (true) {
                struct Maybe_261  __cond1342 =  next681 (&temp1341);
                if (  __cond1342 .tag == 0 ) {
                    break;
                }
                int32_t  i4056 =  __cond1342 .stuff .Maybe_261_Just_s .field0;
                int32_t  line4057 = ( (  mod1343 ) ( (  op_dash_add263 ( ( (  pos4044 ) .f_line ) , (  i4056 ) ) ) ,  (  num_dash_lines4054 ) ) );
                struct envunion1347  temp1346 = ( (struct envunion1347){ .fun = (  struct Maybe_1315  (*) (  struct env1314*  ,    struct Pos_20  ) )search_dash_on_dash_line1318 , .env =  envinst1314 } );
                struct Maybe_1315  dref4058 = ( temp1346.fun ( &temp1346.env ,  ( (struct Pos_20) { .f_line = (  line4057 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ) );
                if ( dref4058.tag == Maybe_1315_Just_t ) {
                    struct Pos_20  sel_dash_pos4060 = ( (struct Pos_20) { .f_line = (  line4057 ) , .f_bi = ( (  size_dash_i32185 ) ( ( dref4058 .stuff .Maybe_1315_Just_s .field0 ) ) ) } );
                    struct Pos_20  cur_dash_pos4061 = ( (struct Pos_20) { .f_line = (  line4057 ) , .f_bi = (  op_dash_sub801 ( ( (  size_dash_i32185 ) ( (  op_dash_add221 ( ( dref4058 .stuff .Maybe_1315_Just_s .field0 ) , ( (  num_dash_bytes973 ) ( (  query4046 ) ) ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1312_Just ) ( ( ( Tuple2_138_Tuple2 ) ( (  sel_dash_pos4060 ) ,  (  cur_dash_pos4061 ) ) ) ) );
                }
                else {
                    if ( dref4058.tag == Maybe_1315_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1312) { .tag = Maybe_1312_None_t } );
        }
    }
}

static  enum Unit_7   next_dash_match1311 (    struct Editor_127 *  ed4139 ) {
    struct Maybe_131  dref4140 = ( ( * (  ed4139 ) ) .f_search_dash_term );
    if ( dref4140.tag == Maybe_131_None_t ) {
        return ( Unit_7_Unit );
    }
    else {
        if ( dref4140.tag == Maybe_131_Just_t ) {
            struct Maybe_1312  dref4142 = ( (  search_dash_from1313 ) ( ( (  pane977 ) ( (  ed4139 ) ) ) ,  ( (  max_dash_pos1286 ) ( ( (  pane977 ) ( (  ed4139 ) ) ) ) ) ,  ( dref4140 .stuff .Maybe_131_Just_s .field0 ) ) );
            if ( dref4142.tag == Maybe_1312_None_t ) {
            }
            else {
                if ( dref4142.tag == Maybe_1312_Just_t ) {
                    ( (  set_dash_cursors934 ) ( ( (  pane977 ) ( (  ed4139 ) ) ) ,  ( dref4142 .stuff .Maybe_1312_Just_s .field0 .field1 ) ,  ( ( Maybe_28_Just ) ( ( dref4142 .stuff .Maybe_1312_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_935_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Maybe_1315   find_dash_last_dash_occurence_dash_of_dash_slice1350 (    struct Slice_12  haystack1919 ,    struct Slice_12  needle1921 ) {
    struct Maybe_1315  occ1922 = ( (struct Maybe_1315) { .tag = Maybe_1315_None_t } );
    struct RangeIter_678  temp1351 =  into_dash_iter680 ( ( (  to683 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub801 ( ( (  size_dash_i32185 ) ( ( (  haystack1919 ) .f_count ) ) ) , ( (  size_dash_i32185 ) ( ( (  needle1921 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_261  __cond1352 =  next681 (&temp1351);
        if (  __cond1352 .tag == 0 ) {
            break;
        }
        int32_t  i1924 =  __cond1352 .stuff .Maybe_261_Just_s .field0;
        if ( (  eq1322 ( ( (  subslice317 ) ( (  haystack1919 ) ,  ( (  i32_dash_size251 ) ( (  i1924 ) ) ) ,  (  op_dash_add221 ( ( (  i32_dash_size251 ) ( (  i1924 ) ) ) , ( (  needle1921 ) .f_count ) ) ) ) ) , (  needle1921 ) ) ) ) {
            occ1922 = ( ( Maybe_1315_Just ) ( ( (  i32_dash_size251 ) ( (  i1924 ) ) ) ) );
        }
    }
    return (  occ1922 );
}

static  struct Maybe_1312   search_dash_back1349 (    struct Pane_128 *  pane4064 ,    struct Pos_20  pos4066 ,    struct StrView_21  query4068 ) {
    struct Maybe_1315  dref4069 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1350 ) ( ( ( (  byte_dash_substr374 ) ( ( (  line940 ) ( ( ( * (  pane4064 ) ) .f_buf ) ,  ( (  pos4066 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size251 ) ( ( (  pos4066 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4068 ) .f_contents ) ) );
    if ( dref4069.tag == Maybe_1315_Just_t ) {
        struct Pos_20  temp1353 = (  pos4066 );
        temp1353 .  f_bi = ( (  size_dash_i32185 ) ( ( dref4069 .stuff .Maybe_1315_Just_s .field0 ) ) );
        struct Pos_20  sel_dash_pos4071 = ( temp1353 );
        struct Pos_20  temp1354 = (  pos4066 );
        temp1354 .  f_bi = (  op_dash_sub801 ( ( (  size_dash_i32185 ) ( (  op_dash_add221 ( ( dref4069 .stuff .Maybe_1315_Just_s .field0 ) , ( (  num_dash_bytes973 ) ( (  query4068 ) ) ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
        struct Pos_20  cur_dash_pos4072 = ( temp1354 );
        return ( ( Maybe_1312_Just ) ( ( ( Tuple2_138_Tuple2 ) ( (  sel_dash_pos4071 ) ,  (  cur_dash_pos4072 ) ) ) ) );
    }
    else {
        if ( dref4069.tag == Maybe_1315_None_t ) {
            int32_t  num_dash_lines4073 = ( (  num_dash_lines980 ) ( ( ( * (  pane4064 ) ) .f_buf ) ) );
            struct RangeIter_678  temp1355 =  into_dash_iter680 ( ( (  to683 ) ( (  from_dash_integral48 ( 1 ) ) ,  (  num_dash_lines4073 ) ) ) );
            while (true) {
                struct Maybe_261  __cond1356 =  next681 (&temp1355);
                if (  __cond1356 .tag == 0 ) {
                    break;
                }
                int32_t  i4075 =  __cond1356 .stuff .Maybe_261_Just_s .field0;
                int32_t  line4076 = ( (  mod1343 ) ( (  op_dash_sub801 ( ( (  pos4066 ) .f_line ) , (  i4075 ) ) ) ,  (  num_dash_lines4073 ) ) );
                struct Maybe_1315  dref4077 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1350 ) ( ( ( (  line940 ) ( ( ( * (  pane4064 ) ) .f_buf ) ,  (  line4076 ) ) ) .f_contents ) ,  ( (  query4068 ) .f_contents ) ) );
                if ( dref4077.tag == Maybe_1315_Just_t ) {
                    struct Pos_20  sel_dash_pos4079 = ( (struct Pos_20) { .f_line = (  line4076 ) , .f_bi = ( (  size_dash_i32185 ) ( ( dref4077 .stuff .Maybe_1315_Just_s .field0 ) ) ) } );
                    struct Pos_20  cur_dash_pos4080 = ( (struct Pos_20) { .f_line = (  line4076 ) , .f_bi = (  op_dash_sub801 ( ( (  size_dash_i32185 ) ( (  op_dash_add221 ( ( dref4077 .stuff .Maybe_1315_Just_s .field0 ) , ( (  num_dash_bytes973 ) ( (  query4068 ) ) ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1312_Just ) ( ( ( Tuple2_138_Tuple2 ) ( (  sel_dash_pos4079 ) ,  (  cur_dash_pos4080 ) ) ) ) );
                }
                else {
                    if ( dref4077.tag == Maybe_1315_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1312) { .tag = Maybe_1312_None_t } );
        }
    }
}

static  enum Unit_7   prev_dash_match1348 (    struct Editor_127 *  ed4147 ) {
    struct Maybe_131  dref4148 = ( ( * (  ed4147 ) ) .f_search_dash_term );
    if ( dref4148.tag == Maybe_131_None_t ) {
        return ( Unit_7_Unit );
    }
    else {
        if ( dref4148.tag == Maybe_131_Just_t ) {
            struct Maybe_1312  dref4150 = ( (  search_dash_back1349 ) ( ( (  pane977 ) ( (  ed4147 ) ) ) ,  ( (  min_dash_pos1296 ) ( ( (  pane977 ) ( (  ed4147 ) ) ) ) ) ,  ( dref4148 .stuff .Maybe_131_Just_s .field0 ) ) );
            if ( dref4150.tag == Maybe_1312_None_t ) {
            }
            else {
                if ( dref4150.tag == Maybe_1312_Just_t ) {
                    ( (  set_dash_cursors934 ) ( ( (  pane977 ) ( (  ed4147 ) ) ) ,  ( dref4150 .stuff .Maybe_1312_Just_s .field0 .field1 ) ,  ( ( Maybe_28_Just ) ( ( dref4150 .stuff .Maybe_1312_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_935_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   handle_dash_normal_dash_key932 (   struct env133* env ,    struct Editor_127 *  ed4155 ,    struct Key_144  key4157 ) {
    struct Key_144  dref4158 = (  key4157 );
    if ( dref4158.tag == Key_144_Char_t ) {
        if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4155 ) .f_running = ( false );
        } else {
            if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left933 ) ( ( (  pane977 ) ( (  ed4155 ) ) ) ) );
            } else {
                if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right978 ) ( ( (  pane977 ) ( (  ed4155 ) ) ) ) );
                } else {
                    if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down981 ) ( ( (  pane977 ) ( (  ed4155 ) ) ) ) );
                    } else {
                        if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up985 ) ( ( (  pane977 ) ( (  ed4155 ) ) ) ) );
                        } else {
                            if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode986 ) ( ( (  pane977 ) ( (  ed4155 ) ) ) ,  ( Mode_129_Insert ) ) );
                            } else {
                                if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  advance_dash_word988 ) ( ( (  pane977 ) ( (  ed4155 ) ) ) ,  ( MoveDirection_989_MoveFwd ) ,  ( MoveTarget_990_NextWordStart ) ) );
                                } else {
                                    if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  advance_dash_word988 ) ( ( (  pane977 ) ( (  ed4155 ) ) ) ,  ( MoveDirection_989_MoveFwd ) ,  ( MoveTarget_990_NextWordEnd ) ) );
                                    } else {
                                        if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  advance_dash_word988 ) ( ( (  pane977 ) ( (  ed4155 ) ) ) ,  ( MoveDirection_989_MoveBwd ) ,  ( MoveTarget_990_NextWordEnd ) ) );
                                        } else {
                                            if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct envunion135  temp1024 = ( (struct envunion135){ .fun = (  enum Unit_7  (*) (  struct env115*  ,    struct Pane_128 *  ) )redo1025 , .env =  env->envinst115 } );
                                                ( temp1024.fun ( &temp1024.env ,  ( (  pane977 ) ( (  ed4155 ) ) ) ) );
                                            } else {
                                                if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                    struct envunion134  temp1063 = ( (struct envunion134){ .fun = (  enum Unit_7  (*) (  struct env113*  ,    struct Pane_128 *  ) )undo1064 , .env =  env->envinst113 } );
                                                    ( temp1063.fun ( &temp1063.env ,  ( (  pane977 ) ( (  ed4155 ) ) ) ) );
                                                } else {
                                                    if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                        struct envunion1082  temp1081 = ( (struct envunion1082){ .fun = (  enum Unit_7  (*) (  struct env119*  ,    struct Editor_127 *  ) )copy_dash_selection_dash_to_dash_clipboard1083 , .env =  env->envinst119 } );
                                                        ( temp1081.fun ( &temp1081.env ,  (  ed4155 ) ) );
                                                        struct envunion1112  temp1111 = ( (struct envunion1112){ .fun = (  enum Unit_7  (*) (  struct env117*  ,    struct Pane_128 *  ,    struct Tuple2_138  ,    struct StrView_21  ) )replace_dash_selection1113 , .env =  env->envinst117 } );
                                                        ( temp1111.fun ( &temp1111.env ,  ( (  pane977 ) ( (  ed4155 ) ) ) ,  ( (  selection1084 ) ( ( (  pane977 ) ( (  ed4155 ) ) ) ) ) ,  ( (  from_dash_string209 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                        ( (  set_dash_mode986 ) ( ( (  pane977 ) ( (  ed4155 ) ) ) ,  ( Mode_129_Normal ) ) );
                                                    } else {
                                                        if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                            struct envunion1226  temp1225 = ( (struct envunion1226){ .fun = (  enum Unit_7  (*) (  struct env119*  ,    struct Editor_127 *  ) )copy_dash_selection_dash_to_dash_clipboard1083 , .env =  env->envinst119 } );
                                                            ( temp1225.fun ( &temp1225.env ,  (  ed4155 ) ) );
                                                            struct envunion1228  temp1227 = ( (struct envunion1228){ .fun = (  enum Unit_7  (*) (  struct env117*  ,    struct Pane_128 *  ,    struct Tuple2_138  ,    struct StrView_21  ) )replace_dash_selection1113 , .env =  env->envinst117 } );
                                                            ( temp1227.fun ( &temp1227.env ,  ( (  pane977 ) ( (  ed4155 ) ) ) ,  ( (  selection1084 ) ( ( (  pane977 ) ( (  ed4155 ) ) ) ) ) ,  ( (  from_dash_string209 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                            ( (  set_dash_mode986 ) ( ( (  pane977 ) ( (  ed4155 ) ) ) ,  ( Mode_129_Insert ) ) );
                                                        } else {
                                                            if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion139  temp1229 = ( (struct envunion139){ .fun = (  enum Unit_7  (*) (  struct env119*  ,    struct Editor_127 *  ) )copy_dash_selection_dash_to_dash_clipboard1083 , .env =  env->envinst119 } );
                                                                ( temp1229.fun ( &temp1229.env ,  (  ed4155 ) ) );
                                                                size_t  bytes_dash_yanked4160 = ( (  num_dash_bytes973 ) ( ( (  or_dash_else364 ) ( ( ( * (  ed4155 ) ) .f_clipboard ) ,  ( (  from_dash_string209 ) ( ( "" ) ,  ( 0 ) ) ) ) ) ) );
                                                                struct envunion136  temp1230 = ( (struct envunion136){ .fun = (  enum Unit_7  (*) (  struct env121*  ,    struct Editor_127 *  ,    struct StrConcat_64  ) )set_dash_msg1231 , .env =  env->envinst121 } );
                                                                ( temp1230.fun ( &temp1230.env ,  (  ed4155 ) ,  ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4160 ) ) ) ,  ( (  from_dash_string209 ) ( ( " bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                            } else {
                                                                if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct env1281 envinst1281 = {
                                                                        .ed4155 =  ed4155 ,
                                                                        .envinst117 = env->envinst117 ,
                                                                    };
                                                                    ( (  if_dash_just1280 ) ( ( ( * (  ed4155 ) ) .f_clipboard ) ,  ( (struct envunion1283){ .fun = (  enum Unit_7  (*) (  struct env1281*  ,    struct StrView_21  ) )lam1285 , .env =  envinst1281 } ) ) );
                                                                } else {
                                                                    if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct env1292 envinst1292 = {
                                                                            .ed4155 =  ed4155 ,
                                                                            .envinst117 = env->envinst117 ,
                                                                        };
                                                                        ( (  if_dash_just1291 ) ( ( ( * (  ed4155 ) ) .f_clipboard ) ,  ( (struct envunion1293){ .fun = (  enum Unit_7  (*) (  struct env1292*  ,    struct StrView_21  ) )lam1295 , .env =  envinst1292 } ) ) );
                                                                    } else {
                                                                        if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct env1300 envinst1300 = {
                                                                                .envinst117 = env->envinst117 ,
                                                                                .ed4155 =  ed4155 ,
                                                                            };
                                                                            ( (  if_dash_just1299 ) ( ( ( * (  ed4155 ) ) .f_clipboard ) ,  ( (struct envunion1302){ .fun = (  enum Unit_7  (*) (  struct env1300*  ,    struct StrView_21  ) )lam1304 , .env =  envinst1300 } ) ) );
                                                                        } else {
                                                                            if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                ( (  expand1306 ) ( ( (  pane977 ) ( (  ed4155 ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    ( (  set_dash_mode986 ) ( ( (  pane977 ) ( (  ed4155 ) ) ) ,  ( Mode_129_Select ) ) );
                                                                                    if ( ( (  is_dash_none1310 ) ( ( ( ( * (  ed4155 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                        (*  ed4155 ) .f_pane .f_sel = ( ( Maybe_28_Just ) ( ( ( ( * (  ed4155 ) ) .f_pane ) .f_cursor ) ) );
                                                                                    }
                                                                                } else {
                                                                                    if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        (*  ed4155 ) .f_mode = ( ( EditorMode_132_Cmd ) ( ( ( * ( (  pane977 ) ( (  ed4155 ) ) ) ) .f_cursor ) ,  ( (  mk1235 ) ( ( ( * (  ed4155 ) ) .f_al ) ) ) ) );
                                                                                    } else {
                                                                                        if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            (*  ed4155 ) .f_mode = ( ( EditorMode_132_Search ) ( ( ( * ( (  pane977 ) ( (  ed4155 ) ) ) ) .f_cursor ) ,  ( (  mk1235 ) ( ( ( * (  ed4155 ) ) .f_al ) ) ) ) );
                                                                                        } else {
                                                                                            if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  next_dash_match1311 ) ( (  ed4155 ) ) );
                                                                                            } else {
                                                                                                if ( (  eq775 ( ( dref4158 .stuff .Key_144_Char_s .field0 ) , ( (  from_dash_charlike776 ) ( ( "N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  prev_dash_match1348 ) ( (  ed4155 ) ) );
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
            }
        }
    }
    else {
        if ( dref4158.tag == Key_144_Escape_t ) {
            ( (  set_dash_mode986 ) ( ( (  pane977 ) ( (  ed4155 ) ) ) ,  ( Mode_129_Normal ) ) );
        }
        else {
            if ( true ) {
            }
        }
    }
    return ( Unit_7_Unit );
}

struct envunion1358 {
    enum Unit_7  (*fun) (  struct env133*  ,    struct Editor_127 *  ,    struct Key_144  );
    struct env133 env;
};

static  enum Unit_7   add_dash_str_dash_at_dash_char1360 (   struct env108* env ,    struct Pane_128 *  self4004 ,    struct StrView_21  s4006 ) {
    struct Pos_20  cur4007 = ( ( * (  self4004 ) ) .f_cursor );
    struct envunion109  temp1361 = ( (struct envunion109){ .fun = (  struct Maybe_110  (*) (  struct env103*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_110  ) )change1115 , .env =  env->envinst103 } );
    ( temp1361.fun ( &temp1361.env ,  ( ( * (  self4004 ) ) .f_buf ) ,  (  cur4007 ) ,  (  cur4007 ) ,  (  s4006 ) ,  ( (struct Maybe_110) { .tag = Maybe_110_None_t } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   backspace1363 (   struct env111* env ,    struct Pane_128 *  self4010 ) {
    struct Pos_20  prev_dash_cur4011 = ( ( * (  self4010 ) ) .f_cursor );
    ( (  move_dash_left933 ) ( (  self4010 ) ) );
    struct envunion112  temp1364 = ( (struct envunion112){ .fun = (  struct Maybe_110  (*) (  struct env103*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_110  ) )change1115 , .env =  env->envinst103 } );
    ( temp1364.fun ( &temp1364.env ,  ( ( * (  self4010 ) ) .f_buf ) ,  ( ( * (  self4010 ) ) .f_cursor ) ,  (  prev_dash_cur4011 ) ,  ( (  from_dash_string209 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_110) { .tag = Maybe_110_None_t } ) ) );
    return ( Unit_7_Unit );
}

struct Array_1366 {
    char _arr [1];
};

static  char *   cast1367 (    struct Array_1366 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_791   as_dash_slice1365 (    struct Array_1366 *  arr2272 ) {
    return ( (struct Slice_791) { .f_ptr = ( (  cast1367 ) ( (  arr2272 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1366   from_dash_listlike1369 (    struct Array_1366  self330 ) {
    return (  self330 );
}

struct envunion1371 {
    enum Unit_7  (*fun) (  struct env108*  ,    struct Pane_128 *  ,    struct StrView_21  );
    struct env108 env;
};

struct Scanner_1374 {
    struct StrView_21  f_s;
};

static  struct Scanner_1374   mk_dash_from_dash_strview1376 (    struct StrView_21  s3169 ) {
    return ( (struct Scanner_1374) { .f_s = (  s3169 ) } );
}

struct TakeWhile_1381 {
    struct StrViewIter_592  f_it;
    bool (*  f_pred )(    struct Char_57  );
};

struct Map_1380 {
    struct TakeWhile_1381  field0;
    size_t (*  field1 )(    struct Char_57  );
};

static struct Map_1380 Map_1380_Map (  struct TakeWhile_1381  field0 ,  size_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1380 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1380   into_dash_iter1383 (    struct Map_1380  self796 ) {
    return (  self796 );
}

static  struct Maybe_595   next1385 (    struct TakeWhile_1381 *  self964 ) {
    struct Maybe_595  mx965 = ( (  next596 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_595  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_595_None_t ) {
        return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_595_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_595_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_595_Just ) ( ( dref966 .stuff .Maybe_595_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
            }
        }
    }
}

static  struct Maybe_1315   next1384 (    struct Map_1380 *  dref798 ) {
    struct Maybe_595  dref801 = ( (  next1385 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_595_None_t ) {
        return ( (struct Maybe_1315) { .tag = Maybe_1315_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_595_Just_t ) {
            return ( ( Maybe_1315_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_595_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1382 (    struct Map_1380  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1380  it1099 = ( (  into_dash_iter1383 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1315  dref1100 = ( (  next1384 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1315_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1315_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1315_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1386 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1386);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1387;
    return (  temp1387 );
}

static  size_t   lam1388 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add221 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1379 (    struct Map_1380  it1110 ) {
    return ( (  reduce1382 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1388 ) ) );
}

static  struct TakeWhile_1381   into_dash_iter1390 (    struct TakeWhile_1381  self961 ) {
    return (  self961 );
}

static  struct Map_1380   map1389 (    struct TakeWhile_1381  iterable805 ,    size_t (*  fun807 )(    struct Char_57  ) ) {
    struct TakeWhile_1381  it808 = ( (  into_dash_iter1390 ) ( (  iterable805 ) ) );
    return ( ( Map_1380_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1381   take_dash_while1391 (    struct StrViewIter_592  it970 ,    bool (*  pred972 )(    struct Char_57  ) ) {
    return ( (struct TakeWhile_1381) { .f_it = ( (  into_dash_iter594 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1392 (    struct Char_57  c2202 ) {
    return ( (  c2202 ) .f_num_dash_bytes );
}

static  struct StrView_21   take_dash_while1378 (    struct StrView_21  self2198 ,    bool (*  fun2200 )(    struct Char_57  ) ) {
    size_t  bi2203 = ( (  sum1379 ) ( ( (  map1389 ) ( ( (  take_dash_while1391 ) ( ( (  chars597 ) ( (  self2198 ) ) ) ,  (  fun2200 ) ) ) ,  (  lam1392 ) ) ) ) );
    return ( (  byte_dash_substr374 ) ( (  self2198 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2203 ) ) );
}

static  struct StrView_21   take_dash_str_dash_while1377 (    struct Scanner_1374 *  sc3215 ,    bool (*  fun3217 )(    struct Char_57  ) ) {
    struct StrView_21  s3218 = ( (  take_dash_while1378 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  (  fun3217 ) ) );
    (*  sc3215 ) .f_s = ( (  byte_dash_substr_dash_from1338 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  ( (  num_dash_bytes973 ) ( (  s3218 ) ) ) ) );
    return (  s3218 );
}

static  bool   is_dash_not_dash_whitespace1393 (    struct Char_57  c2382 ) {
    return ( ! ( (  is_dash_whitespace1011 ) ( (  c2382 ) ) ) );
}

struct TakeWhile_1399 {
    struct StrViewIter_592  f_it;
    bool (*  f_pred )(    struct Char_57  );
};

struct Map_1398 {
    struct TakeWhile_1399  field0;
    size_t (*  field1 )(    struct Char_57  );
};

static struct Map_1398 Map_1398_Map (  struct TakeWhile_1399  field0 ,  size_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1398 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1398   into_dash_iter1401 (    struct Map_1398  self796 ) {
    return (  self796 );
}

static  struct Maybe_595   next1403 (    struct TakeWhile_1399 *  self964 ) {
    struct Maybe_595  mx965 = ( (  next596 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_595  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_595_None_t ) {
        return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_595_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_595_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_595_Just ) ( ( dref966 .stuff .Maybe_595_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
            }
        }
    }
}

static  struct Maybe_1315   next1402 (    struct Map_1398 *  dref798 ) {
    struct Maybe_595  dref801 = ( (  next1403 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_595_None_t ) {
        return ( (struct Maybe_1315) { .tag = Maybe_1315_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_595_Just_t ) {
            return ( ( Maybe_1315_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_595_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1400 (    struct Map_1398  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1398  it1099 = ( (  into_dash_iter1401 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1315  dref1100 = ( (  next1402 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1315_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1315_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1315_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1404 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1404);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1405;
    return (  temp1405 );
}

static  size_t   lam1406 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add221 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1397 (    struct Map_1398  it1110 ) {
    return ( (  reduce1400 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1406 ) ) );
}

static  struct TakeWhile_1399   into_dash_iter1408 (    struct TakeWhile_1399  self961 ) {
    return (  self961 );
}

static  struct Map_1398   map1407 (    struct TakeWhile_1399  iterable805 ,    size_t (*  fun807 )(    struct Char_57  ) ) {
    struct TakeWhile_1399  it808 = ( (  into_dash_iter1408 ) ( (  iterable805 ) ) );
    return ( ( Map_1398_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1399   take_dash_while1409 (    struct StrViewIter_592  it970 ,    bool (*  pred972 )(    struct Char_57  ) ) {
    return ( (struct TakeWhile_1399) { .f_it = ( (  into_dash_iter594 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1410 (    struct Char_57  c2202 ) {
    return ( (  c2202 ) .f_num_dash_bytes );
}

static  struct StrView_21   take_dash_while1396 (    struct StrView_21  self2198 ,    bool (*  fun2200 )(    struct Char_57  ) ) {
    size_t  bi2203 = ( (  sum1397 ) ( ( (  map1407 ) ( ( (  take_dash_while1409 ) ( ( (  chars597 ) ( (  self2198 ) ) ) ,  (  fun2200 ) ) ) ,  (  lam1410 ) ) ) ) );
    return ( (  byte_dash_substr374 ) ( (  self2198 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2203 ) ) );
}

static  struct StrView_21   take_dash_str_dash_while1395 (    struct Scanner_1374 *  sc3215 ,    bool (*  fun3217 )(    struct Char_57  ) ) {
    struct StrView_21  s3218 = ( (  take_dash_while1396 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  (  fun3217 ) ) );
    (*  sc3215 ) .f_s = ( (  byte_dash_substr_dash_from1338 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  ( (  num_dash_bytes973 ) ( (  s3218 ) ) ) ) );
    return (  s3218 );
}

static  enum Unit_7   drop_dash_str_dash_while1394 (    struct Scanner_1374 *  sc3221 ,    bool (*  fun3223 )(    struct Char_57  ) ) {
    ( (  take_dash_str_dash_while1395 ) ( (  sc3221 ) ,  (  fun3223 ) ) );
    return ( Unit_7_Unit );
}

static  bool   eq1411 (    struct StrView_21  l2209 ,    struct StrView_21  r2211 ) {
    return (  eq1322 ( ( (  l2209 ) .f_contents ) , ( (  r2211 ) .f_contents ) ) );
}

static  enum Unit_7   undefined1413 (  ) {
    enum Unit_7  temp1414;
    return (  temp1414 );
}

static  enum Unit_7   todo1412 (  ) {
    ( (  print1017 ) ( ( (  from_dash_string209 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined1413 ) ( ) );
}

struct env1417 {
    bool (*  fun1126 )(    struct Char_57  );
};

struct envunion1418 {
    bool  (*fun) (  struct env1417*  ,    struct Char_57  ,    bool  );
    struct env1417 env;
};

static  bool   reduce1416 (    struct StrView_21  iterable1093 ,    bool  base1095 ,   struct envunion1418  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct StrViewIter_592  it1099 = ( (  into_dash_iter598 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_595  dref1100 = ( (  next596 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_595_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_595_Just_t ) {
                struct envunion1418  temp1419 = (  fun1097 );
                x1098 = ( temp1419.fun ( &temp1419.env ,  ( dref1100 .stuff .Maybe_595_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1420 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1420);
    exit ( 1 );
    ( Unit_7_Unit );
    bool  temp1421;
    return (  temp1421 );
}

static  bool   lam1422 (   struct env1417* env ,    struct Char_57  e1128 ,    bool  x1130 ) {
    return ( ( ( env->fun1126 ) ( (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1415 (    struct StrView_21  it1124 ,    bool (*  fun1126 )(    struct Char_57  ) ) {
    struct env1417 envinst1417 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1416 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1418){ .fun = (  bool  (*) (  struct env1417*  ,    struct Char_57  ,    bool  ) )lam1422 , .env =  envinst1417 } ) ) );
}

struct env1431 {
    struct env52 envinst52;
    struct StrBuilder_54 *  builder2749;
};

struct envunion1432 {
    enum Unit_7  (*fun) (  struct env1431*  ,    struct Char_57  );
    struct env1431 env;
};

static  enum Unit_7   for_dash_each1430 (    struct StrViewIter_592  iterable1074 ,   struct envunion1432  fun1076 ) {
    struct StrViewIter_592  temp1433 = ( (  into_dash_iter594 ) ( (  iterable1074 ) ) );
    struct StrViewIter_592 *  it1077 = ( &temp1433 );
    while ( ( true ) ) {
        struct Maybe_595  dref1078 = ( (  next596 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_595_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_595_Just_t ) {
                struct envunion1432  temp1434 = (  fun1076 );
                ( temp1434.fun ( &temp1434.env ,  ( dref1078 .stuff .Maybe_595_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1435 (   struct env1431* env ,    struct Char_57  c2753 ) {
    struct envunion56  temp1436 = ( (struct envunion56){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1268 , .env =  env->envinst52 } );
    return ( temp1436.fun ( &temp1436.env ,  ( env->builder2749 ) ,  (  c2753 ) ) );
}

static  enum Unit_7   write1429 (   struct env58* env ,    struct StrBuilder_54 *  builder2749 ,    struct StrView_21  s2751 ) {
    struct env1431 envinst1431 = {
        .envinst52 = env->envinst52 ,
        .builder2749 =  builder2749 ,
    };
    ( (  for_dash_each1430 ) ( ( (  chars597 ) ( (  s2751 ) ) ) ,  ( (struct envunion1432){ .fun = (  enum Unit_7  (*) (  struct env1431*  ,    struct Char_57  ) )lam1435 , .env =  envinst1431 } ) ) );
    return ( Unit_7_Unit );
}

static  struct StrView_21   mk_dash_dyn_dash_str1426 (   struct env66* env ,    struct StrView_21  s2807 ,    enum CAllocator_9  al2809 ) {
    struct StrBuilder_54  temp1427 = ( (  mk1235 ) ( (  al2809 ) ) );
    struct StrBuilder_54 *  sb2810 = ( &temp1427 );
    struct envunion67  temp1428 = ( (struct envunion67){ .fun = (  enum Unit_7  (*) (  struct env58*  ,    struct StrBuilder_54 *  ,    struct StrView_21  ) )write1429 , .env =  env->envinst58 } );
    ( temp1428.fun ( &temp1428.env ,  (  sb2810 ) ,  (  s2807 ) ) );
    struct envunion62  temp1437 = ( (struct envunion62){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1268 , .env =  env->envinst52 } );
    ( temp1437.fun ( &temp1437.env ,  (  sb2810 ) ,  ( (  nullchar517 ) ( ) ) ) );
    struct StrView_21  dynstr2811 = ( (  as_dash_str1277 ) ( (  sb2810 ) ) );
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = ( ( (  dynstr2811 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub293 ( ( ( (  dynstr2811 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_7   set_dash_msg1424 (   struct env123* env ,    struct Editor_127 *  ed4109 ,    struct StrView_21  s4111 ) {
    ( (  reset_dash_msg921 ) ( (  ed4109 ) ) );
    struct envunion124  temp1425 = ( (struct envunion124){ .fun = (  struct StrView_21  (*) (  struct env66*  ,    struct StrView_21  ,    enum CAllocator_9  ) )mk_dash_dyn_dash_str1426 , .env =  env->envinst66 } );
    (*  ed4109 ) .f_msg = ( ( Maybe_131_Just ) ( ( temp1425.fun ( &temp1425.env ,  (  s4111 ) ,  ( ( * (  ed4109 ) ) .f_al ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   run_dash_cmd1373 (   struct env125* env ,    struct Editor_127 *  ed4122 ,    struct StrView_21  s4124 ) {
    struct Scanner_1374  temp1375 = ( (  mk_dash_from_dash_strview1376 ) ( (  s4124 ) ) );
    struct Scanner_1374 *  sc4125 = ( &temp1375 );
    struct StrView_21  cmd4126 = ( (  take_dash_str_dash_while1377 ) ( (  sc4125 ) ,  (  is_dash_not_dash_whitespace1393 ) ) );
    ( (  drop_dash_str_dash_while1394 ) ( (  sc4125 ) ,  (  is_dash_whitespace1011 ) ) );
    if ( (  eq1411 ( (  cmd4126 ) , ( (  from_dash_charlike1097 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4122 ) .f_running = ( false );
    } else {
        if ( (  eq1411 ( (  cmd4126 ) , ( (  from_dash_string209 ) ( ( "wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq1411 ( (  cmd4126 ) , ( (  from_dash_charlike1097 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  todo1412 ) ( ) );
            } else {
                if ( (  eq1411 ( (  cmd4126 ) , ( (  from_dash_string209 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                } else {
                    if ( ( (  all1415 ) ( (  cmd4126 ) ,  (  is_dash_digit815 ) ) ) ) {
                    } else {
                        struct envunion126  temp1423 = ( (struct envunion126){ .fun = (  enum Unit_7  (*) (  struct env123*  ,    struct Editor_127 *  ,    struct StrView_21  ) )set_dash_msg1424 , .env =  env->envinst123 } );
                        ( temp1423.fun ( &temp1423.env ,  (  ed4122 ) ,  ( (  from_dash_string209 ) ( ( "unknown command" ) ,  ( 15 ) ) ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   free1438 (    struct StrBuilder_54 *  builder2793 ) {
    ( (  free413 ) ( ( & ( ( * (  builder2793 ) ) .f_chars ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Char_57   ascii_dash_char1440 (    char  c782 ) {
    return ( (  from_dash_u8881 ) ( ( (  ascii_dash_u8734 ) ( (  c782 ) ) ) ) );
}

static  struct Maybe_809   reduce1443 (    struct StrViewIter_592  iterable1093 ,    struct Maybe_809  base1095 ,    struct Maybe_809 (*  fun1097 )(    struct Char_57  ,    struct Maybe_809  ) ) {
    struct Maybe_809  x1098 = (  base1095 );
    struct StrViewIter_592  it1099 = ( (  into_dash_iter594 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_595  dref1100 = ( (  next596 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_595_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_595_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_595_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1444 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1444);
    exit ( 1 );
    ( Unit_7_Unit );
    struct Maybe_809  temp1445;
    return (  temp1445 );
}

static  struct Maybe_809   sequence_dash_maybe1446 (    struct Char_57  e2460 ,    struct Maybe_809  b2462 ) {
    struct Maybe_809  dref2463 = (  b2462 );
    if ( dref2463.tag == Maybe_809_None_t ) {
        return ( (struct Maybe_809) { .tag = Maybe_809_None_t } );
    }
    else {
        if ( dref2463.tag == Maybe_809_Just_t ) {
            struct Maybe_261  dref2465 = ( (  parse_dash_digit840 ) ( (  e2460 ) ) );
            if ( dref2465.tag == Maybe_261_None_t ) {
                return ( (struct Maybe_809) { .tag = Maybe_809_None_t } );
            }
            else {
                if ( dref2465.tag == Maybe_261_Just_t ) {
                    return ( ( Maybe_809_Just ) ( (  op_dash_add394 ( (  op_dash_mul219 ( ( dref2463 .stuff .Maybe_809_Just_s .field0 ) , (  from_dash_integral292 ( 10 ) ) ) ) , ( (  i32_dash_i64849 ) ( ( dref2465 .stuff .Maybe_261_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_809   parse_dash_int1442 (    struct StrView_21  s2457 ) {
    struct StrViewIter_592  cs2467 = ( (  chars597 ) ( (  s2457 ) ) );
    struct Maybe_595  dref2468 = ( (  head1014 ) ( (  cs2467 ) ) );
    if ( dref2468.tag == Maybe_595_Just_t ) {
        return ( (  reduce1443 ) ( (  cs2467 ) ,  ( ( Maybe_809_Just ) ( (  from_dash_integral292 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1446 ) ) );
    }
    else {
        if ( dref2468.tag == Maybe_595_None_t ) {
            return ( (struct Maybe_809) { .tag = Maybe_809_None_t } );
        }
    }
}

static  enum Unit_7   live_dash_cmd1441 (    struct Editor_127 *  ed4114 ,    struct StrView_21  cmd4116 ) {
    struct Maybe_809  dref4117 = ( (  parse_dash_int1442 ) ( (  cmd4116 ) ) );
    if ( dref4117.tag == Maybe_809_Just_t ) {
        int32_t  line4119 = ( (  clamp1289 ) ( ( (  i64_dash_i32851 ) ( ( dref4117 .stuff .Maybe_809_Just_s .field0 ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub801 ( ( (  num_dash_lines980 ) ( ( ( * ( (  pane977 ) ( (  ed4114 ) ) ) ) .f_buf ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
        ( (  set_dash_cursors934 ) ( ( (  pane977 ) ( (  ed4114 ) ) ) ,  ( (struct Pos_20) { .f_line = (  line4119 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_935_NoChanges ) ) );
    }
    else {
        if ( dref4117.tag == Maybe_809_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrViewIter_592   chars1451 (    struct StrBuilder_54  s2801 ) {
    return ( (  into_dash_iter598 ) ( ( (  as_dash_str1277 ) ( ( & (  s2801 ) ) ) ) ) );
}

static  struct StrViewIter_592   into_dash_iter1450 (    struct StrBuilder_54  self2804 ) {
    return ( (  chars1451 ) ( (  self2804 ) ) );
}

static  struct Maybe_595   head1448 (    struct StrBuilder_54  it1142 ) {
    struct StrViewIter_592  temp1449 = ( (  into_dash_iter1450 ) ( (  it1142 ) ) );
    return ( (  next596 ) ( ( &temp1449 ) ) );
}

static  bool   null1447 (    struct StrBuilder_54  it1151 ) {
    struct Maybe_595  dref1152 = ( (  head1448 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_595_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_7   remove1457 (   struct env34* env ,    struct List_11 *  list2076 ,    size_t  i2078 ) {
    struct envunion35  temp1458 = ( (struct envunion35){ .fun = (  enum Unit_7  (*) (  struct env32*  ,    struct List_11 *  ,    size_t  ,    size_t  ) )remove_dash_range416 , .env =  env->envinst32 } );
    ( temp1458.fun ( &temp1458.env ,  (  list2076 ) ,  (  i2078 ) ,  (  op_dash_add221 ( (  i2078 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   pop1455 (   struct env36* env ,    struct List_11 *  list2092 ) {
    if ( (  eq228 ( ( ( * (  list2092 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1050 ) ( ( (  from_dash_string209 ) ( ( "List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct envunion37  temp1456 = ( (struct envunion37){ .fun = (  enum Unit_7  (*) (  struct env34*  ,    struct List_11 *  ,    size_t  ) )remove1457 , .env =  env->envinst34 } );
    return ( temp1456.fun ( &temp1456.env ,  (  list2092 ) ,  (  op_dash_sub293 ( ( ( * (  list2092 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  enum Unit_7   pop1453 (   struct env59* env ,    struct StrBuilder_54 *  sb2767 ) {
    struct envunion60  temp1454 = ( (struct envunion60){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ) )pop1455 , .env =  env->envinst36 } );
    return ( temp1454.fun ( &temp1454.env ,  ( & ( ( * (  sb2767 ) ) .f_chars ) ) ) );
}

struct env1460 {
    struct Editor_127 *  ed4172;
    ;
};

struct envunion1461 {
    enum Unit_7  (*fun) (  struct env1460*  ,    struct StrView_21  );
    struct env1460 env;
};

static  enum Unit_7   if_dash_just1459 (    struct Maybe_131  x1291 ,   struct envunion1461  fun1293 ) {
    struct Maybe_131  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_131_Just_t ) {
        struct envunion1461  temp1462 = (  fun1293 );
        ( temp1462.fun ( &temp1462.env ,  ( dref1294 .stuff .Maybe_131_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_131_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1463 (   struct env1460* env ,    struct StrView_21  st4188 ) {
    ( (  free927 ) ( (  st4188 ) ,  ( ( * ( env->ed4172 ) ) .f_al ) ) );
    return ( Unit_7_Unit );
}

struct envunion1465 {
    enum Unit_7  (*fun) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  );
    struct env52 env;
};

static  struct Maybe_595   head1468 (    struct StrView_21  it1142 ) {
    struct StrViewIter_592  temp1469 = ( (  into_dash_iter598 ) ( (  it1142 ) ) );
    return ( (  next596 ) ( ( &temp1469 ) ) );
}

static  bool   null1467 (    struct StrView_21  it1151 ) {
    struct Maybe_595  dref1152 = ( (  head1468 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_595_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_7   live_dash_search1466 (    struct Editor_127 *  ed4129 ,    struct Pos_20  begin_dash_pos4131 ,    struct StrView_21  query4133 ) {
    if ( ( ! ( (  null1467 ) ( (  query4133 ) ) ) ) ) {
        struct Maybe_1312  dref4134 = ( (  search_dash_from1313 ) ( ( (  pane977 ) ( (  ed4129 ) ) ) ,  (  begin_dash_pos4131 ) ,  (  query4133 ) ) );
        if ( dref4134.tag == Maybe_1312_Just_t ) {
            ( (  set_dash_cursors934 ) ( ( (  pane977 ) ( (  ed4129 ) ) ) ,  ( dref4134 .stuff .Maybe_1312_Just_s .field0 .field1 ) ,  ( ( Maybe_28_Just ) ( ( dref4134 .stuff .Maybe_1312_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_935_NoChanges ) ) );
        }
        else {
            if ( dref4134.tag == Maybe_1312_None_t ) {
                ( (  set_dash_cursors934 ) ( ( (  pane977 ) ( (  ed4129 ) ) ) ,  (  begin_dash_pos4131 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_935_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors934 ) ( ( (  pane977 ) ( (  ed4129 ) ) ) ,  (  begin_dash_pos4131 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_935_NoChanges ) ) );
    }
    return ( Unit_7_Unit );
}

struct envunion1471 {
    enum Unit_7  (*fun) (  struct env59*  ,    struct StrBuilder_54 *  );
    struct env59 env;
};

static  enum Unit_7   handle_dash_key930 (   struct env140* env ,    struct Editor_127 *  ed4172 ,    struct Key_144  key4174 ) {
    struct EditorMode_132 *  dref4175 = ( & ( ( * (  ed4172 ) ) .f_mode ) );
    if ( (* dref4175 ).tag == EditorMode_132_Normal_t ) {
        enum Mode_129  dref4176 = ( ( ( * (  ed4172 ) ) .f_pane ) .f_mode );
        switch (  dref4176 ) {
            case Mode_129_Normal : {
                struct envunion143  temp931 = ( (struct envunion143){ .fun = (  enum Unit_7  (*) (  struct env133*  ,    struct Editor_127 *  ,    struct Key_144  ) )handle_dash_normal_dash_key932 , .env =  env->envinst133 } );
                ( temp931.fun ( &temp931.env ,  (  ed4172 ) ,  (  key4174 ) ) );
                break;
            }
            case Mode_129_Select : {
                struct envunion1358  temp1357 = ( (struct envunion1358){ .fun = (  enum Unit_7  (*) (  struct env133*  ,    struct Editor_127 *  ,    struct Key_144  ) )handle_dash_normal_dash_key932 , .env =  env->envinst133 } );
                ( temp1357.fun ( &temp1357.env ,  (  ed4172 ) ,  (  key4174 ) ) );
                break;
            }
            case Mode_129_Insert : {
                struct Key_144  dref4177 = (  key4174 );
                if ( dref4177.tag == Key_144_Escape_t ) {
                    ( (  set_dash_mode986 ) ( ( (  pane977 ) ( (  ed4172 ) ) ) ,  ( Mode_129_Normal ) ) );
                }
                else {
                    if ( dref4177.tag == Key_144_Enter_t ) {
                        struct envunion145  temp1359 = ( (struct envunion145){ .fun = (  enum Unit_7  (*) (  struct env108*  ,    struct Pane_128 *  ,    struct StrView_21  ) )add_dash_str_dash_at_dash_char1360 , .env =  env->envinst108 } );
                        ( temp1359.fun ( &temp1359.env ,  ( (  pane977 ) ( (  ed4172 ) ) ) ,  ( (  from_dash_charlike1097 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right978 ) ( ( (  pane977 ) ( (  ed4172 ) ) ) ) );
                    }
                    else {
                        if ( dref4177.tag == Key_144_Backspace_t ) {
                            struct envunion147  temp1362 = ( (struct envunion147){ .fun = (  enum Unit_7  (*) (  struct env111*  ,    struct Pane_128 *  ) )backspace1363 , .env =  env->envinst111 } );
                            ( temp1362.fun ( &temp1362.env ,  ( (  pane977 ) ( (  ed4172 ) ) ) ) );
                        }
                        else {
                            if ( dref4177.tag == Key_144_Char_t ) {
                                struct Array_1366  temp1368 = ( (  from_dash_listlike1369 ) ( ( (struct Array_1366) { ._arr = { ( dref4177 .stuff .Key_144_Char_s .field0 ) } } ) ) );
                                struct StrView_21  s4179 = ( (  from_dash_ascii_dash_slice806 ) ( ( (  as_dash_slice1365 ) ( ( &temp1368 ) ) ) ) );
                                struct envunion1371  temp1370 = ( (struct envunion1371){ .fun = (  enum Unit_7  (*) (  struct env108*  ,    struct Pane_128 *  ,    struct StrView_21  ) )add_dash_str_dash_at_dash_char1360 , .env =  env->envinst108 } );
                                ( temp1370.fun ( &temp1370.env ,  ( (  pane977 ) ( (  ed4172 ) ) ) ,  (  s4179 ) ) );
                                ( (  move_dash_right978 ) ( ( (  pane977 ) ( (  ed4172 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4175 ).tag == EditorMode_132_Cmd_t ) {
            struct Key_144  dref4182 = (  key4174 );
            if ( dref4182.tag == Key_144_Escape_t ) {
                ( (  set_dash_cursors934 ) ( ( (  pane977 ) ( (  ed4172 ) ) ) ,  ( (* dref4175 ) .stuff .EditorMode_132_Cmd_s .field0 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_935_UpdateVI ) ) );
                (*  ed4172 ) .f_mode = ( (struct EditorMode_132) { .tag = EditorMode_132_Normal_t } );
            }
            else {
                if ( dref4182.tag == Key_144_Enter_t ) {
                    struct envunion141  temp1372 = ( (struct envunion141){ .fun = (  enum Unit_7  (*) (  struct env125*  ,    struct Editor_127 *  ,    struct StrView_21  ) )run_dash_cmd1373 , .env =  env->envinst125 } );
                    ( temp1372.fun ( &temp1372.env ,  (  ed4172 ) ,  ( (  as_dash_str1277 ) ( ( & ( (* dref4175 ) .stuff .EditorMode_132_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1438 ) ( ( & ( (* dref4175 ) .stuff .EditorMode_132_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors934 ) ( ( (  pane977 ) ( (  ed4172 ) ) ) ,  ( ( * ( (  pane977 ) ( (  ed4172 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_935_UpdateVI ) ) );
                    (*  ed4172 ) .f_mode = ( (struct EditorMode_132) { .tag = EditorMode_132_Normal_t } );
                }
                else {
                    if ( dref4182.tag == Key_144_Char_t ) {
                        struct envunion146  temp1439 = ( (struct envunion146){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1268 , .env =  env->envinst52 } );
                        ( temp1439.fun ( &temp1439.env ,  ( & ( (* dref4175 ) .stuff .EditorMode_132_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1440 ) ( ( dref4182 .stuff .Key_144_Char_s .field0 ) ) ) ) );
                        ( (  live_dash_cmd1441 ) ( (  ed4172 ) ,  ( (  as_dash_str1277 ) ( ( & ( (* dref4175 ) .stuff .EditorMode_132_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4182.tag == Key_144_Backspace_t ) {
                            if ( ( ! ( (  null1447 ) ( ( (* dref4175 ) .stuff .EditorMode_132_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion142  temp1452 = ( (struct envunion142){ .fun = (  enum Unit_7  (*) (  struct env59*  ,    struct StrBuilder_54 *  ) )pop1453 , .env =  env->envinst59 } );
                                ( temp1452.fun ( &temp1452.env ,  ( & ( (* dref4175 ) .stuff .EditorMode_132_Cmd_s .field1 ) ) ) );
                            }
                            ( (  live_dash_cmd1441 ) ( (  ed4172 ) ,  ( (  as_dash_str1277 ) ( ( & ( (* dref4175 ) .stuff .EditorMode_132_Cmd_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( true ) {
                            }
                        }
                    }
                }
            }
        }
        else {
            if ( (* dref4175 ).tag == EditorMode_132_Search_t ) {
                struct Key_144  dref4186 = (  key4174 );
                if ( dref4186.tag == Key_144_Escape_t ) {
                    ( (  set_dash_cursors934 ) ( ( (  pane977 ) ( (  ed4172 ) ) ) ,  ( (* dref4175 ) .stuff .EditorMode_132_Search_s .field0 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_935_UpdateVI ) ) );
                    (*  ed4172 ) .f_mode = ( (struct EditorMode_132) { .tag = EditorMode_132_Normal_t } );
                }
                else {
                    if ( dref4186.tag == Key_144_Enter_t ) {
                        ( (  set_dash_cursors934 ) ( ( (  pane977 ) ( (  ed4172 ) ) ) ,  ( ( * ( (  pane977 ) ( (  ed4172 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane977 ) ( (  ed4172 ) ) ) ) .f_sel ) ,  ( CursorMovement_935_UpdateVI ) ) );
                        struct env1460 envinst1460 = {
                            .ed4172 =  ed4172 ,
                        };
                        ( (  if_dash_just1459 ) ( ( ( * (  ed4172 ) ) .f_search_dash_term ) ,  ( (struct envunion1461){ .fun = (  enum Unit_7  (*) (  struct env1460*  ,    struct StrView_21  ) )lam1463 , .env =  envinst1460 } ) ) );
                        if ( ( ! ( (  null1447 ) ( ( (* dref4175 ) .stuff .EditorMode_132_Search_s .field1 ) ) ) ) ) {
                            struct Pos_20  to4189 = ( ( * ( (  pane977 ) ( (  ed4172 ) ) ) ) .f_cursor );
                            struct Pos_20  from4190 = ( (  or_dash_else1086 ) ( ( ( * ( (  pane977 ) ( (  ed4172 ) ) ) ) .f_sel ) ,  (  to4189 ) ) );
                            (*  ed4172 ) .f_search_dash_term = ( ( Maybe_131_Just ) ( ( (  as_dash_str1277 ) ( ( & ( (* dref4175 ) .stuff .EditorMode_132_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4172 ) .f_search_dash_term = ( (struct Maybe_131) { .tag = Maybe_131_None_t } );
                        }
                        (*  ed4172 ) .f_mode = ( (struct EditorMode_132) { .tag = EditorMode_132_Normal_t } );
                    }
                    else {
                        if ( dref4186.tag == Key_144_Char_t ) {
                            struct envunion1465  temp1464 = ( (struct envunion1465){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1268 , .env =  env->envinst52 } );
                            ( temp1464.fun ( &temp1464.env ,  ( & ( (* dref4175 ) .stuff .EditorMode_132_Search_s .field1 ) ) ,  ( (  ascii_dash_char1440 ) ( ( dref4186 .stuff .Key_144_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1466 ) ( (  ed4172 ) ,  ( (* dref4175 ) .stuff .EditorMode_132_Search_s .field0 ) ,  ( (  as_dash_str1277 ) ( ( & ( (* dref4175 ) .stuff .EditorMode_132_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4186.tag == Key_144_Backspace_t ) {
                                if ( ( ! ( (  null1447 ) ( ( (* dref4175 ) .stuff .EditorMode_132_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1471  temp1470 = ( (struct envunion1471){ .fun = (  enum Unit_7  (*) (  struct env59*  ,    struct StrBuilder_54 *  ) )pop1453 , .env =  env->envinst59 } );
                                    ( temp1470.fun ( &temp1470.env ,  ( & ( (* dref4175 ) .stuff .EditorMode_132_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1466 ) ( (  ed4172 ) ,  ( (* dref4175 ) .stuff .EditorMode_132_Search_s .field0 ) ,  ( (  as_dash_str1277 ) ( ( & ( (* dref4175 ) .stuff .EditorMode_132_Search_s .field1 ) ) ) ) ) );
                            }
                            else {
                                if ( true ) {
                                }
                            }
                        }
                    }
                }
            }
            else {
                if ( true ) {
                    ( (  todo1412 ) ( ) );
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

struct envunion1473 {
    bool  (*fun) (  struct env77*  ,    struct Screen_650 *  );
    struct env77 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1474 (   struct env77* env ,    struct Screen_650 *  screen3461 ) {
    struct Tui_73 *  tui3462 = ( ( * (  screen3461 ) ) .f_tui );
    struct envunion78  temp1475 = ( (struct envunion78){ .fun = (  bool  (*) (  struct env70*  ,    struct Tui_73 *  ) )update_dash_dimensions721 , .env =  env->envinst70 } );
    bool  updated_dash_dimensions3463 = ( temp1475.fun ( &temp1475.env ,  (  tui3462 ) ) );
    if ( ( ! (  updated_dash_dimensions3463 ) ) ) {
        return ( false );
    }
    (*  screen3461 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3464 = ( ( * ( ( * (  screen3461 ) ) .f_tui ) ) .f_width );
    uint32_t  h3465 = ( ( * ( ( * (  screen3461 ) ) .f_tui ) ) .f_height );
    size_t  nusz3466 = ( (  u32_dash_size664 ) ( (  op_dash_mul672 ( (  w3464 ) , (  h3465 ) ) ) ) );
    if ( (  cmp173 ( (  nusz3466 ) , ( ( ( * (  screen3461 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_650  nuscreen3467 = ( (  mk_dash_screen658 ) ( (  tui3462 ) ,  ( ( * (  screen3461 ) ) .f_al ) ) );
    (*  screen3461 ) .f_current = ( (  nuscreen3467 ) .f_current );
    (*  screen3461 ) .f_previous = ( (  nuscreen3467 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1476 (    struct Tui_73 *  tui3388 ) {
    bool  redraw3389 = ( ( * (  tui3388 ) ) .f_should_dash_redraw );
    (*  tui3388 ) .f_should_dash_redraw = ( false );
    return (  redraw3389 );
}

struct env1480 {
    struct Slice_651  s1905;
    struct Cell_652 (*  fun1907 )(    struct Cell_652  );
    ;
    ;
    ;
};

struct envunion1481 {
    enum Unit_7  (*fun) (  struct env1480*  ,    int32_t  );
    struct env1480 env;
};

static  enum Unit_7   for_dash_each1479 (    struct Range_675  iterable1074 ,   struct envunion1481  fun1076 ) {
    struct RangeIter_678  temp1482 = ( (  into_dash_iter680 ) ( (  iterable1074 ) ) );
    struct RangeIter_678 *  it1077 = ( &temp1482 );
    while ( ( true ) ) {
        struct Maybe_261  dref1078 = ( (  next681 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_261_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_261_Just_t ) {
                struct envunion1481  temp1483 = (  fun1076 );
                ( temp1483.fun ( &temp1483.env ,  ( dref1078 .stuff .Maybe_261_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1484 (   struct env1480* env ,    int32_t  i1909 ) {
    return ( (  set685 ) ( ( env->s1905 ) ,  ( (  i32_dash_size251 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get689 ( ( env->s1905 ) , ( (  i32_dash_size251 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_7   map1478 (    struct Slice_651  s1905 ,    struct Cell_652 (*  fun1907 )(    struct Cell_652  ) ) {
    struct env1480 envinst1480 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each1479 ) ( ( (  to683 ) ( (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_i32185 ) ( (  op_dash_sub293 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1481){ .fun = (  enum Unit_7  (*) (  struct env1480*  ,    int32_t  ) )lam1484 , .env =  envinst1480 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Cell_652   lam1485 (    struct Cell_652  dref3425 ) {
    return ( (  default_dash_cell697 ) ( ) );
}

static  enum Unit_7   clear_dash_screen1477 (    struct Screen_650 *  screen3424 ) {
    ( (  map1478 ) ( ( ( * (  screen3424 ) ) .f_current ) ,  (  lam1485 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_screen_dash_fg1486 (    struct Screen_650 *  screen3470 ,    struct Color_653  c3472 ) {
    (*  screen3470 ) .f_default_dash_fg = (  c3472 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_screen_dash_bg1487 (    struct Screen_650 *  screen3475 ,    struct Color_653  c3477 ) {
    (*  screen3475 ) .f_default_dash_bg = (  c3477 );
    return ( Unit_7_Unit );
}

struct ScreenDims_1489 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

static  int32_t   cast1491 (    uint32_t  x356 ) {
    return ( (int32_t ) (  x356 ) );
}

static  int32_t   u32_dash_i321490 (    uint32_t  x660 ) {
    return ( (  cast1491 ) ( (  x660 ) ) );
}

static  int32_t   screen_dash_width1494 (    struct ScreenDims_1489  sd3858 ) {
    return (  op_dash_add263 ( (  op_dash_sub801 ( ( (  sd3858 ) .f_to_dash_sx ) , ( (  sd3858 ) .f_from_dash_sx ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1495 (    struct ScreenDims_1489  sd3861 ) {
    return (  op_dash_add263 ( (  op_dash_sub801 ( ( (  sd3861 ) .f_to_dash_sy ) , ( (  sd3861 ) .f_from_dash_sy ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
}

static  enum Unit_7   update_dash_screen_dash_offset1493 (    struct Pane_128 *  pane3864 ,    struct ScreenDims_1489  sd3866 ) {
    struct Pos_20  cur3867 = ( ( * (  pane3864 ) ) .f_cursor );
    int32_t  cur_dash_sx3868 = ( (  pos_dash_vi938 ) ( ( ( * (  pane3864 ) ) .f_buf ) ,  (  cur3867 ) ) );
    struct ScreenCursorOffset_130  sc_dash_off3869 = ( ( * (  pane3864 ) ) .f_sc_dash_off );
    int32_t  sw3870 = (  op_dash_sub801 ( ( (  screen_dash_width1494 ) ( (  sd3866 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    int32_t  sh3871 = (  op_dash_sub801 ( ( (  screen_dash_height1495 ) ( (  sd3866 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    int32_t  margin3872 = (  from_dash_integral48 ( 5 ) );
    int32_t  csi3873 = ( (  pos_dash_vi938 ) ( ( ( * (  pane3864 ) ) .f_buf ) ,  (  cur3867 ) ) );
    int32_t  csx3874 = (  op_dash_sub801 ( (  csi3873 ) , ( (  sc_dash_off3869 ) .f_screen_dash_left ) ) );
    int32_t  csy3875 = (  op_dash_sub801 ( ( (  cur3867 ) .f_line ) , ( (  sc_dash_off3869 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left3876 = ( (  sc_dash_off3869 ) .f_screen_dash_left );
    if ( (  cmp306 ( (  csx3874 ) , (  margin3872 ) ) == 0 ) ) {
        nu_dash_screen_dash_left3876 = (  op_dash_sub801 ( (  csi3873 ) , (  margin3872 ) ) );
    } else {
        if ( (  cmp306 ( (  csx3874 ) , (  op_dash_sub801 ( (  sw3870 ) , (  margin3872 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left3876 = (  op_dash_add263 ( (  op_dash_sub801 ( (  csi3873 ) , (  sw3870 ) ) ) , (  margin3872 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left3877 = ( (  max953 ) ( (  nu_dash_screen_dash_left3876 ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top3878 = ( (  sc_dash_off3869 ) .f_screen_dash_top );
    if ( (  cmp306 ( (  csy3875 ) , (  margin3872 ) ) == 0 ) ) {
        nu_dash_screen_dash_top3878 = (  op_dash_sub801 ( ( (  cur3867 ) .f_line ) , (  margin3872 ) ) );
    } else {
        if ( (  cmp306 ( (  csy3875 ) , (  op_dash_sub801 ( (  sh3871 ) , (  margin3872 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top3878 = (  op_dash_add263 ( (  op_dash_sub801 ( ( (  cur3867 ) .f_line ) , (  sh3871 ) ) ) , (  margin3872 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top3879 = ( (  max953 ) ( (  nu_dash_screen_dash_top3878 ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    (*  pane3864 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_130) { .f_screen_dash_top = (  nu_dash_screen_dash_top3879 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left3877 ) } );
    return ( Unit_7_Unit );
}

struct IntStrIter_1497 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

static  struct IntStrIter_1497   into_dash_iter1499 (    struct IntStrIter_1497  self1419 ) {
    return (  self1419 );
}

struct env1503 {
    int32_t  base1210;
    ;
};

struct envunion1504 {
    int32_t  (*fun) (  struct env1503*  ,    int32_t  ,    int32_t  );
    struct env1503 env;
};

static  int32_t   reduce1502 (    struct Range_675  iterable1093 ,    int32_t  base1095 ,   struct envunion1504  fun1097 ) {
    int32_t  x1098 = (  base1095 );
    struct RangeIter_678  it1099 = ( (  into_dash_iter680 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_261  dref1100 = ( (  next681 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_261_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_261_Just_t ) {
                struct envunion1504  temp1505 = (  fun1097 );
                x1098 = ( temp1505.fun ( &temp1505.env ,  ( dref1100 .stuff .Maybe_261_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1506 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1506);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1507;
    return (  temp1507 );
}

static  int32_t   lam1508 (   struct env1503* env ,    int32_t  item1214 ,    int32_t  x1216 ) {
    return (  op_dash_mul1345 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int32_t   pow1501 (    int32_t  base1210 ,    int32_t  p1212 ) {
    struct env1503 envinst1503 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1502 ) ( ( (  to683 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub801 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral48 ( 1 ) ) ,  ( (struct envunion1504){ .fun = (  int32_t  (*) (  struct env1503*  ,    int32_t  ,    int32_t  ) )lam1508 , .env =  envinst1503 } ) ) );
}

static  uint8_t   cast1509 (    int32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_595   next1500 (    struct IntStrIter_1497 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_595_Just ) ( ( (  from_dash_charlike210 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp306 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
    }
    int32_t  trim_dash_down1423 = ( (  pow1501 ) ( (  from_dash_integral48 ( 10 ) ) ,  (  op_dash_sub801 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    int32_t  upper1424 = (  op_dash_div1344 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    int32_t  upper_dash_mask1425 = (  op_dash_mul1345 ( (  op_dash_div1344 ( (  upper1424 ) , (  from_dash_integral48 ( 10 ) ) ) ) , (  from_dash_integral48 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1509 ) ( (  op_dash_sub801 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub801 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8881 ) ( (  op_dash_add771 ( (  digit1426 ) , (  from_dash_integral201 ( 48 ) ) ) ) ) );
    return ( ( Maybe_595_Just ) ( (  digit_dash_char1427 ) ) );
}

static  size_t   reduce1498 (    struct IntStrIter_1497  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_57  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct IntStrIter_1497  it1099 = ( (  into_dash_iter1499 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_595  dref1100 = ( (  next1500 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_595_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_595_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_595_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1510 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1510);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1511;
    return (  temp1511 );
}

static  size_t   lam1512 (    struct Char_57  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add221 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1496 (    struct IntStrIter_1497  it1104 ) {
    return ( (  reduce1498 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1512 ) ) );
}

static  int32_t   count_dash_digits1515 (    int32_t  self1430 ) {
    if ( (  eq309 ( (  self1430 ) , (  from_dash_integral48 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp306 ( (  self1430 ) , (  from_dash_integral48 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1344 ( (  self1430 ) , (  from_dash_integral48 ( 10 ) ) ) );
        digits1431 = (  op_dash_add263 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1497   int_dash_iter1514 (    int32_t  int1434 ) {
    if ( (  cmp306 ( (  int1434 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1497) { .f_int = (  op_dash_neg625 ( (  int1434 ) ) ) , .f_len = ( (  count_dash_digits1515 ) ( (  op_dash_neg625 ( (  int1434 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1497) { .f_int = (  int1434 ) , .f_len = ( (  count_dash_digits1515 ) ( (  int1434 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1497   chars1513 (    int32_t  self1443 ) {
    return ( (  int_dash_iter1514 ) ( (  self1443 ) ) );
}

struct Map_1520 {
    struct IntStrIter_1497  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1520 Map_1520_Map (  struct IntStrIter_1497  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1520 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1520   into_dash_iter1522 (    struct Map_1520  self796 ) {
    return (  self796 );
}

static  struct Maybe_261   next1523 (    struct Map_1520 *  dref798 ) {
    struct Maybe_595  dref801 = ( (  next1500 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_595_None_t ) {
        return ( (struct Maybe_261) { .tag = Maybe_261_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_595_Just_t ) {
            return ( ( Maybe_261_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_595_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1521 (    struct Map_1520  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1520  it1099 = ( (  into_dash_iter1522 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_261  dref1100 = ( (  next1523 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_261_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_261_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_261_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1524 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1524);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1525;
    return (  temp1525 );
}

static  int32_t   lam1526 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add263 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1519 (    struct Map_1520  it1110 ) {
    return ( (  reduce1521 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1526 ) ) );
}

static  struct Map_1520   map1527 (    struct IntStrIter_1497  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct IntStrIter_1497  it808 = ( (  into_dash_iter1499 ) ( (  iterable805 ) ) );
    return ( ( Map_1520_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  enum Unit_7   put_dash_char1531 (    struct Screen_650 *  screen3508 ,    struct Char_57  c3510 ,    int32_t  x3512 ,    int32_t  y3514 ) {
    int32_t  w3515 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3508 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp306 ( (  x3512 ) , (  w3515 ) ) != 0 ) || (  cmp306 ( (  y3514 ) , ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3508 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp306 ( (  x3512 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) ) || (  cmp306 ( (  y3514 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    size_t  i3516 = ( (  i32_dash_size251 ) ( (  op_dash_add263 ( (  op_dash_mul1345 ( (  y3514 ) , (  w3515 ) ) ) , (  x3512 ) ) ) ) );
    struct Color_653  fg3517 = ( ( * (  screen3508 ) ) .f_default_dash_fg );
    struct Color_653  bg3518 = ( ( * (  screen3508 ) ) .f_default_dash_bg );
    struct Char_57  c3519 = (  c3510 );
    int32_t  char_dash_width3520 = ( (  wcwidth954 ) ( (  c3519 ) ) );
    if ( ( (  cmp306 ( (  x3512 ) , (  from_dash_integral48 ( 0 ) ) ) == 2 ) && (  cmp306 ( ( (  elem_dash_get689 ( ( ( * (  screen3508 ) ) .f_current ) , (  op_dash_sub293 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral48 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_652  pc3521 = (  elem_dash_get689 ( ( ( * (  screen3508 ) ) .f_current ) , (  op_dash_sub293 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set685 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  op_dash_sub293 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_652) { .f_c = ( (  from_dash_charlike210 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3521 ) .f_fg ) , .f_bg = ( (  pc3521 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral48 ( 1 ) ) } ) ) );
    }
    ( (  set685 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  i3516 ) ,  ( (struct Cell_652) { .f_c = (  c3519 ) , .f_fg = (  fg3517 ) , .f_bg = (  bg3518 ) , .f_char_dash_width = (  char_dash_width3520 ) } ) ) );
    struct RangeIter_678  temp1532 =  into_dash_iter680 ( ( (  to683 ) ( (  op_dash_add263 ( (  x3512 ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  ( (  min458 ) ( (  op_dash_sub801 ( (  op_dash_add263 ( (  x3512 ) , (  char_dash_width3520 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  w3515 ) ) ) ) ) );
    while (true) {
        struct Maybe_261  __cond1533 =  next681 (&temp1532);
        if (  __cond1533 .tag == 0 ) {
            break;
        }
        int32_t  xx3523 =  __cond1533 .stuff .Maybe_261_Just_s .field0;
        size_t  i3524 = ( (  i32_dash_size251 ) ( (  op_dash_add263 ( (  op_dash_mul1345 ( (  y3514 ) , (  w3515 ) ) ) , (  xx3523 ) ) ) ) );
        ( (  set685 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  i3524 ) ,  ( (struct Cell_652) { .f_c = ( (  from_dash_charlike210 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = (  fg3517 ) , .f_bg = (  bg3518 ) , .f_char_dash_width = (  from_dash_integral48 ( 1 ) ) } ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str1528 (    struct Screen_650 *  screen3527 ,    int32_t  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp306 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp306 ( (  y3533 ) , ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add263 ( (  op_dash_mul1345 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min458 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size251 ) ( (  op_dash_sub801 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct IntStrIter_1497  temp1529 =  into_dash_iter1499 ( ( (  chars1513 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_595  __cond1530 =  next1500 (&temp1529);
        if (  __cond1530 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1530 .stuff .Maybe_595_Just_s .field0;
        ( (  put_dash_char1531 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add263 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add263 ( (  xx3538 ) , ( (  rendered_dash_wcwidth952 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1518 (    struct Screen_650 *  screen3543 ,    int32_t  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1519 ) ( ( (  map1527 ) ( ( (  chars1513 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth952 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub801 ( (  op_dash_sub801 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1528 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1535 {
    struct StrView_21  field0;
    int32_t  field1;
};

static struct StrConcat_1535 StrConcat_1535_StrConcat (  struct StrView_21  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1535 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1538 {
    struct StrView_21  field0;
    struct StrConcat_1535  field1;
};

static struct StrConcat_1538 StrConcat_1538_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_1535  field1 ) {
    return ( struct StrConcat_1538 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1537 {
    struct StrConcat_1538  field0;
    struct Char_57  field1;
};

static struct StrConcat_1537 StrConcat_1537_StrConcat (  struct StrConcat_1538  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1537 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str1540 (    struct StrConcat_1535  self1503 ) {
    struct StrConcat_1535  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str184 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str191 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str1539 (    struct StrConcat_1538  self1503 ) {
    struct StrConcat_1538  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str184 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str1540 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str1536 (    struct StrConcat_1537  self1503 ) {
    struct StrConcat_1537  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str1539 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str192 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   assert1534 (    bool  cond1718 ,    struct StrConcat_1535  msg1720 ) {
    if ( ( ! (  cond1718 ) ) ) {
        ( (  print_dash_str1536 ) ( ( ( StrConcat_1537_StrConcat ) ( ( ( StrConcat_1538_StrConcat ) ( ( (  from_dash_string209 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1720 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    }
    return ( Unit_7_Unit );
}

struct AppendIter_1542 {
    struct StrViewIter_592  f_it;
    struct Char_57  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1542   into_dash_iter1543 (    struct AppendIter_1542  self1019 ) {
    return (  self1019 );
}

static  struct AppendIter_1542   append1544 (    struct StrViewIter_592  it1006 ,    struct Char_57  e1008 ) {
    return ( (struct AppendIter_1542) { .f_it = ( (  into_dash_iter594 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct Maybe_595   next1546 (    struct AppendIter_1542 *  self1022 ) {
    struct Maybe_595  dref1023 = ( (  next596 ) ( ( & ( ( * (  self1022 ) ) .f_it ) ) ) );
    if ( dref1023.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1023 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1023.tag == Maybe_595_None_t ) {
            if ( ( ! ( ( * (  self1022 ) ) .f_appended ) ) ) {
                (*  self1022 ) .f_appended = ( true );
                return ( ( Maybe_595_Just ) ( ( ( * (  self1022 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
        }
    }
}

static  bool   between1548 (    struct Pos_20  c1337 ,    struct Pos_20  l1339 ,    struct Pos_20  r1341 ) {
    struct Pos_20  from1342 = ( (  min304 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Pos_20  to1343 = ( (  max307 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp305 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp305 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1547 (    struct Pane_128 *  pane3850 ,    struct Pos_20  pos3852 ) {
    return ( {  struct Maybe_28  dref3853 = ( ( * (  pane3850 ) ) .f_sel ) ; dref3853.tag == Maybe_28_Just_t ? ( (  between1548 ) ( (  pos3852 ) ,  ( ( * (  pane3850 ) ) .f_cursor ) ,  ( dref3853 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( false ) ; } );
}

static  enum Unit_7   render1492 (    struct Screen_650 *  screen3882 ,    struct Pane_128 *  pane3884 ,    struct ScreenDims_1489  sd3886 ) {
    bool  display_dash_line_dash_numbers3887 = ( true );
    ( (  update_dash_screen_dash_offset1493 ) ( (  pane3884 ) ,  (  sd3886 ) ) );
    struct ScreenCursorOffset_130  sc_dash_off3888 = ( ( * (  pane3884 ) ) .f_sc_dash_off );
    int32_t  max_dash_line_dash_num_dash_chars3889 = ( (  size_dash_i32185 ) ( ( (  count1496 ) ( ( (  chars1513 ) ( ( (  num_dash_lines980 ) ( ( ( * (  pane3884 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin3890 = (  from_dash_integral48 ( 2 ) );
    int32_t  num_dash_back_dash_margin3891 = (  from_dash_integral48 ( 2 ) );
    int32_t  total_dash_margin3892 = ( (  display_dash_line_dash_numbers3887 ) ? (  op_dash_add263 ( (  op_dash_add263 ( (  max_dash_line_dash_num_dash_chars3889 ) , (  num_dash_front_dash_margin3890 ) ) ) , (  num_dash_back_dash_margin3891 ) ) ) : (  from_dash_integral48 ( 0 ) ) );
    struct RangeIter_678  temp1516 =  into_dash_iter680 ( ( (  to683 ) ( (  op_dash_add263 ( ( (  sc_dash_off3888 ) .f_screen_dash_top ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  ( (  min458 ) ( ( (  num_dash_lines980 ) ( ( ( * (  pane3884 ) ) .f_buf ) ) ) ,  (  op_dash_add263 ( ( (  sc_dash_off3888 ) .f_screen_dash_top ) , ( (  screen_dash_height1495 ) ( (  sd3886 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_261  __cond1517 =  next681 (&temp1516);
        if (  __cond1517 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num3894 =  __cond1517 .stuff .Maybe_261_Just_s .field0;
        int32_t  ybi3895 = (  op_dash_sub801 ( (  line_dash_num3894 ) , (  from_dash_integral48 ( 1 ) ) ) );
        int32_t  xbi3896 = ( (  vi_dash_bi982 ) ( ( ( * (  pane3884 ) ) .f_buf ) ,  (  ybi3895 ) ,  ( (  sc_dash_off3888 ) .f_screen_dash_left ) ) );
        struct StrView_21  line_dash_content3897 = ( (  line940 ) ( ( ( * (  pane3884 ) ) .f_buf ) ,  (  ybi3895 ) ) );
        int32_t  ys3898 = (  op_dash_sub801 ( (  op_dash_sub801 ( (  op_dash_add263 ( ( (  sd3886 ) .f_from_dash_sy ) , (  line_dash_num3894 ) ) ) , ( (  sc_dash_off3888 ) .f_screen_dash_top ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers3887 ) ) {
            ( (  draw_dash_str_dash_right1518 ) ( (  screen3882 ) ,  (  line_dash_num3894 ) ,  (  op_dash_add263 ( (  op_dash_sub801 ( (  op_dash_sub801 ( ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3882 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd3886 ) .f_from_dash_sx ) ) ) , (  total_dash_margin3892 ) ) ) , (  num_dash_back_dash_margin3891 ) ) ) ,  (  ys3898 ) ) );
        }
        int32_t  vx3899 = (  op_dash_sub801 ( ( (  pos_dash_vi938 ) ( ( ( * (  pane3884 ) ) .f_buf ) ,  ( (  mk287 ) ( (  ybi3895 ) ,  (  xbi3896 ) ) ) ) ) , ( (  sc_dash_off3888 ) .f_screen_dash_left ) ) );
        ( (  assert1534 ) ( (  cmp306 ( (  vx3899 ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1535_StrConcat ) ( ( (  from_dash_string209 ) ( ( "vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx3899 ) ) ) ) );
        int32_t  left_dash_offset3900 = (  op_dash_add263 ( ( (  sd3886 ) .f_from_dash_sx ) , (  total_dash_margin3892 ) ) );
        struct AppendIter_1542  temp1541 =  into_dash_iter1543 ( ( (  append1544 ) ( ( (  chars597 ) ( ( (  byte_dash_substr_dash_from1338 ) ( (  line_dash_content3897 ) ,  ( (  i32_dash_size251 ) ( (  xbi3896 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike210 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_595  __cond1545 =  next1546 (&temp1541);
            if (  __cond1545 .tag == 0 ) {
                break;
            }
            struct Char_57  c3902 =  __cond1545 .stuff .Maybe_595_Just_s .field0;
            if ( (  cmp306 ( (  vx3899 ) , ( (  sd3886 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_20  curpos3903 = ( (  mk287 ) ( (  ybi3895 ) ,  (  xbi3896 ) ) );
            bool  is_dash_cursor3904 = (  eq308 ( (  curpos3903 ) , ( ( * (  pane3884 ) ) .f_cursor ) ) );
            bool  in_dash_selection3905 = ( (  is_dash_in_dash_selection1547 ) ( (  pane3884 ) ,  ( (  mk287 ) ( (  ybi3895 ) ,  (  xbi3896 ) ) ) ) );
            if ( (  is_dash_cursor3904 ) ) {
                (*  screen3882 ) .f_default_dash_fg = ( ( Color_653_Color8 ) ( ( Color8_654_Black8 ) ) );
                (*  screen3882 ) .f_default_dash_bg = ( ( Color_653_Color8 ) ( ( Color8_654_White8 ) ) );
            } else {
                if ( (  in_dash_selection3905 ) ) {
                    (*  screen3882 ) .f_default_dash_bg = ( ( Color_653_Color8 ) ( ( Color8_654_Cyan8 ) ) );
                }
            }
            struct Maybe_131  dref3906 = ( (  char_dash_replacement945 ) ( (  c3902 ) ) );
            if ( dref3906.tag == Maybe_131_None_t ) {
                if ( ( ! ( (  cmp306 ( (  vx3899 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp306 ( (  op_dash_sub801 ( (  op_dash_add263 ( (  vx3899 ) , ( (  char_dash_screen_dash_width943 ) ( (  c3902 ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) , ( (  sd3886 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1531 ) ( (  screen3882 ) ,  (  c3902 ) ,  (  op_dash_add263 ( (  left_dash_offset3900 ) , (  vx3899 ) ) ) ,  (  ys3898 ) ) );
                }
                vx3899 = (  op_dash_add263 ( (  vx3899 ) , ( (  char_dash_screen_dash_width943 ) ( (  c3902 ) ) ) ) );
            }
            else {
                if ( dref3906.tag == Maybe_131_Just_t ) {
                    struct StrViewIter_592  temp1549 =  into_dash_iter594 ( ( (  chars597 ) ( ( dref3906 .stuff .Maybe_131_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_595  __cond1550 =  next596 (&temp1549);
                        if (  __cond1550 .tag == 0 ) {
                            break;
                        }
                        struct Char_57  c3909 =  __cond1550 .stuff .Maybe_595_Just_s .field0;
                        if ( (  cmp306 ( (  vx3899 ) , (  from_dash_integral48 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1531 ) ( (  screen3882 ) ,  (  c3909 ) ,  (  op_dash_add263 ( (  left_dash_offset3900 ) , (  vx3899 ) ) ) ,  (  ys3898 ) ) );
                        }
                        vx3899 = (  op_dash_add263 ( (  vx3899 ) , ( (  char_dash_screen_dash_width943 ) ( (  c3909 ) ) ) ) );
                    }
                }
            }
            (*  screen3882 ) .f_default_dash_fg = ( (struct Color_653) { .tag = Color_653_ColorDefault_t } );
            (*  screen3882 ) .f_default_dash_bg = ( (struct Color_653) { .tag = Color_653_ColorDefault_t } );
            xbi3896 = (  op_dash_add263 ( (  xbi3896 ) , ( (  size_dash_i32185 ) ( ( (  c3902 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    return ( Unit_7_Unit );
}

struct env1552 {
    struct Screen_650 *  screen4194;
    ;
    int32_t *  curline4198;
    ;
    ;
    ;
    ;
    ;
};

struct env1553 {
    struct Screen_650 *  screen4194;
    ;
    int32_t *  curline4198;
    ;
    ;
    ;
    ;
    ;
};

struct env1554 {
    struct Screen_650 *  screen4194;
    ;
    int32_t *  curline4198;
    ;
    ;
    ;
    ;
    ;
};

struct env1555 {
    struct Screen_650 *  screen4194;
    ;
    int32_t *  curline4198;
    ;
    ;
    ;
    ;
    ;
};

struct env1556 {
    struct Screen_650 *  screen4194;
    ;
    int32_t *  curline4198;
    ;
    ;
    ;
    ;
    ;
};

struct env1557 {
    struct Screen_650 *  screen4194;
    ;
    int32_t *  curline4198;
    ;
    ;
    ;
    ;
    ;
};

struct env1558 {
    struct Screen_650 *  screen4194;
    ;
    int32_t *  curline4198;
    ;
    ;
    ;
    ;
    ;
};

struct env1559 {
    struct Screen_650 *  screen4194;
    ;
    int32_t *  curline4198;
    ;
    ;
    ;
    ;
    ;
};

struct env1560 {
    struct Screen_650 *  screen4194;
    ;
    int32_t *  curline4198;
    ;
    ;
    ;
    ;
    ;
};

struct StrConcat_1563 {
    struct StrView_21  field0;
    enum Mode_129  field1;
};

static struct StrConcat_1563 StrConcat_1563_StrConcat (  struct StrView_21  field0 ,  enum Mode_129  field1 ) {
    return ( struct StrConcat_1563 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1562 {
    enum Unit_7  (*fun) (  struct env1552*  ,    struct StrConcat_1563  );
    struct env1552 env;
};

struct StrConcatIter_1568 {
    struct StrViewIter_592  f_left;
    struct StrViewIter_592  f_right;
};

struct Map_1567 {
    struct StrConcatIter_1568  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1567 Map_1567_Map (  struct StrConcatIter_1568  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1567 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1567   into_dash_iter1570 (    struct Map_1567  self796 ) {
    return (  self796 );
}

static  struct Maybe_595   next1572 (    struct StrConcatIter_1568 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_261   next1571 (    struct Map_1567 *  dref798 ) {
    struct Maybe_595  dref801 = ( (  next1572 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_595_None_t ) {
        return ( (struct Maybe_261) { .tag = Maybe_261_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_595_Just_t ) {
            return ( ( Maybe_261_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_595_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1569 (    struct Map_1567  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1567  it1099 = ( (  into_dash_iter1570 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_261  dref1100 = ( (  next1571 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_261_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_261_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_261_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1573 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1573);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1574;
    return (  temp1574 );
}

static  int32_t   lam1575 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add263 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1566 (    struct Map_1567  it1110 ) {
    return ( (  reduce1569 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1575 ) ) );
}

static  struct StrConcatIter_1568   into_dash_iter1577 (    struct StrConcatIter_1568  self1491 ) {
    return (  self1491 );
}

static  struct Map_1567   map1576 (    struct StrConcatIter_1568  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1568  it808 = ( (  into_dash_iter1577 ) ( (  iterable805 ) ) );
    return ( ( Map_1567_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrView_21   todo1581 (  ) {
    ( (  print1017 ) ( ( (  from_dash_string209 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined505 ) ( ) );
}

static  struct StrViewIter_592   chars1580 (    enum Mode_129  self3805 ) {
    return ( (  chars597 ) ( ( {  enum Mode_129  dref3806 = (  self3805 ) ;  dref3806 == Mode_129_Normal ? ( (  from_dash_string209 ) ( ( "Normal" ) ,  ( 6 ) ) ) :  dref3806 == Mode_129_Insert ? ( (  from_dash_string209 ) ( ( "Insert" ) ,  ( 6 ) ) ) :  dref3806 == Mode_129_Select ? ( (  from_dash_string209 ) ( ( "Select" ) ,  ( 6 ) ) ) : ( (  todo1581 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1568   into_dash_iter1579 (    struct StrConcat_1563  dref1498 ) {
    return ( (struct StrConcatIter_1568) { .f_left = ( (  chars597 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1580 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1568   chars1578 (    struct StrConcat_1563  self1509 ) {
    return ( (  into_dash_iter1579 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1582 (    struct Screen_650 *  screen3527 ,    struct StrConcat_1563  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp306 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp306 ( (  y3533 ) , ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add263 ( (  op_dash_mul1345 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min458 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size251 ) ( (  op_dash_sub801 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1568  temp1583 =  into_dash_iter1577 ( ( (  chars1578 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_595  __cond1584 =  next1572 (&temp1583);
        if (  __cond1584 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1584 .stuff .Maybe_595_Just_s .field0;
        ( (  put_dash_char1531 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add263 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add263 ( (  xx3538 ) , ( (  rendered_dash_wcwidth952 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1565 (    struct Screen_650 *  screen3543 ,    struct StrConcat_1563  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1566 ) ( ( (  map1576 ) ( ( (  chars1578 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth952 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub801 ( (  op_dash_sub801 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1582 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1564 (   struct env1552* env ,    struct StrConcat_1563  s4201 ) {
    ( (  draw_dash_str_dash_right1565 ) ( ( env->screen4194 ) ,  (  s4201 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4198 ) ) ) );
    (* env->curline4198 ) = (  op_dash_add263 ( ( * ( env->curline4198 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1589 {
    struct StrView_21  field0;
    struct Pos_20  field1;
};

static struct StrConcat_1589 StrConcat_1589_StrConcat (  struct StrView_21  field0 ,  struct Pos_20  field1 ) {
    return ( struct StrConcat_1589 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1588 {
    struct StrConcat_1589  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1588 StrConcat_1588_StrConcat (  struct StrConcat_1589  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1588 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1587 {
    struct StrConcat_1588  field0;
    enum CharType_1002  field1;
};

static struct StrConcat_1587 StrConcat_1587_StrConcat (  struct StrConcat_1588  field0 ,  enum CharType_1002  field1 ) {
    return ( struct StrConcat_1587 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1586 {
    enum Unit_7  (*fun) (  struct env1553*  ,    struct StrConcat_1587  );
    struct env1553 env;
};

struct StrConcatIter_1600 {
    struct AppendIter_862  f_left;
    struct IntStrIter_1497  f_right;
};

struct StrConcatIter_1599 {
    struct StrConcatIter_1600  f_left;
    struct StrViewIter_592  f_right;
};

struct StrConcatIter_1598 {
    struct StrConcatIter_1599  f_left;
    struct IntStrIter_1497  f_right;
};

struct StrConcatIter_1597 {
    struct StrConcatIter_1598  f_left;
    struct AppendIter_862  f_right;
};

struct StrConcatIter_1596 {
    struct StrViewIter_592  f_left;
    struct StrConcatIter_1597  f_right;
};

struct StrConcatIter_1595 {
    struct StrConcatIter_1596  f_left;
    struct StrViewIter_592  f_right;
};

struct StrConcatIter_1594 {
    struct StrConcatIter_1595  f_left;
    struct StrViewIter_592  f_right;
};

struct Map_1593 {
    struct StrConcatIter_1594  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1593 Map_1593_Map (  struct StrConcatIter_1594  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1593 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1593   into_dash_iter1602 (    struct Map_1593  self796 ) {
    return (  self796 );
}

static  struct Maybe_595   next1610 (    struct StrConcatIter_1600 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next888 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next1500 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next1609 (    struct StrConcatIter_1599 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1610 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next1608 (    struct StrConcatIter_1598 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1609 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next1500 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next1607 (    struct StrConcatIter_1597 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1608 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next888 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next1606 (    struct StrConcatIter_1596 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next1607 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next1605 (    struct StrConcatIter_1595 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1606 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next1604 (    struct StrConcatIter_1594 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1605 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_261   next1603 (    struct Map_1593 *  dref798 ) {
    struct Maybe_595  dref801 = ( (  next1604 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_595_None_t ) {
        return ( (struct Maybe_261) { .tag = Maybe_261_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_595_Just_t ) {
            return ( ( Maybe_261_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_595_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1601 (    struct Map_1593  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1593  it1099 = ( (  into_dash_iter1602 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_261  dref1100 = ( (  next1603 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_261_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_261_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_261_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1611 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1611);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1612;
    return (  temp1612 );
}

static  int32_t   lam1613 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add263 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1592 (    struct Map_1593  it1110 ) {
    return ( (  reduce1601 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1613 ) ) );
}

static  struct StrConcatIter_1594   into_dash_iter1615 (    struct StrConcatIter_1594  self1491 ) {
    return (  self1491 );
}

static  struct Map_1593   map1614 (    struct StrConcatIter_1594  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1594  it808 = ( (  into_dash_iter1615 ) ( (  iterable805 ) ) );
    return ( ( Map_1593_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1627 {
    struct Char_57  field0;
    int32_t  field1;
};

static struct StrConcat_1627 StrConcat_1627_StrConcat (  struct Char_57  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1627 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1626 {
    struct StrConcat_1627  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1626 StrConcat_1626_StrConcat (  struct StrConcat_1627  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1626 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1625 {
    struct StrConcat_1626  field0;
    int32_t  field1;
};

static struct StrConcat_1625 StrConcat_1625_StrConcat (  struct StrConcat_1626  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1625 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1624 {
    struct StrConcat_1625  field0;
    struct Char_57  field1;
};

static struct StrConcat_1624 StrConcat_1624_StrConcat (  struct StrConcat_1625  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1624 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_1600   into_dash_iter1634 (    struct StrConcat_1627  dref1498 ) {
    return ( (struct StrConcatIter_1600) { .f_left = ( (  chars902 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1513 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1600   chars1633 (    struct StrConcat_1627  self1509 ) {
    return ( (  into_dash_iter1634 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1599   into_dash_iter1632 (    struct StrConcat_1626  dref1498 ) {
    return ( (struct StrConcatIter_1599) { .f_left = ( (  chars1633 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars597 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1599   chars1631 (    struct StrConcat_1626  self1509 ) {
    return ( (  into_dash_iter1632 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1598   into_dash_iter1630 (    struct StrConcat_1625  dref1498 ) {
    return ( (struct StrConcatIter_1598) { .f_left = ( (  chars1631 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1513 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1598   chars1629 (    struct StrConcat_1625  self1509 ) {
    return ( (  into_dash_iter1630 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1597   into_dash_iter1628 (    struct StrConcat_1624  dref1498 ) {
    return ( (struct StrConcatIter_1597) { .f_left = ( (  chars1629 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars902 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1597   chars1623 (    struct StrConcat_1624  self1509 ) {
    return ( (  into_dash_iter1628 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1597   chars1622 (    struct Pos_20  self3584 ) {
    return ( (  chars1623 ) ( ( ( StrConcat_1624_StrConcat ) ( ( ( StrConcat_1625_StrConcat ) ( ( ( StrConcat_1626_StrConcat ) ( ( ( StrConcat_1627_StrConcat ) ( ( (  from_dash_charlike210 ) ( ( "(" ) ,  ( 1 ) ) ) ,  ( (  self3584 ) .f_line ) ) ) ,  ( (  from_dash_string209 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  self3584 ) .f_bi ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrConcatIter_1596   into_dash_iter1621 (    struct StrConcat_1589  dref1498 ) {
    return ( (struct StrConcatIter_1596) { .f_left = ( (  chars597 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1622 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1596   chars1620 (    struct StrConcat_1589  self1509 ) {
    return ( (  into_dash_iter1621 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1595   into_dash_iter1619 (    struct StrConcat_1588  dref1498 ) {
    return ( (struct StrConcatIter_1595) { .f_left = ( (  chars1620 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars597 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1595   chars1618 (    struct StrConcat_1588  self1509 ) {
    return ( (  into_dash_iter1619 ) ( (  self1509 ) ) );
}

static  struct StrViewIter_592   chars1635 (    enum CharType_1002  self3794 ) {
    return ( (  chars597 ) ( ( {  enum CharType_1002  dref3795 = (  self3794 ) ;  dref3795 == CharType_1002_CharPunctuation ? ( (  from_dash_string209 ) ( ( "Punct" ) ,  ( 5 ) ) ) :  dref3795 == CharType_1002_CharWord ? ( (  from_dash_string209 ) ( ( "Word" ) ,  ( 4 ) ) ) :  dref3795 == CharType_1002_CharSpace ? ( (  from_dash_string209 ) ( ( "Space" ) ,  ( 5 ) ) ) : ( (  todo1581 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1594   into_dash_iter1617 (    struct StrConcat_1587  dref1498 ) {
    return ( (struct StrConcatIter_1594) { .f_left = ( (  chars1618 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1635 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1594   chars1616 (    struct StrConcat_1587  self1509 ) {
    return ( (  into_dash_iter1617 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1636 (    struct Screen_650 *  screen3527 ,    struct StrConcat_1587  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp306 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp306 ( (  y3533 ) , ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add263 ( (  op_dash_mul1345 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min458 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size251 ) ( (  op_dash_sub801 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1594  temp1637 =  into_dash_iter1615 ( ( (  chars1616 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_595  __cond1638 =  next1604 (&temp1637);
        if (  __cond1638 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1638 .stuff .Maybe_595_Just_s .field0;
        ( (  put_dash_char1531 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add263 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add263 ( (  xx3538 ) , ( (  rendered_dash_wcwidth952 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1591 (    struct Screen_650 *  screen3543 ,    struct StrConcat_1587  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1592 ) ( ( (  map1614 ) ( ( (  chars1616 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth952 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub801 ( (  op_dash_sub801 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1636 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1590 (   struct env1553* env ,    struct StrConcat_1587  s4201 ) {
    ( (  draw_dash_str_dash_right1591 ) ( ( env->screen4194 ) ,  (  s4201 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4198 ) ) ) );
    (* env->curline4198 ) = (  op_dash_add263 ( ( * ( env->curline4198 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1641 {
    struct StrView_21  field0;
    struct Maybe_28  field1;
};

static struct StrConcat_1641 StrConcat_1641_StrConcat (  struct StrView_21  field0 ,  struct Maybe_28  field1 ) {
    return ( struct StrConcat_1641 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1640 {
    enum Unit_7  (*fun) (  struct env1554*  ,    struct StrConcat_1641  );
    struct env1554 env;
};

struct StrConcatIter_1648 {
    struct StrConcatIter_1596  f_left;
    struct AppendIter_862  f_right;
};

struct StrCaseIter_1647 {
    enum {
        StrCaseIter_1647_StrCaseIter1_t,
        StrCaseIter_1647_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_592  field0;
        } StrCaseIter_1647_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1648  field0;
        } StrCaseIter_1647_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1647 StrCaseIter_1647_StrCaseIter1 (  struct StrViewIter_592  field0 ) {
    return ( struct StrCaseIter_1647 ) { .tag = StrCaseIter_1647_StrCaseIter1_t, .stuff = { .StrCaseIter_1647_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1647 StrCaseIter_1647_StrCaseIter2 (  struct StrConcatIter_1648  field0 ) {
    return ( struct StrCaseIter_1647 ) { .tag = StrCaseIter_1647_StrCaseIter2_t, .stuff = { .StrCaseIter_1647_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1646 {
    struct StrViewIter_592  f_left;
    struct StrCaseIter_1647  f_right;
};

struct Map_1645 {
    struct StrConcatIter_1646  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1645 Map_1645_Map (  struct StrConcatIter_1646  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1645 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1645   into_dash_iter1650 (    struct Map_1645  self796 ) {
    return (  self796 );
}

static  struct Maybe_595   next1654 (    struct StrConcatIter_1648 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1606 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next888 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next1653 (    struct StrCaseIter_1647 *  self1516 ) {
    struct StrCaseIter_1647 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1647_StrCaseIter1_t ) {
        return ( (  next596 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1647_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1647_StrCaseIter2_t ) {
            return ( (  next1654 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1647_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_595   next1652 (    struct StrConcatIter_1646 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next1653 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_261   next1651 (    struct Map_1645 *  dref798 ) {
    struct Maybe_595  dref801 = ( (  next1652 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_595_None_t ) {
        return ( (struct Maybe_261) { .tag = Maybe_261_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_595_Just_t ) {
            return ( ( Maybe_261_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_595_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1649 (    struct Map_1645  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1645  it1099 = ( (  into_dash_iter1650 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_261  dref1100 = ( (  next1651 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_261_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_261_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_261_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1655 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1655);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1656;
    return (  temp1656 );
}

static  int32_t   lam1657 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add263 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1644 (    struct Map_1645  it1110 ) {
    return ( (  reduce1649 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1657 ) ) );
}

static  struct StrConcatIter_1646   into_dash_iter1659 (    struct StrConcatIter_1646  self1491 ) {
    return (  self1491 );
}

static  struct Map_1645   map1658 (    struct StrConcatIter_1646  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1646  it808 = ( (  into_dash_iter1659 ) ( (  iterable805 ) ) );
    return ( ( Map_1645_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1664 {
    struct StrConcat_1589  field0;
    struct Char_57  field1;
};

static struct StrConcat_1664 StrConcat_1664_StrConcat (  struct StrConcat_1589  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1664 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1663 {
    enum {
        StrCase_1663_StrCase1_t,
        StrCase_1663_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1663_StrCase1_s;
        struct {
            struct StrConcat_1664  field0;
        } StrCase_1663_StrCase2_s;
    } stuff;
};

static struct StrCase_1663 StrCase_1663_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1663 ) { .tag = StrCase_1663_StrCase1_t, .stuff = { .StrCase_1663_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1663 StrCase_1663_StrCase2 (  struct StrConcat_1664  field0 ) {
    return ( struct StrCase_1663 ) { .tag = StrCase_1663_StrCase2_t, .stuff = { .StrCase_1663_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1648   into_dash_iter1669 (    struct StrConcat_1664  dref1498 ) {
    return ( (struct StrConcatIter_1648) { .f_left = ( (  chars1620 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars902 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1648   chars1668 (    struct StrConcat_1664  self1509 ) {
    return ( (  into_dash_iter1669 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1647   into_dash_iter1667 (    struct StrCase_1663  self1522 ) {
    struct StrCase_1663  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1663_StrCase1_t ) {
        return ( ( StrCaseIter_1647_StrCaseIter1 ) ( ( (  chars597 ) ( ( dref1523 .stuff .StrCase_1663_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1663_StrCase2_t ) {
            return ( ( StrCaseIter_1647_StrCaseIter2 ) ( ( (  chars1668 ) ( ( dref1523 .stuff .StrCase_1663_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1647   chars1666 (    struct StrCase_1663  self1534 ) {
    return ( (  into_dash_iter1667 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1647   chars1662 (    struct Maybe_28  self1548 ) {
    struct StrCase_1663  temp1665;
    struct StrCase_1663  c1549 = (  temp1665 );
    struct Maybe_28  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_28_None_t ) {
        c1549 = ( ( StrCase_1663_StrCase1 ) ( ( (  from_dash_string209 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_28_Just_t ) {
            c1549 = ( ( StrCase_1663_StrCase2 ) ( ( ( StrConcat_1664_StrConcat ) ( ( ( StrConcat_1589_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_28_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1666 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1646   into_dash_iter1661 (    struct StrConcat_1641  dref1498 ) {
    return ( (struct StrConcatIter_1646) { .f_left = ( (  chars597 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1662 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1646   chars1660 (    struct StrConcat_1641  self1509 ) {
    return ( (  into_dash_iter1661 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1670 (    struct Screen_650 *  screen3527 ,    struct StrConcat_1641  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp306 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp306 ( (  y3533 ) , ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add263 ( (  op_dash_mul1345 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min458 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size251 ) ( (  op_dash_sub801 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1646  temp1671 =  into_dash_iter1659 ( ( (  chars1660 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_595  __cond1672 =  next1652 (&temp1671);
        if (  __cond1672 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1672 .stuff .Maybe_595_Just_s .field0;
        ( (  put_dash_char1531 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add263 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add263 ( (  xx3538 ) , ( (  rendered_dash_wcwidth952 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1643 (    struct Screen_650 *  screen3543 ,    struct StrConcat_1641  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1644 ) ( ( (  map1658 ) ( ( (  chars1660 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth952 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub801 ( (  op_dash_sub801 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1670 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1642 (   struct env1554* env ,    struct StrConcat_1641  s4201 ) {
    ( (  draw_dash_str_dash_right1643 ) ( ( env->screen4194 ) ,  (  s4201 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4198 ) ) ) );
    (* env->curline4198 ) = (  op_dash_add263 ( ( * ( env->curline4198 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct Take_1675 {
    struct StrViewIter_592  field0;
    size_t  field1;
};

static struct Take_1675 Take_1675_Take (  struct StrViewIter_592  field0 ,  size_t  field1 ) {
    return ( struct Take_1675 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1674 {
    struct Take_1675  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1674 StrConcat_1674_StrConcat (  struct Take_1675  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1674 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_1673 {
    enum {
        Maybe_1673_None_t,
        Maybe_1673_Just_t,
    } tag;
    union {
        struct {
            struct StrConcat_1674  field0;
        } Maybe_1673_Just_s;
    } stuff;
};

static struct Maybe_1673 Maybe_1673_Just (  struct StrConcat_1674  field0 ) {
    return ( struct Maybe_1673 ) { .tag = Maybe_1673_Just_t, .stuff = { .Maybe_1673_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1673   fmap_dash_maybe1676 (    struct Maybe_131  x1275 ,    struct StrConcat_1674 (*  fun1277 )(    struct StrView_21  ) ) {
    struct Maybe_131  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_131_None_t ) {
        return ( (struct Maybe_1673) { .tag = Maybe_1673_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_131_Just_t ) {
            return ( ( Maybe_1673_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_131_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Take_1675   take1678 (    struct StrView_21  it867 ,    size_t  i869 ) {
    return ( ( Take_1675_Take ) ( ( (  into_dash_iter598 ) ( (  it867 ) ) ) ,  (  i869 ) ) );
}

struct Drop_1680 {
    struct StrViewIter_592  field0;
    size_t  field1;
};

static struct Drop_1680 Drop_1680_Drop (  struct StrViewIter_592  field0 ,  size_t  field1 ) {
    return ( struct Drop_1680 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Maybe_595   next1682 (    struct Drop_1680 *  dref847 ) {
    while ( (  cmp173 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next596 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub293 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next596 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Drop_1680   into_dash_iter1684 (    struct Drop_1680  self845 ) {
    return (  self845 );
}

static  struct Maybe_595   head1681 (    struct Drop_1680  it1142 ) {
    struct Drop_1680  temp1683 = ( (  into_dash_iter1684 ) ( (  it1142 ) ) );
    return ( (  next1682 ) ( ( &temp1683 ) ) );
}

static  bool   null1679 (    struct Drop_1680  it1151 ) {
    struct Maybe_595  dref1152 = ( (  head1681 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_595_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Drop_1680   drop1685 (    struct StrView_21  iterable852 ,    size_t  i854 ) {
    struct StrViewIter_592  it855 = ( (  into_dash_iter598 ) ( (  iterable852 ) ) );
    return ( ( Drop_1680_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct StrConcat_1674   lam1677 (    struct StrView_21  s4204 ) {
    return ( ( StrConcat_1674_StrConcat ) ( ( (  take1678 ) ( (  s4204 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ,  ( ( (  null1679 ) ( ( (  drop1685 ) ( (  s4204 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ) ) ? ( (  from_dash_string209 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_string209 ) ( ( "..." ) ,  ( 3 ) ) ) ) ) );
}

struct StrConcat_1688 {
    struct StrView_21  field0;
    struct Maybe_1673  field1;
};

static struct StrConcat_1688 StrConcat_1688_StrConcat (  struct StrView_21  field0 ,  struct Maybe_1673  field1 ) {
    return ( struct StrConcat_1688 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1687 {
    enum Unit_7  (*fun) (  struct env1555*  ,    struct StrConcat_1688  );
    struct env1555 env;
};

struct StrConcatIter_1697 {
    struct Take_1675  f_left;
    struct StrViewIter_592  f_right;
};

struct StrConcatIter_1696 {
    struct StrViewIter_592  f_left;
    struct StrConcatIter_1697  f_right;
};

struct StrConcatIter_1695 {
    struct StrConcatIter_1696  f_left;
    struct AppendIter_862  f_right;
};

struct StrCaseIter_1694 {
    enum {
        StrCaseIter_1694_StrCaseIter1_t,
        StrCaseIter_1694_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_592  field0;
        } StrCaseIter_1694_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1695  field0;
        } StrCaseIter_1694_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1694 StrCaseIter_1694_StrCaseIter1 (  struct StrViewIter_592  field0 ) {
    return ( struct StrCaseIter_1694 ) { .tag = StrCaseIter_1694_StrCaseIter1_t, .stuff = { .StrCaseIter_1694_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1694 StrCaseIter_1694_StrCaseIter2 (  struct StrConcatIter_1695  field0 ) {
    return ( struct StrCaseIter_1694 ) { .tag = StrCaseIter_1694_StrCaseIter2_t, .stuff = { .StrCaseIter_1694_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1693 {
    struct StrViewIter_592  f_left;
    struct StrCaseIter_1694  f_right;
};

struct Map_1692 {
    struct StrConcatIter_1693  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1692 Map_1692_Map (  struct StrConcatIter_1693  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1692 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1692   into_dash_iter1699 (    struct Map_1692  self796 ) {
    return (  self796 );
}

static  struct Maybe_595   next1706 (    struct Take_1675 *  dref861 ) {
    if ( (  cmp173 ( ( (* dref861 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_595  x864 = ( (  next596 ) ( ( & ( (* dref861 ) .field0 ) ) ) );
        (* dref861 ) .field1 = (  op_dash_sub293 ( ( (* dref861 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
        return (  x864 );
    } else {
        return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
    }
}

static  struct Maybe_595   next1705 (    struct StrConcatIter_1697 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1706 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next1704 (    struct StrConcatIter_1696 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next1705 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next1703 (    struct StrConcatIter_1695 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1704 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next888 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next1702 (    struct StrCaseIter_1694 *  self1516 ) {
    struct StrCaseIter_1694 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1694_StrCaseIter1_t ) {
        return ( (  next596 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1694_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1694_StrCaseIter2_t ) {
            return ( (  next1703 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1694_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_595   next1701 (    struct StrConcatIter_1693 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next1702 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_261   next1700 (    struct Map_1692 *  dref798 ) {
    struct Maybe_595  dref801 = ( (  next1701 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_595_None_t ) {
        return ( (struct Maybe_261) { .tag = Maybe_261_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_595_Just_t ) {
            return ( ( Maybe_261_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_595_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1698 (    struct Map_1692  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1692  it1099 = ( (  into_dash_iter1699 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_261  dref1100 = ( (  next1700 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_261_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_261_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_261_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1707 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1707);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1708;
    return (  temp1708 );
}

static  int32_t   lam1709 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add263 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1691 (    struct Map_1692  it1110 ) {
    return ( (  reduce1698 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1709 ) ) );
}

static  struct StrConcatIter_1693   into_dash_iter1711 (    struct StrConcatIter_1693  self1491 ) {
    return (  self1491 );
}

static  struct Map_1692   map1710 (    struct StrConcatIter_1693  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1693  it808 = ( (  into_dash_iter1711 ) ( (  iterable805 ) ) );
    return ( ( Map_1692_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1717 {
    struct StrView_21  field0;
    struct StrConcat_1674  field1;
};

static struct StrConcat_1717 StrConcat_1717_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_1674  field1 ) {
    return ( struct StrConcat_1717 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1716 {
    struct StrConcat_1717  field0;
    struct Char_57  field1;
};

static struct StrConcat_1716 StrConcat_1716_StrConcat (  struct StrConcat_1717  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1716 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1715 {
    enum {
        StrCase_1715_StrCase1_t,
        StrCase_1715_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1715_StrCase1_s;
        struct {
            struct StrConcat_1716  field0;
        } StrCase_1715_StrCase2_s;
    } stuff;
};

static struct StrCase_1715 StrCase_1715_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1715 ) { .tag = StrCase_1715_StrCase1_t, .stuff = { .StrCase_1715_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1715 StrCase_1715_StrCase2 (  struct StrConcat_1716  field0 ) {
    return ( struct StrCase_1715 ) { .tag = StrCase_1715_StrCase2_t, .stuff = { .StrCase_1715_StrCase2_s = { .field0 = field0 } } };
};

static  struct Take_1675   chars1727 (    struct Take_1675  self1639 ) {
    return (  self1639 );
}

static  struct StrConcatIter_1697   into_dash_iter1726 (    struct StrConcat_1674  dref1498 ) {
    return ( (struct StrConcatIter_1697) { .f_left = ( (  chars1727 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars597 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1697   chars1725 (    struct StrConcat_1674  self1509 ) {
    return ( (  into_dash_iter1726 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1696   into_dash_iter1724 (    struct StrConcat_1717  dref1498 ) {
    return ( (struct StrConcatIter_1696) { .f_left = ( (  chars597 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1725 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1696   chars1723 (    struct StrConcat_1717  self1509 ) {
    return ( (  into_dash_iter1724 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1695   into_dash_iter1722 (    struct StrConcat_1716  dref1498 ) {
    return ( (struct StrConcatIter_1695) { .f_left = ( (  chars1723 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars902 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1695   chars1721 (    struct StrConcat_1716  self1509 ) {
    return ( (  into_dash_iter1722 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1694   into_dash_iter1720 (    struct StrCase_1715  self1522 ) {
    struct StrCase_1715  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1715_StrCase1_t ) {
        return ( ( StrCaseIter_1694_StrCaseIter1 ) ( ( (  chars597 ) ( ( dref1523 .stuff .StrCase_1715_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1715_StrCase2_t ) {
            return ( ( StrCaseIter_1694_StrCaseIter2 ) ( ( (  chars1721 ) ( ( dref1523 .stuff .StrCase_1715_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1694   chars1719 (    struct StrCase_1715  self1534 ) {
    return ( (  into_dash_iter1720 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1694   chars1714 (    struct Maybe_1673  self1548 ) {
    struct StrCase_1715  temp1718;
    struct StrCase_1715  c1549 = (  temp1718 );
    struct Maybe_1673  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_1673_None_t ) {
        c1549 = ( ( StrCase_1715_StrCase1 ) ( ( (  from_dash_string209 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_1673_Just_t ) {
            c1549 = ( ( StrCase_1715_StrCase2 ) ( ( ( StrConcat_1716_StrConcat ) ( ( ( StrConcat_1717_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_1673_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1719 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1693   into_dash_iter1713 (    struct StrConcat_1688  dref1498 ) {
    return ( (struct StrConcatIter_1693) { .f_left = ( (  chars597 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1714 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1693   chars1712 (    struct StrConcat_1688  self1509 ) {
    return ( (  into_dash_iter1713 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1728 (    struct Screen_650 *  screen3527 ,    struct StrConcat_1688  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp306 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp306 ( (  y3533 ) , ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add263 ( (  op_dash_mul1345 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min458 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size251 ) ( (  op_dash_sub801 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1693  temp1729 =  into_dash_iter1711 ( ( (  chars1712 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_595  __cond1730 =  next1701 (&temp1729);
        if (  __cond1730 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1730 .stuff .Maybe_595_Just_s .field0;
        ( (  put_dash_char1531 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add263 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add263 ( (  xx3538 ) , ( (  rendered_dash_wcwidth952 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1690 (    struct Screen_650 *  screen3543 ,    struct StrConcat_1688  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1691 ) ( ( (  map1710 ) ( ( (  chars1712 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth952 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub801 ( (  op_dash_sub801 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1728 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1689 (   struct env1555* env ,    struct StrConcat_1688  s4201 ) {
    ( (  draw_dash_str_dash_right1690 ) ( ( env->screen4194 ) ,  (  s4201 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4198 ) ) ) );
    (* env->curline4198 ) = (  op_dash_add263 ( ( * ( env->curline4198 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Maybe_1673   fmap_dash_maybe1731 (    struct Maybe_131  x1275 ,    struct StrConcat_1674 (*  fun1277 )(    struct StrView_21  ) ) {
    struct Maybe_131  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_131_None_t ) {
        return ( (struct Maybe_1673) { .tag = Maybe_1673_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_131_Just_t ) {
            return ( ( Maybe_1673_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_131_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrConcat_1674   lam1732 (    struct StrView_21  s4207 ) {
    return ( ( StrConcat_1674_StrConcat ) ( ( (  take1678 ) ( (  s4207 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ,  ( ( (  null1679 ) ( ( (  drop1685 ) ( (  s4207 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ) ) ? ( (  from_dash_string209 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_string209 ) ( ( "..." ) ,  ( 3 ) ) ) ) ) );
}

struct envunion1734 {
    enum Unit_7  (*fun) (  struct env1555*  ,    struct StrConcat_1688  );
    struct env1555 env;
};

struct StrConcat_1737 {
    struct StrView_21  field0;
    struct EditorMode_132  field1;
};

static struct StrConcat_1737 StrConcat_1737_StrConcat (  struct StrView_21  field0 ,  struct EditorMode_132  field1 ) {
    return ( struct StrConcat_1737 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1736 {
    enum Unit_7  (*fun) (  struct env1556*  ,    struct StrConcat_1737  );
    struct env1556 env;
};

struct StrConcatIter_1745 {
    struct StrConcatIter_1648  f_left;
    struct StrViewIter_592  f_right;
};

struct StrConcatIter_1744 {
    struct StrConcatIter_1745  f_left;
    struct AppendIter_862  f_right;
};

struct StrCaseIter_1743 {
    enum {
        StrCaseIter_1743_StrCaseIter1_t,
        StrCaseIter_1743_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_592  field0;
        } StrCaseIter_1743_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1744  field0;
        } StrCaseIter_1743_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1743 StrCaseIter_1743_StrCaseIter1 (  struct StrViewIter_592  field0 ) {
    return ( struct StrCaseIter_1743 ) { .tag = StrCaseIter_1743_StrCaseIter1_t, .stuff = { .StrCaseIter_1743_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1743 StrCaseIter_1743_StrCaseIter2 (  struct StrConcatIter_1744  field0 ) {
    return ( struct StrCaseIter_1743 ) { .tag = StrCaseIter_1743_StrCaseIter2_t, .stuff = { .StrCaseIter_1743_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1742 {
    struct StrViewIter_592  f_left;
    struct StrCaseIter_1743  f_right;
};

struct Map_1741 {
    struct StrConcatIter_1742  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1741 Map_1741_Map (  struct StrConcatIter_1742  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1741 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1741   into_dash_iter1747 (    struct Map_1741  self796 ) {
    return (  self796 );
}

static  struct Maybe_595   next1752 (    struct StrConcatIter_1745 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1654 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next1751 (    struct StrConcatIter_1744 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1752 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next888 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next1750 (    struct StrCaseIter_1743 *  self1516 ) {
    struct StrCaseIter_1743 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1743_StrCaseIter1_t ) {
        return ( (  next596 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1743_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1743_StrCaseIter2_t ) {
            return ( (  next1751 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1743_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_595   next1749 (    struct StrConcatIter_1742 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next1750 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_261   next1748 (    struct Map_1741 *  dref798 ) {
    struct Maybe_595  dref801 = ( (  next1749 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_595_None_t ) {
        return ( (struct Maybe_261) { .tag = Maybe_261_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_595_Just_t ) {
            return ( ( Maybe_261_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_595_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1746 (    struct Map_1741  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1741  it1099 = ( (  into_dash_iter1747 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_261  dref1100 = ( (  next1748 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_261_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_261_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_261_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1753 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1753);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1754;
    return (  temp1754 );
}

static  int32_t   lam1755 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add263 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1740 (    struct Map_1741  it1110 ) {
    return ( (  reduce1746 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1755 ) ) );
}

static  struct StrConcatIter_1742   into_dash_iter1757 (    struct StrConcatIter_1742  self1491 ) {
    return (  self1491 );
}

static  struct Map_1741   map1756 (    struct StrConcatIter_1742  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1742  it808 = ( (  into_dash_iter1757 ) ( (  iterable805 ) ) );
    return ( ( Map_1741_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1763 {
    struct StrConcat_1664  field0;
    struct StrBuilder_54  field1;
};

static struct StrConcat_1763 StrConcat_1763_StrConcat (  struct StrConcat_1664  field0 ,  struct StrBuilder_54  field1 ) {
    return ( struct StrConcat_1763 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1762 {
    struct StrConcat_1763  field0;
    struct Char_57  field1;
};

static struct StrConcat_1762 StrConcat_1762_StrConcat (  struct StrConcat_1763  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1762 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1761 {
    enum {
        StrCase_1761_StrCase1_t,
        StrCase_1761_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1761_StrCase1_s;
        struct {
            struct StrConcat_1762  field0;
        } StrCase_1761_StrCase2_s;
    } stuff;
};

static struct StrCase_1761 StrCase_1761_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1761 ) { .tag = StrCase_1761_StrCase1_t, .stuff = { .StrCase_1761_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1761 StrCase_1761_StrCase2 (  struct StrConcat_1762  field0 ) {
    return ( struct StrCase_1761 ) { .tag = StrCase_1761_StrCase2_t, .stuff = { .StrCase_1761_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrCaseIter_1743   undefined1766 (  ) {
    struct StrCaseIter_1743  temp1767;
    return (  temp1767 );
}

static  struct StrCaseIter_1743   todo1765 (  ) {
    ( (  print1017 ) ( ( (  from_dash_string209 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined1766 ) ( ) );
}

static  struct StrConcatIter_1745   into_dash_iter1773 (    struct StrConcat_1763  dref1498 ) {
    return ( (struct StrConcatIter_1745) { .f_left = ( (  chars1668 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1451 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1745   chars1772 (    struct StrConcat_1763  self1509 ) {
    return ( (  into_dash_iter1773 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1744   into_dash_iter1771 (    struct StrConcat_1762  dref1498 ) {
    return ( (struct StrConcatIter_1744) { .f_left = ( (  chars1772 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars902 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1744   chars1770 (    struct StrConcat_1762  self1509 ) {
    return ( (  into_dash_iter1771 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1743   into_dash_iter1769 (    struct StrCase_1761  self1522 ) {
    struct StrCase_1761  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1761_StrCase1_t ) {
        return ( ( StrCaseIter_1743_StrCaseIter1 ) ( ( (  chars597 ) ( ( dref1523 .stuff .StrCase_1761_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1761_StrCase2_t ) {
            return ( ( StrCaseIter_1743_StrCaseIter2 ) ( ( (  chars1770 ) ( ( dref1523 .stuff .StrCase_1761_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1743   chars1768 (    struct StrCase_1761  self1534 ) {
    return ( (  into_dash_iter1769 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1743   chars1760 (    struct EditorMode_132  self4084 ) {
    struct StrCase_1761  temp1764;
    struct StrCase_1761  c4085 = (  temp1764 );
    struct EditorMode_132  dref4086 = (  self4084 );
    if ( dref4086.tag == EditorMode_132_Normal_t ) {
        c4085 = ( ( StrCase_1761_StrCase1 ) ( ( (  from_dash_string209 ) ( ( "Normal" ) ,  ( 6 ) ) ) ) );
    }
    else {
        if ( dref4086.tag == EditorMode_132_Cmd_t ) {
            c4085 = ( ( StrCase_1761_StrCase2 ) ( ( ( StrConcat_1762_StrConcat ) ( ( ( StrConcat_1763_StrConcat ) ( ( ( StrConcat_1664_StrConcat ) ( ( ( StrConcat_1589_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Cmd(" ) ,  ( 4 ) ) ) ,  ( dref4086 .stuff .EditorMode_132_Cmd_s .field0 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "|" ) ,  ( 1 ) ) ) ) ) ,  ( dref4086 .stuff .EditorMode_132_Cmd_s .field1 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
        else {
            if ( dref4086.tag == EditorMode_132_Search_t ) {
                c4085 = ( ( StrCase_1761_StrCase2 ) ( ( ( StrConcat_1762_StrConcat ) ( ( ( StrConcat_1763_StrConcat ) ( ( ( StrConcat_1664_StrConcat ) ( ( ( StrConcat_1589_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Search(" ) ,  ( 7 ) ) ) ,  ( dref4086 .stuff .EditorMode_132_Search_s .field0 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "|" ) ,  ( 1 ) ) ) ) ) ,  ( dref4086 .stuff .EditorMode_132_Search_s .field1 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
            }
            else {
                if ( true ) {
                    return ( (  todo1765 ) ( ) );
                }
            }
        }
    }
    return ( (  chars1768 ) ( (  c4085 ) ) );
}

static  struct StrConcatIter_1742   into_dash_iter1759 (    struct StrConcat_1737  dref1498 ) {
    return ( (struct StrConcatIter_1742) { .f_left = ( (  chars597 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1760 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1742   chars1758 (    struct StrConcat_1737  self1509 ) {
    return ( (  into_dash_iter1759 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1774 (    struct Screen_650 *  screen3527 ,    struct StrConcat_1737  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp306 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp306 ( (  y3533 ) , ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add263 ( (  op_dash_mul1345 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min458 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size251 ) ( (  op_dash_sub801 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1742  temp1775 =  into_dash_iter1757 ( ( (  chars1758 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_595  __cond1776 =  next1749 (&temp1775);
        if (  __cond1776 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1776 .stuff .Maybe_595_Just_s .field0;
        ( (  put_dash_char1531 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add263 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add263 ( (  xx3538 ) , ( (  rendered_dash_wcwidth952 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1739 (    struct Screen_650 *  screen3543 ,    struct StrConcat_1737  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1740 ) ( ( (  map1756 ) ( ( (  chars1758 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth952 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub801 ( (  op_dash_sub801 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1774 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1738 (   struct env1556* env ,    struct StrConcat_1737  s4201 ) {
    ( (  draw_dash_str_dash_right1739 ) ( ( env->screen4194 ) ,  (  s4201 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4198 ) ) ) );
    (* env->curline4198 ) = (  op_dash_add263 ( ( * ( env->curline4198 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1779 {
    struct StrView_21  field0;
    struct Maybe_131  field1;
};

static struct StrConcat_1779 StrConcat_1779_StrConcat (  struct StrView_21  field0 ,  struct Maybe_131  field1 ) {
    return ( struct StrConcat_1779 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1778 {
    enum Unit_7  (*fun) (  struct env1557*  ,    struct StrConcat_1779  );
    struct env1557 env;
};

struct StrConcatIter_1786 {
    struct StrConcatIter_1568  f_left;
    struct AppendIter_862  f_right;
};

struct StrCaseIter_1785 {
    enum {
        StrCaseIter_1785_StrCaseIter1_t,
        StrCaseIter_1785_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_592  field0;
        } StrCaseIter_1785_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1786  field0;
        } StrCaseIter_1785_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1785 StrCaseIter_1785_StrCaseIter1 (  struct StrViewIter_592  field0 ) {
    return ( struct StrCaseIter_1785 ) { .tag = StrCaseIter_1785_StrCaseIter1_t, .stuff = { .StrCaseIter_1785_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1785 StrCaseIter_1785_StrCaseIter2 (  struct StrConcatIter_1786  field0 ) {
    return ( struct StrCaseIter_1785 ) { .tag = StrCaseIter_1785_StrCaseIter2_t, .stuff = { .StrCaseIter_1785_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1784 {
    struct StrViewIter_592  f_left;
    struct StrCaseIter_1785  f_right;
};

struct Map_1783 {
    struct StrConcatIter_1784  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1783 Map_1783_Map (  struct StrConcatIter_1784  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1783 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1783   into_dash_iter1788 (    struct Map_1783  self796 ) {
    return (  self796 );
}

static  struct Maybe_595   next1792 (    struct StrConcatIter_1786 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1572 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next888 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next1791 (    struct StrCaseIter_1785 *  self1516 ) {
    struct StrCaseIter_1785 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1785_StrCaseIter1_t ) {
        return ( (  next596 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1785_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1785_StrCaseIter2_t ) {
            return ( (  next1792 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1785_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_595   next1790 (    struct StrConcatIter_1784 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next1791 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_261   next1789 (    struct Map_1783 *  dref798 ) {
    struct Maybe_595  dref801 = ( (  next1790 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_595_None_t ) {
        return ( (struct Maybe_261) { .tag = Maybe_261_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_595_Just_t ) {
            return ( ( Maybe_261_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_595_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1787 (    struct Map_1783  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1783  it1099 = ( (  into_dash_iter1788 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_261  dref1100 = ( (  next1789 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_261_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_261_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_261_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1793 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1793);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1794;
    return (  temp1794 );
}

static  int32_t   lam1795 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add263 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1782 (    struct Map_1783  it1110 ) {
    return ( (  reduce1787 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1795 ) ) );
}

static  struct StrConcatIter_1784   into_dash_iter1797 (    struct StrConcatIter_1784  self1491 ) {
    return (  self1491 );
}

static  struct Map_1783   map1796 (    struct StrConcatIter_1784  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1784  it808 = ( (  into_dash_iter1797 ) ( (  iterable805 ) ) );
    return ( ( Map_1783_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrCase_1801 {
    enum {
        StrCase_1801_StrCase1_t,
        StrCase_1801_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1801_StrCase1_s;
        struct {
            struct StrConcat_468  field0;
        } StrCase_1801_StrCase2_s;
    } stuff;
};

static struct StrCase_1801 StrCase_1801_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1801 ) { .tag = StrCase_1801_StrCase1_t, .stuff = { .StrCase_1801_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1801 StrCase_1801_StrCase2 (  struct StrConcat_468  field0 ) {
    return ( struct StrCase_1801 ) { .tag = StrCase_1801_StrCase2_t, .stuff = { .StrCase_1801_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1568   into_dash_iter1808 (    struct StrConcat_469  dref1498 ) {
    return ( (struct StrConcatIter_1568) { .f_left = ( (  chars597 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars597 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1568   chars1807 (    struct StrConcat_469  self1509 ) {
    return ( (  into_dash_iter1808 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1786   into_dash_iter1806 (    struct StrConcat_468  dref1498 ) {
    return ( (struct StrConcatIter_1786) { .f_left = ( (  chars1807 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars902 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1786   chars1805 (    struct StrConcat_468  self1509 ) {
    return ( (  into_dash_iter1806 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1785   into_dash_iter1804 (    struct StrCase_1801  self1522 ) {
    struct StrCase_1801  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1801_StrCase1_t ) {
        return ( ( StrCaseIter_1785_StrCaseIter1 ) ( ( (  chars597 ) ( ( dref1523 .stuff .StrCase_1801_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1801_StrCase2_t ) {
            return ( ( StrCaseIter_1785_StrCaseIter2 ) ( ( (  chars1805 ) ( ( dref1523 .stuff .StrCase_1801_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1785   chars1803 (    struct StrCase_1801  self1534 ) {
    return ( (  into_dash_iter1804 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1785   chars1800 (    struct Maybe_131  self1548 ) {
    struct StrCase_1801  temp1802;
    struct StrCase_1801  c1549 = (  temp1802 );
    struct Maybe_131  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_131_None_t ) {
        c1549 = ( ( StrCase_1801_StrCase1 ) ( ( (  from_dash_string209 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_131_Just_t ) {
            c1549 = ( ( StrCase_1801_StrCase2 ) ( ( ( StrConcat_468_StrConcat ) ( ( ( StrConcat_469_StrConcat ) ( ( (  from_dash_string209 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_131_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1803 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1784   into_dash_iter1799 (    struct StrConcat_1779  dref1498 ) {
    return ( (struct StrConcatIter_1784) { .f_left = ( (  chars597 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1800 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1784   chars1798 (    struct StrConcat_1779  self1509 ) {
    return ( (  into_dash_iter1799 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1809 (    struct Screen_650 *  screen3527 ,    struct StrConcat_1779  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp306 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp306 ( (  y3533 ) , ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add263 ( (  op_dash_mul1345 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min458 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size251 ) ( (  op_dash_sub801 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1784  temp1810 =  into_dash_iter1797 ( ( (  chars1798 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_595  __cond1811 =  next1790 (&temp1810);
        if (  __cond1811 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1811 .stuff .Maybe_595_Just_s .field0;
        ( (  put_dash_char1531 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add263 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add263 ( (  xx3538 ) , ( (  rendered_dash_wcwidth952 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1781 (    struct Screen_650 *  screen3543 ,    struct StrConcat_1779  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1782 ) ( ( (  map1796 ) ( ( (  chars1798 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth952 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub801 ( (  op_dash_sub801 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1809 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1780 (   struct env1557* env ,    struct StrConcat_1779  s4201 ) {
    ( (  draw_dash_str_dash_right1781 ) ( ( env->screen4194 ) ,  (  s4201 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4198 ) ) ) );
    (* env->curline4198 ) = (  op_dash_add263 ( ( * ( env->curline4198 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1816 {
    struct StrConcat_1535  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1816 StrConcat_1816_StrConcat (  struct StrConcat_1535  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1816 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1815 {
    struct StrConcat_1816  field0;
    int32_t  field1;
};

static struct StrConcat_1815 StrConcat_1815_StrConcat (  struct StrConcat_1816  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1815 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1814 {
    struct StrConcat_1815  field0;
    struct Char_57  field1;
};

static struct StrConcat_1814 StrConcat_1814_StrConcat (  struct StrConcat_1815  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1814 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1813 {
    enum Unit_7  (*fun) (  struct env1558*  ,    struct StrConcat_1814  );
    struct env1558 env;
};

struct StrConcatIter_1824 {
    struct StrViewIter_592  f_left;
    struct IntStrIter_1497  f_right;
};

struct StrConcatIter_1823 {
    struct StrConcatIter_1824  f_left;
    struct StrViewIter_592  f_right;
};

struct StrConcatIter_1822 {
    struct StrConcatIter_1823  f_left;
    struct IntStrIter_1497  f_right;
};

struct StrConcatIter_1821 {
    struct StrConcatIter_1822  f_left;
    struct AppendIter_862  f_right;
};

struct Map_1820 {
    struct StrConcatIter_1821  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1820 Map_1820_Map (  struct StrConcatIter_1821  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1820 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1820   into_dash_iter1826 (    struct Map_1820  self796 ) {
    return (  self796 );
}

static  struct Maybe_595   next1831 (    struct StrConcatIter_1824 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next1500 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next1830 (    struct StrConcatIter_1823 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1831 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next1829 (    struct StrConcatIter_1822 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1830 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next1500 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next1828 (    struct StrConcatIter_1821 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1829 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next888 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_261   next1827 (    struct Map_1820 *  dref798 ) {
    struct Maybe_595  dref801 = ( (  next1828 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_595_None_t ) {
        return ( (struct Maybe_261) { .tag = Maybe_261_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_595_Just_t ) {
            return ( ( Maybe_261_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_595_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1825 (    struct Map_1820  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1820  it1099 = ( (  into_dash_iter1826 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_261  dref1100 = ( (  next1827 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_261_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_261_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_261_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1832 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1832);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1833;
    return (  temp1833 );
}

static  int32_t   lam1834 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add263 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1819 (    struct Map_1820  it1110 ) {
    return ( (  reduce1825 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1834 ) ) );
}

static  struct StrConcatIter_1821   into_dash_iter1836 (    struct StrConcatIter_1821  self1491 ) {
    return (  self1491 );
}

static  struct Map_1820   map1835 (    struct StrConcatIter_1821  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1821  it808 = ( (  into_dash_iter1836 ) ( (  iterable805 ) ) );
    return ( ( Map_1820_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_1824   into_dash_iter1844 (    struct StrConcat_1535  dref1498 ) {
    return ( (struct StrConcatIter_1824) { .f_left = ( (  chars597 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1513 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1824   chars1843 (    struct StrConcat_1535  self1509 ) {
    return ( (  into_dash_iter1844 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1823   into_dash_iter1842 (    struct StrConcat_1816  dref1498 ) {
    return ( (struct StrConcatIter_1823) { .f_left = ( (  chars1843 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars597 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1823   chars1841 (    struct StrConcat_1816  self1509 ) {
    return ( (  into_dash_iter1842 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1822   into_dash_iter1840 (    struct StrConcat_1815  dref1498 ) {
    return ( (struct StrConcatIter_1822) { .f_left = ( (  chars1841 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1513 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1822   chars1839 (    struct StrConcat_1815  self1509 ) {
    return ( (  into_dash_iter1840 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1821   into_dash_iter1838 (    struct StrConcat_1814  dref1498 ) {
    return ( (struct StrConcatIter_1821) { .f_left = ( (  chars1839 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars902 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1821   chars1837 (    struct StrConcat_1814  self1509 ) {
    return ( (  into_dash_iter1838 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1845 (    struct Screen_650 *  screen3527 ,    struct StrConcat_1814  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp306 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp306 ( (  y3533 ) , ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add263 ( (  op_dash_mul1345 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min458 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size251 ) ( (  op_dash_sub801 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1821  temp1846 =  into_dash_iter1836 ( ( (  chars1837 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_595  __cond1847 =  next1828 (&temp1846);
        if (  __cond1847 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1847 .stuff .Maybe_595_Just_s .field0;
        ( (  put_dash_char1531 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add263 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add263 ( (  xx3538 ) , ( (  rendered_dash_wcwidth952 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1818 (    struct Screen_650 *  screen3543 ,    struct StrConcat_1814  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1819 ) ( ( (  map1835 ) ( ( (  chars1837 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth952 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub801 ( (  op_dash_sub801 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1845 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1817 (   struct env1558* env ,    struct StrConcat_1814  s4201 ) {
    ( (  draw_dash_str_dash_right1818 ) ( ( env->screen4194 ) ,  (  s4201 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4198 ) ) ) );
    (* env->curline4198 ) = (  op_dash_add263 ( ( * ( env->curline4198 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1850 {
    struct StrConcat_1815  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1850 StrConcat_1850_StrConcat (  struct StrConcat_1815  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1850 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1849 {
    enum Unit_7  (*fun) (  struct env1559*  ,    struct StrConcat_1850  );
    struct env1559 env;
};

struct StrConcatIter_1855 {
    struct StrConcatIter_1822  f_left;
    struct StrViewIter_592  f_right;
};

struct Map_1854 {
    struct StrConcatIter_1855  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1854 Map_1854_Map (  struct StrConcatIter_1855  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1854 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1854   into_dash_iter1857 (    struct Map_1854  self796 ) {
    return (  self796 );
}

static  struct Maybe_595   next1859 (    struct StrConcatIter_1855 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1829 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_261   next1858 (    struct Map_1854 *  dref798 ) {
    struct Maybe_595  dref801 = ( (  next1859 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_595_None_t ) {
        return ( (struct Maybe_261) { .tag = Maybe_261_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_595_Just_t ) {
            return ( ( Maybe_261_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_595_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1856 (    struct Map_1854  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1854  it1099 = ( (  into_dash_iter1857 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_261  dref1100 = ( (  next1858 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_261_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_261_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_261_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1860 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1860);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1861;
    return (  temp1861 );
}

static  int32_t   lam1862 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add263 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1853 (    struct Map_1854  it1110 ) {
    return ( (  reduce1856 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1862 ) ) );
}

static  struct StrConcatIter_1855   into_dash_iter1864 (    struct StrConcatIter_1855  self1491 ) {
    return (  self1491 );
}

static  struct Map_1854   map1863 (    struct StrConcatIter_1855  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1855  it808 = ( (  into_dash_iter1864 ) ( (  iterable805 ) ) );
    return ( ( Map_1854_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_1855   into_dash_iter1866 (    struct StrConcat_1850  dref1498 ) {
    return ( (struct StrConcatIter_1855) { .f_left = ( (  chars1839 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars597 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1855   chars1865 (    struct StrConcat_1850  self1509 ) {
    return ( (  into_dash_iter1866 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1867 (    struct Screen_650 *  screen3527 ,    struct StrConcat_1850  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp306 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp306 ( (  y3533 ) , ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add263 ( (  op_dash_mul1345 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min458 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size251 ) ( (  op_dash_sub801 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1855  temp1868 =  into_dash_iter1864 ( ( (  chars1865 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_595  __cond1869 =  next1859 (&temp1868);
        if (  __cond1869 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1869 .stuff .Maybe_595_Just_s .field0;
        ( (  put_dash_char1531 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add263 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add263 ( (  xx3538 ) , ( (  rendered_dash_wcwidth952 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1852 (    struct Screen_650 *  screen3543 ,    struct StrConcat_1850  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1853 ) ( ( (  map1863 ) ( ( (  chars1865 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth952 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub801 ( (  op_dash_sub801 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1867 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1851 (   struct env1559* env ,    struct StrConcat_1850  s4201 ) {
    ( (  draw_dash_str_dash_right1852 ) ( ( env->screen4194 ) ,  (  s4201 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4198 ) ) ) );
    (* env->curline4198 ) = (  op_dash_add263 ( ( * ( env->curline4198 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct envunion1871 {
    enum Unit_7  (*fun) (  struct env1560*  ,    struct StrConcat_65  );
    struct env1560 env;
};

struct Map_1875 {
    struct StrConcatIter_1240  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1875 Map_1875_Map (  struct StrConcatIter_1240  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1875 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1875   into_dash_iter1877 (    struct Map_1875  self796 ) {
    return (  self796 );
}

static  struct Maybe_261   next1878 (    struct Map_1875 *  dref798 ) {
    struct Maybe_595  dref801 = ( (  next1247 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_595_None_t ) {
        return ( (struct Maybe_261) { .tag = Maybe_261_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_595_Just_t ) {
            return ( ( Maybe_261_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_595_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1876 (    struct Map_1875  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1875  it1099 = ( (  into_dash_iter1877 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_261  dref1100 = ( (  next1878 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_261_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_261_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_261_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1879 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1879);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1880;
    return (  temp1880 );
}

static  int32_t   lam1881 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add263 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1874 (    struct Map_1875  it1110 ) {
    return ( (  reduce1876 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1881 ) ) );
}

static  struct StrConcatIter_1240   into_dash_iter1883 (    struct StrConcatIter_1240  self1491 ) {
    return (  self1491 );
}

static  struct Map_1875   map1882 (    struct StrConcatIter_1240  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1240  it808 = ( (  into_dash_iter1883 ) ( (  iterable805 ) ) );
    return ( ( Map_1875_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  enum Unit_7   draw_dash_str1884 (    struct Screen_650 *  screen3527 ,    struct StrConcat_65  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp306 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp306 ( (  y3533 ) , ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add263 ( (  op_dash_mul1345 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min458 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size251 ) ( (  op_dash_sub801 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1240  temp1885 =  into_dash_iter1883 ( ( (  chars1261 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_595  __cond1886 =  next1247 (&temp1885);
        if (  __cond1886 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1886 .stuff .Maybe_595_Just_s .field0;
        ( (  put_dash_char1531 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add263 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add263 ( (  xx3538 ) , ( (  rendered_dash_wcwidth952 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1873 (    struct Screen_650 *  screen3543 ,    struct StrConcat_65  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1874 ) ( ( (  map1882 ) ( ( (  chars1261 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth952 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub801 ( (  op_dash_sub801 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1884 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1872 (   struct env1560* env ,    struct StrConcat_65  s4201 ) {
    ( (  draw_dash_str_dash_right1873 ) ( ( env->screen4194 ) ,  (  s4201 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4198 ) ) ) );
    (* env->curline4198 ) = (  op_dash_add263 ( ( * ( env->curline4198 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   render_dash_editor1488 (    struct Screen_650 *  screen4194 ,    struct Editor_127 *  ed4196 ) {
    struct ScreenDims_1489  screen_dash_dims4197 = ( (struct ScreenDims_1489) { .f_from_dash_sx = (  from_dash_integral48 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub801 ( ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen4194 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral48 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub801 ( ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen4194 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) } );
    ( (  render1492 ) ( (  screen4194 ) ,  ( (  pane977 ) ( (  ed4196 ) ) ) ,  (  screen_dash_dims4197 ) ) );
    int32_t  temp1551 = (  from_dash_integral48 ( 0 ) );
    int32_t *  curline4198 = ( &temp1551 );
    struct env1552 envinst1552 = {
        .screen4194 =  screen4194 ,
        .curline4198 =  curline4198 ,
    };
    struct env1553 envinst1553 = {
        .screen4194 =  screen4194 ,
        .curline4198 =  curline4198 ,
    };
    struct env1554 envinst1554 = {
        .screen4194 =  screen4194 ,
        .curline4198 =  curline4198 ,
    };
    struct env1555 envinst1555 = {
        .screen4194 =  screen4194 ,
        .curline4198 =  curline4198 ,
    };
    struct env1556 envinst1556 = {
        .screen4194 =  screen4194 ,
        .curline4198 =  curline4198 ,
    };
    struct env1557 envinst1557 = {
        .screen4194 =  screen4194 ,
        .curline4198 =  curline4198 ,
    };
    struct env1558 envinst1558 = {
        .screen4194 =  screen4194 ,
        .curline4198 =  curline4198 ,
    };
    struct env1559 envinst1559 = {
        .screen4194 =  screen4194 ,
        .curline4198 =  curline4198 ,
    };
    struct env1560 envinst1560 = {
        .screen4194 =  screen4194 ,
        .curline4198 =  curline4198 ,
    };
    struct envunion1562  temp1561 = ( (struct envunion1562){ .fun = (  enum Unit_7  (*) (  struct env1552*  ,    struct StrConcat_1563  ) )ann1564 , .env =  envinst1552 } );
    ( temp1561.fun ( &temp1561.env ,  ( ( StrConcat_1563_StrConcat ) ( ( (  from_dash_string209 ) ( ( "mode: " ) ,  ( 6 ) ) ) ,  ( ( ( * (  ed4196 ) ) .f_pane ) .f_mode ) ) ) ) );
    enum CharType_1002  cur_dash_ty4202 = ( (  char_dash_type1004 ) ( ( (  char_dash_at1012 ) ( ( (  pane977 ) ( (  ed4196 ) ) ) ,  ( ( ( * (  ed4196 ) ) .f_pane ) .f_cursor ) ) ) ) );
    struct envunion1586  temp1585 = ( (struct envunion1586){ .fun = (  enum Unit_7  (*) (  struct env1553*  ,    struct StrConcat_1587  ) )ann1590 , .env =  envinst1553 } );
    ( temp1585.fun ( &temp1585.env ,  ( ( StrConcat_1587_StrConcat ) ( ( ( StrConcat_1588_StrConcat ) ( ( ( StrConcat_1589_StrConcat ) ( ( (  from_dash_string209 ) ( ( "cur: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4196 ) ) .f_pane ) .f_cursor ) ) ) ,  ( (  from_dash_string209 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  (  cur_dash_ty4202 ) ) ) ) );
    struct envunion1640  temp1639 = ( (struct envunion1640){ .fun = (  enum Unit_7  (*) (  struct env1554*  ,    struct StrConcat_1641  ) )ann1642 , .env =  envinst1554 } );
    ( temp1639.fun ( &temp1639.env ,  ( ( StrConcat_1641_StrConcat ) ( ( (  from_dash_string209 ) ( ( "sel: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4196 ) ) .f_pane ) .f_sel ) ) ) ) );
    struct Maybe_1673  cp4205 = ( (  fmap_dash_maybe1676 ) ( ( ( * (  ed4196 ) ) .f_clipboard ) ,  (  lam1677 ) ) );
    struct envunion1687  temp1686 = ( (struct envunion1687){ .fun = (  enum Unit_7  (*) (  struct env1555*  ,    struct StrConcat_1688  ) )ann1689 , .env =  envinst1555 } );
    ( temp1686.fun ( &temp1686.env ,  ( ( StrConcat_1688_StrConcat ) ( ( (  from_dash_string209 ) ( ( "cp: " ) ,  ( 4 ) ) ) ,  (  cp4205 ) ) ) ) );
    struct Maybe_1673  st4208 = ( (  fmap_dash_maybe1731 ) ( ( ( * (  ed4196 ) ) .f_search_dash_term ) ,  (  lam1732 ) ) );
    struct envunion1734  temp1733 = ( (struct envunion1734){ .fun = (  enum Unit_7  (*) (  struct env1555*  ,    struct StrConcat_1688  ) )ann1689 , .env =  envinst1555 } );
    ( temp1733.fun ( &temp1733.env ,  ( ( StrConcat_1688_StrConcat ) ( ( (  from_dash_string209 ) ( ( "st: " ) ,  ( 4 ) ) ) ,  (  st4208 ) ) ) ) );
    struct envunion1736  temp1735 = ( (struct envunion1736){ .fun = (  enum Unit_7  (*) (  struct env1556*  ,    struct StrConcat_1737  ) )ann1738 , .env =  envinst1556 } );
    ( temp1735.fun ( &temp1735.env ,  ( ( StrConcat_1737_StrConcat ) ( ( (  from_dash_string209 ) ( ( "edmode: " ) ,  ( 8 ) ) ) ,  ( ( * (  ed4196 ) ) .f_mode ) ) ) ) );
    struct envunion1778  temp1777 = ( (struct envunion1778){ .fun = (  enum Unit_7  (*) (  struct env1557*  ,    struct StrConcat_1779  ) )ann1780 , .env =  envinst1557 } );
    ( temp1777.fun ( &temp1777.env ,  ( ( StrConcat_1779_StrConcat ) ( ( (  from_dash_string209 ) ( ( "msg: " ) ,  ( 5 ) ) ) ,  ( ( * (  ed4196 ) ) .f_msg ) ) ) ) );
    struct envunion1813  temp1812 = ( (struct envunion1813){ .fun = (  enum Unit_7  (*) (  struct env1558*  ,    struct StrConcat_1814  ) )ann1817 , .env =  envinst1558 } );
    ( temp1812.fun ( &temp1812.env ,  ( ( StrConcat_1814_StrConcat ) ( ( ( StrConcat_1815_StrConcat ) ( ( ( StrConcat_1816_StrConcat ) ( ( ( StrConcat_1535_StrConcat ) ( ( (  from_dash_string209 ) ( ( "sc-off: (" ) ,  ( 9 ) ) ) ,  ( ( ( ( * (  ed4196 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_top ) ) ) ,  ( (  from_dash_string209 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( ( ( ( * (  ed4196 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_left ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    struct envunion1849  temp1848 = ( (struct envunion1849){ .fun = (  enum Unit_7  (*) (  struct env1559*  ,    struct StrConcat_1850  ) )ann1851 , .env =  envinst1559 } );
    ( temp1848.fun ( &temp1848.env ,  ( ( StrConcat_1850_StrConcat ) ( ( ( StrConcat_1815_StrConcat ) ( ( ( StrConcat_1816_StrConcat ) ( ( ( StrConcat_1535_StrConcat ) ( ( (  from_dash_string209 ) ( ( "dims: { " ) ,  ( 8 ) ) ) ,  ( (  screen_dash_dims4197 ) .f_to_dash_sx ) ) ) ,  ( (  from_dash_string209 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  screen_dash_dims4197 ) .f_to_dash_sy ) ) ) ,  ( (  from_dash_string209 ) ( ( " }" ) ,  ( 2 ) ) ) ) ) ) );
    struct envunion1871  temp1870 = ( (struct envunion1871){ .fun = (  enum Unit_7  (*) (  struct env1560*  ,    struct StrConcat_65  ) )ann1872 , .env =  envinst1560 } );
    ( temp1870.fun ( &temp1870.env ,  ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "num actions: " ) ,  ( 13 ) ) ) ,  ( ( ( ( * ( ( ( * (  ed4196 ) ) .f_pane ) .f_buf ) ) .f_actions ) .f_list ) .f_count ) ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1889 {
    struct StrView_21  field0;
    uint32_t  field1;
};

static struct StrConcat_1889 StrConcat_1889_StrConcat (  struct StrView_21  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1889 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1888 {
    struct StrConcat_1889  field0;
    struct Char_57  field1;
};

static struct StrConcat_1888 StrConcat_1888_StrConcat (  struct StrConcat_1889  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1888 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1893 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1892 {
    struct StrViewIter_592  f_left;
    struct IntStrIter_1893  f_right;
};

struct StrConcatIter_1891 {
    struct StrConcatIter_1892  f_left;
    struct AppendIter_862  f_right;
};

static  struct StrConcatIter_1891   into_dash_iter1894 (    struct StrConcatIter_1891  self1491 ) {
    return (  self1491 );
}

static  uint32_t   op_dash_div1902 (    uint32_t  l245 ,    uint32_t  r247 ) {
    return ( (  l245 ) / (  r247 ) );
}

static  int32_t   count_dash_digits1901 (    uint32_t  self1430 ) {
    if ( (  eq396 ( (  self1430 ) , (  from_dash_integral205 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp204 ( (  self1430 ) , (  from_dash_integral205 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1902 ( (  self1430 ) , (  from_dash_integral205 ( 10 ) ) ) );
        digits1431 = (  op_dash_add263 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1893   uint_dash_iter1900 (    uint32_t  int1437 ) {
    return ( (struct IntStrIter_1893) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1901 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1893   chars1899 (    uint32_t  self1449 ) {
    return ( (  uint_dash_iter1900 ) ( (  self1449 ) ) );
}

static  struct StrConcatIter_1892   into_dash_iter1898 (    struct StrConcat_1889  dref1498 ) {
    return ( (struct StrConcatIter_1892) { .f_left = ( (  chars597 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1899 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1892   chars1897 (    struct StrConcat_1889  self1509 ) {
    return ( (  into_dash_iter1898 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1891   into_dash_iter1896 (    struct StrConcat_1888  dref1498 ) {
    return ( (struct StrConcatIter_1891) { .f_left = ( (  chars1897 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars902 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1891   chars1895 (    struct StrConcat_1888  self1509 ) {
    return ( (  into_dash_iter1896 ) ( (  self1509 ) ) );
}

struct env1909 {
    ;
    uint32_t  base1210;
};

struct envunion1910 {
    uint32_t  (*fun) (  struct env1909*  ,    int32_t  ,    uint32_t  );
    struct env1909 env;
};

static  uint32_t   reduce1908 (    struct Range_675  iterable1093 ,    uint32_t  base1095 ,   struct envunion1910  fun1097 ) {
    uint32_t  x1098 = (  base1095 );
    struct RangeIter_678  it1099 = ( (  into_dash_iter680 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_261  dref1100 = ( (  next681 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_261_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_261_Just_t ) {
                struct envunion1910  temp1911 = (  fun1097 );
                x1098 = ( temp1911.fun ( &temp1911.env ,  ( dref1100 .stuff .Maybe_261_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1912 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1912);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp1913;
    return (  temp1913 );
}

static  uint32_t   lam1914 (   struct env1909* env ,    int32_t  item1214 ,    uint32_t  x1216 ) {
    return (  op_dash_mul672 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint32_t   pow1907 (    uint32_t  base1210 ,    int32_t  p1212 ) {
    struct env1909 envinst1909 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1908 ) ( ( (  to683 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub801 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral205 ( 1 ) ) ,  ( (struct envunion1910){ .fun = (  uint32_t  (*) (  struct env1909*  ,    int32_t  ,    uint32_t  ) )lam1914 , .env =  envinst1909 } ) ) );
}

static  uint32_t   op_dash_sub1915 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) - (  r237 ) );
}

static  struct Maybe_595   next1906 (    struct IntStrIter_1893 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_595_Just ) ( ( (  from_dash_charlike210 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp306 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
    }
    uint32_t  trim_dash_down1423 = ( (  pow1907 ) ( (  from_dash_integral205 ( 10 ) ) ,  (  op_dash_sub801 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    uint32_t  upper1424 = (  op_dash_div1902 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    uint32_t  upper_dash_mask1425 = (  op_dash_mul672 ( (  op_dash_div1902 ( (  upper1424 ) , (  from_dash_integral205 ( 10 ) ) ) ) , (  from_dash_integral205 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast208 ) ( (  op_dash_sub1915 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub801 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8881 ) ( (  op_dash_add771 ( (  digit1426 ) , (  from_dash_integral201 ( 48 ) ) ) ) ) );
    return ( ( Maybe_595_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_595   next1905 (    struct StrConcatIter_1892 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next1906 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next1904 (    struct StrConcatIter_1891 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1905 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next888 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   draw_dash_str1887 (    struct Screen_650 *  screen3527 ,    struct StrConcat_1888  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp306 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp306 ( (  y3533 ) , ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add263 ( (  op_dash_mul1345 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min458 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size251 ) ( (  op_dash_sub801 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1891  temp1890 =  into_dash_iter1894 ( ( (  chars1895 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_595  __cond1903 =  next1904 (&temp1890);
        if (  __cond1903 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1903 .stuff .Maybe_595_Just_s .field0;
        ( (  put_dash_char1531 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add263 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add263 ( (  xx3538 ) , ( (  rendered_dash_wcwidth952 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

struct RenderState_1917 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_653  f_fg;
    struct Color_653  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_1922 {
    struct StrConcat_1888  field0;
    uint32_t  field1;
};

static struct StrConcat_1922 StrConcat_1922_StrConcat (  struct StrConcat_1888  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1922 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1921 {
    struct StrConcat_1922  field0;
    struct Char_57  field1;
};

static struct StrConcat_1921 StrConcat_1921_StrConcat (  struct StrConcat_1922  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1921 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_1925 {
    struct StrConcatIter_1891  f_left;
    struct IntStrIter_1893  f_right;
};

struct StrConcatIter_1924 {
    struct StrConcatIter_1925  f_left;
    struct AppendIter_862  f_right;
};

static  struct StrConcatIter_1924   into_dash_iter1927 (    struct StrConcatIter_1924  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_595   next1929 (    struct StrConcatIter_1925 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1904 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next1906 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next1928 (    struct StrConcatIter_1924 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1929 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next888 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each1923 (    struct StrConcatIter_1924  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrConcatIter_1924  temp1926 = ( (  into_dash_iter1927 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1924 *  it1077 = ( &temp1926 );
    while ( ( true ) ) {
        struct Maybe_595  dref1078 = ( (  next1928 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_595_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_595_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_595_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrConcatIter_1925   into_dash_iter1933 (    struct StrConcat_1922  dref1498 ) {
    return ( (struct StrConcatIter_1925) { .f_left = ( (  chars1895 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1899 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1925   chars1932 (    struct StrConcat_1922  self1509 ) {
    return ( (  into_dash_iter1933 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1924   into_dash_iter1931 (    struct StrConcat_1921  dref1498 ) {
    return ( (struct StrConcatIter_1924) { .f_left = ( (  chars1932 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars902 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1924   chars1930 (    struct StrConcat_1921  self1509 ) {
    return ( (  into_dash_iter1931 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print1920 (    struct StrConcat_1921  s2563 ) {
    ( (  for_dash_each1923 ) ( ( (  chars1930 ) ( (  s2563 ) ) ) ,  (  printf_dash_char193 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   move_dash_cursor_dash_to1919 (    uint32_t  x2577 ,    uint32_t  y2579 ) {
    uint32_t  x2580 = (  op_dash_add773 ( (  x2577 ) , (  from_dash_integral205 ( 1 ) ) ) );
    uint32_t  y2581 = (  op_dash_add773 ( (  y2579 ) , (  from_dash_integral205 ( 1 ) ) ) );
    ( (  print1920 ) ( ( ( StrConcat_1921_StrConcat ) ( ( ( StrConcat_1922_StrConcat ) ( ( ( StrConcat_1888_StrConcat ) ( ( ( StrConcat_1889_StrConcat ) ( ( (  from_dash_string209 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2581 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2580 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Slice_651   subslice1936 (    struct Slice_651  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Cell_652 *  begin_dash_ptr1787 = ( (  offset_dash_ptr687 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp173 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp173 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_651) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub293 ( ( (  min320 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_651) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

struct SliceIter_1939 {
    struct Slice_651  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_1938 {
    struct SliceIter_1939  f_left_dash_it;
    struct SliceIter_1939  f_right_dash_it;
};

struct Tuple2_1940 {
    struct Cell_652  field0;
    struct Cell_652  field1;
};

static struct Tuple2_1940 Tuple2_1940_Tuple2 (  struct Cell_652  field0 ,  struct Cell_652  field1 ) {
    return ( struct Tuple2_1940 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1942 {
    bool (*  fun1135 )(    struct Tuple2_1940  );
};

struct envunion1943 {
    bool  (*fun) (  struct env1942*  ,    struct Tuple2_1940  ,    bool  );
    struct env1942 env;
};

static  struct Zip_1938   into_dash_iter1944 (    struct Zip_1938  self911 ) {
    return (  self911 );
}

struct Maybe_1945 {
    enum {
        Maybe_1945_None_t,
        Maybe_1945_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1940  field0;
        } Maybe_1945_Just_s;
    } stuff;
};

static struct Maybe_1945 Maybe_1945_Just (  struct Tuple2_1940  field0 ) {
    return ( struct Maybe_1945 ) { .tag = Maybe_1945_Just_t, .stuff = { .Maybe_1945_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_692   next1947 (    struct SliceIter_1939 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp173 ( (  op_dash_add221 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_692) { .tag = Maybe_692_None_t } );
    }
    struct Cell_652  elem1830 = ( * ( (  offset_dash_ptr687 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64250 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add221 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_692_Just ) ( (  elem1830 ) ) );
}

static  struct Maybe_1945   next1946 (    struct Zip_1938 *  self914 ) {
    struct Zip_1938  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_692  dref916 = ( (  next1947 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_692_None_t ) {
            return ( (struct Maybe_1945) { .tag = Maybe_1945_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_692_Just_t ) {
                struct Maybe_692  dref918 = ( (  next1947 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_692_None_t ) {
                    return ( (struct Maybe_1945) { .tag = Maybe_1945_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_692_Just_t ) {
                        ( (  next1947 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next1947 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1945_Just ) ( ( ( Tuple2_1940_Tuple2 ) ( ( dref916 .stuff .Maybe_692_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_692_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1941 (    struct Zip_1938  iterable1093 ,    bool  base1095 ,   struct envunion1943  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_1938  it1099 = ( (  into_dash_iter1944 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1945  dref1100 = ( (  next1946 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1945_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1945_Just_t ) {
                struct envunion1943  temp1948 = (  fun1097 );
                x1098 = ( temp1948.fun ( &temp1948.env ,  ( dref1100 .stuff .Maybe_1945_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1949 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1949);
    exit ( 1 );
    ( Unit_7_Unit );
    bool  temp1950;
    return (  temp1950 );
}

static  bool   lam1951 (   struct env1942* env ,    struct Tuple2_1940  e1137 ,    bool  x1139 ) {
    return ( ( ( env->fun1135 ) ( (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1937 (    struct Zip_1938  it1133 ,    bool (*  fun1135 )(    struct Tuple2_1940  ) ) {
    struct env1942 envinst1942 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1941 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1943){ .fun = (  bool  (*) (  struct env1942*  ,    struct Tuple2_1940  ,    bool  ) )lam1951 , .env =  envinst1942 } ) ) );
}

static  struct SliceIter_1939   into_dash_iter1953 (    struct Slice_651  self1822 ) {
    return ( (struct SliceIter_1939) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_1938   zip1952 (    struct Slice_651  left922 ,    struct Slice_651  right924 ) {
    struct SliceIter_1939  left_dash_it925 = ( (  into_dash_iter1953 ) ( (  left922 ) ) );
    struct SliceIter_1939  right_dash_it926 = ( (  into_dash_iter1953 ) ( (  right924 ) ) );
    return ( (struct Zip_1938) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

struct Tuple2_1957 {
    struct Color_653  field0;
    struct Color_653  field1;
};

static struct Tuple2_1957 Tuple2_1957_Tuple2 (  struct Color_653  field0 ,  struct Color_653  field1 ) {
    return ( struct Tuple2_1957 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_654 *   cast1961 (    int32_t *  x356 ) {
    return ( (enum Color8_654 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1959 (    enum Color8_654  x573 ) {
    int32_t  temp1960 = ( (  zeroed844 ) ( ) );
    int32_t *  y574 = ( &temp1960 );
    enum Color8_654 *  yp575 = ( (  cast1961 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq1958 (    enum Color8_654  l2605 ,    enum Color8_654  r2607 ) {
    return (  eq309 ( ( ( (  cast_dash_on_dash_zeroed1959 ) ( (  l2605 ) ) ) ) , ( (  cast_dash_on_dash_zeroed1959 ) ( (  r2607 ) ) ) ) );
}

static  enum Color16_655 *   cast1965 (    int32_t *  x356 ) {
    return ( (enum Color16_655 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1963 (    enum Color16_655  x573 ) {
    int32_t  temp1964 = ( (  zeroed844 ) ( ) );
    int32_t *  y574 = ( &temp1964 );
    enum Color16_655 *  yp575 = ( (  cast1965 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq1962 (    enum Color16_655  l2611 ,    enum Color16_655  r2613 ) {
    return (  eq309 ( ( ( (  cast_dash_on_dash_zeroed1963 ) ( (  l2611 ) ) ) ) , ( (  cast_dash_on_dash_zeroed1963 ) ( (  r2613 ) ) ) ) );
}

static  bool   eq1966 (    struct RGB_656  l2641 ,    struct RGB_656  r2643 ) {
    return ( ( (  eq197 ( ( (  l2641 ) .f_r ) , ( (  r2643 ) .f_r ) ) ) && (  eq197 ( ( (  l2641 ) .f_g ) , ( (  r2643 ) .f_g ) ) ) ) && (  eq197 ( ( (  l2641 ) .f_b ) , ( (  r2643 ) .f_b ) ) ) );
}

static  bool   eq1956 (    struct Color_653  l2664 ,    struct Color_653  r2666 ) {
    return ( {  struct Tuple2_1957  dref2667 = ( ( Tuple2_1957_Tuple2 ) ( (  l2664 ) ,  (  r2666 ) ) ) ; dref2667 .field0.tag == Color_653_ColorDefault_t && dref2667 .field1.tag == Color_653_ColorDefault_t ? ( true ) : dref2667 .field0.tag == Color_653_Color8_t && dref2667 .field1.tag == Color_653_Color8_t ? (  eq1958 ( ( dref2667 .field0 .stuff .Color_653_Color8_s .field0 ) , ( dref2667 .field1 .stuff .Color_653_Color8_s .field0 ) ) ) : dref2667 .field0.tag == Color_653_Color16_t && dref2667 .field1.tag == Color_653_Color16_t ? (  eq1962 ( ( dref2667 .field0 .stuff .Color_653_Color16_s .field0 ) , ( dref2667 .field1 .stuff .Color_653_Color16_s .field0 ) ) ) : dref2667 .field0.tag == Color_653_Color256_t && dref2667 .field1.tag == Color_653_Color256_t ? (  eq197 ( ( dref2667 .field0 .stuff .Color_653_Color256_s .field0 ) , ( dref2667 .field1 .stuff .Color_653_Color256_s .field0 ) ) ) : dref2667 .field0.tag == Color_653_ColorRGB_t && dref2667 .field1.tag == Color_653_ColorRGB_t ? (  eq1966 ( ( dref2667 .field0 .stuff .Color_653_ColorRGB_s .field0 ) , ( dref2667 .field1 .stuff .Color_653_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq1955 (    struct Cell_652  l3400 ,    struct Cell_652  r3402 ) {
    if ( ( !  eq392 ( ( (  l3400 ) .f_c ) , ( (  r3402 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq1956 ( ( (  l3400 ) .f_fg ) , ( (  r3402 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq1956 ( ( (  l3400 ) .f_bg ) , ( (  r3402 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam1954 (    struct Tuple2_1940  dref3456 ) {
    return ( !  eq1955 ( ( dref3456 .field0 ) , ( dref3456 .field1 ) ) );
}

static  enum Unit_7   set_dash_default_dash_fg1969 (  ) {
    ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg81970 (    enum Color8_654  color2616 ) {
    enum Color8_654  dref2617 = (  color2616 );
    switch (  dref2617 ) {
        case Color8_654_Black8 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_654_Red8 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_654_Green8 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_654_Yellow8 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_654_Blue8 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_654_Magenta8 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_654_Cyan8 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_654_White8 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg161971 (    enum Color16_655  color2620 ) {
    enum Color16_655  dref2621 = (  color2620 );
    switch (  dref2621 ) {
        case Color16_655_Black16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_Red16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_Green16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_Yellow16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_Blue16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_Magenta16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_Cyan16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_White16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_BrightBlack16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_BrightRed16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_BrightGreen16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_BrightYellow16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_BrightBlue16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_BrightMagenta16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_BrightCyan16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_BrightWhite16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

struct StrConcat_1975 {
    struct StrView_21  field0;
    uint8_t  field1;
};

static struct StrConcat_1975 StrConcat_1975_StrConcat (  struct StrView_21  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1975 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1974 {
    struct StrConcat_1975  field0;
    struct Char_57  field1;
};

static struct StrConcat_1974 StrConcat_1974_StrConcat (  struct StrConcat_1975  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1974 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1979 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1978 {
    struct StrViewIter_592  f_left;
    struct IntStrIter_1979  f_right;
};

struct StrConcatIter_1977 {
    struct StrConcatIter_1978  f_left;
    struct AppendIter_862  f_right;
};

static  struct StrConcatIter_1977   into_dash_iter1981 (    struct StrConcatIter_1977  self1491 ) {
    return (  self1491 );
}

struct env1987 {
    uint8_t  base1210;
    ;
};

struct envunion1988 {
    uint8_t  (*fun) (  struct env1987*  ,    int32_t  ,    uint8_t  );
    struct env1987 env;
};

static  uint8_t   reduce1986 (    struct Range_675  iterable1093 ,    uint8_t  base1095 ,   struct envunion1988  fun1097 ) {
    uint8_t  x1098 = (  base1095 );
    struct RangeIter_678  it1099 = ( (  into_dash_iter680 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_261  dref1100 = ( (  next681 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_261_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_261_Just_t ) {
                struct envunion1988  temp1989 = (  fun1097 );
                x1098 = ( temp1989.fun ( &temp1989.env ,  ( dref1100 .stuff .Maybe_261_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1990 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1990);
    exit ( 1 );
    ( Unit_7_Unit );
    uint8_t  temp1991;
    return (  temp1991 );
}

static  uint8_t   op_dash_mul1993 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam1992 (   struct env1987* env ,    int32_t  item1214 ,    uint8_t  x1216 ) {
    return (  op_dash_mul1993 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint8_t   pow1985 (    uint8_t  base1210 ,    int32_t  p1212 ) {
    struct env1987 envinst1987 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1986 ) ( ( (  to683 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub801 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral201 ( 1 ) ) ,  ( (struct envunion1988){ .fun = (  uint8_t  (*) (  struct env1987*  ,    int32_t  ,    uint8_t  ) )lam1992 , .env =  envinst1987 } ) ) );
}

static  uint8_t   op_dash_div1994 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast1995 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_595   next1984 (    struct IntStrIter_1979 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_595_Just ) ( ( (  from_dash_charlike210 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp306 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
    }
    uint8_t  trim_dash_down1423 = ( (  pow1985 ) ( (  from_dash_integral201 ( 10 ) ) ,  (  op_dash_sub801 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    uint8_t  upper1424 = (  op_dash_div1994 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    uint8_t  upper_dash_mask1425 = (  op_dash_mul1993 ( (  op_dash_div1994 ( (  upper1424 ) , (  from_dash_integral201 ( 10 ) ) ) ) , (  from_dash_integral201 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1995 ) ( (  op_dash_sub770 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub801 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8881 ) ( (  op_dash_add771 ( (  digit1426 ) , (  from_dash_integral201 ( 48 ) ) ) ) ) );
    return ( ( Maybe_595_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_595   next1983 (    struct StrConcatIter_1978 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next596 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next1984 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next1982 (    struct StrConcatIter_1977 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1983 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next888 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each1976 (    struct StrConcatIter_1977  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrConcatIter_1977  temp1980 = ( (  into_dash_iter1981 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1977 *  it1077 = ( &temp1980 );
    while ( ( true ) ) {
        struct Maybe_595  dref1078 = ( (  next1982 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_595_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_595_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_595_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  int32_t   count_dash_digits2002 (    uint8_t  self1430 ) {
    if ( (  eq197 ( (  self1430 ) , (  from_dash_integral201 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp214 ( (  self1430 ) , (  from_dash_integral201 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1994 ( (  self1430 ) , (  from_dash_integral201 ( 10 ) ) ) );
        digits1431 = (  op_dash_add263 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1979   uint_dash_iter2001 (    uint8_t  int1437 ) {
    return ( (struct IntStrIter_1979) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits2002 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1979   chars2000 (    uint8_t  self1455 ) {
    return ( (  uint_dash_iter2001 ) ( (  self1455 ) ) );
}

static  struct StrConcatIter_1978   into_dash_iter1999 (    struct StrConcat_1975  dref1498 ) {
    return ( (struct StrConcatIter_1978) { .f_left = ( (  chars597 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars2000 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1978   chars1998 (    struct StrConcat_1975  self1509 ) {
    return ( (  into_dash_iter1999 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1977   into_dash_iter1997 (    struct StrConcat_1974  dref1498 ) {
    return ( (struct StrConcatIter_1977) { .f_left = ( (  chars1998 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars902 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1977   chars1996 (    struct StrConcat_1974  self1509 ) {
    return ( (  into_dash_iter1997 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print1973 (    struct StrConcat_1974  s2563 ) {
    ( (  for_dash_each1976 ) ( ( (  chars1996 ) ( (  s2563 ) ) ) ,  (  printf_dash_char193 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg2561972 (    uint8_t  color2634 ) {
    ( (  print1973 ) ( ( ( StrConcat_1974_StrConcat ) ( ( ( StrConcat_1975_StrConcat ) ( ( (  from_dash_string209 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2634 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_2008 {
    struct StrConcat_1974  field0;
    uint8_t  field1;
};

static struct StrConcat_2008 StrConcat_2008_StrConcat (  struct StrConcat_1974  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2008 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2007 {
    struct StrConcat_2008  field0;
    struct Char_57  field1;
};

static struct StrConcat_2007 StrConcat_2007_StrConcat (  struct StrConcat_2008  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_2007 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2006 {
    struct StrConcat_2007  field0;
    uint8_t  field1;
};

static struct StrConcat_2006 StrConcat_2006_StrConcat (  struct StrConcat_2007  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2006 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2005 {
    struct StrConcat_2006  field0;
    struct Char_57  field1;
};

static struct StrConcat_2005 StrConcat_2005_StrConcat (  struct StrConcat_2006  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_2005 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2013 {
    struct StrConcatIter_1977  f_left;
    struct IntStrIter_1979  f_right;
};

struct StrConcatIter_2012 {
    struct StrConcatIter_2013  f_left;
    struct AppendIter_862  f_right;
};

struct StrConcatIter_2011 {
    struct StrConcatIter_2012  f_left;
    struct IntStrIter_1979  f_right;
};

struct StrConcatIter_2010 {
    struct StrConcatIter_2011  f_left;
    struct AppendIter_862  f_right;
};

static  struct StrConcatIter_2010   into_dash_iter2015 (    struct StrConcatIter_2010  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_595   next2019 (    struct StrConcatIter_2013 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next1982 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next1984 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next2018 (    struct StrConcatIter_2012 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next2019 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next888 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next2017 (    struct StrConcatIter_2011 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next2018 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next1984 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_595   next2016 (    struct StrConcatIter_2010 *  self1494 ) {
    struct Maybe_595  dref1495 = ( (  next2017 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_595_Just_t ) {
        return ( ( Maybe_595_Just ) ( ( dref1495 .stuff .Maybe_595_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_595_None_t ) {
            return ( (  next888 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each2009 (    struct StrConcatIter_2010  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrConcatIter_2010  temp2014 = ( (  into_dash_iter2015 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2010 *  it1077 = ( &temp2014 );
    while ( ( true ) ) {
        struct Maybe_595  dref1078 = ( (  next2016 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_595_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_595_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_595_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrConcatIter_2013   into_dash_iter2027 (    struct StrConcat_2008  dref1498 ) {
    return ( (struct StrConcatIter_2013) { .f_left = ( (  chars1996 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars2000 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2013   chars2026 (    struct StrConcat_2008  self1509 ) {
    return ( (  into_dash_iter2027 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2012   into_dash_iter2025 (    struct StrConcat_2007  dref1498 ) {
    return ( (struct StrConcatIter_2012) { .f_left = ( (  chars2026 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars902 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2012   chars2024 (    struct StrConcat_2007  self1509 ) {
    return ( (  into_dash_iter2025 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2011   into_dash_iter2023 (    struct StrConcat_2006  dref1498 ) {
    return ( (struct StrConcatIter_2011) { .f_left = ( (  chars2024 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars2000 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2011   chars2022 (    struct StrConcat_2006  self1509 ) {
    return ( (  into_dash_iter2023 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2010   into_dash_iter2021 (    struct StrConcat_2005  dref1498 ) {
    return ( (struct StrConcatIter_2010) { .f_left = ( (  chars2022 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars902 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2010   chars2020 (    struct StrConcat_2005  self1509 ) {
    return ( (  into_dash_iter2021 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print2004 (    struct StrConcat_2005  s2563 ) {
    ( (  for_dash_each2009 ) ( ( (  chars2020 ) ( (  s2563 ) ) ) ,  (  printf_dash_char193 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg_dash_rgb2003 (    struct RGB_656  c2657 ) {
    ( (  print2004 ) ( ( ( StrConcat_2005_StrConcat ) ( ( ( StrConcat_2006_StrConcat ) ( ( ( StrConcat_2007_StrConcat ) ( ( ( StrConcat_2008_StrConcat ) ( ( ( StrConcat_1974_StrConcat ) ( ( ( StrConcat_1975_StrConcat ) ( ( (  from_dash_string209 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2657 ) .f_r ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2657 ) .f_g ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2657 ) .f_b ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg1968 (    struct Color_653  c2678 ) {
    struct Color_653  dref2679 = (  c2678 );
    if ( dref2679.tag == Color_653_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg1969 ) ( ) );
    }
    else {
        if ( dref2679.tag == Color_653_Color8_t ) {
            ( (  set_dash_fg81970 ) ( ( dref2679 .stuff .Color_653_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2679.tag == Color_653_Color16_t ) {
                ( (  set_dash_fg161971 ) ( ( dref2679 .stuff .Color_653_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2679.tag == Color_653_Color256_t ) {
                    ( (  set_dash_fg2561972 ) ( ( dref2679 .stuff .Color_653_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2679.tag == Color_653_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2003 ) ( ( dref2679 .stuff .Color_653_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_default_dash_bg2029 (  ) {
    ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg82030 (    enum Color8_654  color2624 ) {
    enum Color8_654  dref2625 = (  color2624 );
    switch (  dref2625 ) {
        case Color8_654_Black8 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_654_Red8 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_654_Green8 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_654_Yellow8 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_654_Blue8 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_654_Magenta8 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_654_Cyan8 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_654_White8 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg162031 (    enum Color16_655  color2628 ) {
    enum Color16_655  dref2629 = (  color2628 );
    switch (  dref2629 ) {
        case Color16_655_Black16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_Red16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_Green16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_Yellow16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_Blue16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_Magenta16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_Cyan16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_White16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_655_BrightBlack16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_655_BrightRed16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_655_BrightGreen16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_655_BrightYellow16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_655_BrightBlue16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_655_BrightMagenta16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_655_BrightCyan16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_655_BrightWhite16 : {
            ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg2562032 (    uint8_t  color2637 ) {
    ( (  print1973 ) ( ( ( StrConcat_1974_StrConcat ) ( ( ( StrConcat_1975_StrConcat ) ( ( (  from_dash_string209 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2637 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg_dash_rgb2033 (    struct RGB_656  c2660 ) {
    ( (  print2004 ) ( ( ( StrConcat_2005_StrConcat ) ( ( ( StrConcat_2006_StrConcat ) ( ( ( StrConcat_2007_StrConcat ) ( ( ( StrConcat_2008_StrConcat ) ( ( ( StrConcat_1974_StrConcat ) ( ( ( StrConcat_1975_StrConcat ) ( ( (  from_dash_string209 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2660 ) .f_r ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2660 ) .f_g ) ) ) ,  ( (  from_dash_charlike210 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2660 ) .f_b ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg2028 (    struct Color_653  c2686 ) {
    struct Color_653  dref2687 = (  c2686 );
    if ( dref2687.tag == Color_653_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2029 ) ( ) );
    }
    else {
        if ( dref2687.tag == Color_653_Color8_t ) {
            ( (  set_dash_bg82030 ) ( ( dref2687 .stuff .Color_653_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2687.tag == Color_653_Color16_t ) {
                ( (  set_dash_bg162031 ) ( ( dref2687 .stuff .Color_653_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2687.tag == Color_653_Color256_t ) {
                    ( (  set_dash_bg2562032 ) ( ( dref2687 .stuff .Color_653_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2687.tag == Color_653_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2033 ) ( ( dref2687 .stuff .Color_653_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  uint32_t   i32_dash_u322034 (    int32_t  x603 ) {
    return ( (uint32_t ) (  x603 ) );
}

static  enum Unit_7   emit_dash_cell1967 (    struct RenderState_1917 *  rs3432 ,    struct Cell_652 *  c3434 ,    uint32_t  x3436 ,    uint32_t  y3438 ) {
    if ( ( ( !  eq396 ( (  x3436 ) , ( ( * (  rs3432 ) ) .f_x ) ) ) || ( !  eq396 ( (  y3438 ) , ( ( * (  rs3432 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1919 ) ( (  x3436 ) ,  (  y3438 ) ) );
        (*  rs3432 ) .f_x = (  x3436 );
        (*  rs3432 ) .f_y = (  y3438 );
    }
    struct Char_57  char3439 = ( ( * (  c3434 ) ) .f_c );
    struct Color_653  bg3440 = ( ( * (  c3434 ) ) .f_bg );
    if ( (  eq309 ( ( ( * (  c3434 ) ) .f_char_dash_width ) , (  op_dash_neg625 ( (  from_dash_integral48 ( 1 ) ) ) ) ) ) ) {
        char3439 = ( (  from_dash_charlike210 ) ( ( " " ) ,  ( 1 ) ) );
        bg3440 = ( ( Color_653_Color8 ) ( ( Color8_654_Red8 ) ) );
    }
    if ( ( !  eq1956 ( ( ( * (  rs3432 ) ) .f_fg ) , ( ( * (  c3434 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg1968 ) ( ( ( * (  c3434 ) ) .f_fg ) ) );
        (*  rs3432 ) .f_fg = ( ( * (  c3434 ) ) .f_fg );
    }
    if ( ( !  eq1956 ( ( ( * (  rs3432 ) ) .f_bg ) , (  bg3440 ) ) ) ) {
        ( (  set_dash_bg2028 ) ( (  bg3440 ) ) );
        (*  rs3432 ) .f_bg = (  bg3440 );
    }
    ( (  print_dash_str192 ) ( (  char3439 ) ) );
    uint32_t  char_dash_width3441 = ( (  i32_dash_u322034 ) ( ( (  max953 ) ( ( ( * (  c3434 ) ) .f_char_dash_width ) ,  (  from_dash_integral48 ( 1 ) ) ) ) ) );
    (*  rs3432 ) .f_x = (  op_dash_add773 ( ( ( * (  rs3432 ) ) .f_x ) , (  char_dash_width3441 ) ) );
    return ( Unit_7_Unit );
}

struct Zip_2037 {
    struct SliceIter_1939  f_left_dash_it;
    struct FromIter_255  f_right_dash_it;
};

struct env2038 {
    ;
    struct Slice_651  dest1853;
    ;
};

struct Tuple2_2040 {
    struct Cell_652  field0;
    int32_t  field1;
};

static struct Tuple2_2040 Tuple2_2040_Tuple2 (  struct Cell_652  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2040 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2039 {
    enum Unit_7  (*fun) (  struct env2038*  ,    struct Tuple2_2040  );
    struct env2038 env;
};

static  struct Zip_2037   into_dash_iter2042 (    struct Zip_2037  self911 ) {
    return (  self911 );
}

struct Maybe_2043 {
    enum {
        Maybe_2043_None_t,
        Maybe_2043_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2040  field0;
        } Maybe_2043_Just_s;
    } stuff;
};

static struct Maybe_2043 Maybe_2043_Just (  struct Tuple2_2040  field0 ) {
    return ( struct Maybe_2043 ) { .tag = Maybe_2043_Just_t, .stuff = { .Maybe_2043_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2043   next2044 (    struct Zip_2037 *  self914 ) {
    struct Zip_2037  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_692  dref916 = ( (  next1947 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_692_None_t ) {
            return ( (struct Maybe_2043) { .tag = Maybe_2043_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_692_Just_t ) {
                struct Maybe_261  dref918 = ( (  next262 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_261_None_t ) {
                    return ( (struct Maybe_2043) { .tag = Maybe_2043_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_261_Just_t ) {
                        ( (  next1947 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next262 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2043_Just ) ( ( ( Tuple2_2040_Tuple2 ) ( ( dref916 .stuff .Maybe_692_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_261_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each2036 (    struct Zip_2037  iterable1074 ,   struct envunion2039  fun1076 ) {
    struct Zip_2037  temp2041 = ( (  into_dash_iter2042 ) ( (  iterable1074 ) ) );
    struct Zip_2037 *  it1077 = ( &temp2041 );
    while ( ( true ) ) {
        struct Maybe_2043  dref1078 = ( (  next2044 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_2043_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_2043_Just_t ) {
                struct envunion2039  temp2045 = (  fun1076 );
                ( temp2045.fun ( &temp2045.env ,  ( dref1078 .stuff .Maybe_2043_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_2037   zip2046 (    struct Slice_651  left922 ,    struct FromIter_255  right924 ) {
    struct SliceIter_1939  left_dash_it925 = ( (  into_dash_iter1953 ) ( (  left922 ) ) );
    struct FromIter_255  right_dash_it926 = ( (  into_dash_iter267 ) ( (  right924 ) ) );
    return ( (struct Zip_2037) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   lam2047 (   struct env2038* env ,    struct Tuple2_2040  dref1854 ) {
    return ( (  set685 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size251 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_7   copy_dash_to2035 (    struct Slice_651  src1851 ,    struct Slice_651  dest1853 ) {
    if ( (  cmp173 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic442 ) ( ( ( StrConcat_443_StrConcat ) ( ( ( StrConcat_243_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string209 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string209 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string209 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2038 envinst2038 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each2036 ) ( ( (  zip2046 ) ( (  src1851 ) ,  ( (  from268 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2039){ .fun = (  enum Unit_7  (*) (  struct env2038*  ,    struct Tuple2_2040  ) )lam2047 , .env =  envinst2038 } ) ) );
    return ( Unit_7_Unit );
}

static  uint32_t   render_dash_screen1916 (    struct Screen_650 *  screen3444 ) {
    int32_t  w3445 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3444 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3446 = ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen3444 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1917  temp1918 = ( (struct RenderState_1917) { .f_x = (  from_dash_integral205 ( 0 ) ) , .f_y = (  from_dash_integral205 ( 0 ) ) , .f_fg = ( (struct Color_653) { .tag = Color_653_ColorDefault_t } ) , .f_bg = ( (struct Color_653) { .tag = Color_653_ColorDefault_t } ) , .f_changes = (  from_dash_integral205 ( 0 ) ) } );
    struct RenderState_1917 *  rs3447 = ( &temp1918 );
    ( (  move_dash_cursor_dash_to1919 ) ( (  from_dash_integral205 ( 0 ) ) ,  (  from_dash_integral205 ( 0 ) ) ) );
    struct RangeIter_678  temp1934 =  into_dash_iter680 ( ( (  to683 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub801 ( (  h3446 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_261  __cond1935 =  next681 (&temp1934);
        if (  __cond1935 .tag == 0 ) {
            break;
        }
        int32_t  y3449 =  __cond1935 .stuff .Maybe_261_Just_s .field0;
        int32_t  x_dash_v3450 = (  from_dash_integral48 ( 0 ) );
        while ( (  cmp306 ( (  x_dash_v3450 ) , (  w3445 ) ) == 0 ) ) {
            size_t  i3451 = ( (  i32_dash_size251 ) ( (  op_dash_add263 ( (  op_dash_mul1345 ( (  y3449 ) , (  w3445 ) ) ) , (  x_dash_v3450 ) ) ) ) );
            struct Cell_652 *  cur3452 = ( (  get_dash_ptr686 ) ( ( ( * (  screen3444 ) ) .f_current ) ,  (  i3451 ) ) );
            int32_t  char_dash_width3453 = ( (  max953 ) ( ( ( * (  cur3452 ) ) .f_char_dash_width ) ,  (  from_dash_integral48 ( 1 ) ) ) );
            struct Slice_651  curs3454 = ( (  subslice1936 ) ( ( ( * (  screen3444 ) ) .f_current ) ,  (  i3451 ) ,  (  op_dash_add221 ( (  i3451 ) , ( (  i32_dash_size251 ) ( (  char_dash_width3453 ) ) ) ) ) ) );
            struct Slice_651  prevs3455 = ( (  subslice1936 ) ( ( ( * (  screen3444 ) ) .f_previous ) ,  (  i3451 ) ,  (  op_dash_add221 ( (  i3451 ) , ( (  i32_dash_size251 ) ( (  char_dash_width3453 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3444 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any1937 ) ( ( (  zip1952 ) ( (  curs3454 ) ,  (  prevs3455 ) ) ) ,  (  lam1954 ) ) ) ) ) {
                (*  rs3447 ) .f_changes = (  op_dash_add773 ( ( ( * (  rs3447 ) ) .f_changes ) , (  from_dash_integral205 ( 1 ) ) ) );
                ( (  emit_dash_cell1967 ) ( (  rs3447 ) ,  (  cur3452 ) ,  ( (  i32_dash_u322034 ) ( (  x_dash_v3450 ) ) ) ,  ( (  i32_dash_u322034 ) ( (  y3449 ) ) ) ) );
                ( (  copy_dash_to2035 ) ( (  curs3454 ) ,  (  prevs3455 ) ) );
            }
            x_dash_v3450 = (  op_dash_add263 ( (  x_dash_v3450 ) , (  char_dash_width3453 ) ) );
        }
    }
    (*  screen3444 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors599 ) ( ) );
    ( (  flush_dash_stdout602 ) ( ) );
    return ( ( * (  rs3447 ) ) .f_changes );
}

static  void *   cast_dash_ptr2054 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of2055 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed2052 (  ) {
    struct timespec *  temp2053;
    struct timespec *  x570 = (  temp2053 );
    ( ( memset ) ( ( (  cast_dash_ptr2054 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of2055 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct timespec *   null_dash_ptr2051 (  ) {
    return ( (  zeroed2052 ) ( ) );
}

static  enum Unit_7   sync2048 (    struct Tui_73 *  tui3315 ) {
    if ( (  eq396 ( ( ( * (  tui3315 ) ) .f_target_dash_fps ) , (  from_dash_integral205 ( 0 ) ) ) ) ) {
        return ( Unit_7_Unit );
    }
    int64_t  frame_dash_ns3316 = (  op_dash_div878 ( (  from_dash_integral292 ( 1000000000 ) ) , ( (  size_dash_i64250 ) ( ( (  u32_dash_size664 ) ( ( ( * (  tui3315 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2049 = ( (  undefined638 ) ( ) );
    struct timespec *  now3317 = ( &temp2049 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic640 ) ( ) ) ,  (  now3317 ) ) );
    int64_t  elapsed_dash_ns3318 = (  op_dash_add394 ( (  op_dash_mul219 ( (  op_dash_sub880 ( ( ( * (  now3317 ) ) .tv_sec ) , ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral292 ( 1000000000 ) ) ) ) , (  op_dash_sub880 ( ( ( * (  now3317 ) ) .tv_nsec ) , ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3319 = (  op_dash_sub880 ( (  frame_dash_ns3316 ) , (  elapsed_dash_ns3318 ) ) );
    if ( (  cmp898 ( (  sleep_dash_ns3319 ) , (  from_dash_integral292 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2050 = ( (struct timespec) { .tv_sec = (  from_dash_integral292 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3319 ) } );
        struct timespec *  ts3320 = ( &temp2050 );
        ( ( nanosleep ) ( (  ts3320 ) ,  ( (  null_dash_ptr2051 ) ( ) ) ) );
    }
    struct timespec  temp2056 = ( (  undefined638 ) ( ) );
    struct timespec *  last_dash_sync3321 = ( &temp2056 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic640 ) ( ) ) ,  (  last_dash_sync3321 ) ) );
    (*  tui3315 ) .f_last_dash_sync = ( * (  last_dash_sync3321 ) );
    (*  tui3315 ) .f_fps_dash_count = (  op_dash_add773 ( ( ( * (  tui3315 ) ) .f_fps_dash_count ) , (  from_dash_integral205 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3322 = (  op_dash_add394 ( (  op_dash_mul219 ( (  op_dash_sub880 ( ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3315 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral292 ( 1000 ) ) ) ) , (  op_dash_div878 ( (  op_dash_sub880 ( ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3315 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral292 ( 1000000 ) ) ) ) ) );
    if ( (  cmp898 ( (  fps_dash_elapsed_dash_ms3322 ) , (  from_dash_integral292 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3315 ) .f_actual_dash_fps = ( ( * (  tui3315 ) ) .f_fps_dash_count );
        (*  tui3315 ) .f_fps_dash_count = (  from_dash_integral205 ( 0 ) );
        (*  tui3315 ) .f_fps_dash_ts = ( ( * (  tui3315 ) ) .f_last_dash_sync );
    }
    return ( Unit_7_Unit );
}

static  void *   cast_dash_ptr2059 (    struct Cell_652 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free2058 (    enum CAllocator_9  dref1959 ,    struct Slice_651  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr2059 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_screen2057 (    struct Screen_650 *  screen3420 ) {
    enum CAllocator_9  al3421 = ( ( * (  screen3420 ) ) .f_al );
    ( (  free2058 ) ( (  al3421 ) ,  ( ( * (  screen3420 ) ) .f_current ) ) );
    ( (  free2058 ) ( (  al3421 ) ,  ( ( * (  screen3420 ) ) .f_previous ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   disable_dash_mouse2061 (  ) {
    ( (  print_dash_str184 ) ( ( (  from_dash_string209 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   show_dash_cursor2062 (  ) {
    ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   reset_dash_cursor_dash_position2063 (  ) {
    ( (  print590 ) ( ( (  from_dash_string209 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   disable_dash_raw_dash_mode2064 (    struct Termios_75 *  og_dash_termios3295 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno528 ) ( ) ) ,  ( (  tcsa_dash_flush588 ) ( ) ) ,  ( (  cast_dash_ptr529 ) ( (  og_dash_termios3295 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   deinit2060 (    struct Tui_73 *  tui3325 ) {
    ( (  disable_dash_mouse2061 ) ( ) );
    ( (  show_dash_cursor2062 ) ( ) );
    ( (  reset_dash_colors599 ) ( ) );
    ( (  clear_dash_screen600 ) ( ) );
    ( (  reset_dash_cursor_dash_position2063 ) ( ) );
    ( (  disable_dash_raw_dash_mode2064 ) ( ( & ( ( * (  tui3325 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout602 ) ( ) );
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
        .envinst32 = envinst32 ,
    };
    struct env36 envinst36 = {
        .envinst34 = envinst34 ,
    };
    struct env38 envinst38 = {
        .envinst5 = envinst5 ,
    };
    struct env40 envinst40 = {
        .envinst13 = envinst13 ,
    };
    struct env42 envinst42 = {
        .envinst38 = envinst38 ,
    };
    struct env45 envinst45 = {
        .envinst40 = envinst40 ,
    };
    ( ( setlocale ) ( ( (  lc_dash_ctype47 ) ( ) ) ,  ( (  from_dash_string49 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct env50 envinst50 = {
        .envinst40 = envinst40 ,
    };
    struct env52 envinst52 = {
        .envinst50 = envinst50 ,
    };
    struct env55 envinst55 = {
        .envinst52 = envinst52 ,
    };
    struct env58 envinst58 = {
        .envinst52 = envinst52 ,
    };
    struct env59 envinst59 = {
        .envinst36 = envinst36 ,
    };
    struct env61 envinst61 = {
        .envinst52 = envinst52 ,
        .envinst55 = envinst55 ,
    };
    struct env66 envinst66 = {
        .envinst52 = envinst52 ,
        .envinst58 = envinst58 ,
    };
    bool  temp68 = ( false );
    bool *  should_dash_resize3305 = ( &temp68 );
    struct env69 envinst69 = {
        .should_dash_resize3305 =  should_dash_resize3305 ,
    };
    struct env70 envinst70 = {
        .should_dash_resize3305 =  should_dash_resize3305 ,
    };
    struct env71 envinst71 = {
        .envinst70 = envinst70 ,
    };
    struct env77 envinst77 = {
        .envinst70 = envinst70 ,
    };
    struct env79 envinst79 = {
        .envinst42 = envinst42 ,
    };
    struct env81 envinst81 = {
        .envinst45 = envinst45 ,
        .envinst29 = envinst29 ,
        .envinst40 = envinst40 ,
    };
    struct env85 envinst85 = {
        .envinst81 = envinst81 ,
        .envinst40 = envinst40 ,
        .envinst32 = envinst32 ,
        .envinst33 = envinst33 ,
        .envinst5 = envinst5 ,
    };
    struct env93 envinst93 = {
        .envinst85 = envinst85 ,
    };
    struct env95 envinst95 = {
        .envinst85 = envinst85 ,
    };
    struct env97 envinst97 = {
        .envinst93 = envinst93 ,
    };
    struct env99 envinst99 = {
        .envinst95 = envinst95 ,
    };
    struct env101 envinst101 = {
        .envinst40 = envinst40 ,
    };
    struct env103 envinst103 = {
        .envinst101 = envinst101 ,
        .envinst95 = envinst95 ,
        .envinst15 = envinst15 ,
        .envinst22 = envinst22 ,
    };
    struct env108 envinst108 = {
        .envinst103 = envinst103 ,
    };
    struct env111 envinst111 = {
        .envinst103 = envinst103 ,
    };
    struct env113 envinst113 = {
        .envinst97 = envinst97 ,
    };
    struct env115 envinst115 = {
        .envinst99 = envinst99 ,
    };
    struct env117 envinst117 = {
        .envinst103 = envinst103 ,
    };
    struct env119 envinst119 = {
        .envinst101 = envinst101 ,
    };
    struct env121 envinst121 = {
        .envinst61 = envinst61 ,
    };
    struct env123 envinst123 = {
        .envinst66 = envinst66 ,
    };
    struct env125 envinst125 = {
        .envinst123 = envinst123 ,
    };
    struct env133 envinst133 = {
        .envinst113 = envinst113 ,
        .envinst115 = envinst115 ,
        .envinst121 = envinst121 ,
        .envinst117 = envinst117 ,
        .envinst119 = envinst119 ,
    };
    struct env140 envinst140 = {
        .envinst125 = envinst125 ,
        .envinst59 = envinst59 ,
        .envinst133 = envinst133 ,
        .envinst108 = envinst108 ,
        .envinst52 = envinst52 ,
        .envinst111 = envinst111 ,
    };
    enum CAllocator_9  al4209 = ( (  idc148 ) ( ) );
    struct envunion151  temp150 = ( (struct envunion151){ .fun = (  struct TextBuf_87  (*) (  struct env79*  ,    enum CAllocator_9  ,    struct Pos_20  ) )mk152 , .env =  envinst79 } );
    struct TextBuf_87  temp149 = ( temp150.fun ( &temp150.env ,  (  al4209 ) ,  ( (  mk287 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) ) );
    struct TextBuf_87 *  tb4210 = ( &temp149 );
    struct Slice_288  args4213 = ( (  get289 ) ( ) );
    if ( (  cmp173 ( ( (  args4213 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        const char*  fname4214 = (  elem_dash_get294 ( (  args4213 ) , (  from_dash_integral0 ( 0 ) ) ) );
        struct envunion302  temp301 = ( (struct envunion302){ .fun = (  enum Unit_7  (*) (  struct env85*  ,    struct TextBuf_87 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action303 , .env =  envinst85 } );
        ( temp301.fun ( &temp301.env ,  (  tb4210 ) ,  ( (  mk287 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) ,  ( (  mk287 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) ,  ( (  read_dash_contents493 ) ( (  fname4214 ) ,  (  al4209 ) ) ) ) );
    }
    struct Editor_127  temp518 = ( (struct Editor_127) { .f_running = ( true ) , .f_al = (  al4209 ) , .f_pane = ( (  mk519 ) ( (  al4209 ) ,  (  tb4210 ) ) ) , .f_clipboard = ( (struct Maybe_131) { .tag = Maybe_131_None_t } ) , .f_search_dash_term = ( (struct Maybe_131) { .tag = Maybe_131_None_t } ) , .f_mode = ( (struct EditorMode_132) { .tag = EditorMode_132_Normal_t } ) , .f_msg = ( (struct Maybe_131) { .tag = Maybe_131_None_t } ) } );
    struct Editor_127 *  ed4215 = ( &temp518 );
    struct envunion522  temp521 = ( (struct envunion522){ .fun = (  struct Tui_73  (*) (  struct env69*  ) )mk523 , .env =  envinst69 } );
    struct Tui_73  temp520 = ( temp521.fun ( &temp521.env ) );
    struct Tui_73 *  tui4216 = ( &temp520 );
    struct Screen_650  temp657 = ( (  mk_dash_screen658 ) ( (  tui4216 ) ,  (  al4209 ) ) );
    struct Screen_650 *  screen4217 = ( &temp657 );
    uint32_t  last_dash_redraw_dash_changes4218 = (  from_dash_integral205 ( 0 ) );
    while ( ( ( * (  ed4215 ) ) .f_running ) ) {
        struct env708 envinst708 = {
            .tui4216 =  tui4216 ,
            .envinst71 = envinst71 ,
        };
        struct FunIter_707  temp706 =  into_dash_iter715 ( ( (  from_dash_function716 ) ( ( (struct envunion714){ .fun = (  struct Maybe_710  (*) (  struct env708*  ) )lam717 , .env =  envinst708 } ) ) ) );
        while (true) {
            struct Maybe_710  __cond918 =  next919 (&temp706);
            if (  __cond918 .tag == 0 ) {
                break;
            }
            struct InputEvent_711  ev4220 =  __cond918 .stuff .Maybe_710_Just_s .field0;
            struct InputEvent_711  dref4221 = (  ev4220 );
            if ( dref4221.tag == InputEvent_711_Key_t ) {
                ( (  reset_dash_msg921 ) ( (  ed4215 ) ) );
                struct envunion929  temp928 = ( (struct envunion929){ .fun = (  enum Unit_7  (*) (  struct env140*  ,    struct Editor_127 *  ,    struct Key_144  ) )handle_dash_key930 , .env =  envinst140 } );
                ( temp928.fun ( &temp928.env ,  (  ed4215 ) ,  ( dref4221 .stuff .InputEvent_711_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1473  temp1472 = ( (struct envunion1473){ .fun = (  bool  (*) (  struct env77*  ,    struct Screen_650 *  ) )resize_dash_screen_dash_if_dash_needed1474 , .env =  envinst77 } );
        ( temp1472.fun ( &temp1472.env ,  (  screen4217 ) ) );
        if ( ( (  should_dash_redraw1476 ) ( (  tui4216 ) ) ) ) {
            (*  screen4217 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1477 ) ( (  screen4217 ) ) );
            ( (  set_dash_screen_dash_fg1486 ) ( (  screen4217 ) ,  ( (struct Color_653) { .tag = Color_653_ColorDefault_t } ) ) );
            ( (  set_dash_screen_dash_bg1487 ) ( (  screen4217 ) ,  ( (struct Color_653) { .tag = Color_653_ColorDefault_t } ) ) );
            ( (  render_dash_editor1488 ) ( (  screen4217 ) ,  (  ed4215 ) ) );
            ( (  draw_dash_str1887 ) ( (  screen4217 ) ,  ( ( StrConcat_1888_StrConcat ) ( ( ( StrConcat_1889_StrConcat ) ( ( (  from_dash_string209 ) ( ( "REDRAWS[" ) ,  ( 8 ) ) ) ,  (  last_dash_redraw_dash_changes4218 ) ) ) ,  ( (  from_dash_charlike210 ) ( ( "]" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub801 ( ( (  u32_dash_i321490 ) ( ( ( * ( ( * (  screen4217 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
            last_dash_redraw_dash_changes4218 = ( (  render_dash_screen1916 ) ( (  screen4217 ) ) );
        }
        ( (  sync2048 ) ( (  tui4216 ) ) );
    }
    ( (  free_dash_screen2057 ) ( (  screen4217 ) ) );
    ( (  deinit2060 ) ( (  tui4216 ) ) );
}
