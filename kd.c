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

struct envunion63 {
    enum Unit_7  (*fun) (  struct env55*  ,    struct StrBuilder_54 *  ,    struct StrView_21  );
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
    ;
    struct env55 envinst55;
    ;
    ;
    ;
};

struct StrConcat_67 {
    struct StrView_21  field0;
    size_t  field1;
};

static struct StrConcat_67 StrConcat_67_StrConcat (  struct StrView_21  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_67 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_66 {
    struct StrConcat_67  field0;
    struct StrView_21  field1;
};

static struct StrConcat_66 StrConcat_66_StrConcat (  struct StrConcat_67  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_66 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion65 {
    enum Unit_7  (*fun) (  struct env58*  ,    struct StrBuilder_54 *  ,    struct StrConcat_66  );
    struct env58 env;
};

struct env64 {
    ;
    ;
    struct env52 envinst52;
    ;
    ;
    ;
    ;
    struct env58 envinst58;
    ;
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
    struct StrView_21  (*fun) (  struct env61*  ,    struct StrView_21  ,    enum CAllocator_9  );
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
    struct StrView_21  (*fun) (  struct env64*  ,    struct StrConcat_66  ,    enum CAllocator_9  );
    struct env64 env;
};

struct env132 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env64 envinst64;
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
    enum Unit_7  (*fun) (  struct env130*  ,    struct Editor_136 *  ,    struct StrView_21  );
    struct env130 env;
};

struct env134 {
    ;
    ;
    ;
    ;
    ;
    struct env130 envinst130;
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
    enum Unit_7  (*fun) (  struct env132*  ,    struct Editor_136 *  ,    struct StrConcat_66  );
    struct env132 env;
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
    ;
    ;
    ;
    ;
    struct env132 envinst132;
    ;
    ;
    struct env118 envinst118;
    ;
    ;
    ;
    ;
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
    struct env125 envinst125;
    ;
    ;
    ;
    struct env128 envinst128;
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
    struct env116 envinst116;
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
    enum Unit_7  (*fun) (  struct env59*  ,    struct StrBuilder_54 *  );
    struct env59 env;
};

struct envunion156 {
    enum Unit_7  (*fun) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  );
    struct env52 env;
};

struct envunion157 {
    enum Unit_7  (*fun) (  struct env134*  ,    struct Editor_136 *  ,    struct StrView_21  );
    struct env134 env;
};

struct envunion158 {
    enum Unit_7  (*fun) (  struct env114*  ,    struct Pane_137 *  );
    struct env114 env;
};

struct env151 {
    ;
    ;
    struct env142 envinst142;
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
    ;
    ;
    ;
    ;
    ;
    struct env59 envinst59;
    ;
    ;
    struct env52 envinst52;
    struct env134 envinst134;
    ;
    ;
    ;
    ;
    struct env114 envinst114;
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
    struct StrConcat_66  field0;
    int32_t  field1;
};

static struct StrConcat_190 StrConcat_190_StrConcat (  struct StrConcat_66  field0 ,  int32_t  field1 ) {
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

static  enum Unit_7   print_dash_str200 (    struct StrConcat_67  self1503 ) {
    struct StrConcat_67  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str195 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str201 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str199 (    struct StrConcat_66  self1503 ) {
    struct StrConcat_66  dref1504 = (  self1503 );
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
        ( (  panic188 ) ( ( ( StrConcat_189_StrConcat ) ( ( ( StrConcat_190_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
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
    struct StrConcat_66  field0;
    size_t  field1;
};

static struct StrConcat_254 StrConcat_254_StrConcat (  struct StrConcat_66  field0 ,  size_t  field1 ) {
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
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
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
    return ( (  or_dash_fail307 ) ( ( (  try_dash_get311 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
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
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2003 ) ) ) ,  ( (  from_dash_string220 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2001 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
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
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2023 ) ) ) ,  ( (  from_dash_string220 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2021 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
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
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
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
    return ( (  or_dash_fail380 ) ( ( (  try_dash_get383 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
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
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2056 ) ) ) ,  ( (  from_dash_string220 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2054 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
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
    struct StrConcat_67  field0;
    struct Char_57  field1;
};

static struct StrConcat_431 StrConcat_431_StrConcat (  struct StrConcat_67  field0 ,  struct Char_57  field1 ) {
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
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2023 ) ) ) ,  ( (  from_dash_string220 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2021 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
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
        ( (  panic453 ) ( ( ( StrConcat_454_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env461 envinst461 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each460 ) ( ( (  zip371 ) ( (  src1851 ) ,  ( (  from279 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  ( (struct envunion462){ .fun = (  enum Unit_7  (*) (  struct env461*  ,    struct Tuple2_360  ) )lam465 , .env =  envinst461 } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   remove_dash_range427 (   struct env32* env ,    struct List_11 *  list2062 ,    size_t  from2064 ,    size_t  to_dash_excl2066 ) {
    if ( (  cmp184 ( (  to_dash_excl2066 ) , (  from2064 ) ) == 0 ) ) {
        ( (  panic428 ) ( ( ( StrConcat_429_StrConcat ) ( ( ( StrConcat_430_StrConcat ) ( ( ( StrConcat_431_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp184 ( (  from2064 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_string220 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp184 ( (  to_dash_excl2066 ) , ( ( * (  list2062 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_string220 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
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
        ( (  panic453 ) ( ( ( StrConcat_454_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env499 envinst499 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each498 ) ( ( (  zip276 ) ( (  src1851 ) ,  ( (  from279 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  ( (struct envunion500){ .fun = (  enum Unit_7  (*) (  struct env499*  ,    struct Tuple2_248  ) )lam503 , .env =  envinst499 } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   remove_dash_range483 (   struct env33* env ,    struct List_8 *  list2062 ,    size_t  from2064 ,    size_t  to_dash_excl2066 ) {
    if ( (  cmp184 ( (  to_dash_excl2066 ) , (  from2064 ) ) == 0 ) ) {
        ( (  panic428 ) ( ( ( StrConcat_429_StrConcat ) ( ( ( StrConcat_430_StrConcat ) ( ( ( StrConcat_431_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp184 ( (  from2064 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_string220 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp184 ( (  to_dash_excl2066 ) , ( ( * (  list2062 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_string220 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
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
        ( (  panic188 ) ( ( ( StrConcat_189_StrConcat ) ( ( ( StrConcat_190_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
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
        ( (  panic188 ) ( ( ( StrConcat_189_StrConcat ) ( ( ( StrConcat_190_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
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
        ( (  panic188 ) ( ( ( StrConcat_189_StrConcat ) ( ( ( StrConcat_190_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
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
        ( (  panic188 ) ( ( ( StrConcat_189_StrConcat ) ( ( ( StrConcat_190_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
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
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
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
    return ( (  or_dash_fail702 ) ( ( (  try_dash_get706 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
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
    struct Tui_73 *  tui4251;
    struct env71 envinst71;
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
        ( (  panic188 ) ( ( ( StrConcat_189_StrConcat ) ( ( ( StrConcat_190_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
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
    return ( (  or_dash_fail805 ) ( ( (  try_dash_get806 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
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
    return ( temp729.fun ( &temp729.env ,  ( env->tui4251 ) ) );
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
    struct Editor_136 *  ed4139;
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

static  enum Unit_7   lam937 (   struct env934* env ,    struct StrView_21  msg4141 ) {
    ( (  free938 ) ( (  msg4141 ) ,  ( ( * ( env->ed4139 ) ) .f_al ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   reset_dash_msg932 (    struct Editor_136 *  ed4139 ) {
    struct env934 envinst934 = {
        .ed4139 =  ed4139 ,
    };
    ( (  if_dash_just933 ) ( ( ( * (  ed4139 ) ) .f_msg ) ,  ( (struct envunion935){ .fun = (  enum Unit_7  (*) (  struct env934*  ,    struct StrView_21  ) )lam937 , .env =  envinst934 } ) ) );
    (*  ed4139 ) .f_msg = ( (struct Maybe_140) { .tag = Maybe_140_None_t } );
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

static  struct Pane_137 *   pane988 (    struct Editor_136 *  ed4129 ) {
    return ( & ( ( * (  ed4129 ) ) .f_pane ) );
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

enum MoveDirection_1000 {
    MoveDirection_1000_MoveFwd,
    MoveDirection_1000_MoveBwd,
};

enum MoveTarget_1001 {
    MoveTarget_1001_NextWordStart,
    MoveTarget_1001_NextWordEnd,
};

static  struct Pos_20   own1003 (    struct Pos_20  x1251 ) {
    return (  x1251 );
}

struct env1004 {
    struct Pane_137 *  pane3993;
    ;
    enum MoveDirection_1000  dir3995;
    ;
    struct Pos_20 *  prev3998;
};

static  bool   is_dash_at_dash_line_dash_end1006 (    struct Pane_137 *  pane3975 ,    struct Pos_20  pos3977 ) {
    return (  eq239 ( ( (  i32_dash_size262 ) ( ( (  pos3977 ) .f_bi ) ) ) , ( (  num_dash_bytes984 ) ( ( (  line951 ) ( ( ( * (  pane3975 ) ) .f_buf ) ,  ( (  pos3977 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1005 (    struct Pane_137 *  pane3980 ) {
    return ( (  is_dash_at_dash_line_dash_end1006 ) ( (  pane3980 ) ,  ( ( * (  pane3980 ) ) .f_cursor ) ) );
}

struct envunion1008 {
    enum Unit_7  (*fun) (  struct env1004*  );
    struct env1004 env;
};

static  enum Unit_7   advance1009 (   struct env1004* env ) {
    (* env->prev3998 ) = ( ( * ( env->pane3993 ) ) .f_cursor );
    enum MoveDirection_1000  dref4000 = ( env->dir3995 );
    switch (  dref4000 ) {
        case MoveDirection_1000_MoveFwd : {
            ( (  move_dash_right989 ) ( ( env->pane3993 ) ) );
            break;
        }
        case MoveDirection_1000_MoveBwd : {
            ( (  move_dash_left944 ) ( ( env->pane3993 ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

enum CharType_1013 {
    CharType_1013_CharSpace,
    CharType_1013_CharWord,
    CharType_1013_CharPunctuation,
};

struct Tuple2_1014 {
    enum CharType_1013  field0;
    enum CharType_1013  field1;
};

static struct Tuple2_1014 Tuple2_1014_Tuple2 (  enum CharType_1013  field0 ,  enum CharType_1013  field1 ) {
    return ( struct Tuple2_1014 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1012 (    enum CharType_1013  l3799 ,    enum CharType_1013  r3801 ) {
    struct Tuple2_1014  dref3802 = ( ( Tuple2_1014_Tuple2 ) ( (  l3799 ) ,  (  r3801 ) ) );
    if (  dref3802 .field0 == CharType_1013_CharSpace &&  dref3802 .field1 == CharType_1013_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3802 .field0 == CharType_1013_CharWord &&  dref3802 .field1 == CharType_1013_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3802 .field0 == CharType_1013_CharPunctuation &&  dref3802 .field1 == CharType_1013_CharPunctuation ) {
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

static  struct Char_57   min1019 (    struct Char_57  l1236 ,    struct Char_57  r1238 ) {
    if ( (  cmp779 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Char_57   max1020 (    struct Char_57  l1315 ,    struct Char_57  r1317 ) {
    if ( (  cmp779 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  bool   between1018 (    struct Char_57  c1337 ,    struct Char_57  l1339 ,    struct Char_57  r1341 ) {
    struct Char_57  from1342 = ( (  min1019 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Char_57  to1343 = ( (  max1020 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp779 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp779 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_alpha1017 (    struct Char_57  c2388 ) {
    return ( ( (  cmp184 ( ( (  c2388 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between1018 ) ( (  c2388 ) ,  ( (  from_dash_charlike221 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1018 ) ( (  c2388 ) ,  ( (  from_dash_charlike221 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_digit1021 (    struct Char_57  c2391 ) {
    return ( (  eq239 ( ( (  c2391 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1018 ) ( (  c2391 ) ,  ( (  from_dash_charlike221 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1016 (    struct Char_57  c2394 ) {
    return ( ( (  is_dash_alpha1017 ) ( (  c2394 ) ) ) || ( (  is_dash_digit1021 ) ( (  c2394 ) ) ) );
}

static  bool   is_dash_whitespace1022 (    struct Char_57  c2379 ) {
    return ( ( (  eq403 ( (  c2379 ) , ( (  from_dash_charlike221 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq403 ( (  c2379 ) , ( (  from_dash_charlike221 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq403 ( (  c2379 ) , ( (  from_dash_charlike221 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_1013   char_dash_type1015 (    struct Char_57  c3805 ) {
    if ( ( ( ( (  is_dash_alphanumeric1016 ) ( (  c3805 ) ) ) || (  eq403 ( (  c3805 ) , ( (  from_dash_charlike221 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq403 ( (  c3805 ) , ( (  from_dash_charlike221 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1013_CharWord );
    } else {
        if ( ( (  is_dash_whitespace1022 ) ( (  c3805 ) ) ) ) {
            return ( CharType_1013_CharSpace );
        } else {
            return ( CharType_1013_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1011 (    struct Char_57  l3808 ,    struct Char_57  r3810 ) {
    return ( !  eq1012 ( ( (  char_dash_type1015 ) ( (  l3808 ) ) ) , ( (  char_dash_type1015 ) ( (  r3810 ) ) ) ) );
}

static  struct Char_57   or_dash_else1024 (    struct Maybe_606  self1732 ,    struct Char_57  alt1734 ) {
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

static  struct Maybe_606   head1025 (    struct StrViewIter_603  it1142 ) {
    struct StrViewIter_603  temp1026 = ( (  into_dash_iter605 ) ( (  it1142 ) ) );
    return ( (  next607 ) ( ( &temp1026 ) ) );
}

static  struct Char_57   char_dash_at1023 (    struct Pane_137 *  pane3863 ,    struct Pos_20  pos3865 ) {
    struct StrView_21  line3866 = ( (  line951 ) ( ( ( * (  pane3863 ) ) .f_buf ) ,  ( (  pos3865 ) .f_line ) ) );
    return ( (  or_dash_else1024 ) ( ( (  head1025 ) ( ( (  chars608 ) ( ( (  byte_dash_substr385 ) ( (  line3866 ) ,  ( (  i32_dash_size262 ) ( ( (  pos3865 ) .f_bi ) ) ) ,  ( (  num_dash_bytes984 ) ( (  line3866 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
}

static  enum Unit_7   print1028 (    struct StrView_21  s1701 ) {
    ( (  for_dash_each602 ) ( ( (  chars608 ) ( (  s1701 ) ) ) ,  (  printf_dash_char204 ) ) );
    return ( Unit_7_Unit );
}

static  bool   undefined1029 (  ) {
    bool  temp1030;
    return (  temp1030 );
}

static  bool   todo1027 (  ) {
    ( (  print1028 ) ( ( (  from_dash_string220 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined1029 ) ( ) );
}

static  bool   reached_dash_target1010 (    struct Pane_137 *  pane3985 ,    enum MoveTarget_1001  target3987 ,    struct Pos_20  prev3989 ) {
    return ( {  enum MoveTarget_1001  dref3990 = (  target3987 ) ;  dref3990 == MoveTarget_1001_NextWordStart ? ( ( (  is_dash_word_dash_boundary1011 ) ( ( (  char_dash_at1023 ) ( (  pane3985 ) ,  (  prev3989 ) ) ) ,  ( (  char_dash_at1023 ) ( (  pane3985 ) ,  ( ( * (  pane3985 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1012 ( ( (  char_dash_type1015 ) ( ( (  char_dash_at1023 ) ( (  pane3985 ) ,  ( ( * (  pane3985 ) ) .f_cursor ) ) ) ) ) , ( CharType_1013_CharSpace ) ) ) ) ) :  dref3990 == MoveTarget_1001_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1011 ) ( ( (  char_dash_at1023 ) ( (  pane3985 ) ,  (  prev3989 ) ) ) ,  ( (  char_dash_at1023 ) ( (  pane3985 ) ,  ( ( * (  pane3985 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1012 ( ( (  char_dash_type1015 ) ( ( (  char_dash_at1023 ) ( (  pane3985 ) ,  (  prev3989 ) ) ) ) ) , ( CharType_1013_CharSpace ) ) ) ) ) : ( (  todo1027 ) ( ) ) ; } );
}

struct envunion1032 {
    enum Unit_7  (*fun) (  struct env1004*  );
    struct env1004 env;
};

struct envunion1034 {
    enum Unit_7  (*fun) (  struct env1004*  );
    struct env1004 env;
};

static  enum Unit_7   advance_dash_word999 (    struct Pane_137 *  pane3993 ,    enum MoveDirection_1000  dir3995 ,    enum MoveTarget_1001  target3997 ) {
    struct Pos_20  temp1002 = ( (  own1003 ) ( ( ( * (  pane3993 ) ) .f_cursor ) ) );
    struct Pos_20 *  prev3998 = ( &temp1002 );
    struct env1004 envinst1004 = {
        .pane3993 =  pane3993 ,
        .dir3995 =  dir3995 ,
        .prev3998 =  prev3998 ,
    };
    struct Pos_20  sel4001 = ( ( * (  pane3993 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4002 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1005 ) ( (  pane3993 ) ) );
    struct envunion1008  temp1007 = ( (struct envunion1008){ .fun = (  enum Unit_7  (*) (  struct env1004*  ) )advance1009 , .env =  envinst1004 } );
    ( temp1007.fun ( &temp1007.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4002 ) || ( (  reached_dash_target1010 ) ( (  pane3993 ) ,  (  target3997 ) ,  ( * (  prev3998 ) ) ) ) ) ) {
        sel4001 = ( ( * (  pane3993 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1005 ) ( (  pane3993 ) ) ) ) {
        if ( (  eq319 ( ( ( * (  pane3993 ) ) .f_cursor ) , ( * (  prev3998 ) ) ) ) ) {
            return ( Unit_7_Unit );
        }
        struct envunion1032  temp1031 = ( (struct envunion1032){ .fun = (  enum Unit_7  (*) (  struct env1004*  ) )advance1009 , .env =  envinst1004 } );
        ( temp1031.fun ( &temp1031.env ) );
        sel4001 = ( ( * (  pane3993 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1034  temp1033 = ( (struct envunion1034){ .fun = (  enum Unit_7  (*) (  struct env1004*  ) )advance1009 , .env =  envinst1004 } );
        ( temp1033.fun ( &temp1033.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1005 ) ( (  pane3993 ) ) ) || ( (  reached_dash_target1010 ) ( (  pane3993 ) ,  (  target3997 ) ,  ( * (  prev3998 ) ) ) ) ) ) {
            enum MoveDirection_1000  dref4003 = (  dir3995 );
            switch (  dref4003 ) {
                case MoveDirection_1000_MoveFwd : {
                    ( (  move_dash_left944 ) ( (  pane3993 ) ) );
                    break;
                }
                case MoveDirection_1000_MoveBwd : {
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

static  size_t   size1039 (    struct List_24 *  l2133 ) {
    return ( ( * (  l2133 ) ) .f_count );
}

static  struct Changeset_26 *   offset_dash_ptr1044 (    struct Changeset_26 *  x338 ,    int64_t  count340 ) {
    struct Changeset_26  temp1045;
    return ( (struct Changeset_26 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul230 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1045 ) ) ) ) ) ) ) ) );
}

static  struct Changeset_26 *   get_dash_ptr1043 (    struct Slice_25  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp184 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_26 *  elem_dash_ptr1760 = ( (  offset_dash_ptr1044 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  struct Changeset_26 *   get_dash_ptr1042 (    struct List_24 *  list2001 ,    size_t  i2003 ) {
    if ( ( (  cmp184 ( (  i2003 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i2003 ) , ( ( * (  list2001 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2003 ) ) ) ,  ( (  from_dash_string220 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2001 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1043 ) ( ( ( * (  list2001 ) ) .f_elements ) ,  (  i2003 ) ) );
}

static  struct Changeset_26   get1041 (    struct List_24 *  list2011 ,    size_t  i2013 ) {
    return ( * ( (  get_dash_ptr1042 ) ( (  list2011 ) ,  (  i2013 ) ) ) );
}

static  struct Changeset_26   elem_dash_get1040 (    struct List_24  self2081 ,    size_t  k2083 ) {
    return ( (  get1041 ) ( ( & (  self2081 ) ) ,  (  k2083 ) ) );
}

struct SliceIter_1048 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1048   into_dash_iter1050 (    struct Slice_18  self1822 ) {
    return ( (struct SliceIter_1048) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_19 *   offset_dash_ptr1052 (    struct Action_19 *  x338 ,    int64_t  count340 ) {
    struct Action_19  temp1053;
    return ( (struct Action_19 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul230 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1053 ) ) ) ) ) ) ) ) );
}

static  struct Slice_18   subslice1051 (    struct Slice_18  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Action_19 *  begin_dash_ptr1787 = ( (  offset_dash_ptr1052 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp184 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp184 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub304 ( ( (  min331 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_1048   into_dash_iter1049 (    struct List_17  self2028 ) {
    return ( (  into_dash_iter1050 ) ( ( (  subslice1051 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

struct Maybe_1055 {
    enum {
        Maybe_1055_None_t,
        Maybe_1055_Just_t,
    } tag;
    union {
        struct {
            struct Action_19  field0;
        } Maybe_1055_Just_s;
    } stuff;
};

static struct Maybe_1055 Maybe_1055_Just (  struct Action_19  field0 ) {
    return ( struct Maybe_1055 ) { .tag = Maybe_1055_Just_t, .stuff = { .Maybe_1055_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1055   next1056 (    struct SliceIter_1048 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp184 ( (  op_dash_add232 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1055) { .tag = Maybe_1055_None_t } );
    }
    struct Action_19  elem1830 = ( * ( (  offset_dash_ptr1052 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add232 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1055_Just ) ( (  elem1830 ) ) );
}

static  struct Pos_20   action_dash_fwd1058 (   struct env96* env ,    struct TextBuf_88 *  self3698 ,    struct Action_19  action3700 ) {
    struct envunion97  temp1059 = ( (struct envunion97){ .fun = (  enum Unit_7  (*) (  struct env85*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action314 , .env =  env->envinst85 } );
    ( temp1059.fun ( &temp1059.env ,  (  self3698 ) ,  ( (  action3700 ) .f_from ) ,  ( (  action3700 ) .f_to_dash_bwd ) ,  ( (  action3700 ) .f_fwd ) ) );
    return ( (  action3700 ) .f_to_dash_fwd );
}

static  enum Unit_7   panic1061 (    struct StrView_21  errmsg1712 ) {
    ( (  print_dash_str478 ) ( ( ( StrConcat_479_StrConcat ) ( ( ( StrConcat_480_StrConcat ) ( ( (  from_dash_string220 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Action_19   undefined1065 (  ) {
    struct Action_19  temp1066;
    return (  temp1066 );
}

static  struct Action_19   or_dash_fail1064 (    struct Maybe_1055  x1725 ,    struct StrConcat_253  errmsg1727 ) {
    struct Maybe_1055  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_1055_None_t ) {
        ( (  panic252 ) ( (  errmsg1727 ) ) );
        return ( (  undefined1065 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_1055_Just_t ) {
            return ( dref1728 .stuff .Maybe_1055_Just_s .field0 );
        }
    }
}

static  struct Maybe_1055   try_dash_get1067 (    struct Slice_18  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp184 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1055) { .tag = Maybe_1055_None_t } );
    }
    struct Action_19 *  elem_dash_ptr1766 = ( (  offset_dash_ptr1052 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_1055_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  struct Action_19   get1063 (    struct Slice_18  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail1064 ) ( ( (  try_dash_get1067 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_19   elem_dash_get1062 (    struct Slice_18  self1867 ,    size_t  idx1869 ) {
    return ( (  get1063 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

static  struct Action_19   last1060 (    struct Slice_18  s1935 ) {
    if ( (  eq239 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1061 ) ( ( (  from_dash_string220 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1062 ( (  s1935 ) , (  op_dash_sub304 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_18   to_dash_slice1068 (    struct List_17  l2126 ) {
    struct Action_19 *  ptr2127 = ( ( (  l2126 ) .f_elements ) .f_ptr );
    return ( (struct Slice_18) { .f_ptr = (  ptr2127 ) , .f_count = ( (  l2126 ) .f_count ) } );
}

static  struct Maybe_113   redo1038 (   struct env100* env ,    struct TextBuf_88 *  self3725 ) {
    ( (  flush_dash_insert_dash_action998 ) ( (  self3725 ) ) );
    struct Actions_89 *  actions3726 = ( & ( ( * (  self3725 ) ) .f_actions ) );
    if ( (  cmp184 ( ( ( * (  actions3726 ) ) .f_cur ) , ( (  size1039 ) ( ( & ( ( * (  actions3726 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_113) { .tag = Maybe_113_None_t } );
    }
    struct Changeset_26  changeset3727 = (  elem_dash_get1040 ( ( ( * (  actions3726 ) ) .f_list ) , ( ( * (  actions3726 ) ) .f_cur ) ) );
    struct Pos_20  temp1046;
    struct Pos_20  to_dash_fwd3728 = (  temp1046 );
    struct SliceIter_1048  temp1047 =  into_dash_iter1049 ( ( (  changeset3727 ) .f_parts ) );
    while (true) {
        struct Maybe_1055  __cond1054 =  next1056 (&temp1047);
        if (  __cond1054 .tag == 0 ) {
            break;
        }
        struct Action_19  action3730 =  __cond1054 .stuff .Maybe_1055_Just_s .field0;
        struct envunion101  temp1057 = ( (struct envunion101){ .fun = (  struct Pos_20  (*) (  struct env96*  ,    struct TextBuf_88 *  ,    struct Action_19  ) )action_dash_fwd1058 , .env =  env->envinst96 } );
        to_dash_fwd3728 = ( temp1057.fun ( &temp1057.env ,  (  self3725 ) ,  (  action3730 ) ) );
    }
    (*  actions3726 ) .f_cur = (  op_dash_add232 ( ( ( * (  actions3726 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_19  last_dash_action3731 = ( (  last1060 ) ( ( (  to_dash_slice1068 ) ( ( (  changeset3727 ) .f_parts ) ) ) ) );
    if ( (  cmp184 ( ( (  num_dash_bytes984 ) ( ( (  last_dash_action3731 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_20  to_dash_fwd3732 = ( (  left_dash_pos983 ) ( (  self3725 ) ,  (  to_dash_fwd3728 ) ) );
        return ( ( Maybe_113_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3732 ) , .f_sel = ( ( Maybe_28_Just ) ( ( (  last_dash_action3731 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_113_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3728 ) , .f_sel = ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) } ) ) );
    }
}

struct env1070 {
    ;
    struct Pane_137 *  self4039;
};

struct envunion1071 {
    enum Unit_7  (*fun) (  struct env1070*  ,    struct Cursors_27  );
    struct env1070 env;
};

static  enum Unit_7   if_dash_just1069 (    struct Maybe_113  x1291 ,   struct envunion1071  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion1071  temp1072 = (  fun1293 );
        ( temp1072.fun ( &temp1072.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1073 (   struct env1070* env ,    struct Cursors_27  cursors4042 ) {
    ( (  set_dash_cursors945 ) ( ( env->self4039 ) ,  ( (  cursors4042 ) .f_cur ) ,  ( (  cursors4042 ) .f_sel ) ,  ( CursorMovement_946_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   redo1036 (   struct env118* env ,    struct Pane_137 *  self4039 ) {
    struct envunion119  temp1037 = ( (struct envunion119){ .fun = (  struct Maybe_113  (*) (  struct env100*  ,    struct TextBuf_88 *  ) )redo1038 , .env =  env->envinst100 } );
    struct Maybe_113  mcursors4040 = ( temp1037.fun ( &temp1037.env ,  ( ( * (  self4039 ) ) .f_buf ) ) );
    struct env1070 envinst1070 = {
        .self4039 =  self4039 ,
    };
    ( (  if_dash_just1069 ) ( (  mcursors4040 ) ,  ( (struct envunion1071){ .fun = (  enum Unit_7  (*) (  struct env1070*  ,    struct Cursors_27  ) )lam1073 , .env =  envinst1070 } ) ) );
    return ( Unit_7_Unit );
}

struct SliceReversedIter_1079 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1079   into_dash_iter1080 (    struct SliceReversedIter_1079  self1898 ) {
    return (  self1898 );
}

static  struct SliceReversedIter_1079   reversed1081 (    struct Slice_18  slice1895 ) {
    return ( (struct SliceReversedIter_1079) { .f_slice = (  slice1895 ) , .f_current_dash_offset = ( (  slice1895 ) .f_count ) } );
}

static  struct Maybe_1055   next1083 (    struct SliceReversedIter_1079 *  self1901 ) {
    size_t  off1902 = ( ( * (  self1901 ) ) .f_current_dash_offset );
    if ( (  eq239 ( (  off1902 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1055) { .tag = Maybe_1055_None_t } );
    }
    (*  self1901 ) .f_current_dash_offset = (  op_dash_sub304 ( (  off1902 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1055_Just ) ( (  elem_dash_get1062 ( ( ( * (  self1901 ) ) .f_slice ) , ( ( * (  self1901 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_20   action_dash_bwd1085 (   struct env94* env ,    struct TextBuf_88 *  self3693 ,    struct Action_19  action3695 ) {
    struct envunion95  temp1086 = ( (struct envunion95){ .fun = (  enum Unit_7  (*) (  struct env85*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action314 , .env =  env->envinst85 } );
    ( temp1086.fun ( &temp1086.env ,  (  self3693 ) ,  ( (  action3695 ) .f_from ) ,  ( (  action3695 ) .f_to_dash_fwd ) ,  ( (  action3695 ) .f_bwd ) ) );
    return ( (  action3695 ) .f_to_dash_bwd );
}

static  struct Maybe_113   undo1077 (   struct env98* env ,    struct TextBuf_88 *  self3718 ) {
    ( (  flush_dash_insert_dash_action998 ) ( (  self3718 ) ) );
    struct Actions_89 *  actions3719 = ( & ( ( * (  self3718 ) ) .f_actions ) );
    if ( (  eq239 ( ( ( * (  actions3719 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_113) { .tag = Maybe_113_None_t } );
    }
    (*  actions3719 ) .f_cur = (  op_dash_sub304 ( ( ( * (  actions3719 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_26  changeset3720 = (  elem_dash_get1040 ( ( ( * (  actions3719 ) ) .f_list ) , ( ( * (  actions3719 ) ) .f_cur ) ) );
    struct SliceReversedIter_1079  temp1078 =  into_dash_iter1080 ( ( (  reversed1081 ) ( ( (  to_dash_slice1068 ) ( ( (  changeset3720 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1055  __cond1082 =  next1083 (&temp1078);
        if (  __cond1082 .tag == 0 ) {
            break;
        }
        struct Action_19  action3722 =  __cond1082 .stuff .Maybe_1055_Just_s .field0;
        struct envunion99  temp1084 = ( (struct envunion99){ .fun = (  struct Pos_20  (*) (  struct env94*  ,    struct TextBuf_88 *  ,    struct Action_19  ) )action_dash_bwd1085 , .env =  env->envinst94 } );
        ( temp1084.fun ( &temp1084.env ,  (  self3718 ) ,  (  action3722 ) ) );
    }
    return ( ( Maybe_113_Just ) ( ( (  changeset3720 ) .f_before_dash_cursors ) ) );
}

struct env1088 {
    struct Pane_137 *  self4033;
    ;
};

struct envunion1089 {
    enum Unit_7  (*fun) (  struct env1088*  ,    struct Cursors_27  );
    struct env1088 env;
};

static  enum Unit_7   if_dash_just1087 (    struct Maybe_113  x1291 ,   struct envunion1089  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion1089  temp1090 = (  fun1293 );
        ( temp1090.fun ( &temp1090.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1091 (   struct env1088* env ,    struct Cursors_27  cursors4036 ) {
    ( (  set_dash_cursors945 ) ( ( env->self4033 ) ,  ( (  cursors4036 ) .f_cur ) ,  ( (  cursors4036 ) .f_sel ) ,  ( CursorMovement_946_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   undo1075 (   struct env116* env ,    struct Pane_137 *  self4033 ) {
    struct envunion117  temp1076 = ( (struct envunion117){ .fun = (  struct Maybe_113  (*) (  struct env98*  ,    struct TextBuf_88 *  ) )undo1077 , .env =  env->envinst98 } );
    struct Maybe_113  mcursors4034 = ( temp1076.fun ( &temp1076.env ,  ( ( * (  self4033 ) ) .f_buf ) ) );
    struct env1088 envinst1088 = {
        .self4033 =  self4033 ,
    };
    ( (  if_dash_just1087 ) ( (  mcursors4034 ) ,  ( (struct envunion1089){ .fun = (  enum Unit_7  (*) (  struct env1088*  ,    struct Cursors_27  ) )lam1091 , .env =  envinst1088 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Tuple2_149   minmax1095 (    struct Pos_20  l1329 ,    struct Pos_20  r1331 ) {
    return ( (  cmp316 ( (  l1329 ) , (  r1331 ) ) == 0 ) ? ( ( Tuple2_149_Tuple2 ) ( (  l1329 ) ,  (  r1331 ) ) ) : ( ( Tuple2_149_Tuple2 ) ( (  r1331 ) ,  (  l1329 ) ) ) );
}

static  struct Pos_20   or_dash_else1096 (    struct Maybe_28  self1732 ,    struct Pos_20  alt1734 ) {
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

static  struct Pos_20   fst1097 (    struct Tuple2_149  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_20   snd1098 (    struct Tuple2_149  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tuple2_149   selection1094 (    struct Pane_137 *  self4045 ) {
    struct Tuple2_149  from_dash_to4046 = ( (  minmax1095 ) ( ( (  or_dash_else1096 ) ( ( ( * (  self4045 ) ) .f_sel ) ,  ( ( * (  self4045 ) ) .f_cursor ) ) ) ,  ( ( * (  self4045 ) ) .f_cursor ) ) );
    struct Pos_20  from4047 = ( (  fst1097 ) ( (  from_dash_to4046 ) ) );
    struct Pos_20  to4048 = ( (  right_dash_pos990 ) ( ( ( * (  self4045 ) ) .f_buf ) ,  ( (  snd1098 ) ( (  from_dash_to4046 ) ) ) ) );
    return ( ( Tuple2_149_Tuple2 ) ( (  from4047 ) ,  (  to4048 ) ) );
}

static  struct StrView_21   clone_dash_01102 (    struct StrView_21  s2155 ,    enum CAllocator_9  al2157 ) {
    size_t  cnt2158 = ( ( (  s2155 ) .f_contents ) .f_count );
    struct Slice_12  nus2159 = ( (  allocate353 ) ( (  al2157 ) ,  (  op_dash_add232 ( (  cnt2158 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to452 ) ( ( (  s2155 ) .f_contents ) ,  (  nus2159 ) ) );
    ( (  set362 ) ( (  nus2159 ) ,  (  cnt2158 ) ,  ( (  char_dash_u8384 ) ( ( (  from_dash_charlike221 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = ( (  nus2159 ) .f_ptr ) , .f_count = (  cnt2158 ) } ) } );
}

static  struct StrView_21   clone1101 (    struct StrView_21  s2162 ,    enum CAllocator_9  al2164 ) {
    return ( (  clone_dash_01102 ) ( (  s2162 ) ,  (  al2164 ) ) );
}

struct envunion1106 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

static  struct StrView_21   from_dash_charlike1107 (    uint8_t *  ptr77 ,    size_t  count79 ) {
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = (  ptr77 ) , .f_count = (  count79 ) } ) } );
}

struct envunion1111 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

struct envunion1113 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

struct envunion1115 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

static  struct StrView_21   str_dash_between1100 (   struct env102* env ,    struct TextBuf_88 *  self3735 ,    struct Pos_20  from3737 ,    struct Pos_20  to3739 ) {
    enum CAllocator_9  al3740 = ( ( ( * (  self3735 ) ) .f_buf ) .f_al );
    if ( (  eq320 ( ( (  from3737 ) .f_line ) , ( (  to3739 ) .f_line ) ) ) ) {
        size_t  from_dash_bi3741 = ( (  i32_dash_size262 ) ( ( (  min469 ) ( ( (  from3737 ) .f_bi ) ,  ( (  to3739 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3742 = ( (  i32_dash_size262 ) ( ( (  max964 ) ( ( (  from3737 ) .f_bi ) ,  ( (  to3739 ) .f_bi ) ) ) ) );
        return ( (  clone1101 ) ( ( (  byte_dash_substr385 ) ( ( (  line951 ) ( (  self3735 ) ,  ( (  from3737 ) .f_line ) ) ) ,  (  from_dash_bi3741 ) ,  (  to_dash_bi3742 ) ) ) ,  (  al3740 ) ) );
    } else {
        struct Pos_20  from_dash_pos3743 = ( (  min315 ) ( (  from3737 ) ,  (  to3739 ) ) );
        struct Pos_20  to_dash_pos3744 = ( (  max318 ) ( (  from3737 ) ,  (  to3739 ) ) );
        struct List_11  temp1103 = ( (  mk283 ) ( (  al3740 ) ) );
        struct List_11 *  sb3745 = ( &temp1103 );
        struct StrView_21  first_dash_line3746 = ( (  line951 ) ( (  self3735 ) ,  ( (  from_dash_pos3743 ) .f_line ) ) );
        struct envunion103  temp1104 = ( (struct envunion103){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all338 , .env =  env->envinst40 } );
        ( temp1104.fun ( &temp1104.env ,  (  sb3745 ) ,  ( ( (  byte_dash_substr385 ) ( (  first_dash_line3746 ) ,  ( (  i32_dash_size262 ) ( ( (  from_dash_pos3743 ) .f_bi ) ) ) ,  ( (  num_dash_bytes984 ) ( (  first_dash_line3746 ) ) ) ) ) .f_contents ) ) );
        struct envunion1106  temp1105 = ( (struct envunion1106){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all338 , .env =  env->envinst40 } );
        ( temp1105.fun ( &temp1105.env ,  (  sb3745 ) ,  ( ( ( (  from_dash_charlike1107 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_689  temp1108 =  into_dash_iter691 ( ( (  to694 ) ( (  op_dash_add274 ( ( (  from_dash_pos3743 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  op_dash_sub812 ( ( (  to_dash_pos3744 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_272  __cond1109 =  next692 (&temp1108);
            if (  __cond1109 .tag == 0 ) {
                break;
            }
            int32_t  i3748 =  __cond1109 .stuff .Maybe_272_Just_s .field0;
            struct envunion1111  temp1110 = ( (struct envunion1111){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all338 , .env =  env->envinst40 } );
            ( temp1110.fun ( &temp1110.env ,  (  sb3745 ) ,  ( ( (  line951 ) ( (  self3735 ) ,  (  i3748 ) ) ) .f_contents ) ) );
            struct envunion1113  temp1112 = ( (struct envunion1113){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all338 , .env =  env->envinst40 } );
            ( temp1112.fun ( &temp1112.env ,  (  sb3745 ) ,  ( ( ( (  from_dash_charlike1107 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1115  temp1114 = ( (struct envunion1115){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all338 , .env =  env->envinst40 } );
        ( temp1114.fun ( &temp1114.env ,  (  sb3745 ) ,  ( ( (  byte_dash_substr385 ) ( ( (  line951 ) ( (  self3735 ) ,  ( (  to_dash_pos3744 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size262 ) ( ( (  to_dash_pos3744 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes952 ) ( ( (  to_dash_slice332 ) ( ( * (  sb3745 ) ) ) ) ) );
    }
}

struct env1117 {
    struct Editor_136 *  ed4132;
    ;
};

struct envunion1118 {
    enum Unit_7  (*fun) (  struct env1117*  ,    struct StrView_21  );
    struct env1117 env;
};

static  enum Unit_7   if_dash_just1116 (    struct Maybe_140  x1291 ,   struct envunion1118  fun1293 ) {
    struct Maybe_140  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_140_Just_t ) {
        struct envunion1118  temp1119 = (  fun1293 );
        ( temp1119.fun ( &temp1119.env ,  ( dref1294 .stuff .Maybe_140_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_140_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1120 (   struct env1117* env ,    struct StrView_21  cp4136 ) {
    ( (  free938 ) ( (  cp4136 ) ,  ( ( * ( env->ed4132 ) ) .f_al ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   copy_dash_selection_dash_to_dash_clipboard1093 (   struct env128* env ,    struct Editor_136 *  ed4132 ) {
    struct Tuple2_149  from_dash_to4133 = ( (  selection1094 ) ( ( (  pane988 ) ( (  ed4132 ) ) ) ) );
    struct envunion129  temp1099 = ( (struct envunion129){ .fun = (  struct StrView_21  (*) (  struct env102*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ) )str_dash_between1100 , .env =  env->envinst102 } );
    struct StrView_21  cpd4134 = ( temp1099.fun ( &temp1099.env ,  ( ( ( * (  ed4132 ) ) .f_pane ) .f_buf ) ,  ( (  fst1097 ) ( (  from_dash_to4133 ) ) ) ,  ( (  snd1098 ) ( (  from_dash_to4133 ) ) ) ) );
    struct env1117 envinst1117 = {
        .ed4132 =  ed4132 ,
    };
    ( (  if_dash_just1116 ) ( ( ( * (  ed4132 ) ) .f_clipboard ) ,  ( (struct envunion1118){ .fun = (  enum Unit_7  (*) (  struct env1117*  ,    struct StrView_21  ) )lam1120 , .env =  envinst1117 } ) ) );
    (*  ed4132 ) .f_clipboard = ( ( Maybe_140_Just ) ( (  cpd4134 ) ) );
    return ( Unit_7_Unit );
}

struct SliceIter_1128 {
    struct Slice_25  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1127 {
    struct SliceIter_1128  field0;
    size_t  field1;
};

static struct Drop_1127 Drop_1127_Drop (  struct SliceIter_1128  field0 ,  size_t  field1 ) {
    return ( struct Drop_1127 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1127   into_dash_iter1129 (    struct Drop_1127  self845 ) {
    return (  self845 );
}

static  struct SliceIter_1128   into_dash_iter1132 (    struct Slice_25  self1822 ) {
    return ( (struct SliceIter_1128) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Slice_25   subslice1133 (    struct Slice_25  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Changeset_26 *  begin_dash_ptr1787 = ( (  offset_dash_ptr1044 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp184 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp184 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_25) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub304 ( ( (  min331 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_25) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_1128   into_dash_iter1131 (    struct List_24  self2028 ) {
    return ( (  into_dash_iter1132 ) ( ( (  subslice1133 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

static  struct Drop_1127   drop1130 (    struct List_24  iterable852 ,    size_t  i854 ) {
    struct SliceIter_1128  it855 = ( (  into_dash_iter1131 ) ( (  iterable852 ) ) );
    return ( ( Drop_1127_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

struct Maybe_1135 {
    enum {
        Maybe_1135_None_t,
        Maybe_1135_Just_t,
    } tag;
    union {
        struct {
            struct Changeset_26  field0;
        } Maybe_1135_Just_s;
    } stuff;
};

static struct Maybe_1135 Maybe_1135_Just (  struct Changeset_26  field0 ) {
    return ( struct Maybe_1135 ) { .tag = Maybe_1135_Just_t, .stuff = { .Maybe_1135_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1135   next1137 (    struct SliceIter_1128 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp184 ( (  op_dash_add232 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1135) { .tag = Maybe_1135_None_t } );
    }
    struct Changeset_26  elem1830 = ( * ( (  offset_dash_ptr1044 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add232 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1135_Just ) ( (  elem1830 ) ) );
}

static  struct Maybe_1135   next1136 (    struct Drop_1127 *  dref847 ) {
    while ( (  cmp184 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1137 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub304 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1137 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

struct env1140 {
    enum CAllocator_9  al3600;
    ;
};

struct envunion1141 {
    enum Unit_7  (*fun) (  struct env1140*  ,    struct Action_19  );
    struct env1140 env;
};

static  enum Unit_7   for_dash_each1139 (    struct List_17  iterable1074 ,   struct envunion1141  fun1076 ) {
    struct SliceIter_1048  temp1142 = ( (  into_dash_iter1049 ) ( (  iterable1074 ) ) );
    struct SliceIter_1048 *  it1077 = ( &temp1142 );
    while ( ( true ) ) {
        struct Maybe_1055  dref1078 = ( (  next1056 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1055_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1055_Just_t ) {
                struct envunion1141  temp1143 = (  fun1076 );
                ( temp1143.fun ( &temp1143.env ,  ( dref1078 .stuff .Maybe_1055_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_action1145 (    struct Action_19  action3593 ,    enum CAllocator_9  al3595 ) {
    ( (  free938 ) ( ( (  action3593 ) .f_fwd ) ,  (  al3595 ) ) );
    ( (  free938 ) ( ( (  action3593 ) .f_bwd ) ,  (  al3595 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1144 (   struct env1140* env ,    struct Action_19  a3602 ) {
    return ( (  free_dash_action1145 ) ( (  a3602 ) ,  ( env->al3600 ) ) );
}

static  void *   cast_dash_ptr1148 (    struct Action_19 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free1147 (    enum CAllocator_9  dref1959 ,    struct Slice_18  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1148 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free1146 (    struct List_17 *  list2035 ) {
    ( (  free1147 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( ( * (  list2035 ) ) .f_elements ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_changeset1138 (    struct Changeset_26  chs3598 ,    enum CAllocator_9  al3600 ) {
    struct env1140 envinst1140 = {
        .al3600 =  al3600 ,
    };
    ( (  for_dash_each1139 ) ( ( (  chs3598 ) .f_parts ) ,  ( (struct envunion1141){ .fun = (  enum Unit_7  (*) (  struct env1140*  ,    struct Action_19  ) )lam1144 , .env =  envinst1140 } ) ) );
    ( (  free1146 ) ( ( & ( (  chs3598 ) .f_parts ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   trim1149 (    struct List_24 *  l2115 ,    size_t  new_dash_count2117 ) {
    (*  l2115 ) .f_count = ( (  min331 ) ( (  new_dash_count2117 ) ,  ( ( * (  l2115 ) ) .f_count ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   trim_dash_actions1125 (    struct Actions_89 *  actions3616 ) {
    enum CAllocator_9  al3617 = ( ( ( * (  actions3616 ) ) .f_list ) .f_al );
    size_t  cur3618 = ( ( * (  actions3616 ) ) .f_cur );
    struct Drop_1127  temp1126 =  into_dash_iter1129 ( ( (  drop1130 ) ( ( ( * (  actions3616 ) ) .f_list ) ,  (  cur3618 ) ) ) );
    while (true) {
        struct Maybe_1135  __cond1134 =  next1136 (&temp1126);
        if (  __cond1134 .tag == 0 ) {
            break;
        }
        struct Changeset_26  action3620 =  __cond1134 .stuff .Maybe_1135_Just_s .field0;
        ( (  free_dash_changeset1138 ) ( (  action3620 ) ,  (  al3617 ) ) );
    }
    ( (  trim1149 ) ( ( & ( ( * (  actions3616 ) ) .f_list ) ) ,  (  cur3618 ) ) );
    return ( Unit_7_Unit );
}

static  struct Maybe_140   head1151 (    struct SplitIter_392  it1142 ) {
    struct SplitIter_392  temp1152 = ( (  into_dash_iter399 ) ( (  it1142 ) ) );
    return ( (  next413 ) ( ( &temp1152 ) ) );
}

static  struct Maybe_140   head1154 (    struct Drop_391  it1142 ) {
    struct Drop_391  temp1155 = ( (  into_dash_iter397 ) ( (  it1142 ) ) );
    return ( (  next412 ) ( ( &temp1155 ) ) );
}

static  bool   null1153 (    struct Drop_391  it1151 ) {
    struct Maybe_140  dref1152 = ( (  head1154 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_140_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Tuple2_410   undefined1157 (  ) {
    struct Tuple2_410  temp1158;
    return (  temp1158 );
}

static  struct Tuple2_410   or_dash_fail1156 (    struct Maybe_409  x1725 ,    struct StrView_21  errmsg1727 ) {
    struct Maybe_409  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_409_None_t ) {
        ( (  panic1061 ) ( (  errmsg1727 ) ) );
        return ( (  undefined1157 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_409_Just_t ) {
            return ( dref1728 .stuff .Maybe_409_Just_s .field0 );
        }
    }
}

static  struct Maybe_409   reduce1160 (    struct Zip_390  iterable1093 ,    struct Maybe_409  base1095 ,    struct Maybe_409 (*  fun1097 )(    struct Tuple2_410  ,    struct Maybe_409  ) ) {
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
    const char*  temp1161 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1161);
    exit ( 1 );
    ( Unit_7_Unit );
    struct Maybe_409  temp1162;
    return (  temp1162 );
}

static  struct Maybe_409   lam1163 (    struct Tuple2_410  e1147 ,    struct Maybe_409  dref1148 ) {
    return ( ( Maybe_409_Just ) ( (  e1147 ) ) );
}

static  struct Maybe_409   last1159 (    struct Zip_390  it1145 ) {
    return ( (  reduce1160 ) ( (  it1145 ) ,  ( (struct Maybe_409) { .tag = Maybe_409_None_t } ) ,  (  lam1163 ) ) );
}

static  int32_t   snd1164 (    struct Tuple2_410  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct StrView_21   fst1165 (    struct Tuple2_410  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_20   pos_dash_after_dash_str1150 (    struct TextBuf_88 *  self3703 ,    struct StrView_21  bytes3705 ,    struct Pos_20  from3707 ) {
    struct SplitIter_392  lines3708 = ( (  split_dash_by_dash_each400 ) ( (  bytes3705 ) ,  ( (  from_dash_charlike221 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_21  first_dash_line3709 = ( (  or_dash_else375 ) ( ( (  head1151 ) ( (  lines3708 ) ) ) ,  ( (  from_dash_string220 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_391  headless3710 = ( (  drop398 ) ( (  lines3708 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1153 ) ( (  headless3710 ) ) ) ) {
        struct Pos_20  next_dash_pos3711 = ( (  mk298 ) ( ( (  from3707 ) .f_line ) ,  (  op_dash_add274 ( ( (  from3707 ) .f_bi ) , ( (  size_dash_i32196 ) ( ( (  num_dash_bytes984 ) ( (  first_dash_line3709 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3711 );
    } else {
        struct Tuple2_410  last_dash_line3712 = ( (  or_dash_fail1156 ) ( ( (  last1159 ) ( ( (  zip396 ) ( (  headless3710 ) ,  ( (  from279 ) ( (  op_dash_add274 ( ( (  from3707 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string220 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk298 ) ( ( (  snd1164 ) ( (  last_dash_line3712 ) ) ) ,  ( (  size_dash_i32196 ) ( ( (  num_dash_bytes984 ) ( ( (  fst1165 ) ( (  last_dash_line3712 ) ) ) ) ) ) ) ) );
    }
}

static  bool   is_dash_none1167 (    struct Maybe_113  m1264 ) {
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

struct Tuple2_1169 {
    enum ChangesetInputType_90  field0;
    enum ChangesetInputType_90  field1;
};

static struct Tuple2_1169 Tuple2_1169_Tuple2 (  enum ChangesetInputType_90  field0 ,  enum ChangesetInputType_90  field1 ) {
    return ( struct Tuple2_1169 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1168 (    enum ChangesetInputType_90  l3606 ,    enum ChangesetInputType_90  r3608 ) {
    return ( {  struct Tuple2_1169  dref3609 = ( ( Tuple2_1169_Tuple2 ) ( (  l3606 ) ,  (  r3608 ) ) ) ;  dref3609 .field0 == ChangesetInputType_90_NoChangeset &&  dref3609 .field1 == ChangesetInputType_90_NoChangeset ? ( true ) :  dref3609 .field0 == ChangesetInputType_90_InputChangeset &&  dref3609 .field1 == ChangesetInputType_90_InputChangeset ? ( true ) :  dref3609 .field0 == ChangesetInputType_90_CustomChangeset &&  dref3609 .field1 == ChangesetInputType_90_CustomChangeset ? ( true ) : ( false ) ; } );
}

static  struct Changeset_26 *   last_dash_ptr1170 (    struct Slice_25  s1938 ) {
    if ( (  eq239 ( ( (  s1938 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1061 ) ( ( (  from_dash_string220 ) ( ( "(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1043 ) ( (  s1938 ) ,  (  op_dash_sub304 ( ( (  s1938 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_25   to_dash_slice1171 (    struct List_24  l2126 ) {
    struct Changeset_26 *  ptr2127 = ( ( (  l2126 ) .f_elements ) .f_ptr );
    return ( (struct Slice_25) { .f_ptr = (  ptr2127 ) , .f_count = ( (  l2126 ) .f_count ) } );
}

struct envunion1173 {
    enum Unit_7  (*fun) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  );
    struct env15 env;
};

struct TypeSize_1179 {
    size_t  f_size;
};

static  struct TypeSize_1179   get_dash_typesize1178 (  ) {
    struct Action_19  temp1180;
    return ( (struct TypeSize_1179) { .f_size = ( sizeof( ( (  temp1180 ) ) ) ) } );
}

static  struct Action_19 *   cast_dash_ptr1181 (    void *  p359 ) {
    return ( (struct Action_19 * ) (  p359 ) );
}

static  struct Slice_18   allocate1177 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize1178 ) ( ) ) ) .f_size );
    struct Action_19 *  ptr1957 = ( (  cast_dash_ptr1181 ) ( ( ( malloc ) ( (  op_dash_mul245 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_18) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env1182 {
    struct Slice_18  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_1184 {
    struct Action_19  field0;
    int32_t  field1;
};

static struct Tuple2_1184 Tuple2_1184_Tuple2 (  struct Action_19  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1184 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1183 {
    enum Unit_7  (*fun) (  struct env1182*  ,    struct Tuple2_1184  );
    struct env1182 env;
};

static  struct Action_19 *   get_dash_ptr1187 (    struct Slice_18  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp184 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp184 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic252 ) ( ( ( StrConcat_253_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string220 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_19 *  elem_dash_ptr1760 = ( (  offset_dash_ptr1052 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set1186 (    struct Slice_18  slice1774 ,    size_t  i1776 ,    struct Action_19  x1778 ) {
    struct Action_19 *  ep1779 = ( (  get_dash_ptr1187 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1185 (   struct env1182* env ,    struct Tuple2_1184  dref2043 ) {
    return ( (  set1186 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size262 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct Zip_1189 {
    struct SliceIter_1048  f_left_dash_it;
    struct FromIter_266  f_right_dash_it;
};

static  struct Zip_1189   into_dash_iter1191 (    struct Zip_1189  self911 ) {
    return (  self911 );
}

struct Maybe_1192 {
    enum {
        Maybe_1192_None_t,
        Maybe_1192_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1184  field0;
        } Maybe_1192_Just_s;
    } stuff;
};

static struct Maybe_1192 Maybe_1192_Just (  struct Tuple2_1184  field0 ) {
    return ( struct Maybe_1192 ) { .tag = Maybe_1192_Just_t, .stuff = { .Maybe_1192_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1192   next1193 (    struct Zip_1189 *  self914 ) {
    struct Zip_1189  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1055  dref916 = ( (  next1056 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1055_None_t ) {
            return ( (struct Maybe_1192) { .tag = Maybe_1192_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1055_Just_t ) {
                struct Maybe_272  dref918 = ( (  next273 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_272_None_t ) {
                    return ( (struct Maybe_1192) { .tag = Maybe_1192_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_272_Just_t ) {
                        ( (  next1056 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next273 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1192_Just ) ( ( ( Tuple2_1184_Tuple2 ) ( ( dref916 .stuff .Maybe_1055_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_272_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each1188 (    struct Zip_1189  iterable1074 ,   struct envunion1183  fun1076 ) {
    struct Zip_1189  temp1190 = ( (  into_dash_iter1191 ) ( (  iterable1074 ) ) );
    struct Zip_1189 *  it1077 = ( &temp1190 );
    while ( ( true ) ) {
        struct Maybe_1192  dref1078 = ( (  next1193 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1192_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1192_Just_t ) {
                struct envunion1183  temp1194 = (  fun1076 );
                ( temp1194.fun ( &temp1194.env ,  ( dref1078 .stuff .Maybe_1192_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_1189   zip1195 (    struct Slice_18  left922 ,    struct FromIter_266  right924 ) {
    struct SliceIter_1048  left_dash_it925 = ( (  into_dash_iter1050 ) ( (  left922 ) ) );
    struct FromIter_266  right_dash_it926 = ( (  into_dash_iter278 ) ( (  right924 ) ) );
    return ( (struct Zip_1189) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   grow_dash_if_dash_full1176 (   struct env3* env ,    struct List_17 *  list2041 ) {
    if ( (  eq239 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate1177 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq239 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_18  new_dash_slice2042 = ( (  allocate1177 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul245 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env1182 envinst1182 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion1183  fun2046 = ( (struct envunion1183){ .fun = (  enum Unit_7  (*) (  struct env1182*  ,    struct Tuple2_1184  ) )lam1185 , .env =  envinst1182 } );
            ( (  for_dash_each1188 ) ( ( (  zip1195 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from279 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free1147 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add1174 (   struct env15* env ,    struct List_17 *  list2049 ,    struct Action_19  elem2051 ) {
    struct envunion16  temp1175 = ( (struct envunion16){ .fun = (  enum Unit_7  (*) (  struct env3*  ,    struct List_17 *  ) )grow_dash_if_dash_full1176 , .env =  env->envinst3 } );
    ( temp1175.fun ( &temp1175.env ,  (  list2049 ) ) );
    ( (  set1186 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add232 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  void *   cast_dash_ptr1202 (    struct Action_19 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1203 (    struct Action_19 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Action_19 *   zeroed1200 (  ) {
    struct Action_19 *  temp1201;
    struct Action_19 *  x570 = (  temp1201 );
    ( ( memset ) ( ( (  cast_dash_ptr1202 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of1203 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Action_19 *   null_dash_ptr1199 (  ) {
    return ( (  zeroed1200 ) ( ) );
}

static  struct Slice_18   empty1198 (  ) {
    return ( (struct Slice_18) { .f_ptr = ( (  null_dash_ptr1199 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_17   mk1197 (    enum CAllocator_9  al2031 ) {
    struct Slice_18  elements2032 = ( (  empty1198 ) ( ) );
    return ( (struct List_17) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_27   or_dash_else1204 (    struct Maybe_113  self1732 ,    struct Cursors_27  alt1734 ) {
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

struct TypeSize_1212 {
    size_t  f_size;
};

static  struct TypeSize_1212   get_dash_typesize1211 (  ) {
    struct Changeset_26  temp1213;
    return ( (struct TypeSize_1212) { .f_size = ( sizeof( ( (  temp1213 ) ) ) ) } );
}

static  struct Changeset_26 *   cast_dash_ptr1214 (    void *  p359 ) {
    return ( (struct Changeset_26 * ) (  p359 ) );
}

static  struct Slice_25   allocate1210 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize1211 ) ( ) ) ) .f_size );
    struct Changeset_26 *  ptr1957 = ( (  cast_dash_ptr1214 ) ( ( ( malloc ) ( (  op_dash_mul245 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_25) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env1215 {
    struct Slice_25  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_1217 {
    struct Changeset_26  field0;
    int32_t  field1;
};

static struct Tuple2_1217 Tuple2_1217_Tuple2 (  struct Changeset_26  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1217 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1216 {
    enum Unit_7  (*fun) (  struct env1215*  ,    struct Tuple2_1217  );
    struct env1215 env;
};

static  enum Unit_7   set1219 (    struct Slice_25  slice1774 ,    size_t  i1776 ,    struct Changeset_26  x1778 ) {
    struct Changeset_26 *  ep1779 = ( (  get_dash_ptr1043 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1218 (   struct env1215* env ,    struct Tuple2_1217  dref2043 ) {
    return ( (  set1219 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size262 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct Zip_1221 {
    struct SliceIter_1128  f_left_dash_it;
    struct FromIter_266  f_right_dash_it;
};

static  struct Zip_1221   into_dash_iter1223 (    struct Zip_1221  self911 ) {
    return (  self911 );
}

struct Maybe_1224 {
    enum {
        Maybe_1224_None_t,
        Maybe_1224_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1217  field0;
        } Maybe_1224_Just_s;
    } stuff;
};

static struct Maybe_1224 Maybe_1224_Just (  struct Tuple2_1217  field0 ) {
    return ( struct Maybe_1224 ) { .tag = Maybe_1224_Just_t, .stuff = { .Maybe_1224_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1224   next1225 (    struct Zip_1221 *  self914 ) {
    struct Zip_1221  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1135  dref916 = ( (  next1137 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1135_None_t ) {
            return ( (struct Maybe_1224) { .tag = Maybe_1224_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1135_Just_t ) {
                struct Maybe_272  dref918 = ( (  next273 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_272_None_t ) {
                    return ( (struct Maybe_1224) { .tag = Maybe_1224_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_272_Just_t ) {
                        ( (  next1137 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next273 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1224_Just ) ( ( ( Tuple2_1217_Tuple2 ) ( ( dref916 .stuff .Maybe_1135_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_272_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each1220 (    struct Zip_1221  iterable1074 ,   struct envunion1216  fun1076 ) {
    struct Zip_1221  temp1222 = ( (  into_dash_iter1223 ) ( (  iterable1074 ) ) );
    struct Zip_1221 *  it1077 = ( &temp1222 );
    while ( ( true ) ) {
        struct Maybe_1224  dref1078 = ( (  next1225 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1224_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1224_Just_t ) {
                struct envunion1216  temp1226 = (  fun1076 );
                ( temp1226.fun ( &temp1226.env ,  ( dref1078 .stuff .Maybe_1224_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_1221   zip1227 (    struct Slice_25  left922 ,    struct FromIter_266  right924 ) {
    struct SliceIter_1128  left_dash_it925 = ( (  into_dash_iter1132 ) ( (  left922 ) ) );
    struct FromIter_266  right_dash_it926 = ( (  into_dash_iter278 ) ( (  right924 ) ) );
    return ( (struct Zip_1221) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr1229 (    struct Changeset_26 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free1228 (    enum CAllocator_9  dref1959 ,    struct Slice_25  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1229 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   grow_dash_if_dash_full1209 (   struct env4* env ,    struct List_24 *  list2041 ) {
    if ( (  eq239 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate1210 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq239 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_25  new_dash_slice2042 = ( (  allocate1210 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul245 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env1215 envinst1215 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion1216  fun2046 = ( (struct envunion1216){ .fun = (  enum Unit_7  (*) (  struct env1215*  ,    struct Tuple2_1217  ) )lam1218 , .env =  envinst1215 } );
            ( (  for_dash_each1220 ) ( ( (  zip1227 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from279 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free1228 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add1207 (   struct env22* env ,    struct List_24 *  list2049 ,    struct Changeset_26  elem2051 ) {
    struct envunion23  temp1208 = ( (struct envunion23){ .fun = (  enum Unit_7  (*) (  struct env4*  ,    struct List_24 *  ) )grow_dash_if_dash_full1209 , .env =  env->envinst4 } );
    ( temp1208.fun ( &temp1208.env ,  (  list2049 ) ) );
    ( (  set1219 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add232 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Maybe_113   change1124 (   struct env104* env ,    struct TextBuf_88 *  self3765 ,    struct Pos_20  from3767 ,    struct Pos_20  to3769 ,    struct StrView_21  bytes3771 ,    struct Maybe_113  before_dash_cursors3773 ) {
    struct Pos_20  from_dash_pos3774 = ( (  min315 ) ( (  from3767 ) ,  (  to3769 ) ) );
    struct Pos_20  to_dash_pos3775 = ( (  max318 ) ( (  from3767 ) ,  (  to3769 ) ) );
    struct Actions_89 *  actions3776 = ( & ( ( * (  self3765 ) ) .f_actions ) );
    ( (  trim_dash_actions1125 ) ( (  actions3776 ) ) );
    struct envunion108  temp1166 = ( (struct envunion108){ .fun = (  struct StrView_21  (*) (  struct env102*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ) )str_dash_between1100 , .env =  env->envinst102 } );
    struct Action_19  action3777 = ( (struct Action_19) { .f_from = (  from3767 ) , .f_fwd = ( (  clone1101 ) ( (  bytes3771 ) ,  ( ( * (  self3765 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1150 ) ( (  self3765 ) ,  (  bytes3771 ) ,  (  from_dash_pos3774 ) ) ) , .f_bwd = ( temp1166.fun ( &temp1166.env ,  (  self3765 ) ,  (  from_dash_pos3774 ) ,  (  to_dash_pos3775 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3775 ) } );
    enum CAllocator_9  al3778 = ( ( ( * (  actions3776 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in3779 = ( (  is_dash_none1167 ) ( (  before_dash_cursors3773 ) ) );
    if ( ( (  eq1168 ( ( ( ( * (  self3765 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_90_CustomChangeset ) ) ) || ( (  eq1168 ( ( ( ( * (  self3765 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_90_InputChangeset ) ) ) && (  is_dash_typed_dash_in3779 ) ) ) ) {
        struct Changeset_26 *  last_dash_changeset3780 = ( (  last_dash_ptr1170 ) ( ( (  to_dash_slice1171 ) ( ( ( * (  actions3776 ) ) .f_list ) ) ) ) );
        struct envunion1173  temp1172 = ( (struct envunion1173){ .fun = (  enum Unit_7  (*) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  ) )add1174 , .env =  env->envinst15 } );
        ( temp1172.fun ( &temp1172.env ,  ( & ( ( * (  last_dash_changeset3780 ) ) .f_parts ) ) ,  (  action3777 ) ) );
    } else {
        struct Changeset_26  temp1196 = ( (struct Changeset_26) { .f_parts = ( (  mk1197 ) ( (  al3778 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1204 ) ( (  before_dash_cursors3773 ) ,  ( (struct Cursors_27) { .f_cur = (  from3767 ) , .f_sel = ( (  eq319 ( (  from3767 ) , (  to3769 ) ) ) ? ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) : ( ( Maybe_28_Just ) ( (  to3769 ) ) ) ) } ) ) ) } );
        struct Changeset_26 *  changeset3781 = ( &temp1196 );
        struct envunion106  temp1205 = ( (struct envunion106){ .fun = (  enum Unit_7  (*) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  ) )add1174 , .env =  env->envinst15 } );
        ( temp1205.fun ( &temp1205.env ,  ( & ( ( * (  changeset3781 ) ) .f_parts ) ) ,  (  action3777 ) ) );
        struct envunion107  temp1206 = ( (struct envunion107){ .fun = (  enum Unit_7  (*) (  struct env22*  ,    struct List_24 *  ,    struct Changeset_26  ) )add1207 , .env =  env->envinst22 } );
        ( temp1206.fun ( &temp1206.env ,  ( & ( ( * (  actions3776 ) ) .f_list ) ) ,  ( * (  changeset3781 ) ) ) );
        (*  actions3776 ) .f_input_dash_changeset = ( (  is_dash_typed_dash_in3779 ) ? ( ChangesetInputType_90_InputChangeset ) : ( ChangesetInputType_90_NoChangeset ) );
        (*  actions3776 ) .f_cur = (  op_dash_add232 ( ( ( * (  actions3776 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion105  temp1230 = ( (struct envunion105){ .fun = (  struct Pos_20  (*) (  struct env96*  ,    struct TextBuf_88 *  ,    struct Action_19  ) )action_dash_fwd1058 , .env =  env->envinst96 } );
    struct Pos_20  to_dash_fwd3782 = ( temp1230.fun ( &temp1230.env ,  (  self3765 ) ,  (  action3777 ) ) );
    if ( (  cmp184 ( ( (  num_dash_bytes984 ) ( ( (  action3777 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_20  to_dash_fwd3783 = ( (  left_dash_pos983 ) ( (  self3765 ) ,  (  to_dash_fwd3782 ) ) );
        return ( ( Maybe_113_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3783 ) , .f_sel = ( ( Maybe_28_Just ) ( ( (  action3777 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_113_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3782 ) , .f_sel = ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) } ) ) );
    }
}

struct env1232 {
    struct Pane_137 *  self4051;
    ;
};

struct envunion1233 {
    enum Unit_7  (*fun) (  struct env1232*  ,    struct Cursors_27  );
    struct env1232 env;
};

static  enum Unit_7   if_dash_just1231 (    struct Maybe_113  x1291 ,   struct envunion1233  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion1233  temp1234 = (  fun1293 );
        ( temp1234.fun ( &temp1234.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1235 (   struct env1232* env ,    struct Cursors_27  cursors4058 ) {
    ( (  set_dash_cursors945 ) ( ( env->self4051 ) ,  ( (  cursors4058 ) .f_cur ) ,  ( (  cursors4058 ) .f_sel ) ,  ( CursorMovement_946_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   replace_dash_selection1122 (   struct env120* env ,    struct Pane_137 *  self4051 ,    struct Tuple2_149  pos_prime_s4053 ,    struct StrView_21  cp4055 ) {
    struct envunion121  temp1123 = ( (struct envunion121){ .fun = (  struct Maybe_113  (*) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  ) )change1124 , .env =  env->envinst104 } );
    struct Maybe_113  mcursors4056 = ( temp1123.fun ( &temp1123.env ,  ( ( * (  self4051 ) ) .f_buf ) ,  ( (  fst1097 ) ( (  pos_prime_s4053 ) ) ) ,  ( (  snd1098 ) ( (  pos_prime_s4053 ) ) ) ,  (  cp4055 ) ,  ( ( Maybe_113_Just ) ( ( (struct Cursors_27) { .f_cur = ( ( * (  self4051 ) ) .f_cursor ) , .f_sel = ( ( * (  self4051 ) ) .f_sel ) } ) ) ) ) );
    struct env1232 envinst1232 = {
        .self4051 =  self4051 ,
    };
    ( (  if_dash_just1231 ) ( (  mcursors4056 ) ,  ( (struct envunion1233){ .fun = (  enum Unit_7  (*) (  struct env1232*  ,    struct Cursors_27  ) )lam1235 , .env =  envinst1232 } ) ) );
    return ( Unit_7_Unit );
}

struct envunion1237 {
    enum Unit_7  (*fun) (  struct env128*  ,    struct Editor_136 *  );
    struct env128 env;
};

struct envunion1239 {
    enum Unit_7  (*fun) (  struct env120*  ,    struct Pane_137 *  ,    struct Tuple2_149  ,    struct StrView_21  );
    struct env120 env;
};

struct envunion1241 {
    enum Unit_7  (*fun) (  struct env128*  ,    struct Editor_136 *  );
    struct env128 env;
};

static  struct StrBuilder_54   mk1247 (    enum CAllocator_9  al2781 ) {
    return ( (struct StrBuilder_54) { .f_chars = ( (  mk283 ) ( (  al2781 ) ) ) } );
}

struct IntStrIter_1253 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1252 {
    struct StrViewIter_603  f_left;
    struct IntStrIter_1253  f_right;
};

struct StrConcatIter_1251 {
    struct StrConcatIter_1252  f_left;
    struct StrViewIter_603  f_right;
};

struct env1254 {
    struct env52 envinst52;
    struct StrBuilder_54 *  builder2749;
};

struct envunion1255 {
    enum Unit_7  (*fun) (  struct env1254*  ,    struct Char_57  );
    struct env1254 env;
};

static  struct StrConcatIter_1251   into_dash_iter1257 (    struct StrConcatIter_1251  self1491 ) {
    return (  self1491 );
}

struct env1263 {
    ;
    size_t  base1210;
};

struct envunion1264 {
    size_t  (*fun) (  struct env1263*  ,    int32_t  ,    size_t  );
    struct env1263 env;
};

static  size_t   reduce1262 (    struct Range_686  iterable1093 ,    size_t  base1095 ,   struct envunion1264  fun1097 ) {
    size_t  x1098 = (  base1095 );
    struct RangeIter_689  it1099 = ( (  into_dash_iter691 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next692 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                struct envunion1264  temp1265 = (  fun1097 );
                x1098 = ( temp1265.fun ( &temp1265.env ,  ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1266 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1266);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1267;
    return (  temp1267 );
}

static  size_t   lam1268 (   struct env1263* env ,    int32_t  item1214 ,    size_t  x1216 ) {
    return (  op_dash_mul245 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  size_t   pow1261 (    size_t  base1210 ,    int32_t  p1212 ) {
    struct env1263 envinst1263 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1262 ) ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1264){ .fun = (  size_t  (*) (  struct env1263*  ,    int32_t  ,    size_t  ) )lam1268 , .env =  envinst1263 } ) ) );
}

static  uint8_t   cast1269 (    size_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_606   next1260 (    struct IntStrIter_1253 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_606_Just ) ( ( (  from_dash_charlike221 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp317 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
    }
    size_t  trim_dash_down1423 = ( (  pow1261 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub812 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    size_t  upper1424 = (  op_dash_div211 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    size_t  upper_dash_mask1425 = (  op_dash_mul245 ( (  op_dash_div211 ( (  upper1424 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1269 ) ( (  op_dash_sub304 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub812 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8892 ) ( (  op_dash_add782 ( (  digit1426 ) , (  from_dash_integral212 ( 48 ) ) ) ) ) );
    return ( ( Maybe_606_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_606   next1259 (    struct StrConcatIter_1252 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1260 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1258 (    struct StrConcatIter_1251 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1259 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each1250 (    struct StrConcatIter_1251  iterable1074 ,   struct envunion1255  fun1076 ) {
    struct StrConcatIter_1251  temp1256 = ( (  into_dash_iter1257 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1251 *  it1077 = ( &temp1256 );
    while ( ( true ) ) {
        struct Maybe_606  dref1078 = ( (  next1258 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_606_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_606_Just_t ) {
                struct envunion1255  temp1270 = (  fun1076 );
                ( temp1270.fun ( &temp1270.env ,  ( dref1078 .stuff .Maybe_606_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  int32_t   count_dash_digits1277 (    size_t  self1430 ) {
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

static  struct IntStrIter_1253   uint_dash_iter1276 (    size_t  int1437 ) {
    return ( (struct IntStrIter_1253) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1277 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1253   chars1275 (    size_t  self1467 ) {
    return ( (  uint_dash_iter1276 ) ( (  self1467 ) ) );
}

static  struct StrConcatIter_1252   into_dash_iter1274 (    struct StrConcat_67  dref1498 ) {
    return ( (struct StrConcatIter_1252) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1275 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1252   chars1273 (    struct StrConcat_67  self1509 ) {
    return ( (  into_dash_iter1274 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1251   into_dash_iter1272 (    struct StrConcat_66  dref1498 ) {
    return ( (struct StrConcatIter_1251) { .f_left = ( (  chars1273 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars608 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1251   chars1271 (    struct StrConcat_66  self1509 ) {
    return ( (  into_dash_iter1272 ) ( (  self1509 ) ) );
}

static  enum Unit_7   write_dash_slice1282 (   struct env50* env ,    struct StrBuilder_54 *  builder2739 ,    struct Slice_12  s2741 ) {
    struct envunion51  temp1283 = ( (struct envunion51){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all338 , .env =  env->envinst40 } );
    ( temp1283.fun ( &temp1283.env ,  ( & ( ( * (  builder2739 ) ) .f_chars ) ) ,  (  s2741 ) ) );
    return ( Unit_7_Unit );
}

static  struct Slice_12   from_dash_char1284 (    struct Char_57  c1941 ,    uint8_t *  buf1943 ) {
    struct CharDestructured_205  dref1944 = ( (  destructure207 ) ( (  c1941 ) ) );
    if ( dref1944.tag == CharDestructured_205_Ref_t ) {
        return ( (struct Slice_12) { .f_ptr = ( ( dref1944 .stuff .CharDestructured_205_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1944 .stuff .CharDestructured_205_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1944.tag == CharDestructured_205_Scalar_t ) {
            if ( (  cmp215 ( ( ( dref1944 .stuff .CharDestructured_205_Scalar_s .field0 ) .f_value ) , (  from_dash_integral216 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1285 = ( (  from_dash_string49 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp1285);
                exit ( 1 );
                ( Unit_7_Unit );
            }
            (*  buf1943 ) = ( (  u32_dash_u8218 ) ( ( ( dref1944 .stuff .CharDestructured_205_Scalar_s .field0 ) .f_value ) ) );
            return ( (struct Slice_12) { .f_ptr = (  buf1943 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_7   write_dash_char1280 (   struct env52* env ,    struct StrBuilder_54 *  builder2744 ,    struct Char_57  c2746 ) {
    struct envunion53  temp1281 = ( (struct envunion53){ .fun = (  enum Unit_7  (*) (  struct env50*  ,    struct StrBuilder_54 *  ,    struct Slice_12  ) )write_dash_slice1282 , .env =  env->envinst50 } );
    uint8_t  temp1287;
    uint8_t  temp1286 = (  temp1287 );
    ( temp1281.fun ( &temp1281.env ,  (  builder2744 ) ,  ( (  from_dash_char1284 ) ( (  c2746 ) ,  ( &temp1286 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1278 (   struct env1254* env ,    struct Char_57  c2753 ) {
    struct envunion56  temp1279 = ( (struct envunion56){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1280 , .env =  env->envinst52 } );
    return ( temp1279.fun ( &temp1279.env ,  ( env->builder2749 ) ,  (  c2753 ) ) );
}

static  enum Unit_7   write1249 (   struct env58* env ,    struct StrBuilder_54 *  builder2749 ,    struct StrConcat_66  s2751 ) {
    struct env1254 envinst1254 = {
        .envinst52 = env->envinst52 ,
        .builder2749 =  builder2749 ,
    };
    ( (  for_dash_each1250 ) ( ( (  chars1271 ) ( (  s2751 ) ) ) ,  ( (struct envunion1255){ .fun = (  enum Unit_7  (*) (  struct env1254*  ,    struct Char_57  ) )lam1278 , .env =  envinst1254 } ) ) );
    return ( Unit_7_Unit );
}

static  uint8_t *   cast_dash_ptr1291 (    uint8_t *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_12   cast_dash_slice1290 (    struct Slice_12  s1932 ) {
    return ( (struct Slice_12) { .f_ptr = ( (  cast_dash_ptr1291 ) ( ( (  s1932 ) .f_ptr ) ) ) , .f_count = ( (  s1932 ) .f_count ) } );
}

static  struct StrView_21   as_dash_str1289 (    struct StrBuilder_54 *  builder2787 ) {
    return ( (struct StrView_21) { .f_contents = ( (  cast_dash_slice1290 ) ( ( (  subslice328 ) ( ( ( ( * (  builder2787 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2787 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_21   mk_dash_dyn_dash_str1245 (   struct env64* env ,    struct StrConcat_66  s2807 ,    enum CAllocator_9  al2809 ) {
    struct StrBuilder_54  temp1246 = ( (  mk1247 ) ( (  al2809 ) ) );
    struct StrBuilder_54 *  sb2810 = ( &temp1246 );
    struct envunion65  temp1248 = ( (struct envunion65){ .fun = (  enum Unit_7  (*) (  struct env58*  ,    struct StrBuilder_54 *  ,    struct StrConcat_66  ) )write1249 , .env =  env->envinst58 } );
    ( temp1248.fun ( &temp1248.env ,  (  sb2810 ) ,  (  s2807 ) ) );
    struct envunion62  temp1288 = ( (struct envunion62){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1280 , .env =  env->envinst52 } );
    ( temp1288.fun ( &temp1288.env ,  (  sb2810 ) ,  ( (  nullchar528 ) ( ) ) ) );
    struct StrView_21  dynstr2811 = ( (  as_dash_str1289 ) ( (  sb2810 ) ) );
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = ( ( (  dynstr2811 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub304 ( ( ( (  dynstr2811 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_7   set_dash_msg1243 (   struct env132* env ,    struct Editor_136 *  ed4144 ,    struct StrConcat_66  s4146 ) {
    ( (  reset_dash_msg932 ) ( (  ed4144 ) ) );
    struct envunion133  temp1244 = ( (struct envunion133){ .fun = (  struct StrView_21  (*) (  struct env64*  ,    struct StrConcat_66  ,    enum CAllocator_9  ) )mk_dash_dyn_dash_str1245 , .env =  env->envinst64 } );
    (*  ed4144 ) .f_msg = ( ( Maybe_140_Just ) ( ( temp1244.fun ( &temp1244.env ,  (  s4146 ) ,  ( ( * (  ed4144 ) ) .f_al ) ) ) ) );
    return ( Unit_7_Unit );
}

struct envunion1294 {
    enum Unit_7  (*fun) (  struct env120*  ,    struct Pane_137 *  ,    struct Tuple2_149  ,    struct StrView_21  );
    struct env120 env;
};

struct env1293 {
    ;
    ;
    ;
    ;
    ;
    struct Editor_136 *  ed4190;
    ;
    ;
    ;
    struct env120 envinst120;
    ;
    ;
    ;
};

struct envunion1295 {
    enum Unit_7  (*fun) (  struct env1293*  ,    struct StrView_21  );
    struct env1293 env;
};

static  enum Unit_7   if_dash_just1292 (    struct Maybe_140  x1291 ,   struct envunion1295  fun1293 ) {
    struct Maybe_140  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_140_Just_t ) {
        struct envunion1295  temp1296 = (  fun1293 );
        ( temp1296.fun ( &temp1296.env ,  ( dref1294 .stuff .Maybe_140_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_140_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  struct Pos_20   max_dash_pos1298 (    struct Pane_137 *  pane4011 ) {
    return ( {  struct Maybe_28  dref4012 = ( ( * (  pane4011 ) ) .f_sel ) ; dref4012.tag == Maybe_28_Just_t ? ( (  max318 ) ( ( ( * (  pane4011 ) ) .f_cursor ) ,  ( dref4012 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( ( * (  pane4011 ) ) .f_cursor ) ; } );
}

static  uint8_t   elem_dash_get1300 (    struct Slice_12  self1867 ,    size_t  idx1869 ) {
    return ( (  get379 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

static  uint8_t   last1299 (    struct Slice_12  s1935 ) {
    if ( (  eq239 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1061 ) ( ( (  from_dash_string220 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1300 ( (  s1935 ) , (  op_dash_sub304 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1301 (    int32_t  x1352 ,    int32_t  mn1354 ,    int32_t  mx1356 ) {
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

static  enum Unit_7   lam1297 (   struct env1293* env ,    struct StrView_21  cp4197 ) {
    struct Pos_20  start4198 = ( (  max_dash_pos1298 ) ( ( (  pane988 ) ( ( env->ed4190 ) ) ) ) );
    if ( (  eq208 ( ( (  last1299 ) ( ( (  cp4197 ) .f_contents ) ) ) , ( (  ascii_dash_u8745 ) ( ( (  from_dash_charlike787 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        start4198 = ( (struct Pos_20) { .f_line = ( (  clamp1301 ) ( (  op_dash_add274 ( ( (  start4198 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  num_dash_lines991 ) ( ( ( * ( (  pane988 ) ( ( env->ed4190 ) ) ) ) .f_buf ) ) ) ) ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } );
    } else {
        start4198 = ( (  right_dash_pos990 ) ( ( ( ( * ( env->ed4190 ) ) .f_pane ) .f_buf ) ,  (  start4198 ) ) );
    }
    struct envunion1294  temp1302 = ( (struct envunion1294){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_137 *  ,    struct Tuple2_149  ,    struct StrView_21  ) )replace_dash_selection1122 , .env =  env->envinst120 } );
    ( temp1302.fun ( &temp1302.env ,  ( (  pane988 ) ( ( env->ed4190 ) ) ) ,  ( ( Tuple2_149_Tuple2 ) ( (  start4198 ) ,  (  start4198 ) ) ) ,  (  cp4197 ) ) );
    return ( Unit_7_Unit );
}

struct envunion1305 {
    enum Unit_7  (*fun) (  struct env120*  ,    struct Pane_137 *  ,    struct Tuple2_149  ,    struct StrView_21  );
    struct env120 env;
};

struct env1304 {
    ;
    ;
    struct env120 envinst120;
    ;
    ;
    ;
    ;
    ;
    struct Editor_136 *  ed4190;
};

struct envunion1306 {
    enum Unit_7  (*fun) (  struct env1304*  ,    struct StrView_21  );
    struct env1304 env;
};

static  enum Unit_7   if_dash_just1303 (    struct Maybe_140  x1291 ,   struct envunion1306  fun1293 ) {
    struct Maybe_140  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_140_Just_t ) {
        struct envunion1306  temp1307 = (  fun1293 );
        ( temp1307.fun ( &temp1307.env ,  ( dref1294 .stuff .Maybe_140_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_140_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  struct Pos_20   min_dash_pos1309 (    struct Pane_137 *  pane4006 ) {
    return ( {  struct Maybe_28  dref4007 = ( ( * (  pane4006 ) ) .f_sel ) ; dref4007.tag == Maybe_28_Just_t ? ( (  min315 ) ( ( ( * (  pane4006 ) ) .f_cursor ) ,  ( dref4007 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( ( * (  pane4006 ) ) .f_cursor ) ; } );
}

static  enum Unit_7   lam1308 (   struct env1304* env ,    struct StrView_21  cp4200 ) {
    struct Pos_20  start4201 = ( (  min_dash_pos1309 ) ( ( (  pane988 ) ( ( env->ed4190 ) ) ) ) );
    if ( (  eq208 ( ( (  last1299 ) ( ( (  cp4200 ) .f_contents ) ) ) , ( (  ascii_dash_u8745 ) ( ( (  from_dash_charlike787 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_20  temp1310 = (  start4201 );
        temp1310 .  f_bi = (  from_dash_integral48 ( 0 ) );
        start4201 = ( temp1310 );
    }
    struct envunion1305  temp1311 = ( (struct envunion1305){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_137 *  ,    struct Tuple2_149  ,    struct StrView_21  ) )replace_dash_selection1122 , .env =  env->envinst120 } );
    ( temp1311.fun ( &temp1311.env ,  ( (  pane988 ) ( ( env->ed4190 ) ) ) ,  ( ( Tuple2_149_Tuple2 ) ( (  start4201 ) ,  (  start4201 ) ) ) ,  (  cp4200 ) ) );
    return ( Unit_7_Unit );
}

struct envunion1314 {
    enum Unit_7  (*fun) (  struct env120*  ,    struct Pane_137 *  ,    struct Tuple2_149  ,    struct StrView_21  );
    struct env120 env;
};

struct env1313 {
    struct env120 envinst120;
    ;
    ;
    struct Editor_136 *  ed4190;
};

struct envunion1315 {
    enum Unit_7  (*fun) (  struct env1313*  ,    struct StrView_21  );
    struct env1313 env;
};

static  enum Unit_7   if_dash_just1312 (    struct Maybe_140  x1291 ,   struct envunion1315  fun1293 ) {
    struct Maybe_140  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_140_Just_t ) {
        struct envunion1315  temp1316 = (  fun1293 );
        ( temp1316.fun ( &temp1316.env ,  ( dref1294 .stuff .Maybe_140_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_140_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1317 (   struct env1313* env ,    struct StrView_21  cp4203 ) {
    struct Pos_20  start4204 = ( (  min_dash_pos1309 ) ( ( (  pane988 ) ( ( env->ed4190 ) ) ) ) );
    struct envunion1314  temp1318 = ( (struct envunion1314){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_137 *  ,    struct Tuple2_149  ,    struct StrView_21  ) )replace_dash_selection1122 , .env =  env->envinst120 } );
    ( temp1318.fun ( &temp1318.env ,  ( (  pane988 ) ( ( env->ed4190 ) ) ) ,  ( ( Tuple2_149_Tuple2 ) ( (  start4204 ) ,  (  start4204 ) ) ) ,  (  cp4203 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   expand1319 (    struct Pane_137 *  pane4016 ) {
    struct Pos_20  min_dash_pos4017 = ( (  min_dash_pos1309 ) ( (  pane4016 ) ) );
    struct Pos_20  max_dash_pos4018 = ( (  max_dash_pos1298 ) ( (  pane4016 ) ) );
    int32_t  max_dash_pos_dash_max4019 = ( (  size_dash_i32196 ) ( ( (  num_dash_bytes984 ) ( ( (  line951 ) ( ( ( * (  pane4016 ) ) .f_buf ) ,  ( (  max_dash_pos4018 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq320 ( ( (  min_dash_pos4017 ) .f_bi ) , (  from_dash_integral48 ( 0 ) ) ) ) && (  eq320 ( ( (  max_dash_pos4018 ) .f_bi ) , (  max_dash_pos_dash_max4019 ) ) ) ) ) ) {
        struct Pos_20  temp1320 = (  min_dash_pos4017 );
        temp1320 .  f_bi = (  from_dash_integral48 ( 0 ) );
        (*  pane4016 ) .f_sel = ( ( Maybe_28_Just ) ( ( temp1320 ) ) );
        struct Pos_20  temp1321 = (  max_dash_pos4018 );
        temp1321 .  f_bi = (  max_dash_pos_dash_max4019 );
        (*  pane4016 ) .f_cursor = ( temp1321 );
    } else {
        if ( (  cmp317 ( (  op_dash_add274 ( ( (  max_dash_pos4018 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) , ( (  num_dash_lines991 ) ( ( ( * (  pane4016 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_7_Unit );
        }
        struct Pos_20  temp1322 = (  min_dash_pos4017 );
        temp1322 .  f_bi = (  from_dash_integral48 ( 0 ) );
        (*  pane4016 ) .f_sel = ( ( Maybe_28_Just ) ( ( temp1322 ) ) );
        int32_t  next_dash_line4020 = (  op_dash_add274 ( ( (  max_dash_pos4018 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) );
        (*  pane4016 ) .f_cursor = ( (struct Pos_20) { .f_line = (  next_dash_line4020 ) , .f_bi = ( (  size_dash_i32196 ) ( ( (  num_dash_bytes984 ) ( ( (  line951 ) ( ( ( * (  pane4016 ) ) .f_buf ) ,  (  next_dash_line4020 ) ) ) ) ) ) ) } );
    }
    return ( Unit_7_Unit );
}

static  bool   is_dash_none1323 (    struct Maybe_28  m1264 ) {
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

struct Maybe_1325 {
    enum {
        Maybe_1325_None_t,
        Maybe_1325_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_149  field0;
        } Maybe_1325_Just_s;
    } stuff;
};

static struct Maybe_1325 Maybe_1325_Just (  struct Tuple2_149  field0 ) {
    return ( struct Maybe_1325 ) { .tag = Maybe_1325_Just_t, .stuff = { .Maybe_1325_Just_s = { .field0 = field0 } } };
};

struct env1327 {
    ;
    ;
    struct StrView_21  query4081;
    ;
    struct Pane_137 *  pane4077;
    ;
};

struct Maybe_1328 {
    enum {
        Maybe_1328_None_t,
        Maybe_1328_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_1328_Just_s;
    } stuff;
};

static struct Maybe_1328 Maybe_1328_Just (  size_t  field0 ) {
    return ( struct Maybe_1328 ) { .tag = Maybe_1328_Just_t, .stuff = { .Maybe_1328_Just_s = { .field0 = field0 } } };
};

struct envunion1330 {
    struct Maybe_1328  (*fun) (  struct env1327*  ,    struct Pos_20  );
    struct env1327 env;
};

struct Zip_1337 {
    struct SliceIter_342  f_left_dash_it;
    struct SliceIter_342  f_right_dash_it;
};

struct Tuple2_1338 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_1338 Tuple2_1338_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_1338 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1340 {
    bool (*  fun1126 )(    struct Tuple2_1338  );
};

struct envunion1341 {
    bool  (*fun) (  struct env1340*  ,    struct Tuple2_1338  ,    bool  );
    struct env1340 env;
};

static  struct Zip_1337   into_dash_iter1342 (    struct Zip_1337  self911 ) {
    return (  self911 );
}

struct Maybe_1343 {
    enum {
        Maybe_1343_None_t,
        Maybe_1343_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1338  field0;
        } Maybe_1343_Just_s;
    } stuff;
};

static struct Maybe_1343 Maybe_1343_Just (  struct Tuple2_1338  field0 ) {
    return ( struct Maybe_1343 ) { .tag = Maybe_1343_Just_t, .stuff = { .Maybe_1343_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1343   next1344 (    struct Zip_1337 *  self914 ) {
    struct Zip_1337  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_345  dref916 = ( (  next346 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_345_None_t ) {
            return ( (struct Maybe_1343) { .tag = Maybe_1343_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_345_Just_t ) {
                struct Maybe_345  dref918 = ( (  next346 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_345_None_t ) {
                    return ( (struct Maybe_1343) { .tag = Maybe_1343_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_345_Just_t ) {
                        ( (  next346 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next346 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1343_Just ) ( ( ( Tuple2_1338_Tuple2 ) ( ( dref916 .stuff .Maybe_345_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_345_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1339 (    struct Zip_1337  iterable1093 ,    bool  base1095 ,   struct envunion1341  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_1337  it1099 = ( (  into_dash_iter1342 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1343  dref1100 = ( (  next1344 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1343_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1343_Just_t ) {
                struct envunion1341  temp1345 = (  fun1097 );
                x1098 = ( temp1345.fun ( &temp1345.env ,  ( dref1100 .stuff .Maybe_1343_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1346 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1346);
    exit ( 1 );
    ( Unit_7_Unit );
    bool  temp1347;
    return (  temp1347 );
}

static  bool   lam1348 (   struct env1340* env ,    struct Tuple2_1338  e1128 ,    bool  x1130 ) {
    return ( ( ( env->fun1126 ) ( (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1336 (    struct Zip_1337  it1124 ,    bool (*  fun1126 )(    struct Tuple2_1338  ) ) {
    struct env1340 envinst1340 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1339 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1341){ .fun = (  bool  (*) (  struct env1340*  ,    struct Tuple2_1338  ,    bool  ) )lam1348 , .env =  envinst1340 } ) ) );
}

static  struct Zip_1337   zip1349 (    struct Slice_12  left922 ,    struct Slice_12  right924 ) {
    struct SliceIter_342  left_dash_it925 = ( (  into_dash_iter344 ) ( (  left922 ) ) );
    struct SliceIter_342  right_dash_it926 = ( (  into_dash_iter344 ) ( (  right924 ) ) );
    return ( (struct Zip_1337) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  bool   lam1350 (    struct Tuple2_1338  dref1862 ) {
    return (  eq208 ( ( dref1862 .field0 ) , ( dref1862 .field1 ) ) );
}

static  bool   eq1335 (    struct Slice_12  l1859 ,    struct Slice_12  r1861 ) {
    if ( ( !  eq239 ( ( (  l1859 ) .f_count ) , ( (  r1861 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all1336 ) ( ( (  zip1349 ) ( (  l1859 ) ,  (  r1861 ) ) ) ,  (  lam1350 ) ) );
}

static  struct Maybe_1328   find_dash_slice1332 (    struct Slice_12  haystack1912 ,    struct Slice_12  needle1914 ) {
    struct RangeIter_689  temp1333 =  into_dash_iter691 ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( ( (  size_dash_i32196 ) ( ( (  haystack1912 ) .f_count ) ) ) , ( (  size_dash_i32196 ) ( ( (  needle1914 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_272  __cond1334 =  next692 (&temp1333);
        if (  __cond1334 .tag == 0 ) {
            break;
        }
        int32_t  i1916 =  __cond1334 .stuff .Maybe_272_Just_s .field0;
        if ( (  eq1335 ( ( (  subslice328 ) ( (  haystack1912 ) ,  ( (  i32_dash_size262 ) ( (  i1916 ) ) ) ,  (  op_dash_add232 ( ( (  i32_dash_size262 ) ( (  i1916 ) ) ) , ( (  needle1914 ) .f_count ) ) ) ) ) , (  needle1914 ) ) ) ) {
            return ( ( Maybe_1328_Just ) ( ( (  i32_dash_size262 ) ( (  i1916 ) ) ) ) );
        }
    }
    return ( (struct Maybe_1328) { .tag = Maybe_1328_None_t } );
}

static  struct StrView_21   byte_dash_substr_dash_from1351 (    struct StrView_21  s2190 ,    size_t  from2192 ) {
    return ( (struct StrView_21) { .f_contents = ( (  from327 ) ( ( (  s2190 ) .f_contents ) ,  (  from2192 ) ) ) } );
}

static  struct Maybe_1328   search_dash_on_dash_line1331 (   struct env1327* env ,    struct Pos_20  pos4084 ) {
    return ( (  find_dash_slice1332 ) ( ( ( (  byte_dash_substr_dash_from1351 ) ( ( (  line951 ) ( ( ( * ( env->pane4077 ) ) .f_buf ) ,  ( (  pos4084 ) .f_line ) ) ) ,  ( (  i32_dash_size262 ) ( ( (  pos4084 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4081 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1357 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  int32_t   op_dash_mul1358 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  int32_t   mod1356 (    int32_t  l1229 ,    int32_t  d1231 ) {
    int32_t  r1232 = (  op_dash_div1357 ( (  l1229 ) , (  d1231 ) ) );
    int32_t  m1233 = (  op_dash_sub812 ( (  l1229 ) , (  op_dash_mul1358 ( (  r1232 ) , (  d1231 ) ) ) ) );
    if ( (  cmp317 ( (  m1233 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add274 ( (  d1231 ) , (  m1233 ) ) );
    } else {
        return (  m1233 );
    }
}

struct envunion1360 {
    struct Maybe_1328  (*fun) (  struct env1327*  ,    struct Pos_20  );
    struct env1327 env;
};

static  struct Maybe_1325   search_dash_from1326 (    struct Pane_137 *  pane4077 ,    struct Pos_20  pos4079 ,    struct StrView_21  query4081 ) {
    struct env1327 envinst1327 = {
        .query4081 =  query4081 ,
        .pane4077 =  pane4077 ,
    };
    struct envunion1330  temp1329 = ( (struct envunion1330){ .fun = (  struct Maybe_1328  (*) (  struct env1327*  ,    struct Pos_20  ) )search_dash_on_dash_line1331 , .env =  envinst1327 } );
    struct Maybe_1328  dref4085 = ( temp1329.fun ( &temp1329.env ,  (  pos4079 ) ) );
    if ( dref4085.tag == Maybe_1328_Just_t ) {
        struct Pos_20  temp1352 = (  pos4079 );
        temp1352 .  f_bi = (  op_dash_add274 ( ( (  pos4079 ) .f_bi ) , ( (  size_dash_i32196 ) ( ( dref4085 .stuff .Maybe_1328_Just_s .field0 ) ) ) ) );
        struct Pos_20  sel_dash_pos4087 = ( temp1352 );
        struct Pos_20  temp1353 = (  pos4079 );
        temp1353 .  f_bi = (  op_dash_sub812 ( (  op_dash_add274 ( ( (  pos4079 ) .f_bi ) , ( (  size_dash_i32196 ) ( (  op_dash_add232 ( ( dref4085 .stuff .Maybe_1328_Just_s .field0 ) , ( (  num_dash_bytes984 ) ( (  query4081 ) ) ) ) ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
        struct Pos_20  cur_dash_pos4088 = ( temp1353 );
        return ( ( Maybe_1325_Just ) ( ( ( Tuple2_149_Tuple2 ) ( (  sel_dash_pos4087 ) ,  (  cur_dash_pos4088 ) ) ) ) );
    }
    else {
        if ( dref4085.tag == Maybe_1328_None_t ) {
            int32_t  num_dash_lines4089 = ( (  num_dash_lines991 ) ( ( ( * (  pane4077 ) ) .f_buf ) ) );
            struct RangeIter_689  temp1354 =  into_dash_iter691 ( ( (  to694 ) ( (  from_dash_integral48 ( 1 ) ) ,  (  num_dash_lines4089 ) ) ) );
            while (true) {
                struct Maybe_272  __cond1355 =  next692 (&temp1354);
                if (  __cond1355 .tag == 0 ) {
                    break;
                }
                int32_t  i4091 =  __cond1355 .stuff .Maybe_272_Just_s .field0;
                int32_t  line4092 = ( (  mod1356 ) ( (  op_dash_add274 ( ( (  pos4079 ) .f_line ) , (  i4091 ) ) ) ,  (  num_dash_lines4089 ) ) );
                struct envunion1360  temp1359 = ( (struct envunion1360){ .fun = (  struct Maybe_1328  (*) (  struct env1327*  ,    struct Pos_20  ) )search_dash_on_dash_line1331 , .env =  envinst1327 } );
                struct Maybe_1328  dref4093 = ( temp1359.fun ( &temp1359.env ,  ( (struct Pos_20) { .f_line = (  line4092 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ) );
                if ( dref4093.tag == Maybe_1328_Just_t ) {
                    struct Pos_20  sel_dash_pos4095 = ( (struct Pos_20) { .f_line = (  line4092 ) , .f_bi = ( (  size_dash_i32196 ) ( ( dref4093 .stuff .Maybe_1328_Just_s .field0 ) ) ) } );
                    struct Pos_20  cur_dash_pos4096 = ( (struct Pos_20) { .f_line = (  line4092 ) , .f_bi = (  op_dash_sub812 ( ( (  size_dash_i32196 ) ( (  op_dash_add232 ( ( dref4093 .stuff .Maybe_1328_Just_s .field0 ) , ( (  num_dash_bytes984 ) ( (  query4081 ) ) ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1325_Just ) ( ( ( Tuple2_149_Tuple2 ) ( (  sel_dash_pos4095 ) ,  (  cur_dash_pos4096 ) ) ) ) );
                }
                else {
                    if ( dref4093.tag == Maybe_1328_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1325) { .tag = Maybe_1325_None_t } );
        }
    }
}

static  enum Unit_7   next_dash_match1324 (    struct Editor_136 *  ed4174 ) {
    struct Maybe_140  dref4175 = ( ( * (  ed4174 ) ) .f_search_dash_term );
    if ( dref4175.tag == Maybe_140_None_t ) {
        return ( Unit_7_Unit );
    }
    else {
        if ( dref4175.tag == Maybe_140_Just_t ) {
            struct Maybe_1325  dref4177 = ( (  search_dash_from1326 ) ( ( (  pane988 ) ( (  ed4174 ) ) ) ,  ( (  max_dash_pos1298 ) ( ( (  pane988 ) ( (  ed4174 ) ) ) ) ) ,  ( dref4175 .stuff .Maybe_140_Just_s .field0 ) ) );
            if ( dref4177.tag == Maybe_1325_None_t ) {
            }
            else {
                if ( dref4177.tag == Maybe_1325_Just_t ) {
                    ( (  set_dash_cursors945 ) ( ( (  pane988 ) ( (  ed4174 ) ) ) ,  ( dref4177 .stuff .Maybe_1325_Just_s .field0 .field1 ) ,  ( ( Maybe_28_Just ) ( ( dref4177 .stuff .Maybe_1325_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_946_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Maybe_1328   find_dash_last_dash_occurence_dash_of_dash_slice1363 (    struct Slice_12  haystack1919 ,    struct Slice_12  needle1921 ) {
    struct Maybe_1328  occ1922 = ( (struct Maybe_1328) { .tag = Maybe_1328_None_t } );
    struct RangeIter_689  temp1364 =  into_dash_iter691 ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( ( (  size_dash_i32196 ) ( ( (  haystack1919 ) .f_count ) ) ) , ( (  size_dash_i32196 ) ( ( (  needle1921 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_272  __cond1365 =  next692 (&temp1364);
        if (  __cond1365 .tag == 0 ) {
            break;
        }
        int32_t  i1924 =  __cond1365 .stuff .Maybe_272_Just_s .field0;
        if ( (  eq1335 ( ( (  subslice328 ) ( (  haystack1919 ) ,  ( (  i32_dash_size262 ) ( (  i1924 ) ) ) ,  (  op_dash_add232 ( ( (  i32_dash_size262 ) ( (  i1924 ) ) ) , ( (  needle1921 ) .f_count ) ) ) ) ) , (  needle1921 ) ) ) ) {
            occ1922 = ( ( Maybe_1328_Just ) ( ( (  i32_dash_size262 ) ( (  i1924 ) ) ) ) );
        }
    }
    return (  occ1922 );
}

static  struct Maybe_1325   search_dash_back1362 (    struct Pane_137 *  pane4099 ,    struct Pos_20  pos4101 ,    struct StrView_21  query4103 ) {
    struct Maybe_1328  dref4104 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1363 ) ( ( ( (  byte_dash_substr385 ) ( ( (  line951 ) ( ( ( * (  pane4099 ) ) .f_buf ) ,  ( (  pos4101 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size262 ) ( ( (  pos4101 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4103 ) .f_contents ) ) );
    if ( dref4104.tag == Maybe_1328_Just_t ) {
        struct Pos_20  temp1366 = (  pos4101 );
        temp1366 .  f_bi = ( (  size_dash_i32196 ) ( ( dref4104 .stuff .Maybe_1328_Just_s .field0 ) ) );
        struct Pos_20  sel_dash_pos4106 = ( temp1366 );
        struct Pos_20  temp1367 = (  pos4101 );
        temp1367 .  f_bi = (  op_dash_sub812 ( ( (  size_dash_i32196 ) ( (  op_dash_add232 ( ( dref4104 .stuff .Maybe_1328_Just_s .field0 ) , ( (  num_dash_bytes984 ) ( (  query4103 ) ) ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
        struct Pos_20  cur_dash_pos4107 = ( temp1367 );
        return ( ( Maybe_1325_Just ) ( ( ( Tuple2_149_Tuple2 ) ( (  sel_dash_pos4106 ) ,  (  cur_dash_pos4107 ) ) ) ) );
    }
    else {
        if ( dref4104.tag == Maybe_1328_None_t ) {
            int32_t  num_dash_lines4108 = ( (  num_dash_lines991 ) ( ( ( * (  pane4099 ) ) .f_buf ) ) );
            struct RangeIter_689  temp1368 =  into_dash_iter691 ( ( (  to694 ) ( (  from_dash_integral48 ( 1 ) ) ,  (  num_dash_lines4108 ) ) ) );
            while (true) {
                struct Maybe_272  __cond1369 =  next692 (&temp1368);
                if (  __cond1369 .tag == 0 ) {
                    break;
                }
                int32_t  i4110 =  __cond1369 .stuff .Maybe_272_Just_s .field0;
                int32_t  line4111 = ( (  mod1356 ) ( (  op_dash_sub812 ( ( (  pos4101 ) .f_line ) , (  i4110 ) ) ) ,  (  num_dash_lines4108 ) ) );
                struct Maybe_1328  dref4112 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1363 ) ( ( ( (  line951 ) ( ( ( * (  pane4099 ) ) .f_buf ) ,  (  line4111 ) ) ) .f_contents ) ,  ( (  query4103 ) .f_contents ) ) );
                if ( dref4112.tag == Maybe_1328_Just_t ) {
                    struct Pos_20  sel_dash_pos4114 = ( (struct Pos_20) { .f_line = (  line4111 ) , .f_bi = ( (  size_dash_i32196 ) ( ( dref4112 .stuff .Maybe_1328_Just_s .field0 ) ) ) } );
                    struct Pos_20  cur_dash_pos4115 = ( (struct Pos_20) { .f_line = (  line4111 ) , .f_bi = (  op_dash_sub812 ( ( (  size_dash_i32196 ) ( (  op_dash_add232 ( ( dref4112 .stuff .Maybe_1328_Just_s .field0 ) , ( (  num_dash_bytes984 ) ( (  query4103 ) ) ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1325_Just ) ( ( ( Tuple2_149_Tuple2 ) ( (  sel_dash_pos4114 ) ,  (  cur_dash_pos4115 ) ) ) ) );
                }
                else {
                    if ( dref4112.tag == Maybe_1328_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1325) { .tag = Maybe_1325_None_t } );
        }
    }
}

static  enum Unit_7   prev_dash_match1361 (    struct Editor_136 *  ed4182 ) {
    struct Maybe_140  dref4183 = ( ( * (  ed4182 ) ) .f_search_dash_term );
    if ( dref4183.tag == Maybe_140_None_t ) {
        return ( Unit_7_Unit );
    }
    else {
        if ( dref4183.tag == Maybe_140_Just_t ) {
            struct Maybe_1325  dref4185 = ( (  search_dash_back1362 ) ( ( (  pane988 ) ( (  ed4182 ) ) ) ,  ( (  min_dash_pos1309 ) ( ( (  pane988 ) ( (  ed4182 ) ) ) ) ) ,  ( dref4183 .stuff .Maybe_140_Just_s .field0 ) ) );
            if ( dref4185.tag == Maybe_1325_None_t ) {
            }
            else {
                if ( dref4185.tag == Maybe_1325_Just_t ) {
                    ( (  set_dash_cursors945 ) ( ( (  pane988 ) ( (  ed4182 ) ) ) ,  ( dref4185 .stuff .Maybe_1325_Just_s .field0 .field1 ) ,  ( ( Maybe_28_Just ) ( ( dref4185 .stuff .Maybe_1325_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_946_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   begin_dash_changeset1373 (   struct env109* env ,    struct TextBuf_88 *  self3786 ,    struct Cursors_27  before_dash_cursors3788 ) {
    struct Actions_89 *  actions3789 = ( & ( ( * (  self3786 ) ) .f_actions ) );
    ( (  trim_dash_actions1125 ) ( (  actions3789 ) ) );
    ( (  flush_dash_insert_dash_action998 ) ( (  self3786 ) ) );
    ( (  assert477 ) ( (  eq1168 ( ( ( ( * (  self3786 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_90_NoChangeset ) ) ) ,  ( (  from_dash_string220 ) ( ( "expect no changeset bruh" ) ,  ( 24 ) ) ) ) );
    enum CAllocator_9  al3790 = ( ( * (  self3786 ) ) .f_al );
    struct Changeset_26  temp1374 = ( (struct Changeset_26) { .f_parts = ( (  mk1197 ) ( (  al3790 ) ) ) , .f_before_dash_cursors = (  before_dash_cursors3788 ) } );
    struct Changeset_26 *  changeset3791 = ( &temp1374 );
    struct envunion110  temp1375 = ( (struct envunion110){ .fun = (  enum Unit_7  (*) (  struct env22*  ,    struct List_24 *  ,    struct Changeset_26  ) )add1207 , .env =  env->envinst22 } );
    ( temp1375.fun ( &temp1375.env ,  ( & ( ( * (  actions3789 ) ) .f_list ) ) ,  ( * (  changeset3791 ) ) ) );
    (*  actions3789 ) .f_input_dash_changeset = ( ChangesetInputType_90_CustomChangeset );
    (*  actions3789 ) .f_cur = (  op_dash_add232 ( ( ( * (  actions3789 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Maybe_1055   head1381 (    struct List_17  it1142 ) {
    struct SliceIter_1048  temp1382 = ( (  into_dash_iter1049 ) ( (  it1142 ) ) );
    return ( (  next1056 ) ( ( &temp1382 ) ) );
}

static  bool   null1380 (    struct List_17  it1151 ) {
    struct Maybe_1055  dref1152 = ( (  head1381 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_1055_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_7   end_dash_changeset1379 (    struct TextBuf_88 *  self3794 ) {
    ( (  flush_dash_insert_dash_action998 ) ( (  self3794 ) ) );
    struct Actions_89 *  actions3795 = ( & ( ( * (  self3794 ) ) .f_actions ) );
    if ( ( (  null1380 ) ( ( ( * ( (  last_dash_ptr1170 ) ( ( (  to_dash_slice1171 ) ( ( ( * (  actions3795 ) ) .f_list ) ) ) ) ) ) .f_parts ) ) ) ) {
        (*  actions3795 ) .f_cur = (  op_dash_sub304 ( ( ( * (  actions3795 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
        (*  actions3795 ) .f_input_dash_changeset = ( ChangesetInputType_90_NoChangeset );
        ( (  trim_dash_actions1125 ) ( (  actions3795 ) ) );
    }
    return ( Unit_7_Unit );
}

static  struct Maybe_28   fmap_dash_maybe1384 (    struct Maybe_28  x1275 ,    struct Pos_20 (*  fun1277 )(    struct Pos_20  ) ) {
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

static  struct Pos_20   lam1385 (    struct Pos_20  sel4065 ) {
    struct Pos_20  temp1386 = (  sel4065 );
    temp1386 .  f_bi = (  op_dash_add274 ( ( (  sel4065 ) .f_bi ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( temp1386 );
}

static  enum Unit_7   indent_dash_selection1371 (   struct env122* env ,    struct Pane_137 *  self4061 ) {
    struct envunion123  temp1372 = ( (struct envunion123){ .fun = (  enum Unit_7  (*) (  struct env109*  ,    struct TextBuf_88 *  ,    struct Cursors_27  ) )begin_dash_changeset1373 , .env =  env->envinst109 } );
    ( temp1372.fun ( &temp1372.env ,  ( ( * (  self4061 ) ) .f_buf ) ,  ( (struct Cursors_27) { .f_cur = ( ( * (  self4061 ) ) .f_cursor ) , .f_sel = ( ( * (  self4061 ) ) .f_sel ) } ) ) );
    struct RangeIter_689  temp1376 =  into_dash_iter691 ( ( (  to694 ) ( ( ( (  min_dash_pos1309 ) ( (  self4061 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1298 ) ( (  self4061 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_272  __cond1377 =  next692 (&temp1376);
        if (  __cond1377 .tag == 0 ) {
            break;
        }
        int32_t  line4063 =  __cond1377 .stuff .Maybe_272_Just_s .field0;
        struct envunion124  temp1378 = ( (struct envunion124){ .fun = (  struct Maybe_113  (*) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  ) )change1124 , .env =  env->envinst104 } );
        ( temp1378.fun ( &temp1378.env ,  ( ( * (  self4061 ) ) .f_buf ) ,  ( (struct Pos_20) { .f_line = (  line4063 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ,  ( (struct Pos_20) { .f_line = (  line4063 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ,  ( (  from_dash_charlike1107 ) ( ( "\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_113) { .tag = Maybe_113_None_t } ) ) );
    }
    ( (  end_dash_changeset1379 ) ( ( ( * (  self4061 ) ) .f_buf ) ) );
    struct Pos_20  temp1383 = ( ( * (  self4061 ) ) .f_cursor );
    temp1383 .  f_bi = (  op_dash_add274 ( ( ( ( * (  self4061 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral48 ( 1 ) ) ) );
    ( (  set_dash_cursors945 ) ( (  self4061 ) ,  ( temp1383 ) ,  ( (  fmap_dash_maybe1384 ) ( ( ( * (  self4061 ) ) .f_sel ) ,  (  lam1385 ) ) ) ,  ( CursorMovement_946_UpdateVI ) ) );
    return ( Unit_7_Unit );
}

struct env1397 {
    ;
    bool  last_dash_char_dash_was_dash_tab4070;
    ;
};

struct envunion1398 {
    struct Pos_20  (*fun) (  struct env1397*  ,    struct Pos_20  );
    struct env1397 env;
};

static  struct Maybe_28   fmap_dash_maybe1396 (    struct Maybe_28  x1275 ,   struct envunion1398  fun1277 ) {
    struct Maybe_28  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_28_None_t ) {
        return ( (struct Maybe_28) { .tag = Maybe_28_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_28_Just_t ) {
            struct envunion1398  temp1399 = (  fun1277 );
            return ( ( Maybe_28_Just ) ( ( temp1399.fun ( &temp1399.env ,  ( dref1278 .stuff .Maybe_28_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_20   lam1400 (   struct env1397* env ,    struct Pos_20  sel4074 ) {
    struct Pos_20  temp1401 = (  sel4074 );
    temp1401 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4070 ) ? (  op_dash_sub812 ( ( (  sel4074 ) .f_bi ) , (  from_dash_integral48 ( 1 ) ) ) ) : ( (  sel4074 ) .f_bi ) );
    return ( temp1401 );
}

static  enum Unit_7   dedent_dash_selection1388 (   struct env125* env ,    struct Pane_137 *  self4068 ) {
    struct envunion126  temp1389 = ( (struct envunion126){ .fun = (  enum Unit_7  (*) (  struct env109*  ,    struct TextBuf_88 *  ,    struct Cursors_27  ) )begin_dash_changeset1373 , .env =  env->envinst109 } );
    ( temp1389.fun ( &temp1389.env ,  ( ( * (  self4068 ) ) .f_buf ) ,  ( (struct Cursors_27) { .f_cur = ( ( * (  self4068 ) ) .f_cursor ) , .f_sel = ( ( * (  self4068 ) ) .f_sel ) } ) ) );
    struct Pos_20  temp1390 = ( (  min_dash_pos1309 ) ( (  self4068 ) ) );
    temp1390 .  f_bi = (  from_dash_integral48 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4069 = (  eq403 ( ( (  char_dash_at1023 ) ( (  self4068 ) ,  ( temp1390 ) ) ) , ( (  from_dash_charlike221 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_20  temp1391 = ( (  max_dash_pos1298 ) ( (  self4068 ) ) );
    temp1391 .  f_bi = (  from_dash_integral48 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4070 = (  eq403 ( ( (  char_dash_at1023 ) ( (  self4068 ) ,  ( temp1391 ) ) ) , ( (  from_dash_charlike221 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_689  temp1392 =  into_dash_iter691 ( ( (  to694 ) ( ( ( (  min_dash_pos1309 ) ( (  self4068 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1298 ) ( (  self4068 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_272  __cond1393 =  next692 (&temp1392);
        if (  __cond1393 .tag == 0 ) {
            break;
        }
        int32_t  line4072 =  __cond1393 .stuff .Maybe_272_Just_s .field0;
        if ( (  eq403 ( ( (  char_dash_at1023 ) ( (  self4068 ) ,  ( (struct Pos_20) { .f_line = (  line4072 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike221 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion127  temp1394 = ( (struct envunion127){ .fun = (  struct Maybe_113  (*) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  ) )change1124 , .env =  env->envinst104 } );
            ( temp1394.fun ( &temp1394.env ,  ( ( * (  self4068 ) ) .f_buf ) ,  ( (struct Pos_20) { .f_line = (  line4072 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ,  ( (struct Pos_20) { .f_line = (  line4072 ) , .f_bi = (  from_dash_integral48 ( 1 ) ) } ) ,  ( (  from_dash_string220 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_113) { .tag = Maybe_113_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1379 ) ( ( ( * (  self4068 ) ) .f_buf ) ) );
    struct Pos_20  temp1395 = ( ( * (  self4068 ) ) .f_cursor );
    temp1395 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4069 ) ? (  op_dash_sub812 ( ( ( ( * (  self4068 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral48 ( 1 ) ) ) ) : ( ( ( * (  self4068 ) ) .f_cursor ) .f_bi ) );
    struct env1397 envinst1397 = {
        .last_dash_char_dash_was_dash_tab4070 =  last_dash_char_dash_was_dash_tab4070 ,
    };
    ( (  set_dash_cursors945 ) ( (  self4068 ) ,  ( temp1395 ) ,  ( (  fmap_dash_maybe1396 ) ( ( ( * (  self4068 ) ) .f_sel ) ,  ( (struct envunion1398){ .fun = (  struct Pos_20  (*) (  struct env1397*  ,    struct Pos_20  ) )lam1400 , .env =  envinst1397 } ) ) ) ,  ( CursorMovement_946_UpdateVI ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   handle_dash_normal_dash_key943 (   struct env142* env ,    struct Editor_136 *  ed4190 ,    struct Key_153  key4192 ) {
    struct Key_153  dref4193 = (  key4192 );
    if ( dref4193.tag == Key_153_Char_t ) {
        if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4190 ) .f_running = ( false );
        } else {
            if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left944 ) ( ( (  pane988 ) ( (  ed4190 ) ) ) ) );
            } else {
                if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right989 ) ( ( (  pane988 ) ( (  ed4190 ) ) ) ) );
                } else {
                    if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down992 ) ( ( (  pane988 ) ( (  ed4190 ) ) ) ) );
                    } else {
                        if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up996 ) ( ( (  pane988 ) ( (  ed4190 ) ) ) ) );
                        } else {
                            if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode997 ) ( ( (  pane988 ) ( (  ed4190 ) ) ) ,  ( Mode_138_Insert ) ) );
                            } else {
                                if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  advance_dash_word999 ) ( ( (  pane988 ) ( (  ed4190 ) ) ) ,  ( MoveDirection_1000_MoveFwd ) ,  ( MoveTarget_1001_NextWordStart ) ) );
                                } else {
                                    if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  advance_dash_word999 ) ( ( (  pane988 ) ( (  ed4190 ) ) ) ,  ( MoveDirection_1000_MoveFwd ) ,  ( MoveTarget_1001_NextWordEnd ) ) );
                                    } else {
                                        if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  advance_dash_word999 ) ( ( (  pane988 ) ( (  ed4190 ) ) ) ,  ( MoveDirection_1000_MoveBwd ) ,  ( MoveTarget_1001_NextWordEnd ) ) );
                                        } else {
                                            if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct envunion144  temp1035 = ( (struct envunion144){ .fun = (  enum Unit_7  (*) (  struct env118*  ,    struct Pane_137 *  ) )redo1036 , .env =  env->envinst118 } );
                                                ( temp1035.fun ( &temp1035.env ,  ( (  pane988 ) ( (  ed4190 ) ) ) ) );
                                            } else {
                                                if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                    struct envunion150  temp1074 = ( (struct envunion150){ .fun = (  enum Unit_7  (*) (  struct env116*  ,    struct Pane_137 *  ) )undo1075 , .env =  env->envinst116 } );
                                                    ( temp1074.fun ( &temp1074.env ,  ( (  pane988 ) ( (  ed4190 ) ) ) ) );
                                                } else {
                                                    if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                        struct envunion147  temp1092 = ( (struct envunion147){ .fun = (  enum Unit_7  (*) (  struct env128*  ,    struct Editor_136 *  ) )copy_dash_selection_dash_to_dash_clipboard1093 , .env =  env->envinst128 } );
                                                        ( temp1092.fun ( &temp1092.env ,  (  ed4190 ) ) );
                                                        struct envunion148  temp1121 = ( (struct envunion148){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_137 *  ,    struct Tuple2_149  ,    struct StrView_21  ) )replace_dash_selection1122 , .env =  env->envinst120 } );
                                                        ( temp1121.fun ( &temp1121.env ,  ( (  pane988 ) ( (  ed4190 ) ) ) ,  ( (  selection1094 ) ( ( (  pane988 ) ( (  ed4190 ) ) ) ) ) ,  ( (  from_dash_string220 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                        ( (  set_dash_mode997 ) ( ( (  pane988 ) ( (  ed4190 ) ) ) ,  ( Mode_138_Normal ) ) );
                                                    } else {
                                                        if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                            struct envunion1237  temp1236 = ( (struct envunion1237){ .fun = (  enum Unit_7  (*) (  struct env128*  ,    struct Editor_136 *  ) )copy_dash_selection_dash_to_dash_clipboard1093 , .env =  env->envinst128 } );
                                                            ( temp1236.fun ( &temp1236.env ,  (  ed4190 ) ) );
                                                            struct envunion1239  temp1238 = ( (struct envunion1239){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_137 *  ,    struct Tuple2_149  ,    struct StrView_21  ) )replace_dash_selection1122 , .env =  env->envinst120 } );
                                                            ( temp1238.fun ( &temp1238.env ,  ( (  pane988 ) ( (  ed4190 ) ) ) ,  ( (  selection1094 ) ( ( (  pane988 ) ( (  ed4190 ) ) ) ) ) ,  ( (  from_dash_string220 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                            ( (  set_dash_mode997 ) ( ( (  pane988 ) ( (  ed4190 ) ) ) ,  ( Mode_138_Insert ) ) );
                                                        } else {
                                                            if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion1241  temp1240 = ( (struct envunion1241){ .fun = (  enum Unit_7  (*) (  struct env128*  ,    struct Editor_136 *  ) )copy_dash_selection_dash_to_dash_clipboard1093 , .env =  env->envinst128 } );
                                                                ( temp1240.fun ( &temp1240.env ,  (  ed4190 ) ) );
                                                                size_t  bytes_dash_yanked4195 = ( (  num_dash_bytes984 ) ( ( (  or_dash_else375 ) ( ( ( * (  ed4190 ) ) .f_clipboard ) ,  ( (  from_dash_string220 ) ( ( "" ) ,  ( 0 ) ) ) ) ) ) );
                                                                struct envunion143  temp1242 = ( (struct envunion143){ .fun = (  enum Unit_7  (*) (  struct env132*  ,    struct Editor_136 *  ,    struct StrConcat_66  ) )set_dash_msg1243 , .env =  env->envinst132 } );
                                                                ( temp1242.fun ( &temp1242.env ,  (  ed4190 ) ,  ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4195 ) ) ) ,  ( (  from_dash_string220 ) ( ( " bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                            } else {
                                                                if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct env1293 envinst1293 = {
                                                                        .ed4190 =  ed4190 ,
                                                                        .envinst120 = env->envinst120 ,
                                                                    };
                                                                    ( (  if_dash_just1292 ) ( ( ( * (  ed4190 ) ) .f_clipboard ) ,  ( (struct envunion1295){ .fun = (  enum Unit_7  (*) (  struct env1293*  ,    struct StrView_21  ) )lam1297 , .env =  envinst1293 } ) ) );
                                                                } else {
                                                                    if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct env1304 envinst1304 = {
                                                                            .envinst120 = env->envinst120 ,
                                                                            .ed4190 =  ed4190 ,
                                                                        };
                                                                        ( (  if_dash_just1303 ) ( ( ( * (  ed4190 ) ) .f_clipboard ) ,  ( (struct envunion1306){ .fun = (  enum Unit_7  (*) (  struct env1304*  ,    struct StrView_21  ) )lam1308 , .env =  envinst1304 } ) ) );
                                                                    } else {
                                                                        if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct env1313 envinst1313 = {
                                                                                .envinst120 = env->envinst120 ,
                                                                                .ed4190 =  ed4190 ,
                                                                            };
                                                                            ( (  if_dash_just1312 ) ( ( ( * (  ed4190 ) ) .f_clipboard ) ,  ( (struct envunion1315){ .fun = (  enum Unit_7  (*) (  struct env1313*  ,    struct StrView_21  ) )lam1317 , .env =  envinst1313 } ) ) );
                                                                        } else {
                                                                            if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                ( (  expand1319 ) ( ( (  pane988 ) ( (  ed4190 ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    ( (  set_dash_mode997 ) ( ( (  pane988 ) ( (  ed4190 ) ) ) ,  ( Mode_138_Select ) ) );
                                                                                    if ( ( (  is_dash_none1323 ) ( ( ( ( * (  ed4190 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                        (*  ed4190 ) .f_pane .f_sel = ( ( Maybe_28_Just ) ( ( ( ( * (  ed4190 ) ) .f_pane ) .f_cursor ) ) );
                                                                                    }
                                                                                } else {
                                                                                    if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        (*  ed4190 ) .f_mode = ( ( EditorMode_141_Cmd ) ( ( ( * ( (  pane988 ) ( (  ed4190 ) ) ) ) .f_cursor ) ,  ( (  mk1247 ) ( ( ( * (  ed4190 ) ) .f_al ) ) ) ) );
                                                                                    } else {
                                                                                        if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            (*  ed4190 ) .f_mode = ( ( EditorMode_141_Search ) ( ( ( * ( (  pane988 ) ( (  ed4190 ) ) ) ) .f_cursor ) ,  ( (  mk1247 ) ( ( ( * (  ed4190 ) ) .f_al ) ) ) ) );
                                                                                        } else {
                                                                                            if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  next_dash_match1324 ) ( (  ed4190 ) ) );
                                                                                            } else {
                                                                                                if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  prev_dash_match1361 ) ( (  ed4190 ) ) );
                                                                                                } else {
                                                                                                    if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( ">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        struct envunion145  temp1370 = ( (struct envunion145){ .fun = (  enum Unit_7  (*) (  struct env122*  ,    struct Pane_137 *  ) )indent_dash_selection1371 , .env =  env->envinst122 } );
                                                                                                        ( temp1370.fun ( &temp1370.env ,  ( (  pane988 ) ( (  ed4190 ) ) ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq786 ( ( dref4193 .stuff .Key_153_Char_s .field0 ) , ( (  from_dash_charlike787 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            struct envunion146  temp1387 = ( (struct envunion146){ .fun = (  enum Unit_7  (*) (  struct env125*  ,    struct Pane_137 *  ) )dedent_dash_selection1388 , .env =  env->envinst125 } );
                                                                                                            ( temp1387.fun ( &temp1387.env ,  ( (  pane988 ) ( (  ed4190 ) ) ) ) );
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
        if ( dref4193.tag == Key_153_Escape_t ) {
            ( (  set_dash_mode997 ) ( ( (  pane988 ) ( (  ed4190 ) ) ) ,  ( Mode_138_Normal ) ) );
        }
        else {
            if ( true ) {
            }
        }
    }
    return ( Unit_7_Unit );
}

struct envunion1403 {
    enum Unit_7  (*fun) (  struct env142*  ,    struct Editor_136 *  ,    struct Key_153  );
    struct env142 env;
};

static  enum Unit_7   add_dash_str_dash_at_dash_char1405 (   struct env111* env ,    struct Pane_137 *  self4023 ,    struct StrView_21  s4025 ) {
    struct Pos_20  cur4026 = ( ( * (  self4023 ) ) .f_cursor );
    struct envunion112  temp1406 = ( (struct envunion112){ .fun = (  struct Maybe_113  (*) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  ) )change1124 , .env =  env->envinst104 } );
    ( temp1406.fun ( &temp1406.env ,  ( ( * (  self4023 ) ) .f_buf ) ,  (  cur4026 ) ,  (  cur4026 ) ,  (  s4025 ) ,  ( (struct Maybe_113) { .tag = Maybe_113_None_t } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   backspace1408 (   struct env114* env ,    struct Pane_137 *  self4029 ) {
    struct Pos_20  prev_dash_cur4030 = ( ( * (  self4029 ) ) .f_cursor );
    ( (  move_dash_left944 ) ( (  self4029 ) ) );
    struct envunion115  temp1409 = ( (struct envunion115){ .fun = (  struct Maybe_113  (*) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  ) )change1124 , .env =  env->envinst104 } );
    ( temp1409.fun ( &temp1409.env ,  ( ( * (  self4029 ) ) .f_buf ) ,  ( ( * (  self4029 ) ) .f_cursor ) ,  (  prev_dash_cur4030 ) ,  ( (  from_dash_string220 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_113) { .tag = Maybe_113_None_t } ) ) );
    return ( Unit_7_Unit );
}

struct Array_1411 {
    char _arr [1];
};

static  char *   cast1412 (    struct Array_1411 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_802   as_dash_slice1410 (    struct Array_1411 *  arr2272 ) {
    return ( (struct Slice_802) { .f_ptr = ( (  cast1412 ) ( (  arr2272 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1411   from_dash_listlike1414 (    struct Array_1411  self330 ) {
    return (  self330 );
}

struct envunion1416 {
    enum Unit_7  (*fun) (  struct env111*  ,    struct Pane_137 *  ,    struct StrView_21  );
    struct env111 env;
};

struct Scanner_1419 {
    struct StrView_21  f_s;
};

static  struct Scanner_1419   mk_dash_from_dash_strview1421 (    struct StrView_21  s3169 ) {
    return ( (struct Scanner_1419) { .f_s = (  s3169 ) } );
}

struct TakeWhile_1426 {
    struct StrViewIter_603  f_it;
    bool (*  f_pred )(    struct Char_57  );
};

struct Map_1425 {
    struct TakeWhile_1426  field0;
    size_t (*  field1 )(    struct Char_57  );
};

static struct Map_1425 Map_1425_Map (  struct TakeWhile_1426  field0 ,  size_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1425 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1425   into_dash_iter1428 (    struct Map_1425  self796 ) {
    return (  self796 );
}

static  struct Maybe_606   next1430 (    struct TakeWhile_1426 *  self964 ) {
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

static  struct Maybe_1328   next1429 (    struct Map_1425 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1430 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_1328) { .tag = Maybe_1328_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_1328_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1427 (    struct Map_1425  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1425  it1099 = ( (  into_dash_iter1428 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1328  dref1100 = ( (  next1429 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1328_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1328_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1328_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1431 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1431);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1432;
    return (  temp1432 );
}

static  size_t   lam1433 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add232 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1424 (    struct Map_1425  it1110 ) {
    return ( (  reduce1427 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1433 ) ) );
}

static  struct TakeWhile_1426   into_dash_iter1435 (    struct TakeWhile_1426  self961 ) {
    return (  self961 );
}

static  struct Map_1425   map1434 (    struct TakeWhile_1426  iterable805 ,    size_t (*  fun807 )(    struct Char_57  ) ) {
    struct TakeWhile_1426  it808 = ( (  into_dash_iter1435 ) ( (  iterable805 ) ) );
    return ( ( Map_1425_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1426   take_dash_while1436 (    struct StrViewIter_603  it970 ,    bool (*  pred972 )(    struct Char_57  ) ) {
    return ( (struct TakeWhile_1426) { .f_it = ( (  into_dash_iter605 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1437 (    struct Char_57  c2202 ) {
    return ( (  c2202 ) .f_num_dash_bytes );
}

static  struct StrView_21   take_dash_while1423 (    struct StrView_21  self2198 ,    bool (*  fun2200 )(    struct Char_57  ) ) {
    size_t  bi2203 = ( (  sum1424 ) ( ( (  map1434 ) ( ( (  take_dash_while1436 ) ( ( (  chars608 ) ( (  self2198 ) ) ) ,  (  fun2200 ) ) ) ,  (  lam1437 ) ) ) ) );
    return ( (  byte_dash_substr385 ) ( (  self2198 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2203 ) ) );
}

static  struct StrView_21   take_dash_str_dash_while1422 (    struct Scanner_1419 *  sc3215 ,    bool (*  fun3217 )(    struct Char_57  ) ) {
    struct StrView_21  s3218 = ( (  take_dash_while1423 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  (  fun3217 ) ) );
    (*  sc3215 ) .f_s = ( (  byte_dash_substr_dash_from1351 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  ( (  num_dash_bytes984 ) ( (  s3218 ) ) ) ) );
    return (  s3218 );
}

static  bool   is_dash_not_dash_whitespace1438 (    struct Char_57  c2382 ) {
    return ( ! ( (  is_dash_whitespace1022 ) ( (  c2382 ) ) ) );
}

struct TakeWhile_1444 {
    struct StrViewIter_603  f_it;
    bool (*  f_pred )(    struct Char_57  );
};

struct Map_1443 {
    struct TakeWhile_1444  field0;
    size_t (*  field1 )(    struct Char_57  );
};

static struct Map_1443 Map_1443_Map (  struct TakeWhile_1444  field0 ,  size_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1443 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1443   into_dash_iter1446 (    struct Map_1443  self796 ) {
    return (  self796 );
}

static  struct Maybe_606   next1448 (    struct TakeWhile_1444 *  self964 ) {
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

static  struct Maybe_1328   next1447 (    struct Map_1443 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1448 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_1328) { .tag = Maybe_1328_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_1328_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1445 (    struct Map_1443  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1443  it1099 = ( (  into_dash_iter1446 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1328  dref1100 = ( (  next1447 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1328_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1328_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1328_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1449 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1449);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1450;
    return (  temp1450 );
}

static  size_t   lam1451 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add232 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1442 (    struct Map_1443  it1110 ) {
    return ( (  reduce1445 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1451 ) ) );
}

static  struct TakeWhile_1444   into_dash_iter1453 (    struct TakeWhile_1444  self961 ) {
    return (  self961 );
}

static  struct Map_1443   map1452 (    struct TakeWhile_1444  iterable805 ,    size_t (*  fun807 )(    struct Char_57  ) ) {
    struct TakeWhile_1444  it808 = ( (  into_dash_iter1453 ) ( (  iterable805 ) ) );
    return ( ( Map_1443_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1444   take_dash_while1454 (    struct StrViewIter_603  it970 ,    bool (*  pred972 )(    struct Char_57  ) ) {
    return ( (struct TakeWhile_1444) { .f_it = ( (  into_dash_iter605 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1455 (    struct Char_57  c2202 ) {
    return ( (  c2202 ) .f_num_dash_bytes );
}

static  struct StrView_21   take_dash_while1441 (    struct StrView_21  self2198 ,    bool (*  fun2200 )(    struct Char_57  ) ) {
    size_t  bi2203 = ( (  sum1442 ) ( ( (  map1452 ) ( ( (  take_dash_while1454 ) ( ( (  chars608 ) ( (  self2198 ) ) ) ,  (  fun2200 ) ) ) ,  (  lam1455 ) ) ) ) );
    return ( (  byte_dash_substr385 ) ( (  self2198 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2203 ) ) );
}

static  struct StrView_21   take_dash_str_dash_while1440 (    struct Scanner_1419 *  sc3215 ,    bool (*  fun3217 )(    struct Char_57  ) ) {
    struct StrView_21  s3218 = ( (  take_dash_while1441 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  (  fun3217 ) ) );
    (*  sc3215 ) .f_s = ( (  byte_dash_substr_dash_from1351 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  ( (  num_dash_bytes984 ) ( (  s3218 ) ) ) ) );
    return (  s3218 );
}

static  enum Unit_7   drop_dash_str_dash_while1439 (    struct Scanner_1419 *  sc3221 ,    bool (*  fun3223 )(    struct Char_57  ) ) {
    ( (  take_dash_str_dash_while1440 ) ( (  sc3221 ) ,  (  fun3223 ) ) );
    return ( Unit_7_Unit );
}

static  bool   eq1456 (    struct StrView_21  l2209 ,    struct StrView_21  r2211 ) {
    return (  eq1335 ( ( (  l2209 ) .f_contents ) , ( (  r2211 ) .f_contents ) ) );
}

static  enum Unit_7   undefined1458 (  ) {
    enum Unit_7  temp1459;
    return (  temp1459 );
}

static  enum Unit_7   todo1457 (  ) {
    ( (  print1028 ) ( ( (  from_dash_string220 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined1458 ) ( ) );
}

struct env1462 {
    bool (*  fun1126 )(    struct Char_57  );
};

struct envunion1463 {
    bool  (*fun) (  struct env1462*  ,    struct Char_57  ,    bool  );
    struct env1462 env;
};

static  bool   reduce1461 (    struct StrView_21  iterable1093 ,    bool  base1095 ,   struct envunion1463  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct StrViewIter_603  it1099 = ( (  into_dash_iter609 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_606  dref1100 = ( (  next607 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_606_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_606_Just_t ) {
                struct envunion1463  temp1464 = (  fun1097 );
                x1098 = ( temp1464.fun ( &temp1464.env ,  ( dref1100 .stuff .Maybe_606_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1465 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1465);
    exit ( 1 );
    ( Unit_7_Unit );
    bool  temp1466;
    return (  temp1466 );
}

static  bool   lam1467 (   struct env1462* env ,    struct Char_57  e1128 ,    bool  x1130 ) {
    return ( ( ( env->fun1126 ) ( (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1460 (    struct StrView_21  it1124 ,    bool (*  fun1126 )(    struct Char_57  ) ) {
    struct env1462 envinst1462 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1461 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1463){ .fun = (  bool  (*) (  struct env1462*  ,    struct Char_57  ,    bool  ) )lam1467 , .env =  envinst1462 } ) ) );
}

struct env1476 {
    struct env52 envinst52;
    struct StrBuilder_54 *  builder2749;
};

struct envunion1477 {
    enum Unit_7  (*fun) (  struct env1476*  ,    struct Char_57  );
    struct env1476 env;
};

static  enum Unit_7   for_dash_each1475 (    struct StrViewIter_603  iterable1074 ,   struct envunion1477  fun1076 ) {
    struct StrViewIter_603  temp1478 = ( (  into_dash_iter605 ) ( (  iterable1074 ) ) );
    struct StrViewIter_603 *  it1077 = ( &temp1478 );
    while ( ( true ) ) {
        struct Maybe_606  dref1078 = ( (  next607 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_606_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_606_Just_t ) {
                struct envunion1477  temp1479 = (  fun1076 );
                ( temp1479.fun ( &temp1479.env ,  ( dref1078 .stuff .Maybe_606_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1480 (   struct env1476* env ,    struct Char_57  c2753 ) {
    struct envunion56  temp1481 = ( (struct envunion56){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1280 , .env =  env->envinst52 } );
    return ( temp1481.fun ( &temp1481.env ,  ( env->builder2749 ) ,  (  c2753 ) ) );
}

static  enum Unit_7   write1474 (   struct env55* env ,    struct StrBuilder_54 *  builder2749 ,    struct StrView_21  s2751 ) {
    struct env1476 envinst1476 = {
        .envinst52 = env->envinst52 ,
        .builder2749 =  builder2749 ,
    };
    ( (  for_dash_each1475 ) ( ( (  chars608 ) ( (  s2751 ) ) ) ,  ( (struct envunion1477){ .fun = (  enum Unit_7  (*) (  struct env1476*  ,    struct Char_57  ) )lam1480 , .env =  envinst1476 } ) ) );
    return ( Unit_7_Unit );
}

static  struct StrView_21   mk_dash_dyn_dash_str1471 (   struct env61* env ,    struct StrView_21  s2807 ,    enum CAllocator_9  al2809 ) {
    struct StrBuilder_54  temp1472 = ( (  mk1247 ) ( (  al2809 ) ) );
    struct StrBuilder_54 *  sb2810 = ( &temp1472 );
    struct envunion63  temp1473 = ( (struct envunion63){ .fun = (  enum Unit_7  (*) (  struct env55*  ,    struct StrBuilder_54 *  ,    struct StrView_21  ) )write1474 , .env =  env->envinst55 } );
    ( temp1473.fun ( &temp1473.env ,  (  sb2810 ) ,  (  s2807 ) ) );
    struct envunion62  temp1482 = ( (struct envunion62){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1280 , .env =  env->envinst52 } );
    ( temp1482.fun ( &temp1482.env ,  (  sb2810 ) ,  ( (  nullchar528 ) ( ) ) ) );
    struct StrView_21  dynstr2811 = ( (  as_dash_str1289 ) ( (  sb2810 ) ) );
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = ( ( (  dynstr2811 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub304 ( ( ( (  dynstr2811 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_7   set_dash_msg1469 (   struct env130* env ,    struct Editor_136 *  ed4144 ,    struct StrView_21  s4146 ) {
    ( (  reset_dash_msg932 ) ( (  ed4144 ) ) );
    struct envunion131  temp1470 = ( (struct envunion131){ .fun = (  struct StrView_21  (*) (  struct env61*  ,    struct StrView_21  ,    enum CAllocator_9  ) )mk_dash_dyn_dash_str1471 , .env =  env->envinst61 } );
    (*  ed4144 ) .f_msg = ( ( Maybe_140_Just ) ( ( temp1470.fun ( &temp1470.env ,  (  s4146 ) ,  ( ( * (  ed4144 ) ) .f_al ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   run_dash_cmd1418 (   struct env134* env ,    struct Editor_136 *  ed4157 ,    struct StrView_21  s4159 ) {
    struct Scanner_1419  temp1420 = ( (  mk_dash_from_dash_strview1421 ) ( (  s4159 ) ) );
    struct Scanner_1419 *  sc4160 = ( &temp1420 );
    struct StrView_21  cmd4161 = ( (  take_dash_str_dash_while1422 ) ( (  sc4160 ) ,  (  is_dash_not_dash_whitespace1438 ) ) );
    ( (  drop_dash_str_dash_while1439 ) ( (  sc4160 ) ,  (  is_dash_whitespace1022 ) ) );
    if ( (  eq1456 ( (  cmd4161 ) , ( (  from_dash_charlike1107 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4157 ) .f_running = ( false );
    } else {
        if ( (  eq1456 ( (  cmd4161 ) , ( (  from_dash_string220 ) ( ( "wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq1456 ( (  cmd4161 ) , ( (  from_dash_charlike1107 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  todo1457 ) ( ) );
            } else {
                if ( (  eq1456 ( (  cmd4161 ) , ( (  from_dash_string220 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                } else {
                    if ( ( (  all1460 ) ( (  cmd4161 ) ,  (  is_dash_digit826 ) ) ) ) {
                    } else {
                        struct envunion135  temp1468 = ( (struct envunion135){ .fun = (  enum Unit_7  (*) (  struct env130*  ,    struct Editor_136 *  ,    struct StrView_21  ) )set_dash_msg1469 , .env =  env->envinst130 } );
                        ( temp1468.fun ( &temp1468.env ,  (  ed4157 ) ,  ( (  from_dash_string220 ) ( ( "unknown command" ) ,  ( 15 ) ) ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   free1483 (    struct StrBuilder_54 *  builder2793 ) {
    ( (  free424 ) ( ( & ( ( * (  builder2793 ) ) .f_chars ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Char_57   ascii_dash_char1485 (    char  c782 ) {
    return ( (  from_dash_u8892 ) ( ( (  ascii_dash_u8745 ) ( (  c782 ) ) ) ) );
}

static  struct Maybe_820   reduce1488 (    struct StrViewIter_603  iterable1093 ,    struct Maybe_820  base1095 ,    struct Maybe_820 (*  fun1097 )(    struct Char_57  ,    struct Maybe_820  ) ) {
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
    const char*  temp1489 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1489);
    exit ( 1 );
    ( Unit_7_Unit );
    struct Maybe_820  temp1490;
    return (  temp1490 );
}

static  struct Maybe_820   sequence_dash_maybe1491 (    struct Char_57  e2460 ,    struct Maybe_820  b2462 ) {
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

static  struct Maybe_820   parse_dash_int1487 (    struct StrView_21  s2457 ) {
    struct StrViewIter_603  cs2467 = ( (  chars608 ) ( (  s2457 ) ) );
    struct Maybe_606  dref2468 = ( (  head1025 ) ( (  cs2467 ) ) );
    if ( dref2468.tag == Maybe_606_Just_t ) {
        return ( (  reduce1488 ) ( (  cs2467 ) ,  ( ( Maybe_820_Just ) ( (  from_dash_integral303 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1491 ) ) );
    }
    else {
        if ( dref2468.tag == Maybe_606_None_t ) {
            return ( (struct Maybe_820) { .tag = Maybe_820_None_t } );
        }
    }
}

static  enum Unit_7   live_dash_cmd1486 (    struct Editor_136 *  ed4149 ,    struct StrView_21  cmd4151 ) {
    struct Maybe_820  dref4152 = ( (  parse_dash_int1487 ) ( (  cmd4151 ) ) );
    if ( dref4152.tag == Maybe_820_Just_t ) {
        int32_t  line4154 = ( (  clamp1301 ) ( ( (  i64_dash_i32862 ) ( ( dref4152 .stuff .Maybe_820_Just_s .field0 ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( ( (  num_dash_lines991 ) ( ( ( * ( (  pane988 ) ( (  ed4149 ) ) ) ) .f_buf ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
        ( (  set_dash_cursors945 ) ( ( (  pane988 ) ( (  ed4149 ) ) ) ,  ( (struct Pos_20) { .f_line = (  line4154 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_946_NoChanges ) ) );
    }
    else {
        if ( dref4152.tag == Maybe_820_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrViewIter_603   chars1496 (    struct StrBuilder_54  s2801 ) {
    return ( (  into_dash_iter609 ) ( ( (  as_dash_str1289 ) ( ( & (  s2801 ) ) ) ) ) );
}

static  struct StrViewIter_603   into_dash_iter1495 (    struct StrBuilder_54  self2804 ) {
    return ( (  chars1496 ) ( (  self2804 ) ) );
}

static  struct Maybe_606   head1493 (    struct StrBuilder_54  it1142 ) {
    struct StrViewIter_603  temp1494 = ( (  into_dash_iter1495 ) ( (  it1142 ) ) );
    return ( (  next607 ) ( ( &temp1494 ) ) );
}

static  bool   null1492 (    struct StrBuilder_54  it1151 ) {
    struct Maybe_606  dref1152 = ( (  head1493 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_606_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_7   remove1502 (   struct env34* env ,    struct List_11 *  list2076 ,    size_t  i2078 ) {
    struct envunion35  temp1503 = ( (struct envunion35){ .fun = (  enum Unit_7  (*) (  struct env32*  ,    struct List_11 *  ,    size_t  ,    size_t  ) )remove_dash_range427 , .env =  env->envinst32 } );
    ( temp1503.fun ( &temp1503.env ,  (  list2076 ) ,  (  i2078 ) ,  (  op_dash_add232 ( (  i2078 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   pop1500 (   struct env36* env ,    struct List_11 *  list2092 ) {
    if ( (  eq239 ( ( ( * (  list2092 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1061 ) ( ( (  from_dash_string220 ) ( ( "List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct envunion37  temp1501 = ( (struct envunion37){ .fun = (  enum Unit_7  (*) (  struct env34*  ,    struct List_11 *  ,    size_t  ) )remove1502 , .env =  env->envinst34 } );
    return ( temp1501.fun ( &temp1501.env ,  (  list2092 ) ,  (  op_dash_sub304 ( ( ( * (  list2092 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  enum Unit_7   pop1498 (   struct env59* env ,    struct StrBuilder_54 *  sb2767 ) {
    struct envunion60  temp1499 = ( (struct envunion60){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ) )pop1500 , .env =  env->envinst36 } );
    return ( temp1499.fun ( &temp1499.env ,  ( & ( ( * (  sb2767 ) ) .f_chars ) ) ) );
}

struct env1505 {
    ;
    struct Editor_136 *  ed4207;
};

struct envunion1506 {
    enum Unit_7  (*fun) (  struct env1505*  ,    struct StrView_21  );
    struct env1505 env;
};

static  enum Unit_7   if_dash_just1504 (    struct Maybe_140  x1291 ,   struct envunion1506  fun1293 ) {
    struct Maybe_140  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_140_Just_t ) {
        struct envunion1506  temp1507 = (  fun1293 );
        ( temp1507.fun ( &temp1507.env ,  ( dref1294 .stuff .Maybe_140_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_140_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1508 (   struct env1505* env ,    struct StrView_21  st4223 ) {
    ( (  free938 ) ( (  st4223 ) ,  ( ( * ( env->ed4207 ) ) .f_al ) ) );
    return ( Unit_7_Unit );
}

struct envunion1510 {
    enum Unit_7  (*fun) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  );
    struct env52 env;
};

static  struct Maybe_606   head1513 (    struct StrView_21  it1142 ) {
    struct StrViewIter_603  temp1514 = ( (  into_dash_iter609 ) ( (  it1142 ) ) );
    return ( (  next607 ) ( ( &temp1514 ) ) );
}

static  bool   null1512 (    struct StrView_21  it1151 ) {
    struct Maybe_606  dref1152 = ( (  head1513 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_606_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_7   live_dash_search1511 (    struct Editor_136 *  ed4164 ,    struct Pos_20  begin_dash_pos4166 ,    struct StrView_21  query4168 ) {
    if ( ( ! ( (  null1512 ) ( (  query4168 ) ) ) ) ) {
        struct Maybe_1325  dref4169 = ( (  search_dash_from1326 ) ( ( (  pane988 ) ( (  ed4164 ) ) ) ,  (  begin_dash_pos4166 ) ,  (  query4168 ) ) );
        if ( dref4169.tag == Maybe_1325_Just_t ) {
            ( (  set_dash_cursors945 ) ( ( (  pane988 ) ( (  ed4164 ) ) ) ,  ( dref4169 .stuff .Maybe_1325_Just_s .field0 .field1 ) ,  ( ( Maybe_28_Just ) ( ( dref4169 .stuff .Maybe_1325_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_946_NoChanges ) ) );
        }
        else {
            if ( dref4169.tag == Maybe_1325_None_t ) {
                ( (  set_dash_cursors945 ) ( ( (  pane988 ) ( (  ed4164 ) ) ) ,  (  begin_dash_pos4166 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_946_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors945 ) ( ( (  pane988 ) ( (  ed4164 ) ) ) ,  (  begin_dash_pos4166 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_946_NoChanges ) ) );
    }
    return ( Unit_7_Unit );
}

struct envunion1516 {
    enum Unit_7  (*fun) (  struct env59*  ,    struct StrBuilder_54 *  );
    struct env59 env;
};

static  enum Unit_7   handle_dash_key941 (   struct env151* env ,    struct Editor_136 *  ed4207 ,    struct Key_153  key4209 ) {
    struct EditorMode_141 *  dref4210 = ( & ( ( * (  ed4207 ) ) .f_mode ) );
    if ( (* dref4210 ).tag == EditorMode_141_Normal_t ) {
        enum Mode_138  dref4211 = ( ( ( * (  ed4207 ) ) .f_pane ) .f_mode );
        switch (  dref4211 ) {
            case Mode_138_Normal : {
                struct envunion152  temp942 = ( (struct envunion152){ .fun = (  enum Unit_7  (*) (  struct env142*  ,    struct Editor_136 *  ,    struct Key_153  ) )handle_dash_normal_dash_key943 , .env =  env->envinst142 } );
                ( temp942.fun ( &temp942.env ,  (  ed4207 ) ,  (  key4209 ) ) );
                break;
            }
            case Mode_138_Select : {
                struct envunion1403  temp1402 = ( (struct envunion1403){ .fun = (  enum Unit_7  (*) (  struct env142*  ,    struct Editor_136 *  ,    struct Key_153  ) )handle_dash_normal_dash_key943 , .env =  env->envinst142 } );
                ( temp1402.fun ( &temp1402.env ,  (  ed4207 ) ,  (  key4209 ) ) );
                break;
            }
            case Mode_138_Insert : {
                struct Key_153  dref4212 = (  key4209 );
                if ( dref4212.tag == Key_153_Escape_t ) {
                    ( (  set_dash_mode997 ) ( ( (  pane988 ) ( (  ed4207 ) ) ) ,  ( Mode_138_Normal ) ) );
                }
                else {
                    if ( dref4212.tag == Key_153_Enter_t ) {
                        struct envunion154  temp1404 = ( (struct envunion154){ .fun = (  enum Unit_7  (*) (  struct env111*  ,    struct Pane_137 *  ,    struct StrView_21  ) )add_dash_str_dash_at_dash_char1405 , .env =  env->envinst111 } );
                        ( temp1404.fun ( &temp1404.env ,  ( (  pane988 ) ( (  ed4207 ) ) ) ,  ( (  from_dash_charlike1107 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right989 ) ( ( (  pane988 ) ( (  ed4207 ) ) ) ) );
                    }
                    else {
                        if ( dref4212.tag == Key_153_Backspace_t ) {
                            struct envunion158  temp1407 = ( (struct envunion158){ .fun = (  enum Unit_7  (*) (  struct env114*  ,    struct Pane_137 *  ) )backspace1408 , .env =  env->envinst114 } );
                            ( temp1407.fun ( &temp1407.env ,  ( (  pane988 ) ( (  ed4207 ) ) ) ) );
                        }
                        else {
                            if ( dref4212.tag == Key_153_Char_t ) {
                                struct Array_1411  temp1413 = ( (  from_dash_listlike1414 ) ( ( (struct Array_1411) { ._arr = { ( dref4212 .stuff .Key_153_Char_s .field0 ) } } ) ) );
                                struct StrView_21  s4214 = ( (  from_dash_ascii_dash_slice817 ) ( ( (  as_dash_slice1410 ) ( ( &temp1413 ) ) ) ) );
                                struct envunion1416  temp1415 = ( (struct envunion1416){ .fun = (  enum Unit_7  (*) (  struct env111*  ,    struct Pane_137 *  ,    struct StrView_21  ) )add_dash_str_dash_at_dash_char1405 , .env =  env->envinst111 } );
                                ( temp1415.fun ( &temp1415.env ,  ( (  pane988 ) ( (  ed4207 ) ) ) ,  (  s4214 ) ) );
                                ( (  move_dash_right989 ) ( ( (  pane988 ) ( (  ed4207 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4210 ).tag == EditorMode_141_Cmd_t ) {
            struct Key_153  dref4217 = (  key4209 );
            if ( dref4217.tag == Key_153_Escape_t ) {
                ( (  set_dash_cursors945 ) ( ( (  pane988 ) ( (  ed4207 ) ) ) ,  ( (* dref4210 ) .stuff .EditorMode_141_Cmd_s .field0 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_946_UpdateVI ) ) );
                (*  ed4207 ) .f_mode = ( (struct EditorMode_141) { .tag = EditorMode_141_Normal_t } );
            }
            else {
                if ( dref4217.tag == Key_153_Enter_t ) {
                    struct envunion157  temp1417 = ( (struct envunion157){ .fun = (  enum Unit_7  (*) (  struct env134*  ,    struct Editor_136 *  ,    struct StrView_21  ) )run_dash_cmd1418 , .env =  env->envinst134 } );
                    ( temp1417.fun ( &temp1417.env ,  (  ed4207 ) ,  ( (  as_dash_str1289 ) ( ( & ( (* dref4210 ) .stuff .EditorMode_141_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1483 ) ( ( & ( (* dref4210 ) .stuff .EditorMode_141_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors945 ) ( ( (  pane988 ) ( (  ed4207 ) ) ) ,  ( ( * ( (  pane988 ) ( (  ed4207 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_946_UpdateVI ) ) );
                    (*  ed4207 ) .f_mode = ( (struct EditorMode_141) { .tag = EditorMode_141_Normal_t } );
                }
                else {
                    if ( dref4217.tag == Key_153_Char_t ) {
                        struct envunion156  temp1484 = ( (struct envunion156){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1280 , .env =  env->envinst52 } );
                        ( temp1484.fun ( &temp1484.env ,  ( & ( (* dref4210 ) .stuff .EditorMode_141_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1485 ) ( ( dref4217 .stuff .Key_153_Char_s .field0 ) ) ) ) );
                        ( (  live_dash_cmd1486 ) ( (  ed4207 ) ,  ( (  as_dash_str1289 ) ( ( & ( (* dref4210 ) .stuff .EditorMode_141_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4217.tag == Key_153_Backspace_t ) {
                            if ( ( ! ( (  null1492 ) ( ( (* dref4210 ) .stuff .EditorMode_141_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion155  temp1497 = ( (struct envunion155){ .fun = (  enum Unit_7  (*) (  struct env59*  ,    struct StrBuilder_54 *  ) )pop1498 , .env =  env->envinst59 } );
                                ( temp1497.fun ( &temp1497.env ,  ( & ( (* dref4210 ) .stuff .EditorMode_141_Cmd_s .field1 ) ) ) );
                            }
                            ( (  live_dash_cmd1486 ) ( (  ed4207 ) ,  ( (  as_dash_str1289 ) ( ( & ( (* dref4210 ) .stuff .EditorMode_141_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref4210 ).tag == EditorMode_141_Search_t ) {
                struct Key_153  dref4221 = (  key4209 );
                if ( dref4221.tag == Key_153_Escape_t ) {
                    ( (  set_dash_cursors945 ) ( ( (  pane988 ) ( (  ed4207 ) ) ) ,  ( (* dref4210 ) .stuff .EditorMode_141_Search_s .field0 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_946_UpdateVI ) ) );
                    (*  ed4207 ) .f_mode = ( (struct EditorMode_141) { .tag = EditorMode_141_Normal_t } );
                }
                else {
                    if ( dref4221.tag == Key_153_Enter_t ) {
                        ( (  set_dash_cursors945 ) ( ( (  pane988 ) ( (  ed4207 ) ) ) ,  ( ( * ( (  pane988 ) ( (  ed4207 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane988 ) ( (  ed4207 ) ) ) ) .f_sel ) ,  ( CursorMovement_946_UpdateVI ) ) );
                        struct env1505 envinst1505 = {
                            .ed4207 =  ed4207 ,
                        };
                        ( (  if_dash_just1504 ) ( ( ( * (  ed4207 ) ) .f_search_dash_term ) ,  ( (struct envunion1506){ .fun = (  enum Unit_7  (*) (  struct env1505*  ,    struct StrView_21  ) )lam1508 , .env =  envinst1505 } ) ) );
                        if ( ( ! ( (  null1492 ) ( ( (* dref4210 ) .stuff .EditorMode_141_Search_s .field1 ) ) ) ) ) {
                            struct Pos_20  to4224 = ( ( * ( (  pane988 ) ( (  ed4207 ) ) ) ) .f_cursor );
                            struct Pos_20  from4225 = ( (  or_dash_else1096 ) ( ( ( * ( (  pane988 ) ( (  ed4207 ) ) ) ) .f_sel ) ,  (  to4224 ) ) );
                            (*  ed4207 ) .f_search_dash_term = ( ( Maybe_140_Just ) ( ( (  as_dash_str1289 ) ( ( & ( (* dref4210 ) .stuff .EditorMode_141_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4207 ) .f_search_dash_term = ( (struct Maybe_140) { .tag = Maybe_140_None_t } );
                        }
                        (*  ed4207 ) .f_mode = ( (struct EditorMode_141) { .tag = EditorMode_141_Normal_t } );
                    }
                    else {
                        if ( dref4221.tag == Key_153_Char_t ) {
                            struct envunion1510  temp1509 = ( (struct envunion1510){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1280 , .env =  env->envinst52 } );
                            ( temp1509.fun ( &temp1509.env ,  ( & ( (* dref4210 ) .stuff .EditorMode_141_Search_s .field1 ) ) ,  ( (  ascii_dash_char1485 ) ( ( dref4221 .stuff .Key_153_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1511 ) ( (  ed4207 ) ,  ( (* dref4210 ) .stuff .EditorMode_141_Search_s .field0 ) ,  ( (  as_dash_str1289 ) ( ( & ( (* dref4210 ) .stuff .EditorMode_141_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4221.tag == Key_153_Backspace_t ) {
                                if ( ( ! ( (  null1492 ) ( ( (* dref4210 ) .stuff .EditorMode_141_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1516  temp1515 = ( (struct envunion1516){ .fun = (  enum Unit_7  (*) (  struct env59*  ,    struct StrBuilder_54 *  ) )pop1498 , .env =  env->envinst59 } );
                                    ( temp1515.fun ( &temp1515.env ,  ( & ( (* dref4210 ) .stuff .EditorMode_141_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1511 ) ( (  ed4207 ) ,  ( (* dref4210 ) .stuff .EditorMode_141_Search_s .field0 ) ,  ( (  as_dash_str1289 ) ( ( & ( (* dref4210 ) .stuff .EditorMode_141_Search_s .field1 ) ) ) ) ) );
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
                    ( (  todo1457 ) ( ) );
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

struct envunion1518 {
    bool  (*fun) (  struct env77*  ,    struct Screen_661 *  );
    struct env77 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1519 (   struct env77* env ,    struct Screen_661 *  screen3461 ) {
    struct Tui_73 *  tui3462 = ( ( * (  screen3461 ) ) .f_tui );
    struct envunion78  temp1520 = ( (struct envunion78){ .fun = (  bool  (*) (  struct env70*  ,    struct Tui_73 *  ) )update_dash_dimensions732 , .env =  env->envinst70 } );
    bool  updated_dash_dimensions3463 = ( temp1520.fun ( &temp1520.env ,  (  tui3462 ) ) );
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

static  bool   should_dash_redraw1521 (    struct Tui_73 *  tui3388 ) {
    bool  redraw3389 = ( ( * (  tui3388 ) ) .f_should_dash_redraw );
    (*  tui3388 ) .f_should_dash_redraw = ( false );
    return (  redraw3389 );
}

struct env1525 {
    struct Slice_662  s1905;
    struct Cell_663 (*  fun1907 )(    struct Cell_663  );
    ;
    ;
    ;
};

struct envunion1526 {
    enum Unit_7  (*fun) (  struct env1525*  ,    int32_t  );
    struct env1525 env;
};

static  enum Unit_7   for_dash_each1524 (    struct Range_686  iterable1074 ,   struct envunion1526  fun1076 ) {
    struct RangeIter_689  temp1527 = ( (  into_dash_iter691 ) ( (  iterable1074 ) ) );
    struct RangeIter_689 *  it1077 = ( &temp1527 );
    while ( ( true ) ) {
        struct Maybe_272  dref1078 = ( (  next692 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_272_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_272_Just_t ) {
                struct envunion1526  temp1528 = (  fun1076 );
                ( temp1528.fun ( &temp1528.env ,  ( dref1078 .stuff .Maybe_272_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1529 (   struct env1525* env ,    int32_t  i1909 ) {
    return ( (  set696 ) ( ( env->s1905 ) ,  ( (  i32_dash_size262 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get700 ( ( env->s1905 ) , ( (  i32_dash_size262 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_7   map1523 (    struct Slice_662  s1905 ,    struct Cell_663 (*  fun1907 )(    struct Cell_663  ) ) {
    struct env1525 envinst1525 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each1524 ) ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_i32196 ) ( (  op_dash_sub304 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1526){ .fun = (  enum Unit_7  (*) (  struct env1525*  ,    int32_t  ) )lam1529 , .env =  envinst1525 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Cell_663   lam1530 (    struct Cell_663  dref3425 ) {
    return ( (  default_dash_cell708 ) ( ) );
}

static  enum Unit_7   clear_dash_screen1522 (    struct Screen_661 *  screen3424 ) {
    ( (  map1523 ) ( ( ( * (  screen3424 ) ) .f_current ) ,  (  lam1530 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_screen_dash_fg1531 (    struct Screen_661 *  screen3470 ,    struct Color_664  c3472 ) {
    (*  screen3470 ) .f_default_dash_fg = (  c3472 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_screen_dash_bg1532 (    struct Screen_661 *  screen3475 ,    struct Color_664  c3477 ) {
    (*  screen3475 ) .f_default_dash_bg = (  c3477 );
    return ( Unit_7_Unit );
}

struct ScreenDims_1534 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

static  int32_t   cast1536 (    uint32_t  x356 ) {
    return ( (int32_t ) (  x356 ) );
}

static  int32_t   u32_dash_i321535 (    uint32_t  x660 ) {
    return ( (  cast1536 ) ( (  x660 ) ) );
}

static  int32_t   screen_dash_width1539 (    struct ScreenDims_1534  sd3877 ) {
    return (  op_dash_add274 ( (  op_dash_sub812 ( ( (  sd3877 ) .f_to_dash_sx ) , ( (  sd3877 ) .f_from_dash_sx ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1540 (    struct ScreenDims_1534  sd3880 ) {
    return (  op_dash_add274 ( (  op_dash_sub812 ( ( (  sd3880 ) .f_to_dash_sy ) , ( (  sd3880 ) .f_from_dash_sy ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
}

static  enum Unit_7   update_dash_screen_dash_offset1538 (    struct Pane_137 *  pane3883 ,    struct ScreenDims_1534  sd3885 ) {
    struct Pos_20  cur3886 = ( ( * (  pane3883 ) ) .f_cursor );
    int32_t  cur_dash_sx3887 = ( (  pos_dash_vi949 ) ( ( ( * (  pane3883 ) ) .f_buf ) ,  (  cur3886 ) ) );
    struct ScreenCursorOffset_139  sc_dash_off3888 = ( ( * (  pane3883 ) ) .f_sc_dash_off );
    int32_t  sw3889 = (  op_dash_sub812 ( ( (  screen_dash_width1539 ) ( (  sd3885 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    int32_t  sh3890 = (  op_dash_sub812 ( ( (  screen_dash_height1540 ) ( (  sd3885 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
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

struct IntStrIter_1542 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

static  struct IntStrIter_1542   into_dash_iter1544 (    struct IntStrIter_1542  self1419 ) {
    return (  self1419 );
}

struct env1548 {
    int32_t  base1210;
    ;
};

struct envunion1549 {
    int32_t  (*fun) (  struct env1548*  ,    int32_t  ,    int32_t  );
    struct env1548 env;
};

static  int32_t   reduce1547 (    struct Range_686  iterable1093 ,    int32_t  base1095 ,   struct envunion1549  fun1097 ) {
    int32_t  x1098 = (  base1095 );
    struct RangeIter_689  it1099 = ( (  into_dash_iter691 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next692 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                struct envunion1549  temp1550 = (  fun1097 );
                x1098 = ( temp1550.fun ( &temp1550.env ,  ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1551 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1551);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1552;
    return (  temp1552 );
}

static  int32_t   lam1553 (   struct env1548* env ,    int32_t  item1214 ,    int32_t  x1216 ) {
    return (  op_dash_mul1358 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int32_t   pow1546 (    int32_t  base1210 ,    int32_t  p1212 ) {
    struct env1548 envinst1548 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1547 ) ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral48 ( 1 ) ) ,  ( (struct envunion1549){ .fun = (  int32_t  (*) (  struct env1548*  ,    int32_t  ,    int32_t  ) )lam1553 , .env =  envinst1548 } ) ) );
}

static  uint8_t   cast1554 (    int32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_606   next1545 (    struct IntStrIter_1542 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_606_Just ) ( ( (  from_dash_charlike221 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp317 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
    }
    int32_t  trim_dash_down1423 = ( (  pow1546 ) ( (  from_dash_integral48 ( 10 ) ) ,  (  op_dash_sub812 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    int32_t  upper1424 = (  op_dash_div1357 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    int32_t  upper_dash_mask1425 = (  op_dash_mul1358 ( (  op_dash_div1357 ( (  upper1424 ) , (  from_dash_integral48 ( 10 ) ) ) ) , (  from_dash_integral48 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1554 ) ( (  op_dash_sub812 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub812 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8892 ) ( (  op_dash_add782 ( (  digit1426 ) , (  from_dash_integral212 ( 48 ) ) ) ) ) );
    return ( ( Maybe_606_Just ) ( (  digit_dash_char1427 ) ) );
}

static  size_t   reduce1543 (    struct IntStrIter_1542  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_57  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct IntStrIter_1542  it1099 = ( (  into_dash_iter1544 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_606  dref1100 = ( (  next1545 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_606_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_606_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_606_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1555 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1555);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1556;
    return (  temp1556 );
}

static  size_t   lam1557 (    struct Char_57  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add232 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1541 (    struct IntStrIter_1542  it1104 ) {
    return ( (  reduce1543 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1557 ) ) );
}

static  int32_t   count_dash_digits1560 (    int32_t  self1430 ) {
    if ( (  eq320 ( (  self1430 ) , (  from_dash_integral48 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp317 ( (  self1430 ) , (  from_dash_integral48 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1357 ( (  self1430 ) , (  from_dash_integral48 ( 10 ) ) ) );
        digits1431 = (  op_dash_add274 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1542   int_dash_iter1559 (    int32_t  int1434 ) {
    if ( (  cmp317 ( (  int1434 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1542) { .f_int = (  op_dash_neg636 ( (  int1434 ) ) ) , .f_len = ( (  count_dash_digits1560 ) ( (  op_dash_neg636 ( (  int1434 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1542) { .f_int = (  int1434 ) , .f_len = ( (  count_dash_digits1560 ) ( (  int1434 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1542   chars1558 (    int32_t  self1443 ) {
    return ( (  int_dash_iter1559 ) ( (  self1443 ) ) );
}

struct Map_1565 {
    struct IntStrIter_1542  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1565 Map_1565_Map (  struct IntStrIter_1542  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1565 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1565   into_dash_iter1567 (    struct Map_1565  self796 ) {
    return (  self796 );
}

static  struct Maybe_272   next1568 (    struct Map_1565 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1545 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_272_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1566 (    struct Map_1565  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1565  it1099 = ( (  into_dash_iter1567 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next1568 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1569 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1569);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1570;
    return (  temp1570 );
}

static  int32_t   lam1571 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add274 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1564 (    struct Map_1565  it1110 ) {
    return ( (  reduce1566 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1571 ) ) );
}

static  struct Map_1565   map1572 (    struct IntStrIter_1542  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct IntStrIter_1542  it808 = ( (  into_dash_iter1544 ) ( (  iterable805 ) ) );
    return ( ( Map_1565_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  enum Unit_7   put_dash_char1576 (    struct Screen_661 *  screen3508 ,    struct Char_57  c3510 ,    int32_t  x3512 ,    int32_t  y3514 ) {
    int32_t  w3515 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3508 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp317 ( (  x3512 ) , (  w3515 ) ) != 0 ) || (  cmp317 ( (  y3514 ) , ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3508 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp317 ( (  x3512 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) ) || (  cmp317 ( (  y3514 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    size_t  i3516 = ( (  i32_dash_size262 ) ( (  op_dash_add274 ( (  op_dash_mul1358 ( (  y3514 ) , (  w3515 ) ) ) , (  x3512 ) ) ) ) );
    struct Color_664  fg3517 = ( ( * (  screen3508 ) ) .f_default_dash_fg );
    struct Color_664  bg3518 = ( ( * (  screen3508 ) ) .f_default_dash_bg );
    struct Char_57  c3519 = (  c3510 );
    int32_t  char_dash_width3520 = ( (  wcwidth965 ) ( (  c3519 ) ) );
    if ( ( (  cmp317 ( (  x3512 ) , (  from_dash_integral48 ( 0 ) ) ) == 2 ) && (  cmp317 ( ( (  elem_dash_get700 ( ( ( * (  screen3508 ) ) .f_current ) , (  op_dash_sub304 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral48 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_663  pc3521 = (  elem_dash_get700 ( ( ( * (  screen3508 ) ) .f_current ) , (  op_dash_sub304 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set696 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  op_dash_sub304 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_663) { .f_c = ( (  from_dash_charlike221 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3521 ) .f_fg ) , .f_bg = ( (  pc3521 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral48 ( 1 ) ) } ) ) );
    }
    ( (  set696 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  i3516 ) ,  ( (struct Cell_663) { .f_c = (  c3519 ) , .f_fg = (  fg3517 ) , .f_bg = (  bg3518 ) , .f_char_dash_width = (  char_dash_width3520 ) } ) ) );
    struct RangeIter_689  temp1577 =  into_dash_iter691 ( ( (  to694 ) ( (  op_dash_add274 ( (  x3512 ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  ( (  min469 ) ( (  op_dash_sub812 ( (  op_dash_add274 ( (  x3512 ) , (  char_dash_width3520 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  w3515 ) ) ) ) ) );
    while (true) {
        struct Maybe_272  __cond1578 =  next692 (&temp1577);
        if (  __cond1578 .tag == 0 ) {
            break;
        }
        int32_t  xx3523 =  __cond1578 .stuff .Maybe_272_Just_s .field0;
        size_t  i3524 = ( (  i32_dash_size262 ) ( (  op_dash_add274 ( (  op_dash_mul1358 ( (  y3514 ) , (  w3515 ) ) ) , (  xx3523 ) ) ) ) );
        ( (  set696 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  i3524 ) ,  ( (struct Cell_663) { .f_c = ( (  from_dash_charlike221 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = (  fg3517 ) , .f_bg = (  bg3518 ) , .f_char_dash_width = (  from_dash_integral48 ( 1 ) ) } ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str1573 (    struct Screen_661 *  screen3527 ,    int32_t  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1358 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct IntStrIter_1542  temp1574 =  into_dash_iter1544 ( ( (  chars1558 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1575 =  next1545 (&temp1574);
        if (  __cond1575 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1575 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1576 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1563 (    struct Screen_661 *  screen3543 ,    int32_t  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1564 ) ( ( (  map1572 ) ( ( (  chars1558 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth963 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1573 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1580 {
    struct StrView_21  field0;
    int32_t  field1;
};

static struct StrConcat_1580 StrConcat_1580_StrConcat (  struct StrView_21  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1580 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1583 {
    struct StrView_21  field0;
    struct StrConcat_1580  field1;
};

static struct StrConcat_1583 StrConcat_1583_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_1580  field1 ) {
    return ( struct StrConcat_1583 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1582 {
    struct StrConcat_1583  field0;
    struct Char_57  field1;
};

static struct StrConcat_1582 StrConcat_1582_StrConcat (  struct StrConcat_1583  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1582 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str1585 (    struct StrConcat_1580  self1503 ) {
    struct StrConcat_1580  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str195 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str202 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str1584 (    struct StrConcat_1583  self1503 ) {
    struct StrConcat_1583  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str195 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str1585 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str1581 (    struct StrConcat_1582  self1503 ) {
    struct StrConcat_1582  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str1584 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str203 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   assert1579 (    bool  cond1718 ,    struct StrConcat_1580  msg1720 ) {
    if ( ( ! (  cond1718 ) ) ) {
        ( (  print_dash_str1581 ) ( ( ( StrConcat_1582_StrConcat ) ( ( ( StrConcat_1583_StrConcat ) ( ( (  from_dash_string220 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1720 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    }
    return ( Unit_7_Unit );
}

struct AppendIter_1587 {
    struct StrViewIter_603  f_it;
    struct Char_57  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1587   into_dash_iter1588 (    struct AppendIter_1587  self1019 ) {
    return (  self1019 );
}

static  struct AppendIter_1587   append1589 (    struct StrViewIter_603  it1006 ,    struct Char_57  e1008 ) {
    return ( (struct AppendIter_1587) { .f_it = ( (  into_dash_iter605 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct Maybe_606   next1591 (    struct AppendIter_1587 *  self1022 ) {
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

static  bool   between1593 (    struct Pos_20  c1337 ,    struct Pos_20  l1339 ,    struct Pos_20  r1341 ) {
    struct Pos_20  from1342 = ( (  min315 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Pos_20  to1343 = ( (  max318 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp316 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp316 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1592 (    struct Pane_137 *  pane3869 ,    struct Pos_20  pos3871 ) {
    return ( {  struct Maybe_28  dref3872 = ( ( * (  pane3869 ) ) .f_sel ) ; dref3872.tag == Maybe_28_Just_t ? ( (  between1593 ) ( (  pos3871 ) ,  ( ( * (  pane3869 ) ) .f_cursor ) ,  ( dref3872 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( false ) ; } );
}

static  enum Unit_7   render1537 (    struct Screen_661 *  screen3901 ,    struct Pane_137 *  pane3903 ,    struct ScreenDims_1534  sd3905 ) {
    bool  display_dash_line_dash_numbers3906 = ( true );
    ( (  update_dash_screen_dash_offset1538 ) ( (  pane3903 ) ,  (  sd3905 ) ) );
    struct ScreenCursorOffset_139  sc_dash_off3907 = ( ( * (  pane3903 ) ) .f_sc_dash_off );
    int32_t  max_dash_line_dash_num_dash_chars3908 = ( (  size_dash_i32196 ) ( ( (  count1541 ) ( ( (  chars1558 ) ( ( (  num_dash_lines991 ) ( ( ( * (  pane3903 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin3909 = (  from_dash_integral48 ( 2 ) );
    int32_t  num_dash_back_dash_margin3910 = (  from_dash_integral48 ( 2 ) );
    int32_t  total_dash_margin3911 = ( (  display_dash_line_dash_numbers3906 ) ? (  op_dash_add274 ( (  op_dash_add274 ( (  max_dash_line_dash_num_dash_chars3908 ) , (  num_dash_front_dash_margin3909 ) ) ) , (  num_dash_back_dash_margin3910 ) ) ) : (  from_dash_integral48 ( 0 ) ) );
    struct RangeIter_689  temp1561 =  into_dash_iter691 ( ( (  to694 ) ( (  op_dash_add274 ( ( (  sc_dash_off3907 ) .f_screen_dash_top ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  ( (  min469 ) ( ( (  num_dash_lines991 ) ( ( ( * (  pane3903 ) ) .f_buf ) ) ) ,  (  op_dash_add274 ( ( (  sc_dash_off3907 ) .f_screen_dash_top ) , ( (  screen_dash_height1540 ) ( (  sd3905 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_272  __cond1562 =  next692 (&temp1561);
        if (  __cond1562 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num3913 =  __cond1562 .stuff .Maybe_272_Just_s .field0;
        int32_t  ybi3914 = (  op_dash_sub812 ( (  line_dash_num3913 ) , (  from_dash_integral48 ( 1 ) ) ) );
        int32_t  xbi3915 = ( (  vi_dash_bi993 ) ( ( ( * (  pane3903 ) ) .f_buf ) ,  (  ybi3914 ) ,  ( (  sc_dash_off3907 ) .f_screen_dash_left ) ) );
        struct StrView_21  line_dash_content3916 = ( (  line951 ) ( ( ( * (  pane3903 ) ) .f_buf ) ,  (  ybi3914 ) ) );
        int32_t  ys3917 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  op_dash_add274 ( ( (  sd3905 ) .f_from_dash_sy ) , (  line_dash_num3913 ) ) ) , ( (  sc_dash_off3907 ) .f_screen_dash_top ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers3906 ) ) {
            ( (  draw_dash_str_dash_right1563 ) ( (  screen3901 ) ,  (  line_dash_num3913 ) ,  (  op_dash_add274 ( (  op_dash_sub812 ( (  op_dash_sub812 ( ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3901 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd3905 ) .f_from_dash_sx ) ) ) , (  total_dash_margin3911 ) ) ) , (  num_dash_back_dash_margin3910 ) ) ) ,  (  ys3917 ) ) );
        }
        int32_t  vx3918 = (  op_dash_sub812 ( ( (  pos_dash_vi949 ) ( ( ( * (  pane3903 ) ) .f_buf ) ,  ( (  mk298 ) ( (  ybi3914 ) ,  (  xbi3915 ) ) ) ) ) , ( (  sc_dash_off3907 ) .f_screen_dash_left ) ) );
        ( (  assert1579 ) ( (  cmp317 ( (  vx3918 ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1580_StrConcat ) ( ( (  from_dash_string220 ) ( ( "vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx3918 ) ) ) ) );
        int32_t  left_dash_offset3919 = (  op_dash_add274 ( ( (  sd3905 ) .f_from_dash_sx ) , (  total_dash_margin3911 ) ) );
        struct AppendIter_1587  temp1586 =  into_dash_iter1588 ( ( (  append1589 ) ( ( (  chars608 ) ( ( (  byte_dash_substr_dash_from1351 ) ( (  line_dash_content3916 ) ,  ( (  i32_dash_size262 ) ( (  xbi3915 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike221 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_606  __cond1590 =  next1591 (&temp1586);
            if (  __cond1590 .tag == 0 ) {
                break;
            }
            struct Char_57  c3921 =  __cond1590 .stuff .Maybe_606_Just_s .field0;
            if ( (  cmp317 ( (  vx3918 ) , ( (  sd3905 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_20  curpos3922 = ( (  mk298 ) ( (  ybi3914 ) ,  (  xbi3915 ) ) );
            bool  is_dash_cursor3923 = (  eq319 ( (  curpos3922 ) , ( ( * (  pane3903 ) ) .f_cursor ) ) );
            bool  in_dash_selection3924 = ( (  is_dash_in_dash_selection1592 ) ( (  pane3903 ) ,  ( (  mk298 ) ( (  ybi3914 ) ,  (  xbi3915 ) ) ) ) );
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
                    ( (  put_dash_char1576 ) ( (  screen3901 ) ,  (  c3921 ) ,  (  op_dash_add274 ( (  left_dash_offset3919 ) , (  vx3918 ) ) ) ,  (  ys3917 ) ) );
                }
                vx3918 = (  op_dash_add274 ( (  vx3918 ) , ( (  char_dash_screen_dash_width954 ) ( (  c3921 ) ) ) ) );
            }
            else {
                if ( dref3925.tag == Maybe_140_Just_t ) {
                    struct StrViewIter_603  temp1594 =  into_dash_iter605 ( ( (  chars608 ) ( ( dref3925 .stuff .Maybe_140_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_606  __cond1595 =  next607 (&temp1594);
                        if (  __cond1595 .tag == 0 ) {
                            break;
                        }
                        struct Char_57  c3928 =  __cond1595 .stuff .Maybe_606_Just_s .field0;
                        if ( (  cmp317 ( (  vx3918 ) , (  from_dash_integral48 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1576 ) ( (  screen3901 ) ,  (  c3928 ) ,  (  op_dash_add274 ( (  left_dash_offset3919 ) , (  vx3918 ) ) ) ,  (  ys3917 ) ) );
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

struct env1597 {
    int32_t *  curline4233;
    ;
    ;
    ;
    ;
    struct Screen_661 *  screen4229;
    ;
    ;
};

struct env1598 {
    int32_t *  curline4233;
    ;
    ;
    ;
    ;
    struct Screen_661 *  screen4229;
    ;
    ;
};

struct env1599 {
    int32_t *  curline4233;
    ;
    ;
    ;
    ;
    struct Screen_661 *  screen4229;
    ;
    ;
};

struct env1600 {
    int32_t *  curline4233;
    ;
    ;
    ;
    ;
    struct Screen_661 *  screen4229;
    ;
    ;
};

struct env1601 {
    int32_t *  curline4233;
    ;
    ;
    ;
    ;
    struct Screen_661 *  screen4229;
    ;
    ;
};

struct env1602 {
    int32_t *  curline4233;
    ;
    ;
    ;
    ;
    struct Screen_661 *  screen4229;
    ;
    ;
};

struct env1603 {
    int32_t *  curline4233;
    ;
    ;
    ;
    ;
    struct Screen_661 *  screen4229;
    ;
    ;
};

struct env1604 {
    int32_t *  curline4233;
    ;
    ;
    ;
    ;
    struct Screen_661 *  screen4229;
    ;
    ;
};

struct env1605 {
    int32_t *  curline4233;
    ;
    ;
    ;
    ;
    struct Screen_661 *  screen4229;
    ;
    ;
};

struct StrConcat_1608 {
    struct StrView_21  field0;
    enum Mode_138  field1;
};

static struct StrConcat_1608 StrConcat_1608_StrConcat (  struct StrView_21  field0 ,  enum Mode_138  field1 ) {
    return ( struct StrConcat_1608 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1607 {
    enum Unit_7  (*fun) (  struct env1597*  ,    struct StrConcat_1608  );
    struct env1597 env;
};

struct StrConcatIter_1613 {
    struct StrViewIter_603  f_left;
    struct StrViewIter_603  f_right;
};

struct Map_1612 {
    struct StrConcatIter_1613  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1612 Map_1612_Map (  struct StrConcatIter_1613  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1612 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1612   into_dash_iter1615 (    struct Map_1612  self796 ) {
    return (  self796 );
}

static  struct Maybe_606   next1617 (    struct StrConcatIter_1613 *  self1494 ) {
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

static  struct Maybe_272   next1616 (    struct Map_1612 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1617 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_272_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1614 (    struct Map_1612  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1612  it1099 = ( (  into_dash_iter1615 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next1616 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1618 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1618);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1619;
    return (  temp1619 );
}

static  int32_t   lam1620 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add274 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1611 (    struct Map_1612  it1110 ) {
    return ( (  reduce1614 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1620 ) ) );
}

static  struct StrConcatIter_1613   into_dash_iter1622 (    struct StrConcatIter_1613  self1491 ) {
    return (  self1491 );
}

static  struct Map_1612   map1621 (    struct StrConcatIter_1613  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1613  it808 = ( (  into_dash_iter1622 ) ( (  iterable805 ) ) );
    return ( ( Map_1612_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrView_21   todo1626 (  ) {
    ( (  print1028 ) ( ( (  from_dash_string220 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined516 ) ( ) );
}

static  struct StrViewIter_603   chars1625 (    enum Mode_138  self3824 ) {
    return ( (  chars608 ) ( ( {  enum Mode_138  dref3825 = (  self3824 ) ;  dref3825 == Mode_138_Normal ? ( (  from_dash_string220 ) ( ( "Normal" ) ,  ( 6 ) ) ) :  dref3825 == Mode_138_Insert ? ( (  from_dash_string220 ) ( ( "Insert" ) ,  ( 6 ) ) ) :  dref3825 == Mode_138_Select ? ( (  from_dash_string220 ) ( ( "Select" ) ,  ( 6 ) ) ) : ( (  todo1626 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1613   into_dash_iter1624 (    struct StrConcat_1608  dref1498 ) {
    return ( (struct StrConcatIter_1613) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1625 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1613   chars1623 (    struct StrConcat_1608  self1509 ) {
    return ( (  into_dash_iter1624 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1627 (    struct Screen_661 *  screen3527 ,    struct StrConcat_1608  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1358 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1613  temp1628 =  into_dash_iter1622 ( ( (  chars1623 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1629 =  next1617 (&temp1628);
        if (  __cond1629 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1629 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1576 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1610 (    struct Screen_661 *  screen3543 ,    struct StrConcat_1608  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1611 ) ( ( (  map1621 ) ( ( (  chars1623 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth963 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1627 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1609 (   struct env1597* env ,    struct StrConcat_1608  s4236 ) {
    ( (  draw_dash_str_dash_right1610 ) ( ( env->screen4229 ) ,  (  s4236 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4233 ) ) ) );
    (* env->curline4233 ) = (  op_dash_add274 ( ( * ( env->curline4233 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1634 {
    struct StrView_21  field0;
    struct Pos_20  field1;
};

static struct StrConcat_1634 StrConcat_1634_StrConcat (  struct StrView_21  field0 ,  struct Pos_20  field1 ) {
    return ( struct StrConcat_1634 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1633 {
    struct StrConcat_1634  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1633 StrConcat_1633_StrConcat (  struct StrConcat_1634  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1633 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1632 {
    struct StrConcat_1633  field0;
    enum CharType_1013  field1;
};

static struct StrConcat_1632 StrConcat_1632_StrConcat (  struct StrConcat_1633  field0 ,  enum CharType_1013  field1 ) {
    return ( struct StrConcat_1632 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1631 {
    enum Unit_7  (*fun) (  struct env1598*  ,    struct StrConcat_1632  );
    struct env1598 env;
};

struct StrConcatIter_1645 {
    struct AppendIter_873  f_left;
    struct IntStrIter_1542  f_right;
};

struct StrConcatIter_1644 {
    struct StrConcatIter_1645  f_left;
    struct StrViewIter_603  f_right;
};

struct StrConcatIter_1643 {
    struct StrConcatIter_1644  f_left;
    struct IntStrIter_1542  f_right;
};

struct StrConcatIter_1642 {
    struct StrConcatIter_1643  f_left;
    struct AppendIter_873  f_right;
};

struct StrConcatIter_1641 {
    struct StrViewIter_603  f_left;
    struct StrConcatIter_1642  f_right;
};

struct StrConcatIter_1640 {
    struct StrConcatIter_1641  f_left;
    struct StrViewIter_603  f_right;
};

struct StrConcatIter_1639 {
    struct StrConcatIter_1640  f_left;
    struct StrViewIter_603  f_right;
};

struct Map_1638 {
    struct StrConcatIter_1639  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1638 Map_1638_Map (  struct StrConcatIter_1639  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1638 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1638   into_dash_iter1647 (    struct Map_1638  self796 ) {
    return (  self796 );
}

static  struct Maybe_606   next1655 (    struct StrConcatIter_1645 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1545 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1654 (    struct StrConcatIter_1644 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1655 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1653 (    struct StrConcatIter_1643 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1654 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1545 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1652 (    struct StrConcatIter_1642 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1653 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1651 (    struct StrConcatIter_1641 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1652 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1650 (    struct StrConcatIter_1640 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1651 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1649 (    struct StrConcatIter_1639 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1650 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_272   next1648 (    struct Map_1638 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1649 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_272_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1646 (    struct Map_1638  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1638  it1099 = ( (  into_dash_iter1647 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next1648 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1656 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1656);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1657;
    return (  temp1657 );
}

static  int32_t   lam1658 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add274 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1637 (    struct Map_1638  it1110 ) {
    return ( (  reduce1646 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1658 ) ) );
}

static  struct StrConcatIter_1639   into_dash_iter1660 (    struct StrConcatIter_1639  self1491 ) {
    return (  self1491 );
}

static  struct Map_1638   map1659 (    struct StrConcatIter_1639  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1639  it808 = ( (  into_dash_iter1660 ) ( (  iterable805 ) ) );
    return ( ( Map_1638_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1672 {
    struct Char_57  field0;
    int32_t  field1;
};

static struct StrConcat_1672 StrConcat_1672_StrConcat (  struct Char_57  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1672 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1671 {
    struct StrConcat_1672  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1671 StrConcat_1671_StrConcat (  struct StrConcat_1672  field0 ,  struct StrView_21  field1 ) {
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
    struct Char_57  field1;
};

static struct StrConcat_1669 StrConcat_1669_StrConcat (  struct StrConcat_1670  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1669 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_1645   into_dash_iter1679 (    struct StrConcat_1672  dref1498 ) {
    return ( (struct StrConcatIter_1645) { .f_left = ( (  chars913 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1558 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1645   chars1678 (    struct StrConcat_1672  self1509 ) {
    return ( (  into_dash_iter1679 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1644   into_dash_iter1677 (    struct StrConcat_1671  dref1498 ) {
    return ( (struct StrConcatIter_1644) { .f_left = ( (  chars1678 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars608 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1644   chars1676 (    struct StrConcat_1671  self1509 ) {
    return ( (  into_dash_iter1677 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1643   into_dash_iter1675 (    struct StrConcat_1670  dref1498 ) {
    return ( (struct StrConcatIter_1643) { .f_left = ( (  chars1676 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1558 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1643   chars1674 (    struct StrConcat_1670  self1509 ) {
    return ( (  into_dash_iter1675 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1642   into_dash_iter1673 (    struct StrConcat_1669  dref1498 ) {
    return ( (struct StrConcatIter_1642) { .f_left = ( (  chars1674 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1642   chars1668 (    struct StrConcat_1669  self1509 ) {
    return ( (  into_dash_iter1673 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1642   chars1667 (    struct Pos_20  self3584 ) {
    return ( (  chars1668 ) ( ( ( StrConcat_1669_StrConcat ) ( ( ( StrConcat_1670_StrConcat ) ( ( ( StrConcat_1671_StrConcat ) ( ( ( StrConcat_1672_StrConcat ) ( ( (  from_dash_charlike221 ) ( ( "(" ) ,  ( 1 ) ) ) ,  ( (  self3584 ) .f_line ) ) ) ,  ( (  from_dash_string220 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  self3584 ) .f_bi ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrConcatIter_1641   into_dash_iter1666 (    struct StrConcat_1634  dref1498 ) {
    return ( (struct StrConcatIter_1641) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1667 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1641   chars1665 (    struct StrConcat_1634  self1509 ) {
    return ( (  into_dash_iter1666 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1640   into_dash_iter1664 (    struct StrConcat_1633  dref1498 ) {
    return ( (struct StrConcatIter_1640) { .f_left = ( (  chars1665 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars608 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1640   chars1663 (    struct StrConcat_1633  self1509 ) {
    return ( (  into_dash_iter1664 ) ( (  self1509 ) ) );
}

static  struct StrViewIter_603   chars1680 (    enum CharType_1013  self3813 ) {
    return ( (  chars608 ) ( ( {  enum CharType_1013  dref3814 = (  self3813 ) ;  dref3814 == CharType_1013_CharPunctuation ? ( (  from_dash_string220 ) ( ( "Punct" ) ,  ( 5 ) ) ) :  dref3814 == CharType_1013_CharWord ? ( (  from_dash_string220 ) ( ( "Word" ) ,  ( 4 ) ) ) :  dref3814 == CharType_1013_CharSpace ? ( (  from_dash_string220 ) ( ( "Space" ) ,  ( 5 ) ) ) : ( (  todo1626 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1639   into_dash_iter1662 (    struct StrConcat_1632  dref1498 ) {
    return ( (struct StrConcatIter_1639) { .f_left = ( (  chars1663 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1680 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1639   chars1661 (    struct StrConcat_1632  self1509 ) {
    return ( (  into_dash_iter1662 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1681 (    struct Screen_661 *  screen3527 ,    struct StrConcat_1632  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1358 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1639  temp1682 =  into_dash_iter1660 ( ( (  chars1661 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1683 =  next1649 (&temp1682);
        if (  __cond1683 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1683 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1576 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1636 (    struct Screen_661 *  screen3543 ,    struct StrConcat_1632  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1637 ) ( ( (  map1659 ) ( ( (  chars1661 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth963 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1681 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1635 (   struct env1598* env ,    struct StrConcat_1632  s4236 ) {
    ( (  draw_dash_str_dash_right1636 ) ( ( env->screen4229 ) ,  (  s4236 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4233 ) ) ) );
    (* env->curline4233 ) = (  op_dash_add274 ( ( * ( env->curline4233 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1686 {
    struct StrView_21  field0;
    struct Maybe_28  field1;
};

static struct StrConcat_1686 StrConcat_1686_StrConcat (  struct StrView_21  field0 ,  struct Maybe_28  field1 ) {
    return ( struct StrConcat_1686 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1685 {
    enum Unit_7  (*fun) (  struct env1599*  ,    struct StrConcat_1686  );
    struct env1599 env;
};

struct StrConcatIter_1693 {
    struct StrConcatIter_1641  f_left;
    struct AppendIter_873  f_right;
};

struct StrCaseIter_1692 {
    enum {
        StrCaseIter_1692_StrCaseIter1_t,
        StrCaseIter_1692_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_603  field0;
        } StrCaseIter_1692_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1693  field0;
        } StrCaseIter_1692_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1692 StrCaseIter_1692_StrCaseIter1 (  struct StrViewIter_603  field0 ) {
    return ( struct StrCaseIter_1692 ) { .tag = StrCaseIter_1692_StrCaseIter1_t, .stuff = { .StrCaseIter_1692_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1692 StrCaseIter_1692_StrCaseIter2 (  struct StrConcatIter_1693  field0 ) {
    return ( struct StrCaseIter_1692 ) { .tag = StrCaseIter_1692_StrCaseIter2_t, .stuff = { .StrCaseIter_1692_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1691 {
    struct StrViewIter_603  f_left;
    struct StrCaseIter_1692  f_right;
};

struct Map_1690 {
    struct StrConcatIter_1691  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1690 Map_1690_Map (  struct StrConcatIter_1691  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1690 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1690   into_dash_iter1695 (    struct Map_1690  self796 ) {
    return (  self796 );
}

static  struct Maybe_606   next1699 (    struct StrConcatIter_1693 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1651 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1698 (    struct StrCaseIter_1692 *  self1516 ) {
    struct StrCaseIter_1692 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1692_StrCaseIter1_t ) {
        return ( (  next607 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1692_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1692_StrCaseIter2_t ) {
            return ( (  next1699 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1692_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_606   next1697 (    struct StrConcatIter_1691 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1698 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_272   next1696 (    struct Map_1690 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1697 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_272_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1694 (    struct Map_1690  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1690  it1099 = ( (  into_dash_iter1695 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next1696 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1700 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1700);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1701;
    return (  temp1701 );
}

static  int32_t   lam1702 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add274 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1689 (    struct Map_1690  it1110 ) {
    return ( (  reduce1694 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1702 ) ) );
}

static  struct StrConcatIter_1691   into_dash_iter1704 (    struct StrConcatIter_1691  self1491 ) {
    return (  self1491 );
}

static  struct Map_1690   map1703 (    struct StrConcatIter_1691  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1691  it808 = ( (  into_dash_iter1704 ) ( (  iterable805 ) ) );
    return ( ( Map_1690_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1709 {
    struct StrConcat_1634  field0;
    struct Char_57  field1;
};

static struct StrConcat_1709 StrConcat_1709_StrConcat (  struct StrConcat_1634  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1709 ) { .field0 = field0 ,  .field1 = field1 };
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
            struct StrConcat_1709  field0;
        } StrCase_1708_StrCase2_s;
    } stuff;
};

static struct StrCase_1708 StrCase_1708_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1708 ) { .tag = StrCase_1708_StrCase1_t, .stuff = { .StrCase_1708_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1708 StrCase_1708_StrCase2 (  struct StrConcat_1709  field0 ) {
    return ( struct StrCase_1708 ) { .tag = StrCase_1708_StrCase2_t, .stuff = { .StrCase_1708_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1693   into_dash_iter1714 (    struct StrConcat_1709  dref1498 ) {
    return ( (struct StrConcatIter_1693) { .f_left = ( (  chars1665 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1693   chars1713 (    struct StrConcat_1709  self1509 ) {
    return ( (  into_dash_iter1714 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1692   into_dash_iter1712 (    struct StrCase_1708  self1522 ) {
    struct StrCase_1708  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1708_StrCase1_t ) {
        return ( ( StrCaseIter_1692_StrCaseIter1 ) ( ( (  chars608 ) ( ( dref1523 .stuff .StrCase_1708_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1708_StrCase2_t ) {
            return ( ( StrCaseIter_1692_StrCaseIter2 ) ( ( (  chars1713 ) ( ( dref1523 .stuff .StrCase_1708_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1692   chars1711 (    struct StrCase_1708  self1534 ) {
    return ( (  into_dash_iter1712 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1692   chars1707 (    struct Maybe_28  self1548 ) {
    struct StrCase_1708  temp1710;
    struct StrCase_1708  c1549 = (  temp1710 );
    struct Maybe_28  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_28_None_t ) {
        c1549 = ( ( StrCase_1708_StrCase1 ) ( ( (  from_dash_string220 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_28_Just_t ) {
            c1549 = ( ( StrCase_1708_StrCase2 ) ( ( ( StrConcat_1709_StrConcat ) ( ( ( StrConcat_1634_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_28_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1711 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1691   into_dash_iter1706 (    struct StrConcat_1686  dref1498 ) {
    return ( (struct StrConcatIter_1691) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1707 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1691   chars1705 (    struct StrConcat_1686  self1509 ) {
    return ( (  into_dash_iter1706 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1715 (    struct Screen_661 *  screen3527 ,    struct StrConcat_1686  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1358 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1691  temp1716 =  into_dash_iter1704 ( ( (  chars1705 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1717 =  next1697 (&temp1716);
        if (  __cond1717 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1717 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1576 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1688 (    struct Screen_661 *  screen3543 ,    struct StrConcat_1686  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1689 ) ( ( (  map1703 ) ( ( (  chars1705 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth963 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1715 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1687 (   struct env1599* env ,    struct StrConcat_1686  s4236 ) {
    ( (  draw_dash_str_dash_right1688 ) ( ( env->screen4229 ) ,  (  s4236 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4233 ) ) ) );
    (* env->curline4233 ) = (  op_dash_add274 ( ( * ( env->curline4233 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct Take_1720 {
    struct StrViewIter_603  field0;
    size_t  field1;
};

static struct Take_1720 Take_1720_Take (  struct StrViewIter_603  field0 ,  size_t  field1 ) {
    return ( struct Take_1720 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1719 {
    struct Take_1720  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1719 StrConcat_1719_StrConcat (  struct Take_1720  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1719 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_1718 {
    enum {
        Maybe_1718_None_t,
        Maybe_1718_Just_t,
    } tag;
    union {
        struct {
            struct StrConcat_1719  field0;
        } Maybe_1718_Just_s;
    } stuff;
};

static struct Maybe_1718 Maybe_1718_Just (  struct StrConcat_1719  field0 ) {
    return ( struct Maybe_1718 ) { .tag = Maybe_1718_Just_t, .stuff = { .Maybe_1718_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1718   fmap_dash_maybe1721 (    struct Maybe_140  x1275 ,    struct StrConcat_1719 (*  fun1277 )(    struct StrView_21  ) ) {
    struct Maybe_140  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_140_None_t ) {
        return ( (struct Maybe_1718) { .tag = Maybe_1718_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_140_Just_t ) {
            return ( ( Maybe_1718_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_140_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Take_1720   take1723 (    struct StrView_21  it867 ,    size_t  i869 ) {
    return ( ( Take_1720_Take ) ( ( (  into_dash_iter609 ) ( (  it867 ) ) ) ,  (  i869 ) ) );
}

struct Drop_1725 {
    struct StrViewIter_603  field0;
    size_t  field1;
};

static struct Drop_1725 Drop_1725_Drop (  struct StrViewIter_603  field0 ,  size_t  field1 ) {
    return ( struct Drop_1725 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Maybe_606   next1727 (    struct Drop_1725 *  dref847 ) {
    while ( (  cmp184 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next607 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub304 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next607 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Drop_1725   into_dash_iter1729 (    struct Drop_1725  self845 ) {
    return (  self845 );
}

static  struct Maybe_606   head1726 (    struct Drop_1725  it1142 ) {
    struct Drop_1725  temp1728 = ( (  into_dash_iter1729 ) ( (  it1142 ) ) );
    return ( (  next1727 ) ( ( &temp1728 ) ) );
}

static  bool   null1724 (    struct Drop_1725  it1151 ) {
    struct Maybe_606  dref1152 = ( (  head1726 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_606_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Drop_1725   drop1730 (    struct StrView_21  iterable852 ,    size_t  i854 ) {
    struct StrViewIter_603  it855 = ( (  into_dash_iter609 ) ( (  iterable852 ) ) );
    return ( ( Drop_1725_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct StrConcat_1719   lam1722 (    struct StrView_21  s4239 ) {
    return ( ( StrConcat_1719_StrConcat ) ( ( (  take1723 ) ( (  s4239 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ,  ( ( (  null1724 ) ( ( (  drop1730 ) ( (  s4239 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ) ) ? ( (  from_dash_string220 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_string220 ) ( ( "..." ) ,  ( 3 ) ) ) ) ) );
}

struct StrConcat_1733 {
    struct StrView_21  field0;
    struct Maybe_1718  field1;
};

static struct StrConcat_1733 StrConcat_1733_StrConcat (  struct StrView_21  field0 ,  struct Maybe_1718  field1 ) {
    return ( struct StrConcat_1733 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1732 {
    enum Unit_7  (*fun) (  struct env1600*  ,    struct StrConcat_1733  );
    struct env1600 env;
};

struct StrConcatIter_1742 {
    struct Take_1720  f_left;
    struct StrViewIter_603  f_right;
};

struct StrConcatIter_1741 {
    struct StrViewIter_603  f_left;
    struct StrConcatIter_1742  f_right;
};

struct StrConcatIter_1740 {
    struct StrConcatIter_1741  f_left;
    struct AppendIter_873  f_right;
};

struct StrCaseIter_1739 {
    enum {
        StrCaseIter_1739_StrCaseIter1_t,
        StrCaseIter_1739_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_603  field0;
        } StrCaseIter_1739_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1740  field0;
        } StrCaseIter_1739_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1739 StrCaseIter_1739_StrCaseIter1 (  struct StrViewIter_603  field0 ) {
    return ( struct StrCaseIter_1739 ) { .tag = StrCaseIter_1739_StrCaseIter1_t, .stuff = { .StrCaseIter_1739_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1739 StrCaseIter_1739_StrCaseIter2 (  struct StrConcatIter_1740  field0 ) {
    return ( struct StrCaseIter_1739 ) { .tag = StrCaseIter_1739_StrCaseIter2_t, .stuff = { .StrCaseIter_1739_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1738 {
    struct StrViewIter_603  f_left;
    struct StrCaseIter_1739  f_right;
};

struct Map_1737 {
    struct StrConcatIter_1738  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1737 Map_1737_Map (  struct StrConcatIter_1738  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1737 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1737   into_dash_iter1744 (    struct Map_1737  self796 ) {
    return (  self796 );
}

static  struct Maybe_606   next1751 (    struct Take_1720 *  dref861 ) {
    if ( (  cmp184 ( ( (* dref861 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_606  x864 = ( (  next607 ) ( ( & ( (* dref861 ) .field0 ) ) ) );
        (* dref861 ) .field1 = (  op_dash_sub304 ( ( (* dref861 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
        return (  x864 );
    } else {
        return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
    }
}

static  struct Maybe_606   next1750 (    struct StrConcatIter_1742 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1751 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1749 (    struct StrConcatIter_1741 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1750 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1748 (    struct StrConcatIter_1740 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1749 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1747 (    struct StrCaseIter_1739 *  self1516 ) {
    struct StrCaseIter_1739 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1739_StrCaseIter1_t ) {
        return ( (  next607 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1739_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1739_StrCaseIter2_t ) {
            return ( (  next1748 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1739_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_606   next1746 (    struct StrConcatIter_1738 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1747 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_272   next1745 (    struct Map_1737 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1746 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_272_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1743 (    struct Map_1737  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1737  it1099 = ( (  into_dash_iter1744 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next1745 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1752 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1752);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1753;
    return (  temp1753 );
}

static  int32_t   lam1754 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add274 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1736 (    struct Map_1737  it1110 ) {
    return ( (  reduce1743 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1754 ) ) );
}

static  struct StrConcatIter_1738   into_dash_iter1756 (    struct StrConcatIter_1738  self1491 ) {
    return (  self1491 );
}

static  struct Map_1737   map1755 (    struct StrConcatIter_1738  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1738  it808 = ( (  into_dash_iter1756 ) ( (  iterable805 ) ) );
    return ( ( Map_1737_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1762 {
    struct StrView_21  field0;
    struct StrConcat_1719  field1;
};

static struct StrConcat_1762 StrConcat_1762_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_1719  field1 ) {
    return ( struct StrConcat_1762 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1761 {
    struct StrConcat_1762  field0;
    struct Char_57  field1;
};

static struct StrConcat_1761 StrConcat_1761_StrConcat (  struct StrConcat_1762  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1761 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1760 {
    enum {
        StrCase_1760_StrCase1_t,
        StrCase_1760_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1760_StrCase1_s;
        struct {
            struct StrConcat_1761  field0;
        } StrCase_1760_StrCase2_s;
    } stuff;
};

static struct StrCase_1760 StrCase_1760_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1760 ) { .tag = StrCase_1760_StrCase1_t, .stuff = { .StrCase_1760_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1760 StrCase_1760_StrCase2 (  struct StrConcat_1761  field0 ) {
    return ( struct StrCase_1760 ) { .tag = StrCase_1760_StrCase2_t, .stuff = { .StrCase_1760_StrCase2_s = { .field0 = field0 } } };
};

static  struct Take_1720   chars1772 (    struct Take_1720  self1639 ) {
    return (  self1639 );
}

static  struct StrConcatIter_1742   into_dash_iter1771 (    struct StrConcat_1719  dref1498 ) {
    return ( (struct StrConcatIter_1742) { .f_left = ( (  chars1772 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars608 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1742   chars1770 (    struct StrConcat_1719  self1509 ) {
    return ( (  into_dash_iter1771 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1741   into_dash_iter1769 (    struct StrConcat_1762  dref1498 ) {
    return ( (struct StrConcatIter_1741) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1770 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1741   chars1768 (    struct StrConcat_1762  self1509 ) {
    return ( (  into_dash_iter1769 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1740   into_dash_iter1767 (    struct StrConcat_1761  dref1498 ) {
    return ( (struct StrConcatIter_1740) { .f_left = ( (  chars1768 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1740   chars1766 (    struct StrConcat_1761  self1509 ) {
    return ( (  into_dash_iter1767 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1739   into_dash_iter1765 (    struct StrCase_1760  self1522 ) {
    struct StrCase_1760  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1760_StrCase1_t ) {
        return ( ( StrCaseIter_1739_StrCaseIter1 ) ( ( (  chars608 ) ( ( dref1523 .stuff .StrCase_1760_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1760_StrCase2_t ) {
            return ( ( StrCaseIter_1739_StrCaseIter2 ) ( ( (  chars1766 ) ( ( dref1523 .stuff .StrCase_1760_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1739   chars1764 (    struct StrCase_1760  self1534 ) {
    return ( (  into_dash_iter1765 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1739   chars1759 (    struct Maybe_1718  self1548 ) {
    struct StrCase_1760  temp1763;
    struct StrCase_1760  c1549 = (  temp1763 );
    struct Maybe_1718  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_1718_None_t ) {
        c1549 = ( ( StrCase_1760_StrCase1 ) ( ( (  from_dash_string220 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_1718_Just_t ) {
            c1549 = ( ( StrCase_1760_StrCase2 ) ( ( ( StrConcat_1761_StrConcat ) ( ( ( StrConcat_1762_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_1718_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1764 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1738   into_dash_iter1758 (    struct StrConcat_1733  dref1498 ) {
    return ( (struct StrConcatIter_1738) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1759 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1738   chars1757 (    struct StrConcat_1733  self1509 ) {
    return ( (  into_dash_iter1758 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1773 (    struct Screen_661 *  screen3527 ,    struct StrConcat_1733  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1358 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1738  temp1774 =  into_dash_iter1756 ( ( (  chars1757 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1775 =  next1746 (&temp1774);
        if (  __cond1775 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1775 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1576 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1735 (    struct Screen_661 *  screen3543 ,    struct StrConcat_1733  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1736 ) ( ( (  map1755 ) ( ( (  chars1757 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth963 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1773 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1734 (   struct env1600* env ,    struct StrConcat_1733  s4236 ) {
    ( (  draw_dash_str_dash_right1735 ) ( ( env->screen4229 ) ,  (  s4236 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4233 ) ) ) );
    (* env->curline4233 ) = (  op_dash_add274 ( ( * ( env->curline4233 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Maybe_1718   fmap_dash_maybe1776 (    struct Maybe_140  x1275 ,    struct StrConcat_1719 (*  fun1277 )(    struct StrView_21  ) ) {
    struct Maybe_140  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_140_None_t ) {
        return ( (struct Maybe_1718) { .tag = Maybe_1718_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_140_Just_t ) {
            return ( ( Maybe_1718_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_140_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrConcat_1719   lam1777 (    struct StrView_21  s4242 ) {
    return ( ( StrConcat_1719_StrConcat ) ( ( (  take1723 ) ( (  s4242 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ,  ( ( (  null1724 ) ( ( (  drop1730 ) ( (  s4242 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ) ) ? ( (  from_dash_string220 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_string220 ) ( ( "..." ) ,  ( 3 ) ) ) ) ) );
}

struct envunion1779 {
    enum Unit_7  (*fun) (  struct env1600*  ,    struct StrConcat_1733  );
    struct env1600 env;
};

struct StrConcat_1782 {
    struct StrView_21  field0;
    struct EditorMode_141  field1;
};

static struct StrConcat_1782 StrConcat_1782_StrConcat (  struct StrView_21  field0 ,  struct EditorMode_141  field1 ) {
    return ( struct StrConcat_1782 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1781 {
    enum Unit_7  (*fun) (  struct env1601*  ,    struct StrConcat_1782  );
    struct env1601 env;
};

struct StrConcatIter_1790 {
    struct StrConcatIter_1693  f_left;
    struct StrViewIter_603  f_right;
};

struct StrConcatIter_1789 {
    struct StrConcatIter_1790  f_left;
    struct AppendIter_873  f_right;
};

struct StrCaseIter_1788 {
    enum {
        StrCaseIter_1788_StrCaseIter1_t,
        StrCaseIter_1788_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_603  field0;
        } StrCaseIter_1788_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1789  field0;
        } StrCaseIter_1788_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1788 StrCaseIter_1788_StrCaseIter1 (  struct StrViewIter_603  field0 ) {
    return ( struct StrCaseIter_1788 ) { .tag = StrCaseIter_1788_StrCaseIter1_t, .stuff = { .StrCaseIter_1788_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1788 StrCaseIter_1788_StrCaseIter2 (  struct StrConcatIter_1789  field0 ) {
    return ( struct StrCaseIter_1788 ) { .tag = StrCaseIter_1788_StrCaseIter2_t, .stuff = { .StrCaseIter_1788_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1787 {
    struct StrViewIter_603  f_left;
    struct StrCaseIter_1788  f_right;
};

struct Map_1786 {
    struct StrConcatIter_1787  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1786 Map_1786_Map (  struct StrConcatIter_1787  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1786 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1786   into_dash_iter1792 (    struct Map_1786  self796 ) {
    return (  self796 );
}

static  struct Maybe_606   next1797 (    struct StrConcatIter_1790 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1699 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1796 (    struct StrConcatIter_1789 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1797 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1795 (    struct StrCaseIter_1788 *  self1516 ) {
    struct StrCaseIter_1788 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1788_StrCaseIter1_t ) {
        return ( (  next607 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1788_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1788_StrCaseIter2_t ) {
            return ( (  next1796 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1788_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_606   next1794 (    struct StrConcatIter_1787 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1795 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_272   next1793 (    struct Map_1786 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1794 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_272_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1791 (    struct Map_1786  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1786  it1099 = ( (  into_dash_iter1792 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next1793 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1798 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1798);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1799;
    return (  temp1799 );
}

static  int32_t   lam1800 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add274 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1785 (    struct Map_1786  it1110 ) {
    return ( (  reduce1791 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1800 ) ) );
}

static  struct StrConcatIter_1787   into_dash_iter1802 (    struct StrConcatIter_1787  self1491 ) {
    return (  self1491 );
}

static  struct Map_1786   map1801 (    struct StrConcatIter_1787  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1787  it808 = ( (  into_dash_iter1802 ) ( (  iterable805 ) ) );
    return ( ( Map_1786_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1808 {
    struct StrConcat_1709  field0;
    struct StrBuilder_54  field1;
};

static struct StrConcat_1808 StrConcat_1808_StrConcat (  struct StrConcat_1709  field0 ,  struct StrBuilder_54  field1 ) {
    return ( struct StrConcat_1808 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1807 {
    struct StrConcat_1808  field0;
    struct Char_57  field1;
};

static struct StrConcat_1807 StrConcat_1807_StrConcat (  struct StrConcat_1808  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1807 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1806 {
    enum {
        StrCase_1806_StrCase1_t,
        StrCase_1806_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1806_StrCase1_s;
        struct {
            struct StrConcat_1807  field0;
        } StrCase_1806_StrCase2_s;
    } stuff;
};

static struct StrCase_1806 StrCase_1806_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1806 ) { .tag = StrCase_1806_StrCase1_t, .stuff = { .StrCase_1806_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1806 StrCase_1806_StrCase2 (  struct StrConcat_1807  field0 ) {
    return ( struct StrCase_1806 ) { .tag = StrCase_1806_StrCase2_t, .stuff = { .StrCase_1806_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrCaseIter_1788   undefined1811 (  ) {
    struct StrCaseIter_1788  temp1812;
    return (  temp1812 );
}

static  struct StrCaseIter_1788   todo1810 (  ) {
    ( (  print1028 ) ( ( (  from_dash_string220 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined1811 ) ( ) );
}

static  struct StrConcatIter_1790   into_dash_iter1818 (    struct StrConcat_1808  dref1498 ) {
    return ( (struct StrConcatIter_1790) { .f_left = ( (  chars1713 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1496 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1790   chars1817 (    struct StrConcat_1808  self1509 ) {
    return ( (  into_dash_iter1818 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1789   into_dash_iter1816 (    struct StrConcat_1807  dref1498 ) {
    return ( (struct StrConcatIter_1789) { .f_left = ( (  chars1817 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1789   chars1815 (    struct StrConcat_1807  self1509 ) {
    return ( (  into_dash_iter1816 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1788   into_dash_iter1814 (    struct StrCase_1806  self1522 ) {
    struct StrCase_1806  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1806_StrCase1_t ) {
        return ( ( StrCaseIter_1788_StrCaseIter1 ) ( ( (  chars608 ) ( ( dref1523 .stuff .StrCase_1806_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1806_StrCase2_t ) {
            return ( ( StrCaseIter_1788_StrCaseIter2 ) ( ( (  chars1815 ) ( ( dref1523 .stuff .StrCase_1806_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1788   chars1813 (    struct StrCase_1806  self1534 ) {
    return ( (  into_dash_iter1814 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1788   chars1805 (    struct EditorMode_141  self4119 ) {
    struct StrCase_1806  temp1809;
    struct StrCase_1806  c4120 = (  temp1809 );
    struct EditorMode_141  dref4121 = (  self4119 );
    if ( dref4121.tag == EditorMode_141_Normal_t ) {
        c4120 = ( ( StrCase_1806_StrCase1 ) ( ( (  from_dash_string220 ) ( ( "Normal" ) ,  ( 6 ) ) ) ) );
    }
    else {
        if ( dref4121.tag == EditorMode_141_Cmd_t ) {
            c4120 = ( ( StrCase_1806_StrCase2 ) ( ( ( StrConcat_1807_StrConcat ) ( ( ( StrConcat_1808_StrConcat ) ( ( ( StrConcat_1709_StrConcat ) ( ( ( StrConcat_1634_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Cmd(" ) ,  ( 4 ) ) ) ,  ( dref4121 .stuff .EditorMode_141_Cmd_s .field0 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "|" ) ,  ( 1 ) ) ) ) ) ,  ( dref4121 .stuff .EditorMode_141_Cmd_s .field1 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
        else {
            if ( dref4121.tag == EditorMode_141_Search_t ) {
                c4120 = ( ( StrCase_1806_StrCase2 ) ( ( ( StrConcat_1807_StrConcat ) ( ( ( StrConcat_1808_StrConcat ) ( ( ( StrConcat_1709_StrConcat ) ( ( ( StrConcat_1634_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Search(" ) ,  ( 7 ) ) ) ,  ( dref4121 .stuff .EditorMode_141_Search_s .field0 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "|" ) ,  ( 1 ) ) ) ) ) ,  ( dref4121 .stuff .EditorMode_141_Search_s .field1 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
            }
            else {
                if ( true ) {
                    return ( (  todo1810 ) ( ) );
                }
            }
        }
    }
    return ( (  chars1813 ) ( (  c4120 ) ) );
}

static  struct StrConcatIter_1787   into_dash_iter1804 (    struct StrConcat_1782  dref1498 ) {
    return ( (struct StrConcatIter_1787) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1805 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1787   chars1803 (    struct StrConcat_1782  self1509 ) {
    return ( (  into_dash_iter1804 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1819 (    struct Screen_661 *  screen3527 ,    struct StrConcat_1782  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1358 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1787  temp1820 =  into_dash_iter1802 ( ( (  chars1803 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1821 =  next1794 (&temp1820);
        if (  __cond1821 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1821 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1576 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1784 (    struct Screen_661 *  screen3543 ,    struct StrConcat_1782  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1785 ) ( ( (  map1801 ) ( ( (  chars1803 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth963 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1819 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1783 (   struct env1601* env ,    struct StrConcat_1782  s4236 ) {
    ( (  draw_dash_str_dash_right1784 ) ( ( env->screen4229 ) ,  (  s4236 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4233 ) ) ) );
    (* env->curline4233 ) = (  op_dash_add274 ( ( * ( env->curline4233 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1824 {
    struct StrView_21  field0;
    struct Maybe_140  field1;
};

static struct StrConcat_1824 StrConcat_1824_StrConcat (  struct StrView_21  field0 ,  struct Maybe_140  field1 ) {
    return ( struct StrConcat_1824 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1823 {
    enum Unit_7  (*fun) (  struct env1602*  ,    struct StrConcat_1824  );
    struct env1602 env;
};

struct StrConcatIter_1831 {
    struct StrConcatIter_1613  f_left;
    struct AppendIter_873  f_right;
};

struct StrCaseIter_1830 {
    enum {
        StrCaseIter_1830_StrCaseIter1_t,
        StrCaseIter_1830_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_603  field0;
        } StrCaseIter_1830_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1831  field0;
        } StrCaseIter_1830_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1830 StrCaseIter_1830_StrCaseIter1 (  struct StrViewIter_603  field0 ) {
    return ( struct StrCaseIter_1830 ) { .tag = StrCaseIter_1830_StrCaseIter1_t, .stuff = { .StrCaseIter_1830_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1830 StrCaseIter_1830_StrCaseIter2 (  struct StrConcatIter_1831  field0 ) {
    return ( struct StrCaseIter_1830 ) { .tag = StrCaseIter_1830_StrCaseIter2_t, .stuff = { .StrCaseIter_1830_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1829 {
    struct StrViewIter_603  f_left;
    struct StrCaseIter_1830  f_right;
};

struct Map_1828 {
    struct StrConcatIter_1829  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1828 Map_1828_Map (  struct StrConcatIter_1829  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1828 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1828   into_dash_iter1833 (    struct Map_1828  self796 ) {
    return (  self796 );
}

static  struct Maybe_606   next1837 (    struct StrConcatIter_1831 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1617 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1836 (    struct StrCaseIter_1830 *  self1516 ) {
    struct StrCaseIter_1830 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1830_StrCaseIter1_t ) {
        return ( (  next607 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1830_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1830_StrCaseIter2_t ) {
            return ( (  next1837 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1830_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_606   next1835 (    struct StrConcatIter_1829 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1836 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_272   next1834 (    struct Map_1828 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1835 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_272_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1832 (    struct Map_1828  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1828  it1099 = ( (  into_dash_iter1833 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next1834 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1838 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1838);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1839;
    return (  temp1839 );
}

static  int32_t   lam1840 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add274 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1827 (    struct Map_1828  it1110 ) {
    return ( (  reduce1832 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1840 ) ) );
}

static  struct StrConcatIter_1829   into_dash_iter1842 (    struct StrConcatIter_1829  self1491 ) {
    return (  self1491 );
}

static  struct Map_1828   map1841 (    struct StrConcatIter_1829  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1829  it808 = ( (  into_dash_iter1842 ) ( (  iterable805 ) ) );
    return ( ( Map_1828_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrCase_1846 {
    enum {
        StrCase_1846_StrCase1_t,
        StrCase_1846_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1846_StrCase1_s;
        struct {
            struct StrConcat_479  field0;
        } StrCase_1846_StrCase2_s;
    } stuff;
};

static struct StrCase_1846 StrCase_1846_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1846 ) { .tag = StrCase_1846_StrCase1_t, .stuff = { .StrCase_1846_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1846 StrCase_1846_StrCase2 (  struct StrConcat_479  field0 ) {
    return ( struct StrCase_1846 ) { .tag = StrCase_1846_StrCase2_t, .stuff = { .StrCase_1846_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1613   into_dash_iter1853 (    struct StrConcat_480  dref1498 ) {
    return ( (struct StrConcatIter_1613) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars608 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1613   chars1852 (    struct StrConcat_480  self1509 ) {
    return ( (  into_dash_iter1853 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1831   into_dash_iter1851 (    struct StrConcat_479  dref1498 ) {
    return ( (struct StrConcatIter_1831) { .f_left = ( (  chars1852 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1831   chars1850 (    struct StrConcat_479  self1509 ) {
    return ( (  into_dash_iter1851 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1830   into_dash_iter1849 (    struct StrCase_1846  self1522 ) {
    struct StrCase_1846  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1846_StrCase1_t ) {
        return ( ( StrCaseIter_1830_StrCaseIter1 ) ( ( (  chars608 ) ( ( dref1523 .stuff .StrCase_1846_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1846_StrCase2_t ) {
            return ( ( StrCaseIter_1830_StrCaseIter2 ) ( ( (  chars1850 ) ( ( dref1523 .stuff .StrCase_1846_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1830   chars1848 (    struct StrCase_1846  self1534 ) {
    return ( (  into_dash_iter1849 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1830   chars1845 (    struct Maybe_140  self1548 ) {
    struct StrCase_1846  temp1847;
    struct StrCase_1846  c1549 = (  temp1847 );
    struct Maybe_140  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_140_None_t ) {
        c1549 = ( ( StrCase_1846_StrCase1 ) ( ( (  from_dash_string220 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_140_Just_t ) {
            c1549 = ( ( StrCase_1846_StrCase2 ) ( ( ( StrConcat_479_StrConcat ) ( ( ( StrConcat_480_StrConcat ) ( ( (  from_dash_string220 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_140_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1848 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1829   into_dash_iter1844 (    struct StrConcat_1824  dref1498 ) {
    return ( (struct StrConcatIter_1829) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1845 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1829   chars1843 (    struct StrConcat_1824  self1509 ) {
    return ( (  into_dash_iter1844 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1854 (    struct Screen_661 *  screen3527 ,    struct StrConcat_1824  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1358 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1829  temp1855 =  into_dash_iter1842 ( ( (  chars1843 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1856 =  next1835 (&temp1855);
        if (  __cond1856 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1856 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1576 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1826 (    struct Screen_661 *  screen3543 ,    struct StrConcat_1824  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1827 ) ( ( (  map1841 ) ( ( (  chars1843 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth963 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1854 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1825 (   struct env1602* env ,    struct StrConcat_1824  s4236 ) {
    ( (  draw_dash_str_dash_right1826 ) ( ( env->screen4229 ) ,  (  s4236 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4233 ) ) ) );
    (* env->curline4233 ) = (  op_dash_add274 ( ( * ( env->curline4233 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1861 {
    struct StrConcat_1580  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1861 StrConcat_1861_StrConcat (  struct StrConcat_1580  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1861 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1860 {
    struct StrConcat_1861  field0;
    int32_t  field1;
};

static struct StrConcat_1860 StrConcat_1860_StrConcat (  struct StrConcat_1861  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1860 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1859 {
    struct StrConcat_1860  field0;
    struct Char_57  field1;
};

static struct StrConcat_1859 StrConcat_1859_StrConcat (  struct StrConcat_1860  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1859 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1858 {
    enum Unit_7  (*fun) (  struct env1603*  ,    struct StrConcat_1859  );
    struct env1603 env;
};

struct StrConcatIter_1869 {
    struct StrViewIter_603  f_left;
    struct IntStrIter_1542  f_right;
};

struct StrConcatIter_1868 {
    struct StrConcatIter_1869  f_left;
    struct StrViewIter_603  f_right;
};

struct StrConcatIter_1867 {
    struct StrConcatIter_1868  f_left;
    struct IntStrIter_1542  f_right;
};

struct StrConcatIter_1866 {
    struct StrConcatIter_1867  f_left;
    struct AppendIter_873  f_right;
};

struct Map_1865 {
    struct StrConcatIter_1866  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1865 Map_1865_Map (  struct StrConcatIter_1866  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1865 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1865   into_dash_iter1871 (    struct Map_1865  self796 ) {
    return (  self796 );
}

static  struct Maybe_606   next1876 (    struct StrConcatIter_1869 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1545 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1875 (    struct StrConcatIter_1868 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1876 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1874 (    struct StrConcatIter_1867 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1875 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1545 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1873 (    struct StrConcatIter_1866 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1874 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_272   next1872 (    struct Map_1865 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1873 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_272_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1870 (    struct Map_1865  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1865  it1099 = ( (  into_dash_iter1871 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next1872 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1877 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1877);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1878;
    return (  temp1878 );
}

static  int32_t   lam1879 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add274 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1864 (    struct Map_1865  it1110 ) {
    return ( (  reduce1870 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1879 ) ) );
}

static  struct StrConcatIter_1866   into_dash_iter1881 (    struct StrConcatIter_1866  self1491 ) {
    return (  self1491 );
}

static  struct Map_1865   map1880 (    struct StrConcatIter_1866  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1866  it808 = ( (  into_dash_iter1881 ) ( (  iterable805 ) ) );
    return ( ( Map_1865_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_1869   into_dash_iter1889 (    struct StrConcat_1580  dref1498 ) {
    return ( (struct StrConcatIter_1869) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1558 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1869   chars1888 (    struct StrConcat_1580  self1509 ) {
    return ( (  into_dash_iter1889 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1868   into_dash_iter1887 (    struct StrConcat_1861  dref1498 ) {
    return ( (struct StrConcatIter_1868) { .f_left = ( (  chars1888 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars608 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1868   chars1886 (    struct StrConcat_1861  self1509 ) {
    return ( (  into_dash_iter1887 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1867   into_dash_iter1885 (    struct StrConcat_1860  dref1498 ) {
    return ( (struct StrConcatIter_1867) { .f_left = ( (  chars1886 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1558 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1867   chars1884 (    struct StrConcat_1860  self1509 ) {
    return ( (  into_dash_iter1885 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1866   into_dash_iter1883 (    struct StrConcat_1859  dref1498 ) {
    return ( (struct StrConcatIter_1866) { .f_left = ( (  chars1884 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1866   chars1882 (    struct StrConcat_1859  self1509 ) {
    return ( (  into_dash_iter1883 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1890 (    struct Screen_661 *  screen3527 ,    struct StrConcat_1859  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1358 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1866  temp1891 =  into_dash_iter1881 ( ( (  chars1882 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1892 =  next1873 (&temp1891);
        if (  __cond1892 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1892 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1576 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1863 (    struct Screen_661 *  screen3543 ,    struct StrConcat_1859  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1864 ) ( ( (  map1880 ) ( ( (  chars1882 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth963 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1890 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1862 (   struct env1603* env ,    struct StrConcat_1859  s4236 ) {
    ( (  draw_dash_str_dash_right1863 ) ( ( env->screen4229 ) ,  (  s4236 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4233 ) ) ) );
    (* env->curline4233 ) = (  op_dash_add274 ( ( * ( env->curline4233 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1895 {
    struct StrConcat_1860  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1895 StrConcat_1895_StrConcat (  struct StrConcat_1860  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1895 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1894 {
    enum Unit_7  (*fun) (  struct env1604*  ,    struct StrConcat_1895  );
    struct env1604 env;
};

struct StrConcatIter_1900 {
    struct StrConcatIter_1867  f_left;
    struct StrViewIter_603  f_right;
};

struct Map_1899 {
    struct StrConcatIter_1900  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1899 Map_1899_Map (  struct StrConcatIter_1900  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1899 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1899   into_dash_iter1902 (    struct Map_1899  self796 ) {
    return (  self796 );
}

static  struct Maybe_606   next1904 (    struct StrConcatIter_1900 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1874 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_272   next1903 (    struct Map_1899 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1904 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_272_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1901 (    struct Map_1899  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1899  it1099 = ( (  into_dash_iter1902 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next1903 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1905 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1905);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1906;
    return (  temp1906 );
}

static  int32_t   lam1907 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add274 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1898 (    struct Map_1899  it1110 ) {
    return ( (  reduce1901 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1907 ) ) );
}

static  struct StrConcatIter_1900   into_dash_iter1909 (    struct StrConcatIter_1900  self1491 ) {
    return (  self1491 );
}

static  struct Map_1899   map1908 (    struct StrConcatIter_1900  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1900  it808 = ( (  into_dash_iter1909 ) ( (  iterable805 ) ) );
    return ( ( Map_1899_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_1900   into_dash_iter1911 (    struct StrConcat_1895  dref1498 ) {
    return ( (struct StrConcatIter_1900) { .f_left = ( (  chars1884 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars608 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1900   chars1910 (    struct StrConcat_1895  self1509 ) {
    return ( (  into_dash_iter1911 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1912 (    struct Screen_661 *  screen3527 ,    struct StrConcat_1895  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1358 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1900  temp1913 =  into_dash_iter1909 ( ( (  chars1910 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1914 =  next1904 (&temp1913);
        if (  __cond1914 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1914 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1576 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1897 (    struct Screen_661 *  screen3543 ,    struct StrConcat_1895  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1898 ) ( ( (  map1908 ) ( ( (  chars1910 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth963 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1912 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1896 (   struct env1604* env ,    struct StrConcat_1895  s4236 ) {
    ( (  draw_dash_str_dash_right1897 ) ( ( env->screen4229 ) ,  (  s4236 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4233 ) ) ) );
    (* env->curline4233 ) = (  op_dash_add274 ( ( * ( env->curline4233 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct envunion1916 {
    enum Unit_7  (*fun) (  struct env1605*  ,    struct StrConcat_67  );
    struct env1605 env;
};

struct Map_1920 {
    struct StrConcatIter_1252  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1920 Map_1920_Map (  struct StrConcatIter_1252  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1920 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1920   into_dash_iter1922 (    struct Map_1920  self796 ) {
    return (  self796 );
}

static  struct Maybe_272   next1923 (    struct Map_1920 *  dref798 ) {
    struct Maybe_606  dref801 = ( (  next1259 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_606_None_t ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_606_Just_t ) {
            return ( ( Maybe_272_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_606_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1921 (    struct Map_1920  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1920  it1099 = ( (  into_dash_iter1922 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next1923 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1924 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1924);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1925;
    return (  temp1925 );
}

static  int32_t   lam1926 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add274 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1919 (    struct Map_1920  it1110 ) {
    return ( (  reduce1921 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1926 ) ) );
}

static  struct StrConcatIter_1252   into_dash_iter1928 (    struct StrConcatIter_1252  self1491 ) {
    return (  self1491 );
}

static  struct Map_1920   map1927 (    struct StrConcatIter_1252  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1252  it808 = ( (  into_dash_iter1928 ) ( (  iterable805 ) ) );
    return ( ( Map_1920_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  enum Unit_7   draw_dash_str1929 (    struct Screen_661 *  screen3527 ,    struct StrConcat_67  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1358 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1252  temp1930 =  into_dash_iter1928 ( ( (  chars1273 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1931 =  next1259 (&temp1930);
        if (  __cond1931 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1931 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1576 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1918 (    struct Screen_661 *  screen3543 ,    struct StrConcat_67  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1919 ) ( ( (  map1927 ) ( ( (  chars1273 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth963 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub812 ( (  op_dash_sub812 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1929 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1917 (   struct env1605* env ,    struct StrConcat_67  s4236 ) {
    ( (  draw_dash_str_dash_right1918 ) ( ( env->screen4229 ) ,  (  s4236 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4233 ) ) ) );
    (* env->curline4233 ) = (  op_dash_add274 ( ( * ( env->curline4233 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   render_dash_editor1533 (    struct Screen_661 *  screen4229 ,    struct Editor_136 *  ed4231 ) {
    struct ScreenDims_1534  screen_dash_dims4232 = ( (struct ScreenDims_1534) { .f_from_dash_sx = (  from_dash_integral48 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub812 ( ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen4229 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral48 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub812 ( ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen4229 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) } );
    ( (  render1537 ) ( (  screen4229 ) ,  ( (  pane988 ) ( (  ed4231 ) ) ) ,  (  screen_dash_dims4232 ) ) );
    int32_t  temp1596 = (  from_dash_integral48 ( 0 ) );
    int32_t *  curline4233 = ( &temp1596 );
    struct env1597 envinst1597 = {
        .curline4233 =  curline4233 ,
        .screen4229 =  screen4229 ,
    };
    struct env1598 envinst1598 = {
        .curline4233 =  curline4233 ,
        .screen4229 =  screen4229 ,
    };
    struct env1599 envinst1599 = {
        .curline4233 =  curline4233 ,
        .screen4229 =  screen4229 ,
    };
    struct env1600 envinst1600 = {
        .curline4233 =  curline4233 ,
        .screen4229 =  screen4229 ,
    };
    struct env1601 envinst1601 = {
        .curline4233 =  curline4233 ,
        .screen4229 =  screen4229 ,
    };
    struct env1602 envinst1602 = {
        .curline4233 =  curline4233 ,
        .screen4229 =  screen4229 ,
    };
    struct env1603 envinst1603 = {
        .curline4233 =  curline4233 ,
        .screen4229 =  screen4229 ,
    };
    struct env1604 envinst1604 = {
        .curline4233 =  curline4233 ,
        .screen4229 =  screen4229 ,
    };
    struct env1605 envinst1605 = {
        .curline4233 =  curline4233 ,
        .screen4229 =  screen4229 ,
    };
    struct envunion1607  temp1606 = ( (struct envunion1607){ .fun = (  enum Unit_7  (*) (  struct env1597*  ,    struct StrConcat_1608  ) )ann1609 , .env =  envinst1597 } );
    ( temp1606.fun ( &temp1606.env ,  ( ( StrConcat_1608_StrConcat ) ( ( (  from_dash_string220 ) ( ( "mode: " ) ,  ( 6 ) ) ) ,  ( ( ( * (  ed4231 ) ) .f_pane ) .f_mode ) ) ) ) );
    enum CharType_1013  cur_dash_ty4237 = ( (  char_dash_type1015 ) ( ( (  char_dash_at1023 ) ( ( (  pane988 ) ( (  ed4231 ) ) ) ,  ( ( ( * (  ed4231 ) ) .f_pane ) .f_cursor ) ) ) ) );
    struct envunion1631  temp1630 = ( (struct envunion1631){ .fun = (  enum Unit_7  (*) (  struct env1598*  ,    struct StrConcat_1632  ) )ann1635 , .env =  envinst1598 } );
    ( temp1630.fun ( &temp1630.env ,  ( ( StrConcat_1632_StrConcat ) ( ( ( StrConcat_1633_StrConcat ) ( ( ( StrConcat_1634_StrConcat ) ( ( (  from_dash_string220 ) ( ( "cur: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4231 ) ) .f_pane ) .f_cursor ) ) ) ,  ( (  from_dash_string220 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  (  cur_dash_ty4237 ) ) ) ) );
    struct envunion1685  temp1684 = ( (struct envunion1685){ .fun = (  enum Unit_7  (*) (  struct env1599*  ,    struct StrConcat_1686  ) )ann1687 , .env =  envinst1599 } );
    ( temp1684.fun ( &temp1684.env ,  ( ( StrConcat_1686_StrConcat ) ( ( (  from_dash_string220 ) ( ( "sel: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4231 ) ) .f_pane ) .f_sel ) ) ) ) );
    struct Maybe_1718  cp4240 = ( (  fmap_dash_maybe1721 ) ( ( ( * (  ed4231 ) ) .f_clipboard ) ,  (  lam1722 ) ) );
    struct envunion1732  temp1731 = ( (struct envunion1732){ .fun = (  enum Unit_7  (*) (  struct env1600*  ,    struct StrConcat_1733  ) )ann1734 , .env =  envinst1600 } );
    ( temp1731.fun ( &temp1731.env ,  ( ( StrConcat_1733_StrConcat ) ( ( (  from_dash_string220 ) ( ( "cp: " ) ,  ( 4 ) ) ) ,  (  cp4240 ) ) ) ) );
    struct Maybe_1718  st4243 = ( (  fmap_dash_maybe1776 ) ( ( ( * (  ed4231 ) ) .f_search_dash_term ) ,  (  lam1777 ) ) );
    struct envunion1779  temp1778 = ( (struct envunion1779){ .fun = (  enum Unit_7  (*) (  struct env1600*  ,    struct StrConcat_1733  ) )ann1734 , .env =  envinst1600 } );
    ( temp1778.fun ( &temp1778.env ,  ( ( StrConcat_1733_StrConcat ) ( ( (  from_dash_string220 ) ( ( "st: " ) ,  ( 4 ) ) ) ,  (  st4243 ) ) ) ) );
    struct envunion1781  temp1780 = ( (struct envunion1781){ .fun = (  enum Unit_7  (*) (  struct env1601*  ,    struct StrConcat_1782  ) )ann1783 , .env =  envinst1601 } );
    ( temp1780.fun ( &temp1780.env ,  ( ( StrConcat_1782_StrConcat ) ( ( (  from_dash_string220 ) ( ( "edmode: " ) ,  ( 8 ) ) ) ,  ( ( * (  ed4231 ) ) .f_mode ) ) ) ) );
    struct envunion1823  temp1822 = ( (struct envunion1823){ .fun = (  enum Unit_7  (*) (  struct env1602*  ,    struct StrConcat_1824  ) )ann1825 , .env =  envinst1602 } );
    ( temp1822.fun ( &temp1822.env ,  ( ( StrConcat_1824_StrConcat ) ( ( (  from_dash_string220 ) ( ( "msg: " ) ,  ( 5 ) ) ) ,  ( ( * (  ed4231 ) ) .f_msg ) ) ) ) );
    struct envunion1858  temp1857 = ( (struct envunion1858){ .fun = (  enum Unit_7  (*) (  struct env1603*  ,    struct StrConcat_1859  ) )ann1862 , .env =  envinst1603 } );
    ( temp1857.fun ( &temp1857.env ,  ( ( StrConcat_1859_StrConcat ) ( ( ( StrConcat_1860_StrConcat ) ( ( ( StrConcat_1861_StrConcat ) ( ( ( StrConcat_1580_StrConcat ) ( ( (  from_dash_string220 ) ( ( "sc-off: (" ) ,  ( 9 ) ) ) ,  ( ( ( ( * (  ed4231 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_top ) ) ) ,  ( (  from_dash_string220 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( ( ( ( * (  ed4231 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_left ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    struct envunion1894  temp1893 = ( (struct envunion1894){ .fun = (  enum Unit_7  (*) (  struct env1604*  ,    struct StrConcat_1895  ) )ann1896 , .env =  envinst1604 } );
    ( temp1893.fun ( &temp1893.env ,  ( ( StrConcat_1895_StrConcat ) ( ( ( StrConcat_1860_StrConcat ) ( ( ( StrConcat_1861_StrConcat ) ( ( ( StrConcat_1580_StrConcat ) ( ( (  from_dash_string220 ) ( ( "dims: { " ) ,  ( 8 ) ) ) ,  ( (  screen_dash_dims4232 ) .f_to_dash_sx ) ) ) ,  ( (  from_dash_string220 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  screen_dash_dims4232 ) .f_to_dash_sy ) ) ) ,  ( (  from_dash_string220 ) ( ( " }" ) ,  ( 2 ) ) ) ) ) ) );
    struct envunion1916  temp1915 = ( (struct envunion1916){ .fun = (  enum Unit_7  (*) (  struct env1605*  ,    struct StrConcat_67  ) )ann1917 , .env =  envinst1605 } );
    ( temp1915.fun ( &temp1915.env ,  ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "num actions: " ) ,  ( 13 ) ) ) ,  ( ( ( ( * ( ( ( * (  ed4231 ) ) .f_pane ) .f_buf ) ) .f_actions ) .f_list ) .f_count ) ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1934 {
    struct StrView_21  field0;
    uint32_t  field1;
};

static struct StrConcat_1934 StrConcat_1934_StrConcat (  struct StrView_21  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1934 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1933 {
    struct StrConcat_1934  field0;
    struct Char_57  field1;
};

static struct StrConcat_1933 StrConcat_1933_StrConcat (  struct StrConcat_1934  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1933 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1938 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1937 {
    struct StrViewIter_603  f_left;
    struct IntStrIter_1938  f_right;
};

struct StrConcatIter_1936 {
    struct StrConcatIter_1937  f_left;
    struct AppendIter_873  f_right;
};

static  struct StrConcatIter_1936   into_dash_iter1939 (    struct StrConcatIter_1936  self1491 ) {
    return (  self1491 );
}

static  uint32_t   op_dash_div1947 (    uint32_t  l245 ,    uint32_t  r247 ) {
    return ( (  l245 ) / (  r247 ) );
}

static  int32_t   count_dash_digits1946 (    uint32_t  self1430 ) {
    if ( (  eq407 ( (  self1430 ) , (  from_dash_integral216 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp215 ( (  self1430 ) , (  from_dash_integral216 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1947 ( (  self1430 ) , (  from_dash_integral216 ( 10 ) ) ) );
        digits1431 = (  op_dash_add274 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1938   uint_dash_iter1945 (    uint32_t  int1437 ) {
    return ( (struct IntStrIter_1938) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1946 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1938   chars1944 (    uint32_t  self1449 ) {
    return ( (  uint_dash_iter1945 ) ( (  self1449 ) ) );
}

static  struct StrConcatIter_1937   into_dash_iter1943 (    struct StrConcat_1934  dref1498 ) {
    return ( (struct StrConcatIter_1937) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1944 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1937   chars1942 (    struct StrConcat_1934  self1509 ) {
    return ( (  into_dash_iter1943 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1936   into_dash_iter1941 (    struct StrConcat_1933  dref1498 ) {
    return ( (struct StrConcatIter_1936) { .f_left = ( (  chars1942 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1936   chars1940 (    struct StrConcat_1933  self1509 ) {
    return ( (  into_dash_iter1941 ) ( (  self1509 ) ) );
}

struct env1954 {
    ;
    uint32_t  base1210;
};

struct envunion1955 {
    uint32_t  (*fun) (  struct env1954*  ,    int32_t  ,    uint32_t  );
    struct env1954 env;
};

static  uint32_t   reduce1953 (    struct Range_686  iterable1093 ,    uint32_t  base1095 ,   struct envunion1955  fun1097 ) {
    uint32_t  x1098 = (  base1095 );
    struct RangeIter_689  it1099 = ( (  into_dash_iter691 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next692 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                struct envunion1955  temp1956 = (  fun1097 );
                x1098 = ( temp1956.fun ( &temp1956.env ,  ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1957 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1957);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp1958;
    return (  temp1958 );
}

static  uint32_t   lam1959 (   struct env1954* env ,    int32_t  item1214 ,    uint32_t  x1216 ) {
    return (  op_dash_mul683 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint32_t   pow1952 (    uint32_t  base1210 ,    int32_t  p1212 ) {
    struct env1954 envinst1954 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1953 ) ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral216 ( 1 ) ) ,  ( (struct envunion1955){ .fun = (  uint32_t  (*) (  struct env1954*  ,    int32_t  ,    uint32_t  ) )lam1959 , .env =  envinst1954 } ) ) );
}

static  uint32_t   op_dash_sub1960 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) - (  r237 ) );
}

static  struct Maybe_606   next1951 (    struct IntStrIter_1938 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_606_Just ) ( ( (  from_dash_charlike221 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp317 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
    }
    uint32_t  trim_dash_down1423 = ( (  pow1952 ) ( (  from_dash_integral216 ( 10 ) ) ,  (  op_dash_sub812 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    uint32_t  upper1424 = (  op_dash_div1947 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    uint32_t  upper_dash_mask1425 = (  op_dash_mul683 ( (  op_dash_div1947 ( (  upper1424 ) , (  from_dash_integral216 ( 10 ) ) ) ) , (  from_dash_integral216 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast219 ) ( (  op_dash_sub1960 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub812 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8892 ) ( (  op_dash_add782 ( (  digit1426 ) , (  from_dash_integral212 ( 48 ) ) ) ) ) );
    return ( ( Maybe_606_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_606   next1950 (    struct StrConcatIter_1937 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1951 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1949 (    struct StrConcatIter_1936 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1950 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   draw_dash_str1932 (    struct Screen_661 *  screen3527 ,    struct StrConcat_1933  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp317 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp317 ( (  y3533 ) , ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add274 ( (  op_dash_mul1358 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min469 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size262 ) ( (  op_dash_sub812 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1936  temp1935 =  into_dash_iter1939 ( ( (  chars1940 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_606  __cond1948 =  next1949 (&temp1935);
        if (  __cond1948 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1948 .stuff .Maybe_606_Just_s .field0;
        ( (  put_dash_char1576 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add274 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add274 ( (  xx3538 ) , ( (  rendered_dash_wcwidth963 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

struct RenderState_1962 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_664  f_fg;
    struct Color_664  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_1967 {
    struct StrConcat_1933  field0;
    uint32_t  field1;
};

static struct StrConcat_1967 StrConcat_1967_StrConcat (  struct StrConcat_1933  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1967 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1966 {
    struct StrConcat_1967  field0;
    struct Char_57  field1;
};

static struct StrConcat_1966 StrConcat_1966_StrConcat (  struct StrConcat_1967  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1966 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_1970 {
    struct StrConcatIter_1936  f_left;
    struct IntStrIter_1938  f_right;
};

struct StrConcatIter_1969 {
    struct StrConcatIter_1970  f_left;
    struct AppendIter_873  f_right;
};

static  struct StrConcatIter_1969   into_dash_iter1972 (    struct StrConcatIter_1969  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_606   next1974 (    struct StrConcatIter_1970 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next1949 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next1951 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next1973 (    struct StrConcatIter_1969 *  self1494 ) {
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

static  enum Unit_7   for_dash_each1968 (    struct StrConcatIter_1969  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrConcatIter_1969  temp1971 = ( (  into_dash_iter1972 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1969 *  it1077 = ( &temp1971 );
    while ( ( true ) ) {
        struct Maybe_606  dref1078 = ( (  next1973 ) ( (  it1077 ) ) );
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

static  struct StrConcatIter_1970   into_dash_iter1978 (    struct StrConcat_1967  dref1498 ) {
    return ( (struct StrConcatIter_1970) { .f_left = ( (  chars1940 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1944 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1970   chars1977 (    struct StrConcat_1967  self1509 ) {
    return ( (  into_dash_iter1978 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1969   into_dash_iter1976 (    struct StrConcat_1966  dref1498 ) {
    return ( (struct StrConcatIter_1969) { .f_left = ( (  chars1977 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1969   chars1975 (    struct StrConcat_1966  self1509 ) {
    return ( (  into_dash_iter1976 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print1965 (    struct StrConcat_1966  s2563 ) {
    ( (  for_dash_each1968 ) ( ( (  chars1975 ) ( (  s2563 ) ) ) ,  (  printf_dash_char204 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   move_dash_cursor_dash_to1964 (    uint32_t  x2577 ,    uint32_t  y2579 ) {
    uint32_t  x2580 = (  op_dash_add784 ( (  x2577 ) , (  from_dash_integral216 ( 1 ) ) ) );
    uint32_t  y2581 = (  op_dash_add784 ( (  y2579 ) , (  from_dash_integral216 ( 1 ) ) ) );
    ( (  print1965 ) ( ( ( StrConcat_1966_StrConcat ) ( ( ( StrConcat_1967_StrConcat ) ( ( ( StrConcat_1933_StrConcat ) ( ( ( StrConcat_1934_StrConcat ) ( ( (  from_dash_string220 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2581 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2580 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Slice_662   subslice1981 (    struct Slice_662  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Cell_663 *  begin_dash_ptr1787 = ( (  offset_dash_ptr698 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp184 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp184 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_662) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub304 ( ( (  min331 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_662) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

struct SliceIter_1984 {
    struct Slice_662  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_1983 {
    struct SliceIter_1984  f_left_dash_it;
    struct SliceIter_1984  f_right_dash_it;
};

struct Tuple2_1985 {
    struct Cell_663  field0;
    struct Cell_663  field1;
};

static struct Tuple2_1985 Tuple2_1985_Tuple2 (  struct Cell_663  field0 ,  struct Cell_663  field1 ) {
    return ( struct Tuple2_1985 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1987 {
    bool (*  fun1135 )(    struct Tuple2_1985  );
};

struct envunion1988 {
    bool  (*fun) (  struct env1987*  ,    struct Tuple2_1985  ,    bool  );
    struct env1987 env;
};

static  struct Zip_1983   into_dash_iter1989 (    struct Zip_1983  self911 ) {
    return (  self911 );
}

struct Maybe_1990 {
    enum {
        Maybe_1990_None_t,
        Maybe_1990_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1985  field0;
        } Maybe_1990_Just_s;
    } stuff;
};

static struct Maybe_1990 Maybe_1990_Just (  struct Tuple2_1985  field0 ) {
    return ( struct Maybe_1990 ) { .tag = Maybe_1990_Just_t, .stuff = { .Maybe_1990_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_703   next1992 (    struct SliceIter_1984 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp184 ( (  op_dash_add232 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_703) { .tag = Maybe_703_None_t } );
    }
    struct Cell_663  elem1830 = ( * ( (  offset_dash_ptr698 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64261 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add232 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_703_Just ) ( (  elem1830 ) ) );
}

static  struct Maybe_1990   next1991 (    struct Zip_1983 *  self914 ) {
    struct Zip_1983  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_703  dref916 = ( (  next1992 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_703_None_t ) {
            return ( (struct Maybe_1990) { .tag = Maybe_1990_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_703_Just_t ) {
                struct Maybe_703  dref918 = ( (  next1992 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_703_None_t ) {
                    return ( (struct Maybe_1990) { .tag = Maybe_1990_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_703_Just_t ) {
                        ( (  next1992 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next1992 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1990_Just ) ( ( ( Tuple2_1985_Tuple2 ) ( ( dref916 .stuff .Maybe_703_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_703_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1986 (    struct Zip_1983  iterable1093 ,    bool  base1095 ,   struct envunion1988  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_1983  it1099 = ( (  into_dash_iter1989 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1990  dref1100 = ( (  next1991 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1990_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1990_Just_t ) {
                struct envunion1988  temp1993 = (  fun1097 );
                x1098 = ( temp1993.fun ( &temp1993.env ,  ( dref1100 .stuff .Maybe_1990_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1994 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1994);
    exit ( 1 );
    ( Unit_7_Unit );
    bool  temp1995;
    return (  temp1995 );
}

static  bool   lam1996 (   struct env1987* env ,    struct Tuple2_1985  e1137 ,    bool  x1139 ) {
    return ( ( ( env->fun1135 ) ( (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1982 (    struct Zip_1983  it1133 ,    bool (*  fun1135 )(    struct Tuple2_1985  ) ) {
    struct env1987 envinst1987 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1986 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1988){ .fun = (  bool  (*) (  struct env1987*  ,    struct Tuple2_1985  ,    bool  ) )lam1996 , .env =  envinst1987 } ) ) );
}

static  struct SliceIter_1984   into_dash_iter1998 (    struct Slice_662  self1822 ) {
    return ( (struct SliceIter_1984) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_1983   zip1997 (    struct Slice_662  left922 ,    struct Slice_662  right924 ) {
    struct SliceIter_1984  left_dash_it925 = ( (  into_dash_iter1998 ) ( (  left922 ) ) );
    struct SliceIter_1984  right_dash_it926 = ( (  into_dash_iter1998 ) ( (  right924 ) ) );
    return ( (struct Zip_1983) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

struct Tuple2_2002 {
    struct Color_664  field0;
    struct Color_664  field1;
};

static struct Tuple2_2002 Tuple2_2002_Tuple2 (  struct Color_664  field0 ,  struct Color_664  field1 ) {
    return ( struct Tuple2_2002 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_665 *   cast2006 (    int32_t *  x356 ) {
    return ( (enum Color8_665 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2004 (    enum Color8_665  x573 ) {
    int32_t  temp2005 = ( (  zeroed855 ) ( ) );
    int32_t *  y574 = ( &temp2005 );
    enum Color8_665 *  yp575 = ( (  cast2006 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq2003 (    enum Color8_665  l2605 ,    enum Color8_665  r2607 ) {
    return (  eq320 ( ( ( (  cast_dash_on_dash_zeroed2004 ) ( (  l2605 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2004 ) ( (  r2607 ) ) ) ) );
}

static  enum Color16_666 *   cast2010 (    int32_t *  x356 ) {
    return ( (enum Color16_666 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2008 (    enum Color16_666  x573 ) {
    int32_t  temp2009 = ( (  zeroed855 ) ( ) );
    int32_t *  y574 = ( &temp2009 );
    enum Color16_666 *  yp575 = ( (  cast2010 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq2007 (    enum Color16_666  l2611 ,    enum Color16_666  r2613 ) {
    return (  eq320 ( ( ( (  cast_dash_on_dash_zeroed2008 ) ( (  l2611 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2008 ) ( (  r2613 ) ) ) ) );
}

static  bool   eq2011 (    struct RGB_667  l2641 ,    struct RGB_667  r2643 ) {
    return ( ( (  eq208 ( ( (  l2641 ) .f_r ) , ( (  r2643 ) .f_r ) ) ) && (  eq208 ( ( (  l2641 ) .f_g ) , ( (  r2643 ) .f_g ) ) ) ) && (  eq208 ( ( (  l2641 ) .f_b ) , ( (  r2643 ) .f_b ) ) ) );
}

static  bool   eq2001 (    struct Color_664  l2664 ,    struct Color_664  r2666 ) {
    return ( {  struct Tuple2_2002  dref2667 = ( ( Tuple2_2002_Tuple2 ) ( (  l2664 ) ,  (  r2666 ) ) ) ; dref2667 .field0.tag == Color_664_ColorDefault_t && dref2667 .field1.tag == Color_664_ColorDefault_t ? ( true ) : dref2667 .field0.tag == Color_664_Color8_t && dref2667 .field1.tag == Color_664_Color8_t ? (  eq2003 ( ( dref2667 .field0 .stuff .Color_664_Color8_s .field0 ) , ( dref2667 .field1 .stuff .Color_664_Color8_s .field0 ) ) ) : dref2667 .field0.tag == Color_664_Color16_t && dref2667 .field1.tag == Color_664_Color16_t ? (  eq2007 ( ( dref2667 .field0 .stuff .Color_664_Color16_s .field0 ) , ( dref2667 .field1 .stuff .Color_664_Color16_s .field0 ) ) ) : dref2667 .field0.tag == Color_664_Color256_t && dref2667 .field1.tag == Color_664_Color256_t ? (  eq208 ( ( dref2667 .field0 .stuff .Color_664_Color256_s .field0 ) , ( dref2667 .field1 .stuff .Color_664_Color256_s .field0 ) ) ) : dref2667 .field0.tag == Color_664_ColorRGB_t && dref2667 .field1.tag == Color_664_ColorRGB_t ? (  eq2011 ( ( dref2667 .field0 .stuff .Color_664_ColorRGB_s .field0 ) , ( dref2667 .field1 .stuff .Color_664_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2000 (    struct Cell_663  l3400 ,    struct Cell_663  r3402 ) {
    if ( ( !  eq403 ( ( (  l3400 ) .f_c ) , ( (  r3402 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2001 ( ( (  l3400 ) .f_fg ) , ( (  r3402 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2001 ( ( (  l3400 ) .f_bg ) , ( (  r3402 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam1999 (    struct Tuple2_1985  dref3456 ) {
    return ( !  eq2000 ( ( dref3456 .field0 ) , ( dref3456 .field1 ) ) );
}

static  enum Unit_7   set_dash_default_dash_fg2014 (  ) {
    ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg82015 (    enum Color8_665  color2616 ) {
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

static  enum Unit_7   set_dash_fg162016 (    enum Color16_666  color2620 ) {
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

struct StrConcat_2020 {
    struct StrView_21  field0;
    uint8_t  field1;
};

static struct StrConcat_2020 StrConcat_2020_StrConcat (  struct StrView_21  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2020 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2019 {
    struct StrConcat_2020  field0;
    struct Char_57  field1;
};

static struct StrConcat_2019 StrConcat_2019_StrConcat (  struct StrConcat_2020  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_2019 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2024 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2023 {
    struct StrViewIter_603  f_left;
    struct IntStrIter_2024  f_right;
};

struct StrConcatIter_2022 {
    struct StrConcatIter_2023  f_left;
    struct AppendIter_873  f_right;
};

static  struct StrConcatIter_2022   into_dash_iter2026 (    struct StrConcatIter_2022  self1491 ) {
    return (  self1491 );
}

struct env2032 {
    uint8_t  base1210;
    ;
};

struct envunion2033 {
    uint8_t  (*fun) (  struct env2032*  ,    int32_t  ,    uint8_t  );
    struct env2032 env;
};

static  uint8_t   reduce2031 (    struct Range_686  iterable1093 ,    uint8_t  base1095 ,   struct envunion2033  fun1097 ) {
    uint8_t  x1098 = (  base1095 );
    struct RangeIter_689  it1099 = ( (  into_dash_iter691 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_272  dref1100 = ( (  next692 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_272_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_272_Just_t ) {
                struct envunion2033  temp2034 = (  fun1097 );
                x1098 = ( temp2034.fun ( &temp2034.env ,  ( dref1100 .stuff .Maybe_272_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2035 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2035);
    exit ( 1 );
    ( Unit_7_Unit );
    uint8_t  temp2036;
    return (  temp2036 );
}

static  uint8_t   op_dash_mul2038 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam2037 (   struct env2032* env ,    int32_t  item1214 ,    uint8_t  x1216 ) {
    return (  op_dash_mul2038 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint8_t   pow2030 (    uint8_t  base1210 ,    int32_t  p1212 ) {
    struct env2032 envinst2032 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce2031 ) ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral212 ( 1 ) ) ,  ( (struct envunion2033){ .fun = (  uint8_t  (*) (  struct env2032*  ,    int32_t  ,    uint8_t  ) )lam2037 , .env =  envinst2032 } ) ) );
}

static  uint8_t   op_dash_div2039 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast2040 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_606   next2029 (    struct IntStrIter_2024 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_606_Just ) ( ( (  from_dash_charlike221 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp317 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_606) { .tag = Maybe_606_None_t } );
    }
    uint8_t  trim_dash_down1423 = ( (  pow2030 ) ( (  from_dash_integral212 ( 10 ) ) ,  (  op_dash_sub812 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    uint8_t  upper1424 = (  op_dash_div2039 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    uint8_t  upper_dash_mask1425 = (  op_dash_mul2038 ( (  op_dash_div2039 ( (  upper1424 ) , (  from_dash_integral212 ( 10 ) ) ) ) , (  from_dash_integral212 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast2040 ) ( (  op_dash_sub781 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub812 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8892 ) ( (  op_dash_add782 ( (  digit1426 ) , (  from_dash_integral212 ( 48 ) ) ) ) ) );
    return ( ( Maybe_606_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_606   next2028 (    struct StrConcatIter_2023 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next607 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next2029 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next2027 (    struct StrConcatIter_2022 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next2028 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each2021 (    struct StrConcatIter_2022  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrConcatIter_2022  temp2025 = ( (  into_dash_iter2026 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2022 *  it1077 = ( &temp2025 );
    while ( ( true ) ) {
        struct Maybe_606  dref1078 = ( (  next2027 ) ( (  it1077 ) ) );
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

static  int32_t   count_dash_digits2047 (    uint8_t  self1430 ) {
    if ( (  eq208 ( (  self1430 ) , (  from_dash_integral212 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp225 ( (  self1430 ) , (  from_dash_integral212 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div2039 ( (  self1430 ) , (  from_dash_integral212 ( 10 ) ) ) );
        digits1431 = (  op_dash_add274 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_2024   uint_dash_iter2046 (    uint8_t  int1437 ) {
    return ( (struct IntStrIter_2024) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits2047 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2024   chars2045 (    uint8_t  self1455 ) {
    return ( (  uint_dash_iter2046 ) ( (  self1455 ) ) );
}

static  struct StrConcatIter_2023   into_dash_iter2044 (    struct StrConcat_2020  dref1498 ) {
    return ( (struct StrConcatIter_2023) { .f_left = ( (  chars608 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars2045 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2023   chars2043 (    struct StrConcat_2020  self1509 ) {
    return ( (  into_dash_iter2044 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2022   into_dash_iter2042 (    struct StrConcat_2019  dref1498 ) {
    return ( (struct StrConcatIter_2022) { .f_left = ( (  chars2043 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2022   chars2041 (    struct StrConcat_2019  self1509 ) {
    return ( (  into_dash_iter2042 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print2018 (    struct StrConcat_2019  s2563 ) {
    ( (  for_dash_each2021 ) ( ( (  chars2041 ) ( (  s2563 ) ) ) ,  (  printf_dash_char204 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg2562017 (    uint8_t  color2634 ) {
    ( (  print2018 ) ( ( ( StrConcat_2019_StrConcat ) ( ( ( StrConcat_2020_StrConcat ) ( ( (  from_dash_string220 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2634 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_2053 {
    struct StrConcat_2019  field0;
    uint8_t  field1;
};

static struct StrConcat_2053 StrConcat_2053_StrConcat (  struct StrConcat_2019  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2053 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2052 {
    struct StrConcat_2053  field0;
    struct Char_57  field1;
};

static struct StrConcat_2052 StrConcat_2052_StrConcat (  struct StrConcat_2053  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_2052 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2051 {
    struct StrConcat_2052  field0;
    uint8_t  field1;
};

static struct StrConcat_2051 StrConcat_2051_StrConcat (  struct StrConcat_2052  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2051 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2050 {
    struct StrConcat_2051  field0;
    struct Char_57  field1;
};

static struct StrConcat_2050 StrConcat_2050_StrConcat (  struct StrConcat_2051  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_2050 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2058 {
    struct StrConcatIter_2022  f_left;
    struct IntStrIter_2024  f_right;
};

struct StrConcatIter_2057 {
    struct StrConcatIter_2058  f_left;
    struct AppendIter_873  f_right;
};

struct StrConcatIter_2056 {
    struct StrConcatIter_2057  f_left;
    struct IntStrIter_2024  f_right;
};

struct StrConcatIter_2055 {
    struct StrConcatIter_2056  f_left;
    struct AppendIter_873  f_right;
};

static  struct StrConcatIter_2055   into_dash_iter2060 (    struct StrConcatIter_2055  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_606   next2064 (    struct StrConcatIter_2058 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next2027 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next2029 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next2063 (    struct StrConcatIter_2057 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next2064 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next2062 (    struct StrConcatIter_2056 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next2063 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next2029 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_606   next2061 (    struct StrConcatIter_2055 *  self1494 ) {
    struct Maybe_606  dref1495 = ( (  next2062 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_606_Just_t ) {
        return ( ( Maybe_606_Just ) ( ( dref1495 .stuff .Maybe_606_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_606_None_t ) {
            return ( (  next899 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each2054 (    struct StrConcatIter_2055  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrConcatIter_2055  temp2059 = ( (  into_dash_iter2060 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2055 *  it1077 = ( &temp2059 );
    while ( ( true ) ) {
        struct Maybe_606  dref1078 = ( (  next2061 ) ( (  it1077 ) ) );
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

static  struct StrConcatIter_2058   into_dash_iter2072 (    struct StrConcat_2053  dref1498 ) {
    return ( (struct StrConcatIter_2058) { .f_left = ( (  chars2041 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars2045 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2058   chars2071 (    struct StrConcat_2053  self1509 ) {
    return ( (  into_dash_iter2072 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2057   into_dash_iter2070 (    struct StrConcat_2052  dref1498 ) {
    return ( (struct StrConcatIter_2057) { .f_left = ( (  chars2071 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2057   chars2069 (    struct StrConcat_2052  self1509 ) {
    return ( (  into_dash_iter2070 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2056   into_dash_iter2068 (    struct StrConcat_2051  dref1498 ) {
    return ( (struct StrConcatIter_2056) { .f_left = ( (  chars2069 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars2045 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2056   chars2067 (    struct StrConcat_2051  self1509 ) {
    return ( (  into_dash_iter2068 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2055   into_dash_iter2066 (    struct StrConcat_2050  dref1498 ) {
    return ( (struct StrConcatIter_2055) { .f_left = ( (  chars2067 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2055   chars2065 (    struct StrConcat_2050  self1509 ) {
    return ( (  into_dash_iter2066 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print2049 (    struct StrConcat_2050  s2563 ) {
    ( (  for_dash_each2054 ) ( ( (  chars2065 ) ( (  s2563 ) ) ) ,  (  printf_dash_char204 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg_dash_rgb2048 (    struct RGB_667  c2657 ) {
    ( (  print2049 ) ( ( ( StrConcat_2050_StrConcat ) ( ( ( StrConcat_2051_StrConcat ) ( ( ( StrConcat_2052_StrConcat ) ( ( ( StrConcat_2053_StrConcat ) ( ( ( StrConcat_2019_StrConcat ) ( ( ( StrConcat_2020_StrConcat ) ( ( (  from_dash_string220 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2657 ) .f_r ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2657 ) .f_g ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2657 ) .f_b ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg2013 (    struct Color_664  c2678 ) {
    struct Color_664  dref2679 = (  c2678 );
    if ( dref2679.tag == Color_664_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2014 ) ( ) );
    }
    else {
        if ( dref2679.tag == Color_664_Color8_t ) {
            ( (  set_dash_fg82015 ) ( ( dref2679 .stuff .Color_664_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2679.tag == Color_664_Color16_t ) {
                ( (  set_dash_fg162016 ) ( ( dref2679 .stuff .Color_664_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2679.tag == Color_664_Color256_t ) {
                    ( (  set_dash_fg2562017 ) ( ( dref2679 .stuff .Color_664_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2679.tag == Color_664_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2048 ) ( ( dref2679 .stuff .Color_664_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_default_dash_bg2074 (  ) {
    ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg82075 (    enum Color8_665  color2624 ) {
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

static  enum Unit_7   set_dash_bg162076 (    enum Color16_666  color2628 ) {
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

static  enum Unit_7   set_dash_bg2562077 (    uint8_t  color2637 ) {
    ( (  print2018 ) ( ( ( StrConcat_2019_StrConcat ) ( ( ( StrConcat_2020_StrConcat ) ( ( (  from_dash_string220 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2637 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg_dash_rgb2078 (    struct RGB_667  c2660 ) {
    ( (  print2049 ) ( ( ( StrConcat_2050_StrConcat ) ( ( ( StrConcat_2051_StrConcat ) ( ( ( StrConcat_2052_StrConcat ) ( ( ( StrConcat_2053_StrConcat ) ( ( ( StrConcat_2019_StrConcat ) ( ( ( StrConcat_2020_StrConcat ) ( ( (  from_dash_string220 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2660 ) .f_r ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2660 ) .f_g ) ) ) ,  ( (  from_dash_charlike221 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2660 ) .f_b ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg2073 (    struct Color_664  c2686 ) {
    struct Color_664  dref2687 = (  c2686 );
    if ( dref2687.tag == Color_664_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2074 ) ( ) );
    }
    else {
        if ( dref2687.tag == Color_664_Color8_t ) {
            ( (  set_dash_bg82075 ) ( ( dref2687 .stuff .Color_664_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2687.tag == Color_664_Color16_t ) {
                ( (  set_dash_bg162076 ) ( ( dref2687 .stuff .Color_664_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2687.tag == Color_664_Color256_t ) {
                    ( (  set_dash_bg2562077 ) ( ( dref2687 .stuff .Color_664_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2687.tag == Color_664_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2078 ) ( ( dref2687 .stuff .Color_664_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  uint32_t   i32_dash_u322079 (    int32_t  x603 ) {
    return ( (uint32_t ) (  x603 ) );
}

static  enum Unit_7   emit_dash_cell2012 (    struct RenderState_1962 *  rs3432 ,    struct Cell_663 *  c3434 ,    uint32_t  x3436 ,    uint32_t  y3438 ) {
    if ( ( ( !  eq407 ( (  x3436 ) , ( ( * (  rs3432 ) ) .f_x ) ) ) || ( !  eq407 ( (  y3438 ) , ( ( * (  rs3432 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1964 ) ( (  x3436 ) ,  (  y3438 ) ) );
        (*  rs3432 ) .f_x = (  x3436 );
        (*  rs3432 ) .f_y = (  y3438 );
    }
    struct Char_57  char3439 = ( ( * (  c3434 ) ) .f_c );
    struct Color_664  bg3440 = ( ( * (  c3434 ) ) .f_bg );
    if ( (  eq320 ( ( ( * (  c3434 ) ) .f_char_dash_width ) , (  op_dash_neg636 ( (  from_dash_integral48 ( 1 ) ) ) ) ) ) ) {
        char3439 = ( (  from_dash_charlike221 ) ( ( " " ) ,  ( 1 ) ) );
        bg3440 = ( ( Color_664_Color8 ) ( ( Color8_665_Red8 ) ) );
    }
    if ( ( !  eq2001 ( ( ( * (  rs3432 ) ) .f_fg ) , ( ( * (  c3434 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2013 ) ( ( ( * (  c3434 ) ) .f_fg ) ) );
        (*  rs3432 ) .f_fg = ( ( * (  c3434 ) ) .f_fg );
    }
    if ( ( !  eq2001 ( ( ( * (  rs3432 ) ) .f_bg ) , (  bg3440 ) ) ) ) {
        ( (  set_dash_bg2073 ) ( (  bg3440 ) ) );
        (*  rs3432 ) .f_bg = (  bg3440 );
    }
    ( (  print_dash_str203 ) ( (  char3439 ) ) );
    uint32_t  char_dash_width3441 = ( (  i32_dash_u322079 ) ( ( (  max964 ) ( ( ( * (  c3434 ) ) .f_char_dash_width ) ,  (  from_dash_integral48 ( 1 ) ) ) ) ) );
    (*  rs3432 ) .f_x = (  op_dash_add784 ( ( ( * (  rs3432 ) ) .f_x ) , (  char_dash_width3441 ) ) );
    return ( Unit_7_Unit );
}

struct Zip_2082 {
    struct SliceIter_1984  f_left_dash_it;
    struct FromIter_266  f_right_dash_it;
};

struct env2083 {
    ;
    struct Slice_662  dest1853;
    ;
};

struct Tuple2_2085 {
    struct Cell_663  field0;
    int32_t  field1;
};

static struct Tuple2_2085 Tuple2_2085_Tuple2 (  struct Cell_663  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2085 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2084 {
    enum Unit_7  (*fun) (  struct env2083*  ,    struct Tuple2_2085  );
    struct env2083 env;
};

static  struct Zip_2082   into_dash_iter2087 (    struct Zip_2082  self911 ) {
    return (  self911 );
}

struct Maybe_2088 {
    enum {
        Maybe_2088_None_t,
        Maybe_2088_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2085  field0;
        } Maybe_2088_Just_s;
    } stuff;
};

static struct Maybe_2088 Maybe_2088_Just (  struct Tuple2_2085  field0 ) {
    return ( struct Maybe_2088 ) { .tag = Maybe_2088_Just_t, .stuff = { .Maybe_2088_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2088   next2089 (    struct Zip_2082 *  self914 ) {
    struct Zip_2082  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_703  dref916 = ( (  next1992 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_703_None_t ) {
            return ( (struct Maybe_2088) { .tag = Maybe_2088_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_703_Just_t ) {
                struct Maybe_272  dref918 = ( (  next273 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_272_None_t ) {
                    return ( (struct Maybe_2088) { .tag = Maybe_2088_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_272_Just_t ) {
                        ( (  next1992 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next273 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2088_Just ) ( ( ( Tuple2_2085_Tuple2 ) ( ( dref916 .stuff .Maybe_703_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_272_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each2081 (    struct Zip_2082  iterable1074 ,   struct envunion2084  fun1076 ) {
    struct Zip_2082  temp2086 = ( (  into_dash_iter2087 ) ( (  iterable1074 ) ) );
    struct Zip_2082 *  it1077 = ( &temp2086 );
    while ( ( true ) ) {
        struct Maybe_2088  dref1078 = ( (  next2089 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_2088_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_2088_Just_t ) {
                struct envunion2084  temp2090 = (  fun1076 );
                ( temp2090.fun ( &temp2090.env ,  ( dref1078 .stuff .Maybe_2088_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_2082   zip2091 (    struct Slice_662  left922 ,    struct FromIter_266  right924 ) {
    struct SliceIter_1984  left_dash_it925 = ( (  into_dash_iter1998 ) ( (  left922 ) ) );
    struct FromIter_266  right_dash_it926 = ( (  into_dash_iter278 ) ( (  right924 ) ) );
    return ( (struct Zip_2082) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   lam2092 (   struct env2083* env ,    struct Tuple2_2085  dref1854 ) {
    return ( (  set696 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size262 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_7   copy_dash_to2080 (    struct Slice_662  src1851 ,    struct Slice_662  dest1853 ) {
    if ( (  cmp184 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic453 ) ( ( ( StrConcat_454_StrConcat ) ( ( ( StrConcat_254_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string220 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2083 envinst2083 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each2081 ) ( ( (  zip2091 ) ( (  src1851 ) ,  ( (  from279 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2084){ .fun = (  enum Unit_7  (*) (  struct env2083*  ,    struct Tuple2_2085  ) )lam2092 , .env =  envinst2083 } ) ) );
    return ( Unit_7_Unit );
}

static  uint32_t   render_dash_screen1961 (    struct Screen_661 *  screen3444 ) {
    int32_t  w3445 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3444 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3446 = ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen3444 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1962  temp1963 = ( (struct RenderState_1962) { .f_x = (  from_dash_integral216 ( 0 ) ) , .f_y = (  from_dash_integral216 ( 0 ) ) , .f_fg = ( (struct Color_664) { .tag = Color_664_ColorDefault_t } ) , .f_bg = ( (struct Color_664) { .tag = Color_664_ColorDefault_t } ) , .f_changes = (  from_dash_integral216 ( 0 ) ) } );
    struct RenderState_1962 *  rs3447 = ( &temp1963 );
    ( (  move_dash_cursor_dash_to1964 ) ( (  from_dash_integral216 ( 0 ) ) ,  (  from_dash_integral216 ( 0 ) ) ) );
    struct RangeIter_689  temp1979 =  into_dash_iter691 ( ( (  to694 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( (  h3446 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_272  __cond1980 =  next692 (&temp1979);
        if (  __cond1980 .tag == 0 ) {
            break;
        }
        int32_t  y3449 =  __cond1980 .stuff .Maybe_272_Just_s .field0;
        int32_t  x_dash_v3450 = (  from_dash_integral48 ( 0 ) );
        while ( (  cmp317 ( (  x_dash_v3450 ) , (  w3445 ) ) == 0 ) ) {
            size_t  i3451 = ( (  i32_dash_size262 ) ( (  op_dash_add274 ( (  op_dash_mul1358 ( (  y3449 ) , (  w3445 ) ) ) , (  x_dash_v3450 ) ) ) ) );
            struct Cell_663 *  cur3452 = ( (  get_dash_ptr697 ) ( ( ( * (  screen3444 ) ) .f_current ) ,  (  i3451 ) ) );
            int32_t  char_dash_width3453 = ( (  max964 ) ( ( ( * (  cur3452 ) ) .f_char_dash_width ) ,  (  from_dash_integral48 ( 1 ) ) ) );
            struct Slice_662  curs3454 = ( (  subslice1981 ) ( ( ( * (  screen3444 ) ) .f_current ) ,  (  i3451 ) ,  (  op_dash_add232 ( (  i3451 ) , ( (  i32_dash_size262 ) ( (  char_dash_width3453 ) ) ) ) ) ) );
            struct Slice_662  prevs3455 = ( (  subslice1981 ) ( ( ( * (  screen3444 ) ) .f_previous ) ,  (  i3451 ) ,  (  op_dash_add232 ( (  i3451 ) , ( (  i32_dash_size262 ) ( (  char_dash_width3453 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3444 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any1982 ) ( ( (  zip1997 ) ( (  curs3454 ) ,  (  prevs3455 ) ) ) ,  (  lam1999 ) ) ) ) ) {
                (*  rs3447 ) .f_changes = (  op_dash_add784 ( ( ( * (  rs3447 ) ) .f_changes ) , (  from_dash_integral216 ( 1 ) ) ) );
                ( (  emit_dash_cell2012 ) ( (  rs3447 ) ,  (  cur3452 ) ,  ( (  i32_dash_u322079 ) ( (  x_dash_v3450 ) ) ) ,  ( (  i32_dash_u322079 ) ( (  y3449 ) ) ) ) );
                ( (  copy_dash_to2080 ) ( (  curs3454 ) ,  (  prevs3455 ) ) );
            }
            x_dash_v3450 = (  op_dash_add274 ( (  x_dash_v3450 ) , (  char_dash_width3453 ) ) );
        }
    }
    (*  screen3444 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors610 ) ( ) );
    ( (  flush_dash_stdout613 ) ( ) );
    return ( ( * (  rs3447 ) ) .f_changes );
}

static  void *   cast_dash_ptr2099 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of2100 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed2097 (  ) {
    struct timespec *  temp2098;
    struct timespec *  x570 = (  temp2098 );
    ( ( memset ) ( ( (  cast_dash_ptr2099 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of2100 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct timespec *   null_dash_ptr2096 (  ) {
    return ( (  zeroed2097 ) ( ) );
}

static  enum Unit_7   sync2093 (    struct Tui_73 *  tui3315 ) {
    if ( (  eq407 ( ( ( * (  tui3315 ) ) .f_target_dash_fps ) , (  from_dash_integral216 ( 0 ) ) ) ) ) {
        return ( Unit_7_Unit );
    }
    int64_t  frame_dash_ns3316 = (  op_dash_div889 ( (  from_dash_integral303 ( 1000000000 ) ) , ( (  size_dash_i64261 ) ( ( (  u32_dash_size675 ) ( ( ( * (  tui3315 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2094 = ( (  undefined649 ) ( ) );
    struct timespec *  now3317 = ( &temp2094 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic651 ) ( ) ) ,  (  now3317 ) ) );
    int64_t  elapsed_dash_ns3318 = (  op_dash_add405 ( (  op_dash_mul230 ( (  op_dash_sub891 ( ( ( * (  now3317 ) ) .tv_sec ) , ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral303 ( 1000000000 ) ) ) ) , (  op_dash_sub891 ( ( ( * (  now3317 ) ) .tv_nsec ) , ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3319 = (  op_dash_sub891 ( (  frame_dash_ns3316 ) , (  elapsed_dash_ns3318 ) ) );
    if ( (  cmp909 ( (  sleep_dash_ns3319 ) , (  from_dash_integral303 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2095 = ( (struct timespec) { .tv_sec = (  from_dash_integral303 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3319 ) } );
        struct timespec *  ts3320 = ( &temp2095 );
        ( ( nanosleep ) ( (  ts3320 ) ,  ( (  null_dash_ptr2096 ) ( ) ) ) );
    }
    struct timespec  temp2101 = ( (  undefined649 ) ( ) );
    struct timespec *  last_dash_sync3321 = ( &temp2101 );
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

static  void *   cast_dash_ptr2104 (    struct Cell_663 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free2103 (    enum CAllocator_9  dref1959 ,    struct Slice_662  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr2104 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_screen2102 (    struct Screen_661 *  screen3420 ) {
    enum CAllocator_9  al3421 = ( ( * (  screen3420 ) ) .f_al );
    ( (  free2103 ) ( (  al3421 ) ,  ( ( * (  screen3420 ) ) .f_current ) ) );
    ( (  free2103 ) ( (  al3421 ) ,  ( ( * (  screen3420 ) ) .f_previous ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   disable_dash_mouse2106 (  ) {
    ( (  print_dash_str195 ) ( ( (  from_dash_string220 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   show_dash_cursor2107 (  ) {
    ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   reset_dash_cursor_dash_position2108 (  ) {
    ( (  print601 ) ( ( (  from_dash_string220 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   disable_dash_raw_dash_mode2109 (    struct Termios_75 *  og_dash_termios3295 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno539 ) ( ) ) ,  ( (  tcsa_dash_flush599 ) ( ) ) ,  ( (  cast_dash_ptr540 ) ( (  og_dash_termios3295 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   deinit2105 (    struct Tui_73 *  tui3325 ) {
    ( (  disable_dash_mouse2106 ) ( ) );
    ( (  show_dash_cursor2107 ) ( ) );
    ( (  reset_dash_colors610 ) ( ) );
    ( (  clear_dash_screen611 ) ( ) );
    ( (  reset_dash_cursor_dash_position2108 ) ( ) );
    ( (  disable_dash_raw_dash_mode2109 ) ( ( & ( ( * (  tui3325 ) ) .f_orig_dash_termios ) ) ) );
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
    struct env64 envinst64 = {
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
        .envinst64 = envinst64 ,
    };
    struct env134 envinst134 = {
        .envinst130 = envinst130 ,
    };
    struct env142 envinst142 = {
        .envinst132 = envinst132 ,
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
        .envinst59 = envinst59 ,
        .envinst52 = envinst52 ,
        .envinst134 = envinst134 ,
        .envinst114 = envinst114 ,
    };
    enum CAllocator_9  al4244 = ( (  idc159 ) ( ) );
    struct envunion162  temp161 = ( (struct envunion162){ .fun = (  struct TextBuf_88  (*) (  struct env79*  ,    enum CAllocator_9  ,    struct Pos_20  ) )mk163 , .env =  envinst79 } );
    struct TextBuf_88  temp160 = ( temp161.fun ( &temp161.env ,  (  al4244 ) ,  ( (  mk298 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) ) );
    struct TextBuf_88 *  tb4245 = ( &temp160 );
    struct Slice_299  args4248 = ( (  get300 ) ( ) );
    if ( (  cmp184 ( ( (  args4248 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        const char*  fname4249 = (  elem_dash_get305 ( (  args4248 ) , (  from_dash_integral0 ( 0 ) ) ) );
        struct envunion313  temp312 = ( (struct envunion313){ .fun = (  enum Unit_7  (*) (  struct env85*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action314 , .env =  envinst85 } );
        ( temp312.fun ( &temp312.env ,  (  tb4245 ) ,  ( (  mk298 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) ,  ( (  mk298 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) ,  ( (  read_dash_contents504 ) ( (  fname4249 ) ,  (  al4244 ) ) ) ) );
    }
    struct Editor_136  temp529 = ( (struct Editor_136) { .f_running = ( true ) , .f_al = (  al4244 ) , .f_pane = ( (  mk530 ) ( (  al4244 ) ,  (  tb4245 ) ) ) , .f_clipboard = ( (struct Maybe_140) { .tag = Maybe_140_None_t } ) , .f_search_dash_term = ( (struct Maybe_140) { .tag = Maybe_140_None_t } ) , .f_mode = ( (struct EditorMode_141) { .tag = EditorMode_141_Normal_t } ) , .f_msg = ( (struct Maybe_140) { .tag = Maybe_140_None_t } ) } );
    struct Editor_136 *  ed4250 = ( &temp529 );
    struct envunion533  temp532 = ( (struct envunion533){ .fun = (  struct Tui_73  (*) (  struct env69*  ) )mk534 , .env =  envinst69 } );
    struct Tui_73  temp531 = ( temp532.fun ( &temp532.env ) );
    struct Tui_73 *  tui4251 = ( &temp531 );
    struct Screen_661  temp668 = ( (  mk_dash_screen669 ) ( (  tui4251 ) ,  (  al4244 ) ) );
    struct Screen_661 *  screen4252 = ( &temp668 );
    uint32_t  last_dash_redraw_dash_changes4253 = (  from_dash_integral216 ( 0 ) );
    while ( ( ( * (  ed4250 ) ) .f_running ) ) {
        struct env719 envinst719 = {
            .tui4251 =  tui4251 ,
            .envinst71 = envinst71 ,
        };
        struct FunIter_718  temp717 =  into_dash_iter726 ( ( (  from_dash_function727 ) ( ( (struct envunion725){ .fun = (  struct Maybe_721  (*) (  struct env719*  ) )lam728 , .env =  envinst719 } ) ) ) );
        while (true) {
            struct Maybe_721  __cond929 =  next930 (&temp717);
            if (  __cond929 .tag == 0 ) {
                break;
            }
            struct InputEvent_722  ev4255 =  __cond929 .stuff .Maybe_721_Just_s .field0;
            struct InputEvent_722  dref4256 = (  ev4255 );
            if ( dref4256.tag == InputEvent_722_Key_t ) {
                ( (  reset_dash_msg932 ) ( (  ed4250 ) ) );
                struct envunion940  temp939 = ( (struct envunion940){ .fun = (  enum Unit_7  (*) (  struct env151*  ,    struct Editor_136 *  ,    struct Key_153  ) )handle_dash_key941 , .env =  envinst151 } );
                ( temp939.fun ( &temp939.env ,  (  ed4250 ) ,  ( dref4256 .stuff .InputEvent_722_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1518  temp1517 = ( (struct envunion1518){ .fun = (  bool  (*) (  struct env77*  ,    struct Screen_661 *  ) )resize_dash_screen_dash_if_dash_needed1519 , .env =  envinst77 } );
        ( temp1517.fun ( &temp1517.env ,  (  screen4252 ) ) );
        if ( ( (  should_dash_redraw1521 ) ( (  tui4251 ) ) ) ) {
            (*  screen4252 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1522 ) ( (  screen4252 ) ) );
            ( (  set_dash_screen_dash_fg1531 ) ( (  screen4252 ) ,  ( (struct Color_664) { .tag = Color_664_ColorDefault_t } ) ) );
            ( (  set_dash_screen_dash_bg1532 ) ( (  screen4252 ) ,  ( (struct Color_664) { .tag = Color_664_ColorDefault_t } ) ) );
            ( (  render_dash_editor1533 ) ( (  screen4252 ) ,  (  ed4250 ) ) );
            ( (  draw_dash_str1932 ) ( (  screen4252 ) ,  ( ( StrConcat_1933_StrConcat ) ( ( ( StrConcat_1934_StrConcat ) ( ( (  from_dash_string220 ) ( ( "REDRAWS[" ) ,  ( 8 ) ) ) ,  (  last_dash_redraw_dash_changes4253 ) ) ) ,  ( (  from_dash_charlike221 ) ( ( "]" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub812 ( ( (  u32_dash_i321535 ) ( ( ( * ( ( * (  screen4252 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
            last_dash_redraw_dash_changes4253 = ( (  render_dash_screen1961 ) ( (  screen4252 ) ) );
        }
        ( (  sync2093 ) ( (  tui4251 ) ) );
    }
    ( (  free_dash_screen2102 ) ( (  screen4252 ) ) );
    ( (  deinit2105 ) ( (  tui4251 ) ) );
}
