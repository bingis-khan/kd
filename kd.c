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
    struct env104 envinst104;
    ;
};

enum Mode_127 {
    Mode_127_Normal,
    Mode_127_Insert,
    Mode_127_Select,
};

struct ScreenCursorOffset_128 {
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
};

struct Pane_126 {
    struct TextBuf_88 *  f_buf;
    struct Pos_20  f_cursor;
    int32_t  f_vi;
    struct Maybe_28  f_sel;
    enum Mode_127  f_mode;
    struct ScreenCursorOffset_128  f_sc_dash_off;
};

struct envunion125 {
    enum Unit_7  (*fun) (  struct env122*  ,    struct Pane_126 *  ,    int32_t  );
    struct env122 env;
};

struct envunion129 {
    enum Unit_7  (*fun) (  struct env109*  ,    struct TextBuf_88 *  ,    struct Cursors_27  );
    struct env109 env;
};

struct env124 {
    ;
    ;
    ;
    ;
    ;
    ;
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
    struct env109 envinst109;
    ;
    ;
};

struct envunion131 {
    enum Unit_7  (*fun) (  struct env109*  ,    struct TextBuf_88 *  ,    struct Cursors_27  );
    struct env109 env;
};

struct envunion132 {
    struct Maybe_113  (*fun) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  );
    struct env104 env;
};

struct env130 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct envunion134 {
    enum Unit_7  (*fun) (  struct env122*  ,    struct Pane_126 *  ,    int32_t  );
    struct env122 env;
};

struct env133 {
    ;
    ;
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
};

struct envunion136 {
    struct StrView_21  (*fun) (  struct env102*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  );
    struct env102 env;
};

struct env135 {
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

struct envunion138 {
    struct StrView_21  (*fun) (  struct env61*  ,    struct StrConcat_64  ,    enum CAllocator_9  );
    struct env61 env;
};

struct env137 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env61 envinst61;
};

struct envunion140 {
    struct StrView_21  (*fun) (  struct env66*  ,    struct StrView_21  ,    enum CAllocator_9  );
    struct env66 env;
};

struct env139 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env66 envinst66;
};

struct Maybe_144 {
    enum {
        Maybe_144_None_t,
        Maybe_144_Just_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } Maybe_144_Just_s;
    } stuff;
};

static struct Maybe_144 Maybe_144_Just (  struct StrView_21  field0 ) {
    return ( struct Maybe_144 ) { .tag = Maybe_144_Just_t, .stuff = { .Maybe_144_Just_s = { .field0 = field0 } } };
};

struct EditorMode_145 {
    enum {
        EditorMode_145_Normal_t,
        EditorMode_145_Cmd_t,
        EditorMode_145_Search_t,
    } tag;
    union {
        struct {
            struct Pos_20  field0;
            struct StrBuilder_54  field1;
        } EditorMode_145_Cmd_s;
        struct {
            struct Pos_20  field0;
            struct StrBuilder_54  field1;
        } EditorMode_145_Search_s;
    } stuff;
};

static struct EditorMode_145 EditorMode_145_Cmd (  struct Pos_20  field0 ,  struct StrBuilder_54  field1 ) {
    return ( struct EditorMode_145 ) { .tag = EditorMode_145_Cmd_t, .stuff = { .EditorMode_145_Cmd_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct EditorMode_145 EditorMode_145_Search (  struct Pos_20  field0 ,  struct StrBuilder_54  field1 ) {
    return ( struct EditorMode_145 ) { .tag = EditorMode_145_Search_t, .stuff = { .EditorMode_145_Search_s = { .field0 = field0 ,  .field1 = field1 } } };
};

struct Editor_143 {
    enum CAllocator_9  f_al;
    bool  f_running;
    struct Pane_126  f_pane;
    struct Maybe_144  f_clipboard;
    struct Maybe_144  f_search_dash_term;
    struct EditorMode_145  f_mode;
    struct Maybe_144  f_msg;
};

struct envunion142 {
    enum Unit_7  (*fun) (  struct env139*  ,    struct Editor_143 *  ,    struct StrView_21  );
    struct env139 env;
};

struct env141 {
    ;
    ;
    ;
    ;
    ;
    struct env139 envinst139;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion147 {
    enum Unit_7  (*fun) (  struct env118*  ,    struct Pane_126 *  );
    struct env118 env;
};

struct envunion148 {
    enum Unit_7  (*fun) (  struct env124*  ,    struct Pane_126 *  );
    struct env124 env;
};

struct Tuple2_150 {
    struct Pos_20  field0;
    struct Pos_20  field1;
};

static struct Tuple2_150 Tuple2_150_Tuple2 (  struct Pos_20  field0 ,  struct Pos_20  field1 ) {
    return ( struct Tuple2_150 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion149 {
    enum Unit_7  (*fun) (  struct env120*  ,    struct Pane_126 *  ,    struct Tuple2_150  ,    struct StrView_21  );
    struct env120 env;
};

struct envunion151 {
    enum Unit_7  (*fun) (  struct env135*  ,    struct Editor_143 *  );
    struct env135 env;
};

struct envunion152 {
    enum Unit_7  (*fun) (  struct env133*  ,    struct Pane_126 *  ,    int32_t  );
    struct env133 env;
};

struct envunion153 {
    enum Unit_7  (*fun) (  struct env111*  ,    struct Pane_126 *  ,    struct StrView_21  );
    struct env111 env;
};

struct envunion154 {
    enum Unit_7  (*fun) (  struct env137*  ,    struct Editor_143 *  ,    struct StrConcat_64  );
    struct env137 env;
};

struct envunion155 {
    enum Unit_7  (*fun) (  struct env130*  ,    struct Pane_126 *  );
    struct env130 env;
};

struct envunion156 {
    enum Unit_7  (*fun) (  struct env116*  ,    struct Pane_126 *  );
    struct env116 env;
};

struct env146 {
    ;
    ;
    ;
    ;
    struct env118 envinst118;
    ;
    ;
    ;
    ;
    struct env124 envinst124;
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
    struct env135 envinst135;
    ;
    ;
    struct env133 envinst133;
    ;
    ;
    ;
    ;
    ;
    ;
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
    ;
    struct env137 envinst137;
    ;
    ;
    ;
    struct env130 envinst130;
    ;
    ;
    ;
    struct env116 envinst116;
    ;
    ;
};

struct envunion158 {
    enum Unit_7  (*fun) (  struct env133*  ,    struct Pane_126 *  ,    int32_t  );
    struct env133 env;
};

struct envunion159 {
    enum Unit_7  (*fun) (  struct env141*  ,    struct Editor_143 *  ,    struct StrView_21  );
    struct env141 env;
};

struct envunion160 {
    enum Unit_7  (*fun) (  struct env111*  ,    struct Pane_126 *  ,    struct StrView_21  );
    struct env111 env;
};

struct envunion161 {
    enum Unit_7  (*fun) (  struct env59*  ,    struct StrBuilder_54 *  );
    struct env59 env;
};

struct envunion162 {
    enum Unit_7  (*fun) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  );
    struct env52 env;
};

struct envunion163 {
    enum Unit_7  (*fun) (  struct env114*  ,    struct Pane_126 *  );
    struct env114 env;
};

struct Key_165 {
    enum {
        Key_165_Escape_t,
        Key_165_Enter_t,
        Key_165_Tab_t,
        Key_165_Backspace_t,
        Key_165_Char_t,
        Key_165_Ctrl_t,
        Key_165_Up_t,
        Key_165_Down_t,
        Key_165_Left_t,
        Key_165_Right_t,
        Key_165_Home_t,
        Key_165_End_t,
        Key_165_PageUp_t,
        Key_165_PageDown_t,
        Key_165_Delete_t,
        Key_165_Insert_t,
        Key_165_F1_t,
        Key_165_F2_t,
        Key_165_F3_t,
        Key_165_F4_t,
        Key_165_F5_t,
        Key_165_F6_t,
        Key_165_F7_t,
        Key_165_F8_t,
        Key_165_F9_t,
        Key_165_F10_t,
        Key_165_F11_t,
        Key_165_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_165_Char_s;
        struct {
            char  field0;
        } Key_165_Ctrl_s;
    } stuff;
};

static struct Key_165 Key_165_Char (  char  field0 ) {
    return ( struct Key_165 ) { .tag = Key_165_Char_t, .stuff = { .Key_165_Char_s = { .field0 = field0 } } };
};

static struct Key_165 Key_165_Ctrl (  char  field0 ) {
    return ( struct Key_165 ) { .tag = Key_165_Ctrl_t, .stuff = { .Key_165_Ctrl_s = { .field0 = field0 } } };
};

struct envunion164 {
    enum Unit_7  (*fun) (  struct env146*  ,    struct Editor_143 *  ,    struct Key_165  );
    struct env146 env;
};

struct env157 {
    ;
    ;
    struct env133 envinst133;
    struct env141 envinst141;
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
    ;
    struct env59 envinst59;
    struct env52 envinst52;
    ;
    ;
    struct env114 envinst114;
    ;
    ;
    ;
    ;
    struct env146 envinst146;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum CAllocator_9   idc166 (  ) {
    return ( CAllocator_9_CAllocator );
}

struct envunion169 {
    struct TextBuf_88  (*fun) (  struct env79*  ,    enum CAllocator_9  ,    struct Pos_20  );
    struct env79 env;
};

static  void *   cast_dash_ptr179 (    struct List_11 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of180 (    struct List_11 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct List_11 *   zeroed177 (  ) {
    struct List_11 *  temp178;
    struct List_11 *  x570 = (  temp178 );
    ( ( memset ) ( ( (  cast_dash_ptr179 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of180 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct List_11 *   null_dash_ptr176 (  ) {
    return ( (  zeroed177 ) ( ) );
}

static  struct Slice_10   empty175 (  ) {
    return ( (struct Slice_10) { .f_ptr = ( (  null_dash_ptr176 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_8   mk174 (    enum CAllocator_9  al2031 ) {
    struct Slice_10  elements2032 = ( (  empty175 ) ( ) );
    return ( (struct List_8) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env184 {
    struct List_8 *  list2098;
    struct env5 envinst5;
};

struct envunion185 {
    enum Unit_7  (*fun) (  struct env184*  ,    struct List_11  );
    struct env184 env;
};

struct ArrayIter_186 {
    struct Array_44  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_186   into_dash_iter188 (    struct Array_44  self2322 ) {
    return ( (struct ArrayIter_186) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_189 {
    enum {
        Maybe_189_None_t,
        Maybe_189_Just_t,
    } tag;
    union {
        struct {
            struct List_11  field0;
        } Maybe_189_Just_s;
    } stuff;
};

static struct Maybe_189 Maybe_189_Just (  struct List_11  field0 ) {
    return ( struct Maybe_189 ) { .tag = Maybe_189_Just_t, .stuff = { .Maybe_189_Just_s = { .field0 = field0 } } };
};

enum Ordering_192 {
    Ordering_192_LT,
    Ordering_192_EQ,
    Ordering_192_GT,
};

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_192   cmp191 (    size_t  l179 ,    size_t  r181 ) {
    return ( builtin_size_tcmp( (  l179 ) , (  r181 ) ) );
}

struct StrConcat_197 {
    struct StrConcat_64  field0;
    int32_t  field1;
};

static struct StrConcat_197 StrConcat_197_StrConcat (  struct StrConcat_64  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_197 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_196 {
    struct StrConcat_197  field0;
    struct Char_57  field1;
};

static struct StrConcat_196 StrConcat_196_StrConcat (  struct StrConcat_197  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_196 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_200 {
    struct StrView_21  field0;
    struct StrConcat_196  field1;
};

static struct StrConcat_200 StrConcat_200_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_196  field1 ) {
    return ( struct StrConcat_200 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_199 {
    struct StrConcat_200  field0;
    struct Char_57  field1;
};

static struct StrConcat_199 StrConcat_199_StrConcat (  struct StrConcat_200  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_199 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32203 (    size_t  x630 ) {
    return ( (int32_t ) (  x630 ) );
}

static  enum Unit_7   print_dash_str202 (    struct StrView_21  self1379 ) {
    ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32203 ) ( ( ( (  self1379 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1379 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str208 (    size_t  self1464 ) {
    ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1464 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str207 (    struct StrConcat_65  self1503 ) {
    struct StrConcat_65  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str202 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str208 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str206 (    struct StrConcat_64  self1503 ) {
    struct StrConcat_64  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str207 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str202 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str209 (    int32_t  self1440 ) {
    ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1440 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str205 (    struct StrConcat_197  self1503 ) {
    struct StrConcat_197  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str206 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str209 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

struct Scalar_213 {
    uint32_t  f_value;
};

struct CharDestructured_212 {
    enum {
        CharDestructured_212_Ref_t,
        CharDestructured_212_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_57  field0;
        } CharDestructured_212_Ref_s;
        struct {
            struct Scalar_213  field0;
        } CharDestructured_212_Scalar_s;
    } stuff;
};

static struct CharDestructured_212 CharDestructured_212_Ref (  struct Char_57  field0 ) {
    return ( struct CharDestructured_212 ) { .tag = CharDestructured_212_Ref_t, .stuff = { .CharDestructured_212_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_212 CharDestructured_212_Scalar (  struct Scalar_213  field0 ) {
    return ( struct CharDestructured_212 ) { .tag = CharDestructured_212_Scalar_t, .stuff = { .CharDestructured_212_Scalar_s = { .field0 = field0 } } };
};

static  bool   eq215 (    uint8_t  l116 ,    uint8_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint8_t   size_dash_u8217 (    size_t  x639 ) {
    return ( (uint8_t ) (  x639 ) );
}

static  size_t   op_dash_div218 (    size_t  l285 ,    size_t  r287 ) {
    return ( (  l285 ) / (  r287 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer216 (    uint8_t *  ptr678 ) {
    return ( (  size_dash_u8217 ) ( (  op_dash_div218 ( ( ( (size_t ) (  ptr678 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint8_t   from_dash_integral219 (    int64_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  uint32_t   size_dash_u32220 (    size_t  x633 ) {
    return ( (uint32_t ) (  x633 ) );
}

static  size_t   cast221 (    uint8_t *  x356 ) {
    return ( (size_t ) (  x356 ) );
}

static  struct CharDestructured_212   destructure214 (    struct Char_57  c712 ) {
    if ( (  eq215 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer216 ) ( ( (  c712 ) .f_ptr ) ) ) , (  from_dash_integral219 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_212_Scalar ) ( ( (struct Scalar_213) { .f_value = ( (  size_dash_u32220 ) ( ( ( (  cast221 ) ( ( (  c712 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_212_Ref ) ( (  c712 ) ) );
    }
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_192   cmp222 (    uint32_t  l164 ,    uint32_t  r166 ) {
    return ( builtin_uint32_tcmp( (  l164 ) , (  r166 ) ) );
}

static  uint32_t   from_dash_integral223 (    int64_t  x52 ) {
    return ( (uint32_t ) (  x52 ) );
}

static  uint8_t   cast226 (    uint32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  uint8_t   u32_dash_u8225 (    uint32_t  x657 ) {
    return ( (  cast226 ) ( (  x657 ) ) );
}

static  enum Unit_7   printf_dash_char211 (    struct Char_57  c758 ) {
    struct CharDestructured_212  dref759 = ( (  destructure214 ) ( (  c758 ) ) );
    if ( dref759.tag == CharDestructured_212_Ref_t ) {
        ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32203 ) ( ( ( dref759 .stuff .CharDestructured_212_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref759 .stuff .CharDestructured_212_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref759.tag == CharDestructured_212_Scalar_t ) {
            if ( (  cmp222 ( ( ( dref759 .stuff .CharDestructured_212_Scalar_s .field0 ) .f_value ) , (  from_dash_integral223 ( 127 ) ) ) == 2 ) ) {
                const char*  temp224 = ( (  from_dash_string49 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp224);
                exit ( 1 );
                ( Unit_7_Unit );
            }
            ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8225 ) ( ( ( dref759 .stuff .CharDestructured_212_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str210 (    struct Char_57  self1404 ) {
    ( (  printf_dash_char211 ) ( (  self1404 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str204 (    struct StrConcat_196  self1503 ) {
    struct StrConcat_196  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str205 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str210 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str201 (    struct StrConcat_200  self1503 ) {
    struct StrConcat_200  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str202 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str204 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str198 (    struct StrConcat_199  self1503 ) {
    struct StrConcat_199  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str201 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str210 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  struct StrView_21   from_dash_string227 (    uint8_t *  ptr86 ,    size_t  count88 ) {
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = (  ptr86 ) , .f_count = (  count88 ) } ) } );
}

static  uint8_t *   cast229 (    uint8_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_192   cmp232 (    uint8_t  l169 ,    uint8_t  r171 ) {
    return ( builtin_uint8_tcmp( (  l169 ) , (  r171 ) ) );
}

static  size_t   next_dash_char231 (    uint8_t *  p688 ) {
    uint8_t  pb689 = ( * (  p688 ) );
    if ( (  cmp232 ( (  pb689 ) , (  from_dash_integral219 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp232 ( (  pb689 ) , (  from_dash_integral219 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp232 ( (  pb689 ) , (  from_dash_integral219 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp232 ( (  pb689 ) , (  from_dash_integral219 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp233 = ( (  from_dash_string49 ) ( ( "(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp233);
                    exit ( 1 );
                    ( Unit_7_Unit );
                }
            }
        }
    }
}

static  struct Char_57   scan_dash_from_dash_mem230 (    uint8_t *  p700 ) {
    size_t  clen701 = ( (  next_dash_char231 ) ( (  p700 ) ) );
    if ( (  cmp191 ( (  clen701 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp234 = ( (  from_dash_string49 ) ( ( "UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp234);
        exit ( 1 );
        ( Unit_7_Unit );
    }
    return ( (struct Char_57) { .f_ptr = (  p700 ) , .f_num_dash_bytes = (  clen701 ) } );
}

static  struct Char_57   from_dash_charlike228 (    uint8_t *  ptr704 ,    size_t  num_dash_bytes706 ) {
    uint8_t *  ptr707 = ( ( (  cast229 ) ( (  ptr704 ) ) ) );
    return ( (  scan_dash_from_dash_mem230 ) ( (  ptr707 ) ) );
}

static  enum Unit_7   panic195 (    struct StrConcat_196  errmsg1712 ) {
    ( (  print_dash_str198 ) ( ( ( StrConcat_199_StrConcat ) ( ( ( StrConcat_200_StrConcat ) ( ( (  from_dash_string227 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct List_11 *   cast_dash_ptr235 (    struct Array_44 *  p359 ) {
    return ( (struct List_11 * ) (  p359 ) );
}

static  int64_t   op_dash_mul237 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) * (  r196 ) );
}

static  struct List_11 *   offset_dash_ptr236 (    struct List_11 *  x338 ,    int64_t  count340 ) {
    struct List_11  temp238;
    return ( (struct List_11 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul237 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp238 ) ) ) ) ) ) ) ) );
}

static  struct List_11 *   get_dash_ptr194 (    struct Array_44 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp191 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i2253 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic195 ) ( ( ( StrConcat_196_StrConcat ) ( ( ( StrConcat_197_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string227 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct List_11 *  p2254 = ( ( (  cast_dash_ptr235 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr236 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  struct List_11   get193 (    struct Array_44 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr194 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  size_t   op_dash_add239 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) + (  r272 ) );
}

static  struct Maybe_189   next190 (    struct ArrayIter_186 *  self2329 ) {
    if ( (  cmp191 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_189) { .tag = Maybe_189_None_t } );
    }
    struct List_11  e2331 = ( (  get193 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add239 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_189_Just ) ( (  e2331 ) ) );
}

static  enum Unit_7   for_dash_each183 (    struct Array_44  iterable1074 ,   struct envunion185  fun1076 ) {
    struct ArrayIter_186  temp187 = ( (  into_dash_iter188 ) ( (  iterable1074 ) ) );
    struct ArrayIter_186 *  it1077 = ( &temp187 );
    while ( ( true ) ) {
        struct Maybe_189  dref1078 = ( (  next190 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_189_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_189_Just_t ) {
                struct envunion185  temp240 = (  fun1076 );
                ( temp240.fun ( &temp240.env ,  ( dref1078 .stuff .Maybe_189_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  bool   eq246 (    size_t  l126 ,    size_t  r128 ) {
    return ( (  l126 ) == (  r128 ) );
}

struct TypeSize_249 {
    size_t  f_size;
};

static  struct TypeSize_249   get_dash_typesize248 (  ) {
    struct List_11  temp250;
    return ( (struct TypeSize_249) { .f_size = ( sizeof( ( (  temp250 ) ) ) ) } );
}

static  struct List_11 *   cast_dash_ptr251 (    void *  p359 ) {
    return ( (struct List_11 * ) (  p359 ) );
}

static  size_t   op_dash_mul252 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) * (  r282 ) );
}

static  struct Slice_10   allocate247 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize248 ) ( ) ) ) .f_size );
    struct List_11 *  ptr1957 = ( (  cast_dash_ptr251 ) ( ( ( malloc ) ( (  op_dash_mul252 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_10) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env253 {
    struct Slice_10  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_255 {
    struct List_11  field0;
    int32_t  field1;
};

static struct Tuple2_255 Tuple2_255_Tuple2 (  struct List_11  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_255 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion254 {
    enum Unit_7  (*fun) (  struct env253*  ,    struct Tuple2_255  );
    struct env253 env;
};

struct StrConcat_261 {
    struct StrConcat_64  field0;
    size_t  field1;
};

static struct StrConcat_261 StrConcat_261_StrConcat (  struct StrConcat_64  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_261 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_260 {
    struct StrConcat_261  field0;
    struct Char_57  field1;
};

static struct StrConcat_260 StrConcat_260_StrConcat (  struct StrConcat_261  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_260 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_264 {
    struct StrView_21  field0;
    struct StrConcat_260  field1;
};

static struct StrConcat_264 StrConcat_264_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_260  field1 ) {
    return ( struct StrConcat_264 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_263 {
    struct StrConcat_264  field0;
    struct Char_57  field1;
};

static struct StrConcat_263 StrConcat_263_StrConcat (  struct StrConcat_264  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_263 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str267 (    struct StrConcat_261  self1503 ) {
    struct StrConcat_261  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str206 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str208 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str266 (    struct StrConcat_260  self1503 ) {
    struct StrConcat_260  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str267 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str210 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str265 (    struct StrConcat_264  self1503 ) {
    struct StrConcat_264  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str202 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str266 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str262 (    struct StrConcat_263  self1503 ) {
    struct StrConcat_263  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str265 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str210 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic259 (    struct StrConcat_260  errmsg1712 ) {
    ( (  print_dash_str262 ) ( ( ( StrConcat_263_StrConcat ) ( ( ( StrConcat_264_StrConcat ) ( ( (  from_dash_string227 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  int64_t   size_dash_i64268 (    size_t  x594 ) {
    return ( (int64_t ) (  x594 ) );
}

static  struct List_11 *   get_dash_ptr258 (    struct Slice_10  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp191 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic259 ) ( ( ( StrConcat_260_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string227 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct List_11 *  elem_dash_ptr1760 = ( (  offset_dash_ptr236 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set257 (    struct Slice_10  slice1774 ,    size_t  i1776 ,    struct List_11  x1778 ) {
    struct List_11 *  ep1779 = ( (  get_dash_ptr258 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  size_t   i32_dash_size269 (    int32_t  x609 ) {
    return ( (size_t ) ( (int64_t ) (  x609 ) ) );
}

static  enum Unit_7   lam256 (   struct env253* env ,    struct Tuple2_255  dref2043 ) {
    return ( (  set257 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size269 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct SliceIter_272 {
    struct Slice_10  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_273 {
    int32_t  f_from;
};

struct Zip_271 {
    struct SliceIter_272  f_left_dash_it;
    struct FromIter_273  f_right_dash_it;
};

static  struct Zip_271   into_dash_iter275 (    struct Zip_271  self911 ) {
    return (  self911 );
}

struct Maybe_276 {
    enum {
        Maybe_276_None_t,
        Maybe_276_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_255  field0;
        } Maybe_276_Just_s;
    } stuff;
};

static struct Maybe_276 Maybe_276_Just (  struct Tuple2_255  field0 ) {
    return ( struct Maybe_276 ) { .tag = Maybe_276_Just_t, .stuff = { .Maybe_276_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_189   next278 (    struct SliceIter_272 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp191 ( (  op_dash_add239 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_189) { .tag = Maybe_189_None_t } );
    }
    struct List_11  elem1830 = ( * ( (  offset_dash_ptr236 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add239 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_189_Just ) ( (  elem1830 ) ) );
}

struct Maybe_279 {
    enum {
        Maybe_279_None_t,
        Maybe_279_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_279_Just_s;
    } stuff;
};

static struct Maybe_279 Maybe_279_Just (  int32_t  field0 ) {
    return ( struct Maybe_279 ) { .tag = Maybe_279_Just_t, .stuff = { .Maybe_279_Just_s = { .field0 = field0 } } };
};

static  int32_t   op_dash_add281 (    int32_t  l207 ,    int32_t  r209 ) {
    return ( (  l207 ) + (  r209 ) );
}

static  struct Maybe_279   next280 (    struct FromIter_273 *  dref905 ) {
    int32_t  v907 = ( ( (* dref905 ) ) .f_from );
    (* dref905 ) .f_from = (  op_dash_add281 ( ( ( (* dref905 ) ) .f_from ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( ( Maybe_279_Just ) ( (  v907 ) ) );
}

static  struct Maybe_276   next277 (    struct Zip_271 *  self914 ) {
    struct Zip_271  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_189  dref916 = ( (  next278 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_189_None_t ) {
            return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_189_Just_t ) {
                struct Maybe_279  dref918 = ( (  next280 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_279_None_t ) {
                    return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_279_Just_t ) {
                        ( (  next278 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next280 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_276_Just ) ( ( ( Tuple2_255_Tuple2 ) ( ( dref916 .stuff .Maybe_189_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_279_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each270 (    struct Zip_271  iterable1074 ,   struct envunion254  fun1076 ) {
    struct Zip_271  temp274 = ( (  into_dash_iter275 ) ( (  iterable1074 ) ) );
    struct Zip_271 *  it1077 = ( &temp274 );
    while ( ( true ) ) {
        struct Maybe_276  dref1078 = ( (  next277 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_276_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_276_Just_t ) {
                struct envunion254  temp282 = (  fun1076 );
                ( temp282.fun ( &temp282.env ,  ( dref1078 .stuff .Maybe_276_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct SliceIter_272   into_dash_iter284 (    struct Slice_10  self1822 ) {
    return ( (struct SliceIter_272) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_273   into_dash_iter285 (    struct FromIter_273  it903 ) {
    return (  it903 );
}

static  struct Zip_271   zip283 (    struct Slice_10  left922 ,    struct FromIter_273  right924 ) {
    struct SliceIter_272  left_dash_it925 = ( (  into_dash_iter284 ) ( (  left922 ) ) );
    struct FromIter_273  right_dash_it926 = ( (  into_dash_iter285 ) ( (  right924 ) ) );
    return ( (struct Zip_271) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct FromIter_273   from286 (    int32_t  f900 ) {
    return ( (struct FromIter_273) { .f_from = (  f900 ) } );
}

static  void *   cast_dash_ptr288 (    struct List_11 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free287 (    enum CAllocator_9  dref1959 ,    struct Slice_10  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr288 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   grow_dash_if_dash_full245 (   struct env1* env ,    struct List_8 *  list2041 ) {
    if ( (  eq246 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate247 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq246 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_10  new_dash_slice2042 = ( (  allocate247 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul252 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env253 envinst253 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion254  fun2046 = ( (struct envunion254){ .fun = (  enum Unit_7  (*) (  struct env253*  ,    struct Tuple2_255  ) )lam256 , .env =  envinst253 } );
            ( (  for_dash_each270 ) ( ( (  zip283 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from286 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free287 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add243 (   struct env5* env ,    struct List_8 *  list2049 ,    struct List_11  elem2051 ) {
    struct envunion6  temp244 = ( (struct envunion6){ .fun = (  enum Unit_7  (*) (  struct env1*  ,    struct List_8 *  ) )grow_dash_if_dash_full245 , .env =  env->envinst1 } );
    ( temp244.fun ( &temp244.env ,  (  list2049 ) ) );
    ( (  set257 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add239 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam241 (   struct env184* env ,    struct List_11  x2102 ) {
    struct envunion39  temp242 = ( (struct envunion39){ .fun = (  enum Unit_7  (*) (  struct env5*  ,    struct List_8 *  ,    struct List_11  ) )add243 , .env =  env->envinst5 } );
    return ( temp242.fun ( &temp242.env ,  ( env->list2098 ) ,  (  x2102 ) ) );
}

static  enum Unit_7   add_dash_all182 (   struct env38* env ,    struct List_8 *  list2098 ,    struct Array_44  it2100 ) {
    struct env184 envinst184 = {
        .list2098 =  list2098 ,
        .envinst5 = env->envinst5 ,
    };
    ( (  for_dash_each183 ) ( (  it2100 ) ,  ( (struct envunion185){ .fun = (  enum Unit_7  (*) (  struct env184*  ,    struct List_11  ) )lam241 , .env =  envinst184 } ) ) );
    return ( Unit_7_Unit );
}

static  struct List_8   from_dash_iter172 (   struct env42* env ,    struct Array_44  iter2139 ,    enum CAllocator_9  al2141 ) {
    struct List_8  temp173 = ( (  mk174 ) ( (  al2141 ) ) );
    struct List_8 *  list2142 = ( &temp173 );
    struct envunion43  temp181 = ( (struct envunion43){ .fun = (  enum Unit_7  (*) (  struct env38*  ,    struct List_8 *  ,    struct Array_44  ) )add_dash_all182 , .env =  env->envinst38 } );
    ( temp181.fun ( &temp181.env ,  (  list2142 ) ,  (  iter2139 ) ) );
    return ( * (  list2142 ) );
}

static  struct Array_44   from_dash_listlike289 (    struct Array_44  self330 ) {
    return (  self330 );
}

static  void *   cast_dash_ptr295 (    uint8_t * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of296 (    uint8_t *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint8_t *   zeroed293 (  ) {
    uint8_t *  temp294;
    uint8_t *  x570 = (  temp294 );
    ( ( memset ) ( ( (  cast_dash_ptr295 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of296 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   null_dash_ptr292 (  ) {
    return ( (  zeroed293 ) ( ) );
}

static  struct Slice_12   empty291 (  ) {
    return ( (struct Slice_12) { .f_ptr = ( (  null_dash_ptr292 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_11   mk290 (    enum CAllocator_9  al2031 ) {
    struct Slice_12  elements2032 = ( (  empty291 ) ( ) );
    return ( (struct List_11) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr303 (    struct Changeset_26 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of304 (    struct Changeset_26 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Changeset_26 *   zeroed301 (  ) {
    struct Changeset_26 *  temp302;
    struct Changeset_26 *  x570 = (  temp302 );
    ( ( memset ) ( ( (  cast_dash_ptr303 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of304 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Changeset_26 *   null_dash_ptr300 (  ) {
    return ( (  zeroed301 ) ( ) );
}

static  struct Slice_25   empty299 (  ) {
    return ( (struct Slice_25) { .f_ptr = ( (  null_dash_ptr300 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_24   mk298 (    enum CAllocator_9  al2031 ) {
    struct Slice_25  elements2032 = ( (  empty299 ) ( ) );
    return ( (struct List_24) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_89   mk_dash_actions297 (    enum CAllocator_9  al3613 ) {
    return ( (struct Actions_89) { .f_list = ( (  mk298 ) ( (  al3613 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( ChangesetInputType_90_NoChangeset ) } );
}

static  struct TextBuf_88   mk170 (   struct env79* env ,    enum CAllocator_9  al3624 ,    struct Pos_20  cursor_dash_pos3626 ) {
    struct envunion80  temp171 = ( (struct envunion80){ .fun = (  struct List_8  (*) (  struct env42*  ,    struct Array_44  ,    enum CAllocator_9  ) )from_dash_iter172 , .env =  env->envinst42 } );
    return ( (struct TextBuf_88) { .f_al = (  al3624 ) , .f_buf = ( temp171.fun ( &temp171.env ,  ( (  from_dash_listlike289 ) ( ( (struct Array_44) { ._arr = { ( (  mk290 ) ( (  al3624 ) ) ) } } ) ) ) ,  (  al3624 ) ) ) , .f_actions = ( (  mk_dash_actions297 ) ( (  al3624 ) ) ) } );
}

static  struct Pos_20   mk305 (    int32_t  line3579 ,    int32_t  bi3581 ) {
    return ( (struct Pos_20) { .f_line = (  line3579 ) , .f_bi = (  bi3581 ) } );
}

struct Slice_306 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  const char* *   offset_dash_ptr308 (    const char* *  x338 ,    int64_t  count340 ) {
    const char*  temp309;
    return ( (const char* * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul237 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp309 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral310 (    int64_t  x46 ) {
    return (  x46 );
}

static  size_t   op_dash_sub311 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) - (  r277 ) );
}

static  struct Slice_306   get307 (  ) {
    return ( (struct Slice_306) { .f_ptr = ( (  offset_dash_ptr308 ) ( ( _global_argv ) ,  (  from_dash_integral310 ( 1 ) ) ) ) , .f_count = (  op_dash_sub311 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

struct Maybe_315 {
    enum {
        Maybe_315_None_t,
        Maybe_315_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_315_Just_s;
    } stuff;
};

static struct Maybe_315 Maybe_315_Just (  const char*  field0 ) {
    return ( struct Maybe_315 ) { .tag = Maybe_315_Just_t, .stuff = { .Maybe_315_Just_s = { .field0 = field0 } } };
};

static  const char*   undefined316 (  ) {
    const char*  temp317;
    return (  temp317 );
}

static  const char*   or_dash_fail314 (    struct Maybe_315  x1725 ,    struct StrConcat_260  errmsg1727 ) {
    struct Maybe_315  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_315_None_t ) {
        ( (  panic259 ) ( (  errmsg1727 ) ) );
        return ( (  undefined316 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_315_Just_t ) {
            return ( dref1728 .stuff .Maybe_315_Just_s .field0 );
        }
    }
}

static  struct Maybe_315   try_dash_get318 (    struct Slice_306  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp191 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_315) { .tag = Maybe_315_None_t } );
    }
    const char* *  elem_dash_ptr1766 = ( (  offset_dash_ptr308 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_315_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  const char*   get313 (    struct Slice_306  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail314 ) ( ( (  try_dash_get318 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_260_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string227 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get312 (    struct Slice_306  self1867 ,    size_t  idx1869 ) {
    return ( (  get313 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

struct envunion320 {
    enum Unit_7  (*fun) (  struct env85*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  );
    struct env85 env;
};

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_192   cmp324 (    int32_t  l159 ,    int32_t  r161 ) {
    return ( builtin_int32_tcmp( (  l159 ) , (  r161 ) ) );
}

static  enum Ordering_192   cmp323 (    struct Pos_20  l3572 ,    struct Pos_20  r3574 ) {
    enum Ordering_192  dref3575 = ( (  cmp324 ) ( ( (  l3572 ) .f_line ) ,  ( (  r3574 ) .f_line ) ) );
    switch (  dref3575 ) {
        case Ordering_192_EQ : {
            return ( (  cmp324 ) ( ( (  l3572 ) .f_bi ) ,  ( (  r3574 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_192  els3576 =  dref3575;
            return (  els3576 );
            break;
        }
    }
}

static  struct Pos_20   min322 (    struct Pos_20  l1236 ,    struct Pos_20  r1238 ) {
    if ( (  cmp323 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Pos_20   max325 (    struct Pos_20  l1315 ,    struct Pos_20  r1317 ) {
    if ( (  cmp323 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  bool   eq327 (    int32_t  l106 ,    int32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq326 (    struct Pos_20  l3567 ,    struct Pos_20  r3569 ) {
    return ( (  eq327 ( ( (  l3567 ) .f_line ) , ( (  r3569 ) .f_line ) ) ) && (  eq327 ( ( (  l3567 ) .f_bi ) , ( (  r3569 ) .f_bi ) ) ) );
}

static  size_t   size328 (    struct List_8 *  l2133 ) {
    return ( ( * (  l2133 ) ) .f_count );
}

static  struct List_11 *   get_dash_ptr333 (    struct List_8 *  list2001 ,    size_t  i2003 ) {
    if ( ( (  cmp191 ( (  i2003 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i2003 ) , ( ( * (  list2001 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic259 ) ( ( ( StrConcat_260_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2003 ) ) ) ,  ( (  from_dash_string227 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2001 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr258 ) ( ( ( * (  list2001 ) ) .f_elements ) ,  (  i2003 ) ) );
}

static  struct List_11   get332 (    struct List_8 *  list2011 ,    size_t  i2013 ) {
    return ( * ( (  get_dash_ptr333 ) ( (  list2011 ) ,  (  i2013 ) ) ) );
}

static  uint8_t *   offset_dash_ptr336 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp337;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul237 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp337 ) ) ) ) ) ) ) ) );
}

static  size_t   min338 (    size_t  l1236 ,    size_t  r1238 ) {
    if ( (  cmp191 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Slice_12   subslice335 (    struct Slice_12  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    uint8_t *  begin_dash_ptr1787 = ( (  offset_dash_ptr336 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp191 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp191 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_12) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub311 ( ( (  min338 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_12) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct Slice_12   from334 (    struct Slice_12  slice1791 ,    size_t  from1793 ) {
    return ( (  subslice335 ) ( (  slice1791 ) ,  (  from1793 ) ,  ( (  slice1791 ) .f_count ) ) );
}

static  struct Slice_12   to_dash_slice339 (    struct List_11  l2126 ) {
    uint8_t *  ptr2127 = ( ( (  l2126 ) .f_elements ) .f_ptr );
    return ( (struct Slice_12) { .f_ptr = (  ptr2127 ) , .f_count = ( (  l2126 ) .f_count ) } );
}

static  enum Unit_7   set340 (    struct List_8 *  list2021 ,    size_t  i2023 ,    struct List_11  elem2025 ) {
    if ( ( (  cmp191 ( (  i2023 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i2023 ) , ( ( * (  list2021 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic259 ) ( ( ( StrConcat_260_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2023 ) ) ) ,  ( (  from_dash_string227 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2021 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set257 ) ( ( ( * (  list2021 ) ) .f_elements ) ,  (  i2023 ) ,  (  elem2025 ) ) );
    return ( Unit_7_Unit );
}

struct env347 {
    struct List_11 *  list2098;
    struct env13 envinst13;
};

struct envunion348 {
    enum Unit_7  (*fun) (  struct env347*  ,    uint8_t  );
    struct env347 env;
};

struct SliceIter_349 {
    struct Slice_12  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_349   into_dash_iter351 (    struct Slice_12  self1822 ) {
    return ( (struct SliceIter_349) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_352 {
    enum {
        Maybe_352_None_t,
        Maybe_352_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_352_Just_s;
    } stuff;
};

static struct Maybe_352 Maybe_352_Just (  uint8_t  field0 ) {
    return ( struct Maybe_352 ) { .tag = Maybe_352_Just_t, .stuff = { .Maybe_352_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_352   next353 (    struct SliceIter_349 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp191 ( (  op_dash_add239 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
    }
    uint8_t  elem1830 = ( * ( (  offset_dash_ptr336 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add239 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_352_Just ) ( (  elem1830 ) ) );
}

static  enum Unit_7   for_dash_each346 (    struct Slice_12  iterable1074 ,   struct envunion348  fun1076 ) {
    struct SliceIter_349  temp350 = ( (  into_dash_iter351 ) ( (  iterable1074 ) ) );
    struct SliceIter_349 *  it1077 = ( &temp350 );
    while ( ( true ) ) {
        struct Maybe_352  dref1078 = ( (  next353 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_352_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_352_Just_t ) {
                struct envunion348  temp354 = (  fun1076 );
                ( temp354.fun ( &temp354.env ,  ( dref1078 .stuff .Maybe_352_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

struct TypeSize_362 {
    size_t  f_size;
};

static  struct TypeSize_362   get_dash_typesize361 (  ) {
    uint8_t  temp363;
    return ( (struct TypeSize_362) { .f_size = ( sizeof( ( (  temp363 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr364 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_12   allocate360 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize361 ) ( ) ) ) .f_size );
    uint8_t *  ptr1957 = ( (  cast_dash_ptr364 ) ( ( ( malloc ) ( (  op_dash_mul252 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_12) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env365 {
    struct Slice_12  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_367 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_367 Tuple2_367_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_367 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion366 {
    enum Unit_7  (*fun) (  struct env365*  ,    struct Tuple2_367  );
    struct env365 env;
};

static  uint8_t *   get_dash_ptr370 (    struct Slice_12  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp191 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic259 ) ( ( ( StrConcat_260_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string227 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1760 = ( (  offset_dash_ptr336 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set369 (    struct Slice_12  slice1774 ,    size_t  i1776 ,    uint8_t  x1778 ) {
    uint8_t *  ep1779 = ( (  get_dash_ptr370 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam368 (   struct env365* env ,    struct Tuple2_367  dref2043 ) {
    return ( (  set369 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size269 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct Zip_372 {
    struct SliceIter_349  f_left_dash_it;
    struct FromIter_273  f_right_dash_it;
};

static  struct Zip_372   into_dash_iter374 (    struct Zip_372  self911 ) {
    return (  self911 );
}

struct Maybe_375 {
    enum {
        Maybe_375_None_t,
        Maybe_375_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_367  field0;
        } Maybe_375_Just_s;
    } stuff;
};

static struct Maybe_375 Maybe_375_Just (  struct Tuple2_367  field0 ) {
    return ( struct Maybe_375 ) { .tag = Maybe_375_Just_t, .stuff = { .Maybe_375_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_375   next376 (    struct Zip_372 *  self914 ) {
    struct Zip_372  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_352  dref916 = ( (  next353 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_352_None_t ) {
            return ( (struct Maybe_375) { .tag = Maybe_375_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_352_Just_t ) {
                struct Maybe_279  dref918 = ( (  next280 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_279_None_t ) {
                    return ( (struct Maybe_375) { .tag = Maybe_375_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_279_Just_t ) {
                        ( (  next353 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next280 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_375_Just ) ( ( ( Tuple2_367_Tuple2 ) ( ( dref916 .stuff .Maybe_352_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_279_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each371 (    struct Zip_372  iterable1074 ,   struct envunion366  fun1076 ) {
    struct Zip_372  temp373 = ( (  into_dash_iter374 ) ( (  iterable1074 ) ) );
    struct Zip_372 *  it1077 = ( &temp373 );
    while ( ( true ) ) {
        struct Maybe_375  dref1078 = ( (  next376 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_375_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_375_Just_t ) {
                struct envunion366  temp377 = (  fun1076 );
                ( temp377.fun ( &temp377.env ,  ( dref1078 .stuff .Maybe_375_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_372   zip378 (    struct Slice_12  left922 ,    struct FromIter_273  right924 ) {
    struct SliceIter_349  left_dash_it925 = ( (  into_dash_iter351 ) ( (  left922 ) ) );
    struct FromIter_273  right_dash_it926 = ( (  into_dash_iter285 ) ( (  right924 ) ) );
    return ( (struct Zip_372) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr380 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free379 (    enum CAllocator_9  dref1959 ,    struct Slice_12  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr380 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   grow_dash_if_dash_full359 (   struct env2* env ,    struct List_11 *  list2041 ) {
    if ( (  eq246 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate360 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq246 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_12  new_dash_slice2042 = ( (  allocate360 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul252 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env365 envinst365 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion366  fun2046 = ( (struct envunion366){ .fun = (  enum Unit_7  (*) (  struct env365*  ,    struct Tuple2_367  ) )lam368 , .env =  envinst365 } );
            ( (  for_dash_each371 ) ( ( (  zip378 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from286 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free379 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add357 (   struct env13* env ,    struct List_11 *  list2049 ,    uint8_t  elem2051 ) {
    struct envunion14  temp358 = ( (struct envunion14){ .fun = (  enum Unit_7  (*) (  struct env2*  ,    struct List_11 *  ) )grow_dash_if_dash_full359 , .env =  env->envinst2 } );
    ( temp358.fun ( &temp358.env ,  (  list2049 ) ) );
    ( (  set369 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add239 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam355 (   struct env347* env ,    uint8_t  x2102 ) {
    struct envunion41  temp356 = ( (struct envunion41){ .fun = (  enum Unit_7  (*) (  struct env13*  ,    struct List_11 *  ,    uint8_t  ) )add357 , .env =  env->envinst13 } );
    return ( temp356.fun ( &temp356.env ,  ( env->list2098 ) ,  (  x2102 ) ) );
}

static  enum Unit_7   add_dash_all345 (   struct env40* env ,    struct List_11 *  list2098 ,    struct Slice_12  it2100 ) {
    struct env347 envinst347 = {
        .list2098 =  list2098 ,
        .envinst13 = env->envinst13 ,
    };
    ( (  for_dash_each346 ) ( (  it2100 ) ,  ( (struct envunion348){ .fun = (  enum Unit_7  (*) (  struct env347*  ,    uint8_t  ) )lam355 , .env =  envinst347 } ) ) );
    return ( Unit_7_Unit );
}

static  struct List_11   from_dash_iter342 (   struct env45* env ,    struct Slice_12  iter2139 ,    enum CAllocator_9  al2141 ) {
    struct List_11  temp343 = ( (  mk290 ) ( (  al2141 ) ) );
    struct List_11 *  list2142 = ( &temp343 );
    struct envunion46  temp344 = ( (struct envunion46){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all345 , .env =  env->envinst40 } );
    ( temp344.fun ( &temp344.env ,  (  list2142 ) ,  (  iter2139 ) ) );
    return ( * (  list2142 ) );
}

static  struct StrView_21   or_dash_else382 (    struct Maybe_144  self1732 ,    struct StrView_21  alt1734 ) {
    struct Maybe_144  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_144_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_144_Just_t ) {
            return ( dref1735 .stuff .Maybe_144_Just_s .field0 );
        }
    }
}

struct LineIter_384 {
    struct StrView_21  f_og;
    size_t  f_last;
};

static  uint8_t   undefined388 (  ) {
    uint8_t  temp389;
    return (  temp389 );
}

static  uint8_t   or_dash_fail387 (    struct Maybe_352  x1725 ,    struct StrConcat_260  errmsg1727 ) {
    struct Maybe_352  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_352_None_t ) {
        ( (  panic259 ) ( (  errmsg1727 ) ) );
        return ( (  undefined388 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_352_Just_t ) {
            return ( dref1728 .stuff .Maybe_352_Just_s .field0 );
        }
    }
}

static  struct Maybe_352   try_dash_get390 (    struct Slice_12  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp191 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
    }
    uint8_t *  elem_dash_ptr1766 = ( (  offset_dash_ptr336 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_352_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  uint8_t   get386 (    struct Slice_12  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail387 ) ( ( (  try_dash_get390 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_260_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string227 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   char_dash_u8391 (    struct Char_57  c718 ) {
    struct CharDestructured_212  dref719 = ( (  destructure214 ) ( (  c718 ) ) );
    if ( dref719.tag == CharDestructured_212_Ref_t ) {
        return ( * ( ( dref719 .stuff .CharDestructured_212_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref719.tag == CharDestructured_212_Scalar_t ) {
            return ( (  u32_dash_u8225 ) ( ( ( dref719 .stuff .CharDestructured_212_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct StrView_21   byte_dash_substr392 (    struct StrView_21  s2183 ,    size_t  from2185 ,    size_t  to2187 ) {
    return ( (struct StrView_21) { .f_contents = ( (  subslice335 ) ( ( (  s2183 ) .f_contents ) ,  (  from2185 ) ,  (  to2187 ) ) ) } );
}

static  struct Maybe_144   next385 (    struct LineIter_384 *  self2404 ) {
    if ( (  cmp191 ( ( ( * (  self2404 ) ) .f_last ) , ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_144) { .tag = Maybe_144_None_t } );
    }
    size_t  i2405 = ( ( * (  self2404 ) ) .f_last );
    while ( ( (  cmp191 ( (  i2405 ) , ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq215 ( ( (  get386 ) ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) ,  (  i2405 ) ) ) , ( (  char_dash_u8391 ) ( ( (  from_dash_charlike228 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2405 = (  op_dash_add239 ( (  i2405 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_21  line2406 = ( (  byte_dash_substr392 ) ( ( ( * (  self2404 ) ) .f_og ) ,  ( ( * (  self2404 ) ) .f_last ) ,  (  i2405 ) ) );
    if ( (  cmp191 ( (  i2405 ) , ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2405 = (  op_dash_add239 ( (  i2405 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2404 ) .f_last = (  i2405 );
    return ( ( Maybe_144_Just ) ( (  line2406 ) ) );
}

static  struct LineIter_384   into_dash_iter394 (    struct LineIter_384  self2401 ) {
    return (  self2401 );
}

static  struct Maybe_144   head383 (    struct LineIter_384  it1142 ) {
    struct LineIter_384  temp393 = ( (  into_dash_iter394 ) ( (  it1142 ) ) );
    return ( (  next385 ) ( ( &temp393 ) ) );
}

static  struct LineIter_384   lines395 (    struct StrView_21  s2398 ) {
    return ( (struct LineIter_384) { .f_og = (  s2398 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env400 {
    ;
    struct Char_57  c2222;
};

struct envunion401 {
    bool  (*fun) (  struct env400*  ,    struct Char_57  );
    struct env400 env;
};

struct SplitIter_399 {
    struct StrView_21  f_og;
    size_t  f_last;
    struct envunion401  f_fun;
};

struct Drop_398 {
    struct SplitIter_399  field0;
    size_t  field1;
};

static struct Drop_398 Drop_398_Drop (  struct SplitIter_399  field0 ,  size_t  field1 ) {
    return ( struct Drop_398 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_397 {
    struct Drop_398  f_left_dash_it;
    struct FromIter_273  f_right_dash_it;
};

static  struct Zip_397   into_dash_iter402 (    struct Zip_397  self911 ) {
    return (  self911 );
}

static  struct Drop_398   into_dash_iter404 (    struct Drop_398  self845 ) {
    return (  self845 );
}

static  struct Zip_397   zip403 (    struct Drop_398  left922 ,    struct FromIter_273  right924 ) {
    struct Drop_398  left_dash_it925 = ( (  into_dash_iter404 ) ( (  left922 ) ) );
    struct FromIter_273  right_dash_it926 = ( (  into_dash_iter285 ) ( (  right924 ) ) );
    return ( (struct Zip_397) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct SplitIter_399   into_dash_iter406 (    struct SplitIter_399  self2227 ) {
    return (  self2227 );
}

static  struct Drop_398   drop405 (    struct SplitIter_399  iterable852 ,    size_t  i854 ) {
    struct SplitIter_399  it855 = ( (  into_dash_iter406 ) ( (  iterable852 ) ) );
    return ( ( Drop_398_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SplitIter_399   split_dash_by_dash_filter408 (    struct StrView_21  s2215 ,   struct envunion401  fun2217 ) {
    return ( (struct SplitIter_399) { .f_og = (  s2215 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2217 ) } );
}

struct Tuple2_411 {
    struct CharDestructured_212  field0;
    struct CharDestructured_212  field1;
};

static struct Tuple2_411 Tuple2_411_Tuple2 (  struct CharDestructured_212  field0 ,  struct CharDestructured_212  field1 ) {
    return ( struct Tuple2_411 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int64_t   op_dash_add412 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) + (  r186 ) );
}

static  bool   eq414 (    uint32_t  l111 ,    uint32_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  bool   eq413 (    struct Scalar_213  l724 ,    struct Scalar_213  r726 ) {
    return (  eq414 ( ( (  l724 ) .f_value ) , ( (  r726 ) .f_value ) ) );
}

static  bool   eq410 (    struct Char_57  l729 ,    struct Char_57  r731 ) {
    if ( ( !  eq246 ( ( (  l729 ) .f_num_dash_bytes ) , ( (  r731 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_411  dref732 = ( ( Tuple2_411_Tuple2 ) ( ( (  destructure214 ) ( (  l729 ) ) ) ,  ( (  destructure214 ) ( (  r731 ) ) ) ) );
    if ( dref732 .field0.tag == CharDestructured_212_Ref_t && dref732 .field1.tag == CharDestructured_212_Ref_t ) {
        int64_t  i735 = (  from_dash_integral310 ( 0 ) );
        while ( (  cmp191 ( ( (size_t ) (  i735 ) ) , ( ( dref732 .field0 .stuff .CharDestructured_212_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq215 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field0 .stuff .CharDestructured_212_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field1 .stuff .CharDestructured_212_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) ) ) ) {
                return ( false );
            }
            i735 = (  op_dash_add412 ( (  i735 ) , (  from_dash_integral310 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref732 .field0.tag == CharDestructured_212_Scalar_t && dref732 .field1.tag == CharDestructured_212_Scalar_t ) {
            return (  eq413 ( ( dref732 .field0 .stuff .CharDestructured_212_Scalar_s .field0 ) , ( dref732 .field1 .stuff .CharDestructured_212_Scalar_s .field0 ) ) );
        }
        else {
            if ( dref732 .field0.tag == CharDestructured_212_Scalar_t && dref732 .field1.tag == CharDestructured_212_Ref_t ) {
                return (  eq215 ( ( (  u32_dash_u8225 ) ( ( ( dref732 .field0 .stuff .CharDestructured_212_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref732 .field1 .stuff .CharDestructured_212_Ref_s .field0 ) .f_ptr ) ) ) );
            }
            else {
                if ( dref732 .field0.tag == CharDestructured_212_Ref_t && dref732 .field1.tag == CharDestructured_212_Scalar_t ) {
                    return (  eq215 ( ( (  u32_dash_u8225 ) ( ( ( dref732 .field1 .stuff .CharDestructured_212_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref732 .field0 .stuff .CharDestructured_212_Ref_s .field0 ) .f_ptr ) ) ) );
                }
            }
        }
    }
}

static  bool   lam409 (   struct env400* env ,    struct Char_57  cc2224 ) {
    return (  eq410 ( (  cc2224 ) , ( env->c2222 ) ) );
}

static  struct SplitIter_399   split_dash_by_dash_each407 (    struct StrView_21  s2220 ,    struct Char_57  c2222 ) {
    struct env400 envinst400 = {
        .c2222 =  c2222 ,
    };
    return ( (  split_dash_by_dash_filter408 ) ( (  s2220 ) ,  ( (struct envunion401){ .fun = (  bool  (*) (  struct env400*  ,    struct Char_57  ) )lam409 , .env =  envinst400 } ) ) );
}

struct Tuple2_417 {
    struct StrView_21  field0;
    int32_t  field1;
};

static struct Tuple2_417 Tuple2_417_Tuple2 (  struct StrView_21  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_417 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_416 {
    enum {
        Maybe_416_None_t,
        Maybe_416_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_417  field0;
        } Maybe_416_Just_s;
    } stuff;
};

static struct Maybe_416 Maybe_416_Just (  struct Tuple2_417  field0 ) {
    return ( struct Maybe_416 ) { .tag = Maybe_416_Just_t, .stuff = { .Maybe_416_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_144   next420 (    struct SplitIter_399 *  self2230 ) {
    if ( (  cmp191 ( ( ( * (  self2230 ) ) .f_last ) , ( ( ( ( * (  self2230 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_144) { .tag = Maybe_144_None_t } );
    }
    size_t  i2231 = ( ( * (  self2230 ) ) .f_last );
    while ( (  cmp191 ( (  i2231 ) , ( ( ( ( * (  self2230 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2232 = ( (  get_dash_ptr370 ) ( ( ( ( * (  self2230 ) ) .f_og ) .f_contents ) ,  (  i2231 ) ) );
        struct Char_57  c2233 = ( (  scan_dash_from_dash_mem230 ) ( (  ptr2232 ) ) );
        struct envunion401  temp421 = ( ( * (  self2230 ) ) .f_fun );
        if ( ( temp421.fun ( &temp421.env ,  (  c2233 ) ) ) ) {
            break;
        }
        i2231 = (  op_dash_add239 ( (  i2231 ) , ( (  next_dash_char231 ) ( (  ptr2232 ) ) ) ) );
    }
    struct StrView_21  line2234 = ( (  byte_dash_substr392 ) ( ( ( * (  self2230 ) ) .f_og ) ,  ( ( * (  self2230 ) ) .f_last ) ,  (  i2231 ) ) );
    i2231 = (  op_dash_add239 ( (  i2231 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2230 ) .f_last = (  i2231 );
    return ( ( Maybe_144_Just ) ( (  line2234 ) ) );
}

static  struct Maybe_144   next419 (    struct Drop_398 *  dref847 ) {
    while ( (  cmp191 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next420 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub311 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next420 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Maybe_416   next418 (    struct Zip_397 *  self914 ) {
    struct Zip_397  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_144  dref916 = ( (  next419 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_144_None_t ) {
            return ( (struct Maybe_416) { .tag = Maybe_416_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_144_Just_t ) {
                struct Maybe_279  dref918 = ( (  next280 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_279_None_t ) {
                    return ( (struct Maybe_416) { .tag = Maybe_416_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_279_Just_t ) {
                        ( (  next419 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next280 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_416_Just ) ( ( ( Tuple2_417_Tuple2 ) ( ( dref916 .stuff .Maybe_144_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_279_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion424 {
    struct List_11  (*fun) (  struct env45*  ,    struct Slice_12  ,    enum CAllocator_9  );
    struct env45 env;
};

static  enum Unit_7   insert426 (   struct env29* env ,    struct List_8 *  list2054 ,    size_t  i2056 ,    struct List_11  elem2058 ) {
    if ( ( (  cmp191 ( (  i2056 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i2056 ) , ( ( * (  list2054 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic259 ) ( ( ( StrConcat_260_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2056 ) ) ) ,  ( (  from_dash_string227 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2054 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq246 ( ( ( * (  list2054 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion31  temp427 = ( (struct envunion31){ .fun = (  enum Unit_7  (*) (  struct env5*  ,    struct List_8 *  ,    struct List_11  ) )add243 , .env =  env->envinst5 } );
        ( temp427.fun ( &temp427.env ,  (  list2054 ) ,  (  elem2058 ) ) );
        return ( Unit_7_Unit );
    }
    struct envunion30  temp428 = ( (struct envunion30){ .fun = (  enum Unit_7  (*) (  struct env1*  ,    struct List_8 *  ) )grow_dash_if_dash_full245 , .env =  env->envinst1 } );
    ( temp428.fun ( &temp428.env ,  (  list2054 ) ) );
    size_t  ii2059 = (  op_dash_sub311 ( ( ( * (  list2054 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp191 ( (  ii2059 ) , (  i2056 ) ) != 0 ) ) {
        ( (  set257 ) ( ( ( * (  list2054 ) ) .f_elements ) ,  (  op_dash_add239 ( (  ii2059 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get332 ) ( (  list2054 ) ,  (  ii2059 ) ) ) ) );
        if ( (  eq246 ( (  ii2059 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2059 = (  op_dash_sub311 ( (  ii2059 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set257 ) ( ( ( * (  list2054 ) ) .f_elements ) ,  (  i2056 ) ,  (  elem2058 ) ) );
    (*  list2054 ) .f_count = (  op_dash_add239 ( ( ( * (  list2054 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct envunion430 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

static  enum Unit_7   free431 (    struct List_11 *  list2035 ) {
    ( (  free379 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( ( * (  list2035 ) ) .f_elements ) ) );
    return ( Unit_7_Unit );
}

static  int32_t   add_dash_to_dash_spot331 (   struct env81* env ,    struct TextBuf_88 *  self3658 ,    struct Pos_20  p3660 ,    struct StrView_21  bytes3662 ) {
    enum CAllocator_9  al3663 = ( ( ( * (  self3658 ) ) .f_buf ) .f_al );
    struct List_8 *  buf3664 = ( & ( ( * (  self3658 ) ) .f_buf ) );
    struct List_11  extracted_dash_line_dash_buf3665 = ( (  get332 ) ( (  buf3664 ) ,  ( (  i32_dash_size269 ) ( ( (  p3660 ) .f_line ) ) ) ) );
    struct Slice_12  remaining3666 = ( (  from334 ) ( ( (  to_dash_slice339 ) ( (  extracted_dash_line_dash_buf3665 ) ) ) ,  ( (  i32_dash_size269 ) ( ( (  p3660 ) .f_bi ) ) ) ) );
    struct envunion82  temp341 = ( (struct envunion82){ .fun = (  struct List_11  (*) (  struct env45*  ,    struct Slice_12  ,    enum CAllocator_9  ) )from_dash_iter342 , .env =  env->envinst45 } );
    ( (  set340 ) ( (  buf3664 ) ,  ( (  i32_dash_size269 ) ( ( (  p3660 ) .f_line ) ) ) ,  ( temp341.fun ( &temp341.env ,  ( (  subslice335 ) ( ( (  to_dash_slice339 ) ( (  extracted_dash_line_dash_buf3665 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size269 ) ( ( (  p3660 ) .f_bi ) ) ) ) ) ,  (  al3663 ) ) ) ) );
    struct List_11 *  last_dash_line3667 = ( (  get_dash_ptr333 ) ( (  buf3664 ) ,  ( (  i32_dash_size269 ) ( ( (  p3660 ) .f_line ) ) ) ) );
    struct envunion84  temp381 = ( (struct envunion84){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all345 , .env =  env->envinst40 } );
    ( temp381.fun ( &temp381.env ,  (  last_dash_line3667 ) ,  ( ( (  or_dash_else382 ) ( ( (  head383 ) ( ( (  lines395 ) ( (  bytes3662 ) ) ) ) ) ,  ( (  from_dash_string227 ) ( ( "" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3668 = (  from_dash_integral48 ( 0 ) );
    struct Zip_397  temp396 =  into_dash_iter402 ( ( (  zip403 ) ( ( (  drop405 ) ( ( (  split_dash_by_dash_each407 ) ( (  bytes3662 ) ,  ( (  from_dash_charlike228 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from286 ) ( (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_416  __cond415 =  next418 (&temp396);
        if (  __cond415 .tag == 0 ) {
            break;
        }
        struct Tuple2_417  dref3669 =  __cond415 .stuff .Maybe_416_Just_s .field0;
        struct envunion424  temp423 = ( (struct envunion424){ .fun = (  struct List_11  (*) (  struct env45*  ,    struct Slice_12  ,    enum CAllocator_9  ) )from_dash_iter342 , .env =  env->envinst45 } );
        struct List_11  temp422 = ( temp423.fun ( &temp423.env ,  ( ( dref3669 .field0 ) .f_contents ) ,  (  al3663 ) ) );
        struct List_11 *  nuline3672 = ( &temp422 );
        size_t  next_dash_line3673 = ( (  i32_dash_size269 ) ( (  op_dash_add281 ( ( (  p3660 ) .f_line ) , ( dref3669 .field1 ) ) ) ) );
        struct envunion83  temp425 = ( (struct envunion83){ .fun = (  enum Unit_7  (*) (  struct env29*  ,    struct List_8 *  ,    size_t  ,    struct List_11  ) )insert426 , .env =  env->envinst29 } );
        ( temp425.fun ( &temp425.env ,  (  buf3664 ) ,  (  next_dash_line3673 ) ,  ( * (  nuline3672 ) ) ) );
        last_dash_line3667 = ( (  get_dash_ptr333 ) ( (  buf3664 ) ,  (  next_dash_line3673 ) ) );
        lines_dash_added3668 = (  op_dash_add281 ( (  lines_dash_added3668 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    struct envunion430  temp429 = ( (struct envunion430){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all345 , .env =  env->envinst40 } );
    ( temp429.fun ( &temp429.env ,  (  last_dash_line3667 ) ,  (  remaining3666 ) ) );
    ( (  free431 ) ( ( & (  extracted_dash_line_dash_buf3665 ) ) ) );
    return (  lines_dash_added3668 );
}

static  size_t   size432 (    struct List_11 *  l2133 ) {
    return ( ( * (  l2133 ) ) .f_count );
}

struct StrConcat_438 {
    struct StrConcat_65  field0;
    struct Char_57  field1;
};

static struct StrConcat_438 StrConcat_438_StrConcat (  struct StrConcat_65  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_438 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_437 {
    struct StrConcat_438  field0;
    size_t  field1;
};

static struct StrConcat_437 StrConcat_437_StrConcat (  struct StrConcat_438  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_437 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_436 {
    struct StrConcat_437  field0;
    struct Char_57  field1;
};

static struct StrConcat_436 StrConcat_436_StrConcat (  struct StrConcat_437  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_436 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_441 {
    struct StrView_21  field0;
    struct StrConcat_436  field1;
};

static struct StrConcat_441 StrConcat_441_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_436  field1 ) {
    return ( struct StrConcat_441 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_440 {
    struct StrConcat_441  field0;
    struct Char_57  field1;
};

static struct StrConcat_440 StrConcat_440_StrConcat (  struct StrConcat_441  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_440 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str445 (    struct StrConcat_438  self1503 ) {
    struct StrConcat_438  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str207 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str210 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str444 (    struct StrConcat_437  self1503 ) {
    struct StrConcat_437  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str445 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str208 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str443 (    struct StrConcat_436  self1503 ) {
    struct StrConcat_436  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str444 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str210 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str442 (    struct StrConcat_441  self1503 ) {
    struct StrConcat_441  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str202 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str443 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str439 (    struct StrConcat_440  self1503 ) {
    struct StrConcat_440  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str442 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str210 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic435 (    struct StrConcat_436  errmsg1712 ) {
    ( (  print_dash_str439 ) ( ( ( StrConcat_440_StrConcat ) ( ( ( StrConcat_441_StrConcat ) ( ( (  from_dash_string227 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct Drop_447 {
    struct Zip_372  field0;
    size_t  field1;
};

static struct Drop_447 Drop_447_Drop (  struct Zip_372  field0 ,  size_t  field1 ) {
    return ( struct Drop_447 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env448 {
    ;
    size_t  num_dash_elems2067;
    ;
    ;
    struct List_11 *  list2062;
};

struct envunion449 {
    enum Unit_7  (*fun) (  struct env448*  ,    struct Tuple2_367  );
    struct env448 env;
};

static  struct Drop_447   into_dash_iter451 (    struct Drop_447  self845 ) {
    return (  self845 );
}

static  struct Maybe_375   next452 (    struct Drop_447 *  dref847 ) {
    while ( (  cmp191 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next376 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub311 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next376 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_7   for_dash_each446 (    struct Drop_447  iterable1074 ,   struct envunion449  fun1076 ) {
    struct Drop_447  temp450 = ( (  into_dash_iter451 ) ( (  iterable1074 ) ) );
    struct Drop_447 *  it1077 = ( &temp450 );
    while ( ( true ) ) {
        struct Maybe_375  dref1078 = ( (  next452 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_375_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_375_Just_t ) {
                struct envunion449  temp453 = (  fun1076 );
                ( temp453.fun ( &temp453.env ,  ( dref1078 .stuff .Maybe_375_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Drop_447   drop454 (    struct Zip_372  iterable852 ,    size_t  i854 ) {
    struct Zip_372  it855 = ( (  into_dash_iter374 ) ( (  iterable852 ) ) );
    return ( ( Drop_447_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SliceIter_349   into_dash_iter456 (    struct List_11  self2028 ) {
    return ( (  into_dash_iter351 ) ( ( (  subslice335 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

static  struct Zip_372   zip455 (    struct List_11  left922 ,    struct FromIter_273  right924 ) {
    struct SliceIter_349  left_dash_it925 = ( (  into_dash_iter456 ) ( (  left922 ) ) );
    struct FromIter_273  right_dash_it926 = ( (  into_dash_iter285 ) ( (  right924 ) ) );
    return ( (struct Zip_372) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   set458 (    struct List_11 *  list2021 ,    size_t  i2023 ,    uint8_t  elem2025 ) {
    if ( ( (  cmp191 ( (  i2023 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i2023 ) , ( ( * (  list2021 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic259 ) ( ( ( StrConcat_260_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2023 ) ) ) ,  ( (  from_dash_string227 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2021 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set369 ) ( ( ( * (  list2021 ) ) .f_elements ) ,  (  i2023 ) ,  (  elem2025 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam457 (   struct env448* env ,    struct Tuple2_367  dref2068 ) {
    return ( (  set458 ) ( ( env->list2062 ) ,  (  op_dash_sub311 ( ( (  i32_dash_size269 ) ( ( dref2068 .field1 ) ) ) , ( env->num_dash_elems2067 ) ) ) ,  ( dref2068 .field0 ) ) );
}

struct StrConcat_461 {
    struct StrConcat_261  field0;
    struct StrView_21  field1;
};

static struct StrConcat_461 StrConcat_461_StrConcat (  struct StrConcat_261  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_461 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_464 {
    struct StrView_21  field0;
    struct StrConcat_461  field1;
};

static struct StrConcat_464 StrConcat_464_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_461  field1 ) {
    return ( struct StrConcat_464 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_463 {
    struct StrConcat_464  field0;
    struct Char_57  field1;
};

static struct StrConcat_463 StrConcat_463_StrConcat (  struct StrConcat_464  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_463 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str466 (    struct StrConcat_461  self1503 ) {
    struct StrConcat_461  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str267 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str202 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str465 (    struct StrConcat_464  self1503 ) {
    struct StrConcat_464  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str202 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str466 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str462 (    struct StrConcat_463  self1503 ) {
    struct StrConcat_463  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str465 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str210 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic460 (    struct StrConcat_461  errmsg1712 ) {
    ( (  print_dash_str462 ) ( ( ( StrConcat_463_StrConcat ) ( ( ( StrConcat_464_StrConcat ) ( ( (  from_dash_string227 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct env468 {
    ;
    struct Slice_12  dest1853;
    ;
};

struct envunion469 {
    enum Unit_7  (*fun) (  struct env468*  ,    struct Tuple2_367  );
    struct env468 env;
};

static  enum Unit_7   for_dash_each467 (    struct Zip_372  iterable1074 ,   struct envunion469  fun1076 ) {
    struct Zip_372  temp470 = ( (  into_dash_iter374 ) ( (  iterable1074 ) ) );
    struct Zip_372 *  it1077 = ( &temp470 );
    while ( ( true ) ) {
        struct Maybe_375  dref1078 = ( (  next376 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_375_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_375_Just_t ) {
                struct envunion469  temp471 = (  fun1076 );
                ( temp471.fun ( &temp471.env ,  ( dref1078 .stuff .Maybe_375_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam472 (   struct env468* env ,    struct Tuple2_367  dref1854 ) {
    return ( (  set369 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size269 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_7   copy_dash_to459 (    struct Slice_12  src1851 ,    struct Slice_12  dest1853 ) {
    if ( (  cmp191 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic460 ) ( ( ( StrConcat_461_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string227 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string227 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env468 envinst468 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each467 ) ( ( (  zip378 ) ( (  src1851 ) ,  ( (  from286 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  ( (struct envunion469){ .fun = (  enum Unit_7  (*) (  struct env468*  ,    struct Tuple2_367  ) )lam472 , .env =  envinst468 } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   remove_dash_range434 (   struct env32* env ,    struct List_11 *  list2062 ,    size_t  from2064 ,    size_t  to_dash_excl2066 ) {
    if ( (  cmp191 ( (  to_dash_excl2066 ) , (  from2064 ) ) == 0 ) ) {
        ( (  panic435 ) ( ( ( StrConcat_436_StrConcat ) ( ( ( StrConcat_437_StrConcat ) ( ( ( StrConcat_438_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp191 ( (  from2064 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic259 ) ( ( ( StrConcat_260_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_string227 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp191 ( (  to_dash_excl2066 ) , ( ( * (  list2062 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic259 ) ( ( ( StrConcat_260_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_string227 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2067 = (  op_dash_sub311 ( (  to_dash_excl2066 ) , (  from2064 ) ) );
    struct env448 envinst448 = {
        .num_dash_elems2067 =  num_dash_elems2067 ,
        .list2062 =  list2062 ,
    };
    ( (  for_dash_each446 ) ( ( (  drop454 ) ( ( (  zip455 ) ( ( * (  list2062 ) ) ,  ( (  from286 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  op_dash_add239 ( (  from2064 ) , (  num_dash_elems2067 ) ) ) ) ) ,  ( (struct envunion449){ .fun = (  enum Unit_7  (*) (  struct env448*  ,    struct Tuple2_367  ) )lam457 , .env =  envinst448 } ) ) );
    (*  list2062 ) .f_count = (  op_dash_sub311 ( ( ( * (  list2062 ) ) .f_count ) , (  num_dash_elems2067 ) ) );
    size_t  capacity2071 = ( ( ( * (  list2062 ) ) .f_elements ) .f_count );
    if ( (  cmp191 ( (  op_dash_mul252 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  capacity2071 ) ) == 0 ) ) {
        if ( (  eq246 ( ( ( * (  list2062 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free379 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
            (*  list2062 ) .f_elements = ( (  empty291 ) ( ) );
            return ( Unit_7_Unit );
        }
        size_t  new_dash_size2072 = (  op_dash_mul252 ( (  op_dash_add239 ( (  op_dash_div218 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2038 ) ) );
        struct Slice_12  new_dash_slice2073 = ( (  allocate360 ) ( ( ( * (  list2062 ) ) .f_al ) ,  (  new_dash_size2072 ) ) );
        ( (  copy_dash_to459 ) ( ( (  subslice335 ) ( ( ( * (  list2062 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  (  new_dash_slice2073 ) ) );
        ( (  free379 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
        (*  list2062 ) .f_elements = (  new_dash_slice2073 );
    }
    return ( Unit_7_Unit );
}

struct envunion474 {
    int32_t  (*fun) (  struct env81*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct StrView_21  );
    struct env81 env;
};

static  enum Unit_7   trim475 (    struct List_11 *  l2115 ,    size_t  new_dash_count2117 ) {
    (*  l2115 ) .f_count = ( (  min338 ) ( (  new_dash_count2117 ) ,  ( ( * (  l2115 ) ) .f_count ) ) );
    return ( Unit_7_Unit );
}

static  int32_t   min476 (    int32_t  l1236 ,    int32_t  r1238 ) {
    if ( (  cmp324 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

struct envunion478 {
    int32_t  (*fun) (  struct env81*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct StrView_21  );
    struct env81 env;
};

struct Maybe_480 {
    enum {
        Maybe_480_None_t,
        Maybe_480_Just_t,
    } tag;
    union {
        struct {
            struct Slice_12  field0;
        } Maybe_480_Just_s;
    } stuff;
};

static struct Maybe_480 Maybe_480_Just (  struct Slice_12  field0 ) {
    return ( struct Maybe_480 ) { .tag = Maybe_480_Just_t, .stuff = { .Maybe_480_Just_s = { .field0 = field0 } } };
};

static  struct Slice_12   or_dash_else479 (    struct Maybe_480  self1732 ,    struct Slice_12  alt1734 ) {
    struct Maybe_480  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_480_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_480_Just_t ) {
            return ( dref1735 .stuff .Maybe_480_Just_s .field0 );
        }
    }
}

static  struct Maybe_480   fmap_dash_maybe481 (    struct Maybe_189  x1275 ,    struct Slice_12 (*  fun1277 )(    struct List_11  ) ) {
    struct Maybe_189  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_189_None_t ) {
        return ( (struct Maybe_480) { .tag = Maybe_480_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_189_Just_t ) {
            return ( ( Maybe_480_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_189_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_189   try_dash_get482 (    struct List_8 *  list2016 ,    size_t  i2018 ) {
    if ( (  cmp191 ( (  i2018 ) , ( ( * (  list2016 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_189) { .tag = Maybe_189_None_t } );
    }
    return ( ( Maybe_189_Just ) ( ( (  get332 ) ( (  list2016 ) ,  (  i2018 ) ) ) ) );
}

struct StrConcat_487 {
    struct StrView_21  field0;
    struct StrView_21  field1;
};

static struct StrConcat_487 StrConcat_487_StrConcat (  struct StrView_21  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_487 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_486 {
    struct StrConcat_487  field0;
    struct Char_57  field1;
};

static struct StrConcat_486 StrConcat_486_StrConcat (  struct StrConcat_487  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_486 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str488 (    struct StrConcat_487  self1503 ) {
    struct StrConcat_487  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str202 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str202 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str485 (    struct StrConcat_486  self1503 ) {
    struct StrConcat_486  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str488 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str210 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   assert484 (    bool  cond1718 ,    struct StrView_21  msg1720 ) {
    if ( ( ! (  cond1718 ) ) ) {
        ( (  print_dash_str485 ) ( ( ( StrConcat_486_StrConcat ) ( ( ( StrConcat_487_StrConcat ) ( ( (  from_dash_string227 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1720 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    }
    return ( Unit_7_Unit );
}

struct Drop_492 {
    struct Zip_271  field0;
    size_t  field1;
};

static struct Drop_492 Drop_492_Drop (  struct Zip_271  field0 ,  size_t  field1 ) {
    return ( struct Drop_492 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env493 {
    ;
    size_t  num_dash_elems2067;
    ;
    ;
    struct List_8 *  list2062;
};

struct envunion494 {
    enum Unit_7  (*fun) (  struct env493*  ,    struct Tuple2_255  );
    struct env493 env;
};

static  struct Drop_492   into_dash_iter496 (    struct Drop_492  self845 ) {
    return (  self845 );
}

static  struct Maybe_276   next497 (    struct Drop_492 *  dref847 ) {
    while ( (  cmp191 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next277 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub311 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next277 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_7   for_dash_each491 (    struct Drop_492  iterable1074 ,   struct envunion494  fun1076 ) {
    struct Drop_492  temp495 = ( (  into_dash_iter496 ) ( (  iterable1074 ) ) );
    struct Drop_492 *  it1077 = ( &temp495 );
    while ( ( true ) ) {
        struct Maybe_276  dref1078 = ( (  next497 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_276_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_276_Just_t ) {
                struct envunion494  temp498 = (  fun1076 );
                ( temp498.fun ( &temp498.env ,  ( dref1078 .stuff .Maybe_276_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Drop_492   drop499 (    struct Zip_271  iterable852 ,    size_t  i854 ) {
    struct Zip_271  it855 = ( (  into_dash_iter275 ) ( (  iterable852 ) ) );
    return ( ( Drop_492_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct Slice_10   subslice502 (    struct Slice_10  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct List_11 *  begin_dash_ptr1787 = ( (  offset_dash_ptr236 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp191 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp191 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_10) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub311 ( ( (  min338 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_10) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_272   into_dash_iter501 (    struct List_8  self2028 ) {
    return ( (  into_dash_iter284 ) ( ( (  subslice502 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

static  struct Zip_271   zip500 (    struct List_8  left922 ,    struct FromIter_273  right924 ) {
    struct SliceIter_272  left_dash_it925 = ( (  into_dash_iter501 ) ( (  left922 ) ) );
    struct FromIter_273  right_dash_it926 = ( (  into_dash_iter285 ) ( (  right924 ) ) );
    return ( (struct Zip_271) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   lam503 (   struct env493* env ,    struct Tuple2_255  dref2068 ) {
    return ( (  set340 ) ( ( env->list2062 ) ,  (  op_dash_sub311 ( ( (  i32_dash_size269 ) ( ( dref2068 .field1 ) ) ) , ( env->num_dash_elems2067 ) ) ) ,  ( dref2068 .field0 ) ) );
}

struct env506 {
    ;
    struct Slice_10  dest1853;
    ;
};

struct envunion507 {
    enum Unit_7  (*fun) (  struct env506*  ,    struct Tuple2_255  );
    struct env506 env;
};

static  enum Unit_7   for_dash_each505 (    struct Zip_271  iterable1074 ,   struct envunion507  fun1076 ) {
    struct Zip_271  temp508 = ( (  into_dash_iter275 ) ( (  iterable1074 ) ) );
    struct Zip_271 *  it1077 = ( &temp508 );
    while ( ( true ) ) {
        struct Maybe_276  dref1078 = ( (  next277 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_276_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_276_Just_t ) {
                struct envunion507  temp509 = (  fun1076 );
                ( temp509.fun ( &temp509.env ,  ( dref1078 .stuff .Maybe_276_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam510 (   struct env506* env ,    struct Tuple2_255  dref1854 ) {
    return ( (  set257 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size269 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_7   copy_dash_to504 (    struct Slice_10  src1851 ,    struct Slice_10  dest1853 ) {
    if ( (  cmp191 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic460 ) ( ( ( StrConcat_461_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string227 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string227 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env506 envinst506 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each505 ) ( ( (  zip283 ) ( (  src1851 ) ,  ( (  from286 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  ( (struct envunion507){ .fun = (  enum Unit_7  (*) (  struct env506*  ,    struct Tuple2_255  ) )lam510 , .env =  envinst506 } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   remove_dash_range490 (   struct env33* env ,    struct List_8 *  list2062 ,    size_t  from2064 ,    size_t  to_dash_excl2066 ) {
    if ( (  cmp191 ( (  to_dash_excl2066 ) , (  from2064 ) ) == 0 ) ) {
        ( (  panic435 ) ( ( ( StrConcat_436_StrConcat ) ( ( ( StrConcat_437_StrConcat ) ( ( ( StrConcat_438_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp191 ( (  from2064 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic259 ) ( ( ( StrConcat_260_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_string227 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp191 ( (  to_dash_excl2066 ) , ( ( * (  list2062 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic259 ) ( ( ( StrConcat_260_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_string227 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2067 = (  op_dash_sub311 ( (  to_dash_excl2066 ) , (  from2064 ) ) );
    struct env493 envinst493 = {
        .num_dash_elems2067 =  num_dash_elems2067 ,
        .list2062 =  list2062 ,
    };
    ( (  for_dash_each491 ) ( ( (  drop499 ) ( ( (  zip500 ) ( ( * (  list2062 ) ) ,  ( (  from286 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  op_dash_add239 ( (  from2064 ) , (  num_dash_elems2067 ) ) ) ) ) ,  ( (struct envunion494){ .fun = (  enum Unit_7  (*) (  struct env493*  ,    struct Tuple2_255  ) )lam503 , .env =  envinst493 } ) ) );
    (*  list2062 ) .f_count = (  op_dash_sub311 ( ( ( * (  list2062 ) ) .f_count ) , (  num_dash_elems2067 ) ) );
    size_t  capacity2071 = ( ( ( * (  list2062 ) ) .f_elements ) .f_count );
    if ( (  cmp191 ( (  op_dash_mul252 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  capacity2071 ) ) == 0 ) ) {
        if ( (  eq246 ( ( ( * (  list2062 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free287 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
            (*  list2062 ) .f_elements = ( (  empty175 ) ( ) );
            return ( Unit_7_Unit );
        }
        size_t  new_dash_size2072 = (  op_dash_mul252 ( (  op_dash_add239 ( (  op_dash_div218 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2038 ) ) );
        struct Slice_10  new_dash_slice2073 = ( (  allocate247 ) ( ( ( * (  list2062 ) ) .f_al ) ,  (  new_dash_size2072 ) ) );
        ( (  copy_dash_to504 ) ( ( (  subslice502 ) ( ( ( * (  list2062 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  (  new_dash_slice2073 ) ) );
        ( (  free287 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
        (*  list2062 ) .f_elements = (  new_dash_slice2073 );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   change_dash_no_dash_action321 (   struct env85* env ,    struct TextBuf_88 *  self3676 ,    struct Pos_20  from_dash_pos3678 ,    struct Pos_20  to_dash_pos3680 ,    struct StrView_21  bytes3682 ) {
    struct Pos_20  from3683 = ( (  min322 ) ( (  from_dash_pos3678 ) ,  (  to_dash_pos3680 ) ) );
    struct Pos_20  to3684 = ( (  max325 ) ( (  from_dash_pos3678 ) ,  (  to_dash_pos3680 ) ) );
    if ( (  eq326 ( (  to3684 ) , (  from3683 ) ) ) ) {
        enum CAllocator_9  al3685 = ( ( ( * (  self3676 ) ) .f_buf ) .f_al );
        if ( ( (  eq246 ( ( (  size328 ) ( ( & ( ( * (  self3676 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size269 ) ( ( (  from3683 ) .f_line ) ) ) ) ) && (  eq327 ( ( (  from3683 ) .f_bi ) , (  from_dash_integral48 ( 0 ) ) ) ) ) ) {
            struct envunion93  temp329 = ( (struct envunion93){ .fun = (  enum Unit_7  (*) (  struct env5*  ,    struct List_8 *  ,    struct List_11  ) )add243 , .env =  env->envinst5 } );
            ( temp329.fun ( &temp329.env ,  ( & ( ( * (  self3676 ) ) .f_buf ) ) ,  ( (  mk290 ) ( (  al3685 ) ) ) ) );
        }
        struct envunion87  temp330 = ( (struct envunion87){ .fun = (  int32_t  (*) (  struct env81*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct StrView_21  ) )add_dash_to_dash_spot331 , .env =  env->envinst81 } );
        ( temp330.fun ( &temp330.env ,  (  self3676 ) ,  (  from3683 ) ,  (  bytes3682 ) ) );
    } else {
        struct List_8 *  lines_dash_buf3686 = ( & ( ( * (  self3676 ) ) .f_buf ) );
        struct List_11 *  first_dash_line3687 = ( (  get_dash_ptr333 ) ( (  lines_dash_buf3686 ) ,  ( (  i32_dash_size269 ) ( ( (  from3683 ) .f_line ) ) ) ) );
        if ( ( (  eq327 ( ( (  from3683 ) .f_line ) , ( (  to3684 ) .f_line ) ) ) && (  cmp324 ( ( (  to3684 ) .f_bi ) , (  op_dash_add281 ( ( (  size_dash_i32203 ) ( ( (  size432 ) ( (  first_dash_line3687 ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion91  temp433 = ( (struct envunion91){ .fun = (  enum Unit_7  (*) (  struct env32*  ,    struct List_11 *  ,    size_t  ,    size_t  ) )remove_dash_range434 , .env =  env->envinst32 } );
            ( temp433.fun ( &temp433.env ,  (  first_dash_line3687 ) ,  ( (  i32_dash_size269 ) ( ( (  from3683 ) .f_bi ) ) ) ,  ( (  i32_dash_size269 ) ( ( (  to3684 ) .f_bi ) ) ) ) );
            struct envunion474  temp473 = ( (struct envunion474){ .fun = (  int32_t  (*) (  struct env81*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct StrView_21  ) )add_dash_to_dash_spot331 , .env =  env->envinst81 } );
            ( temp473.fun ( &temp473.env ,  (  self3676 ) ,  (  from3683 ) ,  (  bytes3682 ) ) );
        } else {
            ( (  trim475 ) ( (  first_dash_line3687 ) ,  ( (  i32_dash_size269 ) ( ( (  from3683 ) .f_bi ) ) ) ) );
            struct List_11 *  last_dash_line3688 = ( (  get_dash_ptr333 ) ( (  lines_dash_buf3686 ) ,  ( (  i32_dash_size269 ) ( ( (  to3684 ) .f_line ) ) ) ) );
            to3684 .f_bi = ( (  min476 ) ( ( (  to3684 ) .f_bi ) ,  (  op_dash_add281 ( ( (  size_dash_i32203 ) ( ( (  size432 ) ( (  last_dash_line3688 ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
            if ( (  eq327 ( ( (  to3684 ) .f_bi ) , (  op_dash_add281 ( ( (  size_dash_i32203 ) ( ( (  size432 ) ( (  last_dash_line3688 ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ) {
                to3684 .f_line = (  op_dash_add281 ( ( (  to3684 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) );
                to3684 .f_bi = (  from_dash_integral48 ( 0 ) );
            }
            struct envunion478  temp477 = ( (struct envunion478){ .fun = (  int32_t  (*) (  struct env81*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct StrView_21  ) )add_dash_to_dash_spot331 , .env =  env->envinst81 } );
            int32_t  lines_dash_added3689 = ( temp477.fun ( &temp477.env ,  (  self3676 ) ,  (  from3683 ) ,  (  bytes3682 ) ) );
            to3684 .f_line = (  op_dash_add281 ( ( (  to3684 ) .f_line ) , (  lines_dash_added3689 ) ) );
            from3683 .f_line = (  op_dash_add281 ( ( (  from3683 ) .f_line ) , (  lines_dash_added3689 ) ) );
            struct Slice_12  last_dash_line3690 = ( (  or_dash_else479 ) ( ( (  fmap_dash_maybe481 ) ( ( (  try_dash_get482 ) ( (  lines_dash_buf3686 ) ,  ( (  i32_dash_size269 ) ( ( (  to3684 ) .f_line ) ) ) ) ) ,  (  to_dash_slice339 ) ) ) ,  ( (  empty291 ) ( ) ) ) );
            struct envunion86  temp483 = ( (struct envunion86){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all345 , .env =  env->envinst40 } );
            ( temp483.fun ( &temp483.env ,  (  first_dash_line3687 ) ,  ( (  from334 ) ( (  last_dash_line3690 ) ,  ( (  i32_dash_size269 ) ( ( (  to3684 ) .f_bi ) ) ) ) ) ) );
            ( (  assert484 ) ( (  cmp324 ( ( (  to3684 ) .f_line ) , ( (  from3683 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string227 ) ( ( "there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion92  temp489 = ( (struct envunion92){ .fun = (  enum Unit_7  (*) (  struct env33*  ,    struct List_8 *  ,    size_t  ,    size_t  ) )remove_dash_range490 , .env =  env->envinst33 } );
            ( temp489.fun ( &temp489.env ,  ( & ( ( * (  self3676 ) ) .f_buf ) ) ,  ( (  i32_dash_size269 ) ( (  op_dash_add281 ( ( (  from3683 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  op_dash_add239 ( ( (  i32_dash_size269 ) ( ( (  to3684 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_7_Unit );
}

struct StrConcat_514 {
    struct StrView_21  field0;
    const char*  field1;
};

static struct StrConcat_514 StrConcat_514_StrConcat (  struct StrView_21  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_514 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_513 {
    struct StrConcat_514  field0;
    struct Char_57  field1;
};

static struct StrConcat_513 StrConcat_513_StrConcat (  struct StrConcat_514  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_513 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_518 {
    struct StrView_21  field0;
    struct StrConcat_513  field1;
};

static struct StrConcat_518 StrConcat_518_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_513  field1 ) {
    return ( struct StrConcat_518 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_517 {
    struct StrConcat_518  field0;
    struct Char_57  field1;
};

static struct StrConcat_517 StrConcat_517_StrConcat (  struct StrConcat_518  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_517 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str522 (    const char*  self1398 ) {
    ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%s" ) ,  ( 2 ) ) ) ,  (  self1398 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str521 (    struct StrConcat_514  self1503 ) {
    struct StrConcat_514  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str202 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str522 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str520 (    struct StrConcat_513  self1503 ) {
    struct StrConcat_513  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str521 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str210 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str519 (    struct StrConcat_518  self1503 ) {
    struct StrConcat_518  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str202 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str520 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str516 (    struct StrConcat_517  self1503 ) {
    struct StrConcat_517  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str519 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str210 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic515 (    struct StrConcat_513  errmsg1712 ) {
    ( (  print_dash_str516 ) ( ( ( StrConcat_517_StrConcat ) ( ( ( StrConcat_518_StrConcat ) ( ( (  from_dash_string227 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct StrView_21   undefined523 (  ) {
    struct StrView_21  temp524;
    return (  temp524 );
}

static  struct StrView_21   or_dash_fail512 (    struct Maybe_144  x1725 ,    struct StrConcat_513  errmsg1727 ) {
    struct Maybe_144  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_144_None_t ) {
        ( (  panic515 ) ( (  errmsg1727 ) ) );
        return ( (  undefined523 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_144_Just_t ) {
            return ( dref1728 .stuff .Maybe_144_Just_s .field0 );
        }
    }
}

static  const char*   from_dash_charlike526 (    uint8_t *  ptr73 ,    size_t  dref74 ) {
    return ( ( (const char* ) (  ptr73 ) ) );
}

static  void *   cast_dash_ptr531 (    FILE * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of532 (    FILE *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  FILE *   zeroed529 (  ) {
    FILE *  temp530;
    FILE *  x570 = (  temp530 );
    ( ( memset ) ( ( (  cast_dash_ptr531 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of532 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  FILE *   null_dash_ptr528 (  ) {
    return ( (  zeroed529 ) ( ) );
}

static  bool   is_dash_ptr_dash_null527 (    FILE *  p580 ) {
    return ( (  p580 ) == ( (  null_dash_ptr528 ) ( ) ) );
}

static  int32_t   seek_dash_end533 (  ) {
    return (  from_dash_integral48 ( 2 ) );
}

static  int32_t   seek_dash_set534 (  ) {
    return (  from_dash_integral48 ( 0 ) );
}

static  struct Char_57   nullchar535 (  ) {
    return ( (  from_dash_charlike228 ) ( ( "\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_144   try_dash_read_dash_contents525 (    const char*  filename2933 ,    enum CAllocator_9  al2935 ) {
    FILE *  file2936 = ( ( fopen ) ( (  filename2933 ) ,  ( (  from_dash_charlike526 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null527 ) ( (  file2936 ) ) ) ) {
        return ( (struct Maybe_144) { .tag = Maybe_144_None_t } );
    }
    ( ( fseek ) ( (  file2936 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  seek_dash_end533 ) ( ) ) ) );
    int32_t  file_dash_size2937 = ( ( ftell ) ( (  file2936 ) ) );
    ( ( fseek ) ( (  file2936 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  seek_dash_set534 ) ( ) ) ) );
    struct Slice_12  file_dash_buf2938 = ( ( (  allocate360 ) ( (  al2935 ) ,  (  op_dash_add239 ( ( (  i32_dash_size269 ) ( (  file_dash_size2937 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2938 ) .f_ptr ) ,  (  file_dash_size2937 ) ,  (  from_dash_integral48 ( 1 ) ) ,  (  file2936 ) ) );
    ( (  set369 ) ( (  file_dash_buf2938 ) ,  ( (  i32_dash_size269 ) ( (  file_dash_size2937 ) ) ) ,  ( (  char_dash_u8391 ) ( ( (  nullchar535 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2936 ) ) );
    struct StrView_21  str2939 = ( (struct StrView_21) { .f_contents = ( (  subslice335 ) ( (  file_dash_buf2938 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub311 ( ( (  file_dash_buf2938 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_144_Just ) ( (  str2939 ) ) );
}

static  struct StrView_21   read_dash_contents511 (    const char*  filename2942 ,    enum CAllocator_9  al2944 ) {
    return ( (  or_dash_fail512 ) ( ( (  try_dash_read_dash_contents525 ) ( (  filename2942 ) ,  (  al2944 ) ) ) ,  ( ( StrConcat_513_StrConcat ) ( ( ( StrConcat_514_StrConcat ) ( ( (  from_dash_string227 ) ( ( "could not open file " ) ,  ( 20 ) ) ) ,  (  filename2942 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "!" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Pane_126   mk537 (    enum CAllocator_9  al3830 ,    struct TextBuf_88 *  buf3832 ) {
    return ( (struct Pane_126) { .f_buf = (  buf3832 ) , .f_cursor = ( (  mk305 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral48 ( 0 ) ) , .f_sel = ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) , .f_mode = ( Mode_127_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_128) { .f_screen_dash_top = (  from_dash_integral48 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral48 ( 0 ) ) } ) } );
}

struct envunion540 {
    struct Tui_73  (*fun) (  struct env69*  );
    struct env69 env;
};

static  struct Termios_75   undefined544 (  ) {
    struct Termios_75  temp545;
    return (  temp545 );
}

static  int32_t   stdin_dash_fileno546 (  ) {
    return (  from_dash_integral48 ( 0 ) );
}

static  struct termios *   cast_dash_ptr547 (    struct Termios_75 *  p359 ) {
    return ( (struct termios * ) (  p359 ) );
}

static  uint32_t   u32_dash_and548 (    uint32_t  l2832 ,    uint32_t  r2834 ) {
    return ( (  l2832 ) & (  r2834 ) );
}

static  uint32_t   u32_dash_neg549 (    uint32_t  l2837 ) {
    return ( ~ (  l2837 ) );
}

struct Array_551 {
    uint32_t _arr [4];
};

struct ArrayIter_553 {
    struct Array_551  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_553   into_dash_iter554 (    struct Array_551  self2322 ) {
    return ( (struct ArrayIter_553) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_555 {
    enum {
        Maybe_555_None_t,
        Maybe_555_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_555_Just_s;
    } stuff;
};

static struct Maybe_555 Maybe_555_Just (  uint32_t  field0 ) {
    return ( struct Maybe_555 ) { .tag = Maybe_555_Just_t, .stuff = { .Maybe_555_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr559 (    struct Array_551 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   offset_dash_ptr560 (    uint32_t *  x338 ,    int64_t  count340 ) {
    uint32_t  temp561;
    return ( (uint32_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul237 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp561 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr558 (    struct Array_551 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp191 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i2253 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic195 ) ( ( ( StrConcat_196_StrConcat ) ( ( ( StrConcat_197_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string227 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2254 = ( ( (  cast_dash_ptr559 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr560 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  uint32_t   get557 (    struct Array_551 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr558 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  struct Maybe_555   next556 (    struct ArrayIter_553 *  self2329 ) {
    if ( (  cmp191 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
    }
    uint32_t  e2331 = ( (  get557 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add239 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_555_Just ) ( (  e2331 ) ) );
}

static  uint32_t   reduce552 (    struct Array_551  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_553  it1099 = ( (  into_dash_iter554 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_555  dref1100 = ( (  next556 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_555_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_555_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_555_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp562 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp562);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp563;
    return (  temp563 );
}

static  uint32_t   u32_dash_or564 (    uint32_t  l2824 ,    uint32_t  r2826 ) {
    return ( (  l2824 ) | (  r2826 ) );
}

static  uint32_t   u32_dash_ors550 (    struct Array_551  vals2829 ) {
    return ( (  reduce552 ) ( (  vals2829 ) ,  (  from_dash_integral223 ( 0 ) ) ,  (  u32_dash_or564 ) ) );
}

static  struct Array_551   from_dash_listlike565 (    struct Array_551  self330 ) {
    return (  self330 );
}

static  uint32_t   echo566 (  ) {
    return (  from_dash_integral223 ( 8 ) );
}

static  uint32_t   icanon567 (  ) {
    return (  from_dash_integral223 ( 2 ) );
}

static  uint32_t   isig568 (  ) {
    return (  from_dash_integral223 ( 1 ) );
}

static  uint32_t   iexten569 (  ) {
    return (  from_dash_integral223 ( 32768 ) );
}

struct Array_571 {
    uint32_t _arr [5];
};

struct ArrayIter_573 {
    struct Array_571  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_573   into_dash_iter574 (    struct Array_571  self2322 ) {
    return ( (struct ArrayIter_573) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr578 (    struct Array_571 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr577 (    struct Array_571 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp191 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i2253 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic195 ) ( ( ( StrConcat_196_StrConcat ) ( ( ( StrConcat_197_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string227 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2254 = ( ( (  cast_dash_ptr578 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr560 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  uint32_t   get576 (    struct Array_571 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr577 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  struct Maybe_555   next575 (    struct ArrayIter_573 *  self2329 ) {
    if ( (  cmp191 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
    }
    uint32_t  e2331 = ( (  get576 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add239 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_555_Just ) ( (  e2331 ) ) );
}

static  uint32_t   reduce572 (    struct Array_571  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_573  it1099 = ( (  into_dash_iter574 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_555  dref1100 = ( (  next575 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_555_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_555_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_555_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp579 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp579);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp580;
    return (  temp580 );
}

static  uint32_t   u32_dash_ors570 (    struct Array_571  vals2829 ) {
    return ( (  reduce572 ) ( (  vals2829 ) ,  (  from_dash_integral223 ( 0 ) ) ,  (  u32_dash_or564 ) ) );
}

static  struct Array_571   from_dash_listlike581 (    struct Array_571  self330 ) {
    return (  self330 );
}

static  uint32_t   brkint582 (  ) {
    return (  from_dash_integral223 ( 2 ) );
}

static  uint32_t   icrnl583 (  ) {
    return (  from_dash_integral223 ( 256 ) );
}

static  uint32_t   inpck584 (  ) {
    return (  from_dash_integral223 ( 16 ) );
}

static  uint32_t   istrip585 (  ) {
    return (  from_dash_integral223 ( 32 ) );
}

static  uint32_t   ixon586 (  ) {
    return (  from_dash_integral223 ( 1024 ) );
}

struct Array_588 {
    uint32_t _arr [1];
};

struct ArrayIter_590 {
    struct Array_588  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_590   into_dash_iter591 (    struct Array_588  self2322 ) {
    return ( (struct ArrayIter_590) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr595 (    struct Array_588 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr594 (    struct Array_588 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp191 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i2253 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic195 ) ( ( ( StrConcat_196_StrConcat ) ( ( ( StrConcat_197_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string227 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2254 = ( ( (  cast_dash_ptr595 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr560 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  uint32_t   get593 (    struct Array_588 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr594 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  struct Maybe_555   next592 (    struct ArrayIter_590 *  self2329 ) {
    if ( (  cmp191 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
    }
    uint32_t  e2331 = ( (  get593 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add239 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_555_Just ) ( (  e2331 ) ) );
}

static  uint32_t   reduce589 (    struct Array_588  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_590  it1099 = ( (  into_dash_iter591 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_555  dref1100 = ( (  next592 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_555_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_555_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_555_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp596 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp596);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp597;
    return (  temp597 );
}

static  uint32_t   u32_dash_ors587 (    struct Array_588  vals2829 ) {
    return ( (  reduce589 ) ( (  vals2829 ) ,  (  from_dash_integral223 ( 0 ) ) ,  (  u32_dash_or564 ) ) );
}

static  struct Array_588   from_dash_listlike598 (    struct Array_588  self330 ) {
    return (  self330 );
}

static  uint32_t   opost599 (  ) {
    return (  from_dash_integral223 ( 1 ) );
}

static  uint32_t   cs8600 (  ) {
    return (  from_dash_integral223 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr603 (    struct Array_76 *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  uint8_t *   get_dash_ptr602 (    struct Array_76 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp191 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i2253 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic195 ) ( ( ( StrConcat_196_StrConcat ) ( ( ( StrConcat_197_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string227 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2254 = ( ( (  cast_dash_ptr603 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr336 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  enum Unit_7   set601 (    struct Array_76 *  arr2263 ,    size_t  i2266 ,    uint8_t  e2268 ) {
    uint8_t *  p2269 = ( (  get_dash_ptr602 ) ( (  arr2263 ) ,  (  i2266 ) ) );
    (*  p2269 ) = (  e2268 );
    return ( Unit_7_Unit );
}

static  size_t   vmin604 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime605 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush606 (  ) {
    return (  from_dash_integral48 ( 2 ) );
}

static  struct Termios_75   enable_dash_raw_dash_mode542 (  ) {
    struct Termios_75  temp543 = ( (  undefined544 ) ( ) );
    struct Termios_75 *  orig_dash_termios3291 = ( &temp543 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno546 ) ( ) ) ,  ( (  cast_dash_ptr547 ) ( (  orig_dash_termios3291 ) ) ) ) );
    struct Termios_75  raw3292 = ( * (  orig_dash_termios3291 ) );
    raw3292 .f_c_dash_lflag = ( (  u32_dash_and548 ) ( ( (  raw3292 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg549 ) ( ( (  u32_dash_ors550 ) ( ( (  from_dash_listlike565 ) ( ( (struct Array_551) { ._arr = { ( (  echo566 ) ( ) ) , ( (  icanon567 ) ( ) ) , ( (  isig568 ) ( ) ) , ( ( (  iexten569 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3292 .f_c_dash_iflag = ( (  u32_dash_and548 ) ( ( (  raw3292 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg549 ) ( ( (  u32_dash_ors570 ) ( ( (  from_dash_listlike581 ) ( ( (struct Array_571) { ._arr = { ( (  brkint582 ) ( ) ) , ( (  icrnl583 ) ( ) ) , ( (  inpck584 ) ( ) ) , ( (  istrip585 ) ( ) ) , ( ( (  ixon586 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3292 .f_c_dash_oflag = ( (  u32_dash_and548 ) ( ( (  raw3292 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg549 ) ( ( (  u32_dash_ors587 ) ( ( (  from_dash_listlike598 ) ( ( (struct Array_588) { ._arr = { ( ( (  opost599 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3292 .f_c_dash_cflag = ( (  u32_dash_or564 ) ( ( (  raw3292 ) .f_c_dash_cflag ) ,  ( (  cs8600 ) ( ) ) ) );
    ( (  set601 ) ( ( & ( (  raw3292 ) .f_c_dash_cc ) ) ,  ( (  vmin604 ) ( ) ) ,  (  from_dash_integral219 ( 0 ) ) ) );
    ( (  set601 ) ( ( & ( (  raw3292 ) .f_c_dash_cc ) ) ,  ( (  vtime605 ) ( ) ) ,  (  from_dash_integral219 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno546 ) ( ) ) ,  ( (  tcsa_dash_flush606 ) ( ) ) ,  ( (  cast_dash_ptr547 ) ( ( & (  raw3292 ) ) ) ) ) );
    return ( * (  orig_dash_termios3291 ) );
}

struct StrViewIter_610 {
    struct StrView_21  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_610   into_dash_iter612 (    struct StrViewIter_610  self1371 ) {
    return (  self1371 );
}

struct Maybe_613 {
    enum {
        Maybe_613_None_t,
        Maybe_613_Just_t,
    } tag;
    union {
        struct {
            struct Char_57  field0;
        } Maybe_613_Just_s;
    } stuff;
};

static struct Maybe_613 Maybe_613_Just (  struct Char_57  field0 ) {
    return ( struct Maybe_613 ) { .tag = Maybe_613_Just_t, .stuff = { .Maybe_613_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_613   next614 (    struct StrViewIter_610 *  self1374 ) {
    if ( (  cmp191 ( ( ( * (  self1374 ) ) .f_i ) , ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
    }
    uint8_t *  char_dash_ptr1375 = ( ( (  offset_dash_ptr336 ) ( ( (  cast229 ) ( ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64268 ) ( ( ( * (  self1374 ) ) .f_i ) ) ) ) ) );
    struct Char_57  char1376 = ( (  scan_dash_from_dash_mem230 ) ( (  char_dash_ptr1375 ) ) );
    (*  self1374 ) .f_i = (  op_dash_add239 ( ( ( * (  self1374 ) ) .f_i ) , ( (  char1376 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_613_Just ) ( (  char1376 ) ) );
}

static  enum Unit_7   for_dash_each609 (    struct StrViewIter_610  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrViewIter_610  temp611 = ( (  into_dash_iter612 ) ( (  iterable1074 ) ) );
    struct StrViewIter_610 *  it1077 = ( &temp611 );
    while ( ( true ) ) {
        struct Maybe_613  dref1078 = ( (  next614 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_613_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_613_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_613_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrViewIter_610   into_dash_iter616 (    struct StrView_21  self1368 ) {
    return ( (struct StrViewIter_610) { .f_ds = (  self1368 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_610   chars615 (    struct StrView_21  self1382 ) {
    return ( (  into_dash_iter616 ) ( (  self1382 ) ) );
}

static  enum Unit_7   print608 (    struct StrView_21  s2563 ) {
    ( (  for_dash_each609 ) ( ( (  chars615 ) ( (  s2563 ) ) ) ,  (  printf_dash_char211 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   hide_dash_cursor607 (  ) {
    ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   reset_dash_colors617 (  ) {
    ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   clear_dash_screen618 (  ) {
    ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   enable_dash_mouse619 (  ) {
    ( (  print_dash_str202 ) ( ( (  from_dash_string227 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   flush_dash_stdout620 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr528 ) ( ) ) ) );
    return ( Unit_7_Unit );
}

static  bool   ptr_dash_eq624 (    enum Unit_7 *  l586 ,    enum Unit_7 *  r588 ) {
    return ( (  l586 ) == (  r588 ) );
}

static  enum Unit_7 *   cast625 (    const char*  x356 ) {
    return ( (enum Unit_7 * ) (  x356 ) );
}

static  void *   cast_dash_ptr629 (    enum Unit_7 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of630 (    enum Unit_7 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  enum Unit_7 *   zeroed627 (  ) {
    enum Unit_7 *  temp628;
    enum Unit_7 *  x570 = (  temp628 );
    ( ( memset ) ( ( (  cast_dash_ptr629 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of630 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  enum Unit_7 *   null_dash_ptr626 (  ) {
    return ( (  zeroed627 ) ( ) );
}

static  struct Maybe_315   from_dash_nullable_dash_c_dash_str623 (    const char*  s591 ) {
    if ( ( (  ptr_dash_eq624 ) ( ( (  cast625 ) ( (  s591 ) ) ) ,  ( ( (  null_dash_ptr626 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_315) { .tag = Maybe_315_None_t } );
    } else {
        return ( ( Maybe_315_Just ) ( (  s591 ) ) );
    }
}

static  struct Maybe_315   get622 (    const char*  s2596 ) {
    return ( (  from_dash_nullable_dash_c_dash_str623 ) ( ( ( getenv ) ( (  s2596 ) ) ) ) );
}

static  bool   eq631 (    const char*  l1691 ,    const char*  r1693 ) {
    return (  eq327 ( ( ( strcmp ) ( (  l1691 ) ,  (  r1693 ) ) ) , (  from_dash_integral48 ( 0 ) ) ) );
}

static  enum ColorPalette_74   query_dash_palette621 (  ) {
    struct Maybe_315  colorterm2597 = ( (  get622 ) ( ( (  from_dash_string49 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_315  dref2598 = (  colorterm2597 );
    if ( dref2598.tag == Maybe_315_Just_t ) {
        if ( ( (  eq631 ( ( dref2598 .stuff .Maybe_315_Just_s .field0 ) , ( (  from_dash_string49 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq631 ( ( dref2598 .stuff .Maybe_315_Just_s .field0 ) , ( (  from_dash_string49 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_74_PaletteRGB );
        }
    }
    else {
        if ( dref2598.tag == Maybe_315_None_t ) {
        }
    }
    struct Maybe_315  dref2600 = ( (  get622 ) ( ( (  from_dash_string49 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2600.tag == Maybe_315_Just_t ) {
        if ( (  eq631 ( ( dref2600 .stuff .Maybe_315_Just_s .field0 ) , ( (  from_dash_string49 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_74_Palette8 );
        }
    }
    else {
        if ( dref2600.tag == Maybe_315_None_t ) {
        }
    }
    return ( ColorPalette_74_Palette16 );
}

struct Tuple2_632 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_632 Tuple2_632_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_632 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_634 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr638 (    struct Winsize_634 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of639 (    struct Winsize_634  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Winsize_634   zeroed636 (  ) {
    struct Winsize_634  temp637;
    struct Winsize_634  x570 = (  temp637 );
    ( ( memset ) ( ( (  cast_dash_ptr638 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of639 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  int32_t   stdout_dash_fileno640 (  ) {
    return (  from_dash_integral48 ( 1 ) );
}

static  uint64_t   from_dash_integral642 (    int64_t  x64 ) {
    return ( (uint64_t ) (  x64 ) );
}

static  uint64_t   tiocgwinsz641 (  ) {
    return (  from_dash_integral642 ( 21523 ) );
}

static  int32_t   op_dash_neg643 (    int32_t  x227 ) {
    return ( (  from_dash_integral48 ( 0 ) ) - (  x227 ) );
}

static  bool   eq644 (    uint16_t  l121 ,    uint16_t  r123 ) {
    return ( (  l121 ) == (  r123 ) );
}

static  uint16_t   from_dash_integral645 (    int64_t  x55 ) {
    return ( (uint16_t ) (  x55 ) );
}

static  void *   cast_dash_ptr651 (    uint32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of652 (    uint32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint32_t   zeroed649 (  ) {
    uint32_t  temp650;
    uint32_t  x570 = (  temp650 );
    ( ( memset ) ( ( (  cast_dash_ptr651 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of652 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint16_t *   cast653 (    uint32_t *  x356 ) {
    return ( (uint16_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed647 (    uint16_t  x573 ) {
    uint32_t  temp648 = ( (  zeroed649 ) ( ) );
    uint32_t *  y574 = ( &temp648 );
    uint16_t *  yp575 = ( (  cast653 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u16_dash_u32646 (    uint16_t  x645 ) {
    return ( (  cast_dash_on_dash_zeroed647 ) ( (  x645 ) ) );
}

static  struct Tuple2_632   get_dash_dimensions633 (  ) {
    struct Winsize_634  temp635 = ( ( (  zeroed636 ) ( ) ) );
    struct Winsize_634 *  ws2585 = ( &temp635 );
    if ( ( (  eq327 ( ( ( ioctl ) ( ( (  stdout_dash_fileno640 ) ( ) ) ,  ( (  tiocgwinsz641 ) ( ) ) ,  (  ws2585 ) ) ) , (  op_dash_neg643 ( (  from_dash_integral48 ( 1 ) ) ) ) ) ) || (  eq644 ( ( ( * (  ws2585 ) ) .f_ws_dash_col ) , (  from_dash_integral645 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_632_Tuple2 ) ( (  from_dash_integral223 ( 80 ) ) ,  (  from_dash_integral223 ( 24 ) ) ) );
    }
    return ( ( Tuple2_632_Tuple2 ) ( ( (  u16_dash_u32646 ) ( ( ( * (  ws2585 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32646 ) ( ( ( * (  ws2585 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined656 (  ) {
    struct timespec  temp657;
    return (  temp657 );
}

static  int32_t   clock_dash_monotonic658 (  ) {
    return (  from_dash_integral48 ( 1 ) );
}

static  struct timespec   now654 (  ) {
    struct timespec  temp655 = ( (  undefined656 ) ( ) );
    struct timespec *  t3253 = ( &temp655 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic658 ) ( ) ) ,  (  t3253 ) ) );
    return ( * (  t3253 ) );
}

struct env659 {
    bool *  should_dash_resize3305;
};

struct envunion660 {
    enum Unit_7  (*fun) (  struct env659*  ,    int32_t  );
    struct env659 env;
};

struct envunion660  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig661 ) {
    struct envunion660  temp662 = _intr_sigarr [  __intr__sig661 ];
    temp662.fun ( &temp662.env ,  __intr__sig661 );
}

static  enum Unit_7  _intr_register_signal (    int32_t  __intr__sig663 ,   struct envunion660  __intr__fun664 ) {
    _intr_sigarr [  __intr__sig663 ] =  __intr__fun664;
    signal(  __intr__sig663 , _intr_sighandle );
    return Unit_7_Unit;
}

static  enum Unit_7   lam665 (   struct env659* env ,    int32_t  dref3312 ) {
    (* env->should_dash_resize3305 ) = ( true );
    return ( Unit_7_Unit );
}

static  uint32_t   fst666 (    struct Tuple2_632  dref1253 ) {
    return ( dref1253 .field0 );
}

static  uint32_t   snd667 (    struct Tuple2_632  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tui_73   mk541 (   struct env69* env ) {
    struct Termios_75  og_dash_termios3307 = ( (  enable_dash_raw_dash_mode542 ) ( ) );
    ( (  hide_dash_cursor607 ) ( ) );
    ( (  reset_dash_colors617 ) ( ) );
    ( (  clear_dash_screen618 ) ( ) );
    ( (  enable_dash_mouse619 ) ( ) );
    ( (  flush_dash_stdout620 ) ( ) );
    enum ColorPalette_74  palette3308 = ( (  query_dash_palette621 ) ( ) );
    struct Tuple2_632  dims3309 = ( (  get_dash_dimensions633 ) ( ) );
    uint32_t  fps3310 = (  from_dash_integral223 ( 60 ) );
    struct timespec  last_dash_sync3311 = ( (  now654 ) ( ) );
    struct env659 envinst659 = {
        .should_dash_resize3305 = env->should_dash_resize3305 ,
    };
    ( _intr_register_signal ( (  from_dash_integral48 ( 28 ) ) , ( (struct envunion660){ .fun = (  enum Unit_7  (*) (  struct env659*  ,    int32_t  ) )lam665 , .env =  envinst659 } ) ) );
    return ( (struct Tui_73) { .f_width = ( (  fst666 ) ( (  dims3309 ) ) ) , .f_height = ( (  snd667 ) ( (  dims3309 ) ) ) , .f_target_dash_fps = (  fps3310 ) , .f_actual_dash_fps = (  from_dash_integral223 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3311 ) , .f_fps_dash_ts = (  last_dash_sync3311 ) , .f_fps_dash_count = (  from_dash_integral223 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3307 ) , .f_palette = (  palette3308 ) , .f_should_dash_redraw = ( true ) } );
}

enum Color8_672 {
    Color8_672_Black8,
    Color8_672_Red8,
    Color8_672_Green8,
    Color8_672_Yellow8,
    Color8_672_Blue8,
    Color8_672_Magenta8,
    Color8_672_Cyan8,
    Color8_672_White8,
};

enum Color16_673 {
    Color16_673_Black16,
    Color16_673_Red16,
    Color16_673_Green16,
    Color16_673_Yellow16,
    Color16_673_Blue16,
    Color16_673_Magenta16,
    Color16_673_Cyan16,
    Color16_673_White16,
    Color16_673_BrightBlack16,
    Color16_673_BrightRed16,
    Color16_673_BrightGreen16,
    Color16_673_BrightYellow16,
    Color16_673_BrightBlue16,
    Color16_673_BrightMagenta16,
    Color16_673_BrightCyan16,
    Color16_673_BrightWhite16,
};

struct RGB_674 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_671 {
    enum {
        Color_671_ColorDefault_t,
        Color_671_Color8_t,
        Color_671_Color16_t,
        Color_671_Color256_t,
        Color_671_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_672  field0;
        } Color_671_Color8_s;
        struct {
            enum Color16_673  field0;
        } Color_671_Color16_s;
        struct {
            uint8_t  field0;
        } Color_671_Color256_s;
        struct {
            struct RGB_674  field0;
        } Color_671_ColorRGB_s;
    } stuff;
};

static struct Color_671 Color_671_Color8 (  enum Color8_672  field0 ) {
    return ( struct Color_671 ) { .tag = Color_671_Color8_t, .stuff = { .Color_671_Color8_s = { .field0 = field0 } } };
};

static struct Color_671 Color_671_Color16 (  enum Color16_673  field0 ) {
    return ( struct Color_671 ) { .tag = Color_671_Color16_t, .stuff = { .Color_671_Color16_s = { .field0 = field0 } } };
};

static struct Color_671 Color_671_Color256 (  uint8_t  field0 ) {
    return ( struct Color_671 ) { .tag = Color_671_Color256_t, .stuff = { .Color_671_Color256_s = { .field0 = field0 } } };
};

static struct Color_671 Color_671_ColorRGB (  struct RGB_674  field0 ) {
    return ( struct Color_671 ) { .tag = Color_671_ColorRGB_t, .stuff = { .Color_671_ColorRGB_s = { .field0 = field0 } } };
};

struct Cell_670 {
    struct Char_57  f_c;
    struct Color_671  f_fg;
    struct Color_671  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_669 {
    struct Cell_670 *  f_ptr;
    size_t  f_count;
};

struct Screen_668 {
    enum CAllocator_9  f_al;
    struct Tui_73 *  f_tui;
    struct Slice_669  f_current;
    struct Slice_669  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_671  f_default_dash_fg;
    struct Color_671  f_default_dash_bg;
};

struct TypeSize_679 {
    size_t  f_size;
};

static  struct TypeSize_679   get_dash_typesize678 (  ) {
    struct Cell_670  temp680;
    return ( (struct TypeSize_679) { .f_size = ( sizeof( ( (  temp680 ) ) ) ) } );
}

static  struct Cell_670 *   cast_dash_ptr681 (    void *  p359 ) {
    return ( (struct Cell_670 * ) (  p359 ) );
}

static  struct Slice_669   allocate677 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize678 ) ( ) ) ) .f_size );
    struct Cell_670 *  ptr1957 = ( (  cast_dash_ptr681 ) ( ( ( malloc ) ( (  op_dash_mul252 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_669) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

static  void *   cast_dash_ptr687 (    size_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of688 (    size_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  size_t   zeroed685 (  ) {
    size_t  temp686;
    size_t  x570 = (  temp686 );
    ( ( memset ) ( ( (  cast_dash_ptr687 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of688 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint32_t *   cast689 (    size_t *  x356 ) {
    return ( (uint32_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed683 (    uint32_t  x573 ) {
    size_t  temp684 = ( (  zeroed685 ) ( ) );
    size_t *  y574 = ( &temp684 );
    uint32_t *  yp575 = ( (  cast689 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u32_dash_size682 (    uint32_t  x651 ) {
    return ( (  cast_dash_on_dash_zeroed683 ) ( (  x651 ) ) );
}

static  uint32_t   op_dash_mul690 (    uint32_t  l240 ,    uint32_t  r242 ) {
    return ( (  l240 ) * (  r242 ) );
}

struct Range_693 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_693 Range_693_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_693 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env694 {
    struct Slice_669  s1905;
    struct Cell_670 (*  fun1907 )(    struct Cell_670  );
    ;
    ;
    ;
};

struct envunion695 {
    enum Unit_7  (*fun) (  struct env694*  ,    int32_t  );
    struct env694 env;
};

struct RangeIter_696 {
    struct Range_693  field0;
    int32_t  field1;
};

static struct RangeIter_696 RangeIter_696_RangeIter (  struct Range_693  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_696 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_696   into_dash_iter698 (    struct Range_693  dref883 ) {
    return ( ( RangeIter_696_RangeIter ) ( ( ( Range_693_Range ) ( ( dref883 .field0 ) ,  ( dref883 .field1 ) ) ) ,  ( dref883 .field0 ) ) );
}

static  struct Maybe_279   next699 (    struct RangeIter_696 *  self891 ) {
    struct RangeIter_696  dref892 = ( * (  self891 ) );
    if ( true ) {
        if ( (  cmp324 ( ( dref892 .field1 ) , ( dref892 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_279) { .tag = Maybe_279_None_t } );
        }
        struct Maybe_279  x896 = ( ( Maybe_279_Just ) ( ( dref892 .field1 ) ) );
        (*  self891 ) = ( ( RangeIter_696_RangeIter ) ( ( ( Range_693_Range ) ( ( dref892 .field0 .field0 ) ,  ( dref892 .field0 .field1 ) ) ) ,  (  op_dash_add281 ( ( dref892 .field1 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
        return (  x896 );
    }
}

static  enum Unit_7   for_dash_each692 (    struct Range_693  iterable1074 ,   struct envunion695  fun1076 ) {
    struct RangeIter_696  temp697 = ( (  into_dash_iter698 ) ( (  iterable1074 ) ) );
    struct RangeIter_696 *  it1077 = ( &temp697 );
    while ( ( true ) ) {
        struct Maybe_279  dref1078 = ( (  next699 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_279_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_279_Just_t ) {
                struct envunion695  temp700 = (  fun1076 );
                ( temp700.fun ( &temp700.env ,  ( dref1078 .stuff .Maybe_279_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Range_693   to701 (    int32_t  from874 ,    int32_t  to876 ) {
    return ( ( Range_693_Range ) ( (  from874 ) ,  (  to876 ) ) );
}

static  struct Cell_670 *   offset_dash_ptr705 (    struct Cell_670 *  x338 ,    int64_t  count340 ) {
    struct Cell_670  temp706;
    return ( (struct Cell_670 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul237 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp706 ) ) ) ) ) ) ) ) );
}

static  struct Cell_670 *   get_dash_ptr704 (    struct Slice_669  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp191 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic259 ) ( ( ( StrConcat_260_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string227 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_670 *  elem_dash_ptr1760 = ( (  offset_dash_ptr705 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set703 (    struct Slice_669  slice1774 ,    size_t  i1776 ,    struct Cell_670  x1778 ) {
    struct Cell_670 *  ep1779 = ( (  get_dash_ptr704 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

struct Maybe_710 {
    enum {
        Maybe_710_None_t,
        Maybe_710_Just_t,
    } tag;
    union {
        struct {
            struct Cell_670  field0;
        } Maybe_710_Just_s;
    } stuff;
};

static struct Maybe_710 Maybe_710_Just (  struct Cell_670  field0 ) {
    return ( struct Maybe_710 ) { .tag = Maybe_710_Just_t, .stuff = { .Maybe_710_Just_s = { .field0 = field0 } } };
};

static  struct Cell_670   undefined711 (  ) {
    struct Cell_670  temp712;
    return (  temp712 );
}

static  struct Cell_670   or_dash_fail709 (    struct Maybe_710  x1725 ,    struct StrConcat_260  errmsg1727 ) {
    struct Maybe_710  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_710_None_t ) {
        ( (  panic259 ) ( (  errmsg1727 ) ) );
        return ( (  undefined711 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_710_Just_t ) {
            return ( dref1728 .stuff .Maybe_710_Just_s .field0 );
        }
    }
}

static  struct Maybe_710   try_dash_get713 (    struct Slice_669  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp191 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_710) { .tag = Maybe_710_None_t } );
    }
    struct Cell_670 *  elem_dash_ptr1766 = ( (  offset_dash_ptr705 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_710_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  struct Cell_670   get708 (    struct Slice_669  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail709 ) ( ( (  try_dash_get713 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_260_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string227 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_670   elem_dash_get707 (    struct Slice_669  self1867 ,    size_t  idx1869 ) {
    return ( (  get708 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

static  enum Unit_7   lam702 (   struct env694* env ,    int32_t  i1909 ) {
    return ( (  set703 ) ( ( env->s1905 ) ,  ( (  i32_dash_size269 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get707 ( ( env->s1905 ) , ( (  i32_dash_size269 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_7   map691 (    struct Slice_669  s1905 ,    struct Cell_670 (*  fun1907 )(    struct Cell_670  ) ) {
    struct env694 envinst694 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each692 ) ( ( (  to701 ) ( (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_i32203 ) ( (  op_dash_sub311 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion695){ .fun = (  enum Unit_7  (*) (  struct env694*  ,    int32_t  ) )lam702 , .env =  envinst694 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Cell_670   default_dash_cell715 (  ) {
    return ( (struct Cell_670) { .f_c = ( (  from_dash_charlike228 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_671) { .tag = Color_671_ColorDefault_t } ) , .f_bg = ( (struct Color_671) { .tag = Color_671_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral48 ( 1 ) ) } );
}

static  struct Cell_670   lam714 (    struct Cell_670  dref3415 ) {
    return ( (  default_dash_cell715 ) ( ) );
}

struct env718 {
    struct Slice_669  s1905;
    struct Cell_670 (*  fun1907 )(    struct Cell_670  );
    ;
    ;
    ;
};

struct envunion719 {
    enum Unit_7  (*fun) (  struct env718*  ,    int32_t  );
    struct env718 env;
};

static  enum Unit_7   for_dash_each717 (    struct Range_693  iterable1074 ,   struct envunion719  fun1076 ) {
    struct RangeIter_696  temp720 = ( (  into_dash_iter698 ) ( (  iterable1074 ) ) );
    struct RangeIter_696 *  it1077 = ( &temp720 );
    while ( ( true ) ) {
        struct Maybe_279  dref1078 = ( (  next699 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_279_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_279_Just_t ) {
                struct envunion719  temp721 = (  fun1076 );
                ( temp721.fun ( &temp721.env ,  ( dref1078 .stuff .Maybe_279_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam722 (   struct env718* env ,    int32_t  i1909 ) {
    return ( (  set703 ) ( ( env->s1905 ) ,  ( (  i32_dash_size269 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get707 ( ( env->s1905 ) , ( (  i32_dash_size269 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_7   map716 (    struct Slice_669  s1905 ,    struct Cell_670 (*  fun1907 )(    struct Cell_670  ) ) {
    struct env718 envinst718 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each717 ) ( ( (  to701 ) ( (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_i32203 ) ( (  op_dash_sub311 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion719){ .fun = (  enum Unit_7  (*) (  struct env718*  ,    int32_t  ) )lam722 , .env =  envinst718 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Cell_670   lam723 (    struct Cell_670  dref3417 ) {
    return ( (  default_dash_cell715 ) ( ) );
}

static  struct Screen_668   mk_dash_screen676 (    struct Tui_73 *  tui3411 ,    enum CAllocator_9  al3413 ) {
    struct Slice_669  cur3414 = ( (  allocate677 ) ( (  al3413 ) ,  ( (  u32_dash_size682 ) ( (  op_dash_mul690 ( ( ( * (  tui3411 ) ) .f_width ) , ( ( * (  tui3411 ) ) .f_height ) ) ) ) ) ) );
    ( (  map691 ) ( (  cur3414 ) ,  (  lam714 ) ) );
    struct Slice_669  prev3416 = ( (  allocate677 ) ( (  al3413 ) ,  ( (  u32_dash_size682 ) ( (  op_dash_mul690 ( ( ( * (  tui3411 ) ) .f_width ) , ( ( * (  tui3411 ) ) .f_height ) ) ) ) ) ) );
    ( (  map716 ) ( (  prev3416 ) ,  (  lam723 ) ) );
    return ( (struct Screen_668) { .f_current = (  cur3414 ) , .f_previous = (  prev3416 ) , .f_al = (  al3413 ) , .f_tui = (  tui3411 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_671) { .tag = Color_671_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_671) { .tag = Color_671_ColorDefault_t } ) } );
}

enum MouseButton_731 {
    MouseButton_731_MouseLeft,
    MouseButton_731_MouseMiddle,
    MouseButton_731_MouseRight,
    MouseButton_731_ScrollUp,
    MouseButton_731_ScrollDown,
};

struct MouseEvent_730 {
    enum MouseButton_731  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_729 {
    enum {
        InputEvent_729_Key_t,
        InputEvent_729_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_165  field0;
        } InputEvent_729_Key_s;
        struct {
            struct MouseEvent_730  field0;
        } InputEvent_729_Mouse_s;
    } stuff;
};

static struct InputEvent_729 InputEvent_729_Key (  struct Key_165  field0 ) {
    return ( struct InputEvent_729 ) { .tag = InputEvent_729_Key_t, .stuff = { .InputEvent_729_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_729 InputEvent_729_Mouse (  struct MouseEvent_730  field0 ) {
    return ( struct InputEvent_729 ) { .tag = InputEvent_729_Mouse_t, .stuff = { .InputEvent_729_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_728 {
    enum {
        Maybe_728_None_t,
        Maybe_728_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_729  field0;
        } Maybe_728_Just_s;
    } stuff;
};

static struct Maybe_728 Maybe_728_Just (  struct InputEvent_729  field0 ) {
    return ( struct Maybe_728 ) { .tag = Maybe_728_Just_t, .stuff = { .Maybe_728_Just_s = { .field0 = field0 } } };
};

struct envunion727 {
    struct Maybe_728  (*fun) (  struct env71*  ,    struct Tui_73 *  );
    struct env71 env;
};

struct env726 {
    struct Tui_73 *  tui4288;
    struct env71 envinst71;
};

struct envunion732 {
    struct Maybe_728  (*fun) (  struct env726*  );
    struct env726 env;
};

struct FunIter_725 {
    struct envunion732  f_fun;
    bool  f_finished;
};

static  struct FunIter_725   into_dash_iter733 (    struct FunIter_725  self1028 ) {
    return (  self1028 );
}

static  struct FunIter_725   from_dash_function734 (   struct envunion732  fun1036 ) {
    return ( (struct FunIter_725) { .f_fun = (  fun1036 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions739 (   struct env70* env ,    struct Tui_73 *  tui3377 ) {
    if ( ( ! ( * ( env->should_dash_resize3305 ) ) ) ) {
        return ( false );
    }
    (*  tui3377 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3305 ) = ( false );
    struct Tuple2_632  dim3378 = ( (  get_dash_dimensions633 ) ( ) );
    uint32_t  w3379 = ( (  fst666 ) ( (  dim3378 ) ) );
    uint32_t  h3380 = ( (  snd667 ) ( (  dim3378 ) ) );
    (*  tui3377 ) .f_width = (  w3379 );
    (*  tui3377 ) .f_height = (  h3380 );
    return ( true );
}

static  char   undefined742 (  ) {
    char  temp743;
    return (  temp743 );
}

struct Maybe_744 {
    enum {
        Maybe_744_None_t,
        Maybe_744_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_744_Just_s;
    } stuff;
};

static struct Maybe_744 Maybe_744_Just (  char  field0 ) {
    return ( struct Maybe_744 ) { .tag = Maybe_744_Just_t, .stuff = { .Maybe_744_Just_s = { .field0 = field0 } } };
};

struct Pollfd_746 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr747 (    struct Pollfd_746 *  p359 ) {
    return ( (struct pollfd * ) (  p359 ) );
}

static  void *   cast_dash_ptr750 (    char *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of751 (    char  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  char   zeroed748 (  ) {
    char  temp749;
    char  x570 = (  temp749 );
    ( ( memset ) ( ( (  cast_dash_ptr750 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of751 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Maybe_744   read_dash_byte745 (    int32_t  timeout_dash_ms3299 ) {
    struct Pollfd_746  pfd3300 = ( (struct Pollfd_746) { .f_fd = (  from_dash_integral48 ( 0 ) ) , .f_events = (  from_dash_integral645 ( 1 ) ) , .f_revents = (  from_dash_integral645 ( 0 ) ) } );
    if ( (  cmp324 ( ( ( poll ) ( ( (  cast_dash_ptr747 ) ( ( & (  pfd3300 ) ) ) ) ,  (  from_dash_integral48 ( 1 ) ) ,  (  timeout_dash_ms3299 ) ) ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_744) { .tag = Maybe_744_None_t } );
    }
    char  c3301 = ( ( (  zeroed748 ) ( ) ) );
    if ( (  cmp324 ( ( ( read ) ( ( (  stdin_dash_fileno546 ) ( ) ) ,  ( (  cast_dash_ptr750 ) ( ( & (  c3301 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_744) { .tag = Maybe_744_None_t } );
    }
    return ( ( Maybe_744_Just ) ( (  c3301 ) ) );
}

static  uint8_t   ascii_dash_u8752 (    char  c776 ) {
    return ( ( (uint8_t ) (  c776 ) ) );
}

static  char   u8_dash_ascii753 (    uint8_t  b779 ) {
    return ( ( (char ) (  b779 ) ) );
}

static  uint8_t *   cast757 (    uint32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed755 (    uint8_t  x573 ) {
    uint32_t  temp756 = ( (  zeroed649 ) ( ) );
    uint32_t *  y574 = ( &temp756 );
    uint8_t *  yp575 = ( (  cast757 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u8_dash_u32754 (    uint8_t  x672 ) {
    return ( (  cast_dash_on_dash_zeroed755 ) ( (  x672 ) ) );
}

struct Map_760 {
    struct StrViewIter_610  field0;
    uint32_t (*  field1 )(    struct Char_57  );
};

static struct Map_760 Map_760_Map (  struct StrViewIter_610  field0 ,  uint32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_760 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_760   into_dash_iter761 (    struct Map_760  self796 ) {
    return (  self796 );
}

static  struct Maybe_555   next762 (    struct Map_760 *  dref798 ) {
    struct Maybe_613  dref801 = ( (  next614 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_613_None_t ) {
        return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_613_Just_t ) {
            return ( ( Maybe_555_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_613_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce759 (    struct Map_760  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct Map_760  it1099 = ( (  into_dash_iter761 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_555  dref1100 = ( (  next762 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_555_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_555_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_555_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp763 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp763);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp764;
    return (  temp764 );
}

static  struct Map_760   map765 (    struct StrView_21  iterable805 ,    uint32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrViewIter_610  it808 = ( (  into_dash_iter616 ) ( (  iterable805 ) ) );
    return ( ( Map_760_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  void *   cast_dash_ptr772 (    int64_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of773 (    int64_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int64_t   zeroed770 (  ) {
    int64_t  temp771;
    int64_t  x570 = (  temp771 );
    ( ( memset ) ( ( (  cast_dash_ptr772 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of773 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast774 (    int64_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int64_t   cast_dash_on_dash_zeroed768 (    uint8_t  x573 ) {
    int64_t  temp769 = ( (  zeroed770 ) ( ) );
    int64_t *  y574 = ( &temp769 );
    uint8_t *  yp575 = ( (  cast774 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int64_t   u8_dash_i64767 (    uint8_t  x666 ) {
    return ( (  cast_dash_on_dash_zeroed768 ) ( (  x666 ) ) );
}

struct StrConcat_777 {
    struct Char_57  field0;
    struct Char_57  field1;
};

static struct StrConcat_777 StrConcat_777_StrConcat (  struct Char_57  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_777 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_776 {
    struct StrConcat_777  field0;
    struct StrView_21  field1;
};

static struct StrConcat_776 StrConcat_776_StrConcat (  struct StrConcat_777  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_776 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_781 {
    struct StrView_21  field0;
    struct StrConcat_776  field1;
};

static struct StrConcat_781 StrConcat_781_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_776  field1 ) {
    return ( struct StrConcat_781 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_780 {
    struct StrConcat_781  field0;
    struct Char_57  field1;
};

static struct StrConcat_780 StrConcat_780_StrConcat (  struct StrConcat_781  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_780 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str784 (    struct StrConcat_777  self1503 ) {
    struct StrConcat_777  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str210 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str210 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str783 (    struct StrConcat_776  self1503 ) {
    struct StrConcat_776  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str784 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str202 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str782 (    struct StrConcat_781  self1503 ) {
    struct StrConcat_781  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str202 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str783 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str779 (    struct StrConcat_780  self1503 ) {
    struct StrConcat_780  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str782 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str210 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic778 (    struct StrConcat_776  errmsg1712 ) {
    ( (  print_dash_str779 ) ( ( ( StrConcat_780_StrConcat ) ( ( ( StrConcat_781_StrConcat ) ( ( (  from_dash_string227 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  uint8_t   or_dash_fail775 (    struct Maybe_352  x1725 ,    struct StrConcat_776  errmsg1727 ) {
    struct Maybe_352  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_352_None_t ) {
        ( (  panic778 ) ( (  errmsg1727 ) ) );
        return ( (  undefined388 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_352_Just_t ) {
            return ( dref1728 .stuff .Maybe_352_Just_s .field0 );
        }
    }
}

static  enum Ordering_192   cmp786 (    struct Char_57  l744 ,    struct Char_57  r746 ) {
    if ( ( ( !  eq246 ( ( (  l744 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq246 ( ( (  r746 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp787 = ( (  from_dash_string49 ) ( ( "(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp787);
        exit ( 1 );
        ( Unit_7_Unit );
    }
    return ( (  cmp232 ) ( ( (  char_dash_u8391 ) ( (  l744 ) ) ) ,  ( (  char_dash_u8391 ) ( (  r746 ) ) ) ) );
}

static  uint8_t   op_dash_sub788 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  uint8_t   op_dash_add789 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  struct Maybe_352   hex_dash_digit785 (    struct Char_57  c2545 ) {
    if ( ( (  cmp786 ( (  c2545 ) , ( (  from_dash_charlike228 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp786 ( (  c2545 ) , ( (  from_dash_charlike228 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_352_Just ) ( (  op_dash_sub788 ( ( (  char_dash_u8391 ) ( (  c2545 ) ) ) , ( (  char_dash_u8391 ) ( ( (  from_dash_charlike228 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp786 ( (  c2545 ) , ( (  from_dash_charlike228 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp786 ( (  c2545 ) , ( (  from_dash_charlike228 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_352_Just ) ( (  op_dash_add789 ( (  op_dash_sub788 ( ( (  char_dash_u8391 ) ( (  c2545 ) ) ) , ( (  char_dash_u8391 ) ( ( (  from_dash_charlike228 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral219 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp786 ( (  c2545 ) , ( (  from_dash_charlike228 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp786 ( (  c2545 ) , ( (  from_dash_charlike228 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_352_Just ) ( (  op_dash_add789 ( (  op_dash_sub788 ( ( (  char_dash_u8391 ) ( (  c2545 ) ) ) , ( (  char_dash_u8391 ) ( ( (  from_dash_charlike228 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral219 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
}

static  uint32_t   lam766 (    struct Char_57  c2550 ) {
    return ( (  from_dash_integral223 ) ( ( (  u8_dash_i64767 ) ( ( (  or_dash_fail775 ) ( ( (  hex_dash_digit785 ) ( (  c2550 ) ) ) ,  ( ( StrConcat_776_StrConcat ) ( ( ( StrConcat_777_StrConcat ) ( ( (  from_dash_charlike228 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2550 ) ) ) ,  ( (  from_dash_string227 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   op_dash_add791 (    uint32_t  l230 ,    uint32_t  r232 ) {
    return ( (  l230 ) + (  r232 ) );
}

static  uint32_t   lam790 (    uint32_t  elem2552 ,    uint32_t  b2554 ) {
    return (  op_dash_add791 ( (  op_dash_mul690 ( (  b2554 ) , (  from_dash_integral223 ( 16 ) ) ) ) , (  elem2552 ) ) );
}

static  uint32_t   from_dash_hex758 (    struct StrView_21  arr2548 ) {
    return ( (  reduce759 ) ( ( (  map765 ) ( (  arr2548 ) ,  (  lam766 ) ) ) ,  (  from_dash_integral223 ( 0 ) ) ,  (  lam790 ) ) );
}

static  bool   eq793 (    char  l374 ,    char  r376 ) {
    return ( (  l374 ) == (  r376 ) );
}

static  char   from_dash_charlike794 (    uint8_t *  ptr369 ,    size_t  num_dash_bytes371 ) {
    if ( ( !  eq246 ( (  num_dash_bytes371 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp795 = ( (  from_dash_string49 ) ( ( "(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp795);
        exit ( 1 );
        ( Unit_7_Unit );
    }
    return ( ( (char ) ( * (  ptr369 ) ) ) );
}

struct Array_796 {
    char _arr [32];
};

static  void *   cast_dash_ptr800 (    struct Array_796 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of801 (    struct Array_796  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Array_796   zeroed798 (  ) {
    struct Array_796  temp799;
    struct Array_796  x570 = (  temp799 );
    ( ( memset ) ( ( (  cast_dash_ptr800 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of801 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr805 (    struct Array_796 *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  char *   offset_dash_ptr806 (    char *  x338 ,    int64_t  count340 ) {
    char  temp807;
    return ( (char * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul237 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp807 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr804 (    struct Array_796 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp191 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i2253 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic195 ) ( ( ( StrConcat_196_StrConcat ) ( ( ( StrConcat_197_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string227 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2254 = ( ( (  cast_dash_ptr805 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr806 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  enum Unit_7   set803 (    struct Array_796 *  arr2263 ,    size_t  i2266 ,    char  e2268 ) {
    char *  p2269 = ( (  get_dash_ptr804 ) ( (  arr2263 ) ,  (  i2266 ) ) );
    (*  p2269 ) = (  e2268 );
    return ( Unit_7_Unit );
}

struct Slice_809 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail812 (    struct Maybe_744  x1725 ,    struct StrConcat_260  errmsg1727 ) {
    struct Maybe_744  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_744_None_t ) {
        ( (  panic259 ) ( (  errmsg1727 ) ) );
        return ( (  undefined742 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_744_Just_t ) {
            return ( dref1728 .stuff .Maybe_744_Just_s .field0 );
        }
    }
}

static  struct Maybe_744   try_dash_get813 (    struct Slice_809  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp191 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_744) { .tag = Maybe_744_None_t } );
    }
    char *  elem_dash_ptr1766 = ( (  offset_dash_ptr806 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_744_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  char   get811 (    struct Slice_809  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail812 ) ( ( (  try_dash_get813 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_260_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string227 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get810 (    struct Slice_809  self1867 ,    size_t  idx1869 ) {
    return ( (  get811 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

struct Scanner_814 {
    struct StrViewIter_610  f_s;
};

static  struct Scanner_814   mk_dash_from_dash_str816 (    struct StrView_21  s3172 ) {
    return ( (struct Scanner_814) { .f_s = ( (  chars615 ) ( (  s3172 ) ) ) } );
}

static  int32_t   op_dash_sub819 (    int32_t  l212 ,    int32_t  r214 ) {
    return ( (  l212 ) - (  r214 ) );
}

static  uint8_t *   offset_dash_ptr_prime_821 (    uint8_t *  x343 ,    size_t  count345 ) {
    return ( (  offset_dash_ptr336 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
}

static  struct StrView_21   substr817 (    struct StrView_21  s2172 ,    size_t  from2174 ,    size_t  to2176 ) {
    size_t  from_dash_bs2177 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_696  temp818 =  into_dash_iter698 ( ( (  to701 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub819 ( ( (  size_dash_i32203 ) ( (  from2174 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_279  __cond820 =  next699 (&temp818);
        if (  __cond820 .tag == 0 ) {
            break;
        }
        int32_t  dref2178 =  __cond820 .stuff .Maybe_279_Just_s .field0;
        if ( (  cmp191 ( (  from_dash_bs2177 ) , ( ( (  s2172 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2177 = (  op_dash_add239 ( (  from_dash_bs2177 ) , ( (  next_dash_char231 ) ( ( (  offset_dash_ptr_prime_821 ) ( ( ( (  s2172 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2177 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2179 = (  from_dash_bs2177 );
    struct RangeIter_696  temp822 =  into_dash_iter698 ( ( (  to701 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub819 ( (  op_dash_sub819 ( ( (  size_dash_i32203 ) ( (  to2176 ) ) ) , ( (  size_dash_i32203 ) ( (  from2174 ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_279  __cond823 =  next699 (&temp822);
        if (  __cond823 .tag == 0 ) {
            break;
        }
        int32_t  dref2180 =  __cond823 .stuff .Maybe_279_Just_s .field0;
        if ( (  cmp191 ( (  to_dash_bs2179 ) , ( ( (  s2172 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2179 = (  op_dash_add239 ( (  to_dash_bs2179 ) , ( (  next_dash_char231 ) ( ( (  offset_dash_ptr_prime_821 ) ( ( ( (  s2172 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2179 ) ) ) ) ) ) );
    }
    return ( (struct StrView_21) { .f_contents = ( (  subslice335 ) ( ( (  s2172 ) .f_contents ) ,  (  from_dash_bs2177 ) ,  (  to_dash_bs2179 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr826 (    char *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_12   cast_dash_slice825 (    struct Slice_809  s1932 ) {
    return ( (struct Slice_12) { .f_ptr = ( (  cast_dash_ptr826 ) ( ( (  s1932 ) .f_ptr ) ) ) , .f_count = ( (  s1932 ) .f_count ) } );
}

static  struct StrView_21   from_dash_ascii_dash_slice824 (    struct Slice_809  sl2149 ) {
    return ( (struct StrView_21) { .f_contents = ( (  cast_dash_slice825 ) ( (  sl2149 ) ) ) } );
}

struct Maybe_827 {
    enum {
        Maybe_827_None_t,
        Maybe_827_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_827_Just_s;
    } stuff;
};

static struct Maybe_827 Maybe_827_Just (  int64_t  field0 ) {
    return ( struct Maybe_827 ) { .tag = Maybe_827_Just_t, .stuff = { .Maybe_827_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_829 {
    struct Scanner_814  f_it;
    bool (*  f_pred )(    struct Char_57  );
};

static  struct Scanner_814   into_dash_iter832 (    struct Scanner_814  self3163 ) {
    return (  self3163 );
}

static  struct Scanner_814   into_dash_iter831 (    struct Scanner_814 *  self785 ) {
    return ( (  into_dash_iter832 ) ( ( * (  self785 ) ) ) );
}

static  struct TakeWhile_829   take_dash_while830 (    struct Scanner_814 *  it970 ,    bool (*  pred972 )(    struct Char_57  ) ) {
    return ( (struct TakeWhile_829) { .f_it = ( (  into_dash_iter831 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  bool   is_dash_digit833 (    struct Char_57  c2451 ) {
    return ( (  cmp232 ( ( (  char_dash_u8391 ) ( (  c2451 ) ) ) , ( (  char_dash_u8391 ) ( ( (  from_dash_charlike228 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp232 ( ( (  char_dash_u8391 ) ( (  c2451 ) ) ) , ( (  char_dash_u8391 ) ( ( (  from_dash_charlike228 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_613   next837 (    struct Scanner_814 *  self3160 ) {
    return ( (  next614 ) ( ( & ( ( * (  self3160 ) ) .f_s ) ) ) );
}

static  struct Maybe_613   next836 (    struct TakeWhile_829 *  self964 ) {
    struct Maybe_613  mx965 = ( (  next837 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_613  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_613_None_t ) {
        return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_613_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_613_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_613_Just ) ( ( dref966 .stuff .Maybe_613_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
            }
        }
    }
}

static  struct TakeWhile_829   into_dash_iter839 (    struct TakeWhile_829  self961 ) {
    return (  self961 );
}

static  struct Maybe_613   head835 (    struct TakeWhile_829  it1142 ) {
    struct TakeWhile_829  temp838 = ( (  into_dash_iter839 ) ( (  it1142 ) ) );
    return ( (  next836 ) ( ( &temp838 ) ) );
}

static  bool   null834 (    struct TakeWhile_829  it1151 ) {
    struct Maybe_613  dref1152 = ( (  head835 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_613_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env842 {
    struct Scanner_814 *  it1186;
    ;
};

struct envunion843 {
    struct Maybe_613  (*fun) (  struct env842*  ,    int32_t  );
    struct env842 env;
};

static  enum Unit_7   for_dash_each841 (    struct Range_693  iterable1074 ,   struct envunion843  fun1076 ) {
    struct RangeIter_696  temp844 = ( (  into_dash_iter698 ) ( (  iterable1074 ) ) );
    struct RangeIter_696 *  it1077 = ( &temp844 );
    while ( ( true ) ) {
        struct Maybe_279  dref1078 = ( (  next699 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_279_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_279_Just_t ) {
                struct envunion843  temp845 = (  fun1076 );
                ( temp845.fun ( &temp845.env ,  ( dref1078 .stuff .Maybe_279_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Maybe_613   lam846 (   struct env842* env ,    int32_t  dref1189 ) {
    return ( (  next837 ) ( ( env->it1186 ) ) );
}

static  enum Unit_7   drop_prime_840 (    struct Scanner_814 *  it1186 ,    size_t  n1188 ) {
    struct env842 envinst842 = {
        .it1186 =  it1186 ,
    };
    ( (  for_dash_each841 ) ( ( (  to701 ) ( (  from_dash_integral48 ( 1 ) ) ,  ( (  size_dash_i32203 ) ( (  n1188 ) ) ) ) ) ,  ( (struct envunion843){ .fun = (  struct Maybe_613  (*) (  struct env842*  ,    int32_t  ) )lam846 , .env =  envinst842 } ) ) );
    return ( Unit_7_Unit );
}

static  size_t   reduce848 (    struct TakeWhile_829  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_57  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct TakeWhile_829  it1099 = ( (  into_dash_iter839 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_613  dref1100 = ( (  next836 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_613_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_613_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_613_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp849 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp849);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp850;
    return (  temp850 );
}

static  size_t   lam851 (    struct Char_57  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add239 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count847 (    struct TakeWhile_829  it1104 ) {
    return ( (  reduce848 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam851 ) ) );
}

static  struct TakeWhile_829   chars853 (    struct TakeWhile_829  self1651 ) {
    return (  self1651 );
}

static  struct Maybe_827   reduce854 (    struct TakeWhile_829  iterable1093 ,    struct Maybe_827  base1095 ,    struct Maybe_827 (*  fun1097 )(    struct Char_57  ,    struct Maybe_827  ) ) {
    struct Maybe_827  x1098 = (  base1095 );
    struct TakeWhile_829  it1099 = ( (  into_dash_iter839 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_613  dref1100 = ( (  next836 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_613_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_613_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_613_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp855 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp855);
    exit ( 1 );
    ( Unit_7_Unit );
    struct Maybe_827  temp856;
    return (  temp856 );
}

static  void *   cast_dash_ptr864 (    int32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of865 (    int32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int32_t   zeroed862 (  ) {
    int32_t  temp863;
    int32_t  x570 = (  temp863 );
    ( ( memset ) ( ( (  cast_dash_ptr864 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of865 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast866 (    int32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed860 (    uint8_t  x573 ) {
    int32_t  temp861 = ( (  zeroed862 ) ( ) );
    int32_t *  y574 = ( &temp861 );
    uint8_t *  yp575 = ( (  cast866 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int32_t   u8_dash_i32859 (    uint8_t  x669 ) {
    return ( (  cast_dash_on_dash_zeroed860 ) ( (  x669 ) ) );
}

static  struct Maybe_279   parse_dash_digit858 (    struct Char_57  c2454 ) {
    if ( ( (  is_dash_digit833 ) ( (  c2454 ) ) ) ) {
        return ( ( Maybe_279_Just ) ( ( (  u8_dash_i32859 ) ( (  op_dash_sub788 ( ( (  char_dash_u8391 ) ( (  c2454 ) ) ) , ( (  char_dash_u8391 ) ( ( (  from_dash_charlike228 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_279) { .tag = Maybe_279_None_t } );
    }
}

static  int64_t   i32_dash_i64867 (    int32_t  x606 ) {
    return ( (int64_t ) (  x606 ) );
}

static  struct Maybe_827   sequence_dash_maybe857 (    struct Char_57  e2460 ,    struct Maybe_827  b2462 ) {
    struct Maybe_827  dref2463 = (  b2462 );
    if ( dref2463.tag == Maybe_827_None_t ) {
        return ( (struct Maybe_827) { .tag = Maybe_827_None_t } );
    }
    else {
        if ( dref2463.tag == Maybe_827_Just_t ) {
            struct Maybe_279  dref2465 = ( (  parse_dash_digit858 ) ( (  e2460 ) ) );
            if ( dref2465.tag == Maybe_279_None_t ) {
                return ( (struct Maybe_827) { .tag = Maybe_827_None_t } );
            }
            else {
                if ( dref2465.tag == Maybe_279_Just_t ) {
                    return ( ( Maybe_827_Just ) ( (  op_dash_add412 ( (  op_dash_mul237 ( ( dref2463 .stuff .Maybe_827_Just_s .field0 ) , (  from_dash_integral310 ( 10 ) ) ) ) , ( (  i32_dash_i64867 ) ( ( dref2465 .stuff .Maybe_279_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_827   parse_dash_int852 (    struct TakeWhile_829  s2457 ) {
    struct TakeWhile_829  cs2467 = ( (  chars853 ) ( (  s2457 ) ) );
    struct Maybe_613  dref2468 = ( (  head835 ) ( (  cs2467 ) ) );
    if ( dref2468.tag == Maybe_613_Just_t ) {
        return ( (  reduce854 ) ( (  cs2467 ) ,  ( ( Maybe_827_Just ) ( (  from_dash_integral310 ( 0 ) ) ) ) ,  (  sequence_dash_maybe857 ) ) );
    }
    else {
        if ( dref2468.tag == Maybe_613_None_t ) {
            return ( (struct Maybe_827) { .tag = Maybe_827_None_t } );
        }
    }
}

static  struct Maybe_827   scan_dash_int828 (    struct Scanner_814 *  sc3175 ) {
    struct TakeWhile_829  digit_dash_chars3176 = ( (  take_dash_while830 ) ( (  sc3175 ) ,  (  is_dash_digit833 ) ) );
    if ( ( (  null834 ) ( (  digit_dash_chars3176 ) ) ) ) {
        return ( (struct Maybe_827) { .tag = Maybe_827_None_t } );
    }
    ( (  drop_prime_840 ) ( (  sc3175 ) ,  ( (  count847 ) ( (  digit_dash_chars3176 ) ) ) ) );
    return ( (  parse_dash_int852 ) ( (  digit_dash_chars3176 ) ) );
}

static  int32_t   i64_dash_i32869 (    int64_t  x618 ) {
    return ( (int32_t ) (  x618 ) );
}

struct StrConcat_871 {
    struct StrView_21  field0;
    int64_t  field1;
};

static struct StrConcat_871 StrConcat_871_StrConcat (  struct StrView_21  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_871 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_874 {
    struct StrView_21  field0;
    struct StrConcat_871  field1;
};

static struct StrConcat_874 StrConcat_874_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_871  field1 ) {
    return ( struct StrConcat_874 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_873 {
    struct StrConcat_874  field0;
    struct Char_57  field1;
};

static struct StrConcat_873 StrConcat_873_StrConcat (  struct StrConcat_874  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_873 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_879 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_878 {
    struct StrViewIter_610  f_left;
    struct IntStrIter_879  f_right;
};

struct StrConcatIter_877 {
    struct StrViewIter_610  f_left;
    struct StrConcatIter_878  f_right;
};

enum EmptyIter_881 {
    EmptyIter_881_EmptyIter,
};

struct AppendIter_880 {
    enum EmptyIter_881  f_it;
    struct Char_57  f_elem;
    bool  f_appended;
};

struct StrConcatIter_876 {
    struct StrConcatIter_877  f_left;
    struct AppendIter_880  f_right;
};

static  struct StrConcatIter_876   into_dash_iter883 (    struct StrConcatIter_876  self1491 ) {
    return (  self1491 );
}

struct env890 {
    ;
    int64_t  base1210;
};

struct envunion891 {
    int64_t  (*fun) (  struct env890*  ,    int32_t  ,    int64_t  );
    struct env890 env;
};

static  int64_t   reduce889 (    struct Range_693  iterable1093 ,    int64_t  base1095 ,   struct envunion891  fun1097 ) {
    int64_t  x1098 = (  base1095 );
    struct RangeIter_696  it1099 = ( (  into_dash_iter698 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_279  dref1100 = ( (  next699 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_279_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_279_Just_t ) {
                struct envunion891  temp892 = (  fun1097 );
                x1098 = ( temp892.fun ( &temp892.env ,  ( dref1100 .stuff .Maybe_279_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp893 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp893);
    exit ( 1 );
    ( Unit_7_Unit );
    int64_t  temp894;
    return (  temp894 );
}

static  int64_t   lam895 (   struct env890* env ,    int32_t  item1214 ,    int64_t  x1216 ) {
    return (  op_dash_mul237 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int64_t   pow888 (    int64_t  base1210 ,    int32_t  p1212 ) {
    struct env890 envinst890 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce889 ) ( ( (  to701 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub819 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral310 ( 1 ) ) ,  ( (struct envunion891){ .fun = (  int64_t  (*) (  struct env890*  ,    int32_t  ,    int64_t  ) )lam895 , .env =  envinst890 } ) ) );
}

static  int64_t   op_dash_div896 (    int64_t  l199 ,    int64_t  r201 ) {
    return ( (  l199 ) / (  r201 ) );
}

static  uint8_t   cast897 (    int64_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  int64_t   op_dash_sub898 (    int64_t  l189 ,    int64_t  r191 ) {
    return ( (  l189 ) - (  r191 ) );
}

static  uint8_t *   cast904 (    size_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed902 (    uint8_t  x573 ) {
    size_t  temp903 = ( (  zeroed685 ) ( ) );
    size_t *  y574 = ( &temp903 );
    uint8_t *  yp575 = ( (  cast904 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u8_dash_size901 (    uint8_t  x663 ) {
    return ( (  cast_dash_on_dash_zeroed902 ) ( (  x663 ) ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer900 (    uint8_t *  ptr681 ,    uint8_t  b683 ) {
    size_t  s684 = ( ( (size_t ) (  ptr681 ) ) );
    size_t  exp685 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add239 ( (  op_dash_sub311 ( (  s684 ) , ( (  u8_dash_size901 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer216 ) ( (  ptr681 ) ) ) ) ) ) ) , (  op_dash_mul252 ( (  exp685 ) , ( (  u8_dash_size901 ) ( (  b683 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast905 (    size_t  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_57   from_dash_u8899 (    uint8_t  b772 ) {
    uint8_t *  ptr773 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer900 ) ( ( ( (  cast905 ) ( ( (  u8_dash_size901 ) ( (  b772 ) ) ) ) ) ) ,  (  from_dash_integral219 ( 103 ) ) ) );
    return ( (struct Char_57) { .f_ptr = (  ptr773 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_613   next887 (    struct IntStrIter_879 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_613_Just ) ( ( (  from_dash_charlike228 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp324 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
    }
    int64_t  trim_dash_down1423 = ( (  pow888 ) ( (  from_dash_integral310 ( 10 ) ) ,  (  op_dash_sub819 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    int64_t  upper1424 = (  op_dash_div896 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    int64_t  upper_dash_mask1425 = (  op_dash_mul237 ( (  op_dash_div896 ( (  upper1424 ) , (  from_dash_integral310 ( 10 ) ) ) ) , (  from_dash_integral310 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast897 ) ( (  op_dash_sub898 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub819 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8899 ) ( (  op_dash_add789 ( (  digit1426 ) , (  from_dash_integral219 ( 48 ) ) ) ) ) );
    return ( ( Maybe_613_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_613   next886 (    struct StrConcatIter_878 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next887 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next885 (    struct StrConcatIter_877 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next886 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next907 (    enum EmptyIter_881 *  dref792 ) {
    return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
}

static  struct Maybe_613   next906 (    struct AppendIter_880 *  self1022 ) {
    struct Maybe_613  dref1023 = ( (  next907 ) ( ( & ( ( * (  self1022 ) ) .f_it ) ) ) );
    if ( dref1023.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1023 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1023.tag == Maybe_613_None_t ) {
            if ( ( ! ( ( * (  self1022 ) ) .f_appended ) ) ) {
                (*  self1022 ) .f_appended = ( true );
                return ( ( Maybe_613_Just ) ( ( ( * (  self1022 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
        }
    }
}

static  struct Maybe_613   next884 (    struct StrConcatIter_876 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next885 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next906 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each875 (    struct StrConcatIter_876  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrConcatIter_876  temp882 = ( (  into_dash_iter883 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_876 *  it1077 = ( &temp882 );
    while ( ( true ) ) {
        struct Maybe_613  dref1078 = ( (  next884 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_613_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_613_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_613_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_192   cmp916 (    int64_t  l154 ,    int64_t  r156 ) {
    return ( builtin_int64_tcmp( (  l154 ) , (  r156 ) ) );
}

static  int64_t   op_dash_neg917 (    int64_t  l204 ) {
    return ( (  from_dash_integral310 ( 0 ) ) - (  l204 ) );
}

static  bool   eq919 (    int64_t  l101 ,    int64_t  r103 ) {
    return ( (  l101 ) == (  r103 ) );
}

static  int32_t   count_dash_digits918 (    int64_t  self1430 ) {
    if ( (  eq919 ( (  self1430 ) , (  from_dash_integral310 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp916 ( (  self1430 ) , (  from_dash_integral310 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div896 ( (  self1430 ) , (  from_dash_integral310 ( 10 ) ) ) );
        digits1431 = (  op_dash_add281 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_879   int_dash_iter915 (    int64_t  int1434 ) {
    if ( (  cmp916 ( (  int1434 ) , (  from_dash_integral310 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_879) { .f_int = (  op_dash_neg917 ( (  int1434 ) ) ) , .f_len = ( (  count_dash_digits918 ) ( (  op_dash_neg917 ( (  int1434 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_879) { .f_int = (  int1434 ) , .f_len = ( (  count_dash_digits918 ) ( (  int1434 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_879   chars914 (    int64_t  self1461 ) {
    return ( (  int_dash_iter915 ) ( (  self1461 ) ) );
}

static  struct StrConcatIter_878   into_dash_iter913 (    struct StrConcat_871  dref1498 ) {
    return ( (struct StrConcatIter_878) { .f_left = ( (  chars615 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars914 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_878   chars912 (    struct StrConcat_871  self1509 ) {
    return ( (  into_dash_iter913 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_877   into_dash_iter911 (    struct StrConcat_874  dref1498 ) {
    return ( (struct StrConcatIter_877) { .f_left = ( (  chars615 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars912 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_877   chars910 (    struct StrConcat_874  self1509 ) {
    return ( (  into_dash_iter911 ) ( (  self1509 ) ) );
}

static  enum EmptyIter_881   into_dash_iter924 (    enum EmptyIter_881  self790 ) {
    return (  self790 );
}

static  struct AppendIter_880   append923 (    enum EmptyIter_881  it1006 ,    struct Char_57  e1008 ) {
    return ( (struct AppendIter_880) { .f_it = ( (  into_dash_iter924 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_880   cons922 (    enum EmptyIter_881  it1011 ,    struct Char_57  e1013 ) {
    return ( (  append923 ) ( (  it1011 ) ,  (  e1013 ) ) );
}

static  enum EmptyIter_881   nil925 (  ) {
    return ( EmptyIter_881_EmptyIter );
}

static  struct AppendIter_880   single921 (    struct Char_57  e1016 ) {
    return ( (  cons922 ) ( ( (  nil925 ) ( ) ) ,  (  e1016 ) ) );
}

static  struct AppendIter_880   chars920 (    struct Char_57  self1407 ) {
    return ( (  single921 ) ( (  self1407 ) ) );
}

static  struct StrConcatIter_876   into_dash_iter909 (    struct StrConcat_873  dref1498 ) {
    return ( (struct StrConcatIter_876) { .f_left = ( (  chars910 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars920 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_876   chars908 (    struct StrConcat_873  self1509 ) {
    return ( (  into_dash_iter909 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print872 (    struct StrConcat_873  s1701 ) {
    ( (  for_dash_each875 ) ( ( (  chars908 ) ( (  s1701 ) ) ) ,  (  printf_dash_char211 ) ) );
    return ( Unit_7_Unit );
}

static  enum MouseButton_731   undefined926 (  ) {
    enum MouseButton_731  temp927;
    return (  temp927 );
}

static  enum MouseButton_731   panic_prime_870 (    struct StrConcat_871  errmsg1715 ) {
    ( (  print872 ) ( ( ( StrConcat_873_StrConcat ) ( ( ( StrConcat_874_StrConcat ) ( ( (  from_dash_string227 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1715 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined926 ) ( ) );
}

static  enum MouseButton_731   btn_dash_to_dash_mouse_dash_button868 (    int64_t  btn3337 ) {
    return ( {  int32_t  dref3338 = ( (  i64_dash_i32869 ) ( (  btn3337 ) ) ) ;  dref3338 == 0 ? ( MouseButton_731_MouseLeft ) :  dref3338 == 1 ? ( MouseButton_731_MouseMiddle ) :  dref3338 == 2 ? ( MouseButton_731_MouseRight ) :  dref3338 == 64 ? ( MouseButton_731_ScrollUp ) :  dref3338 == 65 ? ( MouseButton_731_ScrollDown ) : ( (  panic_prime_870 ) ( ( ( StrConcat_871_StrConcat ) ( ( (  from_dash_string227 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3337 ) ) ) ) ) ; } );
}

static  struct Scanner_814   mk929 (    struct StrView_21  s3166 ) {
    return ( (struct Scanner_814) { .f_s = ( (  into_dash_iter616 ) ( (  s3166 ) ) ) } );
}

static  struct Maybe_728   parse_dash_csi808 (    struct Slice_809  seq3344 ) {
    if ( (  eq246 ( ( (  seq3344 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_728) { .tag = Maybe_728_None_t } );
    }
    char  last3345 = (  elem_dash_get810 ( (  seq3344 ) , (  op_dash_sub311 ( ( (  seq3344 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq793 ( (  elem_dash_get810 ( (  seq3344 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike794 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq793 ( (  last3345 ) , ( (  from_dash_charlike794 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq793 ( (  last3345 ) , ( (  from_dash_charlike794 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_814  temp815 = ( (  mk_dash_from_dash_str816 ) ( ( (  substr817 ) ( ( (  from_dash_ascii_dash_slice824 ) ( (  seq3344 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3344 ) .f_count ) ) ) ) );
        struct Scanner_814 *  sc3346 = ( &temp815 );
        struct Maybe_827  dref3347 = ( (  scan_dash_int828 ) ( (  sc3346 ) ) );
        if ( dref3347.tag == Maybe_827_None_t ) {
            return ( (struct Maybe_728) { .tag = Maybe_728_None_t } );
        }
        else {
            if ( dref3347.tag == Maybe_827_Just_t ) {
                ( (  next837 ) ( (  sc3346 ) ) );
                struct Maybe_827  dref3349 = ( (  scan_dash_int828 ) ( (  sc3346 ) ) );
                if ( dref3349.tag == Maybe_827_None_t ) {
                    return ( (struct Maybe_728) { .tag = Maybe_728_None_t } );
                }
                else {
                    if ( dref3349.tag == Maybe_827_Just_t ) {
                        ( (  next837 ) ( (  sc3346 ) ) );
                        struct Maybe_827  dref3351 = ( (  scan_dash_int828 ) ( (  sc3346 ) ) );
                        if ( dref3351.tag == Maybe_827_None_t ) {
                            return ( (struct Maybe_728) { .tag = Maybe_728_None_t } );
                        }
                        else {
                            if ( dref3351.tag == Maybe_827_Just_t ) {
                                return ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Mouse ) ( ( (struct MouseEvent_730) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button868 ) ( ( dref3347 .stuff .Maybe_827_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub819 ( ( (  i64_dash_i32869 ) ( ( dref3349 .stuff .Maybe_827_Just_s .field0 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) , .f_y = (  op_dash_sub819 ( ( (  i64_dash_i32869 ) ( ( dref3351 .stuff .Maybe_827_Just_s .field0 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) , .f_pressed = (  eq793 ( (  last3345 ) , ( (  from_dash_charlike794 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq246 ( ( (  seq3344 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq793 ( (  last3345 ) , ( (  from_dash_charlike794 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_Up_t } ) ) ) ) );
        }
        if ( (  eq793 ( (  last3345 ) , ( (  from_dash_charlike794 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_Down_t } ) ) ) ) );
        }
        if ( (  eq793 ( (  last3345 ) , ( (  from_dash_charlike794 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_Right_t } ) ) ) ) );
        }
        if ( (  eq793 ( (  last3345 ) , ( (  from_dash_charlike794 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_Left_t } ) ) ) ) );
        }
        if ( (  eq793 ( (  last3345 ) , ( (  from_dash_charlike794 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_Home_t } ) ) ) ) );
        }
        if ( (  eq793 ( (  last3345 ) , ( (  from_dash_charlike794 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_728) { .tag = Maybe_728_None_t } );
    }
    if ( (  eq793 ( (  last3345 ) , ( (  from_dash_charlike794 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_814  temp928 = ( (  mk929 ) ( ( (  from_dash_ascii_dash_slice824 ) ( (  seq3344 ) ) ) ) );
        struct Scanner_814 *  sc3353 = ( &temp928 );
        struct Maybe_827  dref3354 = ( (  scan_dash_int828 ) ( (  sc3353 ) ) );
        if ( dref3354.tag == Maybe_827_None_t ) {
            return ( (struct Maybe_728) { .tag = Maybe_728_None_t } );
        }
        else {
            if ( dref3354.tag == Maybe_827_Just_t ) {
                return ( {  int32_t  dref3356 = ( (  i64_dash_i32869 ) ( ( dref3354 .stuff .Maybe_827_Just_s .field0 ) ) ) ;  dref3356 == 1 ? ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_Home_t } ) ) ) ) ) :  dref3356 == 2 ? ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_Insert_t } ) ) ) ) ) :  dref3356 == 3 ? ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_Delete_t } ) ) ) ) ) :  dref3356 == 4 ? ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_End_t } ) ) ) ) ) :  dref3356 == 5 ? ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_PageUp_t } ) ) ) ) ) :  dref3356 == 6 ? ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_PageDown_t } ) ) ) ) ) :  dref3356 == 15 ? ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_F5_t } ) ) ) ) ) :  dref3356 == 17 ? ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_F6_t } ) ) ) ) ) :  dref3356 == 18 ? ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_F7_t } ) ) ) ) ) :  dref3356 == 19 ? ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_F8_t } ) ) ) ) ) :  dref3356 == 20 ? ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_F9_t } ) ) ) ) ) :  dref3356 == 21 ? ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_F10_t } ) ) ) ) ) :  dref3356 == 23 ? ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_F11_t } ) ) ) ) ) :  dref3356 == 24 ? ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_F12_t } ) ) ) ) ) : ( (struct Maybe_728) { .tag = Maybe_728_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_728) { .tag = Maybe_728_None_t } );
}

static  struct Slice_809   subslice930 (    struct Slice_809  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    char *  begin_dash_ptr1787 = ( (  offset_dash_ptr806 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp191 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp191 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_809) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub311 ( ( (  min338 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_809) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  char *   cast932 (    struct Array_796 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_809   as_dash_slice931 (    struct Array_796 *  arr2272 ) {
    return ( (struct Slice_809) { .f_ptr = ( (  cast932 ) ( (  arr2272 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_934 {
    enum {
        Maybe_934_None_t,
        Maybe_934_Just_t,
    } tag;
    union {
        struct {
            struct Key_165  field0;
        } Maybe_934_Just_s;
    } stuff;
};

static struct Maybe_934 Maybe_934_Just (  struct Key_165  field0 ) {
    return ( struct Maybe_934 ) { .tag = Maybe_934_Just_t, .stuff = { .Maybe_934_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_934   parse_dash_ss3935 (    char  c3341 ) {
    if ( (  eq793 ( (  c3341 ) , ( (  from_dash_charlike794 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_934_Just ) ( ( (struct Key_165) { .tag = Key_165_Up_t } ) ) );
    }
    if ( (  eq793 ( (  c3341 ) , ( (  from_dash_charlike794 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_934_Just ) ( ( (struct Key_165) { .tag = Key_165_Down_t } ) ) );
    }
    if ( (  eq793 ( (  c3341 ) , ( (  from_dash_charlike794 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_934_Just ) ( ( (struct Key_165) { .tag = Key_165_Right_t } ) ) );
    }
    if ( (  eq793 ( (  c3341 ) , ( (  from_dash_charlike794 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_934_Just ) ( ( (struct Key_165) { .tag = Key_165_Left_t } ) ) );
    }
    if ( (  eq793 ( (  c3341 ) , ( (  from_dash_charlike794 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_934_Just ) ( ( (struct Key_165) { .tag = Key_165_Home_t } ) ) );
    }
    if ( (  eq793 ( (  c3341 ) , ( (  from_dash_charlike794 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_934_Just ) ( ( (struct Key_165) { .tag = Key_165_End_t } ) ) );
    }
    if ( (  eq793 ( (  c3341 ) , ( (  from_dash_charlike794 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_934_Just ) ( ( (struct Key_165) { .tag = Key_165_F1_t } ) ) );
    }
    if ( (  eq793 ( (  c3341 ) , ( (  from_dash_charlike794 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_934_Just ) ( ( (struct Key_165) { .tag = Key_165_F2_t } ) ) );
    }
    if ( (  eq793 ( (  c3341 ) , ( (  from_dash_charlike794 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_934_Just ) ( ( (struct Key_165) { .tag = Key_165_F3_t } ) ) );
    }
    if ( (  eq793 ( (  c3341 ) , ( (  from_dash_charlike794 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_934_Just ) ( ( (struct Key_165) { .tag = Key_165_F4_t } ) ) );
    }
    return ( (struct Maybe_934) { .tag = Maybe_934_None_t } );
}

static  struct Maybe_728   read_dash_key740 (  ) {
    char  temp741 = ( (  undefined742 ) ( ) );
    char *  ch3358 = ( &temp741 );
    struct Maybe_744  dref3359 = ( (  read_dash_byte745 ) ( (  from_dash_integral48 ( 0 ) ) ) );
    if ( dref3359.tag == Maybe_744_None_t ) {
        return ( (struct Maybe_728) { .tag = Maybe_728_None_t } );
    }
    else {
        if ( dref3359.tag == Maybe_744_Just_t ) {
            (*  ch3358 ) = ( dref3359 .stuff .Maybe_744_Just_s .field0 );
        }
    }
    if ( (  eq215 ( ( (  ascii_dash_u8752 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral219 ( 13 ) ) ) ) ) {
        return ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_Enter_t } ) ) ) ) );
    }
    if ( (  eq215 ( ( (  ascii_dash_u8752 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral219 ( 127 ) ) ) ) ) {
        return ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp232 ( ( (  ascii_dash_u8752 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral219 ( 27 ) ) ) == 0 ) && ( !  eq215 ( ( (  ascii_dash_u8752 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral219 ( 9 ) ) ) ) ) ) {
        char  letter3361 = ( (  u8_dash_ascii753 ) ( ( (  u32_dash_u8225 ) ( ( (  u32_dash_or564 ) ( ( (  u8_dash_u32754 ) ( ( (  ascii_dash_u8752 ) ( ( * (  ch3358 ) ) ) ) ) ) ,  ( (  from_dash_hex758 ) ( ( (  from_dash_string227 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( ( Key_165_Ctrl ) ( (  letter3361 ) ) ) ) ) ) );
    }
    if ( ( !  eq215 ( ( (  ascii_dash_u8752 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral219 ( 27 ) ) ) ) ) {
        if ( (  cmp232 ( ( (  ascii_dash_u8752 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral219 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key740 ) ( ) );
        } else {
            return ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( ( Key_165_Char ) ( ( * (  ch3358 ) ) ) ) ) ) ) );
        }
    }
    char  temp792 = ( (  undefined742 ) ( ) );
    char *  ch23362 = ( &temp792 );
    struct Maybe_744  dref3363 = ( (  read_dash_byte745 ) ( (  from_dash_integral48 ( 50 ) ) ) );
    if ( dref3363.tag == Maybe_744_None_t ) {
        return ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3363.tag == Maybe_744_Just_t ) {
            (*  ch23362 ) = ( dref3363 .stuff .Maybe_744_Just_s .field0 );
        }
    }
    if ( (  eq793 ( ( * (  ch23362 ) ) , ( (  from_dash_charlike794 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_796  temp797 = ( ( (  zeroed798 ) ( ) ) );
        struct Array_796 *  seq3365 = ( &temp797 );
        int32_t  slen3366 = (  from_dash_integral48 ( 0 ) );
        while ( (  cmp324 ( (  slen3366 ) , (  from_dash_integral48 ( 31 ) ) ) == 0 ) ) {
            char  temp802 = ( (  undefined742 ) ( ) );
            char *  sc3367 = ( &temp802 );
            struct Maybe_744  dref3368 = ( (  read_dash_byte745 ) ( (  from_dash_integral48 ( 50 ) ) ) );
            if ( dref3368.tag == Maybe_744_None_t ) {
                break;
            }
            else {
                if ( dref3368.tag == Maybe_744_Just_t ) {
                    (*  sc3367 ) = ( dref3368 .stuff .Maybe_744_Just_s .field0 );
                }
            }
            ( (  set803 ) ( (  seq3365 ) ,  ( (  i32_dash_size269 ) ( (  slen3366 ) ) ) ,  ( * (  sc3367 ) ) ) );
            slen3366 = (  op_dash_add281 ( (  slen3366 ) , (  from_dash_integral48 ( 1 ) ) ) );
            if ( ( (  cmp232 ( ( (  ascii_dash_u8752 ) ( ( * (  sc3367 ) ) ) ) , (  from_dash_integral219 ( 64 ) ) ) != 0 ) && (  cmp232 ( ( (  ascii_dash_u8752 ) ( ( * (  sc3367 ) ) ) ) , (  from_dash_integral219 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi808 ) ( ( (  subslice930 ) ( ( (  as_dash_slice931 ) ( (  seq3365 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size269 ) ( (  slen3366 ) ) ) ) ) ) );
    }
    if ( (  eq793 ( ( * (  ch23362 ) ) , ( (  from_dash_charlike794 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp933 = ( (  undefined742 ) ( ) );
        char *  sc3370 = ( &temp933 );
        struct Maybe_744  dref3371 = ( (  read_dash_byte745 ) ( (  from_dash_integral48 ( 50 ) ) ) );
        if ( dref3371.tag == Maybe_744_None_t ) {
            return ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3371.tag == Maybe_744_Just_t ) {
                (*  sc3370 ) = ( dref3371 .stuff .Maybe_744_Just_s .field0 );
            }
        }
        struct Maybe_934  dref3373 = ( (  parse_dash_ss3935 ) ( ( * (  sc3370 ) ) ) );
        if ( dref3373.tag == Maybe_934_None_t ) {
            return ( (struct Maybe_728) { .tag = Maybe_728_None_t } );
        }
        else {
            if ( dref3373.tag == Maybe_934_Just_t ) {
                return ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( dref3373 .stuff .Maybe_934_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_728_Just ) ( ( ( InputEvent_729_Key ) ( ( (struct Key_165) { .tag = Key_165_Escape_t } ) ) ) ) );
}

static  struct Maybe_728   read_dash_event737 (   struct env71* env ,    struct Tui_73 *  tui3383 ) {
    struct envunion72  temp738 = ( (struct envunion72){ .fun = (  bool  (*) (  struct env70*  ,    struct Tui_73 *  ) )update_dash_dimensions739 , .env =  env->envinst70 } );
    ( temp738.fun ( &temp738.env ,  (  tui3383 ) ) );
    struct Maybe_728  dref3384 = ( (  read_dash_key740 ) ( ) );
    if ( dref3384.tag == Maybe_728_None_t ) {
        return ( (struct Maybe_728) { .tag = Maybe_728_None_t } );
    }
    else {
        if ( dref3384.tag == Maybe_728_Just_t ) {
            (*  tui3383 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_728_Just ) ( ( dref3384 .stuff .Maybe_728_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_728   lam735 (   struct env726* env ) {
    struct envunion727  temp736 = ( (struct envunion727){ .fun = (  struct Maybe_728  (*) (  struct env71*  ,    struct Tui_73 *  ) )read_dash_event737 , .env =  env->envinst71 } );
    return ( temp736.fun ( &temp736.env ,  ( env->tui4288 ) ) );
}

static  struct Maybe_728   next937 (    struct FunIter_725 *  self1031 ) {
    if ( ( ( * (  self1031 ) ) .f_finished ) ) {
        return ( (struct Maybe_728) { .tag = Maybe_728_None_t } );
    }
    struct envunion732  temp938 = ( ( * (  self1031 ) ) .f_fun );
    struct Maybe_728  dref1032 = ( temp938.fun ( &temp938.env ) );
    if ( dref1032.tag == Maybe_728_Just_t ) {
        return ( ( Maybe_728_Just ) ( ( dref1032 .stuff .Maybe_728_Just_s .field0 ) ) );
    }
    else {
        if ( dref1032.tag == Maybe_728_None_t ) {
            (*  self1031 ) .f_finished = ( true );
            return ( (struct Maybe_728) { .tag = Maybe_728_None_t } );
        }
    }
}

struct env941 {
    struct Editor_143 *  ed4171;
    ;
};

struct envunion942 {
    enum Unit_7  (*fun) (  struct env941*  ,    struct StrView_21  );
    struct env941 env;
};

static  enum Unit_7   if_dash_just940 (    struct Maybe_144  x1291 ,   struct envunion942  fun1293 ) {
    struct Maybe_144  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_144_Just_t ) {
        struct envunion942  temp943 = (  fun1293 );
        ( temp943.fun ( &temp943.env ,  ( dref1294 .stuff .Maybe_144_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_144_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   free945 (    struct StrView_21  s2167 ,    enum CAllocator_9  al2169 ) {
    ( (  free379 ) ( (  al2169 ) ,  ( (struct Slice_12) { .f_ptr = ( ( (  s2167 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam944 (   struct env941* env ,    struct StrView_21  msg4173 ) {
    ( (  free945 ) ( (  msg4173 ) ,  ( ( * ( env->ed4171 ) ) .f_al ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   reset_dash_msg939 (    struct Editor_143 *  ed4171 ) {
    struct env941 envinst941 = {
        .ed4171 =  ed4171 ,
    };
    ( (  if_dash_just940 ) ( ( ( * (  ed4171 ) ) .f_msg ) ,  ( (struct envunion942){ .fun = (  enum Unit_7  (*) (  struct env941*  ,    struct StrView_21  ) )lam944 , .env =  envinst941 } ) ) );
    (*  ed4171 ) .f_msg = ( (struct Maybe_144) { .tag = Maybe_144_None_t } );
    return ( Unit_7_Unit );
}

struct envunion947 {
    enum Unit_7  (*fun) (  struct env157*  ,    struct Editor_143 *  ,    struct Key_165  );
    struct env157 env;
};

enum CursorMovement_953 {
    CursorMovement_953_NoChanges,
    CursorMovement_953_UpdateVI,
    CursorMovement_953_OverrideSelect,
};

struct Tuple2_955 {
    enum CursorMovement_953  field0;
    enum CursorMovement_953  field1;
};

static struct Tuple2_955 Tuple2_955_Tuple2 (  enum CursorMovement_953  field0 ,  enum CursorMovement_953  field1 ) {
    return ( struct Tuple2_955 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq954 (    enum CursorMovement_953  l3942 ,    enum CursorMovement_953  r3944 ) {
    return ( {  struct Tuple2_955  dref3945 = ( ( Tuple2_955_Tuple2 ) ( (  l3942 ) ,  (  r3944 ) ) ) ;  dref3945 .field0 == CursorMovement_953_NoChanges &&  dref3945 .field1 == CursorMovement_953_NoChanges ? ( true ) :  dref3945 .field0 == CursorMovement_953_UpdateVI &&  dref3945 .field1 == CursorMovement_953_UpdateVI ? ( true ) :  dref3945 .field0 == CursorMovement_953_OverrideSelect &&  dref3945 .field1 == CursorMovement_953_OverrideSelect ? ( true ) : ( false ) ; } );
}

static  struct StrView_21   from_dash_bytes959 (    struct Slice_12  sl2152 ) {
    return ( (struct StrView_21) { .f_contents = (  sl2152 ) } );
}

static  struct StrView_21   line958 (    struct TextBuf_88 *  self3629 ,    int32_t  li3631 ) {
    return ( (  from_dash_bytes959 ) ( ( (  to_dash_slice339 ) ( ( (  get332 ) ( ( & ( ( * (  self3629 ) ) .f_buf ) ) ,  ( (  i32_dash_size269 ) ( (  li3631 ) ) ) ) ) ) ) ) );
}

static  int32_t   maybe962 (    struct Maybe_144  x1282 ,    int32_t (*  fun1284 )(    struct StrView_21  ) ,    int32_t  default1286 ) {
    return ( {  struct Maybe_144  dref1287 = (  x1282 ) ; dref1287.tag == Maybe_144_Just_t ? ( (  fun1284 ) ( ( dref1287 .stuff .Maybe_144_Just_s .field0 ) ) ) : (  default1286 ) ; } );
}

static  struct Maybe_144   char_dash_replacement963 (    struct Char_57  c3835 ) {
    if ( (  eq410 ( (  c3835 ) , ( (  from_dash_charlike228 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_144_Just ) ( ( (  from_dash_string227 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_144) { .tag = Maybe_144_None_t } );
    }
}

static  size_t   reduce966 (    struct StrViewIter_610  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_57  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct StrViewIter_610  it1099 = ( (  into_dash_iter612 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_613  dref1100 = ( (  next614 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_613_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_613_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_613_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp967 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp967);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp968;
    return (  temp968 );
}

static  size_t   lam969 (    struct Char_57  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add239 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count965 (    struct StrViewIter_610  it1104 ) {
    return ( (  reduce966 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam969 ) ) );
}

static  int32_t   lam964 (    struct StrView_21  s3840 ) {
    return ( (  size_dash_i32203 ) ( ( (  count965 ) ( ( (  chars615 ) ( (  s3840 ) ) ) ) ) ) );
}

static  int32_t   max971 (    int32_t  l1315 ,    int32_t  r1317 ) {
    if ( (  cmp324 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  void *   cast_dash_ptr977 (    wchar_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of978 (    wchar_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  wchar_t   zeroed975 (  ) {
    wchar_t  temp976;
    wchar_t  x570 = (  temp976 );
    ( ( memset ) ( ( (  cast_dash_ptr977 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of978 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr979 (    uint8_t *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  size_t   cast980 (    int64_t  x356 ) {
    return ( (size_t ) (  x356 ) );
}

struct TypeSize_983 {
    size_t  f_size;
};

static  struct TypeSize_983   get_dash_typesize982 (  ) {
    wchar_t  temp984;
    return ( (struct TypeSize_983) { .f_size = ( sizeof( ( (  temp984 ) ) ) ) } );
}

static  wchar_t   cast986 (    uint32_t  x356 ) {
    return ( (wchar_t ) (  x356 ) );
}

static  wchar_t   to_dash_c_dash_wchar973 (    struct Char_57  c750 ) {
    struct CharDestructured_212  dref751 = ( (  destructure214 ) ( (  c750 ) ) );
    if ( dref751.tag == CharDestructured_212_Ref_t ) {
        wchar_t  temp974 = ( (  zeroed975 ) ( ) );
        wchar_t *  wcp753 = ( &temp974 );
        size_t  num_dash_chars754 = ( ( mbstowcs ) ( (  wcp753 ) ,  ( (  cast_dash_ptr979 ) ( ( ( dref751 .stuff .CharDestructured_212_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq246 ( (  num_dash_chars754 ) , ( ( (  cast980 ) ( ( (  op_dash_neg917 ( (  from_dash_integral310 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp981 = ( (  from_dash_string49 ) ( ( "could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp981);
            exit ( 1 );
            ( Unit_7_Unit );
        }
        return ( * (  wcp753 ) );
    }
    else {
        if ( dref751.tag == CharDestructured_212_Scalar_t ) {
            if ( ( ! (  eq246 ( ( (  size_dash_of652 ) ( ( ( dref751 .stuff .CharDestructured_212_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize982 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp985 = ( (  from_dash_string49 ) ( ( "Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp985);
                exit ( 1 );
                ( Unit_7_Unit );
            }
            return ( (  cast986 ) ( ( ( dref751 .stuff .CharDestructured_212_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth972 (    struct Char_57  c2572 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar973 ) ( (  c2572 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth970 (    struct Char_57  c3428 ) {
    return ( (  max971 ) ( ( (  wcwidth972 ) ( (  c3428 ) ) ) ,  (  from_dash_integral48 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width961 (    struct Char_57  c3838 ) {
    return ( (  maybe962 ) ( ( (  char_dash_replacement963 ) ( (  c3838 ) ) ) ,  (  lam964 ) ,  ( (  rendered_dash_wcwidth970 ) ( (  c3838 ) ) ) ) );
}

static  int32_t   pos_dash_vi956 (    struct TextBuf_88 *  self3854 ,    struct Pos_20  pos3856 ) {
    int32_t  bi3857 = ( (  from_dash_integral48 ( 0 ) ) );
    int32_t  vi3858 = (  from_dash_integral48 ( 0 ) );
    struct StrViewIter_610  temp957 =  into_dash_iter612 ( ( (  chars615 ) ( ( (  line958 ) ( (  self3854 ) ,  ( (  pos3856 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_613  __cond960 =  next614 (&temp957);
        if (  __cond960 .tag == 0 ) {
            break;
        }
        struct Char_57  c3860 =  __cond960 .stuff .Maybe_613_Just_s .field0;
        bi3857 = (  op_dash_add281 ( (  bi3857 ) , ( (  size_dash_i32203 ) ( ( (  c3860 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp324 ( ( (  pos3856 ) .f_bi ) , (  bi3857 ) ) == 0 ) ) {
            break;
        }
        vi3858 = (  op_dash_add281 ( (  vi3858 ) , ( (  char_dash_screen_dash_width961 ) ( (  c3860 ) ) ) ) );
    }
    return (  vi3858 );
}

struct Tuple2_989 {
    enum Mode_127  field0;
    enum Mode_127  field1;
};

static struct Tuple2_989 Tuple2_989_Tuple2 (  enum Mode_127  field0 ,  enum Mode_127  field1 ) {
    return ( struct Tuple2_989 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq988 (    enum Mode_127  l3818 ,    enum Mode_127  r3820 ) {
    return ( {  struct Tuple2_989  dref3821 = ( ( Tuple2_989_Tuple2 ) ( (  l3818 ) ,  (  r3820 ) ) ) ;  dref3821 .field0 == Mode_127_Normal &&  dref3821 .field1 == Mode_127_Normal ? ( true ) :  dref3821 .field0 == Mode_127_Insert &&  dref3821 .field1 == Mode_127_Insert ? ( true ) :  dref3821 .field0 == Mode_127_Select &&  dref3821 .field1 == Mode_127_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_7   set_dash_sel987 (    struct Pane_126 *  self3931 ,    struct Maybe_28  sel3933 ) {
    if ( ( !  eq988 ( ( ( * (  self3931 ) ) .f_mode ) , ( Mode_127_Select ) ) ) ) {
        (*  self3931 ) .f_sel = (  sel3933 );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_cursors952 (    struct Pane_126 *  self3948 ,    struct Pos_20  cur3950 ,    struct Maybe_28  sel3952 ,    enum CursorMovement_953  cursor_dash_movement_dash_type3954 ) {
    if ( ( !  eq954 ( (  cursor_dash_movement_dash_type3954 ) , ( CursorMovement_953_NoChanges ) ) ) ) {
        (*  self3948 ) .f_vi = ( (  pos_dash_vi956 ) ( ( ( * (  self3948 ) ) .f_buf ) ,  (  cur3950 ) ) );
    }
    (*  self3948 ) .f_cursor = (  cur3950 );
    if ( ( !  eq954 ( (  cursor_dash_movement_dash_type3954 ) , ( CursorMovement_953_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel987 ) ( (  self3948 ) ,  (  sel3952 ) ) );
    } else {
        (*  self3948 ) .f_sel = (  sel3952 );
    }
    return ( Unit_7_Unit );
}

static  size_t   num_dash_bytes991 (    struct StrView_21  self2195 ) {
    return ( ( (  self2195 ) .f_contents ) .f_count );
}

static  size_t   clamp992 (    size_t  x1352 ,    size_t  mn1354 ,    size_t  mx1356 ) {
    if ( (  cmp191 ( (  x1352 ) , (  mn1354 ) ) == 0 ) ) {
        return (  mn1354 );
    } else {
        if ( (  cmp191 ( (  x1352 ) , (  mx1356 ) ) == 2 ) ) {
            return (  mx1356 );
        } else {
            return (  x1352 );
        }
    }
}

static  size_t   sync_dash_char994 (    uint8_t *  p692 ) {
    size_t  i693 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb694 = ( * ( (uint8_t * ) ( ( (void*) (  p692 ) ) + (  op_dash_neg917 ( ( (  size_dash_i64268 ) ( (  i693 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp232 ( (  pb694 ) , (  from_dash_integral219 ( 128 ) ) ) != 0 ) && (  cmp232 ( (  pb694 ) , (  op_dash_add789 ( (  from_dash_integral219 ( 128 ) ) , (  from_dash_integral219 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i693 );
        }
        i693 = (  op_dash_add239 ( (  i693 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char993 (    uint8_t *  p697 ) {
    return (  op_dash_add239 ( ( (  sync_dash_char994 ) ( ( (  offset_dash_ptr336 ) ( (  p697 ) ,  (  op_dash_neg917 ( (  from_dash_integral310 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_20   left_dash_pos990 (    struct TextBuf_88 *  self3650 ,    struct Pos_20  pos3652 ) {
    if ( (  eq326 ( (  pos3652 ) , ( (  mk305 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk305 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    }
    if ( (  eq327 ( ( (  pos3652 ) .f_bi ) , (  from_dash_integral48 ( 0 ) ) ) ) ) {
        ( (  assert484 ) ( (  cmp324 ( ( (  pos3652 ) .f_line ) , (  from_dash_integral48 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string227 ) ( ( "previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk305 ) ( (  op_dash_sub819 ( ( (  pos3652 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  ( (  size_dash_i32203 ) ( ( (  num_dash_bytes991 ) ( ( (  line958 ) ( (  self3650 ) ,  (  op_dash_sub819 ( ( (  pos3652 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_21  line3653 = ( (  line958 ) ( (  self3650 ) ,  ( (  pos3652 ) .f_line ) ) );
    size_t  pos_dash_bi3654 = ( (  clamp992 ) ( ( (  i32_dash_size269 ) ( ( (  pos3652 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes991 ) ( (  line3653 ) ) ) ) );
    size_t  off3655 = ( (  previous_dash_char993 ) ( ( (  offset_dash_ptr336 ) ( ( ( (  line3653 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  pos_dash_bi3654 ) ) ) ) ) ) );
    return ( (  mk305 ) ( ( (  pos3652 ) .f_line ) ,  ( (  size_dash_i32203 ) ( (  op_dash_sub311 ( (  pos_dash_bi3654 ) , (  off3655 ) ) ) ) ) ) );
}

static  enum Unit_7   move_dash_left951 (    struct Pane_126 *  self3960 ) {
    ( (  set_dash_cursors952 ) ( (  self3960 ) ,  ( (  left_dash_pos990 ) ( ( ( * (  self3960 ) ) .f_buf ) ,  ( ( * (  self3960 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_953_UpdateVI ) ) );
    return ( Unit_7_Unit );
}

static  struct Pane_126 *   pane995 (    struct Editor_143 *  ed4161 ) {
    return ( & ( ( * (  ed4161 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines998 (    struct TextBuf_88 *  self3634 ) {
    return ( (  size_dash_i32203 ) ( ( (  size328 ) ( ( & ( ( * (  self3634 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_20   right_dash_pos997 (    struct TextBuf_88 *  self3642 ,    struct Pos_20  pos3644 ) {
    if ( (  cmp324 ( ( (  pos3644 ) .f_line ) , ( (  num_dash_lines998 ) ( (  self3642 ) ) ) ) != 0 ) ) {
        return ( (  mk305 ) ( ( (  num_dash_lines998 ) ( (  self3642 ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    }
    struct StrView_21  line3645 = ( (  line958 ) ( (  self3642 ) ,  ( (  pos3644 ) .f_line ) ) );
    int64_t  bi3646 = ( (  i32_dash_i64867 ) ( ( (  pos3644 ) .f_bi ) ) );
    if ( (  cmp916 ( (  bi3646 ) , ( (  size_dash_i64268 ) ( ( (  num_dash_bytes991 ) ( (  line3645 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp324 ( (  op_dash_add281 ( ( (  pos3644 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) , ( (  num_dash_lines998 ) ( (  self3642 ) ) ) ) != 0 ) ) {
            return ( (  mk305 ) ( ( (  pos3644 ) .f_line ) ,  ( (  size_dash_i32203 ) ( ( (  num_dash_bytes991 ) ( (  line3645 ) ) ) ) ) ) );
        }
        return ( (  mk305 ) ( (  op_dash_add281 ( ( (  pos3644 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    }
    int32_t  off3647 = ( (  size_dash_i32203 ) ( ( (  next_dash_char231 ) ( ( (  offset_dash_ptr336 ) ( ( ( (  line3645 ) .f_contents ) .f_ptr ) ,  (  bi3646 ) ) ) ) ) ) );
    return ( (  mk305 ) ( ( (  pos3644 ) .f_line ) ,  (  op_dash_add281 ( ( (  pos3644 ) .f_bi ) , (  off3647 ) ) ) ) );
}

static  enum Unit_7   move_dash_right996 (    struct Pane_126 *  self3957 ) {
    ( (  set_dash_cursors952 ) ( (  self3957 ) ,  ( (  right_dash_pos997 ) ( ( ( * (  self3957 ) ) .f_buf ) ,  ( ( * (  self3957 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_953_UpdateVI ) ) );
    return ( Unit_7_Unit );
}

static  int32_t   vi_dash_bi1000 (    struct TextBuf_88 *  self3843 ,    int32_t  ln3845 ,    int32_t  vx3847 ) {
    int32_t  bi3848 = ( (  from_dash_integral48 ( 0 ) ) );
    int32_t  vi3849 = (  from_dash_integral48 ( 0 ) );
    struct StrViewIter_610  temp1001 =  into_dash_iter612 ( ( (  chars615 ) ( ( (  line958 ) ( (  self3843 ) ,  (  ln3845 ) ) ) ) ) );
    while (true) {
        struct Maybe_613  __cond1002 =  next614 (&temp1001);
        if (  __cond1002 .tag == 0 ) {
            break;
        }
        struct Char_57  c3851 =  __cond1002 .stuff .Maybe_613_Just_s .field0;
        vi3849 = (  op_dash_add281 ( (  vi3849 ) , ( (  char_dash_screen_dash_width961 ) ( (  c3851 ) ) ) ) );
        if ( (  cmp324 ( (  vx3847 ) , (  vi3849 ) ) == 0 ) ) {
            break;
        }
        bi3848 = (  op_dash_add281 ( (  bi3848 ) , ( (  size_dash_i32203 ) ( ( (  c3851 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi3848 );
}

static  enum Unit_7   move_dash_down999 (    struct Pane_126 *  self3963 ) {
    struct Pos_20  cur3964 = ( ( * (  self3963 ) ) .f_cursor );
    if ( (  cmp324 ( (  op_dash_add281 ( ( (  cur3964 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) , ( (  num_dash_lines998 ) ( ( ( * (  self3963 ) ) .f_buf ) ) ) ) != 0 ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  vci3965 = ( ( * (  self3963 ) ) .f_vi );
    int32_t  bi3966 = ( (  vi_dash_bi1000 ) ( ( ( * (  self3963 ) ) .f_buf ) ,  (  op_dash_add281 ( ( (  cur3964 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  vci3965 ) ) );
    ( (  set_dash_cursors952 ) ( (  self3963 ) ,  ( (struct Pos_20) { .f_line = (  op_dash_add281 ( ( (  cur3964 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) , .f_bi = (  bi3966 ) } ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_953_NoChanges ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   move_dash_up1003 (    struct Pane_126 *  self3969 ) {
    struct Pos_20  cur3970 = ( ( * (  self3969 ) ) .f_cursor );
    if ( (  cmp324 ( ( (  cur3970 ) .f_line ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  vci3971 = ( ( * (  self3969 ) ) .f_vi );
    int32_t  bi3972 = ( (  vi_dash_bi1000 ) ( ( ( * (  self3969 ) ) .f_buf ) ,  (  op_dash_sub819 ( ( (  cur3970 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  vci3971 ) ) );
    ( (  set_dash_cursors952 ) ( (  self3969 ) ,  ( (struct Pos_20) { .f_line = (  op_dash_sub819 ( ( (  cur3970 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) , .f_bi = (  bi3972 ) } ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_953_NoChanges ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   flush_dash_insert_dash_action1005 (    struct TextBuf_88 *  self3715 ) {
    (*  self3715 ) .f_actions .f_input_dash_changeset = ( ChangesetInputType_90_NoChangeset );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_mode1004 (    struct Pane_126 *  self3936 ,    enum Mode_127  mode3938 ) {
    if ( (  eq988 ( (  mode3938 ) , ( Mode_127_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action1005 ) ( ( ( * (  self3936 ) ) .f_buf ) ) );
    }
    (*  self3936 ) .f_mode = (  mode3938 );
    return ( Unit_7_Unit );
}

struct TakeWhile_1010 {
    struct StrViewIter_610  f_it;
    bool (*  f_pred )(    struct Char_57  );
};

struct Map_1009 {
    struct TakeWhile_1010  field0;
    size_t (*  field1 )(    struct Char_57  );
};

static struct Map_1009 Map_1009_Map (  struct TakeWhile_1010  field0 ,  size_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1009 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1009   into_dash_iter1012 (    struct Map_1009  self796 ) {
    return (  self796 );
}

struct Maybe_1013 {
    enum {
        Maybe_1013_None_t,
        Maybe_1013_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_1013_Just_s;
    } stuff;
};

static struct Maybe_1013 Maybe_1013_Just (  size_t  field0 ) {
    return ( struct Maybe_1013 ) { .tag = Maybe_1013_Just_t, .stuff = { .Maybe_1013_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_613   next1015 (    struct TakeWhile_1010 *  self964 ) {
    struct Maybe_613  mx965 = ( (  next614 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_613  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_613_None_t ) {
        return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_613_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_613_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_613_Just ) ( ( dref966 .stuff .Maybe_613_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
            }
        }
    }
}

static  struct Maybe_1013   next1014 (    struct Map_1009 *  dref798 ) {
    struct Maybe_613  dref801 = ( (  next1015 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_613_None_t ) {
        return ( (struct Maybe_1013) { .tag = Maybe_1013_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_613_Just_t ) {
            return ( ( Maybe_1013_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_613_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1011 (    struct Map_1009  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1009  it1099 = ( (  into_dash_iter1012 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1013  dref1100 = ( (  next1014 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1013_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1013_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1013_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1016 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1016);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1017;
    return (  temp1017 );
}

static  size_t   lam1018 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add239 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1008 (    struct Map_1009  it1110 ) {
    return ( (  reduce1011 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1018 ) ) );
}

static  struct TakeWhile_1010   into_dash_iter1020 (    struct TakeWhile_1010  self961 ) {
    return (  self961 );
}

static  struct Map_1009   map1019 (    struct TakeWhile_1010  iterable805 ,    size_t (*  fun807 )(    struct Char_57  ) ) {
    struct TakeWhile_1010  it808 = ( (  into_dash_iter1020 ) ( (  iterable805 ) ) );
    return ( ( Map_1009_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1010   take_dash_while1021 (    struct StrView_21  it970 ,    bool (*  pred972 )(    struct Char_57  ) ) {
    return ( (struct TakeWhile_1010) { .f_it = ( (  into_dash_iter616 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  bool   lam1022 (    struct Char_57  c4020 ) {
    return (  eq410 ( (  c4020 ) , ( (  from_dash_charlike228 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
}

static  size_t   lam1023 (    struct Char_57  c4022 ) {
    return ( (  c4022 ) .f_num_dash_bytes );
}

static  int32_t   indent_dash_at_dash_line1007 (    struct Pane_126 *  pane4016 ,    int32_t  line4018 ) {
    return ( (  size_dash_i32203 ) ( ( (  sum1008 ) ( ( (  map1019 ) ( ( (  take_dash_while1021 ) ( ( (  line958 ) ( ( ( * (  pane4016 ) ) .f_buf ) ,  (  line4018 ) ) ) ,  (  lam1022 ) ) ) ,  (  lam1023 ) ) ) ) ) ) );
}

static  enum Unit_7   move_dash_to_dash_beginning_dash_indented1006 (    struct Pane_126 *  self4035 ) {
    struct Pos_20  cur4036 = ( ( * (  self4035 ) ) .f_cursor );
    int32_t  indent4037 = ( (  indent_dash_at_dash_line1007 ) ( (  self4035 ) ,  ( (  cur4036 ) .f_line ) ) );
    struct Pos_20  temp1024 = (  cur4036 );
    temp1024 .  f_bi = (  indent4037 );
    ( (  set_dash_cursors952 ) ( (  self4035 ) ,  ( temp1024 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_953_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   move_dash_to_dash_end1025 (    struct Pane_126 *  self4040 ) {
    struct Pos_20  cur4041 = ( ( * (  self4040 ) ) .f_cursor );
    struct Pos_20  temp1026 = (  cur4041 );
    temp1026 .  f_bi = ( (  size_dash_i32203 ) ( ( (  num_dash_bytes991 ) ( ( (  line958 ) ( ( ( * (  self4040 ) ) .f_buf ) ,  ( (  cur4041 ) .f_line ) ) ) ) ) ) );
    ( (  set_dash_cursors952 ) ( (  self4040 ) ,  ( temp1026 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_953_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

struct envunion1028 {
    enum Unit_7  (*fun) (  struct env111*  ,    struct Pane_126 *  ,    struct StrView_21  );
    struct env111 env;
};

struct SliceIter_1035 {
    struct Slice_25  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1034 {
    struct SliceIter_1035  field0;
    size_t  field1;
};

static struct Drop_1034 Drop_1034_Drop (  struct SliceIter_1035  field0 ,  size_t  field1 ) {
    return ( struct Drop_1034 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1034   into_dash_iter1036 (    struct Drop_1034  self845 ) {
    return (  self845 );
}

static  struct SliceIter_1035   into_dash_iter1039 (    struct Slice_25  self1822 ) {
    return ( (struct SliceIter_1035) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Changeset_26 *   offset_dash_ptr1041 (    struct Changeset_26 *  x338 ,    int64_t  count340 ) {
    struct Changeset_26  temp1042;
    return ( (struct Changeset_26 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul237 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1042 ) ) ) ) ) ) ) ) );
}

static  struct Slice_25   subslice1040 (    struct Slice_25  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Changeset_26 *  begin_dash_ptr1787 = ( (  offset_dash_ptr1041 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp191 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp191 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_25) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub311 ( ( (  min338 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_25) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_1035   into_dash_iter1038 (    struct List_24  self2028 ) {
    return ( (  into_dash_iter1039 ) ( ( (  subslice1040 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

static  struct Drop_1034   drop1037 (    struct List_24  iterable852 ,    size_t  i854 ) {
    struct SliceIter_1035  it855 = ( (  into_dash_iter1038 ) ( (  iterable852 ) ) );
    return ( ( Drop_1034_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

struct Maybe_1044 {
    enum {
        Maybe_1044_None_t,
        Maybe_1044_Just_t,
    } tag;
    union {
        struct {
            struct Changeset_26  field0;
        } Maybe_1044_Just_s;
    } stuff;
};

static struct Maybe_1044 Maybe_1044_Just (  struct Changeset_26  field0 ) {
    return ( struct Maybe_1044 ) { .tag = Maybe_1044_Just_t, .stuff = { .Maybe_1044_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1044   next1046 (    struct SliceIter_1035 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp191 ( (  op_dash_add239 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1044) { .tag = Maybe_1044_None_t } );
    }
    struct Changeset_26  elem1830 = ( * ( (  offset_dash_ptr1041 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add239 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1044_Just ) ( (  elem1830 ) ) );
}

static  struct Maybe_1044   next1045 (    struct Drop_1034 *  dref847 ) {
    while ( (  cmp191 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1046 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub311 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1046 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

struct env1049 {
    enum CAllocator_9  al3600;
    ;
};

struct envunion1050 {
    enum Unit_7  (*fun) (  struct env1049*  ,    struct Action_19  );
    struct env1049 env;
};

struct SliceIter_1051 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1051   into_dash_iter1054 (    struct Slice_18  self1822 ) {
    return ( (struct SliceIter_1051) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_19 *   offset_dash_ptr1056 (    struct Action_19 *  x338 ,    int64_t  count340 ) {
    struct Action_19  temp1057;
    return ( (struct Action_19 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul237 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1057 ) ) ) ) ) ) ) ) );
}

static  struct Slice_18   subslice1055 (    struct Slice_18  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Action_19 *  begin_dash_ptr1787 = ( (  offset_dash_ptr1056 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp191 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp191 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub311 ( ( (  min338 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_1051   into_dash_iter1053 (    struct List_17  self2028 ) {
    return ( (  into_dash_iter1054 ) ( ( (  subslice1055 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

struct Maybe_1058 {
    enum {
        Maybe_1058_None_t,
        Maybe_1058_Just_t,
    } tag;
    union {
        struct {
            struct Action_19  field0;
        } Maybe_1058_Just_s;
    } stuff;
};

static struct Maybe_1058 Maybe_1058_Just (  struct Action_19  field0 ) {
    return ( struct Maybe_1058 ) { .tag = Maybe_1058_Just_t, .stuff = { .Maybe_1058_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1058   next1059 (    struct SliceIter_1051 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp191 ( (  op_dash_add239 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1058) { .tag = Maybe_1058_None_t } );
    }
    struct Action_19  elem1830 = ( * ( (  offset_dash_ptr1056 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add239 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1058_Just ) ( (  elem1830 ) ) );
}

static  enum Unit_7   for_dash_each1048 (    struct List_17  iterable1074 ,   struct envunion1050  fun1076 ) {
    struct SliceIter_1051  temp1052 = ( (  into_dash_iter1053 ) ( (  iterable1074 ) ) );
    struct SliceIter_1051 *  it1077 = ( &temp1052 );
    while ( ( true ) ) {
        struct Maybe_1058  dref1078 = ( (  next1059 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1058_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1058_Just_t ) {
                struct envunion1050  temp1060 = (  fun1076 );
                ( temp1060.fun ( &temp1060.env ,  ( dref1078 .stuff .Maybe_1058_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_action1062 (    struct Action_19  action3593 ,    enum CAllocator_9  al3595 ) {
    ( (  free945 ) ( ( (  action3593 ) .f_fwd ) ,  (  al3595 ) ) );
    ( (  free945 ) ( ( (  action3593 ) .f_bwd ) ,  (  al3595 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1061 (   struct env1049* env ,    struct Action_19  a3602 ) {
    return ( (  free_dash_action1062 ) ( (  a3602 ) ,  ( env->al3600 ) ) );
}

static  void *   cast_dash_ptr1065 (    struct Action_19 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free1064 (    enum CAllocator_9  dref1959 ,    struct Slice_18  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1065 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free1063 (    struct List_17 *  list2035 ) {
    ( (  free1064 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( ( * (  list2035 ) ) .f_elements ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_changeset1047 (    struct Changeset_26  chs3598 ,    enum CAllocator_9  al3600 ) {
    struct env1049 envinst1049 = {
        .al3600 =  al3600 ,
    };
    ( (  for_dash_each1048 ) ( ( (  chs3598 ) .f_parts ) ,  ( (struct envunion1050){ .fun = (  enum Unit_7  (*) (  struct env1049*  ,    struct Action_19  ) )lam1061 , .env =  envinst1049 } ) ) );
    ( (  free1063 ) ( ( & ( (  chs3598 ) .f_parts ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   trim1066 (    struct List_24 *  l2115 ,    size_t  new_dash_count2117 ) {
    (*  l2115 ) .f_count = ( (  min338 ) ( (  new_dash_count2117 ) ,  ( ( * (  l2115 ) ) .f_count ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   trim_dash_actions1032 (    struct Actions_89 *  actions3616 ) {
    enum CAllocator_9  al3617 = ( ( ( * (  actions3616 ) ) .f_list ) .f_al );
    size_t  cur3618 = ( ( * (  actions3616 ) ) .f_cur );
    struct Drop_1034  temp1033 =  into_dash_iter1036 ( ( (  drop1037 ) ( ( ( * (  actions3616 ) ) .f_list ) ,  (  cur3618 ) ) ) );
    while (true) {
        struct Maybe_1044  __cond1043 =  next1045 (&temp1033);
        if (  __cond1043 .tag == 0 ) {
            break;
        }
        struct Changeset_26  action3620 =  __cond1043 .stuff .Maybe_1044_Just_s .field0;
        ( (  free_dash_changeset1047 ) ( (  action3620 ) ,  (  al3617 ) ) );
    }
    ( (  trim1066 ) ( ( & ( ( * (  actions3616 ) ) .f_list ) ) ,  (  cur3618 ) ) );
    return ( Unit_7_Unit );
}

static  struct StrView_21   clone_dash_01068 (    struct StrView_21  s2155 ,    enum CAllocator_9  al2157 ) {
    size_t  cnt2158 = ( ( (  s2155 ) .f_contents ) .f_count );
    struct Slice_12  nus2159 = ( (  allocate360 ) ( (  al2157 ) ,  (  op_dash_add239 ( (  cnt2158 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to459 ) ( ( (  s2155 ) .f_contents ) ,  (  nus2159 ) ) );
    ( (  set369 ) ( (  nus2159 ) ,  (  cnt2158 ) ,  ( (  char_dash_u8391 ) ( ( (  from_dash_charlike228 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = ( (  nus2159 ) .f_ptr ) , .f_count = (  cnt2158 ) } ) } );
}

static  struct StrView_21   clone1067 (    struct StrView_21  s2162 ,    enum CAllocator_9  al2164 ) {
    return ( (  clone_dash_01068 ) ( (  s2162 ) ,  (  al2164 ) ) );
}

static  struct Maybe_144   head1070 (    struct SplitIter_399  it1142 ) {
    struct SplitIter_399  temp1071 = ( (  into_dash_iter406 ) ( (  it1142 ) ) );
    return ( (  next420 ) ( ( &temp1071 ) ) );
}

static  struct Maybe_144   head1073 (    struct Drop_398  it1142 ) {
    struct Drop_398  temp1074 = ( (  into_dash_iter404 ) ( (  it1142 ) ) );
    return ( (  next419 ) ( ( &temp1074 ) ) );
}

static  bool   null1072 (    struct Drop_398  it1151 ) {
    struct Maybe_144  dref1152 = ( (  head1073 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_144_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_7   panic1076 (    struct StrView_21  errmsg1712 ) {
    ( (  print_dash_str485 ) ( ( ( StrConcat_486_StrConcat ) ( ( ( StrConcat_487_StrConcat ) ( ( (  from_dash_string227 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Tuple2_417   undefined1077 (  ) {
    struct Tuple2_417  temp1078;
    return (  temp1078 );
}

static  struct Tuple2_417   or_dash_fail1075 (    struct Maybe_416  x1725 ,    struct StrView_21  errmsg1727 ) {
    struct Maybe_416  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_416_None_t ) {
        ( (  panic1076 ) ( (  errmsg1727 ) ) );
        return ( (  undefined1077 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_416_Just_t ) {
            return ( dref1728 .stuff .Maybe_416_Just_s .field0 );
        }
    }
}

static  struct Maybe_416   reduce1080 (    struct Zip_397  iterable1093 ,    struct Maybe_416  base1095 ,    struct Maybe_416 (*  fun1097 )(    struct Tuple2_417  ,    struct Maybe_416  ) ) {
    struct Maybe_416  x1098 = (  base1095 );
    struct Zip_397  it1099 = ( (  into_dash_iter402 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_416  dref1100 = ( (  next418 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_416_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_416_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_416_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1081 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1081);
    exit ( 1 );
    ( Unit_7_Unit );
    struct Maybe_416  temp1082;
    return (  temp1082 );
}

static  struct Maybe_416   lam1083 (    struct Tuple2_417  e1147 ,    struct Maybe_416  dref1148 ) {
    return ( ( Maybe_416_Just ) ( (  e1147 ) ) );
}

static  struct Maybe_416   last1079 (    struct Zip_397  it1145 ) {
    return ( (  reduce1080 ) ( (  it1145 ) ,  ( (struct Maybe_416) { .tag = Maybe_416_None_t } ) ,  (  lam1083 ) ) );
}

static  int32_t   snd1084 (    struct Tuple2_417  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct StrView_21   fst1085 (    struct Tuple2_417  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_20   pos_dash_after_dash_str1069 (    struct TextBuf_88 *  self3703 ,    struct StrView_21  bytes3705 ,    struct Pos_20  from3707 ) {
    struct SplitIter_399  lines3708 = ( (  split_dash_by_dash_each407 ) ( (  bytes3705 ) ,  ( (  from_dash_charlike228 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_21  first_dash_line3709 = ( (  or_dash_else382 ) ( ( (  head1070 ) ( (  lines3708 ) ) ) ,  ( (  from_dash_string227 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_398  headless3710 = ( (  drop405 ) ( (  lines3708 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1072 ) ( (  headless3710 ) ) ) ) {
        struct Pos_20  next_dash_pos3711 = ( (  mk305 ) ( ( (  from3707 ) .f_line ) ,  (  op_dash_add281 ( ( (  from3707 ) .f_bi ) , ( (  size_dash_i32203 ) ( ( (  num_dash_bytes991 ) ( (  first_dash_line3709 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3711 );
    } else {
        struct Tuple2_417  last_dash_line3712 = ( (  or_dash_fail1075 ) ( ( (  last1079 ) ( ( (  zip403 ) ( (  headless3710 ) ,  ( (  from286 ) ( (  op_dash_add281 ( ( (  from3707 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string227 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk305 ) ( ( (  snd1084 ) ( (  last_dash_line3712 ) ) ) ,  ( (  size_dash_i32203 ) ( ( (  num_dash_bytes991 ) ( ( (  fst1085 ) ( (  last_dash_line3712 ) ) ) ) ) ) ) ) );
    }
}

struct envunion1091 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

static  struct StrView_21   from_dash_charlike1092 (    uint8_t *  ptr77 ,    size_t  count79 ) {
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = (  ptr77 ) , .f_count = (  count79 ) } ) } );
}

struct envunion1096 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

struct envunion1098 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

struct envunion1100 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

static  struct StrView_21   str_dash_between1087 (   struct env102* env ,    struct TextBuf_88 *  self3735 ,    struct Pos_20  from3737 ,    struct Pos_20  to3739 ) {
    enum CAllocator_9  al3740 = ( ( ( * (  self3735 ) ) .f_buf ) .f_al );
    if ( (  eq327 ( ( (  from3737 ) .f_line ) , ( (  to3739 ) .f_line ) ) ) ) {
        size_t  from_dash_bi3741 = ( (  i32_dash_size269 ) ( ( (  min476 ) ( ( (  from3737 ) .f_bi ) ,  ( (  to3739 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3742 = ( (  i32_dash_size269 ) ( ( (  max971 ) ( ( (  from3737 ) .f_bi ) ,  ( (  to3739 ) .f_bi ) ) ) ) );
        return ( (  clone1067 ) ( ( (  byte_dash_substr392 ) ( ( (  line958 ) ( (  self3735 ) ,  ( (  from3737 ) .f_line ) ) ) ,  (  from_dash_bi3741 ) ,  (  to_dash_bi3742 ) ) ) ,  (  al3740 ) ) );
    } else {
        struct Pos_20  from_dash_pos3743 = ( (  min322 ) ( (  from3737 ) ,  (  to3739 ) ) );
        struct Pos_20  to_dash_pos3744 = ( (  max325 ) ( (  from3737 ) ,  (  to3739 ) ) );
        struct List_11  temp1088 = ( (  mk290 ) ( (  al3740 ) ) );
        struct List_11 *  sb3745 = ( &temp1088 );
        struct StrView_21  first_dash_line3746 = ( (  line958 ) ( (  self3735 ) ,  ( (  from_dash_pos3743 ) .f_line ) ) );
        struct envunion103  temp1089 = ( (struct envunion103){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all345 , .env =  env->envinst40 } );
        ( temp1089.fun ( &temp1089.env ,  (  sb3745 ) ,  ( ( (  byte_dash_substr392 ) ( (  first_dash_line3746 ) ,  ( (  i32_dash_size269 ) ( ( (  from_dash_pos3743 ) .f_bi ) ) ) ,  ( (  num_dash_bytes991 ) ( (  first_dash_line3746 ) ) ) ) ) .f_contents ) ) );
        struct envunion1091  temp1090 = ( (struct envunion1091){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all345 , .env =  env->envinst40 } );
        ( temp1090.fun ( &temp1090.env ,  (  sb3745 ) ,  ( ( ( (  from_dash_charlike1092 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_696  temp1093 =  into_dash_iter698 ( ( (  to701 ) ( (  op_dash_add281 ( ( (  from_dash_pos3743 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  op_dash_sub819 ( ( (  to_dash_pos3744 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_279  __cond1094 =  next699 (&temp1093);
            if (  __cond1094 .tag == 0 ) {
                break;
            }
            int32_t  i3748 =  __cond1094 .stuff .Maybe_279_Just_s .field0;
            struct envunion1096  temp1095 = ( (struct envunion1096){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all345 , .env =  env->envinst40 } );
            ( temp1095.fun ( &temp1095.env ,  (  sb3745 ) ,  ( ( (  line958 ) ( (  self3735 ) ,  (  i3748 ) ) ) .f_contents ) ) );
            struct envunion1098  temp1097 = ( (struct envunion1098){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all345 , .env =  env->envinst40 } );
            ( temp1097.fun ( &temp1097.env ,  (  sb3745 ) ,  ( ( ( (  from_dash_charlike1092 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1100  temp1099 = ( (struct envunion1100){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all345 , .env =  env->envinst40 } );
        ( temp1099.fun ( &temp1099.env ,  (  sb3745 ) ,  ( ( (  byte_dash_substr392 ) ( ( (  line958 ) ( (  self3735 ) ,  ( (  to_dash_pos3744 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size269 ) ( ( (  to_dash_pos3744 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes959 ) ( ( (  to_dash_slice339 ) ( ( * (  sb3745 ) ) ) ) ) );
    }
}

static  bool   is_dash_none1101 (    struct Maybe_113  m1264 ) {
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

struct Tuple2_1103 {
    enum ChangesetInputType_90  field0;
    enum ChangesetInputType_90  field1;
};

static struct Tuple2_1103 Tuple2_1103_Tuple2 (  enum ChangesetInputType_90  field0 ,  enum ChangesetInputType_90  field1 ) {
    return ( struct Tuple2_1103 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1102 (    enum ChangesetInputType_90  l3606 ,    enum ChangesetInputType_90  r3608 ) {
    return ( {  struct Tuple2_1103  dref3609 = ( ( Tuple2_1103_Tuple2 ) ( (  l3606 ) ,  (  r3608 ) ) ) ;  dref3609 .field0 == ChangesetInputType_90_NoChangeset &&  dref3609 .field1 == ChangesetInputType_90_NoChangeset ? ( true ) :  dref3609 .field0 == ChangesetInputType_90_InputChangeset &&  dref3609 .field1 == ChangesetInputType_90_InputChangeset ? ( true ) :  dref3609 .field0 == ChangesetInputType_90_CustomChangeset &&  dref3609 .field1 == ChangesetInputType_90_CustomChangeset ? ( true ) : ( false ) ; } );
}

static  struct Changeset_26 *   get_dash_ptr1105 (    struct Slice_25  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp191 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic259 ) ( ( ( StrConcat_260_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string227 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_26 *  elem_dash_ptr1760 = ( (  offset_dash_ptr1041 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  struct Changeset_26 *   last_dash_ptr1104 (    struct Slice_25  s1938 ) {
    if ( (  eq246 ( ( (  s1938 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1076 ) ( ( (  from_dash_string227 ) ( ( "(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1105 ) ( (  s1938 ) ,  (  op_dash_sub311 ( ( (  s1938 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_25   to_dash_slice1106 (    struct List_24  l2126 ) {
    struct Changeset_26 *  ptr2127 = ( ( (  l2126 ) .f_elements ) .f_ptr );
    return ( (struct Slice_25) { .f_ptr = (  ptr2127 ) , .f_count = ( (  l2126 ) .f_count ) } );
}

struct envunion1108 {
    enum Unit_7  (*fun) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  );
    struct env15 env;
};

struct TypeSize_1114 {
    size_t  f_size;
};

static  struct TypeSize_1114   get_dash_typesize1113 (  ) {
    struct Action_19  temp1115;
    return ( (struct TypeSize_1114) { .f_size = ( sizeof( ( (  temp1115 ) ) ) ) } );
}

static  struct Action_19 *   cast_dash_ptr1116 (    void *  p359 ) {
    return ( (struct Action_19 * ) (  p359 ) );
}

static  struct Slice_18   allocate1112 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize1113 ) ( ) ) ) .f_size );
    struct Action_19 *  ptr1957 = ( (  cast_dash_ptr1116 ) ( ( ( malloc ) ( (  op_dash_mul252 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_18) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env1117 {
    struct Slice_18  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_1119 {
    struct Action_19  field0;
    int32_t  field1;
};

static struct Tuple2_1119 Tuple2_1119_Tuple2 (  struct Action_19  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1119 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1118 {
    enum Unit_7  (*fun) (  struct env1117*  ,    struct Tuple2_1119  );
    struct env1117 env;
};

static  struct Action_19 *   get_dash_ptr1122 (    struct Slice_18  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp191 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic259 ) ( ( ( StrConcat_260_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string227 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_19 *  elem_dash_ptr1760 = ( (  offset_dash_ptr1056 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set1121 (    struct Slice_18  slice1774 ,    size_t  i1776 ,    struct Action_19  x1778 ) {
    struct Action_19 *  ep1779 = ( (  get_dash_ptr1122 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1120 (   struct env1117* env ,    struct Tuple2_1119  dref2043 ) {
    return ( (  set1121 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size269 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct Zip_1124 {
    struct SliceIter_1051  f_left_dash_it;
    struct FromIter_273  f_right_dash_it;
};

static  struct Zip_1124   into_dash_iter1126 (    struct Zip_1124  self911 ) {
    return (  self911 );
}

struct Maybe_1127 {
    enum {
        Maybe_1127_None_t,
        Maybe_1127_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1119  field0;
        } Maybe_1127_Just_s;
    } stuff;
};

static struct Maybe_1127 Maybe_1127_Just (  struct Tuple2_1119  field0 ) {
    return ( struct Maybe_1127 ) { .tag = Maybe_1127_Just_t, .stuff = { .Maybe_1127_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1127   next1128 (    struct Zip_1124 *  self914 ) {
    struct Zip_1124  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1058  dref916 = ( (  next1059 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1058_None_t ) {
            return ( (struct Maybe_1127) { .tag = Maybe_1127_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1058_Just_t ) {
                struct Maybe_279  dref918 = ( (  next280 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_279_None_t ) {
                    return ( (struct Maybe_1127) { .tag = Maybe_1127_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_279_Just_t ) {
                        ( (  next1059 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next280 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1127_Just ) ( ( ( Tuple2_1119_Tuple2 ) ( ( dref916 .stuff .Maybe_1058_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_279_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each1123 (    struct Zip_1124  iterable1074 ,   struct envunion1118  fun1076 ) {
    struct Zip_1124  temp1125 = ( (  into_dash_iter1126 ) ( (  iterable1074 ) ) );
    struct Zip_1124 *  it1077 = ( &temp1125 );
    while ( ( true ) ) {
        struct Maybe_1127  dref1078 = ( (  next1128 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1127_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1127_Just_t ) {
                struct envunion1118  temp1129 = (  fun1076 );
                ( temp1129.fun ( &temp1129.env ,  ( dref1078 .stuff .Maybe_1127_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_1124   zip1130 (    struct Slice_18  left922 ,    struct FromIter_273  right924 ) {
    struct SliceIter_1051  left_dash_it925 = ( (  into_dash_iter1054 ) ( (  left922 ) ) );
    struct FromIter_273  right_dash_it926 = ( (  into_dash_iter285 ) ( (  right924 ) ) );
    return ( (struct Zip_1124) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   grow_dash_if_dash_full1111 (   struct env3* env ,    struct List_17 *  list2041 ) {
    if ( (  eq246 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate1112 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq246 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_18  new_dash_slice2042 = ( (  allocate1112 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul252 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env1117 envinst1117 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion1118  fun2046 = ( (struct envunion1118){ .fun = (  enum Unit_7  (*) (  struct env1117*  ,    struct Tuple2_1119  ) )lam1120 , .env =  envinst1117 } );
            ( (  for_dash_each1123 ) ( ( (  zip1130 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from286 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free1064 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add1109 (   struct env15* env ,    struct List_17 *  list2049 ,    struct Action_19  elem2051 ) {
    struct envunion16  temp1110 = ( (struct envunion16){ .fun = (  enum Unit_7  (*) (  struct env3*  ,    struct List_17 *  ) )grow_dash_if_dash_full1111 , .env =  env->envinst3 } );
    ( temp1110.fun ( &temp1110.env ,  (  list2049 ) ) );
    ( (  set1121 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add239 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  void *   cast_dash_ptr1137 (    struct Action_19 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1138 (    struct Action_19 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Action_19 *   zeroed1135 (  ) {
    struct Action_19 *  temp1136;
    struct Action_19 *  x570 = (  temp1136 );
    ( ( memset ) ( ( (  cast_dash_ptr1137 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of1138 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Action_19 *   null_dash_ptr1134 (  ) {
    return ( (  zeroed1135 ) ( ) );
}

static  struct Slice_18   empty1133 (  ) {
    return ( (struct Slice_18) { .f_ptr = ( (  null_dash_ptr1134 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_17   mk1132 (    enum CAllocator_9  al2031 ) {
    struct Slice_18  elements2032 = ( (  empty1133 ) ( ) );
    return ( (struct List_17) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_27   or_dash_else1139 (    struct Maybe_113  self1732 ,    struct Cursors_27  alt1734 ) {
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

struct TypeSize_1147 {
    size_t  f_size;
};

static  struct TypeSize_1147   get_dash_typesize1146 (  ) {
    struct Changeset_26  temp1148;
    return ( (struct TypeSize_1147) { .f_size = ( sizeof( ( (  temp1148 ) ) ) ) } );
}

static  struct Changeset_26 *   cast_dash_ptr1149 (    void *  p359 ) {
    return ( (struct Changeset_26 * ) (  p359 ) );
}

static  struct Slice_25   allocate1145 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize1146 ) ( ) ) ) .f_size );
    struct Changeset_26 *  ptr1957 = ( (  cast_dash_ptr1149 ) ( ( ( malloc ) ( (  op_dash_mul252 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_25) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env1150 {
    struct Slice_25  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_1152 {
    struct Changeset_26  field0;
    int32_t  field1;
};

static struct Tuple2_1152 Tuple2_1152_Tuple2 (  struct Changeset_26  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1152 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1151 {
    enum Unit_7  (*fun) (  struct env1150*  ,    struct Tuple2_1152  );
    struct env1150 env;
};

static  enum Unit_7   set1154 (    struct Slice_25  slice1774 ,    size_t  i1776 ,    struct Changeset_26  x1778 ) {
    struct Changeset_26 *  ep1779 = ( (  get_dash_ptr1105 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1153 (   struct env1150* env ,    struct Tuple2_1152  dref2043 ) {
    return ( (  set1154 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size269 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct Zip_1156 {
    struct SliceIter_1035  f_left_dash_it;
    struct FromIter_273  f_right_dash_it;
};

static  struct Zip_1156   into_dash_iter1158 (    struct Zip_1156  self911 ) {
    return (  self911 );
}

struct Maybe_1159 {
    enum {
        Maybe_1159_None_t,
        Maybe_1159_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1152  field0;
        } Maybe_1159_Just_s;
    } stuff;
};

static struct Maybe_1159 Maybe_1159_Just (  struct Tuple2_1152  field0 ) {
    return ( struct Maybe_1159 ) { .tag = Maybe_1159_Just_t, .stuff = { .Maybe_1159_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1159   next1160 (    struct Zip_1156 *  self914 ) {
    struct Zip_1156  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1044  dref916 = ( (  next1046 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1044_None_t ) {
            return ( (struct Maybe_1159) { .tag = Maybe_1159_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1044_Just_t ) {
                struct Maybe_279  dref918 = ( (  next280 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_279_None_t ) {
                    return ( (struct Maybe_1159) { .tag = Maybe_1159_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_279_Just_t ) {
                        ( (  next1046 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next280 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1159_Just ) ( ( ( Tuple2_1152_Tuple2 ) ( ( dref916 .stuff .Maybe_1044_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_279_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each1155 (    struct Zip_1156  iterable1074 ,   struct envunion1151  fun1076 ) {
    struct Zip_1156  temp1157 = ( (  into_dash_iter1158 ) ( (  iterable1074 ) ) );
    struct Zip_1156 *  it1077 = ( &temp1157 );
    while ( ( true ) ) {
        struct Maybe_1159  dref1078 = ( (  next1160 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1159_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1159_Just_t ) {
                struct envunion1151  temp1161 = (  fun1076 );
                ( temp1161.fun ( &temp1161.env ,  ( dref1078 .stuff .Maybe_1159_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_1156   zip1162 (    struct Slice_25  left922 ,    struct FromIter_273  right924 ) {
    struct SliceIter_1035  left_dash_it925 = ( (  into_dash_iter1039 ) ( (  left922 ) ) );
    struct FromIter_273  right_dash_it926 = ( (  into_dash_iter285 ) ( (  right924 ) ) );
    return ( (struct Zip_1156) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr1164 (    struct Changeset_26 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free1163 (    enum CAllocator_9  dref1959 ,    struct Slice_25  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1164 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   grow_dash_if_dash_full1144 (   struct env4* env ,    struct List_24 *  list2041 ) {
    if ( (  eq246 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate1145 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq246 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_25  new_dash_slice2042 = ( (  allocate1145 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul252 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env1150 envinst1150 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion1151  fun2046 = ( (struct envunion1151){ .fun = (  enum Unit_7  (*) (  struct env1150*  ,    struct Tuple2_1152  ) )lam1153 , .env =  envinst1150 } );
            ( (  for_dash_each1155 ) ( ( (  zip1162 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from286 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free1163 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add1142 (   struct env22* env ,    struct List_24 *  list2049 ,    struct Changeset_26  elem2051 ) {
    struct envunion23  temp1143 = ( (struct envunion23){ .fun = (  enum Unit_7  (*) (  struct env4*  ,    struct List_24 *  ) )grow_dash_if_dash_full1144 , .env =  env->envinst4 } );
    ( temp1143.fun ( &temp1143.env ,  (  list2049 ) ) );
    ( (  set1154 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add239 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Pos_20   action_dash_fwd1166 (   struct env96* env ,    struct TextBuf_88 *  self3698 ,    struct Action_19  action3700 ) {
    struct envunion97  temp1167 = ( (struct envunion97){ .fun = (  enum Unit_7  (*) (  struct env85*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action321 , .env =  env->envinst85 } );
    ( temp1167.fun ( &temp1167.env ,  (  self3698 ) ,  ( (  action3700 ) .f_from ) ,  ( (  action3700 ) .f_to_dash_bwd ) ,  ( (  action3700 ) .f_fwd ) ) );
    return ( (  action3700 ) .f_to_dash_fwd );
}

static  struct Maybe_113   change1031 (   struct env104* env ,    struct TextBuf_88 *  self3765 ,    struct Pos_20  from3767 ,    struct Pos_20  to3769 ,    struct StrView_21  bytes3771 ,    struct Maybe_113  before_dash_cursors3773 ) {
    struct Pos_20  from_dash_pos3774 = ( (  min322 ) ( (  from3767 ) ,  (  to3769 ) ) );
    struct Pos_20  to_dash_pos3775 = ( (  max325 ) ( (  from3767 ) ,  (  to3769 ) ) );
    struct Actions_89 *  actions3776 = ( & ( ( * (  self3765 ) ) .f_actions ) );
    ( (  trim_dash_actions1032 ) ( (  actions3776 ) ) );
    struct envunion108  temp1086 = ( (struct envunion108){ .fun = (  struct StrView_21  (*) (  struct env102*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ) )str_dash_between1087 , .env =  env->envinst102 } );
    struct Action_19  action3777 = ( (struct Action_19) { .f_from = (  from3767 ) , .f_fwd = ( (  clone1067 ) ( (  bytes3771 ) ,  ( ( * (  self3765 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1069 ) ( (  self3765 ) ,  (  bytes3771 ) ,  (  from_dash_pos3774 ) ) ) , .f_bwd = ( temp1086.fun ( &temp1086.env ,  (  self3765 ) ,  (  from_dash_pos3774 ) ,  (  to_dash_pos3775 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3775 ) } );
    enum CAllocator_9  al3778 = ( ( ( * (  actions3776 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in3779 = ( (  is_dash_none1101 ) ( (  before_dash_cursors3773 ) ) );
    if ( ( (  eq1102 ( ( ( ( * (  self3765 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_90_CustomChangeset ) ) ) || ( (  eq1102 ( ( ( ( * (  self3765 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_90_InputChangeset ) ) ) && (  is_dash_typed_dash_in3779 ) ) ) ) {
        struct Changeset_26 *  last_dash_changeset3780 = ( (  last_dash_ptr1104 ) ( ( (  to_dash_slice1106 ) ( ( ( * (  actions3776 ) ) .f_list ) ) ) ) );
        struct envunion1108  temp1107 = ( (struct envunion1108){ .fun = (  enum Unit_7  (*) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  ) )add1109 , .env =  env->envinst15 } );
        ( temp1107.fun ( &temp1107.env ,  ( & ( ( * (  last_dash_changeset3780 ) ) .f_parts ) ) ,  (  action3777 ) ) );
    } else {
        struct Changeset_26  temp1131 = ( (struct Changeset_26) { .f_parts = ( (  mk1132 ) ( (  al3778 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1139 ) ( (  before_dash_cursors3773 ) ,  ( (struct Cursors_27) { .f_cur = (  from3767 ) , .f_sel = ( (  eq326 ( (  from3767 ) , (  to3769 ) ) ) ? ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) : ( ( Maybe_28_Just ) ( (  to3769 ) ) ) ) } ) ) ) } );
        struct Changeset_26 *  changeset3781 = ( &temp1131 );
        struct envunion106  temp1140 = ( (struct envunion106){ .fun = (  enum Unit_7  (*) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  ) )add1109 , .env =  env->envinst15 } );
        ( temp1140.fun ( &temp1140.env ,  ( & ( ( * (  changeset3781 ) ) .f_parts ) ) ,  (  action3777 ) ) );
        struct envunion107  temp1141 = ( (struct envunion107){ .fun = (  enum Unit_7  (*) (  struct env22*  ,    struct List_24 *  ,    struct Changeset_26  ) )add1142 , .env =  env->envinst22 } );
        ( temp1141.fun ( &temp1141.env ,  ( & ( ( * (  actions3776 ) ) .f_list ) ) ,  ( * (  changeset3781 ) ) ) );
        (*  actions3776 ) .f_input_dash_changeset = ( (  is_dash_typed_dash_in3779 ) ? ( ChangesetInputType_90_InputChangeset ) : ( ChangesetInputType_90_NoChangeset ) );
        (*  actions3776 ) .f_cur = (  op_dash_add239 ( ( ( * (  actions3776 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion105  temp1165 = ( (struct envunion105){ .fun = (  struct Pos_20  (*) (  struct env96*  ,    struct TextBuf_88 *  ,    struct Action_19  ) )action_dash_fwd1166 , .env =  env->envinst96 } );
    struct Pos_20  to_dash_fwd3782 = ( temp1165.fun ( &temp1165.env ,  (  self3765 ) ,  (  action3777 ) ) );
    if ( (  cmp191 ( ( (  num_dash_bytes991 ) ( ( (  action3777 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_20  to_dash_fwd3783 = ( (  left_dash_pos990 ) ( (  self3765 ) ,  (  to_dash_fwd3782 ) ) );
        return ( ( Maybe_113_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3783 ) , .f_sel = ( ( Maybe_28_Just ) ( ( (  action3777 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_113_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3782 ) , .f_sel = ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) } ) ) );
    }
}

static  enum Unit_7   add_dash_str_dash_at_dash_char1029 (   struct env111* env ,    struct Pane_126 *  self4044 ,    struct StrView_21  s4046 ) {
    struct Pos_20  cur4047 = ( ( * (  self4044 ) ) .f_cursor );
    struct envunion112  temp1030 = ( (struct envunion112){ .fun = (  struct Maybe_113  (*) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  ) )change1031 , .env =  env->envinst104 } );
    ( temp1030.fun ( &temp1030.env ,  ( ( * (  self4044 ) ) .f_buf ) ,  (  cur4047 ) ,  (  cur4047 ) ,  (  s4046 ) ,  ( (struct Maybe_113) { .tag = Maybe_113_None_t } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   indent_dash_at1173 (   struct env122* env ,    struct Pane_126 *  self4082 ,    int32_t  line4084 ) {
    struct envunion123  temp1174 = ( (struct envunion123){ .fun = (  struct Maybe_113  (*) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  ) )change1031 , .env =  env->envinst104 } );
    ( temp1174.fun ( &temp1174.env ,  ( ( * (  self4082 ) ) .f_buf ) ,  ( (struct Pos_20) { .f_line = (  line4084 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ,  ( (struct Pos_20) { .f_line = (  line4084 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ,  ( (  from_dash_charlike1092 ) ( ( "\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_113) { .tag = Maybe_113_None_t } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   indent_dash_at_dash_current1169 (   struct env133* env ,    struct Pane_126 *  self4103 ,    int32_t  indent4105 ) {
    struct RangeIter_696  temp1170 =  into_dash_iter698 ( ( (  to701 ) ( (  from_dash_integral48 ( 1 ) ) ,  (  indent4105 ) ) ) );
    while (true) {
        struct Maybe_279  __cond1171 =  next699 (&temp1170);
        if (  __cond1171 .tag == 0 ) {
            break;
        }
        int32_t  dref4106 =  __cond1171 .stuff .Maybe_279_Just_s .field0;
        struct envunion134  temp1172 = ( (struct envunion134){ .fun = (  enum Unit_7  (*) (  struct env122*  ,    struct Pane_126 *  ,    int32_t  ) )indent_dash_at1173 , .env =  env->envinst122 } );
        ( temp1172.fun ( &temp1172.env ,  (  self4103 ) ,  ( ( ( * (  self4103 ) ) .f_cursor ) .f_line ) ) );
        ( (  move_dash_right996 ) ( (  self4103 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   move_dash_to_dash_beginning1175 (    struct Pane_126 *  self4032 ) {
    struct Pos_20  temp1176 = ( ( * (  self4032 ) ) .f_cursor );
    temp1176 .  f_bi = (  from_dash_integral48 ( 0 ) );
    ( (  set_dash_cursors952 ) ( (  self4032 ) ,  ( temp1176 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_953_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

struct envunion1179 {
    enum Unit_7  (*fun) (  struct env133*  ,    struct Pane_126 *  ,    int32_t  );
    struct env133 env;
};

enum MoveDirection_1181 {
    MoveDirection_1181_MoveFwd,
    MoveDirection_1181_MoveBwd,
};

enum MoveTarget_1182 {
    MoveTarget_1182_NextWordStart,
    MoveTarget_1182_NextWordEnd,
};

static  struct Pos_20   own1184 (    struct Pos_20  x1251 ) {
    return (  x1251 );
}

struct env1185 {
    struct Pane_126 *  pane3993;
    ;
    enum MoveDirection_1181  dir3995;
    ;
    struct Pos_20 *  prev3998;
};

static  bool   is_dash_at_dash_line_dash_end1187 (    struct Pane_126 *  pane3975 ,    struct Pos_20  pos3977 ) {
    return (  eq246 ( ( (  i32_dash_size269 ) ( ( (  pos3977 ) .f_bi ) ) ) , ( (  num_dash_bytes991 ) ( ( (  line958 ) ( ( ( * (  pane3975 ) ) .f_buf ) ,  ( (  pos3977 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1186 (    struct Pane_126 *  pane3980 ) {
    return ( (  is_dash_at_dash_line_dash_end1187 ) ( (  pane3980 ) ,  ( ( * (  pane3980 ) ) .f_cursor ) ) );
}

struct envunion1189 {
    enum Unit_7  (*fun) (  struct env1185*  );
    struct env1185 env;
};

static  enum Unit_7   advance1190 (   struct env1185* env ) {
    (* env->prev3998 ) = ( ( * ( env->pane3993 ) ) .f_cursor );
    enum MoveDirection_1181  dref4000 = ( env->dir3995 );
    switch (  dref4000 ) {
        case MoveDirection_1181_MoveFwd : {
            ( (  move_dash_right996 ) ( ( env->pane3993 ) ) );
            break;
        }
        case MoveDirection_1181_MoveBwd : {
            ( (  move_dash_left951 ) ( ( env->pane3993 ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

enum CharType_1194 {
    CharType_1194_CharSpace,
    CharType_1194_CharWord,
    CharType_1194_CharPunctuation,
};

struct Tuple2_1195 {
    enum CharType_1194  field0;
    enum CharType_1194  field1;
};

static struct Tuple2_1195 Tuple2_1195_Tuple2 (  enum CharType_1194  field0 ,  enum CharType_1194  field1 ) {
    return ( struct Tuple2_1195 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1193 (    enum CharType_1194  l3799 ,    enum CharType_1194  r3801 ) {
    struct Tuple2_1195  dref3802 = ( ( Tuple2_1195_Tuple2 ) ( (  l3799 ) ,  (  r3801 ) ) );
    if (  dref3802 .field0 == CharType_1194_CharSpace &&  dref3802 .field1 == CharType_1194_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3802 .field0 == CharType_1194_CharWord &&  dref3802 .field1 == CharType_1194_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3802 .field0 == CharType_1194_CharPunctuation &&  dref3802 .field1 == CharType_1194_CharPunctuation ) {
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

static  struct Char_57   min1200 (    struct Char_57  l1236 ,    struct Char_57  r1238 ) {
    if ( (  cmp786 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Char_57   max1201 (    struct Char_57  l1315 ,    struct Char_57  r1317 ) {
    if ( (  cmp786 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  bool   between1199 (    struct Char_57  c1337 ,    struct Char_57  l1339 ,    struct Char_57  r1341 ) {
    struct Char_57  from1342 = ( (  min1200 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Char_57  to1343 = ( (  max1201 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp786 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp786 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_alpha1198 (    struct Char_57  c2388 ) {
    return ( ( (  cmp191 ( ( (  c2388 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between1199 ) ( (  c2388 ) ,  ( (  from_dash_charlike228 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1199 ) ( (  c2388 ) ,  ( (  from_dash_charlike228 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_digit1202 (    struct Char_57  c2391 ) {
    return ( (  eq246 ( ( (  c2391 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1199 ) ( (  c2391 ) ,  ( (  from_dash_charlike228 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1197 (    struct Char_57  c2394 ) {
    return ( ( (  is_dash_alpha1198 ) ( (  c2394 ) ) ) || ( (  is_dash_digit1202 ) ( (  c2394 ) ) ) );
}

static  bool   is_dash_whitespace1203 (    struct Char_57  c2379 ) {
    return ( ( (  eq410 ( (  c2379 ) , ( (  from_dash_charlike228 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq410 ( (  c2379 ) , ( (  from_dash_charlike228 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq410 ( (  c2379 ) , ( (  from_dash_charlike228 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_1194   char_dash_type1196 (    struct Char_57  c3805 ) {
    if ( ( ( ( (  is_dash_alphanumeric1197 ) ( (  c3805 ) ) ) || (  eq410 ( (  c3805 ) , ( (  from_dash_charlike228 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq410 ( (  c3805 ) , ( (  from_dash_charlike228 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1194_CharWord );
    } else {
        if ( ( (  is_dash_whitespace1203 ) ( (  c3805 ) ) ) ) {
            return ( CharType_1194_CharSpace );
        } else {
            return ( CharType_1194_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1192 (    struct Char_57  l3808 ,    struct Char_57  r3810 ) {
    return ( !  eq1193 ( ( (  char_dash_type1196 ) ( (  l3808 ) ) ) , ( (  char_dash_type1196 ) ( (  r3810 ) ) ) ) );
}

static  struct Char_57   or_dash_else1205 (    struct Maybe_613  self1732 ,    struct Char_57  alt1734 ) {
    struct Maybe_613  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_613_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_613_Just_t ) {
            return ( dref1735 .stuff .Maybe_613_Just_s .field0 );
        }
    }
}

static  struct Maybe_613   head1206 (    struct StrViewIter_610  it1142 ) {
    struct StrViewIter_610  temp1207 = ( (  into_dash_iter612 ) ( (  it1142 ) ) );
    return ( (  next614 ) ( ( &temp1207 ) ) );
}

static  struct Char_57   char_dash_at1204 (    struct Pane_126 *  pane3863 ,    struct Pos_20  pos3865 ) {
    struct StrView_21  line3866 = ( (  line958 ) ( ( ( * (  pane3863 ) ) .f_buf ) ,  ( (  pos3865 ) .f_line ) ) );
    return ( (  or_dash_else1205 ) ( ( (  head1206 ) ( ( (  chars615 ) ( ( (  byte_dash_substr392 ) ( (  line3866 ) ,  ( (  i32_dash_size269 ) ( ( (  pos3865 ) .f_bi ) ) ) ,  ( (  num_dash_bytes991 ) ( (  line3866 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
}

static  enum Unit_7   print1209 (    struct StrView_21  s1701 ) {
    ( (  for_dash_each609 ) ( ( (  chars615 ) ( (  s1701 ) ) ) ,  (  printf_dash_char211 ) ) );
    return ( Unit_7_Unit );
}

static  bool   undefined1210 (  ) {
    bool  temp1211;
    return (  temp1211 );
}

static  bool   todo1208 (  ) {
    ( (  print1209 ) ( ( (  from_dash_string227 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined1210 ) ( ) );
}

static  bool   reached_dash_target1191 (    struct Pane_126 *  pane3985 ,    enum MoveTarget_1182  target3987 ,    struct Pos_20  prev3989 ) {
    return ( {  enum MoveTarget_1182  dref3990 = (  target3987 ) ;  dref3990 == MoveTarget_1182_NextWordStart ? ( ( (  is_dash_word_dash_boundary1192 ) ( ( (  char_dash_at1204 ) ( (  pane3985 ) ,  (  prev3989 ) ) ) ,  ( (  char_dash_at1204 ) ( (  pane3985 ) ,  ( ( * (  pane3985 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1193 ( ( (  char_dash_type1196 ) ( ( (  char_dash_at1204 ) ( (  pane3985 ) ,  ( ( * (  pane3985 ) ) .f_cursor ) ) ) ) ) , ( CharType_1194_CharSpace ) ) ) ) ) :  dref3990 == MoveTarget_1182_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1192 ) ( ( (  char_dash_at1204 ) ( (  pane3985 ) ,  (  prev3989 ) ) ) ,  ( (  char_dash_at1204 ) ( (  pane3985 ) ,  ( ( * (  pane3985 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1193 ( ( (  char_dash_type1196 ) ( ( (  char_dash_at1204 ) ( (  pane3985 ) ,  (  prev3989 ) ) ) ) ) , ( CharType_1194_CharSpace ) ) ) ) ) : ( (  todo1208 ) ( ) ) ; } );
}

struct envunion1213 {
    enum Unit_7  (*fun) (  struct env1185*  );
    struct env1185 env;
};

struct envunion1215 {
    enum Unit_7  (*fun) (  struct env1185*  );
    struct env1185 env;
};

static  enum Unit_7   advance_dash_word1180 (    struct Pane_126 *  pane3993 ,    enum MoveDirection_1181  dir3995 ,    enum MoveTarget_1182  target3997 ) {
    struct Pos_20  temp1183 = ( (  own1184 ) ( ( ( * (  pane3993 ) ) .f_cursor ) ) );
    struct Pos_20 *  prev3998 = ( &temp1183 );
    struct env1185 envinst1185 = {
        .pane3993 =  pane3993 ,
        .dir3995 =  dir3995 ,
        .prev3998 =  prev3998 ,
    };
    struct Pos_20  sel4001 = ( ( * (  pane3993 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4002 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1186 ) ( (  pane3993 ) ) );
    struct envunion1189  temp1188 = ( (struct envunion1189){ .fun = (  enum Unit_7  (*) (  struct env1185*  ) )advance1190 , .env =  envinst1185 } );
    ( temp1188.fun ( &temp1188.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4002 ) || ( (  reached_dash_target1191 ) ( (  pane3993 ) ,  (  target3997 ) ,  ( * (  prev3998 ) ) ) ) ) ) {
        sel4001 = ( ( * (  pane3993 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1186 ) ( (  pane3993 ) ) ) ) {
        if ( (  eq326 ( ( ( * (  pane3993 ) ) .f_cursor ) , ( * (  prev3998 ) ) ) ) ) {
            return ( Unit_7_Unit );
        }
        struct envunion1213  temp1212 = ( (struct envunion1213){ .fun = (  enum Unit_7  (*) (  struct env1185*  ) )advance1190 , .env =  envinst1185 } );
        ( temp1212.fun ( &temp1212.env ) );
        sel4001 = ( ( * (  pane3993 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1215  temp1214 = ( (struct envunion1215){ .fun = (  enum Unit_7  (*) (  struct env1185*  ) )advance1190 , .env =  envinst1185 } );
        ( temp1214.fun ( &temp1214.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1186 ) ( (  pane3993 ) ) ) || ( (  reached_dash_target1191 ) ( (  pane3993 ) ,  (  target3997 ) ,  ( * (  prev3998 ) ) ) ) ) ) {
            enum MoveDirection_1181  dref4003 = (  dir3995 );
            switch (  dref4003 ) {
                case MoveDirection_1181_MoveFwd : {
                    ( (  move_dash_left951 ) ( (  pane3993 ) ) );
                    break;
                }
                case MoveDirection_1181_MoveBwd : {
                    ( (  move_dash_right996 ) ( (  pane3993 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq326 ( ( * (  prev3998 ) ) , ( ( * (  pane3993 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel987 ) ( (  pane3993 ) ,  ( ( Maybe_28_Just ) ( (  sel4001 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  size_t   size1220 (    struct List_24 *  l2133 ) {
    return ( ( * (  l2133 ) ) .f_count );
}

static  struct Changeset_26 *   get_dash_ptr1223 (    struct List_24 *  list2001 ,    size_t  i2003 ) {
    if ( ( (  cmp191 ( (  i2003 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i2003 ) , ( ( * (  list2001 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic259 ) ( ( ( StrConcat_260_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2003 ) ) ) ,  ( (  from_dash_string227 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2001 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1105 ) ( ( ( * (  list2001 ) ) .f_elements ) ,  (  i2003 ) ) );
}

static  struct Changeset_26   get1222 (    struct List_24 *  list2011 ,    size_t  i2013 ) {
    return ( * ( (  get_dash_ptr1223 ) ( (  list2011 ) ,  (  i2013 ) ) ) );
}

static  struct Changeset_26   elem_dash_get1221 (    struct List_24  self2081 ,    size_t  k2083 ) {
    return ( (  get1222 ) ( ( & (  self2081 ) ) ,  (  k2083 ) ) );
}

static  struct Action_19   undefined1232 (  ) {
    struct Action_19  temp1233;
    return (  temp1233 );
}

static  struct Action_19   or_dash_fail1231 (    struct Maybe_1058  x1725 ,    struct StrConcat_260  errmsg1727 ) {
    struct Maybe_1058  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_1058_None_t ) {
        ( (  panic259 ) ( (  errmsg1727 ) ) );
        return ( (  undefined1232 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_1058_Just_t ) {
            return ( dref1728 .stuff .Maybe_1058_Just_s .field0 );
        }
    }
}

static  struct Maybe_1058   try_dash_get1234 (    struct Slice_18  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp191 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp191 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1058) { .tag = Maybe_1058_None_t } );
    }
    struct Action_19 *  elem_dash_ptr1766 = ( (  offset_dash_ptr1056 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_1058_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  struct Action_19   get1230 (    struct Slice_18  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail1231 ) ( ( (  try_dash_get1234 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_260_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string227 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_19   elem_dash_get1229 (    struct Slice_18  self1867 ,    size_t  idx1869 ) {
    return ( (  get1230 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

static  struct Action_19   last1228 (    struct Slice_18  s1935 ) {
    if ( (  eq246 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1076 ) ( ( (  from_dash_string227 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1229 ( (  s1935 ) , (  op_dash_sub311 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_18   to_dash_slice1235 (    struct List_17  l2126 ) {
    struct Action_19 *  ptr2127 = ( ( (  l2126 ) .f_elements ) .f_ptr );
    return ( (struct Slice_18) { .f_ptr = (  ptr2127 ) , .f_count = ( (  l2126 ) .f_count ) } );
}

static  struct Maybe_113   redo1219 (   struct env100* env ,    struct TextBuf_88 *  self3725 ) {
    ( (  flush_dash_insert_dash_action1005 ) ( (  self3725 ) ) );
    struct Actions_89 *  actions3726 = ( & ( ( * (  self3725 ) ) .f_actions ) );
    if ( (  cmp191 ( ( ( * (  actions3726 ) ) .f_cur ) , ( (  size1220 ) ( ( & ( ( * (  actions3726 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_113) { .tag = Maybe_113_None_t } );
    }
    struct Changeset_26  changeset3727 = (  elem_dash_get1221 ( ( ( * (  actions3726 ) ) .f_list ) , ( ( * (  actions3726 ) ) .f_cur ) ) );
    struct Pos_20  temp1224;
    struct Pos_20  to_dash_fwd3728 = (  temp1224 );
    struct SliceIter_1051  temp1225 =  into_dash_iter1053 ( ( (  changeset3727 ) .f_parts ) );
    while (true) {
        struct Maybe_1058  __cond1226 =  next1059 (&temp1225);
        if (  __cond1226 .tag == 0 ) {
            break;
        }
        struct Action_19  action3730 =  __cond1226 .stuff .Maybe_1058_Just_s .field0;
        struct envunion101  temp1227 = ( (struct envunion101){ .fun = (  struct Pos_20  (*) (  struct env96*  ,    struct TextBuf_88 *  ,    struct Action_19  ) )action_dash_fwd1166 , .env =  env->envinst96 } );
        to_dash_fwd3728 = ( temp1227.fun ( &temp1227.env ,  (  self3725 ) ,  (  action3730 ) ) );
    }
    (*  actions3726 ) .f_cur = (  op_dash_add239 ( ( ( * (  actions3726 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_19  last_dash_action3731 = ( (  last1228 ) ( ( (  to_dash_slice1235 ) ( ( (  changeset3727 ) .f_parts ) ) ) ) );
    if ( (  cmp191 ( ( (  num_dash_bytes991 ) ( ( (  last_dash_action3731 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_20  to_dash_fwd3732 = ( (  left_dash_pos990 ) ( (  self3725 ) ,  (  to_dash_fwd3728 ) ) );
        return ( ( Maybe_113_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3732 ) , .f_sel = ( ( Maybe_28_Just ) ( ( (  last_dash_action3731 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_113_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3728 ) , .f_sel = ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) } ) ) );
    }
}

struct env1237 {
    struct Pane_126 *  self4060;
    ;
};

struct envunion1238 {
    enum Unit_7  (*fun) (  struct env1237*  ,    struct Cursors_27  );
    struct env1237 env;
};

static  enum Unit_7   if_dash_just1236 (    struct Maybe_113  x1291 ,   struct envunion1238  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion1238  temp1239 = (  fun1293 );
        ( temp1239.fun ( &temp1239.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1240 (   struct env1237* env ,    struct Cursors_27  cursors4063 ) {
    ( (  set_dash_cursors952 ) ( ( env->self4060 ) ,  ( (  cursors4063 ) .f_cur ) ,  ( (  cursors4063 ) .f_sel ) ,  ( CursorMovement_953_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   redo1217 (   struct env118* env ,    struct Pane_126 *  self4060 ) {
    struct envunion119  temp1218 = ( (struct envunion119){ .fun = (  struct Maybe_113  (*) (  struct env100*  ,    struct TextBuf_88 *  ) )redo1219 , .env =  env->envinst100 } );
    struct Maybe_113  mcursors4061 = ( temp1218.fun ( &temp1218.env ,  ( ( * (  self4060 ) ) .f_buf ) ) );
    struct env1237 envinst1237 = {
        .self4060 =  self4060 ,
    };
    ( (  if_dash_just1236 ) ( (  mcursors4061 ) ,  ( (struct envunion1238){ .fun = (  enum Unit_7  (*) (  struct env1237*  ,    struct Cursors_27  ) )lam1240 , .env =  envinst1237 } ) ) );
    return ( Unit_7_Unit );
}

struct SliceReversedIter_1246 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1246   into_dash_iter1247 (    struct SliceReversedIter_1246  self1898 ) {
    return (  self1898 );
}

static  struct SliceReversedIter_1246   reversed1248 (    struct Slice_18  slice1895 ) {
    return ( (struct SliceReversedIter_1246) { .f_slice = (  slice1895 ) , .f_current_dash_offset = ( (  slice1895 ) .f_count ) } );
}

static  struct Maybe_1058   next1250 (    struct SliceReversedIter_1246 *  self1901 ) {
    size_t  off1902 = ( ( * (  self1901 ) ) .f_current_dash_offset );
    if ( (  eq246 ( (  off1902 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1058) { .tag = Maybe_1058_None_t } );
    }
    (*  self1901 ) .f_current_dash_offset = (  op_dash_sub311 ( (  off1902 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1058_Just ) ( (  elem_dash_get1229 ( ( ( * (  self1901 ) ) .f_slice ) , ( ( * (  self1901 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_20   action_dash_bwd1252 (   struct env94* env ,    struct TextBuf_88 *  self3693 ,    struct Action_19  action3695 ) {
    struct envunion95  temp1253 = ( (struct envunion95){ .fun = (  enum Unit_7  (*) (  struct env85*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action321 , .env =  env->envinst85 } );
    ( temp1253.fun ( &temp1253.env ,  (  self3693 ) ,  ( (  action3695 ) .f_from ) ,  ( (  action3695 ) .f_to_dash_fwd ) ,  ( (  action3695 ) .f_bwd ) ) );
    return ( (  action3695 ) .f_to_dash_bwd );
}

static  struct Maybe_113   undo1244 (   struct env98* env ,    struct TextBuf_88 *  self3718 ) {
    ( (  flush_dash_insert_dash_action1005 ) ( (  self3718 ) ) );
    struct Actions_89 *  actions3719 = ( & ( ( * (  self3718 ) ) .f_actions ) );
    if ( (  eq246 ( ( ( * (  actions3719 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_113) { .tag = Maybe_113_None_t } );
    }
    (*  actions3719 ) .f_cur = (  op_dash_sub311 ( ( ( * (  actions3719 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_26  changeset3720 = (  elem_dash_get1221 ( ( ( * (  actions3719 ) ) .f_list ) , ( ( * (  actions3719 ) ) .f_cur ) ) );
    struct SliceReversedIter_1246  temp1245 =  into_dash_iter1247 ( ( (  reversed1248 ) ( ( (  to_dash_slice1235 ) ( ( (  changeset3720 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1058  __cond1249 =  next1250 (&temp1245);
        if (  __cond1249 .tag == 0 ) {
            break;
        }
        struct Action_19  action3722 =  __cond1249 .stuff .Maybe_1058_Just_s .field0;
        struct envunion99  temp1251 = ( (struct envunion99){ .fun = (  struct Pos_20  (*) (  struct env94*  ,    struct TextBuf_88 *  ,    struct Action_19  ) )action_dash_bwd1252 , .env =  env->envinst94 } );
        ( temp1251.fun ( &temp1251.env ,  (  self3718 ) ,  (  action3722 ) ) );
    }
    return ( ( Maybe_113_Just ) ( ( (  changeset3720 ) .f_before_dash_cursors ) ) );
}

struct env1255 {
    struct Pane_126 *  self4054;
    ;
};

struct envunion1256 {
    enum Unit_7  (*fun) (  struct env1255*  ,    struct Cursors_27  );
    struct env1255 env;
};

static  enum Unit_7   if_dash_just1254 (    struct Maybe_113  x1291 ,   struct envunion1256  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion1256  temp1257 = (  fun1293 );
        ( temp1257.fun ( &temp1257.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1258 (   struct env1255* env ,    struct Cursors_27  cursors4057 ) {
    ( (  set_dash_cursors952 ) ( ( env->self4054 ) ,  ( (  cursors4057 ) .f_cur ) ,  ( (  cursors4057 ) .f_sel ) ,  ( CursorMovement_953_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   undo1242 (   struct env116* env ,    struct Pane_126 *  self4054 ) {
    struct envunion117  temp1243 = ( (struct envunion117){ .fun = (  struct Maybe_113  (*) (  struct env98*  ,    struct TextBuf_88 *  ) )undo1244 , .env =  env->envinst98 } );
    struct Maybe_113  mcursors4055 = ( temp1243.fun ( &temp1243.env ,  ( ( * (  self4054 ) ) .f_buf ) ) );
    struct env1255 envinst1255 = {
        .self4054 =  self4054 ,
    };
    ( (  if_dash_just1254 ) ( (  mcursors4055 ) ,  ( (struct envunion1256){ .fun = (  enum Unit_7  (*) (  struct env1255*  ,    struct Cursors_27  ) )lam1258 , .env =  envinst1255 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Tuple2_150   minmax1262 (    struct Pos_20  l1329 ,    struct Pos_20  r1331 ) {
    return ( (  cmp323 ( (  l1329 ) , (  r1331 ) ) == 0 ) ? ( ( Tuple2_150_Tuple2 ) ( (  l1329 ) ,  (  r1331 ) ) ) : ( ( Tuple2_150_Tuple2 ) ( (  r1331 ) ,  (  l1329 ) ) ) );
}

static  struct Pos_20   or_dash_else1263 (    struct Maybe_28  self1732 ,    struct Pos_20  alt1734 ) {
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

static  struct Pos_20   fst1264 (    struct Tuple2_150  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_20   snd1265 (    struct Tuple2_150  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tuple2_150   selection1261 (    struct Pane_126 *  self4066 ) {
    struct Tuple2_150  from_dash_to4067 = ( (  minmax1262 ) ( ( (  or_dash_else1263 ) ( ( ( * (  self4066 ) ) .f_sel ) ,  ( ( * (  self4066 ) ) .f_cursor ) ) ) ,  ( ( * (  self4066 ) ) .f_cursor ) ) );
    struct Pos_20  from4068 = ( (  fst1264 ) ( (  from_dash_to4067 ) ) );
    struct Pos_20  to4069 = ( (  right_dash_pos997 ) ( ( ( * (  self4066 ) ) .f_buf ) ,  ( (  snd1265 ) ( (  from_dash_to4067 ) ) ) ) );
    return ( ( Tuple2_150_Tuple2 ) ( (  from4068 ) ,  (  to4069 ) ) );
}

struct env1268 {
    struct Editor_143 *  ed4164;
    ;
};

struct envunion1269 {
    enum Unit_7  (*fun) (  struct env1268*  ,    struct StrView_21  );
    struct env1268 env;
};

static  enum Unit_7   if_dash_just1267 (    struct Maybe_144  x1291 ,   struct envunion1269  fun1293 ) {
    struct Maybe_144  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_144_Just_t ) {
        struct envunion1269  temp1270 = (  fun1293 );
        ( temp1270.fun ( &temp1270.env ,  ( dref1294 .stuff .Maybe_144_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_144_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1271 (   struct env1268* env ,    struct StrView_21  cp4168 ) {
    ( (  free945 ) ( (  cp4168 ) ,  ( ( * ( env->ed4164 ) ) .f_al ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   copy_dash_selection_dash_to_dash_clipboard1260 (   struct env135* env ,    struct Editor_143 *  ed4164 ) {
    struct Tuple2_150  from_dash_to4165 = ( (  selection1261 ) ( ( (  pane995 ) ( (  ed4164 ) ) ) ) );
    struct envunion136  temp1266 = ( (struct envunion136){ .fun = (  struct StrView_21  (*) (  struct env102*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ) )str_dash_between1087 , .env =  env->envinst102 } );
    struct StrView_21  cpd4166 = ( temp1266.fun ( &temp1266.env ,  ( ( ( * (  ed4164 ) ) .f_pane ) .f_buf ) ,  ( (  fst1264 ) ( (  from_dash_to4165 ) ) ) ,  ( (  snd1265 ) ( (  from_dash_to4165 ) ) ) ) );
    struct env1268 envinst1268 = {
        .ed4164 =  ed4164 ,
    };
    ( (  if_dash_just1267 ) ( ( ( * (  ed4164 ) ) .f_clipboard ) ,  ( (struct envunion1269){ .fun = (  enum Unit_7  (*) (  struct env1268*  ,    struct StrView_21  ) )lam1271 , .env =  envinst1268 } ) ) );
    (*  ed4164 ) .f_clipboard = ( ( Maybe_144_Just ) ( (  cpd4166 ) ) );
    return ( Unit_7_Unit );
}

struct env1276 {
    struct Pane_126 *  self4072;
    ;
};

struct envunion1277 {
    enum Unit_7  (*fun) (  struct env1276*  ,    struct Cursors_27  );
    struct env1276 env;
};

static  enum Unit_7   if_dash_just1275 (    struct Maybe_113  x1291 ,   struct envunion1277  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion1277  temp1278 = (  fun1293 );
        ( temp1278.fun ( &temp1278.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1279 (   struct env1276* env ,    struct Cursors_27  cursors4079 ) {
    ( (  set_dash_cursors952 ) ( ( env->self4072 ) ,  ( (  cursors4079 ) .f_cur ) ,  ( (  cursors4079 ) .f_sel ) ,  ( CursorMovement_953_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   replace_dash_selection1273 (   struct env120* env ,    struct Pane_126 *  self4072 ,    struct Tuple2_150  pos_prime_s4074 ,    struct StrView_21  cp4076 ) {
    struct envunion121  temp1274 = ( (struct envunion121){ .fun = (  struct Maybe_113  (*) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  ) )change1031 , .env =  env->envinst104 } );
    struct Maybe_113  mcursors4077 = ( temp1274.fun ( &temp1274.env ,  ( ( * (  self4072 ) ) .f_buf ) ,  ( (  fst1264 ) ( (  pos_prime_s4074 ) ) ) ,  ( (  snd1265 ) ( (  pos_prime_s4074 ) ) ) ,  (  cp4076 ) ,  ( ( Maybe_113_Just ) ( ( (struct Cursors_27) { .f_cur = ( ( * (  self4072 ) ) .f_cursor ) , .f_sel = ( ( * (  self4072 ) ) .f_sel ) } ) ) ) ) );
    struct env1276 envinst1276 = {
        .self4072 =  self4072 ,
    };
    ( (  if_dash_just1275 ) ( (  mcursors4077 ) ,  ( (struct envunion1277){ .fun = (  enum Unit_7  (*) (  struct env1276*  ,    struct Cursors_27  ) )lam1279 , .env =  envinst1276 } ) ) );
    return ( Unit_7_Unit );
}

struct envunion1281 {
    enum Unit_7  (*fun) (  struct env135*  ,    struct Editor_143 *  );
    struct env135 env;
};

struct envunion1283 {
    enum Unit_7  (*fun) (  struct env120*  ,    struct Pane_126 *  ,    struct Tuple2_150  ,    struct StrView_21  );
    struct env120 env;
};

struct envunion1285 {
    enum Unit_7  (*fun) (  struct env135*  ,    struct Editor_143 *  );
    struct env135 env;
};

static  struct StrBuilder_54   mk1291 (    enum CAllocator_9  al2781 ) {
    return ( (struct StrBuilder_54) { .f_chars = ( (  mk290 ) ( (  al2781 ) ) ) } );
}

struct IntStrIter_1297 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1296 {
    struct StrViewIter_610  f_left;
    struct IntStrIter_1297  f_right;
};

struct StrConcatIter_1295 {
    struct StrConcatIter_1296  f_left;
    struct StrViewIter_610  f_right;
};

struct env1298 {
    struct env52 envinst52;
    struct StrBuilder_54 *  builder2749;
};

struct envunion1299 {
    enum Unit_7  (*fun) (  struct env1298*  ,    struct Char_57  );
    struct env1298 env;
};

static  struct StrConcatIter_1295   into_dash_iter1301 (    struct StrConcatIter_1295  self1491 ) {
    return (  self1491 );
}

struct env1307 {
    ;
    size_t  base1210;
};

struct envunion1308 {
    size_t  (*fun) (  struct env1307*  ,    int32_t  ,    size_t  );
    struct env1307 env;
};

static  size_t   reduce1306 (    struct Range_693  iterable1093 ,    size_t  base1095 ,   struct envunion1308  fun1097 ) {
    size_t  x1098 = (  base1095 );
    struct RangeIter_696  it1099 = ( (  into_dash_iter698 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_279  dref1100 = ( (  next699 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_279_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_279_Just_t ) {
                struct envunion1308  temp1309 = (  fun1097 );
                x1098 = ( temp1309.fun ( &temp1309.env ,  ( dref1100 .stuff .Maybe_279_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1310 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1310);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1311;
    return (  temp1311 );
}

static  size_t   lam1312 (   struct env1307* env ,    int32_t  item1214 ,    size_t  x1216 ) {
    return (  op_dash_mul252 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  size_t   pow1305 (    size_t  base1210 ,    int32_t  p1212 ) {
    struct env1307 envinst1307 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1306 ) ( ( (  to701 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub819 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1308){ .fun = (  size_t  (*) (  struct env1307*  ,    int32_t  ,    size_t  ) )lam1312 , .env =  envinst1307 } ) ) );
}

static  uint8_t   cast1313 (    size_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_613   next1304 (    struct IntStrIter_1297 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_613_Just ) ( ( (  from_dash_charlike228 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp324 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
    }
    size_t  trim_dash_down1423 = ( (  pow1305 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub819 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    size_t  upper1424 = (  op_dash_div218 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    size_t  upper_dash_mask1425 = (  op_dash_mul252 ( (  op_dash_div218 ( (  upper1424 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1313 ) ( (  op_dash_sub311 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub819 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8899 ) ( (  op_dash_add789 ( (  digit1426 ) , (  from_dash_integral219 ( 48 ) ) ) ) ) );
    return ( ( Maybe_613_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_613   next1303 (    struct StrConcatIter_1296 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next1304 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next1302 (    struct StrConcatIter_1295 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next1303 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each1294 (    struct StrConcatIter_1295  iterable1074 ,   struct envunion1299  fun1076 ) {
    struct StrConcatIter_1295  temp1300 = ( (  into_dash_iter1301 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1295 *  it1077 = ( &temp1300 );
    while ( ( true ) ) {
        struct Maybe_613  dref1078 = ( (  next1302 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_613_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_613_Just_t ) {
                struct envunion1299  temp1314 = (  fun1076 );
                ( temp1314.fun ( &temp1314.env ,  ( dref1078 .stuff .Maybe_613_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  int32_t   count_dash_digits1321 (    size_t  self1430 ) {
    if ( (  eq246 ( (  self1430 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp191 ( (  self1430 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div218 ( (  self1430 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1431 = (  op_dash_add281 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1297   uint_dash_iter1320 (    size_t  int1437 ) {
    return ( (struct IntStrIter_1297) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1321 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1297   chars1319 (    size_t  self1467 ) {
    return ( (  uint_dash_iter1320 ) ( (  self1467 ) ) );
}

static  struct StrConcatIter_1296   into_dash_iter1318 (    struct StrConcat_65  dref1498 ) {
    return ( (struct StrConcatIter_1296) { .f_left = ( (  chars615 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1319 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1296   chars1317 (    struct StrConcat_65  self1509 ) {
    return ( (  into_dash_iter1318 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1295   into_dash_iter1316 (    struct StrConcat_64  dref1498 ) {
    return ( (struct StrConcatIter_1295) { .f_left = ( (  chars1317 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars615 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1295   chars1315 (    struct StrConcat_64  self1509 ) {
    return ( (  into_dash_iter1316 ) ( (  self1509 ) ) );
}

static  enum Unit_7   write_dash_slice1326 (   struct env50* env ,    struct StrBuilder_54 *  builder2739 ,    struct Slice_12  s2741 ) {
    struct envunion51  temp1327 = ( (struct envunion51){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all345 , .env =  env->envinst40 } );
    ( temp1327.fun ( &temp1327.env ,  ( & ( ( * (  builder2739 ) ) .f_chars ) ) ,  (  s2741 ) ) );
    return ( Unit_7_Unit );
}

static  struct Slice_12   from_dash_char1328 (    struct Char_57  c1941 ,    uint8_t *  buf1943 ) {
    struct CharDestructured_212  dref1944 = ( (  destructure214 ) ( (  c1941 ) ) );
    if ( dref1944.tag == CharDestructured_212_Ref_t ) {
        return ( (struct Slice_12) { .f_ptr = ( ( dref1944 .stuff .CharDestructured_212_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1944 .stuff .CharDestructured_212_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1944.tag == CharDestructured_212_Scalar_t ) {
            if ( (  cmp222 ( ( ( dref1944 .stuff .CharDestructured_212_Scalar_s .field0 ) .f_value ) , (  from_dash_integral223 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1329 = ( (  from_dash_string49 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp1329);
                exit ( 1 );
                ( Unit_7_Unit );
            }
            (*  buf1943 ) = ( (  u32_dash_u8225 ) ( ( ( dref1944 .stuff .CharDestructured_212_Scalar_s .field0 ) .f_value ) ) );
            return ( (struct Slice_12) { .f_ptr = (  buf1943 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_7   write_dash_char1324 (   struct env52* env ,    struct StrBuilder_54 *  builder2744 ,    struct Char_57  c2746 ) {
    struct envunion53  temp1325 = ( (struct envunion53){ .fun = (  enum Unit_7  (*) (  struct env50*  ,    struct StrBuilder_54 *  ,    struct Slice_12  ) )write_dash_slice1326 , .env =  env->envinst50 } );
    uint8_t  temp1331;
    uint8_t  temp1330 = (  temp1331 );
    ( temp1325.fun ( &temp1325.env ,  (  builder2744 ) ,  ( (  from_dash_char1328 ) ( (  c2746 ) ,  ( &temp1330 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1322 (   struct env1298* env ,    struct Char_57  c2753 ) {
    struct envunion56  temp1323 = ( (struct envunion56){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1324 , .env =  env->envinst52 } );
    return ( temp1323.fun ( &temp1323.env ,  ( env->builder2749 ) ,  (  c2753 ) ) );
}

static  enum Unit_7   write1293 (   struct env55* env ,    struct StrBuilder_54 *  builder2749 ,    struct StrConcat_64  s2751 ) {
    struct env1298 envinst1298 = {
        .envinst52 = env->envinst52 ,
        .builder2749 =  builder2749 ,
    };
    ( (  for_dash_each1294 ) ( ( (  chars1315 ) ( (  s2751 ) ) ) ,  ( (struct envunion1299){ .fun = (  enum Unit_7  (*) (  struct env1298*  ,    struct Char_57  ) )lam1322 , .env =  envinst1298 } ) ) );
    return ( Unit_7_Unit );
}

static  uint8_t *   cast_dash_ptr1335 (    uint8_t *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_12   cast_dash_slice1334 (    struct Slice_12  s1932 ) {
    return ( (struct Slice_12) { .f_ptr = ( (  cast_dash_ptr1335 ) ( ( (  s1932 ) .f_ptr ) ) ) , .f_count = ( (  s1932 ) .f_count ) } );
}

static  struct StrView_21   as_dash_str1333 (    struct StrBuilder_54 *  builder2787 ) {
    return ( (struct StrView_21) { .f_contents = ( (  cast_dash_slice1334 ) ( ( (  subslice335 ) ( ( ( ( * (  builder2787 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2787 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_21   mk_dash_dyn_dash_str1289 (   struct env61* env ,    struct StrConcat_64  s2807 ,    enum CAllocator_9  al2809 ) {
    struct StrBuilder_54  temp1290 = ( (  mk1291 ) ( (  al2809 ) ) );
    struct StrBuilder_54 *  sb2810 = ( &temp1290 );
    struct envunion63  temp1292 = ( (struct envunion63){ .fun = (  enum Unit_7  (*) (  struct env55*  ,    struct StrBuilder_54 *  ,    struct StrConcat_64  ) )write1293 , .env =  env->envinst55 } );
    ( temp1292.fun ( &temp1292.env ,  (  sb2810 ) ,  (  s2807 ) ) );
    struct envunion62  temp1332 = ( (struct envunion62){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1324 , .env =  env->envinst52 } );
    ( temp1332.fun ( &temp1332.env ,  (  sb2810 ) ,  ( (  nullchar535 ) ( ) ) ) );
    struct StrView_21  dynstr2811 = ( (  as_dash_str1333 ) ( (  sb2810 ) ) );
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = ( ( (  dynstr2811 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub311 ( ( ( (  dynstr2811 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_7   set_dash_msg1287 (   struct env137* env ,    struct Editor_143 *  ed4176 ,    struct StrConcat_64  s4178 ) {
    ( (  reset_dash_msg939 ) ( (  ed4176 ) ) );
    struct envunion138  temp1288 = ( (struct envunion138){ .fun = (  struct StrView_21  (*) (  struct env61*  ,    struct StrConcat_64  ,    enum CAllocator_9  ) )mk_dash_dyn_dash_str1289 , .env =  env->envinst61 } );
    (*  ed4176 ) .f_msg = ( ( Maybe_144_Just ) ( ( temp1288.fun ( &temp1288.env ,  (  s4178 ) ,  ( ( * (  ed4176 ) ) .f_al ) ) ) ) );
    return ( Unit_7_Unit );
}

struct envunion1338 {
    enum Unit_7  (*fun) (  struct env120*  ,    struct Pane_126 *  ,    struct Tuple2_150  ,    struct StrView_21  );
    struct env120 env;
};

struct env1337 {
    ;
    ;
    ;
    ;
    ;
    struct Editor_143 *  ed4222;
    ;
    ;
    ;
    struct env120 envinst120;
    ;
    ;
    ;
};

struct envunion1339 {
    enum Unit_7  (*fun) (  struct env1337*  ,    struct StrView_21  );
    struct env1337 env;
};

static  enum Unit_7   if_dash_just1336 (    struct Maybe_144  x1291 ,   struct envunion1339  fun1293 ) {
    struct Maybe_144  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_144_Just_t ) {
        struct envunion1339  temp1340 = (  fun1293 );
        ( temp1340.fun ( &temp1340.env ,  ( dref1294 .stuff .Maybe_144_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_144_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  struct Pos_20   max_dash_pos1342 (    struct Pane_126 *  pane4011 ) {
    return ( {  struct Maybe_28  dref4012 = ( ( * (  pane4011 ) ) .f_sel ) ; dref4012.tag == Maybe_28_Just_t ? ( (  max325 ) ( ( ( * (  pane4011 ) ) .f_cursor ) ,  ( dref4012 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( ( * (  pane4011 ) ) .f_cursor ) ; } );
}

static  uint8_t   elem_dash_get1344 (    struct Slice_12  self1867 ,    size_t  idx1869 ) {
    return ( (  get386 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

static  uint8_t   last1343 (    struct Slice_12  s1935 ) {
    if ( (  eq246 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1076 ) ( ( (  from_dash_string227 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1344 ( (  s1935 ) , (  op_dash_sub311 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1345 (    int32_t  x1352 ,    int32_t  mn1354 ,    int32_t  mx1356 ) {
    if ( (  cmp324 ( (  x1352 ) , (  mn1354 ) ) == 0 ) ) {
        return (  mn1354 );
    } else {
        if ( (  cmp324 ( (  x1352 ) , (  mx1356 ) ) == 2 ) ) {
            return (  mx1356 );
        } else {
            return (  x1352 );
        }
    }
}

static  enum Unit_7   lam1341 (   struct env1337* env ,    struct StrView_21  cp4233 ) {
    struct Pos_20  start4234 = ( (  max_dash_pos1342 ) ( ( (  pane995 ) ( ( env->ed4222 ) ) ) ) );
    if ( (  eq215 ( ( (  last1343 ) ( ( (  cp4233 ) .f_contents ) ) ) , ( (  ascii_dash_u8752 ) ( ( (  from_dash_charlike794 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        start4234 = ( (struct Pos_20) { .f_line = ( (  clamp1345 ) ( (  op_dash_add281 ( ( (  start4234 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  num_dash_lines998 ) ( ( ( * ( (  pane995 ) ( ( env->ed4222 ) ) ) ) .f_buf ) ) ) ) ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } );
    } else {
        start4234 = ( (  right_dash_pos997 ) ( ( ( ( * ( env->ed4222 ) ) .f_pane ) .f_buf ) ,  (  start4234 ) ) );
    }
    struct envunion1338  temp1346 = ( (struct envunion1338){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_126 *  ,    struct Tuple2_150  ,    struct StrView_21  ) )replace_dash_selection1273 , .env =  env->envinst120 } );
    ( temp1346.fun ( &temp1346.env ,  ( (  pane995 ) ( ( env->ed4222 ) ) ) ,  ( ( Tuple2_150_Tuple2 ) ( (  start4234 ) ,  (  start4234 ) ) ) ,  (  cp4233 ) ) );
    return ( Unit_7_Unit );
}

struct envunion1349 {
    enum Unit_7  (*fun) (  struct env120*  ,    struct Pane_126 *  ,    struct Tuple2_150  ,    struct StrView_21  );
    struct env120 env;
};

struct env1348 {
    ;
    ;
    struct env120 envinst120;
    ;
    ;
    ;
    ;
    ;
    struct Editor_143 *  ed4222;
};

struct envunion1350 {
    enum Unit_7  (*fun) (  struct env1348*  ,    struct StrView_21  );
    struct env1348 env;
};

static  enum Unit_7   if_dash_just1347 (    struct Maybe_144  x1291 ,   struct envunion1350  fun1293 ) {
    struct Maybe_144  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_144_Just_t ) {
        struct envunion1350  temp1351 = (  fun1293 );
        ( temp1351.fun ( &temp1351.env ,  ( dref1294 .stuff .Maybe_144_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_144_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  struct Pos_20   min_dash_pos1353 (    struct Pane_126 *  pane4006 ) {
    return ( {  struct Maybe_28  dref4007 = ( ( * (  pane4006 ) ) .f_sel ) ; dref4007.tag == Maybe_28_Just_t ? ( (  min322 ) ( ( ( * (  pane4006 ) ) .f_cursor ) ,  ( dref4007 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( ( * (  pane4006 ) ) .f_cursor ) ; } );
}

static  enum Unit_7   lam1352 (   struct env1348* env ,    struct StrView_21  cp4236 ) {
    struct Pos_20  start4237 = ( (  min_dash_pos1353 ) ( ( (  pane995 ) ( ( env->ed4222 ) ) ) ) );
    if ( (  eq215 ( ( (  last1343 ) ( ( (  cp4236 ) .f_contents ) ) ) , ( (  ascii_dash_u8752 ) ( ( (  from_dash_charlike794 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_20  temp1354 = (  start4237 );
        temp1354 .  f_bi = (  from_dash_integral48 ( 0 ) );
        start4237 = ( temp1354 );
    }
    struct envunion1349  temp1355 = ( (struct envunion1349){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_126 *  ,    struct Tuple2_150  ,    struct StrView_21  ) )replace_dash_selection1273 , .env =  env->envinst120 } );
    ( temp1355.fun ( &temp1355.env ,  ( (  pane995 ) ( ( env->ed4222 ) ) ) ,  ( ( Tuple2_150_Tuple2 ) ( (  start4237 ) ,  (  start4237 ) ) ) ,  (  cp4236 ) ) );
    return ( Unit_7_Unit );
}

struct envunion1358 {
    enum Unit_7  (*fun) (  struct env120*  ,    struct Pane_126 *  ,    struct Tuple2_150  ,    struct StrView_21  );
    struct env120 env;
};

struct env1357 {
    struct env120 envinst120;
    ;
    ;
    struct Editor_143 *  ed4222;
};

struct envunion1359 {
    enum Unit_7  (*fun) (  struct env1357*  ,    struct StrView_21  );
    struct env1357 env;
};

static  enum Unit_7   if_dash_just1356 (    struct Maybe_144  x1291 ,   struct envunion1359  fun1293 ) {
    struct Maybe_144  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_144_Just_t ) {
        struct envunion1359  temp1360 = (  fun1293 );
        ( temp1360.fun ( &temp1360.env ,  ( dref1294 .stuff .Maybe_144_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_144_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1361 (   struct env1357* env ,    struct StrView_21  cp4239 ) {
    struct Pos_20  start4240 = ( (  min_dash_pos1353 ) ( ( (  pane995 ) ( ( env->ed4222 ) ) ) ) );
    struct envunion1358  temp1362 = ( (struct envunion1358){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_126 *  ,    struct Tuple2_150  ,    struct StrView_21  ) )replace_dash_selection1273 , .env =  env->envinst120 } );
    ( temp1362.fun ( &temp1362.env ,  ( (  pane995 ) ( ( env->ed4222 ) ) ) ,  ( ( Tuple2_150_Tuple2 ) ( (  start4240 ) ,  (  start4240 ) ) ) ,  (  cp4239 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   expand1363 (    struct Pane_126 *  pane4025 ) {
    struct Pos_20  min_dash_pos4026 = ( (  min_dash_pos1353 ) ( (  pane4025 ) ) );
    struct Pos_20  max_dash_pos4027 = ( (  max_dash_pos1342 ) ( (  pane4025 ) ) );
    int32_t  max_dash_pos_dash_max4028 = ( (  size_dash_i32203 ) ( ( (  num_dash_bytes991 ) ( ( (  line958 ) ( ( ( * (  pane4025 ) ) .f_buf ) ,  ( (  max_dash_pos4027 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq327 ( ( (  min_dash_pos4026 ) .f_bi ) , (  from_dash_integral48 ( 0 ) ) ) ) && (  eq327 ( ( (  max_dash_pos4027 ) .f_bi ) , (  max_dash_pos_dash_max4028 ) ) ) ) ) ) {
        struct Pos_20  temp1364 = (  min_dash_pos4026 );
        temp1364 .  f_bi = (  from_dash_integral48 ( 0 ) );
        (*  pane4025 ) .f_sel = ( ( Maybe_28_Just ) ( ( temp1364 ) ) );
        struct Pos_20  temp1365 = (  max_dash_pos4027 );
        temp1365 .  f_bi = (  max_dash_pos_dash_max4028 );
        (*  pane4025 ) .f_cursor = ( temp1365 );
    } else {
        if ( (  cmp324 ( (  op_dash_add281 ( ( (  max_dash_pos4027 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) , ( (  num_dash_lines998 ) ( ( ( * (  pane4025 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_7_Unit );
        }
        struct Pos_20  temp1366 = (  min_dash_pos4026 );
        temp1366 .  f_bi = (  from_dash_integral48 ( 0 ) );
        (*  pane4025 ) .f_sel = ( ( Maybe_28_Just ) ( ( temp1366 ) ) );
        int32_t  next_dash_line4029 = (  op_dash_add281 ( ( (  max_dash_pos4027 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) );
        (*  pane4025 ) .f_cursor = ( (struct Pos_20) { .f_line = (  next_dash_line4029 ) , .f_bi = ( (  size_dash_i32203 ) ( ( (  num_dash_bytes991 ) ( ( (  line958 ) ( ( ( * (  pane4025 ) ) .f_buf ) ,  (  next_dash_line4029 ) ) ) ) ) ) ) } );
    }
    return ( Unit_7_Unit );
}

static  bool   is_dash_none1367 (    struct Maybe_28  m1264 ) {
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

struct Maybe_1369 {
    enum {
        Maybe_1369_None_t,
        Maybe_1369_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_150  field0;
        } Maybe_1369_Just_s;
    } stuff;
};

static struct Maybe_1369 Maybe_1369_Just (  struct Tuple2_150  field0 ) {
    return ( struct Maybe_1369 ) { .tag = Maybe_1369_Just_t, .stuff = { .Maybe_1369_Just_s = { .field0 = field0 } } };
};

struct env1371 {
    ;
    ;
    struct StrView_21  query4113;
    ;
    struct Pane_126 *  pane4109;
    ;
};

struct envunion1373 {
    struct Maybe_1013  (*fun) (  struct env1371*  ,    struct Pos_20  );
    struct env1371 env;
};

struct Zip_1380 {
    struct SliceIter_349  f_left_dash_it;
    struct SliceIter_349  f_right_dash_it;
};

struct Tuple2_1381 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_1381 Tuple2_1381_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_1381 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1383 {
    bool (*  fun1126 )(    struct Tuple2_1381  );
};

struct envunion1384 {
    bool  (*fun) (  struct env1383*  ,    struct Tuple2_1381  ,    bool  );
    struct env1383 env;
};

static  struct Zip_1380   into_dash_iter1385 (    struct Zip_1380  self911 ) {
    return (  self911 );
}

struct Maybe_1386 {
    enum {
        Maybe_1386_None_t,
        Maybe_1386_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1381  field0;
        } Maybe_1386_Just_s;
    } stuff;
};

static struct Maybe_1386 Maybe_1386_Just (  struct Tuple2_1381  field0 ) {
    return ( struct Maybe_1386 ) { .tag = Maybe_1386_Just_t, .stuff = { .Maybe_1386_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1386   next1387 (    struct Zip_1380 *  self914 ) {
    struct Zip_1380  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_352  dref916 = ( (  next353 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_352_None_t ) {
            return ( (struct Maybe_1386) { .tag = Maybe_1386_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_352_Just_t ) {
                struct Maybe_352  dref918 = ( (  next353 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_352_None_t ) {
                    return ( (struct Maybe_1386) { .tag = Maybe_1386_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_352_Just_t ) {
                        ( (  next353 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next353 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1386_Just ) ( ( ( Tuple2_1381_Tuple2 ) ( ( dref916 .stuff .Maybe_352_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_352_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1382 (    struct Zip_1380  iterable1093 ,    bool  base1095 ,   struct envunion1384  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_1380  it1099 = ( (  into_dash_iter1385 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1386  dref1100 = ( (  next1387 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1386_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1386_Just_t ) {
                struct envunion1384  temp1388 = (  fun1097 );
                x1098 = ( temp1388.fun ( &temp1388.env ,  ( dref1100 .stuff .Maybe_1386_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1389 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1389);
    exit ( 1 );
    ( Unit_7_Unit );
    bool  temp1390;
    return (  temp1390 );
}

static  bool   lam1391 (   struct env1383* env ,    struct Tuple2_1381  e1128 ,    bool  x1130 ) {
    return ( ( ( env->fun1126 ) ( (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1379 (    struct Zip_1380  it1124 ,    bool (*  fun1126 )(    struct Tuple2_1381  ) ) {
    struct env1383 envinst1383 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1382 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1384){ .fun = (  bool  (*) (  struct env1383*  ,    struct Tuple2_1381  ,    bool  ) )lam1391 , .env =  envinst1383 } ) ) );
}

static  struct Zip_1380   zip1392 (    struct Slice_12  left922 ,    struct Slice_12  right924 ) {
    struct SliceIter_349  left_dash_it925 = ( (  into_dash_iter351 ) ( (  left922 ) ) );
    struct SliceIter_349  right_dash_it926 = ( (  into_dash_iter351 ) ( (  right924 ) ) );
    return ( (struct Zip_1380) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  bool   lam1393 (    struct Tuple2_1381  dref1862 ) {
    return (  eq215 ( ( dref1862 .field0 ) , ( dref1862 .field1 ) ) );
}

static  bool   eq1378 (    struct Slice_12  l1859 ,    struct Slice_12  r1861 ) {
    if ( ( !  eq246 ( ( (  l1859 ) .f_count ) , ( (  r1861 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all1379 ) ( ( (  zip1392 ) ( (  l1859 ) ,  (  r1861 ) ) ) ,  (  lam1393 ) ) );
}

static  struct Maybe_1013   find_dash_slice1375 (    struct Slice_12  haystack1912 ,    struct Slice_12  needle1914 ) {
    struct RangeIter_696  temp1376 =  into_dash_iter698 ( ( (  to701 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub819 ( ( (  size_dash_i32203 ) ( ( (  haystack1912 ) .f_count ) ) ) , ( (  size_dash_i32203 ) ( ( (  needle1914 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_279  __cond1377 =  next699 (&temp1376);
        if (  __cond1377 .tag == 0 ) {
            break;
        }
        int32_t  i1916 =  __cond1377 .stuff .Maybe_279_Just_s .field0;
        if ( (  eq1378 ( ( (  subslice335 ) ( (  haystack1912 ) ,  ( (  i32_dash_size269 ) ( (  i1916 ) ) ) ,  (  op_dash_add239 ( ( (  i32_dash_size269 ) ( (  i1916 ) ) ) , ( (  needle1914 ) .f_count ) ) ) ) ) , (  needle1914 ) ) ) ) {
            return ( ( Maybe_1013_Just ) ( ( (  i32_dash_size269 ) ( (  i1916 ) ) ) ) );
        }
    }
    return ( (struct Maybe_1013) { .tag = Maybe_1013_None_t } );
}

static  struct StrView_21   byte_dash_substr_dash_from1394 (    struct StrView_21  s2190 ,    size_t  from2192 ) {
    return ( (struct StrView_21) { .f_contents = ( (  from334 ) ( ( (  s2190 ) .f_contents ) ,  (  from2192 ) ) ) } );
}

static  struct Maybe_1013   search_dash_on_dash_line1374 (   struct env1371* env ,    struct Pos_20  pos4116 ) {
    return ( (  find_dash_slice1375 ) ( ( ( (  byte_dash_substr_dash_from1394 ) ( ( (  line958 ) ( ( ( * ( env->pane4109 ) ) .f_buf ) ,  ( (  pos4116 ) .f_line ) ) ) ,  ( (  i32_dash_size269 ) ( ( (  pos4116 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4113 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1400 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  int32_t   op_dash_mul1401 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  int32_t   mod1399 (    int32_t  l1229 ,    int32_t  d1231 ) {
    int32_t  r1232 = (  op_dash_div1400 ( (  l1229 ) , (  d1231 ) ) );
    int32_t  m1233 = (  op_dash_sub819 ( (  l1229 ) , (  op_dash_mul1401 ( (  r1232 ) , (  d1231 ) ) ) ) );
    if ( (  cmp324 ( (  m1233 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add281 ( (  d1231 ) , (  m1233 ) ) );
    } else {
        return (  m1233 );
    }
}

struct envunion1403 {
    struct Maybe_1013  (*fun) (  struct env1371*  ,    struct Pos_20  );
    struct env1371 env;
};

static  struct Maybe_1369   search_dash_from1370 (    struct Pane_126 *  pane4109 ,    struct Pos_20  pos4111 ,    struct StrView_21  query4113 ) {
    struct env1371 envinst1371 = {
        .query4113 =  query4113 ,
        .pane4109 =  pane4109 ,
    };
    struct envunion1373  temp1372 = ( (struct envunion1373){ .fun = (  struct Maybe_1013  (*) (  struct env1371*  ,    struct Pos_20  ) )search_dash_on_dash_line1374 , .env =  envinst1371 } );
    struct Maybe_1013  dref4117 = ( temp1372.fun ( &temp1372.env ,  (  pos4111 ) ) );
    if ( dref4117.tag == Maybe_1013_Just_t ) {
        struct Pos_20  temp1395 = (  pos4111 );
        temp1395 .  f_bi = (  op_dash_add281 ( ( (  pos4111 ) .f_bi ) , ( (  size_dash_i32203 ) ( ( dref4117 .stuff .Maybe_1013_Just_s .field0 ) ) ) ) );
        struct Pos_20  sel_dash_pos4119 = ( temp1395 );
        struct Pos_20  temp1396 = (  pos4111 );
        temp1396 .  f_bi = (  op_dash_sub819 ( (  op_dash_add281 ( ( (  pos4111 ) .f_bi ) , ( (  size_dash_i32203 ) ( (  op_dash_add239 ( ( dref4117 .stuff .Maybe_1013_Just_s .field0 ) , ( (  num_dash_bytes991 ) ( (  query4113 ) ) ) ) ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
        struct Pos_20  cur_dash_pos4120 = ( temp1396 );
        return ( ( Maybe_1369_Just ) ( ( ( Tuple2_150_Tuple2 ) ( (  sel_dash_pos4119 ) ,  (  cur_dash_pos4120 ) ) ) ) );
    }
    else {
        if ( dref4117.tag == Maybe_1013_None_t ) {
            int32_t  num_dash_lines4121 = ( (  num_dash_lines998 ) ( ( ( * (  pane4109 ) ) .f_buf ) ) );
            struct RangeIter_696  temp1397 =  into_dash_iter698 ( ( (  to701 ) ( (  from_dash_integral48 ( 1 ) ) ,  (  num_dash_lines4121 ) ) ) );
            while (true) {
                struct Maybe_279  __cond1398 =  next699 (&temp1397);
                if (  __cond1398 .tag == 0 ) {
                    break;
                }
                int32_t  i4123 =  __cond1398 .stuff .Maybe_279_Just_s .field0;
                int32_t  line4124 = ( (  mod1399 ) ( (  op_dash_add281 ( ( (  pos4111 ) .f_line ) , (  i4123 ) ) ) ,  (  num_dash_lines4121 ) ) );
                struct envunion1403  temp1402 = ( (struct envunion1403){ .fun = (  struct Maybe_1013  (*) (  struct env1371*  ,    struct Pos_20  ) )search_dash_on_dash_line1374 , .env =  envinst1371 } );
                struct Maybe_1013  dref4125 = ( temp1402.fun ( &temp1402.env ,  ( (struct Pos_20) { .f_line = (  line4124 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ) );
                if ( dref4125.tag == Maybe_1013_Just_t ) {
                    struct Pos_20  sel_dash_pos4127 = ( (struct Pos_20) { .f_line = (  line4124 ) , .f_bi = ( (  size_dash_i32203 ) ( ( dref4125 .stuff .Maybe_1013_Just_s .field0 ) ) ) } );
                    struct Pos_20  cur_dash_pos4128 = ( (struct Pos_20) { .f_line = (  line4124 ) , .f_bi = (  op_dash_sub819 ( ( (  size_dash_i32203 ) ( (  op_dash_add239 ( ( dref4125 .stuff .Maybe_1013_Just_s .field0 ) , ( (  num_dash_bytes991 ) ( (  query4113 ) ) ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1369_Just ) ( ( ( Tuple2_150_Tuple2 ) ( (  sel_dash_pos4127 ) ,  (  cur_dash_pos4128 ) ) ) ) );
                }
                else {
                    if ( dref4125.tag == Maybe_1013_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1369) { .tag = Maybe_1369_None_t } );
        }
    }
}

static  enum Unit_7   next_dash_match1368 (    struct Editor_143 *  ed4206 ) {
    struct Maybe_144  dref4207 = ( ( * (  ed4206 ) ) .f_search_dash_term );
    if ( dref4207.tag == Maybe_144_None_t ) {
        return ( Unit_7_Unit );
    }
    else {
        if ( dref4207.tag == Maybe_144_Just_t ) {
            struct Maybe_1369  dref4209 = ( (  search_dash_from1370 ) ( ( (  pane995 ) ( (  ed4206 ) ) ) ,  ( (  max_dash_pos1342 ) ( ( (  pane995 ) ( (  ed4206 ) ) ) ) ) ,  ( dref4207 .stuff .Maybe_144_Just_s .field0 ) ) );
            if ( dref4209.tag == Maybe_1369_None_t ) {
            }
            else {
                if ( dref4209.tag == Maybe_1369_Just_t ) {
                    ( (  set_dash_cursors952 ) ( ( (  pane995 ) ( (  ed4206 ) ) ) ,  ( dref4209 .stuff .Maybe_1369_Just_s .field0 .field1 ) ,  ( ( Maybe_28_Just ) ( ( dref4209 .stuff .Maybe_1369_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_953_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Maybe_1013   find_dash_last_dash_occurence_dash_of_dash_slice1406 (    struct Slice_12  haystack1919 ,    struct Slice_12  needle1921 ) {
    struct Maybe_1013  occ1922 = ( (struct Maybe_1013) { .tag = Maybe_1013_None_t } );
    struct RangeIter_696  temp1407 =  into_dash_iter698 ( ( (  to701 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub819 ( ( (  size_dash_i32203 ) ( ( (  haystack1919 ) .f_count ) ) ) , ( (  size_dash_i32203 ) ( ( (  needle1921 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_279  __cond1408 =  next699 (&temp1407);
        if (  __cond1408 .tag == 0 ) {
            break;
        }
        int32_t  i1924 =  __cond1408 .stuff .Maybe_279_Just_s .field0;
        if ( (  eq1378 ( ( (  subslice335 ) ( (  haystack1919 ) ,  ( (  i32_dash_size269 ) ( (  i1924 ) ) ) ,  (  op_dash_add239 ( ( (  i32_dash_size269 ) ( (  i1924 ) ) ) , ( (  needle1921 ) .f_count ) ) ) ) ) , (  needle1921 ) ) ) ) {
            occ1922 = ( ( Maybe_1013_Just ) ( ( (  i32_dash_size269 ) ( (  i1924 ) ) ) ) );
        }
    }
    return (  occ1922 );
}

static  struct Maybe_1369   search_dash_back1405 (    struct Pane_126 *  pane4131 ,    struct Pos_20  pos4133 ,    struct StrView_21  query4135 ) {
    struct Maybe_1013  dref4136 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1406 ) ( ( ( (  byte_dash_substr392 ) ( ( (  line958 ) ( ( ( * (  pane4131 ) ) .f_buf ) ,  ( (  pos4133 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size269 ) ( ( (  pos4133 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4135 ) .f_contents ) ) );
    if ( dref4136.tag == Maybe_1013_Just_t ) {
        struct Pos_20  temp1409 = (  pos4133 );
        temp1409 .  f_bi = ( (  size_dash_i32203 ) ( ( dref4136 .stuff .Maybe_1013_Just_s .field0 ) ) );
        struct Pos_20  sel_dash_pos4138 = ( temp1409 );
        struct Pos_20  temp1410 = (  pos4133 );
        temp1410 .  f_bi = (  op_dash_sub819 ( ( (  size_dash_i32203 ) ( (  op_dash_add239 ( ( dref4136 .stuff .Maybe_1013_Just_s .field0 ) , ( (  num_dash_bytes991 ) ( (  query4135 ) ) ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
        struct Pos_20  cur_dash_pos4139 = ( temp1410 );
        return ( ( Maybe_1369_Just ) ( ( ( Tuple2_150_Tuple2 ) ( (  sel_dash_pos4138 ) ,  (  cur_dash_pos4139 ) ) ) ) );
    }
    else {
        if ( dref4136.tag == Maybe_1013_None_t ) {
            int32_t  num_dash_lines4140 = ( (  num_dash_lines998 ) ( ( ( * (  pane4131 ) ) .f_buf ) ) );
            struct RangeIter_696  temp1411 =  into_dash_iter698 ( ( (  to701 ) ( (  from_dash_integral48 ( 1 ) ) ,  (  num_dash_lines4140 ) ) ) );
            while (true) {
                struct Maybe_279  __cond1412 =  next699 (&temp1411);
                if (  __cond1412 .tag == 0 ) {
                    break;
                }
                int32_t  i4142 =  __cond1412 .stuff .Maybe_279_Just_s .field0;
                int32_t  line4143 = ( (  mod1399 ) ( (  op_dash_sub819 ( ( (  pos4133 ) .f_line ) , (  i4142 ) ) ) ,  (  num_dash_lines4140 ) ) );
                struct Maybe_1013  dref4144 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1406 ) ( ( ( (  line958 ) ( ( ( * (  pane4131 ) ) .f_buf ) ,  (  line4143 ) ) ) .f_contents ) ,  ( (  query4135 ) .f_contents ) ) );
                if ( dref4144.tag == Maybe_1013_Just_t ) {
                    struct Pos_20  sel_dash_pos4146 = ( (struct Pos_20) { .f_line = (  line4143 ) , .f_bi = ( (  size_dash_i32203 ) ( ( dref4144 .stuff .Maybe_1013_Just_s .field0 ) ) ) } );
                    struct Pos_20  cur_dash_pos4147 = ( (struct Pos_20) { .f_line = (  line4143 ) , .f_bi = (  op_dash_sub819 ( ( (  size_dash_i32203 ) ( (  op_dash_add239 ( ( dref4144 .stuff .Maybe_1013_Just_s .field0 ) , ( (  num_dash_bytes991 ) ( (  query4135 ) ) ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1369_Just ) ( ( ( Tuple2_150_Tuple2 ) ( (  sel_dash_pos4146 ) ,  (  cur_dash_pos4147 ) ) ) ) );
                }
                else {
                    if ( dref4144.tag == Maybe_1013_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1369) { .tag = Maybe_1369_None_t } );
        }
    }
}

static  enum Unit_7   prev_dash_match1404 (    struct Editor_143 *  ed4214 ) {
    struct Maybe_144  dref4215 = ( ( * (  ed4214 ) ) .f_search_dash_term );
    if ( dref4215.tag == Maybe_144_None_t ) {
        return ( Unit_7_Unit );
    }
    else {
        if ( dref4215.tag == Maybe_144_Just_t ) {
            struct Maybe_1369  dref4217 = ( (  search_dash_back1405 ) ( ( (  pane995 ) ( (  ed4214 ) ) ) ,  ( (  min_dash_pos1353 ) ( ( (  pane995 ) ( (  ed4214 ) ) ) ) ) ,  ( dref4215 .stuff .Maybe_144_Just_s .field0 ) ) );
            if ( dref4217.tag == Maybe_1369_None_t ) {
            }
            else {
                if ( dref4217.tag == Maybe_1369_Just_t ) {
                    ( (  set_dash_cursors952 ) ( ( (  pane995 ) ( (  ed4214 ) ) ) ,  ( dref4217 .stuff .Maybe_1369_Just_s .field0 .field1 ) ,  ( ( Maybe_28_Just ) ( ( dref4217 .stuff .Maybe_1369_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_953_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   begin_dash_changeset1416 (   struct env109* env ,    struct TextBuf_88 *  self3786 ,    struct Cursors_27  before_dash_cursors3788 ) {
    struct Actions_89 *  actions3789 = ( & ( ( * (  self3786 ) ) .f_actions ) );
    ( (  trim_dash_actions1032 ) ( (  actions3789 ) ) );
    ( (  flush_dash_insert_dash_action1005 ) ( (  self3786 ) ) );
    ( (  assert484 ) ( (  eq1102 ( ( ( ( * (  self3786 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_90_NoChangeset ) ) ) ,  ( (  from_dash_string227 ) ( ( "expect no changeset bruh" ) ,  ( 24 ) ) ) ) );
    enum CAllocator_9  al3790 = ( ( * (  self3786 ) ) .f_al );
    struct Changeset_26  temp1417 = ( (struct Changeset_26) { .f_parts = ( (  mk1132 ) ( (  al3790 ) ) ) , .f_before_dash_cursors = (  before_dash_cursors3788 ) } );
    struct Changeset_26 *  changeset3791 = ( &temp1417 );
    struct envunion110  temp1418 = ( (struct envunion110){ .fun = (  enum Unit_7  (*) (  struct env22*  ,    struct List_24 *  ,    struct Changeset_26  ) )add1142 , .env =  env->envinst22 } );
    ( temp1418.fun ( &temp1418.env ,  ( & ( ( * (  actions3789 ) ) .f_list ) ) ,  ( * (  changeset3791 ) ) ) );
    (*  actions3789 ) .f_input_dash_changeset = ( ChangesetInputType_90_CustomChangeset );
    (*  actions3789 ) .f_cur = (  op_dash_add239 ( ( ( * (  actions3789 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Maybe_1058   head1424 (    struct List_17  it1142 ) {
    struct SliceIter_1051  temp1425 = ( (  into_dash_iter1053 ) ( (  it1142 ) ) );
    return ( (  next1059 ) ( ( &temp1425 ) ) );
}

static  bool   null1423 (    struct List_17  it1151 ) {
    struct Maybe_1058  dref1152 = ( (  head1424 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_1058_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_7   end_dash_changeset1422 (    struct TextBuf_88 *  self3794 ) {
    ( (  flush_dash_insert_dash_action1005 ) ( (  self3794 ) ) );
    struct Actions_89 *  actions3795 = ( & ( ( * (  self3794 ) ) .f_actions ) );
    if ( ( (  null1423 ) ( ( ( * ( (  last_dash_ptr1104 ) ( ( (  to_dash_slice1106 ) ( ( ( * (  actions3795 ) ) .f_list ) ) ) ) ) ) .f_parts ) ) ) ) {
        (*  actions3795 ) .f_cur = (  op_dash_sub311 ( ( ( * (  actions3795 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
        (*  actions3795 ) .f_input_dash_changeset = ( ChangesetInputType_90_NoChangeset );
        ( (  trim_dash_actions1032 ) ( (  actions3795 ) ) );
    }
    return ( Unit_7_Unit );
}

static  struct Maybe_28   fmap_dash_maybe1427 (    struct Maybe_28  x1275 ,    struct Pos_20 (*  fun1277 )(    struct Pos_20  ) ) {
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

static  struct Pos_20   lam1428 (    struct Pos_20  sel4091 ) {
    struct Pos_20  temp1429 = (  sel4091 );
    temp1429 .  f_bi = (  op_dash_add281 ( ( (  sel4091 ) .f_bi ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( temp1429 );
}

static  enum Unit_7   indent_dash_selection1414 (   struct env124* env ,    struct Pane_126 *  self4087 ) {
    struct envunion129  temp1415 = ( (struct envunion129){ .fun = (  enum Unit_7  (*) (  struct env109*  ,    struct TextBuf_88 *  ,    struct Cursors_27  ) )begin_dash_changeset1416 , .env =  env->envinst109 } );
    ( temp1415.fun ( &temp1415.env ,  ( ( * (  self4087 ) ) .f_buf ) ,  ( (struct Cursors_27) { .f_cur = ( ( * (  self4087 ) ) .f_cursor ) , .f_sel = ( ( * (  self4087 ) ) .f_sel ) } ) ) );
    struct RangeIter_696  temp1419 =  into_dash_iter698 ( ( (  to701 ) ( ( ( (  min_dash_pos1353 ) ( (  self4087 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1342 ) ( (  self4087 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_279  __cond1420 =  next699 (&temp1419);
        if (  __cond1420 .tag == 0 ) {
            break;
        }
        int32_t  line4089 =  __cond1420 .stuff .Maybe_279_Just_s .field0;
        struct envunion125  temp1421 = ( (struct envunion125){ .fun = (  enum Unit_7  (*) (  struct env122*  ,    struct Pane_126 *  ,    int32_t  ) )indent_dash_at1173 , .env =  env->envinst122 } );
        ( temp1421.fun ( &temp1421.env ,  (  self4087 ) ,  (  line4089 ) ) );
    }
    ( (  end_dash_changeset1422 ) ( ( ( * (  self4087 ) ) .f_buf ) ) );
    struct Pos_20  temp1426 = ( ( * (  self4087 ) ) .f_cursor );
    temp1426 .  f_bi = (  op_dash_add281 ( ( ( ( * (  self4087 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral48 ( 1 ) ) ) );
    ( (  set_dash_cursors952 ) ( (  self4087 ) ,  ( temp1426 ) ,  ( (  fmap_dash_maybe1427 ) ( ( ( * (  self4087 ) ) .f_sel ) ,  (  lam1428 ) ) ) ,  ( CursorMovement_953_UpdateVI ) ) );
    return ( Unit_7_Unit );
}

struct env1440 {
    bool  last_dash_char_dash_was_dash_tab4096;
    ;
    ;
};

struct envunion1441 {
    struct Pos_20  (*fun) (  struct env1440*  ,    struct Pos_20  );
    struct env1440 env;
};

static  struct Maybe_28   fmap_dash_maybe1439 (    struct Maybe_28  x1275 ,   struct envunion1441  fun1277 ) {
    struct Maybe_28  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_28_None_t ) {
        return ( (struct Maybe_28) { .tag = Maybe_28_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_28_Just_t ) {
            struct envunion1441  temp1442 = (  fun1277 );
            return ( ( Maybe_28_Just ) ( ( temp1442.fun ( &temp1442.env ,  ( dref1278 .stuff .Maybe_28_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_20   lam1443 (   struct env1440* env ,    struct Pos_20  sel4100 ) {
    struct Pos_20  temp1444 = (  sel4100 );
    temp1444 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4096 ) ? (  op_dash_sub819 ( ( (  sel4100 ) .f_bi ) , (  from_dash_integral48 ( 1 ) ) ) ) : ( (  sel4100 ) .f_bi ) );
    return ( temp1444 );
}

static  enum Unit_7   dedent_dash_selection1431 (   struct env130* env ,    struct Pane_126 *  self4094 ) {
    struct envunion131  temp1432 = ( (struct envunion131){ .fun = (  enum Unit_7  (*) (  struct env109*  ,    struct TextBuf_88 *  ,    struct Cursors_27  ) )begin_dash_changeset1416 , .env =  env->envinst109 } );
    ( temp1432.fun ( &temp1432.env ,  ( ( * (  self4094 ) ) .f_buf ) ,  ( (struct Cursors_27) { .f_cur = ( ( * (  self4094 ) ) .f_cursor ) , .f_sel = ( ( * (  self4094 ) ) .f_sel ) } ) ) );
    struct Pos_20  temp1433 = ( (  min_dash_pos1353 ) ( (  self4094 ) ) );
    temp1433 .  f_bi = (  from_dash_integral48 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4095 = (  eq410 ( ( (  char_dash_at1204 ) ( (  self4094 ) ,  ( temp1433 ) ) ) , ( (  from_dash_charlike228 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_20  temp1434 = ( (  max_dash_pos1342 ) ( (  self4094 ) ) );
    temp1434 .  f_bi = (  from_dash_integral48 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4096 = (  eq410 ( ( (  char_dash_at1204 ) ( (  self4094 ) ,  ( temp1434 ) ) ) , ( (  from_dash_charlike228 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_696  temp1435 =  into_dash_iter698 ( ( (  to701 ) ( ( ( (  min_dash_pos1353 ) ( (  self4094 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1342 ) ( (  self4094 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_279  __cond1436 =  next699 (&temp1435);
        if (  __cond1436 .tag == 0 ) {
            break;
        }
        int32_t  line4098 =  __cond1436 .stuff .Maybe_279_Just_s .field0;
        if ( (  eq410 ( ( (  char_dash_at1204 ) ( (  self4094 ) ,  ( (struct Pos_20) { .f_line = (  line4098 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike228 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion132  temp1437 = ( (struct envunion132){ .fun = (  struct Maybe_113  (*) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  ) )change1031 , .env =  env->envinst104 } );
            ( temp1437.fun ( &temp1437.env ,  ( ( * (  self4094 ) ) .f_buf ) ,  ( (struct Pos_20) { .f_line = (  line4098 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ,  ( (struct Pos_20) { .f_line = (  line4098 ) , .f_bi = (  from_dash_integral48 ( 1 ) ) } ) ,  ( (  from_dash_string227 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_113) { .tag = Maybe_113_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1422 ) ( ( ( * (  self4094 ) ) .f_buf ) ) );
    struct Pos_20  temp1438 = ( ( * (  self4094 ) ) .f_cursor );
    temp1438 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4095 ) ? (  op_dash_sub819 ( ( ( ( * (  self4094 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral48 ( 1 ) ) ) ) : ( ( ( * (  self4094 ) ) .f_cursor ) .f_bi ) );
    struct env1440 envinst1440 = {
        .last_dash_char_dash_was_dash_tab4096 =  last_dash_char_dash_was_dash_tab4096 ,
    };
    ( (  set_dash_cursors952 ) ( (  self4094 ) ,  ( temp1438 ) ,  ( (  fmap_dash_maybe1439 ) ( ( ( * (  self4094 ) ) .f_sel ) ,  ( (struct envunion1441){ .fun = (  struct Pos_20  (*) (  struct env1440*  ,    struct Pos_20  ) )lam1443 , .env =  envinst1440 } ) ) ) ,  ( CursorMovement_953_UpdateVI ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   handle_dash_normal_dash_key950 (   struct env146* env ,    struct Editor_143 *  ed4222 ,    struct Key_165  key4224 ) {
    struct Key_165  dref4225 = (  key4224 );
    if ( dref4225.tag == Key_165_Char_t ) {
        if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4222 ) .f_running = ( false );
        } else {
            if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left951 ) ( ( (  pane995 ) ( (  ed4222 ) ) ) ) );
            } else {
                if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right996 ) ( ( (  pane995 ) ( (  ed4222 ) ) ) ) );
                } else {
                    if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down999 ) ( ( (  pane995 ) ( (  ed4222 ) ) ) ) );
                    } else {
                        if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up1003 ) ( ( (  pane995 ) ( (  ed4222 ) ) ) ) );
                        } else {
                            if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode1004 ) ( ( (  pane995 ) ( (  ed4222 ) ) ) ,  ( Mode_127_Insert ) ) );
                            } else {
                                if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "I" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  move_dash_to_dash_beginning_dash_indented1006 ) ( ( (  pane995 ) ( (  ed4222 ) ) ) ) );
                                    ( (  set_dash_mode1004 ) ( ( (  pane995 ) ( (  ed4222 ) ) ) ,  ( Mode_127_Insert ) ) );
                                } else {
                                    if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  move_dash_to_dash_end1025 ) ( ( (  pane995 ) ( (  ed4222 ) ) ) ) );
                                        ( (  set_dash_mode1004 ) ( ( (  pane995 ) ( (  ed4222 ) ) ) ,  ( Mode_127_Insert ) ) );
                                    } else {
                                        if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                            struct Pane_126 *  pane4227 = ( (  pane995 ) ( (  ed4222 ) ) );
                                            int32_t  indent4228 = ( (  indent_dash_at_dash_line1007 ) ( (  pane4227 ) ,  ( ( ( * (  pane4227 ) ) .f_cursor ) .f_line ) ) );
                                            ( (  move_dash_to_dash_end1025 ) ( (  pane4227 ) ) );
                                            struct envunion1028  temp1027 = ( (struct envunion1028){ .fun = (  enum Unit_7  (*) (  struct env111*  ,    struct Pane_126 *  ,    struct StrView_21  ) )add_dash_str_dash_at_dash_char1029 , .env =  env->envinst111 } );
                                            ( temp1027.fun ( &temp1027.env ,  (  pane4227 ) ,  ( (  from_dash_charlike1092 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                            ( (  move_dash_right996 ) ( (  pane4227 ) ) );
                                            struct envunion152  temp1168 = ( (struct envunion152){ .fun = (  enum Unit_7  (*) (  struct env133*  ,    struct Pane_126 *  ,    int32_t  ) )indent_dash_at_dash_current1169 , .env =  env->envinst133 } );
                                            ( temp1168.fun ( &temp1168.env ,  (  pane4227 ) ,  (  indent4228 ) ) );
                                            ( (  set_dash_mode1004 ) ( (  pane4227 ) ,  ( Mode_127_Insert ) ) );
                                        } else {
                                            if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct Pane_126 *  pane4229 = ( (  pane995 ) ( (  ed4222 ) ) );
                                                int32_t  indent4230 = ( (  indent_dash_at_dash_line1007 ) ( (  pane4229 ) ,  ( ( ( * (  pane4229 ) ) .f_cursor ) .f_line ) ) );
                                                ( (  move_dash_to_dash_beginning1175 ) ( (  pane4229 ) ) );
                                                struct envunion153  temp1177 = ( (struct envunion153){ .fun = (  enum Unit_7  (*) (  struct env111*  ,    struct Pane_126 *  ,    struct StrView_21  ) )add_dash_str_dash_at_dash_char1029 , .env =  env->envinst111 } );
                                                ( temp1177.fun ( &temp1177.env ,  (  pane4229 ) ,  ( (  from_dash_charlike1092 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                                struct envunion1179  temp1178 = ( (struct envunion1179){ .fun = (  enum Unit_7  (*) (  struct env133*  ,    struct Pane_126 *  ,    int32_t  ) )indent_dash_at_dash_current1169 , .env =  env->envinst133 } );
                                                ( temp1178.fun ( &temp1178.env ,  (  pane4229 ) ,  (  indent4230 ) ) );
                                                ( (  set_dash_mode1004 ) ( (  pane4229 ) ,  ( Mode_127_Insert ) ) );
                                            } else {
                                                if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  advance_dash_word1180 ) ( ( (  pane995 ) ( (  ed4222 ) ) ) ,  ( MoveDirection_1181_MoveFwd ) ,  ( MoveTarget_1182_NextWordStart ) ) );
                                                } else {
                                                    if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  advance_dash_word1180 ) ( ( (  pane995 ) ( (  ed4222 ) ) ) ,  ( MoveDirection_1181_MoveFwd ) ,  ( MoveTarget_1182_NextWordEnd ) ) );
                                                    } else {
                                                        if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  advance_dash_word1180 ) ( ( (  pane995 ) ( (  ed4222 ) ) ) ,  ( MoveDirection_1181_MoveBwd ) ,  ( MoveTarget_1182_NextWordEnd ) ) );
                                                        } else {
                                                            if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion147  temp1216 = ( (struct envunion147){ .fun = (  enum Unit_7  (*) (  struct env118*  ,    struct Pane_126 *  ) )redo1217 , .env =  env->envinst118 } );
                                                                ( temp1216.fun ( &temp1216.env ,  ( (  pane995 ) ( (  ed4222 ) ) ) ) );
                                                            } else {
                                                                if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct envunion156  temp1241 = ( (struct envunion156){ .fun = (  enum Unit_7  (*) (  struct env116*  ,    struct Pane_126 *  ) )undo1242 , .env =  env->envinst116 } );
                                                                    ( temp1241.fun ( &temp1241.env ,  ( (  pane995 ) ( (  ed4222 ) ) ) ) );
                                                                } else {
                                                                    if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct envunion151  temp1259 = ( (struct envunion151){ .fun = (  enum Unit_7  (*) (  struct env135*  ,    struct Editor_143 *  ) )copy_dash_selection_dash_to_dash_clipboard1260 , .env =  env->envinst135 } );
                                                                        ( temp1259.fun ( &temp1259.env ,  (  ed4222 ) ) );
                                                                        struct envunion149  temp1272 = ( (struct envunion149){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_126 *  ,    struct Tuple2_150  ,    struct StrView_21  ) )replace_dash_selection1273 , .env =  env->envinst120 } );
                                                                        ( temp1272.fun ( &temp1272.env ,  ( (  pane995 ) ( (  ed4222 ) ) ) ,  ( (  selection1261 ) ( ( (  pane995 ) ( (  ed4222 ) ) ) ) ) ,  ( (  from_dash_string227 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                        ( (  set_dash_mode1004 ) ( ( (  pane995 ) ( (  ed4222 ) ) ) ,  ( Mode_127_Normal ) ) );
                                                                    } else {
                                                                        if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct envunion1281  temp1280 = ( (struct envunion1281){ .fun = (  enum Unit_7  (*) (  struct env135*  ,    struct Editor_143 *  ) )copy_dash_selection_dash_to_dash_clipboard1260 , .env =  env->envinst135 } );
                                                                            ( temp1280.fun ( &temp1280.env ,  (  ed4222 ) ) );
                                                                            struct envunion1283  temp1282 = ( (struct envunion1283){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_126 *  ,    struct Tuple2_150  ,    struct StrView_21  ) )replace_dash_selection1273 , .env =  env->envinst120 } );
                                                                            ( temp1282.fun ( &temp1282.env ,  ( (  pane995 ) ( (  ed4222 ) ) ) ,  ( (  selection1261 ) ( ( (  pane995 ) ( (  ed4222 ) ) ) ) ) ,  ( (  from_dash_string227 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                            ( (  set_dash_mode1004 ) ( ( (  pane995 ) ( (  ed4222 ) ) ) ,  ( Mode_127_Insert ) ) );
                                                                        } else {
                                                                            if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                struct envunion1285  temp1284 = ( (struct envunion1285){ .fun = (  enum Unit_7  (*) (  struct env135*  ,    struct Editor_143 *  ) )copy_dash_selection_dash_to_dash_clipboard1260 , .env =  env->envinst135 } );
                                                                                ( temp1284.fun ( &temp1284.env ,  (  ed4222 ) ) );
                                                                                size_t  bytes_dash_yanked4231 = ( (  num_dash_bytes991 ) ( ( (  or_dash_else382 ) ( ( ( * (  ed4222 ) ) .f_clipboard ) ,  ( (  from_dash_string227 ) ( ( "" ) ,  ( 0 ) ) ) ) ) ) );
                                                                                struct envunion154  temp1286 = ( (struct envunion154){ .fun = (  enum Unit_7  (*) (  struct env137*  ,    struct Editor_143 *  ,    struct StrConcat_64  ) )set_dash_msg1287 , .env =  env->envinst137 } );
                                                                                ( temp1286.fun ( &temp1286.env ,  (  ed4222 ) ,  ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4231 ) ) ) ,  ( (  from_dash_string227 ) ( ( " bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    struct env1337 envinst1337 = {
                                                                                        .ed4222 =  ed4222 ,
                                                                                        .envinst120 = env->envinst120 ,
                                                                                    };
                                                                                    ( (  if_dash_just1336 ) ( ( ( * (  ed4222 ) ) .f_clipboard ) ,  ( (struct envunion1339){ .fun = (  enum Unit_7  (*) (  struct env1337*  ,    struct StrView_21  ) )lam1341 , .env =  envinst1337 } ) ) );
                                                                                } else {
                                                                                    if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        struct env1348 envinst1348 = {
                                                                                            .envinst120 = env->envinst120 ,
                                                                                            .ed4222 =  ed4222 ,
                                                                                        };
                                                                                        ( (  if_dash_just1347 ) ( ( ( * (  ed4222 ) ) .f_clipboard ) ,  ( (struct envunion1350){ .fun = (  enum Unit_7  (*) (  struct env1348*  ,    struct StrView_21  ) )lam1352 , .env =  envinst1348 } ) ) );
                                                                                    } else {
                                                                                        if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            struct env1357 envinst1357 = {
                                                                                                .envinst120 = env->envinst120 ,
                                                                                                .ed4222 =  ed4222 ,
                                                                                            };
                                                                                            ( (  if_dash_just1356 ) ( ( ( * (  ed4222 ) ) .f_clipboard ) ,  ( (struct envunion1359){ .fun = (  enum Unit_7  (*) (  struct env1357*  ,    struct StrView_21  ) )lam1361 , .env =  envinst1357 } ) ) );
                                                                                        } else {
                                                                                            if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  expand1363 ) ( ( (  pane995 ) ( (  ed4222 ) ) ) ) );
                                                                                            } else {
                                                                                                if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  set_dash_mode1004 ) ( ( (  pane995 ) ( (  ed4222 ) ) ) ,  ( Mode_127_Select ) ) );
                                                                                                    if ( ( (  is_dash_none1367 ) ( ( ( ( * (  ed4222 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                                        (*  ed4222 ) .f_pane .f_sel = ( ( Maybe_28_Just ) ( ( ( ( * (  ed4222 ) ) .f_pane ) .f_cursor ) ) );
                                                                                                    }
                                                                                                } else {
                                                                                                    if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        (*  ed4222 ) .f_mode = ( ( EditorMode_145_Cmd ) ( ( ( * ( (  pane995 ) ( (  ed4222 ) ) ) ) .f_cursor ) ,  ( (  mk1291 ) ( ( ( * (  ed4222 ) ) .f_al ) ) ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            (*  ed4222 ) .f_mode = ( ( EditorMode_145_Search ) ( ( ( * ( (  pane995 ) ( (  ed4222 ) ) ) ) .f_cursor ) ,  ( (  mk1291 ) ( ( ( * (  ed4222 ) ) .f_al ) ) ) ) );
                                                                                                        } else {
                                                                                                            if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                ( (  next_dash_match1368 ) ( (  ed4222 ) ) );
                                                                                                            } else {
                                                                                                                if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                    ( (  prev_dash_match1404 ) ( (  ed4222 ) ) );
                                                                                                                } else {
                                                                                                                    if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( ">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                        struct envunion148  temp1413 = ( (struct envunion148){ .fun = (  enum Unit_7  (*) (  struct env124*  ,    struct Pane_126 *  ) )indent_dash_selection1414 , .env =  env->envinst124 } );
                                                                                                                        ( temp1413.fun ( &temp1413.env ,  ( (  pane995 ) ( (  ed4222 ) ) ) ) );
                                                                                                                    } else {
                                                                                                                        if ( (  eq793 ( ( dref4225 .stuff .Key_165_Char_s .field0 ) , ( (  from_dash_charlike794 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                            struct envunion155  temp1430 = ( (struct envunion155){ .fun = (  enum Unit_7  (*) (  struct env130*  ,    struct Pane_126 *  ) )dedent_dash_selection1431 , .env =  env->envinst130 } );
                                                                                                                            ( temp1430.fun ( &temp1430.env ,  ( (  pane995 ) ( (  ed4222 ) ) ) ) );
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
        }
    }
    else {
        if ( dref4225.tag == Key_165_Escape_t ) {
            ( (  set_dash_mode1004 ) ( ( (  pane995 ) ( (  ed4222 ) ) ) ,  ( Mode_127_Normal ) ) );
        }
        else {
            if ( true ) {
            }
        }
    }
    return ( Unit_7_Unit );
}

struct envunion1446 {
    enum Unit_7  (*fun) (  struct env146*  ,    struct Editor_143 *  ,    struct Key_165  );
    struct env146 env;
};

struct envunion1448 {
    enum Unit_7  (*fun) (  struct env111*  ,    struct Pane_126 *  ,    struct StrView_21  );
    struct env111 env;
};

static  enum Unit_7   backspace1451 (   struct env114* env ,    struct Pane_126 *  self4050 ) {
    struct Pos_20  prev_dash_cur4051 = ( ( * (  self4050 ) ) .f_cursor );
    ( (  move_dash_left951 ) ( (  self4050 ) ) );
    struct envunion115  temp1452 = ( (struct envunion115){ .fun = (  struct Maybe_113  (*) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  ) )change1031 , .env =  env->envinst104 } );
    ( temp1452.fun ( &temp1452.env ,  ( ( * (  self4050 ) ) .f_buf ) ,  ( ( * (  self4050 ) ) .f_cursor ) ,  (  prev_dash_cur4051 ) ,  ( (  from_dash_string227 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_113) { .tag = Maybe_113_None_t } ) ) );
    return ( Unit_7_Unit );
}

struct Array_1454 {
    char _arr [1];
};

static  char *   cast1455 (    struct Array_1454 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_809   as_dash_slice1453 (    struct Array_1454 *  arr2272 ) {
    return ( (struct Slice_809) { .f_ptr = ( (  cast1455 ) ( (  arr2272 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1454   from_dash_listlike1457 (    struct Array_1454  self330 ) {
    return (  self330 );
}

struct Scanner_1461 {
    struct StrView_21  f_s;
};

static  struct Scanner_1461   mk_dash_from_dash_strview1463 (    struct StrView_21  s3169 ) {
    return ( (struct Scanner_1461) { .f_s = (  s3169 ) } );
}

struct TakeWhile_1468 {
    struct StrViewIter_610  f_it;
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

static  struct Maybe_613   next1472 (    struct TakeWhile_1468 *  self964 ) {
    struct Maybe_613  mx965 = ( (  next614 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_613  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_613_None_t ) {
        return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_613_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_613_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_613_Just ) ( ( dref966 .stuff .Maybe_613_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
            }
        }
    }
}

static  struct Maybe_1013   next1471 (    struct Map_1467 *  dref798 ) {
    struct Maybe_613  dref801 = ( (  next1472 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_613_None_t ) {
        return ( (struct Maybe_1013) { .tag = Maybe_1013_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_613_Just_t ) {
            return ( ( Maybe_1013_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_613_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1469 (    struct Map_1467  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1467  it1099 = ( (  into_dash_iter1470 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1013  dref1100 = ( (  next1471 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1013_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1013_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1013_Just_s .field0 ) ,  (  x1098 ) ) );
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
    return (  op_dash_add239 ( (  v1112 ) , (  s1114 ) ) );
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

static  struct TakeWhile_1468   take_dash_while1478 (    struct StrViewIter_610  it970 ,    bool (*  pred972 )(    struct Char_57  ) ) {
    return ( (struct TakeWhile_1468) { .f_it = ( (  into_dash_iter612 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1479 (    struct Char_57  c2202 ) {
    return ( (  c2202 ) .f_num_dash_bytes );
}

static  struct StrView_21   take_dash_while1465 (    struct StrView_21  self2198 ,    bool (*  fun2200 )(    struct Char_57  ) ) {
    size_t  bi2203 = ( (  sum1466 ) ( ( (  map1476 ) ( ( (  take_dash_while1478 ) ( ( (  chars615 ) ( (  self2198 ) ) ) ,  (  fun2200 ) ) ) ,  (  lam1479 ) ) ) ) );
    return ( (  byte_dash_substr392 ) ( (  self2198 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2203 ) ) );
}

static  struct StrView_21   take_dash_str_dash_while1464 (    struct Scanner_1461 *  sc3215 ,    bool (*  fun3217 )(    struct Char_57  ) ) {
    struct StrView_21  s3218 = ( (  take_dash_while1465 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  (  fun3217 ) ) );
    (*  sc3215 ) .f_s = ( (  byte_dash_substr_dash_from1394 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  ( (  num_dash_bytes991 ) ( (  s3218 ) ) ) ) );
    return (  s3218 );
}

static  bool   is_dash_not_dash_whitespace1480 (    struct Char_57  c2382 ) {
    return ( ! ( (  is_dash_whitespace1203 ) ( (  c2382 ) ) ) );
}

struct TakeWhile_1486 {
    struct StrViewIter_610  f_it;
    bool (*  f_pred )(    struct Char_57  );
};

struct Map_1485 {
    struct TakeWhile_1486  field0;
    size_t (*  field1 )(    struct Char_57  );
};

static struct Map_1485 Map_1485_Map (  struct TakeWhile_1486  field0 ,  size_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1485 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1485   into_dash_iter1488 (    struct Map_1485  self796 ) {
    return (  self796 );
}

static  struct Maybe_613   next1490 (    struct TakeWhile_1486 *  self964 ) {
    struct Maybe_613  mx965 = ( (  next614 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_613  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_613_None_t ) {
        return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_613_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_613_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_613_Just ) ( ( dref966 .stuff .Maybe_613_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
            }
        }
    }
}

static  struct Maybe_1013   next1489 (    struct Map_1485 *  dref798 ) {
    struct Maybe_613  dref801 = ( (  next1490 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_613_None_t ) {
        return ( (struct Maybe_1013) { .tag = Maybe_1013_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_613_Just_t ) {
            return ( ( Maybe_1013_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_613_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1487 (    struct Map_1485  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1485  it1099 = ( (  into_dash_iter1488 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1013  dref1100 = ( (  next1489 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1013_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1013_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1013_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1491 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1491);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1492;
    return (  temp1492 );
}

static  size_t   lam1493 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add239 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1484 (    struct Map_1485  it1110 ) {
    return ( (  reduce1487 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1493 ) ) );
}

static  struct TakeWhile_1486   into_dash_iter1495 (    struct TakeWhile_1486  self961 ) {
    return (  self961 );
}

static  struct Map_1485   map1494 (    struct TakeWhile_1486  iterable805 ,    size_t (*  fun807 )(    struct Char_57  ) ) {
    struct TakeWhile_1486  it808 = ( (  into_dash_iter1495 ) ( (  iterable805 ) ) );
    return ( ( Map_1485_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1486   take_dash_while1496 (    struct StrViewIter_610  it970 ,    bool (*  pred972 )(    struct Char_57  ) ) {
    return ( (struct TakeWhile_1486) { .f_it = ( (  into_dash_iter612 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1497 (    struct Char_57  c2202 ) {
    return ( (  c2202 ) .f_num_dash_bytes );
}

static  struct StrView_21   take_dash_while1483 (    struct StrView_21  self2198 ,    bool (*  fun2200 )(    struct Char_57  ) ) {
    size_t  bi2203 = ( (  sum1484 ) ( ( (  map1494 ) ( ( (  take_dash_while1496 ) ( ( (  chars615 ) ( (  self2198 ) ) ) ,  (  fun2200 ) ) ) ,  (  lam1497 ) ) ) ) );
    return ( (  byte_dash_substr392 ) ( (  self2198 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2203 ) ) );
}

static  struct StrView_21   take_dash_str_dash_while1482 (    struct Scanner_1461 *  sc3215 ,    bool (*  fun3217 )(    struct Char_57  ) ) {
    struct StrView_21  s3218 = ( (  take_dash_while1483 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  (  fun3217 ) ) );
    (*  sc3215 ) .f_s = ( (  byte_dash_substr_dash_from1394 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  ( (  num_dash_bytes991 ) ( (  s3218 ) ) ) ) );
    return (  s3218 );
}

static  enum Unit_7   drop_dash_str_dash_while1481 (    struct Scanner_1461 *  sc3221 ,    bool (*  fun3223 )(    struct Char_57  ) ) {
    ( (  take_dash_str_dash_while1482 ) ( (  sc3221 ) ,  (  fun3223 ) ) );
    return ( Unit_7_Unit );
}

static  bool   eq1498 (    struct StrView_21  l2209 ,    struct StrView_21  r2211 ) {
    return (  eq1378 ( ( (  l2209 ) .f_contents ) , ( (  r2211 ) .f_contents ) ) );
}

static  enum Unit_7   undefined1500 (  ) {
    enum Unit_7  temp1501;
    return (  temp1501 );
}

static  enum Unit_7   todo1499 (  ) {
    ( (  print1209 ) ( ( (  from_dash_string227 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined1500 ) ( ) );
}

struct env1504 {
    bool (*  fun1126 )(    struct Char_57  );
};

struct envunion1505 {
    bool  (*fun) (  struct env1504*  ,    struct Char_57  ,    bool  );
    struct env1504 env;
};

static  bool   reduce1503 (    struct StrView_21  iterable1093 ,    bool  base1095 ,   struct envunion1505  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct StrViewIter_610  it1099 = ( (  into_dash_iter616 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_613  dref1100 = ( (  next614 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_613_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_613_Just_t ) {
                struct envunion1505  temp1506 = (  fun1097 );
                x1098 = ( temp1506.fun ( &temp1506.env ,  ( dref1100 .stuff .Maybe_613_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1507 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1507);
    exit ( 1 );
    ( Unit_7_Unit );
    bool  temp1508;
    return (  temp1508 );
}

static  bool   lam1509 (   struct env1504* env ,    struct Char_57  e1128 ,    bool  x1130 ) {
    return ( ( ( env->fun1126 ) ( (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1502 (    struct StrView_21  it1124 ,    bool (*  fun1126 )(    struct Char_57  ) ) {
    struct env1504 envinst1504 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1503 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1505){ .fun = (  bool  (*) (  struct env1504*  ,    struct Char_57  ,    bool  ) )lam1509 , .env =  envinst1504 } ) ) );
}

struct env1518 {
    struct env52 envinst52;
    struct StrBuilder_54 *  builder2749;
};

struct envunion1519 {
    enum Unit_7  (*fun) (  struct env1518*  ,    struct Char_57  );
    struct env1518 env;
};

static  enum Unit_7   for_dash_each1517 (    struct StrViewIter_610  iterable1074 ,   struct envunion1519  fun1076 ) {
    struct StrViewIter_610  temp1520 = ( (  into_dash_iter612 ) ( (  iterable1074 ) ) );
    struct StrViewIter_610 *  it1077 = ( &temp1520 );
    while ( ( true ) ) {
        struct Maybe_613  dref1078 = ( (  next614 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_613_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_613_Just_t ) {
                struct envunion1519  temp1521 = (  fun1076 );
                ( temp1521.fun ( &temp1521.env ,  ( dref1078 .stuff .Maybe_613_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1522 (   struct env1518* env ,    struct Char_57  c2753 ) {
    struct envunion56  temp1523 = ( (struct envunion56){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1324 , .env =  env->envinst52 } );
    return ( temp1523.fun ( &temp1523.env ,  ( env->builder2749 ) ,  (  c2753 ) ) );
}

static  enum Unit_7   write1516 (   struct env58* env ,    struct StrBuilder_54 *  builder2749 ,    struct StrView_21  s2751 ) {
    struct env1518 envinst1518 = {
        .envinst52 = env->envinst52 ,
        .builder2749 =  builder2749 ,
    };
    ( (  for_dash_each1517 ) ( ( (  chars615 ) ( (  s2751 ) ) ) ,  ( (struct envunion1519){ .fun = (  enum Unit_7  (*) (  struct env1518*  ,    struct Char_57  ) )lam1522 , .env =  envinst1518 } ) ) );
    return ( Unit_7_Unit );
}

static  struct StrView_21   mk_dash_dyn_dash_str1513 (   struct env66* env ,    struct StrView_21  s2807 ,    enum CAllocator_9  al2809 ) {
    struct StrBuilder_54  temp1514 = ( (  mk1291 ) ( (  al2809 ) ) );
    struct StrBuilder_54 *  sb2810 = ( &temp1514 );
    struct envunion67  temp1515 = ( (struct envunion67){ .fun = (  enum Unit_7  (*) (  struct env58*  ,    struct StrBuilder_54 *  ,    struct StrView_21  ) )write1516 , .env =  env->envinst58 } );
    ( temp1515.fun ( &temp1515.env ,  (  sb2810 ) ,  (  s2807 ) ) );
    struct envunion62  temp1524 = ( (struct envunion62){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1324 , .env =  env->envinst52 } );
    ( temp1524.fun ( &temp1524.env ,  (  sb2810 ) ,  ( (  nullchar535 ) ( ) ) ) );
    struct StrView_21  dynstr2811 = ( (  as_dash_str1333 ) ( (  sb2810 ) ) );
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = ( ( (  dynstr2811 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub311 ( ( ( (  dynstr2811 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_7   set_dash_msg1511 (   struct env139* env ,    struct Editor_143 *  ed4176 ,    struct StrView_21  s4178 ) {
    ( (  reset_dash_msg939 ) ( (  ed4176 ) ) );
    struct envunion140  temp1512 = ( (struct envunion140){ .fun = (  struct StrView_21  (*) (  struct env66*  ,    struct StrView_21  ,    enum CAllocator_9  ) )mk_dash_dyn_dash_str1513 , .env =  env->envinst66 } );
    (*  ed4176 ) .f_msg = ( ( Maybe_144_Just ) ( ( temp1512.fun ( &temp1512.env ,  (  s4178 ) ,  ( ( * (  ed4176 ) ) .f_al ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   run_dash_cmd1460 (   struct env141* env ,    struct Editor_143 *  ed4189 ,    struct StrView_21  s4191 ) {
    struct Scanner_1461  temp1462 = ( (  mk_dash_from_dash_strview1463 ) ( (  s4191 ) ) );
    struct Scanner_1461 *  sc4192 = ( &temp1462 );
    struct StrView_21  cmd4193 = ( (  take_dash_str_dash_while1464 ) ( (  sc4192 ) ,  (  is_dash_not_dash_whitespace1480 ) ) );
    ( (  drop_dash_str_dash_while1481 ) ( (  sc4192 ) ,  (  is_dash_whitespace1203 ) ) );
    if ( (  eq1498 ( (  cmd4193 ) , ( (  from_dash_charlike1092 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4189 ) .f_running = ( false );
    } else {
        if ( (  eq1498 ( (  cmd4193 ) , ( (  from_dash_string227 ) ( ( "wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq1498 ( (  cmd4193 ) , ( (  from_dash_charlike1092 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  todo1499 ) ( ) );
            } else {
                if ( (  eq1498 ( (  cmd4193 ) , ( (  from_dash_string227 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                } else {
                    if ( ( (  all1502 ) ( (  cmd4193 ) ,  (  is_dash_digit833 ) ) ) ) {
                    } else {
                        struct envunion142  temp1510 = ( (struct envunion142){ .fun = (  enum Unit_7  (*) (  struct env139*  ,    struct Editor_143 *  ,    struct StrView_21  ) )set_dash_msg1511 , .env =  env->envinst139 } );
                        ( temp1510.fun ( &temp1510.env ,  (  ed4189 ) ,  ( (  from_dash_string227 ) ( ( "unknown command" ) ,  ( 15 ) ) ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   free1525 (    struct StrBuilder_54 *  builder2793 ) {
    ( (  free431 ) ( ( & ( ( * (  builder2793 ) ) .f_chars ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Char_57   ascii_dash_char1527 (    char  c782 ) {
    return ( (  from_dash_u8899 ) ( ( (  ascii_dash_u8752 ) ( (  c782 ) ) ) ) );
}

static  struct Maybe_827   reduce1530 (    struct StrViewIter_610  iterable1093 ,    struct Maybe_827  base1095 ,    struct Maybe_827 (*  fun1097 )(    struct Char_57  ,    struct Maybe_827  ) ) {
    struct Maybe_827  x1098 = (  base1095 );
    struct StrViewIter_610  it1099 = ( (  into_dash_iter612 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_613  dref1100 = ( (  next614 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_613_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_613_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_613_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1531 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1531);
    exit ( 1 );
    ( Unit_7_Unit );
    struct Maybe_827  temp1532;
    return (  temp1532 );
}

static  struct Maybe_827   sequence_dash_maybe1533 (    struct Char_57  e2460 ,    struct Maybe_827  b2462 ) {
    struct Maybe_827  dref2463 = (  b2462 );
    if ( dref2463.tag == Maybe_827_None_t ) {
        return ( (struct Maybe_827) { .tag = Maybe_827_None_t } );
    }
    else {
        if ( dref2463.tag == Maybe_827_Just_t ) {
            struct Maybe_279  dref2465 = ( (  parse_dash_digit858 ) ( (  e2460 ) ) );
            if ( dref2465.tag == Maybe_279_None_t ) {
                return ( (struct Maybe_827) { .tag = Maybe_827_None_t } );
            }
            else {
                if ( dref2465.tag == Maybe_279_Just_t ) {
                    return ( ( Maybe_827_Just ) ( (  op_dash_add412 ( (  op_dash_mul237 ( ( dref2463 .stuff .Maybe_827_Just_s .field0 ) , (  from_dash_integral310 ( 10 ) ) ) ) , ( (  i32_dash_i64867 ) ( ( dref2465 .stuff .Maybe_279_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_827   parse_dash_int1529 (    struct StrView_21  s2457 ) {
    struct StrViewIter_610  cs2467 = ( (  chars615 ) ( (  s2457 ) ) );
    struct Maybe_613  dref2468 = ( (  head1206 ) ( (  cs2467 ) ) );
    if ( dref2468.tag == Maybe_613_Just_t ) {
        return ( (  reduce1530 ) ( (  cs2467 ) ,  ( ( Maybe_827_Just ) ( (  from_dash_integral310 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1533 ) ) );
    }
    else {
        if ( dref2468.tag == Maybe_613_None_t ) {
            return ( (struct Maybe_827) { .tag = Maybe_827_None_t } );
        }
    }
}

static  enum Unit_7   live_dash_cmd1528 (    struct Editor_143 *  ed4181 ,    struct StrView_21  cmd4183 ) {
    struct Maybe_827  dref4184 = ( (  parse_dash_int1529 ) ( (  cmd4183 ) ) );
    if ( dref4184.tag == Maybe_827_Just_t ) {
        int32_t  line4186 = ( (  clamp1345 ) ( ( (  i64_dash_i32869 ) ( ( dref4184 .stuff .Maybe_827_Just_s .field0 ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub819 ( ( (  num_dash_lines998 ) ( ( ( * ( (  pane995 ) ( (  ed4181 ) ) ) ) .f_buf ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
        ( (  set_dash_cursors952 ) ( ( (  pane995 ) ( (  ed4181 ) ) ) ,  ( (struct Pos_20) { .f_line = (  line4186 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_953_NoChanges ) ) );
    }
    else {
        if ( dref4184.tag == Maybe_827_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrViewIter_610   chars1538 (    struct StrBuilder_54  s2801 ) {
    return ( (  into_dash_iter616 ) ( ( (  as_dash_str1333 ) ( ( & (  s2801 ) ) ) ) ) );
}

static  struct StrViewIter_610   into_dash_iter1537 (    struct StrBuilder_54  self2804 ) {
    return ( (  chars1538 ) ( (  self2804 ) ) );
}

static  struct Maybe_613   head1535 (    struct StrBuilder_54  it1142 ) {
    struct StrViewIter_610  temp1536 = ( (  into_dash_iter1537 ) ( (  it1142 ) ) );
    return ( (  next614 ) ( ( &temp1536 ) ) );
}

static  bool   null1534 (    struct StrBuilder_54  it1151 ) {
    struct Maybe_613  dref1152 = ( (  head1535 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_613_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_7   remove1544 (   struct env34* env ,    struct List_11 *  list2076 ,    size_t  i2078 ) {
    struct envunion35  temp1545 = ( (struct envunion35){ .fun = (  enum Unit_7  (*) (  struct env32*  ,    struct List_11 *  ,    size_t  ,    size_t  ) )remove_dash_range434 , .env =  env->envinst32 } );
    ( temp1545.fun ( &temp1545.env ,  (  list2076 ) ,  (  i2078 ) ,  (  op_dash_add239 ( (  i2078 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   pop1542 (   struct env36* env ,    struct List_11 *  list2092 ) {
    if ( (  eq246 ( ( ( * (  list2092 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1076 ) ( ( (  from_dash_string227 ) ( ( "List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct envunion37  temp1543 = ( (struct envunion37){ .fun = (  enum Unit_7  (*) (  struct env34*  ,    struct List_11 *  ,    size_t  ) )remove1544 , .env =  env->envinst34 } );
    return ( temp1543.fun ( &temp1543.env ,  (  list2092 ) ,  (  op_dash_sub311 ( ( ( * (  list2092 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  enum Unit_7   pop1540 (   struct env59* env ,    struct StrBuilder_54 *  sb2767 ) {
    struct envunion60  temp1541 = ( (struct envunion60){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ) )pop1542 , .env =  env->envinst36 } );
    return ( temp1541.fun ( &temp1541.env ,  ( & ( ( * (  sb2767 ) ) .f_chars ) ) ) );
}

struct env1547 {
    struct Editor_143 *  ed4243;
    ;
};

struct envunion1548 {
    enum Unit_7  (*fun) (  struct env1547*  ,    struct StrView_21  );
    struct env1547 env;
};

static  enum Unit_7   if_dash_just1546 (    struct Maybe_144  x1291 ,   struct envunion1548  fun1293 ) {
    struct Maybe_144  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_144_Just_t ) {
        struct envunion1548  temp1549 = (  fun1293 );
        ( temp1549.fun ( &temp1549.env ,  ( dref1294 .stuff .Maybe_144_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_144_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1550 (   struct env1547* env ,    struct StrView_21  st4260 ) {
    ( (  free945 ) ( (  st4260 ) ,  ( ( * ( env->ed4243 ) ) .f_al ) ) );
    return ( Unit_7_Unit );
}

struct envunion1552 {
    enum Unit_7  (*fun) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  );
    struct env52 env;
};

static  struct Maybe_613   head1555 (    struct StrView_21  it1142 ) {
    struct StrViewIter_610  temp1556 = ( (  into_dash_iter616 ) ( (  it1142 ) ) );
    return ( (  next614 ) ( ( &temp1556 ) ) );
}

static  bool   null1554 (    struct StrView_21  it1151 ) {
    struct Maybe_613  dref1152 = ( (  head1555 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_613_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_7   live_dash_search1553 (    struct Editor_143 *  ed4196 ,    struct Pos_20  begin_dash_pos4198 ,    struct StrView_21  query4200 ) {
    if ( ( ! ( (  null1554 ) ( (  query4200 ) ) ) ) ) {
        struct Maybe_1369  dref4201 = ( (  search_dash_from1370 ) ( ( (  pane995 ) ( (  ed4196 ) ) ) ,  (  begin_dash_pos4198 ) ,  (  query4200 ) ) );
        if ( dref4201.tag == Maybe_1369_Just_t ) {
            ( (  set_dash_cursors952 ) ( ( (  pane995 ) ( (  ed4196 ) ) ) ,  ( dref4201 .stuff .Maybe_1369_Just_s .field0 .field1 ) ,  ( ( Maybe_28_Just ) ( ( dref4201 .stuff .Maybe_1369_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_953_NoChanges ) ) );
        }
        else {
            if ( dref4201.tag == Maybe_1369_None_t ) {
                ( (  set_dash_cursors952 ) ( ( (  pane995 ) ( (  ed4196 ) ) ) ,  (  begin_dash_pos4198 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_953_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors952 ) ( ( (  pane995 ) ( (  ed4196 ) ) ) ,  (  begin_dash_pos4198 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_953_NoChanges ) ) );
    }
    return ( Unit_7_Unit );
}

struct envunion1558 {
    enum Unit_7  (*fun) (  struct env59*  ,    struct StrBuilder_54 *  );
    struct env59 env;
};

static  enum Unit_7   handle_dash_key948 (   struct env157* env ,    struct Editor_143 *  ed4243 ,    struct Key_165  key4245 ) {
    struct EditorMode_145 *  dref4246 = ( & ( ( * (  ed4243 ) ) .f_mode ) );
    if ( (* dref4246 ).tag == EditorMode_145_Normal_t ) {
        enum Mode_127  dref4247 = ( ( ( * (  ed4243 ) ) .f_pane ) .f_mode );
        switch (  dref4247 ) {
            case Mode_127_Normal : {
                struct envunion164  temp949 = ( (struct envunion164){ .fun = (  enum Unit_7  (*) (  struct env146*  ,    struct Editor_143 *  ,    struct Key_165  ) )handle_dash_normal_dash_key950 , .env =  env->envinst146 } );
                ( temp949.fun ( &temp949.env ,  (  ed4243 ) ,  (  key4245 ) ) );
                break;
            }
            case Mode_127_Select : {
                struct envunion1446  temp1445 = ( (struct envunion1446){ .fun = (  enum Unit_7  (*) (  struct env146*  ,    struct Editor_143 *  ,    struct Key_165  ) )handle_dash_normal_dash_key950 , .env =  env->envinst146 } );
                ( temp1445.fun ( &temp1445.env ,  (  ed4243 ) ,  (  key4245 ) ) );
                break;
            }
            case Mode_127_Insert : {
                struct Key_165  dref4248 = (  key4245 );
                if ( dref4248.tag == Key_165_Escape_t ) {
                    ( (  set_dash_mode1004 ) ( ( (  pane995 ) ( (  ed4243 ) ) ) ,  ( Mode_127_Normal ) ) );
                }
                else {
                    if ( dref4248.tag == Key_165_Enter_t ) {
                        int32_t  indent4249 = ( (  indent_dash_at_dash_line1007 ) ( ( (  pane995 ) ( (  ed4243 ) ) ) ,  ( ( ( * ( (  pane995 ) ( (  ed4243 ) ) ) ) .f_cursor ) .f_line ) ) );
                        struct envunion1448  temp1447 = ( (struct envunion1448){ .fun = (  enum Unit_7  (*) (  struct env111*  ,    struct Pane_126 *  ,    struct StrView_21  ) )add_dash_str_dash_at_dash_char1029 , .env =  env->envinst111 } );
                        ( temp1447.fun ( &temp1447.env ,  ( (  pane995 ) ( (  ed4243 ) ) ) ,  ( (  from_dash_charlike1092 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right996 ) ( ( (  pane995 ) ( (  ed4243 ) ) ) ) );
                        struct envunion158  temp1449 = ( (struct envunion158){ .fun = (  enum Unit_7  (*) (  struct env133*  ,    struct Pane_126 *  ,    int32_t  ) )indent_dash_at_dash_current1169 , .env =  env->envinst133 } );
                        ( temp1449.fun ( &temp1449.env ,  ( (  pane995 ) ( (  ed4243 ) ) ) ,  (  indent4249 ) ) );
                    }
                    else {
                        if ( dref4248.tag == Key_165_Backspace_t ) {
                            struct envunion163  temp1450 = ( (struct envunion163){ .fun = (  enum Unit_7  (*) (  struct env114*  ,    struct Pane_126 *  ) )backspace1451 , .env =  env->envinst114 } );
                            ( temp1450.fun ( &temp1450.env ,  ( (  pane995 ) ( (  ed4243 ) ) ) ) );
                        }
                        else {
                            if ( dref4248.tag == Key_165_Char_t ) {
                                struct Array_1454  temp1456 = ( (  from_dash_listlike1457 ) ( ( (struct Array_1454) { ._arr = { ( dref4248 .stuff .Key_165_Char_s .field0 ) } } ) ) );
                                struct StrView_21  s4251 = ( (  from_dash_ascii_dash_slice824 ) ( ( (  as_dash_slice1453 ) ( ( &temp1456 ) ) ) ) );
                                struct envunion160  temp1458 = ( (struct envunion160){ .fun = (  enum Unit_7  (*) (  struct env111*  ,    struct Pane_126 *  ,    struct StrView_21  ) )add_dash_str_dash_at_dash_char1029 , .env =  env->envinst111 } );
                                ( temp1458.fun ( &temp1458.env ,  ( (  pane995 ) ( (  ed4243 ) ) ) ,  (  s4251 ) ) );
                                ( (  move_dash_right996 ) ( ( (  pane995 ) ( (  ed4243 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4246 ).tag == EditorMode_145_Cmd_t ) {
            struct Key_165  dref4254 = (  key4245 );
            if ( dref4254.tag == Key_165_Escape_t ) {
                ( (  set_dash_cursors952 ) ( ( (  pane995 ) ( (  ed4243 ) ) ) ,  ( (* dref4246 ) .stuff .EditorMode_145_Cmd_s .field0 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_953_UpdateVI ) ) );
                (*  ed4243 ) .f_mode = ( (struct EditorMode_145) { .tag = EditorMode_145_Normal_t } );
            }
            else {
                if ( dref4254.tag == Key_165_Enter_t ) {
                    struct envunion159  temp1459 = ( (struct envunion159){ .fun = (  enum Unit_7  (*) (  struct env141*  ,    struct Editor_143 *  ,    struct StrView_21  ) )run_dash_cmd1460 , .env =  env->envinst141 } );
                    ( temp1459.fun ( &temp1459.env ,  (  ed4243 ) ,  ( (  as_dash_str1333 ) ( ( & ( (* dref4246 ) .stuff .EditorMode_145_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1525 ) ( ( & ( (* dref4246 ) .stuff .EditorMode_145_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors952 ) ( ( (  pane995 ) ( (  ed4243 ) ) ) ,  ( ( * ( (  pane995 ) ( (  ed4243 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_953_UpdateVI ) ) );
                    (*  ed4243 ) .f_mode = ( (struct EditorMode_145) { .tag = EditorMode_145_Normal_t } );
                }
                else {
                    if ( dref4254.tag == Key_165_Char_t ) {
                        struct envunion162  temp1526 = ( (struct envunion162){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1324 , .env =  env->envinst52 } );
                        ( temp1526.fun ( &temp1526.env ,  ( & ( (* dref4246 ) .stuff .EditorMode_145_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1527 ) ( ( dref4254 .stuff .Key_165_Char_s .field0 ) ) ) ) );
                        ( (  live_dash_cmd1528 ) ( (  ed4243 ) ,  ( (  as_dash_str1333 ) ( ( & ( (* dref4246 ) .stuff .EditorMode_145_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4254.tag == Key_165_Backspace_t ) {
                            if ( ( ! ( (  null1534 ) ( ( (* dref4246 ) .stuff .EditorMode_145_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion161  temp1539 = ( (struct envunion161){ .fun = (  enum Unit_7  (*) (  struct env59*  ,    struct StrBuilder_54 *  ) )pop1540 , .env =  env->envinst59 } );
                                ( temp1539.fun ( &temp1539.env ,  ( & ( (* dref4246 ) .stuff .EditorMode_145_Cmd_s .field1 ) ) ) );
                            }
                            ( (  live_dash_cmd1528 ) ( (  ed4243 ) ,  ( (  as_dash_str1333 ) ( ( & ( (* dref4246 ) .stuff .EditorMode_145_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref4246 ).tag == EditorMode_145_Search_t ) {
                struct Key_165  dref4258 = (  key4245 );
                if ( dref4258.tag == Key_165_Escape_t ) {
                    ( (  set_dash_cursors952 ) ( ( (  pane995 ) ( (  ed4243 ) ) ) ,  ( (* dref4246 ) .stuff .EditorMode_145_Search_s .field0 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_953_UpdateVI ) ) );
                    (*  ed4243 ) .f_mode = ( (struct EditorMode_145) { .tag = EditorMode_145_Normal_t } );
                }
                else {
                    if ( dref4258.tag == Key_165_Enter_t ) {
                        ( (  set_dash_cursors952 ) ( ( (  pane995 ) ( (  ed4243 ) ) ) ,  ( ( * ( (  pane995 ) ( (  ed4243 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane995 ) ( (  ed4243 ) ) ) ) .f_sel ) ,  ( CursorMovement_953_UpdateVI ) ) );
                        struct env1547 envinst1547 = {
                            .ed4243 =  ed4243 ,
                        };
                        ( (  if_dash_just1546 ) ( ( ( * (  ed4243 ) ) .f_search_dash_term ) ,  ( (struct envunion1548){ .fun = (  enum Unit_7  (*) (  struct env1547*  ,    struct StrView_21  ) )lam1550 , .env =  envinst1547 } ) ) );
                        if ( ( ! ( (  null1534 ) ( ( (* dref4246 ) .stuff .EditorMode_145_Search_s .field1 ) ) ) ) ) {
                            struct Pos_20  to4261 = ( ( * ( (  pane995 ) ( (  ed4243 ) ) ) ) .f_cursor );
                            struct Pos_20  from4262 = ( (  or_dash_else1263 ) ( ( ( * ( (  pane995 ) ( (  ed4243 ) ) ) ) .f_sel ) ,  (  to4261 ) ) );
                            (*  ed4243 ) .f_search_dash_term = ( ( Maybe_144_Just ) ( ( (  as_dash_str1333 ) ( ( & ( (* dref4246 ) .stuff .EditorMode_145_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4243 ) .f_search_dash_term = ( (struct Maybe_144) { .tag = Maybe_144_None_t } );
                        }
                        (*  ed4243 ) .f_mode = ( (struct EditorMode_145) { .tag = EditorMode_145_Normal_t } );
                    }
                    else {
                        if ( dref4258.tag == Key_165_Char_t ) {
                            struct envunion1552  temp1551 = ( (struct envunion1552){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1324 , .env =  env->envinst52 } );
                            ( temp1551.fun ( &temp1551.env ,  ( & ( (* dref4246 ) .stuff .EditorMode_145_Search_s .field1 ) ) ,  ( (  ascii_dash_char1527 ) ( ( dref4258 .stuff .Key_165_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1553 ) ( (  ed4243 ) ,  ( (* dref4246 ) .stuff .EditorMode_145_Search_s .field0 ) ,  ( (  as_dash_str1333 ) ( ( & ( (* dref4246 ) .stuff .EditorMode_145_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4258.tag == Key_165_Backspace_t ) {
                                if ( ( ! ( (  null1534 ) ( ( (* dref4246 ) .stuff .EditorMode_145_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1558  temp1557 = ( (struct envunion1558){ .fun = (  enum Unit_7  (*) (  struct env59*  ,    struct StrBuilder_54 *  ) )pop1540 , .env =  env->envinst59 } );
                                    ( temp1557.fun ( &temp1557.env ,  ( & ( (* dref4246 ) .stuff .EditorMode_145_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1553 ) ( (  ed4243 ) ,  ( (* dref4246 ) .stuff .EditorMode_145_Search_s .field0 ) ,  ( (  as_dash_str1333 ) ( ( & ( (* dref4246 ) .stuff .EditorMode_145_Search_s .field1 ) ) ) ) ) );
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
                    ( (  todo1499 ) ( ) );
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

struct envunion1560 {
    bool  (*fun) (  struct env77*  ,    struct Screen_668 *  );
    struct env77 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1561 (   struct env77* env ,    struct Screen_668 *  screen3461 ) {
    struct Tui_73 *  tui3462 = ( ( * (  screen3461 ) ) .f_tui );
    struct envunion78  temp1562 = ( (struct envunion78){ .fun = (  bool  (*) (  struct env70*  ,    struct Tui_73 *  ) )update_dash_dimensions739 , .env =  env->envinst70 } );
    bool  updated_dash_dimensions3463 = ( temp1562.fun ( &temp1562.env ,  (  tui3462 ) ) );
    if ( ( ! (  updated_dash_dimensions3463 ) ) ) {
        return ( false );
    }
    (*  screen3461 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3464 = ( ( * ( ( * (  screen3461 ) ) .f_tui ) ) .f_width );
    uint32_t  h3465 = ( ( * ( ( * (  screen3461 ) ) .f_tui ) ) .f_height );
    size_t  nusz3466 = ( (  u32_dash_size682 ) ( (  op_dash_mul690 ( (  w3464 ) , (  h3465 ) ) ) ) );
    if ( (  cmp191 ( (  nusz3466 ) , ( ( ( * (  screen3461 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_668  nuscreen3467 = ( (  mk_dash_screen676 ) ( (  tui3462 ) ,  ( ( * (  screen3461 ) ) .f_al ) ) );
    (*  screen3461 ) .f_current = ( (  nuscreen3467 ) .f_current );
    (*  screen3461 ) .f_previous = ( (  nuscreen3467 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1563 (    struct Tui_73 *  tui3388 ) {
    bool  redraw3389 = ( ( * (  tui3388 ) ) .f_should_dash_redraw );
    (*  tui3388 ) .f_should_dash_redraw = ( false );
    return (  redraw3389 );
}

struct env1567 {
    struct Slice_669  s1905;
    struct Cell_670 (*  fun1907 )(    struct Cell_670  );
    ;
    ;
    ;
};

struct envunion1568 {
    enum Unit_7  (*fun) (  struct env1567*  ,    int32_t  );
    struct env1567 env;
};

static  enum Unit_7   for_dash_each1566 (    struct Range_693  iterable1074 ,   struct envunion1568  fun1076 ) {
    struct RangeIter_696  temp1569 = ( (  into_dash_iter698 ) ( (  iterable1074 ) ) );
    struct RangeIter_696 *  it1077 = ( &temp1569 );
    while ( ( true ) ) {
        struct Maybe_279  dref1078 = ( (  next699 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_279_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_279_Just_t ) {
                struct envunion1568  temp1570 = (  fun1076 );
                ( temp1570.fun ( &temp1570.env ,  ( dref1078 .stuff .Maybe_279_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1571 (   struct env1567* env ,    int32_t  i1909 ) {
    return ( (  set703 ) ( ( env->s1905 ) ,  ( (  i32_dash_size269 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get707 ( ( env->s1905 ) , ( (  i32_dash_size269 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_7   map1565 (    struct Slice_669  s1905 ,    struct Cell_670 (*  fun1907 )(    struct Cell_670  ) ) {
    struct env1567 envinst1567 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each1566 ) ( ( (  to701 ) ( (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_i32203 ) ( (  op_dash_sub311 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1568){ .fun = (  enum Unit_7  (*) (  struct env1567*  ,    int32_t  ) )lam1571 , .env =  envinst1567 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Cell_670   lam1572 (    struct Cell_670  dref3425 ) {
    return ( (  default_dash_cell715 ) ( ) );
}

static  enum Unit_7   clear_dash_screen1564 (    struct Screen_668 *  screen3424 ) {
    ( (  map1565 ) ( ( ( * (  screen3424 ) ) .f_current ) ,  (  lam1572 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_screen_dash_fg1573 (    struct Screen_668 *  screen3470 ,    struct Color_671  c3472 ) {
    (*  screen3470 ) .f_default_dash_fg = (  c3472 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_screen_dash_bg1574 (    struct Screen_668 *  screen3475 ,    struct Color_671  c3477 ) {
    (*  screen3475 ) .f_default_dash_bg = (  c3477 );
    return ( Unit_7_Unit );
}

struct ScreenDims_1576 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

static  int32_t   cast1578 (    uint32_t  x356 ) {
    return ( (int32_t ) (  x356 ) );
}

static  int32_t   u32_dash_i321577 (    uint32_t  x660 ) {
    return ( (  cast1578 ) ( (  x660 ) ) );
}

static  int32_t   screen_dash_width1581 (    struct ScreenDims_1576  sd3877 ) {
    return (  op_dash_add281 ( (  op_dash_sub819 ( ( (  sd3877 ) .f_to_dash_sx ) , ( (  sd3877 ) .f_from_dash_sx ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1582 (    struct ScreenDims_1576  sd3880 ) {
    return (  op_dash_add281 ( (  op_dash_sub819 ( ( (  sd3880 ) .f_to_dash_sy ) , ( (  sd3880 ) .f_from_dash_sy ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
}

static  enum Unit_7   update_dash_screen_dash_offset1580 (    struct Pane_126 *  pane3883 ,    struct ScreenDims_1576  sd3885 ) {
    struct Pos_20  cur3886 = ( ( * (  pane3883 ) ) .f_cursor );
    int32_t  cur_dash_sx3887 = ( (  pos_dash_vi956 ) ( ( ( * (  pane3883 ) ) .f_buf ) ,  (  cur3886 ) ) );
    struct ScreenCursorOffset_128  sc_dash_off3888 = ( ( * (  pane3883 ) ) .f_sc_dash_off );
    int32_t  sw3889 = (  op_dash_sub819 ( ( (  screen_dash_width1581 ) ( (  sd3885 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    int32_t  sh3890 = (  op_dash_sub819 ( ( (  screen_dash_height1582 ) ( (  sd3885 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    int32_t  margin3891 = (  from_dash_integral48 ( 5 ) );
    int32_t  csi3892 = ( (  pos_dash_vi956 ) ( ( ( * (  pane3883 ) ) .f_buf ) ,  (  cur3886 ) ) );
    int32_t  csx3893 = (  op_dash_sub819 ( (  csi3892 ) , ( (  sc_dash_off3888 ) .f_screen_dash_left ) ) );
    int32_t  csy3894 = (  op_dash_sub819 ( ( (  cur3886 ) .f_line ) , ( (  sc_dash_off3888 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left3895 = ( (  sc_dash_off3888 ) .f_screen_dash_left );
    if ( (  cmp324 ( (  csx3893 ) , (  margin3891 ) ) == 0 ) ) {
        nu_dash_screen_dash_left3895 = (  op_dash_sub819 ( (  csi3892 ) , (  margin3891 ) ) );
    } else {
        if ( (  cmp324 ( (  csx3893 ) , (  op_dash_sub819 ( (  sw3889 ) , (  margin3891 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left3895 = (  op_dash_add281 ( (  op_dash_sub819 ( (  csi3892 ) , (  sw3889 ) ) ) , (  margin3891 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left3896 = ( (  max971 ) ( (  nu_dash_screen_dash_left3895 ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top3897 = ( (  sc_dash_off3888 ) .f_screen_dash_top );
    if ( (  cmp324 ( (  csy3894 ) , (  margin3891 ) ) == 0 ) ) {
        nu_dash_screen_dash_top3897 = (  op_dash_sub819 ( ( (  cur3886 ) .f_line ) , (  margin3891 ) ) );
    } else {
        if ( (  cmp324 ( (  csy3894 ) , (  op_dash_sub819 ( (  sh3890 ) , (  margin3891 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top3897 = (  op_dash_add281 ( (  op_dash_sub819 ( ( (  cur3886 ) .f_line ) , (  sh3890 ) ) ) , (  margin3891 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top3898 = ( (  max971 ) ( (  nu_dash_screen_dash_top3897 ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    (*  pane3883 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_128) { .f_screen_dash_top = (  nu_dash_screen_dash_top3898 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left3896 ) } );
    return ( Unit_7_Unit );
}

struct IntStrIter_1584 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

static  struct IntStrIter_1584   into_dash_iter1586 (    struct IntStrIter_1584  self1419 ) {
    return (  self1419 );
}

struct env1590 {
    int32_t  base1210;
    ;
};

struct envunion1591 {
    int32_t  (*fun) (  struct env1590*  ,    int32_t  ,    int32_t  );
    struct env1590 env;
};

static  int32_t   reduce1589 (    struct Range_693  iterable1093 ,    int32_t  base1095 ,   struct envunion1591  fun1097 ) {
    int32_t  x1098 = (  base1095 );
    struct RangeIter_696  it1099 = ( (  into_dash_iter698 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_279  dref1100 = ( (  next699 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_279_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_279_Just_t ) {
                struct envunion1591  temp1592 = (  fun1097 );
                x1098 = ( temp1592.fun ( &temp1592.env ,  ( dref1100 .stuff .Maybe_279_Just_s .field0 ) ,  (  x1098 ) ) );
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

static  int32_t   lam1595 (   struct env1590* env ,    int32_t  item1214 ,    int32_t  x1216 ) {
    return (  op_dash_mul1401 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int32_t   pow1588 (    int32_t  base1210 ,    int32_t  p1212 ) {
    struct env1590 envinst1590 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1589 ) ( ( (  to701 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub819 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral48 ( 1 ) ) ,  ( (struct envunion1591){ .fun = (  int32_t  (*) (  struct env1590*  ,    int32_t  ,    int32_t  ) )lam1595 , .env =  envinst1590 } ) ) );
}

static  uint8_t   cast1596 (    int32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_613   next1587 (    struct IntStrIter_1584 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_613_Just ) ( ( (  from_dash_charlike228 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp324 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
    }
    int32_t  trim_dash_down1423 = ( (  pow1588 ) ( (  from_dash_integral48 ( 10 ) ) ,  (  op_dash_sub819 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    int32_t  upper1424 = (  op_dash_div1400 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    int32_t  upper_dash_mask1425 = (  op_dash_mul1401 ( (  op_dash_div1400 ( (  upper1424 ) , (  from_dash_integral48 ( 10 ) ) ) ) , (  from_dash_integral48 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1596 ) ( (  op_dash_sub819 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub819 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8899 ) ( (  op_dash_add789 ( (  digit1426 ) , (  from_dash_integral219 ( 48 ) ) ) ) ) );
    return ( ( Maybe_613_Just ) ( (  digit_dash_char1427 ) ) );
}

static  size_t   reduce1585 (    struct IntStrIter_1584  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_57  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct IntStrIter_1584  it1099 = ( (  into_dash_iter1586 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_613  dref1100 = ( (  next1587 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_613_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_613_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_613_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1597 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1597);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1598;
    return (  temp1598 );
}

static  size_t   lam1599 (    struct Char_57  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add239 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1583 (    struct IntStrIter_1584  it1104 ) {
    return ( (  reduce1585 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1599 ) ) );
}

static  int32_t   count_dash_digits1602 (    int32_t  self1430 ) {
    if ( (  eq327 ( (  self1430 ) , (  from_dash_integral48 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp324 ( (  self1430 ) , (  from_dash_integral48 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1400 ( (  self1430 ) , (  from_dash_integral48 ( 10 ) ) ) );
        digits1431 = (  op_dash_add281 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1584   int_dash_iter1601 (    int32_t  int1434 ) {
    if ( (  cmp324 ( (  int1434 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1584) { .f_int = (  op_dash_neg643 ( (  int1434 ) ) ) , .f_len = ( (  count_dash_digits1602 ) ( (  op_dash_neg643 ( (  int1434 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1584) { .f_int = (  int1434 ) , .f_len = ( (  count_dash_digits1602 ) ( (  int1434 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1584   chars1600 (    int32_t  self1443 ) {
    return ( (  int_dash_iter1601 ) ( (  self1443 ) ) );
}

struct Map_1607 {
    struct IntStrIter_1584  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1607 Map_1607_Map (  struct IntStrIter_1584  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1607 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1607   into_dash_iter1609 (    struct Map_1607  self796 ) {
    return (  self796 );
}

static  struct Maybe_279   next1610 (    struct Map_1607 *  dref798 ) {
    struct Maybe_613  dref801 = ( (  next1587 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_613_None_t ) {
        return ( (struct Maybe_279) { .tag = Maybe_279_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_613_Just_t ) {
            return ( ( Maybe_279_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_613_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1608 (    struct Map_1607  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1607  it1099 = ( (  into_dash_iter1609 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_279  dref1100 = ( (  next1610 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_279_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_279_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_279_Just_s .field0 ) ,  (  x1098 ) ) );
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
    return (  op_dash_add281 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1606 (    struct Map_1607  it1110 ) {
    return ( (  reduce1608 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1613 ) ) );
}

static  struct Map_1607   map1614 (    struct IntStrIter_1584  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct IntStrIter_1584  it808 = ( (  into_dash_iter1586 ) ( (  iterable805 ) ) );
    return ( ( Map_1607_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  enum Unit_7   put_dash_char1618 (    struct Screen_668 *  screen3508 ,    struct Char_57  c3510 ,    int32_t  x3512 ,    int32_t  y3514 ) {
    int32_t  w3515 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3508 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp324 ( (  x3512 ) , (  w3515 ) ) != 0 ) || (  cmp324 ( (  y3514 ) , ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3508 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp324 ( (  x3512 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) ) || (  cmp324 ( (  y3514 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    size_t  i3516 = ( (  i32_dash_size269 ) ( (  op_dash_add281 ( (  op_dash_mul1401 ( (  y3514 ) , (  w3515 ) ) ) , (  x3512 ) ) ) ) );
    struct Color_671  fg3517 = ( ( * (  screen3508 ) ) .f_default_dash_fg );
    struct Color_671  bg3518 = ( ( * (  screen3508 ) ) .f_default_dash_bg );
    struct Char_57  c3519 = (  c3510 );
    int32_t  char_dash_width3520 = ( (  wcwidth972 ) ( (  c3519 ) ) );
    if ( ( (  cmp324 ( (  x3512 ) , (  from_dash_integral48 ( 0 ) ) ) == 2 ) && (  cmp324 ( ( (  elem_dash_get707 ( ( ( * (  screen3508 ) ) .f_current ) , (  op_dash_sub311 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral48 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_670  pc3521 = (  elem_dash_get707 ( ( ( * (  screen3508 ) ) .f_current ) , (  op_dash_sub311 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set703 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  op_dash_sub311 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_670) { .f_c = ( (  from_dash_charlike228 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3521 ) .f_fg ) , .f_bg = ( (  pc3521 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral48 ( 1 ) ) } ) ) );
    }
    ( (  set703 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  i3516 ) ,  ( (struct Cell_670) { .f_c = (  c3519 ) , .f_fg = (  fg3517 ) , .f_bg = (  bg3518 ) , .f_char_dash_width = (  char_dash_width3520 ) } ) ) );
    struct RangeIter_696  temp1619 =  into_dash_iter698 ( ( (  to701 ) ( (  op_dash_add281 ( (  x3512 ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  ( (  min476 ) ( (  op_dash_sub819 ( (  op_dash_add281 ( (  x3512 ) , (  char_dash_width3520 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  w3515 ) ) ) ) ) );
    while (true) {
        struct Maybe_279  __cond1620 =  next699 (&temp1619);
        if (  __cond1620 .tag == 0 ) {
            break;
        }
        int32_t  xx3523 =  __cond1620 .stuff .Maybe_279_Just_s .field0;
        size_t  i3524 = ( (  i32_dash_size269 ) ( (  op_dash_add281 ( (  op_dash_mul1401 ( (  y3514 ) , (  w3515 ) ) ) , (  xx3523 ) ) ) ) );
        ( (  set703 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  i3524 ) ,  ( (struct Cell_670) { .f_c = ( (  from_dash_charlike228 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = (  fg3517 ) , .f_bg = (  bg3518 ) , .f_char_dash_width = (  from_dash_integral48 ( 1 ) ) } ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str1615 (    struct Screen_668 *  screen3527 ,    int32_t  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp324 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp324 ( (  y3533 ) , ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add281 ( (  op_dash_mul1401 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min476 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size269 ) ( (  op_dash_sub819 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct IntStrIter_1584  temp1616 =  into_dash_iter1586 ( ( (  chars1600 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_613  __cond1617 =  next1587 (&temp1616);
        if (  __cond1617 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1617 .stuff .Maybe_613_Just_s .field0;
        ( (  put_dash_char1618 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add281 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add281 ( (  xx3538 ) , ( (  rendered_dash_wcwidth970 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1605 (    struct Screen_668 *  screen3543 ,    int32_t  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1606 ) ( ( (  map1614 ) ( ( (  chars1600 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth970 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub819 ( (  op_dash_sub819 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1615 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1622 {
    struct StrView_21  field0;
    int32_t  field1;
};

static struct StrConcat_1622 StrConcat_1622_StrConcat (  struct StrView_21  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1622 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1625 {
    struct StrView_21  field0;
    struct StrConcat_1622  field1;
};

static struct StrConcat_1625 StrConcat_1625_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_1622  field1 ) {
    return ( struct StrConcat_1625 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1624 {
    struct StrConcat_1625  field0;
    struct Char_57  field1;
};

static struct StrConcat_1624 StrConcat_1624_StrConcat (  struct StrConcat_1625  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1624 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str1627 (    struct StrConcat_1622  self1503 ) {
    struct StrConcat_1622  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str202 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str209 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str1626 (    struct StrConcat_1625  self1503 ) {
    struct StrConcat_1625  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str202 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str1627 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str1623 (    struct StrConcat_1624  self1503 ) {
    struct StrConcat_1624  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str1626 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str210 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   assert1621 (    bool  cond1718 ,    struct StrConcat_1622  msg1720 ) {
    if ( ( ! (  cond1718 ) ) ) {
        ( (  print_dash_str1623 ) ( ( ( StrConcat_1624_StrConcat ) ( ( ( StrConcat_1625_StrConcat ) ( ( (  from_dash_string227 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1720 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    }
    return ( Unit_7_Unit );
}

struct AppendIter_1629 {
    struct StrViewIter_610  f_it;
    struct Char_57  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1629   into_dash_iter1630 (    struct AppendIter_1629  self1019 ) {
    return (  self1019 );
}

static  struct AppendIter_1629   append1631 (    struct StrViewIter_610  it1006 ,    struct Char_57  e1008 ) {
    return ( (struct AppendIter_1629) { .f_it = ( (  into_dash_iter612 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct Maybe_613   next1633 (    struct AppendIter_1629 *  self1022 ) {
    struct Maybe_613  dref1023 = ( (  next614 ) ( ( & ( ( * (  self1022 ) ) .f_it ) ) ) );
    if ( dref1023.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1023 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1023.tag == Maybe_613_None_t ) {
            if ( ( ! ( ( * (  self1022 ) ) .f_appended ) ) ) {
                (*  self1022 ) .f_appended = ( true );
                return ( ( Maybe_613_Just ) ( ( ( * (  self1022 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
        }
    }
}

static  bool   between1635 (    struct Pos_20  c1337 ,    struct Pos_20  l1339 ,    struct Pos_20  r1341 ) {
    struct Pos_20  from1342 = ( (  min322 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Pos_20  to1343 = ( (  max325 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp323 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp323 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1634 (    struct Pane_126 *  pane3869 ,    struct Pos_20  pos3871 ) {
    return ( {  struct Maybe_28  dref3872 = ( ( * (  pane3869 ) ) .f_sel ) ; dref3872.tag == Maybe_28_Just_t ? ( (  between1635 ) ( (  pos3871 ) ,  ( ( * (  pane3869 ) ) .f_cursor ) ,  ( dref3872 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( false ) ; } );
}

static  enum Unit_7   render1579 (    struct Screen_668 *  screen3901 ,    struct Pane_126 *  pane3903 ,    struct ScreenDims_1576  sd3905 ) {
    bool  display_dash_line_dash_numbers3906 = ( true );
    ( (  update_dash_screen_dash_offset1580 ) ( (  pane3903 ) ,  (  sd3905 ) ) );
    struct ScreenCursorOffset_128  sc_dash_off3907 = ( ( * (  pane3903 ) ) .f_sc_dash_off );
    int32_t  max_dash_line_dash_num_dash_chars3908 = ( (  size_dash_i32203 ) ( ( (  count1583 ) ( ( (  chars1600 ) ( ( (  num_dash_lines998 ) ( ( ( * (  pane3903 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin3909 = (  from_dash_integral48 ( 2 ) );
    int32_t  num_dash_back_dash_margin3910 = (  from_dash_integral48 ( 2 ) );
    int32_t  total_dash_margin3911 = ( (  display_dash_line_dash_numbers3906 ) ? (  op_dash_add281 ( (  op_dash_add281 ( (  max_dash_line_dash_num_dash_chars3908 ) , (  num_dash_front_dash_margin3909 ) ) ) , (  num_dash_back_dash_margin3910 ) ) ) : (  from_dash_integral48 ( 0 ) ) );
    struct RangeIter_696  temp1603 =  into_dash_iter698 ( ( (  to701 ) ( (  op_dash_add281 ( ( (  sc_dash_off3907 ) .f_screen_dash_top ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  ( (  min476 ) ( ( (  num_dash_lines998 ) ( ( ( * (  pane3903 ) ) .f_buf ) ) ) ,  (  op_dash_add281 ( ( (  sc_dash_off3907 ) .f_screen_dash_top ) , ( (  screen_dash_height1582 ) ( (  sd3905 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_279  __cond1604 =  next699 (&temp1603);
        if (  __cond1604 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num3913 =  __cond1604 .stuff .Maybe_279_Just_s .field0;
        int32_t  ybi3914 = (  op_dash_sub819 ( (  line_dash_num3913 ) , (  from_dash_integral48 ( 1 ) ) ) );
        int32_t  xbi3915 = ( (  vi_dash_bi1000 ) ( ( ( * (  pane3903 ) ) .f_buf ) ,  (  ybi3914 ) ,  ( (  sc_dash_off3907 ) .f_screen_dash_left ) ) );
        struct StrView_21  line_dash_content3916 = ( (  line958 ) ( ( ( * (  pane3903 ) ) .f_buf ) ,  (  ybi3914 ) ) );
        int32_t  ys3917 = (  op_dash_sub819 ( (  op_dash_sub819 ( (  op_dash_add281 ( ( (  sd3905 ) .f_from_dash_sy ) , (  line_dash_num3913 ) ) ) , ( (  sc_dash_off3907 ) .f_screen_dash_top ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers3906 ) ) {
            ( (  draw_dash_str_dash_right1605 ) ( (  screen3901 ) ,  (  line_dash_num3913 ) ,  (  op_dash_add281 ( (  op_dash_sub819 ( (  op_dash_sub819 ( ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3901 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd3905 ) .f_from_dash_sx ) ) ) , (  total_dash_margin3911 ) ) ) , (  num_dash_back_dash_margin3910 ) ) ) ,  (  ys3917 ) ) );
        }
        int32_t  vx3918 = (  op_dash_sub819 ( ( (  pos_dash_vi956 ) ( ( ( * (  pane3903 ) ) .f_buf ) ,  ( (  mk305 ) ( (  ybi3914 ) ,  (  xbi3915 ) ) ) ) ) , ( (  sc_dash_off3907 ) .f_screen_dash_left ) ) );
        ( (  assert1621 ) ( (  cmp324 ( (  vx3918 ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1622_StrConcat ) ( ( (  from_dash_string227 ) ( ( "vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx3918 ) ) ) ) );
        int32_t  left_dash_offset3919 = (  op_dash_add281 ( ( (  sd3905 ) .f_from_dash_sx ) , (  total_dash_margin3911 ) ) );
        struct AppendIter_1629  temp1628 =  into_dash_iter1630 ( ( (  append1631 ) ( ( (  chars615 ) ( ( (  byte_dash_substr_dash_from1394 ) ( (  line_dash_content3916 ) ,  ( (  i32_dash_size269 ) ( (  xbi3915 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike228 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_613  __cond1632 =  next1633 (&temp1628);
            if (  __cond1632 .tag == 0 ) {
                break;
            }
            struct Char_57  c3921 =  __cond1632 .stuff .Maybe_613_Just_s .field0;
            if ( (  cmp324 ( (  vx3918 ) , ( (  sd3905 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_20  curpos3922 = ( (  mk305 ) ( (  ybi3914 ) ,  (  xbi3915 ) ) );
            bool  is_dash_cursor3923 = (  eq326 ( (  curpos3922 ) , ( ( * (  pane3903 ) ) .f_cursor ) ) );
            bool  in_dash_selection3924 = ( (  is_dash_in_dash_selection1634 ) ( (  pane3903 ) ,  ( (  mk305 ) ( (  ybi3914 ) ,  (  xbi3915 ) ) ) ) );
            if ( (  is_dash_cursor3923 ) ) {
                (*  screen3901 ) .f_default_dash_fg = ( ( Color_671_Color8 ) ( ( Color8_672_Black8 ) ) );
                (*  screen3901 ) .f_default_dash_bg = ( ( Color_671_Color8 ) ( ( Color8_672_White8 ) ) );
            } else {
                if ( (  in_dash_selection3924 ) ) {
                    (*  screen3901 ) .f_default_dash_bg = ( ( Color_671_Color8 ) ( ( Color8_672_Cyan8 ) ) );
                }
            }
            struct Maybe_144  dref3925 = ( (  char_dash_replacement963 ) ( (  c3921 ) ) );
            if ( dref3925.tag == Maybe_144_None_t ) {
                if ( ( ! ( (  cmp324 ( (  vx3918 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp324 ( (  op_dash_sub819 ( (  op_dash_add281 ( (  vx3918 ) , ( (  char_dash_screen_dash_width961 ) ( (  c3921 ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) , ( (  sd3905 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1618 ) ( (  screen3901 ) ,  (  c3921 ) ,  (  op_dash_add281 ( (  left_dash_offset3919 ) , (  vx3918 ) ) ) ,  (  ys3917 ) ) );
                }
                vx3918 = (  op_dash_add281 ( (  vx3918 ) , ( (  char_dash_screen_dash_width961 ) ( (  c3921 ) ) ) ) );
            }
            else {
                if ( dref3925.tag == Maybe_144_Just_t ) {
                    struct StrViewIter_610  temp1636 =  into_dash_iter612 ( ( (  chars615 ) ( ( dref3925 .stuff .Maybe_144_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_613  __cond1637 =  next614 (&temp1636);
                        if (  __cond1637 .tag == 0 ) {
                            break;
                        }
                        struct Char_57  c3928 =  __cond1637 .stuff .Maybe_613_Just_s .field0;
                        if ( (  cmp324 ( (  vx3918 ) , (  from_dash_integral48 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1618 ) ( (  screen3901 ) ,  (  c3928 ) ,  (  op_dash_add281 ( (  left_dash_offset3919 ) , (  vx3918 ) ) ) ,  (  ys3917 ) ) );
                        }
                        vx3918 = (  op_dash_add281 ( (  vx3918 ) , ( (  char_dash_screen_dash_width961 ) ( (  c3928 ) ) ) ) );
                    }
                }
            }
            (*  screen3901 ) .f_default_dash_fg = ( (struct Color_671) { .tag = Color_671_ColorDefault_t } );
            (*  screen3901 ) .f_default_dash_bg = ( (struct Color_671) { .tag = Color_671_ColorDefault_t } );
            xbi3915 = (  op_dash_add281 ( (  xbi3915 ) , ( (  size_dash_i32203 ) ( ( (  c3921 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    return ( Unit_7_Unit );
}

struct env1639 {
    ;
    ;
    ;
    struct Screen_668 *  screen4266;
    ;
    ;
    int32_t *  curline4270;
    ;
};

struct env1640 {
    ;
    ;
    ;
    struct Screen_668 *  screen4266;
    ;
    ;
    int32_t *  curline4270;
    ;
};

struct env1641 {
    ;
    ;
    ;
    struct Screen_668 *  screen4266;
    ;
    ;
    int32_t *  curline4270;
    ;
};

struct env1642 {
    ;
    ;
    ;
    struct Screen_668 *  screen4266;
    ;
    ;
    int32_t *  curline4270;
    ;
};

struct env1643 {
    ;
    ;
    ;
    struct Screen_668 *  screen4266;
    ;
    ;
    int32_t *  curline4270;
    ;
};

struct env1644 {
    ;
    ;
    ;
    struct Screen_668 *  screen4266;
    ;
    ;
    int32_t *  curline4270;
    ;
};

struct env1645 {
    ;
    ;
    ;
    struct Screen_668 *  screen4266;
    ;
    ;
    int32_t *  curline4270;
    ;
};

struct env1646 {
    ;
    ;
    ;
    struct Screen_668 *  screen4266;
    ;
    ;
    int32_t *  curline4270;
    ;
};

struct env1647 {
    ;
    ;
    ;
    struct Screen_668 *  screen4266;
    ;
    ;
    int32_t *  curline4270;
    ;
};

struct StrConcat_1650 {
    struct StrView_21  field0;
    enum Mode_127  field1;
};

static struct StrConcat_1650 StrConcat_1650_StrConcat (  struct StrView_21  field0 ,  enum Mode_127  field1 ) {
    return ( struct StrConcat_1650 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1649 {
    enum Unit_7  (*fun) (  struct env1639*  ,    struct StrConcat_1650  );
    struct env1639 env;
};

struct StrConcatIter_1655 {
    struct StrViewIter_610  f_left;
    struct StrViewIter_610  f_right;
};

struct Map_1654 {
    struct StrConcatIter_1655  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1654 Map_1654_Map (  struct StrConcatIter_1655  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1654 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1654   into_dash_iter1657 (    struct Map_1654  self796 ) {
    return (  self796 );
}

static  struct Maybe_613   next1659 (    struct StrConcatIter_1655 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_279   next1658 (    struct Map_1654 *  dref798 ) {
    struct Maybe_613  dref801 = ( (  next1659 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_613_None_t ) {
        return ( (struct Maybe_279) { .tag = Maybe_279_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_613_Just_t ) {
            return ( ( Maybe_279_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_613_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1656 (    struct Map_1654  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1654  it1099 = ( (  into_dash_iter1657 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_279  dref1100 = ( (  next1658 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_279_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_279_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_279_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1660 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1660);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1661;
    return (  temp1661 );
}

static  int32_t   lam1662 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add281 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1653 (    struct Map_1654  it1110 ) {
    return ( (  reduce1656 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1662 ) ) );
}

static  struct StrConcatIter_1655   into_dash_iter1664 (    struct StrConcatIter_1655  self1491 ) {
    return (  self1491 );
}

static  struct Map_1654   map1663 (    struct StrConcatIter_1655  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1655  it808 = ( (  into_dash_iter1664 ) ( (  iterable805 ) ) );
    return ( ( Map_1654_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrView_21   todo1668 (  ) {
    ( (  print1209 ) ( ( (  from_dash_string227 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined523 ) ( ) );
}

static  struct StrViewIter_610   chars1667 (    enum Mode_127  self3824 ) {
    return ( (  chars615 ) ( ( {  enum Mode_127  dref3825 = (  self3824 ) ;  dref3825 == Mode_127_Normal ? ( (  from_dash_string227 ) ( ( "Normal" ) ,  ( 6 ) ) ) :  dref3825 == Mode_127_Insert ? ( (  from_dash_string227 ) ( ( "Insert" ) ,  ( 6 ) ) ) :  dref3825 == Mode_127_Select ? ( (  from_dash_string227 ) ( ( "Select" ) ,  ( 6 ) ) ) : ( (  todo1668 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1655   into_dash_iter1666 (    struct StrConcat_1650  dref1498 ) {
    return ( (struct StrConcatIter_1655) { .f_left = ( (  chars615 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1667 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1655   chars1665 (    struct StrConcat_1650  self1509 ) {
    return ( (  into_dash_iter1666 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1669 (    struct Screen_668 *  screen3527 ,    struct StrConcat_1650  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp324 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp324 ( (  y3533 ) , ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add281 ( (  op_dash_mul1401 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min476 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size269 ) ( (  op_dash_sub819 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1655  temp1670 =  into_dash_iter1664 ( ( (  chars1665 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_613  __cond1671 =  next1659 (&temp1670);
        if (  __cond1671 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1671 .stuff .Maybe_613_Just_s .field0;
        ( (  put_dash_char1618 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add281 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add281 ( (  xx3538 ) , ( (  rendered_dash_wcwidth970 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1652 (    struct Screen_668 *  screen3543 ,    struct StrConcat_1650  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1653 ) ( ( (  map1663 ) ( ( (  chars1665 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth970 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub819 ( (  op_dash_sub819 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1669 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1651 (   struct env1639* env ,    struct StrConcat_1650  s4273 ) {
    ( (  draw_dash_str_dash_right1652 ) ( ( env->screen4266 ) ,  (  s4273 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4270 ) ) ) );
    (* env->curline4270 ) = (  op_dash_add281 ( ( * ( env->curline4270 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1676 {
    struct StrView_21  field0;
    struct Pos_20  field1;
};

static struct StrConcat_1676 StrConcat_1676_StrConcat (  struct StrView_21  field0 ,  struct Pos_20  field1 ) {
    return ( struct StrConcat_1676 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1675 {
    struct StrConcat_1676  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1675 StrConcat_1675_StrConcat (  struct StrConcat_1676  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1675 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1674 {
    struct StrConcat_1675  field0;
    enum CharType_1194  field1;
};

static struct StrConcat_1674 StrConcat_1674_StrConcat (  struct StrConcat_1675  field0 ,  enum CharType_1194  field1 ) {
    return ( struct StrConcat_1674 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1673 {
    enum Unit_7  (*fun) (  struct env1640*  ,    struct StrConcat_1674  );
    struct env1640 env;
};

struct StrConcatIter_1687 {
    struct AppendIter_880  f_left;
    struct IntStrIter_1584  f_right;
};

struct StrConcatIter_1686 {
    struct StrConcatIter_1687  f_left;
    struct StrViewIter_610  f_right;
};

struct StrConcatIter_1685 {
    struct StrConcatIter_1686  f_left;
    struct IntStrIter_1584  f_right;
};

struct StrConcatIter_1684 {
    struct StrConcatIter_1685  f_left;
    struct AppendIter_880  f_right;
};

struct StrConcatIter_1683 {
    struct StrViewIter_610  f_left;
    struct StrConcatIter_1684  f_right;
};

struct StrConcatIter_1682 {
    struct StrConcatIter_1683  f_left;
    struct StrViewIter_610  f_right;
};

struct StrConcatIter_1681 {
    struct StrConcatIter_1682  f_left;
    struct StrViewIter_610  f_right;
};

struct Map_1680 {
    struct StrConcatIter_1681  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1680 Map_1680_Map (  struct StrConcatIter_1681  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1680 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1680   into_dash_iter1689 (    struct Map_1680  self796 ) {
    return (  self796 );
}

static  struct Maybe_613   next1697 (    struct StrConcatIter_1687 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next906 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next1587 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next1696 (    struct StrConcatIter_1686 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next1697 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next1695 (    struct StrConcatIter_1685 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next1696 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next1587 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next1694 (    struct StrConcatIter_1684 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next1695 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next906 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next1693 (    struct StrConcatIter_1683 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next1694 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next1692 (    struct StrConcatIter_1682 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next1693 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next1691 (    struct StrConcatIter_1681 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next1692 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_279   next1690 (    struct Map_1680 *  dref798 ) {
    struct Maybe_613  dref801 = ( (  next1691 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_613_None_t ) {
        return ( (struct Maybe_279) { .tag = Maybe_279_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_613_Just_t ) {
            return ( ( Maybe_279_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_613_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1688 (    struct Map_1680  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1680  it1099 = ( (  into_dash_iter1689 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_279  dref1100 = ( (  next1690 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_279_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_279_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_279_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1698 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1698);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1699;
    return (  temp1699 );
}

static  int32_t   lam1700 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add281 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1679 (    struct Map_1680  it1110 ) {
    return ( (  reduce1688 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1700 ) ) );
}

static  struct StrConcatIter_1681   into_dash_iter1702 (    struct StrConcatIter_1681  self1491 ) {
    return (  self1491 );
}

static  struct Map_1680   map1701 (    struct StrConcatIter_1681  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1681  it808 = ( (  into_dash_iter1702 ) ( (  iterable805 ) ) );
    return ( ( Map_1680_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1714 {
    struct Char_57  field0;
    int32_t  field1;
};

static struct StrConcat_1714 StrConcat_1714_StrConcat (  struct Char_57  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1714 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1713 {
    struct StrConcat_1714  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1713 StrConcat_1713_StrConcat (  struct StrConcat_1714  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1713 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1712 {
    struct StrConcat_1713  field0;
    int32_t  field1;
};

static struct StrConcat_1712 StrConcat_1712_StrConcat (  struct StrConcat_1713  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1712 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1711 {
    struct StrConcat_1712  field0;
    struct Char_57  field1;
};

static struct StrConcat_1711 StrConcat_1711_StrConcat (  struct StrConcat_1712  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1711 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_1687   into_dash_iter1721 (    struct StrConcat_1714  dref1498 ) {
    return ( (struct StrConcatIter_1687) { .f_left = ( (  chars920 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1600 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1687   chars1720 (    struct StrConcat_1714  self1509 ) {
    return ( (  into_dash_iter1721 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1686   into_dash_iter1719 (    struct StrConcat_1713  dref1498 ) {
    return ( (struct StrConcatIter_1686) { .f_left = ( (  chars1720 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars615 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1686   chars1718 (    struct StrConcat_1713  self1509 ) {
    return ( (  into_dash_iter1719 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1685   into_dash_iter1717 (    struct StrConcat_1712  dref1498 ) {
    return ( (struct StrConcatIter_1685) { .f_left = ( (  chars1718 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1600 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1685   chars1716 (    struct StrConcat_1712  self1509 ) {
    return ( (  into_dash_iter1717 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1684   into_dash_iter1715 (    struct StrConcat_1711  dref1498 ) {
    return ( (struct StrConcatIter_1684) { .f_left = ( (  chars1716 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars920 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1684   chars1710 (    struct StrConcat_1711  self1509 ) {
    return ( (  into_dash_iter1715 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1684   chars1709 (    struct Pos_20  self3584 ) {
    return ( (  chars1710 ) ( ( ( StrConcat_1711_StrConcat ) ( ( ( StrConcat_1712_StrConcat ) ( ( ( StrConcat_1713_StrConcat ) ( ( ( StrConcat_1714_StrConcat ) ( ( (  from_dash_charlike228 ) ( ( "(" ) ,  ( 1 ) ) ) ,  ( (  self3584 ) .f_line ) ) ) ,  ( (  from_dash_string227 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  self3584 ) .f_bi ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrConcatIter_1683   into_dash_iter1708 (    struct StrConcat_1676  dref1498 ) {
    return ( (struct StrConcatIter_1683) { .f_left = ( (  chars615 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1709 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1683   chars1707 (    struct StrConcat_1676  self1509 ) {
    return ( (  into_dash_iter1708 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1682   into_dash_iter1706 (    struct StrConcat_1675  dref1498 ) {
    return ( (struct StrConcatIter_1682) { .f_left = ( (  chars1707 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars615 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1682   chars1705 (    struct StrConcat_1675  self1509 ) {
    return ( (  into_dash_iter1706 ) ( (  self1509 ) ) );
}

static  struct StrViewIter_610   chars1722 (    enum CharType_1194  self3813 ) {
    return ( (  chars615 ) ( ( {  enum CharType_1194  dref3814 = (  self3813 ) ;  dref3814 == CharType_1194_CharPunctuation ? ( (  from_dash_string227 ) ( ( "Punct" ) ,  ( 5 ) ) ) :  dref3814 == CharType_1194_CharWord ? ( (  from_dash_string227 ) ( ( "Word" ) ,  ( 4 ) ) ) :  dref3814 == CharType_1194_CharSpace ? ( (  from_dash_string227 ) ( ( "Space" ) ,  ( 5 ) ) ) : ( (  todo1668 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1681   into_dash_iter1704 (    struct StrConcat_1674  dref1498 ) {
    return ( (struct StrConcatIter_1681) { .f_left = ( (  chars1705 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1722 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1681   chars1703 (    struct StrConcat_1674  self1509 ) {
    return ( (  into_dash_iter1704 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1723 (    struct Screen_668 *  screen3527 ,    struct StrConcat_1674  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp324 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp324 ( (  y3533 ) , ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add281 ( (  op_dash_mul1401 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min476 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size269 ) ( (  op_dash_sub819 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1681  temp1724 =  into_dash_iter1702 ( ( (  chars1703 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_613  __cond1725 =  next1691 (&temp1724);
        if (  __cond1725 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1725 .stuff .Maybe_613_Just_s .field0;
        ( (  put_dash_char1618 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add281 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add281 ( (  xx3538 ) , ( (  rendered_dash_wcwidth970 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1678 (    struct Screen_668 *  screen3543 ,    struct StrConcat_1674  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1679 ) ( ( (  map1701 ) ( ( (  chars1703 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth970 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub819 ( (  op_dash_sub819 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1723 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1677 (   struct env1640* env ,    struct StrConcat_1674  s4273 ) {
    ( (  draw_dash_str_dash_right1678 ) ( ( env->screen4266 ) ,  (  s4273 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4270 ) ) ) );
    (* env->curline4270 ) = (  op_dash_add281 ( ( * ( env->curline4270 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1728 {
    struct StrView_21  field0;
    struct Maybe_28  field1;
};

static struct StrConcat_1728 StrConcat_1728_StrConcat (  struct StrView_21  field0 ,  struct Maybe_28  field1 ) {
    return ( struct StrConcat_1728 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1727 {
    enum Unit_7  (*fun) (  struct env1641*  ,    struct StrConcat_1728  );
    struct env1641 env;
};

struct StrConcatIter_1735 {
    struct StrConcatIter_1683  f_left;
    struct AppendIter_880  f_right;
};

struct StrCaseIter_1734 {
    enum {
        StrCaseIter_1734_StrCaseIter1_t,
        StrCaseIter_1734_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_610  field0;
        } StrCaseIter_1734_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1735  field0;
        } StrCaseIter_1734_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1734 StrCaseIter_1734_StrCaseIter1 (  struct StrViewIter_610  field0 ) {
    return ( struct StrCaseIter_1734 ) { .tag = StrCaseIter_1734_StrCaseIter1_t, .stuff = { .StrCaseIter_1734_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1734 StrCaseIter_1734_StrCaseIter2 (  struct StrConcatIter_1735  field0 ) {
    return ( struct StrCaseIter_1734 ) { .tag = StrCaseIter_1734_StrCaseIter2_t, .stuff = { .StrCaseIter_1734_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1733 {
    struct StrViewIter_610  f_left;
    struct StrCaseIter_1734  f_right;
};

struct Map_1732 {
    struct StrConcatIter_1733  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1732 Map_1732_Map (  struct StrConcatIter_1733  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1732 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1732   into_dash_iter1737 (    struct Map_1732  self796 ) {
    return (  self796 );
}

static  struct Maybe_613   next1741 (    struct StrConcatIter_1735 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next1693 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next906 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next1740 (    struct StrCaseIter_1734 *  self1516 ) {
    struct StrCaseIter_1734 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1734_StrCaseIter1_t ) {
        return ( (  next614 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1734_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1734_StrCaseIter2_t ) {
            return ( (  next1741 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1734_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_613   next1739 (    struct StrConcatIter_1733 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next1740 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_279   next1738 (    struct Map_1732 *  dref798 ) {
    struct Maybe_613  dref801 = ( (  next1739 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_613_None_t ) {
        return ( (struct Maybe_279) { .tag = Maybe_279_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_613_Just_t ) {
            return ( ( Maybe_279_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_613_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1736 (    struct Map_1732  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1732  it1099 = ( (  into_dash_iter1737 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_279  dref1100 = ( (  next1738 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_279_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_279_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_279_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1742 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1742);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1743;
    return (  temp1743 );
}

static  int32_t   lam1744 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add281 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1731 (    struct Map_1732  it1110 ) {
    return ( (  reduce1736 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1744 ) ) );
}

static  struct StrConcatIter_1733   into_dash_iter1746 (    struct StrConcatIter_1733  self1491 ) {
    return (  self1491 );
}

static  struct Map_1732   map1745 (    struct StrConcatIter_1733  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1733  it808 = ( (  into_dash_iter1746 ) ( (  iterable805 ) ) );
    return ( ( Map_1732_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1751 {
    struct StrConcat_1676  field0;
    struct Char_57  field1;
};

static struct StrConcat_1751 StrConcat_1751_StrConcat (  struct StrConcat_1676  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1751 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1750 {
    enum {
        StrCase_1750_StrCase1_t,
        StrCase_1750_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1750_StrCase1_s;
        struct {
            struct StrConcat_1751  field0;
        } StrCase_1750_StrCase2_s;
    } stuff;
};

static struct StrCase_1750 StrCase_1750_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1750 ) { .tag = StrCase_1750_StrCase1_t, .stuff = { .StrCase_1750_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1750 StrCase_1750_StrCase2 (  struct StrConcat_1751  field0 ) {
    return ( struct StrCase_1750 ) { .tag = StrCase_1750_StrCase2_t, .stuff = { .StrCase_1750_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1735   into_dash_iter1756 (    struct StrConcat_1751  dref1498 ) {
    return ( (struct StrConcatIter_1735) { .f_left = ( (  chars1707 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars920 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1735   chars1755 (    struct StrConcat_1751  self1509 ) {
    return ( (  into_dash_iter1756 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1734   into_dash_iter1754 (    struct StrCase_1750  self1522 ) {
    struct StrCase_1750  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1750_StrCase1_t ) {
        return ( ( StrCaseIter_1734_StrCaseIter1 ) ( ( (  chars615 ) ( ( dref1523 .stuff .StrCase_1750_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1750_StrCase2_t ) {
            return ( ( StrCaseIter_1734_StrCaseIter2 ) ( ( (  chars1755 ) ( ( dref1523 .stuff .StrCase_1750_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1734   chars1753 (    struct StrCase_1750  self1534 ) {
    return ( (  into_dash_iter1754 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1734   chars1749 (    struct Maybe_28  self1548 ) {
    struct StrCase_1750  temp1752;
    struct StrCase_1750  c1549 = (  temp1752 );
    struct Maybe_28  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_28_None_t ) {
        c1549 = ( ( StrCase_1750_StrCase1 ) ( ( (  from_dash_string227 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_28_Just_t ) {
            c1549 = ( ( StrCase_1750_StrCase2 ) ( ( ( StrConcat_1751_StrConcat ) ( ( ( StrConcat_1676_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_28_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1753 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1733   into_dash_iter1748 (    struct StrConcat_1728  dref1498 ) {
    return ( (struct StrConcatIter_1733) { .f_left = ( (  chars615 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1749 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1733   chars1747 (    struct StrConcat_1728  self1509 ) {
    return ( (  into_dash_iter1748 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1757 (    struct Screen_668 *  screen3527 ,    struct StrConcat_1728  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp324 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp324 ( (  y3533 ) , ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add281 ( (  op_dash_mul1401 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min476 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size269 ) ( (  op_dash_sub819 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1733  temp1758 =  into_dash_iter1746 ( ( (  chars1747 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_613  __cond1759 =  next1739 (&temp1758);
        if (  __cond1759 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1759 .stuff .Maybe_613_Just_s .field0;
        ( (  put_dash_char1618 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add281 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add281 ( (  xx3538 ) , ( (  rendered_dash_wcwidth970 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1730 (    struct Screen_668 *  screen3543 ,    struct StrConcat_1728  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1731 ) ( ( (  map1745 ) ( ( (  chars1747 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth970 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub819 ( (  op_dash_sub819 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1757 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1729 (   struct env1641* env ,    struct StrConcat_1728  s4273 ) {
    ( (  draw_dash_str_dash_right1730 ) ( ( env->screen4266 ) ,  (  s4273 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4270 ) ) ) );
    (* env->curline4270 ) = (  op_dash_add281 ( ( * ( env->curline4270 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct Take_1762 {
    struct StrViewIter_610  field0;
    size_t  field1;
};

static struct Take_1762 Take_1762_Take (  struct StrViewIter_610  field0 ,  size_t  field1 ) {
    return ( struct Take_1762 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1761 {
    struct Take_1762  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1761 StrConcat_1761_StrConcat (  struct Take_1762  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1761 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_1760 {
    enum {
        Maybe_1760_None_t,
        Maybe_1760_Just_t,
    } tag;
    union {
        struct {
            struct StrConcat_1761  field0;
        } Maybe_1760_Just_s;
    } stuff;
};

static struct Maybe_1760 Maybe_1760_Just (  struct StrConcat_1761  field0 ) {
    return ( struct Maybe_1760 ) { .tag = Maybe_1760_Just_t, .stuff = { .Maybe_1760_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1760   fmap_dash_maybe1763 (    struct Maybe_144  x1275 ,    struct StrConcat_1761 (*  fun1277 )(    struct StrView_21  ) ) {
    struct Maybe_144  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_144_None_t ) {
        return ( (struct Maybe_1760) { .tag = Maybe_1760_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_144_Just_t ) {
            return ( ( Maybe_1760_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_144_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Take_1762   take1765 (    struct StrView_21  it867 ,    size_t  i869 ) {
    return ( ( Take_1762_Take ) ( ( (  into_dash_iter616 ) ( (  it867 ) ) ) ,  (  i869 ) ) );
}

struct Drop_1767 {
    struct StrViewIter_610  field0;
    size_t  field1;
};

static struct Drop_1767 Drop_1767_Drop (  struct StrViewIter_610  field0 ,  size_t  field1 ) {
    return ( struct Drop_1767 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Maybe_613   next1769 (    struct Drop_1767 *  dref847 ) {
    while ( (  cmp191 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next614 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub311 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next614 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Drop_1767   into_dash_iter1771 (    struct Drop_1767  self845 ) {
    return (  self845 );
}

static  struct Maybe_613   head1768 (    struct Drop_1767  it1142 ) {
    struct Drop_1767  temp1770 = ( (  into_dash_iter1771 ) ( (  it1142 ) ) );
    return ( (  next1769 ) ( ( &temp1770 ) ) );
}

static  bool   null1766 (    struct Drop_1767  it1151 ) {
    struct Maybe_613  dref1152 = ( (  head1768 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_613_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Drop_1767   drop1772 (    struct StrView_21  iterable852 ,    size_t  i854 ) {
    struct StrViewIter_610  it855 = ( (  into_dash_iter616 ) ( (  iterable852 ) ) );
    return ( ( Drop_1767_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct StrConcat_1761   lam1764 (    struct StrView_21  s4276 ) {
    return ( ( StrConcat_1761_StrConcat ) ( ( (  take1765 ) ( (  s4276 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ,  ( ( (  null1766 ) ( ( (  drop1772 ) ( (  s4276 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ) ) ? ( (  from_dash_string227 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_string227 ) ( ( "..." ) ,  ( 3 ) ) ) ) ) );
}

struct StrConcat_1775 {
    struct StrView_21  field0;
    struct Maybe_1760  field1;
};

static struct StrConcat_1775 StrConcat_1775_StrConcat (  struct StrView_21  field0 ,  struct Maybe_1760  field1 ) {
    return ( struct StrConcat_1775 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1774 {
    enum Unit_7  (*fun) (  struct env1642*  ,    struct StrConcat_1775  );
    struct env1642 env;
};

struct StrConcatIter_1784 {
    struct Take_1762  f_left;
    struct StrViewIter_610  f_right;
};

struct StrConcatIter_1783 {
    struct StrViewIter_610  f_left;
    struct StrConcatIter_1784  f_right;
};

struct StrConcatIter_1782 {
    struct StrConcatIter_1783  f_left;
    struct AppendIter_880  f_right;
};

struct StrCaseIter_1781 {
    enum {
        StrCaseIter_1781_StrCaseIter1_t,
        StrCaseIter_1781_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_610  field0;
        } StrCaseIter_1781_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1782  field0;
        } StrCaseIter_1781_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1781 StrCaseIter_1781_StrCaseIter1 (  struct StrViewIter_610  field0 ) {
    return ( struct StrCaseIter_1781 ) { .tag = StrCaseIter_1781_StrCaseIter1_t, .stuff = { .StrCaseIter_1781_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1781 StrCaseIter_1781_StrCaseIter2 (  struct StrConcatIter_1782  field0 ) {
    return ( struct StrCaseIter_1781 ) { .tag = StrCaseIter_1781_StrCaseIter2_t, .stuff = { .StrCaseIter_1781_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1780 {
    struct StrViewIter_610  f_left;
    struct StrCaseIter_1781  f_right;
};

struct Map_1779 {
    struct StrConcatIter_1780  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1779 Map_1779_Map (  struct StrConcatIter_1780  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1779 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1779   into_dash_iter1786 (    struct Map_1779  self796 ) {
    return (  self796 );
}

static  struct Maybe_613   next1793 (    struct Take_1762 *  dref861 ) {
    if ( (  cmp191 ( ( (* dref861 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_613  x864 = ( (  next614 ) ( ( & ( (* dref861 ) .field0 ) ) ) );
        (* dref861 ) .field1 = (  op_dash_sub311 ( ( (* dref861 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
        return (  x864 );
    } else {
        return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
    }
}

static  struct Maybe_613   next1792 (    struct StrConcatIter_1784 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next1793 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next1791 (    struct StrConcatIter_1783 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next1792 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next1790 (    struct StrConcatIter_1782 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next1791 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next906 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next1789 (    struct StrCaseIter_1781 *  self1516 ) {
    struct StrCaseIter_1781 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1781_StrCaseIter1_t ) {
        return ( (  next614 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1781_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1781_StrCaseIter2_t ) {
            return ( (  next1790 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1781_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_613   next1788 (    struct StrConcatIter_1780 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next1789 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_279   next1787 (    struct Map_1779 *  dref798 ) {
    struct Maybe_613  dref801 = ( (  next1788 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_613_None_t ) {
        return ( (struct Maybe_279) { .tag = Maybe_279_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_613_Just_t ) {
            return ( ( Maybe_279_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_613_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1785 (    struct Map_1779  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1779  it1099 = ( (  into_dash_iter1786 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_279  dref1100 = ( (  next1787 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_279_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_279_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_279_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1794 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1794);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1795;
    return (  temp1795 );
}

static  int32_t   lam1796 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add281 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1778 (    struct Map_1779  it1110 ) {
    return ( (  reduce1785 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1796 ) ) );
}

static  struct StrConcatIter_1780   into_dash_iter1798 (    struct StrConcatIter_1780  self1491 ) {
    return (  self1491 );
}

static  struct Map_1779   map1797 (    struct StrConcatIter_1780  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1780  it808 = ( (  into_dash_iter1798 ) ( (  iterable805 ) ) );
    return ( ( Map_1779_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1804 {
    struct StrView_21  field0;
    struct StrConcat_1761  field1;
};

static struct StrConcat_1804 StrConcat_1804_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_1761  field1 ) {
    return ( struct StrConcat_1804 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1803 {
    struct StrConcat_1804  field0;
    struct Char_57  field1;
};

static struct StrConcat_1803 StrConcat_1803_StrConcat (  struct StrConcat_1804  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1803 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1802 {
    enum {
        StrCase_1802_StrCase1_t,
        StrCase_1802_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1802_StrCase1_s;
        struct {
            struct StrConcat_1803  field0;
        } StrCase_1802_StrCase2_s;
    } stuff;
};

static struct StrCase_1802 StrCase_1802_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1802 ) { .tag = StrCase_1802_StrCase1_t, .stuff = { .StrCase_1802_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1802 StrCase_1802_StrCase2 (  struct StrConcat_1803  field0 ) {
    return ( struct StrCase_1802 ) { .tag = StrCase_1802_StrCase2_t, .stuff = { .StrCase_1802_StrCase2_s = { .field0 = field0 } } };
};

static  struct Take_1762   chars1814 (    struct Take_1762  self1639 ) {
    return (  self1639 );
}

static  struct StrConcatIter_1784   into_dash_iter1813 (    struct StrConcat_1761  dref1498 ) {
    return ( (struct StrConcatIter_1784) { .f_left = ( (  chars1814 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars615 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1784   chars1812 (    struct StrConcat_1761  self1509 ) {
    return ( (  into_dash_iter1813 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1783   into_dash_iter1811 (    struct StrConcat_1804  dref1498 ) {
    return ( (struct StrConcatIter_1783) { .f_left = ( (  chars615 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1812 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1783   chars1810 (    struct StrConcat_1804  self1509 ) {
    return ( (  into_dash_iter1811 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1782   into_dash_iter1809 (    struct StrConcat_1803  dref1498 ) {
    return ( (struct StrConcatIter_1782) { .f_left = ( (  chars1810 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars920 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1782   chars1808 (    struct StrConcat_1803  self1509 ) {
    return ( (  into_dash_iter1809 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1781   into_dash_iter1807 (    struct StrCase_1802  self1522 ) {
    struct StrCase_1802  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1802_StrCase1_t ) {
        return ( ( StrCaseIter_1781_StrCaseIter1 ) ( ( (  chars615 ) ( ( dref1523 .stuff .StrCase_1802_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1802_StrCase2_t ) {
            return ( ( StrCaseIter_1781_StrCaseIter2 ) ( ( (  chars1808 ) ( ( dref1523 .stuff .StrCase_1802_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1781   chars1806 (    struct StrCase_1802  self1534 ) {
    return ( (  into_dash_iter1807 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1781   chars1801 (    struct Maybe_1760  self1548 ) {
    struct StrCase_1802  temp1805;
    struct StrCase_1802  c1549 = (  temp1805 );
    struct Maybe_1760  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_1760_None_t ) {
        c1549 = ( ( StrCase_1802_StrCase1 ) ( ( (  from_dash_string227 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_1760_Just_t ) {
            c1549 = ( ( StrCase_1802_StrCase2 ) ( ( ( StrConcat_1803_StrConcat ) ( ( ( StrConcat_1804_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_1760_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1806 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1780   into_dash_iter1800 (    struct StrConcat_1775  dref1498 ) {
    return ( (struct StrConcatIter_1780) { .f_left = ( (  chars615 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1801 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1780   chars1799 (    struct StrConcat_1775  self1509 ) {
    return ( (  into_dash_iter1800 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1815 (    struct Screen_668 *  screen3527 ,    struct StrConcat_1775  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp324 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp324 ( (  y3533 ) , ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add281 ( (  op_dash_mul1401 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min476 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size269 ) ( (  op_dash_sub819 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1780  temp1816 =  into_dash_iter1798 ( ( (  chars1799 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_613  __cond1817 =  next1788 (&temp1816);
        if (  __cond1817 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1817 .stuff .Maybe_613_Just_s .field0;
        ( (  put_dash_char1618 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add281 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add281 ( (  xx3538 ) , ( (  rendered_dash_wcwidth970 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1777 (    struct Screen_668 *  screen3543 ,    struct StrConcat_1775  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1778 ) ( ( (  map1797 ) ( ( (  chars1799 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth970 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub819 ( (  op_dash_sub819 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1815 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1776 (   struct env1642* env ,    struct StrConcat_1775  s4273 ) {
    ( (  draw_dash_str_dash_right1777 ) ( ( env->screen4266 ) ,  (  s4273 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4270 ) ) ) );
    (* env->curline4270 ) = (  op_dash_add281 ( ( * ( env->curline4270 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Maybe_1760   fmap_dash_maybe1818 (    struct Maybe_144  x1275 ,    struct StrConcat_1761 (*  fun1277 )(    struct StrView_21  ) ) {
    struct Maybe_144  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_144_None_t ) {
        return ( (struct Maybe_1760) { .tag = Maybe_1760_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_144_Just_t ) {
            return ( ( Maybe_1760_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_144_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrConcat_1761   lam1819 (    struct StrView_21  s4279 ) {
    return ( ( StrConcat_1761_StrConcat ) ( ( (  take1765 ) ( (  s4279 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ,  ( ( (  null1766 ) ( ( (  drop1772 ) ( (  s4279 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ) ) ? ( (  from_dash_string227 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_string227 ) ( ( "..." ) ,  ( 3 ) ) ) ) ) );
}

struct envunion1821 {
    enum Unit_7  (*fun) (  struct env1642*  ,    struct StrConcat_1775  );
    struct env1642 env;
};

struct StrConcat_1824 {
    struct StrView_21  field0;
    struct EditorMode_145  field1;
};

static struct StrConcat_1824 StrConcat_1824_StrConcat (  struct StrView_21  field0 ,  struct EditorMode_145  field1 ) {
    return ( struct StrConcat_1824 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1823 {
    enum Unit_7  (*fun) (  struct env1643*  ,    struct StrConcat_1824  );
    struct env1643 env;
};

struct StrConcatIter_1832 {
    struct StrConcatIter_1735  f_left;
    struct StrViewIter_610  f_right;
};

struct StrConcatIter_1831 {
    struct StrConcatIter_1832  f_left;
    struct AppendIter_880  f_right;
};

struct StrCaseIter_1830 {
    enum {
        StrCaseIter_1830_StrCaseIter1_t,
        StrCaseIter_1830_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_610  field0;
        } StrCaseIter_1830_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1831  field0;
        } StrCaseIter_1830_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1830 StrCaseIter_1830_StrCaseIter1 (  struct StrViewIter_610  field0 ) {
    return ( struct StrCaseIter_1830 ) { .tag = StrCaseIter_1830_StrCaseIter1_t, .stuff = { .StrCaseIter_1830_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1830 StrCaseIter_1830_StrCaseIter2 (  struct StrConcatIter_1831  field0 ) {
    return ( struct StrCaseIter_1830 ) { .tag = StrCaseIter_1830_StrCaseIter2_t, .stuff = { .StrCaseIter_1830_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1829 {
    struct StrViewIter_610  f_left;
    struct StrCaseIter_1830  f_right;
};

struct Map_1828 {
    struct StrConcatIter_1829  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1828 Map_1828_Map (  struct StrConcatIter_1829  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1828 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1828   into_dash_iter1834 (    struct Map_1828  self796 ) {
    return (  self796 );
}

static  struct Maybe_613   next1839 (    struct StrConcatIter_1832 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next1741 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next1838 (    struct StrConcatIter_1831 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next1839 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next906 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next1837 (    struct StrCaseIter_1830 *  self1516 ) {
    struct StrCaseIter_1830 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1830_StrCaseIter1_t ) {
        return ( (  next614 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1830_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1830_StrCaseIter2_t ) {
            return ( (  next1838 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1830_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_613   next1836 (    struct StrConcatIter_1829 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next1837 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_279   next1835 (    struct Map_1828 *  dref798 ) {
    struct Maybe_613  dref801 = ( (  next1836 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_613_None_t ) {
        return ( (struct Maybe_279) { .tag = Maybe_279_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_613_Just_t ) {
            return ( ( Maybe_279_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_613_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1833 (    struct Map_1828  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1828  it1099 = ( (  into_dash_iter1834 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_279  dref1100 = ( (  next1835 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_279_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_279_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_279_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1840 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1840);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1841;
    return (  temp1841 );
}

static  int32_t   lam1842 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add281 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1827 (    struct Map_1828  it1110 ) {
    return ( (  reduce1833 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1842 ) ) );
}

static  struct StrConcatIter_1829   into_dash_iter1844 (    struct StrConcatIter_1829  self1491 ) {
    return (  self1491 );
}

static  struct Map_1828   map1843 (    struct StrConcatIter_1829  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1829  it808 = ( (  into_dash_iter1844 ) ( (  iterable805 ) ) );
    return ( ( Map_1828_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1850 {
    struct StrConcat_1751  field0;
    struct StrBuilder_54  field1;
};

static struct StrConcat_1850 StrConcat_1850_StrConcat (  struct StrConcat_1751  field0 ,  struct StrBuilder_54  field1 ) {
    return ( struct StrConcat_1850 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1849 {
    struct StrConcat_1850  field0;
    struct Char_57  field1;
};

static struct StrConcat_1849 StrConcat_1849_StrConcat (  struct StrConcat_1850  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1849 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1848 {
    enum {
        StrCase_1848_StrCase1_t,
        StrCase_1848_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1848_StrCase1_s;
        struct {
            struct StrConcat_1849  field0;
        } StrCase_1848_StrCase2_s;
    } stuff;
};

static struct StrCase_1848 StrCase_1848_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1848 ) { .tag = StrCase_1848_StrCase1_t, .stuff = { .StrCase_1848_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1848 StrCase_1848_StrCase2 (  struct StrConcat_1849  field0 ) {
    return ( struct StrCase_1848 ) { .tag = StrCase_1848_StrCase2_t, .stuff = { .StrCase_1848_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrCaseIter_1830   undefined1853 (  ) {
    struct StrCaseIter_1830  temp1854;
    return (  temp1854 );
}

static  struct StrCaseIter_1830   todo1852 (  ) {
    ( (  print1209 ) ( ( (  from_dash_string227 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined1853 ) ( ) );
}

static  struct StrConcatIter_1832   into_dash_iter1860 (    struct StrConcat_1850  dref1498 ) {
    return ( (struct StrConcatIter_1832) { .f_left = ( (  chars1755 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1538 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1832   chars1859 (    struct StrConcat_1850  self1509 ) {
    return ( (  into_dash_iter1860 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1831   into_dash_iter1858 (    struct StrConcat_1849  dref1498 ) {
    return ( (struct StrConcatIter_1831) { .f_left = ( (  chars1859 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars920 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1831   chars1857 (    struct StrConcat_1849  self1509 ) {
    return ( (  into_dash_iter1858 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1830   into_dash_iter1856 (    struct StrCase_1848  self1522 ) {
    struct StrCase_1848  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1848_StrCase1_t ) {
        return ( ( StrCaseIter_1830_StrCaseIter1 ) ( ( (  chars615 ) ( ( dref1523 .stuff .StrCase_1848_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1848_StrCase2_t ) {
            return ( ( StrCaseIter_1830_StrCaseIter2 ) ( ( (  chars1857 ) ( ( dref1523 .stuff .StrCase_1848_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1830   chars1855 (    struct StrCase_1848  self1534 ) {
    return ( (  into_dash_iter1856 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1830   chars1847 (    struct EditorMode_145  self4151 ) {
    struct StrCase_1848  temp1851;
    struct StrCase_1848  c4152 = (  temp1851 );
    struct EditorMode_145  dref4153 = (  self4151 );
    if ( dref4153.tag == EditorMode_145_Normal_t ) {
        c4152 = ( ( StrCase_1848_StrCase1 ) ( ( (  from_dash_string227 ) ( ( "Normal" ) ,  ( 6 ) ) ) ) );
    }
    else {
        if ( dref4153.tag == EditorMode_145_Cmd_t ) {
            c4152 = ( ( StrCase_1848_StrCase2 ) ( ( ( StrConcat_1849_StrConcat ) ( ( ( StrConcat_1850_StrConcat ) ( ( ( StrConcat_1751_StrConcat ) ( ( ( StrConcat_1676_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Cmd(" ) ,  ( 4 ) ) ) ,  ( dref4153 .stuff .EditorMode_145_Cmd_s .field0 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "|" ) ,  ( 1 ) ) ) ) ) ,  ( dref4153 .stuff .EditorMode_145_Cmd_s .field1 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
        else {
            if ( dref4153.tag == EditorMode_145_Search_t ) {
                c4152 = ( ( StrCase_1848_StrCase2 ) ( ( ( StrConcat_1849_StrConcat ) ( ( ( StrConcat_1850_StrConcat ) ( ( ( StrConcat_1751_StrConcat ) ( ( ( StrConcat_1676_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Search(" ) ,  ( 7 ) ) ) ,  ( dref4153 .stuff .EditorMode_145_Search_s .field0 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "|" ) ,  ( 1 ) ) ) ) ) ,  ( dref4153 .stuff .EditorMode_145_Search_s .field1 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
            }
            else {
                if ( true ) {
                    return ( (  todo1852 ) ( ) );
                }
            }
        }
    }
    return ( (  chars1855 ) ( (  c4152 ) ) );
}

static  struct StrConcatIter_1829   into_dash_iter1846 (    struct StrConcat_1824  dref1498 ) {
    return ( (struct StrConcatIter_1829) { .f_left = ( (  chars615 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1847 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1829   chars1845 (    struct StrConcat_1824  self1509 ) {
    return ( (  into_dash_iter1846 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1861 (    struct Screen_668 *  screen3527 ,    struct StrConcat_1824  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp324 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp324 ( (  y3533 ) , ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add281 ( (  op_dash_mul1401 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min476 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size269 ) ( (  op_dash_sub819 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1829  temp1862 =  into_dash_iter1844 ( ( (  chars1845 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_613  __cond1863 =  next1836 (&temp1862);
        if (  __cond1863 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1863 .stuff .Maybe_613_Just_s .field0;
        ( (  put_dash_char1618 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add281 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add281 ( (  xx3538 ) , ( (  rendered_dash_wcwidth970 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1826 (    struct Screen_668 *  screen3543 ,    struct StrConcat_1824  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1827 ) ( ( (  map1843 ) ( ( (  chars1845 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth970 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub819 ( (  op_dash_sub819 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1861 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1825 (   struct env1643* env ,    struct StrConcat_1824  s4273 ) {
    ( (  draw_dash_str_dash_right1826 ) ( ( env->screen4266 ) ,  (  s4273 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4270 ) ) ) );
    (* env->curline4270 ) = (  op_dash_add281 ( ( * ( env->curline4270 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1866 {
    struct StrView_21  field0;
    struct Maybe_144  field1;
};

static struct StrConcat_1866 StrConcat_1866_StrConcat (  struct StrView_21  field0 ,  struct Maybe_144  field1 ) {
    return ( struct StrConcat_1866 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1865 {
    enum Unit_7  (*fun) (  struct env1644*  ,    struct StrConcat_1866  );
    struct env1644 env;
};

struct StrConcatIter_1873 {
    struct StrConcatIter_1655  f_left;
    struct AppendIter_880  f_right;
};

struct StrCaseIter_1872 {
    enum {
        StrCaseIter_1872_StrCaseIter1_t,
        StrCaseIter_1872_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_610  field0;
        } StrCaseIter_1872_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1873  field0;
        } StrCaseIter_1872_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1872 StrCaseIter_1872_StrCaseIter1 (  struct StrViewIter_610  field0 ) {
    return ( struct StrCaseIter_1872 ) { .tag = StrCaseIter_1872_StrCaseIter1_t, .stuff = { .StrCaseIter_1872_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1872 StrCaseIter_1872_StrCaseIter2 (  struct StrConcatIter_1873  field0 ) {
    return ( struct StrCaseIter_1872 ) { .tag = StrCaseIter_1872_StrCaseIter2_t, .stuff = { .StrCaseIter_1872_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1871 {
    struct StrViewIter_610  f_left;
    struct StrCaseIter_1872  f_right;
};

struct Map_1870 {
    struct StrConcatIter_1871  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1870 Map_1870_Map (  struct StrConcatIter_1871  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1870 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1870   into_dash_iter1875 (    struct Map_1870  self796 ) {
    return (  self796 );
}

static  struct Maybe_613   next1879 (    struct StrConcatIter_1873 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next1659 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next906 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next1878 (    struct StrCaseIter_1872 *  self1516 ) {
    struct StrCaseIter_1872 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1872_StrCaseIter1_t ) {
        return ( (  next614 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1872_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1872_StrCaseIter2_t ) {
            return ( (  next1879 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1872_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_613   next1877 (    struct StrConcatIter_1871 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next1878 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_279   next1876 (    struct Map_1870 *  dref798 ) {
    struct Maybe_613  dref801 = ( (  next1877 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_613_None_t ) {
        return ( (struct Maybe_279) { .tag = Maybe_279_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_613_Just_t ) {
            return ( ( Maybe_279_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_613_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1874 (    struct Map_1870  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1870  it1099 = ( (  into_dash_iter1875 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_279  dref1100 = ( (  next1876 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_279_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_279_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_279_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1880 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1880);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1881;
    return (  temp1881 );
}

static  int32_t   lam1882 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add281 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1869 (    struct Map_1870  it1110 ) {
    return ( (  reduce1874 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1882 ) ) );
}

static  struct StrConcatIter_1871   into_dash_iter1884 (    struct StrConcatIter_1871  self1491 ) {
    return (  self1491 );
}

static  struct Map_1870   map1883 (    struct StrConcatIter_1871  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1871  it808 = ( (  into_dash_iter1884 ) ( (  iterable805 ) ) );
    return ( ( Map_1870_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrCase_1888 {
    enum {
        StrCase_1888_StrCase1_t,
        StrCase_1888_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1888_StrCase1_s;
        struct {
            struct StrConcat_486  field0;
        } StrCase_1888_StrCase2_s;
    } stuff;
};

static struct StrCase_1888 StrCase_1888_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1888 ) { .tag = StrCase_1888_StrCase1_t, .stuff = { .StrCase_1888_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1888 StrCase_1888_StrCase2 (  struct StrConcat_486  field0 ) {
    return ( struct StrCase_1888 ) { .tag = StrCase_1888_StrCase2_t, .stuff = { .StrCase_1888_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1655   into_dash_iter1895 (    struct StrConcat_487  dref1498 ) {
    return ( (struct StrConcatIter_1655) { .f_left = ( (  chars615 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars615 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1655   chars1894 (    struct StrConcat_487  self1509 ) {
    return ( (  into_dash_iter1895 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1873   into_dash_iter1893 (    struct StrConcat_486  dref1498 ) {
    return ( (struct StrConcatIter_1873) { .f_left = ( (  chars1894 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars920 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1873   chars1892 (    struct StrConcat_486  self1509 ) {
    return ( (  into_dash_iter1893 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1872   into_dash_iter1891 (    struct StrCase_1888  self1522 ) {
    struct StrCase_1888  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1888_StrCase1_t ) {
        return ( ( StrCaseIter_1872_StrCaseIter1 ) ( ( (  chars615 ) ( ( dref1523 .stuff .StrCase_1888_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1888_StrCase2_t ) {
            return ( ( StrCaseIter_1872_StrCaseIter2 ) ( ( (  chars1892 ) ( ( dref1523 .stuff .StrCase_1888_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1872   chars1890 (    struct StrCase_1888  self1534 ) {
    return ( (  into_dash_iter1891 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1872   chars1887 (    struct Maybe_144  self1548 ) {
    struct StrCase_1888  temp1889;
    struct StrCase_1888  c1549 = (  temp1889 );
    struct Maybe_144  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_144_None_t ) {
        c1549 = ( ( StrCase_1888_StrCase1 ) ( ( (  from_dash_string227 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_144_Just_t ) {
            c1549 = ( ( StrCase_1888_StrCase2 ) ( ( ( StrConcat_486_StrConcat ) ( ( ( StrConcat_487_StrConcat ) ( ( (  from_dash_string227 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_144_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1890 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1871   into_dash_iter1886 (    struct StrConcat_1866  dref1498 ) {
    return ( (struct StrConcatIter_1871) { .f_left = ( (  chars615 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1887 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1871   chars1885 (    struct StrConcat_1866  self1509 ) {
    return ( (  into_dash_iter1886 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1896 (    struct Screen_668 *  screen3527 ,    struct StrConcat_1866  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp324 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp324 ( (  y3533 ) , ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add281 ( (  op_dash_mul1401 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min476 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size269 ) ( (  op_dash_sub819 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1871  temp1897 =  into_dash_iter1884 ( ( (  chars1885 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_613  __cond1898 =  next1877 (&temp1897);
        if (  __cond1898 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1898 .stuff .Maybe_613_Just_s .field0;
        ( (  put_dash_char1618 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add281 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add281 ( (  xx3538 ) , ( (  rendered_dash_wcwidth970 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1868 (    struct Screen_668 *  screen3543 ,    struct StrConcat_1866  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1869 ) ( ( (  map1883 ) ( ( (  chars1885 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth970 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub819 ( (  op_dash_sub819 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1896 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1867 (   struct env1644* env ,    struct StrConcat_1866  s4273 ) {
    ( (  draw_dash_str_dash_right1868 ) ( ( env->screen4266 ) ,  (  s4273 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4270 ) ) ) );
    (* env->curline4270 ) = (  op_dash_add281 ( ( * ( env->curline4270 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1903 {
    struct StrConcat_1622  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1903 StrConcat_1903_StrConcat (  struct StrConcat_1622  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1903 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1902 {
    struct StrConcat_1903  field0;
    int32_t  field1;
};

static struct StrConcat_1902 StrConcat_1902_StrConcat (  struct StrConcat_1903  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1902 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1901 {
    struct StrConcat_1902  field0;
    struct Char_57  field1;
};

static struct StrConcat_1901 StrConcat_1901_StrConcat (  struct StrConcat_1902  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1901 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1900 {
    enum Unit_7  (*fun) (  struct env1645*  ,    struct StrConcat_1901  );
    struct env1645 env;
};

struct StrConcatIter_1911 {
    struct StrViewIter_610  f_left;
    struct IntStrIter_1584  f_right;
};

struct StrConcatIter_1910 {
    struct StrConcatIter_1911  f_left;
    struct StrViewIter_610  f_right;
};

struct StrConcatIter_1909 {
    struct StrConcatIter_1910  f_left;
    struct IntStrIter_1584  f_right;
};

struct StrConcatIter_1908 {
    struct StrConcatIter_1909  f_left;
    struct AppendIter_880  f_right;
};

struct Map_1907 {
    struct StrConcatIter_1908  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1907 Map_1907_Map (  struct StrConcatIter_1908  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1907 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1907   into_dash_iter1913 (    struct Map_1907  self796 ) {
    return (  self796 );
}

static  struct Maybe_613   next1918 (    struct StrConcatIter_1911 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next1587 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next1917 (    struct StrConcatIter_1910 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next1918 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next1916 (    struct StrConcatIter_1909 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next1917 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next1587 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next1915 (    struct StrConcatIter_1908 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next1916 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next906 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_279   next1914 (    struct Map_1907 *  dref798 ) {
    struct Maybe_613  dref801 = ( (  next1915 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_613_None_t ) {
        return ( (struct Maybe_279) { .tag = Maybe_279_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_613_Just_t ) {
            return ( ( Maybe_279_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_613_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1912 (    struct Map_1907  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1907  it1099 = ( (  into_dash_iter1913 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_279  dref1100 = ( (  next1914 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_279_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_279_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_279_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1919 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1919);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1920;
    return (  temp1920 );
}

static  int32_t   lam1921 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add281 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1906 (    struct Map_1907  it1110 ) {
    return ( (  reduce1912 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1921 ) ) );
}

static  struct StrConcatIter_1908   into_dash_iter1923 (    struct StrConcatIter_1908  self1491 ) {
    return (  self1491 );
}

static  struct Map_1907   map1922 (    struct StrConcatIter_1908  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1908  it808 = ( (  into_dash_iter1923 ) ( (  iterable805 ) ) );
    return ( ( Map_1907_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_1911   into_dash_iter1931 (    struct StrConcat_1622  dref1498 ) {
    return ( (struct StrConcatIter_1911) { .f_left = ( (  chars615 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1600 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1911   chars1930 (    struct StrConcat_1622  self1509 ) {
    return ( (  into_dash_iter1931 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1910   into_dash_iter1929 (    struct StrConcat_1903  dref1498 ) {
    return ( (struct StrConcatIter_1910) { .f_left = ( (  chars1930 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars615 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1910   chars1928 (    struct StrConcat_1903  self1509 ) {
    return ( (  into_dash_iter1929 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1909   into_dash_iter1927 (    struct StrConcat_1902  dref1498 ) {
    return ( (struct StrConcatIter_1909) { .f_left = ( (  chars1928 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1600 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1909   chars1926 (    struct StrConcat_1902  self1509 ) {
    return ( (  into_dash_iter1927 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1908   into_dash_iter1925 (    struct StrConcat_1901  dref1498 ) {
    return ( (struct StrConcatIter_1908) { .f_left = ( (  chars1926 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars920 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1908   chars1924 (    struct StrConcat_1901  self1509 ) {
    return ( (  into_dash_iter1925 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1932 (    struct Screen_668 *  screen3527 ,    struct StrConcat_1901  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp324 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp324 ( (  y3533 ) , ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add281 ( (  op_dash_mul1401 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min476 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size269 ) ( (  op_dash_sub819 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1908  temp1933 =  into_dash_iter1923 ( ( (  chars1924 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_613  __cond1934 =  next1915 (&temp1933);
        if (  __cond1934 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1934 .stuff .Maybe_613_Just_s .field0;
        ( (  put_dash_char1618 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add281 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add281 ( (  xx3538 ) , ( (  rendered_dash_wcwidth970 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1905 (    struct Screen_668 *  screen3543 ,    struct StrConcat_1901  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1906 ) ( ( (  map1922 ) ( ( (  chars1924 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth970 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub819 ( (  op_dash_sub819 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1932 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1904 (   struct env1645* env ,    struct StrConcat_1901  s4273 ) {
    ( (  draw_dash_str_dash_right1905 ) ( ( env->screen4266 ) ,  (  s4273 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4270 ) ) ) );
    (* env->curline4270 ) = (  op_dash_add281 ( ( * ( env->curline4270 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1937 {
    struct StrConcat_1902  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1937 StrConcat_1937_StrConcat (  struct StrConcat_1902  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1937 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1936 {
    enum Unit_7  (*fun) (  struct env1646*  ,    struct StrConcat_1937  );
    struct env1646 env;
};

struct StrConcatIter_1942 {
    struct StrConcatIter_1909  f_left;
    struct StrViewIter_610  f_right;
};

struct Map_1941 {
    struct StrConcatIter_1942  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1941 Map_1941_Map (  struct StrConcatIter_1942  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1941 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1941   into_dash_iter1944 (    struct Map_1941  self796 ) {
    return (  self796 );
}

static  struct Maybe_613   next1946 (    struct StrConcatIter_1942 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next1916 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_279   next1945 (    struct Map_1941 *  dref798 ) {
    struct Maybe_613  dref801 = ( (  next1946 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_613_None_t ) {
        return ( (struct Maybe_279) { .tag = Maybe_279_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_613_Just_t ) {
            return ( ( Maybe_279_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_613_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1943 (    struct Map_1941  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1941  it1099 = ( (  into_dash_iter1944 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_279  dref1100 = ( (  next1945 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_279_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_279_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_279_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1947 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1947);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1948;
    return (  temp1948 );
}

static  int32_t   lam1949 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add281 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1940 (    struct Map_1941  it1110 ) {
    return ( (  reduce1943 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1949 ) ) );
}

static  struct StrConcatIter_1942   into_dash_iter1951 (    struct StrConcatIter_1942  self1491 ) {
    return (  self1491 );
}

static  struct Map_1941   map1950 (    struct StrConcatIter_1942  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1942  it808 = ( (  into_dash_iter1951 ) ( (  iterable805 ) ) );
    return ( ( Map_1941_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_1942   into_dash_iter1953 (    struct StrConcat_1937  dref1498 ) {
    return ( (struct StrConcatIter_1942) { .f_left = ( (  chars1926 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars615 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1942   chars1952 (    struct StrConcat_1937  self1509 ) {
    return ( (  into_dash_iter1953 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1954 (    struct Screen_668 *  screen3527 ,    struct StrConcat_1937  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp324 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp324 ( (  y3533 ) , ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add281 ( (  op_dash_mul1401 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min476 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size269 ) ( (  op_dash_sub819 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1942  temp1955 =  into_dash_iter1951 ( ( (  chars1952 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_613  __cond1956 =  next1946 (&temp1955);
        if (  __cond1956 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1956 .stuff .Maybe_613_Just_s .field0;
        ( (  put_dash_char1618 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add281 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add281 ( (  xx3538 ) , ( (  rendered_dash_wcwidth970 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1939 (    struct Screen_668 *  screen3543 ,    struct StrConcat_1937  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1940 ) ( ( (  map1950 ) ( ( (  chars1952 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth970 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub819 ( (  op_dash_sub819 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1954 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1938 (   struct env1646* env ,    struct StrConcat_1937  s4273 ) {
    ( (  draw_dash_str_dash_right1939 ) ( ( env->screen4266 ) ,  (  s4273 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4270 ) ) ) );
    (* env->curline4270 ) = (  op_dash_add281 ( ( * ( env->curline4270 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct envunion1958 {
    enum Unit_7  (*fun) (  struct env1647*  ,    struct StrConcat_65  );
    struct env1647 env;
};

struct Map_1962 {
    struct StrConcatIter_1296  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1962 Map_1962_Map (  struct StrConcatIter_1296  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1962 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1962   into_dash_iter1964 (    struct Map_1962  self796 ) {
    return (  self796 );
}

static  struct Maybe_279   next1965 (    struct Map_1962 *  dref798 ) {
    struct Maybe_613  dref801 = ( (  next1303 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_613_None_t ) {
        return ( (struct Maybe_279) { .tag = Maybe_279_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_613_Just_t ) {
            return ( ( Maybe_279_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_613_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1963 (    struct Map_1962  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1962  it1099 = ( (  into_dash_iter1964 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_279  dref1100 = ( (  next1965 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_279_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_279_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_279_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1966 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1966);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1967;
    return (  temp1967 );
}

static  int32_t   lam1968 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add281 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1961 (    struct Map_1962  it1110 ) {
    return ( (  reduce1963 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1968 ) ) );
}

static  struct StrConcatIter_1296   into_dash_iter1970 (    struct StrConcatIter_1296  self1491 ) {
    return (  self1491 );
}

static  struct Map_1962   map1969 (    struct StrConcatIter_1296  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1296  it808 = ( (  into_dash_iter1970 ) ( (  iterable805 ) ) );
    return ( ( Map_1962_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  enum Unit_7   draw_dash_str1971 (    struct Screen_668 *  screen3527 ,    struct StrConcat_65  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp324 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp324 ( (  y3533 ) , ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add281 ( (  op_dash_mul1401 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min476 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size269 ) ( (  op_dash_sub819 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1296  temp1972 =  into_dash_iter1970 ( ( (  chars1317 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_613  __cond1973 =  next1303 (&temp1972);
        if (  __cond1973 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1973 .stuff .Maybe_613_Just_s .field0;
        ( (  put_dash_char1618 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add281 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add281 ( (  xx3538 ) , ( (  rendered_dash_wcwidth970 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1960 (    struct Screen_668 *  screen3543 ,    struct StrConcat_65  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1961 ) ( ( (  map1969 ) ( ( (  chars1317 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth970 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub819 ( (  op_dash_sub819 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1971 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1959 (   struct env1647* env ,    struct StrConcat_65  s4273 ) {
    ( (  draw_dash_str_dash_right1960 ) ( ( env->screen4266 ) ,  (  s4273 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4270 ) ) ) );
    (* env->curline4270 ) = (  op_dash_add281 ( ( * ( env->curline4270 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   render_dash_editor1575 (    struct Screen_668 *  screen4266 ,    struct Editor_143 *  ed4268 ) {
    struct ScreenDims_1576  screen_dash_dims4269 = ( (struct ScreenDims_1576) { .f_from_dash_sx = (  from_dash_integral48 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub819 ( ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen4266 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral48 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub819 ( ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen4266 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) } );
    ( (  render1579 ) ( (  screen4266 ) ,  ( (  pane995 ) ( (  ed4268 ) ) ) ,  (  screen_dash_dims4269 ) ) );
    int32_t  temp1638 = (  from_dash_integral48 ( 0 ) );
    int32_t *  curline4270 = ( &temp1638 );
    struct env1639 envinst1639 = {
        .screen4266 =  screen4266 ,
        .curline4270 =  curline4270 ,
    };
    struct env1640 envinst1640 = {
        .screen4266 =  screen4266 ,
        .curline4270 =  curline4270 ,
    };
    struct env1641 envinst1641 = {
        .screen4266 =  screen4266 ,
        .curline4270 =  curline4270 ,
    };
    struct env1642 envinst1642 = {
        .screen4266 =  screen4266 ,
        .curline4270 =  curline4270 ,
    };
    struct env1643 envinst1643 = {
        .screen4266 =  screen4266 ,
        .curline4270 =  curline4270 ,
    };
    struct env1644 envinst1644 = {
        .screen4266 =  screen4266 ,
        .curline4270 =  curline4270 ,
    };
    struct env1645 envinst1645 = {
        .screen4266 =  screen4266 ,
        .curline4270 =  curline4270 ,
    };
    struct env1646 envinst1646 = {
        .screen4266 =  screen4266 ,
        .curline4270 =  curline4270 ,
    };
    struct env1647 envinst1647 = {
        .screen4266 =  screen4266 ,
        .curline4270 =  curline4270 ,
    };
    struct envunion1649  temp1648 = ( (struct envunion1649){ .fun = (  enum Unit_7  (*) (  struct env1639*  ,    struct StrConcat_1650  ) )ann1651 , .env =  envinst1639 } );
    ( temp1648.fun ( &temp1648.env ,  ( ( StrConcat_1650_StrConcat ) ( ( (  from_dash_string227 ) ( ( "mode: " ) ,  ( 6 ) ) ) ,  ( ( ( * (  ed4268 ) ) .f_pane ) .f_mode ) ) ) ) );
    enum CharType_1194  cur_dash_ty4274 = ( (  char_dash_type1196 ) ( ( (  char_dash_at1204 ) ( ( (  pane995 ) ( (  ed4268 ) ) ) ,  ( ( ( * (  ed4268 ) ) .f_pane ) .f_cursor ) ) ) ) );
    struct envunion1673  temp1672 = ( (struct envunion1673){ .fun = (  enum Unit_7  (*) (  struct env1640*  ,    struct StrConcat_1674  ) )ann1677 , .env =  envinst1640 } );
    ( temp1672.fun ( &temp1672.env ,  ( ( StrConcat_1674_StrConcat ) ( ( ( StrConcat_1675_StrConcat ) ( ( ( StrConcat_1676_StrConcat ) ( ( (  from_dash_string227 ) ( ( "cur: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4268 ) ) .f_pane ) .f_cursor ) ) ) ,  ( (  from_dash_string227 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  (  cur_dash_ty4274 ) ) ) ) );
    struct envunion1727  temp1726 = ( (struct envunion1727){ .fun = (  enum Unit_7  (*) (  struct env1641*  ,    struct StrConcat_1728  ) )ann1729 , .env =  envinst1641 } );
    ( temp1726.fun ( &temp1726.env ,  ( ( StrConcat_1728_StrConcat ) ( ( (  from_dash_string227 ) ( ( "sel: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4268 ) ) .f_pane ) .f_sel ) ) ) ) );
    struct Maybe_1760  cp4277 = ( (  fmap_dash_maybe1763 ) ( ( ( * (  ed4268 ) ) .f_clipboard ) ,  (  lam1764 ) ) );
    struct envunion1774  temp1773 = ( (struct envunion1774){ .fun = (  enum Unit_7  (*) (  struct env1642*  ,    struct StrConcat_1775  ) )ann1776 , .env =  envinst1642 } );
    ( temp1773.fun ( &temp1773.env ,  ( ( StrConcat_1775_StrConcat ) ( ( (  from_dash_string227 ) ( ( "cp: " ) ,  ( 4 ) ) ) ,  (  cp4277 ) ) ) ) );
    struct Maybe_1760  st4280 = ( (  fmap_dash_maybe1818 ) ( ( ( * (  ed4268 ) ) .f_search_dash_term ) ,  (  lam1819 ) ) );
    struct envunion1821  temp1820 = ( (struct envunion1821){ .fun = (  enum Unit_7  (*) (  struct env1642*  ,    struct StrConcat_1775  ) )ann1776 , .env =  envinst1642 } );
    ( temp1820.fun ( &temp1820.env ,  ( ( StrConcat_1775_StrConcat ) ( ( (  from_dash_string227 ) ( ( "st: " ) ,  ( 4 ) ) ) ,  (  st4280 ) ) ) ) );
    struct envunion1823  temp1822 = ( (struct envunion1823){ .fun = (  enum Unit_7  (*) (  struct env1643*  ,    struct StrConcat_1824  ) )ann1825 , .env =  envinst1643 } );
    ( temp1822.fun ( &temp1822.env ,  ( ( StrConcat_1824_StrConcat ) ( ( (  from_dash_string227 ) ( ( "edmode: " ) ,  ( 8 ) ) ) ,  ( ( * (  ed4268 ) ) .f_mode ) ) ) ) );
    struct envunion1865  temp1864 = ( (struct envunion1865){ .fun = (  enum Unit_7  (*) (  struct env1644*  ,    struct StrConcat_1866  ) )ann1867 , .env =  envinst1644 } );
    ( temp1864.fun ( &temp1864.env ,  ( ( StrConcat_1866_StrConcat ) ( ( (  from_dash_string227 ) ( ( "msg: " ) ,  ( 5 ) ) ) ,  ( ( * (  ed4268 ) ) .f_msg ) ) ) ) );
    struct envunion1900  temp1899 = ( (struct envunion1900){ .fun = (  enum Unit_7  (*) (  struct env1645*  ,    struct StrConcat_1901  ) )ann1904 , .env =  envinst1645 } );
    ( temp1899.fun ( &temp1899.env ,  ( ( StrConcat_1901_StrConcat ) ( ( ( StrConcat_1902_StrConcat ) ( ( ( StrConcat_1903_StrConcat ) ( ( ( StrConcat_1622_StrConcat ) ( ( (  from_dash_string227 ) ( ( "sc-off: (" ) ,  ( 9 ) ) ) ,  ( ( ( ( * (  ed4268 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_top ) ) ) ,  ( (  from_dash_string227 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( ( ( ( * (  ed4268 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_left ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    struct envunion1936  temp1935 = ( (struct envunion1936){ .fun = (  enum Unit_7  (*) (  struct env1646*  ,    struct StrConcat_1937  ) )ann1938 , .env =  envinst1646 } );
    ( temp1935.fun ( &temp1935.env ,  ( ( StrConcat_1937_StrConcat ) ( ( ( StrConcat_1902_StrConcat ) ( ( ( StrConcat_1903_StrConcat ) ( ( ( StrConcat_1622_StrConcat ) ( ( (  from_dash_string227 ) ( ( "dims: { " ) ,  ( 8 ) ) ) ,  ( (  screen_dash_dims4269 ) .f_to_dash_sx ) ) ) ,  ( (  from_dash_string227 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  screen_dash_dims4269 ) .f_to_dash_sy ) ) ) ,  ( (  from_dash_string227 ) ( ( " }" ) ,  ( 2 ) ) ) ) ) ) );
    struct envunion1958  temp1957 = ( (struct envunion1958){ .fun = (  enum Unit_7  (*) (  struct env1647*  ,    struct StrConcat_65  ) )ann1959 , .env =  envinst1647 } );
    ( temp1957.fun ( &temp1957.env ,  ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "num actions: " ) ,  ( 13 ) ) ) ,  ( ( ( ( * ( ( ( * (  ed4268 ) ) .f_pane ) .f_buf ) ) .f_actions ) .f_list ) .f_count ) ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1976 {
    struct StrView_21  field0;
    uint32_t  field1;
};

static struct StrConcat_1976 StrConcat_1976_StrConcat (  struct StrView_21  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1976 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1975 {
    struct StrConcat_1976  field0;
    struct Char_57  field1;
};

static struct StrConcat_1975 StrConcat_1975_StrConcat (  struct StrConcat_1976  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1975 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1980 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1979 {
    struct StrViewIter_610  f_left;
    struct IntStrIter_1980  f_right;
};

struct StrConcatIter_1978 {
    struct StrConcatIter_1979  f_left;
    struct AppendIter_880  f_right;
};

static  struct StrConcatIter_1978   into_dash_iter1981 (    struct StrConcatIter_1978  self1491 ) {
    return (  self1491 );
}

static  uint32_t   op_dash_div1989 (    uint32_t  l245 ,    uint32_t  r247 ) {
    return ( (  l245 ) / (  r247 ) );
}

static  int32_t   count_dash_digits1988 (    uint32_t  self1430 ) {
    if ( (  eq414 ( (  self1430 ) , (  from_dash_integral223 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp222 ( (  self1430 ) , (  from_dash_integral223 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1989 ( (  self1430 ) , (  from_dash_integral223 ( 10 ) ) ) );
        digits1431 = (  op_dash_add281 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1980   uint_dash_iter1987 (    uint32_t  int1437 ) {
    return ( (struct IntStrIter_1980) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1988 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1980   chars1986 (    uint32_t  self1449 ) {
    return ( (  uint_dash_iter1987 ) ( (  self1449 ) ) );
}

static  struct StrConcatIter_1979   into_dash_iter1985 (    struct StrConcat_1976  dref1498 ) {
    return ( (struct StrConcatIter_1979) { .f_left = ( (  chars615 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1986 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1979   chars1984 (    struct StrConcat_1976  self1509 ) {
    return ( (  into_dash_iter1985 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1978   into_dash_iter1983 (    struct StrConcat_1975  dref1498 ) {
    return ( (struct StrConcatIter_1978) { .f_left = ( (  chars1984 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars920 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1978   chars1982 (    struct StrConcat_1975  self1509 ) {
    return ( (  into_dash_iter1983 ) ( (  self1509 ) ) );
}

struct env1996 {
    ;
    uint32_t  base1210;
};

struct envunion1997 {
    uint32_t  (*fun) (  struct env1996*  ,    int32_t  ,    uint32_t  );
    struct env1996 env;
};

static  uint32_t   reduce1995 (    struct Range_693  iterable1093 ,    uint32_t  base1095 ,   struct envunion1997  fun1097 ) {
    uint32_t  x1098 = (  base1095 );
    struct RangeIter_696  it1099 = ( (  into_dash_iter698 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_279  dref1100 = ( (  next699 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_279_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_279_Just_t ) {
                struct envunion1997  temp1998 = (  fun1097 );
                x1098 = ( temp1998.fun ( &temp1998.env ,  ( dref1100 .stuff .Maybe_279_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1999 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1999);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp2000;
    return (  temp2000 );
}

static  uint32_t   lam2001 (   struct env1996* env ,    int32_t  item1214 ,    uint32_t  x1216 ) {
    return (  op_dash_mul690 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint32_t   pow1994 (    uint32_t  base1210 ,    int32_t  p1212 ) {
    struct env1996 envinst1996 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1995 ) ( ( (  to701 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub819 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral223 ( 1 ) ) ,  ( (struct envunion1997){ .fun = (  uint32_t  (*) (  struct env1996*  ,    int32_t  ,    uint32_t  ) )lam2001 , .env =  envinst1996 } ) ) );
}

static  uint32_t   op_dash_sub2002 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) - (  r237 ) );
}

static  struct Maybe_613   next1993 (    struct IntStrIter_1980 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_613_Just ) ( ( (  from_dash_charlike228 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp324 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
    }
    uint32_t  trim_dash_down1423 = ( (  pow1994 ) ( (  from_dash_integral223 ( 10 ) ) ,  (  op_dash_sub819 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    uint32_t  upper1424 = (  op_dash_div1989 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    uint32_t  upper_dash_mask1425 = (  op_dash_mul690 ( (  op_dash_div1989 ( (  upper1424 ) , (  from_dash_integral223 ( 10 ) ) ) ) , (  from_dash_integral223 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast226 ) ( (  op_dash_sub2002 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub819 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8899 ) ( (  op_dash_add789 ( (  digit1426 ) , (  from_dash_integral219 ( 48 ) ) ) ) ) );
    return ( ( Maybe_613_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_613   next1992 (    struct StrConcatIter_1979 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next1993 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next1991 (    struct StrConcatIter_1978 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next1992 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next906 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   draw_dash_str1974 (    struct Screen_668 *  screen3527 ,    struct StrConcat_1975  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp324 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp324 ( (  y3533 ) , ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add281 ( (  op_dash_mul1401 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min476 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size269 ) ( (  op_dash_sub819 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1978  temp1977 =  into_dash_iter1981 ( ( (  chars1982 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_613  __cond1990 =  next1991 (&temp1977);
        if (  __cond1990 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1990 .stuff .Maybe_613_Just_s .field0;
        ( (  put_dash_char1618 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add281 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add281 ( (  xx3538 ) , ( (  rendered_dash_wcwidth970 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

struct RenderState_2004 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_671  f_fg;
    struct Color_671  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_2009 {
    struct StrConcat_1975  field0;
    uint32_t  field1;
};

static struct StrConcat_2009 StrConcat_2009_StrConcat (  struct StrConcat_1975  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2009 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2008 {
    struct StrConcat_2009  field0;
    struct Char_57  field1;
};

static struct StrConcat_2008 StrConcat_2008_StrConcat (  struct StrConcat_2009  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_2008 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2012 {
    struct StrConcatIter_1978  f_left;
    struct IntStrIter_1980  f_right;
};

struct StrConcatIter_2011 {
    struct StrConcatIter_2012  f_left;
    struct AppendIter_880  f_right;
};

static  struct StrConcatIter_2011   into_dash_iter2014 (    struct StrConcatIter_2011  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_613   next2016 (    struct StrConcatIter_2012 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next1991 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next1993 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next2015 (    struct StrConcatIter_2011 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next2016 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next906 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each2010 (    struct StrConcatIter_2011  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrConcatIter_2011  temp2013 = ( (  into_dash_iter2014 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2011 *  it1077 = ( &temp2013 );
    while ( ( true ) ) {
        struct Maybe_613  dref1078 = ( (  next2015 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_613_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_613_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_613_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrConcatIter_2012   into_dash_iter2020 (    struct StrConcat_2009  dref1498 ) {
    return ( (struct StrConcatIter_2012) { .f_left = ( (  chars1982 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1986 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2012   chars2019 (    struct StrConcat_2009  self1509 ) {
    return ( (  into_dash_iter2020 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2011   into_dash_iter2018 (    struct StrConcat_2008  dref1498 ) {
    return ( (struct StrConcatIter_2011) { .f_left = ( (  chars2019 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars920 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2011   chars2017 (    struct StrConcat_2008  self1509 ) {
    return ( (  into_dash_iter2018 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print2007 (    struct StrConcat_2008  s2563 ) {
    ( (  for_dash_each2010 ) ( ( (  chars2017 ) ( (  s2563 ) ) ) ,  (  printf_dash_char211 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   move_dash_cursor_dash_to2006 (    uint32_t  x2577 ,    uint32_t  y2579 ) {
    uint32_t  x2580 = (  op_dash_add791 ( (  x2577 ) , (  from_dash_integral223 ( 1 ) ) ) );
    uint32_t  y2581 = (  op_dash_add791 ( (  y2579 ) , (  from_dash_integral223 ( 1 ) ) ) );
    ( (  print2007 ) ( ( ( StrConcat_2008_StrConcat ) ( ( ( StrConcat_2009_StrConcat ) ( ( ( StrConcat_1975_StrConcat ) ( ( ( StrConcat_1976_StrConcat ) ( ( (  from_dash_string227 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2581 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2580 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Slice_669   subslice2023 (    struct Slice_669  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Cell_670 *  begin_dash_ptr1787 = ( (  offset_dash_ptr705 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp191 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp191 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_669) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub311 ( ( (  min338 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_669) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

struct SliceIter_2026 {
    struct Slice_669  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2025 {
    struct SliceIter_2026  f_left_dash_it;
    struct SliceIter_2026  f_right_dash_it;
};

struct Tuple2_2027 {
    struct Cell_670  field0;
    struct Cell_670  field1;
};

static struct Tuple2_2027 Tuple2_2027_Tuple2 (  struct Cell_670  field0 ,  struct Cell_670  field1 ) {
    return ( struct Tuple2_2027 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2029 {
    bool (*  fun1135 )(    struct Tuple2_2027  );
};

struct envunion2030 {
    bool  (*fun) (  struct env2029*  ,    struct Tuple2_2027  ,    bool  );
    struct env2029 env;
};

static  struct Zip_2025   into_dash_iter2031 (    struct Zip_2025  self911 ) {
    return (  self911 );
}

struct Maybe_2032 {
    enum {
        Maybe_2032_None_t,
        Maybe_2032_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2027  field0;
        } Maybe_2032_Just_s;
    } stuff;
};

static struct Maybe_2032 Maybe_2032_Just (  struct Tuple2_2027  field0 ) {
    return ( struct Maybe_2032 ) { .tag = Maybe_2032_Just_t, .stuff = { .Maybe_2032_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_710   next2034 (    struct SliceIter_2026 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp191 ( (  op_dash_add239 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_710) { .tag = Maybe_710_None_t } );
    }
    struct Cell_670  elem1830 = ( * ( (  offset_dash_ptr705 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64268 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add239 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_710_Just ) ( (  elem1830 ) ) );
}

static  struct Maybe_2032   next2033 (    struct Zip_2025 *  self914 ) {
    struct Zip_2025  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_710  dref916 = ( (  next2034 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_710_None_t ) {
            return ( (struct Maybe_2032) { .tag = Maybe_2032_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_710_Just_t ) {
                struct Maybe_710  dref918 = ( (  next2034 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_710_None_t ) {
                    return ( (struct Maybe_2032) { .tag = Maybe_2032_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_710_Just_t ) {
                        ( (  next2034 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next2034 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2032_Just ) ( ( ( Tuple2_2027_Tuple2 ) ( ( dref916 .stuff .Maybe_710_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_710_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce2028 (    struct Zip_2025  iterable1093 ,    bool  base1095 ,   struct envunion2030  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_2025  it1099 = ( (  into_dash_iter2031 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_2032  dref1100 = ( (  next2033 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_2032_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_2032_Just_t ) {
                struct envunion2030  temp2035 = (  fun1097 );
                x1098 = ( temp2035.fun ( &temp2035.env ,  ( dref1100 .stuff .Maybe_2032_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2036 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2036);
    exit ( 1 );
    ( Unit_7_Unit );
    bool  temp2037;
    return (  temp2037 );
}

static  bool   lam2038 (   struct env2029* env ,    struct Tuple2_2027  e1137 ,    bool  x1139 ) {
    return ( ( ( env->fun1135 ) ( (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any2024 (    struct Zip_2025  it1133 ,    bool (*  fun1135 )(    struct Tuple2_2027  ) ) {
    struct env2029 envinst2029 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce2028 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion2030){ .fun = (  bool  (*) (  struct env2029*  ,    struct Tuple2_2027  ,    bool  ) )lam2038 , .env =  envinst2029 } ) ) );
}

static  struct SliceIter_2026   into_dash_iter2040 (    struct Slice_669  self1822 ) {
    return ( (struct SliceIter_2026) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2025   zip2039 (    struct Slice_669  left922 ,    struct Slice_669  right924 ) {
    struct SliceIter_2026  left_dash_it925 = ( (  into_dash_iter2040 ) ( (  left922 ) ) );
    struct SliceIter_2026  right_dash_it926 = ( (  into_dash_iter2040 ) ( (  right924 ) ) );
    return ( (struct Zip_2025) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

struct Tuple2_2044 {
    struct Color_671  field0;
    struct Color_671  field1;
};

static struct Tuple2_2044 Tuple2_2044_Tuple2 (  struct Color_671  field0 ,  struct Color_671  field1 ) {
    return ( struct Tuple2_2044 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_672 *   cast2048 (    int32_t *  x356 ) {
    return ( (enum Color8_672 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2046 (    enum Color8_672  x573 ) {
    int32_t  temp2047 = ( (  zeroed862 ) ( ) );
    int32_t *  y574 = ( &temp2047 );
    enum Color8_672 *  yp575 = ( (  cast2048 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq2045 (    enum Color8_672  l2605 ,    enum Color8_672  r2607 ) {
    return (  eq327 ( ( ( (  cast_dash_on_dash_zeroed2046 ) ( (  l2605 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2046 ) ( (  r2607 ) ) ) ) );
}

static  enum Color16_673 *   cast2052 (    int32_t *  x356 ) {
    return ( (enum Color16_673 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2050 (    enum Color16_673  x573 ) {
    int32_t  temp2051 = ( (  zeroed862 ) ( ) );
    int32_t *  y574 = ( &temp2051 );
    enum Color16_673 *  yp575 = ( (  cast2052 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq2049 (    enum Color16_673  l2611 ,    enum Color16_673  r2613 ) {
    return (  eq327 ( ( ( (  cast_dash_on_dash_zeroed2050 ) ( (  l2611 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2050 ) ( (  r2613 ) ) ) ) );
}

static  bool   eq2053 (    struct RGB_674  l2641 ,    struct RGB_674  r2643 ) {
    return ( ( (  eq215 ( ( (  l2641 ) .f_r ) , ( (  r2643 ) .f_r ) ) ) && (  eq215 ( ( (  l2641 ) .f_g ) , ( (  r2643 ) .f_g ) ) ) ) && (  eq215 ( ( (  l2641 ) .f_b ) , ( (  r2643 ) .f_b ) ) ) );
}

static  bool   eq2043 (    struct Color_671  l2664 ,    struct Color_671  r2666 ) {
    return ( {  struct Tuple2_2044  dref2667 = ( ( Tuple2_2044_Tuple2 ) ( (  l2664 ) ,  (  r2666 ) ) ) ; dref2667 .field0.tag == Color_671_ColorDefault_t && dref2667 .field1.tag == Color_671_ColorDefault_t ? ( true ) : dref2667 .field0.tag == Color_671_Color8_t && dref2667 .field1.tag == Color_671_Color8_t ? (  eq2045 ( ( dref2667 .field0 .stuff .Color_671_Color8_s .field0 ) , ( dref2667 .field1 .stuff .Color_671_Color8_s .field0 ) ) ) : dref2667 .field0.tag == Color_671_Color16_t && dref2667 .field1.tag == Color_671_Color16_t ? (  eq2049 ( ( dref2667 .field0 .stuff .Color_671_Color16_s .field0 ) , ( dref2667 .field1 .stuff .Color_671_Color16_s .field0 ) ) ) : dref2667 .field0.tag == Color_671_Color256_t && dref2667 .field1.tag == Color_671_Color256_t ? (  eq215 ( ( dref2667 .field0 .stuff .Color_671_Color256_s .field0 ) , ( dref2667 .field1 .stuff .Color_671_Color256_s .field0 ) ) ) : dref2667 .field0.tag == Color_671_ColorRGB_t && dref2667 .field1.tag == Color_671_ColorRGB_t ? (  eq2053 ( ( dref2667 .field0 .stuff .Color_671_ColorRGB_s .field0 ) , ( dref2667 .field1 .stuff .Color_671_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2042 (    struct Cell_670  l3400 ,    struct Cell_670  r3402 ) {
    if ( ( !  eq410 ( ( (  l3400 ) .f_c ) , ( (  r3402 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2043 ( ( (  l3400 ) .f_fg ) , ( (  r3402 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2043 ( ( (  l3400 ) .f_bg ) , ( (  r3402 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam2041 (    struct Tuple2_2027  dref3456 ) {
    return ( !  eq2042 ( ( dref3456 .field0 ) , ( dref3456 .field1 ) ) );
}

static  enum Unit_7   set_dash_default_dash_fg2056 (  ) {
    ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg82057 (    enum Color8_672  color2616 ) {
    enum Color8_672  dref2617 = (  color2616 );
    switch (  dref2617 ) {
        case Color8_672_Black8 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_672_Red8 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_672_Green8 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_672_Yellow8 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_672_Blue8 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_672_Magenta8 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_672_Cyan8 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_672_White8 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg162058 (    enum Color16_673  color2620 ) {
    enum Color16_673  dref2621 = (  color2620 );
    switch (  dref2621 ) {
        case Color16_673_Black16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_Red16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_Green16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_Yellow16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_Blue16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_Magenta16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_Cyan16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_White16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_BrightBlack16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_BrightRed16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_BrightGreen16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_BrightYellow16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_BrightBlue16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_BrightMagenta16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_BrightCyan16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_BrightWhite16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

struct StrConcat_2062 {
    struct StrView_21  field0;
    uint8_t  field1;
};

static struct StrConcat_2062 StrConcat_2062_StrConcat (  struct StrView_21  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2062 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2061 {
    struct StrConcat_2062  field0;
    struct Char_57  field1;
};

static struct StrConcat_2061 StrConcat_2061_StrConcat (  struct StrConcat_2062  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_2061 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2066 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2065 {
    struct StrViewIter_610  f_left;
    struct IntStrIter_2066  f_right;
};

struct StrConcatIter_2064 {
    struct StrConcatIter_2065  f_left;
    struct AppendIter_880  f_right;
};

static  struct StrConcatIter_2064   into_dash_iter2068 (    struct StrConcatIter_2064  self1491 ) {
    return (  self1491 );
}

struct env2074 {
    uint8_t  base1210;
    ;
};

struct envunion2075 {
    uint8_t  (*fun) (  struct env2074*  ,    int32_t  ,    uint8_t  );
    struct env2074 env;
};

static  uint8_t   reduce2073 (    struct Range_693  iterable1093 ,    uint8_t  base1095 ,   struct envunion2075  fun1097 ) {
    uint8_t  x1098 = (  base1095 );
    struct RangeIter_696  it1099 = ( (  into_dash_iter698 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_279  dref1100 = ( (  next699 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_279_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_279_Just_t ) {
                struct envunion2075  temp2076 = (  fun1097 );
                x1098 = ( temp2076.fun ( &temp2076.env ,  ( dref1100 .stuff .Maybe_279_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2077 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2077);
    exit ( 1 );
    ( Unit_7_Unit );
    uint8_t  temp2078;
    return (  temp2078 );
}

static  uint8_t   op_dash_mul2080 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam2079 (   struct env2074* env ,    int32_t  item1214 ,    uint8_t  x1216 ) {
    return (  op_dash_mul2080 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint8_t   pow2072 (    uint8_t  base1210 ,    int32_t  p1212 ) {
    struct env2074 envinst2074 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce2073 ) ( ( (  to701 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub819 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral219 ( 1 ) ) ,  ( (struct envunion2075){ .fun = (  uint8_t  (*) (  struct env2074*  ,    int32_t  ,    uint8_t  ) )lam2079 , .env =  envinst2074 } ) ) );
}

static  uint8_t   op_dash_div2081 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast2082 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_613   next2071 (    struct IntStrIter_2066 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_613_Just ) ( ( (  from_dash_charlike228 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp324 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
    }
    uint8_t  trim_dash_down1423 = ( (  pow2072 ) ( (  from_dash_integral219 ( 10 ) ) ,  (  op_dash_sub819 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    uint8_t  upper1424 = (  op_dash_div2081 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    uint8_t  upper_dash_mask1425 = (  op_dash_mul2080 ( (  op_dash_div2081 ( (  upper1424 ) , (  from_dash_integral219 ( 10 ) ) ) ) , (  from_dash_integral219 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast2082 ) ( (  op_dash_sub788 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub819 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8899 ) ( (  op_dash_add789 ( (  digit1426 ) , (  from_dash_integral219 ( 48 ) ) ) ) ) );
    return ( ( Maybe_613_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_613   next2070 (    struct StrConcatIter_2065 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next614 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next2071 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next2069 (    struct StrConcatIter_2064 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next2070 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next906 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each2063 (    struct StrConcatIter_2064  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrConcatIter_2064  temp2067 = ( (  into_dash_iter2068 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2064 *  it1077 = ( &temp2067 );
    while ( ( true ) ) {
        struct Maybe_613  dref1078 = ( (  next2069 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_613_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_613_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_613_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  int32_t   count_dash_digits2089 (    uint8_t  self1430 ) {
    if ( (  eq215 ( (  self1430 ) , (  from_dash_integral219 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp232 ( (  self1430 ) , (  from_dash_integral219 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div2081 ( (  self1430 ) , (  from_dash_integral219 ( 10 ) ) ) );
        digits1431 = (  op_dash_add281 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_2066   uint_dash_iter2088 (    uint8_t  int1437 ) {
    return ( (struct IntStrIter_2066) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits2089 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2066   chars2087 (    uint8_t  self1455 ) {
    return ( (  uint_dash_iter2088 ) ( (  self1455 ) ) );
}

static  struct StrConcatIter_2065   into_dash_iter2086 (    struct StrConcat_2062  dref1498 ) {
    return ( (struct StrConcatIter_2065) { .f_left = ( (  chars615 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars2087 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2065   chars2085 (    struct StrConcat_2062  self1509 ) {
    return ( (  into_dash_iter2086 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2064   into_dash_iter2084 (    struct StrConcat_2061  dref1498 ) {
    return ( (struct StrConcatIter_2064) { .f_left = ( (  chars2085 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars920 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2064   chars2083 (    struct StrConcat_2061  self1509 ) {
    return ( (  into_dash_iter2084 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print2060 (    struct StrConcat_2061  s2563 ) {
    ( (  for_dash_each2063 ) ( ( (  chars2083 ) ( (  s2563 ) ) ) ,  (  printf_dash_char211 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg2562059 (    uint8_t  color2634 ) {
    ( (  print2060 ) ( ( ( StrConcat_2061_StrConcat ) ( ( ( StrConcat_2062_StrConcat ) ( ( (  from_dash_string227 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2634 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_2095 {
    struct StrConcat_2061  field0;
    uint8_t  field1;
};

static struct StrConcat_2095 StrConcat_2095_StrConcat (  struct StrConcat_2061  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2095 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2094 {
    struct StrConcat_2095  field0;
    struct Char_57  field1;
};

static struct StrConcat_2094 StrConcat_2094_StrConcat (  struct StrConcat_2095  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_2094 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2093 {
    struct StrConcat_2094  field0;
    uint8_t  field1;
};

static struct StrConcat_2093 StrConcat_2093_StrConcat (  struct StrConcat_2094  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2093 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2092 {
    struct StrConcat_2093  field0;
    struct Char_57  field1;
};

static struct StrConcat_2092 StrConcat_2092_StrConcat (  struct StrConcat_2093  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_2092 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2100 {
    struct StrConcatIter_2064  f_left;
    struct IntStrIter_2066  f_right;
};

struct StrConcatIter_2099 {
    struct StrConcatIter_2100  f_left;
    struct AppendIter_880  f_right;
};

struct StrConcatIter_2098 {
    struct StrConcatIter_2099  f_left;
    struct IntStrIter_2066  f_right;
};

struct StrConcatIter_2097 {
    struct StrConcatIter_2098  f_left;
    struct AppendIter_880  f_right;
};

static  struct StrConcatIter_2097   into_dash_iter2102 (    struct StrConcatIter_2097  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_613   next2106 (    struct StrConcatIter_2100 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next2069 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next2071 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next2105 (    struct StrConcatIter_2099 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next2106 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next906 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next2104 (    struct StrConcatIter_2098 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next2105 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next2071 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_613   next2103 (    struct StrConcatIter_2097 *  self1494 ) {
    struct Maybe_613  dref1495 = ( (  next2104 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_613_Just_t ) {
        return ( ( Maybe_613_Just ) ( ( dref1495 .stuff .Maybe_613_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_613_None_t ) {
            return ( (  next906 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each2096 (    struct StrConcatIter_2097  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrConcatIter_2097  temp2101 = ( (  into_dash_iter2102 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2097 *  it1077 = ( &temp2101 );
    while ( ( true ) ) {
        struct Maybe_613  dref1078 = ( (  next2103 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_613_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_613_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_613_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrConcatIter_2100   into_dash_iter2114 (    struct StrConcat_2095  dref1498 ) {
    return ( (struct StrConcatIter_2100) { .f_left = ( (  chars2083 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars2087 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2100   chars2113 (    struct StrConcat_2095  self1509 ) {
    return ( (  into_dash_iter2114 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2099   into_dash_iter2112 (    struct StrConcat_2094  dref1498 ) {
    return ( (struct StrConcatIter_2099) { .f_left = ( (  chars2113 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars920 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2099   chars2111 (    struct StrConcat_2094  self1509 ) {
    return ( (  into_dash_iter2112 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2098   into_dash_iter2110 (    struct StrConcat_2093  dref1498 ) {
    return ( (struct StrConcatIter_2098) { .f_left = ( (  chars2111 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars2087 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2098   chars2109 (    struct StrConcat_2093  self1509 ) {
    return ( (  into_dash_iter2110 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2097   into_dash_iter2108 (    struct StrConcat_2092  dref1498 ) {
    return ( (struct StrConcatIter_2097) { .f_left = ( (  chars2109 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars920 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2097   chars2107 (    struct StrConcat_2092  self1509 ) {
    return ( (  into_dash_iter2108 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print2091 (    struct StrConcat_2092  s2563 ) {
    ( (  for_dash_each2096 ) ( ( (  chars2107 ) ( (  s2563 ) ) ) ,  (  printf_dash_char211 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg_dash_rgb2090 (    struct RGB_674  c2657 ) {
    ( (  print2091 ) ( ( ( StrConcat_2092_StrConcat ) ( ( ( StrConcat_2093_StrConcat ) ( ( ( StrConcat_2094_StrConcat ) ( ( ( StrConcat_2095_StrConcat ) ( ( ( StrConcat_2061_StrConcat ) ( ( ( StrConcat_2062_StrConcat ) ( ( (  from_dash_string227 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2657 ) .f_r ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2657 ) .f_g ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2657 ) .f_b ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg2055 (    struct Color_671  c2678 ) {
    struct Color_671  dref2679 = (  c2678 );
    if ( dref2679.tag == Color_671_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2056 ) ( ) );
    }
    else {
        if ( dref2679.tag == Color_671_Color8_t ) {
            ( (  set_dash_fg82057 ) ( ( dref2679 .stuff .Color_671_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2679.tag == Color_671_Color16_t ) {
                ( (  set_dash_fg162058 ) ( ( dref2679 .stuff .Color_671_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2679.tag == Color_671_Color256_t ) {
                    ( (  set_dash_fg2562059 ) ( ( dref2679 .stuff .Color_671_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2679.tag == Color_671_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2090 ) ( ( dref2679 .stuff .Color_671_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_default_dash_bg2116 (  ) {
    ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg82117 (    enum Color8_672  color2624 ) {
    enum Color8_672  dref2625 = (  color2624 );
    switch (  dref2625 ) {
        case Color8_672_Black8 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_672_Red8 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_672_Green8 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_672_Yellow8 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_672_Blue8 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_672_Magenta8 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_672_Cyan8 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_672_White8 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg162118 (    enum Color16_673  color2628 ) {
    enum Color16_673  dref2629 = (  color2628 );
    switch (  dref2629 ) {
        case Color16_673_Black16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_Red16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_Green16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_Yellow16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_Blue16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_Magenta16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_Cyan16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_White16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_673_BrightBlack16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_673_BrightRed16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_673_BrightGreen16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_673_BrightYellow16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_673_BrightBlue16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_673_BrightMagenta16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_673_BrightCyan16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_673_BrightWhite16 : {
            ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg2562119 (    uint8_t  color2637 ) {
    ( (  print2060 ) ( ( ( StrConcat_2061_StrConcat ) ( ( ( StrConcat_2062_StrConcat ) ( ( (  from_dash_string227 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2637 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg_dash_rgb2120 (    struct RGB_674  c2660 ) {
    ( (  print2091 ) ( ( ( StrConcat_2092_StrConcat ) ( ( ( StrConcat_2093_StrConcat ) ( ( ( StrConcat_2094_StrConcat ) ( ( ( StrConcat_2095_StrConcat ) ( ( ( StrConcat_2061_StrConcat ) ( ( ( StrConcat_2062_StrConcat ) ( ( (  from_dash_string227 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2660 ) .f_r ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2660 ) .f_g ) ) ) ,  ( (  from_dash_charlike228 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2660 ) .f_b ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg2115 (    struct Color_671  c2686 ) {
    struct Color_671  dref2687 = (  c2686 );
    if ( dref2687.tag == Color_671_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2116 ) ( ) );
    }
    else {
        if ( dref2687.tag == Color_671_Color8_t ) {
            ( (  set_dash_bg82117 ) ( ( dref2687 .stuff .Color_671_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2687.tag == Color_671_Color16_t ) {
                ( (  set_dash_bg162118 ) ( ( dref2687 .stuff .Color_671_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2687.tag == Color_671_Color256_t ) {
                    ( (  set_dash_bg2562119 ) ( ( dref2687 .stuff .Color_671_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2687.tag == Color_671_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2120 ) ( ( dref2687 .stuff .Color_671_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  uint32_t   i32_dash_u322121 (    int32_t  x603 ) {
    return ( (uint32_t ) (  x603 ) );
}

static  enum Unit_7   emit_dash_cell2054 (    struct RenderState_2004 *  rs3432 ,    struct Cell_670 *  c3434 ,    uint32_t  x3436 ,    uint32_t  y3438 ) {
    if ( ( ( !  eq414 ( (  x3436 ) , ( ( * (  rs3432 ) ) .f_x ) ) ) || ( !  eq414 ( (  y3438 ) , ( ( * (  rs3432 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to2006 ) ( (  x3436 ) ,  (  y3438 ) ) );
        (*  rs3432 ) .f_x = (  x3436 );
        (*  rs3432 ) .f_y = (  y3438 );
    }
    struct Char_57  char3439 = ( ( * (  c3434 ) ) .f_c );
    struct Color_671  bg3440 = ( ( * (  c3434 ) ) .f_bg );
    if ( (  eq327 ( ( ( * (  c3434 ) ) .f_char_dash_width ) , (  op_dash_neg643 ( (  from_dash_integral48 ( 1 ) ) ) ) ) ) ) {
        char3439 = ( (  from_dash_charlike228 ) ( ( " " ) ,  ( 1 ) ) );
        bg3440 = ( ( Color_671_Color8 ) ( ( Color8_672_Red8 ) ) );
    }
    if ( ( !  eq2043 ( ( ( * (  rs3432 ) ) .f_fg ) , ( ( * (  c3434 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2055 ) ( ( ( * (  c3434 ) ) .f_fg ) ) );
        (*  rs3432 ) .f_fg = ( ( * (  c3434 ) ) .f_fg );
    }
    if ( ( !  eq2043 ( ( ( * (  rs3432 ) ) .f_bg ) , (  bg3440 ) ) ) ) {
        ( (  set_dash_bg2115 ) ( (  bg3440 ) ) );
        (*  rs3432 ) .f_bg = (  bg3440 );
    }
    ( (  print_dash_str210 ) ( (  char3439 ) ) );
    uint32_t  char_dash_width3441 = ( (  i32_dash_u322121 ) ( ( (  max971 ) ( ( ( * (  c3434 ) ) .f_char_dash_width ) ,  (  from_dash_integral48 ( 1 ) ) ) ) ) );
    (*  rs3432 ) .f_x = (  op_dash_add791 ( ( ( * (  rs3432 ) ) .f_x ) , (  char_dash_width3441 ) ) );
    return ( Unit_7_Unit );
}

struct Zip_2124 {
    struct SliceIter_2026  f_left_dash_it;
    struct FromIter_273  f_right_dash_it;
};

struct env2125 {
    ;
    struct Slice_669  dest1853;
    ;
};

struct Tuple2_2127 {
    struct Cell_670  field0;
    int32_t  field1;
};

static struct Tuple2_2127 Tuple2_2127_Tuple2 (  struct Cell_670  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2127 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2126 {
    enum Unit_7  (*fun) (  struct env2125*  ,    struct Tuple2_2127  );
    struct env2125 env;
};

static  struct Zip_2124   into_dash_iter2129 (    struct Zip_2124  self911 ) {
    return (  self911 );
}

struct Maybe_2130 {
    enum {
        Maybe_2130_None_t,
        Maybe_2130_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2127  field0;
        } Maybe_2130_Just_s;
    } stuff;
};

static struct Maybe_2130 Maybe_2130_Just (  struct Tuple2_2127  field0 ) {
    return ( struct Maybe_2130 ) { .tag = Maybe_2130_Just_t, .stuff = { .Maybe_2130_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2130   next2131 (    struct Zip_2124 *  self914 ) {
    struct Zip_2124  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_710  dref916 = ( (  next2034 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_710_None_t ) {
            return ( (struct Maybe_2130) { .tag = Maybe_2130_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_710_Just_t ) {
                struct Maybe_279  dref918 = ( (  next280 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_279_None_t ) {
                    return ( (struct Maybe_2130) { .tag = Maybe_2130_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_279_Just_t ) {
                        ( (  next2034 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next280 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2130_Just ) ( ( ( Tuple2_2127_Tuple2 ) ( ( dref916 .stuff .Maybe_710_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_279_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each2123 (    struct Zip_2124  iterable1074 ,   struct envunion2126  fun1076 ) {
    struct Zip_2124  temp2128 = ( (  into_dash_iter2129 ) ( (  iterable1074 ) ) );
    struct Zip_2124 *  it1077 = ( &temp2128 );
    while ( ( true ) ) {
        struct Maybe_2130  dref1078 = ( (  next2131 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_2130_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_2130_Just_t ) {
                struct envunion2126  temp2132 = (  fun1076 );
                ( temp2132.fun ( &temp2132.env ,  ( dref1078 .stuff .Maybe_2130_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_2124   zip2133 (    struct Slice_669  left922 ,    struct FromIter_273  right924 ) {
    struct SliceIter_2026  left_dash_it925 = ( (  into_dash_iter2040 ) ( (  left922 ) ) );
    struct FromIter_273  right_dash_it926 = ( (  into_dash_iter285 ) ( (  right924 ) ) );
    return ( (struct Zip_2124) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   lam2134 (   struct env2125* env ,    struct Tuple2_2127  dref1854 ) {
    return ( (  set703 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size269 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_7   copy_dash_to2122 (    struct Slice_669  src1851 ,    struct Slice_669  dest1853 ) {
    if ( (  cmp191 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic460 ) ( ( ( StrConcat_461_StrConcat ) ( ( ( StrConcat_261_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( ( StrConcat_65_StrConcat ) ( ( (  from_dash_string227 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string227 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string227 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2125 envinst2125 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each2123 ) ( ( (  zip2133 ) ( (  src1851 ) ,  ( (  from286 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2126){ .fun = (  enum Unit_7  (*) (  struct env2125*  ,    struct Tuple2_2127  ) )lam2134 , .env =  envinst2125 } ) ) );
    return ( Unit_7_Unit );
}

static  uint32_t   render_dash_screen2003 (    struct Screen_668 *  screen3444 ) {
    int32_t  w3445 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3444 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3446 = ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen3444 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_2004  temp2005 = ( (struct RenderState_2004) { .f_x = (  from_dash_integral223 ( 0 ) ) , .f_y = (  from_dash_integral223 ( 0 ) ) , .f_fg = ( (struct Color_671) { .tag = Color_671_ColorDefault_t } ) , .f_bg = ( (struct Color_671) { .tag = Color_671_ColorDefault_t } ) , .f_changes = (  from_dash_integral223 ( 0 ) ) } );
    struct RenderState_2004 *  rs3447 = ( &temp2005 );
    ( (  move_dash_cursor_dash_to2006 ) ( (  from_dash_integral223 ( 0 ) ) ,  (  from_dash_integral223 ( 0 ) ) ) );
    struct RangeIter_696  temp2021 =  into_dash_iter698 ( ( (  to701 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub819 ( (  h3446 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_279  __cond2022 =  next699 (&temp2021);
        if (  __cond2022 .tag == 0 ) {
            break;
        }
        int32_t  y3449 =  __cond2022 .stuff .Maybe_279_Just_s .field0;
        int32_t  x_dash_v3450 = (  from_dash_integral48 ( 0 ) );
        while ( (  cmp324 ( (  x_dash_v3450 ) , (  w3445 ) ) == 0 ) ) {
            size_t  i3451 = ( (  i32_dash_size269 ) ( (  op_dash_add281 ( (  op_dash_mul1401 ( (  y3449 ) , (  w3445 ) ) ) , (  x_dash_v3450 ) ) ) ) );
            struct Cell_670 *  cur3452 = ( (  get_dash_ptr704 ) ( ( ( * (  screen3444 ) ) .f_current ) ,  (  i3451 ) ) );
            int32_t  char_dash_width3453 = ( (  max971 ) ( ( ( * (  cur3452 ) ) .f_char_dash_width ) ,  (  from_dash_integral48 ( 1 ) ) ) );
            struct Slice_669  curs3454 = ( (  subslice2023 ) ( ( ( * (  screen3444 ) ) .f_current ) ,  (  i3451 ) ,  (  op_dash_add239 ( (  i3451 ) , ( (  i32_dash_size269 ) ( (  char_dash_width3453 ) ) ) ) ) ) );
            struct Slice_669  prevs3455 = ( (  subslice2023 ) ( ( ( * (  screen3444 ) ) .f_previous ) ,  (  i3451 ) ,  (  op_dash_add239 ( (  i3451 ) , ( (  i32_dash_size269 ) ( (  char_dash_width3453 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3444 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any2024 ) ( ( (  zip2039 ) ( (  curs3454 ) ,  (  prevs3455 ) ) ) ,  (  lam2041 ) ) ) ) ) {
                (*  rs3447 ) .f_changes = (  op_dash_add791 ( ( ( * (  rs3447 ) ) .f_changes ) , (  from_dash_integral223 ( 1 ) ) ) );
                ( (  emit_dash_cell2054 ) ( (  rs3447 ) ,  (  cur3452 ) ,  ( (  i32_dash_u322121 ) ( (  x_dash_v3450 ) ) ) ,  ( (  i32_dash_u322121 ) ( (  y3449 ) ) ) ) );
                ( (  copy_dash_to2122 ) ( (  curs3454 ) ,  (  prevs3455 ) ) );
            }
            x_dash_v3450 = (  op_dash_add281 ( (  x_dash_v3450 ) , (  char_dash_width3453 ) ) );
        }
    }
    (*  screen3444 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors617 ) ( ) );
    ( (  flush_dash_stdout620 ) ( ) );
    return ( ( * (  rs3447 ) ) .f_changes );
}

static  void *   cast_dash_ptr2141 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of2142 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed2139 (  ) {
    struct timespec *  temp2140;
    struct timespec *  x570 = (  temp2140 );
    ( ( memset ) ( ( (  cast_dash_ptr2141 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of2142 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct timespec *   null_dash_ptr2138 (  ) {
    return ( (  zeroed2139 ) ( ) );
}

static  enum Unit_7   sync2135 (    struct Tui_73 *  tui3315 ) {
    if ( (  eq414 ( ( ( * (  tui3315 ) ) .f_target_dash_fps ) , (  from_dash_integral223 ( 0 ) ) ) ) ) {
        return ( Unit_7_Unit );
    }
    int64_t  frame_dash_ns3316 = (  op_dash_div896 ( (  from_dash_integral310 ( 1000000000 ) ) , ( (  size_dash_i64268 ) ( ( (  u32_dash_size682 ) ( ( ( * (  tui3315 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2136 = ( (  undefined656 ) ( ) );
    struct timespec *  now3317 = ( &temp2136 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic658 ) ( ) ) ,  (  now3317 ) ) );
    int64_t  elapsed_dash_ns3318 = (  op_dash_add412 ( (  op_dash_mul237 ( (  op_dash_sub898 ( ( ( * (  now3317 ) ) .tv_sec ) , ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral310 ( 1000000000 ) ) ) ) , (  op_dash_sub898 ( ( ( * (  now3317 ) ) .tv_nsec ) , ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3319 = (  op_dash_sub898 ( (  frame_dash_ns3316 ) , (  elapsed_dash_ns3318 ) ) );
    if ( (  cmp916 ( (  sleep_dash_ns3319 ) , (  from_dash_integral310 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2137 = ( (struct timespec) { .tv_sec = (  from_dash_integral310 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3319 ) } );
        struct timespec *  ts3320 = ( &temp2137 );
        ( ( nanosleep ) ( (  ts3320 ) ,  ( (  null_dash_ptr2138 ) ( ) ) ) );
    }
    struct timespec  temp2143 = ( (  undefined656 ) ( ) );
    struct timespec *  last_dash_sync3321 = ( &temp2143 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic658 ) ( ) ) ,  (  last_dash_sync3321 ) ) );
    (*  tui3315 ) .f_last_dash_sync = ( * (  last_dash_sync3321 ) );
    (*  tui3315 ) .f_fps_dash_count = (  op_dash_add791 ( ( ( * (  tui3315 ) ) .f_fps_dash_count ) , (  from_dash_integral223 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3322 = (  op_dash_add412 ( (  op_dash_mul237 ( (  op_dash_sub898 ( ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3315 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral310 ( 1000 ) ) ) ) , (  op_dash_div896 ( (  op_dash_sub898 ( ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3315 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral310 ( 1000000 ) ) ) ) ) );
    if ( (  cmp916 ( (  fps_dash_elapsed_dash_ms3322 ) , (  from_dash_integral310 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3315 ) .f_actual_dash_fps = ( ( * (  tui3315 ) ) .f_fps_dash_count );
        (*  tui3315 ) .f_fps_dash_count = (  from_dash_integral223 ( 0 ) );
        (*  tui3315 ) .f_fps_dash_ts = ( ( * (  tui3315 ) ) .f_last_dash_sync );
    }
    return ( Unit_7_Unit );
}

static  void *   cast_dash_ptr2146 (    struct Cell_670 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free2145 (    enum CAllocator_9  dref1959 ,    struct Slice_669  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr2146 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_screen2144 (    struct Screen_668 *  screen3420 ) {
    enum CAllocator_9  al3421 = ( ( * (  screen3420 ) ) .f_al );
    ( (  free2145 ) ( (  al3421 ) ,  ( ( * (  screen3420 ) ) .f_current ) ) );
    ( (  free2145 ) ( (  al3421 ) ,  ( ( * (  screen3420 ) ) .f_previous ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   disable_dash_mouse2148 (  ) {
    ( (  print_dash_str202 ) ( ( (  from_dash_string227 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   show_dash_cursor2149 (  ) {
    ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   reset_dash_cursor_dash_position2150 (  ) {
    ( (  print608 ) ( ( (  from_dash_string227 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   disable_dash_raw_dash_mode2151 (    struct Termios_75 *  og_dash_termios3295 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno546 ) ( ) ) ,  ( (  tcsa_dash_flush606 ) ( ) ) ,  ( (  cast_dash_ptr547 ) ( (  og_dash_termios3295 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   deinit2147 (    struct Tui_73 *  tui3325 ) {
    ( (  disable_dash_mouse2148 ) ( ) );
    ( (  show_dash_cursor2149 ) ( ) );
    ( (  reset_dash_colors617 ) ( ) );
    ( (  clear_dash_screen618 ) ( ) );
    ( (  reset_dash_cursor_dash_position2150 ) ( ) );
    ( (  disable_dash_raw_dash_mode2151 ) ( ( & ( ( * (  tui3325 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout620 ) ( ) );
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
        .envinst104 = envinst104 ,
    };
    struct env124 envinst124 = {
        .envinst122 = envinst122 ,
        .envinst109 = envinst109 ,
    };
    struct env130 envinst130 = {
        .envinst109 = envinst109 ,
        .envinst104 = envinst104 ,
    };
    struct env133 envinst133 = {
        .envinst122 = envinst122 ,
    };
    struct env135 envinst135 = {
        .envinst102 = envinst102 ,
    };
    struct env137 envinst137 = {
        .envinst61 = envinst61 ,
    };
    struct env139 envinst139 = {
        .envinst66 = envinst66 ,
    };
    struct env141 envinst141 = {
        .envinst139 = envinst139 ,
    };
    struct env146 envinst146 = {
        .envinst118 = envinst118 ,
        .envinst124 = envinst124 ,
        .envinst120 = envinst120 ,
        .envinst135 = envinst135 ,
        .envinst133 = envinst133 ,
        .envinst111 = envinst111 ,
        .envinst137 = envinst137 ,
        .envinst130 = envinst130 ,
        .envinst116 = envinst116 ,
    };
    struct env157 envinst157 = {
        .envinst133 = envinst133 ,
        .envinst141 = envinst141 ,
        .envinst111 = envinst111 ,
        .envinst59 = envinst59 ,
        .envinst52 = envinst52 ,
        .envinst114 = envinst114 ,
        .envinst146 = envinst146 ,
    };
    enum CAllocator_9  al4281 = ( (  idc166 ) ( ) );
    struct envunion169  temp168 = ( (struct envunion169){ .fun = (  struct TextBuf_88  (*) (  struct env79*  ,    enum CAllocator_9  ,    struct Pos_20  ) )mk170 , .env =  envinst79 } );
    struct TextBuf_88  temp167 = ( temp168.fun ( &temp168.env ,  (  al4281 ) ,  ( (  mk305 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) ) );
    struct TextBuf_88 *  tb4282 = ( &temp167 );
    struct Slice_306  args4285 = ( (  get307 ) ( ) );
    if ( (  cmp191 ( ( (  args4285 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        const char*  fname4286 = (  elem_dash_get312 ( (  args4285 ) , (  from_dash_integral0 ( 0 ) ) ) );
        struct envunion320  temp319 = ( (struct envunion320){ .fun = (  enum Unit_7  (*) (  struct env85*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action321 , .env =  envinst85 } );
        ( temp319.fun ( &temp319.env ,  (  tb4282 ) ,  ( (  mk305 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) ,  ( (  mk305 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) ,  ( (  read_dash_contents511 ) ( (  fname4286 ) ,  (  al4281 ) ) ) ) );
    }
    struct Editor_143  temp536 = ( (struct Editor_143) { .f_running = ( true ) , .f_al = (  al4281 ) , .f_pane = ( (  mk537 ) ( (  al4281 ) ,  (  tb4282 ) ) ) , .f_clipboard = ( (struct Maybe_144) { .tag = Maybe_144_None_t } ) , .f_search_dash_term = ( (struct Maybe_144) { .tag = Maybe_144_None_t } ) , .f_mode = ( (struct EditorMode_145) { .tag = EditorMode_145_Normal_t } ) , .f_msg = ( (struct Maybe_144) { .tag = Maybe_144_None_t } ) } );
    struct Editor_143 *  ed4287 = ( &temp536 );
    struct envunion540  temp539 = ( (struct envunion540){ .fun = (  struct Tui_73  (*) (  struct env69*  ) )mk541 , .env =  envinst69 } );
    struct Tui_73  temp538 = ( temp539.fun ( &temp539.env ) );
    struct Tui_73 *  tui4288 = ( &temp538 );
    struct Screen_668  temp675 = ( (  mk_dash_screen676 ) ( (  tui4288 ) ,  (  al4281 ) ) );
    struct Screen_668 *  screen4289 = ( &temp675 );
    uint32_t  last_dash_redraw_dash_changes4290 = (  from_dash_integral223 ( 0 ) );
    while ( ( ( * (  ed4287 ) ) .f_running ) ) {
        struct env726 envinst726 = {
            .tui4288 =  tui4288 ,
            .envinst71 = envinst71 ,
        };
        struct FunIter_725  temp724 =  into_dash_iter733 ( ( (  from_dash_function734 ) ( ( (struct envunion732){ .fun = (  struct Maybe_728  (*) (  struct env726*  ) )lam735 , .env =  envinst726 } ) ) ) );
        while (true) {
            struct Maybe_728  __cond936 =  next937 (&temp724);
            if (  __cond936 .tag == 0 ) {
                break;
            }
            struct InputEvent_729  ev4292 =  __cond936 .stuff .Maybe_728_Just_s .field0;
            struct InputEvent_729  dref4293 = (  ev4292 );
            if ( dref4293.tag == InputEvent_729_Key_t ) {
                ( (  reset_dash_msg939 ) ( (  ed4287 ) ) );
                struct envunion947  temp946 = ( (struct envunion947){ .fun = (  enum Unit_7  (*) (  struct env157*  ,    struct Editor_143 *  ,    struct Key_165  ) )handle_dash_key948 , .env =  envinst157 } );
                ( temp946.fun ( &temp946.env ,  (  ed4287 ) ,  ( dref4293 .stuff .InputEvent_729_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1560  temp1559 = ( (struct envunion1560){ .fun = (  bool  (*) (  struct env77*  ,    struct Screen_668 *  ) )resize_dash_screen_dash_if_dash_needed1561 , .env =  envinst77 } );
        ( temp1559.fun ( &temp1559.env ,  (  screen4289 ) ) );
        if ( ( (  should_dash_redraw1563 ) ( (  tui4288 ) ) ) ) {
            (*  screen4289 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1564 ) ( (  screen4289 ) ) );
            ( (  set_dash_screen_dash_fg1573 ) ( (  screen4289 ) ,  ( (struct Color_671) { .tag = Color_671_ColorDefault_t } ) ) );
            ( (  set_dash_screen_dash_bg1574 ) ( (  screen4289 ) ,  ( (struct Color_671) { .tag = Color_671_ColorDefault_t } ) ) );
            ( (  render_dash_editor1575 ) ( (  screen4289 ) ,  (  ed4287 ) ) );
            ( (  draw_dash_str1974 ) ( (  screen4289 ) ,  ( ( StrConcat_1975_StrConcat ) ( ( ( StrConcat_1976_StrConcat ) ( ( (  from_dash_string227 ) ( ( "REDRAWS[" ) ,  ( 8 ) ) ) ,  (  last_dash_redraw_dash_changes4290 ) ) ) ,  ( (  from_dash_charlike228 ) ( ( "]" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub819 ( ( (  u32_dash_i321577 ) ( ( ( * ( ( * (  screen4289 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
            last_dash_redraw_dash_changes4290 = ( (  render_dash_screen2003 ) ( (  screen4289 ) ) );
        }
        ( (  sync2135 ) ( (  tui4288 ) ) );
    }
    ( (  free_dash_screen2144 ) ( (  screen4289 ) ) );
    ( (  deinit2147 ) ( (  tui4288 ) ) );
}
