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

struct envunion86 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

enum ChangesetInputType_90 {
    ChangesetInputType_90_NoChangeset,
    ChangesetInputType_90_InputChangeset,
    ChangesetInputType_90_CustomChangeset,
};

struct Actions_89 {
    struct List_24  f_list;
    size_t  f_cur;
    enum ChangesetInputType_90  f_input_dash_changeset;
};

struct TextBuf_88 {
    enum CAllocator_9  f_al;
    struct List_8  f_buf;
    struct Actions_89  f_actions;
};

struct envunion87 {
    int32_t  (*fun) (  struct env81*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct StrView_21  );
    struct env81 env;
};

struct envunion91 {
    enum Unit_7  (*fun) (  struct env32*  ,    struct List_11 *  ,    size_t  ,    size_t  );
    struct env32 env;
};

struct envunion92 {
    enum Unit_7  (*fun) (  struct env33*  ,    struct List_8 *  ,    size_t  ,    size_t  );
    struct env33 env;
};

struct envunion93 {
    enum Unit_7  (*fun) (  struct env5*  ,    struct List_8 *  ,    struct List_11  );
    struct env5 env;
};

struct env85 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env40 envinst40;
    ;
    struct env81 envinst81;
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

struct envunion95 {
    enum Unit_7  (*fun) (  struct env85*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  );
    struct env85 env;
};

struct env94 {
    ;
    ;
    ;
    ;
    struct env85 envinst85;
};

struct envunion97 {
    enum Unit_7  (*fun) (  struct env85*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  );
    struct env85 env;
};

struct env96 {
    ;
    ;
    ;
    ;
    struct env85 envinst85;
};

struct envunion99 {
    struct Pos_20  (*fun) (  struct env94*  ,    struct TextBuf_88 *  ,    struct Action_19  );
    struct env94 env;
};

struct env98 {
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
    ;
    ;
    ;
    ;
};

struct envunion101 {
    struct Pos_20  (*fun) (  struct env96*  ,    struct TextBuf_88 *  ,    struct Action_19  );
    struct env96 env;
};

struct env100 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env96 envinst96;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion103 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

struct env102 {
    ;
    ;
    ;
    ;
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

struct envunion105 {
    struct Pos_20  (*fun) (  struct env96*  ,    struct TextBuf_88 *  ,    struct Action_19  );
    struct env96 env;
};

struct envunion106 {
    enum Unit_7  (*fun) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  );
    struct env15 env;
};

struct envunion107 {
    enum Unit_7  (*fun) (  struct env22*  ,    struct List_24 *  ,    struct Changeset_26  );
    struct env22 env;
};

struct envunion108 {
    struct StrView_21  (*fun) (  struct env102*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  );
    struct env102 env;
};

struct env104 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env96 envinst96;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env15 envinst15;
    struct env22 envinst22;
    struct env102 envinst102;
};

struct envunion110 {
    enum Unit_7  (*fun) (  struct env22*  ,    struct List_24 *  ,    struct Changeset_26  );
    struct env22 env;
};

struct env109 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env22 envinst22;
    ;
    ;
};

struct Maybe_113 {
    enum {
        Maybe_113_None_t,
        Maybe_113_Just_t,
    } tag;
    union {
        struct {
            struct Cursors_27  field0;
        } Maybe_113_Just_s;
    } stuff;
};

static struct Maybe_113 Maybe_113_Just (  struct Cursors_27  field0 ) {
    return ( struct Maybe_113 ) { .tag = Maybe_113_Just_t, .stuff = { .Maybe_113_Just_s = { .field0 = field0 } } };
};

struct envunion112 {
    struct Maybe_113  (*fun) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  );
    struct env104 env;
};

struct env111 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env104 envinst104;
};

struct envunion115 {
    struct Maybe_113  (*fun) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  );
    struct env104 env;
};

struct env114 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env104 envinst104;
    ;
};

struct envunion117 {
    struct Maybe_113  (*fun) (  struct env98*  ,    struct TextBuf_88 *  );
    struct env98 env;
};

struct env116 {
    ;
    ;
    ;
    ;
    ;
    struct env98 envinst98;
    ;
};

struct envunion119 {
    struct Maybe_113  (*fun) (  struct env100*  ,    struct TextBuf_88 *  );
    struct env100 env;
};

struct env118 {
    ;
    ;
    ;
    ;
    struct env100 envinst100;
    ;
    ;
};

struct envunion121 {
    struct Maybe_113  (*fun) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  );
    struct env104 env;
};

struct env120 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env104 envinst104;
    ;
    ;
};

struct envunion123 {
    enum Unit_7  (*fun) (  struct env109*  ,    struct TextBuf_88 *  ,    struct Cursors_27  );
    struct env109 env;
};

struct envunion124 {
    struct Maybe_113  (*fun) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  );
    struct env104 env;
};

struct env122 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    struct env104 envinst104;
    ;
    ;
};

struct envunion126 {
    enum Unit_7  (*fun) (  struct env109*  ,    struct TextBuf_88 *  ,    struct Cursors_27  );
    struct env109 env;
};

struct envunion127 {
    struct Maybe_113  (*fun) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  );
    struct env104 env;
};

struct env125 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    struct env104 envinst104;
    ;
    ;
    ;
};

struct envunion129 {
    struct StrView_21  (*fun) (  struct env102*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  );
    struct env102 env;
};

struct env128 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env102 envinst102;
};

struct envunion131 {
    struct StrView_21  (*fun) (  struct env61*  ,    struct StrConcat_64  ,    enum CAllocator_9  );
    struct env61 env;
};

struct env130 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env61 envinst61;
};

struct envunion133 {
    struct StrView_21  (*fun) (  struct env66*  ,    struct StrView_21  ,    enum CAllocator_9  );
    struct env66 env;
};

struct env132 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env66 envinst66;
};

enum Mode_138 {
    Mode_138_Normal,
    Mode_138_Insert,
    Mode_138_Select,
};

struct ScreenCursorOffset_139 {
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
};

struct Pane_137 {
    struct TextBuf_88 *  f_buf;
    struct Pos_20  f_cursor;
    int32_t  f_vi;
    struct Maybe_28  f_sel;
    enum Mode_138  f_mode;
    struct ScreenCursorOffset_139  f_sc_dash_off;
};

struct Maybe_140 {
    enum {
        Maybe_140_None_t,
        Maybe_140_Just_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } Maybe_140_Just_s;
    } stuff;
};

static struct Maybe_140 Maybe_140_Just (  struct StrView_21  field0 ) {
    return ( struct Maybe_140 ) { .tag = Maybe_140_Just_t, .stuff = { .Maybe_140_Just_s = { .field0 = field0 } } };
};

struct EditorMode_141 {
    enum {
        EditorMode_141_Normal_t,
        EditorMode_141_Cmd_t,
        EditorMode_141_Search_t,
    } tag;
    union {
        struct {
            struct Pos_20  field0;
            struct StrBuilder_54  field1;
        } EditorMode_141_Cmd_s;
        struct {
            struct Pos_20  field0;
            struct StrBuilder_54  field1;
        } EditorMode_141_Search_s;
    } stuff;
};

static struct EditorMode_141 EditorMode_141_Cmd (  struct Pos_20  field0 ,  struct StrBuilder_54  field1 ) {
    return ( struct EditorMode_141 ) { .tag = EditorMode_141_Cmd_t, .stuff = { .EditorMode_141_Cmd_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct EditorMode_141 EditorMode_141_Search (  struct Pos_20  field0 ,  struct StrBuilder_54  field1 ) {
    return ( struct EditorMode_141 ) { .tag = EditorMode_141_Search_t, .stuff = { .EditorMode_141_Search_s = { .field0 = field0 ,  .field1 = field1 } } };
};

struct Editor_136 {
    enum CAllocator_9  f_al;
    bool  f_running;
    struct Pane_137  f_pane;
    struct Maybe_140  f_clipboard;
    struct Maybe_140  f_search_dash_term;
    struct EditorMode_141  f_mode;
    struct Maybe_140  f_msg;
};

struct envunion135 {
    enum Unit_7  (*fun) (  struct env132*  ,    struct Editor_136 *  ,    struct StrView_21  );
    struct env132 env;
};

struct env134 {
    struct env132 envinst132;
    ;
    ;
    ;
    ;
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

struct envunion143 {
    enum Unit_7  (*fun) (  struct env130*  ,    struct Editor_136 *  ,    struct StrConcat_64  );
    struct env130 env;
};

struct envunion144 {
    enum Unit_7  (*fun) (  struct env118*  ,    struct Pane_137 *  );
    struct env118 env;
};

struct envunion145 {
    enum Unit_7  (*fun) (  struct env122*  ,    struct Pane_137 *  );
    struct env122 env;
};

struct envunion146 {
    enum Unit_7  (*fun) (  struct env125*  ,    struct Pane_137 *  );
    struct env125 env;
};

struct envunion147 {
    enum Unit_7  (*fun) (  struct env128*  ,    struct Editor_136 *  );
    struct env128 env;
};

struct Tuple2_149 {
    struct Pos_20  field0;
    struct Pos_20  field1;
};

static struct Tuple2_149 Tuple2_149_Tuple2 (  struct Pos_20  field0 ,  struct Pos_20  field1 ) {
    return ( struct Tuple2_149 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion148 {
    enum Unit_7  (*fun) (  struct env120*  ,    struct Pane_137 *  ,    struct Tuple2_149  ,    struct StrView_21  );
    struct env120 env;
};

struct envunion150 {
    enum Unit_7  (*fun) (  struct env116*  ,    struct Pane_137 *  );
    struct env116 env;
};

struct env142 {
    struct env130 envinst130;
    ;
    struct env118 envinst118;
    struct env122 envinst122;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env125 envinst125;
    struct env128 envinst128;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env120 envinst120;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env116 envinst116;
    ;
    ;
    ;
    ;
};

struct Key_153 {
    enum {
        Key_153_Escape_t,
        Key_153_Enter_t,
        Key_153_Tab_t,
        Key_153_Backspace_t,
        Key_153_Char_t,
        Key_153_Ctrl_t,
        Key_153_Up_t,
        Key_153_Down_t,
        Key_153_Left_t,
        Key_153_Right_t,
        Key_153_Home_t,
        Key_153_End_t,
        Key_153_PageUp_t,
        Key_153_PageDown_t,
        Key_153_Delete_t,
        Key_153_Insert_t,
        Key_153_F1_t,
        Key_153_F2_t,
        Key_153_F3_t,
        Key_153_F4_t,
        Key_153_F5_t,
        Key_153_F6_t,
        Key_153_F7_t,
        Key_153_F8_t,
        Key_153_F9_t,
        Key_153_F10_t,
        Key_153_F11_t,
        Key_153_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_153_Char_s;
        struct {
            char  field0;
        } Key_153_Ctrl_s;
    } stuff;
};

static struct Key_153 Key_153_Char (  char  field0 ) {
    return ( struct Key_153 ) { .tag = Key_153_Char_t, .stuff = { .Key_153_Char_s = { .field0 = field0 } } };
};

static struct Key_153 Key_153_Ctrl (  char  field0 ) {
    return ( struct Key_153 ) { .tag = Key_153_Ctrl_t, .stuff = { .Key_153_Ctrl_s = { .field0 = field0 } } };
};

struct envunion152 {
    enum Unit_7  (*fun) (  struct env142*  ,    struct Editor_136 *  ,    struct Key_153  );
    struct env142 env;
};

struct envunion154 {
    enum Unit_7  (*fun) (  struct env111*  ,    struct Pane_137 *  ,    struct StrView_21  );
    struct env111 env;
};

struct envunion155 {
    enum Unit_7  (*fun) (  struct env114*  ,    struct Pane_137 *  );
    struct env114 env;
};

struct envunion156 {
    enum Unit_7  (*fun) (  struct env59*  ,    struct StrBuilder_54 *  );
    struct env59 env;
};

struct envunion157 {
    enum Unit_7  (*fun) (  struct env134*  ,    struct Editor_136 *  ,    struct StrView_21  );
    struct env134 env;
};

struct envunion158 {
    enum Unit_7  (*fun) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  );
    struct env52 env;
};

struct env151 {
    ;
    ;
    struct env142 envinst142;
    ;
    ;
    ;
    struct env111 envinst111;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env114 envinst114;
    struct env59 envinst59;
    ;
    struct env134 envinst134;
    ;
    struct env52 envinst52;
    ;
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

static  enum CAllocator_9   idc159 (  ) {
    return ( CAllocator_9_CAllocator );
}

struct envunion162 {
    struct TextBuf_88  (*fun) (  struct env79*  ,    enum CAllocator_9  ,    struct Pos_20  );
    struct env79 env;
};

static  void *   cast_dash_ptr172 (    struct List_11 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of173 (    struct List_11 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct List_11 *   zeroed170 (  ) {
    struct List_11 *  temp171;
    struct List_11 *  x570 = (  temp171 );
    ( ( memset ) ( ( (  cast_dash_ptr172 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of173 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct List_11 *   null_dash_ptr169 (  ) {
    return ( (  zeroed170 ) ( ) );
}

static  struct Slice_10   empty168 (  ) {
    return ( (struct Slice_10) { .f_ptr = ( (  null_dash_ptr169 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_8   mk167 (    enum CAllocator_9  al2031 ) {
    struct Slice_10  elements2032 = ( (  empty168 ) ( ) );
    return ( (struct List_8) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env177 {
    struct List_8 *  list2098;
    struct env5 envinst5;
};

struct envunion178 {
    enum Unit_7  (*fun) (  struct env177*  ,    struct List_11  );
    struct env177 env;
};

struct ArrayIter_179 {
    struct Array_44  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_179   into_dash_iter181 (    struct Array_44  self2322 ) {
    return ( (struct ArrayIter_179) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_182 {
    enum {
        Maybe_182_None_t,
        Maybe_182_Just_t,
    } tag;
    union {
        struct {
            struct List_11  field0;
        } Maybe_182_Just_s;
    } stuff;
};

static struct Maybe_182 Maybe_182_Just (  struct List_11  field0 ) {
    return ( struct Maybe_182 ) { .tag = Maybe_182_Just_t, .stuff = { .Maybe_182_Just_s = { .field0 = field0 } } };
};

enum Ordering_185 {
    Ordering_185_LT,
    Ordering_185_EQ,
    Ordering_185_GT,
};

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_185   cmp184 (    size_t  l179 ,    size_t  r181 ) {
    return ( builtin_size_tcmp( (  l179 ) , (  r181 ) ) );
}

struct StrConcat_190 {
    struct StrConcat_64  field0;
    int32_t  field1;
};

static struct StrConcat_190 StrConcat_190_StrConcat (  struct StrConcat_64  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_190 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_189 {
    struct StrConcat_190  field0;
    struct Char_57  field1;
};

static struct StrConcat_189 StrConcat_189_StrConcat (  struct StrConcat_190  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_189 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_193 {
    struct StrView_21  field0;
    struct StrConcat_189  field1;
};

static struct StrConcat_193 StrConcat_193_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_189  field1 ) {
    return ( struct StrConcat_193 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_192 {
    struct StrConcat_193  field0;
    struct Char_57  field1;
};

static struct StrConcat_192 StrConcat_192_StrConcat (  struct StrConcat_193  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_192 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32196 (    size_t  x630 ) {
    return ( (int32_t ) (  x630 ) );
}

static  enum Unit_7   print_dash_str195 (    struct StrView_21  self1379 ) {
    ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32196 ) ( ( ( (  self1379 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1379 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str201 (    size_t  self1464 ) {
    ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1464 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str200 (    struct StrConcat_65  self1503 ) {
    struct StrConcat_65  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str195 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str201 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str199 (    struct StrConcat_64  self1503 ) {
    struct StrConcat_64  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str200 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str195 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str202 (    int32_t  self1440 ) {
    ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1440 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str198 (    struct StrConcat_190  self1503 ) {
    struct StrConcat_190  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str199 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str202 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

struct Scalar_206 {
    uint32_t  f_value;
};

struct CharDestructured_205 {
    enum {
        CharDestructured_205_Ref_t,
        CharDestructured_205_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_57  field0;
        } CharDestructured_205_Ref_s;
        struct {
            struct Scalar_206  field0;
        } CharDestructured_205_Scalar_s;
    } stuff;
};

static struct CharDestructured_205 CharDestructured_205_Ref (  struct Char_57  field0 ) {
    return ( struct CharDestructured_205 ) { .tag = CharDestructured_205_Ref_t, .stuff = { .CharDestructured_205_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_205 CharDestructured_205_Scalar (  struct Scalar_206  field0 ) {
    return ( struct CharDestructured_205 ) { .tag = CharDestructured_205_Scalar_t, .stuff = { .CharDestructured_205_Scalar_s = { .field0 = field0 } } };
};

static  bool   eq208 (    uint8_t  l116 ,    uint8_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint8_t   size_dash_u8210 (    size_t  x639 ) {
    return ( (uint8_t ) (  x639 ) );
}

static  size_t   op_dash_div211 (    size_t  l285 ,    size_t  r287 ) {
    return ( (  l285 ) / (  r287 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer209 (    uint8_t *  ptr678 ) {
    return ( (  size_dash_u8210 ) ( (  op_dash_div211 ( ( ( (size_t ) (  ptr678 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint8_t   from_dash_integral212 (    int64_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  uint32_t   size_dash_u32213 (    size_t  x633 ) {
    return ( (uint32_t ) (  x633 ) );
}

static  size_t   cast214 (    uint8_t *  x356 ) {
    return ( (size_t ) (  x356 ) );
}

static  struct CharDestructured_205   destructure207 (    struct Char_57  c712 ) {
    if ( (  eq208 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer209 ) ( ( (  c712 ) .f_ptr ) ) ) , (  from_dash_integral212 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_205_Scalar ) ( ( (struct Scalar_206) { .f_value = ( (  size_dash_u32213 ) ( ( ( (  cast214 ) ( ( (  c712 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_205_Ref ) ( (  c712 ) ) );
    }
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_185   cmp215 (    uint32_t  l164 ,    uint32_t  r166 ) {
    return ( builtin_uint32_tcmp( (  l164 ) , (  r166 ) ) );
}

static  uint32_t   from_dash_integral216 (    int64_t  x52 ) {
    return ( (uint32_t ) (  x52 ) );
}

static  uint8_t   cast219 (    uint32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  uint8_t   u32_dash_u8218 (    uint32_t  x657 ) {
    return ( (  cast219 ) ( (  x657 ) ) );
}

static  enum Unit_7   printf_dash_char204 (    struct Char_57  c758 ) {
    struct CharDestructured_205  dref759 = ( (  destructure207 ) ( (  c758 ) ) );
    if ( dref759.tag == CharDestructured_205_Ref_t ) {
        ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32196 ) ( ( ( dref759 .stuff .CharDestructured_205_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref759 .stuff .CharDestructured_205_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref759.tag == CharDestructured_205_Scalar_t ) {
            if ( (  cmp215 ( ( ( dref759 .stuff .CharDestructured_205_Scalar_s .field0 ) .f_value ) , (  from_dash_integral216 ( 127 ) ) ) == 2 ) ) {
                const char*  temp217 = ( (  from_dash_string49 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp217);
                exit ( 1 );
                ( Unit_7_Unit );
            }
            ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8218 ) ( ( ( dref759 .stuff .CharDestructured_205_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str203 (    struct Char_57  self1404 ) {
    ( (  printf_dash_char204 ) ( (  self1404 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str197 (    struct StrConcat_189  self1503 ) {
    struct StrConcat_189  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str198 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str203 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str194 (    struct StrConcat_193  self1503 ) {
    struct StrConcat_193  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str195 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str197 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str191 (    struct StrConcat_192  self1503 ) {
    struct StrConcat_192  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str194 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str203 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  struct StrView_21   from_dash_string220 (    uint8_t *  ptr86 ,    size_t  count88 ) {
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = (  ptr86 ) , .f_count = (  count88 ) } ) } );
}

static  uint8_t *   cast222 (    uint8_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_185   cmp225 (    uint8_t  l169 ,    uint8_t  r171 ) {
    return ( builtin_uint8_tcmp( (  l169 ) , (  r171 ) ) );
}

static  size_t   next_dash_char224 (    uint8_t *  p688 ) {
    uint8_t  pb689 = ( * (  p688 ) );
    if ( (  cmp225 ( (  pb689 ) , (  from_dash_integral212 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp225 ( (  pb689 ) , (  from_dash_integral212 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp225 ( (  pb689 ) , (  from_dash_integral212 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp225 ( (  pb689 ) , (  from_dash_integral212 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp226 = ( (  from_dash_string49 ) ( ( "(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp226);
                    exit ( 1 );
                    ( Unit_7_Unit );
                }
            }
        }
    }
}

static  struct Char_57   scan_dash_from_dash_mem223 (    uint8_t *  p700 ) {
    size_t  clen701 = ( (  next_dash_char224 ) ( (  p700 ) ) );
    if ( (  cmp184 ( (  clen701 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp227 = ( (  from_dash_string49 ) ( ( "UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp227);
        exit ( 1 );
        ( Unit_7_Unit );
    }
    return ( (struct Char_57) { .f_ptr = (  p700 ) , .f_num_dash_bytes = (  clen701 ) } );
}

static  struct Char_57   from_dash_charlike221 (    uint8_t *  ptr704 ,    size_t  num_dash_bytes706 ) {
    uint8_t *  ptr707 = ( ( (  cast222 ) ( (  ptr704 ) ) ) );
    return ( (  scan_dash_from_dash_mem223 ) ( (  ptr707 ) ) );
}

static  enum Unit_7   panic188 (    struct StrConcat_189  errmsg1712 ) {
    ( (  print_dash_str191 ) ( ( ( StrConcat_192_StrConcat ) ( ( ( StrConcat_193_StrConcat ) ( ( (  from_dash_string220 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct List_11 *   cast_dash_ptr228 (    struct Array_44 *  p359 ) {
    return ( (struct List_11 * ) (  p359 ) );
}

static  int64_t   op_dash_mul230 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) * (  r196 ) );
}

static  struct List_11 *   offset_dash_ptr229 (    struct List_11 *  x338 ,    int64_t  count340 ) {
    struct List_11  temp231;
    return ( (struct List_11 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul230 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp231 ) ) ) ) ) ) ) ) );
}

static  struct List_11 *   get_dash_ptr187 (    struct Array_44 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp184 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i2253 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic188 ) ( ( ( StrConcat_189_StrConcat ) ( ( ( StrConcat_190_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct List_11 *  p2254 = ( ( (  cast_dash_ptr228 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr229 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  struct List_11   get186 (    struct Array_44 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr187 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  size_t   op_dash_add232 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) + (  r272 ) );
}

static  struct Maybe_182   next183 (    struct ArrayIter_179 *  self2329 ) {
    if ( (  cmp184 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_182) { .tag = Maybe_182_None_t } );
    }
    struct List_11  e2331 = ( (  get186 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add232 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_182_Just ) ( (  e2331 ) ) );
}

static  enum Unit_7   for_dash_each176 (    struct Array_44  iterable1074 ,   struct envunion178  fun1076 ) {
    struct ArrayIter_179  temp180 = ( (  into_dash_iter181 ) ( (  iterable1074 ) ) );
    struct ArrayIter_179 *  it1077 = ( &temp180 );
    while ( ( true ) ) {
        struct Maybe_182  dref1078 = ( (  next183 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_182_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_182_Just_t ) {
                struct envunion178  temp233 = (  fun1076 );
                ( temp233.fun ( &temp233.env ,  ( dref1078 .stuff .Maybe_182_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  bool   eq239 (    size_t  l126 ,    size_t  r128 ) {
    return ( (  l126 ) == (  r128 ) );
}

struct TypeSize_242 {
    size_t  f_size;
};

static  struct TypeSize_242   get_dash_typesize241 (  ) {
    struct List_11  temp243;
    return ( (struct TypeSize_242) { .f_size = ( sizeof( ( (  temp243 ) ) ) ) } );
}

static  struct List_11 *   cast_dash_ptr244 (    void *  p359 ) {
    return ( (struct List_11 * ) (  p359 ) );
}

static  size_t   op_dash_mul245 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) * (  r282 ) );
}

static  struct Slice_10   allocate240 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize241 ) ( ) ) ) .f_size );
    struct List_11 *  ptr1957 = ( (  cast_dash_ptr244 ) ( ( ( malloc ) ( (  op_dash_mul245 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_10) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env246 {
    struct Slice_10  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_248 {
    struct List_11  field0;
    int32_t  field1;
};

static struct Tuple2_248 Tuple2_248_Tuple2 (  struct List_11  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_248 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion247 {
    enum Unit_7  (*fun) (  struct env246*  ,    struct Tuple2_248  );
    struct env246 env;
};

struct StrConcat_254 {
    struct StrConcat_64  field0;
    size_t  field1;
};

static struct StrConcat_254 StrConcat_254_StrConcat (  struct StrConcat_64  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_254 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_253 {
    struct StrConcat_254  field0;
    struct Char_57  field1;
};

static struct StrConcat_253 StrConcat_253_StrConcat (  struct StrConcat_254  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_253 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_257 {
    struct StrView_21  field0;
    struct StrConcat_253  field1;
};

static struct StrConcat_257 StrConcat_257_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_253  field1 ) {
    return ( struct StrConcat_257 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_256 {
    struct StrConcat_257  field0;
    struct Char_57  field1;
};

static struct StrConcat_256 StrConcat_256_StrConcat (  struct StrConcat_257  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_256 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str260 (    struct StrConcat_254  self1503 ) {
    struct StrConcat_254  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str199 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str201 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str259 (    struct StrConcat_253  self1503 ) {
    struct StrConcat_253  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str260 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str203 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str258 (    struct StrConcat_257  self1503 ) {
    struct StrConcat_257  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str195 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str259 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str255 (    struct StrConcat_256  self1503 ) {
    struct StrConcat_256  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str258 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str203 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic252 (    struct StrConcat_253  errmsg1712 ) {
    ( (  print_dash_str255 ) ( ( ( StrConcat_256_StrConcat ) ( ( ( StrConcat_257_StrConcat ) ( ( (  from_dash_string220 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  int64_t   size_dash_i64261 (    size_t  x594 ) {
    return ( (int64_t ) (  x594 ) );
}

static  struct List_11 *   get_dash_ptr251 (    struct Slice_10  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp184 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct List_11 *  elem_dash_ptr1760 = ( (  offset_dash_ptr229 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set250 (    struct Slice_10  slice1774 ,    size_t  i1776 ,    struct List_11  x1778 ) {
    struct List_11 *  ep1779 = ( (  get_dash_ptr251 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  size_t   i32_dash_size262 (    int32_t  x609 ) {
    return ( (size_t ) ( (int64_t ) (  x609 ) ) );
}

static  enum Unit_7   lam249 (   struct env246* env ,    struct Tuple2_248  dref2043 ) {
    return ( (  set250 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size262 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct SliceIter_265 {
    struct Slice_10  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_266 {
    int32_t  f_from;
};

struct Zip_264 {
    struct SliceIter_265  f_left_dash_it;
    struct FromIter_266  f_right_dash_it;
};

static  struct Zip_264   into_dash_iter268 (    struct Zip_264  self911 ) {
    return (  self911 );
}

struct Maybe_269 {
    enum {
        Maybe_269_None_t,
        Maybe_269_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_248  field0;
        } Maybe_269_Just_s;
    } stuff;
};

static struct Maybe_269 Maybe_269_Just (  struct Tuple2_248  field0 ) {
    return ( struct Maybe_269 ) { .tag = Maybe_269_Just_t, .stuff = { .Maybe_269_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_182   next271 (    struct SliceIter_265 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp184 ( (  op_dash_add232 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_182) { .tag = Maybe_182_None_t } );
    }
    struct List_11  elem1830 = ( * ( (  offset_dash_ptr229 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add232 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_182_Just ) ( (  elem1830 ) ) );
}

struct Maybe_272 {
    enum {
        Maybe_272_None_t,
        Maybe_272_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_272_Just_s;
    } stuff;
};

static struct Maybe_272 Maybe_272_Just (  int32_t  field0 ) {
    return ( struct Maybe_272 ) { .tag = Maybe_272_Just_t, .stuff = { .Maybe_272_Just_s = { .field0 = field0 } } };
};

static  int32_t   op_dash_add274 (    int32_t  l207 ,    int32_t  r209 ) {
    return ( (  l207 ) + (  r209 ) );
}

static  struct Maybe_272   next273 (    struct FromIter_266 *  dref905 ) {
    int32_t  v907 = ( ( (* dref905 ) ) .f_from );
    (* dref905 ) .f_from = (  op_dash_add274 ( ( ( (* dref905 ) ) .f_from ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( ( Maybe_272_Just ) ( (  v907 ) ) );
}

static  struct Maybe_269   next270 (    struct Zip_264 *  self914 ) {
    struct Zip_264  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_182  dref916 = ( (  next271 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_182_None_t ) {
            return ( (struct Maybe_269) { .tag = Maybe_269_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_182_Just_t ) {
                struct Maybe_272  dref918 = ( (  next273 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_272_None_t ) {
                    return ( (struct Maybe_269) { .tag = Maybe_269_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_272_Just_t ) {
                        ( (  next271 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next273 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_269_Just ) ( ( ( Tuple2_248_Tuple2 ) ( ( dref916 .stuff .Maybe_182_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_272_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each263 (    struct Zip_264  iterable1074 ,   struct envunion247  fun1076 ) {
    struct Zip_264  temp267 = ( (  into_dash_iter268 ) ( (  iterable1074 ) ) );
    struct Zip_264 *  it1077 = ( &temp267 );
    while ( ( true ) ) {
        struct Maybe_269  dref1078 = ( (  next270 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_269_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_269_Just_t ) {
                struct envunion247  temp275 = (  fun1076 );
                ( temp275.fun ( &temp275.env ,  ( dref1078 .stuff .Maybe_269_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct SliceIter_265   into_dash_iter277 (    struct Slice_10  self1822 ) {
    return ( (struct SliceIter_265) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_266   into_dash_iter278 (    struct FromIter_266  it903 ) {
    return (  it903 );
}

static  struct Zip_264   zip276 (    struct Slice_10  left922 ,    struct FromIter_266  right924 ) {
    struct SliceIter_265  left_dash_it925 = ( (  into_dash_iter277 ) ( (  left922 ) ) );
    struct FromIter_266  right_dash_it926 = ( (  into_dash_iter278 ) ( (  right924 ) ) );
    return ( (struct Zip_264) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct FromIter_266   from279 (    int32_t  f900 ) {
    return ( (struct FromIter_266) { .f_from = (  f900 ) } );
}

static  void *   cast_dash_ptr281 (    struct List_11 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free280 (    enum CAllocator_9  dref1959 ,    struct Slice_10  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr281 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   grow_dash_if_dash_full238 (   struct env1* env ,    struct List_8 *  list2041 ) {
    if ( (  eq239 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate240 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq239 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_10  new_dash_slice2042 = ( (  allocate240 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul245 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env246 envinst246 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion247  fun2046 = ( (struct envunion247){ .fun = (  enum Unit_7  (*) (  struct env246*  ,    struct Tuple2_248  ) )lam249 , .env =  envinst246 } );
            ( (  for_dash_each263 ) ( ( (  zip276 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from279 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free280 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add236 (   struct env5* env ,    struct List_8 *  list2049 ,    struct List_11  elem2051 ) {
    struct envunion6  temp237 = ( (struct envunion6){ .fun = (  enum Unit_7  (*) (  struct env1*  ,    struct List_8 *  ) )grow_dash_if_dash_full238 , .env =  env->envinst1 } );
    ( temp237.fun ( &temp237.env ,  (  list2049 ) ) );
    ( (  set250 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add232 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam234 (   struct env177* env ,    struct List_11  x2102 ) {
    struct envunion39  temp235 = ( (struct envunion39){ .fun = (  enum Unit_7  (*) (  struct env5*  ,    struct List_8 *  ,    struct List_11  ) )add236 , .env =  env->envinst5 } );
    return ( temp235.fun ( &temp235.env ,  ( env->list2098 ) ,  (  x2102 ) ) );
}

static  enum Unit_7   add_dash_all175 (   struct env38* env ,    struct List_8 *  list2098 ,    struct Array_44  it2100 ) {
    struct env177 envinst177 = {
        .list2098 =  list2098 ,
        .envinst5 = env->envinst5 ,
    };
    ( (  for_dash_each176 ) ( (  it2100 ) ,  ( (struct envunion178){ .fun = (  enum Unit_7  (*) (  struct env177*  ,    struct List_11  ) )lam234 , .env =  envinst177 } ) ) );
    return ( Unit_7_Unit );
}

static  struct List_8   from_dash_iter165 (   struct env42* env ,    struct Array_44  iter2139 ,    enum CAllocator_9  al2141 ) {
    struct List_8  temp166 = ( (  mk167 ) ( (  al2141 ) ) );
    struct List_8 *  list2142 = ( &temp166 );
    struct envunion43  temp174 = ( (struct envunion43){ .fun = (  enum Unit_7  (*) (  struct env38*  ,    struct List_8 *  ,    struct Array_44  ) )add_dash_all175 , .env =  env->envinst38 } );
    ( temp174.fun ( &temp174.env ,  (  list2142 ) ,  (  iter2139 ) ) );
    return ( * (  list2142 ) );
}

static  struct Array_44   from_dash_listlike282 (    struct Array_44  self330 ) {
    return (  self330 );
}

static  void *   cast_dash_ptr288 (    uint8_t * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of289 (    uint8_t *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint8_t *   zeroed286 (  ) {
    uint8_t *  temp287;
    uint8_t *  x570 = (  temp287 );
    ( ( memset ) ( ( (  cast_dash_ptr288 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of289 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   null_dash_ptr285 (  ) {
    return ( (  zeroed286 ) ( ) );
}

static  struct Slice_12   empty284 (  ) {
    return ( (struct Slice_12) { .f_ptr = ( (  null_dash_ptr285 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_11   mk283 (    enum CAllocator_9  al2031 ) {
    struct Slice_12  elements2032 = ( (  empty284 ) ( ) );
    return ( (struct List_11) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr296 (    struct Changeset_26 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of297 (    struct Changeset_26 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Changeset_26 *   zeroed294 (  ) {
    struct Changeset_26 *  temp295;
    struct Changeset_26 *  x570 = (  temp295 );
    ( ( memset ) ( ( (  cast_dash_ptr296 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of297 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Changeset_26 *   null_dash_ptr293 (  ) {
    return ( (  zeroed294 ) ( ) );
}

static  struct Slice_25   empty292 (  ) {
    return ( (struct Slice_25) { .f_ptr = ( (  null_dash_ptr293 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_24   mk291 (    enum CAllocator_9  al2031 ) {
    struct Slice_25  elements2032 = ( (  empty292 ) ( ) );
    return ( (struct List_24) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_89   mk_dash_actions290 (    enum CAllocator_9  al3613 ) {
    return ( (struct Actions_89) { .f_list = ( (  mk291 ) ( (  al3613 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( ChangesetInputType_90_NoChangeset ) } );
}

static  struct TextBuf_88   mk163 (   struct env79* env ,    enum CAllocator_9  al3624 ,    struct Pos_20  cursor_dash_pos3626 ) {
    struct envunion80  temp164 = ( (struct envunion80){ .fun = (  struct List_8  (*) (  struct env42*  ,    struct Array_44  ,    enum CAllocator_9  ) )from_dash_iter165 , .env =  env->envinst42 } );
    return ( (struct TextBuf_88) { .f_al = (  al3624 ) , .f_buf = ( temp164.fun ( &temp164.env ,  ( (  from_dash_listlike282 ) ( ( (struct Array_44) { ._arr = { ( (  mk283 ) ( (  al3624 ) ) ) } } ) ) ) ,  (  al3624 ) ) ) , .f_actions = ( (  mk_dash_actions290 ) ( (  al3624 ) ) ) } );
}

static  struct Pos_20   mk298 (    int32_t  line3579 ,    int32_t  bi3581 ) {
    return ( (struct Pos_20) { .f_line = (  line3579 ) , .f_bi = (  bi3581 ) } );
}

struct Slice_299 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  const char* *   offset_dash_ptr301 (    const char* *  x338 ,    int64_t  count340 ) {
    const char*  temp302;
    return ( (const char* * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul230 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp302 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral303 (    int64_t  x46 ) {
    return (  x46 );
}

static  size_t   op_dash_sub304 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) - (  r277 ) );
}

static  struct Slice_299   get300 (  ) {
    return ( (struct Slice_299) { .f_ptr = ( (  offset_dash_ptr301 ) ( ( _global_argv ) ,  (  from_dash_integral303 ( 1 ) ) ) ) , .f_count = (  op_dash_sub304 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

struct Maybe_308 {
    enum {
        Maybe_308_None_t,
        Maybe_308_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_308_Just_s;
    } stuff;
};

static struct Maybe_308 Maybe_308_Just (  const char*  field0 ) {
    return ( struct Maybe_308 ) { .tag = Maybe_308_Just_t, .stuff = { .Maybe_308_Just_s = { .field0 = field0 } } };
};

static  const char*   undefined309 (  ) {
    const char*  temp310;
    return (  temp310 );
}

static  const char*   or_dash_fail307 (    struct Maybe_308  x1725 ,    struct StrConcat_253  errmsg1727 ) {
    struct Maybe_308  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_308_None_t ) {
        ( (  panic252 ) ( (  errmsg1727 ) ) );
        return ( (  undefined309 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_308_Just_t ) {
            return ( dref1728 .stuff .Maybe_308_Just_s .field0 );
        }
    }
}

static  struct Maybe_308   try_dash_get311 (    struct Slice_299  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp184 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
    const char* *  elem_dash_ptr1766 = ( (  offset_dash_ptr301 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_308_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  const char*   get306 (    struct Slice_299  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail307 ) ( ( (  try_dash_get311 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get305 (    struct Slice_299  self1867 ,    size_t  idx1869 ) {
    return ( (  get306 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

struct envunion313 {
    enum Unit_7  (*fun) (  struct env85*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  );
    struct env85 env;
};

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_185   cmp317 (    int32_t  l159 ,    int32_t  r161 ) {
    return ( builtin_int32_tcmp( (  l159 ) , (  r161 ) ) );
}

static  enum Ordering_185   cmp316 (    struct Pos_20  l3572 ,    struct Pos_20  r3574 ) {
    enum Ordering_185  dref3575 = ( (  cmp317 ) ( ( (  l3572 ) .f_line ) ,  ( (  r3574 ) .f_line ) ) );
    switch (  dref3575 ) {
        case Ordering_185_EQ : {
            return ( (  cmp317 ) ( ( (  l3572 ) .f_bi ) ,  ( (  r3574 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_185  els3576 =  dref3575;
            return (  els3576 );
            break;
        }
    }
}

static  struct Pos_20   min315 (    struct Pos_20  l1236 ,    struct Pos_20  r1238 ) {
    if ( (  cmp316 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Pos_20   max318 (    struct Pos_20  l1315 ,    struct Pos_20  r1317 ) {
    if ( (  cmp316 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  bool   eq320 (    int32_t  l106 ,    int32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq319 (    struct Pos_20  l3567 ,    struct Pos_20  r3569 ) {
    return ( (  eq320 ( ( (  l3567 ) .f_line ) , ( (  r3569 ) .f_line ) ) ) && (  eq320 ( ( (  l3567 ) .f_bi ) , ( (  r3569 ) .f_bi ) ) ) );
}

static  size_t   size321 (    struct List_8 *  l2133 ) {
    return ( ( * (  l2133 ) ) .f_count );
}

static  struct List_11 *   get_dash_ptr326 (    struct List_8 *  list2001 ,    size_t  i2003 ) {
    if ( ( (  cmp184 ( (  i2003 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i2003 ) , ( ( * (  list2001 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2003 ) ) ) ,  ( (  from_dash_string220 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2001 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr251 ) ( ( ( * (  list2001 ) ) .f_elements ) ,  (  i2003 ) ) );
}

static  struct List_11   get325 (    struct List_8 *  list2011 ,    size_t  i2013 ) {
    return ( * ( (  get_dash_ptr326 ) ( (  list2011 ) ,  (  i2013 ) ) ) );
}

static  uint8_t *   offset_dash_ptr329 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp330;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul230 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp330 ) ) ) ) ) ) ) ) );
}

static  size_t   min331 (    size_t  l1236 ,    size_t  r1238 ) {
    if ( (  cmp184 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Slice_12   subslice328 (    struct Slice_12  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    uint8_t *  begin_dash_ptr1787 = ( (  offset_dash_ptr329 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp184 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp184 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_12) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub304 ( ( (  min331 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_12) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct Slice_12   from327 (    struct Slice_12  slice1791 ,    size_t  from1793 ) {
    return ( (  subslice328 ) ( (  slice1791 ) ,  (  from1793 ) ,  ( (  slice1791 ) .f_count ) ) );
}

static  struct Slice_12   to_dash_slice332 (    struct List_11  l2126 ) {
    uint8_t *  ptr2127 = ( ( (  l2126 ) .f_elements ) .f_ptr );
    return ( (struct Slice_12) { .f_ptr = (  ptr2127 ) , .f_count = ( (  l2126 ) .f_count ) } );
}

static  enum Unit_7   set333 (    struct List_8 *  list2021 ,    size_t  i2023 ,    struct List_11  elem2025 ) {
    if ( ( (  cmp184 ( (  i2023 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i2023 ) , ( ( * (  list2021 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2023 ) ) ) ,  ( (  from_dash_string220 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2021 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set250 ) ( ( ( * (  list2021 ) ) .f_elements ) ,  (  i2023 ) ,  (  elem2025 ) ) );
    return ( Unit_7_Unit );
}

struct env340 {
    struct List_11 *  list2098;
    struct env13 envinst13;
};

struct envunion341 {
    enum Unit_7  (*fun) (  struct env340*  ,    uint8_t  );
    struct env340 env;
};

struct SliceIter_342 {
    struct Slice_12  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_342   into_dash_iter344 (    struct Slice_12  self1822 ) {
    return ( (struct SliceIter_342) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_345 {
    enum {
        Maybe_345_None_t,
        Maybe_345_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_345_Just_s;
    } stuff;
};

static struct Maybe_345 Maybe_345_Just (  uint8_t  field0 ) {
    return ( struct Maybe_345 ) { .tag = Maybe_345_Just_t, .stuff = { .Maybe_345_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_345   next346 (    struct SliceIter_342 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp184 ( (  op_dash_add232 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_345) { .tag = Maybe_345_None_t } );
    }
    uint8_t  elem1830 = ( * ( (  offset_dash_ptr329 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add232 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_345_Just ) ( (  elem1830 ) ) );
}

static  enum Unit_7   for_dash_each339 (    struct Slice_12  iterable1074 ,   struct envunion341  fun1076 ) {
    struct SliceIter_342  temp343 = ( (  into_dash_iter344 ) ( (  iterable1074 ) ) );
    struct SliceIter_342 *  it1077 = ( &temp343 );
    while ( ( true ) ) {
        struct Maybe_345  dref1078 = ( (  next346 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_345_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_345_Just_t ) {
                struct envunion341  temp347 = (  fun1076 );
                ( temp347.fun ( &temp347.env ,  ( dref1078 .stuff .Maybe_345_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

struct TypeSize_355 {
    size_t  f_size;
};

static  struct TypeSize_355   get_dash_typesize354 (  ) {
    uint8_t  temp356;
    return ( (struct TypeSize_355) { .f_size = ( sizeof( ( (  temp356 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr357 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_12   allocate353 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize354 ) ( ) ) ) .f_size );
    uint8_t *  ptr1957 = ( (  cast_dash_ptr357 ) ( ( ( malloc ) ( (  op_dash_mul245 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_12) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env358 {
    struct Slice_12  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_360 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_360 Tuple2_360_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_360 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion359 {
    enum Unit_7  (*fun) (  struct env358*  ,    struct Tuple2_360  );
    struct env358 env;
};

static  uint8_t *   get_dash_ptr363 (    struct Slice_12  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp184 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1760 = ( (  offset_dash_ptr329 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set362 (    struct Slice_12  slice1774 ,    size_t  i1776 ,    uint8_t  x1778 ) {
    uint8_t *  ep1779 = ( (  get_dash_ptr363 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam361 (   struct env358* env ,    struct Tuple2_360  dref2043 ) {
    return ( (  set362 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size262 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct Zip_365 {
    struct SliceIter_342  f_left_dash_it;
    struct FromIter_266  f_right_dash_it;
};

static  struct Zip_365   into_dash_iter367 (    struct Zip_365  self911 ) {
    return (  self911 );
}

struct Maybe_368 {
    enum {
        Maybe_368_None_t,
        Maybe_368_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_360  field0;
        } Maybe_368_Just_s;
    } stuff;
};

static struct Maybe_368 Maybe_368_Just (  struct Tuple2_360  field0 ) {
    return ( struct Maybe_368 ) { .tag = Maybe_368_Just_t, .stuff = { .Maybe_368_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_368   next369 (    struct Zip_365 *  self914 ) {
    struct Zip_365  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_345  dref916 = ( (  next346 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_345_None_t ) {
            return ( (struct Maybe_368) { .tag = Maybe_368_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_345_Just_t ) {
                struct Maybe_272  dref918 = ( (  next273 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_272_None_t ) {
                    return ( (struct Maybe_368) { .tag = Maybe_368_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_272_Just_t ) {
                        ( (  next346 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next273 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_368_Just ) ( ( ( Tuple2_360_Tuple2 ) ( ( dref916 .stuff .Maybe_345_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_272_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each364 (    struct Zip_365  iterable1074 ,   struct envunion359  fun1076 ) {
    struct Zip_365  temp366 = ( (  into_dash_iter367 ) ( (  iterable1074 ) ) );
    struct Zip_365 *  it1077 = ( &temp366 );
    while ( ( true ) ) {
        struct Maybe_368  dref1078 = ( (  next369 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_368_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_368_Just_t ) {
                struct envunion359  temp370 = (  fun1076 );
                ( temp370.fun ( &temp370.env ,  ( dref1078 .stuff .Maybe_368_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_365   zip371 (    struct Slice_12  left922 ,    struct FromIter_266  right924 ) {
    struct SliceIter_342  left_dash_it925 = ( (  into_dash_iter344 ) ( (  left922 ) ) );
    struct FromIter_266  right_dash_it926 = ( (  into_dash_iter278 ) ( (  right924 ) ) );
    return ( (struct Zip_365) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr373 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free372 (    enum CAllocator_9  dref1959 ,    struct Slice_12  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr373 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   grow_dash_if_dash_full352 (   struct env2* env ,    struct List_11 *  list2041 ) {
    if ( (  eq239 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate353 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq239 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_12  new_dash_slice2042 = ( (  allocate353 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul245 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env358 envinst358 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion359  fun2046 = ( (struct envunion359){ .fun = (  enum Unit_7  (*) (  struct env358*  ,    struct Tuple2_360  ) )lam361 , .env =  envinst358 } );
            ( (  for_dash_each364 ) ( ( (  zip371 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from279 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free372 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add350 (   struct env13* env ,    struct List_11 *  list2049 ,    uint8_t  elem2051 ) {
    struct envunion14  temp351 = ( (struct envunion14){ .fun = (  enum Unit_7  (*) (  struct env2*  ,    struct List_11 *  ) )grow_dash_if_dash_full352 , .env =  env->envinst2 } );
    ( temp351.fun ( &temp351.env ,  (  list2049 ) ) );
    ( (  set362 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add232 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam348 (   struct env340* env ,    uint8_t  x2102 ) {
    struct envunion41  temp349 = ( (struct envunion41){ .fun = (  enum Unit_7  (*) (  struct env13*  ,    struct List_11 *  ,    uint8_t  ) )add350 , .env =  env->envinst13 } );
    return ( temp349.fun ( &temp349.env ,  ( env->list2098 ) ,  (  x2102 ) ) );
}

static  enum Unit_7   add_dash_all338 (   struct env40* env ,    struct List_11 *  list2098 ,    struct Slice_12  it2100 ) {
    struct env340 envinst340 = {
        .list2098 =  list2098 ,
        .envinst13 = env->envinst13 ,
    };
    ( (  for_dash_each339 ) ( (  it2100 ) ,  ( (struct envunion341){ .fun = (  enum Unit_7  (*) (  struct env340*  ,    uint8_t  ) )lam348 , .env =  envinst340 } ) ) );
    return ( Unit_7_Unit );
}

static  struct List_11   from_dash_iter335 (   struct env45* env ,    struct Slice_12  iter2139 ,    enum CAllocator_9  al2141 ) {
    struct List_11  temp336 = ( (  mk283 ) ( (  al2141 ) ) );
    struct List_11 *  list2142 = ( &temp336 );
    struct envunion46  temp337 = ( (struct envunion46){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all338 , .env =  env->envinst40 } );
    ( temp337.fun ( &temp337.env ,  (  list2142 ) ,  (  iter2139 ) ) );
    return ( * (  list2142 ) );
}

static  struct StrView_21   or_dash_else375 (    struct Maybe_140  self1732 ,    struct StrView_21  alt1734 ) {
    struct Maybe_140  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_140_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_140_Just_t ) {
            return ( dref1735 .stuff .Maybe_140_Just_s .field0 );
        }
    }
}

struct LineIter_377 {
    struct StrView_21  f_og;
    size_t  f_last;
};

static  uint8_t   undefined381 (  ) {
    uint8_t  temp382;
    return (  temp382 );
}

static  uint8_t   or_dash_fail380 (    struct Maybe_345  x1725 ,    struct StrConcat_253  errmsg1727 ) {
    struct Maybe_345  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_345_None_t ) {
        ( (  panic252 ) ( (  errmsg1727 ) ) );
        return ( (  undefined381 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_345_Just_t ) {
            return ( dref1728 .stuff .Maybe_345_Just_s .field0 );
        }
    }
}

static  struct Maybe_345   try_dash_get383 (    struct Slice_12  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp184 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_345) { .tag = Maybe_345_None_t } );
    }
    uint8_t *  elem_dash_ptr1766 = ( (  offset_dash_ptr329 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_345_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  uint8_t   get379 (    struct Slice_12  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail380 ) ( ( (  try_dash_get383 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   char_dash_u8384 (    struct Char_57  c718 ) {
    struct CharDestructured_205  dref719 = ( (  destructure207 ) ( (  c718 ) ) );
    if ( dref719.tag == CharDestructured_205_Ref_t ) {
        return ( * ( ( dref719 .stuff .CharDestructured_205_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref719.tag == CharDestructured_205_Scalar_t ) {
            return ( (  u32_dash_u8218 ) ( ( ( dref719 .stuff .CharDestructured_205_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct StrView_21   byte_dash_substr385 (    struct StrView_21  s2183 ,    size_t  from2185 ,    size_t  to2187 ) {
    return ( (struct StrView_21) { .f_contents = ( (  subslice328 ) ( ( (  s2183 ) .f_contents ) ,  (  from2185 ) ,  (  to2187 ) ) ) } );
}

static  struct Maybe_140   next378 (    struct LineIter_377 *  self2404 ) {
    if ( (  cmp184 ( ( ( * (  self2404 ) ) .f_last ) , ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_140) { .tag = Maybe_140_None_t } );
    }
    size_t  i2405 = ( ( * (  self2404 ) ) .f_last );
    while ( ( (  cmp184 ( (  i2405 ) , ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq208 ( ( (  get379 ) ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) ,  (  i2405 ) ) ) , ( (  char_dash_u8384 ) ( ( (  from_dash_charlike221 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2405 = (  op_dash_add232 ( (  i2405 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_21  line2406 = ( (  byte_dash_substr385 ) ( ( ( * (  self2404 ) ) .f_og ) ,  ( ( * (  self2404 ) ) .f_last ) ,  (  i2405 ) ) );
    if ( (  cmp184 ( (  i2405 ) , ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2405 = (  op_dash_add232 ( (  i2405 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2404 ) .f_last = (  i2405 );
    return ( ( Maybe_140_Just ) ( (  line2406 ) ) );
}

static  struct LineIter_377   into_dash_iter387 (    struct LineIter_377  self2401 ) {
    return (  self2401 );
}

static  struct Maybe_140   head376 (    struct LineIter_377  it1142 ) {
    struct LineIter_377  temp386 = ( (  into_dash_iter387 ) ( (  it1142 ) ) );
    return ( (  next378 ) ( ( &temp386 ) ) );
}

static  struct LineIter_377   lines388 (    struct StrView_21  s2398 ) {
    return ( (struct LineIter_377) { .f_og = (  s2398 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env393 {
    ;
    struct Char_57  c2222;
};

struct envunion394 {
    bool  (*fun) (  struct env393*  ,    struct Char_57  );
    struct env393 env;
};

struct SplitIter_392 {
    struct StrView_21  f_og;
    size_t  f_last;
    struct envunion394  f_fun;
};

struct Drop_391 {
    struct SplitIter_392  field0;
    size_t  field1;
};

static struct Drop_391 Drop_391_Drop (  struct SplitIter_392  field0 ,  size_t  field1 ) {
    return ( struct Drop_391 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_390 {
    struct Drop_391  f_left_dash_it;
    struct FromIter_266  f_right_dash_it;
};

static  struct Zip_390   into_dash_iter395 (    struct Zip_390  self911 ) {
    return (  self911 );
}

static  struct Drop_391   into_dash_iter397 (    struct Drop_391  self845 ) {
    return (  self845 );
}

static  struct Zip_390   zip396 (    struct Drop_391  left922 ,    struct FromIter_266  right924 ) {
    struct Drop_391  left_dash_it925 = ( (  into_dash_iter397 ) ( (  left922 ) ) );
    struct FromIter_266  right_dash_it926 = ( (  into_dash_iter278 ) ( (  right924 ) ) );
    return ( (struct Zip_390) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct SplitIter_392   into_dash_iter399 (    struct SplitIter_392  self2227 ) {
    return (  self2227 );
}

static  struct Drop_391   drop398 (    struct SplitIter_392  iterable852 ,    size_t  i854 ) {
    struct SplitIter_392  it855 = ( (  into_dash_iter399 ) ( (  iterable852 ) ) );
    return ( ( Drop_391_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SplitIter_392   split_dash_by_dash_filter401 (    struct StrView_21  s2215 ,   struct envunion394  fun2217 ) {
    return ( (struct SplitIter_392) { .f_og = (  s2215 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2217 ) } );
}

struct Tuple2_404 {
    struct CharDestructured_205  field0;
    struct CharDestructured_205  field1;
};

static struct Tuple2_404 Tuple2_404_Tuple2 (  struct CharDestructured_205  field0 ,  struct CharDestructured_205  field1 ) {
    return ( struct Tuple2_404 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int64_t   op_dash_add405 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) + (  r186 ) );
}

static  bool   eq407 (    uint32_t  l111 ,    uint32_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  bool   eq406 (    struct Scalar_206  l724 ,    struct Scalar_206  r726 ) {
    return (  eq407 ( ( (  l724 ) .f_value ) , ( (  r726 ) .f_value ) ) );
}

static  bool   eq403 (    struct Char_57  l729 ,    struct Char_57  r731 ) {
    if ( ( !  eq239 ( ( (  l729 ) .f_num_dash_bytes ) , ( (  r731 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_404  dref732 = ( ( Tuple2_404_Tuple2 ) ( ( (  destructure207 ) ( (  l729 ) ) ) ,  ( (  destructure207 ) ( (  r731 ) ) ) ) );
    if ( dref732 .field0.tag == CharDestructured_205_Ref_t && dref732 .field1.tag == CharDestructured_205_Ref_t ) {
        int64_t  i735 = (  from_dash_integral303 ( 0 ) );
        while ( (  cmp184 ( ( (size_t ) (  i735 ) ) , ( ( dref732 .field0 .stuff .CharDestructured_205_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq208 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field0 .stuff .CharDestructured_205_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field1 .stuff .CharDestructured_205_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) ) ) ) {
                return ( false );
            }
            i735 = (  op_dash_add405 ( (  i735 ) , (  from_dash_integral303 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref732 .field0.tag == CharDestructured_205_Scalar_t && dref732 .field1.tag == CharDestructured_205_Scalar_t ) {
            return (  eq406 ( ( dref732 .field0 .stuff .CharDestructured_205_Scalar_s .field0 ) , ( dref732 .field1 .stuff .CharDestructured_205_Scalar_s .field0 ) ) );
        }
        else {
            if ( dref732 .field0.tag == CharDestructured_205_Scalar_t && dref732 .field1.tag == CharDestructured_205_Ref_t ) {
                return (  eq208 ( ( (  u32_dash_u8218 ) ( ( ( dref732 .field0 .stuff .CharDestructured_205_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref732 .field1 .stuff .CharDestructured_205_Ref_s .field0 ) .f_ptr ) ) ) );
            }
            else {
                if ( dref732 .field0.tag == CharDestructured_205_Ref_t && dref732 .field1.tag == CharDestructured_205_Scalar_t ) {
                    return (  eq208 ( ( (  u32_dash_u8218 ) ( ( ( dref732 .field1 .stuff .CharDestructured_205_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref732 .field0 .stuff .CharDestructured_205_Ref_s .field0 ) .f_ptr ) ) ) );
                }
            }
        }
    }
}

static  bool   lam402 (   struct env393* env ,    struct Char_57  cc2224 ) {
    return (  eq403 ( (  cc2224 ) , ( env->c2222 ) ) );
}

static  struct SplitIter_392   split_dash_by_dash_each400 (    struct StrView_21  s2220 ,    struct Char_57  c2222 ) {
    struct env393 envinst393 = {
        .c2222 =  c2222 ,
    };
    return ( (  split_dash_by_dash_filter401 ) ( (  s2220 ) ,  ( (struct envunion394){ .fun = (  bool  (*) (  struct env393*  ,    struct Char_57  ) )lam402 , .env =  envinst393 } ) ) );
}

struct Tuple2_410 {
    struct StrView_21  field0;
    int32_t  field1;
};

static struct Tuple2_410 Tuple2_410_Tuple2 (  struct StrView_21  field0 ,  int32_t  field1 ) {
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

static  struct Maybe_140   next413 (    struct SplitIter_392 *  self2230 ) {
    if ( (  cmp184 ( ( ( * (  self2230 ) ) .f_last ) , ( ( ( ( * (  self2230 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_140) { .tag = Maybe_140_None_t } );
    }
    size_t  i2231 = ( ( * (  self2230 ) ) .f_last );
    while ( (  cmp184 ( (  i2231 ) , ( ( ( ( * (  self2230 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2232 = ( (  get_dash_ptr363 ) ( ( ( ( * (  self2230 ) ) .f_og ) .f_contents ) ,  (  i2231 ) ) );
        struct Char_57  c2233 = ( (  scan_dash_from_dash_mem223 ) ( (  ptr2232 ) ) );
        struct envunion394  temp414 = ( ( * (  self2230 ) ) .f_fun );
        if ( ( temp414.fun ( &temp414.env ,  (  c2233 ) ) ) ) {
            break;
        }
        i2231 = (  op_dash_add232 ( (  i2231 ) , ( (  next_dash_char224 ) ( (  ptr2232 ) ) ) ) );
    }
    struct StrView_21  line2234 = ( (  byte_dash_substr385 ) ( ( ( * (  self2230 ) ) .f_og ) ,  ( ( * (  self2230 ) ) .f_last ) ,  (  i2231 ) ) );
    i2231 = (  op_dash_add232 ( (  i2231 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2230 ) .f_last = (  i2231 );
    return ( ( Maybe_140_Just ) ( (  line2234 ) ) );
}

static  struct Maybe_140   next412 (    struct Drop_391 *  dref847 ) {
    while ( (  cmp184 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next413 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub304 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next413 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Maybe_409   next411 (    struct Zip_390 *  self914 ) {
    struct Zip_390  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_140  dref916 = ( (  next412 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_140_None_t ) {
            return ( (struct Maybe_409) { .tag = Maybe_409_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_140_Just_t ) {
                struct Maybe_272  dref918 = ( (  next273 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_272_None_t ) {
                    return ( (struct Maybe_409) { .tag = Maybe_409_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_272_Just_t ) {
                        ( (  next412 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next273 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_409_Just ) ( ( ( Tuple2_410_Tuple2 ) ( ( dref916 .stuff .Maybe_140_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_272_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion417 {
    struct List_11  (*fun) (  struct env45*  ,    struct Slice_12  ,    enum CAllocator_9  );
    struct env45 env;
};

static  enum Unit_7   insert419 (   struct env29* env ,    struct List_8 *  list2054 ,    size_t  i2056 ,    struct List_11  elem2058 ) {
    if ( ( (  cmp184 ( (  i2056 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i2056 ) , ( ( * (  list2054 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2056 ) ) ) ,  ( (  from_dash_string220 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2054 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq239 ( ( ( * (  list2054 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion31  temp420 = ( (struct envunion31){ .fun = (  enum Unit_7  (*) (  struct env5*  ,    struct List_8 *  ,    struct List_11  ) )add236 , .env =  env->envinst5 } );
        ( temp420.fun ( &temp420.env ,  (  list2054 ) ,  (  elem2058 ) ) );
        return ( Unit_7_Unit );
    }
    struct envunion30  temp421 = ( (struct envunion30){ .fun = (  enum Unit_7  (*) (  struct env1*  ,    struct List_8 *  ) )grow_dash_if_dash_full238 , .env =  env->envinst1 } );
    ( temp421.fun ( &temp421.env ,  (  list2054 ) ) );
    size_t  ii2059 = (  op_dash_sub304 ( ( ( * (  list2054 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp184 ( (  ii2059 ) , (  i2056 ) ) != 0 ) ) {
        ( (  set250 ) ( ( ( * (  list2054 ) ) .f_elements ) ,  (  op_dash_add232 ( (  ii2059 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get325 ) ( (  list2054 ) ,  (  ii2059 ) ) ) ) );
        if ( (  eq239 ( (  ii2059 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2059 = (  op_dash_sub304 ( (  ii2059 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set250 ) ( ( ( * (  list2054 ) ) .f_elements ) ,  (  i2056 ) ,  (  elem2058 ) ) );
    (*  list2054 ) .f_count = (  op_dash_add232 ( ( ( * (  list2054 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct envunion423 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

static  enum Unit_7   free424 (    struct List_11 *  list2035 ) {
    ( (  free372 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( ( * (  list2035 ) ) .f_elements ) ) );
    return ( Unit_7_Unit );
}

static  int32_t   add_dash_to_dash_spot324 (   struct env81* env ,    struct TextBuf_88 *  self3658 ,    struct Pos_20  p3660 ,    struct StrView_21  bytes3662 ) {
    enum CAllocator_9  al3663 = ( ( ( * (  self3658 ) ) .f_buf ) .f_al );
    struct List_8 *  buf3664 = ( & ( ( * (  self3658 ) ) .f_buf ) );
    struct List_11  extracted_dash_line_dash_buf3665 = ( (  get325 ) ( (  buf3664 ) ,  ( (  i32_dash_size262 ) ( ( (  p3660 ) .f_line ) ) ) ) );
    struct Slice_12  remaining3666 = ( (  from327 ) ( ( (  to_dash_slice332 ) ( (  extracted_dash_line_dash_buf3665 ) ) ) ,  ( (  i32_dash_size262 ) ( ( (  p3660 ) .f_bi ) ) ) ) );
    struct envunion82  temp334 = ( (struct envunion82){ .fun = (  struct List_11  (*) (  struct env45*  ,    struct Slice_12  ,    enum CAllocator_9  ) )from_dash_iter335 , .env =  env->envinst45 } );
    ( (  set333 ) ( (  buf3664 ) ,  ( (  i32_dash_size262 ) ( ( (  p3660 ) .f_line ) ) ) ,  ( temp334.fun ( &temp334.env ,  ( (  subslice328 ) ( ( (  to_dash_slice332 ) ( (  extracted_dash_line_dash_buf3665 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size262 ) ( ( (  p3660 ) .f_bi ) ) ) ) ) ,  (  al3663 ) ) ) ) );
    struct List_11 *  last_dash_line3667 = ( (  get_dash_ptr326 ) ( (  buf3664 ) ,  ( (  i32_dash_size262 ) ( ( (  p3660 ) .f_line ) ) ) ) );
    struct envunion84  temp374 = ( (struct envunion84){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all338 , .env =  env->envinst40 } );
    ( temp374.fun ( &temp374.env ,  (  last_dash_line3667 ) ,  ( ( (  or_dash_else375 ) ( ( (  head376 ) ( ( (  lines388 ) ( (  bytes3662 ) ) ) ) ) ,  ( (  from_dash_string220 ) ( ( "" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3668 = (  from_dash_integral48 ( 0 ) );
    struct Zip_390  temp389 =  into_dash_iter395 ( ( (  zip396 ) ( ( (  drop398 ) ( ( (  split_dash_by_dash_each400 ) ( (  bytes3662 ) ,  ( (  from_dash_charlike221 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from279 ) ( (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_409  __cond408 =  next411 (&temp389);
        if (  __cond408 .tag == 0 ) {
            break;
        }
        struct Tuple2_410  dref3669 =  __cond408 .stuff .Maybe_409_Just_s .field0;
        struct envunion417  temp416 = ( (struct envunion417){ .fun = (  struct List_11  (*) (  struct env45*  ,    struct Slice_12  ,    enum CAllocator_9  ) )from_dash_iter335 , .env =  env->envinst45 } );
        struct List_11  temp415 = ( temp416.fun ( &temp416.env ,  ( ( dref3669 .field0 ) .f_contents ) ,  (  al3663 ) ) );
        struct List_11 *  nuline3672 = ( &temp415 );
        size_t  next_dash_line3673 = ( (  i32_dash_size262 ) ( (  op_dash_add274 ( ( (  p3660 ) .f_line ) , ( dref3669 .field1 ) ) ) ) );
        struct envunion83  temp418 = ( (struct envunion83){ .fun = (  enum Unit_7  (*) (  struct env29*  ,    struct List_8 *  ,    size_t  ,    struct List_11  ) )insert419 , .env =  env->envinst29 } );
        ( temp418.fun ( &temp418.env ,  (  buf3664 ) ,  (  next_dash_line3673 ) ,  ( * (  nuline3672 ) ) ) );
        last_dash_line3667 = ( (  get_dash_ptr326 ) ( (  buf3664 ) ,  (  next_dash_line3673 ) ) );
        lines_dash_added3668 = (  op_dash_add274 ( (  lines_dash_added3668 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    struct envunion423  temp422 = ( (struct envunion423){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all338 , .env =  env->envinst40 } );
    ( temp422.fun ( &temp422.env ,  (  last_dash_line3667 ) ,  (  remaining3666 ) ) );
    ( (  free424 ) ( ( & (  extracted_dash_line_dash_buf3665 ) ) ) );
    return (  lines_dash_added3668 );
}

static  size_t   size425 (    struct List_11 *  l2133 ) {
    return ( ( * (  l2133 ) ) .f_count );
}

struct StrConcat_431 {
    struct StrConcat_65  field0;
    struct Char_57  field1;
};

static struct StrConcat_431 StrConcat_431_StrConcat (  struct StrConcat_65  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_431 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_430 {
    struct StrConcat_431  field0;
    size_t  field1;
};

static struct StrConcat_430 StrConcat_430_StrConcat (  struct StrConcat_431  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_430 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_429 {
    struct StrConcat_430  field0;
    struct Char_57  field1;
};

static struct StrConcat_429 StrConcat_429_StrConcat (  struct StrConcat_430  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_429 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_434 {
    struct StrView_21  field0;
    struct StrConcat_429  field1;
};

static struct StrConcat_434 StrConcat_434_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_429  field1 ) {
    return ( struct StrConcat_434 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_433 {
    struct StrConcat_434  field0;
    struct Char_57  field1;
};

static struct StrConcat_433 StrConcat_433_StrConcat (  struct StrConcat_434  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_433 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str438 (    struct StrConcat_431  self1503 ) {
    struct StrConcat_431  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str200 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str203 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str437 (    struct StrConcat_430  self1503 ) {
    struct StrConcat_430  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str438 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str201 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str436 (    struct StrConcat_429  self1503 ) {
    struct StrConcat_429  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str437 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str203 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str435 (    struct StrConcat_434  self1503 ) {
    struct StrConcat_434  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str195 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str436 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str432 (    struct StrConcat_433  self1503 ) {
    struct StrConcat_433  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str435 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str203 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic428 (    struct StrConcat_429  errmsg1712 ) {
    ( (  print_dash_str432 ) ( ( ( StrConcat_433_StrConcat ) ( ( ( StrConcat_434_StrConcat ) ( ( (  from_dash_string220 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct Drop_440 {
    struct Zip_365  field0;
    size_t  field1;
};

static struct Drop_440 Drop_440_Drop (  struct Zip_365  field0 ,  size_t  field1 ) {
    return ( struct Drop_440 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env441 {
    ;
    size_t  num_dash_elems2067;
    ;
    ;
    struct List_11 *  list2062;
};

struct envunion442 {
    enum Unit_7  (*fun) (  struct env441*  ,    struct Tuple2_360  );
    struct env441 env;
};

static  struct Drop_440   into_dash_iter444 (    struct Drop_440  self845 ) {
    return (  self845 );
}

static  struct Maybe_368   next445 (    struct Drop_440 *  dref847 ) {
    while ( (  cmp184 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next369 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub304 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next369 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_7   for_dash_each439 (    struct Drop_440  iterable1074 ,   struct envunion442  fun1076 ) {
    struct Drop_440  temp443 = ( (  into_dash_iter444 ) ( (  iterable1074 ) ) );
    struct Drop_440 *  it1077 = ( &temp443 );
    while ( ( true ) ) {
        struct Maybe_368  dref1078 = ( (  next445 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_368_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_368_Just_t ) {
                struct envunion442  temp446 = (  fun1076 );
                ( temp446.fun ( &temp446.env ,  ( dref1078 .stuff .Maybe_368_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Drop_440   drop447 (    struct Zip_365  iterable852 ,    size_t  i854 ) {
    struct Zip_365  it855 = ( (  into_dash_iter367 ) ( (  iterable852 ) ) );
    return ( ( Drop_440_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SliceIter_342   into_dash_iter449 (    struct List_11  self2028 ) {
    return ( (  into_dash_iter344 ) ( ( (  subslice328 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

static  struct Zip_365   zip448 (    struct List_11  left922 ,    struct FromIter_266  right924 ) {
    struct SliceIter_342  left_dash_it925 = ( (  into_dash_iter449 ) ( (  left922 ) ) );
    struct FromIter_266  right_dash_it926 = ( (  into_dash_iter278 ) ( (  right924 ) ) );
    return ( (struct Zip_365) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   set451 (    struct List_11 *  list2021 ,    size_t  i2023 ,    uint8_t  elem2025 ) {
    if ( ( (  cmp184 ( (  i2023 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i2023 ) , ( ( * (  list2021 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2023 ) ) ) ,  ( (  from_dash_string220 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2021 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set362 ) ( ( ( * (  list2021 ) ) .f_elements ) ,  (  i2023 ) ,  (  elem2025 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam450 (   struct env441* env ,    struct Tuple2_360  dref2068 ) {
    return ( (  set451 ) ( ( env->list2062 ) ,  (  op_dash_sub304 ( ( (  i32_dash_size262 ) ( ( dref2068 .field1 ) ) ) , ( env->num_dash_elems2067 ) ) ) ,  ( dref2068 .field0 ) ) );
}

struct StrConcat_454 {
    struct StrConcat_254  field0;
    struct StrView_21  field1;
};

static struct StrConcat_454 StrConcat_454_StrConcat (  struct StrConcat_254  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_454 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_457 {
    struct StrView_21  field0;
    struct StrConcat_454  field1;
};

static struct StrConcat_457 StrConcat_457_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_454  field1 ) {
    return ( struct StrConcat_457 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_456 {
    struct StrConcat_457  field0;
    struct Char_57  field1;
};

static struct StrConcat_456 StrConcat_456_StrConcat (  struct StrConcat_457  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_456 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str459 (    struct StrConcat_454  self1503 ) {
    struct StrConcat_454  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str260 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str195 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str458 (    struct StrConcat_457  self1503 ) {
    struct StrConcat_457  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str195 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str459 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str455 (    struct StrConcat_456  self1503 ) {
    struct StrConcat_456  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str458 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str203 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic453 (    struct StrConcat_454  errmsg1712 ) {
    ( (  print_dash_str455 ) ( ( ( StrConcat_456_StrConcat ) ( ( ( StrConcat_457_StrConcat ) ( ( (  from_dash_string220 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct env461 {
    ;
    struct Slice_12  dest1853;
    ;
};

struct envunion462 {
    enum Unit_7  (*fun) (  struct env461*  ,    struct Tuple2_360  );
    struct env461 env;
};

static  enum Unit_7   for_dash_each460 (    struct Zip_365  iterable1074 ,   struct envunion462  fun1076 ) {
    struct Zip_365  temp463 = ( (  into_dash_iter367 ) ( (  iterable1074 ) ) );
    struct Zip_365 *  it1077 = ( &temp463 );
    while ( ( true ) ) {
        struct Maybe_368  dref1078 = ( (  next369 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_368_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_368_Just_t ) {
                struct envunion462  temp464 = (  fun1076 );
                ( temp464.fun ( &temp464.env ,  ( dref1078 .stuff .Maybe_368_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam465 (   struct env461* env ,    struct Tuple2_360  dref1854 ) {
    return ( (  set362 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size262 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_7   copy_dash_to452 (    struct Slice_12  src1851 ,    struct Slice_12  dest1853 ) {
    if ( (  cmp184 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic453 ) ( ( ( StrConcat_454_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env461 envinst461 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each460 ) ( ( (  zip371 ) ( (  src1851 ) ,  ( (  from279 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  ( (struct envunion462){ .fun = (  enum Unit_7  (*) (  struct env461*  ,    struct Tuple2_360  ) )lam465 , .env =  envinst461 } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   remove_dash_range427 (   struct env32* env ,    struct List_11 *  list2062 ,    size_t  from2064 ,    size_t  to_dash_excl2066 ) {
    if ( (  cmp184 ( (  to_dash_excl2066 ) , (  from2064 ) ) == 0 ) ) {
        ( (  panic428 ) ( ( ( StrConcat_429_StrConcat ) ( ( ( StrConcat_430_StrConcat ) ( ( ( StrConcat_431_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp184 ( (  from2064 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_string220 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp184 ( (  to_dash_excl2066 ) , ( ( * (  list2062 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_string220 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2067 = (  op_dash_sub304 ( (  to_dash_excl2066 ) , (  from2064 ) ) );
    struct env441 envinst441 = {
        .num_dash_elems2067 =  num_dash_elems2067 ,
        .list2062 =  list2062 ,
    };
    ( (  for_dash_each439 ) ( ( (  drop447 ) ( ( (  zip448 ) ( ( * (  list2062 ) ) ,  ( (  from279 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  op_dash_add232 ( (  from2064 ) , (  num_dash_elems2067 ) ) ) ) ) ,  ( (struct envunion442){ .fun = (  enum Unit_7  (*) (  struct env441*  ,    struct Tuple2_360  ) )lam450 , .env =  envinst441 } ) ) );
    (*  list2062 ) .f_count = (  op_dash_sub304 ( ( ( * (  list2062 ) ) .f_count ) , (  num_dash_elems2067 ) ) );
    size_t  capacity2071 = ( ( ( * (  list2062 ) ) .f_elements ) .f_count );
    if ( (  cmp184 ( (  op_dash_mul245 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  capacity2071 ) ) == 0 ) ) {
        if ( (  eq239 ( ( ( * (  list2062 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free372 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
            (*  list2062 ) .f_elements = ( (  empty284 ) ( ) );
            return ( Unit_7_Unit );
        }
        size_t  new_dash_size2072 = (  op_dash_mul245 ( (  op_dash_add232 ( (  op_dash_div211 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2038 ) ) );
        struct Slice_12  new_dash_slice2073 = ( (  allocate353 ) ( ( ( * (  list2062 ) ) .f_al ) ,  (  new_dash_size2072 ) ) );
        ( (  copy_dash_to452 ) ( ( (  subslice328 ) ( ( ( * (  list2062 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  (  new_dash_slice2073 ) ) );
        ( (  free372 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
        (*  list2062 ) .f_elements = (  new_dash_slice2073 );
    }
    return ( Unit_7_Unit );
}

struct envunion467 {
    int32_t  (*fun) (  struct env81*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct StrView_21  );
    struct env81 env;
};

static  enum Unit_7   trim468 (    struct List_11 *  l2115 ,    size_t  new_dash_count2117 ) {
    (*  l2115 ) .f_count = ( (  min331 ) ( (  new_dash_count2117 ) ,  ( ( * (  l2115 ) ) .f_count ) ) );
    return ( Unit_7_Unit );
}

static  int32_t   min469 (    int32_t  l1236 ,    int32_t  r1238 ) {
    if ( (  cmp317 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

struct envunion471 {
    int32_t  (*fun) (  struct env81*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct StrView_21  );
    struct env81 env;
};

struct Maybe_473 {
    enum {
        Maybe_473_None_t,
        Maybe_473_Just_t,
    } tag;
    union {
        struct {
            struct Slice_12  field0;
        } Maybe_473_Just_s;
    } stuff;
};

static struct Maybe_473 Maybe_473_Just (  struct Slice_12  field0 ) {
    return ( struct Maybe_473 ) { .tag = Maybe_473_Just_t, .stuff = { .Maybe_473_Just_s = { .field0 = field0 } } };
};

static  struct Slice_12   or_dash_else472 (    struct Maybe_473  self1732 ,    struct Slice_12  alt1734 ) {
    struct Maybe_473  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_473_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_473_Just_t ) {
            return ( dref1735 .stuff .Maybe_473_Just_s .field0 );
        }
    }
}

static  struct Maybe_473   fmap_dash_maybe474 (    struct Maybe_182  x1275 ,    struct Slice_12 (*  fun1277 )(    struct List_11  ) ) {
    struct Maybe_182  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_182_None_t ) {
        return ( (struct Maybe_473) { .tag = Maybe_473_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_182_Just_t ) {
            return ( ( Maybe_473_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_182_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_182   try_dash_get475 (    struct List_8 *  list2016 ,    size_t  i2018 ) {
    if ( (  cmp184 ( (  i2018 ) , ( ( * (  list2016 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_182) { .tag = Maybe_182_None_t } );
    }
    return ( ( Maybe_182_Just ) ( ( (  get325 ) ( (  list2016 ) ,  (  i2018 ) ) ) ) );
}

struct StrConcat_480 {
    struct StrView_21  field0;
    struct StrView_21  field1;
};

static struct StrConcat_480 StrConcat_480_StrConcat (  struct StrView_21  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_480 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_479 {
    struct StrConcat_480  field0;
    struct Char_57  field1;
};

static struct StrConcat_479 StrConcat_479_StrConcat (  struct StrConcat_480  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_479 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str481 (    struct StrConcat_480  self1503 ) {
    struct StrConcat_480  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str195 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str195 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str478 (    struct StrConcat_479  self1503 ) {
    struct StrConcat_479  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str481 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str203 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   assert477 (    bool  cond1718 ,    struct StrView_21  msg1720 ) {
    if ( ( ! (  cond1718 ) ) ) {
        ( (  print_dash_str478 ) ( ( ( StrConcat_479_StrConcat ) ( ( ( StrConcat_480_StrConcat ) ( ( (  from_dash_string220 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1720 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    }
    return ( Unit_7_Unit );
}

struct Drop_485 {
    struct Zip_264  field0;
    size_t  field1;
};

static struct Drop_485 Drop_485_Drop (  struct Zip_264  field0 ,  size_t  field1 ) {
    return ( struct Drop_485 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env486 {
    ;
    size_t  num_dash_elems2067;
    ;
    ;
    struct List_8 *  list2062;
};

struct envunion487 {
    enum Unit_7  (*fun) (  struct env486*  ,    struct Tuple2_248  );
    struct env486 env;
};

static  struct Drop_485   into_dash_iter489 (    struct Drop_485  self845 ) {
    return (  self845 );
}

static  struct Maybe_269   next490 (    struct Drop_485 *  dref847 ) {
    while ( (  cmp184 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next270 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub304 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next270 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_7   for_dash_each484 (    struct Drop_485  iterable1074 ,   struct envunion487  fun1076 ) {
    struct Drop_485  temp488 = ( (  into_dash_iter489 ) ( (  iterable1074 ) ) );
    struct Drop_485 *  it1077 = ( &temp488 );
    while ( ( true ) ) {
        struct Maybe_269  dref1078 = ( (  next490 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_269_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_269_Just_t ) {
                struct envunion487  temp491 = (  fun1076 );
                ( temp491.fun ( &temp491.env ,  ( dref1078 .stuff .Maybe_269_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Drop_485   drop492 (    struct Zip_264  iterable852 ,    size_t  i854 ) {
    struct Zip_264  it855 = ( (  into_dash_iter268 ) ( (  iterable852 ) ) );
    return ( ( Drop_485_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct Slice_10   subslice495 (    struct Slice_10  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct List_11 *  begin_dash_ptr1787 = ( (  offset_dash_ptr229 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp184 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp184 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_10) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub304 ( ( (  min331 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_10) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_265   into_dash_iter494 (    struct List_8  self2028 ) {
    return ( (  into_dash_iter277 ) ( ( (  subslice495 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

static  struct Zip_264   zip493 (    struct List_8  left922 ,    struct FromIter_266  right924 ) {
    struct SliceIter_265  left_dash_it925 = ( (  into_dash_iter494 ) ( (  left922 ) ) );
    struct FromIter_266  right_dash_it926 = ( (  into_dash_iter278 ) ( (  right924 ) ) );
    return ( (struct Zip_264) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   lam496 (   struct env486* env ,    struct Tuple2_248  dref2068 ) {
    return ( (  set333 ) ( ( env->list2062 ) ,  (  op_dash_sub304 ( ( (  i32_dash_size262 ) ( ( dref2068 .field1 ) ) ) , ( env->num_dash_elems2067 ) ) ) ,  ( dref2068 .field0 ) ) );
}

struct env499 {
    ;
    struct Slice_10  dest1853;
    ;
};

struct envunion500 {
    enum Unit_7  (*fun) (  struct env499*  ,    struct Tuple2_248  );
    struct env499 env;
};

static  enum Unit_7   for_dash_each498 (    struct Zip_264  iterable1074 ,   struct envunion500  fun1076 ) {
    struct Zip_264  temp501 = ( (  into_dash_iter268 ) ( (  iterable1074 ) ) );
    struct Zip_264 *  it1077 = ( &temp501 );
    while ( ( true ) ) {
        struct Maybe_269  dref1078 = ( (  next270 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_269_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_269_Just_t ) {
                struct envunion500  temp502 = (  fun1076 );
                ( temp502.fun ( &temp502.env ,  ( dref1078 .stuff .Maybe_269_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam503 (   struct env499* env ,    struct Tuple2_248  dref1854 ) {
    return ( (  set250 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size262 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_7   copy_dash_to497 (    struct Slice_10  src1851 ,    struct Slice_10  dest1853 ) {
    if ( (  cmp184 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic453 ) ( ( ( StrConcat_454_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env499 envinst499 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each498 ) ( ( (  zip276 ) ( (  src1851 ) ,  ( (  from279 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  ( (struct envunion500){ .fun = (  enum Unit_7  (*) (  struct env499*  ,    struct Tuple2_248  ) )lam503 , .env =  envinst499 } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   remove_dash_range483 (   struct env33* env ,    struct List_8 *  list2062 ,    size_t  from2064 ,    size_t  to_dash_excl2066 ) {
    if ( (  cmp184 ( (  to_dash_excl2066 ) , (  from2064 ) ) == 0 ) ) {
        ( (  panic428 ) ( ( ( StrConcat_429_StrConcat ) ( ( ( StrConcat_430_StrConcat ) ( ( ( StrConcat_431_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp184 ( (  from2064 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_string220 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp184 ( (  to_dash_excl2066 ) , ( ( * (  list2062 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_string220 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2067 = (  op_dash_sub304 ( (  to_dash_excl2066 ) , (  from2064 ) ) );
    struct env486 envinst486 = {
        .num_dash_elems2067 =  num_dash_elems2067 ,
        .list2062 =  list2062 ,
    };
    ( (  for_dash_each484 ) ( ( (  drop492 ) ( ( (  zip493 ) ( ( * (  list2062 ) ) ,  ( (  from279 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  op_dash_add232 ( (  from2064 ) , (  num_dash_elems2067 ) ) ) ) ) ,  ( (struct envunion487){ .fun = (  enum Unit_7  (*) (  struct env486*  ,    struct Tuple2_248  ) )lam496 , .env =  envinst486 } ) ) );
    (*  list2062 ) .f_count = (  op_dash_sub304 ( ( ( * (  list2062 ) ) .f_count ) , (  num_dash_elems2067 ) ) );
    size_t  capacity2071 = ( ( ( * (  list2062 ) ) .f_elements ) .f_count );
    if ( (  cmp184 ( (  op_dash_mul245 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  capacity2071 ) ) == 0 ) ) {
        if ( (  eq239 ( ( ( * (  list2062 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free280 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
            (*  list2062 ) .f_elements = ( (  empty168 ) ( ) );
            return ( Unit_7_Unit );
        }
        size_t  new_dash_size2072 = (  op_dash_mul245 ( (  op_dash_add232 ( (  op_dash_div211 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2038 ) ) );
        struct Slice_10  new_dash_slice2073 = ( (  allocate240 ) ( ( ( * (  list2062 ) ) .f_al ) ,  (  new_dash_size2072 ) ) );
        ( (  copy_dash_to497 ) ( ( (  subslice495 ) ( ( ( * (  list2062 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  (  new_dash_slice2073 ) ) );
        ( (  free280 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
        (*  list2062 ) .f_elements = (  new_dash_slice2073 );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   change_dash_no_dash_action314 (   struct env85* env ,    struct TextBuf_88 *  self3676 ,    struct Pos_20  from_dash_pos3678 ,    struct Pos_20  to_dash_pos3680 ,    struct StrView_21  bytes3682 ) {
    struct Pos_20  from3683 = ( (  min315 ) ( (  from_dash_pos3678 ) ,  (  to_dash_pos3680 ) ) );
    struct Pos_20  to3684 = ( (  max318 ) ( (  from_dash_pos3678 ) ,  (  to_dash_pos3680 ) ) );
    if ( (  eq319 ( (  to3684 ) , (  from3683 ) ) ) ) {
        enum CAllocator_9  al3685 = ( ( ( * (  self3676 ) ) .f_buf ) .f_al );
        if ( ( (  eq239 ( ( (  size321 ) ( ( & ( ( * (  self3676 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size262 ) ( ( (  from3683 ) .f_line ) ) ) ) ) && (  eq320 ( ( (  from3683 ) .f_bi ) , (  from_dash_integral48 ( 0 ) ) ) ) ) ) {
            struct envunion93  temp322 = ( (struct envunion93){ .fun = (  enum Unit_7  (*) (  struct env5*  ,    struct List_8 *  ,    struct List_11  ) )add236 , .env =  env->envinst5 } );
            ( temp322.fun ( &temp322.env ,  ( & ( ( * (  self3676 ) ) .f_buf ) ) ,  ( (  mk283 ) ( (  al3685 ) ) ) ) );
        }
        struct envunion87  temp323 = ( (struct envunion87){ .fun = (  int32_t  (*) (  struct env81*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct StrView_21  ) )add_dash_to_dash_spot324 , .env =  env->envinst81 } );
        ( temp323.fun ( &temp323.env ,  (  self3676 ) ,  (  from3683 ) ,  (  bytes3682 ) ) );
    } else {
        struct List_8 *  lines_dash_buf3686 = ( & ( ( * (  self3676 ) ) .f_buf ) );
        struct List_11 *  first_dash_line3687 = ( (  get_dash_ptr326 ) ( (  lines_dash_buf3686 ) ,  ( (  i32_dash_size262 ) ( ( (  from3683 ) .f_line ) ) ) ) );
        if ( ( (  eq320 ( ( (  from3683 ) .f_line ) , ( (  to3684 ) .f_line ) ) ) && (  cmp317 ( ( (  to3684 ) .f_bi ) , (  op_dash_add274 ( ( (  size_dash_i32196 ) ( ( (  size425 ) ( (  first_dash_line3687 ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion91  temp426 = ( (struct envunion91){ .fun = (  enum Unit_7  (*) (  struct env32*  ,    struct List_11 *  ,    size_t  ,    size_t  ) )remove_dash_range427 , .env =  env->envinst32 } );
            ( temp426.fun ( &temp426.env ,  (  first_dash_line3687 ) ,  ( (  i32_dash_size262 ) ( ( (  from3683 ) .f_bi ) ) ) ,  ( (  i32_dash_size262 ) ( ( (  to3684 ) .f_bi ) ) ) ) );
            struct envunion467  temp466 = ( (struct envunion467){ .fun = (  int32_t  (*) (  struct env81*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct StrView_21  ) )add_dash_to_dash_spot324 , .env =  env->envinst81 } );
            ( temp466.fun ( &temp466.env ,  (  self3676 ) ,  (  from3683 ) ,  (  bytes3682 ) ) );
        } else {
            ( (  trim468 ) ( (  first_dash_line3687 ) ,  ( (  i32_dash_size262 ) ( ( (  from3683 ) .f_bi ) ) ) ) );
            struct List_11 *  last_dash_line3688 = ( (  get_dash_ptr326 ) ( (  lines_dash_buf3686 ) ,  ( (  i32_dash_size262 ) ( ( (  to3684 ) .f_line ) ) ) ) );
            to3684 .f_bi = ( (  min469 ) ( ( (  to3684 ) .f_bi ) ,  (  op_dash_add274 ( ( (  size_dash_i32196 ) ( ( (  size425 ) ( (  last_dash_line3688 ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
            if ( (  eq320 ( ( (  to3684 ) .f_bi ) , (  op_dash_add274 ( ( (  size_dash_i32196 ) ( ( (  size425 ) ( (  last_dash_line3688 ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ) {
                to3684 .f_line = (  op_dash_add274 ( ( (  to3684 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) );
                to3684 .f_bi = (  from_dash_integral48 ( 0 ) );
            }
            struct envunion471  temp470 = ( (struct envunion471){ .fun = (  int32_t  (*) (  struct env81*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct StrView_21  ) )add_dash_to_dash_spot324 , .env =  env->envinst81 } );
            int32_t  lines_dash_added3689 = ( temp470.fun ( &temp470.env ,  (  self3676 ) ,  (  from3683 ) ,  (  bytes3682 ) ) );
            to3684 .f_line = (  op_dash_add274 ( ( (  to3684 ) .f_line ) , (  lines_dash_added3689 ) ) );
            from3683 .f_line = (  op_dash_add274 ( ( (  from3683 ) .f_line ) , (  lines_dash_added3689 ) ) );
            struct Slice_12  last_dash_line3690 = ( (  or_dash_else472 ) ( ( (  fmap_dash_maybe474 ) ( ( (  try_dash_get475 ) ( (  lines_dash_buf3686 ) ,  ( (  i32_dash_size262 ) ( ( (  to3684 ) .f_line ) ) ) ) ) ,  (  to_dash_slice332 ) ) ) ,  ( (  empty284 ) ( ) ) ) );
            struct envunion86  temp476 = ( (struct envunion86){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all338 , .env =  env->envinst40 } );
            ( temp476.fun ( &temp476.env ,  (  first_dash_line3687 ) ,  ( (  from327 ) ( (  last_dash_line3690 ) ,  ( (  i32_dash_size262 ) ( ( (  to3684 ) .f_bi ) ) ) ) ) ) );
            ( (  assert477 ) ( (  cmp317 ( ( (  to3684 ) .f_line ) , ( (  from3683 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string220 ) ( ( "there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion92  temp482 = ( (struct envunion92){ .fun = (  enum Unit_7  (*) (  struct env33*  ,    struct List_8 *  ,    size_t  ,    size_t  ) )remove_dash_range483 , .env =  env->envinst33 } );
            ( temp482.fun ( &temp482.env ,  ( & ( ( * (  self3676 ) ) .f_buf ) ) ,  ( (  i32_dash_size262 ) ( (  op_dash_add274 ( ( (  from3683 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  op_dash_add232 ( ( (  i32_dash_size262 ) ( ( (  to3684 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_7_Unit );
}

struct StrConcat_507 {
    struct StrView_21  field0;
    const char*  field1;
};

static struct StrConcat_507 StrConcat_507_StrConcat (  struct StrView_21  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_507 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_506 {
    struct StrConcat_507  field0;
    struct Char_57  field1;
};

static struct StrConcat_506 StrConcat_506_StrConcat (  struct StrConcat_507  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_506 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_511 {
    struct StrView_21  field0;
    struct StrConcat_506  field1;
};

static struct StrConcat_511 StrConcat_511_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_506  field1 ) {
    return ( struct StrConcat_511 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_510 {
    struct StrConcat_511  field0;
    struct Char_57  field1;
};

static struct StrConcat_510 StrConcat_510_StrConcat (  struct StrConcat_511  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_510 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str515 (    const char*  self1398 ) {
    ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%s" ) ,  ( 2 ) ) ) ,  (  self1398 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str514 (    struct StrConcat_507  self1503 ) {
    struct StrConcat_507  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str195 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str515 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str513 (    struct StrConcat_506  self1503 ) {
    struct StrConcat_506  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str514 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str203 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str512 (    struct StrConcat_511  self1503 ) {
    struct StrConcat_511  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str195 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str513 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str509 (    struct StrConcat_510  self1503 ) {
    struct StrConcat_510  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str512 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str203 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic508 (    struct StrConcat_506  errmsg1712 ) {
    ( (  print_dash_str509 ) ( ( ( StrConcat_510_StrConcat ) ( ( ( StrConcat_511_StrConcat ) ( ( (  from_dash_string220 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct StrView_21   undefined516 (  ) {
    struct StrView_21  temp517;
    return (  temp517 );
}

static  struct StrView_21   or_dash_fail505 (    struct Maybe_140  x1725 ,    struct StrConcat_506  errmsg1727 ) {
    struct Maybe_140  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_140_None_t ) {
        ( (  panic508 ) ( (  errmsg1727 ) ) );
        return ( (  undefined516 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_140_Just_t ) {
            return ( dref1728 .stuff .Maybe_140_Just_s .field0 );
        }
    }
}

static  const char*   from_dash_charlike519 (    uint8_t *  ptr73 ,    size_t  dref74 ) {
    return ( ( (const char* ) (  ptr73 ) ) );
}

static  void *   cast_dash_ptr524 (    FILE * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of525 (    FILE *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  FILE *   zeroed522 (  ) {
    FILE *  temp523;
    FILE *  x570 = (  temp523 );
    ( ( memset ) ( ( (  cast_dash_ptr524 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of525 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  FILE *   null_dash_ptr521 (  ) {
    return ( (  zeroed522 ) ( ) );
}

static  bool   is_dash_ptr_dash_null520 (    FILE *  p580 ) {
    return ( (  p580 ) == ( (  null_dash_ptr521 ) ( ) ) );
}

static  int32_t   seek_dash_end526 (  ) {
    return (  from_dash_integral48 ( 2 ) );
}

static  int32_t   seek_dash_set527 (  ) {
    return (  from_dash_integral48 ( 0 ) );
}

static  struct Char_57   nullchar528 (  ) {
    return ( (  from_dash_charlike221 ) ( ( "\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_140   try_dash_read_dash_contents518 (    const char*  filename2933 ,    enum CAllocator_9  al2935 ) {
    FILE *  file2936 = ( ( fopen ) ( (  filename2933 ) ,  ( (  from_dash_charlike519 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null520 ) ( (  file2936 ) ) ) ) {
        return ( (struct Maybe_140) { .tag = Maybe_140_None_t } );
    }
    ( ( fseek ) ( (  file2936 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  seek_dash_end526 ) ( ) ) ) );
    int32_t  file_dash_size2937 = ( ( ftell ) ( (  file2936 ) ) );
    ( ( fseek ) ( (  file2936 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  seek_dash_set527 ) ( ) ) ) );
    struct Slice_12  file_dash_buf2938 = ( ( (  allocate353 ) ( (  al2935 ) ,  (  op_dash_add232 ( ( (  i32_dash_size262 ) ( (  file_dash_size2937 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2938 ) .f_ptr ) ,  (  file_dash_size2937 ) ,  (  from_dash_integral48 ( 1 ) ) ,  (  file2936 ) ) );
    ( (  set362 ) ( (  file_dash_buf2938 ) ,  ( (  i32_dash_size262 ) ( (  file_dash_size2937 ) ) ) ,  ( (  char_dash_u8384 ) ( ( (  nullchar528 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2936 ) ) );
    struct StrView_21  str2939 = ( (struct StrView_21) { .f_contents = ( (  subslice328 ) ( (  file_dash_buf2938 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub304 ( ( (  file_dash_buf2938 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_140_Just ) ( (  str2939 ) ) );
}

static  struct StrView_21   read_dash_contents504 (    const char*  filename2942 ,    enum CAllocator_9  al2944 ) {
    return ( (  or_dash_fail505 ) ( ( (  try_dash_read_dash_contents518 ) ( (  filename2942 ) ,  (  al2944 ) ) ) ,  ( ( StrConcat_506_StrConcat ) ( ( ( StrConcat_507_StrConcat ) ( ( (  from_dash_string220 ) ( ( "could not open file " ) ,  ( 20 ) ) ) ,  (  filename2942 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "!" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Pane_137   mk530 (    enum CAllocator_9  al3830 ,    struct TextBuf_88 *  buf3832 ) {
    return ( (struct Pane_137) { .f_buf = (  buf3832 ) , .f_cursor = ( (  mk298 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral48 ( 0 ) ) , .f_sel = ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) , .f_mode = ( Mode_138_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_139) { .f_screen_dash_top = (  from_dash_integral48 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral48 ( 0 ) ) } ) } );
}

struct envunion533 {
    struct Tui_73  (*fun) (  struct env69*  );
    struct env69 env;
};

static  struct Termios_75   undefined537 (  ) {
    struct Termios_75  temp538;
    return (  temp538 );
}

static  int32_t   stdin_dash_fileno539 (  ) {
    return (  from_dash_integral48 ( 0 ) );
}

static  struct termios *   cast_dash_ptr540 (    struct Termios_75 *  p359 ) {
    return ( (struct termios * ) (  p359 ) );
}

static  uint32_t   u32_dash_and541 (    uint32_t  l2832 ,    uint32_t  r2834 ) {
    return ( (  l2832 ) & (  r2834 ) );
}

static  uint32_t   u32_dash_neg542 (    uint32_t  l2837 ) {
    return ( ~ (  l2837 ) );
}

struct Array_544 {
    uint32_t _arr [4];
};

struct ArrayIter_546 {
    struct Array_544  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_546   into_dash_iter547 (    struct Array_544  self2322 ) {
    return ( (struct ArrayIter_546) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_548 {
    enum {
        Maybe_548_None_t,
        Maybe_548_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_548_Just_s;
    } stuff;
};

static struct Maybe_548 Maybe_548_Just (  uint32_t  field0 ) {
    return ( struct Maybe_548 ) { .tag = Maybe_548_Just_t, .stuff = { .Maybe_548_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr552 (    struct Array_544 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   offset_dash_ptr553 (    uint32_t *  x338 ,    int64_t  count340 ) {
    uint32_t  temp554;
    return ( (uint32_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul230 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp554 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr551 (    struct Array_544 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp184 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i2253 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic188 ) ( ( ( StrConcat_189_StrConcat ) ( ( ( StrConcat_190_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2254 = ( ( (  cast_dash_ptr552 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr553 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  uint32_t   get550 (    struct Array_544 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr551 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  struct Maybe_548   next549 (    struct ArrayIter_546 *  self2329 ) {
    if ( (  cmp184 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_548) { .tag = Maybe_548_None_t } );
    }
    uint32_t  e2331 = ( (  get550 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add232 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_548_Just ) ( (  e2331 ) ) );
}

static  uint32_t   reduce545 (    struct Array_544  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_546  it1099 = ( (  into_dash_iter547 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_548  dref1100 = ( (  next549 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_548_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_548_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_548_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp555 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp555);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp556;
    return (  temp556 );
}

static  uint32_t   u32_dash_or557 (    uint32_t  l2824 ,    uint32_t  r2826 ) {
    return ( (  l2824 ) | (  r2826 ) );
}

static  uint32_t   u32_dash_ors543 (    struct Array_544  vals2829 ) {
    return ( (  reduce545 ) ( (  vals2829 ) ,  (  from_dash_integral216 ( 0 ) ) ,  (  u32_dash_or557 ) ) );
}

static  struct Array_544   from_dash_listlike558 (    struct Array_544  self330 ) {
    return (  self330 );
}

static  uint32_t   echo559 (  ) {
    return (  from_dash_integral216 ( 8 ) );
}

static  uint32_t   icanon560 (  ) {
    return (  from_dash_integral216 ( 2 ) );
}

static  uint32_t   isig561 (  ) {
    return (  from_dash_integral216 ( 1 ) );
}

static  uint32_t   iexten562 (  ) {
    return (  from_dash_integral216 ( 32768 ) );
}

struct Array_564 {
    uint32_t _arr [5];
};

struct ArrayIter_566 {
    struct Array_564  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_566   into_dash_iter567 (    struct Array_564  self2322 ) {
    return ( (struct ArrayIter_566) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr571 (    struct Array_564 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr570 (    struct Array_564 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp184 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i2253 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic188 ) ( ( ( StrConcat_189_StrConcat ) ( ( ( StrConcat_190_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2254 = ( ( (  cast_dash_ptr571 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr553 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  uint32_t   get569 (    struct Array_564 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr570 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  struct Maybe_548   next568 (    struct ArrayIter_566 *  self2329 ) {
    if ( (  cmp184 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_548) { .tag = Maybe_548_None_t } );
    }
    uint32_t  e2331 = ( (  get569 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add232 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_548_Just ) ( (  e2331 ) ) );
}

static  uint32_t   reduce565 (    struct Array_564  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_566  it1099 = ( (  into_dash_iter567 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_548  dref1100 = ( (  next568 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_548_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_548_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_548_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp572 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp572);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp573;
    return (  temp573 );
}

static  uint32_t   u32_dash_ors563 (    struct Array_564  vals2829 ) {
    return ( (  reduce565 ) ( (  vals2829 ) ,  (  from_dash_integral216 ( 0 ) ) ,  (  u32_dash_or557 ) ) );
}

static  struct Array_564   from_dash_listlike574 (    struct Array_564  self330 ) {
    return (  self330 );
}

static  uint32_t   brkint575 (  ) {
    return (  from_dash_integral216 ( 2 ) );
}

static  uint32_t   icrnl576 (  ) {
    return (  from_dash_integral216 ( 256 ) );
}

static  uint32_t   inpck577 (  ) {
    return (  from_dash_integral216 ( 16 ) );
}

static  uint32_t   istrip578 (  ) {
    return (  from_dash_integral216 ( 32 ) );
}

static  uint32_t   ixon579 (  ) {
    return (  from_dash_integral216 ( 1024 ) );
}

struct Array_581 {
    uint32_t _arr [1];
};

struct ArrayIter_583 {
    struct Array_581  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_583   into_dash_iter584 (    struct Array_581  self2322 ) {
    return ( (struct ArrayIter_583) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr588 (    struct Array_581 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr587 (    struct Array_581 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp184 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i2253 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic188 ) ( ( ( StrConcat_189_StrConcat ) ( ( ( StrConcat_190_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2254 = ( ( (  cast_dash_ptr588 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr553 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  uint32_t   get586 (    struct Array_581 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr587 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  struct Maybe_548   next585 (    struct ArrayIter_583 *  self2329 ) {
    if ( (  cmp184 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_548) { .tag = Maybe_548_None_t } );
    }
    uint32_t  e2331 = ( (  get586 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add232 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_548_Just ) ( (  e2331 ) ) );
}

static  uint32_t   reduce582 (    struct Array_581  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_583  it1099 = ( (  into_dash_iter584 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_548  dref1100 = ( (  next585 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_548_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_548_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_548_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp589 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp589);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp590;
    return (  temp590 );
}

static  uint32_t   u32_dash_ors580 (    struct Array_581  vals2829 ) {
    return ( (  reduce582 ) ( (  vals2829 ) ,  (  from_dash_integral216 ( 0 ) ) ,  (  u32_dash_or557 ) ) );
}

static  struct Array_581   from_dash_listlike591 (    struct Array_581  self330 ) {
    return (  self330 );
}

static  uint32_t   opost592 (  ) {
    return (  from_dash_integral216 ( 1 ) );
}

static  uint32_t   cs8593 (  ) {
    return (  from_dash_integral216 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr596 (    struct Array_76 *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  uint8_t *   get_dash_ptr595 (    struct Array_76 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp184 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i2253 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic188 ) ( ( ( StrConcat_189_StrConcat ) ( ( ( StrConcat_190_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2254 = ( ( (  cast_dash_ptr596 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr329 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  enum Unit_7   set594 (    struct Array_76 *  arr2263 ,    size_t  i2266 ,    uint8_t  e2268 ) {
    uint8_t *  p2269 = ( (  get_dash_ptr595 ) ( (  arr2263 ) ,  (  i2266 ) ) );
    (*  p2269 ) = (  e2268 );
    return ( Unit_7_Unit );
}

static  size_t   vmin597 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime598 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush599 (  ) {
    return (  from_dash_integral48 ( 2 ) );
}

static  struct Termios_75   enable_dash_raw_dash_mode535 (  ) {
    struct Termios_75  temp536 = ( (  undefined537 ) ( ) );
    struct Termios_75 *  orig_dash_termios3291 = ( &temp536 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno539 ) ( ) ) ,  ( (  cast_dash_ptr540 ) ( (  orig_dash_termios3291 ) ) ) ) );
    struct Termios_75  raw3292 = ( * (  orig_dash_termios3291 ) );
    raw3292 .f_c_dash_lflag = ( (  u32_dash_and541 ) ( ( (  raw3292 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg542 ) ( ( (  u32_dash_ors543 ) ( ( (  from_dash_listlike558 ) ( ( (struct Array_544) { ._arr = { ( (  echo559 ) ( ) ) , ( (  icanon560 ) ( ) ) , ( (  isig561 ) ( ) ) , ( ( (  iexten562 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3292 .f_c_dash_iflag = ( (  u32_dash_and541 ) ( ( (  raw3292 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg542 ) ( ( (  u32_dash_ors563 ) ( ( (  from_dash_listlike574 ) ( ( (struct Array_564) { ._arr = { ( (  brkint575 ) ( ) ) , ( (  icrnl576 ) ( ) ) , ( (  inpck577 ) ( ) ) , ( (  istrip578 ) ( ) ) , ( ( (  ixon579 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3292 .f_c_dash_oflag = ( (  u32_dash_and541 ) ( ( (  raw3292 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg542 ) ( ( (  u32_dash_ors580 ) ( ( (  from_dash_listlike591 ) ( ( (struct Array_581) { ._arr = { ( ( (  opost592 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3292 .f_c_dash_cflag = ( (  u32_dash_or557 ) ( ( (  raw3292 ) .f_c_dash_cflag ) ,  ( (  cs8593 ) ( ) ) ) );
    ( (  set594 ) ( ( & ( (  raw3292 ) .f_c_dash_cc ) ) ,  ( (  vmin597 ) ( ) ) ,  (  from_dash_integral212 ( 0 ) ) ) );
    ( (  set594 ) ( ( & ( (  raw3292 ) .f_c_dash_cc ) ) ,  ( (  vtime598 ) ( ) ) ,  (  from_dash_integral212 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno539 ) ( ) ) ,  ( (  tcsa_dash_flush599 ) ( ) ) ,  ( (  cast_dash_ptr540 ) ( ( & (  raw3292 ) ) ) ) ) );
    return ( * (  orig_dash_termios3291 ) );
}

struct StrViewIter_603 {
    struct StrView_21  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_603   into_dash_iter605 (    struct StrViewIter_603  self1371 ) {
    return (  self1371 );
}

struct Maybe_606 {
    enum {
        Maybe_606_None_t,
        Maybe_606_Just_t,
    } tag;
    union {
        struct {
            struct Char_57  field0;
        } Maybe_606_Just_s;
    } stuff;
};

static struct Maybe_606 Maybe_606_Just (  struct Char_57  field0 ) {
    return ( struct Maybe_606 ) { .tag = Maybe_606_Just_t, .stuff = { .Maybe_606_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_606   next607 (    struct StrViewIter_603 *  self1374 ) {
    if ( (  cmp184 ( ( ( * (  self1374 ) ) .f_i ) , ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
    }
    uint8_t *  char_dash_ptr1375 = ( ( (  offset_dash_ptr329 ) ( ( (  cast222 ) ( ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64261 ) ( ( ( * (  self1374 ) ) .f_i ) ) ) ) ) );
    struct Char_57  char1376 = ( (  scan_dash_from_dash_mem223 ) ( (  char_dash_ptr1375 ) ) );
    (*  self1374 ) .f_i = (  op_dash_add232 ( ( ( * (  self1374 ) ) .f_i ) , ( (  char1376 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_606_Just ) ( (  char1376 ) ) );
}

static  enum Unit_7   for_dash_each602 (    struct StrViewIter_603  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrViewIter_603  temp604 = ( (  into_dash_iter605 ) ( (  iterable1074 ) ) );
    struct StrViewIter_603 *  it1077 = ( &temp604 );
    while ( ( true ) ) {
        struct Maybe_606  dref1078 = ( (  next607 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_606_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_606_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_606_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrViewIter_603   into_dash_iter609 (    struct StrView_21  self1368 ) {
    return ( (struct StrViewIter_603) { .f_ds = (  self1368 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_603   chars608 (    struct StrView_21  self1382 ) {
    return ( (  into_dash_iter609 ) ( (  self1382 ) ) );
}

static  enum Unit_7   print601 (    struct StrView_21  s2563 ) {
    ( (  for_dash_each602 ) ( ( (  chars608 ) ( (  s2563 ) ) ) ,  (  printf_dash_char204 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   hide_dash_cursor600 (  ) {
    ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   reset_dash_colors610 (  ) {
    ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   clear_dash_screen611 (  ) {
    ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   enable_dash_mouse612 (  ) {
    ( (  print_dash_str195 ) ( ( (  from_dash_string220 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   flush_dash_stdout613 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr521 ) ( ) ) ) );
    return ( Unit_7_Unit );
}

static  bool   ptr_dash_eq617 (    enum Unit_7 *  l586 ,    enum Unit_7 *  r588 ) {
    return ( (  l586 ) == (  r588 ) );
}

static  enum Unit_7 *   cast618 (    const char*  x356 ) {
    return ( (enum Unit_7 * ) (  x356 ) );
}

static  void *   cast_dash_ptr622 (    enum Unit_7 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of623 (    enum Unit_7 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  enum Unit_7 *   zeroed620 (  ) {
    enum Unit_7 *  temp621;
    enum Unit_7 *  x570 = (  temp621 );
    ( ( memset ) ( ( (  cast_dash_ptr622 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of623 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  enum Unit_7 *   null_dash_ptr619 (  ) {
    return ( (  zeroed620 ) ( ) );
}

static  struct Maybe_308   from_dash_nullable_dash_c_dash_str616 (    const char*  s591 ) {
    if ( ( (  ptr_dash_eq617 ) ( ( (  cast618 ) ( (  s591 ) ) ) ,  ( ( (  null_dash_ptr619 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    } else {
        return ( ( Maybe_308_Just ) ( (  s591 ) ) );
    }
}

static  struct Maybe_308   get615 (    const char*  s2596 ) {
    return ( (  from_dash_nullable_dash_c_dash_str616 ) ( ( ( getenv ) ( (  s2596 ) ) ) ) );
}

static  bool   eq624 (    const char*  l1691 ,    const char*  r1693 ) {
    return (  eq320 ( ( ( strcmp ) ( (  l1691 ) ,  (  r1693 ) ) ) , (  from_dash_integral48 ( 0 ) ) ) );
}

static  enum ColorPalette_74   query_dash_palette614 (  ) {
    struct Maybe_308  colorterm2597 = ( (  get615 ) ( ( (  from_dash_string49 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_308  dref2598 = (  colorterm2597 );
    if ( dref2598.tag == Maybe_308_Just_t ) {
        if ( ( (  eq624 ( ( dref2598 .stuff .Maybe_308_Just_s .field0 ) , ( (  from_dash_string49 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq624 ( ( dref2598 .stuff .Maybe_308_Just_s .field0 ) , ( (  from_dash_string49 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_74_PaletteRGB );
        }
    }
    else {
        if ( dref2598.tag == Maybe_308_None_t ) {
        }
    }
    struct Maybe_308  dref2600 = ( (  get615 ) ( ( (  from_dash_string49 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2600.tag == Maybe_308_Just_t ) {
        if ( (  eq624 ( ( dref2600 .stuff .Maybe_308_Just_s .field0 ) , ( (  from_dash_string49 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_74_Palette8 );
        }
    }
    else {
        if ( dref2600.tag == Maybe_308_None_t ) {
        }
    }
    return ( ColorPalette_74_Palette16 );
}

struct Tuple2_625 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_625 Tuple2_625_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_625 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_627 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr631 (    struct Winsize_627 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of632 (    struct Winsize_627  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Winsize_627   zeroed629 (  ) {
    struct Winsize_627  temp630;
    struct Winsize_627  x570 = (  temp630 );
    ( ( memset ) ( ( (  cast_dash_ptr631 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of632 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  int32_t   stdout_dash_fileno633 (  ) {
    return (  from_dash_integral48 ( 1 ) );
}

static  uint64_t   from_dash_integral635 (    int64_t  x64 ) {
    return ( (uint64_t ) (  x64 ) );
}

static  uint64_t   tiocgwinsz634 (  ) {
    return (  from_dash_integral635 ( 21523 ) );
}

static  int32_t   op_dash_neg636 (    int32_t  x227 ) {
    return ( (  from_dash_integral48 ( 0 ) ) - (  x227 ) );
}

static  bool   eq637 (    uint16_t  l121 ,    uint16_t  r123 ) {
    return ( (  l121 ) == (  r123 ) );
}

static  uint16_t   from_dash_integral638 (    int64_t  x55 ) {
    return ( (uint16_t ) (  x55 ) );
}

static  void *   cast_dash_ptr644 (    uint32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of645 (    uint32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint32_t   zeroed642 (  ) {
    uint32_t  temp643;
    uint32_t  x570 = (  temp643 );
    ( ( memset ) ( ( (  cast_dash_ptr644 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of645 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint16_t *   cast646 (    uint32_t *  x356 ) {
    return ( (uint16_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed640 (    uint16_t  x573 ) {
    uint32_t  temp641 = ( (  zeroed642 ) ( ) );
    uint32_t *  y574 = ( &temp641 );
    uint16_t *  yp575 = ( (  cast646 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u16_dash_u32639 (    uint16_t  x645 ) {
    return ( (  cast_dash_on_dash_zeroed640 ) ( (  x645 ) ) );
}

static  struct Tuple2_625   get_dash_dimensions626 (  ) {
    struct Winsize_627  temp628 = ( ( (  zeroed629 ) ( ) ) );
    struct Winsize_627 *  ws2585 = ( &temp628 );
    if ( ( (  eq320 ( ( ( ioctl ) ( ( (  stdout_dash_fileno633 ) ( ) ) ,  ( (  tiocgwinsz634 ) ( ) ) ,  (  ws2585 ) ) ) , (  op_dash_neg636 ( (  from_dash_integral48 ( 1 ) ) ) ) ) ) || (  eq637 ( ( ( * (  ws2585 ) ) .f_ws_dash_col ) , (  from_dash_integral638 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_625_Tuple2 ) ( (  from_dash_integral216 ( 80 ) ) ,  (  from_dash_integral216 ( 24 ) ) ) );
    }
    return ( ( Tuple2_625_Tuple2 ) ( ( (  u16_dash_u32639 ) ( ( ( * (  ws2585 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32639 ) ( ( ( * (  ws2585 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined649 (  ) {
    struct timespec  temp650;
    return (  temp650 );
}

static  int32_t   clock_dash_monotonic651 (  ) {
    return (  from_dash_integral48 ( 1 ) );
}

static  struct timespec   now647 (  ) {
    struct timespec  temp648 = ( (  undefined649 ) ( ) );
    struct timespec *  t3253 = ( &temp648 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic651 ) ( ) ) ,  (  t3253 ) ) );
    return ( * (  t3253 ) );
}

struct env652 {
    bool *  should_dash_resize3305;
};

struct envunion653 {
    enum Unit_7  (*fun) (  struct env652*  ,    int32_t  );
    struct env652 env;
};

struct envunion653  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig654 ) {
    struct envunion653  temp655 = _intr_sigarr [  __intr__sig654 ];
    temp655.fun ( &temp655.env ,  __intr__sig654 );
}

static  enum Unit_7  _intr_register_signal (    int32_t  __intr__sig656 ,   struct envunion653  __intr__fun657 ) {
    _intr_sigarr [  __intr__sig656 ] =  __intr__fun657;
    signal(  __intr__sig656 , _intr_sighandle );
    return Unit_7_Unit;
}

static  enum Unit_7   lam658 (   struct env652* env ,    int32_t  dref3312 ) {
    (* env->should_dash_resize3305 ) = ( true );
    return ( Unit_7_Unit );
}

static  uint32_t   fst659 (    struct Tuple2_625  dref1253 ) {
    return ( dref1253 .field0 );
}

static  uint32_t   snd660 (    struct Tuple2_625  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tui_73   mk534 (   struct env69* env ) {
    struct Termios_75  og_dash_termios3307 = ( (  enable_dash_raw_dash_mode535 ) ( ) );
    ( (  hide_dash_cursor600 ) ( ) );
    ( (  reset_dash_colors610 ) ( ) );
    ( (  clear_dash_screen611 ) ( ) );
    ( (  enable_dash_mouse612 ) ( ) );
    ( (  flush_dash_stdout613 ) ( ) );
    enum ColorPalette_74  palette3308 = ( (  query_dash_palette614 ) ( ) );
    struct Tuple2_625  dims3309 = ( (  get_dash_dimensions626 ) ( ) );
    uint32_t  fps3310 = (  from_dash_integral216 ( 60 ) );
    struct timespec  last_dash_sync3311 = ( (  now647 ) ( ) );
    struct env652 envinst652 = {
        .should_dash_resize3305 = env->should_dash_resize3305 ,
    };
    ( _intr_register_signal ( (  from_dash_integral48 ( 28 ) ) , ( (struct envunion653){ .fun = (  enum Unit_7  (*) (  struct env652*  ,    int32_t  ) )lam658 , .env =  envinst652 } ) ) );
    return ( (struct Tui_73) { .f_width = ( (  fst659 ) ( (  dims3309 ) ) ) , .f_height = ( (  snd660 ) ( (  dims3309 ) ) ) , .f_target_dash_fps = (  fps3310 ) , .f_actual_dash_fps = (  from_dash_integral216 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3311 ) , .f_fps_dash_ts = (  last_dash_sync3311 ) , .f_fps_dash_count = (  from_dash_integral216 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3307 ) , .f_palette = (  palette3308 ) , .f_should_dash_redraw = ( true ) } );
}

enum Color8_665 {
    Color8_665_Black8,
    Color8_665_Red8,
    Color8_665_Green8,
    Color8_665_Yellow8,
    Color8_665_Blue8,
    Color8_665_Magenta8,
    Color8_665_Cyan8,
    Color8_665_White8,
};

enum Color16_666 {
    Color16_666_Black16,
    Color16_666_Red16,
    Color16_666_Green16,
    Color16_666_Yellow16,
    Color16_666_Blue16,
    Color16_666_Magenta16,
    Color16_666_Cyan16,
    Color16_666_White16,
    Color16_666_BrightBlack16,
    Color16_666_BrightRed16,
    Color16_666_BrightGreen16,
    Color16_666_BrightYellow16,
    Color16_666_BrightBlue16,
    Color16_666_BrightMagenta16,
    Color16_666_BrightCyan16,
    Color16_666_BrightWhite16,
};

struct RGB_667 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_664 {
    enum {
        Color_664_ColorDefault_t,
        Color_664_Color8_t,
        Color_664_Color16_t,
        Color_664_Color256_t,
        Color_664_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_665  field0;
        } Color_664_Color8_s;
        struct {
            enum Color16_666  field0;
        } Color_664_Color16_s;
        struct {
            uint8_t  field0;
        } Color_664_Color256_s;
        struct {
            struct RGB_667  field0;
        } Color_664_ColorRGB_s;
    } stuff;
};

static struct Color_664 Color_664_Color8 (  enum Color8_665  field0 ) {
    return ( struct Color_664 ) { .tag = Color_664_Color8_t, .stuff = { .Color_664_Color8_s = { .field0 = field0 } } };
};

static struct Color_664 Color_664_Color16 (  enum Color16_666  field0 ) {
    return ( struct Color_664 ) { .tag = Color_664_Color16_t, .stuff = { .Color_664_Color16_s = { .field0 = field0 } } };
};

static struct Color_664 Color_664_Color256 (  uint8_t  field0 ) {
    return ( struct Color_664 ) { .tag = Color_664_Color256_t, .stuff = { .Color_664_Color256_s = { .field0 = field0 } } };
};

static struct Color_664 Color_664_ColorRGB (  struct RGB_667  field0 ) {
    return ( struct Color_664 ) { .tag = Color_664_ColorRGB_t, .stuff = { .Color_664_ColorRGB_s = { .field0 = field0 } } };
};

struct Cell_663 {
    struct Char_57  f_c;
    struct Color_664  f_fg;
    struct Color_664  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_662 {
    struct Cell_663 *  f_ptr;
    size_t  f_count;
};

struct Screen_661 {
    enum CAllocator_9  f_al;
    struct Tui_73 *  f_tui;
    struct Slice_662  f_current;
    struct Slice_662  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_664  f_default_dash_fg;
    struct Color_664  f_default_dash_bg;
};

struct TypeSize_672 {
    size_t  f_size;
};

static  struct TypeSize_672   get_dash_typesize671 (  ) {
    struct Cell_663  temp673;
    return ( (struct TypeSize_672) { .f_size = ( sizeof( ( (  temp673 ) ) ) ) } );
}

static  struct Cell_663 *   cast_dash_ptr674 (    void *  p359 ) {
    return ( (struct Cell_663 * ) (  p359 ) );
}

static  struct Slice_662   allocate670 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize671 ) ( ) ) ) .f_size );
    struct Cell_663 *  ptr1957 = ( (  cast_dash_ptr674 ) ( ( ( malloc ) ( (  op_dash_mul245 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_662) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

static  void *   cast_dash_ptr680 (    size_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of681 (    size_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  size_t   zeroed678 (  ) {
    size_t  temp679;
    size_t  x570 = (  temp679 );
    ( ( memset ) ( ( (  cast_dash_ptr680 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of681 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint32_t *   cast682 (    size_t *  x356 ) {
    return ( (uint32_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed676 (    uint32_t  x573 ) {
    size_t  temp677 = ( (  zeroed678 ) ( ) );
    size_t *  y574 = ( &temp677 );
    uint32_t *  yp575 = ( (  cast682 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u32_dash_size675 (    uint32_t  x651 ) {
    return ( (  cast_dash_on_dash_zeroed676 ) ( (  x651 ) ) );
}

static  uint32_t   op_dash_mul683 (    uint32_t  l240 ,    uint32_t  r242 ) {
    return ( (  l240 ) * (  r242 ) );
}

struct Range_686 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_686 Range_686_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_686 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env687 {
    struct Slice_662  s1905;
    struct Cell_663 (*  fun1907 )(    struct Cell_663  );
    ;
    ;
    ;
};

struct envunion688 {
    enum Unit_7  (*fun) (  struct env687*  ,    int32_t  );
    struct env687 env;
};

struct RangeIter_689 {
    struct Range_686  field0;
    int32_t  field1;
};

static struct RangeIter_689 RangeIter_689_RangeIter (  struct Range_686  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_689 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_689   into_dash_iter691 (    struct Range_686  dref883 ) {
    return ( ( RangeIter_689_RangeIter ) ( ( ( Range_686_Range ) ( ( dref883 .field0 ) ,  ( dref883 .field1 ) ) ) ,  ( dref883 .field0 ) ) );
}

static  struct Maybe_272   next692 (    struct RangeIter_689 *  self891 ) {
    struct RangeIter_689  dref892 = ( * (  self891 ) );
    if ( true ) {
        if ( (  cmp317 ( ( dref892 .field1 ) , ( dref892 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
        }
        struct Maybe_272  x896 = ( ( Maybe_272_Just ) ( ( dref892 .field1 ) ) );
        (*  self891 ) = ( ( RangeIter_689_RangeIter ) ( ( ( Range_686_Range ) ( ( dref892 .field0 .field0 ) ,  ( dref892 .field0 .field1 ) ) ) ,  (  op_dash_add274 ( ( dref892 .field1 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
        return (  x896 );
    }
}

static  enum Unit_7   for_dash_each685 (    struct Range_686  iterable1074 ,   struct envunion688  fun1076 ) {
    struct RangeIter_689  temp690 = ( (  into_dash_iter691 ) ( (  iterable1074 ) ) );
    struct RangeIter_689 *  it1077 = ( &temp690 );
    while ( ( true ) ) {
        struct Maybe_272  dref1078 = ( (  next692 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_272_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_272_Just_t ) {
                struct envunion688  temp693 = (  fun1076 );
                ( temp693.fun ( &temp693.env ,  ( dref1078 .stuff .Maybe_272_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Range_686   to694 (    int32_t  from874 ,    int32_t  to876 ) {
    return ( ( Range_686_Range ) ( (  from874 ) ,  (  to876 ) ) );
}

static  struct Cell_663 *   offset_dash_ptr698 (    struct Cell_663 *  x338 ,    int64_t  count340 ) {
    struct Cell_663  temp699;
    return ( (struct Cell_663 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul230 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp699 ) ) ) ) ) ) ) ) );
}

static  struct Cell_663 *   get_dash_ptr697 (    struct Slice_662  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp184 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_663 *  elem_dash_ptr1760 = ( (  offset_dash_ptr698 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set696 (    struct Slice_662  slice1774 ,    size_t  i1776 ,    struct Cell_663  x1778 ) {
    struct Cell_663 *  ep1779 = ( (  get_dash_ptr697 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

struct Maybe_703 {
    enum {
        Maybe_703_None_t,
        Maybe_703_Just_t,
    } tag;
    union {
        struct {
            struct Cell_663  field0;
        } Maybe_703_Just_s;
    } stuff;
};

static struct Maybe_703 Maybe_703_Just (  struct Cell_663  field0 ) {
    return ( struct Maybe_703 ) { .tag = Maybe_703_Just_t, .stuff = { .Maybe_703_Just_s = { .field0 = field0 } } };
};

static  struct Cell_663   undefined704 (  ) {
    struct Cell_663  temp705;
    return (  temp705 );
}

static  struct Cell_663   or_dash_fail702 (    struct Maybe_703  x1725 ,    struct StrConcat_253  errmsg1727 ) {
    struct Maybe_703  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_703_None_t ) {
        ( (  panic252 ) ( (  errmsg1727 ) ) );
        return ( (  undefined704 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_703_Just_t ) {
            return ( dref1728 .stuff .Maybe_703_Just_s .field0 );
        }
    }
}

static  struct Maybe_703   try_dash_get706 (    struct Slice_662  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp184 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_703) { .tag = Maybe_703_None_t } );
    }
    struct Cell_663 *  elem_dash_ptr1766 = ( (  offset_dash_ptr698 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_703_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  struct Cell_663   get701 (    struct Slice_662  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail702 ) ( ( (  try_dash_get706 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_663   elem_dash_get700 (    struct Slice_662  self1867 ,    size_t  idx1869 ) {
    return ( (  get701 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

static  enum Unit_7   lam695 (   struct env687* env ,    int32_t  i1909 ) {
    return ( (  set696 ) ( ( env->s1905 ) ,  ( (  i32_dash_size262 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get700 ( ( env->s1905 ) , ( (  i32_dash_size262 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_7   map684 (    struct Slice_662  s1905 ,    struct Cell_663 (*  fun1907 )(    struct Cell_663  ) ) {
    struct env687 envinst687 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each685 ) ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_i32196 ) ( (  op_dash_sub304 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion688){ .fun = (  enum Unit_7  (*) (  struct env687*  ,    int32_t  ) )lam695 , .env =  envinst687 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Cell_663   default_dash_cell708 (  ) {
    return ( (struct Cell_663) { .f_c = ( (  from_dash_charlike221 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_664) { .tag = Color_664_ColorDefault_t } ) , .f_bg = ( (struct Color_664) { .tag = Color_664_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral48 ( 1 ) ) } );
}

static  struct Cell_663   lam707 (    struct Cell_663  dref3415 ) {
    return ( (  default_dash_cell708 ) ( ) );
}

struct env711 {
    struct Slice_662  s1905;
    struct Cell_663 (*  fun1907 )(    struct Cell_663  );
    ;
    ;
    ;
};

struct envunion712 {
    enum Unit_7  (*fun) (  struct env711*  ,    int32_t  );
    struct env711 env;
};

static  enum Unit_7   for_dash_each710 (    struct Range_686  iterable1074 ,   struct envunion712  fun1076 ) {
    struct RangeIter_689  temp713 = ( (  into_dash_iter691 ) ( (  iterable1074 ) ) );
    struct RangeIter_689 *  it1077 = ( &temp713 );
    while ( ( true ) ) {
        struct Maybe_272  dref1078 = ( (  next692 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_272_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_272_Just_t ) {
                struct envunion712  temp714 = (  fun1076 );
                ( temp714.fun ( &temp714.env ,  ( dref1078 .stuff .Maybe_272_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam715 (   struct env711* env ,    int32_t  i1909 ) {
    return ( (  set696 ) ( ( env->s1905 ) ,  ( (  i32_dash_size262 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get700 ( ( env->s1905 ) , ( (  i32_dash_size262 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_7   map709 (    struct Slice_662  s1905 ,    struct Cell_663 (*  fun1907 )(    struct Cell_663  ) ) {
    struct env711 envinst711 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each710 ) ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_i32196 ) ( (  op_dash_sub304 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion712){ .fun = (  enum Unit_7  (*) (  struct env711*  ,    int32_t  ) )lam715 , .env =  envinst711 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Cell_663   lam716 (    struct Cell_663  dref3417 ) {
    return ( (  default_dash_cell708 ) ( ) );
}

static  struct Screen_661   mk_dash_screen669 (    struct Tui_73 *  tui3411 ,    enum CAllocator_9  al3413 ) {
    struct Slice_662  cur3414 = ( (  allocate670 ) ( (  al3413 ) ,  ( (  u32_dash_size675 ) ( (  op_dash_mul683 ( ( ( * (  tui3411 ) ) .f_width ) , ( ( * (  tui3411 ) ) .f_height ) ) ) ) ) ) );
    ( (  map684 ) ( (  cur3414 ) ,  (  lam707 ) ) );
    struct Slice_662  prev3416 = ( (  allocate670 ) ( (  al3413 ) ,  ( (  u32_dash_size675 ) ( (  op_dash_mul683 ( ( ( * (  tui3411 ) ) .f_width ) , ( ( * (  tui3411 ) ) .f_height ) ) ) ) ) ) );
    ( (  map709 ) ( (  prev3416 ) ,  (  lam716 ) ) );
    return ( (struct Screen_661) { .f_current = (  cur3414 ) , .f_previous = (  prev3416 ) , .f_al = (  al3413 ) , .f_tui = (  tui3411 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_664) { .tag = Color_664_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_664) { .tag = Color_664_ColorDefault_t } ) } );
}

enum MouseButton_724 {
    MouseButton_724_MouseLeft,
    MouseButton_724_MouseMiddle,
    MouseButton_724_MouseRight,
    MouseButton_724_ScrollUp,
    MouseButton_724_ScrollDown,
};

struct MouseEvent_723 {
    enum MouseButton_724  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_722 {
    enum {
        InputEvent_722_Key_t,
        InputEvent_722_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_153  field0;
        } InputEvent_722_Key_s;
        struct {
            struct MouseEvent_723  field0;
        } InputEvent_722_Mouse_s;
    } stuff;
};

static struct InputEvent_722 InputEvent_722_Key (  struct Key_153  field0 ) {
    return ( struct InputEvent_722 ) { .tag = InputEvent_722_Key_t, .stuff = { .InputEvent_722_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_722 InputEvent_722_Mouse (  struct MouseEvent_723  field0 ) {
    return ( struct InputEvent_722 ) { .tag = InputEvent_722_Mouse_t, .stuff = { .InputEvent_722_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_721 {
    enum {
        Maybe_721_None_t,
        Maybe_721_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_722  field0;
        } Maybe_721_Just_s;
    } stuff;
};

static struct Maybe_721 Maybe_721_Just (  struct InputEvent_722  field0 ) {
    return ( struct Maybe_721 ) { .tag = Maybe_721_Just_t, .stuff = { .Maybe_721_Just_s = { .field0 = field0 } } };
};

struct envunion720 {
    struct Maybe_721  (*fun) (  struct env71*  ,    struct Tui_73 *  );
    struct env71 env;
};

struct env719 {
    struct env71 envinst71;
    struct Tui_73 *  tui4271;
};

struct envunion725 {
    struct Maybe_721  (*fun) (  struct env719*  );
    struct env719 env;
};

struct FunIter_718 {
    struct envunion725  f_fun;
    bool  f_finished;
};

static  struct FunIter_718   into_dash_iter726 (    struct FunIter_718  self1028 ) {
    return (  self1028 );
}

static  struct FunIter_718   from_dash_function727 (   struct envunion725  fun1036 ) {
    return ( (struct FunIter_718) { .f_fun = (  fun1036 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions732 (   struct env70* env ,    struct Tui_73 *  tui3377 ) {
    if ( ( ! ( * ( env->should_dash_resize3305 ) ) ) ) {
        return ( false );
    }
    (*  tui3377 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3305 ) = ( false );
    struct Tuple2_625  dim3378 = ( (  get_dash_dimensions626 ) ( ) );
    uint32_t  w3379 = ( (  fst659 ) ( (  dim3378 ) ) );
    uint32_t  h3380 = ( (  snd660 ) ( (  dim3378 ) ) );
    (*  tui3377 ) .f_width = (  w3379 );
    (*  tui3377 ) .f_height = (  h3380 );
    return ( true );
}

static  char   undefined735 (  ) {
    char  temp736;
    return (  temp736 );
}

struct Maybe_737 {
    enum {
        Maybe_737_None_t,
        Maybe_737_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_737_Just_s;
    } stuff;
};

static struct Maybe_737 Maybe_737_Just (  char  field0 ) {
    return ( struct Maybe_737 ) { .tag = Maybe_737_Just_t, .stuff = { .Maybe_737_Just_s = { .field0 = field0 } } };
};

struct Pollfd_739 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr740 (    struct Pollfd_739 *  p359 ) {
    return ( (struct pollfd * ) (  p359 ) );
}

static  void *   cast_dash_ptr743 (    char *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of744 (    char  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  char   zeroed741 (  ) {
    char  temp742;
    char  x570 = (  temp742 );
    ( ( memset ) ( ( (  cast_dash_ptr743 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of744 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Maybe_737   read_dash_byte738 (    int32_t  timeout_dash_ms3299 ) {
    struct Pollfd_739  pfd3300 = ( (struct Pollfd_739) { .f_fd = (  from_dash_integral48 ( 0 ) ) , .f_events = (  from_dash_integral638 ( 1 ) ) , .f_revents = (  from_dash_integral638 ( 0 ) ) } );
    if ( (  cmp317 ( ( ( poll ) ( ( (  cast_dash_ptr740 ) ( ( & (  pfd3300 ) ) ) ) ,  (  from_dash_integral48 ( 1 ) ) ,  (  timeout_dash_ms3299 ) ) ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_737) { .tag = Maybe_737_None_t } );
    }
    char  c3301 = ( ( (  zeroed741 ) ( ) ) );
    if ( (  cmp317 ( ( ( read ) ( ( (  stdin_dash_fileno539 ) ( ) ) ,  ( (  cast_dash_ptr743 ) ( ( & (  c3301 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_737) { .tag = Maybe_737_None_t } );
    }
    return ( ( Maybe_737_Just ) ( (  c3301 ) ) );
}

static  uint8_t   ascii_dash_u8745 (    char  c776 ) {
    return ( ( (uint8_t ) (  c776 ) ) );
}

static  char   u8_dash_ascii746 (    uint8_t  b779 ) {
    return ( ( (char ) (  b779 ) ) );
}

static  uint8_t *   cast750 (    uint32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed748 (    uint8_t  x573 ) {
    uint32_t  temp749 = ( (  zeroed642 ) ( ) );
    uint32_t *  y574 = ( &temp749 );
    uint8_t *  yp575 = ( (  cast750 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u8_dash_u32747 (    uint8_t  x672 ) {
    return ( (  cast_dash_on_dash_zeroed748 ) ( (  x672 ) ) );
}

struct Map_753 {
    struct StrViewIter_603  field0;
    uint32_t (*  field1 )(    struct Char_57  );
};

static struct Map_753 Map_753_Map (  struct StrViewIter_603  field0 ,  uint32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_753 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_753   into_dash_iter754 (    struct Map_753  self796 ) {
    return (  self796 );
}

static  struct Maybe_548   next755 (    struct Map_753 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next607 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_548) { .tag = Maybe_548_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_548_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce752 (    struct Map_753  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct Map_753  it1099 = ( (  into_dash_iter754 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_548  dref1100 = ( (  next755 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_548_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_548_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_548_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp756 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp756);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp757;
    return (  temp757 );
}

static  struct Map_753   map758 (    struct StrView_21  iterable805 ,    uint32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrViewIter_603  it808 = ( (  into_dash_iter609 ) ( (  iterable805 ) ) );
    return ( ( Map_753_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  void *   cast_dash_ptr765 (    int64_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of766 (    int64_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int64_t   zeroed763 (  ) {
    int64_t  temp764;
    int64_t  x570 = (  temp764 );
    ( ( memset ) ( ( (  cast_dash_ptr765 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of766 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast767 (    int64_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int64_t   cast_dash_on_dash_zeroed761 (    uint8_t  x573 ) {
    int64_t  temp762 = ( (  zeroed763 ) ( ) );
    int64_t *  y574 = ( &temp762 );
    uint8_t *  yp575 = ( (  cast767 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int64_t   u8_dash_i64760 (    uint8_t  x666 ) {
    return ( (  cast_dash_on_dash_zeroed761 ) ( (  x666 ) ) );
}

struct StrConcat_770 {
    struct Char_57  field0;
    struct Char_57  field1;
};

static struct StrConcat_770 StrConcat_770_StrConcat (  struct Char_57  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_770 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_769 {
    struct StrConcat_770  field0;
    struct StrView_21  field1;
};

static struct StrConcat_769 StrConcat_769_StrConcat (  struct StrConcat_770  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_769 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_774 {
    struct StrView_21  field0;
    struct StrConcat_769  field1;
};

static struct StrConcat_774 StrConcat_774_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_769  field1 ) {
    return ( struct StrConcat_774 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_773 {
    struct StrConcat_774  field0;
    struct Char_57  field1;
};

static struct StrConcat_773 StrConcat_773_StrConcat (  struct StrConcat_774  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_773 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str777 (    struct StrConcat_770  self1503 ) {
    struct StrConcat_770  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str203 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str203 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str776 (    struct StrConcat_769  self1503 ) {
    struct StrConcat_769  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str777 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str195 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str775 (    struct StrConcat_774  self1503 ) {
    struct StrConcat_774  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str195 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str776 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str772 (    struct StrConcat_773  self1503 ) {
    struct StrConcat_773  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str775 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str203 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic771 (    struct StrConcat_769  errmsg1712 ) {
    ( (  print_dash_str772 ) ( ( ( StrConcat_773_StrConcat ) ( ( ( StrConcat_774_StrConcat ) ( ( (  from_dash_string220 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  uint8_t   or_dash_fail768 (    struct Maybe_345  x1725 ,    struct StrConcat_769  errmsg1727 ) {
    struct Maybe_345  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_345_None_t ) {
        ( (  panic771 ) ( (  errmsg1727 ) ) );
        return ( (  undefined381 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_345_Just_t ) {
            return ( dref1728 .stuff .Maybe_345_Just_s .field0 );
        }
    }
}

static  enum Ordering_185   cmp779 (    struct Char_57  l744 ,    struct Char_57  r746 ) {
    if ( ( ( !  eq239 ( ( (  l744 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq239 ( ( (  r746 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp780 = ( (  from_dash_string49 ) ( ( "(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp780);
        exit ( 1 );
        ( Unit_7_Unit );
    }
    return ( (  cmp225 ) ( ( (  char_dash_u8384 ) ( (  l744 ) ) ) ,  ( (  char_dash_u8384 ) ( (  r746 ) ) ) ) );
}

static  uint8_t   op_dash_sub781 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  uint8_t   op_dash_add782 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  struct Maybe_345   hex_dash_digit778 (    struct Char_57  c2545 ) {
    if ( ( (  cmp779 ( (  c2545 ) , ( (  from_dash_charlike221 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp779 ( (  c2545 ) , ( (  from_dash_charlike221 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_345_Just ) ( (  op_dash_sub781 ( ( (  char_dash_u8384 ) ( (  c2545 ) ) ) , ( (  char_dash_u8384 ) ( ( (  from_dash_charlike221 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp779 ( (  c2545 ) , ( (  from_dash_charlike221 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp779 ( (  c2545 ) , ( (  from_dash_charlike221 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_345_Just ) ( (  op_dash_add782 ( (  op_dash_sub781 ( ( (  char_dash_u8384 ) ( (  c2545 ) ) ) , ( (  char_dash_u8384 ) ( ( (  from_dash_charlike221 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral212 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp779 ( (  c2545 ) , ( (  from_dash_charlike221 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp779 ( (  c2545 ) , ( (  from_dash_charlike221 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_345_Just ) ( (  op_dash_add782 ( (  op_dash_sub781 ( ( (  char_dash_u8384 ) ( (  c2545 ) ) ) , ( (  char_dash_u8384 ) ( ( (  from_dash_charlike221 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral212 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_345) { .tag = Maybe_345_None_t } );
}

static  uint32_t   lam759 (    struct Char_57  c2550 ) {
    return ( (  from_dash_integral216 ) ( ( (  u8_dash_i64760 ) ( ( (  or_dash_fail768 ) ( ( (  hex_dash_digit778 ) ( (  c2550 ) ) ) ,  ( ( StrConcat_769_StrConcat ) ( ( ( StrConcat_770_StrConcat ) ( ( (  from_dash_charlike221 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2550 ) ) ) ,  ( (  from_dash_string220 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   op_dash_add784 (    uint32_t  l230 ,    uint32_t  r232 ) {
    return ( (  l230 ) + (  r232 ) );
}

static  uint32_t   lam783 (    uint32_t  elem2552 ,    uint32_t  b2554 ) {
    return (  op_dash_add784 ( (  op_dash_mul683 ( (  b2554 ) , (  from_dash_integral216 ( 16 ) ) ) ) , (  elem2552 ) ) );
}

static  uint32_t   from_dash_hex751 (    struct StrView_21  arr2548 ) {
    return ( (  reduce752 ) ( ( (  map758 ) ( (  arr2548 ) ,  (  lam759 ) ) ) ,  (  from_dash_integral216 ( 0 ) ) ,  (  lam783 ) ) );
}

static  bool   eq786 (    char  l374 ,    char  r376 ) {
    return ( (  l374 ) == (  r376 ) );
}

static  char   from_dash_charlike787 (    uint8_t *  ptr369 ,    size_t  num_dash_bytes371 ) {
    if ( ( !  eq239 ( (  num_dash_bytes371 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp788 = ( (  from_dash_string49 ) ( ( "(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp788);
        exit ( 1 );
        ( Unit_7_Unit );
    }
    return ( ( (char ) ( * (  ptr369 ) ) ) );
}

struct Array_789 {
    char _arr [32];
};

static  void *   cast_dash_ptr793 (    struct Array_789 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of794 (    struct Array_789  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Array_789   zeroed791 (  ) {
    struct Array_789  temp792;
    struct Array_789  x570 = (  temp792 );
    ( ( memset ) ( ( (  cast_dash_ptr793 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of794 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr798 (    struct Array_789 *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  char *   offset_dash_ptr799 (    char *  x338 ,    int64_t  count340 ) {
    char  temp800;
    return ( (char * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul230 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp800 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr797 (    struct Array_789 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp184 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i2253 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic188 ) ( ( ( StrConcat_189_StrConcat ) ( ( ( StrConcat_190_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2254 = ( ( (  cast_dash_ptr798 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr799 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  enum Unit_7   set796 (    struct Array_789 *  arr2263 ,    size_t  i2266 ,    char  e2268 ) {
    char *  p2269 = ( (  get_dash_ptr797 ) ( (  arr2263 ) ,  (  i2266 ) ) );
    (*  p2269 ) = (  e2268 );
    return ( Unit_7_Unit );
}

struct Slice_802 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail805 (    struct Maybe_737  x1725 ,    struct StrConcat_253  errmsg1727 ) {
    struct Maybe_737  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_737_None_t ) {
        ( (  panic252 ) ( (  errmsg1727 ) ) );
        return ( (  undefined735 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_737_Just_t ) {
            return ( dref1728 .stuff .Maybe_737_Just_s .field0 );
        }
    }
}

static  struct Maybe_737   try_dash_get806 (    struct Slice_802  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp184 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_737) { .tag = Maybe_737_None_t } );
    }
    char *  elem_dash_ptr1766 = ( (  offset_dash_ptr799 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_737_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  char   get804 (    struct Slice_802  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail805 ) ( ( (  try_dash_get806 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get803 (    struct Slice_802  self1867 ,    size_t  idx1869 ) {
    return ( (  get804 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

struct Scanner_807 {
    struct StrViewIter_603  f_s;
};

static  struct Scanner_807   mk_dash_from_dash_str809 (    struct StrView_21  s3172 ) {
    return ( (struct Scanner_807) { .f_s = ( (  chars608 ) ( (  s3172 ) ) ) } );
}

static  int32_t   op_dash_sub812 (    int32_t  l212 ,    int32_t  r214 ) {
    return ( (  l212 ) - (  r214 ) );
}

static  uint8_t *   offset_dash_ptr_prime_814 (    uint8_t *  x343 ,    size_t  count345 ) {
    return ( (  offset_dash_ptr329 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
}

static  struct StrView_21   substr810 (    struct StrView_21  s2172 ,    size_t  from2174 ,    size_t  to2176 ) {
    size_t  from_dash_bs2177 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_689  temp811 =  into_dash_iter691 ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( ( (  size_dash_i32196 ) ( (  from2174 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_272  __cond813 =  next692 (&temp811);
        if (  __cond813 .tag == 0 ) {
            break;
        }
        int32_t  dref2178 =  __cond813 .stuff .Maybe_272_Just_s .field0;
        if ( (  cmp184 ( (  from_dash_bs2177 ) , ( ( (  s2172 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2177 = (  op_dash_add232 ( (  from_dash_bs2177 ) , ( (  next_dash_char224 ) ( ( (  offset_dash_ptr_prime_814 ) ( ( ( (  s2172 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2177 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2179 = (  from_dash_bs2177 );
    struct RangeIter_689  temp815 =  into_dash_iter691 ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( (  op_dash_sub812 ( ( (  size_dash_i32196 ) ( (  to2176 ) ) ) , ( (  size_dash_i32196 ) ( (  from2174 ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_272  __cond816 =  next692 (&temp815);
        if (  __cond816 .tag == 0 ) {
            break;
        }
        int32_t  dref2180 =  __cond816 .stuff .Maybe_272_Just_s .field0;
        if ( (  cmp184 ( (  to_dash_bs2179 ) , ( ( (  s2172 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2179 = (  op_dash_add232 ( (  to_dash_bs2179 ) , ( (  next_dash_char224 ) ( ( (  offset_dash_ptr_prime_814 ) ( ( ( (  s2172 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2179 ) ) ) ) ) ) );
    }
    return ( (struct StrView_21) { .f_contents = ( (  subslice328 ) ( ( (  s2172 ) .f_contents ) ,  (  from_dash_bs2177 ) ,  (  to_dash_bs2179 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr819 (    char *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_12   cast_dash_slice818 (    struct Slice_802  s1932 ) {
    return ( (struct Slice_12) { .f_ptr = ( (  cast_dash_ptr819 ) ( ( (  s1932 ) .f_ptr ) ) ) , .f_count = ( (  s1932 ) .f_count ) } );
}

static  struct StrView_21   from_dash_ascii_dash_slice817 (    struct Slice_802  sl2149 ) {
    return ( (struct StrView_21) { .f_contents = ( (  cast_dash_slice818 ) ( (  sl2149 ) ) ) } );
}

struct Maybe_820 {
    enum {
        Maybe_820_None_t,
        Maybe_820_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_820_Just_s;
    } stuff;
};

static struct Maybe_820 Maybe_820_Just (  int64_t  field0 ) {
    return ( struct Maybe_820 ) { .tag = Maybe_820_Just_t, .stuff = { .Maybe_820_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_822 {
    struct Scanner_807  f_it;
    bool (*  f_pred )(    struct Char_57  );
};

static  struct Scanner_807   into_dash_iter825 (    struct Scanner_807  self3163 ) {
    return (  self3163 );
}

static  struct Scanner_807   into_dash_iter824 (    struct Scanner_807 *  self785 ) {
    return ( (  into_dash_iter825 ) ( ( * (  self785 ) ) ) );
}

static  struct TakeWhile_822   take_dash_while823 (    struct Scanner_807 *  it970 ,    bool (*  pred972 )(    struct Char_57  ) ) {
    return ( (struct TakeWhile_822) { .f_it = ( (  into_dash_iter824 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  bool   is_dash_digit826 (    struct Char_57  c2451 ) {
    return ( (  cmp225 ( ( (  char_dash_u8384 ) ( (  c2451 ) ) ) , ( (  char_dash_u8384 ) ( ( (  from_dash_charlike221 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp225 ( ( (  char_dash_u8384 ) ( (  c2451 ) ) ) , ( (  char_dash_u8384 ) ( ( (  from_dash_charlike221 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_606   next830 (    struct Scanner_807 *  self3160 ) {
    return ( (  next607 ) ( ( & ( ( * (  self3160 ) ) .f_s ) ) ) );
}

static  struct Maybe_606   next829 (    struct TakeWhile_822 *  self964 ) {
    struct Maybe_606  mx965 = ( (  next830 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_606  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_606_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_606_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_606_Just ) ( ( dref966 .stuff .Maybe_606_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
            }
        }
    }
}

static  struct TakeWhile_822   into_dash_iter832 (    struct TakeWhile_822  self961 ) {
    return (  self961 );
}

static  struct Maybe_606   head828 (    struct TakeWhile_822  it1142 ) {
    struct TakeWhile_822  temp831 = ( (  into_dash_iter832 ) ( (  it1142 ) ) );
    return ( (  next829 ) ( ( &temp831 ) ) );
}

static  bool   null827 (    struct TakeWhile_822  it1151 ) {
    struct Maybe_606  dref1152 = ( (  head828 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_606_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env835 {
    struct Scanner_807 *  it1186;
    ;
};

struct envunion836 {
    struct Maybe_606  (*fun) (  struct env835*  ,    int32_t  );
    struct env835 env;
};

static  enum Unit_7   for_dash_each834 (    struct Range_686  iterable1074 ,   struct envunion836  fun1076 ) {
    struct RangeIter_689  temp837 = ( (  into_dash_iter691 ) ( (  iterable1074 ) ) );
    struct RangeIter_689 *  it1077 = ( &temp837 );
    while ( ( true ) ) {
        struct Maybe_272  dref1078 = ( (  next692 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_272_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_272_Just_t ) {
                struct envunion836  temp838 = (  fun1076 );
                ( temp838.fun ( &temp838.env ,  ( dref1078 .stuff .Maybe_272_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Maybe_606   lam839 (   struct env835* env ,    int32_t  dref1189 ) {
    return ( (  next830 ) ( ( env->it1186 ) ) );
}

static  enum Unit_7   drop_prime_833 (    struct Scanner_807 *  it1186 ,    size_t  n1188 ) {
    struct env835 envinst835 = {
        .it1186 =  it1186 ,
    };
    ( (  for_dash_each834 ) ( ( (  to694 ) ( (  from_dash_integral48 ( 1 ) ) ,  ( (  size_dash_i32196 ) ( (  n1188 ) ) ) ) ) ,  ( (struct envunion836){ .fun = (  struct Maybe_606  (*) (  struct env835*  ,    int32_t  ) )lam839 , .env =  envinst835 } ) ) );
    return ( Unit_7_Unit );
}

static  size_t   reduce841 (    struct TakeWhile_822  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_57  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct TakeWhile_822  it1099 = ( (  into_dash_iter832 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_606  dref1100 = ( (  next829 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_606_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_606_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_606_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp842 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp842);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp843;
    return (  temp843 );
}

static  size_t   lam844 (    struct Char_57  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add232 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count840 (    struct TakeWhile_822  it1104 ) {
    return ( (  reduce841 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam844 ) ) );
}

static  struct TakeWhile_822   chars846 (    struct TakeWhile_822  self1651 ) {
    return (  self1651 );
}

static  struct Maybe_820   reduce847 (    struct TakeWhile_822  iterable1093 ,    struct Maybe_820  base1095 ,    struct Maybe_820 (*  fun1097 )(    struct Char_57  ,    struct Maybe_820  ) ) {
    struct Maybe_820  x1098 = (  base1095 );
    struct TakeWhile_822  it1099 = ( (  into_dash_iter832 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_606  dref1100 = ( (  next829 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_606_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_606_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_606_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp848 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp848);
    exit ( 1 );
    ( Unit_7_Unit );
    struct Maybe_820  temp849;
    return (  temp849 );
}

static  void *   cast_dash_ptr857 (    int32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of858 (    int32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int32_t   zeroed855 (  ) {
    int32_t  temp856;
    int32_t  x570 = (  temp856 );
    ( ( memset ) ( ( (  cast_dash_ptr857 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of858 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast859 (    int32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed853 (    uint8_t  x573 ) {
    int32_t  temp854 = ( (  zeroed855 ) ( ) );
    int32_t *  y574 = ( &temp854 );
    uint8_t *  yp575 = ( (  cast859 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int32_t   u8_dash_i32852 (    uint8_t  x669 ) {
    return ( (  cast_dash_on_dash_zeroed853 ) ( (  x669 ) ) );
}

static  struct Maybe_272   parse_dash_digit851 (    struct Char_57  c2454 ) {
    if ( ( (  is_dash_digit826 ) ( (  c2454 ) ) ) ) {
        return ( ( Maybe_272_Just ) ( ( (  u8_dash_i32852 ) ( (  op_dash_sub781 ( ( (  char_dash_u8384 ) ( (  c2454 ) ) ) , ( (  char_dash_u8384 ) ( ( (  from_dash_charlike221 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
}

static  int64_t   i32_dash_i64860 (    int32_t  x606 ) {
    return ( (int64_t ) (  x606 ) );
}

static  struct Maybe_820   sequence_dash_maybe850 (    struct Char_57  e2460 ,    struct Maybe_820  b2462 ) {
    struct Maybe_820  dref2463 = (  b2462 );
    if ( dref2463.tag == Maybe_820_None_t ) {
        return ( (struct Maybe_820) { .tag = Maybe_820_None_t } );
    }
    else {
        if ( dref2463.tag == Maybe_820_Just_t ) {
            struct Maybe_272  dref2465 = ( (  parse_dash_digit851 ) ( (  e2460 ) ) );
            if ( dref2465.tag == Maybe_272_None_t ) {
                return ( (struct Maybe_820) { .tag = Maybe_820_None_t } );
            }
            else {
                if ( dref2465.tag == Maybe_272_Just_t ) {
                    return ( ( Maybe_820_Just ) ( (  op_dash_add405 ( (  op_dash_mul230 ( ( dref2463 .stuff .Maybe_820_Just_s .field0 ) , (  from_dash_integral303 ( 10 ) ) ) ) , ( (  i32_dash_i64860 ) ( ( dref2465 .stuff .Maybe_272_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_820   parse_dash_int845 (    struct TakeWhile_822  s2457 ) {
    struct TakeWhile_822  cs2467 = ( (  chars846 ) ( (  s2457 ) ) );
    struct Maybe_606  dref2468 = ( (  head828 ) ( (  cs2467 ) ) );
    if ( dref2468.tag == Maybe_606_Just_t ) {
        return ( (  reduce847 ) ( (  cs2467 ) ,  ( ( Maybe_820_Just ) ( (  from_dash_integral303 ( 0 ) ) ) ) ,  (  sequence_dash_maybe850 ) ) );
    }
    else {
        if ( dref2468.tag == Maybe_606_None_t ) {
            return ( (struct Maybe_820) { .tag = Maybe_820_None_t } );
        }
    }
}

static  struct Maybe_820   scan_dash_int821 (    struct Scanner_807 *  sc3175 ) {
    struct TakeWhile_822  digit_dash_chars3176 = ( (  take_dash_while823 ) ( (  sc3175 ) ,  (  is_dash_digit826 ) ) );
    if ( ( (  null827 ) ( (  digit_dash_chars3176 ) ) ) ) {
        return ( (struct Maybe_820) { .tag = Maybe_820_None_t } );
    }
    ( (  drop_prime_833 ) ( (  sc3175 ) ,  ( (  count840 ) ( (  digit_dash_chars3176 ) ) ) ) );
    return ( (  parse_dash_int845 ) ( (  digit_dash_chars3176 ) ) );
}

static  int32_t   i64_dash_i32862 (    int64_t  x618 ) {
    return ( (int32_t ) (  x618 ) );
}

struct StrConcat_864 {
    struct StrView_21  field0;
    int64_t  field1;
};

static struct StrConcat_864 StrConcat_864_StrConcat (  struct StrView_21  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_864 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_867 {
    struct StrView_21  field0;
    struct StrConcat_864  field1;
};

static struct StrConcat_867 StrConcat_867_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_864  field1 ) {
    return ( struct StrConcat_867 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_866 {
    struct StrConcat_867  field0;
    struct Char_57  field1;
};

static struct StrConcat_866 StrConcat_866_StrConcat (  struct StrConcat_867  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_866 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_872 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_871 {
    struct StrViewIter_603  f_left;
    struct IntStrIter_872  f_right;
};

struct StrConcatIter_870 {
    struct StrViewIter_603  f_left;
    struct StrConcatIter_871  f_right;
};

enum EmptyIter_874 {
    EmptyIter_874_EmptyIter,
};

struct AppendIter_873 {
    enum EmptyIter_874  f_it;
    struct Char_57  f_elem;
    bool  f_appended;
};

struct StrConcatIter_869 {
    struct StrConcatIter_870  f_left;
    struct AppendIter_873  f_right;
};

static  struct StrConcatIter_869   into_dash_iter876 (    struct StrConcatIter_869  self1491 ) {
    return (  self1491 );
}

struct env883 {
    ;
    int64_t  base1210;
};

struct envunion884 {
    int64_t  (*fun) (  struct env883*  ,    int32_t  ,    int64_t  );
    struct env883 env;
};

static  int64_t   reduce882 (    struct Range_686  iterable1093 ,    int64_t  base1095 ,   struct envunion884  fun1097 ) {
    int64_t  x1098 = (  base1095 );
    struct RangeIter_689  it1099 = ( (  into_dash_iter691 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next692 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                struct envunion884  temp885 = (  fun1097 );
                x1098 = ( temp885.fun ( &temp885.env ,  ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp886 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp886);
    exit ( 1 );
    ( Unit_7_Unit );
    int64_t  temp887;
    return (  temp887 );
}

static  int64_t   lam888 (   struct env883* env ,    int32_t  item1214 ,    int64_t  x1216 ) {
    return (  op_dash_mul230 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int64_t   pow881 (    int64_t  base1210 ,    int32_t  p1212 ) {
    struct env883 envinst883 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce882 ) ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral303 ( 1 ) ) ,  ( (struct envunion884){ .fun = (  int64_t  (*) (  struct env883*  ,    int32_t  ,    int64_t  ) )lam888 , .env =  envinst883 } ) ) );
}

static  int64_t   op_dash_div889 (    int64_t  l199 ,    int64_t  r201 ) {
    return ( (  l199 ) / (  r201 ) );
}

static  uint8_t   cast890 (    int64_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  int64_t   op_dash_sub891 (    int64_t  l189 ,    int64_t  r191 ) {
    return ( (  l189 ) - (  r191 ) );
}

static  uint8_t *   cast897 (    size_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed895 (    uint8_t  x573 ) {
    size_t  temp896 = ( (  zeroed678 ) ( ) );
    size_t *  y574 = ( &temp896 );
    uint8_t *  yp575 = ( (  cast897 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u8_dash_size894 (    uint8_t  x663 ) {
    return ( (  cast_dash_on_dash_zeroed895 ) ( (  x663 ) ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer893 (    uint8_t *  ptr681 ,    uint8_t  b683 ) {
    size_t  s684 = ( ( (size_t ) (  ptr681 ) ) );
    size_t  exp685 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add232 ( (  op_dash_sub304 ( (  s684 ) , ( (  u8_dash_size894 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer209 ) ( (  ptr681 ) ) ) ) ) ) ) , (  op_dash_mul245 ( (  exp685 ) , ( (  u8_dash_size894 ) ( (  b683 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast898 (    size_t  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_57   from_dash_u8892 (    uint8_t  b772 ) {
    uint8_t *  ptr773 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer893 ) ( ( ( (  cast898 ) ( ( (  u8_dash_size894 ) ( (  b772 ) ) ) ) ) ) ,  (  from_dash_integral212 ( 103 ) ) ) );
    return ( (struct Char_57) { .f_ptr = (  ptr773 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_606   next880 (    struct IntStrIter_872 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_606_Just ) ( ( (  from_dash_charlike221 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp317 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
    }
    int64_t  trim_dash_down1423 = ( (  pow881 ) ( (  from_dash_integral303 ( 10 ) ) ,  (  op_dash_sub812 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    int64_t  upper1424 = (  op_dash_div889 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    int64_t  upper_dash_mask1425 = (  op_dash_mul230 ( (  op_dash_div889 ( (  upper1424 ) , (  from_dash_integral303 ( 10 ) ) ) ) , (  from_dash_integral303 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast890 ) ( (  op_dash_sub891 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub812 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8892 ) ( (  op_dash_add782 ( (  digit1426 ) , (  from_dash_integral212 ( 48 ) ) ) ) ) );
    return ( ( Maybe_606_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_606   next879 (    struct StrConcatIter_871 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next880 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next878 (    struct StrConcatIter_870 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next879 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next900 (    enum EmptyIter_874 *  dref792 ) {
    return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
}

static  struct Maybe_606   next899 (    struct AppendIter_873 *  self1022 ) {
    struct Maybe_606  dref1023 = ( (  next900 ) ( ( & ( ( * (  self1022 ) ) .f_it ) ) ) );
    if ( dref1023.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1023 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1023.tag == Maybe_606_None_t ) {
            if ( ( ! ( ( * (  self1022 ) ) .f_appended ) ) ) {
                (*  self1022 ) .f_appended = ( true );
                return ( ( Maybe_606_Just ) ( ( ( * (  self1022 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
        }
    }
}

static  struct Maybe_606   next877 (    struct StrConcatIter_869 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next878 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each868 (    struct StrConcatIter_869  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrConcatIter_869  temp875 = ( (  into_dash_iter876 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_869 *  it1077 = ( &temp875 );
    while ( ( true ) ) {
        struct Maybe_606  dref1078 = ( (  next877 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_606_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_606_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_606_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_185   cmp909 (    int64_t  l154 ,    int64_t  r156 ) {
    return ( builtin_int64_tcmp( (  l154 ) , (  r156 ) ) );
}

static  int64_t   op_dash_neg910 (    int64_t  l204 ) {
    return ( (  from_dash_integral303 ( 0 ) ) - (  l204 ) );
}

static  bool   eq912 (    int64_t  l101 ,    int64_t  r103 ) {
    return ( (  l101 ) == (  r103 ) );
}

static  int32_t   count_dash_digits911 (    int64_t  self1430 ) {
    if ( (  eq912 ( (  self1430 ) , (  from_dash_integral303 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp909 ( (  self1430 ) , (  from_dash_integral303 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div889 ( (  self1430 ) , (  from_dash_integral303 ( 10 ) ) ) );
        digits1431 = (  op_dash_add274 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_872   int_dash_iter908 (    int64_t  int1434 ) {
    if ( (  cmp909 ( (  int1434 ) , (  from_dash_integral303 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_872) { .f_int = (  op_dash_neg910 ( (  int1434 ) ) ) , .f_len = ( (  count_dash_digits911 ) ( (  op_dash_neg910 ( (  int1434 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_872) { .f_int = (  int1434 ) , .f_len = ( (  count_dash_digits911 ) ( (  int1434 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_872   chars907 (    int64_t  self1461 ) {
    return ( (  int_dash_iter908 ) ( (  self1461 ) ) );
}

static  struct StrConcatIter_871   into_dash_iter906 (    struct StrConcat_864  dref1498 ) {
    return ( (struct StrConcatIter_871) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars907 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_871   chars905 (    struct StrConcat_864  self1509 ) {
    return ( (  into_dash_iter906 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_870   into_dash_iter904 (    struct StrConcat_867  dref1498 ) {
    return ( (struct StrConcatIter_870) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars905 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_870   chars903 (    struct StrConcat_867  self1509 ) {
    return ( (  into_dash_iter904 ) ( (  self1509 ) ) );
}

static  enum EmptyIter_874   into_dash_iter917 (    enum EmptyIter_874  self790 ) {
    return (  self790 );
}

static  struct AppendIter_873   append916 (    enum EmptyIter_874  it1006 ,    struct Char_57  e1008 ) {
    return ( (struct AppendIter_873) { .f_it = ( (  into_dash_iter917 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_873   cons915 (    enum EmptyIter_874  it1011 ,    struct Char_57  e1013 ) {
    return ( (  append916 ) ( (  it1011 ) ,  (  e1013 ) ) );
}

static  enum EmptyIter_874   nil918 (  ) {
    return ( EmptyIter_874_EmptyIter );
}

static  struct AppendIter_873   single914 (    struct Char_57  e1016 ) {
    return ( (  cons915 ) ( ( (  nil918 ) ( ) ) ,  (  e1016 ) ) );
}

static  struct AppendIter_873   chars913 (    struct Char_57  self1407 ) {
    return ( (  single914 ) ( (  self1407 ) ) );
}

static  struct StrConcatIter_869   into_dash_iter902 (    struct StrConcat_866  dref1498 ) {
    return ( (struct StrConcatIter_869) { .f_left = ( (  chars903 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_869   chars901 (    struct StrConcat_866  self1509 ) {
    return ( (  into_dash_iter902 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print865 (    struct StrConcat_866  s1701 ) {
    ( (  for_dash_each868 ) ( ( (  chars901 ) ( (  s1701 ) ) ) ,  (  printf_dash_char204 ) ) );
    return ( Unit_7_Unit );
}

static  enum MouseButton_724   undefined919 (  ) {
    enum MouseButton_724  temp920;
    return (  temp920 );
}

static  enum MouseButton_724   panic_prime_863 (    struct StrConcat_864  errmsg1715 ) {
    ( (  print865 ) ( ( ( StrConcat_866_StrConcat ) ( ( ( StrConcat_867_StrConcat ) ( ( (  from_dash_string220 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1715 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined919 ) ( ) );
}

static  enum MouseButton_724   btn_dash_to_dash_mouse_dash_button861 (    int64_t  btn3337 ) {
    return ( {  int32_t  dref3338 = ( (  i64_dash_i32862 ) ( (  btn3337 ) ) ) ;  dref3338 == 0 ? ( MouseButton_724_MouseLeft ) :  dref3338 == 1 ? ( MouseButton_724_MouseMiddle ) :  dref3338 == 2 ? ( MouseButton_724_MouseRight ) :  dref3338 == 64 ? ( MouseButton_724_ScrollUp ) :  dref3338 == 65 ? ( MouseButton_724_ScrollDown ) : ( (  panic_prime_863 ) ( ( ( StrConcat_864_StrConcat ) ( ( (  from_dash_string220 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3337 ) ) ) ) ) ; } );
}

static  struct Scanner_807   mk922 (    struct StrView_21  s3166 ) {
    return ( (struct Scanner_807) { .f_s = ( (  into_dash_iter609 ) ( (  s3166 ) ) ) } );
}

static  struct Maybe_721   parse_dash_csi801 (    struct Slice_802  seq3344 ) {
    if ( (  eq239 ( ( (  seq3344 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_721) { .tag = Maybe_721_None_t } );
    }
    char  last3345 = (  elem_dash_get803 ( (  seq3344 ) , (  op_dash_sub304 ( ( (  seq3344 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq786 ( (  elem_dash_get803 ( (  seq3344 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike787 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq786 ( (  last3345 ) , ( (  from_dash_charlike787 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq786 ( (  last3345 ) , ( (  from_dash_charlike787 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_807  temp808 = ( (  mk_dash_from_dash_str809 ) ( ( (  substr810 ) ( ( (  from_dash_ascii_dash_slice817 ) ( (  seq3344 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3344 ) .f_count ) ) ) ) );
        struct Scanner_807 *  sc3346 = ( &temp808 );
        struct Maybe_820  dref3347 = ( (  scan_dash_int821 ) ( (  sc3346 ) ) );
        if ( dref3347.tag == Maybe_820_None_t ) {
            return ( (struct Maybe_721) { .tag = Maybe_721_None_t } );
        }
        else {
            if ( dref3347.tag == Maybe_820_Just_t ) {
                ( (  next830 ) ( (  sc3346 ) ) );
                struct Maybe_820  dref3349 = ( (  scan_dash_int821 ) ( (  sc3346 ) ) );
                if ( dref3349.tag == Maybe_820_None_t ) {
                    return ( (struct Maybe_721) { .tag = Maybe_721_None_t } );
                }
                else {
                    if ( dref3349.tag == Maybe_820_Just_t ) {
                        ( (  next830 ) ( (  sc3346 ) ) );
                        struct Maybe_820  dref3351 = ( (  scan_dash_int821 ) ( (  sc3346 ) ) );
                        if ( dref3351.tag == Maybe_820_None_t ) {
                            return ( (struct Maybe_721) { .tag = Maybe_721_None_t } );
                        }
                        else {
                            if ( dref3351.tag == Maybe_820_Just_t ) {
                                return ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Mouse ) ( ( (struct MouseEvent_723) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button861 ) ( ( dref3347 .stuff .Maybe_820_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub812 ( ( (  i64_dash_i32862 ) ( ( dref3349 .stuff .Maybe_820_Just_s .field0 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) , .f_y = (  op_dash_sub812 ( ( (  i64_dash_i32862 ) ( ( dref3351 .stuff .Maybe_820_Just_s .field0 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) , .f_pressed = (  eq786 ( (  last3345 ) , ( (  from_dash_charlike787 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq239 ( ( (  seq3344 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq786 ( (  last3345 ) , ( (  from_dash_charlike787 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_Up_t } ) ) ) ) );
        }
        if ( (  eq786 ( (  last3345 ) , ( (  from_dash_charlike787 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_Down_t } ) ) ) ) );
        }
        if ( (  eq786 ( (  last3345 ) , ( (  from_dash_charlike787 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_Right_t } ) ) ) ) );
        }
        if ( (  eq786 ( (  last3345 ) , ( (  from_dash_charlike787 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_Left_t } ) ) ) ) );
        }
        if ( (  eq786 ( (  last3345 ) , ( (  from_dash_charlike787 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_Home_t } ) ) ) ) );
        }
        if ( (  eq786 ( (  last3345 ) , ( (  from_dash_charlike787 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_721) { .tag = Maybe_721_None_t } );
    }
    if ( (  eq786 ( (  last3345 ) , ( (  from_dash_charlike787 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_807  temp921 = ( (  mk922 ) ( ( (  from_dash_ascii_dash_slice817 ) ( (  seq3344 ) ) ) ) );
        struct Scanner_807 *  sc3353 = ( &temp921 );
        struct Maybe_820  dref3354 = ( (  scan_dash_int821 ) ( (  sc3353 ) ) );
        if ( dref3354.tag == Maybe_820_None_t ) {
            return ( (struct Maybe_721) { .tag = Maybe_721_None_t } );
        }
        else {
            if ( dref3354.tag == Maybe_820_Just_t ) {
                return ( {  int32_t  dref3356 = ( (  i64_dash_i32862 ) ( ( dref3354 .stuff .Maybe_820_Just_s .field0 ) ) ) ;  dref3356 == 1 ? ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_Home_t } ) ) ) ) ) :  dref3356 == 2 ? ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_Insert_t } ) ) ) ) ) :  dref3356 == 3 ? ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_Delete_t } ) ) ) ) ) :  dref3356 == 4 ? ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_End_t } ) ) ) ) ) :  dref3356 == 5 ? ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_PageUp_t } ) ) ) ) ) :  dref3356 == 6 ? ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_PageDown_t } ) ) ) ) ) :  dref3356 == 15 ? ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_F5_t } ) ) ) ) ) :  dref3356 == 17 ? ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_F6_t } ) ) ) ) ) :  dref3356 == 18 ? ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_F7_t } ) ) ) ) ) :  dref3356 == 19 ? ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_F8_t } ) ) ) ) ) :  dref3356 == 20 ? ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_F9_t } ) ) ) ) ) :  dref3356 == 21 ? ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_F10_t } ) ) ) ) ) :  dref3356 == 23 ? ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_F11_t } ) ) ) ) ) :  dref3356 == 24 ? ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_F12_t } ) ) ) ) ) : ( (struct Maybe_721) { .tag = Maybe_721_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_721) { .tag = Maybe_721_None_t } );
}

static  struct Slice_802   subslice923 (    struct Slice_802  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    char *  begin_dash_ptr1787 = ( (  offset_dash_ptr799 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp184 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp184 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_802) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub304 ( ( (  min331 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_802) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  char *   cast925 (    struct Array_789 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_802   as_dash_slice924 (    struct Array_789 *  arr2272 ) {
    return ( (struct Slice_802) { .f_ptr = ( (  cast925 ) ( (  arr2272 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_927 {
    enum {
        Maybe_927_None_t,
        Maybe_927_Just_t,
    } tag;
    union {
        struct {
            struct Key_153  field0;
        } Maybe_927_Just_s;
    } stuff;
};

static struct Maybe_927 Maybe_927_Just (  struct Key_153  field0 ) {
    return ( struct Maybe_927 ) { .tag = Maybe_927_Just_t, .stuff = { .Maybe_927_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_927   parse_dash_ss3928 (    char  c3341 ) {
    if ( (  eq786 ( (  c3341 ) , ( (  from_dash_charlike787 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_927_Just ) ( ( (struct Key_153) { .tag = Key_153_Up_t } ) ) );
    }
    if ( (  eq786 ( (  c3341 ) , ( (  from_dash_charlike787 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_927_Just ) ( ( (struct Key_153) { .tag = Key_153_Down_t } ) ) );
    }
    if ( (  eq786 ( (  c3341 ) , ( (  from_dash_charlike787 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_927_Just ) ( ( (struct Key_153) { .tag = Key_153_Right_t } ) ) );
    }
    if ( (  eq786 ( (  c3341 ) , ( (  from_dash_charlike787 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_927_Just ) ( ( (struct Key_153) { .tag = Key_153_Left_t } ) ) );
    }
    if ( (  eq786 ( (  c3341 ) , ( (  from_dash_charlike787 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_927_Just ) ( ( (struct Key_153) { .tag = Key_153_Home_t } ) ) );
    }
    if ( (  eq786 ( (  c3341 ) , ( (  from_dash_charlike787 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_927_Just ) ( ( (struct Key_153) { .tag = Key_153_End_t } ) ) );
    }
    if ( (  eq786 ( (  c3341 ) , ( (  from_dash_charlike787 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_927_Just ) ( ( (struct Key_153) { .tag = Key_153_F1_t } ) ) );
    }
    if ( (  eq786 ( (  c3341 ) , ( (  from_dash_charlike787 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_927_Just ) ( ( (struct Key_153) { .tag = Key_153_F2_t } ) ) );
    }
    if ( (  eq786 ( (  c3341 ) , ( (  from_dash_charlike787 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_927_Just ) ( ( (struct Key_153) { .tag = Key_153_F3_t } ) ) );
    }
    if ( (  eq786 ( (  c3341 ) , ( (  from_dash_charlike787 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_927_Just ) ( ( (struct Key_153) { .tag = Key_153_F4_t } ) ) );
    }
    return ( (struct Maybe_927) { .tag = Maybe_927_None_t } );
}

static  struct Maybe_721   read_dash_key733 (  ) {
    char  temp734 = ( (  undefined735 ) ( ) );
    char *  ch3358 = ( &temp734 );
    struct Maybe_737  dref3359 = ( (  read_dash_byte738 ) ( (  from_dash_integral48 ( 0 ) ) ) );
    if ( dref3359.tag == Maybe_737_None_t ) {
        return ( (struct Maybe_721) { .tag = Maybe_721_None_t } );
    }
    else {
        if ( dref3359.tag == Maybe_737_Just_t ) {
            (*  ch3358 ) = ( dref3359 .stuff .Maybe_737_Just_s .field0 );
        }
    }
    if ( (  eq208 ( ( (  ascii_dash_u8745 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral212 ( 13 ) ) ) ) ) {
        return ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_Enter_t } ) ) ) ) );
    }
    if ( (  eq208 ( ( (  ascii_dash_u8745 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral212 ( 127 ) ) ) ) ) {
        return ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp225 ( ( (  ascii_dash_u8745 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral212 ( 27 ) ) ) == 0 ) && ( !  eq208 ( ( (  ascii_dash_u8745 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral212 ( 9 ) ) ) ) ) ) {
        char  letter3361 = ( (  u8_dash_ascii746 ) ( ( (  u32_dash_u8218 ) ( ( (  u32_dash_or557 ) ( ( (  u8_dash_u32747 ) ( ( (  ascii_dash_u8745 ) ( ( * (  ch3358 ) ) ) ) ) ) ,  ( (  from_dash_hex751 ) ( ( (  from_dash_string220 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( ( Key_153_Ctrl ) ( (  letter3361 ) ) ) ) ) ) );
    }
    if ( ( !  eq208 ( ( (  ascii_dash_u8745 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral212 ( 27 ) ) ) ) ) {
        if ( (  cmp225 ( ( (  ascii_dash_u8745 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral212 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key733 ) ( ) );
        } else {
            return ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( ( Key_153_Char ) ( ( * (  ch3358 ) ) ) ) ) ) ) );
        }
    }
    char  temp785 = ( (  undefined735 ) ( ) );
    char *  ch23362 = ( &temp785 );
    struct Maybe_737  dref3363 = ( (  read_dash_byte738 ) ( (  from_dash_integral48 ( 50 ) ) ) );
    if ( dref3363.tag == Maybe_737_None_t ) {
        return ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3363.tag == Maybe_737_Just_t ) {
            (*  ch23362 ) = ( dref3363 .stuff .Maybe_737_Just_s .field0 );
        }
    }
    if ( (  eq786 ( ( * (  ch23362 ) ) , ( (  from_dash_charlike787 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_789  temp790 = ( ( (  zeroed791 ) ( ) ) );
        struct Array_789 *  seq3365 = ( &temp790 );
        int32_t  slen3366 = (  from_dash_integral48 ( 0 ) );
        while ( (  cmp317 ( (  slen3366 ) , (  from_dash_integral48 ( 31 ) ) ) == 0 ) ) {
            char  temp795 = ( (  undefined735 ) ( ) );
            char *  sc3367 = ( &temp795 );
            struct Maybe_737  dref3368 = ( (  read_dash_byte738 ) ( (  from_dash_integral48 ( 50 ) ) ) );
            if ( dref3368.tag == Maybe_737_None_t ) {
                break;
            }
            else {
                if ( dref3368.tag == Maybe_737_Just_t ) {
                    (*  sc3367 ) = ( dref3368 .stuff .Maybe_737_Just_s .field0 );
                }
            }
            ( (  set796 ) ( (  seq3365 ) ,  ( (  i32_dash_size262 ) ( (  slen3366 ) ) ) ,  ( * (  sc3367 ) ) ) );
            slen3366 = (  op_dash_add274 ( (  slen3366 ) , (  from_dash_integral48 ( 1 ) ) ) );
            if ( ( (  cmp225 ( ( (  ascii_dash_u8745 ) ( ( * (  sc3367 ) ) ) ) , (  from_dash_integral212 ( 64 ) ) ) != 0 ) && (  cmp225 ( ( (  ascii_dash_u8745 ) ( ( * (  sc3367 ) ) ) ) , (  from_dash_integral212 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi801 ) ( ( (  subslice923 ) ( ( (  as_dash_slice924 ) ( (  seq3365 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size262 ) ( (  slen3366 ) ) ) ) ) ) );
    }
    if ( (  eq786 ( ( * (  ch23362 ) ) , ( (  from_dash_charlike787 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp926 = ( (  undefined735 ) ( ) );
        char *  sc3370 = ( &temp926 );
        struct Maybe_737  dref3371 = ( (  read_dash_byte738 ) ( (  from_dash_integral48 ( 50 ) ) ) );
        if ( dref3371.tag == Maybe_737_None_t ) {
            return ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3371.tag == Maybe_737_Just_t ) {
                (*  sc3370 ) = ( dref3371 .stuff .Maybe_737_Just_s .field0 );
            }
        }
        struct Maybe_927  dref3373 = ( (  parse_dash_ss3928 ) ( ( * (  sc3370 ) ) ) );
        if ( dref3373.tag == Maybe_927_None_t ) {
            return ( (struct Maybe_721) { .tag = Maybe_721_None_t } );
        }
        else {
            if ( dref3373.tag == Maybe_927_Just_t ) {
                return ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( dref3373 .stuff .Maybe_927_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_721_Just ) ( ( ( InputEvent_722_Key ) ( ( (struct Key_153) { .tag = Key_153_Escape_t } ) ) ) ) );
}

static  struct Maybe_721   read_dash_event730 (   struct env71* env ,    struct Tui_73 *  tui3383 ) {
    struct envunion72  temp731 = ( (struct envunion72){ .fun = (  bool  (*) (  struct env70*  ,    struct Tui_73 *  ) )update_dash_dimensions732 , .env =  env->envinst70 } );
    ( temp731.fun ( &temp731.env ,  (  tui3383 ) ) );
    struct Maybe_721  dref3384 = ( (  read_dash_key733 ) ( ) );
    if ( dref3384.tag == Maybe_721_None_t ) {
        return ( (struct Maybe_721) { .tag = Maybe_721_None_t } );
    }
    else {
        if ( dref3384.tag == Maybe_721_Just_t ) {
            (*  tui3383 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_721_Just ) ( ( dref3384 .stuff .Maybe_721_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_721   lam728 (   struct env719* env ) {
    struct envunion720  temp729 = ( (struct envunion720){ .fun = (  struct Maybe_721  (*) (  struct env71*  ,    struct Tui_73 *  ) )read_dash_event730 , .env =  env->envinst71 } );
    return ( temp729.fun ( &temp729.env ,  ( env->tui4271 ) ) );
}

static  struct Maybe_721   next930 (    struct FunIter_718 *  self1031 ) {
    if ( ( ( * (  self1031 ) ) .f_finished ) ) {
        return ( (struct Maybe_721) { .tag = Maybe_721_None_t } );
    }
    struct envunion725  temp931 = ( ( * (  self1031 ) ) .f_fun );
    struct Maybe_721  dref1032 = ( temp931.fun ( &temp931.env ) );
    if ( dref1032.tag == Maybe_721_Just_t ) {
        return ( ( Maybe_721_Just ) ( ( dref1032 .stuff .Maybe_721_Just_s .field0 ) ) );
    }
    else {
        if ( dref1032.tag == Maybe_721_None_t ) {
            (*  self1031 ) .f_finished = ( true );
            return ( (struct Maybe_721) { .tag = Maybe_721_None_t } );
        }
    }
}

struct env934 {
    struct Editor_136 *  ed4157;
    ;
};

struct envunion935 {
    enum Unit_7  (*fun) (  struct env934*  ,    struct StrView_21  );
    struct env934 env;
};

static  enum Unit_7   if_dash_just933 (    struct Maybe_140  x1291 ,   struct envunion935  fun1293 ) {
    struct Maybe_140  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_140_Just_t ) {
        struct envunion935  temp936 = (  fun1293 );
        ( temp936.fun ( &temp936.env ,  ( dref1294 .stuff .Maybe_140_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_140_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   free938 (    struct StrView_21  s2167 ,    enum CAllocator_9  al2169 ) {
    ( (  free372 ) ( (  al2169 ) ,  ( (struct Slice_12) { .f_ptr = ( ( (  s2167 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam937 (   struct env934* env ,    struct StrView_21  msg4159 ) {
    ( (  free938 ) ( (  msg4159 ) ,  ( ( * ( env->ed4157 ) ) .f_al ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   reset_dash_msg932 (    struct Editor_136 *  ed4157 ) {
    struct env934 envinst934 = {
        .ed4157 =  ed4157 ,
    };
    ( (  if_dash_just933 ) ( ( ( * (  ed4157 ) ) .f_msg ) ,  ( (struct envunion935){ .fun = (  enum Unit_7  (*) (  struct env934*  ,    struct StrView_21  ) )lam937 , .env =  envinst934 } ) ) );
    (*  ed4157 ) .f_msg = ( (struct Maybe_140) { .tag = Maybe_140_None_t } );
    return ( Unit_7_Unit );
}

struct envunion940 {
    enum Unit_7  (*fun) (  struct env151*  ,    struct Editor_136 *  ,    struct Key_153  );
    struct env151 env;
};

enum CursorMovement_946 {
    CursorMovement_946_NoChanges,
    CursorMovement_946_UpdateVI,
    CursorMovement_946_OverrideSelect,
};

struct Tuple2_948 {
    enum CursorMovement_946  field0;
    enum CursorMovement_946  field1;
};

static struct Tuple2_948 Tuple2_948_Tuple2 (  enum CursorMovement_946  field0 ,  enum CursorMovement_946  field1 ) {
    return ( struct Tuple2_948 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq947 (    enum CursorMovement_946  l3942 ,    enum CursorMovement_946  r3944 ) {
    return ( {  struct Tuple2_948  dref3945 = ( ( Tuple2_948_Tuple2 ) ( (  l3942 ) ,  (  r3944 ) ) ) ;  dref3945 .field0 == CursorMovement_946_NoChanges &&  dref3945 .field1 == CursorMovement_946_NoChanges ? ( true ) :  dref3945 .field0 == CursorMovement_946_UpdateVI &&  dref3945 .field1 == CursorMovement_946_UpdateVI ? ( true ) :  dref3945 .field0 == CursorMovement_946_OverrideSelect &&  dref3945 .field1 == CursorMovement_946_OverrideSelect ? ( true ) : ( false ) ; } );
}

static  struct StrView_21   from_dash_bytes952 (    struct Slice_12  sl2152 ) {
    return ( (struct StrView_21) { .f_contents = (  sl2152 ) } );
}

static  struct StrView_21   line951 (    struct TextBuf_88 *  self3629 ,    int32_t  li3631 ) {
    return ( (  from_dash_bytes952 ) ( ( (  to_dash_slice332 ) ( ( (  get325 ) ( ( & ( ( * (  self3629 ) ) .f_buf ) ) ,  ( (  i32_dash_size262 ) ( (  li3631 ) ) ) ) ) ) ) ) );
}

static  int32_t   maybe955 (    struct Maybe_140  x1282 ,    int32_t (*  fun1284 )(    struct StrView_21  ) ,    int32_t  default1286 ) {
    return ( {  struct Maybe_140  dref1287 = (  x1282 ) ; dref1287.tag == Maybe_140_Just_t ? ( (  fun1284 ) ( ( dref1287 .stuff .Maybe_140_Just_s .field0 ) ) ) : (  default1286 ) ; } );
}

static  struct Maybe_140   char_dash_replacement956 (    struct Char_57  c3835 ) {
    if ( (  eq403 ( (  c3835 ) , ( (  from_dash_charlike221 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_140_Just ) ( ( (  from_dash_string220 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_140) { .tag = Maybe_140_None_t } );
    }
}

static  size_t   reduce959 (    struct StrViewIter_603  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_57  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct StrViewIter_603  it1099 = ( (  into_dash_iter605 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_606  dref1100 = ( (  next607 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_606_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_606_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_606_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp960 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp960);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp961;
    return (  temp961 );
}

static  size_t   lam962 (    struct Char_57  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add232 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count958 (    struct StrViewIter_603  it1104 ) {
    return ( (  reduce959 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam962 ) ) );
}

static  int32_t   lam957 (    struct StrView_21  s3840 ) {
    return ( (  size_dash_i32196 ) ( ( (  count958 ) ( ( (  chars608 ) ( (  s3840 ) ) ) ) ) ) );
}

static  int32_t   max964 (    int32_t  l1315 ,    int32_t  r1317 ) {
    if ( (  cmp317 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  void *   cast_dash_ptr970 (    wchar_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of971 (    wchar_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  wchar_t   zeroed968 (  ) {
    wchar_t  temp969;
    wchar_t  x570 = (  temp969 );
    ( ( memset ) ( ( (  cast_dash_ptr970 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of971 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr972 (    uint8_t *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  size_t   cast973 (    int64_t  x356 ) {
    return ( (size_t ) (  x356 ) );
}

struct TypeSize_976 {
    size_t  f_size;
};

static  struct TypeSize_976   get_dash_typesize975 (  ) {
    wchar_t  temp977;
    return ( (struct TypeSize_976) { .f_size = ( sizeof( ( (  temp977 ) ) ) ) } );
}

static  wchar_t   cast979 (    uint32_t  x356 ) {
    return ( (wchar_t ) (  x356 ) );
}

static  wchar_t   to_dash_c_dash_wchar966 (    struct Char_57  c750 ) {
    struct CharDestructured_205  dref751 = ( (  destructure207 ) ( (  c750 ) ) );
    if ( dref751.tag == CharDestructured_205_Ref_t ) {
        wchar_t  temp967 = ( (  zeroed968 ) ( ) );
        wchar_t *  wcp753 = ( &temp967 );
        size_t  num_dash_chars754 = ( ( mbstowcs ) ( (  wcp753 ) ,  ( (  cast_dash_ptr972 ) ( ( ( dref751 .stuff .CharDestructured_205_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq239 ( (  num_dash_chars754 ) , ( ( (  cast973 ) ( ( (  op_dash_neg910 ( (  from_dash_integral303 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp974 = ( (  from_dash_string49 ) ( ( "could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp974);
            exit ( 1 );
            ( Unit_7_Unit );
        }
        return ( * (  wcp753 ) );
    }
    else {
        if ( dref751.tag == CharDestructured_205_Scalar_t ) {
            if ( ( ! (  eq239 ( ( (  size_dash_of645 ) ( ( ( dref751 .stuff .CharDestructured_205_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize975 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp978 = ( (  from_dash_string49 ) ( ( "Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp978);
                exit ( 1 );
                ( Unit_7_Unit );
            }
            return ( (  cast979 ) ( ( ( dref751 .stuff .CharDestructured_205_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth965 (    struct Char_57  c2572 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar966 ) ( (  c2572 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth963 (    struct Char_57  c3428 ) {
    return ( (  max964 ) ( ( (  wcwidth965 ) ( (  c3428 ) ) ) ,  (  from_dash_integral48 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width954 (    struct Char_57  c3838 ) {
    return ( (  maybe955 ) ( ( (  char_dash_replacement956 ) ( (  c3838 ) ) ) ,  (  lam957 ) ,  ( (  rendered_dash_wcwidth963 ) ( (  c3838 ) ) ) ) );
}

static  int32_t   pos_dash_vi949 (    struct TextBuf_88 *  self3854 ,    struct Pos_20  pos3856 ) {
    int32_t  bi3857 = ( (  from_dash_integral48 ( 0 ) ) );
    int32_t  vi3858 = (  from_dash_integral48 ( 0 ) );
    struct StrViewIter_603  temp950 =  into_dash_iter605 ( ( (  chars608 ) ( ( (  line951 ) ( (  self3854 ) ,  ( (  pos3856 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_606  __cond953 =  next607 (&temp950);
        if (  __cond953 .tag == 0 ) {
            break;
        }
        struct Char_57  c3860 =  __cond953 .stuff .Maybe_606_Just_s .field0;
        bi3857 = (  op_dash_add274 ( (  bi3857 ) , ( (  size_dash_i32196 ) ( ( (  c3860 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp317 ( ( (  pos3856 ) .f_bi ) , (  bi3857 ) ) == 0 ) ) {
            break;
        }
        vi3858 = (  op_dash_add274 ( (  vi3858 ) , ( (  char_dash_screen_dash_width954 ) ( (  c3860 ) ) ) ) );
    }
    return (  vi3858 );
}

struct Tuple2_982 {
    enum Mode_138  field0;
    enum Mode_138  field1;
};

static struct Tuple2_982 Tuple2_982_Tuple2 (  enum Mode_138  field0 ,  enum Mode_138  field1 ) {
    return ( struct Tuple2_982 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq981 (    enum Mode_138  l3818 ,    enum Mode_138  r3820 ) {
    return ( {  struct Tuple2_982  dref3821 = ( ( Tuple2_982_Tuple2 ) ( (  l3818 ) ,  (  r3820 ) ) ) ;  dref3821 .field0 == Mode_138_Normal &&  dref3821 .field1 == Mode_138_Normal ? ( true ) :  dref3821 .field0 == Mode_138_Insert &&  dref3821 .field1 == Mode_138_Insert ? ( true ) :  dref3821 .field0 == Mode_138_Select &&  dref3821 .field1 == Mode_138_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_7   set_dash_sel980 (    struct Pane_137 *  self3931 ,    struct Maybe_28  sel3933 ) {
    if ( ( !  eq981 ( ( ( * (  self3931 ) ) .f_mode ) , ( Mode_138_Select ) ) ) ) {
        (*  self3931 ) .f_sel = (  sel3933 );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_cursors945 (    struct Pane_137 *  self3948 ,    struct Pos_20  cur3950 ,    struct Maybe_28  sel3952 ,    enum CursorMovement_946  cursor_dash_movement_dash_type3954 ) {
    if ( ( !  eq947 ( (  cursor_dash_movement_dash_type3954 ) , ( CursorMovement_946_NoChanges ) ) ) ) {
        (*  self3948 ) .f_vi = ( (  pos_dash_vi949 ) ( ( ( * (  self3948 ) ) .f_buf ) ,  (  cur3950 ) ) );
    }
    (*  self3948 ) .f_cursor = (  cur3950 );
    if ( ( !  eq947 ( (  cursor_dash_movement_dash_type3954 ) , ( CursorMovement_946_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel980 ) ( (  self3948 ) ,  (  sel3952 ) ) );
    } else {
        (*  self3948 ) .f_sel = (  sel3952 );
    }
    return ( Unit_7_Unit );
}

static  size_t   num_dash_bytes984 (    struct StrView_21  self2195 ) {
    return ( ( (  self2195 ) .f_contents ) .f_count );
}

static  size_t   clamp985 (    size_t  x1352 ,    size_t  mn1354 ,    size_t  mx1356 ) {
    if ( (  cmp184 ( (  x1352 ) , (  mn1354 ) ) == 0 ) ) {
        return (  mn1354 );
    } else {
        if ( (  cmp184 ( (  x1352 ) , (  mx1356 ) ) == 2 ) ) {
            return (  mx1356 );
        } else {
            return (  x1352 );
        }
    }
}

static  size_t   sync_dash_char987 (    uint8_t *  p692 ) {
    size_t  i693 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb694 = ( * ( (uint8_t * ) ( ( (void*) (  p692 ) ) + (  op_dash_neg910 ( ( (  size_dash_i64261 ) ( (  i693 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp225 ( (  pb694 ) , (  from_dash_integral212 ( 128 ) ) ) != 0 ) && (  cmp225 ( (  pb694 ) , (  op_dash_add782 ( (  from_dash_integral212 ( 128 ) ) , (  from_dash_integral212 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i693 );
        }
        i693 = (  op_dash_add232 ( (  i693 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char986 (    uint8_t *  p697 ) {
    return (  op_dash_add232 ( ( (  sync_dash_char987 ) ( ( (  offset_dash_ptr329 ) ( (  p697 ) ,  (  op_dash_neg910 ( (  from_dash_integral303 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_20   left_dash_pos983 (    struct TextBuf_88 *  self3650 ,    struct Pos_20  pos3652 ) {
    if ( (  eq319 ( (  pos3652 ) , ( (  mk298 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk298 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    }
    if ( (  eq320 ( ( (  pos3652 ) .f_bi ) , (  from_dash_integral48 ( 0 ) ) ) ) ) {
        ( (  assert477 ) ( (  cmp317 ( ( (  pos3652 ) .f_line ) , (  from_dash_integral48 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string220 ) ( ( "previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk298 ) ( (  op_dash_sub812 ( ( (  pos3652 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  ( (  size_dash_i32196 ) ( ( (  num_dash_bytes984 ) ( ( (  line951 ) ( (  self3650 ) ,  (  op_dash_sub812 ( ( (  pos3652 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_21  line3653 = ( (  line951 ) ( (  self3650 ) ,  ( (  pos3652 ) .f_line ) ) );
    size_t  pos_dash_bi3654 = ( (  clamp985 ) ( ( (  i32_dash_size262 ) ( ( (  pos3652 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes984 ) ( (  line3653 ) ) ) ) );
    size_t  off3655 = ( (  previous_dash_char986 ) ( ( (  offset_dash_ptr329 ) ( ( ( (  line3653 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  pos_dash_bi3654 ) ) ) ) ) ) );
    return ( (  mk298 ) ( ( (  pos3652 ) .f_line ) ,  ( (  size_dash_i32196 ) ( (  op_dash_sub304 ( (  pos_dash_bi3654 ) , (  off3655 ) ) ) ) ) ) );
}

static  enum Unit_7   move_dash_left944 (    struct Pane_137 *  self3960 ) {
    ( (  set_dash_cursors945 ) ( (  self3960 ) ,  ( (  left_dash_pos983 ) ( ( ( * (  self3960 ) ) .f_buf ) ,  ( ( * (  self3960 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_946_UpdateVI ) ) );
    return ( Unit_7_Unit );
}

static  struct Pane_137 *   pane988 (    struct Editor_136 *  ed4147 ) {
    return ( & ( ( * (  ed4147 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines991 (    struct TextBuf_88 *  self3634 ) {
    return ( (  size_dash_i32196 ) ( ( (  size321 ) ( ( & ( ( * (  self3634 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_20   right_dash_pos990 (    struct TextBuf_88 *  self3642 ,    struct Pos_20  pos3644 ) {
    if ( (  cmp317 ( ( (  pos3644 ) .f_line ) , ( (  num_dash_lines991 ) ( (  self3642 ) ) ) ) != 0 ) ) {
        return ( (  mk298 ) ( ( (  num_dash_lines991 ) ( (  self3642 ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    }
    struct StrView_21  line3645 = ( (  line951 ) ( (  self3642 ) ,  ( (  pos3644 ) .f_line ) ) );
    int64_t  bi3646 = ( (  i32_dash_i64860 ) ( ( (  pos3644 ) .f_bi ) ) );
    if ( (  cmp909 ( (  bi3646 ) , ( (  size_dash_i64261 ) ( ( (  num_dash_bytes984 ) ( (  line3645 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp317 ( (  op_dash_add274 ( ( (  pos3644 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) , ( (  num_dash_lines991 ) ( (  self3642 ) ) ) ) != 0 ) ) {
            return ( (  mk298 ) ( ( (  pos3644 ) .f_line ) ,  ( (  size_dash_i32196 ) ( ( (  num_dash_bytes984 ) ( (  line3645 ) ) ) ) ) ) );
        }
        return ( (  mk298 ) ( (  op_dash_add274 ( ( (  pos3644 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    }
    int32_t  off3647 = ( (  size_dash_i32196 ) ( ( (  next_dash_char224 ) ( ( (  offset_dash_ptr329 ) ( ( ( (  line3645 ) .f_contents ) .f_ptr ) ,  (  bi3646 ) ) ) ) ) ) );
    return ( (  mk298 ) ( ( (  pos3644 ) .f_line ) ,  (  op_dash_add274 ( ( (  pos3644 ) .f_bi ) , (  off3647 ) ) ) ) );
}

static  enum Unit_7   move_dash_right989 (    struct Pane_137 *  self3957 ) {
    ( (  set_dash_cursors945 ) ( (  self3957 ) ,  ( (  right_dash_pos990 ) ( ( ( * (  self3957 ) ) .f_buf ) ,  ( ( * (  self3957 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_946_UpdateVI ) ) );
    return ( Unit_7_Unit );
}

static  int32_t   vi_dash_bi993 (    struct TextBuf_88 *  self3843 ,    int32_t  ln3845 ,    int32_t  vx3847 ) {
    int32_t  bi3848 = ( (  from_dash_integral48 ( 0 ) ) );
    int32_t  vi3849 = (  from_dash_integral48 ( 0 ) );
    struct StrViewIter_603  temp994 =  into_dash_iter605 ( ( (  chars608 ) ( ( (  line951 ) ( (  self3843 ) ,  (  ln3845 ) ) ) ) ) );
    while (true) {
        struct Maybe_606  __cond995 =  next607 (&temp994);
        if (  __cond995 .tag == 0 ) {
            break;
        }
        struct Char_57  c3851 =  __cond995 .stuff .Maybe_606_Just_s .field0;
        vi3849 = (  op_dash_add274 ( (  vi3849 ) , ( (  char_dash_screen_dash_width954 ) ( (  c3851 ) ) ) ) );
        if ( (  cmp317 ( (  vx3847 ) , (  vi3849 ) ) == 0 ) ) {
            break;
        }
        bi3848 = (  op_dash_add274 ( (  bi3848 ) , ( (  size_dash_i32196 ) ( ( (  c3851 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi3848 );
}

static  enum Unit_7   move_dash_down992 (    struct Pane_137 *  self3963 ) {
    struct Pos_20  cur3964 = ( ( * (  self3963 ) ) .f_cursor );
    if ( (  cmp317 ( (  op_dash_add274 ( ( (  cur3964 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) , ( (  num_dash_lines991 ) ( ( ( * (  self3963 ) ) .f_buf ) ) ) ) != 0 ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  vci3965 = ( ( * (  self3963 ) ) .f_vi );
    int32_t  bi3966 = ( (  vi_dash_bi993 ) ( ( ( * (  self3963 ) ) .f_buf ) ,  (  op_dash_add274 ( ( (  cur3964 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  vci3965 ) ) );
    ( (  set_dash_cursors945 ) ( (  self3963 ) ,  ( (struct Pos_20) { .f_line = (  op_dash_add274 ( ( (  cur3964 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) , .f_bi = (  bi3966 ) } ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_946_NoChanges ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   move_dash_up996 (    struct Pane_137 *  self3969 ) {
    struct Pos_20  cur3970 = ( ( * (  self3969 ) ) .f_cursor );
    if ( (  cmp317 ( ( (  cur3970 ) .f_line ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  vci3971 = ( ( * (  self3969 ) ) .f_vi );
    int32_t  bi3972 = ( (  vi_dash_bi993 ) ( ( ( * (  self3969 ) ) .f_buf ) ,  (  op_dash_sub812 ( ( (  cur3970 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  vci3971 ) ) );
    ( (  set_dash_cursors945 ) ( (  self3969 ) ,  ( (struct Pos_20) { .f_line = (  op_dash_sub812 ( ( (  cur3970 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) , .f_bi = (  bi3972 ) } ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_946_NoChanges ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   flush_dash_insert_dash_action998 (    struct TextBuf_88 *  self3715 ) {
    (*  self3715 ) .f_actions .f_input_dash_changeset = ( ChangesetInputType_90_NoChangeset );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_mode997 (    struct Pane_137 *  self3936 ,    enum Mode_138  mode3938 ) {
    if ( (  eq981 ( (  mode3938 ) , ( Mode_138_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action998 ) ( ( ( * (  self3936 ) ) .f_buf ) ) );
    }
    (*  self3936 ) .f_mode = (  mode3938 );
    return ( Unit_7_Unit );
}

struct TakeWhile_1003 {
    struct StrViewIter_603  f_it;
    bool (*  f_pred )(    struct Char_57  );
};

struct Map_1002 {
    struct TakeWhile_1003  field0;
    size_t (*  field1 )(    struct Char_57  );
};

static struct Map_1002 Map_1002_Map (  struct TakeWhile_1003  field0 ,  size_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1002 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1002   into_dash_iter1005 (    struct Map_1002  self796 ) {
    return (  self796 );
}

struct Maybe_1006 {
    enum {
        Maybe_1006_None_t,
        Maybe_1006_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_1006_Just_s;
    } stuff;
};

static struct Maybe_1006 Maybe_1006_Just (  size_t  field0 ) {
    return ( struct Maybe_1006 ) { .tag = Maybe_1006_Just_t, .stuff = { .Maybe_1006_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_606   next1008 (    struct TakeWhile_1003 *  self964 ) {
    struct Maybe_606  mx965 = ( (  next607 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_606  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_606_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_606_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_606_Just ) ( ( dref966 .stuff .Maybe_606_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
            }
        }
    }
}

static  struct Maybe_1006   next1007 (    struct Map_1002 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1008 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_1006) { .tag = Maybe_1006_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_1006_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1004 (    struct Map_1002  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1002  it1099 = ( (  into_dash_iter1005 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1006  dref1100 = ( (  next1007 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1006_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1006_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1006_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1009 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1009);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1010;
    return (  temp1010 );
}

static  size_t   lam1011 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add232 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1001 (    struct Map_1002  it1110 ) {
    return ( (  reduce1004 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1011 ) ) );
}

static  struct TakeWhile_1003   into_dash_iter1013 (    struct TakeWhile_1003  self961 ) {
    return (  self961 );
}

static  struct Map_1002   map1012 (    struct TakeWhile_1003  iterable805 ,    size_t (*  fun807 )(    struct Char_57  ) ) {
    struct TakeWhile_1003  it808 = ( (  into_dash_iter1013 ) ( (  iterable805 ) ) );
    return ( ( Map_1002_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1003   take_dash_while1014 (    struct StrView_21  it970 ,    bool (*  pred972 )(    struct Char_57  ) ) {
    return ( (struct TakeWhile_1003) { .f_it = ( (  into_dash_iter609 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  bool   lam1015 (    struct Char_57  c4020 ) {
    return (  eq403 ( (  c4020 ) , ( (  from_dash_charlike221 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
}

static  size_t   lam1016 (    struct Char_57  c4022 ) {
    return ( (  c4022 ) .f_num_dash_bytes );
}

static  int32_t   indent_dash_at_dash_line1000 (    struct Pane_137 *  pane4016 ,    int32_t  line4018 ) {
    return ( (  size_dash_i32196 ) ( ( (  sum1001 ) ( ( (  map1012 ) ( ( (  take_dash_while1014 ) ( ( (  line951 ) ( ( ( * (  pane4016 ) ) .f_buf ) ,  (  line4018 ) ) ) ,  (  lam1015 ) ) ) ,  (  lam1016 ) ) ) ) ) ) );
}

static  enum Unit_7   move_dash_to_dash_beginning999 (    struct Pane_137 *  self4032 ) {
    struct Pos_20  cur4033 = ( ( * (  self4032 ) ) .f_cursor );
    int32_t  indent4034 = ( (  indent_dash_at_dash_line1000 ) ( (  self4032 ) ,  ( (  cur4033 ) .f_line ) ) );
    struct Pos_20  temp1017 = (  cur4033 );
    temp1017 .  f_bi = (  indent4034 );
    ( (  set_dash_cursors945 ) ( (  self4032 ) ,  ( temp1017 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_946_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   move_dash_to_dash_end1018 (    struct Pane_137 *  self4037 ) {
    struct Pos_20  cur4038 = ( ( * (  self4037 ) ) .f_cursor );
    struct Pos_20  temp1019 = (  cur4038 );
    temp1019 .  f_bi = ( (  size_dash_i32196 ) ( ( (  num_dash_bytes984 ) ( ( (  line951 ) ( ( ( * (  self4037 ) ) .f_buf ) ,  ( (  cur4038 ) .f_line ) ) ) ) ) ) );
    ( (  set_dash_cursors945 ) ( (  self4037 ) ,  ( temp1019 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_946_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

enum MoveDirection_1021 {
    MoveDirection_1021_MoveFwd,
    MoveDirection_1021_MoveBwd,
};

enum MoveTarget_1022 {
    MoveTarget_1022_NextWordStart,
    MoveTarget_1022_NextWordEnd,
};

static  struct Pos_20   own1024 (    struct Pos_20  x1251 ) {
    return (  x1251 );
}

struct env1025 {
    struct Pane_137 *  pane3993;
    ;
    enum MoveDirection_1021  dir3995;
    ;
    struct Pos_20 *  prev3998;
};

static  bool   is_dash_at_dash_line_dash_end1027 (    struct Pane_137 *  pane3975 ,    struct Pos_20  pos3977 ) {
    return (  eq239 ( ( (  i32_dash_size262 ) ( ( (  pos3977 ) .f_bi ) ) ) , ( (  num_dash_bytes984 ) ( ( (  line951 ) ( ( ( * (  pane3975 ) ) .f_buf ) ,  ( (  pos3977 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1026 (    struct Pane_137 *  pane3980 ) {
    return ( (  is_dash_at_dash_line_dash_end1027 ) ( (  pane3980 ) ,  ( ( * (  pane3980 ) ) .f_cursor ) ) );
}

struct envunion1029 {
    enum Unit_7  (*fun) (  struct env1025*  );
    struct env1025 env;
};

static  enum Unit_7   advance1030 (   struct env1025* env ) {
    (* env->prev3998 ) = ( ( * ( env->pane3993 ) ) .f_cursor );
    enum MoveDirection_1021  dref4000 = ( env->dir3995 );
    switch (  dref4000 ) {
        case MoveDirection_1021_MoveFwd : {
            ( (  move_dash_right989 ) ( ( env->pane3993 ) ) );
            break;
        }
        case MoveDirection_1021_MoveBwd : {
            ( (  move_dash_left944 ) ( ( env->pane3993 ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

enum CharType_1034 {
    CharType_1034_CharSpace,
    CharType_1034_CharWord,
    CharType_1034_CharPunctuation,
};

struct Tuple2_1035 {
    enum CharType_1034  field0;
    enum CharType_1034  field1;
};

static struct Tuple2_1035 Tuple2_1035_Tuple2 (  enum CharType_1034  field0 ,  enum CharType_1034  field1 ) {
    return ( struct Tuple2_1035 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1033 (    enum CharType_1034  l3799 ,    enum CharType_1034  r3801 ) {
    struct Tuple2_1035  dref3802 = ( ( Tuple2_1035_Tuple2 ) ( (  l3799 ) ,  (  r3801 ) ) );
    if (  dref3802 .field0 == CharType_1034_CharSpace &&  dref3802 .field1 == CharType_1034_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3802 .field0 == CharType_1034_CharWord &&  dref3802 .field1 == CharType_1034_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3802 .field0 == CharType_1034_CharPunctuation &&  dref3802 .field1 == CharType_1034_CharPunctuation ) {
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

static  struct Char_57   min1040 (    struct Char_57  l1236 ,    struct Char_57  r1238 ) {
    if ( (  cmp779 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Char_57   max1041 (    struct Char_57  l1315 ,    struct Char_57  r1317 ) {
    if ( (  cmp779 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  bool   between1039 (    struct Char_57  c1337 ,    struct Char_57  l1339 ,    struct Char_57  r1341 ) {
    struct Char_57  from1342 = ( (  min1040 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Char_57  to1343 = ( (  max1041 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp779 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp779 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_alpha1038 (    struct Char_57  c2388 ) {
    return ( ( (  cmp184 ( ( (  c2388 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between1039 ) ( (  c2388 ) ,  ( (  from_dash_charlike221 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1039 ) ( (  c2388 ) ,  ( (  from_dash_charlike221 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_digit1042 (    struct Char_57  c2391 ) {
    return ( (  eq239 ( ( (  c2391 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1039 ) ( (  c2391 ) ,  ( (  from_dash_charlike221 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1037 (    struct Char_57  c2394 ) {
    return ( ( (  is_dash_alpha1038 ) ( (  c2394 ) ) ) || ( (  is_dash_digit1042 ) ( (  c2394 ) ) ) );
}

static  bool   is_dash_whitespace1043 (    struct Char_57  c2379 ) {
    return ( ( (  eq403 ( (  c2379 ) , ( (  from_dash_charlike221 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq403 ( (  c2379 ) , ( (  from_dash_charlike221 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq403 ( (  c2379 ) , ( (  from_dash_charlike221 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_1034   char_dash_type1036 (    struct Char_57  c3805 ) {
    if ( ( ( ( (  is_dash_alphanumeric1037 ) ( (  c3805 ) ) ) || (  eq403 ( (  c3805 ) , ( (  from_dash_charlike221 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq403 ( (  c3805 ) , ( (  from_dash_charlike221 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1034_CharWord );
    } else {
        if ( ( (  is_dash_whitespace1043 ) ( (  c3805 ) ) ) ) {
            return ( CharType_1034_CharSpace );
        } else {
            return ( CharType_1034_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1032 (    struct Char_57  l3808 ,    struct Char_57  r3810 ) {
    return ( !  eq1033 ( ( (  char_dash_type1036 ) ( (  l3808 ) ) ) , ( (  char_dash_type1036 ) ( (  r3810 ) ) ) ) );
}

static  struct Char_57   or_dash_else1045 (    struct Maybe_606  self1732 ,    struct Char_57  alt1734 ) {
    struct Maybe_606  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_606_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_606_Just_t ) {
            return ( dref1735 .stuff .Maybe_606_Just_s .field0 );
        }
    }
}

static  struct Maybe_606   head1046 (    struct StrViewIter_603  it1142 ) {
    struct StrViewIter_603  temp1047 = ( (  into_dash_iter605 ) ( (  it1142 ) ) );
    return ( (  next607 ) ( ( &temp1047 ) ) );
}

static  struct Char_57   char_dash_at1044 (    struct Pane_137 *  pane3863 ,    struct Pos_20  pos3865 ) {
    struct StrView_21  line3866 = ( (  line951 ) ( ( ( * (  pane3863 ) ) .f_buf ) ,  ( (  pos3865 ) .f_line ) ) );
    return ( (  or_dash_else1045 ) ( ( (  head1046 ) ( ( (  chars608 ) ( ( (  byte_dash_substr385 ) ( (  line3866 ) ,  ( (  i32_dash_size262 ) ( ( (  pos3865 ) .f_bi ) ) ) ,  ( (  num_dash_bytes984 ) ( (  line3866 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
}

static  enum Unit_7   print1049 (    struct StrView_21  s1701 ) {
    ( (  for_dash_each602 ) ( ( (  chars608 ) ( (  s1701 ) ) ) ,  (  printf_dash_char204 ) ) );
    return ( Unit_7_Unit );
}

static  bool   undefined1050 (  ) {
    bool  temp1051;
    return (  temp1051 );
}

static  bool   todo1048 (  ) {
    ( (  print1049 ) ( ( (  from_dash_string220 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined1050 ) ( ) );
}

static  bool   reached_dash_target1031 (    struct Pane_137 *  pane3985 ,    enum MoveTarget_1022  target3987 ,    struct Pos_20  prev3989 ) {
    return ( {  enum MoveTarget_1022  dref3990 = (  target3987 ) ;  dref3990 == MoveTarget_1022_NextWordStart ? ( ( (  is_dash_word_dash_boundary1032 ) ( ( (  char_dash_at1044 ) ( (  pane3985 ) ,  (  prev3989 ) ) ) ,  ( (  char_dash_at1044 ) ( (  pane3985 ) ,  ( ( * (  pane3985 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1033 ( ( (  char_dash_type1036 ) ( ( (  char_dash_at1044 ) ( (  pane3985 ) ,  ( ( * (  pane3985 ) ) .f_cursor ) ) ) ) ) , ( CharType_1034_CharSpace ) ) ) ) ) :  dref3990 == MoveTarget_1022_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1032 ) ( ( (  char_dash_at1044 ) ( (  pane3985 ) ,  (  prev3989 ) ) ) ,  ( (  char_dash_at1044 ) ( (  pane3985 ) ,  ( ( * (  pane3985 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1033 ( ( (  char_dash_type1036 ) ( ( (  char_dash_at1044 ) ( (  pane3985 ) ,  (  prev3989 ) ) ) ) ) , ( CharType_1034_CharSpace ) ) ) ) ) : ( (  todo1048 ) ( ) ) ; } );
}

struct envunion1053 {
    enum Unit_7  (*fun) (  struct env1025*  );
    struct env1025 env;
};

struct envunion1055 {
    enum Unit_7  (*fun) (  struct env1025*  );
    struct env1025 env;
};

static  enum Unit_7   advance_dash_word1020 (    struct Pane_137 *  pane3993 ,    enum MoveDirection_1021  dir3995 ,    enum MoveTarget_1022  target3997 ) {
    struct Pos_20  temp1023 = ( (  own1024 ) ( ( ( * (  pane3993 ) ) .f_cursor ) ) );
    struct Pos_20 *  prev3998 = ( &temp1023 );
    struct env1025 envinst1025 = {
        .pane3993 =  pane3993 ,
        .dir3995 =  dir3995 ,
        .prev3998 =  prev3998 ,
    };
    struct Pos_20  sel4001 = ( ( * (  pane3993 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4002 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1026 ) ( (  pane3993 ) ) );
    struct envunion1029  temp1028 = ( (struct envunion1029){ .fun = (  enum Unit_7  (*) (  struct env1025*  ) )advance1030 , .env =  envinst1025 } );
    ( temp1028.fun ( &temp1028.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4002 ) || ( (  reached_dash_target1031 ) ( (  pane3993 ) ,  (  target3997 ) ,  ( * (  prev3998 ) ) ) ) ) ) {
        sel4001 = ( ( * (  pane3993 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1026 ) ( (  pane3993 ) ) ) ) {
        if ( (  eq319 ( ( ( * (  pane3993 ) ) .f_cursor ) , ( * (  prev3998 ) ) ) ) ) {
            return ( Unit_7_Unit );
        }
        struct envunion1053  temp1052 = ( (struct envunion1053){ .fun = (  enum Unit_7  (*) (  struct env1025*  ) )advance1030 , .env =  envinst1025 } );
        ( temp1052.fun ( &temp1052.env ) );
        sel4001 = ( ( * (  pane3993 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1055  temp1054 = ( (struct envunion1055){ .fun = (  enum Unit_7  (*) (  struct env1025*  ) )advance1030 , .env =  envinst1025 } );
        ( temp1054.fun ( &temp1054.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1026 ) ( (  pane3993 ) ) ) || ( (  reached_dash_target1031 ) ( (  pane3993 ) ,  (  target3997 ) ,  ( * (  prev3998 ) ) ) ) ) ) {
            enum MoveDirection_1021  dref4003 = (  dir3995 );
            switch (  dref4003 ) {
                case MoveDirection_1021_MoveFwd : {
                    ( (  move_dash_left944 ) ( (  pane3993 ) ) );
                    break;
                }
                case MoveDirection_1021_MoveBwd : {
                    ( (  move_dash_right989 ) ( (  pane3993 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq319 ( ( * (  prev3998 ) ) , ( ( * (  pane3993 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel980 ) ( (  pane3993 ) ,  ( ( Maybe_28_Just ) ( (  sel4001 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  size_t   size1060 (    struct List_24 *  l2133 ) {
    return ( ( * (  l2133 ) ) .f_count );
}

static  struct Changeset_26 *   offset_dash_ptr1065 (    struct Changeset_26 *  x338 ,    int64_t  count340 ) {
    struct Changeset_26  temp1066;
    return ( (struct Changeset_26 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul230 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1066 ) ) ) ) ) ) ) ) );
}

static  struct Changeset_26 *   get_dash_ptr1064 (    struct Slice_25  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp184 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_26 *  elem_dash_ptr1760 = ( (  offset_dash_ptr1065 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  struct Changeset_26 *   get_dash_ptr1063 (    struct List_24 *  list2001 ,    size_t  i2003 ) {
    if ( ( (  cmp184 ( (  i2003 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i2003 ) , ( ( * (  list2001 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2003 ) ) ) ,  ( (  from_dash_string220 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2001 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1064 ) ( ( ( * (  list2001 ) ) .f_elements ) ,  (  i2003 ) ) );
}

static  struct Changeset_26   get1062 (    struct List_24 *  list2011 ,    size_t  i2013 ) {
    return ( * ( (  get_dash_ptr1063 ) ( (  list2011 ) ,  (  i2013 ) ) ) );
}

static  struct Changeset_26   elem_dash_get1061 (    struct List_24  self2081 ,    size_t  k2083 ) {
    return ( (  get1062 ) ( ( & (  self2081 ) ) ,  (  k2083 ) ) );
}

struct SliceIter_1069 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1069   into_dash_iter1071 (    struct Slice_18  self1822 ) {
    return ( (struct SliceIter_1069) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_19 *   offset_dash_ptr1073 (    struct Action_19 *  x338 ,    int64_t  count340 ) {
    struct Action_19  temp1074;
    return ( (struct Action_19 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul230 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1074 ) ) ) ) ) ) ) ) );
}

static  struct Slice_18   subslice1072 (    struct Slice_18  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Action_19 *  begin_dash_ptr1787 = ( (  offset_dash_ptr1073 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp184 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp184 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub304 ( ( (  min331 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_1069   into_dash_iter1070 (    struct List_17  self2028 ) {
    return ( (  into_dash_iter1071 ) ( ( (  subslice1072 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

struct Maybe_1076 {
    enum {
        Maybe_1076_None_t,
        Maybe_1076_Just_t,
    } tag;
    union {
        struct {
            struct Action_19  field0;
        } Maybe_1076_Just_s;
    } stuff;
};

static struct Maybe_1076 Maybe_1076_Just (  struct Action_19  field0 ) {
    return ( struct Maybe_1076 ) { .tag = Maybe_1076_Just_t, .stuff = { .Maybe_1076_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1076   next1077 (    struct SliceIter_1069 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp184 ( (  op_dash_add232 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1076) { .tag = Maybe_1076_None_t } );
    }
    struct Action_19  elem1830 = ( * ( (  offset_dash_ptr1073 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add232 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1076_Just ) ( (  elem1830 ) ) );
}

static  struct Pos_20   action_dash_fwd1079 (   struct env96* env ,    struct TextBuf_88 *  self3698 ,    struct Action_19  action3700 ) {
    struct envunion97  temp1080 = ( (struct envunion97){ .fun = (  enum Unit_7  (*) (  struct env85*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action314 , .env =  env->envinst85 } );
    ( temp1080.fun ( &temp1080.env ,  (  self3698 ) ,  ( (  action3700 ) .f_from ) ,  ( (  action3700 ) .f_to_dash_bwd ) ,  ( (  action3700 ) .f_fwd ) ) );
    return ( (  action3700 ) .f_to_dash_fwd );
}

static  enum Unit_7   panic1082 (    struct StrView_21  errmsg1712 ) {
    ( (  print_dash_str478 ) ( ( ( StrConcat_479_StrConcat ) ( ( ( StrConcat_480_StrConcat ) ( ( (  from_dash_string220 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Action_19   undefined1086 (  ) {
    struct Action_19  temp1087;
    return (  temp1087 );
}

static  struct Action_19   or_dash_fail1085 (    struct Maybe_1076  x1725 ,    struct StrConcat_253  errmsg1727 ) {
    struct Maybe_1076  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_1076_None_t ) {
        ( (  panic252 ) ( (  errmsg1727 ) ) );
        return ( (  undefined1086 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_1076_Just_t ) {
            return ( dref1728 .stuff .Maybe_1076_Just_s .field0 );
        }
    }
}

static  struct Maybe_1076   try_dash_get1088 (    struct Slice_18  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp184 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1076) { .tag = Maybe_1076_None_t } );
    }
    struct Action_19 *  elem_dash_ptr1766 = ( (  offset_dash_ptr1073 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_1076_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  struct Action_19   get1084 (    struct Slice_18  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail1085 ) ( ( (  try_dash_get1088 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_19   elem_dash_get1083 (    struct Slice_18  self1867 ,    size_t  idx1869 ) {
    return ( (  get1084 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

static  struct Action_19   last1081 (    struct Slice_18  s1935 ) {
    if ( (  eq239 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1082 ) ( ( (  from_dash_string220 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1083 ( (  s1935 ) , (  op_dash_sub304 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_18   to_dash_slice1089 (    struct List_17  l2126 ) {
    struct Action_19 *  ptr2127 = ( ( (  l2126 ) .f_elements ) .f_ptr );
    return ( (struct Slice_18) { .f_ptr = (  ptr2127 ) , .f_count = ( (  l2126 ) .f_count ) } );
}

static  struct Maybe_113   redo1059 (   struct env100* env ,    struct TextBuf_88 *  self3725 ) {
    ( (  flush_dash_insert_dash_action998 ) ( (  self3725 ) ) );
    struct Actions_89 *  actions3726 = ( & ( ( * (  self3725 ) ) .f_actions ) );
    if ( (  cmp184 ( ( ( * (  actions3726 ) ) .f_cur ) , ( (  size1060 ) ( ( & ( ( * (  actions3726 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_113) { .tag = Maybe_113_None_t } );
    }
    struct Changeset_26  changeset3727 = (  elem_dash_get1061 ( ( ( * (  actions3726 ) ) .f_list ) , ( ( * (  actions3726 ) ) .f_cur ) ) );
    struct Pos_20  temp1067;
    struct Pos_20  to_dash_fwd3728 = (  temp1067 );
    struct SliceIter_1069  temp1068 =  into_dash_iter1070 ( ( (  changeset3727 ) .f_parts ) );
    while (true) {
        struct Maybe_1076  __cond1075 =  next1077 (&temp1068);
        if (  __cond1075 .tag == 0 ) {
            break;
        }
        struct Action_19  action3730 =  __cond1075 .stuff .Maybe_1076_Just_s .field0;
        struct envunion101  temp1078 = ( (struct envunion101){ .fun = (  struct Pos_20  (*) (  struct env96*  ,    struct TextBuf_88 *  ,    struct Action_19  ) )action_dash_fwd1079 , .env =  env->envinst96 } );
        to_dash_fwd3728 = ( temp1078.fun ( &temp1078.env ,  (  self3725 ) ,  (  action3730 ) ) );
    }
    (*  actions3726 ) .f_cur = (  op_dash_add232 ( ( ( * (  actions3726 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_19  last_dash_action3731 = ( (  last1081 ) ( ( (  to_dash_slice1089 ) ( ( (  changeset3727 ) .f_parts ) ) ) ) );
    if ( (  cmp184 ( ( (  num_dash_bytes984 ) ( ( (  last_dash_action3731 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_20  to_dash_fwd3732 = ( (  left_dash_pos983 ) ( (  self3725 ) ,  (  to_dash_fwd3728 ) ) );
        return ( ( Maybe_113_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3732 ) , .f_sel = ( ( Maybe_28_Just ) ( ( (  last_dash_action3731 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_113_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3728 ) , .f_sel = ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) } ) ) );
    }
}

struct env1091 {
    struct Pane_137 *  self4057;
    ;
};

struct envunion1092 {
    enum Unit_7  (*fun) (  struct env1091*  ,    struct Cursors_27  );
    struct env1091 env;
};

static  enum Unit_7   if_dash_just1090 (    struct Maybe_113  x1291 ,   struct envunion1092  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion1092  temp1093 = (  fun1293 );
        ( temp1093.fun ( &temp1093.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1094 (   struct env1091* env ,    struct Cursors_27  cursors4060 ) {
    ( (  set_dash_cursors945 ) ( ( env->self4057 ) ,  ( (  cursors4060 ) .f_cur ) ,  ( (  cursors4060 ) .f_sel ) ,  ( CursorMovement_946_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   redo1057 (   struct env118* env ,    struct Pane_137 *  self4057 ) {
    struct envunion119  temp1058 = ( (struct envunion119){ .fun = (  struct Maybe_113  (*) (  struct env100*  ,    struct TextBuf_88 *  ) )redo1059 , .env =  env->envinst100 } );
    struct Maybe_113  mcursors4058 = ( temp1058.fun ( &temp1058.env ,  ( ( * (  self4057 ) ) .f_buf ) ) );
    struct env1091 envinst1091 = {
        .self4057 =  self4057 ,
    };
    ( (  if_dash_just1090 ) ( (  mcursors4058 ) ,  ( (struct envunion1092){ .fun = (  enum Unit_7  (*) (  struct env1091*  ,    struct Cursors_27  ) )lam1094 , .env =  envinst1091 } ) ) );
    return ( Unit_7_Unit );
}

struct SliceReversedIter_1100 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1100   into_dash_iter1101 (    struct SliceReversedIter_1100  self1898 ) {
    return (  self1898 );
}

static  struct SliceReversedIter_1100   reversed1102 (    struct Slice_18  slice1895 ) {
    return ( (struct SliceReversedIter_1100) { .f_slice = (  slice1895 ) , .f_current_dash_offset = ( (  slice1895 ) .f_count ) } );
}

static  struct Maybe_1076   next1104 (    struct SliceReversedIter_1100 *  self1901 ) {
    size_t  off1902 = ( ( * (  self1901 ) ) .f_current_dash_offset );
    if ( (  eq239 ( (  off1902 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1076) { .tag = Maybe_1076_None_t } );
    }
    (*  self1901 ) .f_current_dash_offset = (  op_dash_sub304 ( (  off1902 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1076_Just ) ( (  elem_dash_get1083 ( ( ( * (  self1901 ) ) .f_slice ) , ( ( * (  self1901 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_20   action_dash_bwd1106 (   struct env94* env ,    struct TextBuf_88 *  self3693 ,    struct Action_19  action3695 ) {
    struct envunion95  temp1107 = ( (struct envunion95){ .fun = (  enum Unit_7  (*) (  struct env85*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action314 , .env =  env->envinst85 } );
    ( temp1107.fun ( &temp1107.env ,  (  self3693 ) ,  ( (  action3695 ) .f_from ) ,  ( (  action3695 ) .f_to_dash_fwd ) ,  ( (  action3695 ) .f_bwd ) ) );
    return ( (  action3695 ) .f_to_dash_bwd );
}

static  struct Maybe_113   undo1098 (   struct env98* env ,    struct TextBuf_88 *  self3718 ) {
    ( (  flush_dash_insert_dash_action998 ) ( (  self3718 ) ) );
    struct Actions_89 *  actions3719 = ( & ( ( * (  self3718 ) ) .f_actions ) );
    if ( (  eq239 ( ( ( * (  actions3719 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_113) { .tag = Maybe_113_None_t } );
    }
    (*  actions3719 ) .f_cur = (  op_dash_sub304 ( ( ( * (  actions3719 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_26  changeset3720 = (  elem_dash_get1061 ( ( ( * (  actions3719 ) ) .f_list ) , ( ( * (  actions3719 ) ) .f_cur ) ) );
    struct SliceReversedIter_1100  temp1099 =  into_dash_iter1101 ( ( (  reversed1102 ) ( ( (  to_dash_slice1089 ) ( ( (  changeset3720 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1076  __cond1103 =  next1104 (&temp1099);
        if (  __cond1103 .tag == 0 ) {
            break;
        }
        struct Action_19  action3722 =  __cond1103 .stuff .Maybe_1076_Just_s .field0;
        struct envunion99  temp1105 = ( (struct envunion99){ .fun = (  struct Pos_20  (*) (  struct env94*  ,    struct TextBuf_88 *  ,    struct Action_19  ) )action_dash_bwd1106 , .env =  env->envinst94 } );
        ( temp1105.fun ( &temp1105.env ,  (  self3718 ) ,  (  action3722 ) ) );
    }
    return ( ( Maybe_113_Just ) ( ( (  changeset3720 ) .f_before_dash_cursors ) ) );
}

struct env1109 {
    struct Pane_137 *  self4051;
    ;
};

struct envunion1110 {
    enum Unit_7  (*fun) (  struct env1109*  ,    struct Cursors_27  );
    struct env1109 env;
};

static  enum Unit_7   if_dash_just1108 (    struct Maybe_113  x1291 ,   struct envunion1110  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion1110  temp1111 = (  fun1293 );
        ( temp1111.fun ( &temp1111.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1112 (   struct env1109* env ,    struct Cursors_27  cursors4054 ) {
    ( (  set_dash_cursors945 ) ( ( env->self4051 ) ,  ( (  cursors4054 ) .f_cur ) ,  ( (  cursors4054 ) .f_sel ) ,  ( CursorMovement_946_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   undo1096 (   struct env116* env ,    struct Pane_137 *  self4051 ) {
    struct envunion117  temp1097 = ( (struct envunion117){ .fun = (  struct Maybe_113  (*) (  struct env98*  ,    struct TextBuf_88 *  ) )undo1098 , .env =  env->envinst98 } );
    struct Maybe_113  mcursors4052 = ( temp1097.fun ( &temp1097.env ,  ( ( * (  self4051 ) ) .f_buf ) ) );
    struct env1109 envinst1109 = {
        .self4051 =  self4051 ,
    };
    ( (  if_dash_just1108 ) ( (  mcursors4052 ) ,  ( (struct envunion1110){ .fun = (  enum Unit_7  (*) (  struct env1109*  ,    struct Cursors_27  ) )lam1112 , .env =  envinst1109 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Tuple2_149   minmax1116 (    struct Pos_20  l1329 ,    struct Pos_20  r1331 ) {
    return ( (  cmp316 ( (  l1329 ) , (  r1331 ) ) == 0 ) ? ( ( Tuple2_149_Tuple2 ) ( (  l1329 ) ,  (  r1331 ) ) ) : ( ( Tuple2_149_Tuple2 ) ( (  r1331 ) ,  (  l1329 ) ) ) );
}

static  struct Pos_20   or_dash_else1117 (    struct Maybe_28  self1732 ,    struct Pos_20  alt1734 ) {
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

static  struct Pos_20   fst1118 (    struct Tuple2_149  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_20   snd1119 (    struct Tuple2_149  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tuple2_149   selection1115 (    struct Pane_137 *  self4063 ) {
    struct Tuple2_149  from_dash_to4064 = ( (  minmax1116 ) ( ( (  or_dash_else1117 ) ( ( ( * (  self4063 ) ) .f_sel ) ,  ( ( * (  self4063 ) ) .f_cursor ) ) ) ,  ( ( * (  self4063 ) ) .f_cursor ) ) );
    struct Pos_20  from4065 = ( (  fst1118 ) ( (  from_dash_to4064 ) ) );
    struct Pos_20  to4066 = ( (  right_dash_pos990 ) ( ( ( * (  self4063 ) ) .f_buf ) ,  ( (  snd1119 ) ( (  from_dash_to4064 ) ) ) ) );
    return ( ( Tuple2_149_Tuple2 ) ( (  from4065 ) ,  (  to4066 ) ) );
}

static  struct StrView_21   clone_dash_01123 (    struct StrView_21  s2155 ,    enum CAllocator_9  al2157 ) {
    size_t  cnt2158 = ( ( (  s2155 ) .f_contents ) .f_count );
    struct Slice_12  nus2159 = ( (  allocate353 ) ( (  al2157 ) ,  (  op_dash_add232 ( (  cnt2158 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to452 ) ( ( (  s2155 ) .f_contents ) ,  (  nus2159 ) ) );
    ( (  set362 ) ( (  nus2159 ) ,  (  cnt2158 ) ,  ( (  char_dash_u8384 ) ( ( (  from_dash_charlike221 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = ( (  nus2159 ) .f_ptr ) , .f_count = (  cnt2158 ) } ) } );
}

static  struct StrView_21   clone1122 (    struct StrView_21  s2162 ,    enum CAllocator_9  al2164 ) {
    return ( (  clone_dash_01123 ) ( (  s2162 ) ,  (  al2164 ) ) );
}

struct envunion1127 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

static  struct StrView_21   from_dash_charlike1128 (    uint8_t *  ptr77 ,    size_t  count79 ) {
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = (  ptr77 ) , .f_count = (  count79 ) } ) } );
}

struct envunion1132 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

struct envunion1134 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

struct envunion1136 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

static  struct StrView_21   str_dash_between1121 (   struct env102* env ,    struct TextBuf_88 *  self3735 ,    struct Pos_20  from3737 ,    struct Pos_20  to3739 ) {
    enum CAllocator_9  al3740 = ( ( ( * (  self3735 ) ) .f_buf ) .f_al );
    if ( (  eq320 ( ( (  from3737 ) .f_line ) , ( (  to3739 ) .f_line ) ) ) ) {
        size_t  from_dash_bi3741 = ( (  i32_dash_size262 ) ( ( (  min469 ) ( ( (  from3737 ) .f_bi ) ,  ( (  to3739 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3742 = ( (  i32_dash_size262 ) ( ( (  max964 ) ( ( (  from3737 ) .f_bi ) ,  ( (  to3739 ) .f_bi ) ) ) ) );
        return ( (  clone1122 ) ( ( (  byte_dash_substr385 ) ( ( (  line951 ) ( (  self3735 ) ,  ( (  from3737 ) .f_line ) ) ) ,  (  from_dash_bi3741 ) ,  (  to_dash_bi3742 ) ) ) ,  (  al3740 ) ) );
    } else {
        struct Pos_20  from_dash_pos3743 = ( (  min315 ) ( (  from3737 ) ,  (  to3739 ) ) );
        struct Pos_20  to_dash_pos3744 = ( (  max318 ) ( (  from3737 ) ,  (  to3739 ) ) );
        struct List_11  temp1124 = ( (  mk283 ) ( (  al3740 ) ) );
        struct List_11 *  sb3745 = ( &temp1124 );
        struct StrView_21  first_dash_line3746 = ( (  line951 ) ( (  self3735 ) ,  ( (  from_dash_pos3743 ) .f_line ) ) );
        struct envunion103  temp1125 = ( (struct envunion103){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all338 , .env =  env->envinst40 } );
        ( temp1125.fun ( &temp1125.env ,  (  sb3745 ) ,  ( ( (  byte_dash_substr385 ) ( (  first_dash_line3746 ) ,  ( (  i32_dash_size262 ) ( ( (  from_dash_pos3743 ) .f_bi ) ) ) ,  ( (  num_dash_bytes984 ) ( (  first_dash_line3746 ) ) ) ) ) .f_contents ) ) );
        struct envunion1127  temp1126 = ( (struct envunion1127){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all338 , .env =  env->envinst40 } );
        ( temp1126.fun ( &temp1126.env ,  (  sb3745 ) ,  ( ( ( (  from_dash_charlike1128 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_689  temp1129 =  into_dash_iter691 ( ( (  to694 ) ( (  op_dash_add274 ( ( (  from_dash_pos3743 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  op_dash_sub812 ( ( (  to_dash_pos3744 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_272  __cond1130 =  next692 (&temp1129);
            if (  __cond1130 .tag == 0 ) {
                break;
            }
            int32_t  i3748 =  __cond1130 .stuff .Maybe_272_Just_s .field0;
            struct envunion1132  temp1131 = ( (struct envunion1132){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all338 , .env =  env->envinst40 } );
            ( temp1131.fun ( &temp1131.env ,  (  sb3745 ) ,  ( ( (  line951 ) ( (  self3735 ) ,  (  i3748 ) ) ) .f_contents ) ) );
            struct envunion1134  temp1133 = ( (struct envunion1134){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all338 , .env =  env->envinst40 } );
            ( temp1133.fun ( &temp1133.env ,  (  sb3745 ) ,  ( ( ( (  from_dash_charlike1128 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1136  temp1135 = ( (struct envunion1136){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all338 , .env =  env->envinst40 } );
        ( temp1135.fun ( &temp1135.env ,  (  sb3745 ) ,  ( ( (  byte_dash_substr385 ) ( ( (  line951 ) ( (  self3735 ) ,  ( (  to_dash_pos3744 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size262 ) ( ( (  to_dash_pos3744 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes952 ) ( ( (  to_dash_slice332 ) ( ( * (  sb3745 ) ) ) ) ) );
    }
}

struct env1138 {
    struct Editor_136 *  ed4150;
    ;
};

struct envunion1139 {
    enum Unit_7  (*fun) (  struct env1138*  ,    struct StrView_21  );
    struct env1138 env;
};

static  enum Unit_7   if_dash_just1137 (    struct Maybe_140  x1291 ,   struct envunion1139  fun1293 ) {
    struct Maybe_140  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_140_Just_t ) {
        struct envunion1139  temp1140 = (  fun1293 );
        ( temp1140.fun ( &temp1140.env ,  ( dref1294 .stuff .Maybe_140_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_140_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1141 (   struct env1138* env ,    struct StrView_21  cp4154 ) {
    ( (  free938 ) ( (  cp4154 ) ,  ( ( * ( env->ed4150 ) ) .f_al ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   copy_dash_selection_dash_to_dash_clipboard1114 (   struct env128* env ,    struct Editor_136 *  ed4150 ) {
    struct Tuple2_149  from_dash_to4151 = ( (  selection1115 ) ( ( (  pane988 ) ( (  ed4150 ) ) ) ) );
    struct envunion129  temp1120 = ( (struct envunion129){ .fun = (  struct StrView_21  (*) (  struct env102*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ) )str_dash_between1121 , .env =  env->envinst102 } );
    struct StrView_21  cpd4152 = ( temp1120.fun ( &temp1120.env ,  ( ( ( * (  ed4150 ) ) .f_pane ) .f_buf ) ,  ( (  fst1118 ) ( (  from_dash_to4151 ) ) ) ,  ( (  snd1119 ) ( (  from_dash_to4151 ) ) ) ) );
    struct env1138 envinst1138 = {
        .ed4150 =  ed4150 ,
    };
    ( (  if_dash_just1137 ) ( ( ( * (  ed4150 ) ) .f_clipboard ) ,  ( (struct envunion1139){ .fun = (  enum Unit_7  (*) (  struct env1138*  ,    struct StrView_21  ) )lam1141 , .env =  envinst1138 } ) ) );
    (*  ed4150 ) .f_clipboard = ( ( Maybe_140_Just ) ( (  cpd4152 ) ) );
    return ( Unit_7_Unit );
}

struct SliceIter_1149 {
    struct Slice_25  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1148 {
    struct SliceIter_1149  field0;
    size_t  field1;
};

static struct Drop_1148 Drop_1148_Drop (  struct SliceIter_1149  field0 ,  size_t  field1 ) {
    return ( struct Drop_1148 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1148   into_dash_iter1150 (    struct Drop_1148  self845 ) {
    return (  self845 );
}

static  struct SliceIter_1149   into_dash_iter1153 (    struct Slice_25  self1822 ) {
    return ( (struct SliceIter_1149) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Slice_25   subslice1154 (    struct Slice_25  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Changeset_26 *  begin_dash_ptr1787 = ( (  offset_dash_ptr1065 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp184 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp184 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_25) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub304 ( ( (  min331 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_25) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_1149   into_dash_iter1152 (    struct List_24  self2028 ) {
    return ( (  into_dash_iter1153 ) ( ( (  subslice1154 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

static  struct Drop_1148   drop1151 (    struct List_24  iterable852 ,    size_t  i854 ) {
    struct SliceIter_1149  it855 = ( (  into_dash_iter1152 ) ( (  iterable852 ) ) );
    return ( ( Drop_1148_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

struct Maybe_1156 {
    enum {
        Maybe_1156_None_t,
        Maybe_1156_Just_t,
    } tag;
    union {
        struct {
            struct Changeset_26  field0;
        } Maybe_1156_Just_s;
    } stuff;
};

static struct Maybe_1156 Maybe_1156_Just (  struct Changeset_26  field0 ) {
    return ( struct Maybe_1156 ) { .tag = Maybe_1156_Just_t, .stuff = { .Maybe_1156_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1156   next1158 (    struct SliceIter_1149 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp184 ( (  op_dash_add232 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1156) { .tag = Maybe_1156_None_t } );
    }
    struct Changeset_26  elem1830 = ( * ( (  offset_dash_ptr1065 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add232 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1156_Just ) ( (  elem1830 ) ) );
}

static  struct Maybe_1156   next1157 (    struct Drop_1148 *  dref847 ) {
    while ( (  cmp184 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1158 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub304 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1158 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

struct env1161 {
    enum CAllocator_9  al3600;
    ;
};

struct envunion1162 {
    enum Unit_7  (*fun) (  struct env1161*  ,    struct Action_19  );
    struct env1161 env;
};

static  enum Unit_7   for_dash_each1160 (    struct List_17  iterable1074 ,   struct envunion1162  fun1076 ) {
    struct SliceIter_1069  temp1163 = ( (  into_dash_iter1070 ) ( (  iterable1074 ) ) );
    struct SliceIter_1069 *  it1077 = ( &temp1163 );
    while ( ( true ) ) {
        struct Maybe_1076  dref1078 = ( (  next1077 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1076_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1076_Just_t ) {
                struct envunion1162  temp1164 = (  fun1076 );
                ( temp1164.fun ( &temp1164.env ,  ( dref1078 .stuff .Maybe_1076_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_action1166 (    struct Action_19  action3593 ,    enum CAllocator_9  al3595 ) {
    ( (  free938 ) ( ( (  action3593 ) .f_fwd ) ,  (  al3595 ) ) );
    ( (  free938 ) ( ( (  action3593 ) .f_bwd ) ,  (  al3595 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1165 (   struct env1161* env ,    struct Action_19  a3602 ) {
    return ( (  free_dash_action1166 ) ( (  a3602 ) ,  ( env->al3600 ) ) );
}

static  void *   cast_dash_ptr1169 (    struct Action_19 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free1168 (    enum CAllocator_9  dref1959 ,    struct Slice_18  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1169 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free1167 (    struct List_17 *  list2035 ) {
    ( (  free1168 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( ( * (  list2035 ) ) .f_elements ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_changeset1159 (    struct Changeset_26  chs3598 ,    enum CAllocator_9  al3600 ) {
    struct env1161 envinst1161 = {
        .al3600 =  al3600 ,
    };
    ( (  for_dash_each1160 ) ( ( (  chs3598 ) .f_parts ) ,  ( (struct envunion1162){ .fun = (  enum Unit_7  (*) (  struct env1161*  ,    struct Action_19  ) )lam1165 , .env =  envinst1161 } ) ) );
    ( (  free1167 ) ( ( & ( (  chs3598 ) .f_parts ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   trim1170 (    struct List_24 *  l2115 ,    size_t  new_dash_count2117 ) {
    (*  l2115 ) .f_count = ( (  min331 ) ( (  new_dash_count2117 ) ,  ( ( * (  l2115 ) ) .f_count ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   trim_dash_actions1146 (    struct Actions_89 *  actions3616 ) {
    enum CAllocator_9  al3617 = ( ( ( * (  actions3616 ) ) .f_list ) .f_al );
    size_t  cur3618 = ( ( * (  actions3616 ) ) .f_cur );
    struct Drop_1148  temp1147 =  into_dash_iter1150 ( ( (  drop1151 ) ( ( ( * (  actions3616 ) ) .f_list ) ,  (  cur3618 ) ) ) );
    while (true) {
        struct Maybe_1156  __cond1155 =  next1157 (&temp1147);
        if (  __cond1155 .tag == 0 ) {
            break;
        }
        struct Changeset_26  action3620 =  __cond1155 .stuff .Maybe_1156_Just_s .field0;
        ( (  free_dash_changeset1159 ) ( (  action3620 ) ,  (  al3617 ) ) );
    }
    ( (  trim1170 ) ( ( & ( ( * (  actions3616 ) ) .f_list ) ) ,  (  cur3618 ) ) );
    return ( Unit_7_Unit );
}

static  struct Maybe_140   head1172 (    struct SplitIter_392  it1142 ) {
    struct SplitIter_392  temp1173 = ( (  into_dash_iter399 ) ( (  it1142 ) ) );
    return ( (  next413 ) ( ( &temp1173 ) ) );
}

static  struct Maybe_140   head1175 (    struct Drop_391  it1142 ) {
    struct Drop_391  temp1176 = ( (  into_dash_iter397 ) ( (  it1142 ) ) );
    return ( (  next412 ) ( ( &temp1176 ) ) );
}

static  bool   null1174 (    struct Drop_391  it1151 ) {
    struct Maybe_140  dref1152 = ( (  head1175 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_140_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Tuple2_410   undefined1178 (  ) {
    struct Tuple2_410  temp1179;
    return (  temp1179 );
}

static  struct Tuple2_410   or_dash_fail1177 (    struct Maybe_409  x1725 ,    struct StrView_21  errmsg1727 ) {
    struct Maybe_409  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_409_None_t ) {
        ( (  panic1082 ) ( (  errmsg1727 ) ) );
        return ( (  undefined1178 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_409_Just_t ) {
            return ( dref1728 .stuff .Maybe_409_Just_s .field0 );
        }
    }
}

static  struct Maybe_409   reduce1181 (    struct Zip_390  iterable1093 ,    struct Maybe_409  base1095 ,    struct Maybe_409 (*  fun1097 )(    struct Tuple2_410  ,    struct Maybe_409  ) ) {
    struct Maybe_409  x1098 = (  base1095 );
    struct Zip_390  it1099 = ( (  into_dash_iter395 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_409  dref1100 = ( (  next411 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_409_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_409_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_409_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1182 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1182);
    exit ( 1 );
    ( Unit_7_Unit );
    struct Maybe_409  temp1183;
    return (  temp1183 );
}

static  struct Maybe_409   lam1184 (    struct Tuple2_410  e1147 ,    struct Maybe_409  dref1148 ) {
    return ( ( Maybe_409_Just ) ( (  e1147 ) ) );
}

static  struct Maybe_409   last1180 (    struct Zip_390  it1145 ) {
    return ( (  reduce1181 ) ( (  it1145 ) ,  ( (struct Maybe_409) { .tag = Maybe_409_None_t } ) ,  (  lam1184 ) ) );
}

static  int32_t   snd1185 (    struct Tuple2_410  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct StrView_21   fst1186 (    struct Tuple2_410  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_20   pos_dash_after_dash_str1171 (    struct TextBuf_88 *  self3703 ,    struct StrView_21  bytes3705 ,    struct Pos_20  from3707 ) {
    struct SplitIter_392  lines3708 = ( (  split_dash_by_dash_each400 ) ( (  bytes3705 ) ,  ( (  from_dash_charlike221 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_21  first_dash_line3709 = ( (  or_dash_else375 ) ( ( (  head1172 ) ( (  lines3708 ) ) ) ,  ( (  from_dash_string220 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_391  headless3710 = ( (  drop398 ) ( (  lines3708 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1174 ) ( (  headless3710 ) ) ) ) {
        struct Pos_20  next_dash_pos3711 = ( (  mk298 ) ( ( (  from3707 ) .f_line ) ,  (  op_dash_add274 ( ( (  from3707 ) .f_bi ) , ( (  size_dash_i32196 ) ( ( (  num_dash_bytes984 ) ( (  first_dash_line3709 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3711 );
    } else {
        struct Tuple2_410  last_dash_line3712 = ( (  or_dash_fail1177 ) ( ( (  last1180 ) ( ( (  zip396 ) ( (  headless3710 ) ,  ( (  from279 ) ( (  op_dash_add274 ( ( (  from3707 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string220 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk298 ) ( ( (  snd1185 ) ( (  last_dash_line3712 ) ) ) ,  ( (  size_dash_i32196 ) ( ( (  num_dash_bytes984 ) ( ( (  fst1186 ) ( (  last_dash_line3712 ) ) ) ) ) ) ) ) );
    }
}

static  bool   is_dash_none1188 (    struct Maybe_113  m1264 ) {
    struct Maybe_113  dref1265 = (  m1264 );
    if ( dref1265.tag == Maybe_113_None_t ) {
        return ( true );
    }
    else {
        if ( dref1265.tag == Maybe_113_Just_t ) {
            return ( false );
        }
    }
}

struct Tuple2_1190 {
    enum ChangesetInputType_90  field0;
    enum ChangesetInputType_90  field1;
};

static struct Tuple2_1190 Tuple2_1190_Tuple2 (  enum ChangesetInputType_90  field0 ,  enum ChangesetInputType_90  field1 ) {
    return ( struct Tuple2_1190 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1189 (    enum ChangesetInputType_90  l3606 ,    enum ChangesetInputType_90  r3608 ) {
    return ( {  struct Tuple2_1190  dref3609 = ( ( Tuple2_1190_Tuple2 ) ( (  l3606 ) ,  (  r3608 ) ) ) ;  dref3609 .field0 == ChangesetInputType_90_NoChangeset &&  dref3609 .field1 == ChangesetInputType_90_NoChangeset ? ( true ) :  dref3609 .field0 == ChangesetInputType_90_InputChangeset &&  dref3609 .field1 == ChangesetInputType_90_InputChangeset ? ( true ) :  dref3609 .field0 == ChangesetInputType_90_CustomChangeset &&  dref3609 .field1 == ChangesetInputType_90_CustomChangeset ? ( true ) : ( false ) ; } );
}

static  struct Changeset_26 *   last_dash_ptr1191 (    struct Slice_25  s1938 ) {
    if ( (  eq239 ( ( (  s1938 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1082 ) ( ( (  from_dash_string220 ) ( ( "(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1064 ) ( (  s1938 ) ,  (  op_dash_sub304 ( ( (  s1938 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_25   to_dash_slice1192 (    struct List_24  l2126 ) {
    struct Changeset_26 *  ptr2127 = ( ( (  l2126 ) .f_elements ) .f_ptr );
    return ( (struct Slice_25) { .f_ptr = (  ptr2127 ) , .f_count = ( (  l2126 ) .f_count ) } );
}

struct envunion1194 {
    enum Unit_7  (*fun) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  );
    struct env15 env;
};

struct TypeSize_1200 {
    size_t  f_size;
};

static  struct TypeSize_1200   get_dash_typesize1199 (  ) {
    struct Action_19  temp1201;
    return ( (struct TypeSize_1200) { .f_size = ( sizeof( ( (  temp1201 ) ) ) ) } );
}

static  struct Action_19 *   cast_dash_ptr1202 (    void *  p359 ) {
    return ( (struct Action_19 * ) (  p359 ) );
}

static  struct Slice_18   allocate1198 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize1199 ) ( ) ) ) .f_size );
    struct Action_19 *  ptr1957 = ( (  cast_dash_ptr1202 ) ( ( ( malloc ) ( (  op_dash_mul245 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_18) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env1203 {
    struct Slice_18  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_1205 {
    struct Action_19  field0;
    int32_t  field1;
};

static struct Tuple2_1205 Tuple2_1205_Tuple2 (  struct Action_19  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1205 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1204 {
    enum Unit_7  (*fun) (  struct env1203*  ,    struct Tuple2_1205  );
    struct env1203 env;
};

static  struct Action_19 *   get_dash_ptr1208 (    struct Slice_18  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp184 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_19 *  elem_dash_ptr1760 = ( (  offset_dash_ptr1073 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set1207 (    struct Slice_18  slice1774 ,    size_t  i1776 ,    struct Action_19  x1778 ) {
    struct Action_19 *  ep1779 = ( (  get_dash_ptr1208 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1206 (   struct env1203* env ,    struct Tuple2_1205  dref2043 ) {
    return ( (  set1207 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size262 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct Zip_1210 {
    struct SliceIter_1069  f_left_dash_it;
    struct FromIter_266  f_right_dash_it;
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
            struct Tuple2_1205  field0;
        } Maybe_1213_Just_s;
    } stuff;
};

static struct Maybe_1213 Maybe_1213_Just (  struct Tuple2_1205  field0 ) {
    return ( struct Maybe_1213 ) { .tag = Maybe_1213_Just_t, .stuff = { .Maybe_1213_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1213   next1214 (    struct Zip_1210 *  self914 ) {
    struct Zip_1210  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1076  dref916 = ( (  next1077 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1076_None_t ) {
            return ( (struct Maybe_1213) { .tag = Maybe_1213_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1076_Just_t ) {
                struct Maybe_272  dref918 = ( (  next273 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_272_None_t ) {
                    return ( (struct Maybe_1213) { .tag = Maybe_1213_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_272_Just_t ) {
                        ( (  next1077 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next273 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1213_Just ) ( ( ( Tuple2_1205_Tuple2 ) ( ( dref916 .stuff .Maybe_1076_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_272_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each1209 (    struct Zip_1210  iterable1074 ,   struct envunion1204  fun1076 ) {
    struct Zip_1210  temp1211 = ( (  into_dash_iter1212 ) ( (  iterable1074 ) ) );
    struct Zip_1210 *  it1077 = ( &temp1211 );
    while ( ( true ) ) {
        struct Maybe_1213  dref1078 = ( (  next1214 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1213_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1213_Just_t ) {
                struct envunion1204  temp1215 = (  fun1076 );
                ( temp1215.fun ( &temp1215.env ,  ( dref1078 .stuff .Maybe_1213_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_1210   zip1216 (    struct Slice_18  left922 ,    struct FromIter_266  right924 ) {
    struct SliceIter_1069  left_dash_it925 = ( (  into_dash_iter1071 ) ( (  left922 ) ) );
    struct FromIter_266  right_dash_it926 = ( (  into_dash_iter278 ) ( (  right924 ) ) );
    return ( (struct Zip_1210) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   grow_dash_if_dash_full1197 (   struct env3* env ,    struct List_17 *  list2041 ) {
    if ( (  eq239 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate1198 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq239 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_18  new_dash_slice2042 = ( (  allocate1198 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul245 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env1203 envinst1203 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion1204  fun2046 = ( (struct envunion1204){ .fun = (  enum Unit_7  (*) (  struct env1203*  ,    struct Tuple2_1205  ) )lam1206 , .env =  envinst1203 } );
            ( (  for_dash_each1209 ) ( ( (  zip1216 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from279 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free1168 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add1195 (   struct env15* env ,    struct List_17 *  list2049 ,    struct Action_19  elem2051 ) {
    struct envunion16  temp1196 = ( (struct envunion16){ .fun = (  enum Unit_7  (*) (  struct env3*  ,    struct List_17 *  ) )grow_dash_if_dash_full1197 , .env =  env->envinst3 } );
    ( temp1196.fun ( &temp1196.env ,  (  list2049 ) ) );
    ( (  set1207 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add232 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  void *   cast_dash_ptr1223 (    struct Action_19 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1224 (    struct Action_19 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Action_19 *   zeroed1221 (  ) {
    struct Action_19 *  temp1222;
    struct Action_19 *  x570 = (  temp1222 );
    ( ( memset ) ( ( (  cast_dash_ptr1223 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of1224 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Action_19 *   null_dash_ptr1220 (  ) {
    return ( (  zeroed1221 ) ( ) );
}

static  struct Slice_18   empty1219 (  ) {
    return ( (struct Slice_18) { .f_ptr = ( (  null_dash_ptr1220 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_17   mk1218 (    enum CAllocator_9  al2031 ) {
    struct Slice_18  elements2032 = ( (  empty1219 ) ( ) );
    return ( (struct List_17) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_27   or_dash_else1225 (    struct Maybe_113  self1732 ,    struct Cursors_27  alt1734 ) {
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

struct TypeSize_1233 {
    size_t  f_size;
};

static  struct TypeSize_1233   get_dash_typesize1232 (  ) {
    struct Changeset_26  temp1234;
    return ( (struct TypeSize_1233) { .f_size = ( sizeof( ( (  temp1234 ) ) ) ) } );
}

static  struct Changeset_26 *   cast_dash_ptr1235 (    void *  p359 ) {
    return ( (struct Changeset_26 * ) (  p359 ) );
}

static  struct Slice_25   allocate1231 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize1232 ) ( ) ) ) .f_size );
    struct Changeset_26 *  ptr1957 = ( (  cast_dash_ptr1235 ) ( ( ( malloc ) ( (  op_dash_mul245 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_25) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env1236 {
    struct Slice_25  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_1238 {
    struct Changeset_26  field0;
    int32_t  field1;
};

static struct Tuple2_1238 Tuple2_1238_Tuple2 (  struct Changeset_26  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1238 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1237 {
    enum Unit_7  (*fun) (  struct env1236*  ,    struct Tuple2_1238  );
    struct env1236 env;
};

static  enum Unit_7   set1240 (    struct Slice_25  slice1774 ,    size_t  i1776 ,    struct Changeset_26  x1778 ) {
    struct Changeset_26 *  ep1779 = ( (  get_dash_ptr1064 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1239 (   struct env1236* env ,    struct Tuple2_1238  dref2043 ) {
    return ( (  set1240 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size262 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct Zip_1242 {
    struct SliceIter_1149  f_left_dash_it;
    struct FromIter_266  f_right_dash_it;
};

static  struct Zip_1242   into_dash_iter1244 (    struct Zip_1242  self911 ) {
    return (  self911 );
}

struct Maybe_1245 {
    enum {
        Maybe_1245_None_t,
        Maybe_1245_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1238  field0;
        } Maybe_1245_Just_s;
    } stuff;
};

static struct Maybe_1245 Maybe_1245_Just (  struct Tuple2_1238  field0 ) {
    return ( struct Maybe_1245 ) { .tag = Maybe_1245_Just_t, .stuff = { .Maybe_1245_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1245   next1246 (    struct Zip_1242 *  self914 ) {
    struct Zip_1242  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1156  dref916 = ( (  next1158 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1156_None_t ) {
            return ( (struct Maybe_1245) { .tag = Maybe_1245_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1156_Just_t ) {
                struct Maybe_272  dref918 = ( (  next273 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_272_None_t ) {
                    return ( (struct Maybe_1245) { .tag = Maybe_1245_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_272_Just_t ) {
                        ( (  next1158 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next273 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1245_Just ) ( ( ( Tuple2_1238_Tuple2 ) ( ( dref916 .stuff .Maybe_1156_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_272_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each1241 (    struct Zip_1242  iterable1074 ,   struct envunion1237  fun1076 ) {
    struct Zip_1242  temp1243 = ( (  into_dash_iter1244 ) ( (  iterable1074 ) ) );
    struct Zip_1242 *  it1077 = ( &temp1243 );
    while ( ( true ) ) {
        struct Maybe_1245  dref1078 = ( (  next1246 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1245_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1245_Just_t ) {
                struct envunion1237  temp1247 = (  fun1076 );
                ( temp1247.fun ( &temp1247.env ,  ( dref1078 .stuff .Maybe_1245_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_1242   zip1248 (    struct Slice_25  left922 ,    struct FromIter_266  right924 ) {
    struct SliceIter_1149  left_dash_it925 = ( (  into_dash_iter1153 ) ( (  left922 ) ) );
    struct FromIter_266  right_dash_it926 = ( (  into_dash_iter278 ) ( (  right924 ) ) );
    return ( (struct Zip_1242) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr1250 (    struct Changeset_26 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free1249 (    enum CAllocator_9  dref1959 ,    struct Slice_25  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1250 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   grow_dash_if_dash_full1230 (   struct env4* env ,    struct List_24 *  list2041 ) {
    if ( (  eq239 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate1231 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq239 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_25  new_dash_slice2042 = ( (  allocate1231 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul245 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env1236 envinst1236 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion1237  fun2046 = ( (struct envunion1237){ .fun = (  enum Unit_7  (*) (  struct env1236*  ,    struct Tuple2_1238  ) )lam1239 , .env =  envinst1236 } );
            ( (  for_dash_each1241 ) ( ( (  zip1248 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from279 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free1249 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add1228 (   struct env22* env ,    struct List_24 *  list2049 ,    struct Changeset_26  elem2051 ) {
    struct envunion23  temp1229 = ( (struct envunion23){ .fun = (  enum Unit_7  (*) (  struct env4*  ,    struct List_24 *  ) )grow_dash_if_dash_full1230 , .env =  env->envinst4 } );
    ( temp1229.fun ( &temp1229.env ,  (  list2049 ) ) );
    ( (  set1240 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add232 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Maybe_113   change1145 (   struct env104* env ,    struct TextBuf_88 *  self3765 ,    struct Pos_20  from3767 ,    struct Pos_20  to3769 ,    struct StrView_21  bytes3771 ,    struct Maybe_113  before_dash_cursors3773 ) {
    struct Pos_20  from_dash_pos3774 = ( (  min315 ) ( (  from3767 ) ,  (  to3769 ) ) );
    struct Pos_20  to_dash_pos3775 = ( (  max318 ) ( (  from3767 ) ,  (  to3769 ) ) );
    struct Actions_89 *  actions3776 = ( & ( ( * (  self3765 ) ) .f_actions ) );
    ( (  trim_dash_actions1146 ) ( (  actions3776 ) ) );
    struct envunion108  temp1187 = ( (struct envunion108){ .fun = (  struct StrView_21  (*) (  struct env102*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ) )str_dash_between1121 , .env =  env->envinst102 } );
    struct Action_19  action3777 = ( (struct Action_19) { .f_from = (  from3767 ) , .f_fwd = ( (  clone1122 ) ( (  bytes3771 ) ,  ( ( * (  self3765 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1171 ) ( (  self3765 ) ,  (  bytes3771 ) ,  (  from_dash_pos3774 ) ) ) , .f_bwd = ( temp1187.fun ( &temp1187.env ,  (  self3765 ) ,  (  from_dash_pos3774 ) ,  (  to_dash_pos3775 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3775 ) } );
    enum CAllocator_9  al3778 = ( ( ( * (  actions3776 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in3779 = ( (  is_dash_none1188 ) ( (  before_dash_cursors3773 ) ) );
    if ( ( (  eq1189 ( ( ( ( * (  self3765 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_90_CustomChangeset ) ) ) || ( (  eq1189 ( ( ( ( * (  self3765 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_90_InputChangeset ) ) ) && (  is_dash_typed_dash_in3779 ) ) ) ) {
        struct Changeset_26 *  last_dash_changeset3780 = ( (  last_dash_ptr1191 ) ( ( (  to_dash_slice1192 ) ( ( ( * (  actions3776 ) ) .f_list ) ) ) ) );
        struct envunion1194  temp1193 = ( (struct envunion1194){ .fun = (  enum Unit_7  (*) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  ) )add1195 , .env =  env->envinst15 } );
        ( temp1193.fun ( &temp1193.env ,  ( & ( ( * (  last_dash_changeset3780 ) ) .f_parts ) ) ,  (  action3777 ) ) );
    } else {
        struct Changeset_26  temp1217 = ( (struct Changeset_26) { .f_parts = ( (  mk1218 ) ( (  al3778 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1225 ) ( (  before_dash_cursors3773 ) ,  ( (struct Cursors_27) { .f_cur = (  from3767 ) , .f_sel = ( (  eq319 ( (  from3767 ) , (  to3769 ) ) ) ? ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) : ( ( Maybe_28_Just ) ( (  to3769 ) ) ) ) } ) ) ) } );
        struct Changeset_26 *  changeset3781 = ( &temp1217 );
        struct envunion106  temp1226 = ( (struct envunion106){ .fun = (  enum Unit_7  (*) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  ) )add1195 , .env =  env->envinst15 } );
        ( temp1226.fun ( &temp1226.env ,  ( & ( ( * (  changeset3781 ) ) .f_parts ) ) ,  (  action3777 ) ) );
        struct envunion107  temp1227 = ( (struct envunion107){ .fun = (  enum Unit_7  (*) (  struct env22*  ,    struct List_24 *  ,    struct Changeset_26  ) )add1228 , .env =  env->envinst22 } );
        ( temp1227.fun ( &temp1227.env ,  ( & ( ( * (  actions3776 ) ) .f_list ) ) ,  ( * (  changeset3781 ) ) ) );
        (*  actions3776 ) .f_input_dash_changeset = ( (  is_dash_typed_dash_in3779 ) ? ( ChangesetInputType_90_InputChangeset ) : ( ChangesetInputType_90_NoChangeset ) );
        (*  actions3776 ) .f_cur = (  op_dash_add232 ( ( ( * (  actions3776 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion105  temp1251 = ( (struct envunion105){ .fun = (  struct Pos_20  (*) (  struct env96*  ,    struct TextBuf_88 *  ,    struct Action_19  ) )action_dash_fwd1079 , .env =  env->envinst96 } );
    struct Pos_20  to_dash_fwd3782 = ( temp1251.fun ( &temp1251.env ,  (  self3765 ) ,  (  action3777 ) ) );
    if ( (  cmp184 ( ( (  num_dash_bytes984 ) ( ( (  action3777 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_20  to_dash_fwd3783 = ( (  left_dash_pos983 ) ( (  self3765 ) ,  (  to_dash_fwd3782 ) ) );
        return ( ( Maybe_113_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3783 ) , .f_sel = ( ( Maybe_28_Just ) ( ( (  action3777 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_113_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3782 ) , .f_sel = ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) } ) ) );
    }
}

struct env1253 {
    struct Pane_137 *  self4069;
    ;
};

struct envunion1254 {
    enum Unit_7  (*fun) (  struct env1253*  ,    struct Cursors_27  );
    struct env1253 env;
};

static  enum Unit_7   if_dash_just1252 (    struct Maybe_113  x1291 ,   struct envunion1254  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion1254  temp1255 = (  fun1293 );
        ( temp1255.fun ( &temp1255.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1256 (   struct env1253* env ,    struct Cursors_27  cursors4076 ) {
    ( (  set_dash_cursors945 ) ( ( env->self4069 ) ,  ( (  cursors4076 ) .f_cur ) ,  ( (  cursors4076 ) .f_sel ) ,  ( CursorMovement_946_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   replace_dash_selection1143 (   struct env120* env ,    struct Pane_137 *  self4069 ,    struct Tuple2_149  pos_prime_s4071 ,    struct StrView_21  cp4073 ) {
    struct envunion121  temp1144 = ( (struct envunion121){ .fun = (  struct Maybe_113  (*) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  ) )change1145 , .env =  env->envinst104 } );
    struct Maybe_113  mcursors4074 = ( temp1144.fun ( &temp1144.env ,  ( ( * (  self4069 ) ) .f_buf ) ,  ( (  fst1118 ) ( (  pos_prime_s4071 ) ) ) ,  ( (  snd1119 ) ( (  pos_prime_s4071 ) ) ) ,  (  cp4073 ) ,  ( ( Maybe_113_Just ) ( ( (struct Cursors_27) { .f_cur = ( ( * (  self4069 ) ) .f_cursor ) , .f_sel = ( ( * (  self4069 ) ) .f_sel ) } ) ) ) ) );
    struct env1253 envinst1253 = {
        .self4069 =  self4069 ,
    };
    ( (  if_dash_just1252 ) ( (  mcursors4074 ) ,  ( (struct envunion1254){ .fun = (  enum Unit_7  (*) (  struct env1253*  ,    struct Cursors_27  ) )lam1256 , .env =  envinst1253 } ) ) );
    return ( Unit_7_Unit );
}

struct envunion1258 {
    enum Unit_7  (*fun) (  struct env128*  ,    struct Editor_136 *  );
    struct env128 env;
};

struct envunion1260 {
    enum Unit_7  (*fun) (  struct env120*  ,    struct Pane_137 *  ,    struct Tuple2_149  ,    struct StrView_21  );
    struct env120 env;
};

struct envunion1262 {
    enum Unit_7  (*fun) (  struct env128*  ,    struct Editor_136 *  );
    struct env128 env;
};

static  struct StrBuilder_54   mk1268 (    enum CAllocator_9  al2781 ) {
    return ( (struct StrBuilder_54) { .f_chars = ( (  mk283 ) ( (  al2781 ) ) ) } );
}

struct IntStrIter_1274 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1273 {
    struct StrViewIter_603  f_left;
    struct IntStrIter_1274  f_right;
};

struct StrConcatIter_1272 {
    struct StrConcatIter_1273  f_left;
    struct StrViewIter_603  f_right;
};

struct env1275 {
    struct env52 envinst52;
    struct StrBuilder_54 *  builder2749;
};

struct envunion1276 {
    enum Unit_7  (*fun) (  struct env1275*  ,    struct Char_57  );
    struct env1275 env;
};

static  struct StrConcatIter_1272   into_dash_iter1278 (    struct StrConcatIter_1272  self1491 ) {
    return (  self1491 );
}

struct env1284 {
    ;
    size_t  base1210;
};

struct envunion1285 {
    size_t  (*fun) (  struct env1284*  ,    int32_t  ,    size_t  );
    struct env1284 env;
};

static  size_t   reduce1283 (    struct Range_686  iterable1093 ,    size_t  base1095 ,   struct envunion1285  fun1097 ) {
    size_t  x1098 = (  base1095 );
    struct RangeIter_689  it1099 = ( (  into_dash_iter691 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next692 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                struct envunion1285  temp1286 = (  fun1097 );
                x1098 = ( temp1286.fun ( &temp1286.env ,  ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1287 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1287);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1288;
    return (  temp1288 );
}

static  size_t   lam1289 (   struct env1284* env ,    int32_t  item1214 ,    size_t  x1216 ) {
    return (  op_dash_mul245 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  size_t   pow1282 (    size_t  base1210 ,    int32_t  p1212 ) {
    struct env1284 envinst1284 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1283 ) ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1285){ .fun = (  size_t  (*) (  struct env1284*  ,    int32_t  ,    size_t  ) )lam1289 , .env =  envinst1284 } ) ) );
}

static  uint8_t   cast1290 (    size_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_606   next1281 (    struct IntStrIter_1274 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_606_Just ) ( ( (  from_dash_charlike221 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp317 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
    }
    size_t  trim_dash_down1423 = ( (  pow1282 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub812 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    size_t  upper1424 = (  op_dash_div211 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    size_t  upper_dash_mask1425 = (  op_dash_mul245 ( (  op_dash_div211 ( (  upper1424 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1290 ) ( (  op_dash_sub304 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub812 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8892 ) ( (  op_dash_add782 ( (  digit1426 ) , (  from_dash_integral212 ( 48 ) ) ) ) ) );
    return ( ( Maybe_606_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_606   next1280 (    struct StrConcatIter_1273 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1281 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1279 (    struct StrConcatIter_1272 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1280 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each1271 (    struct StrConcatIter_1272  iterable1074 ,   struct envunion1276  fun1076 ) {
    struct StrConcatIter_1272  temp1277 = ( (  into_dash_iter1278 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1272 *  it1077 = ( &temp1277 );
    while ( ( true ) ) {
        struct Maybe_606  dref1078 = ( (  next1279 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_606_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_606_Just_t ) {
                struct envunion1276  temp1291 = (  fun1076 );
                ( temp1291.fun ( &temp1291.env ,  ( dref1078 .stuff .Maybe_606_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  int32_t   count_dash_digits1298 (    size_t  self1430 ) {
    if ( (  eq239 ( (  self1430 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp184 ( (  self1430 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div211 ( (  self1430 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1431 = (  op_dash_add274 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1274   uint_dash_iter1297 (    size_t  int1437 ) {
    return ( (struct IntStrIter_1274) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1298 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1274   chars1296 (    size_t  self1467 ) {
    return ( (  uint_dash_iter1297 ) ( (  self1467 ) ) );
}

static  struct StrConcatIter_1273   into_dash_iter1295 (    struct StrConcat_65  dref1498 ) {
    return ( (struct StrConcatIter_1273) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1296 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1273   chars1294 (    struct StrConcat_65  self1509 ) {
    return ( (  into_dash_iter1295 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1272   into_dash_iter1293 (    struct StrConcat_64  dref1498 ) {
    return ( (struct StrConcatIter_1272) { .f_left = ( (  chars1294 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars608 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1272   chars1292 (    struct StrConcat_64  self1509 ) {
    return ( (  into_dash_iter1293 ) ( (  self1509 ) ) );
}

static  enum Unit_7   write_dash_slice1303 (   struct env50* env ,    struct StrBuilder_54 *  builder2739 ,    struct Slice_12  s2741 ) {
    struct envunion51  temp1304 = ( (struct envunion51){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all338 , .env =  env->envinst40 } );
    ( temp1304.fun ( &temp1304.env ,  ( & ( ( * (  builder2739 ) ) .f_chars ) ) ,  (  s2741 ) ) );
    return ( Unit_7_Unit );
}

static  struct Slice_12   from_dash_char1305 (    struct Char_57  c1941 ,    uint8_t *  buf1943 ) {
    struct CharDestructured_205  dref1944 = ( (  destructure207 ) ( (  c1941 ) ) );
    if ( dref1944.tag == CharDestructured_205_Ref_t ) {
        return ( (struct Slice_12) { .f_ptr = ( ( dref1944 .stuff .CharDestructured_205_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1944 .stuff .CharDestructured_205_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1944.tag == CharDestructured_205_Scalar_t ) {
            if ( (  cmp215 ( ( ( dref1944 .stuff .CharDestructured_205_Scalar_s .field0 ) .f_value ) , (  from_dash_integral216 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1306 = ( (  from_dash_string49 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp1306);
                exit ( 1 );
                ( Unit_7_Unit );
            }
            (*  buf1943 ) = ( (  u32_dash_u8218 ) ( ( ( dref1944 .stuff .CharDestructured_205_Scalar_s .field0 ) .f_value ) ) );
            return ( (struct Slice_12) { .f_ptr = (  buf1943 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_7   write_dash_char1301 (   struct env52* env ,    struct StrBuilder_54 *  builder2744 ,    struct Char_57  c2746 ) {
    struct envunion53  temp1302 = ( (struct envunion53){ .fun = (  enum Unit_7  (*) (  struct env50*  ,    struct StrBuilder_54 *  ,    struct Slice_12  ) )write_dash_slice1303 , .env =  env->envinst50 } );
    uint8_t  temp1308;
    uint8_t  temp1307 = (  temp1308 );
    ( temp1302.fun ( &temp1302.env ,  (  builder2744 ) ,  ( (  from_dash_char1305 ) ( (  c2746 ) ,  ( &temp1307 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1299 (   struct env1275* env ,    struct Char_57  c2753 ) {
    struct envunion56  temp1300 = ( (struct envunion56){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1301 , .env =  env->envinst52 } );
    return ( temp1300.fun ( &temp1300.env ,  ( env->builder2749 ) ,  (  c2753 ) ) );
}

static  enum Unit_7   write1270 (   struct env55* env ,    struct StrBuilder_54 *  builder2749 ,    struct StrConcat_64  s2751 ) {
    struct env1275 envinst1275 = {
        .envinst52 = env->envinst52 ,
        .builder2749 =  builder2749 ,
    };
    ( (  for_dash_each1271 ) ( ( (  chars1292 ) ( (  s2751 ) ) ) ,  ( (struct envunion1276){ .fun = (  enum Unit_7  (*) (  struct env1275*  ,    struct Char_57  ) )lam1299 , .env =  envinst1275 } ) ) );
    return ( Unit_7_Unit );
}

static  uint8_t *   cast_dash_ptr1312 (    uint8_t *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_12   cast_dash_slice1311 (    struct Slice_12  s1932 ) {
    return ( (struct Slice_12) { .f_ptr = ( (  cast_dash_ptr1312 ) ( ( (  s1932 ) .f_ptr ) ) ) , .f_count = ( (  s1932 ) .f_count ) } );
}

static  struct StrView_21   as_dash_str1310 (    struct StrBuilder_54 *  builder2787 ) {
    return ( (struct StrView_21) { .f_contents = ( (  cast_dash_slice1311 ) ( ( (  subslice328 ) ( ( ( ( * (  builder2787 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2787 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_21   mk_dash_dyn_dash_str1266 (   struct env61* env ,    struct StrConcat_64  s2807 ,    enum CAllocator_9  al2809 ) {
    struct StrBuilder_54  temp1267 = ( (  mk1268 ) ( (  al2809 ) ) );
    struct StrBuilder_54 *  sb2810 = ( &temp1267 );
    struct envunion63  temp1269 = ( (struct envunion63){ .fun = (  enum Unit_7  (*) (  struct env55*  ,    struct StrBuilder_54 *  ,    struct StrConcat_64  ) )write1270 , .env =  env->envinst55 } );
    ( temp1269.fun ( &temp1269.env ,  (  sb2810 ) ,  (  s2807 ) ) );
    struct envunion62  temp1309 = ( (struct envunion62){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1301 , .env =  env->envinst52 } );
    ( temp1309.fun ( &temp1309.env ,  (  sb2810 ) ,  ( (  nullchar528 ) ( ) ) ) );
    struct StrView_21  dynstr2811 = ( (  as_dash_str1310 ) ( (  sb2810 ) ) );
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = ( ( (  dynstr2811 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub304 ( ( ( (  dynstr2811 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_7   set_dash_msg1264 (   struct env130* env ,    struct Editor_136 *  ed4162 ,    struct StrConcat_64  s4164 ) {
    ( (  reset_dash_msg932 ) ( (  ed4162 ) ) );
    struct envunion131  temp1265 = ( (struct envunion131){ .fun = (  struct StrView_21  (*) (  struct env61*  ,    struct StrConcat_64  ,    enum CAllocator_9  ) )mk_dash_dyn_dash_str1266 , .env =  env->envinst61 } );
    (*  ed4162 ) .f_msg = ( ( Maybe_140_Just ) ( ( temp1265.fun ( &temp1265.env ,  (  s4164 ) ,  ( ( * (  ed4162 ) ) .f_al ) ) ) ) );
    return ( Unit_7_Unit );
}

struct envunion1315 {
    enum Unit_7  (*fun) (  struct env120*  ,    struct Pane_137 *  ,    struct Tuple2_149  ,    struct StrView_21  );
    struct env120 env;
};

struct env1314 {
    ;
    ;
    struct env120 envinst120;
    ;
    ;
    ;
    struct Editor_136 *  ed4208;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion1316 {
    enum Unit_7  (*fun) (  struct env1314*  ,    struct StrView_21  );
    struct env1314 env;
};

static  enum Unit_7   if_dash_just1313 (    struct Maybe_140  x1291 ,   struct envunion1316  fun1293 ) {
    struct Maybe_140  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_140_Just_t ) {
        struct envunion1316  temp1317 = (  fun1293 );
        ( temp1317.fun ( &temp1317.env ,  ( dref1294 .stuff .Maybe_140_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_140_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  struct Pos_20   max_dash_pos1319 (    struct Pane_137 *  pane4011 ) {
    return ( {  struct Maybe_28  dref4012 = ( ( * (  pane4011 ) ) .f_sel ) ; dref4012.tag == Maybe_28_Just_t ? ( (  max318 ) ( ( ( * (  pane4011 ) ) .f_cursor ) ,  ( dref4012 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( ( * (  pane4011 ) ) .f_cursor ) ; } );
}

static  uint8_t   elem_dash_get1321 (    struct Slice_12  self1867 ,    size_t  idx1869 ) {
    return ( (  get379 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

static  uint8_t   last1320 (    struct Slice_12  s1935 ) {
    if ( (  eq239 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1082 ) ( ( (  from_dash_string220 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1321 ( (  s1935 ) , (  op_dash_sub304 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1322 (    int32_t  x1352 ,    int32_t  mn1354 ,    int32_t  mx1356 ) {
    if ( (  cmp317 ( (  x1352 ) , (  mn1354 ) ) == 0 ) ) {
        return (  mn1354 );
    } else {
        if ( (  cmp317 ( (  x1352 ) , (  mx1356 ) ) == 2 ) ) {
            return (  mx1356 );
        } else {
            return (  x1352 );
        }
    }
}

static  enum Unit_7   lam1318 (   struct env1314* env ,    struct StrView_21  cp4215 ) {
    struct Pos_20  start4216 = ( (  max_dash_pos1319 ) ( ( (  pane988 ) ( ( env->ed4208 ) ) ) ) );
    if ( (  eq208 ( ( (  last1320 ) ( ( (  cp4215 ) .f_contents ) ) ) , ( (  ascii_dash_u8745 ) ( ( (  from_dash_charlike787 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        start4216 = ( (struct Pos_20) { .f_line = ( (  clamp1322 ) ( (  op_dash_add274 ( ( (  start4216 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  num_dash_lines991 ) ( ( ( * ( (  pane988 ) ( ( env->ed4208 ) ) ) ) .f_buf ) ) ) ) ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } );
    } else {
        start4216 = ( (  right_dash_pos990 ) ( ( ( ( * ( env->ed4208 ) ) .f_pane ) .f_buf ) ,  (  start4216 ) ) );
    }
    struct envunion1315  temp1323 = ( (struct envunion1315){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_137 *  ,    struct Tuple2_149  ,    struct StrView_21  ) )replace_dash_selection1143 , .env =  env->envinst120 } );
    ( temp1323.fun ( &temp1323.env ,  ( (  pane988 ) ( ( env->ed4208 ) ) ) ,  ( ( Tuple2_149_Tuple2 ) ( (  start4216 ) ,  (  start4216 ) ) ) ,  (  cp4215 ) ) );
    return ( Unit_7_Unit );
}

struct envunion1326 {
    enum Unit_7  (*fun) (  struct env120*  ,    struct Pane_137 *  ,    struct Tuple2_149  ,    struct StrView_21  );
    struct env120 env;
};

struct env1325 {
    struct Editor_136 *  ed4208;
    ;
    ;
    ;
    ;
    struct env120 envinst120;
    ;
    ;
    ;
};

struct envunion1327 {
    enum Unit_7  (*fun) (  struct env1325*  ,    struct StrView_21  );
    struct env1325 env;
};

static  enum Unit_7   if_dash_just1324 (    struct Maybe_140  x1291 ,   struct envunion1327  fun1293 ) {
    struct Maybe_140  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_140_Just_t ) {
        struct envunion1327  temp1328 = (  fun1293 );
        ( temp1328.fun ( &temp1328.env ,  ( dref1294 .stuff .Maybe_140_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_140_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  struct Pos_20   min_dash_pos1330 (    struct Pane_137 *  pane4006 ) {
    return ( {  struct Maybe_28  dref4007 = ( ( * (  pane4006 ) ) .f_sel ) ; dref4007.tag == Maybe_28_Just_t ? ( (  min315 ) ( ( ( * (  pane4006 ) ) .f_cursor ) ,  ( dref4007 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( ( * (  pane4006 ) ) .f_cursor ) ; } );
}

static  enum Unit_7   lam1329 (   struct env1325* env ,    struct StrView_21  cp4218 ) {
    struct Pos_20  start4219 = ( (  min_dash_pos1330 ) ( ( (  pane988 ) ( ( env->ed4208 ) ) ) ) );
    if ( (  eq208 ( ( (  last1320 ) ( ( (  cp4218 ) .f_contents ) ) ) , ( (  ascii_dash_u8745 ) ( ( (  from_dash_charlike787 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_20  temp1331 = (  start4219 );
        temp1331 .  f_bi = (  from_dash_integral48 ( 0 ) );
        start4219 = ( temp1331 );
    }
    struct envunion1326  temp1332 = ( (struct envunion1326){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_137 *  ,    struct Tuple2_149  ,    struct StrView_21  ) )replace_dash_selection1143 , .env =  env->envinst120 } );
    ( temp1332.fun ( &temp1332.env ,  ( (  pane988 ) ( ( env->ed4208 ) ) ) ,  ( ( Tuple2_149_Tuple2 ) ( (  start4219 ) ,  (  start4219 ) ) ) ,  (  cp4218 ) ) );
    return ( Unit_7_Unit );
}

struct envunion1335 {
    enum Unit_7  (*fun) (  struct env120*  ,    struct Pane_137 *  ,    struct Tuple2_149  ,    struct StrView_21  );
    struct env120 env;
};

struct env1334 {
    struct Editor_136 *  ed4208;
    struct env120 envinst120;
    ;
    ;
};

struct envunion1336 {
    enum Unit_7  (*fun) (  struct env1334*  ,    struct StrView_21  );
    struct env1334 env;
};

static  enum Unit_7   if_dash_just1333 (    struct Maybe_140  x1291 ,   struct envunion1336  fun1293 ) {
    struct Maybe_140  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_140_Just_t ) {
        struct envunion1336  temp1337 = (  fun1293 );
        ( temp1337.fun ( &temp1337.env ,  ( dref1294 .stuff .Maybe_140_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_140_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1338 (   struct env1334* env ,    struct StrView_21  cp4221 ) {
    struct Pos_20  start4222 = ( (  min_dash_pos1330 ) ( ( (  pane988 ) ( ( env->ed4208 ) ) ) ) );
    struct envunion1335  temp1339 = ( (struct envunion1335){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_137 *  ,    struct Tuple2_149  ,    struct StrView_21  ) )replace_dash_selection1143 , .env =  env->envinst120 } );
    ( temp1339.fun ( &temp1339.env ,  ( (  pane988 ) ( ( env->ed4208 ) ) ) ,  ( ( Tuple2_149_Tuple2 ) ( (  start4222 ) ,  (  start4222 ) ) ) ,  (  cp4221 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   expand1340 (    struct Pane_137 *  pane4025 ) {
    struct Pos_20  min_dash_pos4026 = ( (  min_dash_pos1330 ) ( (  pane4025 ) ) );
    struct Pos_20  max_dash_pos4027 = ( (  max_dash_pos1319 ) ( (  pane4025 ) ) );
    int32_t  max_dash_pos_dash_max4028 = ( (  size_dash_i32196 ) ( ( (  num_dash_bytes984 ) ( ( (  line951 ) ( ( ( * (  pane4025 ) ) .f_buf ) ,  ( (  max_dash_pos4027 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq320 ( ( (  min_dash_pos4026 ) .f_bi ) , (  from_dash_integral48 ( 0 ) ) ) ) && (  eq320 ( ( (  max_dash_pos4027 ) .f_bi ) , (  max_dash_pos_dash_max4028 ) ) ) ) ) ) {
        struct Pos_20  temp1341 = (  min_dash_pos4026 );
        temp1341 .  f_bi = (  from_dash_integral48 ( 0 ) );
        (*  pane4025 ) .f_sel = ( ( Maybe_28_Just ) ( ( temp1341 ) ) );
        struct Pos_20  temp1342 = (  max_dash_pos4027 );
        temp1342 .  f_bi = (  max_dash_pos_dash_max4028 );
        (*  pane4025 ) .f_cursor = ( temp1342 );
    } else {
        if ( (  cmp317 ( (  op_dash_add274 ( ( (  max_dash_pos4027 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) , ( (  num_dash_lines991 ) ( ( ( * (  pane4025 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_7_Unit );
        }
        struct Pos_20  temp1343 = (  min_dash_pos4026 );
        temp1343 .  f_bi = (  from_dash_integral48 ( 0 ) );
        (*  pane4025 ) .f_sel = ( ( Maybe_28_Just ) ( ( temp1343 ) ) );
        int32_t  next_dash_line4029 = (  op_dash_add274 ( ( (  max_dash_pos4027 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) );
        (*  pane4025 ) .f_cursor = ( (struct Pos_20) { .f_line = (  next_dash_line4029 ) , .f_bi = ( (  size_dash_i32196 ) ( ( (  num_dash_bytes984 ) ( ( (  line951 ) ( ( ( * (  pane4025 ) ) .f_buf ) ,  (  next_dash_line4029 ) ) ) ) ) ) ) } );
    }
    return ( Unit_7_Unit );
}

static  bool   is_dash_none1344 (    struct Maybe_28  m1264 ) {
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

struct Maybe_1346 {
    enum {
        Maybe_1346_None_t,
        Maybe_1346_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_149  field0;
        } Maybe_1346_Just_s;
    } stuff;
};

static struct Maybe_1346 Maybe_1346_Just (  struct Tuple2_149  field0 ) {
    return ( struct Maybe_1346 ) { .tag = Maybe_1346_Just_t, .stuff = { .Maybe_1346_Just_s = { .field0 = field0 } } };
};

struct env1348 {
    ;
    ;
    struct StrView_21  query4099;
    ;
    ;
    struct Pane_137 *  pane4095;
};

struct envunion1350 {
    struct Maybe_1006  (*fun) (  struct env1348*  ,    struct Pos_20  );
    struct env1348 env;
};

struct Zip_1357 {
    struct SliceIter_342  f_left_dash_it;
    struct SliceIter_342  f_right_dash_it;
};

struct Tuple2_1358 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_1358 Tuple2_1358_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_1358 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1360 {
    bool (*  fun1126 )(    struct Tuple2_1358  );
};

struct envunion1361 {
    bool  (*fun) (  struct env1360*  ,    struct Tuple2_1358  ,    bool  );
    struct env1360 env;
};

static  struct Zip_1357   into_dash_iter1362 (    struct Zip_1357  self911 ) {
    return (  self911 );
}

struct Maybe_1363 {
    enum {
        Maybe_1363_None_t,
        Maybe_1363_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1358  field0;
        } Maybe_1363_Just_s;
    } stuff;
};

static struct Maybe_1363 Maybe_1363_Just (  struct Tuple2_1358  field0 ) {
    return ( struct Maybe_1363 ) { .tag = Maybe_1363_Just_t, .stuff = { .Maybe_1363_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1363   next1364 (    struct Zip_1357 *  self914 ) {
    struct Zip_1357  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_345  dref916 = ( (  next346 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_345_None_t ) {
            return ( (struct Maybe_1363) { .tag = Maybe_1363_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_345_Just_t ) {
                struct Maybe_345  dref918 = ( (  next346 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_345_None_t ) {
                    return ( (struct Maybe_1363) { .tag = Maybe_1363_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_345_Just_t ) {
                        ( (  next346 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next346 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1363_Just ) ( ( ( Tuple2_1358_Tuple2 ) ( ( dref916 .stuff .Maybe_345_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_345_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1359 (    struct Zip_1357  iterable1093 ,    bool  base1095 ,   struct envunion1361  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_1357  it1099 = ( (  into_dash_iter1362 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1363  dref1100 = ( (  next1364 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1363_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1363_Just_t ) {
                struct envunion1361  temp1365 = (  fun1097 );
                x1098 = ( temp1365.fun ( &temp1365.env ,  ( dref1100 .stuff .Maybe_1363_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1366 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1366);
    exit ( 1 );
    ( Unit_7_Unit );
    bool  temp1367;
    return (  temp1367 );
}

static  bool   lam1368 (   struct env1360* env ,    struct Tuple2_1358  e1128 ,    bool  x1130 ) {
    return ( ( ( env->fun1126 ) ( (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1356 (    struct Zip_1357  it1124 ,    bool (*  fun1126 )(    struct Tuple2_1358  ) ) {
    struct env1360 envinst1360 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1359 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1361){ .fun = (  bool  (*) (  struct env1360*  ,    struct Tuple2_1358  ,    bool  ) )lam1368 , .env =  envinst1360 } ) ) );
}

static  struct Zip_1357   zip1369 (    struct Slice_12  left922 ,    struct Slice_12  right924 ) {
    struct SliceIter_342  left_dash_it925 = ( (  into_dash_iter344 ) ( (  left922 ) ) );
    struct SliceIter_342  right_dash_it926 = ( (  into_dash_iter344 ) ( (  right924 ) ) );
    return ( (struct Zip_1357) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  bool   lam1370 (    struct Tuple2_1358  dref1862 ) {
    return (  eq208 ( ( dref1862 .field0 ) , ( dref1862 .field1 ) ) );
}

static  bool   eq1355 (    struct Slice_12  l1859 ,    struct Slice_12  r1861 ) {
    if ( ( !  eq239 ( ( (  l1859 ) .f_count ) , ( (  r1861 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all1356 ) ( ( (  zip1369 ) ( (  l1859 ) ,  (  r1861 ) ) ) ,  (  lam1370 ) ) );
}

static  struct Maybe_1006   find_dash_slice1352 (    struct Slice_12  haystack1912 ,    struct Slice_12  needle1914 ) {
    struct RangeIter_689  temp1353 =  into_dash_iter691 ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( ( (  size_dash_i32196 ) ( ( (  haystack1912 ) .f_count ) ) ) , ( (  size_dash_i32196 ) ( ( (  needle1914 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_272  __cond1354 =  next692 (&temp1353);
        if (  __cond1354 .tag == 0 ) {
            break;
        }
        int32_t  i1916 =  __cond1354 .stuff .Maybe_272_Just_s .field0;
        if ( (  eq1355 ( ( (  subslice328 ) ( (  haystack1912 ) ,  ( (  i32_dash_size262 ) ( (  i1916 ) ) ) ,  (  op_dash_add232 ( ( (  i32_dash_size262 ) ( (  i1916 ) ) ) , ( (  needle1914 ) .f_count ) ) ) ) ) , (  needle1914 ) ) ) ) {
            return ( ( Maybe_1006_Just ) ( ( (  i32_dash_size262 ) ( (  i1916 ) ) ) ) );
        }
    }
    return ( (struct Maybe_1006) { .tag = Maybe_1006_None_t } );
}

static  struct StrView_21   byte_dash_substr_dash_from1371 (    struct StrView_21  s2190 ,    size_t  from2192 ) {
    return ( (struct StrView_21) { .f_contents = ( (  from327 ) ( ( (  s2190 ) .f_contents ) ,  (  from2192 ) ) ) } );
}

static  struct Maybe_1006   search_dash_on_dash_line1351 (   struct env1348* env ,    struct Pos_20  pos4102 ) {
    return ( (  find_dash_slice1352 ) ( ( ( (  byte_dash_substr_dash_from1371 ) ( ( (  line951 ) ( ( ( * ( env->pane4095 ) ) .f_buf ) ,  ( (  pos4102 ) .f_line ) ) ) ,  ( (  i32_dash_size262 ) ( ( (  pos4102 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4099 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1377 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  int32_t   op_dash_mul1378 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  int32_t   mod1376 (    int32_t  l1229 ,    int32_t  d1231 ) {
    int32_t  r1232 = (  op_dash_div1377 ( (  l1229 ) , (  d1231 ) ) );
    int32_t  m1233 = (  op_dash_sub812 ( (  l1229 ) , (  op_dash_mul1378 ( (  r1232 ) , (  d1231 ) ) ) ) );
    if ( (  cmp317 ( (  m1233 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add274 ( (  d1231 ) , (  m1233 ) ) );
    } else {
        return (  m1233 );
    }
}

struct envunion1380 {
    struct Maybe_1006  (*fun) (  struct env1348*  ,    struct Pos_20  );
    struct env1348 env;
};

static  struct Maybe_1346   search_dash_from1347 (    struct Pane_137 *  pane4095 ,    struct Pos_20  pos4097 ,    struct StrView_21  query4099 ) {
    struct env1348 envinst1348 = {
        .query4099 =  query4099 ,
        .pane4095 =  pane4095 ,
    };
    struct envunion1350  temp1349 = ( (struct envunion1350){ .fun = (  struct Maybe_1006  (*) (  struct env1348*  ,    struct Pos_20  ) )search_dash_on_dash_line1351 , .env =  envinst1348 } );
    struct Maybe_1006  dref4103 = ( temp1349.fun ( &temp1349.env ,  (  pos4097 ) ) );
    if ( dref4103.tag == Maybe_1006_Just_t ) {
        struct Pos_20  temp1372 = (  pos4097 );
        temp1372 .  f_bi = (  op_dash_add274 ( ( (  pos4097 ) .f_bi ) , ( (  size_dash_i32196 ) ( ( dref4103 .stuff .Maybe_1006_Just_s .field0 ) ) ) ) );
        struct Pos_20  sel_dash_pos4105 = ( temp1372 );
        struct Pos_20  temp1373 = (  pos4097 );
        temp1373 .  f_bi = (  op_dash_sub812 ( (  op_dash_add274 ( ( (  pos4097 ) .f_bi ) , ( (  size_dash_i32196 ) ( (  op_dash_add232 ( ( dref4103 .stuff .Maybe_1006_Just_s .field0 ) , ( (  num_dash_bytes984 ) ( (  query4099 ) ) ) ) ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
        struct Pos_20  cur_dash_pos4106 = ( temp1373 );
        return ( ( Maybe_1346_Just ) ( ( ( Tuple2_149_Tuple2 ) ( (  sel_dash_pos4105 ) ,  (  cur_dash_pos4106 ) ) ) ) );
    }
    else {
        if ( dref4103.tag == Maybe_1006_None_t ) {
            int32_t  num_dash_lines4107 = ( (  num_dash_lines991 ) ( ( ( * (  pane4095 ) ) .f_buf ) ) );
            struct RangeIter_689  temp1374 =  into_dash_iter691 ( ( (  to694 ) ( (  from_dash_integral48 ( 1 ) ) ,  (  num_dash_lines4107 ) ) ) );
            while (true) {
                struct Maybe_272  __cond1375 =  next692 (&temp1374);
                if (  __cond1375 .tag == 0 ) {
                    break;
                }
                int32_t  i4109 =  __cond1375 .stuff .Maybe_272_Just_s .field0;
                int32_t  line4110 = ( (  mod1376 ) ( (  op_dash_add274 ( ( (  pos4097 ) .f_line ) , (  i4109 ) ) ) ,  (  num_dash_lines4107 ) ) );
                struct envunion1380  temp1379 = ( (struct envunion1380){ .fun = (  struct Maybe_1006  (*) (  struct env1348*  ,    struct Pos_20  ) )search_dash_on_dash_line1351 , .env =  envinst1348 } );
                struct Maybe_1006  dref4111 = ( temp1379.fun ( &temp1379.env ,  ( (struct Pos_20) { .f_line = (  line4110 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ) );
                if ( dref4111.tag == Maybe_1006_Just_t ) {
                    struct Pos_20  sel_dash_pos4113 = ( (struct Pos_20) { .f_line = (  line4110 ) , .f_bi = ( (  size_dash_i32196 ) ( ( dref4111 .stuff .Maybe_1006_Just_s .field0 ) ) ) } );
                    struct Pos_20  cur_dash_pos4114 = ( (struct Pos_20) { .f_line = (  line4110 ) , .f_bi = (  op_dash_sub812 ( ( (  size_dash_i32196 ) ( (  op_dash_add232 ( ( dref4111 .stuff .Maybe_1006_Just_s .field0 ) , ( (  num_dash_bytes984 ) ( (  query4099 ) ) ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1346_Just ) ( ( ( Tuple2_149_Tuple2 ) ( (  sel_dash_pos4113 ) ,  (  cur_dash_pos4114 ) ) ) ) );
                }
                else {
                    if ( dref4111.tag == Maybe_1006_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1346) { .tag = Maybe_1346_None_t } );
        }
    }
}

static  enum Unit_7   next_dash_match1345 (    struct Editor_136 *  ed4192 ) {
    struct Maybe_140  dref4193 = ( ( * (  ed4192 ) ) .f_search_dash_term );
    if ( dref4193.tag == Maybe_140_None_t ) {
        return ( Unit_7_Unit );
    }
    else {
        if ( dref4193.tag == Maybe_140_Just_t ) {
            struct Maybe_1346  dref4195 = ( (  search_dash_from1347 ) ( ( (  pane988 ) ( (  ed4192 ) ) ) ,  ( (  max_dash_pos1319 ) ( ( (  pane988 ) ( (  ed4192 ) ) ) ) ) ,  ( dref4193 .stuff .Maybe_140_Just_s .field0 ) ) );
            if ( dref4195.tag == Maybe_1346_None_t ) {
            }
            else {
                if ( dref4195.tag == Maybe_1346_Just_t ) {
                    ( (  set_dash_cursors945 ) ( ( (  pane988 ) ( (  ed4192 ) ) ) ,  ( dref4195 .stuff .Maybe_1346_Just_s .field0 .field1 ) ,  ( ( Maybe_28_Just ) ( ( dref4195 .stuff .Maybe_1346_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_946_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Maybe_1006   find_dash_last_dash_occurence_dash_of_dash_slice1383 (    struct Slice_12  haystack1919 ,    struct Slice_12  needle1921 ) {
    struct Maybe_1006  occ1922 = ( (struct Maybe_1006) { .tag = Maybe_1006_None_t } );
    struct RangeIter_689  temp1384 =  into_dash_iter691 ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( ( (  size_dash_i32196 ) ( ( (  haystack1919 ) .f_count ) ) ) , ( (  size_dash_i32196 ) ( ( (  needle1921 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_272  __cond1385 =  next692 (&temp1384);
        if (  __cond1385 .tag == 0 ) {
            break;
        }
        int32_t  i1924 =  __cond1385 .stuff .Maybe_272_Just_s .field0;
        if ( (  eq1355 ( ( (  subslice328 ) ( (  haystack1919 ) ,  ( (  i32_dash_size262 ) ( (  i1924 ) ) ) ,  (  op_dash_add232 ( ( (  i32_dash_size262 ) ( (  i1924 ) ) ) , ( (  needle1921 ) .f_count ) ) ) ) ) , (  needle1921 ) ) ) ) {
            occ1922 = ( ( Maybe_1006_Just ) ( ( (  i32_dash_size262 ) ( (  i1924 ) ) ) ) );
        }
    }
    return (  occ1922 );
}

static  struct Maybe_1346   search_dash_back1382 (    struct Pane_137 *  pane4117 ,    struct Pos_20  pos4119 ,    struct StrView_21  query4121 ) {
    struct Maybe_1006  dref4122 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1383 ) ( ( ( (  byte_dash_substr385 ) ( ( (  line951 ) ( ( ( * (  pane4117 ) ) .f_buf ) ,  ( (  pos4119 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size262 ) ( ( (  pos4119 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4121 ) .f_contents ) ) );
    if ( dref4122.tag == Maybe_1006_Just_t ) {
        struct Pos_20  temp1386 = (  pos4119 );
        temp1386 .  f_bi = ( (  size_dash_i32196 ) ( ( dref4122 .stuff .Maybe_1006_Just_s .field0 ) ) );
        struct Pos_20  sel_dash_pos4124 = ( temp1386 );
        struct Pos_20  temp1387 = (  pos4119 );
        temp1387 .  f_bi = (  op_dash_sub812 ( ( (  size_dash_i32196 ) ( (  op_dash_add232 ( ( dref4122 .stuff .Maybe_1006_Just_s .field0 ) , ( (  num_dash_bytes984 ) ( (  query4121 ) ) ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
        struct Pos_20  cur_dash_pos4125 = ( temp1387 );
        return ( ( Maybe_1346_Just ) ( ( ( Tuple2_149_Tuple2 ) ( (  sel_dash_pos4124 ) ,  (  cur_dash_pos4125 ) ) ) ) );
    }
    else {
        if ( dref4122.tag == Maybe_1006_None_t ) {
            int32_t  num_dash_lines4126 = ( (  num_dash_lines991 ) ( ( ( * (  pane4117 ) ) .f_buf ) ) );
            struct RangeIter_689  temp1388 =  into_dash_iter691 ( ( (  to694 ) ( (  from_dash_integral48 ( 1 ) ) ,  (  num_dash_lines4126 ) ) ) );
            while (true) {
                struct Maybe_272  __cond1389 =  next692 (&temp1388);
                if (  __cond1389 .tag == 0 ) {
                    break;
                }
                int32_t  i4128 =  __cond1389 .stuff .Maybe_272_Just_s .field0;
                int32_t  line4129 = ( (  mod1376 ) ( (  op_dash_sub812 ( ( (  pos4119 ) .f_line ) , (  i4128 ) ) ) ,  (  num_dash_lines4126 ) ) );
                struct Maybe_1006  dref4130 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1383 ) ( ( ( (  line951 ) ( ( ( * (  pane4117 ) ) .f_buf ) ,  (  line4129 ) ) ) .f_contents ) ,  ( (  query4121 ) .f_contents ) ) );
                if ( dref4130.tag == Maybe_1006_Just_t ) {
                    struct Pos_20  sel_dash_pos4132 = ( (struct Pos_20) { .f_line = (  line4129 ) , .f_bi = ( (  size_dash_i32196 ) ( ( dref4130 .stuff .Maybe_1006_Just_s .field0 ) ) ) } );
                    struct Pos_20  cur_dash_pos4133 = ( (struct Pos_20) { .f_line = (  line4129 ) , .f_bi = (  op_dash_sub812 ( ( (  size_dash_i32196 ) ( (  op_dash_add232 ( ( dref4130 .stuff .Maybe_1006_Just_s .field0 ) , ( (  num_dash_bytes984 ) ( (  query4121 ) ) ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1346_Just ) ( ( ( Tuple2_149_Tuple2 ) ( (  sel_dash_pos4132 ) ,  (  cur_dash_pos4133 ) ) ) ) );
                }
                else {
                    if ( dref4130.tag == Maybe_1006_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1346) { .tag = Maybe_1346_None_t } );
        }
    }
}

static  enum Unit_7   prev_dash_match1381 (    struct Editor_136 *  ed4200 ) {
    struct Maybe_140  dref4201 = ( ( * (  ed4200 ) ) .f_search_dash_term );
    if ( dref4201.tag == Maybe_140_None_t ) {
        return ( Unit_7_Unit );
    }
    else {
        if ( dref4201.tag == Maybe_140_Just_t ) {
            struct Maybe_1346  dref4203 = ( (  search_dash_back1382 ) ( ( (  pane988 ) ( (  ed4200 ) ) ) ,  ( (  min_dash_pos1330 ) ( ( (  pane988 ) ( (  ed4200 ) ) ) ) ) ,  ( dref4201 .stuff .Maybe_140_Just_s .field0 ) ) );
            if ( dref4203.tag == Maybe_1346_None_t ) {
            }
            else {
                if ( dref4203.tag == Maybe_1346_Just_t ) {
                    ( (  set_dash_cursors945 ) ( ( (  pane988 ) ( (  ed4200 ) ) ) ,  ( dref4203 .stuff .Maybe_1346_Just_s .field0 .field1 ) ,  ( ( Maybe_28_Just ) ( ( dref4203 .stuff .Maybe_1346_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_946_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   begin_dash_changeset1393 (   struct env109* env ,    struct TextBuf_88 *  self3786 ,    struct Cursors_27  before_dash_cursors3788 ) {
    struct Actions_89 *  actions3789 = ( & ( ( * (  self3786 ) ) .f_actions ) );
    ( (  trim_dash_actions1146 ) ( (  actions3789 ) ) );
    ( (  flush_dash_insert_dash_action998 ) ( (  self3786 ) ) );
    ( (  assert477 ) ( (  eq1189 ( ( ( ( * (  self3786 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_90_NoChangeset ) ) ) ,  ( (  from_dash_string220 ) ( ( "expect no changeset bruh" ) ,  ( 24 ) ) ) ) );
    enum CAllocator_9  al3790 = ( ( * (  self3786 ) ) .f_al );
    struct Changeset_26  temp1394 = ( (struct Changeset_26) { .f_parts = ( (  mk1218 ) ( (  al3790 ) ) ) , .f_before_dash_cursors = (  before_dash_cursors3788 ) } );
    struct Changeset_26 *  changeset3791 = ( &temp1394 );
    struct envunion110  temp1395 = ( (struct envunion110){ .fun = (  enum Unit_7  (*) (  struct env22*  ,    struct List_24 *  ,    struct Changeset_26  ) )add1228 , .env =  env->envinst22 } );
    ( temp1395.fun ( &temp1395.env ,  ( & ( ( * (  actions3789 ) ) .f_list ) ) ,  ( * (  changeset3791 ) ) ) );
    (*  actions3789 ) .f_input_dash_changeset = ( ChangesetInputType_90_CustomChangeset );
    (*  actions3789 ) .f_cur = (  op_dash_add232 ( ( ( * (  actions3789 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Maybe_1076   head1401 (    struct List_17  it1142 ) {
    struct SliceIter_1069  temp1402 = ( (  into_dash_iter1070 ) ( (  it1142 ) ) );
    return ( (  next1077 ) ( ( &temp1402 ) ) );
}

static  bool   null1400 (    struct List_17  it1151 ) {
    struct Maybe_1076  dref1152 = ( (  head1401 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_1076_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_7   end_dash_changeset1399 (    struct TextBuf_88 *  self3794 ) {
    ( (  flush_dash_insert_dash_action998 ) ( (  self3794 ) ) );
    struct Actions_89 *  actions3795 = ( & ( ( * (  self3794 ) ) .f_actions ) );
    if ( ( (  null1400 ) ( ( ( * ( (  last_dash_ptr1191 ) ( ( (  to_dash_slice1192 ) ( ( ( * (  actions3795 ) ) .f_list ) ) ) ) ) ) .f_parts ) ) ) ) {
        (*  actions3795 ) .f_cur = (  op_dash_sub304 ( ( ( * (  actions3795 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
        (*  actions3795 ) .f_input_dash_changeset = ( ChangesetInputType_90_NoChangeset );
        ( (  trim_dash_actions1146 ) ( (  actions3795 ) ) );
    }
    return ( Unit_7_Unit );
}

static  struct Maybe_28   fmap_dash_maybe1404 (    struct Maybe_28  x1275 ,    struct Pos_20 (*  fun1277 )(    struct Pos_20  ) ) {
    struct Maybe_28  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_28_None_t ) {
        return ( (struct Maybe_28) { .tag = Maybe_28_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_28_Just_t ) {
            return ( ( Maybe_28_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_28_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_20   lam1405 (    struct Pos_20  sel4083 ) {
    struct Pos_20  temp1406 = (  sel4083 );
    temp1406 .  f_bi = (  op_dash_add274 ( ( (  sel4083 ) .f_bi ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( temp1406 );
}

static  enum Unit_7   indent_dash_selection1391 (   struct env122* env ,    struct Pane_137 *  self4079 ) {
    struct envunion123  temp1392 = ( (struct envunion123){ .fun = (  enum Unit_7  (*) (  struct env109*  ,    struct TextBuf_88 *  ,    struct Cursors_27  ) )begin_dash_changeset1393 , .env =  env->envinst109 } );
    ( temp1392.fun ( &temp1392.env ,  ( ( * (  self4079 ) ) .f_buf ) ,  ( (struct Cursors_27) { .f_cur = ( ( * (  self4079 ) ) .f_cursor ) , .f_sel = ( ( * (  self4079 ) ) .f_sel ) } ) ) );
    struct RangeIter_689  temp1396 =  into_dash_iter691 ( ( (  to694 ) ( ( ( (  min_dash_pos1330 ) ( (  self4079 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1319 ) ( (  self4079 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_272  __cond1397 =  next692 (&temp1396);
        if (  __cond1397 .tag == 0 ) {
            break;
        }
        int32_t  line4081 =  __cond1397 .stuff .Maybe_272_Just_s .field0;
        struct envunion124  temp1398 = ( (struct envunion124){ .fun = (  struct Maybe_113  (*) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  ) )change1145 , .env =  env->envinst104 } );
        ( temp1398.fun ( &temp1398.env ,  ( ( * (  self4079 ) ) .f_buf ) ,  ( (struct Pos_20) { .f_line = (  line4081 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ,  ( (struct Pos_20) { .f_line = (  line4081 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ,  ( (  from_dash_charlike1128 ) ( ( "\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_113) { .tag = Maybe_113_None_t } ) ) );
    }
    ( (  end_dash_changeset1399 ) ( ( ( * (  self4079 ) ) .f_buf ) ) );
    struct Pos_20  temp1403 = ( ( * (  self4079 ) ) .f_cursor );
    temp1403 .  f_bi = (  op_dash_add274 ( ( ( ( * (  self4079 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral48 ( 1 ) ) ) );
    ( (  set_dash_cursors945 ) ( (  self4079 ) ,  ( temp1403 ) ,  ( (  fmap_dash_maybe1404 ) ( ( ( * (  self4079 ) ) .f_sel ) ,  (  lam1405 ) ) ) ,  ( CursorMovement_946_UpdateVI ) ) );
    return ( Unit_7_Unit );
}

struct env1417 {
    bool  last_dash_char_dash_was_dash_tab4088;
    ;
    ;
};

struct envunion1418 {
    struct Pos_20  (*fun) (  struct env1417*  ,    struct Pos_20  );
    struct env1417 env;
};

static  struct Maybe_28   fmap_dash_maybe1416 (    struct Maybe_28  x1275 ,   struct envunion1418  fun1277 ) {
    struct Maybe_28  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_28_None_t ) {
        return ( (struct Maybe_28) { .tag = Maybe_28_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_28_Just_t ) {
            struct envunion1418  temp1419 = (  fun1277 );
            return ( ( Maybe_28_Just ) ( ( temp1419.fun ( &temp1419.env ,  ( dref1278 .stuff .Maybe_28_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_20   lam1420 (   struct env1417* env ,    struct Pos_20  sel4092 ) {
    struct Pos_20  temp1421 = (  sel4092 );
    temp1421 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4088 ) ? (  op_dash_sub812 ( ( (  sel4092 ) .f_bi ) , (  from_dash_integral48 ( 1 ) ) ) ) : ( (  sel4092 ) .f_bi ) );
    return ( temp1421 );
}

static  enum Unit_7   dedent_dash_selection1408 (   struct env125* env ,    struct Pane_137 *  self4086 ) {
    struct envunion126  temp1409 = ( (struct envunion126){ .fun = (  enum Unit_7  (*) (  struct env109*  ,    struct TextBuf_88 *  ,    struct Cursors_27  ) )begin_dash_changeset1393 , .env =  env->envinst109 } );
    ( temp1409.fun ( &temp1409.env ,  ( ( * (  self4086 ) ) .f_buf ) ,  ( (struct Cursors_27) { .f_cur = ( ( * (  self4086 ) ) .f_cursor ) , .f_sel = ( ( * (  self4086 ) ) .f_sel ) } ) ) );
    struct Pos_20  temp1410 = ( (  min_dash_pos1330 ) ( (  self4086 ) ) );
    temp1410 .  f_bi = (  from_dash_integral48 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4087 = (  eq403 ( ( (  char_dash_at1044 ) ( (  self4086 ) ,  ( temp1410 ) ) ) , ( (  from_dash_charlike221 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_20  temp1411 = ( (  max_dash_pos1319 ) ( (  self4086 ) ) );
    temp1411 .  f_bi = (  from_dash_integral48 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4088 = (  eq403 ( ( (  char_dash_at1044 ) ( (  self4086 ) ,  ( temp1411 ) ) ) , ( (  from_dash_charlike221 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_689  temp1412 =  into_dash_iter691 ( ( (  to694 ) ( ( ( (  min_dash_pos1330 ) ( (  self4086 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1319 ) ( (  self4086 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_272  __cond1413 =  next692 (&temp1412);
        if (  __cond1413 .tag == 0 ) {
            break;
        }
        int32_t  line4090 =  __cond1413 .stuff .Maybe_272_Just_s .field0;
        if ( (  eq403 ( ( (  char_dash_at1044 ) ( (  self4086 ) ,  ( (struct Pos_20) { .f_line = (  line4090 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike221 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion127  temp1414 = ( (struct envunion127){ .fun = (  struct Maybe_113  (*) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  ) )change1145 , .env =  env->envinst104 } );
            ( temp1414.fun ( &temp1414.env ,  ( ( * (  self4086 ) ) .f_buf ) ,  ( (struct Pos_20) { .f_line = (  line4090 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ,  ( (struct Pos_20) { .f_line = (  line4090 ) , .f_bi = (  from_dash_integral48 ( 1 ) ) } ) ,  ( (  from_dash_string220 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_113) { .tag = Maybe_113_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1399 ) ( ( ( * (  self4086 ) ) .f_buf ) ) );
    struct Pos_20  temp1415 = ( ( * (  self4086 ) ) .f_cursor );
    temp1415 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4087 ) ? (  op_dash_sub812 ( ( ( ( * (  self4086 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral48 ( 1 ) ) ) ) : ( ( ( * (  self4086 ) ) .f_cursor ) .f_bi ) );
    struct env1417 envinst1417 = {
        .last_dash_char_dash_was_dash_tab4088 =  last_dash_char_dash_was_dash_tab4088 ,
    };
    ( (  set_dash_cursors945 ) ( (  self4086 ) ,  ( temp1415 ) ,  ( (  fmap_dash_maybe1416 ) ( ( ( * (  self4086 ) ) .f_sel ) ,  ( (struct envunion1418){ .fun = (  struct Pos_20  (*) (  struct env1417*  ,    struct Pos_20  ) )lam1420 , .env =  envinst1417 } ) ) ) ,  ( CursorMovement_946_UpdateVI ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   handle_dash_normal_dash_key943 (   struct env142* env ,    struct Editor_136 *  ed4208 ,    struct Key_153  key4210 ) {
    struct Key_153  dref4211 = (  key4210 );
    if ( dref4211.tag == Key_153_Char_t ) {
        if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4208 ) .f_running = ( false );
        } else {
            if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left944 ) ( ( (  pane988 ) ( (  ed4208 ) ) ) ) );
            } else {
                if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right989 ) ( ( (  pane988 ) ( (  ed4208 ) ) ) ) );
                } else {
                    if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down992 ) ( ( (  pane988 ) ( (  ed4208 ) ) ) ) );
                    } else {
                        if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up996 ) ( ( (  pane988 ) ( (  ed4208 ) ) ) ) );
                        } else {
                            if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode997 ) ( ( (  pane988 ) ( (  ed4208 ) ) ) ,  ( Mode_138_Insert ) ) );
                            } else {
                                if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "I" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  move_dash_to_dash_beginning999 ) ( ( (  pane988 ) ( (  ed4208 ) ) ) ) );
                                    ( (  set_dash_mode997 ) ( ( (  pane988 ) ( (  ed4208 ) ) ) ,  ( Mode_138_Insert ) ) );
                                } else {
                                    if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  move_dash_to_dash_end1018 ) ( ( (  pane988 ) ( (  ed4208 ) ) ) ) );
                                        ( (  set_dash_mode997 ) ( ( (  pane988 ) ( (  ed4208 ) ) ) ,  ( Mode_138_Insert ) ) );
                                    } else {
                                        if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  advance_dash_word1020 ) ( ( (  pane988 ) ( (  ed4208 ) ) ) ,  ( MoveDirection_1021_MoveFwd ) ,  ( MoveTarget_1022_NextWordStart ) ) );
                                        } else {
                                            if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                                ( (  advance_dash_word1020 ) ( ( (  pane988 ) ( (  ed4208 ) ) ) ,  ( MoveDirection_1021_MoveFwd ) ,  ( MoveTarget_1022_NextWordEnd ) ) );
                                            } else {
                                                if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  advance_dash_word1020 ) ( ( (  pane988 ) ( (  ed4208 ) ) ) ,  ( MoveDirection_1021_MoveBwd ) ,  ( MoveTarget_1022_NextWordEnd ) ) );
                                                } else {
                                                    if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                        struct envunion144  temp1056 = ( (struct envunion144){ .fun = (  enum Unit_7  (*) (  struct env118*  ,    struct Pane_137 *  ) )redo1057 , .env =  env->envinst118 } );
                                                        ( temp1056.fun ( &temp1056.env ,  ( (  pane988 ) ( (  ed4208 ) ) ) ) );
                                                    } else {
                                                        if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                            struct envunion150  temp1095 = ( (struct envunion150){ .fun = (  enum Unit_7  (*) (  struct env116*  ,    struct Pane_137 *  ) )undo1096 , .env =  env->envinst116 } );
                                                            ( temp1095.fun ( &temp1095.env ,  ( (  pane988 ) ( (  ed4208 ) ) ) ) );
                                                        } else {
                                                            if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion147  temp1113 = ( (struct envunion147){ .fun = (  enum Unit_7  (*) (  struct env128*  ,    struct Editor_136 *  ) )copy_dash_selection_dash_to_dash_clipboard1114 , .env =  env->envinst128 } );
                                                                ( temp1113.fun ( &temp1113.env ,  (  ed4208 ) ) );
                                                                struct envunion148  temp1142 = ( (struct envunion148){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_137 *  ,    struct Tuple2_149  ,    struct StrView_21  ) )replace_dash_selection1143 , .env =  env->envinst120 } );
                                                                ( temp1142.fun ( &temp1142.env ,  ( (  pane988 ) ( (  ed4208 ) ) ) ,  ( (  selection1115 ) ( ( (  pane988 ) ( (  ed4208 ) ) ) ) ) ,  ( (  from_dash_string220 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                ( (  set_dash_mode997 ) ( ( (  pane988 ) ( (  ed4208 ) ) ) ,  ( Mode_138_Normal ) ) );
                                                            } else {
                                                                if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct envunion1258  temp1257 = ( (struct envunion1258){ .fun = (  enum Unit_7  (*) (  struct env128*  ,    struct Editor_136 *  ) )copy_dash_selection_dash_to_dash_clipboard1114 , .env =  env->envinst128 } );
                                                                    ( temp1257.fun ( &temp1257.env ,  (  ed4208 ) ) );
                                                                    struct envunion1260  temp1259 = ( (struct envunion1260){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_137 *  ,    struct Tuple2_149  ,    struct StrView_21  ) )replace_dash_selection1143 , .env =  env->envinst120 } );
                                                                    ( temp1259.fun ( &temp1259.env ,  ( (  pane988 ) ( (  ed4208 ) ) ) ,  ( (  selection1115 ) ( ( (  pane988 ) ( (  ed4208 ) ) ) ) ) ,  ( (  from_dash_string220 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                    ( (  set_dash_mode997 ) ( ( (  pane988 ) ( (  ed4208 ) ) ) ,  ( Mode_138_Insert ) ) );
                                                                } else {
                                                                    if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct envunion1262  temp1261 = ( (struct envunion1262){ .fun = (  enum Unit_7  (*) (  struct env128*  ,    struct Editor_136 *  ) )copy_dash_selection_dash_to_dash_clipboard1114 , .env =  env->envinst128 } );
                                                                        ( temp1261.fun ( &temp1261.env ,  (  ed4208 ) ) );
                                                                        size_t  bytes_dash_yanked4213 = ( (  num_dash_bytes984 ) ( ( (  or_dash_else375 ) ( ( ( * (  ed4208 ) ) .f_clipboard ) ,  ( (  from_dash_string220 ) ( ( "" ) ,  ( 0 ) ) ) ) ) ) );
                                                                        struct envunion143  temp1263 = ( (struct envunion143){ .fun = (  enum Unit_7  (*) (  struct env130*  ,    struct Editor_136 *  ,    struct StrConcat_64  ) )set_dash_msg1264 , .env =  env->envinst130 } );
                                                                        ( temp1263.fun ( &temp1263.env ,  (  ed4208 ) ,  ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4213 ) ) ) ,  ( (  from_dash_string220 ) ( ( " bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                                    } else {
                                                                        if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct env1314 envinst1314 = {
                                                                                .envinst120 = env->envinst120 ,
                                                                                .ed4208 =  ed4208 ,
                                                                            };
                                                                            ( (  if_dash_just1313 ) ( ( ( * (  ed4208 ) ) .f_clipboard ) ,  ( (struct envunion1316){ .fun = (  enum Unit_7  (*) (  struct env1314*  ,    struct StrView_21  ) )lam1318 , .env =  envinst1314 } ) ) );
                                                                        } else {
                                                                            if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                struct env1325 envinst1325 = {
                                                                                    .ed4208 =  ed4208 ,
                                                                                    .envinst120 = env->envinst120 ,
                                                                                };
                                                                                ( (  if_dash_just1324 ) ( ( ( * (  ed4208 ) ) .f_clipboard ) ,  ( (struct envunion1327){ .fun = (  enum Unit_7  (*) (  struct env1325*  ,    struct StrView_21  ) )lam1329 , .env =  envinst1325 } ) ) );
                                                                            } else {
                                                                                if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    struct env1334 envinst1334 = {
                                                                                        .ed4208 =  ed4208 ,
                                                                                        .envinst120 = env->envinst120 ,
                                                                                    };
                                                                                    ( (  if_dash_just1333 ) ( ( ( * (  ed4208 ) ) .f_clipboard ) ,  ( (struct envunion1336){ .fun = (  enum Unit_7  (*) (  struct env1334*  ,    struct StrView_21  ) )lam1338 , .env =  envinst1334 } ) ) );
                                                                                } else {
                                                                                    if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        ( (  expand1340 ) ( ( (  pane988 ) ( (  ed4208 ) ) ) ) );
                                                                                    } else {
                                                                                        if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            ( (  set_dash_mode997 ) ( ( (  pane988 ) ( (  ed4208 ) ) ) ,  ( Mode_138_Select ) ) );
                                                                                            if ( ( (  is_dash_none1344 ) ( ( ( ( * (  ed4208 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                                (*  ed4208 ) .f_pane .f_sel = ( ( Maybe_28_Just ) ( ( ( ( * (  ed4208 ) ) .f_pane ) .f_cursor ) ) );
                                                                                            }
                                                                                        } else {
                                                                                            if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                (*  ed4208 ) .f_mode = ( ( EditorMode_141_Cmd ) ( ( ( * ( (  pane988 ) ( (  ed4208 ) ) ) ) .f_cursor ) ,  ( (  mk1268 ) ( ( ( * (  ed4208 ) ) .f_al ) ) ) ) );
                                                                                            } else {
                                                                                                if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    (*  ed4208 ) .f_mode = ( ( EditorMode_141_Search ) ( ( ( * ( (  pane988 ) ( (  ed4208 ) ) ) ) .f_cursor ) ,  ( (  mk1268 ) ( ( ( * (  ed4208 ) ) .f_al ) ) ) ) );
                                                                                                } else {
                                                                                                    if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        ( (  next_dash_match1345 ) ( (  ed4208 ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            ( (  prev_dash_match1381 ) ( (  ed4208 ) ) );
                                                                                                        } else {
                                                                                                            if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( ">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                struct envunion145  temp1390 = ( (struct envunion145){ .fun = (  enum Unit_7  (*) (  struct env122*  ,    struct Pane_137 *  ) )indent_dash_selection1391 , .env =  env->envinst122 } );
                                                                                                                ( temp1390.fun ( &temp1390.env ,  ( (  pane988 ) ( (  ed4208 ) ) ) ) );
                                                                                                            } else {
                                                                                                                if ( (  eq786 ( ( dref4211 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                    struct envunion146  temp1407 = ( (struct envunion146){ .fun = (  enum Unit_7  (*) (  struct env125*  ,    struct Pane_137 *  ) )dedent_dash_selection1408 , .env =  env->envinst125 } );
                                                                                                                    ( temp1407.fun ( &temp1407.env ,  ( (  pane988 ) ( (  ed4208 ) ) ) ) );
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
                }
            }
        }
    }
    else {
        if ( dref4211.tag == Key_153_Escape_t ) {
            ( (  set_dash_mode997 ) ( ( (  pane988 ) ( (  ed4208 ) ) ) ,  ( Mode_138_Normal ) ) );
        }
        else {
            if ( true ) {
            }
        }
    }
    return ( Unit_7_Unit );
}

struct envunion1423 {
    enum Unit_7  (*fun) (  struct env142*  ,    struct Editor_136 *  ,    struct Key_153  );
    struct env142 env;
};

static  enum Unit_7   add_dash_str_dash_at_dash_char1425 (   struct env111* env ,    struct Pane_137 *  self4041 ,    struct StrView_21  s4043 ) {
    struct Pos_20  cur4044 = ( ( * (  self4041 ) ) .f_cursor );
    struct envunion112  temp1426 = ( (struct envunion112){ .fun = (  struct Maybe_113  (*) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  ) )change1145 , .env =  env->envinst104 } );
    ( temp1426.fun ( &temp1426.env ,  ( ( * (  self4041 ) ) .f_buf ) ,  (  cur4044 ) ,  (  cur4044 ) ,  (  s4043 ) ,  ( (struct Maybe_113) { .tag = Maybe_113_None_t } ) ) );
    return ( Unit_7_Unit );
}

struct envunion1430 {
    enum Unit_7  (*fun) (  struct env111*  ,    struct Pane_137 *  ,    struct StrView_21  );
    struct env111 env;
};

static  enum Unit_7   backspace1432 (   struct env114* env ,    struct Pane_137 *  self4047 ) {
    struct Pos_20  prev_dash_cur4048 = ( ( * (  self4047 ) ) .f_cursor );
    ( (  move_dash_left944 ) ( (  self4047 ) ) );
    struct envunion115  temp1433 = ( (struct envunion115){ .fun = (  struct Maybe_113  (*) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  ) )change1145 , .env =  env->envinst104 } );
    ( temp1433.fun ( &temp1433.env ,  ( ( * (  self4047 ) ) .f_buf ) ,  ( ( * (  self4047 ) ) .f_cursor ) ,  (  prev_dash_cur4048 ) ,  ( (  from_dash_string220 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_113) { .tag = Maybe_113_None_t } ) ) );
    return ( Unit_7_Unit );
}

struct Array_1435 {
    char _arr [1];
};

static  char *   cast1436 (    struct Array_1435 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_802   as_dash_slice1434 (    struct Array_1435 *  arr2272 ) {
    return ( (struct Slice_802) { .f_ptr = ( (  cast1436 ) ( (  arr2272 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1435   from_dash_listlike1438 (    struct Array_1435  self330 ) {
    return (  self330 );
}

struct envunion1440 {
    enum Unit_7  (*fun) (  struct env111*  ,    struct Pane_137 *  ,    struct StrView_21  );
    struct env111 env;
};

struct Scanner_1443 {
    struct StrView_21  f_s;
};

static  struct Scanner_1443   mk_dash_from_dash_strview1445 (    struct StrView_21  s3169 ) {
    return ( (struct Scanner_1443) { .f_s = (  s3169 ) } );
}

struct TakeWhile_1450 {
    struct StrViewIter_603  f_it;
    bool (*  f_pred )(    struct Char_57  );
};

struct Map_1449 {
    struct TakeWhile_1450  field0;
    size_t (*  field1 )(    struct Char_57  );
};

static struct Map_1449 Map_1449_Map (  struct TakeWhile_1450  field0 ,  size_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1449 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1449   into_dash_iter1452 (    struct Map_1449  self796 ) {
    return (  self796 );
}

static  struct Maybe_606   next1454 (    struct TakeWhile_1450 *  self964 ) {
    struct Maybe_606  mx965 = ( (  next607 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_606  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_606_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_606_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_606_Just ) ( ( dref966 .stuff .Maybe_606_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
            }
        }
    }
}

static  struct Maybe_1006   next1453 (    struct Map_1449 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1454 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_1006) { .tag = Maybe_1006_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_1006_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1451 (    struct Map_1449  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1449  it1099 = ( (  into_dash_iter1452 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1006  dref1100 = ( (  next1453 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1006_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1006_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1006_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1455 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1455);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1456;
    return (  temp1456 );
}

static  size_t   lam1457 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add232 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1448 (    struct Map_1449  it1110 ) {
    return ( (  reduce1451 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1457 ) ) );
}

static  struct TakeWhile_1450   into_dash_iter1459 (    struct TakeWhile_1450  self961 ) {
    return (  self961 );
}

static  struct Map_1449   map1458 (    struct TakeWhile_1450  iterable805 ,    size_t (*  fun807 )(    struct Char_57  ) ) {
    struct TakeWhile_1450  it808 = ( (  into_dash_iter1459 ) ( (  iterable805 ) ) );
    return ( ( Map_1449_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1450   take_dash_while1460 (    struct StrViewIter_603  it970 ,    bool (*  pred972 )(    struct Char_57  ) ) {
    return ( (struct TakeWhile_1450) { .f_it = ( (  into_dash_iter605 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1461 (    struct Char_57  c2202 ) {
    return ( (  c2202 ) .f_num_dash_bytes );
}

static  struct StrView_21   take_dash_while1447 (    struct StrView_21  self2198 ,    bool (*  fun2200 )(    struct Char_57  ) ) {
    size_t  bi2203 = ( (  sum1448 ) ( ( (  map1458 ) ( ( (  take_dash_while1460 ) ( ( (  chars608 ) ( (  self2198 ) ) ) ,  (  fun2200 ) ) ) ,  (  lam1461 ) ) ) ) );
    return ( (  byte_dash_substr385 ) ( (  self2198 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2203 ) ) );
}

static  struct StrView_21   take_dash_str_dash_while1446 (    struct Scanner_1443 *  sc3215 ,    bool (*  fun3217 )(    struct Char_57  ) ) {
    struct StrView_21  s3218 = ( (  take_dash_while1447 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  (  fun3217 ) ) );
    (*  sc3215 ) .f_s = ( (  byte_dash_substr_dash_from1371 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  ( (  num_dash_bytes984 ) ( (  s3218 ) ) ) ) );
    return (  s3218 );
}

static  bool   is_dash_not_dash_whitespace1462 (    struct Char_57  c2382 ) {
    return ( ! ( (  is_dash_whitespace1043 ) ( (  c2382 ) ) ) );
}

struct TakeWhile_1468 {
    struct StrViewIter_603  f_it;
    bool (*  f_pred )(    struct Char_57  );
};

struct Map_1467 {
    struct TakeWhile_1468  field0;
    size_t (*  field1 )(    struct Char_57  );
};

static struct Map_1467 Map_1467_Map (  struct TakeWhile_1468  field0 ,  size_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1467 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1467   into_dash_iter1470 (    struct Map_1467  self796 ) {
    return (  self796 );
}

static  struct Maybe_606   next1472 (    struct TakeWhile_1468 *  self964 ) {
    struct Maybe_606  mx965 = ( (  next607 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_606  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_606_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_606_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_606_Just ) ( ( dref966 .stuff .Maybe_606_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
            }
        }
    }
}

static  struct Maybe_1006   next1471 (    struct Map_1467 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1472 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_1006) { .tag = Maybe_1006_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_1006_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1469 (    struct Map_1467  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1467  it1099 = ( (  into_dash_iter1470 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1006  dref1100 = ( (  next1471 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1006_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1006_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1006_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1473 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1473);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1474;
    return (  temp1474 );
}

static  size_t   lam1475 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add232 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1466 (    struct Map_1467  it1110 ) {
    return ( (  reduce1469 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1475 ) ) );
}

static  struct TakeWhile_1468   into_dash_iter1477 (    struct TakeWhile_1468  self961 ) {
    return (  self961 );
}

static  struct Map_1467   map1476 (    struct TakeWhile_1468  iterable805 ,    size_t (*  fun807 )(    struct Char_57  ) ) {
    struct TakeWhile_1468  it808 = ( (  into_dash_iter1477 ) ( (  iterable805 ) ) );
    return ( ( Map_1467_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1468   take_dash_while1478 (    struct StrViewIter_603  it970 ,    bool (*  pred972 )(    struct Char_57  ) ) {
    return ( (struct TakeWhile_1468) { .f_it = ( (  into_dash_iter605 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1479 (    struct Char_57  c2202 ) {
    return ( (  c2202 ) .f_num_dash_bytes );
}

static  struct StrView_21   take_dash_while1465 (    struct StrView_21  self2198 ,    bool (*  fun2200 )(    struct Char_57  ) ) {
    size_t  bi2203 = ( (  sum1466 ) ( ( (  map1476 ) ( ( (  take_dash_while1478 ) ( ( (  chars608 ) ( (  self2198 ) ) ) ,  (  fun2200 ) ) ) ,  (  lam1479 ) ) ) ) );
    return ( (  byte_dash_substr385 ) ( (  self2198 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2203 ) ) );
}

static  struct StrView_21   take_dash_str_dash_while1464 (    struct Scanner_1443 *  sc3215 ,    bool (*  fun3217 )(    struct Char_57  ) ) {
    struct StrView_21  s3218 = ( (  take_dash_while1465 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  (  fun3217 ) ) );
    (*  sc3215 ) .f_s = ( (  byte_dash_substr_dash_from1371 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  ( (  num_dash_bytes984 ) ( (  s3218 ) ) ) ) );
    return (  s3218 );
}

static  enum Unit_7   drop_dash_str_dash_while1463 (    struct Scanner_1443 *  sc3221 ,    bool (*  fun3223 )(    struct Char_57  ) ) {
    ( (  take_dash_str_dash_while1464 ) ( (  sc3221 ) ,  (  fun3223 ) ) );
    return ( Unit_7_Unit );
}

static  bool   eq1480 (    struct StrView_21  l2209 ,    struct StrView_21  r2211 ) {
    return (  eq1355 ( ( (  l2209 ) .f_contents ) , ( (  r2211 ) .f_contents ) ) );
}

static  enum Unit_7   undefined1482 (  ) {
    enum Unit_7  temp1483;
    return (  temp1483 );
}

static  enum Unit_7   todo1481 (  ) {
    ( (  print1049 ) ( ( (  from_dash_string220 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined1482 ) ( ) );
}

struct env1486 {
    bool (*  fun1126 )(    struct Char_57  );
};

struct envunion1487 {
    bool  (*fun) (  struct env1486*  ,    struct Char_57  ,    bool  );
    struct env1486 env;
};

static  bool   reduce1485 (    struct StrView_21  iterable1093 ,    bool  base1095 ,   struct envunion1487  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct StrViewIter_603  it1099 = ( (  into_dash_iter609 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_606  dref1100 = ( (  next607 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_606_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_606_Just_t ) {
                struct envunion1487  temp1488 = (  fun1097 );
                x1098 = ( temp1488.fun ( &temp1488.env ,  ( dref1100 .stuff .Maybe_606_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1489 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1489);
    exit ( 1 );
    ( Unit_7_Unit );
    bool  temp1490;
    return (  temp1490 );
}

static  bool   lam1491 (   struct env1486* env ,    struct Char_57  e1128 ,    bool  x1130 ) {
    return ( ( ( env->fun1126 ) ( (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1484 (    struct StrView_21  it1124 ,    bool (*  fun1126 )(    struct Char_57  ) ) {
    struct env1486 envinst1486 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1485 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1487){ .fun = (  bool  (*) (  struct env1486*  ,    struct Char_57  ,    bool  ) )lam1491 , .env =  envinst1486 } ) ) );
}

struct env1500 {
    struct env52 envinst52;
    struct StrBuilder_54 *  builder2749;
};

struct envunion1501 {
    enum Unit_7  (*fun) (  struct env1500*  ,    struct Char_57  );
    struct env1500 env;
};

static  enum Unit_7   for_dash_each1499 (    struct StrViewIter_603  iterable1074 ,   struct envunion1501  fun1076 ) {
    struct StrViewIter_603  temp1502 = ( (  into_dash_iter605 ) ( (  iterable1074 ) ) );
    struct StrViewIter_603 *  it1077 = ( &temp1502 );
    while ( ( true ) ) {
        struct Maybe_606  dref1078 = ( (  next607 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_606_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_606_Just_t ) {
                struct envunion1501  temp1503 = (  fun1076 );
                ( temp1503.fun ( &temp1503.env ,  ( dref1078 .stuff .Maybe_606_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1504 (   struct env1500* env ,    struct Char_57  c2753 ) {
    struct envunion56  temp1505 = ( (struct envunion56){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1301 , .env =  env->envinst52 } );
    return ( temp1505.fun ( &temp1505.env ,  ( env->builder2749 ) ,  (  c2753 ) ) );
}

static  enum Unit_7   write1498 (   struct env58* env ,    struct StrBuilder_54 *  builder2749 ,    struct StrView_21  s2751 ) {
    struct env1500 envinst1500 = {
        .envinst52 = env->envinst52 ,
        .builder2749 =  builder2749 ,
    };
    ( (  for_dash_each1499 ) ( ( (  chars608 ) ( (  s2751 ) ) ) ,  ( (struct envunion1501){ .fun = (  enum Unit_7  (*) (  struct env1500*  ,    struct Char_57  ) )lam1504 , .env =  envinst1500 } ) ) );
    return ( Unit_7_Unit );
}

static  struct StrView_21   mk_dash_dyn_dash_str1495 (   struct env66* env ,    struct StrView_21  s2807 ,    enum CAllocator_9  al2809 ) {
    struct StrBuilder_54  temp1496 = ( (  mk1268 ) ( (  al2809 ) ) );
    struct StrBuilder_54 *  sb2810 = ( &temp1496 );
    struct envunion67  temp1497 = ( (struct envunion67){ .fun = (  enum Unit_7  (*) (  struct env58*  ,    struct StrBuilder_54 *  ,    struct StrView_21  ) )write1498 , .env =  env->envinst58 } );
    ( temp1497.fun ( &temp1497.env ,  (  sb2810 ) ,  (  s2807 ) ) );
    struct envunion62  temp1506 = ( (struct envunion62){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1301 , .env =  env->envinst52 } );
    ( temp1506.fun ( &temp1506.env ,  (  sb2810 ) ,  ( (  nullchar528 ) ( ) ) ) );
    struct StrView_21  dynstr2811 = ( (  as_dash_str1310 ) ( (  sb2810 ) ) );
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = ( ( (  dynstr2811 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub304 ( ( ( (  dynstr2811 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_7   set_dash_msg1493 (   struct env132* env ,    struct Editor_136 *  ed4162 ,    struct StrView_21  s4164 ) {
    ( (  reset_dash_msg932 ) ( (  ed4162 ) ) );
    struct envunion133  temp1494 = ( (struct envunion133){ .fun = (  struct StrView_21  (*) (  struct env66*  ,    struct StrView_21  ,    enum CAllocator_9  ) )mk_dash_dyn_dash_str1495 , .env =  env->envinst66 } );
    (*  ed4162 ) .f_msg = ( ( Maybe_140_Just ) ( ( temp1494.fun ( &temp1494.env ,  (  s4164 ) ,  ( ( * (  ed4162 ) ) .f_al ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   run_dash_cmd1442 (   struct env134* env ,    struct Editor_136 *  ed4175 ,    struct StrView_21  s4177 ) {
    struct Scanner_1443  temp1444 = ( (  mk_dash_from_dash_strview1445 ) ( (  s4177 ) ) );
    struct Scanner_1443 *  sc4178 = ( &temp1444 );
    struct StrView_21  cmd4179 = ( (  take_dash_str_dash_while1446 ) ( (  sc4178 ) ,  (  is_dash_not_dash_whitespace1462 ) ) );
    ( (  drop_dash_str_dash_while1463 ) ( (  sc4178 ) ,  (  is_dash_whitespace1043 ) ) );
    if ( (  eq1480 ( (  cmd4179 ) , ( (  from_dash_charlike1128 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4175 ) .f_running = ( false );
    } else {
        if ( (  eq1480 ( (  cmd4179 ) , ( (  from_dash_string220 ) ( ( "wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq1480 ( (  cmd4179 ) , ( (  from_dash_charlike1128 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  todo1481 ) ( ) );
            } else {
                if ( (  eq1480 ( (  cmd4179 ) , ( (  from_dash_string220 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                } else {
                    if ( ( (  all1484 ) ( (  cmd4179 ) ,  (  is_dash_digit826 ) ) ) ) {
                    } else {
                        struct envunion135  temp1492 = ( (struct envunion135){ .fun = (  enum Unit_7  (*) (  struct env132*  ,    struct Editor_136 *  ,    struct StrView_21  ) )set_dash_msg1493 , .env =  env->envinst132 } );
                        ( temp1492.fun ( &temp1492.env ,  (  ed4175 ) ,  ( (  from_dash_string220 ) ( ( "unknown command" ) ,  ( 15 ) ) ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   free1507 (    struct StrBuilder_54 *  builder2793 ) {
    ( (  free424 ) ( ( & ( ( * (  builder2793 ) ) .f_chars ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Char_57   ascii_dash_char1509 (    char  c782 ) {
    return ( (  from_dash_u8892 ) ( ( (  ascii_dash_u8745 ) ( (  c782 ) ) ) ) );
}

static  struct Maybe_820   reduce1512 (    struct StrViewIter_603  iterable1093 ,    struct Maybe_820  base1095 ,    struct Maybe_820 (*  fun1097 )(    struct Char_57  ,    struct Maybe_820  ) ) {
    struct Maybe_820  x1098 = (  base1095 );
    struct StrViewIter_603  it1099 = ( (  into_dash_iter605 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_606  dref1100 = ( (  next607 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_606_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_606_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_606_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1513 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1513);
    exit ( 1 );
    ( Unit_7_Unit );
    struct Maybe_820  temp1514;
    return (  temp1514 );
}

static  struct Maybe_820   sequence_dash_maybe1515 (    struct Char_57  e2460 ,    struct Maybe_820  b2462 ) {
    struct Maybe_820  dref2463 = (  b2462 );
    if ( dref2463.tag == Maybe_820_None_t ) {
        return ( (struct Maybe_820) { .tag = Maybe_820_None_t } );
    }
    else {
        if ( dref2463.tag == Maybe_820_Just_t ) {
            struct Maybe_272  dref2465 = ( (  parse_dash_digit851 ) ( (  e2460 ) ) );
            if ( dref2465.tag == Maybe_272_None_t ) {
                return ( (struct Maybe_820) { .tag = Maybe_820_None_t } );
            }
            else {
                if ( dref2465.tag == Maybe_272_Just_t ) {
                    return ( ( Maybe_820_Just ) ( (  op_dash_add405 ( (  op_dash_mul230 ( ( dref2463 .stuff .Maybe_820_Just_s .field0 ) , (  from_dash_integral303 ( 10 ) ) ) ) , ( (  i32_dash_i64860 ) ( ( dref2465 .stuff .Maybe_272_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_820   parse_dash_int1511 (    struct StrView_21  s2457 ) {
    struct StrViewIter_603  cs2467 = ( (  chars608 ) ( (  s2457 ) ) );
    struct Maybe_606  dref2468 = ( (  head1046 ) ( (  cs2467 ) ) );
    if ( dref2468.tag == Maybe_606_Just_t ) {
        return ( (  reduce1512 ) ( (  cs2467 ) ,  ( ( Maybe_820_Just ) ( (  from_dash_integral303 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1515 ) ) );
    }
    else {
        if ( dref2468.tag == Maybe_606_None_t ) {
            return ( (struct Maybe_820) { .tag = Maybe_820_None_t } );
        }
    }
}

static  enum Unit_7   live_dash_cmd1510 (    struct Editor_136 *  ed4167 ,    struct StrView_21  cmd4169 ) {
    struct Maybe_820  dref4170 = ( (  parse_dash_int1511 ) ( (  cmd4169 ) ) );
    if ( dref4170.tag == Maybe_820_Just_t ) {
        int32_t  line4172 = ( (  clamp1322 ) ( ( (  i64_dash_i32862 ) ( ( dref4170 .stuff .Maybe_820_Just_s .field0 ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( ( (  num_dash_lines991 ) ( ( ( * ( (  pane988 ) ( (  ed4167 ) ) ) ) .f_buf ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
        ( (  set_dash_cursors945 ) ( ( (  pane988 ) ( (  ed4167 ) ) ) ,  ( (struct Pos_20) { .f_line = (  line4172 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_946_NoChanges ) ) );
    }
    else {
        if ( dref4170.tag == Maybe_820_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrViewIter_603   chars1520 (    struct StrBuilder_54  s2801 ) {
    return ( (  into_dash_iter609 ) ( ( (  as_dash_str1310 ) ( ( & (  s2801 ) ) ) ) ) );
}

static  struct StrViewIter_603   into_dash_iter1519 (    struct StrBuilder_54  self2804 ) {
    return ( (  chars1520 ) ( (  self2804 ) ) );
}

static  struct Maybe_606   head1517 (    struct StrBuilder_54  it1142 ) {
    struct StrViewIter_603  temp1518 = ( (  into_dash_iter1519 ) ( (  it1142 ) ) );
    return ( (  next607 ) ( ( &temp1518 ) ) );
}

static  bool   null1516 (    struct StrBuilder_54  it1151 ) {
    struct Maybe_606  dref1152 = ( (  head1517 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_606_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_7   remove1526 (   struct env34* env ,    struct List_11 *  list2076 ,    size_t  i2078 ) {
    struct envunion35  temp1527 = ( (struct envunion35){ .fun = (  enum Unit_7  (*) (  struct env32*  ,    struct List_11 *  ,    size_t  ,    size_t  ) )remove_dash_range427 , .env =  env->envinst32 } );
    ( temp1527.fun ( &temp1527.env ,  (  list2076 ) ,  (  i2078 ) ,  (  op_dash_add232 ( (  i2078 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   pop1524 (   struct env36* env ,    struct List_11 *  list2092 ) {
    if ( (  eq239 ( ( ( * (  list2092 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1082 ) ( ( (  from_dash_string220 ) ( ( "List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct envunion37  temp1525 = ( (struct envunion37){ .fun = (  enum Unit_7  (*) (  struct env34*  ,    struct List_11 *  ,    size_t  ) )remove1526 , .env =  env->envinst34 } );
    return ( temp1525.fun ( &temp1525.env ,  (  list2092 ) ,  (  op_dash_sub304 ( ( ( * (  list2092 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  enum Unit_7   pop1522 (   struct env59* env ,    struct StrBuilder_54 *  sb2767 ) {
    struct envunion60  temp1523 = ( (struct envunion60){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ) )pop1524 , .env =  env->envinst36 } );
    return ( temp1523.fun ( &temp1523.env ,  ( & ( ( * (  sb2767 ) ) .f_chars ) ) ) );
}

struct env1529 {
    struct Editor_136 *  ed4225;
    ;
};

struct envunion1530 {
    enum Unit_7  (*fun) (  struct env1529*  ,    struct StrView_21  );
    struct env1529 env;
};

static  enum Unit_7   if_dash_just1528 (    struct Maybe_140  x1291 ,   struct envunion1530  fun1293 ) {
    struct Maybe_140  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_140_Just_t ) {
        struct envunion1530  temp1531 = (  fun1293 );
        ( temp1531.fun ( &temp1531.env ,  ( dref1294 .stuff .Maybe_140_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_140_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1532 (   struct env1529* env ,    struct StrView_21  st4243 ) {
    ( (  free938 ) ( (  st4243 ) ,  ( ( * ( env->ed4225 ) ) .f_al ) ) );
    return ( Unit_7_Unit );
}

struct envunion1534 {
    enum Unit_7  (*fun) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  );
    struct env52 env;
};

static  struct Maybe_606   head1537 (    struct StrView_21  it1142 ) {
    struct StrViewIter_603  temp1538 = ( (  into_dash_iter609 ) ( (  it1142 ) ) );
    return ( (  next607 ) ( ( &temp1538 ) ) );
}

static  bool   null1536 (    struct StrView_21  it1151 ) {
    struct Maybe_606  dref1152 = ( (  head1537 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_606_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_7   live_dash_search1535 (    struct Editor_136 *  ed4182 ,    struct Pos_20  begin_dash_pos4184 ,    struct StrView_21  query4186 ) {
    if ( ( ! ( (  null1536 ) ( (  query4186 ) ) ) ) ) {
        struct Maybe_1346  dref4187 = ( (  search_dash_from1347 ) ( ( (  pane988 ) ( (  ed4182 ) ) ) ,  (  begin_dash_pos4184 ) ,  (  query4186 ) ) );
        if ( dref4187.tag == Maybe_1346_Just_t ) {
            ( (  set_dash_cursors945 ) ( ( (  pane988 ) ( (  ed4182 ) ) ) ,  ( dref4187 .stuff .Maybe_1346_Just_s .field0 .field1 ) ,  ( ( Maybe_28_Just ) ( ( dref4187 .stuff .Maybe_1346_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_946_NoChanges ) ) );
        }
        else {
            if ( dref4187.tag == Maybe_1346_None_t ) {
                ( (  set_dash_cursors945 ) ( ( (  pane988 ) ( (  ed4182 ) ) ) ,  (  begin_dash_pos4184 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_946_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors945 ) ( ( (  pane988 ) ( (  ed4182 ) ) ) ,  (  begin_dash_pos4184 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_946_NoChanges ) ) );
    }
    return ( Unit_7_Unit );
}

struct envunion1540 {
    enum Unit_7  (*fun) (  struct env59*  ,    struct StrBuilder_54 *  );
    struct env59 env;
};

static  enum Unit_7   handle_dash_key941 (   struct env151* env ,    struct Editor_136 *  ed4225 ,    struct Key_153  key4227 ) {
    struct EditorMode_141 *  dref4228 = ( & ( ( * (  ed4225 ) ) .f_mode ) );
    if ( (* dref4228 ).tag == EditorMode_141_Normal_t ) {
        enum Mode_138  dref4229 = ( ( ( * (  ed4225 ) ) .f_pane ) .f_mode );
        switch (  dref4229 ) {
            case Mode_138_Normal : {
                struct envunion152  temp942 = ( (struct envunion152){ .fun = (  enum Unit_7  (*) (  struct env142*  ,    struct Editor_136 *  ,    struct Key_153  ) )handle_dash_normal_dash_key943 , .env =  env->envinst142 } );
                ( temp942.fun ( &temp942.env ,  (  ed4225 ) ,  (  key4227 ) ) );
                break;
            }
            case Mode_138_Select : {
                struct envunion1423  temp1422 = ( (struct envunion1423){ .fun = (  enum Unit_7  (*) (  struct env142*  ,    struct Editor_136 *  ,    struct Key_153  ) )handle_dash_normal_dash_key943 , .env =  env->envinst142 } );
                ( temp1422.fun ( &temp1422.env ,  (  ed4225 ) ,  (  key4227 ) ) );
                break;
            }
            case Mode_138_Insert : {
                struct Key_153  dref4230 = (  key4227 );
                if ( dref4230.tag == Key_153_Escape_t ) {
                    ( (  set_dash_mode997 ) ( ( (  pane988 ) ( (  ed4225 ) ) ) ,  ( Mode_138_Normal ) ) );
                }
                else {
                    if ( dref4230.tag == Key_153_Enter_t ) {
                        int32_t  indent4231 = ( (  indent_dash_at_dash_line1000 ) ( ( (  pane988 ) ( (  ed4225 ) ) ) ,  ( ( ( * ( (  pane988 ) ( (  ed4225 ) ) ) ) .f_cursor ) .f_line ) ) );
                        struct envunion154  temp1424 = ( (struct envunion154){ .fun = (  enum Unit_7  (*) (  struct env111*  ,    struct Pane_137 *  ,    struct StrView_21  ) )add_dash_str_dash_at_dash_char1425 , .env =  env->envinst111 } );
                        ( temp1424.fun ( &temp1424.env ,  ( (  pane988 ) ( (  ed4225 ) ) ) ,  ( (  from_dash_charlike1128 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right989 ) ( ( (  pane988 ) ( (  ed4225 ) ) ) ) );
                        struct RangeIter_689  temp1427 =  into_dash_iter691 ( ( (  to694 ) ( (  from_dash_integral48 ( 1 ) ) ,  (  indent4231 ) ) ) );
                        while (true) {
                            struct Maybe_272  __cond1428 =  next692 (&temp1427);
                            if (  __cond1428 .tag == 0 ) {
                                break;
                            }
                            int32_t  dref4232 =  __cond1428 .stuff .Maybe_272_Just_s .field0;
                            struct envunion1430  temp1429 = ( (struct envunion1430){ .fun = (  enum Unit_7  (*) (  struct env111*  ,    struct Pane_137 *  ,    struct StrView_21  ) )add_dash_str_dash_at_dash_char1425 , .env =  env->envinst111 } );
                            ( temp1429.fun ( &temp1429.env ,  ( (  pane988 ) ( (  ed4225 ) ) ) ,  ( (  from_dash_charlike1128 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
                            ( (  move_dash_right989 ) ( ( (  pane988 ) ( (  ed4225 ) ) ) ) );
                        }
                    }
                    else {
                        if ( dref4230.tag == Key_153_Backspace_t ) {
                            struct envunion155  temp1431 = ( (struct envunion155){ .fun = (  enum Unit_7  (*) (  struct env114*  ,    struct Pane_137 *  ) )backspace1432 , .env =  env->envinst114 } );
                            ( temp1431.fun ( &temp1431.env ,  ( (  pane988 ) ( (  ed4225 ) ) ) ) );
                        }
                        else {
                            if ( dref4230.tag == Key_153_Char_t ) {
                                struct Array_1435  temp1437 = ( (  from_dash_listlike1438 ) ( ( (struct Array_1435) { ._arr = { ( dref4230 .stuff .Key_153_Char_s .field0 ) } } ) ) );
                                struct StrView_21  s4234 = ( (  from_dash_ascii_dash_slice817 ) ( ( (  as_dash_slice1434 ) ( ( &temp1437 ) ) ) ) );
                                struct envunion1440  temp1439 = ( (struct envunion1440){ .fun = (  enum Unit_7  (*) (  struct env111*  ,    struct Pane_137 *  ,    struct StrView_21  ) )add_dash_str_dash_at_dash_char1425 , .env =  env->envinst111 } );
                                ( temp1439.fun ( &temp1439.env ,  ( (  pane988 ) ( (  ed4225 ) ) ) ,  (  s4234 ) ) );
                                ( (  move_dash_right989 ) ( ( (  pane988 ) ( (  ed4225 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4228 ).tag == EditorMode_141_Cmd_t ) {
            struct Key_153  dref4237 = (  key4227 );
            if ( dref4237.tag == Key_153_Escape_t ) {
                ( (  set_dash_cursors945 ) ( ( (  pane988 ) ( (  ed4225 ) ) ) ,  ( (* dref4228 ) .stuff .EditorMode_141_Cmd_s .field0 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_946_UpdateVI ) ) );
                (*  ed4225 ) .f_mode = ( (struct EditorMode_141) { .tag = EditorMode_141_Normal_t } );
            }
            else {
                if ( dref4237.tag == Key_153_Enter_t ) {
                    struct envunion157  temp1441 = ( (struct envunion157){ .fun = (  enum Unit_7  (*) (  struct env134*  ,    struct Editor_136 *  ,    struct StrView_21  ) )run_dash_cmd1442 , .env =  env->envinst134 } );
                    ( temp1441.fun ( &temp1441.env ,  (  ed4225 ) ,  ( (  as_dash_str1310 ) ( ( & ( (* dref4228 ) .stuff .EditorMode_141_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1507 ) ( ( & ( (* dref4228 ) .stuff .EditorMode_141_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors945 ) ( ( (  pane988 ) ( (  ed4225 ) ) ) ,  ( ( * ( (  pane988 ) ( (  ed4225 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_946_UpdateVI ) ) );
                    (*  ed4225 ) .f_mode = ( (struct EditorMode_141) { .tag = EditorMode_141_Normal_t } );
                }
                else {
                    if ( dref4237.tag == Key_153_Char_t ) {
                        struct envunion158  temp1508 = ( (struct envunion158){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1301 , .env =  env->envinst52 } );
                        ( temp1508.fun ( &temp1508.env ,  ( & ( (* dref4228 ) .stuff .EditorMode_141_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1509 ) ( ( dref4237 .stuff .Key_153_Char_s .field0 ) ) ) ) );
                        ( (  live_dash_cmd1510 ) ( (  ed4225 ) ,  ( (  as_dash_str1310 ) ( ( & ( (* dref4228 ) .stuff .EditorMode_141_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4237.tag == Key_153_Backspace_t ) {
                            if ( ( ! ( (  null1516 ) ( ( (* dref4228 ) .stuff .EditorMode_141_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion156  temp1521 = ( (struct envunion156){ .fun = (  enum Unit_7  (*) (  struct env59*  ,    struct StrBuilder_54 *  ) )pop1522 , .env =  env->envinst59 } );
                                ( temp1521.fun ( &temp1521.env ,  ( & ( (* dref4228 ) .stuff .EditorMode_141_Cmd_s .field1 ) ) ) );
                            }
                            ( (  live_dash_cmd1510 ) ( (  ed4225 ) ,  ( (  as_dash_str1310 ) ( ( & ( (* dref4228 ) .stuff .EditorMode_141_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref4228 ).tag == EditorMode_141_Search_t ) {
                struct Key_153  dref4241 = (  key4227 );
                if ( dref4241.tag == Key_153_Escape_t ) {
                    ( (  set_dash_cursors945 ) ( ( (  pane988 ) ( (  ed4225 ) ) ) ,  ( (* dref4228 ) .stuff .EditorMode_141_Search_s .field0 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_946_UpdateVI ) ) );
                    (*  ed4225 ) .f_mode = ( (struct EditorMode_141) { .tag = EditorMode_141_Normal_t } );
                }
                else {
                    if ( dref4241.tag == Key_153_Enter_t ) {
                        ( (  set_dash_cursors945 ) ( ( (  pane988 ) ( (  ed4225 ) ) ) ,  ( ( * ( (  pane988 ) ( (  ed4225 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane988 ) ( (  ed4225 ) ) ) ) .f_sel ) ,  ( CursorMovement_946_UpdateVI ) ) );
                        struct env1529 envinst1529 = {
                            .ed4225 =  ed4225 ,
                        };
                        ( (  if_dash_just1528 ) ( ( ( * (  ed4225 ) ) .f_search_dash_term ) ,  ( (struct envunion1530){ .fun = (  enum Unit_7  (*) (  struct env1529*  ,    struct StrView_21  ) )lam1532 , .env =  envinst1529 } ) ) );
                        if ( ( ! ( (  null1516 ) ( ( (* dref4228 ) .stuff .EditorMode_141_Search_s .field1 ) ) ) ) ) {
                            struct Pos_20  to4244 = ( ( * ( (  pane988 ) ( (  ed4225 ) ) ) ) .f_cursor );
                            struct Pos_20  from4245 = ( (  or_dash_else1117 ) ( ( ( * ( (  pane988 ) ( (  ed4225 ) ) ) ) .f_sel ) ,  (  to4244 ) ) );
                            (*  ed4225 ) .f_search_dash_term = ( ( Maybe_140_Just ) ( ( (  as_dash_str1310 ) ( ( & ( (* dref4228 ) .stuff .EditorMode_141_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4225 ) .f_search_dash_term = ( (struct Maybe_140) { .tag = Maybe_140_None_t } );
                        }
                        (*  ed4225 ) .f_mode = ( (struct EditorMode_141) { .tag = EditorMode_141_Normal_t } );
                    }
                    else {
                        if ( dref4241.tag == Key_153_Char_t ) {
                            struct envunion1534  temp1533 = ( (struct envunion1534){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1301 , .env =  env->envinst52 } );
                            ( temp1533.fun ( &temp1533.env ,  ( & ( (* dref4228 ) .stuff .EditorMode_141_Search_s .field1 ) ) ,  ( (  ascii_dash_char1509 ) ( ( dref4241 .stuff .Key_153_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1535 ) ( (  ed4225 ) ,  ( (* dref4228 ) .stuff .EditorMode_141_Search_s .field0 ) ,  ( (  as_dash_str1310 ) ( ( & ( (* dref4228 ) .stuff .EditorMode_141_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4241.tag == Key_153_Backspace_t ) {
                                if ( ( ! ( (  null1516 ) ( ( (* dref4228 ) .stuff .EditorMode_141_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1540  temp1539 = ( (struct envunion1540){ .fun = (  enum Unit_7  (*) (  struct env59*  ,    struct StrBuilder_54 *  ) )pop1522 , .env =  env->envinst59 } );
                                    ( temp1539.fun ( &temp1539.env ,  ( & ( (* dref4228 ) .stuff .EditorMode_141_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1535 ) ( (  ed4225 ) ,  ( (* dref4228 ) .stuff .EditorMode_141_Search_s .field0 ) ,  ( (  as_dash_str1310 ) ( ( & ( (* dref4228 ) .stuff .EditorMode_141_Search_s .field1 ) ) ) ) ) );
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
                    ( (  todo1481 ) ( ) );
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

struct envunion1542 {
    bool  (*fun) (  struct env77*  ,    struct Screen_661 *  );
    struct env77 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1543 (   struct env77* env ,    struct Screen_661 *  screen3461 ) {
    struct Tui_73 *  tui3462 = ( ( * (  screen3461 ) ) .f_tui );
    struct envunion78  temp1544 = ( (struct envunion78){ .fun = (  bool  (*) (  struct env70*  ,    struct Tui_73 *  ) )update_dash_dimensions732 , .env =  env->envinst70 } );
    bool  updated_dash_dimensions3463 = ( temp1544.fun ( &temp1544.env ,  (  tui3462 ) ) );
    if ( ( ! (  updated_dash_dimensions3463 ) ) ) {
        return ( false );
    }
    (*  screen3461 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3464 = ( ( * ( ( * (  screen3461 ) ) .f_tui ) ) .f_width );
    uint32_t  h3465 = ( ( * ( ( * (  screen3461 ) ) .f_tui ) ) .f_height );
    size_t  nusz3466 = ( (  u32_dash_size675 ) ( (  op_dash_mul683 ( (  w3464 ) , (  h3465 ) ) ) ) );
    if ( (  cmp184 ( (  nusz3466 ) , ( ( ( * (  screen3461 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_661  nuscreen3467 = ( (  mk_dash_screen669 ) ( (  tui3462 ) ,  ( ( * (  screen3461 ) ) .f_al ) ) );
    (*  screen3461 ) .f_current = ( (  nuscreen3467 ) .f_current );
    (*  screen3461 ) .f_previous = ( (  nuscreen3467 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1545 (    struct Tui_73 *  tui3388 ) {
    bool  redraw3389 = ( ( * (  tui3388 ) ) .f_should_dash_redraw );
    (*  tui3388 ) .f_should_dash_redraw = ( false );
    return (  redraw3389 );
}

struct env1549 {
    struct Slice_662  s1905;
    struct Cell_663 (*  fun1907 )(    struct Cell_663  );
    ;
    ;
    ;
};

struct envunion1550 {
    enum Unit_7  (*fun) (  struct env1549*  ,    int32_t  );
    struct env1549 env;
};

static  enum Unit_7   for_dash_each1548 (    struct Range_686  iterable1074 ,   struct envunion1550  fun1076 ) {
    struct RangeIter_689  temp1551 = ( (  into_dash_iter691 ) ( (  iterable1074 ) ) );
    struct RangeIter_689 *  it1077 = ( &temp1551 );
    while ( ( true ) ) {
        struct Maybe_272  dref1078 = ( (  next692 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_272_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_272_Just_t ) {
                struct envunion1550  temp1552 = (  fun1076 );
                ( temp1552.fun ( &temp1552.env ,  ( dref1078 .stuff .Maybe_272_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1553 (   struct env1549* env ,    int32_t  i1909 ) {
    return ( (  set696 ) ( ( env->s1905 ) ,  ( (  i32_dash_size262 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get700 ( ( env->s1905 ) , ( (  i32_dash_size262 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_7   map1547 (    struct Slice_662  s1905 ,    struct Cell_663 (*  fun1907 )(    struct Cell_663  ) ) {
    struct env1549 envinst1549 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each1548 ) ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_i32196 ) ( (  op_dash_sub304 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1550){ .fun = (  enum Unit_7  (*) (  struct env1549*  ,    int32_t  ) )lam1553 , .env =  envinst1549 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Cell_663   lam1554 (    struct Cell_663  dref3425 ) {
    return ( (  default_dash_cell708 ) ( ) );
}

static  enum Unit_7   clear_dash_screen1546 (    struct Screen_661 *  screen3424 ) {
    ( (  map1547 ) ( ( ( * (  screen3424 ) ) .f_current ) ,  (  lam1554 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_screen_dash_fg1555 (    struct Screen_661 *  screen3470 ,    struct Color_664  c3472 ) {
    (*  screen3470 ) .f_default_dash_fg = (  c3472 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_screen_dash_bg1556 (    struct Screen_661 *  screen3475 ,    struct Color_664  c3477 ) {
    (*  screen3475 ) .f_default_dash_bg = (  c3477 );
    return ( Unit_7_Unit );
}

struct ScreenDims_1558 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

static  int32_t   cast1560 (    uint32_t  x356 ) {
    return ( (int32_t ) (  x356 ) );
}

static  int32_t   u32_dash_i321559 (    uint32_t  x660 ) {
    return ( (  cast1560 ) ( (  x660 ) ) );
}

static  int32_t   screen_dash_width1563 (    struct ScreenDims_1558  sd3877 ) {
    return (  op_dash_add274 ( (  op_dash_sub812 ( ( (  sd3877 ) .f_to_dash_sx ) , ( (  sd3877 ) .f_from_dash_sx ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1564 (    struct ScreenDims_1558  sd3880 ) {
    return (  op_dash_add274 ( (  op_dash_sub812 ( ( (  sd3880 ) .f_to_dash_sy ) , ( (  sd3880 ) .f_from_dash_sy ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
}

static  enum Unit_7   update_dash_screen_dash_offset1562 (    struct Pane_137 *  pane3883 ,    struct ScreenDims_1558  sd3885 ) {
    struct Pos_20  cur3886 = ( ( * (  pane3883 ) ) .f_cursor );
    int32_t  cur_dash_sx3887 = ( (  pos_dash_vi949 ) ( ( ( * (  pane3883 ) ) .f_buf ) ,  (  cur3886 ) ) );
    struct ScreenCursorOffset_139  sc_dash_off3888 = ( ( * (  pane3883 ) ) .f_sc_dash_off );
    int32_t  sw3889 = (  op_dash_sub812 ( ( (  screen_dash_width1563 ) ( (  sd3885 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    int32_t  sh3890 = (  op_dash_sub812 ( ( (  screen_dash_height1564 ) ( (  sd3885 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    int32_t  margin3891 = (  from_dash_integral48 ( 5 ) );
    int32_t  csi3892 = ( (  pos_dash_vi949 ) ( ( ( * (  pane3883 ) ) .f_buf ) ,  (  cur3886 ) ) );
    int32_t  csx3893 = (  op_dash_sub812 ( (  csi3892 ) , ( (  sc_dash_off3888 ) .f_screen_dash_left ) ) );
    int32_t  csy3894 = (  op_dash_sub812 ( ( (  cur3886 ) .f_line ) , ( (  sc_dash_off3888 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left3895 = ( (  sc_dash_off3888 ) .f_screen_dash_left );
    if ( (  cmp317 ( (  csx3893 ) , (  margin3891 ) ) == 0 ) ) {
        nu_dash_screen_dash_left3895 = (  op_dash_sub812 ( (  csi3892 ) , (  margin3891 ) ) );
    } else {
        if ( (  cmp317 ( (  csx3893 ) , (  op_dash_sub812 ( (  sw3889 ) , (  margin3891 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left3895 = (  op_dash_add274 ( (  op_dash_sub812 ( (  csi3892 ) , (  sw3889 ) ) ) , (  margin3891 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left3896 = ( (  max964 ) ( (  nu_dash_screen_dash_left3895 ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top3897 = ( (  sc_dash_off3888 ) .f_screen_dash_top );
    if ( (  cmp317 ( (  csy3894 ) , (  margin3891 ) ) == 0 ) ) {
        nu_dash_screen_dash_top3897 = (  op_dash_sub812 ( ( (  cur3886 ) .f_line ) , (  margin3891 ) ) );
    } else {
        if ( (  cmp317 ( (  csy3894 ) , (  op_dash_sub812 ( (  sh3890 ) , (  margin3891 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top3897 = (  op_dash_add274 ( (  op_dash_sub812 ( ( (  cur3886 ) .f_line ) , (  sh3890 ) ) ) , (  margin3891 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top3898 = ( (  max964 ) ( (  nu_dash_screen_dash_top3897 ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    (*  pane3883 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_139) { .f_screen_dash_top = (  nu_dash_screen_dash_top3898 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left3896 ) } );
    return ( Unit_7_Unit );
}

struct IntStrIter_1566 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

static  struct IntStrIter_1566   into_dash_iter1568 (    struct IntStrIter_1566  self1419 ) {
    return (  self1419 );
}

struct env1572 {
    int32_t  base1210;
    ;
};

struct envunion1573 {
    int32_t  (*fun) (  struct env1572*  ,    int32_t  ,    int32_t  );
    struct env1572 env;
};

static  int32_t   reduce1571 (    struct Range_686  iterable1093 ,    int32_t  base1095 ,   struct envunion1573  fun1097 ) {
    int32_t  x1098 = (  base1095 );
    struct RangeIter_689  it1099 = ( (  into_dash_iter691 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next692 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                struct envunion1573  temp1574 = (  fun1097 );
                x1098 = ( temp1574.fun ( &temp1574.env ,  ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1575 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1575);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1576;
    return (  temp1576 );
}

static  int32_t   lam1577 (   struct env1572* env ,    int32_t  item1214 ,    int32_t  x1216 ) {
    return (  op_dash_mul1378 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int32_t   pow1570 (    int32_t  base1210 ,    int32_t  p1212 ) {
    struct env1572 envinst1572 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1571 ) ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral48 ( 1 ) ) ,  ( (struct envunion1573){ .fun = (  int32_t  (*) (  struct env1572*  ,    int32_t  ,    int32_t  ) )lam1577 , .env =  envinst1572 } ) ) );
}

static  uint8_t   cast1578 (    int32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_606   next1569 (    struct IntStrIter_1566 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_606_Just ) ( ( (  from_dash_charlike221 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp317 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
    }
    int32_t  trim_dash_down1423 = ( (  pow1570 ) ( (  from_dash_integral48 ( 10 ) ) ,  (  op_dash_sub812 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    int32_t  upper1424 = (  op_dash_div1377 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    int32_t  upper_dash_mask1425 = (  op_dash_mul1378 ( (  op_dash_div1377 ( (  upper1424 ) , (  from_dash_integral48 ( 10 ) ) ) ) , (  from_dash_integral48 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1578 ) ( (  op_dash_sub812 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub812 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8892 ) ( (  op_dash_add782 ( (  digit1426 ) , (  from_dash_integral212 ( 48 ) ) ) ) ) );
    return ( ( Maybe_606_Just ) ( (  digit_dash_char1427 ) ) );
}

static  size_t   reduce1567 (    struct IntStrIter_1566  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_57  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct IntStrIter_1566  it1099 = ( (  into_dash_iter1568 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_606  dref1100 = ( (  next1569 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_606_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_606_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_606_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1579 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1579);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1580;
    return (  temp1580 );
}

static  size_t   lam1581 (    struct Char_57  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add232 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1565 (    struct IntStrIter_1566  it1104 ) {
    return ( (  reduce1567 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1581 ) ) );
}

static  int32_t   count_dash_digits1584 (    int32_t  self1430 ) {
    if ( (  eq320 ( (  self1430 ) , (  from_dash_integral48 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp317 ( (  self1430 ) , (  from_dash_integral48 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1377 ( (  self1430 ) , (  from_dash_integral48 ( 10 ) ) ) );
        digits1431 = (  op_dash_add274 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1566   int_dash_iter1583 (    int32_t  int1434 ) {
    if ( (  cmp317 ( (  int1434 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1566) { .f_int = (  op_dash_neg636 ( (  int1434 ) ) ) , .f_len = ( (  count_dash_digits1584 ) ( (  op_dash_neg636 ( (  int1434 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1566) { .f_int = (  int1434 ) , .f_len = ( (  count_dash_digits1584 ) ( (  int1434 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1566   chars1582 (    int32_t  self1443 ) {
    return ( (  int_dash_iter1583 ) ( (  self1443 ) ) );
}

struct Map_1589 {
    struct IntStrIter_1566  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1589 Map_1589_Map (  struct IntStrIter_1566  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1589 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1589   into_dash_iter1591 (    struct Map_1589  self796 ) {
    return (  self796 );
}

static  struct Maybe_272   next1592 (    struct Map_1589 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1569 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_272_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1590 (    struct Map_1589  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1589  it1099 = ( (  into_dash_iter1591 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next1592 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1593 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1593);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1594;
    return (  temp1594 );
}

static  int32_t   lam1595 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add274 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1588 (    struct Map_1589  it1110 ) {
    return ( (  reduce1590 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1595 ) ) );
}

static  struct Map_1589   map1596 (    struct IntStrIter_1566  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct IntStrIter_1566  it808 = ( (  into_dash_iter1568 ) ( (  iterable805 ) ) );
    return ( ( Map_1589_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  enum Unit_7   put_dash_char1600 (    struct Screen_661 *  screen3508 ,    struct Char_57  c3510 ,    int32_t  x3512 ,    int32_t  y3514 ) {
    int32_t  w3515 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3508 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp317 ( (  x3512 ) , (  w3515 ) ) != 0 ) || (  cmp317 ( (  y3514 ) , ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3508 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp317 ( (  x3512 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) ) || (  cmp317 ( (  y3514 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    size_t  i3516 = ( (  i32_dash_size262 ) ( (  op_dash_add274 ( (  op_dash_mul1378 ( (  y3514 ) , (  w3515 ) ) ) , (  x3512 ) ) ) ) );
    struct Color_664  fg3517 = ( ( * (  screen3508 ) ) .f_default_dash_fg );
    struct Color_664  bg3518 = ( ( * (  screen3508 ) ) .f_default_dash_bg );
    struct Char_57  c3519 = (  c3510 );
    int32_t  char_dash_width3520 = ( (  wcwidth965 ) ( (  c3519 ) ) );
    if ( ( (  cmp317 ( (  x3512 ) , (  from_dash_integral48 ( 0 ) ) ) == 2 ) && (  cmp317 ( ( (  elem_dash_get700 ( ( ( * (  screen3508 ) ) .f_current ) , (  op_dash_sub304 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral48 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_663  pc3521 = (  elem_dash_get700 ( ( ( * (  screen3508 ) ) .f_current ) , (  op_dash_sub304 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set696 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  op_dash_sub304 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_663) { .f_c = ( (  from_dash_charlike221 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3521 ) .f_fg ) , .f_bg = ( (  pc3521 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral48 ( 1 ) ) } ) ) );
    }
    ( (  set696 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  i3516 ) ,  ( (struct Cell_663) { .f_c = (  c3519 ) , .f_fg = (  fg3517 ) , .f_bg = (  bg3518 ) , .f_char_dash_width = (  char_dash_width3520 ) } ) ) );
    struct RangeIter_689  temp1601 =  into_dash_iter691 ( ( (  to694 ) ( (  op_dash_add274 ( (  x3512 ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  ( (  min469 ) ( (  op_dash_sub812 ( (  op_dash_add274 ( (  x3512 ) , (  char_dash_width3520 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  w3515 ) ) ) ) ) );
    while (true) {
        struct Maybe_272  __cond1602 =  next692 (&temp1601);
        if (  __cond1602 .tag == 0 ) {
            break;
        }
        int32_t  xx3523 =  __cond1602 .stuff .Maybe_272_Just_s .field0;
        size_t  i3524 = ( (  i32_dash_size262 ) ( (  op_dash_add274 ( (  op_dash_mul1378 ( (  y3514 ) , (  w3515 ) ) ) , (  xx3523 ) ) ) ) );
        ( (  set696 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  i3524 ) ,  ( (struct Cell_663) { .f_c = ( (  from_dash_charlike221 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = (  fg3517 ) , .f_bg = (  bg3518 ) , .f_char_dash_width = (  from_dash_integral48 ( 1 ) ) } ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str1597 (    struct Screen_661 *  screen3527 ,    int32_t  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1378 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct IntStrIter_1566  temp1598 =  into_dash_iter1568 ( ( (  chars1582 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1599 =  next1569 (&temp1598);
        if (  __cond1599 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1599 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1600 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1587 (    struct Screen_661 *  screen3543 ,    int32_t  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1588 ) ( ( (  map1596 ) ( ( (  chars1582 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth963 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1597 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1604 {
    struct StrView_21  field0;
    int32_t  field1;
};

static struct StrConcat_1604 StrConcat_1604_StrConcat (  struct StrView_21  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1604 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1607 {
    struct StrView_21  field0;
    struct StrConcat_1604  field1;
};

static struct StrConcat_1607 StrConcat_1607_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_1604  field1 ) {
    return ( struct StrConcat_1607 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1606 {
    struct StrConcat_1607  field0;
    struct Char_57  field1;
};

static struct StrConcat_1606 StrConcat_1606_StrConcat (  struct StrConcat_1607  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1606 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str1609 (    struct StrConcat_1604  self1503 ) {
    struct StrConcat_1604  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str195 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str202 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str1608 (    struct StrConcat_1607  self1503 ) {
    struct StrConcat_1607  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str195 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str1609 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str1605 (    struct StrConcat_1606  self1503 ) {
    struct StrConcat_1606  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str1608 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str203 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   assert1603 (    bool  cond1718 ,    struct StrConcat_1604  msg1720 ) {
    if ( ( ! (  cond1718 ) ) ) {
        ( (  print_dash_str1605 ) ( ( ( StrConcat_1606_StrConcat ) ( ( ( StrConcat_1607_StrConcat ) ( ( (  from_dash_string220 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1720 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    }
    return ( Unit_7_Unit );
}

struct AppendIter_1611 {
    struct StrViewIter_603  f_it;
    struct Char_57  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1611   into_dash_iter1612 (    struct AppendIter_1611  self1019 ) {
    return (  self1019 );
}

static  struct AppendIter_1611   append1613 (    struct StrViewIter_603  it1006 ,    struct Char_57  e1008 ) {
    return ( (struct AppendIter_1611) { .f_it = ( (  into_dash_iter605 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct Maybe_606   next1615 (    struct AppendIter_1611 *  self1022 ) {
    struct Maybe_606  dref1023 = ( (  next607 ) ( ( & ( ( * (  self1022 ) ) .f_it ) ) ) );
    if ( dref1023.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1023 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1023.tag == Maybe_606_None_t ) {
            if ( ( ! ( ( * (  self1022 ) ) .f_appended ) ) ) {
                (*  self1022 ) .f_appended = ( true );
                return ( ( Maybe_606_Just ) ( ( ( * (  self1022 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
        }
    }
}

static  bool   between1617 (    struct Pos_20  c1337 ,    struct Pos_20  l1339 ,    struct Pos_20  r1341 ) {
    struct Pos_20  from1342 = ( (  min315 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Pos_20  to1343 = ( (  max318 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp316 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp316 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1616 (    struct Pane_137 *  pane3869 ,    struct Pos_20  pos3871 ) {
    return ( {  struct Maybe_28  dref3872 = ( ( * (  pane3869 ) ) .f_sel ) ; dref3872.tag == Maybe_28_Just_t ? ( (  between1617 ) ( (  pos3871 ) ,  ( ( * (  pane3869 ) ) .f_cursor ) ,  ( dref3872 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( false ) ; } );
}

static  enum Unit_7   render1561 (    struct Screen_661 *  screen3901 ,    struct Pane_137 *  pane3903 ,    struct ScreenDims_1558  sd3905 ) {
    bool  display_dash_line_dash_numbers3906 = ( true );
    ( (  update_dash_screen_dash_offset1562 ) ( (  pane3903 ) ,  (  sd3905 ) ) );
    struct ScreenCursorOffset_139  sc_dash_off3907 = ( ( * (  pane3903 ) ) .f_sc_dash_off );
    int32_t  max_dash_line_dash_num_dash_chars3908 = ( (  size_dash_i32196 ) ( ( (  count1565 ) ( ( (  chars1582 ) ( ( (  num_dash_lines991 ) ( ( ( * (  pane3903 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin3909 = (  from_dash_integral48 ( 2 ) );
    int32_t  num_dash_back_dash_margin3910 = (  from_dash_integral48 ( 2 ) );
    int32_t  total_dash_margin3911 = ( (  display_dash_line_dash_numbers3906 ) ? (  op_dash_add274 ( (  op_dash_add274 ( (  max_dash_line_dash_num_dash_chars3908 ) , (  num_dash_front_dash_margin3909 ) ) ) , (  num_dash_back_dash_margin3910 ) ) ) : (  from_dash_integral48 ( 0 ) ) );
    struct RangeIter_689  temp1585 =  into_dash_iter691 ( ( (  to694 ) ( (  op_dash_add274 ( ( (  sc_dash_off3907 ) .f_screen_dash_top ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  ( (  min469 ) ( ( (  num_dash_lines991 ) ( ( ( * (  pane3903 ) ) .f_buf ) ) ) ,  (  op_dash_add274 ( ( (  sc_dash_off3907 ) .f_screen_dash_top ) , ( (  screen_dash_height1564 ) ( (  sd3905 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_272  __cond1586 =  next692 (&temp1585);
        if (  __cond1586 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num3913 =  __cond1586 .stuff .Maybe_272_Just_s .field0;
        int32_t  ybi3914 = (  op_dash_sub812 ( (  line_dash_num3913 ) , (  from_dash_integral48 ( 1 ) ) ) );
        int32_t  xbi3915 = ( (  vi_dash_bi993 ) ( ( ( * (  pane3903 ) ) .f_buf ) ,  (  ybi3914 ) ,  ( (  sc_dash_off3907 ) .f_screen_dash_left ) ) );
        struct StrView_21  line_dash_content3916 = ( (  line951 ) ( ( ( * (  pane3903 ) ) .f_buf ) ,  (  ybi3914 ) ) );
        int32_t  ys3917 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  op_dash_add274 ( ( (  sd3905 ) .f_from_dash_sy ) , (  line_dash_num3913 ) ) ) , ( (  sc_dash_off3907 ) .f_screen_dash_top ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers3906 ) ) {
            ( (  draw_dash_str_dash_right1587 ) ( (  screen3901 ) ,  (  line_dash_num3913 ) ,  (  op_dash_add274 ( (  op_dash_sub812 ( (  op_dash_sub812 ( ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3901 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd3905 ) .f_from_dash_sx ) ) ) , (  total_dash_margin3911 ) ) ) , (  num_dash_back_dash_margin3910 ) ) ) ,  (  ys3917 ) ) );
        }
        int32_t  vx3918 = (  op_dash_sub812 ( ( (  pos_dash_vi949 ) ( ( ( * (  pane3903 ) ) .f_buf ) ,  ( (  mk298 ) ( (  ybi3914 ) ,  (  xbi3915 ) ) ) ) ) , ( (  sc_dash_off3907 ) .f_screen_dash_left ) ) );
        ( (  assert1603 ) ( (  cmp317 ( (  vx3918 ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1604_StrConcat ) ( ( (  from_dash_string220 ) ( ( "vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx3918 ) ) ) ) );
        int32_t  left_dash_offset3919 = (  op_dash_add274 ( ( (  sd3905 ) .f_from_dash_sx ) , (  total_dash_margin3911 ) ) );
        struct AppendIter_1611  temp1610 =  into_dash_iter1612 ( ( (  append1613 ) ( ( (  chars608 ) ( ( (  byte_dash_substr_dash_from1371 ) ( (  line_dash_content3916 ) ,  ( (  i32_dash_size262 ) ( (  xbi3915 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike221 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_606  __cond1614 =  next1615 (&temp1610);
            if (  __cond1614 .tag == 0 ) {
                break;
            }
            struct Char_57  c3921 =  __cond1614 .stuff .Maybe_606_Just_s .field0;
            if ( (  cmp317 ( (  vx3918 ) , ( (  sd3905 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_20  curpos3922 = ( (  mk298 ) ( (  ybi3914 ) ,  (  xbi3915 ) ) );
            bool  is_dash_cursor3923 = (  eq319 ( (  curpos3922 ) , ( ( * (  pane3903 ) ) .f_cursor ) ) );
            bool  in_dash_selection3924 = ( (  is_dash_in_dash_selection1616 ) ( (  pane3903 ) ,  ( (  mk298 ) ( (  ybi3914 ) ,  (  xbi3915 ) ) ) ) );
            if ( (  is_dash_cursor3923 ) ) {
                (*  screen3901 ) .f_default_dash_fg = ( ( Color_664_Color8 ) ( ( Color8_665_Black8 ) ) );
                (*  screen3901 ) .f_default_dash_bg = ( ( Color_664_Color8 ) ( ( Color8_665_White8 ) ) );
            } else {
                if ( (  in_dash_selection3924 ) ) {
                    (*  screen3901 ) .f_default_dash_bg = ( ( Color_664_Color8 ) ( ( Color8_665_Cyan8 ) ) );
                }
            }
            struct Maybe_140  dref3925 = ( (  char_dash_replacement956 ) ( (  c3921 ) ) );
            if ( dref3925.tag == Maybe_140_None_t ) {
                if ( ( ! ( (  cmp317 ( (  vx3918 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  op_dash_sub812 ( (  op_dash_add274 ( (  vx3918 ) , ( (  char_dash_screen_dash_width954 ) ( (  c3921 ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) , ( (  sd3905 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1600 ) ( (  screen3901 ) ,  (  c3921 ) ,  (  op_dash_add274 ( (  left_dash_offset3919 ) , (  vx3918 ) ) ) ,  (  ys3917 ) ) );
                }
                vx3918 = (  op_dash_add274 ( (  vx3918 ) , ( (  char_dash_screen_dash_width954 ) ( (  c3921 ) ) ) ) );
            }
            else {
                if ( dref3925.tag == Maybe_140_Just_t ) {
                    struct StrViewIter_603  temp1618 =  into_dash_iter605 ( ( (  chars608 ) ( ( dref3925 .stuff .Maybe_140_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_606  __cond1619 =  next607 (&temp1618);
                        if (  __cond1619 .tag == 0 ) {
                            break;
                        }
                        struct Char_57  c3928 =  __cond1619 .stuff .Maybe_606_Just_s .field0;
                        if ( (  cmp317 ( (  vx3918 ) , (  from_dash_integral48 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1600 ) ( (  screen3901 ) ,  (  c3928 ) ,  (  op_dash_add274 ( (  left_dash_offset3919 ) , (  vx3918 ) ) ) ,  (  ys3917 ) ) );
                        }
                        vx3918 = (  op_dash_add274 ( (  vx3918 ) , ( (  char_dash_screen_dash_width954 ) ( (  c3928 ) ) ) ) );
                    }
                }
            }
            (*  screen3901 ) .f_default_dash_fg = ( (struct Color_664) { .tag = Color_664_ColorDefault_t } );
            (*  screen3901 ) .f_default_dash_bg = ( (struct Color_664) { .tag = Color_664_ColorDefault_t } );
            xbi3915 = (  op_dash_add274 ( (  xbi3915 ) , ( (  size_dash_i32196 ) ( ( (  c3921 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    return ( Unit_7_Unit );
}

struct env1621 {
    struct Screen_661 *  screen4249;
    ;
    int32_t *  curline4253;
    ;
    ;
    ;
    ;
    ;
};

struct env1622 {
    struct Screen_661 *  screen4249;
    ;
    int32_t *  curline4253;
    ;
    ;
    ;
    ;
    ;
};

struct env1623 {
    struct Screen_661 *  screen4249;
    ;
    int32_t *  curline4253;
    ;
    ;
    ;
    ;
    ;
};

struct env1624 {
    struct Screen_661 *  screen4249;
    ;
    int32_t *  curline4253;
    ;
    ;
    ;
    ;
    ;
};

struct env1625 {
    struct Screen_661 *  screen4249;
    ;
    int32_t *  curline4253;
    ;
    ;
    ;
    ;
    ;
};

struct env1626 {
    struct Screen_661 *  screen4249;
    ;
    int32_t *  curline4253;
    ;
    ;
    ;
    ;
    ;
};

struct env1627 {
    struct Screen_661 *  screen4249;
    ;
    int32_t *  curline4253;
    ;
    ;
    ;
    ;
    ;
};

struct env1628 {
    struct Screen_661 *  screen4249;
    ;
    int32_t *  curline4253;
    ;
    ;
    ;
    ;
    ;
};

struct env1629 {
    struct Screen_661 *  screen4249;
    ;
    int32_t *  curline4253;
    ;
    ;
    ;
    ;
    ;
};

struct StrConcat_1632 {
    struct StrView_21  field0;
    enum Mode_138  field1;
};

static struct StrConcat_1632 StrConcat_1632_StrConcat (  struct StrView_21  field0 ,  enum Mode_138  field1 ) {
    return ( struct StrConcat_1632 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1631 {
    enum Unit_7  (*fun) (  struct env1621*  ,    struct StrConcat_1632  );
    struct env1621 env;
};

struct StrConcatIter_1637 {
    struct StrViewIter_603  f_left;
    struct StrViewIter_603  f_right;
};

struct Map_1636 {
    struct StrConcatIter_1637  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1636 Map_1636_Map (  struct StrConcatIter_1637  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1636 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1636   into_dash_iter1639 (    struct Map_1636  self796 ) {
    return (  self796 );
}

static  struct Maybe_606   next1641 (    struct StrConcatIter_1637 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_272   next1640 (    struct Map_1636 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1641 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_272_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1638 (    struct Map_1636  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1636  it1099 = ( (  into_dash_iter1639 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next1640 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1642 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1642);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1643;
    return (  temp1643 );
}

static  int32_t   lam1644 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add274 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1635 (    struct Map_1636  it1110 ) {
    return ( (  reduce1638 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1644 ) ) );
}

static  struct StrConcatIter_1637   into_dash_iter1646 (    struct StrConcatIter_1637  self1491 ) {
    return (  self1491 );
}

static  struct Map_1636   map1645 (    struct StrConcatIter_1637  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1637  it808 = ( (  into_dash_iter1646 ) ( (  iterable805 ) ) );
    return ( ( Map_1636_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrView_21   todo1650 (  ) {
    ( (  print1049 ) ( ( (  from_dash_string220 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined516 ) ( ) );
}

static  struct StrViewIter_603   chars1649 (    enum Mode_138  self3824 ) {
    return ( (  chars608 ) ( ( {  enum Mode_138  dref3825 = (  self3824 ) ;  dref3825 == Mode_138_Normal ? ( (  from_dash_string220 ) ( ( "Normal" ) ,  ( 6 ) ) ) :  dref3825 == Mode_138_Insert ? ( (  from_dash_string220 ) ( ( "Insert" ) ,  ( 6 ) ) ) :  dref3825 == Mode_138_Select ? ( (  from_dash_string220 ) ( ( "Select" ) ,  ( 6 ) ) ) : ( (  todo1650 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1637   into_dash_iter1648 (    struct StrConcat_1632  dref1498 ) {
    return ( (struct StrConcatIter_1637) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1649 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1637   chars1647 (    struct StrConcat_1632  self1509 ) {
    return ( (  into_dash_iter1648 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1651 (    struct Screen_661 *  screen3527 ,    struct StrConcat_1632  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1378 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1637  temp1652 =  into_dash_iter1646 ( ( (  chars1647 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1653 =  next1641 (&temp1652);
        if (  __cond1653 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1653 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1600 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1634 (    struct Screen_661 *  screen3543 ,    struct StrConcat_1632  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1635 ) ( ( (  map1645 ) ( ( (  chars1647 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth963 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1651 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1633 (   struct env1621* env ,    struct StrConcat_1632  s4256 ) {
    ( (  draw_dash_str_dash_right1634 ) ( ( env->screen4249 ) ,  (  s4256 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4253 ) ) ) );
    (* env->curline4253 ) = (  op_dash_add274 ( ( * ( env->curline4253 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1658 {
    struct StrView_21  field0;
    struct Pos_20  field1;
};

static struct StrConcat_1658 StrConcat_1658_StrConcat (  struct StrView_21  field0 ,  struct Pos_20  field1 ) {
    return ( struct StrConcat_1658 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1657 {
    struct StrConcat_1658  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1657 StrConcat_1657_StrConcat (  struct StrConcat_1658  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1657 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1656 {
    struct StrConcat_1657  field0;
    enum CharType_1034  field1;
};

static struct StrConcat_1656 StrConcat_1656_StrConcat (  struct StrConcat_1657  field0 ,  enum CharType_1034  field1 ) {
    return ( struct StrConcat_1656 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1655 {
    enum Unit_7  (*fun) (  struct env1622*  ,    struct StrConcat_1656  );
    struct env1622 env;
};

struct StrConcatIter_1669 {
    struct AppendIter_873  f_left;
    struct IntStrIter_1566  f_right;
};

struct StrConcatIter_1668 {
    struct StrConcatIter_1669  f_left;
    struct StrViewIter_603  f_right;
};

struct StrConcatIter_1667 {
    struct StrConcatIter_1668  f_left;
    struct IntStrIter_1566  f_right;
};

struct StrConcatIter_1666 {
    struct StrConcatIter_1667  f_left;
    struct AppendIter_873  f_right;
};

struct StrConcatIter_1665 {
    struct StrViewIter_603  f_left;
    struct StrConcatIter_1666  f_right;
};

struct StrConcatIter_1664 {
    struct StrConcatIter_1665  f_left;
    struct StrViewIter_603  f_right;
};

struct StrConcatIter_1663 {
    struct StrConcatIter_1664  f_left;
    struct StrViewIter_603  f_right;
};

struct Map_1662 {
    struct StrConcatIter_1663  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1662 Map_1662_Map (  struct StrConcatIter_1663  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1662 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1662   into_dash_iter1671 (    struct Map_1662  self796 ) {
    return (  self796 );
}

static  struct Maybe_606   next1679 (    struct StrConcatIter_1669 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1569 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1678 (    struct StrConcatIter_1668 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1679 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1677 (    struct StrConcatIter_1667 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1678 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1569 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1676 (    struct StrConcatIter_1666 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1677 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1675 (    struct StrConcatIter_1665 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1676 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1674 (    struct StrConcatIter_1664 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1675 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1673 (    struct StrConcatIter_1663 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1674 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_272   next1672 (    struct Map_1662 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1673 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_272_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1670 (    struct Map_1662  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1662  it1099 = ( (  into_dash_iter1671 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next1672 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1680 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1680);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1681;
    return (  temp1681 );
}

static  int32_t   lam1682 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add274 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1661 (    struct Map_1662  it1110 ) {
    return ( (  reduce1670 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1682 ) ) );
}

static  struct StrConcatIter_1663   into_dash_iter1684 (    struct StrConcatIter_1663  self1491 ) {
    return (  self1491 );
}

static  struct Map_1662   map1683 (    struct StrConcatIter_1663  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1663  it808 = ( (  into_dash_iter1684 ) ( (  iterable805 ) ) );
    return ( ( Map_1662_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1696 {
    struct Char_57  field0;
    int32_t  field1;
};

static struct StrConcat_1696 StrConcat_1696_StrConcat (  struct Char_57  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1696 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1695 {
    struct StrConcat_1696  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1695 StrConcat_1695_StrConcat (  struct StrConcat_1696  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1695 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1694 {
    struct StrConcat_1695  field0;
    int32_t  field1;
};

static struct StrConcat_1694 StrConcat_1694_StrConcat (  struct StrConcat_1695  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1694 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1693 {
    struct StrConcat_1694  field0;
    struct Char_57  field1;
};

static struct StrConcat_1693 StrConcat_1693_StrConcat (  struct StrConcat_1694  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1693 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_1669   into_dash_iter1703 (    struct StrConcat_1696  dref1498 ) {
    return ( (struct StrConcatIter_1669) { .f_left = ( (  chars913 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1582 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1669   chars1702 (    struct StrConcat_1696  self1509 ) {
    return ( (  into_dash_iter1703 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1668   into_dash_iter1701 (    struct StrConcat_1695  dref1498 ) {
    return ( (struct StrConcatIter_1668) { .f_left = ( (  chars1702 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars608 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1668   chars1700 (    struct StrConcat_1695  self1509 ) {
    return ( (  into_dash_iter1701 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1667   into_dash_iter1699 (    struct StrConcat_1694  dref1498 ) {
    return ( (struct StrConcatIter_1667) { .f_left = ( (  chars1700 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1582 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1667   chars1698 (    struct StrConcat_1694  self1509 ) {
    return ( (  into_dash_iter1699 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1666   into_dash_iter1697 (    struct StrConcat_1693  dref1498 ) {
    return ( (struct StrConcatIter_1666) { .f_left = ( (  chars1698 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1666   chars1692 (    struct StrConcat_1693  self1509 ) {
    return ( (  into_dash_iter1697 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1666   chars1691 (    struct Pos_20  self3584 ) {
    return ( (  chars1692 ) ( ( ( StrConcat_1693_StrConcat ) ( ( ( StrConcat_1694_StrConcat ) ( ( ( StrConcat_1695_StrConcat ) ( ( ( StrConcat_1696_StrConcat ) ( ( (  from_dash_charlike221 ) ( ( "(" ) ,  ( 1 ) ) ) ,  ( (  self3584 ) .f_line ) ) ) ,  ( (  from_dash_string220 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  self3584 ) .f_bi ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrConcatIter_1665   into_dash_iter1690 (    struct StrConcat_1658  dref1498 ) {
    return ( (struct StrConcatIter_1665) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1691 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1665   chars1689 (    struct StrConcat_1658  self1509 ) {
    return ( (  into_dash_iter1690 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1664   into_dash_iter1688 (    struct StrConcat_1657  dref1498 ) {
    return ( (struct StrConcatIter_1664) { .f_left = ( (  chars1689 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars608 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1664   chars1687 (    struct StrConcat_1657  self1509 ) {
    return ( (  into_dash_iter1688 ) ( (  self1509 ) ) );
}

static  struct StrViewIter_603   chars1704 (    enum CharType_1034  self3813 ) {
    return ( (  chars608 ) ( ( {  enum CharType_1034  dref3814 = (  self3813 ) ;  dref3814 == CharType_1034_CharPunctuation ? ( (  from_dash_string220 ) ( ( "Punct" ) ,  ( 5 ) ) ) :  dref3814 == CharType_1034_CharWord ? ( (  from_dash_string220 ) ( ( "Word" ) ,  ( 4 ) ) ) :  dref3814 == CharType_1034_CharSpace ? ( (  from_dash_string220 ) ( ( "Space" ) ,  ( 5 ) ) ) : ( (  todo1650 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1663   into_dash_iter1686 (    struct StrConcat_1656  dref1498 ) {
    return ( (struct StrConcatIter_1663) { .f_left = ( (  chars1687 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1704 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1663   chars1685 (    struct StrConcat_1656  self1509 ) {
    return ( (  into_dash_iter1686 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1705 (    struct Screen_661 *  screen3527 ,    struct StrConcat_1656  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1378 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1663  temp1706 =  into_dash_iter1684 ( ( (  chars1685 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1707 =  next1673 (&temp1706);
        if (  __cond1707 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1707 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1600 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1660 (    struct Screen_661 *  screen3543 ,    struct StrConcat_1656  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1661 ) ( ( (  map1683 ) ( ( (  chars1685 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth963 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1705 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1659 (   struct env1622* env ,    struct StrConcat_1656  s4256 ) {
    ( (  draw_dash_str_dash_right1660 ) ( ( env->screen4249 ) ,  (  s4256 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4253 ) ) ) );
    (* env->curline4253 ) = (  op_dash_add274 ( ( * ( env->curline4253 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1710 {
    struct StrView_21  field0;
    struct Maybe_28  field1;
};

static struct StrConcat_1710 StrConcat_1710_StrConcat (  struct StrView_21  field0 ,  struct Maybe_28  field1 ) {
    return ( struct StrConcat_1710 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1709 {
    enum Unit_7  (*fun) (  struct env1623*  ,    struct StrConcat_1710  );
    struct env1623 env;
};

struct StrConcatIter_1717 {
    struct StrConcatIter_1665  f_left;
    struct AppendIter_873  f_right;
};

struct StrCaseIter_1716 {
    enum {
        StrCaseIter_1716_StrCaseIter1_t,
        StrCaseIter_1716_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_603  field0;
        } StrCaseIter_1716_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1717  field0;
        } StrCaseIter_1716_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1716 StrCaseIter_1716_StrCaseIter1 (  struct StrViewIter_603  field0 ) {
    return ( struct StrCaseIter_1716 ) { .tag = StrCaseIter_1716_StrCaseIter1_t, .stuff = { .StrCaseIter_1716_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1716 StrCaseIter_1716_StrCaseIter2 (  struct StrConcatIter_1717  field0 ) {
    return ( struct StrCaseIter_1716 ) { .tag = StrCaseIter_1716_StrCaseIter2_t, .stuff = { .StrCaseIter_1716_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1715 {
    struct StrViewIter_603  f_left;
    struct StrCaseIter_1716  f_right;
};

struct Map_1714 {
    struct StrConcatIter_1715  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1714 Map_1714_Map (  struct StrConcatIter_1715  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1714 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1714   into_dash_iter1719 (    struct Map_1714  self796 ) {
    return (  self796 );
}

static  struct Maybe_606   next1723 (    struct StrConcatIter_1717 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1675 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1722 (    struct StrCaseIter_1716 *  self1516 ) {
    struct StrCaseIter_1716 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1716_StrCaseIter1_t ) {
        return ( (  next607 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1716_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1716_StrCaseIter2_t ) {
            return ( (  next1723 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1716_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_606   next1721 (    struct StrConcatIter_1715 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1722 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_272   next1720 (    struct Map_1714 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1721 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_272_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1718 (    struct Map_1714  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1714  it1099 = ( (  into_dash_iter1719 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next1720 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1724 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1724);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1725;
    return (  temp1725 );
}

static  int32_t   lam1726 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add274 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1713 (    struct Map_1714  it1110 ) {
    return ( (  reduce1718 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1726 ) ) );
}

static  struct StrConcatIter_1715   into_dash_iter1728 (    struct StrConcatIter_1715  self1491 ) {
    return (  self1491 );
}

static  struct Map_1714   map1727 (    struct StrConcatIter_1715  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1715  it808 = ( (  into_dash_iter1728 ) ( (  iterable805 ) ) );
    return ( ( Map_1714_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1733 {
    struct StrConcat_1658  field0;
    struct Char_57  field1;
};

static struct StrConcat_1733 StrConcat_1733_StrConcat (  struct StrConcat_1658  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1733 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1732 {
    enum {
        StrCase_1732_StrCase1_t,
        StrCase_1732_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1732_StrCase1_s;
        struct {
            struct StrConcat_1733  field0;
        } StrCase_1732_StrCase2_s;
    } stuff;
};

static struct StrCase_1732 StrCase_1732_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1732 ) { .tag = StrCase_1732_StrCase1_t, .stuff = { .StrCase_1732_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1732 StrCase_1732_StrCase2 (  struct StrConcat_1733  field0 ) {
    return ( struct StrCase_1732 ) { .tag = StrCase_1732_StrCase2_t, .stuff = { .StrCase_1732_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1717   into_dash_iter1738 (    struct StrConcat_1733  dref1498 ) {
    return ( (struct StrConcatIter_1717) { .f_left = ( (  chars1689 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1717   chars1737 (    struct StrConcat_1733  self1509 ) {
    return ( (  into_dash_iter1738 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1716   into_dash_iter1736 (    struct StrCase_1732  self1522 ) {
    struct StrCase_1732  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1732_StrCase1_t ) {
        return ( ( StrCaseIter_1716_StrCaseIter1 ) ( ( (  chars608 ) ( ( dref1523 .stuff .StrCase_1732_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1732_StrCase2_t ) {
            return ( ( StrCaseIter_1716_StrCaseIter2 ) ( ( (  chars1737 ) ( ( dref1523 .stuff .StrCase_1732_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1716   chars1735 (    struct StrCase_1732  self1534 ) {
    return ( (  into_dash_iter1736 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1716   chars1731 (    struct Maybe_28  self1548 ) {
    struct StrCase_1732  temp1734;
    struct StrCase_1732  c1549 = (  temp1734 );
    struct Maybe_28  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_28_None_t ) {
        c1549 = ( ( StrCase_1732_StrCase1 ) ( ( (  from_dash_string220 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_28_Just_t ) {
            c1549 = ( ( StrCase_1732_StrCase2 ) ( ( ( StrConcat_1733_StrConcat ) ( ( ( StrConcat_1658_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_28_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1735 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1715   into_dash_iter1730 (    struct StrConcat_1710  dref1498 ) {
    return ( (struct StrConcatIter_1715) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1731 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1715   chars1729 (    struct StrConcat_1710  self1509 ) {
    return ( (  into_dash_iter1730 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1739 (    struct Screen_661 *  screen3527 ,    struct StrConcat_1710  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1378 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1715  temp1740 =  into_dash_iter1728 ( ( (  chars1729 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1741 =  next1721 (&temp1740);
        if (  __cond1741 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1741 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1600 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1712 (    struct Screen_661 *  screen3543 ,    struct StrConcat_1710  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1713 ) ( ( (  map1727 ) ( ( (  chars1729 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth963 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1739 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1711 (   struct env1623* env ,    struct StrConcat_1710  s4256 ) {
    ( (  draw_dash_str_dash_right1712 ) ( ( env->screen4249 ) ,  (  s4256 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4253 ) ) ) );
    (* env->curline4253 ) = (  op_dash_add274 ( ( * ( env->curline4253 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct Take_1744 {
    struct StrViewIter_603  field0;
    size_t  field1;
};

static struct Take_1744 Take_1744_Take (  struct StrViewIter_603  field0 ,  size_t  field1 ) {
    return ( struct Take_1744 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1743 {
    struct Take_1744  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1743 StrConcat_1743_StrConcat (  struct Take_1744  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1743 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_1742 {
    enum {
        Maybe_1742_None_t,
        Maybe_1742_Just_t,
    } tag;
    union {
        struct {
            struct StrConcat_1743  field0;
        } Maybe_1742_Just_s;
    } stuff;
};

static struct Maybe_1742 Maybe_1742_Just (  struct StrConcat_1743  field0 ) {
    return ( struct Maybe_1742 ) { .tag = Maybe_1742_Just_t, .stuff = { .Maybe_1742_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1742   fmap_dash_maybe1745 (    struct Maybe_140  x1275 ,    struct StrConcat_1743 (*  fun1277 )(    struct StrView_21  ) ) {
    struct Maybe_140  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_140_None_t ) {
        return ( (struct Maybe_1742) { .tag = Maybe_1742_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_140_Just_t ) {
            return ( ( Maybe_1742_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_140_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Take_1744   take1747 (    struct StrView_21  it867 ,    size_t  i869 ) {
    return ( ( Take_1744_Take ) ( ( (  into_dash_iter609 ) ( (  it867 ) ) ) ,  (  i869 ) ) );
}

struct Drop_1749 {
    struct StrViewIter_603  field0;
    size_t  field1;
};

static struct Drop_1749 Drop_1749_Drop (  struct StrViewIter_603  field0 ,  size_t  field1 ) {
    return ( struct Drop_1749 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Maybe_606   next1751 (    struct Drop_1749 *  dref847 ) {
    while ( (  cmp184 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next607 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub304 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next607 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Drop_1749   into_dash_iter1753 (    struct Drop_1749  self845 ) {
    return (  self845 );
}

static  struct Maybe_606   head1750 (    struct Drop_1749  it1142 ) {
    struct Drop_1749  temp1752 = ( (  into_dash_iter1753 ) ( (  it1142 ) ) );
    return ( (  next1751 ) ( ( &temp1752 ) ) );
}

static  bool   null1748 (    struct Drop_1749  it1151 ) {
    struct Maybe_606  dref1152 = ( (  head1750 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_606_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Drop_1749   drop1754 (    struct StrView_21  iterable852 ,    size_t  i854 ) {
    struct StrViewIter_603  it855 = ( (  into_dash_iter609 ) ( (  iterable852 ) ) );
    return ( ( Drop_1749_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct StrConcat_1743   lam1746 (    struct StrView_21  s4259 ) {
    return ( ( StrConcat_1743_StrConcat ) ( ( (  take1747 ) ( (  s4259 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ,  ( ( (  null1748 ) ( ( (  drop1754 ) ( (  s4259 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ) ) ? ( (  from_dash_string220 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_string220 ) ( ( "..." ) ,  ( 3 ) ) ) ) ) );
}

struct StrConcat_1757 {
    struct StrView_21  field0;
    struct Maybe_1742  field1;
};

static struct StrConcat_1757 StrConcat_1757_StrConcat (  struct StrView_21  field0 ,  struct Maybe_1742  field1 ) {
    return ( struct StrConcat_1757 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1756 {
    enum Unit_7  (*fun) (  struct env1624*  ,    struct StrConcat_1757  );
    struct env1624 env;
};

struct StrConcatIter_1766 {
    struct Take_1744  f_left;
    struct StrViewIter_603  f_right;
};

struct StrConcatIter_1765 {
    struct StrViewIter_603  f_left;
    struct StrConcatIter_1766  f_right;
};

struct StrConcatIter_1764 {
    struct StrConcatIter_1765  f_left;
    struct AppendIter_873  f_right;
};

struct StrCaseIter_1763 {
    enum {
        StrCaseIter_1763_StrCaseIter1_t,
        StrCaseIter_1763_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_603  field0;
        } StrCaseIter_1763_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1764  field0;
        } StrCaseIter_1763_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1763 StrCaseIter_1763_StrCaseIter1 (  struct StrViewIter_603  field0 ) {
    return ( struct StrCaseIter_1763 ) { .tag = StrCaseIter_1763_StrCaseIter1_t, .stuff = { .StrCaseIter_1763_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1763 StrCaseIter_1763_StrCaseIter2 (  struct StrConcatIter_1764  field0 ) {
    return ( struct StrCaseIter_1763 ) { .tag = StrCaseIter_1763_StrCaseIter2_t, .stuff = { .StrCaseIter_1763_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1762 {
    struct StrViewIter_603  f_left;
    struct StrCaseIter_1763  f_right;
};

struct Map_1761 {
    struct StrConcatIter_1762  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1761 Map_1761_Map (  struct StrConcatIter_1762  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1761 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1761   into_dash_iter1768 (    struct Map_1761  self796 ) {
    return (  self796 );
}

static  struct Maybe_606   next1775 (    struct Take_1744 *  dref861 ) {
    if ( (  cmp184 ( ( (* dref861 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_606  x864 = ( (  next607 ) ( ( & ( (* dref861 ) .field0 ) ) ) );
        (* dref861 ) .field1 = (  op_dash_sub304 ( ( (* dref861 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
        return (  x864 );
    } else {
        return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
    }
}

static  struct Maybe_606   next1774 (    struct StrConcatIter_1766 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1775 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1773 (    struct StrConcatIter_1765 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1774 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1772 (    struct StrConcatIter_1764 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1773 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1771 (    struct StrCaseIter_1763 *  self1516 ) {
    struct StrCaseIter_1763 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1763_StrCaseIter1_t ) {
        return ( (  next607 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1763_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1763_StrCaseIter2_t ) {
            return ( (  next1772 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1763_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_606   next1770 (    struct StrConcatIter_1762 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1771 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_272   next1769 (    struct Map_1761 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1770 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_272_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1767 (    struct Map_1761  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1761  it1099 = ( (  into_dash_iter1768 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next1769 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1776 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1776);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1777;
    return (  temp1777 );
}

static  int32_t   lam1778 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add274 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1760 (    struct Map_1761  it1110 ) {
    return ( (  reduce1767 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1778 ) ) );
}

static  struct StrConcatIter_1762   into_dash_iter1780 (    struct StrConcatIter_1762  self1491 ) {
    return (  self1491 );
}

static  struct Map_1761   map1779 (    struct StrConcatIter_1762  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1762  it808 = ( (  into_dash_iter1780 ) ( (  iterable805 ) ) );
    return ( ( Map_1761_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1786 {
    struct StrView_21  field0;
    struct StrConcat_1743  field1;
};

static struct StrConcat_1786 StrConcat_1786_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_1743  field1 ) {
    return ( struct StrConcat_1786 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1785 {
    struct StrConcat_1786  field0;
    struct Char_57  field1;
};

static struct StrConcat_1785 StrConcat_1785_StrConcat (  struct StrConcat_1786  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1785 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1784 {
    enum {
        StrCase_1784_StrCase1_t,
        StrCase_1784_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1784_StrCase1_s;
        struct {
            struct StrConcat_1785  field0;
        } StrCase_1784_StrCase2_s;
    } stuff;
};

static struct StrCase_1784 StrCase_1784_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1784 ) { .tag = StrCase_1784_StrCase1_t, .stuff = { .StrCase_1784_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1784 StrCase_1784_StrCase2 (  struct StrConcat_1785  field0 ) {
    return ( struct StrCase_1784 ) { .tag = StrCase_1784_StrCase2_t, .stuff = { .StrCase_1784_StrCase2_s = { .field0 = field0 } } };
};

static  struct Take_1744   chars1796 (    struct Take_1744  self1639 ) {
    return (  self1639 );
}

static  struct StrConcatIter_1766   into_dash_iter1795 (    struct StrConcat_1743  dref1498 ) {
    return ( (struct StrConcatIter_1766) { .f_left = ( (  chars1796 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars608 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1766   chars1794 (    struct StrConcat_1743  self1509 ) {
    return ( (  into_dash_iter1795 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1765   into_dash_iter1793 (    struct StrConcat_1786  dref1498 ) {
    return ( (struct StrConcatIter_1765) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1794 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1765   chars1792 (    struct StrConcat_1786  self1509 ) {
    return ( (  into_dash_iter1793 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1764   into_dash_iter1791 (    struct StrConcat_1785  dref1498 ) {
    return ( (struct StrConcatIter_1764) { .f_left = ( (  chars1792 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1764   chars1790 (    struct StrConcat_1785  self1509 ) {
    return ( (  into_dash_iter1791 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1763   into_dash_iter1789 (    struct StrCase_1784  self1522 ) {
    struct StrCase_1784  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1784_StrCase1_t ) {
        return ( ( StrCaseIter_1763_StrCaseIter1 ) ( ( (  chars608 ) ( ( dref1523 .stuff .StrCase_1784_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1784_StrCase2_t ) {
            return ( ( StrCaseIter_1763_StrCaseIter2 ) ( ( (  chars1790 ) ( ( dref1523 .stuff .StrCase_1784_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1763   chars1788 (    struct StrCase_1784  self1534 ) {
    return ( (  into_dash_iter1789 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1763   chars1783 (    struct Maybe_1742  self1548 ) {
    struct StrCase_1784  temp1787;
    struct StrCase_1784  c1549 = (  temp1787 );
    struct Maybe_1742  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_1742_None_t ) {
        c1549 = ( ( StrCase_1784_StrCase1 ) ( ( (  from_dash_string220 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_1742_Just_t ) {
            c1549 = ( ( StrCase_1784_StrCase2 ) ( ( ( StrConcat_1785_StrConcat ) ( ( ( StrConcat_1786_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_1742_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1788 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1762   into_dash_iter1782 (    struct StrConcat_1757  dref1498 ) {
    return ( (struct StrConcatIter_1762) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1783 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1762   chars1781 (    struct StrConcat_1757  self1509 ) {
    return ( (  into_dash_iter1782 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1797 (    struct Screen_661 *  screen3527 ,    struct StrConcat_1757  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1378 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1762  temp1798 =  into_dash_iter1780 ( ( (  chars1781 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1799 =  next1770 (&temp1798);
        if (  __cond1799 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1799 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1600 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1759 (    struct Screen_661 *  screen3543 ,    struct StrConcat_1757  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1760 ) ( ( (  map1779 ) ( ( (  chars1781 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth963 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1797 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1758 (   struct env1624* env ,    struct StrConcat_1757  s4256 ) {
    ( (  draw_dash_str_dash_right1759 ) ( ( env->screen4249 ) ,  (  s4256 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4253 ) ) ) );
    (* env->curline4253 ) = (  op_dash_add274 ( ( * ( env->curline4253 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Maybe_1742   fmap_dash_maybe1800 (    struct Maybe_140  x1275 ,    struct StrConcat_1743 (*  fun1277 )(    struct StrView_21  ) ) {
    struct Maybe_140  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_140_None_t ) {
        return ( (struct Maybe_1742) { .tag = Maybe_1742_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_140_Just_t ) {
            return ( ( Maybe_1742_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_140_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrConcat_1743   lam1801 (    struct StrView_21  s4262 ) {
    return ( ( StrConcat_1743_StrConcat ) ( ( (  take1747 ) ( (  s4262 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ,  ( ( (  null1748 ) ( ( (  drop1754 ) ( (  s4262 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ) ) ? ( (  from_dash_string220 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_string220 ) ( ( "..." ) ,  ( 3 ) ) ) ) ) );
}

struct envunion1803 {
    enum Unit_7  (*fun) (  struct env1624*  ,    struct StrConcat_1757  );
    struct env1624 env;
};

struct StrConcat_1806 {
    struct StrView_21  field0;
    struct EditorMode_141  field1;
};

static struct StrConcat_1806 StrConcat_1806_StrConcat (  struct StrView_21  field0 ,  struct EditorMode_141  field1 ) {
    return ( struct StrConcat_1806 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1805 {
    enum Unit_7  (*fun) (  struct env1625*  ,    struct StrConcat_1806  );
    struct env1625 env;
};

struct StrConcatIter_1814 {
    struct StrConcatIter_1717  f_left;
    struct StrViewIter_603  f_right;
};

struct StrConcatIter_1813 {
    struct StrConcatIter_1814  f_left;
    struct AppendIter_873  f_right;
};

struct StrCaseIter_1812 {
    enum {
        StrCaseIter_1812_StrCaseIter1_t,
        StrCaseIter_1812_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_603  field0;
        } StrCaseIter_1812_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1813  field0;
        } StrCaseIter_1812_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1812 StrCaseIter_1812_StrCaseIter1 (  struct StrViewIter_603  field0 ) {
    return ( struct StrCaseIter_1812 ) { .tag = StrCaseIter_1812_StrCaseIter1_t, .stuff = { .StrCaseIter_1812_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1812 StrCaseIter_1812_StrCaseIter2 (  struct StrConcatIter_1813  field0 ) {
    return ( struct StrCaseIter_1812 ) { .tag = StrCaseIter_1812_StrCaseIter2_t, .stuff = { .StrCaseIter_1812_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1811 {
    struct StrViewIter_603  f_left;
    struct StrCaseIter_1812  f_right;
};

struct Map_1810 {
    struct StrConcatIter_1811  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1810 Map_1810_Map (  struct StrConcatIter_1811  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1810 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1810   into_dash_iter1816 (    struct Map_1810  self796 ) {
    return (  self796 );
}

static  struct Maybe_606   next1821 (    struct StrConcatIter_1814 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1723 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1820 (    struct StrConcatIter_1813 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1821 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1819 (    struct StrCaseIter_1812 *  self1516 ) {
    struct StrCaseIter_1812 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1812_StrCaseIter1_t ) {
        return ( (  next607 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1812_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1812_StrCaseIter2_t ) {
            return ( (  next1820 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1812_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_606   next1818 (    struct StrConcatIter_1811 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1819 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_272   next1817 (    struct Map_1810 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1818 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_272_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1815 (    struct Map_1810  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1810  it1099 = ( (  into_dash_iter1816 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next1817 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1822 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1822);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1823;
    return (  temp1823 );
}

static  int32_t   lam1824 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add274 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1809 (    struct Map_1810  it1110 ) {
    return ( (  reduce1815 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1824 ) ) );
}

static  struct StrConcatIter_1811   into_dash_iter1826 (    struct StrConcatIter_1811  self1491 ) {
    return (  self1491 );
}

static  struct Map_1810   map1825 (    struct StrConcatIter_1811  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1811  it808 = ( (  into_dash_iter1826 ) ( (  iterable805 ) ) );
    return ( ( Map_1810_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1832 {
    struct StrConcat_1733  field0;
    struct StrBuilder_54  field1;
};

static struct StrConcat_1832 StrConcat_1832_StrConcat (  struct StrConcat_1733  field0 ,  struct StrBuilder_54  field1 ) {
    return ( struct StrConcat_1832 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1831 {
    struct StrConcat_1832  field0;
    struct Char_57  field1;
};

static struct StrConcat_1831 StrConcat_1831_StrConcat (  struct StrConcat_1832  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1831 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1830 {
    enum {
        StrCase_1830_StrCase1_t,
        StrCase_1830_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1830_StrCase1_s;
        struct {
            struct StrConcat_1831  field0;
        } StrCase_1830_StrCase2_s;
    } stuff;
};

static struct StrCase_1830 StrCase_1830_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1830 ) { .tag = StrCase_1830_StrCase1_t, .stuff = { .StrCase_1830_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1830 StrCase_1830_StrCase2 (  struct StrConcat_1831  field0 ) {
    return ( struct StrCase_1830 ) { .tag = StrCase_1830_StrCase2_t, .stuff = { .StrCase_1830_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrCaseIter_1812   undefined1835 (  ) {
    struct StrCaseIter_1812  temp1836;
    return (  temp1836 );
}

static  struct StrCaseIter_1812   todo1834 (  ) {
    ( (  print1049 ) ( ( (  from_dash_string220 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined1835 ) ( ) );
}

static  struct StrConcatIter_1814   into_dash_iter1842 (    struct StrConcat_1832  dref1498 ) {
    return ( (struct StrConcatIter_1814) { .f_left = ( (  chars1737 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1520 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1814   chars1841 (    struct StrConcat_1832  self1509 ) {
    return ( (  into_dash_iter1842 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1813   into_dash_iter1840 (    struct StrConcat_1831  dref1498 ) {
    return ( (struct StrConcatIter_1813) { .f_left = ( (  chars1841 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1813   chars1839 (    struct StrConcat_1831  self1509 ) {
    return ( (  into_dash_iter1840 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1812   into_dash_iter1838 (    struct StrCase_1830  self1522 ) {
    struct StrCase_1830  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1830_StrCase1_t ) {
        return ( ( StrCaseIter_1812_StrCaseIter1 ) ( ( (  chars608 ) ( ( dref1523 .stuff .StrCase_1830_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1830_StrCase2_t ) {
            return ( ( StrCaseIter_1812_StrCaseIter2 ) ( ( (  chars1839 ) ( ( dref1523 .stuff .StrCase_1830_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1812   chars1837 (    struct StrCase_1830  self1534 ) {
    return ( (  into_dash_iter1838 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1812   chars1829 (    struct EditorMode_141  self4137 ) {
    struct StrCase_1830  temp1833;
    struct StrCase_1830  c4138 = (  temp1833 );
    struct EditorMode_141  dref4139 = (  self4137 );
    if ( dref4139.tag == EditorMode_141_Normal_t ) {
        c4138 = ( ( StrCase_1830_StrCase1 ) ( ( (  from_dash_string220 ) ( ( "Normal" ) ,  ( 6 ) ) ) ) );
    }
    else {
        if ( dref4139.tag == EditorMode_141_Cmd_t ) {
            c4138 = ( ( StrCase_1830_StrCase2 ) ( ( ( StrConcat_1831_StrConcat ) ( ( ( StrConcat_1832_StrConcat ) ( ( ( StrConcat_1733_StrConcat ) ( ( ( StrConcat_1658_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Cmd(" ) ,  ( 4 ) ) ) ,  ( dref4139 .stuff .EditorMode_141_Cmd_s .field0 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "|" ) ,  ( 1 ) ) ) ) ) ,  ( dref4139 .stuff .EditorMode_141_Cmd_s .field1 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
        else {
            if ( dref4139.tag == EditorMode_141_Search_t ) {
                c4138 = ( ( StrCase_1830_StrCase2 ) ( ( ( StrConcat_1831_StrConcat ) ( ( ( StrConcat_1832_StrConcat ) ( ( ( StrConcat_1733_StrConcat ) ( ( ( StrConcat_1658_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Search(" ) ,  ( 7 ) ) ) ,  ( dref4139 .stuff .EditorMode_141_Search_s .field0 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "|" ) ,  ( 1 ) ) ) ) ) ,  ( dref4139 .stuff .EditorMode_141_Search_s .field1 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
            }
            else {
                if ( true ) {
                    return ( (  todo1834 ) ( ) );
                }
            }
        }
    }
    return ( (  chars1837 ) ( (  c4138 ) ) );
}

static  struct StrConcatIter_1811   into_dash_iter1828 (    struct StrConcat_1806  dref1498 ) {
    return ( (struct StrConcatIter_1811) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1829 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1811   chars1827 (    struct StrConcat_1806  self1509 ) {
    return ( (  into_dash_iter1828 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1843 (    struct Screen_661 *  screen3527 ,    struct StrConcat_1806  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1378 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1811  temp1844 =  into_dash_iter1826 ( ( (  chars1827 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1845 =  next1818 (&temp1844);
        if (  __cond1845 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1845 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1600 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1808 (    struct Screen_661 *  screen3543 ,    struct StrConcat_1806  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1809 ) ( ( (  map1825 ) ( ( (  chars1827 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth963 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1843 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1807 (   struct env1625* env ,    struct StrConcat_1806  s4256 ) {
    ( (  draw_dash_str_dash_right1808 ) ( ( env->screen4249 ) ,  (  s4256 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4253 ) ) ) );
    (* env->curline4253 ) = (  op_dash_add274 ( ( * ( env->curline4253 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1848 {
    struct StrView_21  field0;
    struct Maybe_140  field1;
};

static struct StrConcat_1848 StrConcat_1848_StrConcat (  struct StrView_21  field0 ,  struct Maybe_140  field1 ) {
    return ( struct StrConcat_1848 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1847 {
    enum Unit_7  (*fun) (  struct env1626*  ,    struct StrConcat_1848  );
    struct env1626 env;
};

struct StrConcatIter_1855 {
    struct StrConcatIter_1637  f_left;
    struct AppendIter_873  f_right;
};

struct StrCaseIter_1854 {
    enum {
        StrCaseIter_1854_StrCaseIter1_t,
        StrCaseIter_1854_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_603  field0;
        } StrCaseIter_1854_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1855  field0;
        } StrCaseIter_1854_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1854 StrCaseIter_1854_StrCaseIter1 (  struct StrViewIter_603  field0 ) {
    return ( struct StrCaseIter_1854 ) { .tag = StrCaseIter_1854_StrCaseIter1_t, .stuff = { .StrCaseIter_1854_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1854 StrCaseIter_1854_StrCaseIter2 (  struct StrConcatIter_1855  field0 ) {
    return ( struct StrCaseIter_1854 ) { .tag = StrCaseIter_1854_StrCaseIter2_t, .stuff = { .StrCaseIter_1854_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1853 {
    struct StrViewIter_603  f_left;
    struct StrCaseIter_1854  f_right;
};

struct Map_1852 {
    struct StrConcatIter_1853  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1852 Map_1852_Map (  struct StrConcatIter_1853  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1852 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1852   into_dash_iter1857 (    struct Map_1852  self796 ) {
    return (  self796 );
}

static  struct Maybe_606   next1861 (    struct StrConcatIter_1855 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1641 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1860 (    struct StrCaseIter_1854 *  self1516 ) {
    struct StrCaseIter_1854 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1854_StrCaseIter1_t ) {
        return ( (  next607 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1854_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1854_StrCaseIter2_t ) {
            return ( (  next1861 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1854_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_606   next1859 (    struct StrConcatIter_1853 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1860 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_272   next1858 (    struct Map_1852 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1859 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_272_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1856 (    struct Map_1852  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1852  it1099 = ( (  into_dash_iter1857 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next1858 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1862 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1862);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1863;
    return (  temp1863 );
}

static  int32_t   lam1864 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add274 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1851 (    struct Map_1852  it1110 ) {
    return ( (  reduce1856 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1864 ) ) );
}

static  struct StrConcatIter_1853   into_dash_iter1866 (    struct StrConcatIter_1853  self1491 ) {
    return (  self1491 );
}

static  struct Map_1852   map1865 (    struct StrConcatIter_1853  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1853  it808 = ( (  into_dash_iter1866 ) ( (  iterable805 ) ) );
    return ( ( Map_1852_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrCase_1870 {
    enum {
        StrCase_1870_StrCase1_t,
        StrCase_1870_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1870_StrCase1_s;
        struct {
            struct StrConcat_479  field0;
        } StrCase_1870_StrCase2_s;
    } stuff;
};

static struct StrCase_1870 StrCase_1870_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1870 ) { .tag = StrCase_1870_StrCase1_t, .stuff = { .StrCase_1870_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1870 StrCase_1870_StrCase2 (  struct StrConcat_479  field0 ) {
    return ( struct StrCase_1870 ) { .tag = StrCase_1870_StrCase2_t, .stuff = { .StrCase_1870_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1637   into_dash_iter1877 (    struct StrConcat_480  dref1498 ) {
    return ( (struct StrConcatIter_1637) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars608 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1637   chars1876 (    struct StrConcat_480  self1509 ) {
    return ( (  into_dash_iter1877 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1855   into_dash_iter1875 (    struct StrConcat_479  dref1498 ) {
    return ( (struct StrConcatIter_1855) { .f_left = ( (  chars1876 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1855   chars1874 (    struct StrConcat_479  self1509 ) {
    return ( (  into_dash_iter1875 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1854   into_dash_iter1873 (    struct StrCase_1870  self1522 ) {
    struct StrCase_1870  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1870_StrCase1_t ) {
        return ( ( StrCaseIter_1854_StrCaseIter1 ) ( ( (  chars608 ) ( ( dref1523 .stuff .StrCase_1870_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1870_StrCase2_t ) {
            return ( ( StrCaseIter_1854_StrCaseIter2 ) ( ( (  chars1874 ) ( ( dref1523 .stuff .StrCase_1870_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1854   chars1872 (    struct StrCase_1870  self1534 ) {
    return ( (  into_dash_iter1873 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1854   chars1869 (    struct Maybe_140  self1548 ) {
    struct StrCase_1870  temp1871;
    struct StrCase_1870  c1549 = (  temp1871 );
    struct Maybe_140  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_140_None_t ) {
        c1549 = ( ( StrCase_1870_StrCase1 ) ( ( (  from_dash_string220 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_140_Just_t ) {
            c1549 = ( ( StrCase_1870_StrCase2 ) ( ( ( StrConcat_479_StrConcat ) ( ( ( StrConcat_480_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_140_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1872 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1853   into_dash_iter1868 (    struct StrConcat_1848  dref1498 ) {
    return ( (struct StrConcatIter_1853) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1869 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1853   chars1867 (    struct StrConcat_1848  self1509 ) {
    return ( (  into_dash_iter1868 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1878 (    struct Screen_661 *  screen3527 ,    struct StrConcat_1848  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1378 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1853  temp1879 =  into_dash_iter1866 ( ( (  chars1867 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1880 =  next1859 (&temp1879);
        if (  __cond1880 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1880 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1600 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1850 (    struct Screen_661 *  screen3543 ,    struct StrConcat_1848  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1851 ) ( ( (  map1865 ) ( ( (  chars1867 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth963 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1878 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1849 (   struct env1626* env ,    struct StrConcat_1848  s4256 ) {
    ( (  draw_dash_str_dash_right1850 ) ( ( env->screen4249 ) ,  (  s4256 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4253 ) ) ) );
    (* env->curline4253 ) = (  op_dash_add274 ( ( * ( env->curline4253 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1885 {
    struct StrConcat_1604  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1885 StrConcat_1885_StrConcat (  struct StrConcat_1604  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1885 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1884 {
    struct StrConcat_1885  field0;
    int32_t  field1;
};

static struct StrConcat_1884 StrConcat_1884_StrConcat (  struct StrConcat_1885  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1884 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1883 {
    struct StrConcat_1884  field0;
    struct Char_57  field1;
};

static struct StrConcat_1883 StrConcat_1883_StrConcat (  struct StrConcat_1884  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1883 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1882 {
    enum Unit_7  (*fun) (  struct env1627*  ,    struct StrConcat_1883  );
    struct env1627 env;
};

struct StrConcatIter_1893 {
    struct StrViewIter_603  f_left;
    struct IntStrIter_1566  f_right;
};

struct StrConcatIter_1892 {
    struct StrConcatIter_1893  f_left;
    struct StrViewIter_603  f_right;
};

struct StrConcatIter_1891 {
    struct StrConcatIter_1892  f_left;
    struct IntStrIter_1566  f_right;
};

struct StrConcatIter_1890 {
    struct StrConcatIter_1891  f_left;
    struct AppendIter_873  f_right;
};

struct Map_1889 {
    struct StrConcatIter_1890  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1889 Map_1889_Map (  struct StrConcatIter_1890  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1889 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1889   into_dash_iter1895 (    struct Map_1889  self796 ) {
    return (  self796 );
}

static  struct Maybe_606   next1900 (    struct StrConcatIter_1893 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1569 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1899 (    struct StrConcatIter_1892 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1900 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1898 (    struct StrConcatIter_1891 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1899 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1569 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1897 (    struct StrConcatIter_1890 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1898 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_272   next1896 (    struct Map_1889 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1897 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_272_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1894 (    struct Map_1889  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1889  it1099 = ( (  into_dash_iter1895 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next1896 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1901 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1901);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1902;
    return (  temp1902 );
}

static  int32_t   lam1903 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add274 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1888 (    struct Map_1889  it1110 ) {
    return ( (  reduce1894 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1903 ) ) );
}

static  struct StrConcatIter_1890   into_dash_iter1905 (    struct StrConcatIter_1890  self1491 ) {
    return (  self1491 );
}

static  struct Map_1889   map1904 (    struct StrConcatIter_1890  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1890  it808 = ( (  into_dash_iter1905 ) ( (  iterable805 ) ) );
    return ( ( Map_1889_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_1893   into_dash_iter1913 (    struct StrConcat_1604  dref1498 ) {
    return ( (struct StrConcatIter_1893) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1582 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1893   chars1912 (    struct StrConcat_1604  self1509 ) {
    return ( (  into_dash_iter1913 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1892   into_dash_iter1911 (    struct StrConcat_1885  dref1498 ) {
    return ( (struct StrConcatIter_1892) { .f_left = ( (  chars1912 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars608 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1892   chars1910 (    struct StrConcat_1885  self1509 ) {
    return ( (  into_dash_iter1911 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1891   into_dash_iter1909 (    struct StrConcat_1884  dref1498 ) {
    return ( (struct StrConcatIter_1891) { .f_left = ( (  chars1910 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1582 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1891   chars1908 (    struct StrConcat_1884  self1509 ) {
    return ( (  into_dash_iter1909 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1890   into_dash_iter1907 (    struct StrConcat_1883  dref1498 ) {
    return ( (struct StrConcatIter_1890) { .f_left = ( (  chars1908 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1890   chars1906 (    struct StrConcat_1883  self1509 ) {
    return ( (  into_dash_iter1907 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1914 (    struct Screen_661 *  screen3527 ,    struct StrConcat_1883  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1378 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1890  temp1915 =  into_dash_iter1905 ( ( (  chars1906 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1916 =  next1897 (&temp1915);
        if (  __cond1916 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1916 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1600 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1887 (    struct Screen_661 *  screen3543 ,    struct StrConcat_1883  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1888 ) ( ( (  map1904 ) ( ( (  chars1906 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth963 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1914 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1886 (   struct env1627* env ,    struct StrConcat_1883  s4256 ) {
    ( (  draw_dash_str_dash_right1887 ) ( ( env->screen4249 ) ,  (  s4256 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4253 ) ) ) );
    (* env->curline4253 ) = (  op_dash_add274 ( ( * ( env->curline4253 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1919 {
    struct StrConcat_1884  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1919 StrConcat_1919_StrConcat (  struct StrConcat_1884  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1919 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1918 {
    enum Unit_7  (*fun) (  struct env1628*  ,    struct StrConcat_1919  );
    struct env1628 env;
};

struct StrConcatIter_1924 {
    struct StrConcatIter_1891  f_left;
    struct StrViewIter_603  f_right;
};

struct Map_1923 {
    struct StrConcatIter_1924  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1923 Map_1923_Map (  struct StrConcatIter_1924  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1923 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1923   into_dash_iter1926 (    struct Map_1923  self796 ) {
    return (  self796 );
}

static  struct Maybe_606   next1928 (    struct StrConcatIter_1924 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1898 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_272   next1927 (    struct Map_1923 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1928 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_272_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1925 (    struct Map_1923  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1923  it1099 = ( (  into_dash_iter1926 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next1927 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1929 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1929);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1930;
    return (  temp1930 );
}

static  int32_t   lam1931 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add274 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1922 (    struct Map_1923  it1110 ) {
    return ( (  reduce1925 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1931 ) ) );
}

static  struct StrConcatIter_1924   into_dash_iter1933 (    struct StrConcatIter_1924  self1491 ) {
    return (  self1491 );
}

static  struct Map_1923   map1932 (    struct StrConcatIter_1924  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1924  it808 = ( (  into_dash_iter1933 ) ( (  iterable805 ) ) );
    return ( ( Map_1923_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_1924   into_dash_iter1935 (    struct StrConcat_1919  dref1498 ) {
    return ( (struct StrConcatIter_1924) { .f_left = ( (  chars1908 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars608 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1924   chars1934 (    struct StrConcat_1919  self1509 ) {
    return ( (  into_dash_iter1935 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1936 (    struct Screen_661 *  screen3527 ,    struct StrConcat_1919  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1378 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1924  temp1937 =  into_dash_iter1933 ( ( (  chars1934 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1938 =  next1928 (&temp1937);
        if (  __cond1938 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1938 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1600 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1921 (    struct Screen_661 *  screen3543 ,    struct StrConcat_1919  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1922 ) ( ( (  map1932 ) ( ( (  chars1934 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth963 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1936 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1920 (   struct env1628* env ,    struct StrConcat_1919  s4256 ) {
    ( (  draw_dash_str_dash_right1921 ) ( ( env->screen4249 ) ,  (  s4256 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4253 ) ) ) );
    (* env->curline4253 ) = (  op_dash_add274 ( ( * ( env->curline4253 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct envunion1940 {
    enum Unit_7  (*fun) (  struct env1629*  ,    struct StrConcat_65  );
    struct env1629 env;
};

struct Map_1944 {
    struct StrConcatIter_1273  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1944 Map_1944_Map (  struct StrConcatIter_1273  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1944 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1944   into_dash_iter1946 (    struct Map_1944  self796 ) {
    return (  self796 );
}

static  struct Maybe_272   next1947 (    struct Map_1944 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1280 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_272_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1945 (    struct Map_1944  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1944  it1099 = ( (  into_dash_iter1946 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next1947 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1948 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1948);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1949;
    return (  temp1949 );
}

static  int32_t   lam1950 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add274 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1943 (    struct Map_1944  it1110 ) {
    return ( (  reduce1945 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1950 ) ) );
}

static  struct StrConcatIter_1273   into_dash_iter1952 (    struct StrConcatIter_1273  self1491 ) {
    return (  self1491 );
}

static  struct Map_1944   map1951 (    struct StrConcatIter_1273  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1273  it808 = ( (  into_dash_iter1952 ) ( (  iterable805 ) ) );
    return ( ( Map_1944_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  enum Unit_7   draw_dash_str1953 (    struct Screen_661 *  screen3527 ,    struct StrConcat_65  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1378 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1273  temp1954 =  into_dash_iter1952 ( ( (  chars1294 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1955 =  next1280 (&temp1954);
        if (  __cond1955 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1955 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1600 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1942 (    struct Screen_661 *  screen3543 ,    struct StrConcat_65  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1943 ) ( ( (  map1951 ) ( ( (  chars1294 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth963 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1953 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1941 (   struct env1629* env ,    struct StrConcat_65  s4256 ) {
    ( (  draw_dash_str_dash_right1942 ) ( ( env->screen4249 ) ,  (  s4256 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4253 ) ) ) );
    (* env->curline4253 ) = (  op_dash_add274 ( ( * ( env->curline4253 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   render_dash_editor1557 (    struct Screen_661 *  screen4249 ,    struct Editor_136 *  ed4251 ) {
    struct ScreenDims_1558  screen_dash_dims4252 = ( (struct ScreenDims_1558) { .f_from_dash_sx = (  from_dash_integral48 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub812 ( ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen4249 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral48 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub812 ( ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen4249 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) } );
    ( (  render1561 ) ( (  screen4249 ) ,  ( (  pane988 ) ( (  ed4251 ) ) ) ,  (  screen_dash_dims4252 ) ) );
    int32_t  temp1620 = (  from_dash_integral48 ( 0 ) );
    int32_t *  curline4253 = ( &temp1620 );
    struct env1621 envinst1621 = {
        .screen4249 =  screen4249 ,
        .curline4253 =  curline4253 ,
    };
    struct env1622 envinst1622 = {
        .screen4249 =  screen4249 ,
        .curline4253 =  curline4253 ,
    };
    struct env1623 envinst1623 = {
        .screen4249 =  screen4249 ,
        .curline4253 =  curline4253 ,
    };
    struct env1624 envinst1624 = {
        .screen4249 =  screen4249 ,
        .curline4253 =  curline4253 ,
    };
    struct env1625 envinst1625 = {
        .screen4249 =  screen4249 ,
        .curline4253 =  curline4253 ,
    };
    struct env1626 envinst1626 = {
        .screen4249 =  screen4249 ,
        .curline4253 =  curline4253 ,
    };
    struct env1627 envinst1627 = {
        .screen4249 =  screen4249 ,
        .curline4253 =  curline4253 ,
    };
    struct env1628 envinst1628 = {
        .screen4249 =  screen4249 ,
        .curline4253 =  curline4253 ,
    };
    struct env1629 envinst1629 = {
        .screen4249 =  screen4249 ,
        .curline4253 =  curline4253 ,
    };
    struct envunion1631  temp1630 = ( (struct envunion1631){ .fun = (  enum Unit_7  (*) (  struct env1621*  ,    struct StrConcat_1632  ) )ann1633 , .env =  envinst1621 } );
    ( temp1630.fun ( &temp1630.env ,  ( ( StrConcat_1632_StrConcat ) ( ( (  from_dash_string220 ) ( ( "mode: " ) ,  ( 6 ) ) ) ,  ( ( ( * (  ed4251 ) ) .f_pane ) .f_mode ) ) ) ) );
    enum CharType_1034  cur_dash_ty4257 = ( (  char_dash_type1036 ) ( ( (  char_dash_at1044 ) ( ( (  pane988 ) ( (  ed4251 ) ) ) ,  ( ( ( * (  ed4251 ) ) .f_pane ) .f_cursor ) ) ) ) );
    struct envunion1655  temp1654 = ( (struct envunion1655){ .fun = (  enum Unit_7  (*) (  struct env1622*  ,    struct StrConcat_1656  ) )ann1659 , .env =  envinst1622 } );
    ( temp1654.fun ( &temp1654.env ,  ( ( StrConcat_1656_StrConcat ) ( ( ( StrConcat_1657_StrConcat ) ( ( ( StrConcat_1658_StrConcat ) ( ( (  from_dash_string220 ) ( ( "cur: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4251 ) ) .f_pane ) .f_cursor ) ) ) ,  ( (  from_dash_string220 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  (  cur_dash_ty4257 ) ) ) ) );
    struct envunion1709  temp1708 = ( (struct envunion1709){ .fun = (  enum Unit_7  (*) (  struct env1623*  ,    struct StrConcat_1710  ) )ann1711 , .env =  envinst1623 } );
    ( temp1708.fun ( &temp1708.env ,  ( ( StrConcat_1710_StrConcat ) ( ( (  from_dash_string220 ) ( ( "sel: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4251 ) ) .f_pane ) .f_sel ) ) ) ) );
    struct Maybe_1742  cp4260 = ( (  fmap_dash_maybe1745 ) ( ( ( * (  ed4251 ) ) .f_clipboard ) ,  (  lam1746 ) ) );
    struct envunion1756  temp1755 = ( (struct envunion1756){ .fun = (  enum Unit_7  (*) (  struct env1624*  ,    struct StrConcat_1757  ) )ann1758 , .env =  envinst1624 } );
    ( temp1755.fun ( &temp1755.env ,  ( ( StrConcat_1757_StrConcat ) ( ( (  from_dash_string220 ) ( ( "cp: " ) ,  ( 4 ) ) ) ,  (  cp4260 ) ) ) ) );
    struct Maybe_1742  st4263 = ( (  fmap_dash_maybe1800 ) ( ( ( * (  ed4251 ) ) .f_search_dash_term ) ,  (  lam1801 ) ) );
    struct envunion1803  temp1802 = ( (struct envunion1803){ .fun = (  enum Unit_7  (*) (  struct env1624*  ,    struct StrConcat_1757  ) )ann1758 , .env =  envinst1624 } );
    ( temp1802.fun ( &temp1802.env ,  ( ( StrConcat_1757_StrConcat ) ( ( (  from_dash_string220 ) ( ( "st: " ) ,  ( 4 ) ) ) ,  (  st4263 ) ) ) ) );
    struct envunion1805  temp1804 = ( (struct envunion1805){ .fun = (  enum Unit_7  (*) (  struct env1625*  ,    struct StrConcat_1806  ) )ann1807 , .env =  envinst1625 } );
    ( temp1804.fun ( &temp1804.env ,  ( ( StrConcat_1806_StrConcat ) ( ( (  from_dash_string220 ) ( ( "edmode: " ) ,  ( 8 ) ) ) ,  ( ( * (  ed4251 ) ) .f_mode ) ) ) ) );
    struct envunion1847  temp1846 = ( (struct envunion1847){ .fun = (  enum Unit_7  (*) (  struct env1626*  ,    struct StrConcat_1848  ) )ann1849 , .env =  envinst1626 } );
    ( temp1846.fun ( &temp1846.env ,  ( ( StrConcat_1848_StrConcat ) ( ( (  from_dash_string220 ) ( ( "msg: " ) ,  ( 5 ) ) ) ,  ( ( * (  ed4251 ) ) .f_msg ) ) ) ) );
    struct envunion1882  temp1881 = ( (struct envunion1882){ .fun = (  enum Unit_7  (*) (  struct env1627*  ,    struct StrConcat_1883  ) )ann1886 , .env =  envinst1627 } );
    ( temp1881.fun ( &temp1881.env ,  ( ( StrConcat_1883_StrConcat ) ( ( ( StrConcat_1884_StrConcat ) ( ( ( StrConcat_1885_StrConcat ) ( ( ( StrConcat_1604_StrConcat ) ( ( (  from_dash_string220 ) ( ( "sc-off: (" ) ,  ( 9 ) ) ) ,  ( ( ( ( * (  ed4251 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_top ) ) ) ,  ( (  from_dash_string220 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( ( ( ( * (  ed4251 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_left ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    struct envunion1918  temp1917 = ( (struct envunion1918){ .fun = (  enum Unit_7  (*) (  struct env1628*  ,    struct StrConcat_1919  ) )ann1920 , .env =  envinst1628 } );
    ( temp1917.fun ( &temp1917.env ,  ( ( StrConcat_1919_StrConcat ) ( ( ( StrConcat_1884_StrConcat ) ( ( ( StrConcat_1885_StrConcat ) ( ( ( StrConcat_1604_StrConcat ) ( ( (  from_dash_string220 ) ( ( "dims: { " ) ,  ( 8 ) ) ) ,  ( (  screen_dash_dims4252 ) .f_to_dash_sx ) ) ) ,  ( (  from_dash_string220 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  screen_dash_dims4252 ) .f_to_dash_sy ) ) ) ,  ( (  from_dash_string220 ) ( ( " }" ) ,  ( 2 ) ) ) ) ) ) );
    struct envunion1940  temp1939 = ( (struct envunion1940){ .fun = (  enum Unit_7  (*) (  struct env1629*  ,    struct StrConcat_65  ) )ann1941 , .env =  envinst1629 } );
    ( temp1939.fun ( &temp1939.env ,  ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "num actions: " ) ,  ( 13 ) ) ) ,  ( ( ( ( * ( ( ( * (  ed4251 ) ) .f_pane ) .f_buf ) ) .f_actions ) .f_list ) .f_count ) ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1958 {
    struct StrView_21  field0;
    uint32_t  field1;
};

static struct StrConcat_1958 StrConcat_1958_StrConcat (  struct StrView_21  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1958 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1957 {
    struct StrConcat_1958  field0;
    struct Char_57  field1;
};

static struct StrConcat_1957 StrConcat_1957_StrConcat (  struct StrConcat_1958  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1957 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1962 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1961 {
    struct StrViewIter_603  f_left;
    struct IntStrIter_1962  f_right;
};

struct StrConcatIter_1960 {
    struct StrConcatIter_1961  f_left;
    struct AppendIter_873  f_right;
};

static  struct StrConcatIter_1960   into_dash_iter1963 (    struct StrConcatIter_1960  self1491 ) {
    return (  self1491 );
}

static  uint32_t   op_dash_div1971 (    uint32_t  l245 ,    uint32_t  r247 ) {
    return ( (  l245 ) / (  r247 ) );
}

static  int32_t   count_dash_digits1970 (    uint32_t  self1430 ) {
    if ( (  eq407 ( (  self1430 ) , (  from_dash_integral216 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp215 ( (  self1430 ) , (  from_dash_integral216 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1971 ( (  self1430 ) , (  from_dash_integral216 ( 10 ) ) ) );
        digits1431 = (  op_dash_add274 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1962   uint_dash_iter1969 (    uint32_t  int1437 ) {
    return ( (struct IntStrIter_1962) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1970 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1962   chars1968 (    uint32_t  self1449 ) {
    return ( (  uint_dash_iter1969 ) ( (  self1449 ) ) );
}

static  struct StrConcatIter_1961   into_dash_iter1967 (    struct StrConcat_1958  dref1498 ) {
    return ( (struct StrConcatIter_1961) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1968 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1961   chars1966 (    struct StrConcat_1958  self1509 ) {
    return ( (  into_dash_iter1967 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1960   into_dash_iter1965 (    struct StrConcat_1957  dref1498 ) {
    return ( (struct StrConcatIter_1960) { .f_left = ( (  chars1966 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1960   chars1964 (    struct StrConcat_1957  self1509 ) {
    return ( (  into_dash_iter1965 ) ( (  self1509 ) ) );
}

struct env1978 {
    ;
    uint32_t  base1210;
};

struct envunion1979 {
    uint32_t  (*fun) (  struct env1978*  ,    int32_t  ,    uint32_t  );
    struct env1978 env;
};

static  uint32_t   reduce1977 (    struct Range_686  iterable1093 ,    uint32_t  base1095 ,   struct envunion1979  fun1097 ) {
    uint32_t  x1098 = (  base1095 );
    struct RangeIter_689  it1099 = ( (  into_dash_iter691 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next692 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                struct envunion1979  temp1980 = (  fun1097 );
                x1098 = ( temp1980.fun ( &temp1980.env ,  ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1981 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1981);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp1982;
    return (  temp1982 );
}

static  uint32_t   lam1983 (   struct env1978* env ,    int32_t  item1214 ,    uint32_t  x1216 ) {
    return (  op_dash_mul683 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint32_t   pow1976 (    uint32_t  base1210 ,    int32_t  p1212 ) {
    struct env1978 envinst1978 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1977 ) ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral216 ( 1 ) ) ,  ( (struct envunion1979){ .fun = (  uint32_t  (*) (  struct env1978*  ,    int32_t  ,    uint32_t  ) )lam1983 , .env =  envinst1978 } ) ) );
}

static  uint32_t   op_dash_sub1984 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) - (  r237 ) );
}

static  struct Maybe_606   next1975 (    struct IntStrIter_1962 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_606_Just ) ( ( (  from_dash_charlike221 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp317 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
    }
    uint32_t  trim_dash_down1423 = ( (  pow1976 ) ( (  from_dash_integral216 ( 10 ) ) ,  (  op_dash_sub812 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    uint32_t  upper1424 = (  op_dash_div1971 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    uint32_t  upper_dash_mask1425 = (  op_dash_mul683 ( (  op_dash_div1971 ( (  upper1424 ) , (  from_dash_integral216 ( 10 ) ) ) ) , (  from_dash_integral216 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast219 ) ( (  op_dash_sub1984 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub812 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8892 ) ( (  op_dash_add782 ( (  digit1426 ) , (  from_dash_integral212 ( 48 ) ) ) ) ) );
    return ( ( Maybe_606_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_606   next1974 (    struct StrConcatIter_1961 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1975 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1973 (    struct StrConcatIter_1960 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1974 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   draw_dash_str1956 (    struct Screen_661 *  screen3527 ,    struct StrConcat_1957  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1378 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1960  temp1959 =  into_dash_iter1963 ( ( (  chars1964 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1972 =  next1973 (&temp1959);
        if (  __cond1972 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1972 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1600 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

struct RenderState_1986 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_664  f_fg;
    struct Color_664  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_1991 {
    struct StrConcat_1957  field0;
    uint32_t  field1;
};

static struct StrConcat_1991 StrConcat_1991_StrConcat (  struct StrConcat_1957  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1991 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1990 {
    struct StrConcat_1991  field0;
    struct Char_57  field1;
};

static struct StrConcat_1990 StrConcat_1990_StrConcat (  struct StrConcat_1991  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1990 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_1994 {
    struct StrConcatIter_1960  f_left;
    struct IntStrIter_1962  f_right;
};

struct StrConcatIter_1993 {
    struct StrConcatIter_1994  f_left;
    struct AppendIter_873  f_right;
};

static  struct StrConcatIter_1993   into_dash_iter1996 (    struct StrConcatIter_1993  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_606   next1998 (    struct StrConcatIter_1994 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1973 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1975 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1997 (    struct StrConcatIter_1993 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1998 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each1992 (    struct StrConcatIter_1993  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrConcatIter_1993  temp1995 = ( (  into_dash_iter1996 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1993 *  it1077 = ( &temp1995 );
    while ( ( true ) ) {
        struct Maybe_606  dref1078 = ( (  next1997 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_606_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_606_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_606_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrConcatIter_1994   into_dash_iter2002 (    struct StrConcat_1991  dref1498 ) {
    return ( (struct StrConcatIter_1994) { .f_left = ( (  chars1964 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1968 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1994   chars2001 (    struct StrConcat_1991  self1509 ) {
    return ( (  into_dash_iter2002 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1993   into_dash_iter2000 (    struct StrConcat_1990  dref1498 ) {
    return ( (struct StrConcatIter_1993) { .f_left = ( (  chars2001 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1993   chars1999 (    struct StrConcat_1990  self1509 ) {
    return ( (  into_dash_iter2000 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print1989 (    struct StrConcat_1990  s2563 ) {
    ( (  for_dash_each1992 ) ( ( (  chars1999 ) ( (  s2563 ) ) ) ,  (  printf_dash_char204 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   move_dash_cursor_dash_to1988 (    uint32_t  x2577 ,    uint32_t  y2579 ) {
    uint32_t  x2580 = (  op_dash_add784 ( (  x2577 ) , (  from_dash_integral216 ( 1 ) ) ) );
    uint32_t  y2581 = (  op_dash_add784 ( (  y2579 ) , (  from_dash_integral216 ( 1 ) ) ) );
    ( (  print1989 ) ( ( ( StrConcat_1990_StrConcat ) ( ( ( StrConcat_1991_StrConcat ) ( ( ( StrConcat_1957_StrConcat ) ( ( ( StrConcat_1958_StrConcat ) ( ( (  from_dash_string220 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2581 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2580 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Slice_662   subslice2005 (    struct Slice_662  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Cell_663 *  begin_dash_ptr1787 = ( (  offset_dash_ptr698 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp184 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp184 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_662) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub304 ( ( (  min331 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_662) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

struct SliceIter_2008 {
    struct Slice_662  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2007 {
    struct SliceIter_2008  f_left_dash_it;
    struct SliceIter_2008  f_right_dash_it;
};

struct Tuple2_2009 {
    struct Cell_663  field0;
    struct Cell_663  field1;
};

static struct Tuple2_2009 Tuple2_2009_Tuple2 (  struct Cell_663  field0 ,  struct Cell_663  field1 ) {
    return ( struct Tuple2_2009 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2011 {
    bool (*  fun1135 )(    struct Tuple2_2009  );
};

struct envunion2012 {
    bool  (*fun) (  struct env2011*  ,    struct Tuple2_2009  ,    bool  );
    struct env2011 env;
};

static  struct Zip_2007   into_dash_iter2013 (    struct Zip_2007  self911 ) {
    return (  self911 );
}

struct Maybe_2014 {
    enum {
        Maybe_2014_None_t,
        Maybe_2014_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2009  field0;
        } Maybe_2014_Just_s;
    } stuff;
};

static struct Maybe_2014 Maybe_2014_Just (  struct Tuple2_2009  field0 ) {
    return ( struct Maybe_2014 ) { .tag = Maybe_2014_Just_t, .stuff = { .Maybe_2014_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_703   next2016 (    struct SliceIter_2008 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp184 ( (  op_dash_add232 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_703) { .tag = Maybe_703_None_t } );
    }
    struct Cell_663  elem1830 = ( * ( (  offset_dash_ptr698 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add232 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_703_Just ) ( (  elem1830 ) ) );
}

static  struct Maybe_2014   next2015 (    struct Zip_2007 *  self914 ) {
    struct Zip_2007  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_703  dref916 = ( (  next2016 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_703_None_t ) {
            return ( (struct Maybe_2014) { .tag = Maybe_2014_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_703_Just_t ) {
                struct Maybe_703  dref918 = ( (  next2016 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_703_None_t ) {
                    return ( (struct Maybe_2014) { .tag = Maybe_2014_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_703_Just_t ) {
                        ( (  next2016 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next2016 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2014_Just ) ( ( ( Tuple2_2009_Tuple2 ) ( ( dref916 .stuff .Maybe_703_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_703_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce2010 (    struct Zip_2007  iterable1093 ,    bool  base1095 ,   struct envunion2012  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_2007  it1099 = ( (  into_dash_iter2013 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_2014  dref1100 = ( (  next2015 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_2014_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_2014_Just_t ) {
                struct envunion2012  temp2017 = (  fun1097 );
                x1098 = ( temp2017.fun ( &temp2017.env ,  ( dref1100 .stuff .Maybe_2014_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2018 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2018);
    exit ( 1 );
    ( Unit_7_Unit );
    bool  temp2019;
    return (  temp2019 );
}

static  bool   lam2020 (   struct env2011* env ,    struct Tuple2_2009  e1137 ,    bool  x1139 ) {
    return ( ( ( env->fun1135 ) ( (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any2006 (    struct Zip_2007  it1133 ,    bool (*  fun1135 )(    struct Tuple2_2009  ) ) {
    struct env2011 envinst2011 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce2010 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion2012){ .fun = (  bool  (*) (  struct env2011*  ,    struct Tuple2_2009  ,    bool  ) )lam2020 , .env =  envinst2011 } ) ) );
}

static  struct SliceIter_2008   into_dash_iter2022 (    struct Slice_662  self1822 ) {
    return ( (struct SliceIter_2008) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2007   zip2021 (    struct Slice_662  left922 ,    struct Slice_662  right924 ) {
    struct SliceIter_2008  left_dash_it925 = ( (  into_dash_iter2022 ) ( (  left922 ) ) );
    struct SliceIter_2008  right_dash_it926 = ( (  into_dash_iter2022 ) ( (  right924 ) ) );
    return ( (struct Zip_2007) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

struct Tuple2_2026 {
    struct Color_664  field0;
    struct Color_664  field1;
};

static struct Tuple2_2026 Tuple2_2026_Tuple2 (  struct Color_664  field0 ,  struct Color_664  field1 ) {
    return ( struct Tuple2_2026 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_665 *   cast2030 (    int32_t *  x356 ) {
    return ( (enum Color8_665 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2028 (    enum Color8_665  x573 ) {
    int32_t  temp2029 = ( (  zeroed855 ) ( ) );
    int32_t *  y574 = ( &temp2029 );
    enum Color8_665 *  yp575 = ( (  cast2030 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq2027 (    enum Color8_665  l2605 ,    enum Color8_665  r2607 ) {
    return (  eq320 ( ( ( (  cast_dash_on_dash_zeroed2028 ) ( (  l2605 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2028 ) ( (  r2607 ) ) ) ) );
}

static  enum Color16_666 *   cast2034 (    int32_t *  x356 ) {
    return ( (enum Color16_666 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2032 (    enum Color16_666  x573 ) {
    int32_t  temp2033 = ( (  zeroed855 ) ( ) );
    int32_t *  y574 = ( &temp2033 );
    enum Color16_666 *  yp575 = ( (  cast2034 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq2031 (    enum Color16_666  l2611 ,    enum Color16_666  r2613 ) {
    return (  eq320 ( ( ( (  cast_dash_on_dash_zeroed2032 ) ( (  l2611 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2032 ) ( (  r2613 ) ) ) ) );
}

static  bool   eq2035 (    struct RGB_667  l2641 ,    struct RGB_667  r2643 ) {
    return ( ( (  eq208 ( ( (  l2641 ) .f_r ) , ( (  r2643 ) .f_r ) ) ) && (  eq208 ( ( (  l2641 ) .f_g ) , ( (  r2643 ) .f_g ) ) ) ) && (  eq208 ( ( (  l2641 ) .f_b ) , ( (  r2643 ) .f_b ) ) ) );
}

static  bool   eq2025 (    struct Color_664  l2664 ,    struct Color_664  r2666 ) {
    return ( {  struct Tuple2_2026  dref2667 = ( ( Tuple2_2026_Tuple2 ) ( (  l2664 ) ,  (  r2666 ) ) ) ; dref2667 .field0.tag == Color_664_ColorDefault_t && dref2667 .field1.tag == Color_664_ColorDefault_t ? ( true ) : dref2667 .field0.tag == Color_664_Color8_t && dref2667 .field1.tag == Color_664_Color8_t ? (  eq2027 ( ( dref2667 .field0 .stuff .Color_664_Color8_s .field0 ) , ( dref2667 .field1 .stuff .Color_664_Color8_s .field0 ) ) ) : dref2667 .field0.tag == Color_664_Color16_t && dref2667 .field1.tag == Color_664_Color16_t ? (  eq2031 ( ( dref2667 .field0 .stuff .Color_664_Color16_s .field0 ) , ( dref2667 .field1 .stuff .Color_664_Color16_s .field0 ) ) ) : dref2667 .field0.tag == Color_664_Color256_t && dref2667 .field1.tag == Color_664_Color256_t ? (  eq208 ( ( dref2667 .field0 .stuff .Color_664_Color256_s .field0 ) , ( dref2667 .field1 .stuff .Color_664_Color256_s .field0 ) ) ) : dref2667 .field0.tag == Color_664_ColorRGB_t && dref2667 .field1.tag == Color_664_ColorRGB_t ? (  eq2035 ( ( dref2667 .field0 .stuff .Color_664_ColorRGB_s .field0 ) , ( dref2667 .field1 .stuff .Color_664_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2024 (    struct Cell_663  l3400 ,    struct Cell_663  r3402 ) {
    if ( ( !  eq403 ( ( (  l3400 ) .f_c ) , ( (  r3402 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2025 ( ( (  l3400 ) .f_fg ) , ( (  r3402 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2025 ( ( (  l3400 ) .f_bg ) , ( (  r3402 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam2023 (    struct Tuple2_2009  dref3456 ) {
    return ( !  eq2024 ( ( dref3456 .field0 ) , ( dref3456 .field1 ) ) );
}

static  enum Unit_7   set_dash_default_dash_fg2038 (  ) {
    ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg82039 (    enum Color8_665  color2616 ) {
    enum Color8_665  dref2617 = (  color2616 );
    switch (  dref2617 ) {
        case Color8_665_Black8 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_665_Red8 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_665_Green8 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_665_Yellow8 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_665_Blue8 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_665_Magenta8 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_665_Cyan8 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_665_White8 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg162040 (    enum Color16_666  color2620 ) {
    enum Color16_666  dref2621 = (  color2620 );
    switch (  dref2621 ) {
        case Color16_666_Black16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_Red16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_Green16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_Yellow16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_Blue16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_Magenta16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_Cyan16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_White16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_BrightBlack16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_BrightRed16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_BrightGreen16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_BrightYellow16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_BrightBlue16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_BrightMagenta16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_BrightCyan16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_BrightWhite16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

struct StrConcat_2044 {
    struct StrView_21  field0;
    uint8_t  field1;
};

static struct StrConcat_2044 StrConcat_2044_StrConcat (  struct StrView_21  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2044 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2043 {
    struct StrConcat_2044  field0;
    struct Char_57  field1;
};

static struct StrConcat_2043 StrConcat_2043_StrConcat (  struct StrConcat_2044  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_2043 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2048 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2047 {
    struct StrViewIter_603  f_left;
    struct IntStrIter_2048  f_right;
};

struct StrConcatIter_2046 {
    struct StrConcatIter_2047  f_left;
    struct AppendIter_873  f_right;
};

static  struct StrConcatIter_2046   into_dash_iter2050 (    struct StrConcatIter_2046  self1491 ) {
    return (  self1491 );
}

struct env2056 {
    uint8_t  base1210;
    ;
};

struct envunion2057 {
    uint8_t  (*fun) (  struct env2056*  ,    int32_t  ,    uint8_t  );
    struct env2056 env;
};

static  uint8_t   reduce2055 (    struct Range_686  iterable1093 ,    uint8_t  base1095 ,   struct envunion2057  fun1097 ) {
    uint8_t  x1098 = (  base1095 );
    struct RangeIter_689  it1099 = ( (  into_dash_iter691 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next692 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                struct envunion2057  temp2058 = (  fun1097 );
                x1098 = ( temp2058.fun ( &temp2058.env ,  ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2059 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2059);
    exit ( 1 );
    ( Unit_7_Unit );
    uint8_t  temp2060;
    return (  temp2060 );
}

static  uint8_t   op_dash_mul2062 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam2061 (   struct env2056* env ,    int32_t  item1214 ,    uint8_t  x1216 ) {
    return (  op_dash_mul2062 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint8_t   pow2054 (    uint8_t  base1210 ,    int32_t  p1212 ) {
    struct env2056 envinst2056 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce2055 ) ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral212 ( 1 ) ) ,  ( (struct envunion2057){ .fun = (  uint8_t  (*) (  struct env2056*  ,    int32_t  ,    uint8_t  ) )lam2061 , .env =  envinst2056 } ) ) );
}

static  uint8_t   op_dash_div2063 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast2064 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_606   next2053 (    struct IntStrIter_2048 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_606_Just ) ( ( (  from_dash_charlike221 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp317 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
    }
    uint8_t  trim_dash_down1423 = ( (  pow2054 ) ( (  from_dash_integral212 ( 10 ) ) ,  (  op_dash_sub812 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    uint8_t  upper1424 = (  op_dash_div2063 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    uint8_t  upper_dash_mask1425 = (  op_dash_mul2062 ( (  op_dash_div2063 ( (  upper1424 ) , (  from_dash_integral212 ( 10 ) ) ) ) , (  from_dash_integral212 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast2064 ) ( (  op_dash_sub781 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub812 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8892 ) ( (  op_dash_add782 ( (  digit1426 ) , (  from_dash_integral212 ( 48 ) ) ) ) ) );
    return ( ( Maybe_606_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_606   next2052 (    struct StrConcatIter_2047 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next2053 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next2051 (    struct StrConcatIter_2046 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next2052 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each2045 (    struct StrConcatIter_2046  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrConcatIter_2046  temp2049 = ( (  into_dash_iter2050 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2046 *  it1077 = ( &temp2049 );
    while ( ( true ) ) {
        struct Maybe_606  dref1078 = ( (  next2051 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_606_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_606_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_606_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  int32_t   count_dash_digits2071 (    uint8_t  self1430 ) {
    if ( (  eq208 ( (  self1430 ) , (  from_dash_integral212 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp225 ( (  self1430 ) , (  from_dash_integral212 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div2063 ( (  self1430 ) , (  from_dash_integral212 ( 10 ) ) ) );
        digits1431 = (  op_dash_add274 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_2048   uint_dash_iter2070 (    uint8_t  int1437 ) {
    return ( (struct IntStrIter_2048) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits2071 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2048   chars2069 (    uint8_t  self1455 ) {
    return ( (  uint_dash_iter2070 ) ( (  self1455 ) ) );
}

static  struct StrConcatIter_2047   into_dash_iter2068 (    struct StrConcat_2044  dref1498 ) {
    return ( (struct StrConcatIter_2047) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars2069 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2047   chars2067 (    struct StrConcat_2044  self1509 ) {
    return ( (  into_dash_iter2068 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2046   into_dash_iter2066 (    struct StrConcat_2043  dref1498 ) {
    return ( (struct StrConcatIter_2046) { .f_left = ( (  chars2067 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2046   chars2065 (    struct StrConcat_2043  self1509 ) {
    return ( (  into_dash_iter2066 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print2042 (    struct StrConcat_2043  s2563 ) {
    ( (  for_dash_each2045 ) ( ( (  chars2065 ) ( (  s2563 ) ) ) ,  (  printf_dash_char204 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg2562041 (    uint8_t  color2634 ) {
    ( (  print2042 ) ( ( ( StrConcat_2043_StrConcat ) ( ( ( StrConcat_2044_StrConcat ) ( ( (  from_dash_string220 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2634 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_2077 {
    struct StrConcat_2043  field0;
    uint8_t  field1;
};

static struct StrConcat_2077 StrConcat_2077_StrConcat (  struct StrConcat_2043  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2077 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2076 {
    struct StrConcat_2077  field0;
    struct Char_57  field1;
};

static struct StrConcat_2076 StrConcat_2076_StrConcat (  struct StrConcat_2077  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_2076 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2075 {
    struct StrConcat_2076  field0;
    uint8_t  field1;
};

static struct StrConcat_2075 StrConcat_2075_StrConcat (  struct StrConcat_2076  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2075 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2074 {
    struct StrConcat_2075  field0;
    struct Char_57  field1;
};

static struct StrConcat_2074 StrConcat_2074_StrConcat (  struct StrConcat_2075  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_2074 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2082 {
    struct StrConcatIter_2046  f_left;
    struct IntStrIter_2048  f_right;
};

struct StrConcatIter_2081 {
    struct StrConcatIter_2082  f_left;
    struct AppendIter_873  f_right;
};

struct StrConcatIter_2080 {
    struct StrConcatIter_2081  f_left;
    struct IntStrIter_2048  f_right;
};

struct StrConcatIter_2079 {
    struct StrConcatIter_2080  f_left;
    struct AppendIter_873  f_right;
};

static  struct StrConcatIter_2079   into_dash_iter2084 (    struct StrConcatIter_2079  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_606   next2088 (    struct StrConcatIter_2082 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next2051 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next2053 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next2087 (    struct StrConcatIter_2081 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next2088 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next2086 (    struct StrConcatIter_2080 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next2087 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next2053 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next2085 (    struct StrConcatIter_2079 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next2086 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each2078 (    struct StrConcatIter_2079  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrConcatIter_2079  temp2083 = ( (  into_dash_iter2084 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2079 *  it1077 = ( &temp2083 );
    while ( ( true ) ) {
        struct Maybe_606  dref1078 = ( (  next2085 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_606_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_606_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_606_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrConcatIter_2082   into_dash_iter2096 (    struct StrConcat_2077  dref1498 ) {
    return ( (struct StrConcatIter_2082) { .f_left = ( (  chars2065 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars2069 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2082   chars2095 (    struct StrConcat_2077  self1509 ) {
    return ( (  into_dash_iter2096 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2081   into_dash_iter2094 (    struct StrConcat_2076  dref1498 ) {
    return ( (struct StrConcatIter_2081) { .f_left = ( (  chars2095 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2081   chars2093 (    struct StrConcat_2076  self1509 ) {
    return ( (  into_dash_iter2094 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2080   into_dash_iter2092 (    struct StrConcat_2075  dref1498 ) {
    return ( (struct StrConcatIter_2080) { .f_left = ( (  chars2093 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars2069 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2080   chars2091 (    struct StrConcat_2075  self1509 ) {
    return ( (  into_dash_iter2092 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2079   into_dash_iter2090 (    struct StrConcat_2074  dref1498 ) {
    return ( (struct StrConcatIter_2079) { .f_left = ( (  chars2091 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2079   chars2089 (    struct StrConcat_2074  self1509 ) {
    return ( (  into_dash_iter2090 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print2073 (    struct StrConcat_2074  s2563 ) {
    ( (  for_dash_each2078 ) ( ( (  chars2089 ) ( (  s2563 ) ) ) ,  (  printf_dash_char204 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg_dash_rgb2072 (    struct RGB_667  c2657 ) {
    ( (  print2073 ) ( ( ( StrConcat_2074_StrConcat ) ( ( ( StrConcat_2075_StrConcat ) ( ( ( StrConcat_2076_StrConcat ) ( ( ( StrConcat_2077_StrConcat ) ( ( ( StrConcat_2043_StrConcat ) ( ( ( StrConcat_2044_StrConcat ) ( ( (  from_dash_string220 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2657 ) .f_r ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2657 ) .f_g ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2657 ) .f_b ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg2037 (    struct Color_664  c2678 ) {
    struct Color_664  dref2679 = (  c2678 );
    if ( dref2679.tag == Color_664_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2038 ) ( ) );
    }
    else {
        if ( dref2679.tag == Color_664_Color8_t ) {
            ( (  set_dash_fg82039 ) ( ( dref2679 .stuff .Color_664_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2679.tag == Color_664_Color16_t ) {
                ( (  set_dash_fg162040 ) ( ( dref2679 .stuff .Color_664_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2679.tag == Color_664_Color256_t ) {
                    ( (  set_dash_fg2562041 ) ( ( dref2679 .stuff .Color_664_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2679.tag == Color_664_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2072 ) ( ( dref2679 .stuff .Color_664_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_default_dash_bg2098 (  ) {
    ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg82099 (    enum Color8_665  color2624 ) {
    enum Color8_665  dref2625 = (  color2624 );
    switch (  dref2625 ) {
        case Color8_665_Black8 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_665_Red8 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_665_Green8 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_665_Yellow8 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_665_Blue8 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_665_Magenta8 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_665_Cyan8 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_665_White8 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg162100 (    enum Color16_666  color2628 ) {
    enum Color16_666  dref2629 = (  color2628 );
    switch (  dref2629 ) {
        case Color16_666_Black16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_Red16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_Green16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_Yellow16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_Blue16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_Magenta16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_Cyan16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_White16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_666_BrightBlack16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_666_BrightRed16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_666_BrightGreen16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_666_BrightYellow16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_666_BrightBlue16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_666_BrightMagenta16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_666_BrightCyan16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_666_BrightWhite16 : {
            ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg2562101 (    uint8_t  color2637 ) {
    ( (  print2042 ) ( ( ( StrConcat_2043_StrConcat ) ( ( ( StrConcat_2044_StrConcat ) ( ( (  from_dash_string220 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2637 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg_dash_rgb2102 (    struct RGB_667  c2660 ) {
    ( (  print2073 ) ( ( ( StrConcat_2074_StrConcat ) ( ( ( StrConcat_2075_StrConcat ) ( ( ( StrConcat_2076_StrConcat ) ( ( ( StrConcat_2077_StrConcat ) ( ( ( StrConcat_2043_StrConcat ) ( ( ( StrConcat_2044_StrConcat ) ( ( (  from_dash_string220 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2660 ) .f_r ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2660 ) .f_g ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2660 ) .f_b ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg2097 (    struct Color_664  c2686 ) {
    struct Color_664  dref2687 = (  c2686 );
    if ( dref2687.tag == Color_664_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2098 ) ( ) );
    }
    else {
        if ( dref2687.tag == Color_664_Color8_t ) {
            ( (  set_dash_bg82099 ) ( ( dref2687 .stuff .Color_664_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2687.tag == Color_664_Color16_t ) {
                ( (  set_dash_bg162100 ) ( ( dref2687 .stuff .Color_664_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2687.tag == Color_664_Color256_t ) {
                    ( (  set_dash_bg2562101 ) ( ( dref2687 .stuff .Color_664_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2687.tag == Color_664_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2102 ) ( ( dref2687 .stuff .Color_664_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  uint32_t   i32_dash_u322103 (    int32_t  x603 ) {
    return ( (uint32_t ) (  x603 ) );
}

static  enum Unit_7   emit_dash_cell2036 (    struct RenderState_1986 *  rs3432 ,    struct Cell_663 *  c3434 ,    uint32_t  x3436 ,    uint32_t  y3438 ) {
    if ( ( ( !  eq407 ( (  x3436 ) , ( ( * (  rs3432 ) ) .f_x ) ) ) || ( !  eq407 ( (  y3438 ) , ( ( * (  rs3432 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1988 ) ( (  x3436 ) ,  (  y3438 ) ) );
        (*  rs3432 ) .f_x = (  x3436 );
        (*  rs3432 ) .f_y = (  y3438 );
    }
    struct Char_57  char3439 = ( ( * (  c3434 ) ) .f_c );
    struct Color_664  bg3440 = ( ( * (  c3434 ) ) .f_bg );
    if ( (  eq320 ( ( ( * (  c3434 ) ) .f_char_dash_width ) , (  op_dash_neg636 ( (  from_dash_integral48 ( 1 ) ) ) ) ) ) ) {
        char3439 = ( (  from_dash_charlike221 ) ( ( " " ) ,  ( 1 ) ) );
        bg3440 = ( ( Color_664_Color8 ) ( ( Color8_665_Red8 ) ) );
    }
    if ( ( !  eq2025 ( ( ( * (  rs3432 ) ) .f_fg ) , ( ( * (  c3434 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2037 ) ( ( ( * (  c3434 ) ) .f_fg ) ) );
        (*  rs3432 ) .f_fg = ( ( * (  c3434 ) ) .f_fg );
    }
    if ( ( !  eq2025 ( ( ( * (  rs3432 ) ) .f_bg ) , (  bg3440 ) ) ) ) {
        ( (  set_dash_bg2097 ) ( (  bg3440 ) ) );
        (*  rs3432 ) .f_bg = (  bg3440 );
    }
    ( (  print_dash_str203 ) ( (  char3439 ) ) );
    uint32_t  char_dash_width3441 = ( (  i32_dash_u322103 ) ( ( (  max964 ) ( ( ( * (  c3434 ) ) .f_char_dash_width ) ,  (  from_dash_integral48 ( 1 ) ) ) ) ) );
    (*  rs3432 ) .f_x = (  op_dash_add784 ( ( ( * (  rs3432 ) ) .f_x ) , (  char_dash_width3441 ) ) );
    return ( Unit_7_Unit );
}

struct Zip_2106 {
    struct SliceIter_2008  f_left_dash_it;
    struct FromIter_266  f_right_dash_it;
};

struct env2107 {
    ;
    struct Slice_662  dest1853;
    ;
};

struct Tuple2_2109 {
    struct Cell_663  field0;
    int32_t  field1;
};

static struct Tuple2_2109 Tuple2_2109_Tuple2 (  struct Cell_663  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2109 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2108 {
    enum Unit_7  (*fun) (  struct env2107*  ,    struct Tuple2_2109  );
    struct env2107 env;
};

static  struct Zip_2106   into_dash_iter2111 (    struct Zip_2106  self911 ) {
    return (  self911 );
}

struct Maybe_2112 {
    enum {
        Maybe_2112_None_t,
        Maybe_2112_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2109  field0;
        } Maybe_2112_Just_s;
    } stuff;
};

static struct Maybe_2112 Maybe_2112_Just (  struct Tuple2_2109  field0 ) {
    return ( struct Maybe_2112 ) { .tag = Maybe_2112_Just_t, .stuff = { .Maybe_2112_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2112   next2113 (    struct Zip_2106 *  self914 ) {
    struct Zip_2106  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_703  dref916 = ( (  next2016 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_703_None_t ) {
            return ( (struct Maybe_2112) { .tag = Maybe_2112_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_703_Just_t ) {
                struct Maybe_272  dref918 = ( (  next273 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_272_None_t ) {
                    return ( (struct Maybe_2112) { .tag = Maybe_2112_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_272_Just_t ) {
                        ( (  next2016 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next273 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2112_Just ) ( ( ( Tuple2_2109_Tuple2 ) ( ( dref916 .stuff .Maybe_703_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_272_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each2105 (    struct Zip_2106  iterable1074 ,   struct envunion2108  fun1076 ) {
    struct Zip_2106  temp2110 = ( (  into_dash_iter2111 ) ( (  iterable1074 ) ) );
    struct Zip_2106 *  it1077 = ( &temp2110 );
    while ( ( true ) ) {
        struct Maybe_2112  dref1078 = ( (  next2113 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_2112_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_2112_Just_t ) {
                struct envunion2108  temp2114 = (  fun1076 );
                ( temp2114.fun ( &temp2114.env ,  ( dref1078 .stuff .Maybe_2112_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_2106   zip2115 (    struct Slice_662  left922 ,    struct FromIter_266  right924 ) {
    struct SliceIter_2008  left_dash_it925 = ( (  into_dash_iter2022 ) ( (  left922 ) ) );
    struct FromIter_266  right_dash_it926 = ( (  into_dash_iter278 ) ( (  right924 ) ) );
    return ( (struct Zip_2106) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   lam2116 (   struct env2107* env ,    struct Tuple2_2109  dref1854 ) {
    return ( (  set696 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size262 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_7   copy_dash_to2104 (    struct Slice_662  src1851 ,    struct Slice_662  dest1853 ) {
    if ( (  cmp184 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic453 ) ( ( ( StrConcat_454_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string220 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2107 envinst2107 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each2105 ) ( ( (  zip2115 ) ( (  src1851 ) ,  ( (  from279 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2108){ .fun = (  enum Unit_7  (*) (  struct env2107*  ,    struct Tuple2_2109  ) )lam2116 , .env =  envinst2107 } ) ) );
    return ( Unit_7_Unit );
}

static  uint32_t   render_dash_screen1985 (    struct Screen_661 *  screen3444 ) {
    int32_t  w3445 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3444 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3446 = ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen3444 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1986  temp1987 = ( (struct RenderState_1986) { .f_x = (  from_dash_integral216 ( 0 ) ) , .f_y = (  from_dash_integral216 ( 0 ) ) , .f_fg = ( (struct Color_664) { .tag = Color_664_ColorDefault_t } ) , .f_bg = ( (struct Color_664) { .tag = Color_664_ColorDefault_t } ) , .f_changes = (  from_dash_integral216 ( 0 ) ) } );
    struct RenderState_1986 *  rs3447 = ( &temp1987 );
    ( (  move_dash_cursor_dash_to1988 ) ( (  from_dash_integral216 ( 0 ) ) ,  (  from_dash_integral216 ( 0 ) ) ) );
    struct RangeIter_689  temp2003 =  into_dash_iter691 ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( (  h3446 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_272  __cond2004 =  next692 (&temp2003);
        if (  __cond2004 .tag == 0 ) {
            break;
        }
        int32_t  y3449 =  __cond2004 .stuff .Maybe_272_Just_s .field0;
        int32_t  x_dash_v3450 = (  from_dash_integral48 ( 0 ) );
        while ( (  cmp317 ( (  x_dash_v3450 ) , (  w3445 ) ) == 0 ) ) {
            size_t  i3451 = ( (  i32_dash_size262 ) ( (  op_dash_add274 ( (  op_dash_mul1378 ( (  y3449 ) , (  w3445 ) ) ) , (  x_dash_v3450 ) ) ) ) );
            struct Cell_663 *  cur3452 = ( (  get_dash_ptr697 ) ( ( ( * (  screen3444 ) ) .f_current ) ,  (  i3451 ) ) );
            int32_t  char_dash_width3453 = ( (  max964 ) ( ( ( * (  cur3452 ) ) .f_char_dash_width ) ,  (  from_dash_integral48 ( 1 ) ) ) );
            struct Slice_662  curs3454 = ( (  subslice2005 ) ( ( ( * (  screen3444 ) ) .f_current ) ,  (  i3451 ) ,  (  op_dash_add232 ( (  i3451 ) , ( (  i32_dash_size262 ) ( (  char_dash_width3453 ) ) ) ) ) ) );
            struct Slice_662  prevs3455 = ( (  subslice2005 ) ( ( ( * (  screen3444 ) ) .f_previous ) ,  (  i3451 ) ,  (  op_dash_add232 ( (  i3451 ) , ( (  i32_dash_size262 ) ( (  char_dash_width3453 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3444 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any2006 ) ( ( (  zip2021 ) ( (  curs3454 ) ,  (  prevs3455 ) ) ) ,  (  lam2023 ) ) ) ) ) {
                (*  rs3447 ) .f_changes = (  op_dash_add784 ( ( ( * (  rs3447 ) ) .f_changes ) , (  from_dash_integral216 ( 1 ) ) ) );
                ( (  emit_dash_cell2036 ) ( (  rs3447 ) ,  (  cur3452 ) ,  ( (  i32_dash_u322103 ) ( (  x_dash_v3450 ) ) ) ,  ( (  i32_dash_u322103 ) ( (  y3449 ) ) ) ) );
                ( (  copy_dash_to2104 ) ( (  curs3454 ) ,  (  prevs3455 ) ) );
            }
            x_dash_v3450 = (  op_dash_add274 ( (  x_dash_v3450 ) , (  char_dash_width3453 ) ) );
        }
    }
    (*  screen3444 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors610 ) ( ) );
    ( (  flush_dash_stdout613 ) ( ) );
    return ( ( * (  rs3447 ) ) .f_changes );
}

static  void *   cast_dash_ptr2123 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of2124 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed2121 (  ) {
    struct timespec *  temp2122;
    struct timespec *  x570 = (  temp2122 );
    ( ( memset ) ( ( (  cast_dash_ptr2123 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of2124 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct timespec *   null_dash_ptr2120 (  ) {
    return ( (  zeroed2121 ) ( ) );
}

static  enum Unit_7   sync2117 (    struct Tui_73 *  tui3315 ) {
    if ( (  eq407 ( ( ( * (  tui3315 ) ) .f_target_dash_fps ) , (  from_dash_integral216 ( 0 ) ) ) ) ) {
        return ( Unit_7_Unit );
    }
    int64_t  frame_dash_ns3316 = (  op_dash_div889 ( (  from_dash_integral303 ( 1000000000 ) ) , ( (  size_dash_i64261 ) ( ( (  u32_dash_size675 ) ( ( ( * (  tui3315 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2118 = ( (  undefined649 ) ( ) );
    struct timespec *  now3317 = ( &temp2118 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic651 ) ( ) ) ,  (  now3317 ) ) );
    int64_t  elapsed_dash_ns3318 = (  op_dash_add405 ( (  op_dash_mul230 ( (  op_dash_sub891 ( ( ( * (  now3317 ) ) .tv_sec ) , ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral303 ( 1000000000 ) ) ) ) , (  op_dash_sub891 ( ( ( * (  now3317 ) ) .tv_nsec ) , ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3319 = (  op_dash_sub891 ( (  frame_dash_ns3316 ) , (  elapsed_dash_ns3318 ) ) );
    if ( (  cmp909 ( (  sleep_dash_ns3319 ) , (  from_dash_integral303 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2119 = ( (struct timespec) { .tv_sec = (  from_dash_integral303 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3319 ) } );
        struct timespec *  ts3320 = ( &temp2119 );
        ( ( nanosleep ) ( (  ts3320 ) ,  ( (  null_dash_ptr2120 ) ( ) ) ) );
    }
    struct timespec  temp2125 = ( (  undefined649 ) ( ) );
    struct timespec *  last_dash_sync3321 = ( &temp2125 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic651 ) ( ) ) ,  (  last_dash_sync3321 ) ) );
    (*  tui3315 ) .f_last_dash_sync = ( * (  last_dash_sync3321 ) );
    (*  tui3315 ) .f_fps_dash_count = (  op_dash_add784 ( ( ( * (  tui3315 ) ) .f_fps_dash_count ) , (  from_dash_integral216 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3322 = (  op_dash_add405 ( (  op_dash_mul230 ( (  op_dash_sub891 ( ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3315 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral303 ( 1000 ) ) ) ) , (  op_dash_div889 ( (  op_dash_sub891 ( ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3315 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral303 ( 1000000 ) ) ) ) ) );
    if ( (  cmp909 ( (  fps_dash_elapsed_dash_ms3322 ) , (  from_dash_integral303 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3315 ) .f_actual_dash_fps = ( ( * (  tui3315 ) ) .f_fps_dash_count );
        (*  tui3315 ) .f_fps_dash_count = (  from_dash_integral216 ( 0 ) );
        (*  tui3315 ) .f_fps_dash_ts = ( ( * (  tui3315 ) ) .f_last_dash_sync );
    }
    return ( Unit_7_Unit );
}

static  void *   cast_dash_ptr2128 (    struct Cell_663 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free2127 (    enum CAllocator_9  dref1959 ,    struct Slice_662  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr2128 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_screen2126 (    struct Screen_661 *  screen3420 ) {
    enum CAllocator_9  al3421 = ( ( * (  screen3420 ) ) .f_al );
    ( (  free2127 ) ( (  al3421 ) ,  ( ( * (  screen3420 ) ) .f_current ) ) );
    ( (  free2127 ) ( (  al3421 ) ,  ( ( * (  screen3420 ) ) .f_previous ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   disable_dash_mouse2130 (  ) {
    ( (  print_dash_str195 ) ( ( (  from_dash_string220 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   show_dash_cursor2131 (  ) {
    ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   reset_dash_cursor_dash_position2132 (  ) {
    ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   disable_dash_raw_dash_mode2133 (    struct Termios_75 *  og_dash_termios3295 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno539 ) ( ) ) ,  ( (  tcsa_dash_flush599 ) ( ) ) ,  ( (  cast_dash_ptr540 ) ( (  og_dash_termios3295 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   deinit2129 (    struct Tui_73 *  tui3325 ) {
    ( (  disable_dash_mouse2130 ) ( ) );
    ( (  show_dash_cursor2131 ) ( ) );
    ( (  reset_dash_colors610 ) ( ) );
    ( (  clear_dash_screen611 ) ( ) );
    ( (  reset_dash_cursor_dash_position2132 ) ( ) );
    ( (  disable_dash_raw_dash_mode2133 ) ( ( & ( ( * (  tui3325 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout613 ) ( ) );
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
        .envinst40 = envinst40 ,
        .envinst81 = envinst81 ,
        .envinst32 = envinst32 ,
        .envinst33 = envinst33 ,
        .envinst5 = envinst5 ,
    };
    struct env94 envinst94 = {
        .envinst85 = envinst85 ,
    };
    struct env96 envinst96 = {
        .envinst85 = envinst85 ,
    };
    struct env98 envinst98 = {
        .envinst94 = envinst94 ,
    };
    struct env100 envinst100 = {
        .envinst96 = envinst96 ,
    };
    struct env102 envinst102 = {
        .envinst40 = envinst40 ,
    };
    struct env104 envinst104 = {
        .envinst96 = envinst96 ,
        .envinst15 = envinst15 ,
        .envinst22 = envinst22 ,
        .envinst102 = envinst102 ,
    };
    struct env109 envinst109 = {
        .envinst22 = envinst22 ,
    };
    struct env111 envinst111 = {
        .envinst104 = envinst104 ,
    };
    struct env114 envinst114 = {
        .envinst104 = envinst104 ,
    };
    struct env116 envinst116 = {
        .envinst98 = envinst98 ,
    };
    struct env118 envinst118 = {
        .envinst100 = envinst100 ,
    };
    struct env120 envinst120 = {
        .envinst104 = envinst104 ,
    };
    struct env122 envinst122 = {
        .envinst109 = envinst109 ,
        .envinst104 = envinst104 ,
    };
    struct env125 envinst125 = {
        .envinst109 = envinst109 ,
        .envinst104 = envinst104 ,
    };
    struct env128 envinst128 = {
        .envinst102 = envinst102 ,
    };
    struct env130 envinst130 = {
        .envinst61 = envinst61 ,
    };
    struct env132 envinst132 = {
        .envinst66 = envinst66 ,
    };
    struct env134 envinst134 = {
        .envinst132 = envinst132 ,
    };
    struct env142 envinst142 = {
        .envinst130 = envinst130 ,
        .envinst118 = envinst118 ,
        .envinst122 = envinst122 ,
        .envinst125 = envinst125 ,
        .envinst128 = envinst128 ,
        .envinst120 = envinst120 ,
        .envinst116 = envinst116 ,
    };
    struct env151 envinst151 = {
        .envinst142 = envinst142 ,
        .envinst111 = envinst111 ,
        .envinst114 = envinst114 ,
        .envinst59 = envinst59 ,
        .envinst134 = envinst134 ,
        .envinst52 = envinst52 ,
    };
    enum CAllocator_9  al4264 = ( (  idc159 ) ( ) );
    struct envunion162  temp161 = ( (struct envunion162){ .fun = (  struct TextBuf_88  (*) (  struct env79*  ,    enum CAllocator_9  ,    struct Pos_20  ) )mk163 , .env =  envinst79 } );
    struct TextBuf_88  temp160 = ( temp161.fun ( &temp161.env ,  (  al4264 ) ,  ( (  mk298 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) ) );
    struct TextBuf_88 *  tb4265 = ( &temp160 );
    struct Slice_299  args4268 = ( (  get300 ) ( ) );
    if ( (  cmp184 ( ( (  args4268 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        const char*  fname4269 = (  elem_dash_get305 ( (  args4268 ) , (  from_dash_integral0 ( 0 ) ) ) );
        struct envunion313  temp312 = ( (struct envunion313){ .fun = (  enum Unit_7  (*) (  struct env85*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action314 , .env =  envinst85 } );
        ( temp312.fun ( &temp312.env ,  (  tb4265 ) ,  ( (  mk298 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) ,  ( (  mk298 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) ,  ( (  read_dash_contents504 ) ( (  fname4269 ) ,  (  al4264 ) ) ) ) );
    }
    struct Editor_136  temp529 = ( (struct Editor_136) { .f_running = ( true ) , .f_al = (  al4264 ) , .f_pane = ( (  mk530 ) ( (  al4264 ) ,  (  tb4265 ) ) ) , .f_clipboard = ( (struct Maybe_140) { .tag = Maybe_140_None_t } ) , .f_search_dash_term = ( (struct Maybe_140) { .tag = Maybe_140_None_t } ) , .f_mode = ( (struct EditorMode_141) { .tag = EditorMode_141_Normal_t } ) , .f_msg = ( (struct Maybe_140) { .tag = Maybe_140_None_t } ) } );
    struct Editor_136 *  ed4270 = ( &temp529 );
    struct envunion533  temp532 = ( (struct envunion533){ .fun = (  struct Tui_73  (*) (  struct env69*  ) )mk534 , .env =  envinst69 } );
    struct Tui_73  temp531 = ( temp532.fun ( &temp532.env ) );
    struct Tui_73 *  tui4271 = ( &temp531 );
    struct Screen_661  temp668 = ( (  mk_dash_screen669 ) ( (  tui4271 ) ,  (  al4264 ) ) );
    struct Screen_661 *  screen4272 = ( &temp668 );
    uint32_t  last_dash_redraw_dash_changes4273 = (  from_dash_integral216 ( 0 ) );
    while ( ( ( * (  ed4270 ) ) .f_running ) ) {
        struct env719 envinst719 = {
            .envinst71 = envinst71 ,
            .tui4271 =  tui4271 ,
        };
        struct FunIter_718  temp717 =  into_dash_iter726 ( ( (  from_dash_function727 ) ( ( (struct envunion725){ .fun = (  struct Maybe_721  (*) (  struct env719*  ) )lam728 , .env =  envinst719 } ) ) ) );
        while (true) {
            struct Maybe_721  __cond929 =  next930 (&temp717);
            if (  __cond929 .tag == 0 ) {
                break;
            }
            struct InputEvent_722  ev4275 =  __cond929 .stuff .Maybe_721_Just_s .field0;
            struct InputEvent_722  dref4276 = (  ev4275 );
            if ( dref4276.tag == InputEvent_722_Key_t ) {
                ( (  reset_dash_msg932 ) ( (  ed4270 ) ) );
                struct envunion940  temp939 = ( (struct envunion940){ .fun = (  enum Unit_7  (*) (  struct env151*  ,    struct Editor_136 *  ,    struct Key_153  ) )handle_dash_key941 , .env =  envinst151 } );
                ( temp939.fun ( &temp939.env ,  (  ed4270 ) ,  ( dref4276 .stuff .InputEvent_722_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1542  temp1541 = ( (struct envunion1542){ .fun = (  bool  (*) (  struct env77*  ,    struct Screen_661 *  ) )resize_dash_screen_dash_if_dash_needed1543 , .env =  envinst77 } );
        ( temp1541.fun ( &temp1541.env ,  (  screen4272 ) ) );
        if ( ( (  should_dash_redraw1545 ) ( (  tui4271 ) ) ) ) {
            (*  screen4272 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1546 ) ( (  screen4272 ) ) );
            ( (  set_dash_screen_dash_fg1555 ) ( (  screen4272 ) ,  ( (struct Color_664) { .tag = Color_664_ColorDefault_t } ) ) );
            ( (  set_dash_screen_dash_bg1556 ) ( (  screen4272 ) ,  ( (struct Color_664) { .tag = Color_664_ColorDefault_t } ) ) );
            ( (  render_dash_editor1557 ) ( (  screen4272 ) ,  (  ed4270 ) ) );
            ( (  draw_dash_str1956 ) ( (  screen4272 ) ,  ( ( StrConcat_1957_StrConcat ) ( ( ( StrConcat_1958_StrConcat ) ( ( (  from_dash_string220 ) ( ( "REDRAWS[" ) ,  ( 8 ) ) ) ,  (  last_dash_redraw_dash_changes4273 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "]" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( ( (  u32_dash_i321559 ) ( ( ( * ( ( * (  screen4272 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
            last_dash_redraw_dash_changes4273 = ( (  render_dash_screen1985 ) ( (  screen4272 ) ) );
        }
        ( (  sync2117 ) ( (  tui4271 ) ) );
    }
    ( (  free_dash_screen2126 ) ( (  screen4272 ) ) );
    ( (  deinit2129 ) ( (  tui4271 ) ) );
}
