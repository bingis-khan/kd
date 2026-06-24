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

struct envunion125 {
    enum Unit_7  (*fun) (  struct env109*  ,    struct TextBuf_88 *  ,    struct Cursors_27  );
    struct env109 env;
};

enum Mode_128 {
    Mode_128_Normal,
    Mode_128_Insert,
    Mode_128_Select,
};

struct ScreenCursorOffset_129 {
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
};

struct Pane_127 {
    struct TextBuf_88 *  f_buf;
    struct Pos_20  f_cursor;
    int32_t  f_vi;
    struct Maybe_28  f_sel;
    enum Mode_128  f_mode;
    struct ScreenCursorOffset_129  f_sc_dash_off;
};

struct envunion126 {
    enum Unit_7  (*fun) (  struct env122*  ,    struct Pane_127 *  ,    int32_t  );
    struct env122 env;
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
    ;
    ;
    ;
    ;
    ;
    ;
    struct env109 envinst109;
    struct env122 envinst122;
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
    ;
    struct env109 envinst109;
    ;
    struct env104 envinst104;
    ;
    ;
    ;
};

struct envunion134 {
    enum Unit_7  (*fun) (  struct env122*  ,    struct Pane_127 *  ,    int32_t  );
    struct env122 env;
};

struct env133 {
    ;
    ;
    ;
    ;
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
};

struct envunion136 {
    enum Unit_7  (*fun) (  struct env111*  ,    struct Pane_127 *  ,    struct StrView_21  );
    struct env111 env;
};

struct Tuple2_138 {
    struct Pos_20  field0;
    struct Pos_20  field1;
};

static struct Tuple2_138 Tuple2_138_Tuple2 (  struct Pos_20  field0 ,  struct Pos_20  field1 ) {
    return ( struct Tuple2_138 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion137 {
    enum Unit_7  (*fun) (  struct env120*  ,    struct Pane_127 *  ,    struct Tuple2_138  ,    struct StrView_21  );
    struct env120 env;
};

struct env135 {
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
    struct env120 envinst120;
};

struct envunion140 {
    struct StrView_21  (*fun) (  struct env102*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  );
    struct env102 env;
};

struct env139 {
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

struct envunion142 {
    struct StrView_21  (*fun) (  struct env61*  ,    struct StrView_21  ,    enum CAllocator_9  );
    struct env61 env;
};

struct env141 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env61 envinst61;
};

struct envunion144 {
    struct StrView_21  (*fun) (  struct env64*  ,    struct StrConcat_66  ,    enum CAllocator_9  );
    struct env64 env;
};

struct env143 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env64 envinst64;
};

struct Maybe_148 {
    enum {
        Maybe_148_None_t,
        Maybe_148_Just_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } Maybe_148_Just_s;
    } stuff;
};

static struct Maybe_148 Maybe_148_Just (  struct StrView_21  field0 ) {
    return ( struct Maybe_148 ) { .tag = Maybe_148_Just_t, .stuff = { .Maybe_148_Just_s = { .field0 = field0 } } };
};

struct EditorMode_149 {
    enum {
        EditorMode_149_Normal_t,
        EditorMode_149_Cmd_t,
        EditorMode_149_Search_t,
    } tag;
    union {
        struct {
            struct Pos_20  field0;
            struct StrBuilder_54  field1;
        } EditorMode_149_Cmd_s;
        struct {
            struct Pos_20  field0;
            struct StrBuilder_54  field1;
        } EditorMode_149_Search_s;
    } stuff;
};

static struct EditorMode_149 EditorMode_149_Cmd (  struct Pos_20  field0 ,  struct StrBuilder_54  field1 ) {
    return ( struct EditorMode_149 ) { .tag = EditorMode_149_Cmd_t, .stuff = { .EditorMode_149_Cmd_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct EditorMode_149 EditorMode_149_Search (  struct Pos_20  field0 ,  struct StrBuilder_54  field1 ) {
    return ( struct EditorMode_149 ) { .tag = EditorMode_149_Search_t, .stuff = { .EditorMode_149_Search_s = { .field0 = field0 ,  .field1 = field1 } } };
};

struct Editor_147 {
    enum CAllocator_9  f_al;
    bool  f_running;
    struct Pane_127  f_pane;
    struct Maybe_148  f_clipboard;
    struct Maybe_148  f_search_dash_term;
    struct EditorMode_149  f_mode;
    struct Maybe_148  f_msg;
};

struct envunion146 {
    enum Unit_7  (*fun) (  struct env141*  ,    struct Editor_147 *  ,    struct StrView_21  );
    struct env141 env;
};

struct env145 {
    ;
    ;
    ;
    ;
    ;
    struct env141 envinst141;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion151 {
    enum Unit_7  (*fun) (  struct env124*  ,    struct Pane_127 *  );
    struct env124 env;
};

struct envunion152 {
    enum Unit_7  (*fun) (  struct env120*  ,    struct Pane_127 *  ,    struct Tuple2_138  ,    struct StrView_21  );
    struct env120 env;
};

struct envunion153 {
    enum Unit_7  (*fun) (  struct env133*  ,    struct Pane_127 *  ,    int32_t  );
    struct env133 env;
};

struct envunion154 {
    enum Unit_7  (*fun) (  struct env111*  ,    struct Pane_127 *  ,    struct StrView_21  );
    struct env111 env;
};

struct envunion155 {
    enum Unit_7  (*fun) (  struct env139*  ,    struct Editor_147 *  );
    struct env139 env;
};

struct envunion156 {
    enum Unit_7  (*fun) (  struct env135*  ,    struct Pane_127 *  );
    struct env135 env;
};

struct envunion157 {
    enum Unit_7  (*fun) (  struct env130*  ,    struct Pane_127 *  );
    struct env130 env;
};

struct envunion158 {
    enum Unit_7  (*fun) (  struct env116*  ,    struct Pane_127 *  );
    struct env116 env;
};

struct envunion159 {
    enum Unit_7  (*fun) (  struct env143*  ,    struct Editor_147 *  ,    struct StrConcat_66  );
    struct env143 env;
};

struct envunion160 {
    enum Unit_7  (*fun) (  struct env118*  ,    struct Pane_127 *  );
    struct env118 env;
};

struct env150 {
    ;
    ;
    struct env124 envinst124;
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
    struct env133 envinst133;
    ;
    ;
    ;
    struct env111 envinst111;
    struct env139 envinst139;
    ;
    ;
    struct env135 envinst135;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    struct env116 envinst116;
    struct env143 envinst143;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env118 envinst118;
    ;
    ;
};

struct envunion162 {
    enum Unit_7  (*fun) (  struct env111*  ,    struct Pane_127 *  ,    struct StrView_21  );
    struct env111 env;
};

struct envunion163 {
    enum Unit_7  (*fun) (  struct env145*  ,    struct Editor_147 *  ,    struct StrView_21  );
    struct env145 env;
};

struct envunion164 {
    enum Unit_7  (*fun) (  struct env114*  ,    struct Pane_127 *  );
    struct env114 env;
};

struct envunion165 {
    enum Unit_7  (*fun) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  );
    struct env52 env;
};

struct envunion166 {
    enum Unit_7  (*fun) (  struct env59*  ,    struct StrBuilder_54 *  );
    struct env59 env;
};

struct Key_168 {
    enum {
        Key_168_Escape_t,
        Key_168_Enter_t,
        Key_168_Tab_t,
        Key_168_Backspace_t,
        Key_168_Char_t,
        Key_168_Ctrl_t,
        Key_168_Up_t,
        Key_168_Down_t,
        Key_168_Left_t,
        Key_168_Right_t,
        Key_168_Home_t,
        Key_168_End_t,
        Key_168_PageUp_t,
        Key_168_PageDown_t,
        Key_168_Delete_t,
        Key_168_Insert_t,
        Key_168_F1_t,
        Key_168_F2_t,
        Key_168_F3_t,
        Key_168_F4_t,
        Key_168_F5_t,
        Key_168_F6_t,
        Key_168_F7_t,
        Key_168_F8_t,
        Key_168_F9_t,
        Key_168_F10_t,
        Key_168_F11_t,
        Key_168_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_168_Char_s;
        struct {
            char  field0;
        } Key_168_Ctrl_s;
    } stuff;
};

static struct Key_168 Key_168_Char (  char  field0 ) {
    return ( struct Key_168 ) { .tag = Key_168_Char_t, .stuff = { .Key_168_Char_s = { .field0 = field0 } } };
};

static struct Key_168 Key_168_Ctrl (  char  field0 ) {
    return ( struct Key_168 ) { .tag = Key_168_Ctrl_t, .stuff = { .Key_168_Ctrl_s = { .field0 = field0 } } };
};

struct envunion167 {
    enum Unit_7  (*fun) (  struct env150*  ,    struct Editor_147 *  ,    struct Key_168  );
    struct env150 env;
};

struct envunion169 {
    enum Unit_7  (*fun) (  struct env133*  ,    struct Pane_127 *  ,    int32_t  );
    struct env133 env;
};

struct env161 {
    ;
    ;
    struct env111 envinst111;
    struct env145 envinst145;
    ;
    ;
    ;
    ;
    ;
    struct env114 envinst114;
    ;
    ;
    ;
    ;
    struct env52 envinst52;
    ;
    ;
    ;
    ;
    struct env59 envinst59;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env150 envinst150;
    ;
    struct env133 envinst133;
    ;
    ;
};

static  enum CAllocator_9   idc170 (  ) {
    return ( CAllocator_9_CAllocator );
}

struct envunion173 {
    struct TextBuf_88  (*fun) (  struct env79*  ,    enum CAllocator_9  ,    struct Pos_20  );
    struct env79 env;
};

static  void *   cast_dash_ptr183 (    struct List_11 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of184 (    struct List_11 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct List_11 *   zeroed181 (  ) {
    struct List_11 *  temp182;
    struct List_11 *  x570 = (  temp182 );
    ( ( memset ) ( ( (  cast_dash_ptr183 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of184 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct List_11 *   null_dash_ptr180 (  ) {
    return ( (  zeroed181 ) ( ) );
}

static  struct Slice_10   empty179 (  ) {
    return ( (struct Slice_10) { .f_ptr = ( (  null_dash_ptr180 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_8   mk178 (    enum CAllocator_9  al2031 ) {
    struct Slice_10  elements2032 = ( (  empty179 ) ( ) );
    return ( (struct List_8) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env188 {
    struct List_8 *  list2098;
    struct env5 envinst5;
};

struct envunion189 {
    enum Unit_7  (*fun) (  struct env188*  ,    struct List_11  );
    struct env188 env;
};

struct ArrayIter_190 {
    struct Array_44  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_190   into_dash_iter192 (    struct Array_44  self2322 ) {
    return ( (struct ArrayIter_190) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_193 {
    enum {
        Maybe_193_None_t,
        Maybe_193_Just_t,
    } tag;
    union {
        struct {
            struct List_11  field0;
        } Maybe_193_Just_s;
    } stuff;
};

static struct Maybe_193 Maybe_193_Just (  struct List_11  field0 ) {
    return ( struct Maybe_193 ) { .tag = Maybe_193_Just_t, .stuff = { .Maybe_193_Just_s = { .field0 = field0 } } };
};

enum Ordering_196 {
    Ordering_196_LT,
    Ordering_196_EQ,
    Ordering_196_GT,
};

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_196   cmp195 (    size_t  l179 ,    size_t  r181 ) {
    return ( builtin_size_tcmp( (  l179 ) , (  r181 ) ) );
}

struct StrConcat_201 {
    struct StrConcat_66  field0;
    int32_t  field1;
};

static struct StrConcat_201 StrConcat_201_StrConcat (  struct StrConcat_66  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_201 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_200 {
    struct StrConcat_201  field0;
    struct Char_57  field1;
};

static struct StrConcat_200 StrConcat_200_StrConcat (  struct StrConcat_201  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_200 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_204 {
    struct StrView_21  field0;
    struct StrConcat_200  field1;
};

static struct StrConcat_204 StrConcat_204_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_200  field1 ) {
    return ( struct StrConcat_204 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_203 {
    struct StrConcat_204  field0;
    struct Char_57  field1;
};

static struct StrConcat_203 StrConcat_203_StrConcat (  struct StrConcat_204  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_203 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32207 (    size_t  x630 ) {
    return ( (int32_t ) (  x630 ) );
}

static  enum Unit_7   print_dash_str206 (    struct StrView_21  self1379 ) {
    ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32207 ) ( ( ( (  self1379 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1379 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str212 (    size_t  self1464 ) {
    ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1464 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str211 (    struct StrConcat_67  self1503 ) {
    struct StrConcat_67  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str206 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str212 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str210 (    struct StrConcat_66  self1503 ) {
    struct StrConcat_66  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str211 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str206 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str213 (    int32_t  self1440 ) {
    ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1440 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str209 (    struct StrConcat_201  self1503 ) {
    struct StrConcat_201  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str210 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str213 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

struct Scalar_217 {
    uint32_t  f_value;
};

struct CharDestructured_216 {
    enum {
        CharDestructured_216_Ref_t,
        CharDestructured_216_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_57  field0;
        } CharDestructured_216_Ref_s;
        struct {
            struct Scalar_217  field0;
        } CharDestructured_216_Scalar_s;
    } stuff;
};

static struct CharDestructured_216 CharDestructured_216_Ref (  struct Char_57  field0 ) {
    return ( struct CharDestructured_216 ) { .tag = CharDestructured_216_Ref_t, .stuff = { .CharDestructured_216_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_216 CharDestructured_216_Scalar (  struct Scalar_217  field0 ) {
    return ( struct CharDestructured_216 ) { .tag = CharDestructured_216_Scalar_t, .stuff = { .CharDestructured_216_Scalar_s = { .field0 = field0 } } };
};

static  bool   eq219 (    uint8_t  l116 ,    uint8_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint8_t   size_dash_u8221 (    size_t  x639 ) {
    return ( (uint8_t ) (  x639 ) );
}

static  size_t   op_dash_div222 (    size_t  l285 ,    size_t  r287 ) {
    return ( (  l285 ) / (  r287 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer220 (    uint8_t *  ptr678 ) {
    return ( (  size_dash_u8221 ) ( (  op_dash_div222 ( ( ( (size_t ) (  ptr678 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint8_t   from_dash_integral223 (    int64_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  uint32_t   size_dash_u32224 (    size_t  x633 ) {
    return ( (uint32_t ) (  x633 ) );
}

static  size_t   cast225 (    uint8_t *  x356 ) {
    return ( (size_t ) (  x356 ) );
}

static  struct CharDestructured_216   destructure218 (    struct Char_57  c712 ) {
    if ( (  eq219 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer220 ) ( ( (  c712 ) .f_ptr ) ) ) , (  from_dash_integral223 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_216_Scalar ) ( ( (struct Scalar_217) { .f_value = ( (  size_dash_u32224 ) ( ( ( (  cast225 ) ( ( (  c712 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_216_Ref ) ( (  c712 ) ) );
    }
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_196   cmp226 (    uint32_t  l164 ,    uint32_t  r166 ) {
    return ( builtin_uint32_tcmp( (  l164 ) , (  r166 ) ) );
}

static  uint32_t   from_dash_integral227 (    int64_t  x52 ) {
    return ( (uint32_t ) (  x52 ) );
}

static  uint8_t   cast230 (    uint32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  uint8_t   u32_dash_u8229 (    uint32_t  x657 ) {
    return ( (  cast230 ) ( (  x657 ) ) );
}

static  enum Unit_7   printf_dash_char215 (    struct Char_57  c758 ) {
    struct CharDestructured_216  dref759 = ( (  destructure218 ) ( (  c758 ) ) );
    if ( dref759.tag == CharDestructured_216_Ref_t ) {
        ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32207 ) ( ( ( dref759 .stuff .CharDestructured_216_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref759 .stuff .CharDestructured_216_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref759.tag == CharDestructured_216_Scalar_t ) {
            if ( (  cmp226 ( ( ( dref759 .stuff .CharDestructured_216_Scalar_s .field0 ) .f_value ) , (  from_dash_integral227 ( 127 ) ) ) == 2 ) ) {
                const char*  temp228 = ( (  from_dash_string49 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp228);
                exit ( 1 );
                ( Unit_7_Unit );
            }
            ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8229 ) ( ( ( dref759 .stuff .CharDestructured_216_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str214 (    struct Char_57  self1404 ) {
    ( (  printf_dash_char215 ) ( (  self1404 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str208 (    struct StrConcat_200  self1503 ) {
    struct StrConcat_200  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str209 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str214 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str205 (    struct StrConcat_204  self1503 ) {
    struct StrConcat_204  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str206 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str208 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str202 (    struct StrConcat_203  self1503 ) {
    struct StrConcat_203  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str205 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str214 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  struct StrView_21   from_dash_string231 (    uint8_t *  ptr86 ,    size_t  count88 ) {
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = (  ptr86 ) , .f_count = (  count88 ) } ) } );
}

static  uint8_t *   cast233 (    uint8_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_196   cmp236 (    uint8_t  l169 ,    uint8_t  r171 ) {
    return ( builtin_uint8_tcmp( (  l169 ) , (  r171 ) ) );
}

static  size_t   next_dash_char235 (    uint8_t *  p688 ) {
    uint8_t  pb689 = ( * (  p688 ) );
    if ( (  cmp236 ( (  pb689 ) , (  from_dash_integral223 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp236 ( (  pb689 ) , (  from_dash_integral223 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp236 ( (  pb689 ) , (  from_dash_integral223 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp236 ( (  pb689 ) , (  from_dash_integral223 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp237 = ( (  from_dash_string49 ) ( ( "(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp237);
                    exit ( 1 );
                    ( Unit_7_Unit );
                }
            }
        }
    }
}

static  struct Char_57   scan_dash_from_dash_mem234 (    uint8_t *  p700 ) {
    size_t  clen701 = ( (  next_dash_char235 ) ( (  p700 ) ) );
    if ( (  cmp195 ( (  clen701 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp238 = ( (  from_dash_string49 ) ( ( "UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp238);
        exit ( 1 );
        ( Unit_7_Unit );
    }
    return ( (struct Char_57) { .f_ptr = (  p700 ) , .f_num_dash_bytes = (  clen701 ) } );
}

static  struct Char_57   from_dash_charlike232 (    uint8_t *  ptr704 ,    size_t  num_dash_bytes706 ) {
    uint8_t *  ptr707 = ( ( (  cast233 ) ( (  ptr704 ) ) ) );
    return ( (  scan_dash_from_dash_mem234 ) ( (  ptr707 ) ) );
}

static  enum Unit_7   panic199 (    struct StrConcat_200  errmsg1712 ) {
    ( (  print_dash_str202 ) ( ( ( StrConcat_203_StrConcat ) ( ( ( StrConcat_204_StrConcat ) ( ( (  from_dash_string231 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct List_11 *   cast_dash_ptr239 (    struct Array_44 *  p359 ) {
    return ( (struct List_11 * ) (  p359 ) );
}

static  int64_t   op_dash_mul241 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) * (  r196 ) );
}

static  struct List_11 *   offset_dash_ptr240 (    struct List_11 *  x338 ,    int64_t  count340 ) {
    struct List_11  temp242;
    return ( (struct List_11 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul241 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp242 ) ) ) ) ) ) ) ) );
}

static  struct List_11 *   get_dash_ptr198 (    struct Array_44 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp195 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i2253 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic199 ) ( ( ( StrConcat_200_StrConcat ) ( ( ( StrConcat_201_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string231 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct List_11 *  p2254 = ( ( (  cast_dash_ptr239 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr240 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  struct List_11   get197 (    struct Array_44 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr198 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  size_t   op_dash_add243 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) + (  r272 ) );
}

static  struct Maybe_193   next194 (    struct ArrayIter_190 *  self2329 ) {
    if ( (  cmp195 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_193) { .tag = Maybe_193_None_t } );
    }
    struct List_11  e2331 = ( (  get197 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add243 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_193_Just ) ( (  e2331 ) ) );
}

static  enum Unit_7   for_dash_each187 (    struct Array_44  iterable1074 ,   struct envunion189  fun1076 ) {
    struct ArrayIter_190  temp191 = ( (  into_dash_iter192 ) ( (  iterable1074 ) ) );
    struct ArrayIter_190 *  it1077 = ( &temp191 );
    while ( ( true ) ) {
        struct Maybe_193  dref1078 = ( (  next194 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_193_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_193_Just_t ) {
                struct envunion189  temp244 = (  fun1076 );
                ( temp244.fun ( &temp244.env ,  ( dref1078 .stuff .Maybe_193_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  bool   eq250 (    size_t  l126 ,    size_t  r128 ) {
    return ( (  l126 ) == (  r128 ) );
}

struct TypeSize_253 {
    size_t  f_size;
};

static  struct TypeSize_253   get_dash_typesize252 (  ) {
    struct List_11  temp254;
    return ( (struct TypeSize_253) { .f_size = ( sizeof( ( (  temp254 ) ) ) ) } );
}

static  struct List_11 *   cast_dash_ptr255 (    void *  p359 ) {
    return ( (struct List_11 * ) (  p359 ) );
}

static  size_t   op_dash_mul256 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) * (  r282 ) );
}

static  struct Slice_10   allocate251 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize252 ) ( ) ) ) .f_size );
    struct List_11 *  ptr1957 = ( (  cast_dash_ptr255 ) ( ( ( malloc ) ( (  op_dash_mul256 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_10) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env257 {
    struct Slice_10  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_259 {
    struct List_11  field0;
    int32_t  field1;
};

static struct Tuple2_259 Tuple2_259_Tuple2 (  struct List_11  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_259 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion258 {
    enum Unit_7  (*fun) (  struct env257*  ,    struct Tuple2_259  );
    struct env257 env;
};

struct StrConcat_265 {
    struct StrConcat_66  field0;
    size_t  field1;
};

static struct StrConcat_265 StrConcat_265_StrConcat (  struct StrConcat_66  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_265 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_264 {
    struct StrConcat_265  field0;
    struct Char_57  field1;
};

static struct StrConcat_264 StrConcat_264_StrConcat (  struct StrConcat_265  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_264 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_268 {
    struct StrView_21  field0;
    struct StrConcat_264  field1;
};

static struct StrConcat_268 StrConcat_268_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_264  field1 ) {
    return ( struct StrConcat_268 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_267 {
    struct StrConcat_268  field0;
    struct Char_57  field1;
};

static struct StrConcat_267 StrConcat_267_StrConcat (  struct StrConcat_268  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_267 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str271 (    struct StrConcat_265  self1503 ) {
    struct StrConcat_265  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str210 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str212 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str270 (    struct StrConcat_264  self1503 ) {
    struct StrConcat_264  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str271 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str214 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str269 (    struct StrConcat_268  self1503 ) {
    struct StrConcat_268  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str206 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str270 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str266 (    struct StrConcat_267  self1503 ) {
    struct StrConcat_267  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str269 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str214 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic263 (    struct StrConcat_264  errmsg1712 ) {
    ( (  print_dash_str266 ) ( ( ( StrConcat_267_StrConcat ) ( ( ( StrConcat_268_StrConcat ) ( ( (  from_dash_string231 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  int64_t   size_dash_i64272 (    size_t  x594 ) {
    return ( (int64_t ) (  x594 ) );
}

static  struct List_11 *   get_dash_ptr262 (    struct Slice_10  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp195 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic263 ) ( ( ( StrConcat_264_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string231 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct List_11 *  elem_dash_ptr1760 = ( (  offset_dash_ptr240 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set261 (    struct Slice_10  slice1774 ,    size_t  i1776 ,    struct List_11  x1778 ) {
    struct List_11 *  ep1779 = ( (  get_dash_ptr262 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  size_t   i32_dash_size273 (    int32_t  x609 ) {
    return ( (size_t ) ( (int64_t ) (  x609 ) ) );
}

static  enum Unit_7   lam260 (   struct env257* env ,    struct Tuple2_259  dref2043 ) {
    return ( (  set261 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size273 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct SliceIter_276 {
    struct Slice_10  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_277 {
    int32_t  f_from;
};

struct Zip_275 {
    struct SliceIter_276  f_left_dash_it;
    struct FromIter_277  f_right_dash_it;
};

static  struct Zip_275   into_dash_iter279 (    struct Zip_275  self911 ) {
    return (  self911 );
}

struct Maybe_280 {
    enum {
        Maybe_280_None_t,
        Maybe_280_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_259  field0;
        } Maybe_280_Just_s;
    } stuff;
};

static struct Maybe_280 Maybe_280_Just (  struct Tuple2_259  field0 ) {
    return ( struct Maybe_280 ) { .tag = Maybe_280_Just_t, .stuff = { .Maybe_280_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_193   next282 (    struct SliceIter_276 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp195 ( (  op_dash_add243 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_193) { .tag = Maybe_193_None_t } );
    }
    struct List_11  elem1830 = ( * ( (  offset_dash_ptr240 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add243 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_193_Just ) ( (  elem1830 ) ) );
}

struct Maybe_283 {
    enum {
        Maybe_283_None_t,
        Maybe_283_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_283_Just_s;
    } stuff;
};

static struct Maybe_283 Maybe_283_Just (  int32_t  field0 ) {
    return ( struct Maybe_283 ) { .tag = Maybe_283_Just_t, .stuff = { .Maybe_283_Just_s = { .field0 = field0 } } };
};

static  int32_t   op_dash_add285 (    int32_t  l207 ,    int32_t  r209 ) {
    return ( (  l207 ) + (  r209 ) );
}

static  struct Maybe_283   next284 (    struct FromIter_277 *  dref905 ) {
    int32_t  v907 = ( ( (* dref905 ) ) .f_from );
    (* dref905 ) .f_from = (  op_dash_add285 ( ( ( (* dref905 ) ) .f_from ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( ( Maybe_283_Just ) ( (  v907 ) ) );
}

static  struct Maybe_280   next281 (    struct Zip_275 *  self914 ) {
    struct Zip_275  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_193  dref916 = ( (  next282 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_193_None_t ) {
            return ( (struct Maybe_280) { .tag = Maybe_280_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_193_Just_t ) {
                struct Maybe_283  dref918 = ( (  next284 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_283_None_t ) {
                    return ( (struct Maybe_280) { .tag = Maybe_280_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_283_Just_t ) {
                        ( (  next282 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next284 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_280_Just ) ( ( ( Tuple2_259_Tuple2 ) ( ( dref916 .stuff .Maybe_193_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_283_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each274 (    struct Zip_275  iterable1074 ,   struct envunion258  fun1076 ) {
    struct Zip_275  temp278 = ( (  into_dash_iter279 ) ( (  iterable1074 ) ) );
    struct Zip_275 *  it1077 = ( &temp278 );
    while ( ( true ) ) {
        struct Maybe_280  dref1078 = ( (  next281 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_280_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_280_Just_t ) {
                struct envunion258  temp286 = (  fun1076 );
                ( temp286.fun ( &temp286.env ,  ( dref1078 .stuff .Maybe_280_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct SliceIter_276   into_dash_iter288 (    struct Slice_10  self1822 ) {
    return ( (struct SliceIter_276) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_277   into_dash_iter289 (    struct FromIter_277  it903 ) {
    return (  it903 );
}

static  struct Zip_275   zip287 (    struct Slice_10  left922 ,    struct FromIter_277  right924 ) {
    struct SliceIter_276  left_dash_it925 = ( (  into_dash_iter288 ) ( (  left922 ) ) );
    struct FromIter_277  right_dash_it926 = ( (  into_dash_iter289 ) ( (  right924 ) ) );
    return ( (struct Zip_275) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct FromIter_277   from290 (    int32_t  f900 ) {
    return ( (struct FromIter_277) { .f_from = (  f900 ) } );
}

static  void *   cast_dash_ptr292 (    struct List_11 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free291 (    enum CAllocator_9  dref1959 ,    struct Slice_10  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr292 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   grow_dash_if_dash_full249 (   struct env1* env ,    struct List_8 *  list2041 ) {
    if ( (  eq250 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate251 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq250 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_10  new_dash_slice2042 = ( (  allocate251 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul256 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env257 envinst257 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion258  fun2046 = ( (struct envunion258){ .fun = (  enum Unit_7  (*) (  struct env257*  ,    struct Tuple2_259  ) )lam260 , .env =  envinst257 } );
            ( (  for_dash_each274 ) ( ( (  zip287 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from290 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free291 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add247 (   struct env5* env ,    struct List_8 *  list2049 ,    struct List_11  elem2051 ) {
    struct envunion6  temp248 = ( (struct envunion6){ .fun = (  enum Unit_7  (*) (  struct env1*  ,    struct List_8 *  ) )grow_dash_if_dash_full249 , .env =  env->envinst1 } );
    ( temp248.fun ( &temp248.env ,  (  list2049 ) ) );
    ( (  set261 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add243 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam245 (   struct env188* env ,    struct List_11  x2102 ) {
    struct envunion39  temp246 = ( (struct envunion39){ .fun = (  enum Unit_7  (*) (  struct env5*  ,    struct List_8 *  ,    struct List_11  ) )add247 , .env =  env->envinst5 } );
    return ( temp246.fun ( &temp246.env ,  ( env->list2098 ) ,  (  x2102 ) ) );
}

static  enum Unit_7   add_dash_all186 (   struct env38* env ,    struct List_8 *  list2098 ,    struct Array_44  it2100 ) {
    struct env188 envinst188 = {
        .list2098 =  list2098 ,
        .envinst5 = env->envinst5 ,
    };
    ( (  for_dash_each187 ) ( (  it2100 ) ,  ( (struct envunion189){ .fun = (  enum Unit_7  (*) (  struct env188*  ,    struct List_11  ) )lam245 , .env =  envinst188 } ) ) );
    return ( Unit_7_Unit );
}

static  struct List_8   from_dash_iter176 (   struct env42* env ,    struct Array_44  iter2139 ,    enum CAllocator_9  al2141 ) {
    struct List_8  temp177 = ( (  mk178 ) ( (  al2141 ) ) );
    struct List_8 *  list2142 = ( &temp177 );
    struct envunion43  temp185 = ( (struct envunion43){ .fun = (  enum Unit_7  (*) (  struct env38*  ,    struct List_8 *  ,    struct Array_44  ) )add_dash_all186 , .env =  env->envinst38 } );
    ( temp185.fun ( &temp185.env ,  (  list2142 ) ,  (  iter2139 ) ) );
    return ( * (  list2142 ) );
}

static  struct Array_44   from_dash_listlike293 (    struct Array_44  self330 ) {
    return (  self330 );
}

static  void *   cast_dash_ptr299 (    uint8_t * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of300 (    uint8_t *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint8_t *   zeroed297 (  ) {
    uint8_t *  temp298;
    uint8_t *  x570 = (  temp298 );
    ( ( memset ) ( ( (  cast_dash_ptr299 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of300 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   null_dash_ptr296 (  ) {
    return ( (  zeroed297 ) ( ) );
}

static  struct Slice_12   empty295 (  ) {
    return ( (struct Slice_12) { .f_ptr = ( (  null_dash_ptr296 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_11   mk294 (    enum CAllocator_9  al2031 ) {
    struct Slice_12  elements2032 = ( (  empty295 ) ( ) );
    return ( (struct List_11) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr307 (    struct Changeset_26 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of308 (    struct Changeset_26 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Changeset_26 *   zeroed305 (  ) {
    struct Changeset_26 *  temp306;
    struct Changeset_26 *  x570 = (  temp306 );
    ( ( memset ) ( ( (  cast_dash_ptr307 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of308 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Changeset_26 *   null_dash_ptr304 (  ) {
    return ( (  zeroed305 ) ( ) );
}

static  struct Slice_25   empty303 (  ) {
    return ( (struct Slice_25) { .f_ptr = ( (  null_dash_ptr304 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_24   mk302 (    enum CAllocator_9  al2031 ) {
    struct Slice_25  elements2032 = ( (  empty303 ) ( ) );
    return ( (struct List_24) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_89   mk_dash_actions301 (    enum CAllocator_9  al3613 ) {
    return ( (struct Actions_89) { .f_list = ( (  mk302 ) ( (  al3613 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( ChangesetInputType_90_NoChangeset ) } );
}

static  struct TextBuf_88   mk174 (   struct env79* env ,    enum CAllocator_9  al3624 ,    struct Pos_20  cursor_dash_pos3626 ) {
    struct envunion80  temp175 = ( (struct envunion80){ .fun = (  struct List_8  (*) (  struct env42*  ,    struct Array_44  ,    enum CAllocator_9  ) )from_dash_iter176 , .env =  env->envinst42 } );
    return ( (struct TextBuf_88) { .f_al = (  al3624 ) , .f_buf = ( temp175.fun ( &temp175.env ,  ( (  from_dash_listlike293 ) ( ( (struct Array_44) { ._arr = { ( (  mk294 ) ( (  al3624 ) ) ) } } ) ) ) ,  (  al3624 ) ) ) , .f_actions = ( (  mk_dash_actions301 ) ( (  al3624 ) ) ) } );
}

static  struct Pos_20   mk309 (    int32_t  line3579 ,    int32_t  bi3581 ) {
    return ( (struct Pos_20) { .f_line = (  line3579 ) , .f_bi = (  bi3581 ) } );
}

struct Slice_310 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  const char* *   offset_dash_ptr312 (    const char* *  x338 ,    int64_t  count340 ) {
    const char*  temp313;
    return ( (const char* * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul241 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp313 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral314 (    int64_t  x46 ) {
    return (  x46 );
}

static  size_t   op_dash_sub315 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) - (  r277 ) );
}

static  struct Slice_310   get311 (  ) {
    return ( (struct Slice_310) { .f_ptr = ( (  offset_dash_ptr312 ) ( ( _global_argv ) ,  (  from_dash_integral314 ( 1 ) ) ) ) , .f_count = (  op_dash_sub315 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

struct Maybe_319 {
    enum {
        Maybe_319_None_t,
        Maybe_319_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_319_Just_s;
    } stuff;
};

static struct Maybe_319 Maybe_319_Just (  const char*  field0 ) {
    return ( struct Maybe_319 ) { .tag = Maybe_319_Just_t, .stuff = { .Maybe_319_Just_s = { .field0 = field0 } } };
};

static  const char*   undefined320 (  ) {
    const char*  temp321;
    return (  temp321 );
}

static  const char*   or_dash_fail318 (    struct Maybe_319  x1725 ,    struct StrConcat_264  errmsg1727 ) {
    struct Maybe_319  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_319_None_t ) {
        ( (  panic263 ) ( (  errmsg1727 ) ) );
        return ( (  undefined320 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_319_Just_t ) {
            return ( dref1728 .stuff .Maybe_319_Just_s .field0 );
        }
    }
}

static  struct Maybe_319   try_dash_get322 (    struct Slice_310  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp195 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_319) { .tag = Maybe_319_None_t } );
    }
    const char* *  elem_dash_ptr1766 = ( (  offset_dash_ptr312 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_319_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  const char*   get317 (    struct Slice_310  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail318 ) ( ( (  try_dash_get322 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_264_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string231 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get316 (    struct Slice_310  self1867 ,    size_t  idx1869 ) {
    return ( (  get317 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

struct envunion324 {
    enum Unit_7  (*fun) (  struct env85*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  );
    struct env85 env;
};

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_196   cmp328 (    int32_t  l159 ,    int32_t  r161 ) {
    return ( builtin_int32_tcmp( (  l159 ) , (  r161 ) ) );
}

static  enum Ordering_196   cmp327 (    struct Pos_20  l3572 ,    struct Pos_20  r3574 ) {
    enum Ordering_196  dref3575 = ( (  cmp328 ) ( ( (  l3572 ) .f_line ) ,  ( (  r3574 ) .f_line ) ) );
    switch (  dref3575 ) {
        case Ordering_196_EQ : {
            return ( (  cmp328 ) ( ( (  l3572 ) .f_bi ) ,  ( (  r3574 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_196  els3576 =  dref3575;
            return (  els3576 );
            break;
        }
    }
}

static  struct Pos_20   min326 (    struct Pos_20  l1236 ,    struct Pos_20  r1238 ) {
    if ( (  cmp327 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Pos_20   max329 (    struct Pos_20  l1315 ,    struct Pos_20  r1317 ) {
    if ( (  cmp327 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  bool   eq331 (    int32_t  l106 ,    int32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq330 (    struct Pos_20  l3567 ,    struct Pos_20  r3569 ) {
    return ( (  eq331 ( ( (  l3567 ) .f_line ) , ( (  r3569 ) .f_line ) ) ) && (  eq331 ( ( (  l3567 ) .f_bi ) , ( (  r3569 ) .f_bi ) ) ) );
}

static  size_t   size332 (    struct List_8 *  l2133 ) {
    return ( ( * (  l2133 ) ) .f_count );
}

static  struct List_11 *   get_dash_ptr337 (    struct List_8 *  list2001 ,    size_t  i2003 ) {
    if ( ( (  cmp195 ( (  i2003 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i2003 ) , ( ( * (  list2001 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic263 ) ( ( ( StrConcat_264_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2003 ) ) ) ,  ( (  from_dash_string231 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2001 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr262 ) ( ( ( * (  list2001 ) ) .f_elements ) ,  (  i2003 ) ) );
}

static  struct List_11   get336 (    struct List_8 *  list2011 ,    size_t  i2013 ) {
    return ( * ( (  get_dash_ptr337 ) ( (  list2011 ) ,  (  i2013 ) ) ) );
}

static  uint8_t *   offset_dash_ptr340 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp341;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul241 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp341 ) ) ) ) ) ) ) ) );
}

static  size_t   min342 (    size_t  l1236 ,    size_t  r1238 ) {
    if ( (  cmp195 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Slice_12   subslice339 (    struct Slice_12  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    uint8_t *  begin_dash_ptr1787 = ( (  offset_dash_ptr340 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp195 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp195 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_12) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub315 ( ( (  min342 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_12) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct Slice_12   from338 (    struct Slice_12  slice1791 ,    size_t  from1793 ) {
    return ( (  subslice339 ) ( (  slice1791 ) ,  (  from1793 ) ,  ( (  slice1791 ) .f_count ) ) );
}

static  struct Slice_12   to_dash_slice343 (    struct List_11  l2126 ) {
    uint8_t *  ptr2127 = ( ( (  l2126 ) .f_elements ) .f_ptr );
    return ( (struct Slice_12) { .f_ptr = (  ptr2127 ) , .f_count = ( (  l2126 ) .f_count ) } );
}

static  enum Unit_7   set344 (    struct List_8 *  list2021 ,    size_t  i2023 ,    struct List_11  elem2025 ) {
    if ( ( (  cmp195 ( (  i2023 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i2023 ) , ( ( * (  list2021 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic263 ) ( ( ( StrConcat_264_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2023 ) ) ) ,  ( (  from_dash_string231 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2021 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set261 ) ( ( ( * (  list2021 ) ) .f_elements ) ,  (  i2023 ) ,  (  elem2025 ) ) );
    return ( Unit_7_Unit );
}

struct env351 {
    struct List_11 *  list2098;
    struct env13 envinst13;
};

struct envunion352 {
    enum Unit_7  (*fun) (  struct env351*  ,    uint8_t  );
    struct env351 env;
};

struct SliceIter_353 {
    struct Slice_12  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_353   into_dash_iter355 (    struct Slice_12  self1822 ) {
    return ( (struct SliceIter_353) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_356 {
    enum {
        Maybe_356_None_t,
        Maybe_356_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_356_Just_s;
    } stuff;
};

static struct Maybe_356 Maybe_356_Just (  uint8_t  field0 ) {
    return ( struct Maybe_356 ) { .tag = Maybe_356_Just_t, .stuff = { .Maybe_356_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_356   next357 (    struct SliceIter_353 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp195 ( (  op_dash_add243 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_356) { .tag = Maybe_356_None_t } );
    }
    uint8_t  elem1830 = ( * ( (  offset_dash_ptr340 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add243 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_356_Just ) ( (  elem1830 ) ) );
}

static  enum Unit_7   for_dash_each350 (    struct Slice_12  iterable1074 ,   struct envunion352  fun1076 ) {
    struct SliceIter_353  temp354 = ( (  into_dash_iter355 ) ( (  iterable1074 ) ) );
    struct SliceIter_353 *  it1077 = ( &temp354 );
    while ( ( true ) ) {
        struct Maybe_356  dref1078 = ( (  next357 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_356_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_356_Just_t ) {
                struct envunion352  temp358 = (  fun1076 );
                ( temp358.fun ( &temp358.env ,  ( dref1078 .stuff .Maybe_356_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

struct TypeSize_366 {
    size_t  f_size;
};

static  struct TypeSize_366   get_dash_typesize365 (  ) {
    uint8_t  temp367;
    return ( (struct TypeSize_366) { .f_size = ( sizeof( ( (  temp367 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr368 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_12   allocate364 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize365 ) ( ) ) ) .f_size );
    uint8_t *  ptr1957 = ( (  cast_dash_ptr368 ) ( ( ( malloc ) ( (  op_dash_mul256 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_12) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env369 {
    struct Slice_12  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_371 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_371 Tuple2_371_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_371 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion370 {
    enum Unit_7  (*fun) (  struct env369*  ,    struct Tuple2_371  );
    struct env369 env;
};

static  uint8_t *   get_dash_ptr374 (    struct Slice_12  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp195 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic263 ) ( ( ( StrConcat_264_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string231 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1760 = ( (  offset_dash_ptr340 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set373 (    struct Slice_12  slice1774 ,    size_t  i1776 ,    uint8_t  x1778 ) {
    uint8_t *  ep1779 = ( (  get_dash_ptr374 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam372 (   struct env369* env ,    struct Tuple2_371  dref2043 ) {
    return ( (  set373 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size273 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct Zip_376 {
    struct SliceIter_353  f_left_dash_it;
    struct FromIter_277  f_right_dash_it;
};

static  struct Zip_376   into_dash_iter378 (    struct Zip_376  self911 ) {
    return (  self911 );
}

struct Maybe_379 {
    enum {
        Maybe_379_None_t,
        Maybe_379_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_371  field0;
        } Maybe_379_Just_s;
    } stuff;
};

static struct Maybe_379 Maybe_379_Just (  struct Tuple2_371  field0 ) {
    return ( struct Maybe_379 ) { .tag = Maybe_379_Just_t, .stuff = { .Maybe_379_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_379   next380 (    struct Zip_376 *  self914 ) {
    struct Zip_376  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_356  dref916 = ( (  next357 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_356_None_t ) {
            return ( (struct Maybe_379) { .tag = Maybe_379_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_356_Just_t ) {
                struct Maybe_283  dref918 = ( (  next284 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_283_None_t ) {
                    return ( (struct Maybe_379) { .tag = Maybe_379_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_283_Just_t ) {
                        ( (  next357 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next284 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_379_Just ) ( ( ( Tuple2_371_Tuple2 ) ( ( dref916 .stuff .Maybe_356_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_283_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each375 (    struct Zip_376  iterable1074 ,   struct envunion370  fun1076 ) {
    struct Zip_376  temp377 = ( (  into_dash_iter378 ) ( (  iterable1074 ) ) );
    struct Zip_376 *  it1077 = ( &temp377 );
    while ( ( true ) ) {
        struct Maybe_379  dref1078 = ( (  next380 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_379_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_379_Just_t ) {
                struct envunion370  temp381 = (  fun1076 );
                ( temp381.fun ( &temp381.env ,  ( dref1078 .stuff .Maybe_379_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_376   zip382 (    struct Slice_12  left922 ,    struct FromIter_277  right924 ) {
    struct SliceIter_353  left_dash_it925 = ( (  into_dash_iter355 ) ( (  left922 ) ) );
    struct FromIter_277  right_dash_it926 = ( (  into_dash_iter289 ) ( (  right924 ) ) );
    return ( (struct Zip_376) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr384 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free383 (    enum CAllocator_9  dref1959 ,    struct Slice_12  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr384 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   grow_dash_if_dash_full363 (   struct env2* env ,    struct List_11 *  list2041 ) {
    if ( (  eq250 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate364 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq250 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_12  new_dash_slice2042 = ( (  allocate364 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul256 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env369 envinst369 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion370  fun2046 = ( (struct envunion370){ .fun = (  enum Unit_7  (*) (  struct env369*  ,    struct Tuple2_371  ) )lam372 , .env =  envinst369 } );
            ( (  for_dash_each375 ) ( ( (  zip382 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from290 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free383 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add361 (   struct env13* env ,    struct List_11 *  list2049 ,    uint8_t  elem2051 ) {
    struct envunion14  temp362 = ( (struct envunion14){ .fun = (  enum Unit_7  (*) (  struct env2*  ,    struct List_11 *  ) )grow_dash_if_dash_full363 , .env =  env->envinst2 } );
    ( temp362.fun ( &temp362.env ,  (  list2049 ) ) );
    ( (  set373 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add243 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam359 (   struct env351* env ,    uint8_t  x2102 ) {
    struct envunion41  temp360 = ( (struct envunion41){ .fun = (  enum Unit_7  (*) (  struct env13*  ,    struct List_11 *  ,    uint8_t  ) )add361 , .env =  env->envinst13 } );
    return ( temp360.fun ( &temp360.env ,  ( env->list2098 ) ,  (  x2102 ) ) );
}

static  enum Unit_7   add_dash_all349 (   struct env40* env ,    struct List_11 *  list2098 ,    struct Slice_12  it2100 ) {
    struct env351 envinst351 = {
        .list2098 =  list2098 ,
        .envinst13 = env->envinst13 ,
    };
    ( (  for_dash_each350 ) ( (  it2100 ) ,  ( (struct envunion352){ .fun = (  enum Unit_7  (*) (  struct env351*  ,    uint8_t  ) )lam359 , .env =  envinst351 } ) ) );
    return ( Unit_7_Unit );
}

static  struct List_11   from_dash_iter346 (   struct env45* env ,    struct Slice_12  iter2139 ,    enum CAllocator_9  al2141 ) {
    struct List_11  temp347 = ( (  mk294 ) ( (  al2141 ) ) );
    struct List_11 *  list2142 = ( &temp347 );
    struct envunion46  temp348 = ( (struct envunion46){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all349 , .env =  env->envinst40 } );
    ( temp348.fun ( &temp348.env ,  (  list2142 ) ,  (  iter2139 ) ) );
    return ( * (  list2142 ) );
}

static  struct StrView_21   or_dash_else386 (    struct Maybe_148  self1732 ,    struct StrView_21  alt1734 ) {
    struct Maybe_148  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_148_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_148_Just_t ) {
            return ( dref1735 .stuff .Maybe_148_Just_s .field0 );
        }
    }
}

struct LineIter_388 {
    struct StrView_21  f_og;
    size_t  f_last;
};

static  uint8_t   undefined392 (  ) {
    uint8_t  temp393;
    return (  temp393 );
}

static  uint8_t   or_dash_fail391 (    struct Maybe_356  x1725 ,    struct StrConcat_264  errmsg1727 ) {
    struct Maybe_356  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_356_None_t ) {
        ( (  panic263 ) ( (  errmsg1727 ) ) );
        return ( (  undefined392 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_356_Just_t ) {
            return ( dref1728 .stuff .Maybe_356_Just_s .field0 );
        }
    }
}

static  struct Maybe_356   try_dash_get394 (    struct Slice_12  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp195 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_356) { .tag = Maybe_356_None_t } );
    }
    uint8_t *  elem_dash_ptr1766 = ( (  offset_dash_ptr340 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_356_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  uint8_t   get390 (    struct Slice_12  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail391 ) ( ( (  try_dash_get394 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_264_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string231 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   char_dash_u8395 (    struct Char_57  c718 ) {
    struct CharDestructured_216  dref719 = ( (  destructure218 ) ( (  c718 ) ) );
    if ( dref719.tag == CharDestructured_216_Ref_t ) {
        return ( * ( ( dref719 .stuff .CharDestructured_216_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref719.tag == CharDestructured_216_Scalar_t ) {
            return ( (  u32_dash_u8229 ) ( ( ( dref719 .stuff .CharDestructured_216_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct StrView_21   byte_dash_substr396 (    struct StrView_21  s2183 ,    size_t  from2185 ,    size_t  to2187 ) {
    return ( (struct StrView_21) { .f_contents = ( (  subslice339 ) ( ( (  s2183 ) .f_contents ) ,  (  from2185 ) ,  (  to2187 ) ) ) } );
}

static  struct Maybe_148   next389 (    struct LineIter_388 *  self2404 ) {
    if ( (  cmp195 ( ( ( * (  self2404 ) ) .f_last ) , ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_148) { .tag = Maybe_148_None_t } );
    }
    size_t  i2405 = ( ( * (  self2404 ) ) .f_last );
    while ( ( (  cmp195 ( (  i2405 ) , ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq219 ( ( (  get390 ) ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) ,  (  i2405 ) ) ) , ( (  char_dash_u8395 ) ( ( (  from_dash_charlike232 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2405 = (  op_dash_add243 ( (  i2405 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_21  line2406 = ( (  byte_dash_substr396 ) ( ( ( * (  self2404 ) ) .f_og ) ,  ( ( * (  self2404 ) ) .f_last ) ,  (  i2405 ) ) );
    if ( (  cmp195 ( (  i2405 ) , ( ( ( ( * (  self2404 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2405 = (  op_dash_add243 ( (  i2405 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2404 ) .f_last = (  i2405 );
    return ( ( Maybe_148_Just ) ( (  line2406 ) ) );
}

static  struct LineIter_388   into_dash_iter398 (    struct LineIter_388  self2401 ) {
    return (  self2401 );
}

static  struct Maybe_148   head387 (    struct LineIter_388  it1142 ) {
    struct LineIter_388  temp397 = ( (  into_dash_iter398 ) ( (  it1142 ) ) );
    return ( (  next389 ) ( ( &temp397 ) ) );
}

static  struct LineIter_388   lines399 (    struct StrView_21  s2398 ) {
    return ( (struct LineIter_388) { .f_og = (  s2398 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env404 {
    ;
    struct Char_57  c2222;
};

struct envunion405 {
    bool  (*fun) (  struct env404*  ,    struct Char_57  );
    struct env404 env;
};

struct SplitIter_403 {
    struct StrView_21  f_og;
    size_t  f_last;
    struct envunion405  f_fun;
};

struct Drop_402 {
    struct SplitIter_403  field0;
    size_t  field1;
};

static struct Drop_402 Drop_402_Drop (  struct SplitIter_403  field0 ,  size_t  field1 ) {
    return ( struct Drop_402 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_401 {
    struct Drop_402  f_left_dash_it;
    struct FromIter_277  f_right_dash_it;
};

static  struct Zip_401   into_dash_iter406 (    struct Zip_401  self911 ) {
    return (  self911 );
}

static  struct Drop_402   into_dash_iter408 (    struct Drop_402  self845 ) {
    return (  self845 );
}

static  struct Zip_401   zip407 (    struct Drop_402  left922 ,    struct FromIter_277  right924 ) {
    struct Drop_402  left_dash_it925 = ( (  into_dash_iter408 ) ( (  left922 ) ) );
    struct FromIter_277  right_dash_it926 = ( (  into_dash_iter289 ) ( (  right924 ) ) );
    return ( (struct Zip_401) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct SplitIter_403   into_dash_iter410 (    struct SplitIter_403  self2227 ) {
    return (  self2227 );
}

static  struct Drop_402   drop409 (    struct SplitIter_403  iterable852 ,    size_t  i854 ) {
    struct SplitIter_403  it855 = ( (  into_dash_iter410 ) ( (  iterable852 ) ) );
    return ( ( Drop_402_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SplitIter_403   split_dash_by_dash_filter412 (    struct StrView_21  s2215 ,   struct envunion405  fun2217 ) {
    return ( (struct SplitIter_403) { .f_og = (  s2215 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2217 ) } );
}

struct Tuple2_415 {
    struct CharDestructured_216  field0;
    struct CharDestructured_216  field1;
};

static struct Tuple2_415 Tuple2_415_Tuple2 (  struct CharDestructured_216  field0 ,  struct CharDestructured_216  field1 ) {
    return ( struct Tuple2_415 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int64_t   op_dash_add416 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) + (  r186 ) );
}

static  bool   eq418 (    uint32_t  l111 ,    uint32_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  bool   eq417 (    struct Scalar_217  l724 ,    struct Scalar_217  r726 ) {
    return (  eq418 ( ( (  l724 ) .f_value ) , ( (  r726 ) .f_value ) ) );
}

static  bool   eq414 (    struct Char_57  l729 ,    struct Char_57  r731 ) {
    if ( ( !  eq250 ( ( (  l729 ) .f_num_dash_bytes ) , ( (  r731 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_415  dref732 = ( ( Tuple2_415_Tuple2 ) ( ( (  destructure218 ) ( (  l729 ) ) ) ,  ( (  destructure218 ) ( (  r731 ) ) ) ) );
    if ( dref732 .field0.tag == CharDestructured_216_Ref_t && dref732 .field1.tag == CharDestructured_216_Ref_t ) {
        int64_t  i735 = (  from_dash_integral314 ( 0 ) );
        while ( (  cmp195 ( ( (size_t ) (  i735 ) ) , ( ( dref732 .field0 .stuff .CharDestructured_216_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq219 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field0 .stuff .CharDestructured_216_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field1 .stuff .CharDestructured_216_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) ) ) ) {
                return ( false );
            }
            i735 = (  op_dash_add416 ( (  i735 ) , (  from_dash_integral314 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref732 .field0.tag == CharDestructured_216_Scalar_t && dref732 .field1.tag == CharDestructured_216_Scalar_t ) {
            return (  eq417 ( ( dref732 .field0 .stuff .CharDestructured_216_Scalar_s .field0 ) , ( dref732 .field1 .stuff .CharDestructured_216_Scalar_s .field0 ) ) );
        }
        else {
            if ( dref732 .field0.tag == CharDestructured_216_Scalar_t && dref732 .field1.tag == CharDestructured_216_Ref_t ) {
                return (  eq219 ( ( (  u32_dash_u8229 ) ( ( ( dref732 .field0 .stuff .CharDestructured_216_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref732 .field1 .stuff .CharDestructured_216_Ref_s .field0 ) .f_ptr ) ) ) );
            }
            else {
                if ( dref732 .field0.tag == CharDestructured_216_Ref_t && dref732 .field1.tag == CharDestructured_216_Scalar_t ) {
                    return (  eq219 ( ( (  u32_dash_u8229 ) ( ( ( dref732 .field1 .stuff .CharDestructured_216_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref732 .field0 .stuff .CharDestructured_216_Ref_s .field0 ) .f_ptr ) ) ) );
                }
            }
        }
    }
}

static  bool   lam413 (   struct env404* env ,    struct Char_57  cc2224 ) {
    return (  eq414 ( (  cc2224 ) , ( env->c2222 ) ) );
}

static  struct SplitIter_403   split_dash_by_dash_each411 (    struct StrView_21  s2220 ,    struct Char_57  c2222 ) {
    struct env404 envinst404 = {
        .c2222 =  c2222 ,
    };
    return ( (  split_dash_by_dash_filter412 ) ( (  s2220 ) ,  ( (struct envunion405){ .fun = (  bool  (*) (  struct env404*  ,    struct Char_57  ) )lam413 , .env =  envinst404 } ) ) );
}

struct Tuple2_421 {
    struct StrView_21  field0;
    int32_t  field1;
};

static struct Tuple2_421 Tuple2_421_Tuple2 (  struct StrView_21  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_421 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_420 {
    enum {
        Maybe_420_None_t,
        Maybe_420_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_421  field0;
        } Maybe_420_Just_s;
    } stuff;
};

static struct Maybe_420 Maybe_420_Just (  struct Tuple2_421  field0 ) {
    return ( struct Maybe_420 ) { .tag = Maybe_420_Just_t, .stuff = { .Maybe_420_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_148   next424 (    struct SplitIter_403 *  self2230 ) {
    if ( (  cmp195 ( ( ( * (  self2230 ) ) .f_last ) , ( ( ( ( * (  self2230 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_148) { .tag = Maybe_148_None_t } );
    }
    size_t  i2231 = ( ( * (  self2230 ) ) .f_last );
    while ( (  cmp195 ( (  i2231 ) , ( ( ( ( * (  self2230 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2232 = ( (  get_dash_ptr374 ) ( ( ( ( * (  self2230 ) ) .f_og ) .f_contents ) ,  (  i2231 ) ) );
        struct Char_57  c2233 = ( (  scan_dash_from_dash_mem234 ) ( (  ptr2232 ) ) );
        struct envunion405  temp425 = ( ( * (  self2230 ) ) .f_fun );
        if ( ( temp425.fun ( &temp425.env ,  (  c2233 ) ) ) ) {
            break;
        }
        i2231 = (  op_dash_add243 ( (  i2231 ) , ( (  next_dash_char235 ) ( (  ptr2232 ) ) ) ) );
    }
    struct StrView_21  line2234 = ( (  byte_dash_substr396 ) ( ( ( * (  self2230 ) ) .f_og ) ,  ( ( * (  self2230 ) ) .f_last ) ,  (  i2231 ) ) );
    i2231 = (  op_dash_add243 ( (  i2231 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2230 ) .f_last = (  i2231 );
    return ( ( Maybe_148_Just ) ( (  line2234 ) ) );
}

static  struct Maybe_148   next423 (    struct Drop_402 *  dref847 ) {
    while ( (  cmp195 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next424 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub315 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next424 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Maybe_420   next422 (    struct Zip_401 *  self914 ) {
    struct Zip_401  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_148  dref916 = ( (  next423 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_148_None_t ) {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_148_Just_t ) {
                struct Maybe_283  dref918 = ( (  next284 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_283_None_t ) {
                    return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_283_Just_t ) {
                        ( (  next423 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next284 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_420_Just ) ( ( ( Tuple2_421_Tuple2 ) ( ( dref916 .stuff .Maybe_148_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_283_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion428 {
    struct List_11  (*fun) (  struct env45*  ,    struct Slice_12  ,    enum CAllocator_9  );
    struct env45 env;
};

static  enum Unit_7   insert430 (   struct env29* env ,    struct List_8 *  list2054 ,    size_t  i2056 ,    struct List_11  elem2058 ) {
    if ( ( (  cmp195 ( (  i2056 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i2056 ) , ( ( * (  list2054 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic263 ) ( ( ( StrConcat_264_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2056 ) ) ) ,  ( (  from_dash_string231 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2054 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq250 ( ( ( * (  list2054 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion31  temp431 = ( (struct envunion31){ .fun = (  enum Unit_7  (*) (  struct env5*  ,    struct List_8 *  ,    struct List_11  ) )add247 , .env =  env->envinst5 } );
        ( temp431.fun ( &temp431.env ,  (  list2054 ) ,  (  elem2058 ) ) );
        return ( Unit_7_Unit );
    }
    struct envunion30  temp432 = ( (struct envunion30){ .fun = (  enum Unit_7  (*) (  struct env1*  ,    struct List_8 *  ) )grow_dash_if_dash_full249 , .env =  env->envinst1 } );
    ( temp432.fun ( &temp432.env ,  (  list2054 ) ) );
    size_t  ii2059 = (  op_dash_sub315 ( ( ( * (  list2054 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp195 ( (  ii2059 ) , (  i2056 ) ) != 0 ) ) {
        ( (  set261 ) ( ( ( * (  list2054 ) ) .f_elements ) ,  (  op_dash_add243 ( (  ii2059 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get336 ) ( (  list2054 ) ,  (  ii2059 ) ) ) ) );
        if ( (  eq250 ( (  ii2059 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2059 = (  op_dash_sub315 ( (  ii2059 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set261 ) ( ( ( * (  list2054 ) ) .f_elements ) ,  (  i2056 ) ,  (  elem2058 ) ) );
    (*  list2054 ) .f_count = (  op_dash_add243 ( ( ( * (  list2054 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct envunion434 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

static  enum Unit_7   free435 (    struct List_11 *  list2035 ) {
    ( (  free383 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( ( * (  list2035 ) ) .f_elements ) ) );
    return ( Unit_7_Unit );
}

static  int32_t   add_dash_to_dash_spot335 (   struct env81* env ,    struct TextBuf_88 *  self3658 ,    struct Pos_20  p3660 ,    struct StrView_21  bytes3662 ) {
    enum CAllocator_9  al3663 = ( ( ( * (  self3658 ) ) .f_buf ) .f_al );
    struct List_8 *  buf3664 = ( & ( ( * (  self3658 ) ) .f_buf ) );
    struct List_11  extracted_dash_line_dash_buf3665 = ( (  get336 ) ( (  buf3664 ) ,  ( (  i32_dash_size273 ) ( ( (  p3660 ) .f_line ) ) ) ) );
    struct Slice_12  remaining3666 = ( (  from338 ) ( ( (  to_dash_slice343 ) ( (  extracted_dash_line_dash_buf3665 ) ) ) ,  ( (  i32_dash_size273 ) ( ( (  p3660 ) .f_bi ) ) ) ) );
    struct envunion82  temp345 = ( (struct envunion82){ .fun = (  struct List_11  (*) (  struct env45*  ,    struct Slice_12  ,    enum CAllocator_9  ) )from_dash_iter346 , .env =  env->envinst45 } );
    ( (  set344 ) ( (  buf3664 ) ,  ( (  i32_dash_size273 ) ( ( (  p3660 ) .f_line ) ) ) ,  ( temp345.fun ( &temp345.env ,  ( (  subslice339 ) ( ( (  to_dash_slice343 ) ( (  extracted_dash_line_dash_buf3665 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size273 ) ( ( (  p3660 ) .f_bi ) ) ) ) ) ,  (  al3663 ) ) ) ) );
    struct List_11 *  last_dash_line3667 = ( (  get_dash_ptr337 ) ( (  buf3664 ) ,  ( (  i32_dash_size273 ) ( ( (  p3660 ) .f_line ) ) ) ) );
    struct envunion84  temp385 = ( (struct envunion84){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all349 , .env =  env->envinst40 } );
    ( temp385.fun ( &temp385.env ,  (  last_dash_line3667 ) ,  ( ( (  or_dash_else386 ) ( ( (  head387 ) ( ( (  lines399 ) ( (  bytes3662 ) ) ) ) ) ,  ( (  from_dash_string231 ) ( ( "" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3668 = (  from_dash_integral48 ( 0 ) );
    struct Zip_401  temp400 =  into_dash_iter406 ( ( (  zip407 ) ( ( (  drop409 ) ( ( (  split_dash_by_dash_each411 ) ( (  bytes3662 ) ,  ( (  from_dash_charlike232 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from290 ) ( (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_420  __cond419 =  next422 (&temp400);
        if (  __cond419 .tag == 0 ) {
            break;
        }
        struct Tuple2_421  dref3669 =  __cond419 .stuff .Maybe_420_Just_s .field0;
        struct envunion428  temp427 = ( (struct envunion428){ .fun = (  struct List_11  (*) (  struct env45*  ,    struct Slice_12  ,    enum CAllocator_9  ) )from_dash_iter346 , .env =  env->envinst45 } );
        struct List_11  temp426 = ( temp427.fun ( &temp427.env ,  ( ( dref3669 .field0 ) .f_contents ) ,  (  al3663 ) ) );
        struct List_11 *  nuline3672 = ( &temp426 );
        size_t  next_dash_line3673 = ( (  i32_dash_size273 ) ( (  op_dash_add285 ( ( (  p3660 ) .f_line ) , ( dref3669 .field1 ) ) ) ) );
        struct envunion83  temp429 = ( (struct envunion83){ .fun = (  enum Unit_7  (*) (  struct env29*  ,    struct List_8 *  ,    size_t  ,    struct List_11  ) )insert430 , .env =  env->envinst29 } );
        ( temp429.fun ( &temp429.env ,  (  buf3664 ) ,  (  next_dash_line3673 ) ,  ( * (  nuline3672 ) ) ) );
        last_dash_line3667 = ( (  get_dash_ptr337 ) ( (  buf3664 ) ,  (  next_dash_line3673 ) ) );
        lines_dash_added3668 = (  op_dash_add285 ( (  lines_dash_added3668 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    struct envunion434  temp433 = ( (struct envunion434){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all349 , .env =  env->envinst40 } );
    ( temp433.fun ( &temp433.env ,  (  last_dash_line3667 ) ,  (  remaining3666 ) ) );
    ( (  free435 ) ( ( & (  extracted_dash_line_dash_buf3665 ) ) ) );
    return (  lines_dash_added3668 );
}

static  size_t   size436 (    struct List_11 *  l2133 ) {
    return ( ( * (  l2133 ) ) .f_count );
}

struct StrConcat_442 {
    struct StrConcat_67  field0;
    struct Char_57  field1;
};

static struct StrConcat_442 StrConcat_442_StrConcat (  struct StrConcat_67  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_442 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_441 {
    struct StrConcat_442  field0;
    size_t  field1;
};

static struct StrConcat_441 StrConcat_441_StrConcat (  struct StrConcat_442  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_441 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_440 {
    struct StrConcat_441  field0;
    struct Char_57  field1;
};

static struct StrConcat_440 StrConcat_440_StrConcat (  struct StrConcat_441  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_440 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_445 {
    struct StrView_21  field0;
    struct StrConcat_440  field1;
};

static struct StrConcat_445 StrConcat_445_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_440  field1 ) {
    return ( struct StrConcat_445 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_444 {
    struct StrConcat_445  field0;
    struct Char_57  field1;
};

static struct StrConcat_444 StrConcat_444_StrConcat (  struct StrConcat_445  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_444 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str449 (    struct StrConcat_442  self1503 ) {
    struct StrConcat_442  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str211 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str214 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str448 (    struct StrConcat_441  self1503 ) {
    struct StrConcat_441  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str449 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str212 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str447 (    struct StrConcat_440  self1503 ) {
    struct StrConcat_440  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str448 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str214 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str446 (    struct StrConcat_445  self1503 ) {
    struct StrConcat_445  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str206 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str447 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str443 (    struct StrConcat_444  self1503 ) {
    struct StrConcat_444  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str446 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str214 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic439 (    struct StrConcat_440  errmsg1712 ) {
    ( (  print_dash_str443 ) ( ( ( StrConcat_444_StrConcat ) ( ( ( StrConcat_445_StrConcat ) ( ( (  from_dash_string231 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct Drop_451 {
    struct Zip_376  field0;
    size_t  field1;
};

static struct Drop_451 Drop_451_Drop (  struct Zip_376  field0 ,  size_t  field1 ) {
    return ( struct Drop_451 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env452 {
    ;
    size_t  num_dash_elems2067;
    ;
    ;
    struct List_11 *  list2062;
};

struct envunion453 {
    enum Unit_7  (*fun) (  struct env452*  ,    struct Tuple2_371  );
    struct env452 env;
};

static  struct Drop_451   into_dash_iter455 (    struct Drop_451  self845 ) {
    return (  self845 );
}

static  struct Maybe_379   next456 (    struct Drop_451 *  dref847 ) {
    while ( (  cmp195 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next380 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub315 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next380 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_7   for_dash_each450 (    struct Drop_451  iterable1074 ,   struct envunion453  fun1076 ) {
    struct Drop_451  temp454 = ( (  into_dash_iter455 ) ( (  iterable1074 ) ) );
    struct Drop_451 *  it1077 = ( &temp454 );
    while ( ( true ) ) {
        struct Maybe_379  dref1078 = ( (  next456 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_379_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_379_Just_t ) {
                struct envunion453  temp457 = (  fun1076 );
                ( temp457.fun ( &temp457.env ,  ( dref1078 .stuff .Maybe_379_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Drop_451   drop458 (    struct Zip_376  iterable852 ,    size_t  i854 ) {
    struct Zip_376  it855 = ( (  into_dash_iter378 ) ( (  iterable852 ) ) );
    return ( ( Drop_451_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SliceIter_353   into_dash_iter460 (    struct List_11  self2028 ) {
    return ( (  into_dash_iter355 ) ( ( (  subslice339 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

static  struct Zip_376   zip459 (    struct List_11  left922 ,    struct FromIter_277  right924 ) {
    struct SliceIter_353  left_dash_it925 = ( (  into_dash_iter460 ) ( (  left922 ) ) );
    struct FromIter_277  right_dash_it926 = ( (  into_dash_iter289 ) ( (  right924 ) ) );
    return ( (struct Zip_376) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   set462 (    struct List_11 *  list2021 ,    size_t  i2023 ,    uint8_t  elem2025 ) {
    if ( ( (  cmp195 ( (  i2023 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i2023 ) , ( ( * (  list2021 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic263 ) ( ( ( StrConcat_264_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2023 ) ) ) ,  ( (  from_dash_string231 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2021 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set373 ) ( ( ( * (  list2021 ) ) .f_elements ) ,  (  i2023 ) ,  (  elem2025 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam461 (   struct env452* env ,    struct Tuple2_371  dref2068 ) {
    return ( (  set462 ) ( ( env->list2062 ) ,  (  op_dash_sub315 ( ( (  i32_dash_size273 ) ( ( dref2068 .field1 ) ) ) , ( env->num_dash_elems2067 ) ) ) ,  ( dref2068 .field0 ) ) );
}

struct StrConcat_465 {
    struct StrConcat_265  field0;
    struct StrView_21  field1;
};

static struct StrConcat_465 StrConcat_465_StrConcat (  struct StrConcat_265  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_465 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_468 {
    struct StrView_21  field0;
    struct StrConcat_465  field1;
};

static struct StrConcat_468 StrConcat_468_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_465  field1 ) {
    return ( struct StrConcat_468 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_467 {
    struct StrConcat_468  field0;
    struct Char_57  field1;
};

static struct StrConcat_467 StrConcat_467_StrConcat (  struct StrConcat_468  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_467 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str470 (    struct StrConcat_465  self1503 ) {
    struct StrConcat_465  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str271 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str206 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str469 (    struct StrConcat_468  self1503 ) {
    struct StrConcat_468  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str206 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str470 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str466 (    struct StrConcat_467  self1503 ) {
    struct StrConcat_467  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str469 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str214 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic464 (    struct StrConcat_465  errmsg1712 ) {
    ( (  print_dash_str466 ) ( ( ( StrConcat_467_StrConcat ) ( ( ( StrConcat_468_StrConcat ) ( ( (  from_dash_string231 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct env472 {
    ;
    struct Slice_12  dest1853;
    ;
};

struct envunion473 {
    enum Unit_7  (*fun) (  struct env472*  ,    struct Tuple2_371  );
    struct env472 env;
};

static  enum Unit_7   for_dash_each471 (    struct Zip_376  iterable1074 ,   struct envunion473  fun1076 ) {
    struct Zip_376  temp474 = ( (  into_dash_iter378 ) ( (  iterable1074 ) ) );
    struct Zip_376 *  it1077 = ( &temp474 );
    while ( ( true ) ) {
        struct Maybe_379  dref1078 = ( (  next380 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_379_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_379_Just_t ) {
                struct envunion473  temp475 = (  fun1076 );
                ( temp475.fun ( &temp475.env ,  ( dref1078 .stuff .Maybe_379_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam476 (   struct env472* env ,    struct Tuple2_371  dref1854 ) {
    return ( (  set373 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size273 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_7   copy_dash_to463 (    struct Slice_12  src1851 ,    struct Slice_12  dest1853 ) {
    if ( (  cmp195 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic464 ) ( ( ( StrConcat_465_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string231 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string231 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env472 envinst472 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each471 ) ( ( (  zip382 ) ( (  src1851 ) ,  ( (  from290 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  ( (struct envunion473){ .fun = (  enum Unit_7  (*) (  struct env472*  ,    struct Tuple2_371  ) )lam476 , .env =  envinst472 } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   remove_dash_range438 (   struct env32* env ,    struct List_11 *  list2062 ,    size_t  from2064 ,    size_t  to_dash_excl2066 ) {
    if ( (  cmp195 ( (  to_dash_excl2066 ) , (  from2064 ) ) == 0 ) ) {
        ( (  panic439 ) ( ( ( StrConcat_440_StrConcat ) ( ( ( StrConcat_441_StrConcat ) ( ( ( StrConcat_442_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp195 ( (  from2064 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic263 ) ( ( ( StrConcat_264_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_string231 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp195 ( (  to_dash_excl2066 ) , ( ( * (  list2062 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic263 ) ( ( ( StrConcat_264_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_string231 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2067 = (  op_dash_sub315 ( (  to_dash_excl2066 ) , (  from2064 ) ) );
    struct env452 envinst452 = {
        .num_dash_elems2067 =  num_dash_elems2067 ,
        .list2062 =  list2062 ,
    };
    ( (  for_dash_each450 ) ( ( (  drop458 ) ( ( (  zip459 ) ( ( * (  list2062 ) ) ,  ( (  from290 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  op_dash_add243 ( (  from2064 ) , (  num_dash_elems2067 ) ) ) ) ) ,  ( (struct envunion453){ .fun = (  enum Unit_7  (*) (  struct env452*  ,    struct Tuple2_371  ) )lam461 , .env =  envinst452 } ) ) );
    (*  list2062 ) .f_count = (  op_dash_sub315 ( ( ( * (  list2062 ) ) .f_count ) , (  num_dash_elems2067 ) ) );
    size_t  capacity2071 = ( ( ( * (  list2062 ) ) .f_elements ) .f_count );
    if ( (  cmp195 ( (  op_dash_mul256 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  capacity2071 ) ) == 0 ) ) {
        if ( (  eq250 ( ( ( * (  list2062 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free383 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
            (*  list2062 ) .f_elements = ( (  empty295 ) ( ) );
            return ( Unit_7_Unit );
        }
        size_t  new_dash_size2072 = (  op_dash_mul256 ( (  op_dash_add243 ( (  op_dash_div222 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2038 ) ) );
        struct Slice_12  new_dash_slice2073 = ( (  allocate364 ) ( ( ( * (  list2062 ) ) .f_al ) ,  (  new_dash_size2072 ) ) );
        ( (  copy_dash_to463 ) ( ( (  subslice339 ) ( ( ( * (  list2062 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  (  new_dash_slice2073 ) ) );
        ( (  free383 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
        (*  list2062 ) .f_elements = (  new_dash_slice2073 );
    }
    return ( Unit_7_Unit );
}

struct envunion478 {
    int32_t  (*fun) (  struct env81*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct StrView_21  );
    struct env81 env;
};

static  enum Unit_7   trim479 (    struct List_11 *  l2115 ,    size_t  new_dash_count2117 ) {
    (*  l2115 ) .f_count = ( (  min342 ) ( (  new_dash_count2117 ) ,  ( ( * (  l2115 ) ) .f_count ) ) );
    return ( Unit_7_Unit );
}

static  int32_t   min480 (    int32_t  l1236 ,    int32_t  r1238 ) {
    if ( (  cmp328 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

struct envunion482 {
    int32_t  (*fun) (  struct env81*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct StrView_21  );
    struct env81 env;
};

struct Maybe_484 {
    enum {
        Maybe_484_None_t,
        Maybe_484_Just_t,
    } tag;
    union {
        struct {
            struct Slice_12  field0;
        } Maybe_484_Just_s;
    } stuff;
};

static struct Maybe_484 Maybe_484_Just (  struct Slice_12  field0 ) {
    return ( struct Maybe_484 ) { .tag = Maybe_484_Just_t, .stuff = { .Maybe_484_Just_s = { .field0 = field0 } } };
};

static  struct Slice_12   or_dash_else483 (    struct Maybe_484  self1732 ,    struct Slice_12  alt1734 ) {
    struct Maybe_484  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_484_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_484_Just_t ) {
            return ( dref1735 .stuff .Maybe_484_Just_s .field0 );
        }
    }
}

static  struct Maybe_484   fmap_dash_maybe485 (    struct Maybe_193  x1275 ,    struct Slice_12 (*  fun1277 )(    struct List_11  ) ) {
    struct Maybe_193  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_193_None_t ) {
        return ( (struct Maybe_484) { .tag = Maybe_484_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_193_Just_t ) {
            return ( ( Maybe_484_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_193_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_193   try_dash_get486 (    struct List_8 *  list2016 ,    size_t  i2018 ) {
    if ( (  cmp195 ( (  i2018 ) , ( ( * (  list2016 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_193) { .tag = Maybe_193_None_t } );
    }
    return ( ( Maybe_193_Just ) ( ( (  get336 ) ( (  list2016 ) ,  (  i2018 ) ) ) ) );
}

struct StrConcat_491 {
    struct StrView_21  field0;
    struct StrView_21  field1;
};

static struct StrConcat_491 StrConcat_491_StrConcat (  struct StrView_21  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_491 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_490 {
    struct StrConcat_491  field0;
    struct Char_57  field1;
};

static struct StrConcat_490 StrConcat_490_StrConcat (  struct StrConcat_491  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_490 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str492 (    struct StrConcat_491  self1503 ) {
    struct StrConcat_491  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str206 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str206 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str489 (    struct StrConcat_490  self1503 ) {
    struct StrConcat_490  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str492 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str214 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   assert488 (    bool  cond1718 ,    struct StrView_21  msg1720 ) {
    if ( ( ! (  cond1718 ) ) ) {
        ( (  print_dash_str489 ) ( ( ( StrConcat_490_StrConcat ) ( ( ( StrConcat_491_StrConcat ) ( ( (  from_dash_string231 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1720 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    }
    return ( Unit_7_Unit );
}

struct Drop_496 {
    struct Zip_275  field0;
    size_t  field1;
};

static struct Drop_496 Drop_496_Drop (  struct Zip_275  field0 ,  size_t  field1 ) {
    return ( struct Drop_496 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env497 {
    ;
    size_t  num_dash_elems2067;
    ;
    ;
    struct List_8 *  list2062;
};

struct envunion498 {
    enum Unit_7  (*fun) (  struct env497*  ,    struct Tuple2_259  );
    struct env497 env;
};

static  struct Drop_496   into_dash_iter500 (    struct Drop_496  self845 ) {
    return (  self845 );
}

static  struct Maybe_280   next501 (    struct Drop_496 *  dref847 ) {
    while ( (  cmp195 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next281 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub315 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next281 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_7   for_dash_each495 (    struct Drop_496  iterable1074 ,   struct envunion498  fun1076 ) {
    struct Drop_496  temp499 = ( (  into_dash_iter500 ) ( (  iterable1074 ) ) );
    struct Drop_496 *  it1077 = ( &temp499 );
    while ( ( true ) ) {
        struct Maybe_280  dref1078 = ( (  next501 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_280_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_280_Just_t ) {
                struct envunion498  temp502 = (  fun1076 );
                ( temp502.fun ( &temp502.env ,  ( dref1078 .stuff .Maybe_280_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Drop_496   drop503 (    struct Zip_275  iterable852 ,    size_t  i854 ) {
    struct Zip_275  it855 = ( (  into_dash_iter279 ) ( (  iterable852 ) ) );
    return ( ( Drop_496_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct Slice_10   subslice506 (    struct Slice_10  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct List_11 *  begin_dash_ptr1787 = ( (  offset_dash_ptr240 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp195 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp195 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_10) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub315 ( ( (  min342 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_10) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_276   into_dash_iter505 (    struct List_8  self2028 ) {
    return ( (  into_dash_iter288 ) ( ( (  subslice506 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

static  struct Zip_275   zip504 (    struct List_8  left922 ,    struct FromIter_277  right924 ) {
    struct SliceIter_276  left_dash_it925 = ( (  into_dash_iter505 ) ( (  left922 ) ) );
    struct FromIter_277  right_dash_it926 = ( (  into_dash_iter289 ) ( (  right924 ) ) );
    return ( (struct Zip_275) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   lam507 (   struct env497* env ,    struct Tuple2_259  dref2068 ) {
    return ( (  set344 ) ( ( env->list2062 ) ,  (  op_dash_sub315 ( ( (  i32_dash_size273 ) ( ( dref2068 .field1 ) ) ) , ( env->num_dash_elems2067 ) ) ) ,  ( dref2068 .field0 ) ) );
}

struct env510 {
    ;
    struct Slice_10  dest1853;
    ;
};

struct envunion511 {
    enum Unit_7  (*fun) (  struct env510*  ,    struct Tuple2_259  );
    struct env510 env;
};

static  enum Unit_7   for_dash_each509 (    struct Zip_275  iterable1074 ,   struct envunion511  fun1076 ) {
    struct Zip_275  temp512 = ( (  into_dash_iter279 ) ( (  iterable1074 ) ) );
    struct Zip_275 *  it1077 = ( &temp512 );
    while ( ( true ) ) {
        struct Maybe_280  dref1078 = ( (  next281 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_280_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_280_Just_t ) {
                struct envunion511  temp513 = (  fun1076 );
                ( temp513.fun ( &temp513.env ,  ( dref1078 .stuff .Maybe_280_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam514 (   struct env510* env ,    struct Tuple2_259  dref1854 ) {
    return ( (  set261 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size273 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_7   copy_dash_to508 (    struct Slice_10  src1851 ,    struct Slice_10  dest1853 ) {
    if ( (  cmp195 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic464 ) ( ( ( StrConcat_465_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string231 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string231 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env510 envinst510 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each509 ) ( ( (  zip287 ) ( (  src1851 ) ,  ( (  from290 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  ( (struct envunion511){ .fun = (  enum Unit_7  (*) (  struct env510*  ,    struct Tuple2_259  ) )lam514 , .env =  envinst510 } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   remove_dash_range494 (   struct env33* env ,    struct List_8 *  list2062 ,    size_t  from2064 ,    size_t  to_dash_excl2066 ) {
    if ( (  cmp195 ( (  to_dash_excl2066 ) , (  from2064 ) ) == 0 ) ) {
        ( (  panic439 ) ( ( ( StrConcat_440_StrConcat ) ( ( ( StrConcat_441_StrConcat ) ( ( ( StrConcat_442_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp195 ( (  from2064 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic263 ) ( ( ( StrConcat_264_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2064 ) ) ) ,  ( (  from_dash_string231 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp195 ( (  to_dash_excl2066 ) , ( ( * (  list2062 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic263 ) ( ( ( StrConcat_264_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2066 ) ) ) ,  ( (  from_dash_string231 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2067 = (  op_dash_sub315 ( (  to_dash_excl2066 ) , (  from2064 ) ) );
    struct env497 envinst497 = {
        .num_dash_elems2067 =  num_dash_elems2067 ,
        .list2062 =  list2062 ,
    };
    ( (  for_dash_each495 ) ( ( (  drop503 ) ( ( (  zip504 ) ( ( * (  list2062 ) ) ,  ( (  from290 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  op_dash_add243 ( (  from2064 ) , (  num_dash_elems2067 ) ) ) ) ) ,  ( (struct envunion498){ .fun = (  enum Unit_7  (*) (  struct env497*  ,    struct Tuple2_259  ) )lam507 , .env =  envinst497 } ) ) );
    (*  list2062 ) .f_count = (  op_dash_sub315 ( ( ( * (  list2062 ) ) .f_count ) , (  num_dash_elems2067 ) ) );
    size_t  capacity2071 = ( ( ( * (  list2062 ) ) .f_elements ) .f_count );
    if ( (  cmp195 ( (  op_dash_mul256 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  capacity2071 ) ) == 0 ) ) {
        if ( (  eq250 ( ( ( * (  list2062 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free291 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
            (*  list2062 ) .f_elements = ( (  empty179 ) ( ) );
            return ( Unit_7_Unit );
        }
        size_t  new_dash_size2072 = (  op_dash_mul256 ( (  op_dash_add243 ( (  op_dash_div222 ( ( ( * (  list2062 ) ) .f_count ) , ( env->shrink_dash_factor2038 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2038 ) ) );
        struct Slice_10  new_dash_slice2073 = ( (  allocate251 ) ( ( ( * (  list2062 ) ) .f_al ) ,  (  new_dash_size2072 ) ) );
        ( (  copy_dash_to508 ) ( ( (  subslice506 ) ( ( ( * (  list2062 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2062 ) ) .f_count ) ) ) ,  (  new_dash_slice2073 ) ) );
        ( (  free291 ) ( ( ( * (  list2062 ) ) .f_al ) ,  ( ( * (  list2062 ) ) .f_elements ) ) );
        (*  list2062 ) .f_elements = (  new_dash_slice2073 );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   change_dash_no_dash_action325 (   struct env85* env ,    struct TextBuf_88 *  self3676 ,    struct Pos_20  from_dash_pos3678 ,    struct Pos_20  to_dash_pos3680 ,    struct StrView_21  bytes3682 ) {
    struct Pos_20  from3683 = ( (  min326 ) ( (  from_dash_pos3678 ) ,  (  to_dash_pos3680 ) ) );
    struct Pos_20  to3684 = ( (  max329 ) ( (  from_dash_pos3678 ) ,  (  to_dash_pos3680 ) ) );
    if ( (  eq330 ( (  to3684 ) , (  from3683 ) ) ) ) {
        enum CAllocator_9  al3685 = ( ( ( * (  self3676 ) ) .f_buf ) .f_al );
        if ( ( (  eq250 ( ( (  size332 ) ( ( & ( ( * (  self3676 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size273 ) ( ( (  from3683 ) .f_line ) ) ) ) ) && (  eq331 ( ( (  from3683 ) .f_bi ) , (  from_dash_integral48 ( 0 ) ) ) ) ) ) {
            struct envunion93  temp333 = ( (struct envunion93){ .fun = (  enum Unit_7  (*) (  struct env5*  ,    struct List_8 *  ,    struct List_11  ) )add247 , .env =  env->envinst5 } );
            ( temp333.fun ( &temp333.env ,  ( & ( ( * (  self3676 ) ) .f_buf ) ) ,  ( (  mk294 ) ( (  al3685 ) ) ) ) );
        }
        struct envunion87  temp334 = ( (struct envunion87){ .fun = (  int32_t  (*) (  struct env81*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct StrView_21  ) )add_dash_to_dash_spot335 , .env =  env->envinst81 } );
        ( temp334.fun ( &temp334.env ,  (  self3676 ) ,  (  from3683 ) ,  (  bytes3682 ) ) );
    } else {
        struct List_8 *  lines_dash_buf3686 = ( & ( ( * (  self3676 ) ) .f_buf ) );
        struct List_11 *  first_dash_line3687 = ( (  get_dash_ptr337 ) ( (  lines_dash_buf3686 ) ,  ( (  i32_dash_size273 ) ( ( (  from3683 ) .f_line ) ) ) ) );
        if ( ( (  eq331 ( ( (  from3683 ) .f_line ) , ( (  to3684 ) .f_line ) ) ) && (  cmp328 ( ( (  to3684 ) .f_bi ) , (  op_dash_add285 ( ( (  size_dash_i32207 ) ( ( (  size436 ) ( (  first_dash_line3687 ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion91  temp437 = ( (struct envunion91){ .fun = (  enum Unit_7  (*) (  struct env32*  ,    struct List_11 *  ,    size_t  ,    size_t  ) )remove_dash_range438 , .env =  env->envinst32 } );
            ( temp437.fun ( &temp437.env ,  (  first_dash_line3687 ) ,  ( (  i32_dash_size273 ) ( ( (  from3683 ) .f_bi ) ) ) ,  ( (  i32_dash_size273 ) ( ( (  to3684 ) .f_bi ) ) ) ) );
            struct envunion478  temp477 = ( (struct envunion478){ .fun = (  int32_t  (*) (  struct env81*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct StrView_21  ) )add_dash_to_dash_spot335 , .env =  env->envinst81 } );
            ( temp477.fun ( &temp477.env ,  (  self3676 ) ,  (  from3683 ) ,  (  bytes3682 ) ) );
        } else {
            ( (  trim479 ) ( (  first_dash_line3687 ) ,  ( (  i32_dash_size273 ) ( ( (  from3683 ) .f_bi ) ) ) ) );
            struct List_11 *  last_dash_line3688 = ( (  get_dash_ptr337 ) ( (  lines_dash_buf3686 ) ,  ( (  i32_dash_size273 ) ( ( (  to3684 ) .f_line ) ) ) ) );
            to3684 .f_bi = ( (  min480 ) ( ( (  to3684 ) .f_bi ) ,  (  op_dash_add285 ( ( (  size_dash_i32207 ) ( ( (  size436 ) ( (  last_dash_line3688 ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
            if ( (  eq331 ( ( (  to3684 ) .f_bi ) , (  op_dash_add285 ( ( (  size_dash_i32207 ) ( ( (  size436 ) ( (  last_dash_line3688 ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ) {
                to3684 .f_line = (  op_dash_add285 ( ( (  to3684 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) );
                to3684 .f_bi = (  from_dash_integral48 ( 0 ) );
            }
            struct envunion482  temp481 = ( (struct envunion482){ .fun = (  int32_t  (*) (  struct env81*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct StrView_21  ) )add_dash_to_dash_spot335 , .env =  env->envinst81 } );
            int32_t  lines_dash_added3689 = ( temp481.fun ( &temp481.env ,  (  self3676 ) ,  (  from3683 ) ,  (  bytes3682 ) ) );
            to3684 .f_line = (  op_dash_add285 ( ( (  to3684 ) .f_line ) , (  lines_dash_added3689 ) ) );
            from3683 .f_line = (  op_dash_add285 ( ( (  from3683 ) .f_line ) , (  lines_dash_added3689 ) ) );
            struct Slice_12  last_dash_line3690 = ( (  or_dash_else483 ) ( ( (  fmap_dash_maybe485 ) ( ( (  try_dash_get486 ) ( (  lines_dash_buf3686 ) ,  ( (  i32_dash_size273 ) ( ( (  to3684 ) .f_line ) ) ) ) ) ,  (  to_dash_slice343 ) ) ) ,  ( (  empty295 ) ( ) ) ) );
            struct envunion86  temp487 = ( (struct envunion86){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all349 , .env =  env->envinst40 } );
            ( temp487.fun ( &temp487.env ,  (  first_dash_line3687 ) ,  ( (  from338 ) ( (  last_dash_line3690 ) ,  ( (  i32_dash_size273 ) ( ( (  to3684 ) .f_bi ) ) ) ) ) ) );
            ( (  assert488 ) ( (  cmp328 ( ( (  to3684 ) .f_line ) , ( (  from3683 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string231 ) ( ( "there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion92  temp493 = ( (struct envunion92){ .fun = (  enum Unit_7  (*) (  struct env33*  ,    struct List_8 *  ,    size_t  ,    size_t  ) )remove_dash_range494 , .env =  env->envinst33 } );
            ( temp493.fun ( &temp493.env ,  ( & ( ( * (  self3676 ) ) .f_buf ) ) ,  ( (  i32_dash_size273 ) ( (  op_dash_add285 ( ( (  from3683 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  op_dash_add243 ( ( (  i32_dash_size273 ) ( ( (  to3684 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_7_Unit );
}

struct StrConcat_518 {
    struct StrView_21  field0;
    const char*  field1;
};

static struct StrConcat_518 StrConcat_518_StrConcat (  struct StrView_21  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_518 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_517 {
    struct StrConcat_518  field0;
    struct Char_57  field1;
};

static struct StrConcat_517 StrConcat_517_StrConcat (  struct StrConcat_518  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_517 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_522 {
    struct StrView_21  field0;
    struct StrConcat_517  field1;
};

static struct StrConcat_522 StrConcat_522_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_517  field1 ) {
    return ( struct StrConcat_522 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_521 {
    struct StrConcat_522  field0;
    struct Char_57  field1;
};

static struct StrConcat_521 StrConcat_521_StrConcat (  struct StrConcat_522  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_521 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str526 (    const char*  self1398 ) {
    ( ( printf ) ( ( (  from_dash_string49 ) ( ( "%s" ) ,  ( 2 ) ) ) ,  (  self1398 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str525 (    struct StrConcat_518  self1503 ) {
    struct StrConcat_518  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str206 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str526 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str524 (    struct StrConcat_517  self1503 ) {
    struct StrConcat_517  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str525 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str214 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str523 (    struct StrConcat_522  self1503 ) {
    struct StrConcat_522  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str206 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str524 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str520 (    struct StrConcat_521  self1503 ) {
    struct StrConcat_521  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str523 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str214 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic519 (    struct StrConcat_517  errmsg1712 ) {
    ( (  print_dash_str520 ) ( ( ( StrConcat_521_StrConcat ) ( ( ( StrConcat_522_StrConcat ) ( ( (  from_dash_string231 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct StrView_21   undefined527 (  ) {
    struct StrView_21  temp528;
    return (  temp528 );
}

static  struct StrView_21   or_dash_fail516 (    struct Maybe_148  x1725 ,    struct StrConcat_517  errmsg1727 ) {
    struct Maybe_148  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_148_None_t ) {
        ( (  panic519 ) ( (  errmsg1727 ) ) );
        return ( (  undefined527 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_148_Just_t ) {
            return ( dref1728 .stuff .Maybe_148_Just_s .field0 );
        }
    }
}

static  const char*   from_dash_charlike530 (    uint8_t *  ptr73 ,    size_t  dref74 ) {
    return ( ( (const char* ) (  ptr73 ) ) );
}

static  void *   cast_dash_ptr535 (    FILE * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of536 (    FILE *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  FILE *   zeroed533 (  ) {
    FILE *  temp534;
    FILE *  x570 = (  temp534 );
    ( ( memset ) ( ( (  cast_dash_ptr535 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of536 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  FILE *   null_dash_ptr532 (  ) {
    return ( (  zeroed533 ) ( ) );
}

static  bool   is_dash_ptr_dash_null531 (    FILE *  p580 ) {
    return ( (  p580 ) == ( (  null_dash_ptr532 ) ( ) ) );
}

static  int32_t   seek_dash_end537 (  ) {
    return (  from_dash_integral48 ( 2 ) );
}

static  int32_t   seek_dash_set538 (  ) {
    return (  from_dash_integral48 ( 0 ) );
}

static  struct Char_57   nullchar539 (  ) {
    return ( (  from_dash_charlike232 ) ( ( "\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_148   try_dash_read_dash_contents529 (    const char*  filename2933 ,    enum CAllocator_9  al2935 ) {
    FILE *  file2936 = ( ( fopen ) ( (  filename2933 ) ,  ( (  from_dash_charlike530 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null531 ) ( (  file2936 ) ) ) ) {
        return ( (struct Maybe_148) { .tag = Maybe_148_None_t } );
    }
    ( ( fseek ) ( (  file2936 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  seek_dash_end537 ) ( ) ) ) );
    int32_t  file_dash_size2937 = ( ( ftell ) ( (  file2936 ) ) );
    ( ( fseek ) ( (  file2936 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  seek_dash_set538 ) ( ) ) ) );
    struct Slice_12  file_dash_buf2938 = ( ( (  allocate364 ) ( (  al2935 ) ,  (  op_dash_add243 ( ( (  i32_dash_size273 ) ( (  file_dash_size2937 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2938 ) .f_ptr ) ,  (  file_dash_size2937 ) ,  (  from_dash_integral48 ( 1 ) ) ,  (  file2936 ) ) );
    ( (  set373 ) ( (  file_dash_buf2938 ) ,  ( (  i32_dash_size273 ) ( (  file_dash_size2937 ) ) ) ,  ( (  char_dash_u8395 ) ( ( (  nullchar539 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2936 ) ) );
    struct StrView_21  str2939 = ( (struct StrView_21) { .f_contents = ( (  subslice339 ) ( (  file_dash_buf2938 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub315 ( ( (  file_dash_buf2938 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_148_Just ) ( (  str2939 ) ) );
}

static  struct StrView_21   read_dash_contents515 (    const char*  filename2942 ,    enum CAllocator_9  al2944 ) {
    return ( (  or_dash_fail516 ) ( ( (  try_dash_read_dash_contents529 ) ( (  filename2942 ) ,  (  al2944 ) ) ) ,  ( ( StrConcat_517_StrConcat ) ( ( ( StrConcat_518_StrConcat ) ( ( (  from_dash_string231 ) ( ( "could not open file " ) ,  ( 20 ) ) ) ,  (  filename2942 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "!" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Pane_127   mk541 (    enum CAllocator_9  al3830 ,    struct TextBuf_88 *  buf3832 ) {
    return ( (struct Pane_127) { .f_buf = (  buf3832 ) , .f_cursor = ( (  mk309 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral48 ( 0 ) ) , .f_sel = ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) , .f_mode = ( Mode_128_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_129) { .f_screen_dash_top = (  from_dash_integral48 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral48 ( 0 ) ) } ) } );
}

struct envunion544 {
    struct Tui_73  (*fun) (  struct env69*  );
    struct env69 env;
};

static  struct Termios_75   undefined548 (  ) {
    struct Termios_75  temp549;
    return (  temp549 );
}

static  int32_t   stdin_dash_fileno550 (  ) {
    return (  from_dash_integral48 ( 0 ) );
}

static  struct termios *   cast_dash_ptr551 (    struct Termios_75 *  p359 ) {
    return ( (struct termios * ) (  p359 ) );
}

static  uint32_t   u32_dash_and552 (    uint32_t  l2832 ,    uint32_t  r2834 ) {
    return ( (  l2832 ) & (  r2834 ) );
}

static  uint32_t   u32_dash_neg553 (    uint32_t  l2837 ) {
    return ( ~ (  l2837 ) );
}

struct Array_555 {
    uint32_t _arr [4];
};

struct ArrayIter_557 {
    struct Array_555  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_557   into_dash_iter558 (    struct Array_555  self2322 ) {
    return ( (struct ArrayIter_557) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_559 {
    enum {
        Maybe_559_None_t,
        Maybe_559_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_559_Just_s;
    } stuff;
};

static struct Maybe_559 Maybe_559_Just (  uint32_t  field0 ) {
    return ( struct Maybe_559 ) { .tag = Maybe_559_Just_t, .stuff = { .Maybe_559_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr563 (    struct Array_555 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   offset_dash_ptr564 (    uint32_t *  x338 ,    int64_t  count340 ) {
    uint32_t  temp565;
    return ( (uint32_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul241 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp565 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr562 (    struct Array_555 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp195 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i2253 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic199 ) ( ( ( StrConcat_200_StrConcat ) ( ( ( StrConcat_201_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string231 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2254 = ( ( (  cast_dash_ptr563 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr564 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  uint32_t   get561 (    struct Array_555 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr562 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  struct Maybe_559   next560 (    struct ArrayIter_557 *  self2329 ) {
    if ( (  cmp195 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_559) { .tag = Maybe_559_None_t } );
    }
    uint32_t  e2331 = ( (  get561 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add243 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_559_Just ) ( (  e2331 ) ) );
}

static  uint32_t   reduce556 (    struct Array_555  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_557  it1099 = ( (  into_dash_iter558 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_559  dref1100 = ( (  next560 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_559_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_559_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_559_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp566 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp566);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp567;
    return (  temp567 );
}

static  uint32_t   u32_dash_or568 (    uint32_t  l2824 ,    uint32_t  r2826 ) {
    return ( (  l2824 ) | (  r2826 ) );
}

static  uint32_t   u32_dash_ors554 (    struct Array_555  vals2829 ) {
    return ( (  reduce556 ) ( (  vals2829 ) ,  (  from_dash_integral227 ( 0 ) ) ,  (  u32_dash_or568 ) ) );
}

static  struct Array_555   from_dash_listlike569 (    struct Array_555  self330 ) {
    return (  self330 );
}

static  uint32_t   echo570 (  ) {
    return (  from_dash_integral227 ( 8 ) );
}

static  uint32_t   icanon571 (  ) {
    return (  from_dash_integral227 ( 2 ) );
}

static  uint32_t   isig572 (  ) {
    return (  from_dash_integral227 ( 1 ) );
}

static  uint32_t   iexten573 (  ) {
    return (  from_dash_integral227 ( 32768 ) );
}

struct Array_575 {
    uint32_t _arr [5];
};

struct ArrayIter_577 {
    struct Array_575  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_577   into_dash_iter578 (    struct Array_575  self2322 ) {
    return ( (struct ArrayIter_577) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr582 (    struct Array_575 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr581 (    struct Array_575 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp195 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i2253 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic199 ) ( ( ( StrConcat_200_StrConcat ) ( ( ( StrConcat_201_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string231 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2254 = ( ( (  cast_dash_ptr582 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr564 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  uint32_t   get580 (    struct Array_575 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr581 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  struct Maybe_559   next579 (    struct ArrayIter_577 *  self2329 ) {
    if ( (  cmp195 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_559) { .tag = Maybe_559_None_t } );
    }
    uint32_t  e2331 = ( (  get580 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add243 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_559_Just ) ( (  e2331 ) ) );
}

static  uint32_t   reduce576 (    struct Array_575  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_577  it1099 = ( (  into_dash_iter578 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_559  dref1100 = ( (  next579 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_559_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_559_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_559_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp583 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp583);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp584;
    return (  temp584 );
}

static  uint32_t   u32_dash_ors574 (    struct Array_575  vals2829 ) {
    return ( (  reduce576 ) ( (  vals2829 ) ,  (  from_dash_integral227 ( 0 ) ) ,  (  u32_dash_or568 ) ) );
}

static  struct Array_575   from_dash_listlike585 (    struct Array_575  self330 ) {
    return (  self330 );
}

static  uint32_t   brkint586 (  ) {
    return (  from_dash_integral227 ( 2 ) );
}

static  uint32_t   icrnl587 (  ) {
    return (  from_dash_integral227 ( 256 ) );
}

static  uint32_t   inpck588 (  ) {
    return (  from_dash_integral227 ( 16 ) );
}

static  uint32_t   istrip589 (  ) {
    return (  from_dash_integral227 ( 32 ) );
}

static  uint32_t   ixon590 (  ) {
    return (  from_dash_integral227 ( 1024 ) );
}

struct Array_592 {
    uint32_t _arr [1];
};

struct ArrayIter_594 {
    struct Array_592  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_594   into_dash_iter595 (    struct Array_592  self2322 ) {
    return ( (struct ArrayIter_594) { .f_backing = (  self2322 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr599 (    struct Array_592 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr598 (    struct Array_592 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp195 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i2253 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic199 ) ( ( ( StrConcat_200_StrConcat ) ( ( ( StrConcat_201_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string231 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2254 = ( ( (  cast_dash_ptr599 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr564 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  uint32_t   get597 (    struct Array_592 *  arr2257 ,    size_t  i2260 ) {
    return ( * ( (  get_dash_ptr598 ) ( (  arr2257 ) ,  (  i2260 ) ) ) );
}

static  struct Maybe_559   next596 (    struct ArrayIter_594 *  self2329 ) {
    if ( (  cmp195 ( ( ( * (  self2329 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_559) { .tag = Maybe_559_None_t } );
    }
    uint32_t  e2331 = ( (  get597 ) ( ( & ( ( * (  self2329 ) ) .f_backing ) ) ,  ( ( * (  self2329 ) ) .f_cur ) ) );
    (*  self2329 ) .f_cur = (  op_dash_add243 ( ( ( * (  self2329 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_559_Just ) ( (  e2331 ) ) );
}

static  uint32_t   reduce593 (    struct Array_592  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_594  it1099 = ( (  into_dash_iter595 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_559  dref1100 = ( (  next596 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_559_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_559_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_559_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp600 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp600);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp601;
    return (  temp601 );
}

static  uint32_t   u32_dash_ors591 (    struct Array_592  vals2829 ) {
    return ( (  reduce593 ) ( (  vals2829 ) ,  (  from_dash_integral227 ( 0 ) ) ,  (  u32_dash_or568 ) ) );
}

static  struct Array_592   from_dash_listlike602 (    struct Array_592  self330 ) {
    return (  self330 );
}

static  uint32_t   opost603 (  ) {
    return (  from_dash_integral227 ( 1 ) );
}

static  uint32_t   cs8604 (  ) {
    return (  from_dash_integral227 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr607 (    struct Array_76 *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  uint8_t *   get_dash_ptr606 (    struct Array_76 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp195 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i2253 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic199 ) ( ( ( StrConcat_200_StrConcat ) ( ( ( StrConcat_201_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string231 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2254 = ( ( (  cast_dash_ptr607 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr340 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  enum Unit_7   set605 (    struct Array_76 *  arr2263 ,    size_t  i2266 ,    uint8_t  e2268 ) {
    uint8_t *  p2269 = ( (  get_dash_ptr606 ) ( (  arr2263 ) ,  (  i2266 ) ) );
    (*  p2269 ) = (  e2268 );
    return ( Unit_7_Unit );
}

static  size_t   vmin608 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime609 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush610 (  ) {
    return (  from_dash_integral48 ( 2 ) );
}

static  struct Termios_75   enable_dash_raw_dash_mode546 (  ) {
    struct Termios_75  temp547 = ( (  undefined548 ) ( ) );
    struct Termios_75 *  orig_dash_termios3291 = ( &temp547 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno550 ) ( ) ) ,  ( (  cast_dash_ptr551 ) ( (  orig_dash_termios3291 ) ) ) ) );
    struct Termios_75  raw3292 = ( * (  orig_dash_termios3291 ) );
    raw3292 .f_c_dash_lflag = ( (  u32_dash_and552 ) ( ( (  raw3292 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg553 ) ( ( (  u32_dash_ors554 ) ( ( (  from_dash_listlike569 ) ( ( (struct Array_555) { ._arr = { ( (  echo570 ) ( ) ) , ( (  icanon571 ) ( ) ) , ( (  isig572 ) ( ) ) , ( ( (  iexten573 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3292 .f_c_dash_iflag = ( (  u32_dash_and552 ) ( ( (  raw3292 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg553 ) ( ( (  u32_dash_ors574 ) ( ( (  from_dash_listlike585 ) ( ( (struct Array_575) { ._arr = { ( (  brkint586 ) ( ) ) , ( (  icrnl587 ) ( ) ) , ( (  inpck588 ) ( ) ) , ( (  istrip589 ) ( ) ) , ( ( (  ixon590 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3292 .f_c_dash_oflag = ( (  u32_dash_and552 ) ( ( (  raw3292 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg553 ) ( ( (  u32_dash_ors591 ) ( ( (  from_dash_listlike602 ) ( ( (struct Array_592) { ._arr = { ( ( (  opost603 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3292 .f_c_dash_cflag = ( (  u32_dash_or568 ) ( ( (  raw3292 ) .f_c_dash_cflag ) ,  ( (  cs8604 ) ( ) ) ) );
    ( (  set605 ) ( ( & ( (  raw3292 ) .f_c_dash_cc ) ) ,  ( (  vmin608 ) ( ) ) ,  (  from_dash_integral223 ( 0 ) ) ) );
    ( (  set605 ) ( ( & ( (  raw3292 ) .f_c_dash_cc ) ) ,  ( (  vtime609 ) ( ) ) ,  (  from_dash_integral223 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno550 ) ( ) ) ,  ( (  tcsa_dash_flush610 ) ( ) ) ,  ( (  cast_dash_ptr551 ) ( ( & (  raw3292 ) ) ) ) ) );
    return ( * (  orig_dash_termios3291 ) );
}

struct StrViewIter_614 {
    struct StrView_21  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_614   into_dash_iter616 (    struct StrViewIter_614  self1371 ) {
    return (  self1371 );
}

struct Maybe_617 {
    enum {
        Maybe_617_None_t,
        Maybe_617_Just_t,
    } tag;
    union {
        struct {
            struct Char_57  field0;
        } Maybe_617_Just_s;
    } stuff;
};

static struct Maybe_617 Maybe_617_Just (  struct Char_57  field0 ) {
    return ( struct Maybe_617 ) { .tag = Maybe_617_Just_t, .stuff = { .Maybe_617_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_617   next618 (    struct StrViewIter_614 *  self1374 ) {
    if ( (  cmp195 ( ( ( * (  self1374 ) ) .f_i ) , ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_617) { .tag = Maybe_617_None_t } );
    }
    uint8_t *  char_dash_ptr1375 = ( ( (  offset_dash_ptr340 ) ( ( (  cast233 ) ( ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64272 ) ( ( ( * (  self1374 ) ) .f_i ) ) ) ) ) );
    struct Char_57  char1376 = ( (  scan_dash_from_dash_mem234 ) ( (  char_dash_ptr1375 ) ) );
    (*  self1374 ) .f_i = (  op_dash_add243 ( ( ( * (  self1374 ) ) .f_i ) , ( (  char1376 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_617_Just ) ( (  char1376 ) ) );
}

static  enum Unit_7   for_dash_each613 (    struct StrViewIter_614  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrViewIter_614  temp615 = ( (  into_dash_iter616 ) ( (  iterable1074 ) ) );
    struct StrViewIter_614 *  it1077 = ( &temp615 );
    while ( ( true ) ) {
        struct Maybe_617  dref1078 = ( (  next618 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_617_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_617_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_617_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrViewIter_614   into_dash_iter620 (    struct StrView_21  self1368 ) {
    return ( (struct StrViewIter_614) { .f_ds = (  self1368 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_614   chars619 (    struct StrView_21  self1382 ) {
    return ( (  into_dash_iter620 ) ( (  self1382 ) ) );
}

static  enum Unit_7   print612 (    struct StrView_21  s2563 ) {
    ( (  for_dash_each613 ) ( ( (  chars619 ) ( (  s2563 ) ) ) ,  (  printf_dash_char215 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   hide_dash_cursor611 (  ) {
    ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   reset_dash_colors621 (  ) {
    ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   clear_dash_screen622 (  ) {
    ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   enable_dash_mouse623 (  ) {
    ( (  print_dash_str206 ) ( ( (  from_dash_string231 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   flush_dash_stdout624 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr532 ) ( ) ) ) );
    return ( Unit_7_Unit );
}

static  bool   ptr_dash_eq628 (    enum Unit_7 *  l586 ,    enum Unit_7 *  r588 ) {
    return ( (  l586 ) == (  r588 ) );
}

static  enum Unit_7 *   cast629 (    const char*  x356 ) {
    return ( (enum Unit_7 * ) (  x356 ) );
}

static  void *   cast_dash_ptr633 (    enum Unit_7 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of634 (    enum Unit_7 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  enum Unit_7 *   zeroed631 (  ) {
    enum Unit_7 *  temp632;
    enum Unit_7 *  x570 = (  temp632 );
    ( ( memset ) ( ( (  cast_dash_ptr633 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of634 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  enum Unit_7 *   null_dash_ptr630 (  ) {
    return ( (  zeroed631 ) ( ) );
}

static  struct Maybe_319   from_dash_nullable_dash_c_dash_str627 (    const char*  s591 ) {
    if ( ( (  ptr_dash_eq628 ) ( ( (  cast629 ) ( (  s591 ) ) ) ,  ( ( (  null_dash_ptr630 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_319) { .tag = Maybe_319_None_t } );
    } else {
        return ( ( Maybe_319_Just ) ( (  s591 ) ) );
    }
}

static  struct Maybe_319   get626 (    const char*  s2596 ) {
    return ( (  from_dash_nullable_dash_c_dash_str627 ) ( ( ( getenv ) ( (  s2596 ) ) ) ) );
}

static  bool   eq635 (    const char*  l1691 ,    const char*  r1693 ) {
    return (  eq331 ( ( ( strcmp ) ( (  l1691 ) ,  (  r1693 ) ) ) , (  from_dash_integral48 ( 0 ) ) ) );
}

static  enum ColorPalette_74   query_dash_palette625 (  ) {
    struct Maybe_319  colorterm2597 = ( (  get626 ) ( ( (  from_dash_string49 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_319  dref2598 = (  colorterm2597 );
    if ( dref2598.tag == Maybe_319_Just_t ) {
        if ( ( (  eq635 ( ( dref2598 .stuff .Maybe_319_Just_s .field0 ) , ( (  from_dash_string49 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq635 ( ( dref2598 .stuff .Maybe_319_Just_s .field0 ) , ( (  from_dash_string49 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_74_PaletteRGB );
        }
    }
    else {
        if ( dref2598.tag == Maybe_319_None_t ) {
        }
    }
    struct Maybe_319  dref2600 = ( (  get626 ) ( ( (  from_dash_string49 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2600.tag == Maybe_319_Just_t ) {
        if ( (  eq635 ( ( dref2600 .stuff .Maybe_319_Just_s .field0 ) , ( (  from_dash_string49 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_74_Palette8 );
        }
    }
    else {
        if ( dref2600.tag == Maybe_319_None_t ) {
        }
    }
    return ( ColorPalette_74_Palette16 );
}

struct Tuple2_636 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_636 Tuple2_636_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_636 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_638 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr642 (    struct Winsize_638 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of643 (    struct Winsize_638  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Winsize_638   zeroed640 (  ) {
    struct Winsize_638  temp641;
    struct Winsize_638  x570 = (  temp641 );
    ( ( memset ) ( ( (  cast_dash_ptr642 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of643 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  int32_t   stdout_dash_fileno644 (  ) {
    return (  from_dash_integral48 ( 1 ) );
}

static  uint64_t   from_dash_integral646 (    int64_t  x64 ) {
    return ( (uint64_t ) (  x64 ) );
}

static  uint64_t   tiocgwinsz645 (  ) {
    return (  from_dash_integral646 ( 21523 ) );
}

static  int32_t   op_dash_neg647 (    int32_t  x227 ) {
    return ( (  from_dash_integral48 ( 0 ) ) - (  x227 ) );
}

static  bool   eq648 (    uint16_t  l121 ,    uint16_t  r123 ) {
    return ( (  l121 ) == (  r123 ) );
}

static  uint16_t   from_dash_integral649 (    int64_t  x55 ) {
    return ( (uint16_t ) (  x55 ) );
}

static  void *   cast_dash_ptr655 (    uint32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of656 (    uint32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint32_t   zeroed653 (  ) {
    uint32_t  temp654;
    uint32_t  x570 = (  temp654 );
    ( ( memset ) ( ( (  cast_dash_ptr655 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of656 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint16_t *   cast657 (    uint32_t *  x356 ) {
    return ( (uint16_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed651 (    uint16_t  x573 ) {
    uint32_t  temp652 = ( (  zeroed653 ) ( ) );
    uint32_t *  y574 = ( &temp652 );
    uint16_t *  yp575 = ( (  cast657 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u16_dash_u32650 (    uint16_t  x645 ) {
    return ( (  cast_dash_on_dash_zeroed651 ) ( (  x645 ) ) );
}

static  struct Tuple2_636   get_dash_dimensions637 (  ) {
    struct Winsize_638  temp639 = ( ( (  zeroed640 ) ( ) ) );
    struct Winsize_638 *  ws2585 = ( &temp639 );
    if ( ( (  eq331 ( ( ( ioctl ) ( ( (  stdout_dash_fileno644 ) ( ) ) ,  ( (  tiocgwinsz645 ) ( ) ) ,  (  ws2585 ) ) ) , (  op_dash_neg647 ( (  from_dash_integral48 ( 1 ) ) ) ) ) ) || (  eq648 ( ( ( * (  ws2585 ) ) .f_ws_dash_col ) , (  from_dash_integral649 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_636_Tuple2 ) ( (  from_dash_integral227 ( 80 ) ) ,  (  from_dash_integral227 ( 24 ) ) ) );
    }
    return ( ( Tuple2_636_Tuple2 ) ( ( (  u16_dash_u32650 ) ( ( ( * (  ws2585 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32650 ) ( ( ( * (  ws2585 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined660 (  ) {
    struct timespec  temp661;
    return (  temp661 );
}

static  int32_t   clock_dash_monotonic662 (  ) {
    return (  from_dash_integral48 ( 1 ) );
}

static  struct timespec   now658 (  ) {
    struct timespec  temp659 = ( (  undefined660 ) ( ) );
    struct timespec *  t3253 = ( &temp659 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic662 ) ( ) ) ,  (  t3253 ) ) );
    return ( * (  t3253 ) );
}

struct env663 {
    bool *  should_dash_resize3305;
};

struct envunion664 {
    enum Unit_7  (*fun) (  struct env663*  ,    int32_t  );
    struct env663 env;
};

struct envunion664  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig665 ) {
    struct envunion664  temp666 = _intr_sigarr [  __intr__sig665 ];
    temp666.fun ( &temp666.env ,  __intr__sig665 );
}

static  enum Unit_7  _intr_register_signal (    int32_t  __intr__sig667 ,   struct envunion664  __intr__fun668 ) {
    _intr_sigarr [  __intr__sig667 ] =  __intr__fun668;
    signal(  __intr__sig667 , _intr_sighandle );
    return Unit_7_Unit;
}

static  enum Unit_7   lam669 (   struct env663* env ,    int32_t  dref3312 ) {
    (* env->should_dash_resize3305 ) = ( true );
    return ( Unit_7_Unit );
}

static  uint32_t   fst670 (    struct Tuple2_636  dref1253 ) {
    return ( dref1253 .field0 );
}

static  uint32_t   snd671 (    struct Tuple2_636  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tui_73   mk545 (   struct env69* env ) {
    struct Termios_75  og_dash_termios3307 = ( (  enable_dash_raw_dash_mode546 ) ( ) );
    ( (  hide_dash_cursor611 ) ( ) );
    ( (  reset_dash_colors621 ) ( ) );
    ( (  clear_dash_screen622 ) ( ) );
    ( (  enable_dash_mouse623 ) ( ) );
    ( (  flush_dash_stdout624 ) ( ) );
    enum ColorPalette_74  palette3308 = ( (  query_dash_palette625 ) ( ) );
    struct Tuple2_636  dims3309 = ( (  get_dash_dimensions637 ) ( ) );
    uint32_t  fps3310 = (  from_dash_integral227 ( 60 ) );
    struct timespec  last_dash_sync3311 = ( (  now658 ) ( ) );
    struct env663 envinst663 = {
        .should_dash_resize3305 = env->should_dash_resize3305 ,
    };
    ( _intr_register_signal ( (  from_dash_integral48 ( 28 ) ) , ( (struct envunion664){ .fun = (  enum Unit_7  (*) (  struct env663*  ,    int32_t  ) )lam669 , .env =  envinst663 } ) ) );
    return ( (struct Tui_73) { .f_width = ( (  fst670 ) ( (  dims3309 ) ) ) , .f_height = ( (  snd671 ) ( (  dims3309 ) ) ) , .f_target_dash_fps = (  fps3310 ) , .f_actual_dash_fps = (  from_dash_integral227 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3311 ) , .f_fps_dash_ts = (  last_dash_sync3311 ) , .f_fps_dash_count = (  from_dash_integral227 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3307 ) , .f_palette = (  palette3308 ) , .f_should_dash_redraw = ( true ) } );
}

enum Color8_676 {
    Color8_676_Black8,
    Color8_676_Red8,
    Color8_676_Green8,
    Color8_676_Yellow8,
    Color8_676_Blue8,
    Color8_676_Magenta8,
    Color8_676_Cyan8,
    Color8_676_White8,
};

enum Color16_677 {
    Color16_677_Black16,
    Color16_677_Red16,
    Color16_677_Green16,
    Color16_677_Yellow16,
    Color16_677_Blue16,
    Color16_677_Magenta16,
    Color16_677_Cyan16,
    Color16_677_White16,
    Color16_677_BrightBlack16,
    Color16_677_BrightRed16,
    Color16_677_BrightGreen16,
    Color16_677_BrightYellow16,
    Color16_677_BrightBlue16,
    Color16_677_BrightMagenta16,
    Color16_677_BrightCyan16,
    Color16_677_BrightWhite16,
};

struct RGB_678 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_675 {
    enum {
        Color_675_ColorDefault_t,
        Color_675_Color8_t,
        Color_675_Color16_t,
        Color_675_Color256_t,
        Color_675_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_676  field0;
        } Color_675_Color8_s;
        struct {
            enum Color16_677  field0;
        } Color_675_Color16_s;
        struct {
            uint8_t  field0;
        } Color_675_Color256_s;
        struct {
            struct RGB_678  field0;
        } Color_675_ColorRGB_s;
    } stuff;
};

static struct Color_675 Color_675_Color8 (  enum Color8_676  field0 ) {
    return ( struct Color_675 ) { .tag = Color_675_Color8_t, .stuff = { .Color_675_Color8_s = { .field0 = field0 } } };
};

static struct Color_675 Color_675_Color16 (  enum Color16_677  field0 ) {
    return ( struct Color_675 ) { .tag = Color_675_Color16_t, .stuff = { .Color_675_Color16_s = { .field0 = field0 } } };
};

static struct Color_675 Color_675_Color256 (  uint8_t  field0 ) {
    return ( struct Color_675 ) { .tag = Color_675_Color256_t, .stuff = { .Color_675_Color256_s = { .field0 = field0 } } };
};

static struct Color_675 Color_675_ColorRGB (  struct RGB_678  field0 ) {
    return ( struct Color_675 ) { .tag = Color_675_ColorRGB_t, .stuff = { .Color_675_ColorRGB_s = { .field0 = field0 } } };
};

struct Cell_674 {
    struct Char_57  f_c;
    struct Color_675  f_fg;
    struct Color_675  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_673 {
    struct Cell_674 *  f_ptr;
    size_t  f_count;
};

struct Screen_672 {
    enum CAllocator_9  f_al;
    struct Tui_73 *  f_tui;
    struct Slice_673  f_current;
    struct Slice_673  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_675  f_default_dash_fg;
    struct Color_675  f_default_dash_bg;
};

struct TypeSize_683 {
    size_t  f_size;
};

static  struct TypeSize_683   get_dash_typesize682 (  ) {
    struct Cell_674  temp684;
    return ( (struct TypeSize_683) { .f_size = ( sizeof( ( (  temp684 ) ) ) ) } );
}

static  struct Cell_674 *   cast_dash_ptr685 (    void *  p359 ) {
    return ( (struct Cell_674 * ) (  p359 ) );
}

static  struct Slice_673   allocate681 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize682 ) ( ) ) ) .f_size );
    struct Cell_674 *  ptr1957 = ( (  cast_dash_ptr685 ) ( ( ( malloc ) ( (  op_dash_mul256 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_673) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

static  void *   cast_dash_ptr691 (    size_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of692 (    size_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  size_t   zeroed689 (  ) {
    size_t  temp690;
    size_t  x570 = (  temp690 );
    ( ( memset ) ( ( (  cast_dash_ptr691 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of692 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint32_t *   cast693 (    size_t *  x356 ) {
    return ( (uint32_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed687 (    uint32_t  x573 ) {
    size_t  temp688 = ( (  zeroed689 ) ( ) );
    size_t *  y574 = ( &temp688 );
    uint32_t *  yp575 = ( (  cast693 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u32_dash_size686 (    uint32_t  x651 ) {
    return ( (  cast_dash_on_dash_zeroed687 ) ( (  x651 ) ) );
}

static  uint32_t   op_dash_mul694 (    uint32_t  l240 ,    uint32_t  r242 ) {
    return ( (  l240 ) * (  r242 ) );
}

struct Range_697 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_697 Range_697_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_697 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env698 {
    struct Slice_673  s1905;
    struct Cell_674 (*  fun1907 )(    struct Cell_674  );
    ;
    ;
    ;
};

struct envunion699 {
    enum Unit_7  (*fun) (  struct env698*  ,    int32_t  );
    struct env698 env;
};

struct RangeIter_700 {
    struct Range_697  field0;
    int32_t  field1;
};

static struct RangeIter_700 RangeIter_700_RangeIter (  struct Range_697  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_700 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_700   into_dash_iter702 (    struct Range_697  dref883 ) {
    return ( ( RangeIter_700_RangeIter ) ( ( ( Range_697_Range ) ( ( dref883 .field0 ) ,  ( dref883 .field1 ) ) ) ,  ( dref883 .field0 ) ) );
}

static  struct Maybe_283   next703 (    struct RangeIter_700 *  self891 ) {
    struct RangeIter_700  dref892 = ( * (  self891 ) );
    if ( true ) {
        if ( (  cmp328 ( ( dref892 .field1 ) , ( dref892 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_283) { .tag = Maybe_283_None_t } );
        }
        struct Maybe_283  x896 = ( ( Maybe_283_Just ) ( ( dref892 .field1 ) ) );
        (*  self891 ) = ( ( RangeIter_700_RangeIter ) ( ( ( Range_697_Range ) ( ( dref892 .field0 .field0 ) ,  ( dref892 .field0 .field1 ) ) ) ,  (  op_dash_add285 ( ( dref892 .field1 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
        return (  x896 );
    }
}

static  enum Unit_7   for_dash_each696 (    struct Range_697  iterable1074 ,   struct envunion699  fun1076 ) {
    struct RangeIter_700  temp701 = ( (  into_dash_iter702 ) ( (  iterable1074 ) ) );
    struct RangeIter_700 *  it1077 = ( &temp701 );
    while ( ( true ) ) {
        struct Maybe_283  dref1078 = ( (  next703 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_283_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_283_Just_t ) {
                struct envunion699  temp704 = (  fun1076 );
                ( temp704.fun ( &temp704.env ,  ( dref1078 .stuff .Maybe_283_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Range_697   to705 (    int32_t  from874 ,    int32_t  to876 ) {
    return ( ( Range_697_Range ) ( (  from874 ) ,  (  to876 ) ) );
}

static  struct Cell_674 *   offset_dash_ptr709 (    struct Cell_674 *  x338 ,    int64_t  count340 ) {
    struct Cell_674  temp710;
    return ( (struct Cell_674 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul241 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp710 ) ) ) ) ) ) ) ) );
}

static  struct Cell_674 *   get_dash_ptr708 (    struct Slice_673  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp195 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic263 ) ( ( ( StrConcat_264_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string231 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_674 *  elem_dash_ptr1760 = ( (  offset_dash_ptr709 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set707 (    struct Slice_673  slice1774 ,    size_t  i1776 ,    struct Cell_674  x1778 ) {
    struct Cell_674 *  ep1779 = ( (  get_dash_ptr708 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

struct Maybe_714 {
    enum {
        Maybe_714_None_t,
        Maybe_714_Just_t,
    } tag;
    union {
        struct {
            struct Cell_674  field0;
        } Maybe_714_Just_s;
    } stuff;
};

static struct Maybe_714 Maybe_714_Just (  struct Cell_674  field0 ) {
    return ( struct Maybe_714 ) { .tag = Maybe_714_Just_t, .stuff = { .Maybe_714_Just_s = { .field0 = field0 } } };
};

static  struct Cell_674   undefined715 (  ) {
    struct Cell_674  temp716;
    return (  temp716 );
}

static  struct Cell_674   or_dash_fail713 (    struct Maybe_714  x1725 ,    struct StrConcat_264  errmsg1727 ) {
    struct Maybe_714  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_714_None_t ) {
        ( (  panic263 ) ( (  errmsg1727 ) ) );
        return ( (  undefined715 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_714_Just_t ) {
            return ( dref1728 .stuff .Maybe_714_Just_s .field0 );
        }
    }
}

static  struct Maybe_714   try_dash_get717 (    struct Slice_673  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp195 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_714) { .tag = Maybe_714_None_t } );
    }
    struct Cell_674 *  elem_dash_ptr1766 = ( (  offset_dash_ptr709 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_714_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  struct Cell_674   get712 (    struct Slice_673  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail713 ) ( ( (  try_dash_get717 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_264_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string231 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_674   elem_dash_get711 (    struct Slice_673  self1867 ,    size_t  idx1869 ) {
    return ( (  get712 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

static  enum Unit_7   lam706 (   struct env698* env ,    int32_t  i1909 ) {
    return ( (  set707 ) ( ( env->s1905 ) ,  ( (  i32_dash_size273 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get711 ( ( env->s1905 ) , ( (  i32_dash_size273 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_7   map695 (    struct Slice_673  s1905 ,    struct Cell_674 (*  fun1907 )(    struct Cell_674  ) ) {
    struct env698 envinst698 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each696 ) ( ( (  to705 ) ( (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_i32207 ) ( (  op_dash_sub315 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion699){ .fun = (  enum Unit_7  (*) (  struct env698*  ,    int32_t  ) )lam706 , .env =  envinst698 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Cell_674   default_dash_cell719 (  ) {
    return ( (struct Cell_674) { .f_c = ( (  from_dash_charlike232 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_675) { .tag = Color_675_ColorDefault_t } ) , .f_bg = ( (struct Color_675) { .tag = Color_675_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral48 ( 1 ) ) } );
}

static  struct Cell_674   lam718 (    struct Cell_674  dref3415 ) {
    return ( (  default_dash_cell719 ) ( ) );
}

struct env722 {
    struct Slice_673  s1905;
    struct Cell_674 (*  fun1907 )(    struct Cell_674  );
    ;
    ;
    ;
};

struct envunion723 {
    enum Unit_7  (*fun) (  struct env722*  ,    int32_t  );
    struct env722 env;
};

static  enum Unit_7   for_dash_each721 (    struct Range_697  iterable1074 ,   struct envunion723  fun1076 ) {
    struct RangeIter_700  temp724 = ( (  into_dash_iter702 ) ( (  iterable1074 ) ) );
    struct RangeIter_700 *  it1077 = ( &temp724 );
    while ( ( true ) ) {
        struct Maybe_283  dref1078 = ( (  next703 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_283_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_283_Just_t ) {
                struct envunion723  temp725 = (  fun1076 );
                ( temp725.fun ( &temp725.env ,  ( dref1078 .stuff .Maybe_283_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam726 (   struct env722* env ,    int32_t  i1909 ) {
    return ( (  set707 ) ( ( env->s1905 ) ,  ( (  i32_dash_size273 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get711 ( ( env->s1905 ) , ( (  i32_dash_size273 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_7   map720 (    struct Slice_673  s1905 ,    struct Cell_674 (*  fun1907 )(    struct Cell_674  ) ) {
    struct env722 envinst722 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each721 ) ( ( (  to705 ) ( (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_i32207 ) ( (  op_dash_sub315 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion723){ .fun = (  enum Unit_7  (*) (  struct env722*  ,    int32_t  ) )lam726 , .env =  envinst722 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Cell_674   lam727 (    struct Cell_674  dref3417 ) {
    return ( (  default_dash_cell719 ) ( ) );
}

static  struct Screen_672   mk_dash_screen680 (    struct Tui_73 *  tui3411 ,    enum CAllocator_9  al3413 ) {
    struct Slice_673  cur3414 = ( (  allocate681 ) ( (  al3413 ) ,  ( (  u32_dash_size686 ) ( (  op_dash_mul694 ( ( ( * (  tui3411 ) ) .f_width ) , ( ( * (  tui3411 ) ) .f_height ) ) ) ) ) ) );
    ( (  map695 ) ( (  cur3414 ) ,  (  lam718 ) ) );
    struct Slice_673  prev3416 = ( (  allocate681 ) ( (  al3413 ) ,  ( (  u32_dash_size686 ) ( (  op_dash_mul694 ( ( ( * (  tui3411 ) ) .f_width ) , ( ( * (  tui3411 ) ) .f_height ) ) ) ) ) ) );
    ( (  map720 ) ( (  prev3416 ) ,  (  lam727 ) ) );
    return ( (struct Screen_672) { .f_current = (  cur3414 ) , .f_previous = (  prev3416 ) , .f_al = (  al3413 ) , .f_tui = (  tui3411 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_675) { .tag = Color_675_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_675) { .tag = Color_675_ColorDefault_t } ) } );
}

enum MouseButton_735 {
    MouseButton_735_MouseLeft,
    MouseButton_735_MouseMiddle,
    MouseButton_735_MouseRight,
    MouseButton_735_ScrollUp,
    MouseButton_735_ScrollDown,
};

struct MouseEvent_734 {
    enum MouseButton_735  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_733 {
    enum {
        InputEvent_733_Key_t,
        InputEvent_733_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_168  field0;
        } InputEvent_733_Key_s;
        struct {
            struct MouseEvent_734  field0;
        } InputEvent_733_Mouse_s;
    } stuff;
};

static struct InputEvent_733 InputEvent_733_Key (  struct Key_168  field0 ) {
    return ( struct InputEvent_733 ) { .tag = InputEvent_733_Key_t, .stuff = { .InputEvent_733_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_733 InputEvent_733_Mouse (  struct MouseEvent_734  field0 ) {
    return ( struct InputEvent_733 ) { .tag = InputEvent_733_Mouse_t, .stuff = { .InputEvent_733_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_732 {
    enum {
        Maybe_732_None_t,
        Maybe_732_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_733  field0;
        } Maybe_732_Just_s;
    } stuff;
};

static struct Maybe_732 Maybe_732_Just (  struct InputEvent_733  field0 ) {
    return ( struct Maybe_732 ) { .tag = Maybe_732_Just_t, .stuff = { .Maybe_732_Just_s = { .field0 = field0 } } };
};

struct envunion731 {
    struct Maybe_732  (*fun) (  struct env71*  ,    struct Tui_73 *  );
    struct env71 env;
};

struct env730 {
    struct Tui_73 *  tui4312;
    struct env71 envinst71;
};

struct envunion736 {
    struct Maybe_732  (*fun) (  struct env730*  );
    struct env730 env;
};

struct FunIter_729 {
    struct envunion736  f_fun;
    bool  f_finished;
};

static  struct FunIter_729   into_dash_iter737 (    struct FunIter_729  self1028 ) {
    return (  self1028 );
}

static  struct FunIter_729   from_dash_function738 (   struct envunion736  fun1036 ) {
    return ( (struct FunIter_729) { .f_fun = (  fun1036 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions743 (   struct env70* env ,    struct Tui_73 *  tui3377 ) {
    if ( ( ! ( * ( env->should_dash_resize3305 ) ) ) ) {
        return ( false );
    }
    (*  tui3377 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3305 ) = ( false );
    struct Tuple2_636  dim3378 = ( (  get_dash_dimensions637 ) ( ) );
    uint32_t  w3379 = ( (  fst670 ) ( (  dim3378 ) ) );
    uint32_t  h3380 = ( (  snd671 ) ( (  dim3378 ) ) );
    (*  tui3377 ) .f_width = (  w3379 );
    (*  tui3377 ) .f_height = (  h3380 );
    return ( true );
}

static  char   undefined746 (  ) {
    char  temp747;
    return (  temp747 );
}

struct Maybe_748 {
    enum {
        Maybe_748_None_t,
        Maybe_748_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_748_Just_s;
    } stuff;
};

static struct Maybe_748 Maybe_748_Just (  char  field0 ) {
    return ( struct Maybe_748 ) { .tag = Maybe_748_Just_t, .stuff = { .Maybe_748_Just_s = { .field0 = field0 } } };
};

struct Pollfd_750 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr751 (    struct Pollfd_750 *  p359 ) {
    return ( (struct pollfd * ) (  p359 ) );
}

static  void *   cast_dash_ptr754 (    char *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of755 (    char  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  char   zeroed752 (  ) {
    char  temp753;
    char  x570 = (  temp753 );
    ( ( memset ) ( ( (  cast_dash_ptr754 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of755 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Maybe_748   read_dash_byte749 (    int32_t  timeout_dash_ms3299 ) {
    struct Pollfd_750  pfd3300 = ( (struct Pollfd_750) { .f_fd = (  from_dash_integral48 ( 0 ) ) , .f_events = (  from_dash_integral649 ( 1 ) ) , .f_revents = (  from_dash_integral649 ( 0 ) ) } );
    if ( (  cmp328 ( ( ( poll ) ( ( (  cast_dash_ptr751 ) ( ( & (  pfd3300 ) ) ) ) ,  (  from_dash_integral48 ( 1 ) ) ,  (  timeout_dash_ms3299 ) ) ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_748) { .tag = Maybe_748_None_t } );
    }
    char  c3301 = ( ( (  zeroed752 ) ( ) ) );
    if ( (  cmp328 ( ( ( read ) ( ( (  stdin_dash_fileno550 ) ( ) ) ,  ( (  cast_dash_ptr754 ) ( ( & (  c3301 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_748) { .tag = Maybe_748_None_t } );
    }
    return ( ( Maybe_748_Just ) ( (  c3301 ) ) );
}

static  uint8_t   ascii_dash_u8756 (    char  c776 ) {
    return ( ( (uint8_t ) (  c776 ) ) );
}

static  char   u8_dash_ascii757 (    uint8_t  b779 ) {
    return ( ( (char ) (  b779 ) ) );
}

static  uint8_t *   cast761 (    uint32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed759 (    uint8_t  x573 ) {
    uint32_t  temp760 = ( (  zeroed653 ) ( ) );
    uint32_t *  y574 = ( &temp760 );
    uint8_t *  yp575 = ( (  cast761 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u8_dash_u32758 (    uint8_t  x672 ) {
    return ( (  cast_dash_on_dash_zeroed759 ) ( (  x672 ) ) );
}

struct Map_764 {
    struct StrViewIter_614  field0;
    uint32_t (*  field1 )(    struct Char_57  );
};

static struct Map_764 Map_764_Map (  struct StrViewIter_614  field0 ,  uint32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_764 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_764   into_dash_iter765 (    struct Map_764  self796 ) {
    return (  self796 );
}

static  struct Maybe_559   next766 (    struct Map_764 *  dref798 ) {
    struct Maybe_617  dref801 = ( (  next618 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_617_None_t ) {
        return ( (struct Maybe_559) { .tag = Maybe_559_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_617_Just_t ) {
            return ( ( Maybe_559_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_617_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce763 (    struct Map_764  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct Map_764  it1099 = ( (  into_dash_iter765 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_559  dref1100 = ( (  next766 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_559_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_559_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_559_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp767 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp767);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp768;
    return (  temp768 );
}

static  struct Map_764   map769 (    struct StrView_21  iterable805 ,    uint32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrViewIter_614  it808 = ( (  into_dash_iter620 ) ( (  iterable805 ) ) );
    return ( ( Map_764_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  void *   cast_dash_ptr776 (    int64_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of777 (    int64_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int64_t   zeroed774 (  ) {
    int64_t  temp775;
    int64_t  x570 = (  temp775 );
    ( ( memset ) ( ( (  cast_dash_ptr776 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of777 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast778 (    int64_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int64_t   cast_dash_on_dash_zeroed772 (    uint8_t  x573 ) {
    int64_t  temp773 = ( (  zeroed774 ) ( ) );
    int64_t *  y574 = ( &temp773 );
    uint8_t *  yp575 = ( (  cast778 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int64_t   u8_dash_i64771 (    uint8_t  x666 ) {
    return ( (  cast_dash_on_dash_zeroed772 ) ( (  x666 ) ) );
}

struct StrConcat_781 {
    struct Char_57  field0;
    struct Char_57  field1;
};

static struct StrConcat_781 StrConcat_781_StrConcat (  struct Char_57  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_781 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_780 {
    struct StrConcat_781  field0;
    struct StrView_21  field1;
};

static struct StrConcat_780 StrConcat_780_StrConcat (  struct StrConcat_781  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_780 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_785 {
    struct StrView_21  field0;
    struct StrConcat_780  field1;
};

static struct StrConcat_785 StrConcat_785_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_780  field1 ) {
    return ( struct StrConcat_785 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_784 {
    struct StrConcat_785  field0;
    struct Char_57  field1;
};

static struct StrConcat_784 StrConcat_784_StrConcat (  struct StrConcat_785  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_784 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str788 (    struct StrConcat_781  self1503 ) {
    struct StrConcat_781  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str214 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str214 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str787 (    struct StrConcat_780  self1503 ) {
    struct StrConcat_780  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str788 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str206 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str786 (    struct StrConcat_785  self1503 ) {
    struct StrConcat_785  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str206 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str787 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str783 (    struct StrConcat_784  self1503 ) {
    struct StrConcat_784  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str786 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str214 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic782 (    struct StrConcat_780  errmsg1712 ) {
    ( (  print_dash_str783 ) ( ( ( StrConcat_784_StrConcat ) ( ( ( StrConcat_785_StrConcat ) ( ( (  from_dash_string231 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  uint8_t   or_dash_fail779 (    struct Maybe_356  x1725 ,    struct StrConcat_780  errmsg1727 ) {
    struct Maybe_356  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_356_None_t ) {
        ( (  panic782 ) ( (  errmsg1727 ) ) );
        return ( (  undefined392 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_356_Just_t ) {
            return ( dref1728 .stuff .Maybe_356_Just_s .field0 );
        }
    }
}

static  enum Ordering_196   cmp790 (    struct Char_57  l744 ,    struct Char_57  r746 ) {
    if ( ( ( !  eq250 ( ( (  l744 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq250 ( ( (  r746 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp791 = ( (  from_dash_string49 ) ( ( "(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp791);
        exit ( 1 );
        ( Unit_7_Unit );
    }
    return ( (  cmp236 ) ( ( (  char_dash_u8395 ) ( (  l744 ) ) ) ,  ( (  char_dash_u8395 ) ( (  r746 ) ) ) ) );
}

static  uint8_t   op_dash_sub792 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  uint8_t   op_dash_add793 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  struct Maybe_356   hex_dash_digit789 (    struct Char_57  c2545 ) {
    if ( ( (  cmp790 ( (  c2545 ) , ( (  from_dash_charlike232 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp790 ( (  c2545 ) , ( (  from_dash_charlike232 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_356_Just ) ( (  op_dash_sub792 ( ( (  char_dash_u8395 ) ( (  c2545 ) ) ) , ( (  char_dash_u8395 ) ( ( (  from_dash_charlike232 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp790 ( (  c2545 ) , ( (  from_dash_charlike232 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp790 ( (  c2545 ) , ( (  from_dash_charlike232 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_356_Just ) ( (  op_dash_add793 ( (  op_dash_sub792 ( ( (  char_dash_u8395 ) ( (  c2545 ) ) ) , ( (  char_dash_u8395 ) ( ( (  from_dash_charlike232 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral223 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp790 ( (  c2545 ) , ( (  from_dash_charlike232 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp790 ( (  c2545 ) , ( (  from_dash_charlike232 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_356_Just ) ( (  op_dash_add793 ( (  op_dash_sub792 ( ( (  char_dash_u8395 ) ( (  c2545 ) ) ) , ( (  char_dash_u8395 ) ( ( (  from_dash_charlike232 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral223 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_356) { .tag = Maybe_356_None_t } );
}

static  uint32_t   lam770 (    struct Char_57  c2550 ) {
    return ( (  from_dash_integral227 ) ( ( (  u8_dash_i64771 ) ( ( (  or_dash_fail779 ) ( ( (  hex_dash_digit789 ) ( (  c2550 ) ) ) ,  ( ( StrConcat_780_StrConcat ) ( ( ( StrConcat_781_StrConcat ) ( ( (  from_dash_charlike232 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2550 ) ) ) ,  ( (  from_dash_string231 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   op_dash_add795 (    uint32_t  l230 ,    uint32_t  r232 ) {
    return ( (  l230 ) + (  r232 ) );
}

static  uint32_t   lam794 (    uint32_t  elem2552 ,    uint32_t  b2554 ) {
    return (  op_dash_add795 ( (  op_dash_mul694 ( (  b2554 ) , (  from_dash_integral227 ( 16 ) ) ) ) , (  elem2552 ) ) );
}

static  uint32_t   from_dash_hex762 (    struct StrView_21  arr2548 ) {
    return ( (  reduce763 ) ( ( (  map769 ) ( (  arr2548 ) ,  (  lam770 ) ) ) ,  (  from_dash_integral227 ( 0 ) ) ,  (  lam794 ) ) );
}

static  bool   eq797 (    char  l374 ,    char  r376 ) {
    return ( (  l374 ) == (  r376 ) );
}

static  char   from_dash_charlike798 (    uint8_t *  ptr369 ,    size_t  num_dash_bytes371 ) {
    if ( ( !  eq250 ( (  num_dash_bytes371 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp799 = ( (  from_dash_string49 ) ( ( "(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp799);
        exit ( 1 );
        ( Unit_7_Unit );
    }
    return ( ( (char ) ( * (  ptr369 ) ) ) );
}

struct Array_800 {
    char _arr [32];
};

static  void *   cast_dash_ptr804 (    struct Array_800 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of805 (    struct Array_800  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Array_800   zeroed802 (  ) {
    struct Array_800  temp803;
    struct Array_800  x570 = (  temp803 );
    ( ( memset ) ( ( (  cast_dash_ptr804 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of805 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr809 (    struct Array_800 *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  char *   offset_dash_ptr810 (    char *  x338 ,    int64_t  count340 ) {
    char  temp811;
    return ( (char * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul241 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp811 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr808 (    struct Array_800 *  arr2250 ,    size_t  i2253 ) {
    if ( ( (  cmp195 ( (  i2253 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i2253 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic199 ) ( ( ( StrConcat_200_StrConcat ) ( ( ( StrConcat_201_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2253 ) ) ) ,  ( (  from_dash_string231 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2254 = ( ( (  cast_dash_ptr809 ) ( (  arr2250 ) ) ) );
    return ( (  offset_dash_ptr810 ) ( (  p2254 ) ,  ( (int64_t ) (  i2253 ) ) ) );
}

static  enum Unit_7   set807 (    struct Array_800 *  arr2263 ,    size_t  i2266 ,    char  e2268 ) {
    char *  p2269 = ( (  get_dash_ptr808 ) ( (  arr2263 ) ,  (  i2266 ) ) );
    (*  p2269 ) = (  e2268 );
    return ( Unit_7_Unit );
}

struct Slice_813 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail816 (    struct Maybe_748  x1725 ,    struct StrConcat_264  errmsg1727 ) {
    struct Maybe_748  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_748_None_t ) {
        ( (  panic263 ) ( (  errmsg1727 ) ) );
        return ( (  undefined746 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_748_Just_t ) {
            return ( dref1728 .stuff .Maybe_748_Just_s .field0 );
        }
    }
}

static  struct Maybe_748   try_dash_get817 (    struct Slice_813  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp195 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_748) { .tag = Maybe_748_None_t } );
    }
    char *  elem_dash_ptr1766 = ( (  offset_dash_ptr810 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_748_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  char   get815 (    struct Slice_813  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail816 ) ( ( (  try_dash_get817 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_264_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string231 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get814 (    struct Slice_813  self1867 ,    size_t  idx1869 ) {
    return ( (  get815 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

struct Scanner_818 {
    struct StrViewIter_614  f_s;
};

static  struct Scanner_818   mk_dash_from_dash_str820 (    struct StrView_21  s3172 ) {
    return ( (struct Scanner_818) { .f_s = ( (  chars619 ) ( (  s3172 ) ) ) } );
}

static  int32_t   op_dash_sub823 (    int32_t  l212 ,    int32_t  r214 ) {
    return ( (  l212 ) - (  r214 ) );
}

static  uint8_t *   offset_dash_ptr_prime_825 (    uint8_t *  x343 ,    size_t  count345 ) {
    return ( (  offset_dash_ptr340 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
}

static  struct StrView_21   substr821 (    struct StrView_21  s2172 ,    size_t  from2174 ,    size_t  to2176 ) {
    size_t  from_dash_bs2177 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_700  temp822 =  into_dash_iter702 ( ( (  to705 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub823 ( ( (  size_dash_i32207 ) ( (  from2174 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_283  __cond824 =  next703 (&temp822);
        if (  __cond824 .tag == 0 ) {
            break;
        }
        int32_t  dref2178 =  __cond824 .stuff .Maybe_283_Just_s .field0;
        if ( (  cmp195 ( (  from_dash_bs2177 ) , ( ( (  s2172 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2177 = (  op_dash_add243 ( (  from_dash_bs2177 ) , ( (  next_dash_char235 ) ( ( (  offset_dash_ptr_prime_825 ) ( ( ( (  s2172 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2177 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2179 = (  from_dash_bs2177 );
    struct RangeIter_700  temp826 =  into_dash_iter702 ( ( (  to705 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub823 ( (  op_dash_sub823 ( ( (  size_dash_i32207 ) ( (  to2176 ) ) ) , ( (  size_dash_i32207 ) ( (  from2174 ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_283  __cond827 =  next703 (&temp826);
        if (  __cond827 .tag == 0 ) {
            break;
        }
        int32_t  dref2180 =  __cond827 .stuff .Maybe_283_Just_s .field0;
        if ( (  cmp195 ( (  to_dash_bs2179 ) , ( ( (  s2172 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2179 = (  op_dash_add243 ( (  to_dash_bs2179 ) , ( (  next_dash_char235 ) ( ( (  offset_dash_ptr_prime_825 ) ( ( ( (  s2172 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2179 ) ) ) ) ) ) );
    }
    return ( (struct StrView_21) { .f_contents = ( (  subslice339 ) ( ( (  s2172 ) .f_contents ) ,  (  from_dash_bs2177 ) ,  (  to_dash_bs2179 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr830 (    char *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_12   cast_dash_slice829 (    struct Slice_813  s1932 ) {
    return ( (struct Slice_12) { .f_ptr = ( (  cast_dash_ptr830 ) ( ( (  s1932 ) .f_ptr ) ) ) , .f_count = ( (  s1932 ) .f_count ) } );
}

static  struct StrView_21   from_dash_ascii_dash_slice828 (    struct Slice_813  sl2149 ) {
    return ( (struct StrView_21) { .f_contents = ( (  cast_dash_slice829 ) ( (  sl2149 ) ) ) } );
}

struct Maybe_831 {
    enum {
        Maybe_831_None_t,
        Maybe_831_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_831_Just_s;
    } stuff;
};

static struct Maybe_831 Maybe_831_Just (  int64_t  field0 ) {
    return ( struct Maybe_831 ) { .tag = Maybe_831_Just_t, .stuff = { .Maybe_831_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_833 {
    struct Scanner_818  f_it;
    bool (*  f_pred )(    struct Char_57  );
};

static  struct Scanner_818   into_dash_iter836 (    struct Scanner_818  self3163 ) {
    return (  self3163 );
}

static  struct Scanner_818   into_dash_iter835 (    struct Scanner_818 *  self785 ) {
    return ( (  into_dash_iter836 ) ( ( * (  self785 ) ) ) );
}

static  struct TakeWhile_833   take_dash_while834 (    struct Scanner_818 *  it970 ,    bool (*  pred972 )(    struct Char_57  ) ) {
    return ( (struct TakeWhile_833) { .f_it = ( (  into_dash_iter835 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  bool   is_dash_digit837 (    struct Char_57  c2451 ) {
    return ( (  cmp236 ( ( (  char_dash_u8395 ) ( (  c2451 ) ) ) , ( (  char_dash_u8395 ) ( ( (  from_dash_charlike232 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp236 ( ( (  char_dash_u8395 ) ( (  c2451 ) ) ) , ( (  char_dash_u8395 ) ( ( (  from_dash_charlike232 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_617   next841 (    struct Scanner_818 *  self3160 ) {
    return ( (  next618 ) ( ( & ( ( * (  self3160 ) ) .f_s ) ) ) );
}

static  struct Maybe_617   next840 (    struct TakeWhile_833 *  self964 ) {
    struct Maybe_617  mx965 = ( (  next841 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_617  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_617_None_t ) {
        return ( (struct Maybe_617) { .tag = Maybe_617_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_617_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_617_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_617_Just ) ( ( dref966 .stuff .Maybe_617_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_617) { .tag = Maybe_617_None_t } );
            }
        }
    }
}

static  struct TakeWhile_833   into_dash_iter843 (    struct TakeWhile_833  self961 ) {
    return (  self961 );
}

static  struct Maybe_617   head839 (    struct TakeWhile_833  it1142 ) {
    struct TakeWhile_833  temp842 = ( (  into_dash_iter843 ) ( (  it1142 ) ) );
    return ( (  next840 ) ( ( &temp842 ) ) );
}

static  bool   null838 (    struct TakeWhile_833  it1151 ) {
    struct Maybe_617  dref1152 = ( (  head839 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_617_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env846 {
    struct Scanner_818 *  it1186;
    ;
};

struct envunion847 {
    struct Maybe_617  (*fun) (  struct env846*  ,    int32_t  );
    struct env846 env;
};

static  enum Unit_7   for_dash_each845 (    struct Range_697  iterable1074 ,   struct envunion847  fun1076 ) {
    struct RangeIter_700  temp848 = ( (  into_dash_iter702 ) ( (  iterable1074 ) ) );
    struct RangeIter_700 *  it1077 = ( &temp848 );
    while ( ( true ) ) {
        struct Maybe_283  dref1078 = ( (  next703 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_283_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_283_Just_t ) {
                struct envunion847  temp849 = (  fun1076 );
                ( temp849.fun ( &temp849.env ,  ( dref1078 .stuff .Maybe_283_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Maybe_617   lam850 (   struct env846* env ,    int32_t  dref1189 ) {
    return ( (  next841 ) ( ( env->it1186 ) ) );
}

static  enum Unit_7   drop_prime_844 (    struct Scanner_818 *  it1186 ,    size_t  n1188 ) {
    struct env846 envinst846 = {
        .it1186 =  it1186 ,
    };
    ( (  for_dash_each845 ) ( ( (  to705 ) ( (  from_dash_integral48 ( 1 ) ) ,  ( (  size_dash_i32207 ) ( (  n1188 ) ) ) ) ) ,  ( (struct envunion847){ .fun = (  struct Maybe_617  (*) (  struct env846*  ,    int32_t  ) )lam850 , .env =  envinst846 } ) ) );
    return ( Unit_7_Unit );
}

static  size_t   reduce852 (    struct TakeWhile_833  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_57  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct TakeWhile_833  it1099 = ( (  into_dash_iter843 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_617  dref1100 = ( (  next840 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_617_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_617_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_617_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp853 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp853);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp854;
    return (  temp854 );
}

static  size_t   lam855 (    struct Char_57  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add243 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count851 (    struct TakeWhile_833  it1104 ) {
    return ( (  reduce852 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam855 ) ) );
}

static  struct TakeWhile_833   chars857 (    struct TakeWhile_833  self1651 ) {
    return (  self1651 );
}

static  struct Maybe_831   reduce858 (    struct TakeWhile_833  iterable1093 ,    struct Maybe_831  base1095 ,    struct Maybe_831 (*  fun1097 )(    struct Char_57  ,    struct Maybe_831  ) ) {
    struct Maybe_831  x1098 = (  base1095 );
    struct TakeWhile_833  it1099 = ( (  into_dash_iter843 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_617  dref1100 = ( (  next840 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_617_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_617_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_617_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp859 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp859);
    exit ( 1 );
    ( Unit_7_Unit );
    struct Maybe_831  temp860;
    return (  temp860 );
}

static  void *   cast_dash_ptr868 (    int32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of869 (    int32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int32_t   zeroed866 (  ) {
    int32_t  temp867;
    int32_t  x570 = (  temp867 );
    ( ( memset ) ( ( (  cast_dash_ptr868 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of869 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast870 (    int32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed864 (    uint8_t  x573 ) {
    int32_t  temp865 = ( (  zeroed866 ) ( ) );
    int32_t *  y574 = ( &temp865 );
    uint8_t *  yp575 = ( (  cast870 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int32_t   u8_dash_i32863 (    uint8_t  x669 ) {
    return ( (  cast_dash_on_dash_zeroed864 ) ( (  x669 ) ) );
}

static  struct Maybe_283   parse_dash_digit862 (    struct Char_57  c2454 ) {
    if ( ( (  is_dash_digit837 ) ( (  c2454 ) ) ) ) {
        return ( ( Maybe_283_Just ) ( ( (  u8_dash_i32863 ) ( (  op_dash_sub792 ( ( (  char_dash_u8395 ) ( (  c2454 ) ) ) , ( (  char_dash_u8395 ) ( ( (  from_dash_charlike232 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_283) { .tag = Maybe_283_None_t } );
    }
}

static  int64_t   i32_dash_i64871 (    int32_t  x606 ) {
    return ( (int64_t ) (  x606 ) );
}

static  struct Maybe_831   sequence_dash_maybe861 (    struct Char_57  e2460 ,    struct Maybe_831  b2462 ) {
    struct Maybe_831  dref2463 = (  b2462 );
    if ( dref2463.tag == Maybe_831_None_t ) {
        return ( (struct Maybe_831) { .tag = Maybe_831_None_t } );
    }
    else {
        if ( dref2463.tag == Maybe_831_Just_t ) {
            struct Maybe_283  dref2465 = ( (  parse_dash_digit862 ) ( (  e2460 ) ) );
            if ( dref2465.tag == Maybe_283_None_t ) {
                return ( (struct Maybe_831) { .tag = Maybe_831_None_t } );
            }
            else {
                if ( dref2465.tag == Maybe_283_Just_t ) {
                    return ( ( Maybe_831_Just ) ( (  op_dash_add416 ( (  op_dash_mul241 ( ( dref2463 .stuff .Maybe_831_Just_s .field0 ) , (  from_dash_integral314 ( 10 ) ) ) ) , ( (  i32_dash_i64871 ) ( ( dref2465 .stuff .Maybe_283_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_831   parse_dash_int856 (    struct TakeWhile_833  s2457 ) {
    struct TakeWhile_833  cs2467 = ( (  chars857 ) ( (  s2457 ) ) );
    struct Maybe_617  dref2468 = ( (  head839 ) ( (  cs2467 ) ) );
    if ( dref2468.tag == Maybe_617_Just_t ) {
        return ( (  reduce858 ) ( (  cs2467 ) ,  ( ( Maybe_831_Just ) ( (  from_dash_integral314 ( 0 ) ) ) ) ,  (  sequence_dash_maybe861 ) ) );
    }
    else {
        if ( dref2468.tag == Maybe_617_None_t ) {
            return ( (struct Maybe_831) { .tag = Maybe_831_None_t } );
        }
    }
}

static  struct Maybe_831   scan_dash_int832 (    struct Scanner_818 *  sc3175 ) {
    struct TakeWhile_833  digit_dash_chars3176 = ( (  take_dash_while834 ) ( (  sc3175 ) ,  (  is_dash_digit837 ) ) );
    if ( ( (  null838 ) ( (  digit_dash_chars3176 ) ) ) ) {
        return ( (struct Maybe_831) { .tag = Maybe_831_None_t } );
    }
    ( (  drop_prime_844 ) ( (  sc3175 ) ,  ( (  count851 ) ( (  digit_dash_chars3176 ) ) ) ) );
    return ( (  parse_dash_int856 ) ( (  digit_dash_chars3176 ) ) );
}

static  int32_t   i64_dash_i32873 (    int64_t  x618 ) {
    return ( (int32_t ) (  x618 ) );
}

struct StrConcat_875 {
    struct StrView_21  field0;
    int64_t  field1;
};

static struct StrConcat_875 StrConcat_875_StrConcat (  struct StrView_21  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_875 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_878 {
    struct StrView_21  field0;
    struct StrConcat_875  field1;
};

static struct StrConcat_878 StrConcat_878_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_875  field1 ) {
    return ( struct StrConcat_878 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_877 {
    struct StrConcat_878  field0;
    struct Char_57  field1;
};

static struct StrConcat_877 StrConcat_877_StrConcat (  struct StrConcat_878  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_877 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_883 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_882 {
    struct StrViewIter_614  f_left;
    struct IntStrIter_883  f_right;
};

struct StrConcatIter_881 {
    struct StrViewIter_614  f_left;
    struct StrConcatIter_882  f_right;
};

enum EmptyIter_885 {
    EmptyIter_885_EmptyIter,
};

struct AppendIter_884 {
    enum EmptyIter_885  f_it;
    struct Char_57  f_elem;
    bool  f_appended;
};

struct StrConcatIter_880 {
    struct StrConcatIter_881  f_left;
    struct AppendIter_884  f_right;
};

static  struct StrConcatIter_880   into_dash_iter887 (    struct StrConcatIter_880  self1491 ) {
    return (  self1491 );
}

struct env894 {
    ;
    int64_t  base1210;
};

struct envunion895 {
    int64_t  (*fun) (  struct env894*  ,    int32_t  ,    int64_t  );
    struct env894 env;
};

static  int64_t   reduce893 (    struct Range_697  iterable1093 ,    int64_t  base1095 ,   struct envunion895  fun1097 ) {
    int64_t  x1098 = (  base1095 );
    struct RangeIter_700  it1099 = ( (  into_dash_iter702 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_283  dref1100 = ( (  next703 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_283_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_283_Just_t ) {
                struct envunion895  temp896 = (  fun1097 );
                x1098 = ( temp896.fun ( &temp896.env ,  ( dref1100 .stuff .Maybe_283_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp897 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp897);
    exit ( 1 );
    ( Unit_7_Unit );
    int64_t  temp898;
    return (  temp898 );
}

static  int64_t   lam899 (   struct env894* env ,    int32_t  item1214 ,    int64_t  x1216 ) {
    return (  op_dash_mul241 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int64_t   pow892 (    int64_t  base1210 ,    int32_t  p1212 ) {
    struct env894 envinst894 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce893 ) ( ( (  to705 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub823 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral314 ( 1 ) ) ,  ( (struct envunion895){ .fun = (  int64_t  (*) (  struct env894*  ,    int32_t  ,    int64_t  ) )lam899 , .env =  envinst894 } ) ) );
}

static  int64_t   op_dash_div900 (    int64_t  l199 ,    int64_t  r201 ) {
    return ( (  l199 ) / (  r201 ) );
}

static  uint8_t   cast901 (    int64_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  int64_t   op_dash_sub902 (    int64_t  l189 ,    int64_t  r191 ) {
    return ( (  l189 ) - (  r191 ) );
}

static  uint8_t *   cast908 (    size_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed906 (    uint8_t  x573 ) {
    size_t  temp907 = ( (  zeroed689 ) ( ) );
    size_t *  y574 = ( &temp907 );
    uint8_t *  yp575 = ( (  cast908 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u8_dash_size905 (    uint8_t  x663 ) {
    return ( (  cast_dash_on_dash_zeroed906 ) ( (  x663 ) ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer904 (    uint8_t *  ptr681 ,    uint8_t  b683 ) {
    size_t  s684 = ( ( (size_t ) (  ptr681 ) ) );
    size_t  exp685 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add243 ( (  op_dash_sub315 ( (  s684 ) , ( (  u8_dash_size905 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer220 ) ( (  ptr681 ) ) ) ) ) ) ) , (  op_dash_mul256 ( (  exp685 ) , ( (  u8_dash_size905 ) ( (  b683 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast909 (    size_t  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_57   from_dash_u8903 (    uint8_t  b772 ) {
    uint8_t *  ptr773 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer904 ) ( ( ( (  cast909 ) ( ( (  u8_dash_size905 ) ( (  b772 ) ) ) ) ) ) ,  (  from_dash_integral223 ( 103 ) ) ) );
    return ( (struct Char_57) { .f_ptr = (  ptr773 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_617   next891 (    struct IntStrIter_883 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_617_Just ) ( ( (  from_dash_charlike232 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp328 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_617) { .tag = Maybe_617_None_t } );
    }
    int64_t  trim_dash_down1423 = ( (  pow892 ) ( (  from_dash_integral314 ( 10 ) ) ,  (  op_dash_sub823 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    int64_t  upper1424 = (  op_dash_div900 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    int64_t  upper_dash_mask1425 = (  op_dash_mul241 ( (  op_dash_div900 ( (  upper1424 ) , (  from_dash_integral314 ( 10 ) ) ) ) , (  from_dash_integral314 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast901 ) ( (  op_dash_sub902 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub823 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8903 ) ( (  op_dash_add793 ( (  digit1426 ) , (  from_dash_integral223 ( 48 ) ) ) ) ) );
    return ( ( Maybe_617_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_617   next890 (    struct StrConcatIter_882 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next891 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next889 (    struct StrConcatIter_881 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next890 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next911 (    enum EmptyIter_885 *  dref792 ) {
    return ( (struct Maybe_617) { .tag = Maybe_617_None_t } );
}

static  struct Maybe_617   next910 (    struct AppendIter_884 *  self1022 ) {
    struct Maybe_617  dref1023 = ( (  next911 ) ( ( & ( ( * (  self1022 ) ) .f_it ) ) ) );
    if ( dref1023.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1023 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1023.tag == Maybe_617_None_t ) {
            if ( ( ! ( ( * (  self1022 ) ) .f_appended ) ) ) {
                (*  self1022 ) .f_appended = ( true );
                return ( ( Maybe_617_Just ) ( ( ( * (  self1022 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_617) { .tag = Maybe_617_None_t } );
        }
    }
}

static  struct Maybe_617   next888 (    struct StrConcatIter_880 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next889 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next910 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each879 (    struct StrConcatIter_880  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrConcatIter_880  temp886 = ( (  into_dash_iter887 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_880 *  it1077 = ( &temp886 );
    while ( ( true ) ) {
        struct Maybe_617  dref1078 = ( (  next888 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_617_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_617_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_617_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_196   cmp920 (    int64_t  l154 ,    int64_t  r156 ) {
    return ( builtin_int64_tcmp( (  l154 ) , (  r156 ) ) );
}

static  int64_t   op_dash_neg921 (    int64_t  l204 ) {
    return ( (  from_dash_integral314 ( 0 ) ) - (  l204 ) );
}

static  bool   eq923 (    int64_t  l101 ,    int64_t  r103 ) {
    return ( (  l101 ) == (  r103 ) );
}

static  int32_t   count_dash_digits922 (    int64_t  self1430 ) {
    if ( (  eq923 ( (  self1430 ) , (  from_dash_integral314 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp920 ( (  self1430 ) , (  from_dash_integral314 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div900 ( (  self1430 ) , (  from_dash_integral314 ( 10 ) ) ) );
        digits1431 = (  op_dash_add285 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_883   int_dash_iter919 (    int64_t  int1434 ) {
    if ( (  cmp920 ( (  int1434 ) , (  from_dash_integral314 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_883) { .f_int = (  op_dash_neg921 ( (  int1434 ) ) ) , .f_len = ( (  count_dash_digits922 ) ( (  op_dash_neg921 ( (  int1434 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_883) { .f_int = (  int1434 ) , .f_len = ( (  count_dash_digits922 ) ( (  int1434 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_883   chars918 (    int64_t  self1461 ) {
    return ( (  int_dash_iter919 ) ( (  self1461 ) ) );
}

static  struct StrConcatIter_882   into_dash_iter917 (    struct StrConcat_875  dref1498 ) {
    return ( (struct StrConcatIter_882) { .f_left = ( (  chars619 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars918 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_882   chars916 (    struct StrConcat_875  self1509 ) {
    return ( (  into_dash_iter917 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_881   into_dash_iter915 (    struct StrConcat_878  dref1498 ) {
    return ( (struct StrConcatIter_881) { .f_left = ( (  chars619 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars916 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_881   chars914 (    struct StrConcat_878  self1509 ) {
    return ( (  into_dash_iter915 ) ( (  self1509 ) ) );
}

static  enum EmptyIter_885   into_dash_iter928 (    enum EmptyIter_885  self790 ) {
    return (  self790 );
}

static  struct AppendIter_884   append927 (    enum EmptyIter_885  it1006 ,    struct Char_57  e1008 ) {
    return ( (struct AppendIter_884) { .f_it = ( (  into_dash_iter928 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_884   cons926 (    enum EmptyIter_885  it1011 ,    struct Char_57  e1013 ) {
    return ( (  append927 ) ( (  it1011 ) ,  (  e1013 ) ) );
}

static  enum EmptyIter_885   nil929 (  ) {
    return ( EmptyIter_885_EmptyIter );
}

static  struct AppendIter_884   single925 (    struct Char_57  e1016 ) {
    return ( (  cons926 ) ( ( (  nil929 ) ( ) ) ,  (  e1016 ) ) );
}

static  struct AppendIter_884   chars924 (    struct Char_57  self1407 ) {
    return ( (  single925 ) ( (  self1407 ) ) );
}

static  struct StrConcatIter_880   into_dash_iter913 (    struct StrConcat_877  dref1498 ) {
    return ( (struct StrConcatIter_880) { .f_left = ( (  chars914 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars924 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_880   chars912 (    struct StrConcat_877  self1509 ) {
    return ( (  into_dash_iter913 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print876 (    struct StrConcat_877  s1701 ) {
    ( (  for_dash_each879 ) ( ( (  chars912 ) ( (  s1701 ) ) ) ,  (  printf_dash_char215 ) ) );
    return ( Unit_7_Unit );
}

static  enum MouseButton_735   undefined930 (  ) {
    enum MouseButton_735  temp931;
    return (  temp931 );
}

static  enum MouseButton_735   panic_prime_874 (    struct StrConcat_875  errmsg1715 ) {
    ( (  print876 ) ( ( ( StrConcat_877_StrConcat ) ( ( ( StrConcat_878_StrConcat ) ( ( (  from_dash_string231 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1715 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined930 ) ( ) );
}

static  enum MouseButton_735   btn_dash_to_dash_mouse_dash_button872 (    int64_t  btn3337 ) {
    return ( {  int32_t  dref3338 = ( (  i64_dash_i32873 ) ( (  btn3337 ) ) ) ;  dref3338 == 0 ? ( MouseButton_735_MouseLeft ) :  dref3338 == 1 ? ( MouseButton_735_MouseMiddle ) :  dref3338 == 2 ? ( MouseButton_735_MouseRight ) :  dref3338 == 64 ? ( MouseButton_735_ScrollUp ) :  dref3338 == 65 ? ( MouseButton_735_ScrollDown ) : ( (  panic_prime_874 ) ( ( ( StrConcat_875_StrConcat ) ( ( (  from_dash_string231 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3337 ) ) ) ) ) ; } );
}

static  struct Scanner_818   mk933 (    struct StrView_21  s3166 ) {
    return ( (struct Scanner_818) { .f_s = ( (  into_dash_iter620 ) ( (  s3166 ) ) ) } );
}

static  struct Maybe_732   parse_dash_csi812 (    struct Slice_813  seq3344 ) {
    if ( (  eq250 ( ( (  seq3344 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_732) { .tag = Maybe_732_None_t } );
    }
    char  last3345 = (  elem_dash_get814 ( (  seq3344 ) , (  op_dash_sub315 ( ( (  seq3344 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq797 ( (  elem_dash_get814 ( (  seq3344 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike798 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq797 ( (  last3345 ) , ( (  from_dash_charlike798 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq797 ( (  last3345 ) , ( (  from_dash_charlike798 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_818  temp819 = ( (  mk_dash_from_dash_str820 ) ( ( (  substr821 ) ( ( (  from_dash_ascii_dash_slice828 ) ( (  seq3344 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3344 ) .f_count ) ) ) ) );
        struct Scanner_818 *  sc3346 = ( &temp819 );
        struct Maybe_831  dref3347 = ( (  scan_dash_int832 ) ( (  sc3346 ) ) );
        if ( dref3347.tag == Maybe_831_None_t ) {
            return ( (struct Maybe_732) { .tag = Maybe_732_None_t } );
        }
        else {
            if ( dref3347.tag == Maybe_831_Just_t ) {
                ( (  next841 ) ( (  sc3346 ) ) );
                struct Maybe_831  dref3349 = ( (  scan_dash_int832 ) ( (  sc3346 ) ) );
                if ( dref3349.tag == Maybe_831_None_t ) {
                    return ( (struct Maybe_732) { .tag = Maybe_732_None_t } );
                }
                else {
                    if ( dref3349.tag == Maybe_831_Just_t ) {
                        ( (  next841 ) ( (  sc3346 ) ) );
                        struct Maybe_831  dref3351 = ( (  scan_dash_int832 ) ( (  sc3346 ) ) );
                        if ( dref3351.tag == Maybe_831_None_t ) {
                            return ( (struct Maybe_732) { .tag = Maybe_732_None_t } );
                        }
                        else {
                            if ( dref3351.tag == Maybe_831_Just_t ) {
                                return ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Mouse ) ( ( (struct MouseEvent_734) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button872 ) ( ( dref3347 .stuff .Maybe_831_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub823 ( ( (  i64_dash_i32873 ) ( ( dref3349 .stuff .Maybe_831_Just_s .field0 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) , .f_y = (  op_dash_sub823 ( ( (  i64_dash_i32873 ) ( ( dref3351 .stuff .Maybe_831_Just_s .field0 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) , .f_pressed = (  eq797 ( (  last3345 ) , ( (  from_dash_charlike798 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq250 ( ( (  seq3344 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq797 ( (  last3345 ) , ( (  from_dash_charlike798 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_Up_t } ) ) ) ) );
        }
        if ( (  eq797 ( (  last3345 ) , ( (  from_dash_charlike798 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_Down_t } ) ) ) ) );
        }
        if ( (  eq797 ( (  last3345 ) , ( (  from_dash_charlike798 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_Right_t } ) ) ) ) );
        }
        if ( (  eq797 ( (  last3345 ) , ( (  from_dash_charlike798 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_Left_t } ) ) ) ) );
        }
        if ( (  eq797 ( (  last3345 ) , ( (  from_dash_charlike798 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_Home_t } ) ) ) ) );
        }
        if ( (  eq797 ( (  last3345 ) , ( (  from_dash_charlike798 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_732) { .tag = Maybe_732_None_t } );
    }
    if ( (  eq797 ( (  last3345 ) , ( (  from_dash_charlike798 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_818  temp932 = ( (  mk933 ) ( ( (  from_dash_ascii_dash_slice828 ) ( (  seq3344 ) ) ) ) );
        struct Scanner_818 *  sc3353 = ( &temp932 );
        struct Maybe_831  dref3354 = ( (  scan_dash_int832 ) ( (  sc3353 ) ) );
        if ( dref3354.tag == Maybe_831_None_t ) {
            return ( (struct Maybe_732) { .tag = Maybe_732_None_t } );
        }
        else {
            if ( dref3354.tag == Maybe_831_Just_t ) {
                return ( {  int32_t  dref3356 = ( (  i64_dash_i32873 ) ( ( dref3354 .stuff .Maybe_831_Just_s .field0 ) ) ) ;  dref3356 == 1 ? ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_Home_t } ) ) ) ) ) :  dref3356 == 2 ? ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_Insert_t } ) ) ) ) ) :  dref3356 == 3 ? ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_Delete_t } ) ) ) ) ) :  dref3356 == 4 ? ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_End_t } ) ) ) ) ) :  dref3356 == 5 ? ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_PageUp_t } ) ) ) ) ) :  dref3356 == 6 ? ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_PageDown_t } ) ) ) ) ) :  dref3356 == 15 ? ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_F5_t } ) ) ) ) ) :  dref3356 == 17 ? ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_F6_t } ) ) ) ) ) :  dref3356 == 18 ? ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_F7_t } ) ) ) ) ) :  dref3356 == 19 ? ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_F8_t } ) ) ) ) ) :  dref3356 == 20 ? ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_F9_t } ) ) ) ) ) :  dref3356 == 21 ? ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_F10_t } ) ) ) ) ) :  dref3356 == 23 ? ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_F11_t } ) ) ) ) ) :  dref3356 == 24 ? ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_F12_t } ) ) ) ) ) : ( (struct Maybe_732) { .tag = Maybe_732_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_732) { .tag = Maybe_732_None_t } );
}

static  struct Slice_813   subslice934 (    struct Slice_813  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    char *  begin_dash_ptr1787 = ( (  offset_dash_ptr810 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp195 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp195 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_813) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub315 ( ( (  min342 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_813) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  char *   cast936 (    struct Array_800 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_813   as_dash_slice935 (    struct Array_800 *  arr2272 ) {
    return ( (struct Slice_813) { .f_ptr = ( (  cast936 ) ( (  arr2272 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_938 {
    enum {
        Maybe_938_None_t,
        Maybe_938_Just_t,
    } tag;
    union {
        struct {
            struct Key_168  field0;
        } Maybe_938_Just_s;
    } stuff;
};

static struct Maybe_938 Maybe_938_Just (  struct Key_168  field0 ) {
    return ( struct Maybe_938 ) { .tag = Maybe_938_Just_t, .stuff = { .Maybe_938_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_938   parse_dash_ss3939 (    char  c3341 ) {
    if ( (  eq797 ( (  c3341 ) , ( (  from_dash_charlike798 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_938_Just ) ( ( (struct Key_168) { .tag = Key_168_Up_t } ) ) );
    }
    if ( (  eq797 ( (  c3341 ) , ( (  from_dash_charlike798 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_938_Just ) ( ( (struct Key_168) { .tag = Key_168_Down_t } ) ) );
    }
    if ( (  eq797 ( (  c3341 ) , ( (  from_dash_charlike798 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_938_Just ) ( ( (struct Key_168) { .tag = Key_168_Right_t } ) ) );
    }
    if ( (  eq797 ( (  c3341 ) , ( (  from_dash_charlike798 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_938_Just ) ( ( (struct Key_168) { .tag = Key_168_Left_t } ) ) );
    }
    if ( (  eq797 ( (  c3341 ) , ( (  from_dash_charlike798 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_938_Just ) ( ( (struct Key_168) { .tag = Key_168_Home_t } ) ) );
    }
    if ( (  eq797 ( (  c3341 ) , ( (  from_dash_charlike798 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_938_Just ) ( ( (struct Key_168) { .tag = Key_168_End_t } ) ) );
    }
    if ( (  eq797 ( (  c3341 ) , ( (  from_dash_charlike798 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_938_Just ) ( ( (struct Key_168) { .tag = Key_168_F1_t } ) ) );
    }
    if ( (  eq797 ( (  c3341 ) , ( (  from_dash_charlike798 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_938_Just ) ( ( (struct Key_168) { .tag = Key_168_F2_t } ) ) );
    }
    if ( (  eq797 ( (  c3341 ) , ( (  from_dash_charlike798 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_938_Just ) ( ( (struct Key_168) { .tag = Key_168_F3_t } ) ) );
    }
    if ( (  eq797 ( (  c3341 ) , ( (  from_dash_charlike798 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_938_Just ) ( ( (struct Key_168) { .tag = Key_168_F4_t } ) ) );
    }
    return ( (struct Maybe_938) { .tag = Maybe_938_None_t } );
}

static  struct Maybe_732   read_dash_key744 (  ) {
    char  temp745 = ( (  undefined746 ) ( ) );
    char *  ch3358 = ( &temp745 );
    struct Maybe_748  dref3359 = ( (  read_dash_byte749 ) ( (  from_dash_integral48 ( 0 ) ) ) );
    if ( dref3359.tag == Maybe_748_None_t ) {
        return ( (struct Maybe_732) { .tag = Maybe_732_None_t } );
    }
    else {
        if ( dref3359.tag == Maybe_748_Just_t ) {
            (*  ch3358 ) = ( dref3359 .stuff .Maybe_748_Just_s .field0 );
        }
    }
    if ( (  eq219 ( ( (  ascii_dash_u8756 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral223 ( 13 ) ) ) ) ) {
        return ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_Enter_t } ) ) ) ) );
    }
    if ( (  eq219 ( ( (  ascii_dash_u8756 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral223 ( 127 ) ) ) ) ) {
        return ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp236 ( ( (  ascii_dash_u8756 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral223 ( 27 ) ) ) == 0 ) && ( !  eq219 ( ( (  ascii_dash_u8756 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral223 ( 9 ) ) ) ) ) ) {
        char  letter3361 = ( (  u8_dash_ascii757 ) ( ( (  u32_dash_u8229 ) ( ( (  u32_dash_or568 ) ( ( (  u8_dash_u32758 ) ( ( (  ascii_dash_u8756 ) ( ( * (  ch3358 ) ) ) ) ) ) ,  ( (  from_dash_hex762 ) ( ( (  from_dash_string231 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( ( Key_168_Ctrl ) ( (  letter3361 ) ) ) ) ) ) );
    }
    if ( ( !  eq219 ( ( (  ascii_dash_u8756 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral223 ( 27 ) ) ) ) ) {
        if ( (  cmp236 ( ( (  ascii_dash_u8756 ) ( ( * (  ch3358 ) ) ) ) , (  from_dash_integral223 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key744 ) ( ) );
        } else {
            return ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( ( Key_168_Char ) ( ( * (  ch3358 ) ) ) ) ) ) ) );
        }
    }
    char  temp796 = ( (  undefined746 ) ( ) );
    char *  ch23362 = ( &temp796 );
    struct Maybe_748  dref3363 = ( (  read_dash_byte749 ) ( (  from_dash_integral48 ( 50 ) ) ) );
    if ( dref3363.tag == Maybe_748_None_t ) {
        return ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3363.tag == Maybe_748_Just_t ) {
            (*  ch23362 ) = ( dref3363 .stuff .Maybe_748_Just_s .field0 );
        }
    }
    if ( (  eq797 ( ( * (  ch23362 ) ) , ( (  from_dash_charlike798 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_800  temp801 = ( ( (  zeroed802 ) ( ) ) );
        struct Array_800 *  seq3365 = ( &temp801 );
        int32_t  slen3366 = (  from_dash_integral48 ( 0 ) );
        while ( (  cmp328 ( (  slen3366 ) , (  from_dash_integral48 ( 31 ) ) ) == 0 ) ) {
            char  temp806 = ( (  undefined746 ) ( ) );
            char *  sc3367 = ( &temp806 );
            struct Maybe_748  dref3368 = ( (  read_dash_byte749 ) ( (  from_dash_integral48 ( 50 ) ) ) );
            if ( dref3368.tag == Maybe_748_None_t ) {
                break;
            }
            else {
                if ( dref3368.tag == Maybe_748_Just_t ) {
                    (*  sc3367 ) = ( dref3368 .stuff .Maybe_748_Just_s .field0 );
                }
            }
            ( (  set807 ) ( (  seq3365 ) ,  ( (  i32_dash_size273 ) ( (  slen3366 ) ) ) ,  ( * (  sc3367 ) ) ) );
            slen3366 = (  op_dash_add285 ( (  slen3366 ) , (  from_dash_integral48 ( 1 ) ) ) );
            if ( ( (  cmp236 ( ( (  ascii_dash_u8756 ) ( ( * (  sc3367 ) ) ) ) , (  from_dash_integral223 ( 64 ) ) ) != 0 ) && (  cmp236 ( ( (  ascii_dash_u8756 ) ( ( * (  sc3367 ) ) ) ) , (  from_dash_integral223 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi812 ) ( ( (  subslice934 ) ( ( (  as_dash_slice935 ) ( (  seq3365 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size273 ) ( (  slen3366 ) ) ) ) ) ) );
    }
    if ( (  eq797 ( ( * (  ch23362 ) ) , ( (  from_dash_charlike798 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp937 = ( (  undefined746 ) ( ) );
        char *  sc3370 = ( &temp937 );
        struct Maybe_748  dref3371 = ( (  read_dash_byte749 ) ( (  from_dash_integral48 ( 50 ) ) ) );
        if ( dref3371.tag == Maybe_748_None_t ) {
            return ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3371.tag == Maybe_748_Just_t ) {
                (*  sc3370 ) = ( dref3371 .stuff .Maybe_748_Just_s .field0 );
            }
        }
        struct Maybe_938  dref3373 = ( (  parse_dash_ss3939 ) ( ( * (  sc3370 ) ) ) );
        if ( dref3373.tag == Maybe_938_None_t ) {
            return ( (struct Maybe_732) { .tag = Maybe_732_None_t } );
        }
        else {
            if ( dref3373.tag == Maybe_938_Just_t ) {
                return ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( dref3373 .stuff .Maybe_938_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_732_Just ) ( ( ( InputEvent_733_Key ) ( ( (struct Key_168) { .tag = Key_168_Escape_t } ) ) ) ) );
}

static  struct Maybe_732   read_dash_event741 (   struct env71* env ,    struct Tui_73 *  tui3383 ) {
    struct envunion72  temp742 = ( (struct envunion72){ .fun = (  bool  (*) (  struct env70*  ,    struct Tui_73 *  ) )update_dash_dimensions743 , .env =  env->envinst70 } );
    ( temp742.fun ( &temp742.env ,  (  tui3383 ) ) );
    struct Maybe_732  dref3384 = ( (  read_dash_key744 ) ( ) );
    if ( dref3384.tag == Maybe_732_None_t ) {
        return ( (struct Maybe_732) { .tag = Maybe_732_None_t } );
    }
    else {
        if ( dref3384.tag == Maybe_732_Just_t ) {
            (*  tui3383 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_732_Just ) ( ( dref3384 .stuff .Maybe_732_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_732   lam739 (   struct env730* env ) {
    struct envunion731  temp740 = ( (struct envunion731){ .fun = (  struct Maybe_732  (*) (  struct env71*  ,    struct Tui_73 *  ) )read_dash_event741 , .env =  env->envinst71 } );
    return ( temp740.fun ( &temp740.env ,  ( env->tui4312 ) ) );
}

static  struct Maybe_732   next941 (    struct FunIter_729 *  self1031 ) {
    if ( ( ( * (  self1031 ) ) .f_finished ) ) {
        return ( (struct Maybe_732) { .tag = Maybe_732_None_t } );
    }
    struct envunion736  temp942 = ( ( * (  self1031 ) ) .f_fun );
    struct Maybe_732  dref1032 = ( temp942.fun ( &temp942.env ) );
    if ( dref1032.tag == Maybe_732_Just_t ) {
        return ( ( Maybe_732_Just ) ( ( dref1032 .stuff .Maybe_732_Just_s .field0 ) ) );
    }
    else {
        if ( dref1032.tag == Maybe_732_None_t ) {
            (*  self1031 ) .f_finished = ( true );
            return ( (struct Maybe_732) { .tag = Maybe_732_None_t } );
        }
    }
}

struct env945 {
    struct Editor_147 *  ed4194;
    ;
};

struct envunion946 {
    enum Unit_7  (*fun) (  struct env945*  ,    struct StrView_21  );
    struct env945 env;
};

static  enum Unit_7   if_dash_just944 (    struct Maybe_148  x1291 ,   struct envunion946  fun1293 ) {
    struct Maybe_148  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_148_Just_t ) {
        struct envunion946  temp947 = (  fun1293 );
        ( temp947.fun ( &temp947.env ,  ( dref1294 .stuff .Maybe_148_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_148_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   free949 (    struct StrView_21  s2167 ,    enum CAllocator_9  al2169 ) {
    ( (  free383 ) ( (  al2169 ) ,  ( (struct Slice_12) { .f_ptr = ( ( (  s2167 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam948 (   struct env945* env ,    struct StrView_21  msg4196 ) {
    ( (  free949 ) ( (  msg4196 ) ,  ( ( * ( env->ed4194 ) ) .f_al ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   reset_dash_msg943 (    struct Editor_147 *  ed4194 ) {
    struct env945 envinst945 = {
        .ed4194 =  ed4194 ,
    };
    ( (  if_dash_just944 ) ( ( ( * (  ed4194 ) ) .f_msg ) ,  ( (struct envunion946){ .fun = (  enum Unit_7  (*) (  struct env945*  ,    struct StrView_21  ) )lam948 , .env =  envinst945 } ) ) );
    (*  ed4194 ) .f_msg = ( (struct Maybe_148) { .tag = Maybe_148_None_t } );
    return ( Unit_7_Unit );
}

struct envunion951 {
    enum Unit_7  (*fun) (  struct env161*  ,    struct Editor_147 *  ,    struct Key_168  );
    struct env161 env;
};

enum CursorMovement_957 {
    CursorMovement_957_NoChanges,
    CursorMovement_957_UpdateVI,
    CursorMovement_957_OverrideSelect,
};

struct Tuple2_959 {
    enum CursorMovement_957  field0;
    enum CursorMovement_957  field1;
};

static struct Tuple2_959 Tuple2_959_Tuple2 (  enum CursorMovement_957  field0 ,  enum CursorMovement_957  field1 ) {
    return ( struct Tuple2_959 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq958 (    enum CursorMovement_957  l3942 ,    enum CursorMovement_957  r3944 ) {
    return ( {  struct Tuple2_959  dref3945 = ( ( Tuple2_959_Tuple2 ) ( (  l3942 ) ,  (  r3944 ) ) ) ;  dref3945 .field0 == CursorMovement_957_NoChanges &&  dref3945 .field1 == CursorMovement_957_NoChanges ? ( true ) :  dref3945 .field0 == CursorMovement_957_UpdateVI &&  dref3945 .field1 == CursorMovement_957_UpdateVI ? ( true ) :  dref3945 .field0 == CursorMovement_957_OverrideSelect &&  dref3945 .field1 == CursorMovement_957_OverrideSelect ? ( true ) : ( false ) ; } );
}

static  struct StrView_21   from_dash_bytes963 (    struct Slice_12  sl2152 ) {
    return ( (struct StrView_21) { .f_contents = (  sl2152 ) } );
}

static  struct StrView_21   line962 (    struct TextBuf_88 *  self3629 ,    int32_t  li3631 ) {
    return ( (  from_dash_bytes963 ) ( ( (  to_dash_slice343 ) ( ( (  get336 ) ( ( & ( ( * (  self3629 ) ) .f_buf ) ) ,  ( (  i32_dash_size273 ) ( (  li3631 ) ) ) ) ) ) ) ) );
}

static  int32_t   maybe966 (    struct Maybe_148  x1282 ,    int32_t (*  fun1284 )(    struct StrView_21  ) ,    int32_t  default1286 ) {
    return ( {  struct Maybe_148  dref1287 = (  x1282 ) ; dref1287.tag == Maybe_148_Just_t ? ( (  fun1284 ) ( ( dref1287 .stuff .Maybe_148_Just_s .field0 ) ) ) : (  default1286 ) ; } );
}

static  struct Maybe_148   char_dash_replacement967 (    struct Char_57  c3835 ) {
    if ( (  eq414 ( (  c3835 ) , ( (  from_dash_charlike232 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_148_Just ) ( ( (  from_dash_string231 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_148) { .tag = Maybe_148_None_t } );
    }
}

static  size_t   reduce970 (    struct StrViewIter_614  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_57  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct StrViewIter_614  it1099 = ( (  into_dash_iter616 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_617  dref1100 = ( (  next618 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_617_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_617_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_617_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp971 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp971);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp972;
    return (  temp972 );
}

static  size_t   lam973 (    struct Char_57  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add243 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count969 (    struct StrViewIter_614  it1104 ) {
    return ( (  reduce970 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam973 ) ) );
}

static  int32_t   lam968 (    struct StrView_21  s3840 ) {
    return ( (  size_dash_i32207 ) ( ( (  count969 ) ( ( (  chars619 ) ( (  s3840 ) ) ) ) ) ) );
}

static  int32_t   max975 (    int32_t  l1315 ,    int32_t  r1317 ) {
    if ( (  cmp328 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  void *   cast_dash_ptr981 (    wchar_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of982 (    wchar_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  wchar_t   zeroed979 (  ) {
    wchar_t  temp980;
    wchar_t  x570 = (  temp980 );
    ( ( memset ) ( ( (  cast_dash_ptr981 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of982 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr983 (    uint8_t *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  size_t   cast984 (    int64_t  x356 ) {
    return ( (size_t ) (  x356 ) );
}

struct TypeSize_987 {
    size_t  f_size;
};

static  struct TypeSize_987   get_dash_typesize986 (  ) {
    wchar_t  temp988;
    return ( (struct TypeSize_987) { .f_size = ( sizeof( ( (  temp988 ) ) ) ) } );
}

static  wchar_t   cast990 (    uint32_t  x356 ) {
    return ( (wchar_t ) (  x356 ) );
}

static  wchar_t   to_dash_c_dash_wchar977 (    struct Char_57  c750 ) {
    struct CharDestructured_216  dref751 = ( (  destructure218 ) ( (  c750 ) ) );
    if ( dref751.tag == CharDestructured_216_Ref_t ) {
        wchar_t  temp978 = ( (  zeroed979 ) ( ) );
        wchar_t *  wcp753 = ( &temp978 );
        size_t  num_dash_chars754 = ( ( mbstowcs ) ( (  wcp753 ) ,  ( (  cast_dash_ptr983 ) ( ( ( dref751 .stuff .CharDestructured_216_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq250 ( (  num_dash_chars754 ) , ( ( (  cast984 ) ( ( (  op_dash_neg921 ( (  from_dash_integral314 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp985 = ( (  from_dash_string49 ) ( ( "could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp985);
            exit ( 1 );
            ( Unit_7_Unit );
        }
        return ( * (  wcp753 ) );
    }
    else {
        if ( dref751.tag == CharDestructured_216_Scalar_t ) {
            if ( ( ! (  eq250 ( ( (  size_dash_of656 ) ( ( ( dref751 .stuff .CharDestructured_216_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize986 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp989 = ( (  from_dash_string49 ) ( ( "Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp989);
                exit ( 1 );
                ( Unit_7_Unit );
            }
            return ( (  cast990 ) ( ( ( dref751 .stuff .CharDestructured_216_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth976 (    struct Char_57  c2572 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar977 ) ( (  c2572 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth974 (    struct Char_57  c3428 ) {
    return ( (  max975 ) ( ( (  wcwidth976 ) ( (  c3428 ) ) ) ,  (  from_dash_integral48 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width965 (    struct Char_57  c3838 ) {
    return ( (  maybe966 ) ( ( (  char_dash_replacement967 ) ( (  c3838 ) ) ) ,  (  lam968 ) ,  ( (  rendered_dash_wcwidth974 ) ( (  c3838 ) ) ) ) );
}

static  int32_t   pos_dash_vi960 (    struct TextBuf_88 *  self3854 ,    struct Pos_20  pos3856 ) {
    int32_t  bi3857 = ( (  from_dash_integral48 ( 0 ) ) );
    int32_t  vi3858 = (  from_dash_integral48 ( 0 ) );
    struct StrViewIter_614  temp961 =  into_dash_iter616 ( ( (  chars619 ) ( ( (  line962 ) ( (  self3854 ) ,  ( (  pos3856 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_617  __cond964 =  next618 (&temp961);
        if (  __cond964 .tag == 0 ) {
            break;
        }
        struct Char_57  c3860 =  __cond964 .stuff .Maybe_617_Just_s .field0;
        bi3857 = (  op_dash_add285 ( (  bi3857 ) , ( (  size_dash_i32207 ) ( ( (  c3860 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp328 ( ( (  pos3856 ) .f_bi ) , (  bi3857 ) ) == 0 ) ) {
            break;
        }
        vi3858 = (  op_dash_add285 ( (  vi3858 ) , ( (  char_dash_screen_dash_width965 ) ( (  c3860 ) ) ) ) );
    }
    return (  vi3858 );
}

struct Tuple2_993 {
    enum Mode_128  field0;
    enum Mode_128  field1;
};

static struct Tuple2_993 Tuple2_993_Tuple2 (  enum Mode_128  field0 ,  enum Mode_128  field1 ) {
    return ( struct Tuple2_993 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq992 (    enum Mode_128  l3818 ,    enum Mode_128  r3820 ) {
    return ( {  struct Tuple2_993  dref3821 = ( ( Tuple2_993_Tuple2 ) ( (  l3818 ) ,  (  r3820 ) ) ) ;  dref3821 .field0 == Mode_128_Normal &&  dref3821 .field1 == Mode_128_Normal ? ( true ) :  dref3821 .field0 == Mode_128_Insert &&  dref3821 .field1 == Mode_128_Insert ? ( true ) :  dref3821 .field0 == Mode_128_Select &&  dref3821 .field1 == Mode_128_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_7   set_dash_sel991 (    struct Pane_127 *  self3931 ,    struct Maybe_28  sel3933 ) {
    if ( ( !  eq992 ( ( ( * (  self3931 ) ) .f_mode ) , ( Mode_128_Select ) ) ) ) {
        (*  self3931 ) .f_sel = (  sel3933 );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_cursors956 (    struct Pane_127 *  self3948 ,    struct Pos_20  cur3950 ,    struct Maybe_28  sel3952 ,    enum CursorMovement_957  cursor_dash_movement_dash_type3954 ) {
    if ( ( !  eq958 ( (  cursor_dash_movement_dash_type3954 ) , ( CursorMovement_957_NoChanges ) ) ) ) {
        (*  self3948 ) .f_vi = ( (  pos_dash_vi960 ) ( ( ( * (  self3948 ) ) .f_buf ) ,  (  cur3950 ) ) );
    }
    (*  self3948 ) .f_cursor = (  cur3950 );
    if ( ( !  eq958 ( (  cursor_dash_movement_dash_type3954 ) , ( CursorMovement_957_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel991 ) ( (  self3948 ) ,  (  sel3952 ) ) );
    } else {
        (*  self3948 ) .f_sel = (  sel3952 );
    }
    return ( Unit_7_Unit );
}

static  size_t   num_dash_bytes995 (    struct StrView_21  self2195 ) {
    return ( ( (  self2195 ) .f_contents ) .f_count );
}

static  size_t   clamp996 (    size_t  x1352 ,    size_t  mn1354 ,    size_t  mx1356 ) {
    if ( (  cmp195 ( (  x1352 ) , (  mn1354 ) ) == 0 ) ) {
        return (  mn1354 );
    } else {
        if ( (  cmp195 ( (  x1352 ) , (  mx1356 ) ) == 2 ) ) {
            return (  mx1356 );
        } else {
            return (  x1352 );
        }
    }
}

static  size_t   sync_dash_char998 (    uint8_t *  p692 ) {
    size_t  i693 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb694 = ( * ( (uint8_t * ) ( ( (void*) (  p692 ) ) + (  op_dash_neg921 ( ( (  size_dash_i64272 ) ( (  i693 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp236 ( (  pb694 ) , (  from_dash_integral223 ( 128 ) ) ) != 0 ) && (  cmp236 ( (  pb694 ) , (  op_dash_add793 ( (  from_dash_integral223 ( 128 ) ) , (  from_dash_integral223 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i693 );
        }
        i693 = (  op_dash_add243 ( (  i693 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char997 (    uint8_t *  p697 ) {
    return (  op_dash_add243 ( ( (  sync_dash_char998 ) ( ( (  offset_dash_ptr340 ) ( (  p697 ) ,  (  op_dash_neg921 ( (  from_dash_integral314 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_20   left_dash_pos994 (    struct TextBuf_88 *  self3650 ,    struct Pos_20  pos3652 ) {
    if ( (  eq330 ( (  pos3652 ) , ( (  mk309 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk309 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    }
    if ( (  eq331 ( ( (  pos3652 ) .f_bi ) , (  from_dash_integral48 ( 0 ) ) ) ) ) {
        ( (  assert488 ) ( (  cmp328 ( ( (  pos3652 ) .f_line ) , (  from_dash_integral48 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string231 ) ( ( "previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk309 ) ( (  op_dash_sub823 ( ( (  pos3652 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  ( (  size_dash_i32207 ) ( ( (  num_dash_bytes995 ) ( ( (  line962 ) ( (  self3650 ) ,  (  op_dash_sub823 ( ( (  pos3652 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_21  line3653 = ( (  line962 ) ( (  self3650 ) ,  ( (  pos3652 ) .f_line ) ) );
    size_t  pos_dash_bi3654 = ( (  clamp996 ) ( ( (  i32_dash_size273 ) ( ( (  pos3652 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes995 ) ( (  line3653 ) ) ) ) );
    size_t  off3655 = ( (  previous_dash_char997 ) ( ( (  offset_dash_ptr340 ) ( ( ( (  line3653 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  pos_dash_bi3654 ) ) ) ) ) ) );
    return ( (  mk309 ) ( ( (  pos3652 ) .f_line ) ,  ( (  size_dash_i32207 ) ( (  op_dash_sub315 ( (  pos_dash_bi3654 ) , (  off3655 ) ) ) ) ) ) );
}

static  enum Unit_7   move_dash_left955 (    struct Pane_127 *  self3960 ) {
    ( (  set_dash_cursors956 ) ( (  self3960 ) ,  ( (  left_dash_pos994 ) ( ( ( * (  self3960 ) ) .f_buf ) ,  ( ( * (  self3960 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_957_UpdateVI ) ) );
    return ( Unit_7_Unit );
}

static  struct Pane_127 *   pane999 (    struct Editor_147 *  ed4184 ) {
    return ( & ( ( * (  ed4184 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines1002 (    struct TextBuf_88 *  self3634 ) {
    return ( (  size_dash_i32207 ) ( ( (  size332 ) ( ( & ( ( * (  self3634 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_20   right_dash_pos1001 (    struct TextBuf_88 *  self3642 ,    struct Pos_20  pos3644 ) {
    if ( (  cmp328 ( ( (  pos3644 ) .f_line ) , ( (  num_dash_lines1002 ) ( (  self3642 ) ) ) ) != 0 ) ) {
        return ( (  mk309 ) ( ( (  num_dash_lines1002 ) ( (  self3642 ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    }
    struct StrView_21  line3645 = ( (  line962 ) ( (  self3642 ) ,  ( (  pos3644 ) .f_line ) ) );
    int64_t  bi3646 = ( (  i32_dash_i64871 ) ( ( (  pos3644 ) .f_bi ) ) );
    if ( (  cmp920 ( (  bi3646 ) , ( (  size_dash_i64272 ) ( ( (  num_dash_bytes995 ) ( (  line3645 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp328 ( (  op_dash_add285 ( ( (  pos3644 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) , ( (  num_dash_lines1002 ) ( (  self3642 ) ) ) ) != 0 ) ) {
            return ( (  mk309 ) ( ( (  pos3644 ) .f_line ) ,  ( (  size_dash_i32207 ) ( ( (  num_dash_bytes995 ) ( (  line3645 ) ) ) ) ) ) );
        }
        return ( (  mk309 ) ( (  op_dash_add285 ( ( (  pos3644 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    }
    int32_t  off3647 = ( (  size_dash_i32207 ) ( ( (  next_dash_char235 ) ( ( (  offset_dash_ptr340 ) ( ( ( (  line3645 ) .f_contents ) .f_ptr ) ,  (  bi3646 ) ) ) ) ) ) );
    return ( (  mk309 ) ( ( (  pos3644 ) .f_line ) ,  (  op_dash_add285 ( ( (  pos3644 ) .f_bi ) , (  off3647 ) ) ) ) );
}

static  enum Unit_7   move_dash_right1000 (    struct Pane_127 *  self3957 ) {
    ( (  set_dash_cursors956 ) ( (  self3957 ) ,  ( (  right_dash_pos1001 ) ( ( ( * (  self3957 ) ) .f_buf ) ,  ( ( * (  self3957 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_957_UpdateVI ) ) );
    return ( Unit_7_Unit );
}

static  int32_t   vi_dash_bi1004 (    struct TextBuf_88 *  self3843 ,    int32_t  ln3845 ,    int32_t  vx3847 ) {
    int32_t  bi3848 = ( (  from_dash_integral48 ( 0 ) ) );
    int32_t  vi3849 = (  from_dash_integral48 ( 0 ) );
    struct StrViewIter_614  temp1005 =  into_dash_iter616 ( ( (  chars619 ) ( ( (  line962 ) ( (  self3843 ) ,  (  ln3845 ) ) ) ) ) );
    while (true) {
        struct Maybe_617  __cond1006 =  next618 (&temp1005);
        if (  __cond1006 .tag == 0 ) {
            break;
        }
        struct Char_57  c3851 =  __cond1006 .stuff .Maybe_617_Just_s .field0;
        vi3849 = (  op_dash_add285 ( (  vi3849 ) , ( (  char_dash_screen_dash_width965 ) ( (  c3851 ) ) ) ) );
        if ( (  cmp328 ( (  vx3847 ) , (  vi3849 ) ) == 0 ) ) {
            break;
        }
        bi3848 = (  op_dash_add285 ( (  bi3848 ) , ( (  size_dash_i32207 ) ( ( (  c3851 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi3848 );
}

static  enum Unit_7   move_dash_down1003 (    struct Pane_127 *  self3963 ,    int32_t  amnt3965 ) {
    struct Pos_20  cur3966 = ( ( * (  self3963 ) ) .f_cursor );
    int32_t  nu_dash_line3967 = ( (  min480 ) ( (  op_dash_add285 ( ( (  cur3966 ) .f_line ) , (  amnt3965 ) ) ) ,  ( (  num_dash_lines1002 ) ( ( ( * (  self3963 ) ) .f_buf ) ) ) ) );
    int32_t  vci3968 = ( ( * (  self3963 ) ) .f_vi );
    int32_t  bi3969 = ( (  vi_dash_bi1004 ) ( ( ( * (  self3963 ) ) .f_buf ) ,  (  nu_dash_line3967 ) ,  (  vci3968 ) ) );
    ( (  set_dash_cursors956 ) ( (  self3963 ) ,  ( (struct Pos_20) { .f_line = (  nu_dash_line3967 ) , .f_bi = (  bi3969 ) } ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_957_NoChanges ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   move_dash_up1007 (    struct Pane_127 *  self3972 ,    int32_t  amnt3974 ) {
    struct Pos_20  cur3975 = ( ( * (  self3972 ) ) .f_cursor );
    int32_t  nu_dash_line3976 = ( (  max975 ) ( (  op_dash_sub823 ( ( (  cur3975 ) .f_line ) , (  amnt3974 ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    int32_t  vci3977 = ( ( * (  self3972 ) ) .f_vi );
    int32_t  bi3978 = ( (  vi_dash_bi1004 ) ( ( ( * (  self3972 ) ) .f_buf ) ,  (  nu_dash_line3976 ) ,  (  vci3977 ) ) );
    ( (  set_dash_cursors956 ) ( (  self3972 ) ,  ( (struct Pos_20) { .f_line = (  nu_dash_line3976 ) , .f_bi = (  bi3978 ) } ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_957_NoChanges ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   flush_dash_insert_dash_action1009 (    struct TextBuf_88 *  self3715 ) {
    (*  self3715 ) .f_actions .f_input_dash_changeset = ( ChangesetInputType_90_NoChangeset );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_mode1008 (    struct Pane_127 *  self3936 ,    enum Mode_128  mode3938 ) {
    if ( (  eq992 ( (  mode3938 ) , ( Mode_128_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action1009 ) ( ( ( * (  self3936 ) ) .f_buf ) ) );
    }
    (*  self3936 ) .f_mode = (  mode3938 );
    return ( Unit_7_Unit );
}

struct TakeWhile_1014 {
    struct StrViewIter_614  f_it;
    bool (*  f_pred )(    struct Char_57  );
};

struct Map_1013 {
    struct TakeWhile_1014  field0;
    size_t (*  field1 )(    struct Char_57  );
};

static struct Map_1013 Map_1013_Map (  struct TakeWhile_1014  field0 ,  size_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1013 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1013   into_dash_iter1016 (    struct Map_1013  self796 ) {
    return (  self796 );
}

struct Maybe_1017 {
    enum {
        Maybe_1017_None_t,
        Maybe_1017_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_1017_Just_s;
    } stuff;
};

static struct Maybe_1017 Maybe_1017_Just (  size_t  field0 ) {
    return ( struct Maybe_1017 ) { .tag = Maybe_1017_Just_t, .stuff = { .Maybe_1017_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_617   next1019 (    struct TakeWhile_1014 *  self964 ) {
    struct Maybe_617  mx965 = ( (  next618 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_617  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_617_None_t ) {
        return ( (struct Maybe_617) { .tag = Maybe_617_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_617_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_617_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_617_Just ) ( ( dref966 .stuff .Maybe_617_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_617) { .tag = Maybe_617_None_t } );
            }
        }
    }
}

static  struct Maybe_1017   next1018 (    struct Map_1013 *  dref798 ) {
    struct Maybe_617  dref801 = ( (  next1019 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_617_None_t ) {
        return ( (struct Maybe_1017) { .tag = Maybe_1017_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_617_Just_t ) {
            return ( ( Maybe_1017_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_617_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1015 (    struct Map_1013  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1013  it1099 = ( (  into_dash_iter1016 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1017  dref1100 = ( (  next1018 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1017_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1017_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1017_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1020 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1020);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1021;
    return (  temp1021 );
}

static  size_t   lam1022 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add243 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1012 (    struct Map_1013  it1110 ) {
    return ( (  reduce1015 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1022 ) ) );
}

static  struct TakeWhile_1014   into_dash_iter1024 (    struct TakeWhile_1014  self961 ) {
    return (  self961 );
}

static  struct Map_1013   map1023 (    struct TakeWhile_1014  iterable805 ,    size_t (*  fun807 )(    struct Char_57  ) ) {
    struct TakeWhile_1014  it808 = ( (  into_dash_iter1024 ) ( (  iterable805 ) ) );
    return ( ( Map_1013_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1014   take_dash_while1025 (    struct StrView_21  it970 ,    bool (*  pred972 )(    struct Char_57  ) ) {
    return ( (struct TakeWhile_1014) { .f_it = ( (  into_dash_iter620 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  bool   lam1026 (    struct Char_57  c4026 ) {
    return (  eq414 ( (  c4026 ) , ( (  from_dash_charlike232 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
}

static  size_t   lam1027 (    struct Char_57  c4028 ) {
    return ( (  c4028 ) .f_num_dash_bytes );
}

static  int32_t   indent_dash_at_dash_line1011 (    struct Pane_127 *  pane4022 ,    int32_t  line4024 ) {
    return ( (  size_dash_i32207 ) ( ( (  sum1012 ) ( ( (  map1023 ) ( ( (  take_dash_while1025 ) ( ( (  line962 ) ( ( ( * (  pane4022 ) ) .f_buf ) ,  (  line4024 ) ) ) ,  (  lam1026 ) ) ) ,  (  lam1027 ) ) ) ) ) ) );
}

static  enum Unit_7   move_dash_to_dash_beginning_dash_indented1010 (    struct Pane_127 *  self4041 ) {
    struct Pos_20  cur4042 = ( ( * (  self4041 ) ) .f_cursor );
    int32_t  indent4043 = ( (  indent_dash_at_dash_line1011 ) ( (  self4041 ) ,  ( (  cur4042 ) .f_line ) ) );
    struct Pos_20  temp1028 = (  cur4042 );
    temp1028 .  f_bi = (  indent4043 );
    ( (  set_dash_cursors956 ) ( (  self4041 ) ,  ( temp1028 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_957_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   move_dash_to_dash_end1029 (    struct Pane_127 *  self4046 ) {
    struct Pos_20  cur4047 = ( ( * (  self4046 ) ) .f_cursor );
    struct Pos_20  temp1030 = (  cur4047 );
    temp1030 .  f_bi = ( (  size_dash_i32207 ) ( ( (  num_dash_bytes995 ) ( ( (  line962 ) ( ( ( * (  self4046 ) ) .f_buf ) ,  ( (  cur4047 ) .f_line ) ) ) ) ) ) );
    ( (  set_dash_cursors956 ) ( (  self4046 ) ,  ( temp1030 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_957_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

struct SliceIter_1038 {
    struct Slice_25  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1037 {
    struct SliceIter_1038  field0;
    size_t  field1;
};

static struct Drop_1037 Drop_1037_Drop (  struct SliceIter_1038  field0 ,  size_t  field1 ) {
    return ( struct Drop_1037 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1037   into_dash_iter1039 (    struct Drop_1037  self845 ) {
    return (  self845 );
}

static  struct SliceIter_1038   into_dash_iter1042 (    struct Slice_25  self1822 ) {
    return ( (struct SliceIter_1038) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Changeset_26 *   offset_dash_ptr1044 (    struct Changeset_26 *  x338 ,    int64_t  count340 ) {
    struct Changeset_26  temp1045;
    return ( (struct Changeset_26 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul241 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1045 ) ) ) ) ) ) ) ) );
}

static  struct Slice_25   subslice1043 (    struct Slice_25  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Changeset_26 *  begin_dash_ptr1787 = ( (  offset_dash_ptr1044 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp195 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp195 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_25) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub315 ( ( (  min342 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_25) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_1038   into_dash_iter1041 (    struct List_24  self2028 ) {
    return ( (  into_dash_iter1042 ) ( ( (  subslice1043 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

static  struct Drop_1037   drop1040 (    struct List_24  iterable852 ,    size_t  i854 ) {
    struct SliceIter_1038  it855 = ( (  into_dash_iter1041 ) ( (  iterable852 ) ) );
    return ( ( Drop_1037_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

struct Maybe_1047 {
    enum {
        Maybe_1047_None_t,
        Maybe_1047_Just_t,
    } tag;
    union {
        struct {
            struct Changeset_26  field0;
        } Maybe_1047_Just_s;
    } stuff;
};

static struct Maybe_1047 Maybe_1047_Just (  struct Changeset_26  field0 ) {
    return ( struct Maybe_1047 ) { .tag = Maybe_1047_Just_t, .stuff = { .Maybe_1047_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1047   next1049 (    struct SliceIter_1038 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp195 ( (  op_dash_add243 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1047) { .tag = Maybe_1047_None_t } );
    }
    struct Changeset_26  elem1830 = ( * ( (  offset_dash_ptr1044 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add243 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1047_Just ) ( (  elem1830 ) ) );
}

static  struct Maybe_1047   next1048 (    struct Drop_1037 *  dref847 ) {
    while ( (  cmp195 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1049 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub315 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1049 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

struct env1052 {
    enum CAllocator_9  al3600;
    ;
};

struct envunion1053 {
    enum Unit_7  (*fun) (  struct env1052*  ,    struct Action_19  );
    struct env1052 env;
};

struct SliceIter_1054 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1054   into_dash_iter1057 (    struct Slice_18  self1822 ) {
    return ( (struct SliceIter_1054) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_19 *   offset_dash_ptr1059 (    struct Action_19 *  x338 ,    int64_t  count340 ) {
    struct Action_19  temp1060;
    return ( (struct Action_19 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul241 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1060 ) ) ) ) ) ) ) ) );
}

static  struct Slice_18   subslice1058 (    struct Slice_18  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Action_19 *  begin_dash_ptr1787 = ( (  offset_dash_ptr1059 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp195 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp195 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub315 ( ( (  min342 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_1054   into_dash_iter1056 (    struct List_17  self2028 ) {
    return ( (  into_dash_iter1057 ) ( ( (  subslice1058 ) ( ( (  self2028 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2028 ) .f_count ) ) ) ) );
}

struct Maybe_1061 {
    enum {
        Maybe_1061_None_t,
        Maybe_1061_Just_t,
    } tag;
    union {
        struct {
            struct Action_19  field0;
        } Maybe_1061_Just_s;
    } stuff;
};

static struct Maybe_1061 Maybe_1061_Just (  struct Action_19  field0 ) {
    return ( struct Maybe_1061 ) { .tag = Maybe_1061_Just_t, .stuff = { .Maybe_1061_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1061   next1062 (    struct SliceIter_1054 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp195 ( (  op_dash_add243 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1061) { .tag = Maybe_1061_None_t } );
    }
    struct Action_19  elem1830 = ( * ( (  offset_dash_ptr1059 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add243 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1061_Just ) ( (  elem1830 ) ) );
}

static  enum Unit_7   for_dash_each1051 (    struct List_17  iterable1074 ,   struct envunion1053  fun1076 ) {
    struct SliceIter_1054  temp1055 = ( (  into_dash_iter1056 ) ( (  iterable1074 ) ) );
    struct SliceIter_1054 *  it1077 = ( &temp1055 );
    while ( ( true ) ) {
        struct Maybe_1061  dref1078 = ( (  next1062 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1061_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1061_Just_t ) {
                struct envunion1053  temp1063 = (  fun1076 );
                ( temp1063.fun ( &temp1063.env ,  ( dref1078 .stuff .Maybe_1061_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_action1065 (    struct Action_19  action3593 ,    enum CAllocator_9  al3595 ) {
    ( (  free949 ) ( ( (  action3593 ) .f_fwd ) ,  (  al3595 ) ) );
    ( (  free949 ) ( ( (  action3593 ) .f_bwd ) ,  (  al3595 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1064 (   struct env1052* env ,    struct Action_19  a3602 ) {
    return ( (  free_dash_action1065 ) ( (  a3602 ) ,  ( env->al3600 ) ) );
}

static  void *   cast_dash_ptr1068 (    struct Action_19 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free1067 (    enum CAllocator_9  dref1959 ,    struct Slice_18  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1068 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free1066 (    struct List_17 *  list2035 ) {
    ( (  free1067 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( ( * (  list2035 ) ) .f_elements ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_changeset1050 (    struct Changeset_26  chs3598 ,    enum CAllocator_9  al3600 ) {
    struct env1052 envinst1052 = {
        .al3600 =  al3600 ,
    };
    ( (  for_dash_each1051 ) ( ( (  chs3598 ) .f_parts ) ,  ( (struct envunion1053){ .fun = (  enum Unit_7  (*) (  struct env1052*  ,    struct Action_19  ) )lam1064 , .env =  envinst1052 } ) ) );
    ( (  free1066 ) ( ( & ( (  chs3598 ) .f_parts ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   trim1069 (    struct List_24 *  l2115 ,    size_t  new_dash_count2117 ) {
    (*  l2115 ) .f_count = ( (  min342 ) ( (  new_dash_count2117 ) ,  ( ( * (  l2115 ) ) .f_count ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   trim_dash_actions1035 (    struct Actions_89 *  actions3616 ) {
    enum CAllocator_9  al3617 = ( ( ( * (  actions3616 ) ) .f_list ) .f_al );
    size_t  cur3618 = ( ( * (  actions3616 ) ) .f_cur );
    struct Drop_1037  temp1036 =  into_dash_iter1039 ( ( (  drop1040 ) ( ( ( * (  actions3616 ) ) .f_list ) ,  (  cur3618 ) ) ) );
    while (true) {
        struct Maybe_1047  __cond1046 =  next1048 (&temp1036);
        if (  __cond1046 .tag == 0 ) {
            break;
        }
        struct Changeset_26  action3620 =  __cond1046 .stuff .Maybe_1047_Just_s .field0;
        ( (  free_dash_changeset1050 ) ( (  action3620 ) ,  (  al3617 ) ) );
    }
    ( (  trim1069 ) ( ( & ( ( * (  actions3616 ) ) .f_list ) ) ,  (  cur3618 ) ) );
    return ( Unit_7_Unit );
}

static  struct StrView_21   clone_dash_01071 (    struct StrView_21  s2155 ,    enum CAllocator_9  al2157 ) {
    size_t  cnt2158 = ( ( (  s2155 ) .f_contents ) .f_count );
    struct Slice_12  nus2159 = ( (  allocate364 ) ( (  al2157 ) ,  (  op_dash_add243 ( (  cnt2158 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to463 ) ( ( (  s2155 ) .f_contents ) ,  (  nus2159 ) ) );
    ( (  set373 ) ( (  nus2159 ) ,  (  cnt2158 ) ,  ( (  char_dash_u8395 ) ( ( (  from_dash_charlike232 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = ( (  nus2159 ) .f_ptr ) , .f_count = (  cnt2158 ) } ) } );
}

static  struct StrView_21   clone1070 (    struct StrView_21  s2162 ,    enum CAllocator_9  al2164 ) {
    return ( (  clone_dash_01071 ) ( (  s2162 ) ,  (  al2164 ) ) );
}

static  struct Maybe_148   head1073 (    struct SplitIter_403  it1142 ) {
    struct SplitIter_403  temp1074 = ( (  into_dash_iter410 ) ( (  it1142 ) ) );
    return ( (  next424 ) ( ( &temp1074 ) ) );
}

static  struct Maybe_148   head1076 (    struct Drop_402  it1142 ) {
    struct Drop_402  temp1077 = ( (  into_dash_iter408 ) ( (  it1142 ) ) );
    return ( (  next423 ) ( ( &temp1077 ) ) );
}

static  bool   null1075 (    struct Drop_402  it1151 ) {
    struct Maybe_148  dref1152 = ( (  head1076 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_148_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_7   panic1079 (    struct StrView_21  errmsg1712 ) {
    ( (  print_dash_str489 ) ( ( ( StrConcat_490_StrConcat ) ( ( ( StrConcat_491_StrConcat ) ( ( (  from_dash_string231 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Tuple2_421   undefined1080 (  ) {
    struct Tuple2_421  temp1081;
    return (  temp1081 );
}

static  struct Tuple2_421   or_dash_fail1078 (    struct Maybe_420  x1725 ,    struct StrView_21  errmsg1727 ) {
    struct Maybe_420  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_420_None_t ) {
        ( (  panic1079 ) ( (  errmsg1727 ) ) );
        return ( (  undefined1080 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_420_Just_t ) {
            return ( dref1728 .stuff .Maybe_420_Just_s .field0 );
        }
    }
}

static  struct Maybe_420   reduce1083 (    struct Zip_401  iterable1093 ,    struct Maybe_420  base1095 ,    struct Maybe_420 (*  fun1097 )(    struct Tuple2_421  ,    struct Maybe_420  ) ) {
    struct Maybe_420  x1098 = (  base1095 );
    struct Zip_401  it1099 = ( (  into_dash_iter406 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_420  dref1100 = ( (  next422 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_420_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_420_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_420_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1084 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1084);
    exit ( 1 );
    ( Unit_7_Unit );
    struct Maybe_420  temp1085;
    return (  temp1085 );
}

static  struct Maybe_420   lam1086 (    struct Tuple2_421  e1147 ,    struct Maybe_420  dref1148 ) {
    return ( ( Maybe_420_Just ) ( (  e1147 ) ) );
}

static  struct Maybe_420   last1082 (    struct Zip_401  it1145 ) {
    return ( (  reduce1083 ) ( (  it1145 ) ,  ( (struct Maybe_420) { .tag = Maybe_420_None_t } ) ,  (  lam1086 ) ) );
}

static  int32_t   snd1087 (    struct Tuple2_421  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct StrView_21   fst1088 (    struct Tuple2_421  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_20   pos_dash_after_dash_str1072 (    struct TextBuf_88 *  self3703 ,    struct StrView_21  bytes3705 ,    struct Pos_20  from3707 ) {
    struct SplitIter_403  lines3708 = ( (  split_dash_by_dash_each411 ) ( (  bytes3705 ) ,  ( (  from_dash_charlike232 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_21  first_dash_line3709 = ( (  or_dash_else386 ) ( ( (  head1073 ) ( (  lines3708 ) ) ) ,  ( (  from_dash_string231 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_402  headless3710 = ( (  drop409 ) ( (  lines3708 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1075 ) ( (  headless3710 ) ) ) ) {
        struct Pos_20  next_dash_pos3711 = ( (  mk309 ) ( ( (  from3707 ) .f_line ) ,  (  op_dash_add285 ( ( (  from3707 ) .f_bi ) , ( (  size_dash_i32207 ) ( ( (  num_dash_bytes995 ) ( (  first_dash_line3709 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3711 );
    } else {
        struct Tuple2_421  last_dash_line3712 = ( (  or_dash_fail1078 ) ( ( (  last1082 ) ( ( (  zip407 ) ( (  headless3710 ) ,  ( (  from290 ) ( (  op_dash_add285 ( ( (  from3707 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string231 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk309 ) ( ( (  snd1087 ) ( (  last_dash_line3712 ) ) ) ,  ( (  size_dash_i32207 ) ( ( (  num_dash_bytes995 ) ( ( (  fst1088 ) ( (  last_dash_line3712 ) ) ) ) ) ) ) ) );
    }
}

struct envunion1094 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

static  struct StrView_21   from_dash_charlike1095 (    uint8_t *  ptr77 ,    size_t  count79 ) {
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = (  ptr77 ) , .f_count = (  count79 ) } ) } );
}

struct envunion1099 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

struct envunion1101 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

struct envunion1103 {
    enum Unit_7  (*fun) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  );
    struct env40 env;
};

static  struct StrView_21   str_dash_between1090 (   struct env102* env ,    struct TextBuf_88 *  self3735 ,    struct Pos_20  from3737 ,    struct Pos_20  to3739 ) {
    enum CAllocator_9  al3740 = ( ( ( * (  self3735 ) ) .f_buf ) .f_al );
    if ( (  eq331 ( ( (  from3737 ) .f_line ) , ( (  to3739 ) .f_line ) ) ) ) {
        size_t  from_dash_bi3741 = ( (  i32_dash_size273 ) ( ( (  min480 ) ( ( (  from3737 ) .f_bi ) ,  ( (  to3739 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3742 = ( (  i32_dash_size273 ) ( ( (  max975 ) ( ( (  from3737 ) .f_bi ) ,  ( (  to3739 ) .f_bi ) ) ) ) );
        return ( (  clone1070 ) ( ( (  byte_dash_substr396 ) ( ( (  line962 ) ( (  self3735 ) ,  ( (  from3737 ) .f_line ) ) ) ,  (  from_dash_bi3741 ) ,  (  to_dash_bi3742 ) ) ) ,  (  al3740 ) ) );
    } else {
        struct Pos_20  from_dash_pos3743 = ( (  min326 ) ( (  from3737 ) ,  (  to3739 ) ) );
        struct Pos_20  to_dash_pos3744 = ( (  max329 ) ( (  from3737 ) ,  (  to3739 ) ) );
        struct List_11  temp1091 = ( (  mk294 ) ( (  al3740 ) ) );
        struct List_11 *  sb3745 = ( &temp1091 );
        struct StrView_21  first_dash_line3746 = ( (  line962 ) ( (  self3735 ) ,  ( (  from_dash_pos3743 ) .f_line ) ) );
        struct envunion103  temp1092 = ( (struct envunion103){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all349 , .env =  env->envinst40 } );
        ( temp1092.fun ( &temp1092.env ,  (  sb3745 ) ,  ( ( (  byte_dash_substr396 ) ( (  first_dash_line3746 ) ,  ( (  i32_dash_size273 ) ( ( (  from_dash_pos3743 ) .f_bi ) ) ) ,  ( (  num_dash_bytes995 ) ( (  first_dash_line3746 ) ) ) ) ) .f_contents ) ) );
        struct envunion1094  temp1093 = ( (struct envunion1094){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all349 , .env =  env->envinst40 } );
        ( temp1093.fun ( &temp1093.env ,  (  sb3745 ) ,  ( ( ( (  from_dash_charlike1095 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_700  temp1096 =  into_dash_iter702 ( ( (  to705 ) ( (  op_dash_add285 ( ( (  from_dash_pos3743 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  op_dash_sub823 ( ( (  to_dash_pos3744 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_283  __cond1097 =  next703 (&temp1096);
            if (  __cond1097 .tag == 0 ) {
                break;
            }
            int32_t  i3748 =  __cond1097 .stuff .Maybe_283_Just_s .field0;
            struct envunion1099  temp1098 = ( (struct envunion1099){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all349 , .env =  env->envinst40 } );
            ( temp1098.fun ( &temp1098.env ,  (  sb3745 ) ,  ( ( (  line962 ) ( (  self3735 ) ,  (  i3748 ) ) ) .f_contents ) ) );
            struct envunion1101  temp1100 = ( (struct envunion1101){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all349 , .env =  env->envinst40 } );
            ( temp1100.fun ( &temp1100.env ,  (  sb3745 ) ,  ( ( ( (  from_dash_charlike1095 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1103  temp1102 = ( (struct envunion1103){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all349 , .env =  env->envinst40 } );
        ( temp1102.fun ( &temp1102.env ,  (  sb3745 ) ,  ( ( (  byte_dash_substr396 ) ( ( (  line962 ) ( (  self3735 ) ,  ( (  to_dash_pos3744 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size273 ) ( ( (  to_dash_pos3744 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes963 ) ( ( (  to_dash_slice343 ) ( ( * (  sb3745 ) ) ) ) ) );
    }
}

static  bool   is_dash_none1104 (    struct Maybe_113  m1264 ) {
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

struct Tuple2_1106 {
    enum ChangesetInputType_90  field0;
    enum ChangesetInputType_90  field1;
};

static struct Tuple2_1106 Tuple2_1106_Tuple2 (  enum ChangesetInputType_90  field0 ,  enum ChangesetInputType_90  field1 ) {
    return ( struct Tuple2_1106 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1105 (    enum ChangesetInputType_90  l3606 ,    enum ChangesetInputType_90  r3608 ) {
    return ( {  struct Tuple2_1106  dref3609 = ( ( Tuple2_1106_Tuple2 ) ( (  l3606 ) ,  (  r3608 ) ) ) ;  dref3609 .field0 == ChangesetInputType_90_NoChangeset &&  dref3609 .field1 == ChangesetInputType_90_NoChangeset ? ( true ) :  dref3609 .field0 == ChangesetInputType_90_InputChangeset &&  dref3609 .field1 == ChangesetInputType_90_InputChangeset ? ( true ) :  dref3609 .field0 == ChangesetInputType_90_CustomChangeset &&  dref3609 .field1 == ChangesetInputType_90_CustomChangeset ? ( true ) : ( false ) ; } );
}

static  struct Changeset_26 *   get_dash_ptr1108 (    struct Slice_25  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp195 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic263 ) ( ( ( StrConcat_264_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string231 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_26 *  elem_dash_ptr1760 = ( (  offset_dash_ptr1044 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  struct Changeset_26 *   last_dash_ptr1107 (    struct Slice_25  s1938 ) {
    if ( (  eq250 ( ( (  s1938 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1079 ) ( ( (  from_dash_string231 ) ( ( "(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1108 ) ( (  s1938 ) ,  (  op_dash_sub315 ( ( (  s1938 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_25   to_dash_slice1109 (    struct List_24  l2126 ) {
    struct Changeset_26 *  ptr2127 = ( ( (  l2126 ) .f_elements ) .f_ptr );
    return ( (struct Slice_25) { .f_ptr = (  ptr2127 ) , .f_count = ( (  l2126 ) .f_count ) } );
}

struct envunion1111 {
    enum Unit_7  (*fun) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  );
    struct env15 env;
};

struct TypeSize_1117 {
    size_t  f_size;
};

static  struct TypeSize_1117   get_dash_typesize1116 (  ) {
    struct Action_19  temp1118;
    return ( (struct TypeSize_1117) { .f_size = ( sizeof( ( (  temp1118 ) ) ) ) } );
}

static  struct Action_19 *   cast_dash_ptr1119 (    void *  p359 ) {
    return ( (struct Action_19 * ) (  p359 ) );
}

static  struct Slice_18   allocate1115 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize1116 ) ( ) ) ) .f_size );
    struct Action_19 *  ptr1957 = ( (  cast_dash_ptr1119 ) ( ( ( malloc ) ( (  op_dash_mul256 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_18) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env1120 {
    struct Slice_18  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_1122 {
    struct Action_19  field0;
    int32_t  field1;
};

static struct Tuple2_1122 Tuple2_1122_Tuple2 (  struct Action_19  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1122 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1121 {
    enum Unit_7  (*fun) (  struct env1120*  ,    struct Tuple2_1122  );
    struct env1120 env;
};

static  struct Action_19 *   get_dash_ptr1125 (    struct Slice_18  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp195 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic263 ) ( ( ( StrConcat_264_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string231 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_19 *  elem_dash_ptr1760 = ( (  offset_dash_ptr1059 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_7   set1124 (    struct Slice_18  slice1774 ,    size_t  i1776 ,    struct Action_19  x1778 ) {
    struct Action_19 *  ep1779 = ( (  get_dash_ptr1125 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1123 (   struct env1120* env ,    struct Tuple2_1122  dref2043 ) {
    return ( (  set1124 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size273 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct Zip_1127 {
    struct SliceIter_1054  f_left_dash_it;
    struct FromIter_277  f_right_dash_it;
};

static  struct Zip_1127   into_dash_iter1129 (    struct Zip_1127  self911 ) {
    return (  self911 );
}

struct Maybe_1130 {
    enum {
        Maybe_1130_None_t,
        Maybe_1130_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1122  field0;
        } Maybe_1130_Just_s;
    } stuff;
};

static struct Maybe_1130 Maybe_1130_Just (  struct Tuple2_1122  field0 ) {
    return ( struct Maybe_1130 ) { .tag = Maybe_1130_Just_t, .stuff = { .Maybe_1130_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1130   next1131 (    struct Zip_1127 *  self914 ) {
    struct Zip_1127  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1061  dref916 = ( (  next1062 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1061_None_t ) {
            return ( (struct Maybe_1130) { .tag = Maybe_1130_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1061_Just_t ) {
                struct Maybe_283  dref918 = ( (  next284 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_283_None_t ) {
                    return ( (struct Maybe_1130) { .tag = Maybe_1130_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_283_Just_t ) {
                        ( (  next1062 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next284 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1130_Just ) ( ( ( Tuple2_1122_Tuple2 ) ( ( dref916 .stuff .Maybe_1061_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_283_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each1126 (    struct Zip_1127  iterable1074 ,   struct envunion1121  fun1076 ) {
    struct Zip_1127  temp1128 = ( (  into_dash_iter1129 ) ( (  iterable1074 ) ) );
    struct Zip_1127 *  it1077 = ( &temp1128 );
    while ( ( true ) ) {
        struct Maybe_1130  dref1078 = ( (  next1131 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1130_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1130_Just_t ) {
                struct envunion1121  temp1132 = (  fun1076 );
                ( temp1132.fun ( &temp1132.env ,  ( dref1078 .stuff .Maybe_1130_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_1127   zip1133 (    struct Slice_18  left922 ,    struct FromIter_277  right924 ) {
    struct SliceIter_1054  left_dash_it925 = ( (  into_dash_iter1057 ) ( (  left922 ) ) );
    struct FromIter_277  right_dash_it926 = ( (  into_dash_iter289 ) ( (  right924 ) ) );
    return ( (struct Zip_1127) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   grow_dash_if_dash_full1114 (   struct env3* env ,    struct List_17 *  list2041 ) {
    if ( (  eq250 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate1115 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq250 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_18  new_dash_slice2042 = ( (  allocate1115 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul256 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env1120 envinst1120 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion1121  fun2046 = ( (struct envunion1121){ .fun = (  enum Unit_7  (*) (  struct env1120*  ,    struct Tuple2_1122  ) )lam1123 , .env =  envinst1120 } );
            ( (  for_dash_each1126 ) ( ( (  zip1133 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from290 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free1067 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add1112 (   struct env15* env ,    struct List_17 *  list2049 ,    struct Action_19  elem2051 ) {
    struct envunion16  temp1113 = ( (struct envunion16){ .fun = (  enum Unit_7  (*) (  struct env3*  ,    struct List_17 *  ) )grow_dash_if_dash_full1114 , .env =  env->envinst3 } );
    ( temp1113.fun ( &temp1113.env ,  (  list2049 ) ) );
    ( (  set1124 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add243 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  void *   cast_dash_ptr1140 (    struct Action_19 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1141 (    struct Action_19 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Action_19 *   zeroed1138 (  ) {
    struct Action_19 *  temp1139;
    struct Action_19 *  x570 = (  temp1139 );
    ( ( memset ) ( ( (  cast_dash_ptr1140 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of1141 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Action_19 *   null_dash_ptr1137 (  ) {
    return ( (  zeroed1138 ) ( ) );
}

static  struct Slice_18   empty1136 (  ) {
    return ( (struct Slice_18) { .f_ptr = ( (  null_dash_ptr1137 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_17   mk1135 (    enum CAllocator_9  al2031 ) {
    struct Slice_18  elements2032 = ( (  empty1136 ) ( ) );
    return ( (struct List_17) { .f_al = (  al2031 ) , .f_elements = (  elements2032 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_27   or_dash_else1142 (    struct Maybe_113  self1732 ,    struct Cursors_27  alt1734 ) {
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

struct TypeSize_1150 {
    size_t  f_size;
};

static  struct TypeSize_1150   get_dash_typesize1149 (  ) {
    struct Changeset_26  temp1151;
    return ( (struct TypeSize_1150) { .f_size = ( sizeof( ( (  temp1151 ) ) ) ) } );
}

static  struct Changeset_26 *   cast_dash_ptr1152 (    void *  p359 ) {
    return ( (struct Changeset_26 * ) (  p359 ) );
}

static  struct Slice_25   allocate1148 (    enum CAllocator_9  dref1953 ,    size_t  count1955 ) {
    if (!(  dref1953 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1956 = ( ( ( (  get_dash_typesize1149 ) ( ) ) ) .f_size );
    struct Changeset_26 *  ptr1957 = ( (  cast_dash_ptr1152 ) ( ( ( malloc ) ( (  op_dash_mul256 ( (  size1956 ) , (  count1955 ) ) ) ) ) ) );
    return ( (struct Slice_25) { .f_ptr = (  ptr1957 ) , .f_count = (  count1955 ) } );
}

struct env1153 {
    struct Slice_25  new_dash_slice2042;
    ;
    ;
};

struct Tuple2_1155 {
    struct Changeset_26  field0;
    int32_t  field1;
};

static struct Tuple2_1155 Tuple2_1155_Tuple2 (  struct Changeset_26  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1155 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1154 {
    enum Unit_7  (*fun) (  struct env1153*  ,    struct Tuple2_1155  );
    struct env1153 env;
};

static  enum Unit_7   set1157 (    struct Slice_25  slice1774 ,    size_t  i1776 ,    struct Changeset_26  x1778 ) {
    struct Changeset_26 *  ep1779 = ( (  get_dash_ptr1108 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1156 (   struct env1153* env ,    struct Tuple2_1155  dref2043 ) {
    return ( (  set1157 ) ( ( env->new_dash_slice2042 ) ,  ( (  i32_dash_size273 ) ( ( dref2043 .field1 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct Zip_1159 {
    struct SliceIter_1038  f_left_dash_it;
    struct FromIter_277  f_right_dash_it;
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
            struct Tuple2_1155  field0;
        } Maybe_1162_Just_s;
    } stuff;
};

static struct Maybe_1162 Maybe_1162_Just (  struct Tuple2_1155  field0 ) {
    return ( struct Maybe_1162 ) { .tag = Maybe_1162_Just_t, .stuff = { .Maybe_1162_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1162   next1163 (    struct Zip_1159 *  self914 ) {
    struct Zip_1159  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1047  dref916 = ( (  next1049 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1047_None_t ) {
            return ( (struct Maybe_1162) { .tag = Maybe_1162_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1047_Just_t ) {
                struct Maybe_283  dref918 = ( (  next284 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_283_None_t ) {
                    return ( (struct Maybe_1162) { .tag = Maybe_1162_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_283_Just_t ) {
                        ( (  next1049 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next284 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1162_Just ) ( ( ( Tuple2_1155_Tuple2 ) ( ( dref916 .stuff .Maybe_1047_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_283_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each1158 (    struct Zip_1159  iterable1074 ,   struct envunion1154  fun1076 ) {
    struct Zip_1159  temp1160 = ( (  into_dash_iter1161 ) ( (  iterable1074 ) ) );
    struct Zip_1159 *  it1077 = ( &temp1160 );
    while ( ( true ) ) {
        struct Maybe_1162  dref1078 = ( (  next1163 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1162_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1162_Just_t ) {
                struct envunion1154  temp1164 = (  fun1076 );
                ( temp1164.fun ( &temp1164.env ,  ( dref1078 .stuff .Maybe_1162_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_1159   zip1165 (    struct Slice_25  left922 ,    struct FromIter_277  right924 ) {
    struct SliceIter_1038  left_dash_it925 = ( (  into_dash_iter1042 ) ( (  left922 ) ) );
    struct FromIter_277  right_dash_it926 = ( (  into_dash_iter289 ) ( (  right924 ) ) );
    return ( (struct Zip_1159) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr1167 (    struct Changeset_26 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free1166 (    enum CAllocator_9  dref1959 ,    struct Slice_25  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1167 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   grow_dash_if_dash_full1147 (   struct env4* env ,    struct List_24 *  list2041 ) {
    if ( (  eq250 ( ( ( * (  list2041 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2041 ) .f_elements = ( (  allocate1148 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( env->starting_dash_size2036 ) ) );
    } else {
        if ( (  eq250 ( ( ( * (  list2041 ) ) .f_count ) , ( ( ( * (  list2041 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_25  new_dash_slice2042 = ( (  allocate1148 ) ( ( ( * (  list2041 ) ) .f_al ) ,  (  op_dash_mul256 ( ( ( * (  list2041 ) ) .f_count ) , ( env->growth_dash_factor2037 ) ) ) ) );
            struct env1153 envinst1153 = {
                .new_dash_slice2042 =  new_dash_slice2042 ,
            };
            struct envunion1154  fun2046 = ( (struct envunion1154){ .fun = (  enum Unit_7  (*) (  struct env1153*  ,    struct Tuple2_1155  ) )lam1156 , .env =  envinst1153 } );
            ( (  for_dash_each1158 ) ( ( (  zip1165 ) ( ( ( * (  list2041 ) ) .f_elements ) ,  ( (  from290 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  (  fun2046 ) ) );
            ( (  free1166 ) ( ( ( * (  list2041 ) ) .f_al ) ,  ( ( * (  list2041 ) ) .f_elements ) ) );
            (*  list2041 ) .f_elements = (  new_dash_slice2042 );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   add1145 (   struct env22* env ,    struct List_24 *  list2049 ,    struct Changeset_26  elem2051 ) {
    struct envunion23  temp1146 = ( (struct envunion23){ .fun = (  enum Unit_7  (*) (  struct env4*  ,    struct List_24 *  ) )grow_dash_if_dash_full1147 , .env =  env->envinst4 } );
    ( temp1146.fun ( &temp1146.env ,  (  list2049 ) ) );
    ( (  set1157 ) ( ( ( * (  list2049 ) ) .f_elements ) ,  ( ( * (  list2049 ) ) .f_count ) ,  (  elem2051 ) ) );
    (*  list2049 ) .f_count = (  op_dash_add243 ( ( ( * (  list2049 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Pos_20   action_dash_fwd1169 (   struct env96* env ,    struct TextBuf_88 *  self3698 ,    struct Action_19  action3700 ) {
    struct envunion97  temp1170 = ( (struct envunion97){ .fun = (  enum Unit_7  (*) (  struct env85*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action325 , .env =  env->envinst85 } );
    ( temp1170.fun ( &temp1170.env ,  (  self3698 ) ,  ( (  action3700 ) .f_from ) ,  ( (  action3700 ) .f_to_dash_bwd ) ,  ( (  action3700 ) .f_fwd ) ) );
    return ( (  action3700 ) .f_to_dash_fwd );
}

static  struct Maybe_113   change1034 (   struct env104* env ,    struct TextBuf_88 *  self3765 ,    struct Pos_20  from3767 ,    struct Pos_20  to3769 ,    struct StrView_21  bytes3771 ,    struct Maybe_113  before_dash_cursors3773 ) {
    struct Pos_20  from_dash_pos3774 = ( (  min326 ) ( (  from3767 ) ,  (  to3769 ) ) );
    struct Pos_20  to_dash_pos3775 = ( (  max329 ) ( (  from3767 ) ,  (  to3769 ) ) );
    struct Actions_89 *  actions3776 = ( & ( ( * (  self3765 ) ) .f_actions ) );
    ( (  trim_dash_actions1035 ) ( (  actions3776 ) ) );
    struct envunion108  temp1089 = ( (struct envunion108){ .fun = (  struct StrView_21  (*) (  struct env102*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ) )str_dash_between1090 , .env =  env->envinst102 } );
    struct Action_19  action3777 = ( (struct Action_19) { .f_from = (  from3767 ) , .f_fwd = ( (  clone1070 ) ( (  bytes3771 ) ,  ( ( * (  self3765 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1072 ) ( (  self3765 ) ,  (  bytes3771 ) ,  (  from_dash_pos3774 ) ) ) , .f_bwd = ( temp1089.fun ( &temp1089.env ,  (  self3765 ) ,  (  from_dash_pos3774 ) ,  (  to_dash_pos3775 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3775 ) } );
    enum CAllocator_9  al3778 = ( ( ( * (  actions3776 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in3779 = ( (  is_dash_none1104 ) ( (  before_dash_cursors3773 ) ) );
    if ( ( (  eq1105 ( ( ( ( * (  self3765 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_90_CustomChangeset ) ) ) || ( (  eq1105 ( ( ( ( * (  self3765 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_90_InputChangeset ) ) ) && (  is_dash_typed_dash_in3779 ) ) ) ) {
        struct Changeset_26 *  last_dash_changeset3780 = ( (  last_dash_ptr1107 ) ( ( (  to_dash_slice1109 ) ( ( ( * (  actions3776 ) ) .f_list ) ) ) ) );
        struct envunion1111  temp1110 = ( (struct envunion1111){ .fun = (  enum Unit_7  (*) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  ) )add1112 , .env =  env->envinst15 } );
        ( temp1110.fun ( &temp1110.env ,  ( & ( ( * (  last_dash_changeset3780 ) ) .f_parts ) ) ,  (  action3777 ) ) );
    } else {
        struct Changeset_26  temp1134 = ( (struct Changeset_26) { .f_parts = ( (  mk1135 ) ( (  al3778 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1142 ) ( (  before_dash_cursors3773 ) ,  ( (struct Cursors_27) { .f_cur = (  from3767 ) , .f_sel = ( (  eq330 ( (  from3767 ) , (  to3769 ) ) ) ? ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) : ( ( Maybe_28_Just ) ( (  to3769 ) ) ) ) } ) ) ) } );
        struct Changeset_26 *  changeset3781 = ( &temp1134 );
        struct envunion106  temp1143 = ( (struct envunion106){ .fun = (  enum Unit_7  (*) (  struct env15*  ,    struct List_17 *  ,    struct Action_19  ) )add1112 , .env =  env->envinst15 } );
        ( temp1143.fun ( &temp1143.env ,  ( & ( ( * (  changeset3781 ) ) .f_parts ) ) ,  (  action3777 ) ) );
        struct envunion107  temp1144 = ( (struct envunion107){ .fun = (  enum Unit_7  (*) (  struct env22*  ,    struct List_24 *  ,    struct Changeset_26  ) )add1145 , .env =  env->envinst22 } );
        ( temp1144.fun ( &temp1144.env ,  ( & ( ( * (  actions3776 ) ) .f_list ) ) ,  ( * (  changeset3781 ) ) ) );
        (*  actions3776 ) .f_input_dash_changeset = ( (  is_dash_typed_dash_in3779 ) ? ( ChangesetInputType_90_InputChangeset ) : ( ChangesetInputType_90_NoChangeset ) );
        (*  actions3776 ) .f_cur = (  op_dash_add243 ( ( ( * (  actions3776 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion105  temp1168 = ( (struct envunion105){ .fun = (  struct Pos_20  (*) (  struct env96*  ,    struct TextBuf_88 *  ,    struct Action_19  ) )action_dash_fwd1169 , .env =  env->envinst96 } );
    struct Pos_20  to_dash_fwd3782 = ( temp1168.fun ( &temp1168.env ,  (  self3765 ) ,  (  action3777 ) ) );
    if ( (  cmp195 ( ( (  num_dash_bytes995 ) ( ( (  action3777 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_20  to_dash_fwd3783 = ( (  left_dash_pos994 ) ( (  self3765 ) ,  (  to_dash_fwd3782 ) ) );
        return ( ( Maybe_113_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3783 ) , .f_sel = ( ( Maybe_28_Just ) ( ( (  action3777 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_113_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3782 ) , .f_sel = ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) } ) ) );
    }
}

static  enum Unit_7   add_dash_str_dash_at_dash_char1032 (   struct env111* env ,    struct Pane_127 *  self4059 ,    struct StrView_21  s4061 ) {
    struct Pos_20  cur4062 = ( ( * (  self4059 ) ) .f_cursor );
    struct envunion112  temp1033 = ( (struct envunion112){ .fun = (  struct Maybe_113  (*) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  ) )change1034 , .env =  env->envinst104 } );
    ( temp1033.fun ( &temp1033.env ,  ( ( * (  self4059 ) ) .f_buf ) ,  (  cur4062 ) ,  (  cur4062 ) ,  (  s4061 ) ,  ( (struct Maybe_113) { .tag = Maybe_113_None_t } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   indent_dash_at1176 (   struct env122* env ,    struct Pane_127 *  self4097 ,    int32_t  line4099 ) {
    struct envunion123  temp1177 = ( (struct envunion123){ .fun = (  struct Maybe_113  (*) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  ) )change1034 , .env =  env->envinst104 } );
    ( temp1177.fun ( &temp1177.env ,  ( ( * (  self4097 ) ) .f_buf ) ,  ( (struct Pos_20) { .f_line = (  line4099 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ,  ( (struct Pos_20) { .f_line = (  line4099 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ,  ( (  from_dash_charlike1095 ) ( ( "\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_113) { .tag = Maybe_113_None_t } ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   indent_dash_at_dash_current1172 (   struct env133* env ,    struct Pane_127 *  self4118 ,    int32_t  indent4120 ) {
    struct RangeIter_700  temp1173 =  into_dash_iter702 ( ( (  to705 ) ( (  from_dash_integral48 ( 1 ) ) ,  (  indent4120 ) ) ) );
    while (true) {
        struct Maybe_283  __cond1174 =  next703 (&temp1173);
        if (  __cond1174 .tag == 0 ) {
            break;
        }
        int32_t  dref4121 =  __cond1174 .stuff .Maybe_283_Just_s .field0;
        struct envunion134  temp1175 = ( (struct envunion134){ .fun = (  enum Unit_7  (*) (  struct env122*  ,    struct Pane_127 *  ,    int32_t  ) )indent_dash_at1176 , .env =  env->envinst122 } );
        ( temp1175.fun ( &temp1175.env ,  (  self4118 ) ,  ( ( ( * (  self4118 ) ) .f_cursor ) .f_line ) ) );
        ( (  move_dash_right1000 ) ( (  self4118 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   move_dash_to_dash_beginning1178 (    struct Pane_127 *  self4038 ) {
    struct Pos_20  temp1179 = ( ( * (  self4038 ) ) .f_cursor );
    temp1179 .  f_bi = (  from_dash_integral48 ( 0 ) );
    ( (  set_dash_cursors956 ) ( (  self4038 ) ,  ( temp1179 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_957_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

struct envunion1181 {
    enum Unit_7  (*fun) (  struct env111*  ,    struct Pane_127 *  ,    struct StrView_21  );
    struct env111 env;
};

struct envunion1183 {
    enum Unit_7  (*fun) (  struct env133*  ,    struct Pane_127 *  ,    int32_t  );
    struct env133 env;
};

enum MoveDirection_1185 {
    MoveDirection_1185_MoveFwd,
    MoveDirection_1185_MoveBwd,
};

enum MoveTarget_1186 {
    MoveTarget_1186_NextWordStart,
    MoveTarget_1186_NextWordEnd,
};

static  struct Pos_20   own1188 (    struct Pos_20  x1251 ) {
    return (  x1251 );
}

struct env1189 {
    enum MoveDirection_1185  dir4001;
    ;
    ;
    struct Pos_20 *  prev4004;
    struct Pane_127 *  pane3999;
};

static  bool   is_dash_at_dash_line_dash_end1191 (    struct Pane_127 *  pane3981 ,    struct Pos_20  pos3983 ) {
    return (  eq250 ( ( (  i32_dash_size273 ) ( ( (  pos3983 ) .f_bi ) ) ) , ( (  num_dash_bytes995 ) ( ( (  line962 ) ( ( ( * (  pane3981 ) ) .f_buf ) ,  ( (  pos3983 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1190 (    struct Pane_127 *  pane3986 ) {
    return ( (  is_dash_at_dash_line_dash_end1191 ) ( (  pane3986 ) ,  ( ( * (  pane3986 ) ) .f_cursor ) ) );
}

struct envunion1193 {
    enum Unit_7  (*fun) (  struct env1189*  );
    struct env1189 env;
};

static  enum Unit_7   advance1194 (   struct env1189* env ) {
    (* env->prev4004 ) = ( ( * ( env->pane3999 ) ) .f_cursor );
    enum MoveDirection_1185  dref4006 = ( env->dir4001 );
    switch (  dref4006 ) {
        case MoveDirection_1185_MoveFwd : {
            ( (  move_dash_right1000 ) ( ( env->pane3999 ) ) );
            break;
        }
        case MoveDirection_1185_MoveBwd : {
            ( (  move_dash_left955 ) ( ( env->pane3999 ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

enum CharType_1198 {
    CharType_1198_CharSpace,
    CharType_1198_CharWord,
    CharType_1198_CharPunctuation,
};

struct Tuple2_1199 {
    enum CharType_1198  field0;
    enum CharType_1198  field1;
};

static struct Tuple2_1199 Tuple2_1199_Tuple2 (  enum CharType_1198  field0 ,  enum CharType_1198  field1 ) {
    return ( struct Tuple2_1199 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1197 (    enum CharType_1198  l3799 ,    enum CharType_1198  r3801 ) {
    struct Tuple2_1199  dref3802 = ( ( Tuple2_1199_Tuple2 ) ( (  l3799 ) ,  (  r3801 ) ) );
    if (  dref3802 .field0 == CharType_1198_CharSpace &&  dref3802 .field1 == CharType_1198_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3802 .field0 == CharType_1198_CharWord &&  dref3802 .field1 == CharType_1198_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3802 .field0 == CharType_1198_CharPunctuation &&  dref3802 .field1 == CharType_1198_CharPunctuation ) {
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

static  struct Char_57   min1204 (    struct Char_57  l1236 ,    struct Char_57  r1238 ) {
    if ( (  cmp790 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Char_57   max1205 (    struct Char_57  l1315 ,    struct Char_57  r1317 ) {
    if ( (  cmp790 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  bool   between1203 (    struct Char_57  c1337 ,    struct Char_57  l1339 ,    struct Char_57  r1341 ) {
    struct Char_57  from1342 = ( (  min1204 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Char_57  to1343 = ( (  max1205 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp790 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp790 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_alpha1202 (    struct Char_57  c2388 ) {
    return ( ( (  cmp195 ( ( (  c2388 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between1203 ) ( (  c2388 ) ,  ( (  from_dash_charlike232 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1203 ) ( (  c2388 ) ,  ( (  from_dash_charlike232 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_digit1206 (    struct Char_57  c2391 ) {
    return ( (  eq250 ( ( (  c2391 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1203 ) ( (  c2391 ) ,  ( (  from_dash_charlike232 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1201 (    struct Char_57  c2394 ) {
    return ( ( (  is_dash_alpha1202 ) ( (  c2394 ) ) ) || ( (  is_dash_digit1206 ) ( (  c2394 ) ) ) );
}

static  bool   is_dash_whitespace1207 (    struct Char_57  c2379 ) {
    return ( ( (  eq414 ( (  c2379 ) , ( (  from_dash_charlike232 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq414 ( (  c2379 ) , ( (  from_dash_charlike232 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq414 ( (  c2379 ) , ( (  from_dash_charlike232 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_1198   char_dash_type1200 (    struct Char_57  c3805 ) {
    if ( ( ( ( (  is_dash_alphanumeric1201 ) ( (  c3805 ) ) ) || (  eq414 ( (  c3805 ) , ( (  from_dash_charlike232 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq414 ( (  c3805 ) , ( (  from_dash_charlike232 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1198_CharWord );
    } else {
        if ( ( (  is_dash_whitespace1207 ) ( (  c3805 ) ) ) ) {
            return ( CharType_1198_CharSpace );
        } else {
            return ( CharType_1198_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1196 (    struct Char_57  l3808 ,    struct Char_57  r3810 ) {
    return ( !  eq1197 ( ( (  char_dash_type1200 ) ( (  l3808 ) ) ) , ( (  char_dash_type1200 ) ( (  r3810 ) ) ) ) );
}

static  struct Char_57   or_dash_else1209 (    struct Maybe_617  self1732 ,    struct Char_57  alt1734 ) {
    struct Maybe_617  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_617_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_617_Just_t ) {
            return ( dref1735 .stuff .Maybe_617_Just_s .field0 );
        }
    }
}

static  struct Maybe_617   head1210 (    struct StrViewIter_614  it1142 ) {
    struct StrViewIter_614  temp1211 = ( (  into_dash_iter616 ) ( (  it1142 ) ) );
    return ( (  next618 ) ( ( &temp1211 ) ) );
}

static  struct Char_57   char_dash_at1208 (    struct Pane_127 *  pane3863 ,    struct Pos_20  pos3865 ) {
    struct StrView_21  line3866 = ( (  line962 ) ( ( ( * (  pane3863 ) ) .f_buf ) ,  ( (  pos3865 ) .f_line ) ) );
    return ( (  or_dash_else1209 ) ( ( (  head1210 ) ( ( (  chars619 ) ( ( (  byte_dash_substr396 ) ( (  line3866 ) ,  ( (  i32_dash_size273 ) ( ( (  pos3865 ) .f_bi ) ) ) ,  ( (  num_dash_bytes995 ) ( (  line3866 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
}

static  enum Unit_7   print1213 (    struct StrView_21  s1701 ) {
    ( (  for_dash_each613 ) ( ( (  chars619 ) ( (  s1701 ) ) ) ,  (  printf_dash_char215 ) ) );
    return ( Unit_7_Unit );
}

static  bool   undefined1214 (  ) {
    bool  temp1215;
    return (  temp1215 );
}

static  bool   todo1212 (  ) {
    ( (  print1213 ) ( ( (  from_dash_string231 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined1214 ) ( ) );
}

static  bool   reached_dash_target1195 (    struct Pane_127 *  pane3991 ,    enum MoveTarget_1186  target3993 ,    struct Pos_20  prev3995 ) {
    return ( {  enum MoveTarget_1186  dref3996 = (  target3993 ) ;  dref3996 == MoveTarget_1186_NextWordStart ? ( ( (  is_dash_word_dash_boundary1196 ) ( ( (  char_dash_at1208 ) ( (  pane3991 ) ,  (  prev3995 ) ) ) ,  ( (  char_dash_at1208 ) ( (  pane3991 ) ,  ( ( * (  pane3991 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1197 ( ( (  char_dash_type1200 ) ( ( (  char_dash_at1208 ) ( (  pane3991 ) ,  ( ( * (  pane3991 ) ) .f_cursor ) ) ) ) ) , ( CharType_1198_CharSpace ) ) ) ) ) :  dref3996 == MoveTarget_1186_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1196 ) ( ( (  char_dash_at1208 ) ( (  pane3991 ) ,  (  prev3995 ) ) ) ,  ( (  char_dash_at1208 ) ( (  pane3991 ) ,  ( ( * (  pane3991 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1197 ( ( (  char_dash_type1200 ) ( ( (  char_dash_at1208 ) ( (  pane3991 ) ,  (  prev3995 ) ) ) ) ) , ( CharType_1198_CharSpace ) ) ) ) ) : ( (  todo1212 ) ( ) ) ; } );
}

struct envunion1217 {
    enum Unit_7  (*fun) (  struct env1189*  );
    struct env1189 env;
};

struct envunion1219 {
    enum Unit_7  (*fun) (  struct env1189*  );
    struct env1189 env;
};

static  enum Unit_7   advance_dash_word1184 (    struct Pane_127 *  pane3999 ,    enum MoveDirection_1185  dir4001 ,    enum MoveTarget_1186  target4003 ) {
    struct Pos_20  temp1187 = ( (  own1188 ) ( ( ( * (  pane3999 ) ) .f_cursor ) ) );
    struct Pos_20 *  prev4004 = ( &temp1187 );
    struct env1189 envinst1189 = {
        .dir4001 =  dir4001 ,
        .prev4004 =  prev4004 ,
        .pane3999 =  pane3999 ,
    };
    struct Pos_20  sel4007 = ( ( * (  pane3999 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4008 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1190 ) ( (  pane3999 ) ) );
    struct envunion1193  temp1192 = ( (struct envunion1193){ .fun = (  enum Unit_7  (*) (  struct env1189*  ) )advance1194 , .env =  envinst1189 } );
    ( temp1192.fun ( &temp1192.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4008 ) || ( (  reached_dash_target1195 ) ( (  pane3999 ) ,  (  target4003 ) ,  ( * (  prev4004 ) ) ) ) ) ) {
        sel4007 = ( ( * (  pane3999 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1190 ) ( (  pane3999 ) ) ) ) {
        if ( (  eq330 ( ( ( * (  pane3999 ) ) .f_cursor ) , ( * (  prev4004 ) ) ) ) ) {
            return ( Unit_7_Unit );
        }
        struct envunion1217  temp1216 = ( (struct envunion1217){ .fun = (  enum Unit_7  (*) (  struct env1189*  ) )advance1194 , .env =  envinst1189 } );
        ( temp1216.fun ( &temp1216.env ) );
        sel4007 = ( ( * (  pane3999 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1219  temp1218 = ( (struct envunion1219){ .fun = (  enum Unit_7  (*) (  struct env1189*  ) )advance1194 , .env =  envinst1189 } );
        ( temp1218.fun ( &temp1218.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1190 ) ( (  pane3999 ) ) ) || ( (  reached_dash_target1195 ) ( (  pane3999 ) ,  (  target4003 ) ,  ( * (  prev4004 ) ) ) ) ) ) {
            enum MoveDirection_1185  dref4009 = (  dir4001 );
            switch (  dref4009 ) {
                case MoveDirection_1185_MoveFwd : {
                    ( (  move_dash_left955 ) ( (  pane3999 ) ) );
                    break;
                }
                case MoveDirection_1185_MoveBwd : {
                    ( (  move_dash_right1000 ) ( (  pane3999 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq330 ( ( * (  prev4004 ) ) , ( ( * (  pane3999 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel991 ) ( (  pane3999 ) ,  ( ( Maybe_28_Just ) ( (  sel4007 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  size_t   size1224 (    struct List_24 *  l2133 ) {
    return ( ( * (  l2133 ) ) .f_count );
}

static  struct Changeset_26 *   get_dash_ptr1227 (    struct List_24 *  list2001 ,    size_t  i2003 ) {
    if ( ( (  cmp195 ( (  i2003 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i2003 ) , ( ( * (  list2001 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic263 ) ( ( ( StrConcat_264_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2003 ) ) ) ,  ( (  from_dash_string231 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2001 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1108 ) ( ( ( * (  list2001 ) ) .f_elements ) ,  (  i2003 ) ) );
}

static  struct Changeset_26   get1226 (    struct List_24 *  list2011 ,    size_t  i2013 ) {
    return ( * ( (  get_dash_ptr1227 ) ( (  list2011 ) ,  (  i2013 ) ) ) );
}

static  struct Changeset_26   elem_dash_get1225 (    struct List_24  self2081 ,    size_t  k2083 ) {
    return ( (  get1226 ) ( ( & (  self2081 ) ) ,  (  k2083 ) ) );
}

static  struct Action_19   undefined1236 (  ) {
    struct Action_19  temp1237;
    return (  temp1237 );
}

static  struct Action_19   or_dash_fail1235 (    struct Maybe_1061  x1725 ,    struct StrConcat_264  errmsg1727 ) {
    struct Maybe_1061  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_1061_None_t ) {
        ( (  panic263 ) ( (  errmsg1727 ) ) );
        return ( (  undefined1236 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_1061_Just_t ) {
            return ( dref1728 .stuff .Maybe_1061_Just_s .field0 );
        }
    }
}

static  struct Maybe_1061   try_dash_get1238 (    struct Slice_18  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp195 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp195 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1061) { .tag = Maybe_1061_None_t } );
    }
    struct Action_19 *  elem_dash_ptr1766 = ( (  offset_dash_ptr1059 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_1061_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  struct Action_19   get1234 (    struct Slice_18  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail1235 ) ( ( (  try_dash_get1238 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_264_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string231 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_19   elem_dash_get1233 (    struct Slice_18  self1867 ,    size_t  idx1869 ) {
    return ( (  get1234 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

static  struct Action_19   last1232 (    struct Slice_18  s1935 ) {
    if ( (  eq250 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1079 ) ( ( (  from_dash_string231 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1233 ( (  s1935 ) , (  op_dash_sub315 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_18   to_dash_slice1239 (    struct List_17  l2126 ) {
    struct Action_19 *  ptr2127 = ( ( (  l2126 ) .f_elements ) .f_ptr );
    return ( (struct Slice_18) { .f_ptr = (  ptr2127 ) , .f_count = ( (  l2126 ) .f_count ) } );
}

static  struct Maybe_113   redo1223 (   struct env100* env ,    struct TextBuf_88 *  self3725 ) {
    ( (  flush_dash_insert_dash_action1009 ) ( (  self3725 ) ) );
    struct Actions_89 *  actions3726 = ( & ( ( * (  self3725 ) ) .f_actions ) );
    if ( (  cmp195 ( ( ( * (  actions3726 ) ) .f_cur ) , ( (  size1224 ) ( ( & ( ( * (  actions3726 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_113) { .tag = Maybe_113_None_t } );
    }
    struct Changeset_26  changeset3727 = (  elem_dash_get1225 ( ( ( * (  actions3726 ) ) .f_list ) , ( ( * (  actions3726 ) ) .f_cur ) ) );
    struct Pos_20  temp1228;
    struct Pos_20  to_dash_fwd3728 = (  temp1228 );
    struct SliceIter_1054  temp1229 =  into_dash_iter1056 ( ( (  changeset3727 ) .f_parts ) );
    while (true) {
        struct Maybe_1061  __cond1230 =  next1062 (&temp1229);
        if (  __cond1230 .tag == 0 ) {
            break;
        }
        struct Action_19  action3730 =  __cond1230 .stuff .Maybe_1061_Just_s .field0;
        struct envunion101  temp1231 = ( (struct envunion101){ .fun = (  struct Pos_20  (*) (  struct env96*  ,    struct TextBuf_88 *  ,    struct Action_19  ) )action_dash_fwd1169 , .env =  env->envinst96 } );
        to_dash_fwd3728 = ( temp1231.fun ( &temp1231.env ,  (  self3725 ) ,  (  action3730 ) ) );
    }
    (*  actions3726 ) .f_cur = (  op_dash_add243 ( ( ( * (  actions3726 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_19  last_dash_action3731 = ( (  last1232 ) ( ( (  to_dash_slice1239 ) ( ( (  changeset3727 ) .f_parts ) ) ) ) );
    if ( (  cmp195 ( ( (  num_dash_bytes995 ) ( ( (  last_dash_action3731 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_20  to_dash_fwd3732 = ( (  left_dash_pos994 ) ( (  self3725 ) ,  (  to_dash_fwd3728 ) ) );
        return ( ( Maybe_113_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3732 ) , .f_sel = ( ( Maybe_28_Just ) ( ( (  last_dash_action3731 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_113_Just ) ( ( (struct Cursors_27) { .f_cur = (  to_dash_fwd3728 ) , .f_sel = ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) } ) ) );
    }
}

struct env1241 {
    struct Pane_127 *  self4075;
    ;
};

struct envunion1242 {
    enum Unit_7  (*fun) (  struct env1241*  ,    struct Cursors_27  );
    struct env1241 env;
};

static  enum Unit_7   if_dash_just1240 (    struct Maybe_113  x1291 ,   struct envunion1242  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion1242  temp1243 = (  fun1293 );
        ( temp1243.fun ( &temp1243.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1244 (   struct env1241* env ,    struct Cursors_27  cursors4078 ) {
    ( (  set_dash_cursors956 ) ( ( env->self4075 ) ,  ( (  cursors4078 ) .f_cur ) ,  ( (  cursors4078 ) .f_sel ) ,  ( CursorMovement_957_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   redo1221 (   struct env118* env ,    struct Pane_127 *  self4075 ) {
    struct envunion119  temp1222 = ( (struct envunion119){ .fun = (  struct Maybe_113  (*) (  struct env100*  ,    struct TextBuf_88 *  ) )redo1223 , .env =  env->envinst100 } );
    struct Maybe_113  mcursors4076 = ( temp1222.fun ( &temp1222.env ,  ( ( * (  self4075 ) ) .f_buf ) ) );
    struct env1241 envinst1241 = {
        .self4075 =  self4075 ,
    };
    ( (  if_dash_just1240 ) ( (  mcursors4076 ) ,  ( (struct envunion1242){ .fun = (  enum Unit_7  (*) (  struct env1241*  ,    struct Cursors_27  ) )lam1244 , .env =  envinst1241 } ) ) );
    return ( Unit_7_Unit );
}

struct SliceReversedIter_1250 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1250   into_dash_iter1251 (    struct SliceReversedIter_1250  self1898 ) {
    return (  self1898 );
}

static  struct SliceReversedIter_1250   reversed1252 (    struct Slice_18  slice1895 ) {
    return ( (struct SliceReversedIter_1250) { .f_slice = (  slice1895 ) , .f_current_dash_offset = ( (  slice1895 ) .f_count ) } );
}

static  struct Maybe_1061   next1254 (    struct SliceReversedIter_1250 *  self1901 ) {
    size_t  off1902 = ( ( * (  self1901 ) ) .f_current_dash_offset );
    if ( (  eq250 ( (  off1902 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1061) { .tag = Maybe_1061_None_t } );
    }
    (*  self1901 ) .f_current_dash_offset = (  op_dash_sub315 ( (  off1902 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1061_Just ) ( (  elem_dash_get1233 ( ( ( * (  self1901 ) ) .f_slice ) , ( ( * (  self1901 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_20   action_dash_bwd1256 (   struct env94* env ,    struct TextBuf_88 *  self3693 ,    struct Action_19  action3695 ) {
    struct envunion95  temp1257 = ( (struct envunion95){ .fun = (  enum Unit_7  (*) (  struct env85*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action325 , .env =  env->envinst85 } );
    ( temp1257.fun ( &temp1257.env ,  (  self3693 ) ,  ( (  action3695 ) .f_from ) ,  ( (  action3695 ) .f_to_dash_fwd ) ,  ( (  action3695 ) .f_bwd ) ) );
    return ( (  action3695 ) .f_to_dash_bwd );
}

static  struct Maybe_113   undo1248 (   struct env98* env ,    struct TextBuf_88 *  self3718 ) {
    ( (  flush_dash_insert_dash_action1009 ) ( (  self3718 ) ) );
    struct Actions_89 *  actions3719 = ( & ( ( * (  self3718 ) ) .f_actions ) );
    if ( (  eq250 ( ( ( * (  actions3719 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_113) { .tag = Maybe_113_None_t } );
    }
    (*  actions3719 ) .f_cur = (  op_dash_sub315 ( ( ( * (  actions3719 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_26  changeset3720 = (  elem_dash_get1225 ( ( ( * (  actions3719 ) ) .f_list ) , ( ( * (  actions3719 ) ) .f_cur ) ) );
    struct SliceReversedIter_1250  temp1249 =  into_dash_iter1251 ( ( (  reversed1252 ) ( ( (  to_dash_slice1239 ) ( ( (  changeset3720 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1061  __cond1253 =  next1254 (&temp1249);
        if (  __cond1253 .tag == 0 ) {
            break;
        }
        struct Action_19  action3722 =  __cond1253 .stuff .Maybe_1061_Just_s .field0;
        struct envunion99  temp1255 = ( (struct envunion99){ .fun = (  struct Pos_20  (*) (  struct env94*  ,    struct TextBuf_88 *  ,    struct Action_19  ) )action_dash_bwd1256 , .env =  env->envinst94 } );
        ( temp1255.fun ( &temp1255.env ,  (  self3718 ) ,  (  action3722 ) ) );
    }
    return ( ( Maybe_113_Just ) ( ( (  changeset3720 ) .f_before_dash_cursors ) ) );
}

struct env1259 {
    struct Pane_127 *  self4069;
    ;
};

struct envunion1260 {
    enum Unit_7  (*fun) (  struct env1259*  ,    struct Cursors_27  );
    struct env1259 env;
};

static  enum Unit_7   if_dash_just1258 (    struct Maybe_113  x1291 ,   struct envunion1260  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion1260  temp1261 = (  fun1293 );
        ( temp1261.fun ( &temp1261.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1262 (   struct env1259* env ,    struct Cursors_27  cursors4072 ) {
    ( (  set_dash_cursors956 ) ( ( env->self4069 ) ,  ( (  cursors4072 ) .f_cur ) ,  ( (  cursors4072 ) .f_sel ) ,  ( CursorMovement_957_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   undo1246 (   struct env116* env ,    struct Pane_127 *  self4069 ) {
    struct envunion117  temp1247 = ( (struct envunion117){ .fun = (  struct Maybe_113  (*) (  struct env98*  ,    struct TextBuf_88 *  ) )undo1248 , .env =  env->envinst98 } );
    struct Maybe_113  mcursors4070 = ( temp1247.fun ( &temp1247.env ,  ( ( * (  self4069 ) ) .f_buf ) ) );
    struct env1259 envinst1259 = {
        .self4069 =  self4069 ,
    };
    ( (  if_dash_just1258 ) ( (  mcursors4070 ) ,  ( (struct envunion1260){ .fun = (  enum Unit_7  (*) (  struct env1259*  ,    struct Cursors_27  ) )lam1262 , .env =  envinst1259 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Tuple2_138   minmax1266 (    struct Pos_20  l1329 ,    struct Pos_20  r1331 ) {
    return ( (  cmp327 ( (  l1329 ) , (  r1331 ) ) == 0 ) ? ( ( Tuple2_138_Tuple2 ) ( (  l1329 ) ,  (  r1331 ) ) ) : ( ( Tuple2_138_Tuple2 ) ( (  r1331 ) ,  (  l1329 ) ) ) );
}

static  struct Pos_20   or_dash_else1267 (    struct Maybe_28  self1732 ,    struct Pos_20  alt1734 ) {
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

static  struct Pos_20   fst1268 (    struct Tuple2_138  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_20   snd1269 (    struct Tuple2_138  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tuple2_138   selection1265 (    struct Pane_127 *  self4081 ) {
    struct Tuple2_138  from_dash_to4082 = ( (  minmax1266 ) ( ( (  or_dash_else1267 ) ( ( ( * (  self4081 ) ) .f_sel ) ,  ( ( * (  self4081 ) ) .f_cursor ) ) ) ,  ( ( * (  self4081 ) ) .f_cursor ) ) );
    struct Pos_20  from4083 = ( (  fst1268 ) ( (  from_dash_to4082 ) ) );
    struct Pos_20  to4084 = ( (  right_dash_pos1001 ) ( ( ( * (  self4081 ) ) .f_buf ) ,  ( (  snd1269 ) ( (  from_dash_to4082 ) ) ) ) );
    return ( ( Tuple2_138_Tuple2 ) ( (  from4083 ) ,  (  to4084 ) ) );
}

struct env1272 {
    struct Editor_147 *  ed4187;
    ;
};

struct envunion1273 {
    enum Unit_7  (*fun) (  struct env1272*  ,    struct StrView_21  );
    struct env1272 env;
};

static  enum Unit_7   if_dash_just1271 (    struct Maybe_148  x1291 ,   struct envunion1273  fun1293 ) {
    struct Maybe_148  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_148_Just_t ) {
        struct envunion1273  temp1274 = (  fun1293 );
        ( temp1274.fun ( &temp1274.env ,  ( dref1294 .stuff .Maybe_148_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_148_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1275 (   struct env1272* env ,    struct StrView_21  cp4191 ) {
    ( (  free949 ) ( (  cp4191 ) ,  ( ( * ( env->ed4187 ) ) .f_al ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   copy_dash_selection_dash_to_dash_clipboard1264 (   struct env139* env ,    struct Editor_147 *  ed4187 ) {
    struct Tuple2_138  from_dash_to4188 = ( (  selection1265 ) ( ( (  pane999 ) ( (  ed4187 ) ) ) ) );
    struct envunion140  temp1270 = ( (struct envunion140){ .fun = (  struct StrView_21  (*) (  struct env102*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ) )str_dash_between1090 , .env =  env->envinst102 } );
    struct StrView_21  cpd4189 = ( temp1270.fun ( &temp1270.env ,  ( ( ( * (  ed4187 ) ) .f_pane ) .f_buf ) ,  ( (  fst1268 ) ( (  from_dash_to4188 ) ) ) ,  ( (  snd1269 ) ( (  from_dash_to4188 ) ) ) ) );
    struct env1272 envinst1272 = {
        .ed4187 =  ed4187 ,
    };
    ( (  if_dash_just1271 ) ( ( ( * (  ed4187 ) ) .f_clipboard ) ,  ( (struct envunion1273){ .fun = (  enum Unit_7  (*) (  struct env1272*  ,    struct StrView_21  ) )lam1275 , .env =  envinst1272 } ) ) );
    (*  ed4187 ) .f_clipboard = ( ( Maybe_148_Just ) ( (  cpd4189 ) ) );
    return ( Unit_7_Unit );
}

struct envunion1277 {
    enum Unit_7  (*fun) (  struct env120*  ,    struct Pane_127 *  ,    struct Tuple2_138  ,    struct StrView_21  );
    struct env120 env;
};

struct env1281 {
    ;
    struct Pane_127 *  self4087;
};

struct envunion1282 {
    enum Unit_7  (*fun) (  struct env1281*  ,    struct Cursors_27  );
    struct env1281 env;
};

static  enum Unit_7   if_dash_just1280 (    struct Maybe_113  x1291 ,   struct envunion1282  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion1282  temp1283 = (  fun1293 );
        ( temp1283.fun ( &temp1283.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1284 (   struct env1281* env ,    struct Cursors_27  cursors4094 ) {
    ( (  set_dash_cursors956 ) ( ( env->self4087 ) ,  ( (  cursors4094 ) .f_cur ) ,  ( (  cursors4094 ) .f_sel ) ,  ( CursorMovement_957_OverrideSelect ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   replace_dash_selection1278 (   struct env120* env ,    struct Pane_127 *  self4087 ,    struct Tuple2_138  pos_prime_s4089 ,    struct StrView_21  cp4091 ) {
    struct envunion121  temp1279 = ( (struct envunion121){ .fun = (  struct Maybe_113  (*) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  ) )change1034 , .env =  env->envinst104 } );
    struct Maybe_113  mcursors4092 = ( temp1279.fun ( &temp1279.env ,  ( ( * (  self4087 ) ) .f_buf ) ,  ( (  fst1268 ) ( (  pos_prime_s4089 ) ) ) ,  ( (  snd1269 ) ( (  pos_prime_s4089 ) ) ) ,  (  cp4091 ) ,  ( ( Maybe_113_Just ) ( ( (struct Cursors_27) { .f_cur = ( ( * (  self4087 ) ) .f_cursor ) , .f_sel = ( ( * (  self4087 ) ) .f_sel ) } ) ) ) ) );
    struct env1281 envinst1281 = {
        .self4087 =  self4087 ,
    };
    ( (  if_dash_just1280 ) ( (  mcursors4092 ) ,  ( (struct envunion1282){ .fun = (  enum Unit_7  (*) (  struct env1281*  ,    struct Cursors_27  ) )lam1284 , .env =  envinst1281 } ) ) );
    return ( Unit_7_Unit );
}

struct envunion1286 {
    enum Unit_7  (*fun) (  struct env139*  ,    struct Editor_147 *  );
    struct env139 env;
};

struct envunion1289 {
    enum Unit_7  (*fun) (  struct env139*  ,    struct Editor_147 *  );
    struct env139 env;
};

static  struct StrBuilder_54   mk1295 (    enum CAllocator_9  al2781 ) {
    return ( (struct StrBuilder_54) { .f_chars = ( (  mk294 ) ( (  al2781 ) ) ) } );
}

struct IntStrIter_1301 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1300 {
    struct StrViewIter_614  f_left;
    struct IntStrIter_1301  f_right;
};

struct StrConcatIter_1299 {
    struct StrConcatIter_1300  f_left;
    struct StrViewIter_614  f_right;
};

struct env1302 {
    struct env52 envinst52;
    struct StrBuilder_54 *  builder2749;
};

struct envunion1303 {
    enum Unit_7  (*fun) (  struct env1302*  ,    struct Char_57  );
    struct env1302 env;
};

static  struct StrConcatIter_1299   into_dash_iter1305 (    struct StrConcatIter_1299  self1491 ) {
    return (  self1491 );
}

struct env1311 {
    ;
    size_t  base1210;
};

struct envunion1312 {
    size_t  (*fun) (  struct env1311*  ,    int32_t  ,    size_t  );
    struct env1311 env;
};

static  size_t   reduce1310 (    struct Range_697  iterable1093 ,    size_t  base1095 ,   struct envunion1312  fun1097 ) {
    size_t  x1098 = (  base1095 );
    struct RangeIter_700  it1099 = ( (  into_dash_iter702 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_283  dref1100 = ( (  next703 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_283_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_283_Just_t ) {
                struct envunion1312  temp1313 = (  fun1097 );
                x1098 = ( temp1313.fun ( &temp1313.env ,  ( dref1100 .stuff .Maybe_283_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1314 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1314);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1315;
    return (  temp1315 );
}

static  size_t   lam1316 (   struct env1311* env ,    int32_t  item1214 ,    size_t  x1216 ) {
    return (  op_dash_mul256 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  size_t   pow1309 (    size_t  base1210 ,    int32_t  p1212 ) {
    struct env1311 envinst1311 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1310 ) ( ( (  to705 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub823 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1312){ .fun = (  size_t  (*) (  struct env1311*  ,    int32_t  ,    size_t  ) )lam1316 , .env =  envinst1311 } ) ) );
}

static  uint8_t   cast1317 (    size_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_617   next1308 (    struct IntStrIter_1301 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_617_Just ) ( ( (  from_dash_charlike232 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp328 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_617) { .tag = Maybe_617_None_t } );
    }
    size_t  trim_dash_down1423 = ( (  pow1309 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub823 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    size_t  upper1424 = (  op_dash_div222 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    size_t  upper_dash_mask1425 = (  op_dash_mul256 ( (  op_dash_div222 ( (  upper1424 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1317 ) ( (  op_dash_sub315 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub823 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8903 ) ( (  op_dash_add793 ( (  digit1426 ) , (  from_dash_integral223 ( 48 ) ) ) ) ) );
    return ( ( Maybe_617_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_617   next1307 (    struct StrConcatIter_1300 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next1308 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next1306 (    struct StrConcatIter_1299 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next1307 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each1298 (    struct StrConcatIter_1299  iterable1074 ,   struct envunion1303  fun1076 ) {
    struct StrConcatIter_1299  temp1304 = ( (  into_dash_iter1305 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1299 *  it1077 = ( &temp1304 );
    while ( ( true ) ) {
        struct Maybe_617  dref1078 = ( (  next1306 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_617_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_617_Just_t ) {
                struct envunion1303  temp1318 = (  fun1076 );
                ( temp1318.fun ( &temp1318.env ,  ( dref1078 .stuff .Maybe_617_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  int32_t   count_dash_digits1325 (    size_t  self1430 ) {
    if ( (  eq250 ( (  self1430 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp195 ( (  self1430 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div222 ( (  self1430 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1431 = (  op_dash_add285 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1301   uint_dash_iter1324 (    size_t  int1437 ) {
    return ( (struct IntStrIter_1301) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1325 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1301   chars1323 (    size_t  self1467 ) {
    return ( (  uint_dash_iter1324 ) ( (  self1467 ) ) );
}

static  struct StrConcatIter_1300   into_dash_iter1322 (    struct StrConcat_67  dref1498 ) {
    return ( (struct StrConcatIter_1300) { .f_left = ( (  chars619 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1323 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1300   chars1321 (    struct StrConcat_67  self1509 ) {
    return ( (  into_dash_iter1322 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1299   into_dash_iter1320 (    struct StrConcat_66  dref1498 ) {
    return ( (struct StrConcatIter_1299) { .f_left = ( (  chars1321 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars619 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1299   chars1319 (    struct StrConcat_66  self1509 ) {
    return ( (  into_dash_iter1320 ) ( (  self1509 ) ) );
}

static  enum Unit_7   write_dash_slice1330 (   struct env50* env ,    struct StrBuilder_54 *  builder2739 ,    struct Slice_12  s2741 ) {
    struct envunion51  temp1331 = ( (struct envunion51){ .fun = (  enum Unit_7  (*) (  struct env40*  ,    struct List_11 *  ,    struct Slice_12  ) )add_dash_all349 , .env =  env->envinst40 } );
    ( temp1331.fun ( &temp1331.env ,  ( & ( ( * (  builder2739 ) ) .f_chars ) ) ,  (  s2741 ) ) );
    return ( Unit_7_Unit );
}

static  struct Slice_12   from_dash_char1332 (    struct Char_57  c1941 ,    uint8_t *  buf1943 ) {
    struct CharDestructured_216  dref1944 = ( (  destructure218 ) ( (  c1941 ) ) );
    if ( dref1944.tag == CharDestructured_216_Ref_t ) {
        return ( (struct Slice_12) { .f_ptr = ( ( dref1944 .stuff .CharDestructured_216_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1944 .stuff .CharDestructured_216_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1944.tag == CharDestructured_216_Scalar_t ) {
            if ( (  cmp226 ( ( ( dref1944 .stuff .CharDestructured_216_Scalar_s .field0 ) .f_value ) , (  from_dash_integral227 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1333 = ( (  from_dash_string49 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp1333);
                exit ( 1 );
                ( Unit_7_Unit );
            }
            (*  buf1943 ) = ( (  u32_dash_u8229 ) ( ( ( dref1944 .stuff .CharDestructured_216_Scalar_s .field0 ) .f_value ) ) );
            return ( (struct Slice_12) { .f_ptr = (  buf1943 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_7   write_dash_char1328 (   struct env52* env ,    struct StrBuilder_54 *  builder2744 ,    struct Char_57  c2746 ) {
    struct envunion53  temp1329 = ( (struct envunion53){ .fun = (  enum Unit_7  (*) (  struct env50*  ,    struct StrBuilder_54 *  ,    struct Slice_12  ) )write_dash_slice1330 , .env =  env->envinst50 } );
    uint8_t  temp1335;
    uint8_t  temp1334 = (  temp1335 );
    ( temp1329.fun ( &temp1329.env ,  (  builder2744 ) ,  ( (  from_dash_char1332 ) ( (  c2746 ) ,  ( &temp1334 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1326 (   struct env1302* env ,    struct Char_57  c2753 ) {
    struct envunion56  temp1327 = ( (struct envunion56){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1328 , .env =  env->envinst52 } );
    return ( temp1327.fun ( &temp1327.env ,  ( env->builder2749 ) ,  (  c2753 ) ) );
}

static  enum Unit_7   write1297 (   struct env58* env ,    struct StrBuilder_54 *  builder2749 ,    struct StrConcat_66  s2751 ) {
    struct env1302 envinst1302 = {
        .envinst52 = env->envinst52 ,
        .builder2749 =  builder2749 ,
    };
    ( (  for_dash_each1298 ) ( ( (  chars1319 ) ( (  s2751 ) ) ) ,  ( (struct envunion1303){ .fun = (  enum Unit_7  (*) (  struct env1302*  ,    struct Char_57  ) )lam1326 , .env =  envinst1302 } ) ) );
    return ( Unit_7_Unit );
}

static  uint8_t *   cast_dash_ptr1339 (    uint8_t *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_12   cast_dash_slice1338 (    struct Slice_12  s1932 ) {
    return ( (struct Slice_12) { .f_ptr = ( (  cast_dash_ptr1339 ) ( ( (  s1932 ) .f_ptr ) ) ) , .f_count = ( (  s1932 ) .f_count ) } );
}

static  struct StrView_21   as_dash_str1337 (    struct StrBuilder_54 *  builder2787 ) {
    return ( (struct StrView_21) { .f_contents = ( (  cast_dash_slice1338 ) ( ( (  subslice339 ) ( ( ( ( * (  builder2787 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2787 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_21   mk_dash_dyn_dash_str1293 (   struct env64* env ,    struct StrConcat_66  s2807 ,    enum CAllocator_9  al2809 ) {
    struct StrBuilder_54  temp1294 = ( (  mk1295 ) ( (  al2809 ) ) );
    struct StrBuilder_54 *  sb2810 = ( &temp1294 );
    struct envunion65  temp1296 = ( (struct envunion65){ .fun = (  enum Unit_7  (*) (  struct env58*  ,    struct StrBuilder_54 *  ,    struct StrConcat_66  ) )write1297 , .env =  env->envinst58 } );
    ( temp1296.fun ( &temp1296.env ,  (  sb2810 ) ,  (  s2807 ) ) );
    struct envunion62  temp1336 = ( (struct envunion62){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1328 , .env =  env->envinst52 } );
    ( temp1336.fun ( &temp1336.env ,  (  sb2810 ) ,  ( (  nullchar539 ) ( ) ) ) );
    struct StrView_21  dynstr2811 = ( (  as_dash_str1337 ) ( (  sb2810 ) ) );
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = ( ( (  dynstr2811 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub315 ( ( ( (  dynstr2811 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_7   set_dash_msg1291 (   struct env143* env ,    struct Editor_147 *  ed4199 ,    struct StrConcat_66  s4201 ) {
    ( (  reset_dash_msg943 ) ( (  ed4199 ) ) );
    struct envunion144  temp1292 = ( (struct envunion144){ .fun = (  struct StrView_21  (*) (  struct env64*  ,    struct StrConcat_66  ,    enum CAllocator_9  ) )mk_dash_dyn_dash_str1293 , .env =  env->envinst64 } );
    (*  ed4199 ) .f_msg = ( ( Maybe_148_Just ) ( ( temp1292.fun ( &temp1292.env ,  (  s4201 ) ,  ( ( * (  ed4199 ) ) .f_al ) ) ) ) );
    return ( Unit_7_Unit );
}

struct envunion1342 {
    enum Unit_7  (*fun) (  struct env120*  ,    struct Pane_127 *  ,    struct Tuple2_138  ,    struct StrView_21  );
    struct env120 env;
};

struct env1341 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct Editor_147 *  ed4245;
    ;
    ;
    ;
    struct env120 envinst120;
};

struct envunion1343 {
    enum Unit_7  (*fun) (  struct env1341*  ,    struct StrView_21  );
    struct env1341 env;
};

static  enum Unit_7   if_dash_just1340 (    struct Maybe_148  x1291 ,   struct envunion1343  fun1293 ) {
    struct Maybe_148  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_148_Just_t ) {
        struct envunion1343  temp1344 = (  fun1293 );
        ( temp1344.fun ( &temp1344.env ,  ( dref1294 .stuff .Maybe_148_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_148_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  struct Pos_20   max_dash_pos1346 (    struct Pane_127 *  pane4017 ) {
    return ( {  struct Maybe_28  dref4018 = ( ( * (  pane4017 ) ) .f_sel ) ; dref4018.tag == Maybe_28_Just_t ? ( (  max329 ) ( ( ( * (  pane4017 ) ) .f_cursor ) ,  ( dref4018 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( ( * (  pane4017 ) ) .f_cursor ) ; } );
}

static  uint8_t   elem_dash_get1348 (    struct Slice_12  self1867 ,    size_t  idx1869 ) {
    return ( (  get390 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

static  uint8_t   last1347 (    struct Slice_12  s1935 ) {
    if ( (  eq250 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1079 ) ( ( (  from_dash_string231 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1348 ( (  s1935 ) , (  op_dash_sub315 ( ( (  s1935 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1349 (    int32_t  x1352 ,    int32_t  mn1354 ,    int32_t  mx1356 ) {
    if ( (  cmp328 ( (  x1352 ) , (  mn1354 ) ) == 0 ) ) {
        return (  mn1354 );
    } else {
        if ( (  cmp328 ( (  x1352 ) , (  mx1356 ) ) == 2 ) ) {
            return (  mx1356 );
        } else {
            return (  x1352 );
        }
    }
}

static  enum Unit_7   lam1345 (   struct env1341* env ,    struct StrView_21  cp4256 ) {
    struct Pos_20  start4257 = ( (  max_dash_pos1346 ) ( ( (  pane999 ) ( ( env->ed4245 ) ) ) ) );
    if ( (  eq219 ( ( (  last1347 ) ( ( (  cp4256 ) .f_contents ) ) ) , ( (  ascii_dash_u8756 ) ( ( (  from_dash_charlike798 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        start4257 = ( (struct Pos_20) { .f_line = ( (  clamp1349 ) ( (  op_dash_add285 ( ( (  start4257 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  num_dash_lines1002 ) ( ( ( * ( (  pane999 ) ( ( env->ed4245 ) ) ) ) .f_buf ) ) ) ) ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } );
    } else {
        start4257 = ( (  right_dash_pos1001 ) ( ( ( ( * ( env->ed4245 ) ) .f_pane ) .f_buf ) ,  (  start4257 ) ) );
    }
    struct envunion1342  temp1350 = ( (struct envunion1342){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_127 *  ,    struct Tuple2_138  ,    struct StrView_21  ) )replace_dash_selection1278 , .env =  env->envinst120 } );
    ( temp1350.fun ( &temp1350.env ,  ( (  pane999 ) ( ( env->ed4245 ) ) ) ,  ( ( Tuple2_138_Tuple2 ) ( (  start4257 ) ,  (  start4257 ) ) ) ,  (  cp4256 ) ) );
    return ( Unit_7_Unit );
}

struct envunion1353 {
    enum Unit_7  (*fun) (  struct env120*  ,    struct Pane_127 *  ,    struct Tuple2_138  ,    struct StrView_21  );
    struct env120 env;
};

struct env1352 {
    ;
    struct env120 envinst120;
    ;
    ;
    ;
    ;
    ;
    ;
    struct Editor_147 *  ed4245;
};

struct envunion1354 {
    enum Unit_7  (*fun) (  struct env1352*  ,    struct StrView_21  );
    struct env1352 env;
};

static  enum Unit_7   if_dash_just1351 (    struct Maybe_148  x1291 ,   struct envunion1354  fun1293 ) {
    struct Maybe_148  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_148_Just_t ) {
        struct envunion1354  temp1355 = (  fun1293 );
        ( temp1355.fun ( &temp1355.env ,  ( dref1294 .stuff .Maybe_148_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_148_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  struct Pos_20   min_dash_pos1357 (    struct Pane_127 *  pane4012 ) {
    return ( {  struct Maybe_28  dref4013 = ( ( * (  pane4012 ) ) .f_sel ) ; dref4013.tag == Maybe_28_Just_t ? ( (  min326 ) ( ( ( * (  pane4012 ) ) .f_cursor ) ,  ( dref4013 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( ( * (  pane4012 ) ) .f_cursor ) ; } );
}

static  enum Unit_7   lam1356 (   struct env1352* env ,    struct StrView_21  cp4259 ) {
    struct Pos_20  start4260 = ( (  min_dash_pos1357 ) ( ( (  pane999 ) ( ( env->ed4245 ) ) ) ) );
    if ( (  eq219 ( ( (  last1347 ) ( ( (  cp4259 ) .f_contents ) ) ) , ( (  ascii_dash_u8756 ) ( ( (  from_dash_charlike798 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_20  temp1358 = (  start4260 );
        temp1358 .  f_bi = (  from_dash_integral48 ( 0 ) );
        start4260 = ( temp1358 );
    }
    struct envunion1353  temp1359 = ( (struct envunion1353){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_127 *  ,    struct Tuple2_138  ,    struct StrView_21  ) )replace_dash_selection1278 , .env =  env->envinst120 } );
    ( temp1359.fun ( &temp1359.env ,  ( (  pane999 ) ( ( env->ed4245 ) ) ) ,  ( ( Tuple2_138_Tuple2 ) ( (  start4260 ) ,  (  start4260 ) ) ) ,  (  cp4259 ) ) );
    return ( Unit_7_Unit );
}

struct envunion1362 {
    enum Unit_7  (*fun) (  struct env120*  ,    struct Pane_127 *  ,    struct Tuple2_138  ,    struct StrView_21  );
    struct env120 env;
};

struct env1361 {
    ;
    struct Editor_147 *  ed4245;
    ;
    struct env120 envinst120;
};

struct envunion1363 {
    enum Unit_7  (*fun) (  struct env1361*  ,    struct StrView_21  );
    struct env1361 env;
};

static  enum Unit_7   if_dash_just1360 (    struct Maybe_148  x1291 ,   struct envunion1363  fun1293 ) {
    struct Maybe_148  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_148_Just_t ) {
        struct envunion1363  temp1364 = (  fun1293 );
        ( temp1364.fun ( &temp1364.env ,  ( dref1294 .stuff .Maybe_148_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_148_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1365 (   struct env1361* env ,    struct StrView_21  cp4262 ) {
    struct Pos_20  start4263 = ( (  min_dash_pos1357 ) ( ( (  pane999 ) ( ( env->ed4245 ) ) ) ) );
    struct envunion1362  temp1366 = ( (struct envunion1362){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_127 *  ,    struct Tuple2_138  ,    struct StrView_21  ) )replace_dash_selection1278 , .env =  env->envinst120 } );
    ( temp1366.fun ( &temp1366.env ,  ( (  pane999 ) ( ( env->ed4245 ) ) ) ,  ( ( Tuple2_138_Tuple2 ) ( (  start4263 ) ,  (  start4263 ) ) ) ,  (  cp4262 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   expand1367 (    struct Pane_127 *  pane4031 ) {
    struct Pos_20  min_dash_pos4032 = ( (  min_dash_pos1357 ) ( (  pane4031 ) ) );
    struct Pos_20  max_dash_pos4033 = ( (  max_dash_pos1346 ) ( (  pane4031 ) ) );
    int32_t  max_dash_pos_dash_max4034 = ( (  size_dash_i32207 ) ( ( (  num_dash_bytes995 ) ( ( (  line962 ) ( ( ( * (  pane4031 ) ) .f_buf ) ,  ( (  max_dash_pos4033 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq331 ( ( (  min_dash_pos4032 ) .f_bi ) , (  from_dash_integral48 ( 0 ) ) ) ) && (  eq331 ( ( (  max_dash_pos4033 ) .f_bi ) , (  max_dash_pos_dash_max4034 ) ) ) ) ) ) {
        struct Pos_20  temp1368 = (  min_dash_pos4032 );
        temp1368 .  f_bi = (  from_dash_integral48 ( 0 ) );
        (*  pane4031 ) .f_sel = ( ( Maybe_28_Just ) ( ( temp1368 ) ) );
        struct Pos_20  temp1369 = (  max_dash_pos4033 );
        temp1369 .  f_bi = (  max_dash_pos_dash_max4034 );
        (*  pane4031 ) .f_cursor = ( temp1369 );
    } else {
        if ( (  cmp328 ( (  op_dash_add285 ( ( (  max_dash_pos4033 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) ) , ( (  num_dash_lines1002 ) ( ( ( * (  pane4031 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_7_Unit );
        }
        struct Pos_20  temp1370 = (  min_dash_pos4032 );
        temp1370 .  f_bi = (  from_dash_integral48 ( 0 ) );
        (*  pane4031 ) .f_sel = ( ( Maybe_28_Just ) ( ( temp1370 ) ) );
        int32_t  next_dash_line4035 = (  op_dash_add285 ( ( (  max_dash_pos4033 ) .f_line ) , (  from_dash_integral48 ( 1 ) ) ) );
        (*  pane4031 ) .f_cursor = ( (struct Pos_20) { .f_line = (  next_dash_line4035 ) , .f_bi = ( (  size_dash_i32207 ) ( ( (  num_dash_bytes995 ) ( ( (  line962 ) ( ( ( * (  pane4031 ) ) .f_buf ) ,  (  next_dash_line4035 ) ) ) ) ) ) ) } );
    }
    return ( Unit_7_Unit );
}

static  bool   is_dash_none1371 (    struct Maybe_28  m1264 ) {
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

struct Maybe_1373 {
    enum {
        Maybe_1373_None_t,
        Maybe_1373_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_138  field0;
        } Maybe_1373_Just_s;
    } stuff;
};

static struct Maybe_1373 Maybe_1373_Just (  struct Tuple2_138  field0 ) {
    return ( struct Maybe_1373 ) { .tag = Maybe_1373_Just_t, .stuff = { .Maybe_1373_Just_s = { .field0 = field0 } } };
};

struct env1375 {
    struct StrView_21  query4136;
    ;
    ;
    struct Pane_127 *  pane4132;
    ;
    ;
};

struct envunion1377 {
    struct Maybe_1017  (*fun) (  struct env1375*  ,    struct Pos_20  );
    struct env1375 env;
};

struct Zip_1384 {
    struct SliceIter_353  f_left_dash_it;
    struct SliceIter_353  f_right_dash_it;
};

struct Tuple2_1385 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_1385 Tuple2_1385_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_1385 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1387 {
    bool (*  fun1126 )(    struct Tuple2_1385  );
};

struct envunion1388 {
    bool  (*fun) (  struct env1387*  ,    struct Tuple2_1385  ,    bool  );
    struct env1387 env;
};

static  struct Zip_1384   into_dash_iter1389 (    struct Zip_1384  self911 ) {
    return (  self911 );
}

struct Maybe_1390 {
    enum {
        Maybe_1390_None_t,
        Maybe_1390_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1385  field0;
        } Maybe_1390_Just_s;
    } stuff;
};

static struct Maybe_1390 Maybe_1390_Just (  struct Tuple2_1385  field0 ) {
    return ( struct Maybe_1390 ) { .tag = Maybe_1390_Just_t, .stuff = { .Maybe_1390_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1390   next1391 (    struct Zip_1384 *  self914 ) {
    struct Zip_1384  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_356  dref916 = ( (  next357 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_356_None_t ) {
            return ( (struct Maybe_1390) { .tag = Maybe_1390_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_356_Just_t ) {
                struct Maybe_356  dref918 = ( (  next357 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_356_None_t ) {
                    return ( (struct Maybe_1390) { .tag = Maybe_1390_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_356_Just_t ) {
                        ( (  next357 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next357 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1390_Just ) ( ( ( Tuple2_1385_Tuple2 ) ( ( dref916 .stuff .Maybe_356_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_356_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1386 (    struct Zip_1384  iterable1093 ,    bool  base1095 ,   struct envunion1388  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_1384  it1099 = ( (  into_dash_iter1389 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1390  dref1100 = ( (  next1391 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1390_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1390_Just_t ) {
                struct envunion1388  temp1392 = (  fun1097 );
                x1098 = ( temp1392.fun ( &temp1392.env ,  ( dref1100 .stuff .Maybe_1390_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1393 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1393);
    exit ( 1 );
    ( Unit_7_Unit );
    bool  temp1394;
    return (  temp1394 );
}

static  bool   lam1395 (   struct env1387* env ,    struct Tuple2_1385  e1128 ,    bool  x1130 ) {
    return ( ( ( env->fun1126 ) ( (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1383 (    struct Zip_1384  it1124 ,    bool (*  fun1126 )(    struct Tuple2_1385  ) ) {
    struct env1387 envinst1387 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1386 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1388){ .fun = (  bool  (*) (  struct env1387*  ,    struct Tuple2_1385  ,    bool  ) )lam1395 , .env =  envinst1387 } ) ) );
}

static  struct Zip_1384   zip1396 (    struct Slice_12  left922 ,    struct Slice_12  right924 ) {
    struct SliceIter_353  left_dash_it925 = ( (  into_dash_iter355 ) ( (  left922 ) ) );
    struct SliceIter_353  right_dash_it926 = ( (  into_dash_iter355 ) ( (  right924 ) ) );
    return ( (struct Zip_1384) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  bool   lam1397 (    struct Tuple2_1385  dref1862 ) {
    return (  eq219 ( ( dref1862 .field0 ) , ( dref1862 .field1 ) ) );
}

static  bool   eq1382 (    struct Slice_12  l1859 ,    struct Slice_12  r1861 ) {
    if ( ( !  eq250 ( ( (  l1859 ) .f_count ) , ( (  r1861 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all1383 ) ( ( (  zip1396 ) ( (  l1859 ) ,  (  r1861 ) ) ) ,  (  lam1397 ) ) );
}

static  struct Maybe_1017   find_dash_slice1379 (    struct Slice_12  haystack1912 ,    struct Slice_12  needle1914 ) {
    struct RangeIter_700  temp1380 =  into_dash_iter702 ( ( (  to705 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub823 ( ( (  size_dash_i32207 ) ( ( (  haystack1912 ) .f_count ) ) ) , ( (  size_dash_i32207 ) ( ( (  needle1914 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_283  __cond1381 =  next703 (&temp1380);
        if (  __cond1381 .tag == 0 ) {
            break;
        }
        int32_t  i1916 =  __cond1381 .stuff .Maybe_283_Just_s .field0;
        if ( (  eq1382 ( ( (  subslice339 ) ( (  haystack1912 ) ,  ( (  i32_dash_size273 ) ( (  i1916 ) ) ) ,  (  op_dash_add243 ( ( (  i32_dash_size273 ) ( (  i1916 ) ) ) , ( (  needle1914 ) .f_count ) ) ) ) ) , (  needle1914 ) ) ) ) {
            return ( ( Maybe_1017_Just ) ( ( (  i32_dash_size273 ) ( (  i1916 ) ) ) ) );
        }
    }
    return ( (struct Maybe_1017) { .tag = Maybe_1017_None_t } );
}

static  struct StrView_21   byte_dash_substr_dash_from1398 (    struct StrView_21  s2190 ,    size_t  from2192 ) {
    return ( (struct StrView_21) { .f_contents = ( (  from338 ) ( ( (  s2190 ) .f_contents ) ,  (  from2192 ) ) ) } );
}

static  struct Maybe_1017   search_dash_on_dash_line1378 (   struct env1375* env ,    struct Pos_20  pos4139 ) {
    return ( (  find_dash_slice1379 ) ( ( ( (  byte_dash_substr_dash_from1398 ) ( ( (  line962 ) ( ( ( * ( env->pane4132 ) ) .f_buf ) ,  ( (  pos4139 ) .f_line ) ) ) ,  ( (  i32_dash_size273 ) ( ( (  pos4139 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4136 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1404 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  int32_t   op_dash_mul1405 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  int32_t   mod1403 (    int32_t  l1229 ,    int32_t  d1231 ) {
    int32_t  r1232 = (  op_dash_div1404 ( (  l1229 ) , (  d1231 ) ) );
    int32_t  m1233 = (  op_dash_sub823 ( (  l1229 ) , (  op_dash_mul1405 ( (  r1232 ) , (  d1231 ) ) ) ) );
    if ( (  cmp328 ( (  m1233 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add285 ( (  d1231 ) , (  m1233 ) ) );
    } else {
        return (  m1233 );
    }
}

struct envunion1407 {
    struct Maybe_1017  (*fun) (  struct env1375*  ,    struct Pos_20  );
    struct env1375 env;
};

static  struct Maybe_1373   search_dash_from1374 (    struct Pane_127 *  pane4132 ,    struct Pos_20  pos4134 ,    struct StrView_21  query4136 ) {
    struct env1375 envinst1375 = {
        .query4136 =  query4136 ,
        .pane4132 =  pane4132 ,
    };
    struct envunion1377  temp1376 = ( (struct envunion1377){ .fun = (  struct Maybe_1017  (*) (  struct env1375*  ,    struct Pos_20  ) )search_dash_on_dash_line1378 , .env =  envinst1375 } );
    struct Maybe_1017  dref4140 = ( temp1376.fun ( &temp1376.env ,  (  pos4134 ) ) );
    if ( dref4140.tag == Maybe_1017_Just_t ) {
        struct Pos_20  temp1399 = (  pos4134 );
        temp1399 .  f_bi = (  op_dash_add285 ( ( (  pos4134 ) .f_bi ) , ( (  size_dash_i32207 ) ( ( dref4140 .stuff .Maybe_1017_Just_s .field0 ) ) ) ) );
        struct Pos_20  sel_dash_pos4142 = ( temp1399 );
        struct Pos_20  temp1400 = (  pos4134 );
        temp1400 .  f_bi = (  op_dash_sub823 ( (  op_dash_add285 ( ( (  pos4134 ) .f_bi ) , ( (  size_dash_i32207 ) ( (  op_dash_add243 ( ( dref4140 .stuff .Maybe_1017_Just_s .field0 ) , ( (  num_dash_bytes995 ) ( (  query4136 ) ) ) ) ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
        struct Pos_20  cur_dash_pos4143 = ( temp1400 );
        return ( ( Maybe_1373_Just ) ( ( ( Tuple2_138_Tuple2 ) ( (  sel_dash_pos4142 ) ,  (  cur_dash_pos4143 ) ) ) ) );
    }
    else {
        if ( dref4140.tag == Maybe_1017_None_t ) {
            int32_t  num_dash_lines4144 = ( (  num_dash_lines1002 ) ( ( ( * (  pane4132 ) ) .f_buf ) ) );
            struct RangeIter_700  temp1401 =  into_dash_iter702 ( ( (  to705 ) ( (  from_dash_integral48 ( 1 ) ) ,  (  num_dash_lines4144 ) ) ) );
            while (true) {
                struct Maybe_283  __cond1402 =  next703 (&temp1401);
                if (  __cond1402 .tag == 0 ) {
                    break;
                }
                int32_t  i4146 =  __cond1402 .stuff .Maybe_283_Just_s .field0;
                int32_t  line4147 = ( (  mod1403 ) ( (  op_dash_add285 ( ( (  pos4134 ) .f_line ) , (  i4146 ) ) ) ,  (  num_dash_lines4144 ) ) );
                struct envunion1407  temp1406 = ( (struct envunion1407){ .fun = (  struct Maybe_1017  (*) (  struct env1375*  ,    struct Pos_20  ) )search_dash_on_dash_line1378 , .env =  envinst1375 } );
                struct Maybe_1017  dref4148 = ( temp1406.fun ( &temp1406.env ,  ( (struct Pos_20) { .f_line = (  line4147 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ) );
                if ( dref4148.tag == Maybe_1017_Just_t ) {
                    struct Pos_20  sel_dash_pos4150 = ( (struct Pos_20) { .f_line = (  line4147 ) , .f_bi = ( (  size_dash_i32207 ) ( ( dref4148 .stuff .Maybe_1017_Just_s .field0 ) ) ) } );
                    struct Pos_20  cur_dash_pos4151 = ( (struct Pos_20) { .f_line = (  line4147 ) , .f_bi = (  op_dash_sub823 ( ( (  size_dash_i32207 ) ( (  op_dash_add243 ( ( dref4148 .stuff .Maybe_1017_Just_s .field0 ) , ( (  num_dash_bytes995 ) ( (  query4136 ) ) ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1373_Just ) ( ( ( Tuple2_138_Tuple2 ) ( (  sel_dash_pos4150 ) ,  (  cur_dash_pos4151 ) ) ) ) );
                }
                else {
                    if ( dref4148.tag == Maybe_1017_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1373) { .tag = Maybe_1373_None_t } );
        }
    }
}

static  enum Unit_7   next_dash_match1372 (    struct Editor_147 *  ed4229 ) {
    struct Maybe_148  dref4230 = ( ( * (  ed4229 ) ) .f_search_dash_term );
    if ( dref4230.tag == Maybe_148_None_t ) {
        return ( Unit_7_Unit );
    }
    else {
        if ( dref4230.tag == Maybe_148_Just_t ) {
            struct Maybe_1373  dref4232 = ( (  search_dash_from1374 ) ( ( (  pane999 ) ( (  ed4229 ) ) ) ,  ( (  max_dash_pos1346 ) ( ( (  pane999 ) ( (  ed4229 ) ) ) ) ) ,  ( dref4230 .stuff .Maybe_148_Just_s .field0 ) ) );
            if ( dref4232.tag == Maybe_1373_None_t ) {
            }
            else {
                if ( dref4232.tag == Maybe_1373_Just_t ) {
                    ( (  set_dash_cursors956 ) ( ( (  pane999 ) ( (  ed4229 ) ) ) ,  ( dref4232 .stuff .Maybe_1373_Just_s .field0 .field1 ) ,  ( ( Maybe_28_Just ) ( ( dref4232 .stuff .Maybe_1373_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_957_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Maybe_1017   find_dash_last_dash_occurence_dash_of_dash_slice1410 (    struct Slice_12  haystack1919 ,    struct Slice_12  needle1921 ) {
    struct Maybe_1017  occ1922 = ( (struct Maybe_1017) { .tag = Maybe_1017_None_t } );
    struct RangeIter_700  temp1411 =  into_dash_iter702 ( ( (  to705 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub823 ( ( (  size_dash_i32207 ) ( ( (  haystack1919 ) .f_count ) ) ) , ( (  size_dash_i32207 ) ( ( (  needle1921 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_283  __cond1412 =  next703 (&temp1411);
        if (  __cond1412 .tag == 0 ) {
            break;
        }
        int32_t  i1924 =  __cond1412 .stuff .Maybe_283_Just_s .field0;
        if ( (  eq1382 ( ( (  subslice339 ) ( (  haystack1919 ) ,  ( (  i32_dash_size273 ) ( (  i1924 ) ) ) ,  (  op_dash_add243 ( ( (  i32_dash_size273 ) ( (  i1924 ) ) ) , ( (  needle1921 ) .f_count ) ) ) ) ) , (  needle1921 ) ) ) ) {
            occ1922 = ( ( Maybe_1017_Just ) ( ( (  i32_dash_size273 ) ( (  i1924 ) ) ) ) );
        }
    }
    return (  occ1922 );
}

static  struct Maybe_1373   search_dash_back1409 (    struct Pane_127 *  pane4154 ,    struct Pos_20  pos4156 ,    struct StrView_21  query4158 ) {
    struct Maybe_1017  dref4159 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1410 ) ( ( ( (  byte_dash_substr396 ) ( ( (  line962 ) ( ( ( * (  pane4154 ) ) .f_buf ) ,  ( (  pos4156 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size273 ) ( ( (  pos4156 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4158 ) .f_contents ) ) );
    if ( dref4159.tag == Maybe_1017_Just_t ) {
        struct Pos_20  temp1413 = (  pos4156 );
        temp1413 .  f_bi = ( (  size_dash_i32207 ) ( ( dref4159 .stuff .Maybe_1017_Just_s .field0 ) ) );
        struct Pos_20  sel_dash_pos4161 = ( temp1413 );
        struct Pos_20  temp1414 = (  pos4156 );
        temp1414 .  f_bi = (  op_dash_sub823 ( ( (  size_dash_i32207 ) ( (  op_dash_add243 ( ( dref4159 .stuff .Maybe_1017_Just_s .field0 ) , ( (  num_dash_bytes995 ) ( (  query4158 ) ) ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
        struct Pos_20  cur_dash_pos4162 = ( temp1414 );
        return ( ( Maybe_1373_Just ) ( ( ( Tuple2_138_Tuple2 ) ( (  sel_dash_pos4161 ) ,  (  cur_dash_pos4162 ) ) ) ) );
    }
    else {
        if ( dref4159.tag == Maybe_1017_None_t ) {
            int32_t  num_dash_lines4163 = ( (  num_dash_lines1002 ) ( ( ( * (  pane4154 ) ) .f_buf ) ) );
            struct RangeIter_700  temp1415 =  into_dash_iter702 ( ( (  to705 ) ( (  from_dash_integral48 ( 1 ) ) ,  (  num_dash_lines4163 ) ) ) );
            while (true) {
                struct Maybe_283  __cond1416 =  next703 (&temp1415);
                if (  __cond1416 .tag == 0 ) {
                    break;
                }
                int32_t  i4165 =  __cond1416 .stuff .Maybe_283_Just_s .field0;
                int32_t  line4166 = ( (  mod1403 ) ( (  op_dash_sub823 ( ( (  pos4156 ) .f_line ) , (  i4165 ) ) ) ,  (  num_dash_lines4163 ) ) );
                struct Maybe_1017  dref4167 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1410 ) ( ( ( (  line962 ) ( ( ( * (  pane4154 ) ) .f_buf ) ,  (  line4166 ) ) ) .f_contents ) ,  ( (  query4158 ) .f_contents ) ) );
                if ( dref4167.tag == Maybe_1017_Just_t ) {
                    struct Pos_20  sel_dash_pos4169 = ( (struct Pos_20) { .f_line = (  line4166 ) , .f_bi = ( (  size_dash_i32207 ) ( ( dref4167 .stuff .Maybe_1017_Just_s .field0 ) ) ) } );
                    struct Pos_20  cur_dash_pos4170 = ( (struct Pos_20) { .f_line = (  line4166 ) , .f_bi = (  op_dash_sub823 ( ( (  size_dash_i32207 ) ( (  op_dash_add243 ( ( dref4167 .stuff .Maybe_1017_Just_s .field0 ) , ( (  num_dash_bytes995 ) ( (  query4158 ) ) ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1373_Just ) ( ( ( Tuple2_138_Tuple2 ) ( (  sel_dash_pos4169 ) ,  (  cur_dash_pos4170 ) ) ) ) );
                }
                else {
                    if ( dref4167.tag == Maybe_1017_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1373) { .tag = Maybe_1373_None_t } );
        }
    }
}

static  enum Unit_7   prev_dash_match1408 (    struct Editor_147 *  ed4237 ) {
    struct Maybe_148  dref4238 = ( ( * (  ed4237 ) ) .f_search_dash_term );
    if ( dref4238.tag == Maybe_148_None_t ) {
        return ( Unit_7_Unit );
    }
    else {
        if ( dref4238.tag == Maybe_148_Just_t ) {
            struct Maybe_1373  dref4240 = ( (  search_dash_back1409 ) ( ( (  pane999 ) ( (  ed4237 ) ) ) ,  ( (  min_dash_pos1357 ) ( ( (  pane999 ) ( (  ed4237 ) ) ) ) ) ,  ( dref4238 .stuff .Maybe_148_Just_s .field0 ) ) );
            if ( dref4240.tag == Maybe_1373_None_t ) {
            }
            else {
                if ( dref4240.tag == Maybe_1373_Just_t ) {
                    ( (  set_dash_cursors956 ) ( ( (  pane999 ) ( (  ed4237 ) ) ) ,  ( dref4240 .stuff .Maybe_1373_Just_s .field0 .field1 ) ,  ( ( Maybe_28_Just ) ( ( dref4240 .stuff .Maybe_1373_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_957_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   begin_dash_changeset1420 (   struct env109* env ,    struct TextBuf_88 *  self3786 ,    struct Cursors_27  before_dash_cursors3788 ) {
    struct Actions_89 *  actions3789 = ( & ( ( * (  self3786 ) ) .f_actions ) );
    ( (  trim_dash_actions1035 ) ( (  actions3789 ) ) );
    ( (  flush_dash_insert_dash_action1009 ) ( (  self3786 ) ) );
    ( (  assert488 ) ( (  eq1105 ( ( ( ( * (  self3786 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_90_NoChangeset ) ) ) ,  ( (  from_dash_string231 ) ( ( "expect no changeset bruh" ) ,  ( 24 ) ) ) ) );
    enum CAllocator_9  al3790 = ( ( * (  self3786 ) ) .f_al );
    struct Changeset_26  temp1421 = ( (struct Changeset_26) { .f_parts = ( (  mk1135 ) ( (  al3790 ) ) ) , .f_before_dash_cursors = (  before_dash_cursors3788 ) } );
    struct Changeset_26 *  changeset3791 = ( &temp1421 );
    struct envunion110  temp1422 = ( (struct envunion110){ .fun = (  enum Unit_7  (*) (  struct env22*  ,    struct List_24 *  ,    struct Changeset_26  ) )add1145 , .env =  env->envinst22 } );
    ( temp1422.fun ( &temp1422.env ,  ( & ( ( * (  actions3789 ) ) .f_list ) ) ,  ( * (  changeset3791 ) ) ) );
    (*  actions3789 ) .f_input_dash_changeset = ( ChangesetInputType_90_CustomChangeset );
    (*  actions3789 ) .f_cur = (  op_dash_add243 ( ( ( * (  actions3789 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Maybe_1061   head1428 (    struct List_17  it1142 ) {
    struct SliceIter_1054  temp1429 = ( (  into_dash_iter1056 ) ( (  it1142 ) ) );
    return ( (  next1062 ) ( ( &temp1429 ) ) );
}

static  bool   null1427 (    struct List_17  it1151 ) {
    struct Maybe_1061  dref1152 = ( (  head1428 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_1061_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_7   end_dash_changeset1426 (    struct TextBuf_88 *  self3794 ) {
    ( (  flush_dash_insert_dash_action1009 ) ( (  self3794 ) ) );
    struct Actions_89 *  actions3795 = ( & ( ( * (  self3794 ) ) .f_actions ) );
    if ( ( (  null1427 ) ( ( ( * ( (  last_dash_ptr1107 ) ( ( (  to_dash_slice1109 ) ( ( ( * (  actions3795 ) ) .f_list ) ) ) ) ) ) .f_parts ) ) ) ) {
        (*  actions3795 ) .f_cur = (  op_dash_sub315 ( ( ( * (  actions3795 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
        (*  actions3795 ) .f_input_dash_changeset = ( ChangesetInputType_90_NoChangeset );
        ( (  trim_dash_actions1035 ) ( (  actions3795 ) ) );
    }
    return ( Unit_7_Unit );
}

static  struct Maybe_28   fmap_dash_maybe1431 (    struct Maybe_28  x1275 ,    struct Pos_20 (*  fun1277 )(    struct Pos_20  ) ) {
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

static  struct Pos_20   lam1432 (    struct Pos_20  sel4106 ) {
    struct Pos_20  temp1433 = (  sel4106 );
    temp1433 .  f_bi = (  op_dash_add285 ( ( (  sel4106 ) .f_bi ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( temp1433 );
}

static  enum Unit_7   indent_dash_selection1418 (   struct env124* env ,    struct Pane_127 *  self4102 ) {
    struct envunion125  temp1419 = ( (struct envunion125){ .fun = (  enum Unit_7  (*) (  struct env109*  ,    struct TextBuf_88 *  ,    struct Cursors_27  ) )begin_dash_changeset1420 , .env =  env->envinst109 } );
    ( temp1419.fun ( &temp1419.env ,  ( ( * (  self4102 ) ) .f_buf ) ,  ( (struct Cursors_27) { .f_cur = ( ( * (  self4102 ) ) .f_cursor ) , .f_sel = ( ( * (  self4102 ) ) .f_sel ) } ) ) );
    struct RangeIter_700  temp1423 =  into_dash_iter702 ( ( (  to705 ) ( ( ( (  min_dash_pos1357 ) ( (  self4102 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1346 ) ( (  self4102 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_283  __cond1424 =  next703 (&temp1423);
        if (  __cond1424 .tag == 0 ) {
            break;
        }
        int32_t  line4104 =  __cond1424 .stuff .Maybe_283_Just_s .field0;
        struct envunion126  temp1425 = ( (struct envunion126){ .fun = (  enum Unit_7  (*) (  struct env122*  ,    struct Pane_127 *  ,    int32_t  ) )indent_dash_at1176 , .env =  env->envinst122 } );
        ( temp1425.fun ( &temp1425.env ,  (  self4102 ) ,  (  line4104 ) ) );
    }
    ( (  end_dash_changeset1426 ) ( ( ( * (  self4102 ) ) .f_buf ) ) );
    struct Pos_20  temp1430 = ( ( * (  self4102 ) ) .f_cursor );
    temp1430 .  f_bi = (  op_dash_add285 ( ( ( ( * (  self4102 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral48 ( 1 ) ) ) );
    ( (  set_dash_cursors956 ) ( (  self4102 ) ,  ( temp1430 ) ,  ( (  fmap_dash_maybe1431 ) ( ( ( * (  self4102 ) ) .f_sel ) ,  (  lam1432 ) ) ) ,  ( CursorMovement_957_UpdateVI ) ) );
    return ( Unit_7_Unit );
}

struct env1444 {
    ;
    ;
    bool  last_dash_char_dash_was_dash_tab4111;
};

struct envunion1445 {
    struct Pos_20  (*fun) (  struct env1444*  ,    struct Pos_20  );
    struct env1444 env;
};

static  struct Maybe_28   fmap_dash_maybe1443 (    struct Maybe_28  x1275 ,   struct envunion1445  fun1277 ) {
    struct Maybe_28  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_28_None_t ) {
        return ( (struct Maybe_28) { .tag = Maybe_28_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_28_Just_t ) {
            struct envunion1445  temp1446 = (  fun1277 );
            return ( ( Maybe_28_Just ) ( ( temp1446.fun ( &temp1446.env ,  ( dref1278 .stuff .Maybe_28_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_20   lam1447 (   struct env1444* env ,    struct Pos_20  sel4115 ) {
    struct Pos_20  temp1448 = (  sel4115 );
    temp1448 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4111 ) ? (  op_dash_sub823 ( ( (  sel4115 ) .f_bi ) , (  from_dash_integral48 ( 1 ) ) ) ) : ( (  sel4115 ) .f_bi ) );
    return ( temp1448 );
}

static  enum Unit_7   dedent_dash_selection1435 (   struct env130* env ,    struct Pane_127 *  self4109 ) {
    struct envunion131  temp1436 = ( (struct envunion131){ .fun = (  enum Unit_7  (*) (  struct env109*  ,    struct TextBuf_88 *  ,    struct Cursors_27  ) )begin_dash_changeset1420 , .env =  env->envinst109 } );
    ( temp1436.fun ( &temp1436.env ,  ( ( * (  self4109 ) ) .f_buf ) ,  ( (struct Cursors_27) { .f_cur = ( ( * (  self4109 ) ) .f_cursor ) , .f_sel = ( ( * (  self4109 ) ) .f_sel ) } ) ) );
    struct Pos_20  temp1437 = ( (  min_dash_pos1357 ) ( (  self4109 ) ) );
    temp1437 .  f_bi = (  from_dash_integral48 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4110 = (  eq414 ( ( (  char_dash_at1208 ) ( (  self4109 ) ,  ( temp1437 ) ) ) , ( (  from_dash_charlike232 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_20  temp1438 = ( (  max_dash_pos1346 ) ( (  self4109 ) ) );
    temp1438 .  f_bi = (  from_dash_integral48 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4111 = (  eq414 ( ( (  char_dash_at1208 ) ( (  self4109 ) ,  ( temp1438 ) ) ) , ( (  from_dash_charlike232 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_700  temp1439 =  into_dash_iter702 ( ( (  to705 ) ( ( ( (  min_dash_pos1357 ) ( (  self4109 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1346 ) ( (  self4109 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_283  __cond1440 =  next703 (&temp1439);
        if (  __cond1440 .tag == 0 ) {
            break;
        }
        int32_t  line4113 =  __cond1440 .stuff .Maybe_283_Just_s .field0;
        if ( (  eq414 ( ( (  char_dash_at1208 ) ( (  self4109 ) ,  ( (struct Pos_20) { .f_line = (  line4113 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike232 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion132  temp1441 = ( (struct envunion132){ .fun = (  struct Maybe_113  (*) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  ) )change1034 , .env =  env->envinst104 } );
            ( temp1441.fun ( &temp1441.env ,  ( ( * (  self4109 ) ) .f_buf ) ,  ( (struct Pos_20) { .f_line = (  line4113 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ,  ( (struct Pos_20) { .f_line = (  line4113 ) , .f_bi = (  from_dash_integral48 ( 1 ) ) } ) ,  ( (  from_dash_string231 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_113) { .tag = Maybe_113_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1426 ) ( ( ( * (  self4109 ) ) .f_buf ) ) );
    struct Pos_20  temp1442 = ( ( * (  self4109 ) ) .f_cursor );
    temp1442 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4110 ) ? (  op_dash_sub823 ( ( ( ( * (  self4109 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral48 ( 1 ) ) ) ) : ( ( ( * (  self4109 ) ) .f_cursor ) .f_bi ) );
    struct env1444 envinst1444 = {
        .last_dash_char_dash_was_dash_tab4111 =  last_dash_char_dash_was_dash_tab4111 ,
    };
    ( (  set_dash_cursors956 ) ( (  self4109 ) ,  ( temp1442 ) ,  ( (  fmap_dash_maybe1443 ) ( ( ( * (  self4109 ) ) .f_sel ) ,  ( (struct envunion1445){ .fun = (  struct Pos_20  (*) (  struct env1444*  ,    struct Pos_20  ) )lam1447 , .env =  envinst1444 } ) ) ) ,  ( CursorMovement_957_UpdateVI ) ) );
    return ( Unit_7_Unit );
}

static  bool   lam1452 (    struct Char_57  c4056 ) {
    return ( ( !  eq414 ( (  c4056 ) , ( (  from_dash_charlike232 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) && ( (  is_dash_whitespace1207 ) ( (  c4056 ) ) ) );
}

static  struct Maybe_1373   line_dash_begins_dash_with_dash_comment1451 (    struct Pane_127 *  self4050 ,    int32_t  line4052 ) {
    int32_t  indent4053 = ( (  indent_dash_at_dash_line1011 ) ( (  self4050 ) ,  (  line4052 ) ) );
    if ( (  eq414 ( ( (  char_dash_at1208 ) ( (  self4050 ) ,  ( (  mk309 ) ( (  line4052 ) ,  (  indent4053 ) ) ) ) ) , ( (  from_dash_charlike232 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
        int32_t  i4054 = (  op_dash_add285 ( (  indent4053 ) , (  from_dash_integral48 ( 1 ) ) ) );
        while ( ( (  lam1452 ) ( ( (  char_dash_at1208 ) ( (  self4050 ) ,  ( (  mk309 ) ( (  line4052 ) ,  (  i4054 ) ) ) ) ) ) ) ) {
            i4054 = (  op_dash_add285 ( (  i4054 ) , (  from_dash_integral48 ( 1 ) ) ) );
        }
        return ( ( Maybe_1373_Just ) ( ( ( Tuple2_138_Tuple2 ) ( ( (  mk309 ) ( (  line4052 ) ,  (  indent4053 ) ) ) ,  ( (  mk309 ) ( (  line4052 ) ,  (  i4054 ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_1373) { .tag = Maybe_1373_None_t } );
    }
}

static  enum Unit_7   toggle_dash_comment1450 (   struct env135* env ,    struct Pane_127 *  self4124 ) {
    struct Pos_20  cur4125 = ( ( * (  self4124 ) ) .f_cursor );
    struct Char_57  comment_dash_str4126 = ( (  from_dash_charlike232 ) ( ( "#" ) ,  ( 1 ) ) );
    struct Maybe_1373  dref4127 = ( (  line_dash_begins_dash_with_dash_comment1451 ) ( (  self4124 ) ,  ( (  cur4125 ) .f_line ) ) );
    if ( dref4127.tag == Maybe_1373_None_t ) {
        ( (  move_dash_to_dash_beginning_dash_indented1010 ) ( (  self4124 ) ) );
        struct envunion136  temp1453 = ( (struct envunion136){ .fun = (  enum Unit_7  (*) (  struct env111*  ,    struct Pane_127 *  ,    struct StrView_21  ) )add_dash_str_dash_at_dash_char1032 , .env =  env->envinst111 } );
        ( temp1453.fun ( &temp1453.env ,  (  self4124 ) ,  ( (  from_dash_string231 ) ( ( "# " ) ,  ( 2 ) ) ) ) );
    }
    else {
        if ( dref4127.tag == Maybe_1373_Just_t ) {
            struct envunion137  temp1454 = ( (struct envunion137){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_127 *  ,    struct Tuple2_138  ,    struct StrView_21  ) )replace_dash_selection1278 , .env =  env->envinst120 } );
            ( temp1454.fun ( &temp1454.env ,  (  self4124 ) ,  ( ( Tuple2_138_Tuple2 ) ( ( dref4127 .stuff .Maybe_1373_Just_s .field0 .field0 ) ,  ( dref4127 .stuff .Maybe_1373_Just_s .field0 .field1 ) ) ) ,  ( (  from_dash_string231 ) ( ( "" ) ,  ( 0 ) ) ) ) );
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   handle_dash_normal_dash_key954 (   struct env150* env ,    struct Editor_147 *  ed4245 ,    struct Key_168  key4247 ) {
    struct Key_168  dref4248 = (  key4247 );
    if ( dref4248.tag == Key_168_Char_t ) {
        if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4245 ) .f_running = ( false );
        } else {
            if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left955 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ) );
            } else {
                if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right1000 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ) );
                } else {
                    if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down1003 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ,  (  from_dash_integral48 ( 1 ) ) ) );
                    } else {
                        if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up1007 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ,  (  from_dash_integral48 ( 1 ) ) ) );
                        } else {
                            if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode1008 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ,  ( Mode_128_Insert ) ) );
                            } else {
                                if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "I" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  move_dash_to_dash_beginning_dash_indented1010 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ) );
                                    ( (  set_dash_mode1008 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ,  ( Mode_128_Insert ) ) );
                                } else {
                                    if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  move_dash_to_dash_end1029 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ) );
                                        ( (  set_dash_mode1008 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ,  ( Mode_128_Insert ) ) );
                                    } else {
                                        if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                            struct Pane_127 *  pane4250 = ( (  pane999 ) ( (  ed4245 ) ) );
                                            int32_t  indent4251 = ( (  indent_dash_at_dash_line1011 ) ( (  pane4250 ) ,  ( ( ( * (  pane4250 ) ) .f_cursor ) .f_line ) ) );
                                            ( (  move_dash_to_dash_end1029 ) ( (  pane4250 ) ) );
                                            struct envunion154  temp1031 = ( (struct envunion154){ .fun = (  enum Unit_7  (*) (  struct env111*  ,    struct Pane_127 *  ,    struct StrView_21  ) )add_dash_str_dash_at_dash_char1032 , .env =  env->envinst111 } );
                                            ( temp1031.fun ( &temp1031.env ,  (  pane4250 ) ,  ( (  from_dash_charlike1095 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                            ( (  move_dash_right1000 ) ( (  pane4250 ) ) );
                                            struct envunion153  temp1171 = ( (struct envunion153){ .fun = (  enum Unit_7  (*) (  struct env133*  ,    struct Pane_127 *  ,    int32_t  ) )indent_dash_at_dash_current1172 , .env =  env->envinst133 } );
                                            ( temp1171.fun ( &temp1171.env ,  (  pane4250 ) ,  (  indent4251 ) ) );
                                            ( (  set_dash_mode1008 ) ( (  pane4250 ) ,  ( Mode_128_Insert ) ) );
                                        } else {
                                            if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct Pane_127 *  pane4252 = ( (  pane999 ) ( (  ed4245 ) ) );
                                                int32_t  indent4253 = ( (  indent_dash_at_dash_line1011 ) ( (  pane4252 ) ,  ( ( ( * (  pane4252 ) ) .f_cursor ) .f_line ) ) );
                                                ( (  move_dash_to_dash_beginning1178 ) ( (  pane4252 ) ) );
                                                struct envunion1181  temp1180 = ( (struct envunion1181){ .fun = (  enum Unit_7  (*) (  struct env111*  ,    struct Pane_127 *  ,    struct StrView_21  ) )add_dash_str_dash_at_dash_char1032 , .env =  env->envinst111 } );
                                                ( temp1180.fun ( &temp1180.env ,  (  pane4252 ) ,  ( (  from_dash_charlike1095 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                                struct envunion1183  temp1182 = ( (struct envunion1183){ .fun = (  enum Unit_7  (*) (  struct env133*  ,    struct Pane_127 *  ,    int32_t  ) )indent_dash_at_dash_current1172 , .env =  env->envinst133 } );
                                                ( temp1182.fun ( &temp1182.env ,  (  pane4252 ) ,  (  indent4253 ) ) );
                                                ( (  set_dash_mode1008 ) ( (  pane4252 ) ,  ( Mode_128_Insert ) ) );
                                            } else {
                                                if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  advance_dash_word1184 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ,  ( MoveDirection_1185_MoveFwd ) ,  ( MoveTarget_1186_NextWordStart ) ) );
                                                } else {
                                                    if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  advance_dash_word1184 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ,  ( MoveDirection_1185_MoveFwd ) ,  ( MoveTarget_1186_NextWordEnd ) ) );
                                                    } else {
                                                        if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  advance_dash_word1184 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ,  ( MoveDirection_1185_MoveBwd ) ,  ( MoveTarget_1186_NextWordEnd ) ) );
                                                        } else {
                                                            if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion160  temp1220 = ( (struct envunion160){ .fun = (  enum Unit_7  (*) (  struct env118*  ,    struct Pane_127 *  ) )redo1221 , .env =  env->envinst118 } );
                                                                ( temp1220.fun ( &temp1220.env ,  ( (  pane999 ) ( (  ed4245 ) ) ) ) );
                                                            } else {
                                                                if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct envunion158  temp1245 = ( (struct envunion158){ .fun = (  enum Unit_7  (*) (  struct env116*  ,    struct Pane_127 *  ) )undo1246 , .env =  env->envinst116 } );
                                                                    ( temp1245.fun ( &temp1245.env ,  ( (  pane999 ) ( (  ed4245 ) ) ) ) );
                                                                } else {
                                                                    if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct envunion155  temp1263 = ( (struct envunion155){ .fun = (  enum Unit_7  (*) (  struct env139*  ,    struct Editor_147 *  ) )copy_dash_selection_dash_to_dash_clipboard1264 , .env =  env->envinst139 } );
                                                                        ( temp1263.fun ( &temp1263.env ,  (  ed4245 ) ) );
                                                                        struct envunion1277  temp1276 = ( (struct envunion1277){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_127 *  ,    struct Tuple2_138  ,    struct StrView_21  ) )replace_dash_selection1278 , .env =  env->envinst120 } );
                                                                        ( temp1276.fun ( &temp1276.env ,  ( (  pane999 ) ( (  ed4245 ) ) ) ,  ( (  selection1265 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ) ) ,  ( (  from_dash_string231 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                        ( (  set_dash_mode1008 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ,  ( Mode_128_Normal ) ) );
                                                                    } else {
                                                                        if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct envunion1286  temp1285 = ( (struct envunion1286){ .fun = (  enum Unit_7  (*) (  struct env139*  ,    struct Editor_147 *  ) )copy_dash_selection_dash_to_dash_clipboard1264 , .env =  env->envinst139 } );
                                                                            ( temp1285.fun ( &temp1285.env ,  (  ed4245 ) ) );
                                                                            struct envunion152  temp1287 = ( (struct envunion152){ .fun = (  enum Unit_7  (*) (  struct env120*  ,    struct Pane_127 *  ,    struct Tuple2_138  ,    struct StrView_21  ) )replace_dash_selection1278 , .env =  env->envinst120 } );
                                                                            ( temp1287.fun ( &temp1287.env ,  ( (  pane999 ) ( (  ed4245 ) ) ) ,  ( (  selection1265 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ) ) ,  ( (  from_dash_string231 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                            ( (  set_dash_mode1008 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ,  ( Mode_128_Insert ) ) );
                                                                        } else {
                                                                            if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                struct envunion1289  temp1288 = ( (struct envunion1289){ .fun = (  enum Unit_7  (*) (  struct env139*  ,    struct Editor_147 *  ) )copy_dash_selection_dash_to_dash_clipboard1264 , .env =  env->envinst139 } );
                                                                                ( temp1288.fun ( &temp1288.env ,  (  ed4245 ) ) );
                                                                                size_t  bytes_dash_yanked4254 = ( (  num_dash_bytes995 ) ( ( (  or_dash_else386 ) ( ( ( * (  ed4245 ) ) .f_clipboard ) ,  ( (  from_dash_string231 ) ( ( "" ) ,  ( 0 ) ) ) ) ) ) );
                                                                                struct envunion159  temp1290 = ( (struct envunion159){ .fun = (  enum Unit_7  (*) (  struct env143*  ,    struct Editor_147 *  ,    struct StrConcat_66  ) )set_dash_msg1291 , .env =  env->envinst143 } );
                                                                                ( temp1290.fun ( &temp1290.env ,  (  ed4245 ) ,  ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4254 ) ) ) ,  ( (  from_dash_string231 ) ( ( " bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    struct env1341 envinst1341 = {
                                                                                        .ed4245 =  ed4245 ,
                                                                                        .envinst120 = env->envinst120 ,
                                                                                    };
                                                                                    ( (  if_dash_just1340 ) ( ( ( * (  ed4245 ) ) .f_clipboard ) ,  ( (struct envunion1343){ .fun = (  enum Unit_7  (*) (  struct env1341*  ,    struct StrView_21  ) )lam1345 , .env =  envinst1341 } ) ) );
                                                                                } else {
                                                                                    if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        struct env1352 envinst1352 = {
                                                                                            .envinst120 = env->envinst120 ,
                                                                                            .ed4245 =  ed4245 ,
                                                                                        };
                                                                                        ( (  if_dash_just1351 ) ( ( ( * (  ed4245 ) ) .f_clipboard ) ,  ( (struct envunion1354){ .fun = (  enum Unit_7  (*) (  struct env1352*  ,    struct StrView_21  ) )lam1356 , .env =  envinst1352 } ) ) );
                                                                                    } else {
                                                                                        if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            struct env1361 envinst1361 = {
                                                                                                .ed4245 =  ed4245 ,
                                                                                                .envinst120 = env->envinst120 ,
                                                                                            };
                                                                                            ( (  if_dash_just1360 ) ( ( ( * (  ed4245 ) ) .f_clipboard ) ,  ( (struct envunion1363){ .fun = (  enum Unit_7  (*) (  struct env1361*  ,    struct StrView_21  ) )lam1365 , .env =  envinst1361 } ) ) );
                                                                                        } else {
                                                                                            if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  expand1367 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ) );
                                                                                            } else {
                                                                                                if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  set_dash_mode1008 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ,  ( Mode_128_Select ) ) );
                                                                                                    if ( ( (  is_dash_none1371 ) ( ( ( ( * (  ed4245 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                                        (*  ed4245 ) .f_pane .f_sel = ( ( Maybe_28_Just ) ( ( ( ( * (  ed4245 ) ) .f_pane ) .f_cursor ) ) );
                                                                                                    }
                                                                                                } else {
                                                                                                    if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        (*  ed4245 ) .f_mode = ( ( EditorMode_149_Cmd ) ( ( ( * ( (  pane999 ) ( (  ed4245 ) ) ) ) .f_cursor ) ,  ( (  mk1295 ) ( ( ( * (  ed4245 ) ) .f_al ) ) ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            (*  ed4245 ) .f_mode = ( ( EditorMode_149_Search ) ( ( ( * ( (  pane999 ) ( (  ed4245 ) ) ) ) .f_cursor ) ,  ( (  mk1295 ) ( ( ( * (  ed4245 ) ) .f_al ) ) ) ) );
                                                                                                        } else {
                                                                                                            if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                ( (  next_dash_match1372 ) ( (  ed4245 ) ) );
                                                                                                            } else {
                                                                                                                if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                    ( (  prev_dash_match1408 ) ( (  ed4245 ) ) );
                                                                                                                } else {
                                                                                                                    if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( ">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                        struct envunion151  temp1417 = ( (struct envunion151){ .fun = (  enum Unit_7  (*) (  struct env124*  ,    struct Pane_127 *  ) )indent_dash_selection1418 , .env =  env->envinst124 } );
                                                                                                                        ( temp1417.fun ( &temp1417.env ,  ( (  pane999 ) ( (  ed4245 ) ) ) ) );
                                                                                                                    } else {
                                                                                                                        if ( (  eq797 ( ( dref4248 .stuff .Key_168_Char_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                            struct envunion157  temp1434 = ( (struct envunion157){ .fun = (  enum Unit_7  (*) (  struct env130*  ,    struct Pane_127 *  ) )dedent_dash_selection1435 , .env =  env->envinst130 } );
                                                                                                                            ( temp1434.fun ( &temp1434.env ,  ( (  pane999 ) ( (  ed4245 ) ) ) ) );
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
        if ( dref4248.tag == Key_168_Escape_t ) {
            ( (  set_dash_mode1008 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ,  ( Mode_128_Normal ) ) );
        }
        else {
            if ( dref4248.tag == Key_168_Ctrl_t ) {
                if ( (  eq797 ( ( dref4248 .stuff .Key_168_Ctrl_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                    struct envunion156  temp1449 = ( (struct envunion156){ .fun = (  enum Unit_7  (*) (  struct env135*  ,    struct Pane_127 *  ) )toggle_dash_comment1450 , .env =  env->envinst135 } );
                    ( temp1449.fun ( &temp1449.env ,  ( (  pane999 ) ( (  ed4245 ) ) ) ) );
                } else {
                    if ( (  eq797 ( ( dref4248 .stuff .Key_168_Ctrl_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_up1007 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ,  (  from_dash_integral48 ( 15 ) ) ) );
                    } else {
                        if ( (  eq797 ( ( dref4248 .stuff .Key_168_Ctrl_s .field0 ) , ( (  from_dash_charlike798 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_down1003 ) ( ( (  pane999 ) ( (  ed4245 ) ) ) ,  (  from_dash_integral48 ( 15 ) ) ) );
                        } else {
                        }
                    }
                }
            }
            else {
                if ( true ) {
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

struct envunion1456 {
    enum Unit_7  (*fun) (  struct env150*  ,    struct Editor_147 *  ,    struct Key_168  );
    struct env150 env;
};

struct envunion1458 {
    enum Unit_7  (*fun) (  struct env111*  ,    struct Pane_127 *  ,    struct StrView_21  );
    struct env111 env;
};

static  enum Unit_7   backspace1461 (   struct env114* env ,    struct Pane_127 *  self4065 ) {
    struct Pos_20  prev_dash_cur4066 = ( ( * (  self4065 ) ) .f_cursor );
    ( (  move_dash_left955 ) ( (  self4065 ) ) );
    struct envunion115  temp1462 = ( (struct envunion115){ .fun = (  struct Maybe_113  (*) (  struct env104*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ,    struct Maybe_113  ) )change1034 , .env =  env->envinst104 } );
    ( temp1462.fun ( &temp1462.env ,  ( ( * (  self4065 ) ) .f_buf ) ,  ( ( * (  self4065 ) ) .f_cursor ) ,  (  prev_dash_cur4066 ) ,  ( (  from_dash_string231 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_113) { .tag = Maybe_113_None_t } ) ) );
    return ( Unit_7_Unit );
}

struct Array_1464 {
    char _arr [1];
};

static  char *   cast1465 (    struct Array_1464 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_813   as_dash_slice1463 (    struct Array_1464 *  arr2272 ) {
    return ( (struct Slice_813) { .f_ptr = ( (  cast1465 ) ( (  arr2272 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1464   from_dash_listlike1467 (    struct Array_1464  self330 ) {
    return (  self330 );
}

struct Scanner_1471 {
    struct StrView_21  f_s;
};

static  struct Scanner_1471   mk_dash_from_dash_strview1473 (    struct StrView_21  s3169 ) {
    return ( (struct Scanner_1471) { .f_s = (  s3169 ) } );
}

struct TakeWhile_1478 {
    struct StrViewIter_614  f_it;
    bool (*  f_pred )(    struct Char_57  );
};

struct Map_1477 {
    struct TakeWhile_1478  field0;
    size_t (*  field1 )(    struct Char_57  );
};

static struct Map_1477 Map_1477_Map (  struct TakeWhile_1478  field0 ,  size_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1477 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1477   into_dash_iter1480 (    struct Map_1477  self796 ) {
    return (  self796 );
}

static  struct Maybe_617   next1482 (    struct TakeWhile_1478 *  self964 ) {
    struct Maybe_617  mx965 = ( (  next618 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_617  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_617_None_t ) {
        return ( (struct Maybe_617) { .tag = Maybe_617_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_617_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_617_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_617_Just ) ( ( dref966 .stuff .Maybe_617_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_617) { .tag = Maybe_617_None_t } );
            }
        }
    }
}

static  struct Maybe_1017   next1481 (    struct Map_1477 *  dref798 ) {
    struct Maybe_617  dref801 = ( (  next1482 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_617_None_t ) {
        return ( (struct Maybe_1017) { .tag = Maybe_1017_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_617_Just_t ) {
            return ( ( Maybe_1017_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_617_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1479 (    struct Map_1477  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1477  it1099 = ( (  into_dash_iter1480 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1017  dref1100 = ( (  next1481 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1017_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1017_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1017_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1483 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1483);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1484;
    return (  temp1484 );
}

static  size_t   lam1485 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add243 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1476 (    struct Map_1477  it1110 ) {
    return ( (  reduce1479 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1485 ) ) );
}

static  struct TakeWhile_1478   into_dash_iter1487 (    struct TakeWhile_1478  self961 ) {
    return (  self961 );
}

static  struct Map_1477   map1486 (    struct TakeWhile_1478  iterable805 ,    size_t (*  fun807 )(    struct Char_57  ) ) {
    struct TakeWhile_1478  it808 = ( (  into_dash_iter1487 ) ( (  iterable805 ) ) );
    return ( ( Map_1477_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1478   take_dash_while1488 (    struct StrViewIter_614  it970 ,    bool (*  pred972 )(    struct Char_57  ) ) {
    return ( (struct TakeWhile_1478) { .f_it = ( (  into_dash_iter616 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1489 (    struct Char_57  c2202 ) {
    return ( (  c2202 ) .f_num_dash_bytes );
}

static  struct StrView_21   take_dash_while1475 (    struct StrView_21  self2198 ,    bool (*  fun2200 )(    struct Char_57  ) ) {
    size_t  bi2203 = ( (  sum1476 ) ( ( (  map1486 ) ( ( (  take_dash_while1488 ) ( ( (  chars619 ) ( (  self2198 ) ) ) ,  (  fun2200 ) ) ) ,  (  lam1489 ) ) ) ) );
    return ( (  byte_dash_substr396 ) ( (  self2198 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2203 ) ) );
}

static  struct StrView_21   take_dash_str_dash_while1474 (    struct Scanner_1471 *  sc3215 ,    bool (*  fun3217 )(    struct Char_57  ) ) {
    struct StrView_21  s3218 = ( (  take_dash_while1475 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  (  fun3217 ) ) );
    (*  sc3215 ) .f_s = ( (  byte_dash_substr_dash_from1398 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  ( (  num_dash_bytes995 ) ( (  s3218 ) ) ) ) );
    return (  s3218 );
}

static  bool   is_dash_not_dash_whitespace1490 (    struct Char_57  c2382 ) {
    return ( ! ( (  is_dash_whitespace1207 ) ( (  c2382 ) ) ) );
}

struct TakeWhile_1496 {
    struct StrViewIter_614  f_it;
    bool (*  f_pred )(    struct Char_57  );
};

struct Map_1495 {
    struct TakeWhile_1496  field0;
    size_t (*  field1 )(    struct Char_57  );
};

static struct Map_1495 Map_1495_Map (  struct TakeWhile_1496  field0 ,  size_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1495 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1495   into_dash_iter1498 (    struct Map_1495  self796 ) {
    return (  self796 );
}

static  struct Maybe_617   next1500 (    struct TakeWhile_1496 *  self964 ) {
    struct Maybe_617  mx965 = ( (  next618 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_617  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_617_None_t ) {
        return ( (struct Maybe_617) { .tag = Maybe_617_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_617_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_617_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_617_Just ) ( ( dref966 .stuff .Maybe_617_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_617) { .tag = Maybe_617_None_t } );
            }
        }
    }
}

static  struct Maybe_1017   next1499 (    struct Map_1495 *  dref798 ) {
    struct Maybe_617  dref801 = ( (  next1500 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_617_None_t ) {
        return ( (struct Maybe_1017) { .tag = Maybe_1017_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_617_Just_t ) {
            return ( ( Maybe_1017_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_617_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1497 (    struct Map_1495  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1495  it1099 = ( (  into_dash_iter1498 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1017  dref1100 = ( (  next1499 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1017_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1017_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1017_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1501 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1501);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1502;
    return (  temp1502 );
}

static  size_t   lam1503 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add243 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1494 (    struct Map_1495  it1110 ) {
    return ( (  reduce1497 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1503 ) ) );
}

static  struct TakeWhile_1496   into_dash_iter1505 (    struct TakeWhile_1496  self961 ) {
    return (  self961 );
}

static  struct Map_1495   map1504 (    struct TakeWhile_1496  iterable805 ,    size_t (*  fun807 )(    struct Char_57  ) ) {
    struct TakeWhile_1496  it808 = ( (  into_dash_iter1505 ) ( (  iterable805 ) ) );
    return ( ( Map_1495_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1496   take_dash_while1506 (    struct StrViewIter_614  it970 ,    bool (*  pred972 )(    struct Char_57  ) ) {
    return ( (struct TakeWhile_1496) { .f_it = ( (  into_dash_iter616 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1507 (    struct Char_57  c2202 ) {
    return ( (  c2202 ) .f_num_dash_bytes );
}

static  struct StrView_21   take_dash_while1493 (    struct StrView_21  self2198 ,    bool (*  fun2200 )(    struct Char_57  ) ) {
    size_t  bi2203 = ( (  sum1494 ) ( ( (  map1504 ) ( ( (  take_dash_while1506 ) ( ( (  chars619 ) ( (  self2198 ) ) ) ,  (  fun2200 ) ) ) ,  (  lam1507 ) ) ) ) );
    return ( (  byte_dash_substr396 ) ( (  self2198 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2203 ) ) );
}

static  struct StrView_21   take_dash_str_dash_while1492 (    struct Scanner_1471 *  sc3215 ,    bool (*  fun3217 )(    struct Char_57  ) ) {
    struct StrView_21  s3218 = ( (  take_dash_while1493 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  (  fun3217 ) ) );
    (*  sc3215 ) .f_s = ( (  byte_dash_substr_dash_from1398 ) ( ( ( * (  sc3215 ) ) .f_s ) ,  ( (  num_dash_bytes995 ) ( (  s3218 ) ) ) ) );
    return (  s3218 );
}

static  enum Unit_7   drop_dash_str_dash_while1491 (    struct Scanner_1471 *  sc3221 ,    bool (*  fun3223 )(    struct Char_57  ) ) {
    ( (  take_dash_str_dash_while1492 ) ( (  sc3221 ) ,  (  fun3223 ) ) );
    return ( Unit_7_Unit );
}

static  bool   eq1508 (    struct StrView_21  l2209 ,    struct StrView_21  r2211 ) {
    return (  eq1382 ( ( (  l2209 ) .f_contents ) , ( (  r2211 ) .f_contents ) ) );
}

static  enum Unit_7   undefined1510 (  ) {
    enum Unit_7  temp1511;
    return (  temp1511 );
}

static  enum Unit_7   todo1509 (  ) {
    ( (  print1213 ) ( ( (  from_dash_string231 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined1510 ) ( ) );
}

struct env1514 {
    bool (*  fun1126 )(    struct Char_57  );
};

struct envunion1515 {
    bool  (*fun) (  struct env1514*  ,    struct Char_57  ,    bool  );
    struct env1514 env;
};

static  bool   reduce1513 (    struct StrView_21  iterable1093 ,    bool  base1095 ,   struct envunion1515  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct StrViewIter_614  it1099 = ( (  into_dash_iter620 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_617  dref1100 = ( (  next618 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_617_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_617_Just_t ) {
                struct envunion1515  temp1516 = (  fun1097 );
                x1098 = ( temp1516.fun ( &temp1516.env ,  ( dref1100 .stuff .Maybe_617_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1517 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1517);
    exit ( 1 );
    ( Unit_7_Unit );
    bool  temp1518;
    return (  temp1518 );
}

static  bool   lam1519 (   struct env1514* env ,    struct Char_57  e1128 ,    bool  x1130 ) {
    return ( ( ( env->fun1126 ) ( (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1512 (    struct StrView_21  it1124 ,    bool (*  fun1126 )(    struct Char_57  ) ) {
    struct env1514 envinst1514 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1513 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1515){ .fun = (  bool  (*) (  struct env1514*  ,    struct Char_57  ,    bool  ) )lam1519 , .env =  envinst1514 } ) ) );
}

struct env1528 {
    struct env52 envinst52;
    struct StrBuilder_54 *  builder2749;
};

struct envunion1529 {
    enum Unit_7  (*fun) (  struct env1528*  ,    struct Char_57  );
    struct env1528 env;
};

static  enum Unit_7   for_dash_each1527 (    struct StrViewIter_614  iterable1074 ,   struct envunion1529  fun1076 ) {
    struct StrViewIter_614  temp1530 = ( (  into_dash_iter616 ) ( (  iterable1074 ) ) );
    struct StrViewIter_614 *  it1077 = ( &temp1530 );
    while ( ( true ) ) {
        struct Maybe_617  dref1078 = ( (  next618 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_617_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_617_Just_t ) {
                struct envunion1529  temp1531 = (  fun1076 );
                ( temp1531.fun ( &temp1531.env ,  ( dref1078 .stuff .Maybe_617_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1532 (   struct env1528* env ,    struct Char_57  c2753 ) {
    struct envunion56  temp1533 = ( (struct envunion56){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1328 , .env =  env->envinst52 } );
    return ( temp1533.fun ( &temp1533.env ,  ( env->builder2749 ) ,  (  c2753 ) ) );
}

static  enum Unit_7   write1526 (   struct env55* env ,    struct StrBuilder_54 *  builder2749 ,    struct StrView_21  s2751 ) {
    struct env1528 envinst1528 = {
        .envinst52 = env->envinst52 ,
        .builder2749 =  builder2749 ,
    };
    ( (  for_dash_each1527 ) ( ( (  chars619 ) ( (  s2751 ) ) ) ,  ( (struct envunion1529){ .fun = (  enum Unit_7  (*) (  struct env1528*  ,    struct Char_57  ) )lam1532 , .env =  envinst1528 } ) ) );
    return ( Unit_7_Unit );
}

static  struct StrView_21   mk_dash_dyn_dash_str1523 (   struct env61* env ,    struct StrView_21  s2807 ,    enum CAllocator_9  al2809 ) {
    struct StrBuilder_54  temp1524 = ( (  mk1295 ) ( (  al2809 ) ) );
    struct StrBuilder_54 *  sb2810 = ( &temp1524 );
    struct envunion63  temp1525 = ( (struct envunion63){ .fun = (  enum Unit_7  (*) (  struct env55*  ,    struct StrBuilder_54 *  ,    struct StrView_21  ) )write1526 , .env =  env->envinst55 } );
    ( temp1525.fun ( &temp1525.env ,  (  sb2810 ) ,  (  s2807 ) ) );
    struct envunion62  temp1534 = ( (struct envunion62){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1328 , .env =  env->envinst52 } );
    ( temp1534.fun ( &temp1534.env ,  (  sb2810 ) ,  ( (  nullchar539 ) ( ) ) ) );
    struct StrView_21  dynstr2811 = ( (  as_dash_str1337 ) ( (  sb2810 ) ) );
    return ( (struct StrView_21) { .f_contents = ( (struct Slice_12) { .f_ptr = ( ( (  dynstr2811 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub315 ( ( ( (  dynstr2811 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_7   set_dash_msg1521 (   struct env141* env ,    struct Editor_147 *  ed4199 ,    struct StrView_21  s4201 ) {
    ( (  reset_dash_msg943 ) ( (  ed4199 ) ) );
    struct envunion142  temp1522 = ( (struct envunion142){ .fun = (  struct StrView_21  (*) (  struct env61*  ,    struct StrView_21  ,    enum CAllocator_9  ) )mk_dash_dyn_dash_str1523 , .env =  env->envinst61 } );
    (*  ed4199 ) .f_msg = ( ( Maybe_148_Just ) ( ( temp1522.fun ( &temp1522.env ,  (  s4201 ) ,  ( ( * (  ed4199 ) ) .f_al ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   run_dash_cmd1470 (   struct env145* env ,    struct Editor_147 *  ed4212 ,    struct StrView_21  s4214 ) {
    struct Scanner_1471  temp1472 = ( (  mk_dash_from_dash_strview1473 ) ( (  s4214 ) ) );
    struct Scanner_1471 *  sc4215 = ( &temp1472 );
    struct StrView_21  cmd4216 = ( (  take_dash_str_dash_while1474 ) ( (  sc4215 ) ,  (  is_dash_not_dash_whitespace1490 ) ) );
    ( (  drop_dash_str_dash_while1491 ) ( (  sc4215 ) ,  (  is_dash_whitespace1207 ) ) );
    if ( (  eq1508 ( (  cmd4216 ) , ( (  from_dash_charlike1095 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4212 ) .f_running = ( false );
    } else {
        if ( (  eq1508 ( (  cmd4216 ) , ( (  from_dash_string231 ) ( ( "wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq1508 ( (  cmd4216 ) , ( (  from_dash_charlike1095 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  todo1509 ) ( ) );
            } else {
                if ( (  eq1508 ( (  cmd4216 ) , ( (  from_dash_string231 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                } else {
                    if ( ( (  all1512 ) ( (  cmd4216 ) ,  (  is_dash_digit837 ) ) ) ) {
                    } else {
                        struct envunion146  temp1520 = ( (struct envunion146){ .fun = (  enum Unit_7  (*) (  struct env141*  ,    struct Editor_147 *  ,    struct StrView_21  ) )set_dash_msg1521 , .env =  env->envinst141 } );
                        ( temp1520.fun ( &temp1520.env ,  (  ed4212 ) ,  ( (  from_dash_string231 ) ( ( "unknown command" ) ,  ( 15 ) ) ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   free1535 (    struct StrBuilder_54 *  builder2793 ) {
    ( (  free435 ) ( ( & ( ( * (  builder2793 ) ) .f_chars ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Char_57   ascii_dash_char1537 (    char  c782 ) {
    return ( (  from_dash_u8903 ) ( ( (  ascii_dash_u8756 ) ( (  c782 ) ) ) ) );
}

static  struct Maybe_831   reduce1540 (    struct StrViewIter_614  iterable1093 ,    struct Maybe_831  base1095 ,    struct Maybe_831 (*  fun1097 )(    struct Char_57  ,    struct Maybe_831  ) ) {
    struct Maybe_831  x1098 = (  base1095 );
    struct StrViewIter_614  it1099 = ( (  into_dash_iter616 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_617  dref1100 = ( (  next618 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_617_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_617_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_617_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1541 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1541);
    exit ( 1 );
    ( Unit_7_Unit );
    struct Maybe_831  temp1542;
    return (  temp1542 );
}

static  struct Maybe_831   sequence_dash_maybe1543 (    struct Char_57  e2460 ,    struct Maybe_831  b2462 ) {
    struct Maybe_831  dref2463 = (  b2462 );
    if ( dref2463.tag == Maybe_831_None_t ) {
        return ( (struct Maybe_831) { .tag = Maybe_831_None_t } );
    }
    else {
        if ( dref2463.tag == Maybe_831_Just_t ) {
            struct Maybe_283  dref2465 = ( (  parse_dash_digit862 ) ( (  e2460 ) ) );
            if ( dref2465.tag == Maybe_283_None_t ) {
                return ( (struct Maybe_831) { .tag = Maybe_831_None_t } );
            }
            else {
                if ( dref2465.tag == Maybe_283_Just_t ) {
                    return ( ( Maybe_831_Just ) ( (  op_dash_add416 ( (  op_dash_mul241 ( ( dref2463 .stuff .Maybe_831_Just_s .field0 ) , (  from_dash_integral314 ( 10 ) ) ) ) , ( (  i32_dash_i64871 ) ( ( dref2465 .stuff .Maybe_283_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_831   parse_dash_int1539 (    struct StrView_21  s2457 ) {
    struct StrViewIter_614  cs2467 = ( (  chars619 ) ( (  s2457 ) ) );
    struct Maybe_617  dref2468 = ( (  head1210 ) ( (  cs2467 ) ) );
    if ( dref2468.tag == Maybe_617_Just_t ) {
        return ( (  reduce1540 ) ( (  cs2467 ) ,  ( ( Maybe_831_Just ) ( (  from_dash_integral314 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1543 ) ) );
    }
    else {
        if ( dref2468.tag == Maybe_617_None_t ) {
            return ( (struct Maybe_831) { .tag = Maybe_831_None_t } );
        }
    }
}

static  enum Unit_7   live_dash_cmd1538 (    struct Editor_147 *  ed4204 ,    struct StrView_21  cmd4206 ) {
    struct Maybe_831  dref4207 = ( (  parse_dash_int1539 ) ( (  cmd4206 ) ) );
    if ( dref4207.tag == Maybe_831_Just_t ) {
        int32_t  line4209 = ( (  clamp1349 ) ( ( (  i64_dash_i32873 ) ( ( dref4207 .stuff .Maybe_831_Just_s .field0 ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub823 ( ( (  num_dash_lines1002 ) ( ( ( * ( (  pane999 ) ( (  ed4204 ) ) ) ) .f_buf ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
        ( (  set_dash_cursors956 ) ( ( (  pane999 ) ( (  ed4204 ) ) ) ,  ( (struct Pos_20) { .f_line = (  line4209 ) , .f_bi = (  from_dash_integral48 ( 0 ) ) } ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_957_NoChanges ) ) );
    }
    else {
        if ( dref4207.tag == Maybe_831_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrViewIter_614   chars1548 (    struct StrBuilder_54  s2801 ) {
    return ( (  into_dash_iter620 ) ( ( (  as_dash_str1337 ) ( ( & (  s2801 ) ) ) ) ) );
}

static  struct StrViewIter_614   into_dash_iter1547 (    struct StrBuilder_54  self2804 ) {
    return ( (  chars1548 ) ( (  self2804 ) ) );
}

static  struct Maybe_617   head1545 (    struct StrBuilder_54  it1142 ) {
    struct StrViewIter_614  temp1546 = ( (  into_dash_iter1547 ) ( (  it1142 ) ) );
    return ( (  next618 ) ( ( &temp1546 ) ) );
}

static  bool   null1544 (    struct StrBuilder_54  it1151 ) {
    struct Maybe_617  dref1152 = ( (  head1545 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_617_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_7   remove1554 (   struct env34* env ,    struct List_11 *  list2076 ,    size_t  i2078 ) {
    struct envunion35  temp1555 = ( (struct envunion35){ .fun = (  enum Unit_7  (*) (  struct env32*  ,    struct List_11 *  ,    size_t  ,    size_t  ) )remove_dash_range438 , .env =  env->envinst32 } );
    ( temp1555.fun ( &temp1555.env ,  (  list2076 ) ,  (  i2078 ) ,  (  op_dash_add243 ( (  i2078 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   pop1552 (   struct env36* env ,    struct List_11 *  list2092 ) {
    if ( (  eq250 ( ( ( * (  list2092 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1079 ) ( ( (  from_dash_string231 ) ( ( "List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct envunion37  temp1553 = ( (struct envunion37){ .fun = (  enum Unit_7  (*) (  struct env34*  ,    struct List_11 *  ,    size_t  ) )remove1554 , .env =  env->envinst34 } );
    return ( temp1553.fun ( &temp1553.env ,  (  list2092 ) ,  (  op_dash_sub315 ( ( ( * (  list2092 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  enum Unit_7   pop1550 (   struct env59* env ,    struct StrBuilder_54 *  sb2767 ) {
    struct envunion60  temp1551 = ( (struct envunion60){ .fun = (  enum Unit_7  (*) (  struct env36*  ,    struct List_11 *  ) )pop1552 , .env =  env->envinst36 } );
    return ( temp1551.fun ( &temp1551.env ,  ( & ( ( * (  sb2767 ) ) .f_chars ) ) ) );
}

struct env1557 {
    struct Editor_147 *  ed4267;
    ;
};

struct envunion1558 {
    enum Unit_7  (*fun) (  struct env1557*  ,    struct StrView_21  );
    struct env1557 env;
};

static  enum Unit_7   if_dash_just1556 (    struct Maybe_148  x1291 ,   struct envunion1558  fun1293 ) {
    struct Maybe_148  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_148_Just_t ) {
        struct envunion1558  temp1559 = (  fun1293 );
        ( temp1559.fun ( &temp1559.env ,  ( dref1294 .stuff .Maybe_148_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_148_None_t ) {
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1560 (   struct env1557* env ,    struct StrView_21  st4284 ) {
    ( (  free949 ) ( (  st4284 ) ,  ( ( * ( env->ed4267 ) ) .f_al ) ) );
    return ( Unit_7_Unit );
}

struct envunion1562 {
    enum Unit_7  (*fun) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  );
    struct env52 env;
};

static  struct Maybe_617   head1565 (    struct StrView_21  it1142 ) {
    struct StrViewIter_614  temp1566 = ( (  into_dash_iter620 ) ( (  it1142 ) ) );
    return ( (  next618 ) ( ( &temp1566 ) ) );
}

static  bool   null1564 (    struct StrView_21  it1151 ) {
    struct Maybe_617  dref1152 = ( (  head1565 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_617_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_7   live_dash_search1563 (    struct Editor_147 *  ed4219 ,    struct Pos_20  begin_dash_pos4221 ,    struct StrView_21  query4223 ) {
    if ( ( ! ( (  null1564 ) ( (  query4223 ) ) ) ) ) {
        struct Maybe_1373  dref4224 = ( (  search_dash_from1374 ) ( ( (  pane999 ) ( (  ed4219 ) ) ) ,  (  begin_dash_pos4221 ) ,  (  query4223 ) ) );
        if ( dref4224.tag == Maybe_1373_Just_t ) {
            ( (  set_dash_cursors956 ) ( ( (  pane999 ) ( (  ed4219 ) ) ) ,  ( dref4224 .stuff .Maybe_1373_Just_s .field0 .field1 ) ,  ( ( Maybe_28_Just ) ( ( dref4224 .stuff .Maybe_1373_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_957_NoChanges ) ) );
        }
        else {
            if ( dref4224.tag == Maybe_1373_None_t ) {
                ( (  set_dash_cursors956 ) ( ( (  pane999 ) ( (  ed4219 ) ) ) ,  (  begin_dash_pos4221 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_957_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors956 ) ( ( (  pane999 ) ( (  ed4219 ) ) ) ,  (  begin_dash_pos4221 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_957_NoChanges ) ) );
    }
    return ( Unit_7_Unit );
}

struct envunion1568 {
    enum Unit_7  (*fun) (  struct env59*  ,    struct StrBuilder_54 *  );
    struct env59 env;
};

static  enum Unit_7   handle_dash_key952 (   struct env161* env ,    struct Editor_147 *  ed4267 ,    struct Key_168  key4269 ) {
    struct EditorMode_149 *  dref4270 = ( & ( ( * (  ed4267 ) ) .f_mode ) );
    if ( (* dref4270 ).tag == EditorMode_149_Normal_t ) {
        enum Mode_128  dref4271 = ( ( ( * (  ed4267 ) ) .f_pane ) .f_mode );
        switch (  dref4271 ) {
            case Mode_128_Normal : {
                struct envunion167  temp953 = ( (struct envunion167){ .fun = (  enum Unit_7  (*) (  struct env150*  ,    struct Editor_147 *  ,    struct Key_168  ) )handle_dash_normal_dash_key954 , .env =  env->envinst150 } );
                ( temp953.fun ( &temp953.env ,  (  ed4267 ) ,  (  key4269 ) ) );
                break;
            }
            case Mode_128_Select : {
                struct envunion1456  temp1455 = ( (struct envunion1456){ .fun = (  enum Unit_7  (*) (  struct env150*  ,    struct Editor_147 *  ,    struct Key_168  ) )handle_dash_normal_dash_key954 , .env =  env->envinst150 } );
                ( temp1455.fun ( &temp1455.env ,  (  ed4267 ) ,  (  key4269 ) ) );
                break;
            }
            case Mode_128_Insert : {
                struct Key_168  dref4272 = (  key4269 );
                if ( dref4272.tag == Key_168_Escape_t ) {
                    ( (  set_dash_mode1008 ) ( ( (  pane999 ) ( (  ed4267 ) ) ) ,  ( Mode_128_Normal ) ) );
                }
                else {
                    if ( dref4272.tag == Key_168_Enter_t ) {
                        int32_t  indent4273 = ( (  indent_dash_at_dash_line1011 ) ( ( (  pane999 ) ( (  ed4267 ) ) ) ,  ( ( ( * ( (  pane999 ) ( (  ed4267 ) ) ) ) .f_cursor ) .f_line ) ) );
                        struct envunion1458  temp1457 = ( (struct envunion1458){ .fun = (  enum Unit_7  (*) (  struct env111*  ,    struct Pane_127 *  ,    struct StrView_21  ) )add_dash_str_dash_at_dash_char1032 , .env =  env->envinst111 } );
                        ( temp1457.fun ( &temp1457.env ,  ( (  pane999 ) ( (  ed4267 ) ) ) ,  ( (  from_dash_charlike1095 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right1000 ) ( ( (  pane999 ) ( (  ed4267 ) ) ) ) );
                        struct envunion169  temp1459 = ( (struct envunion169){ .fun = (  enum Unit_7  (*) (  struct env133*  ,    struct Pane_127 *  ,    int32_t  ) )indent_dash_at_dash_current1172 , .env =  env->envinst133 } );
                        ( temp1459.fun ( &temp1459.env ,  ( (  pane999 ) ( (  ed4267 ) ) ) ,  (  indent4273 ) ) );
                    }
                    else {
                        if ( dref4272.tag == Key_168_Backspace_t ) {
                            struct envunion164  temp1460 = ( (struct envunion164){ .fun = (  enum Unit_7  (*) (  struct env114*  ,    struct Pane_127 *  ) )backspace1461 , .env =  env->envinst114 } );
                            ( temp1460.fun ( &temp1460.env ,  ( (  pane999 ) ( (  ed4267 ) ) ) ) );
                        }
                        else {
                            if ( dref4272.tag == Key_168_Char_t ) {
                                struct Array_1464  temp1466 = ( (  from_dash_listlike1467 ) ( ( (struct Array_1464) { ._arr = { ( dref4272 .stuff .Key_168_Char_s .field0 ) } } ) ) );
                                struct StrView_21  s4275 = ( (  from_dash_ascii_dash_slice828 ) ( ( (  as_dash_slice1463 ) ( ( &temp1466 ) ) ) ) );
                                struct envunion162  temp1468 = ( (struct envunion162){ .fun = (  enum Unit_7  (*) (  struct env111*  ,    struct Pane_127 *  ,    struct StrView_21  ) )add_dash_str_dash_at_dash_char1032 , .env =  env->envinst111 } );
                                ( temp1468.fun ( &temp1468.env ,  ( (  pane999 ) ( (  ed4267 ) ) ) ,  (  s4275 ) ) );
                                ( (  move_dash_right1000 ) ( ( (  pane999 ) ( (  ed4267 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4270 ).tag == EditorMode_149_Cmd_t ) {
            struct Key_168  dref4278 = (  key4269 );
            if ( dref4278.tag == Key_168_Escape_t ) {
                ( (  set_dash_cursors956 ) ( ( (  pane999 ) ( (  ed4267 ) ) ) ,  ( (* dref4270 ) .stuff .EditorMode_149_Cmd_s .field0 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_957_UpdateVI ) ) );
                (*  ed4267 ) .f_mode = ( (struct EditorMode_149) { .tag = EditorMode_149_Normal_t } );
            }
            else {
                if ( dref4278.tag == Key_168_Enter_t ) {
                    struct envunion163  temp1469 = ( (struct envunion163){ .fun = (  enum Unit_7  (*) (  struct env145*  ,    struct Editor_147 *  ,    struct StrView_21  ) )run_dash_cmd1470 , .env =  env->envinst145 } );
                    ( temp1469.fun ( &temp1469.env ,  (  ed4267 ) ,  ( (  as_dash_str1337 ) ( ( & ( (* dref4270 ) .stuff .EditorMode_149_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1535 ) ( ( & ( (* dref4270 ) .stuff .EditorMode_149_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors956 ) ( ( (  pane999 ) ( (  ed4267 ) ) ) ,  ( ( * ( (  pane999 ) ( (  ed4267 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_957_UpdateVI ) ) );
                    (*  ed4267 ) .f_mode = ( (struct EditorMode_149) { .tag = EditorMode_149_Normal_t } );
                }
                else {
                    if ( dref4278.tag == Key_168_Char_t ) {
                        struct envunion165  temp1536 = ( (struct envunion165){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1328 , .env =  env->envinst52 } );
                        ( temp1536.fun ( &temp1536.env ,  ( & ( (* dref4270 ) .stuff .EditorMode_149_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1537 ) ( ( dref4278 .stuff .Key_168_Char_s .field0 ) ) ) ) );
                        ( (  live_dash_cmd1538 ) ( (  ed4267 ) ,  ( (  as_dash_str1337 ) ( ( & ( (* dref4270 ) .stuff .EditorMode_149_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4278.tag == Key_168_Backspace_t ) {
                            if ( ( ! ( (  null1544 ) ( ( (* dref4270 ) .stuff .EditorMode_149_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion166  temp1549 = ( (struct envunion166){ .fun = (  enum Unit_7  (*) (  struct env59*  ,    struct StrBuilder_54 *  ) )pop1550 , .env =  env->envinst59 } );
                                ( temp1549.fun ( &temp1549.env ,  ( & ( (* dref4270 ) .stuff .EditorMode_149_Cmd_s .field1 ) ) ) );
                            }
                            ( (  live_dash_cmd1538 ) ( (  ed4267 ) ,  ( (  as_dash_str1337 ) ( ( & ( (* dref4270 ) .stuff .EditorMode_149_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref4270 ).tag == EditorMode_149_Search_t ) {
                struct Key_168  dref4282 = (  key4269 );
                if ( dref4282.tag == Key_168_Escape_t ) {
                    ( (  set_dash_cursors956 ) ( ( (  pane999 ) ( (  ed4267 ) ) ) ,  ( (* dref4270 ) .stuff .EditorMode_149_Search_s .field0 ) ,  ( (struct Maybe_28) { .tag = Maybe_28_None_t } ) ,  ( CursorMovement_957_UpdateVI ) ) );
                    (*  ed4267 ) .f_mode = ( (struct EditorMode_149) { .tag = EditorMode_149_Normal_t } );
                }
                else {
                    if ( dref4282.tag == Key_168_Enter_t ) {
                        ( (  set_dash_cursors956 ) ( ( (  pane999 ) ( (  ed4267 ) ) ) ,  ( ( * ( (  pane999 ) ( (  ed4267 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane999 ) ( (  ed4267 ) ) ) ) .f_sel ) ,  ( CursorMovement_957_UpdateVI ) ) );
                        struct env1557 envinst1557 = {
                            .ed4267 =  ed4267 ,
                        };
                        ( (  if_dash_just1556 ) ( ( ( * (  ed4267 ) ) .f_search_dash_term ) ,  ( (struct envunion1558){ .fun = (  enum Unit_7  (*) (  struct env1557*  ,    struct StrView_21  ) )lam1560 , .env =  envinst1557 } ) ) );
                        if ( ( ! ( (  null1544 ) ( ( (* dref4270 ) .stuff .EditorMode_149_Search_s .field1 ) ) ) ) ) {
                            struct Pos_20  to4285 = ( ( * ( (  pane999 ) ( (  ed4267 ) ) ) ) .f_cursor );
                            struct Pos_20  from4286 = ( (  or_dash_else1267 ) ( ( ( * ( (  pane999 ) ( (  ed4267 ) ) ) ) .f_sel ) ,  (  to4285 ) ) );
                            (*  ed4267 ) .f_search_dash_term = ( ( Maybe_148_Just ) ( ( (  as_dash_str1337 ) ( ( & ( (* dref4270 ) .stuff .EditorMode_149_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4267 ) .f_search_dash_term = ( (struct Maybe_148) { .tag = Maybe_148_None_t } );
                        }
                        (*  ed4267 ) .f_mode = ( (struct EditorMode_149) { .tag = EditorMode_149_Normal_t } );
                    }
                    else {
                        if ( dref4282.tag == Key_168_Char_t ) {
                            struct envunion1562  temp1561 = ( (struct envunion1562){ .fun = (  enum Unit_7  (*) (  struct env52*  ,    struct StrBuilder_54 *  ,    struct Char_57  ) )write_dash_char1328 , .env =  env->envinst52 } );
                            ( temp1561.fun ( &temp1561.env ,  ( & ( (* dref4270 ) .stuff .EditorMode_149_Search_s .field1 ) ) ,  ( (  ascii_dash_char1537 ) ( ( dref4282 .stuff .Key_168_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1563 ) ( (  ed4267 ) ,  ( (* dref4270 ) .stuff .EditorMode_149_Search_s .field0 ) ,  ( (  as_dash_str1337 ) ( ( & ( (* dref4270 ) .stuff .EditorMode_149_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4282.tag == Key_168_Backspace_t ) {
                                if ( ( ! ( (  null1544 ) ( ( (* dref4270 ) .stuff .EditorMode_149_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1568  temp1567 = ( (struct envunion1568){ .fun = (  enum Unit_7  (*) (  struct env59*  ,    struct StrBuilder_54 *  ) )pop1550 , .env =  env->envinst59 } );
                                    ( temp1567.fun ( &temp1567.env ,  ( & ( (* dref4270 ) .stuff .EditorMode_149_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1563 ) ( (  ed4267 ) ,  ( (* dref4270 ) .stuff .EditorMode_149_Search_s .field0 ) ,  ( (  as_dash_str1337 ) ( ( & ( (* dref4270 ) .stuff .EditorMode_149_Search_s .field1 ) ) ) ) ) );
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
                    ( (  todo1509 ) ( ) );
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

struct envunion1570 {
    bool  (*fun) (  struct env77*  ,    struct Screen_672 *  );
    struct env77 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1571 (   struct env77* env ,    struct Screen_672 *  screen3461 ) {
    struct Tui_73 *  tui3462 = ( ( * (  screen3461 ) ) .f_tui );
    struct envunion78  temp1572 = ( (struct envunion78){ .fun = (  bool  (*) (  struct env70*  ,    struct Tui_73 *  ) )update_dash_dimensions743 , .env =  env->envinst70 } );
    bool  updated_dash_dimensions3463 = ( temp1572.fun ( &temp1572.env ,  (  tui3462 ) ) );
    if ( ( ! (  updated_dash_dimensions3463 ) ) ) {
        return ( false );
    }
    (*  screen3461 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3464 = ( ( * ( ( * (  screen3461 ) ) .f_tui ) ) .f_width );
    uint32_t  h3465 = ( ( * ( ( * (  screen3461 ) ) .f_tui ) ) .f_height );
    size_t  nusz3466 = ( (  u32_dash_size686 ) ( (  op_dash_mul694 ( (  w3464 ) , (  h3465 ) ) ) ) );
    if ( (  cmp195 ( (  nusz3466 ) , ( ( ( * (  screen3461 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_672  nuscreen3467 = ( (  mk_dash_screen680 ) ( (  tui3462 ) ,  ( ( * (  screen3461 ) ) .f_al ) ) );
    (*  screen3461 ) .f_current = ( (  nuscreen3467 ) .f_current );
    (*  screen3461 ) .f_previous = ( (  nuscreen3467 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1573 (    struct Tui_73 *  tui3388 ) {
    bool  redraw3389 = ( ( * (  tui3388 ) ) .f_should_dash_redraw );
    (*  tui3388 ) .f_should_dash_redraw = ( false );
    return (  redraw3389 );
}

struct env1577 {
    struct Slice_673  s1905;
    struct Cell_674 (*  fun1907 )(    struct Cell_674  );
    ;
    ;
    ;
};

struct envunion1578 {
    enum Unit_7  (*fun) (  struct env1577*  ,    int32_t  );
    struct env1577 env;
};

static  enum Unit_7   for_dash_each1576 (    struct Range_697  iterable1074 ,   struct envunion1578  fun1076 ) {
    struct RangeIter_700  temp1579 = ( (  into_dash_iter702 ) ( (  iterable1074 ) ) );
    struct RangeIter_700 *  it1077 = ( &temp1579 );
    while ( ( true ) ) {
        struct Maybe_283  dref1078 = ( (  next703 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_283_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_283_Just_t ) {
                struct envunion1578  temp1580 = (  fun1076 );
                ( temp1580.fun ( &temp1580.env ,  ( dref1078 .stuff .Maybe_283_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam1581 (   struct env1577* env ,    int32_t  i1909 ) {
    return ( (  set707 ) ( ( env->s1905 ) ,  ( (  i32_dash_size273 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get711 ( ( env->s1905 ) , ( (  i32_dash_size273 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_7   map1575 (    struct Slice_673  s1905 ,    struct Cell_674 (*  fun1907 )(    struct Cell_674  ) ) {
    struct env1577 envinst1577 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each1576 ) ( ( (  to705 ) ( (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_i32207 ) ( (  op_dash_sub315 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1578){ .fun = (  enum Unit_7  (*) (  struct env1577*  ,    int32_t  ) )lam1581 , .env =  envinst1577 } ) ) );
    return ( Unit_7_Unit );
}

static  struct Cell_674   lam1582 (    struct Cell_674  dref3425 ) {
    return ( (  default_dash_cell719 ) ( ) );
}

static  enum Unit_7   clear_dash_screen1574 (    struct Screen_672 *  screen3424 ) {
    ( (  map1575 ) ( ( ( * (  screen3424 ) ) .f_current ) ,  (  lam1582 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_screen_dash_fg1583 (    struct Screen_672 *  screen3470 ,    struct Color_675  c3472 ) {
    (*  screen3470 ) .f_default_dash_fg = (  c3472 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_screen_dash_bg1584 (    struct Screen_672 *  screen3475 ,    struct Color_675  c3477 ) {
    (*  screen3475 ) .f_default_dash_bg = (  c3477 );
    return ( Unit_7_Unit );
}

struct ScreenDims_1586 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

static  int32_t   cast1588 (    uint32_t  x356 ) {
    return ( (int32_t ) (  x356 ) );
}

static  int32_t   u32_dash_i321587 (    uint32_t  x660 ) {
    return ( (  cast1588 ) ( (  x660 ) ) );
}

static  int32_t   screen_dash_width1591 (    struct ScreenDims_1586  sd3877 ) {
    return (  op_dash_add285 ( (  op_dash_sub823 ( ( (  sd3877 ) .f_to_dash_sx ) , ( (  sd3877 ) .f_from_dash_sx ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1592 (    struct ScreenDims_1586  sd3880 ) {
    return (  op_dash_add285 ( (  op_dash_sub823 ( ( (  sd3880 ) .f_to_dash_sy ) , ( (  sd3880 ) .f_from_dash_sy ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
}

static  enum Unit_7   update_dash_screen_dash_offset1590 (    struct Pane_127 *  pane3883 ,    struct ScreenDims_1586  sd3885 ) {
    struct Pos_20  cur3886 = ( ( * (  pane3883 ) ) .f_cursor );
    int32_t  cur_dash_sx3887 = ( (  pos_dash_vi960 ) ( ( ( * (  pane3883 ) ) .f_buf ) ,  (  cur3886 ) ) );
    struct ScreenCursorOffset_129  sc_dash_off3888 = ( ( * (  pane3883 ) ) .f_sc_dash_off );
    int32_t  sw3889 = (  op_dash_sub823 ( ( (  screen_dash_width1591 ) ( (  sd3885 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    int32_t  sh3890 = (  op_dash_sub823 ( ( (  screen_dash_height1592 ) ( (  sd3885 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    int32_t  margin3891 = (  from_dash_integral48 ( 5 ) );
    int32_t  csi3892 = ( (  pos_dash_vi960 ) ( ( ( * (  pane3883 ) ) .f_buf ) ,  (  cur3886 ) ) );
    int32_t  csx3893 = (  op_dash_sub823 ( (  csi3892 ) , ( (  sc_dash_off3888 ) .f_screen_dash_left ) ) );
    int32_t  csy3894 = (  op_dash_sub823 ( ( (  cur3886 ) .f_line ) , ( (  sc_dash_off3888 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left3895 = ( (  sc_dash_off3888 ) .f_screen_dash_left );
    if ( (  cmp328 ( (  csx3893 ) , (  margin3891 ) ) == 0 ) ) {
        nu_dash_screen_dash_left3895 = (  op_dash_sub823 ( (  csi3892 ) , (  margin3891 ) ) );
    } else {
        if ( (  cmp328 ( (  csx3893 ) , (  op_dash_sub823 ( (  sw3889 ) , (  margin3891 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left3895 = (  op_dash_add285 ( (  op_dash_sub823 ( (  csi3892 ) , (  sw3889 ) ) ) , (  margin3891 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left3896 = ( (  max975 ) ( (  nu_dash_screen_dash_left3895 ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top3897 = ( (  sc_dash_off3888 ) .f_screen_dash_top );
    if ( (  cmp328 ( (  csy3894 ) , (  margin3891 ) ) == 0 ) ) {
        nu_dash_screen_dash_top3897 = (  op_dash_sub823 ( ( (  cur3886 ) .f_line ) , (  margin3891 ) ) );
    } else {
        if ( (  cmp328 ( (  csy3894 ) , (  op_dash_sub823 ( (  sh3890 ) , (  margin3891 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top3897 = (  op_dash_add285 ( (  op_dash_sub823 ( ( (  cur3886 ) .f_line ) , (  sh3890 ) ) ) , (  margin3891 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top3898 = ( (  max975 ) ( (  nu_dash_screen_dash_top3897 ) ,  (  from_dash_integral48 ( 0 ) ) ) );
    (*  pane3883 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_129) { .f_screen_dash_top = (  nu_dash_screen_dash_top3898 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left3896 ) } );
    return ( Unit_7_Unit );
}

struct IntStrIter_1594 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

static  struct IntStrIter_1594   into_dash_iter1596 (    struct IntStrIter_1594  self1419 ) {
    return (  self1419 );
}

struct env1600 {
    int32_t  base1210;
    ;
};

struct envunion1601 {
    int32_t  (*fun) (  struct env1600*  ,    int32_t  ,    int32_t  );
    struct env1600 env;
};

static  int32_t   reduce1599 (    struct Range_697  iterable1093 ,    int32_t  base1095 ,   struct envunion1601  fun1097 ) {
    int32_t  x1098 = (  base1095 );
    struct RangeIter_700  it1099 = ( (  into_dash_iter702 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_283  dref1100 = ( (  next703 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_283_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_283_Just_t ) {
                struct envunion1601  temp1602 = (  fun1097 );
                x1098 = ( temp1602.fun ( &temp1602.env ,  ( dref1100 .stuff .Maybe_283_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1603 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1603);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1604;
    return (  temp1604 );
}

static  int32_t   lam1605 (   struct env1600* env ,    int32_t  item1214 ,    int32_t  x1216 ) {
    return (  op_dash_mul1405 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int32_t   pow1598 (    int32_t  base1210 ,    int32_t  p1212 ) {
    struct env1600 envinst1600 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1599 ) ( ( (  to705 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub823 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral48 ( 1 ) ) ,  ( (struct envunion1601){ .fun = (  int32_t  (*) (  struct env1600*  ,    int32_t  ,    int32_t  ) )lam1605 , .env =  envinst1600 } ) ) );
}

static  uint8_t   cast1606 (    int32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_617   next1597 (    struct IntStrIter_1594 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_617_Just ) ( ( (  from_dash_charlike232 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp328 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_617) { .tag = Maybe_617_None_t } );
    }
    int32_t  trim_dash_down1423 = ( (  pow1598 ) ( (  from_dash_integral48 ( 10 ) ) ,  (  op_dash_sub823 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    int32_t  upper1424 = (  op_dash_div1404 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    int32_t  upper_dash_mask1425 = (  op_dash_mul1405 ( (  op_dash_div1404 ( (  upper1424 ) , (  from_dash_integral48 ( 10 ) ) ) ) , (  from_dash_integral48 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1606 ) ( (  op_dash_sub823 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub823 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8903 ) ( (  op_dash_add793 ( (  digit1426 ) , (  from_dash_integral223 ( 48 ) ) ) ) ) );
    return ( ( Maybe_617_Just ) ( (  digit_dash_char1427 ) ) );
}

static  size_t   reduce1595 (    struct IntStrIter_1594  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_57  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct IntStrIter_1594  it1099 = ( (  into_dash_iter1596 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_617  dref1100 = ( (  next1597 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_617_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_617_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_617_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1607 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1607);
    exit ( 1 );
    ( Unit_7_Unit );
    size_t  temp1608;
    return (  temp1608 );
}

static  size_t   lam1609 (    struct Char_57  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add243 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1593 (    struct IntStrIter_1594  it1104 ) {
    return ( (  reduce1595 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1609 ) ) );
}

static  int32_t   count_dash_digits1612 (    int32_t  self1430 ) {
    if ( (  eq331 ( (  self1430 ) , (  from_dash_integral48 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp328 ( (  self1430 ) , (  from_dash_integral48 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1404 ( (  self1430 ) , (  from_dash_integral48 ( 10 ) ) ) );
        digits1431 = (  op_dash_add285 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1594   int_dash_iter1611 (    int32_t  int1434 ) {
    if ( (  cmp328 ( (  int1434 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1594) { .f_int = (  op_dash_neg647 ( (  int1434 ) ) ) , .f_len = ( (  count_dash_digits1612 ) ( (  op_dash_neg647 ( (  int1434 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1594) { .f_int = (  int1434 ) , .f_len = ( (  count_dash_digits1612 ) ( (  int1434 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1594   chars1610 (    int32_t  self1443 ) {
    return ( (  int_dash_iter1611 ) ( (  self1443 ) ) );
}

struct Map_1617 {
    struct IntStrIter_1594  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1617 Map_1617_Map (  struct IntStrIter_1594  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1617 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1617   into_dash_iter1619 (    struct Map_1617  self796 ) {
    return (  self796 );
}

static  struct Maybe_283   next1620 (    struct Map_1617 *  dref798 ) {
    struct Maybe_617  dref801 = ( (  next1597 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_617_None_t ) {
        return ( (struct Maybe_283) { .tag = Maybe_283_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_617_Just_t ) {
            return ( ( Maybe_283_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_617_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1618 (    struct Map_1617  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1617  it1099 = ( (  into_dash_iter1619 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_283  dref1100 = ( (  next1620 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_283_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_283_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_283_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1621 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1621);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1622;
    return (  temp1622 );
}

static  int32_t   lam1623 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add285 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1616 (    struct Map_1617  it1110 ) {
    return ( (  reduce1618 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1623 ) ) );
}

static  struct Map_1617   map1624 (    struct IntStrIter_1594  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct IntStrIter_1594  it808 = ( (  into_dash_iter1596 ) ( (  iterable805 ) ) );
    return ( ( Map_1617_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  enum Unit_7   put_dash_char1628 (    struct Screen_672 *  screen3508 ,    struct Char_57  c3510 ,    int32_t  x3512 ,    int32_t  y3514 ) {
    int32_t  w3515 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3508 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp328 ( (  x3512 ) , (  w3515 ) ) != 0 ) || (  cmp328 ( (  y3514 ) , ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3508 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp328 ( (  x3512 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) ) || (  cmp328 ( (  y3514 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    size_t  i3516 = ( (  i32_dash_size273 ) ( (  op_dash_add285 ( (  op_dash_mul1405 ( (  y3514 ) , (  w3515 ) ) ) , (  x3512 ) ) ) ) );
    struct Color_675  fg3517 = ( ( * (  screen3508 ) ) .f_default_dash_fg );
    struct Color_675  bg3518 = ( ( * (  screen3508 ) ) .f_default_dash_bg );
    struct Char_57  c3519 = (  c3510 );
    int32_t  char_dash_width3520 = ( (  wcwidth976 ) ( (  c3519 ) ) );
    if ( ( (  cmp328 ( (  x3512 ) , (  from_dash_integral48 ( 0 ) ) ) == 2 ) && (  cmp328 ( ( (  elem_dash_get711 ( ( ( * (  screen3508 ) ) .f_current ) , (  op_dash_sub315 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral48 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_674  pc3521 = (  elem_dash_get711 ( ( ( * (  screen3508 ) ) .f_current ) , (  op_dash_sub315 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set707 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  op_dash_sub315 ( (  i3516 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_674) { .f_c = ( (  from_dash_charlike232 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3521 ) .f_fg ) , .f_bg = ( (  pc3521 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral48 ( 1 ) ) } ) ) );
    }
    ( (  set707 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  i3516 ) ,  ( (struct Cell_674) { .f_c = (  c3519 ) , .f_fg = (  fg3517 ) , .f_bg = (  bg3518 ) , .f_char_dash_width = (  char_dash_width3520 ) } ) ) );
    struct RangeIter_700  temp1629 =  into_dash_iter702 ( ( (  to705 ) ( (  op_dash_add285 ( (  x3512 ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  ( (  min480 ) ( (  op_dash_sub823 ( (  op_dash_add285 ( (  x3512 ) , (  char_dash_width3520 ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  (  w3515 ) ) ) ) ) );
    while (true) {
        struct Maybe_283  __cond1630 =  next703 (&temp1629);
        if (  __cond1630 .tag == 0 ) {
            break;
        }
        int32_t  xx3523 =  __cond1630 .stuff .Maybe_283_Just_s .field0;
        size_t  i3524 = ( (  i32_dash_size273 ) ( (  op_dash_add285 ( (  op_dash_mul1405 ( (  y3514 ) , (  w3515 ) ) ) , (  xx3523 ) ) ) ) );
        ( (  set707 ) ( ( ( * (  screen3508 ) ) .f_current ) ,  (  i3524 ) ,  ( (struct Cell_674) { .f_c = ( (  from_dash_charlike232 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = (  fg3517 ) , .f_bg = (  bg3518 ) , .f_char_dash_width = (  from_dash_integral48 ( 1 ) ) } ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str1625 (    struct Screen_672 *  screen3527 ,    int32_t  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp328 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp328 ( (  y3533 ) , ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add285 ( (  op_dash_mul1405 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min480 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size273 ) ( (  op_dash_sub823 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct IntStrIter_1594  temp1626 =  into_dash_iter1596 ( ( (  chars1610 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_617  __cond1627 =  next1597 (&temp1626);
        if (  __cond1627 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1627 .stuff .Maybe_617_Just_s .field0;
        ( (  put_dash_char1628 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add285 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add285 ( (  xx3538 ) , ( (  rendered_dash_wcwidth974 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1615 (    struct Screen_672 *  screen3543 ,    int32_t  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1616 ) ( ( (  map1624 ) ( ( (  chars1610 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth974 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub823 ( (  op_dash_sub823 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1625 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1632 {
    struct StrView_21  field0;
    int32_t  field1;
};

static struct StrConcat_1632 StrConcat_1632_StrConcat (  struct StrView_21  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1632 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1635 {
    struct StrView_21  field0;
    struct StrConcat_1632  field1;
};

static struct StrConcat_1635 StrConcat_1635_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_1632  field1 ) {
    return ( struct StrConcat_1635 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1634 {
    struct StrConcat_1635  field0;
    struct Char_57  field1;
};

static struct StrConcat_1634 StrConcat_1634_StrConcat (  struct StrConcat_1635  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1634 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str1637 (    struct StrConcat_1632  self1503 ) {
    struct StrConcat_1632  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str206 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str213 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str1636 (    struct StrConcat_1635  self1503 ) {
    struct StrConcat_1635  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str206 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str1637 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str1633 (    struct StrConcat_1634  self1503 ) {
    struct StrConcat_1634  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str1636 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str214 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   assert1631 (    bool  cond1718 ,    struct StrConcat_1632  msg1720 ) {
    if ( ( ! (  cond1718 ) ) ) {
        ( (  print_dash_str1633 ) ( ( ( StrConcat_1634_StrConcat ) ( ( ( StrConcat_1635_StrConcat ) ( ( (  from_dash_string231 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1720 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    }
    return ( Unit_7_Unit );
}

struct AppendIter_1639 {
    struct StrViewIter_614  f_it;
    struct Char_57  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1639   into_dash_iter1640 (    struct AppendIter_1639  self1019 ) {
    return (  self1019 );
}

static  struct AppendIter_1639   append1641 (    struct StrViewIter_614  it1006 ,    struct Char_57  e1008 ) {
    return ( (struct AppendIter_1639) { .f_it = ( (  into_dash_iter616 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct Maybe_617   next1643 (    struct AppendIter_1639 *  self1022 ) {
    struct Maybe_617  dref1023 = ( (  next618 ) ( ( & ( ( * (  self1022 ) ) .f_it ) ) ) );
    if ( dref1023.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1023 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1023.tag == Maybe_617_None_t ) {
            if ( ( ! ( ( * (  self1022 ) ) .f_appended ) ) ) {
                (*  self1022 ) .f_appended = ( true );
                return ( ( Maybe_617_Just ) ( ( ( * (  self1022 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_617) { .tag = Maybe_617_None_t } );
        }
    }
}

static  bool   between1645 (    struct Pos_20  c1337 ,    struct Pos_20  l1339 ,    struct Pos_20  r1341 ) {
    struct Pos_20  from1342 = ( (  min326 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Pos_20  to1343 = ( (  max329 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp327 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp327 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1644 (    struct Pane_127 *  pane3869 ,    struct Pos_20  pos3871 ) {
    return ( {  struct Maybe_28  dref3872 = ( ( * (  pane3869 ) ) .f_sel ) ; dref3872.tag == Maybe_28_Just_t ? ( (  between1645 ) ( (  pos3871 ) ,  ( ( * (  pane3869 ) ) .f_cursor ) ,  ( dref3872 .stuff .Maybe_28_Just_s .field0 ) ) ) : ( false ) ; } );
}

static  enum Unit_7   render1589 (    struct Screen_672 *  screen3901 ,    struct Pane_127 *  pane3903 ,    struct ScreenDims_1586  sd3905 ) {
    bool  display_dash_line_dash_numbers3906 = ( true );
    ( (  update_dash_screen_dash_offset1590 ) ( (  pane3903 ) ,  (  sd3905 ) ) );
    struct ScreenCursorOffset_129  sc_dash_off3907 = ( ( * (  pane3903 ) ) .f_sc_dash_off );
    int32_t  max_dash_line_dash_num_dash_chars3908 = ( (  size_dash_i32207 ) ( ( (  count1593 ) ( ( (  chars1610 ) ( ( (  num_dash_lines1002 ) ( ( ( * (  pane3903 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin3909 = (  from_dash_integral48 ( 2 ) );
    int32_t  num_dash_back_dash_margin3910 = (  from_dash_integral48 ( 2 ) );
    int32_t  total_dash_margin3911 = ( (  display_dash_line_dash_numbers3906 ) ? (  op_dash_add285 ( (  op_dash_add285 ( (  max_dash_line_dash_num_dash_chars3908 ) , (  num_dash_front_dash_margin3909 ) ) ) , (  num_dash_back_dash_margin3910 ) ) ) : (  from_dash_integral48 ( 0 ) ) );
    struct RangeIter_700  temp1613 =  into_dash_iter702 ( ( (  to705 ) ( (  op_dash_add285 ( ( (  sc_dash_off3907 ) .f_screen_dash_top ) , (  from_dash_integral48 ( 1 ) ) ) ) ,  ( (  min480 ) ( ( (  num_dash_lines1002 ) ( ( ( * (  pane3903 ) ) .f_buf ) ) ) ,  (  op_dash_add285 ( ( (  sc_dash_off3907 ) .f_screen_dash_top ) , ( (  screen_dash_height1592 ) ( (  sd3905 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_283  __cond1614 =  next703 (&temp1613);
        if (  __cond1614 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num3913 =  __cond1614 .stuff .Maybe_283_Just_s .field0;
        int32_t  ybi3914 = (  op_dash_sub823 ( (  line_dash_num3913 ) , (  from_dash_integral48 ( 1 ) ) ) );
        int32_t  xbi3915 = ( (  vi_dash_bi1004 ) ( ( ( * (  pane3903 ) ) .f_buf ) ,  (  ybi3914 ) ,  ( (  sc_dash_off3907 ) .f_screen_dash_left ) ) );
        struct StrView_21  line_dash_content3916 = ( (  line962 ) ( ( ( * (  pane3903 ) ) .f_buf ) ,  (  ybi3914 ) ) );
        int32_t  ys3917 = (  op_dash_sub823 ( (  op_dash_sub823 ( (  op_dash_add285 ( ( (  sd3905 ) .f_from_dash_sy ) , (  line_dash_num3913 ) ) ) , ( (  sc_dash_off3907 ) .f_screen_dash_top ) ) ) , (  from_dash_integral48 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers3906 ) ) {
            ( (  draw_dash_str_dash_right1615 ) ( (  screen3901 ) ,  (  line_dash_num3913 ) ,  (  op_dash_add285 ( (  op_dash_sub823 ( (  op_dash_sub823 ( ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3901 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd3905 ) .f_from_dash_sx ) ) ) , (  total_dash_margin3911 ) ) ) , (  num_dash_back_dash_margin3910 ) ) ) ,  (  ys3917 ) ) );
        }
        int32_t  vx3918 = (  op_dash_sub823 ( ( (  pos_dash_vi960 ) ( ( ( * (  pane3903 ) ) .f_buf ) ,  ( (  mk309 ) ( (  ybi3914 ) ,  (  xbi3915 ) ) ) ) ) , ( (  sc_dash_off3907 ) .f_screen_dash_left ) ) );
        ( (  assert1631 ) ( (  cmp328 ( (  vx3918 ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1632_StrConcat ) ( ( (  from_dash_string231 ) ( ( "vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx3918 ) ) ) ) );
        int32_t  left_dash_offset3919 = (  op_dash_add285 ( ( (  sd3905 ) .f_from_dash_sx ) , (  total_dash_margin3911 ) ) );
        struct AppendIter_1639  temp1638 =  into_dash_iter1640 ( ( (  append1641 ) ( ( (  chars619 ) ( ( (  byte_dash_substr_dash_from1398 ) ( (  line_dash_content3916 ) ,  ( (  i32_dash_size273 ) ( (  xbi3915 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike232 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_617  __cond1642 =  next1643 (&temp1638);
            if (  __cond1642 .tag == 0 ) {
                break;
            }
            struct Char_57  c3921 =  __cond1642 .stuff .Maybe_617_Just_s .field0;
            if ( (  cmp328 ( (  vx3918 ) , ( (  sd3905 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_20  curpos3922 = ( (  mk309 ) ( (  ybi3914 ) ,  (  xbi3915 ) ) );
            bool  is_dash_cursor3923 = (  eq330 ( (  curpos3922 ) , ( ( * (  pane3903 ) ) .f_cursor ) ) );
            bool  in_dash_selection3924 = ( (  is_dash_in_dash_selection1644 ) ( (  pane3903 ) ,  ( (  mk309 ) ( (  ybi3914 ) ,  (  xbi3915 ) ) ) ) );
            if ( (  is_dash_cursor3923 ) ) {
                (*  screen3901 ) .f_default_dash_fg = ( ( Color_675_Color8 ) ( ( Color8_676_Black8 ) ) );
                (*  screen3901 ) .f_default_dash_bg = ( ( Color_675_Color8 ) ( ( Color8_676_White8 ) ) );
            } else {
                if ( (  in_dash_selection3924 ) ) {
                    (*  screen3901 ) .f_default_dash_bg = ( ( Color_675_Color8 ) ( ( Color8_676_Cyan8 ) ) );
                }
            }
            struct Maybe_148  dref3925 = ( (  char_dash_replacement967 ) ( (  c3921 ) ) );
            if ( dref3925.tag == Maybe_148_None_t ) {
                if ( ( ! ( (  cmp328 ( (  vx3918 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp328 ( (  op_dash_sub823 ( (  op_dash_add285 ( (  vx3918 ) , ( (  char_dash_screen_dash_width965 ) ( (  c3921 ) ) ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) , ( (  sd3905 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1628 ) ( (  screen3901 ) ,  (  c3921 ) ,  (  op_dash_add285 ( (  left_dash_offset3919 ) , (  vx3918 ) ) ) ,  (  ys3917 ) ) );
                }
                vx3918 = (  op_dash_add285 ( (  vx3918 ) , ( (  char_dash_screen_dash_width965 ) ( (  c3921 ) ) ) ) );
            }
            else {
                if ( dref3925.tag == Maybe_148_Just_t ) {
                    struct StrViewIter_614  temp1646 =  into_dash_iter616 ( ( (  chars619 ) ( ( dref3925 .stuff .Maybe_148_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_617  __cond1647 =  next618 (&temp1646);
                        if (  __cond1647 .tag == 0 ) {
                            break;
                        }
                        struct Char_57  c3928 =  __cond1647 .stuff .Maybe_617_Just_s .field0;
                        if ( (  cmp328 ( (  vx3918 ) , (  from_dash_integral48 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1628 ) ( (  screen3901 ) ,  (  c3928 ) ,  (  op_dash_add285 ( (  left_dash_offset3919 ) , (  vx3918 ) ) ) ,  (  ys3917 ) ) );
                        }
                        vx3918 = (  op_dash_add285 ( (  vx3918 ) , ( (  char_dash_screen_dash_width965 ) ( (  c3928 ) ) ) ) );
                    }
                }
            }
            (*  screen3901 ) .f_default_dash_fg = ( (struct Color_675) { .tag = Color_675_ColorDefault_t } );
            (*  screen3901 ) .f_default_dash_bg = ( (struct Color_675) { .tag = Color_675_ColorDefault_t } );
            xbi3915 = (  op_dash_add285 ( (  xbi3915 ) , ( (  size_dash_i32207 ) ( ( (  c3921 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    return ( Unit_7_Unit );
}

struct env1649 {
    struct Screen_672 *  screen4290;
    ;
    int32_t *  curline4294;
    ;
    ;
    ;
    ;
    ;
};

struct env1650 {
    struct Screen_672 *  screen4290;
    ;
    int32_t *  curline4294;
    ;
    ;
    ;
    ;
    ;
};

struct env1651 {
    struct Screen_672 *  screen4290;
    ;
    int32_t *  curline4294;
    ;
    ;
    ;
    ;
    ;
};

struct env1652 {
    struct Screen_672 *  screen4290;
    ;
    int32_t *  curline4294;
    ;
    ;
    ;
    ;
    ;
};

struct env1653 {
    struct Screen_672 *  screen4290;
    ;
    int32_t *  curline4294;
    ;
    ;
    ;
    ;
    ;
};

struct env1654 {
    struct Screen_672 *  screen4290;
    ;
    int32_t *  curline4294;
    ;
    ;
    ;
    ;
    ;
};

struct env1655 {
    struct Screen_672 *  screen4290;
    ;
    int32_t *  curline4294;
    ;
    ;
    ;
    ;
    ;
};

struct env1656 {
    struct Screen_672 *  screen4290;
    ;
    int32_t *  curline4294;
    ;
    ;
    ;
    ;
    ;
};

struct env1657 {
    struct Screen_672 *  screen4290;
    ;
    int32_t *  curline4294;
    ;
    ;
    ;
    ;
    ;
};

struct StrConcat_1660 {
    struct StrView_21  field0;
    enum Mode_128  field1;
};

static struct StrConcat_1660 StrConcat_1660_StrConcat (  struct StrView_21  field0 ,  enum Mode_128  field1 ) {
    return ( struct StrConcat_1660 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1659 {
    enum Unit_7  (*fun) (  struct env1649*  ,    struct StrConcat_1660  );
    struct env1649 env;
};

struct StrConcatIter_1665 {
    struct StrViewIter_614  f_left;
    struct StrViewIter_614  f_right;
};

struct Map_1664 {
    struct StrConcatIter_1665  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1664 Map_1664_Map (  struct StrConcatIter_1665  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1664 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1664   into_dash_iter1667 (    struct Map_1664  self796 ) {
    return (  self796 );
}

static  struct Maybe_617   next1669 (    struct StrConcatIter_1665 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_283   next1668 (    struct Map_1664 *  dref798 ) {
    struct Maybe_617  dref801 = ( (  next1669 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_617_None_t ) {
        return ( (struct Maybe_283) { .tag = Maybe_283_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_617_Just_t ) {
            return ( ( Maybe_283_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_617_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1666 (    struct Map_1664  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1664  it1099 = ( (  into_dash_iter1667 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_283  dref1100 = ( (  next1668 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_283_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_283_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_283_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1670 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1670);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1671;
    return (  temp1671 );
}

static  int32_t   lam1672 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add285 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1663 (    struct Map_1664  it1110 ) {
    return ( (  reduce1666 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1672 ) ) );
}

static  struct StrConcatIter_1665   into_dash_iter1674 (    struct StrConcatIter_1665  self1491 ) {
    return (  self1491 );
}

static  struct Map_1664   map1673 (    struct StrConcatIter_1665  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1665  it808 = ( (  into_dash_iter1674 ) ( (  iterable805 ) ) );
    return ( ( Map_1664_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrView_21   todo1678 (  ) {
    ( (  print1213 ) ( ( (  from_dash_string231 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined527 ) ( ) );
}

static  struct StrViewIter_614   chars1677 (    enum Mode_128  self3824 ) {
    return ( (  chars619 ) ( ( {  enum Mode_128  dref3825 = (  self3824 ) ;  dref3825 == Mode_128_Normal ? ( (  from_dash_string231 ) ( ( "Normal" ) ,  ( 6 ) ) ) :  dref3825 == Mode_128_Insert ? ( (  from_dash_string231 ) ( ( "Insert" ) ,  ( 6 ) ) ) :  dref3825 == Mode_128_Select ? ( (  from_dash_string231 ) ( ( "Select" ) ,  ( 6 ) ) ) : ( (  todo1678 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1665   into_dash_iter1676 (    struct StrConcat_1660  dref1498 ) {
    return ( (struct StrConcatIter_1665) { .f_left = ( (  chars619 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1677 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1665   chars1675 (    struct StrConcat_1660  self1509 ) {
    return ( (  into_dash_iter1676 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1679 (    struct Screen_672 *  screen3527 ,    struct StrConcat_1660  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp328 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp328 ( (  y3533 ) , ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add285 ( (  op_dash_mul1405 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min480 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size273 ) ( (  op_dash_sub823 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1665  temp1680 =  into_dash_iter1674 ( ( (  chars1675 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_617  __cond1681 =  next1669 (&temp1680);
        if (  __cond1681 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1681 .stuff .Maybe_617_Just_s .field0;
        ( (  put_dash_char1628 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add285 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add285 ( (  xx3538 ) , ( (  rendered_dash_wcwidth974 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1662 (    struct Screen_672 *  screen3543 ,    struct StrConcat_1660  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1663 ) ( ( (  map1673 ) ( ( (  chars1675 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth974 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub823 ( (  op_dash_sub823 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1679 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1661 (   struct env1649* env ,    struct StrConcat_1660  s4297 ) {
    ( (  draw_dash_str_dash_right1662 ) ( ( env->screen4290 ) ,  (  s4297 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4294 ) ) ) );
    (* env->curline4294 ) = (  op_dash_add285 ( ( * ( env->curline4294 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1686 {
    struct StrView_21  field0;
    struct Pos_20  field1;
};

static struct StrConcat_1686 StrConcat_1686_StrConcat (  struct StrView_21  field0 ,  struct Pos_20  field1 ) {
    return ( struct StrConcat_1686 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1685 {
    struct StrConcat_1686  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1685 StrConcat_1685_StrConcat (  struct StrConcat_1686  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1685 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1684 {
    struct StrConcat_1685  field0;
    enum CharType_1198  field1;
};

static struct StrConcat_1684 StrConcat_1684_StrConcat (  struct StrConcat_1685  field0 ,  enum CharType_1198  field1 ) {
    return ( struct StrConcat_1684 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1683 {
    enum Unit_7  (*fun) (  struct env1650*  ,    struct StrConcat_1684  );
    struct env1650 env;
};

struct StrConcatIter_1697 {
    struct AppendIter_884  f_left;
    struct IntStrIter_1594  f_right;
};

struct StrConcatIter_1696 {
    struct StrConcatIter_1697  f_left;
    struct StrViewIter_614  f_right;
};

struct StrConcatIter_1695 {
    struct StrConcatIter_1696  f_left;
    struct IntStrIter_1594  f_right;
};

struct StrConcatIter_1694 {
    struct StrConcatIter_1695  f_left;
    struct AppendIter_884  f_right;
};

struct StrConcatIter_1693 {
    struct StrViewIter_614  f_left;
    struct StrConcatIter_1694  f_right;
};

struct StrConcatIter_1692 {
    struct StrConcatIter_1693  f_left;
    struct StrViewIter_614  f_right;
};

struct StrConcatIter_1691 {
    struct StrConcatIter_1692  f_left;
    struct StrViewIter_614  f_right;
};

struct Map_1690 {
    struct StrConcatIter_1691  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1690 Map_1690_Map (  struct StrConcatIter_1691  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1690 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1690   into_dash_iter1699 (    struct Map_1690  self796 ) {
    return (  self796 );
}

static  struct Maybe_617   next1707 (    struct StrConcatIter_1697 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next910 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next1597 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next1706 (    struct StrConcatIter_1696 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next1707 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next1705 (    struct StrConcatIter_1695 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next1706 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next1597 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next1704 (    struct StrConcatIter_1694 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next1705 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next910 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next1703 (    struct StrConcatIter_1693 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next1704 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next1702 (    struct StrConcatIter_1692 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next1703 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next1701 (    struct StrConcatIter_1691 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next1702 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_283   next1700 (    struct Map_1690 *  dref798 ) {
    struct Maybe_617  dref801 = ( (  next1701 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_617_None_t ) {
        return ( (struct Maybe_283) { .tag = Maybe_283_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_617_Just_t ) {
            return ( ( Maybe_283_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_617_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1698 (    struct Map_1690  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1690  it1099 = ( (  into_dash_iter1699 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_283  dref1100 = ( (  next1700 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_283_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_283_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_283_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1708 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1708);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1709;
    return (  temp1709 );
}

static  int32_t   lam1710 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add285 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1689 (    struct Map_1690  it1110 ) {
    return ( (  reduce1698 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1710 ) ) );
}

static  struct StrConcatIter_1691   into_dash_iter1712 (    struct StrConcatIter_1691  self1491 ) {
    return (  self1491 );
}

static  struct Map_1690   map1711 (    struct StrConcatIter_1691  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1691  it808 = ( (  into_dash_iter1712 ) ( (  iterable805 ) ) );
    return ( ( Map_1690_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1724 {
    struct Char_57  field0;
    int32_t  field1;
};

static struct StrConcat_1724 StrConcat_1724_StrConcat (  struct Char_57  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1724 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1723 {
    struct StrConcat_1724  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1723 StrConcat_1723_StrConcat (  struct StrConcat_1724  field0 ,  struct StrView_21  field1 ) {
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
    struct Char_57  field1;
};

static struct StrConcat_1721 StrConcat_1721_StrConcat (  struct StrConcat_1722  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1721 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_1697   into_dash_iter1731 (    struct StrConcat_1724  dref1498 ) {
    return ( (struct StrConcatIter_1697) { .f_left = ( (  chars924 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1610 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1697   chars1730 (    struct StrConcat_1724  self1509 ) {
    return ( (  into_dash_iter1731 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1696   into_dash_iter1729 (    struct StrConcat_1723  dref1498 ) {
    return ( (struct StrConcatIter_1696) { .f_left = ( (  chars1730 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars619 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1696   chars1728 (    struct StrConcat_1723  self1509 ) {
    return ( (  into_dash_iter1729 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1695   into_dash_iter1727 (    struct StrConcat_1722  dref1498 ) {
    return ( (struct StrConcatIter_1695) { .f_left = ( (  chars1728 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1610 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1695   chars1726 (    struct StrConcat_1722  self1509 ) {
    return ( (  into_dash_iter1727 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1694   into_dash_iter1725 (    struct StrConcat_1721  dref1498 ) {
    return ( (struct StrConcatIter_1694) { .f_left = ( (  chars1726 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars924 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1694   chars1720 (    struct StrConcat_1721  self1509 ) {
    return ( (  into_dash_iter1725 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1694   chars1719 (    struct Pos_20  self3584 ) {
    return ( (  chars1720 ) ( ( ( StrConcat_1721_StrConcat ) ( ( ( StrConcat_1722_StrConcat ) ( ( ( StrConcat_1723_StrConcat ) ( ( ( StrConcat_1724_StrConcat ) ( ( (  from_dash_charlike232 ) ( ( "(" ) ,  ( 1 ) ) ) ,  ( (  self3584 ) .f_line ) ) ) ,  ( (  from_dash_string231 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  self3584 ) .f_bi ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrConcatIter_1693   into_dash_iter1718 (    struct StrConcat_1686  dref1498 ) {
    return ( (struct StrConcatIter_1693) { .f_left = ( (  chars619 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1719 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1693   chars1717 (    struct StrConcat_1686  self1509 ) {
    return ( (  into_dash_iter1718 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1692   into_dash_iter1716 (    struct StrConcat_1685  dref1498 ) {
    return ( (struct StrConcatIter_1692) { .f_left = ( (  chars1717 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars619 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1692   chars1715 (    struct StrConcat_1685  self1509 ) {
    return ( (  into_dash_iter1716 ) ( (  self1509 ) ) );
}

static  struct StrViewIter_614   chars1732 (    enum CharType_1198  self3813 ) {
    return ( (  chars619 ) ( ( {  enum CharType_1198  dref3814 = (  self3813 ) ;  dref3814 == CharType_1198_CharPunctuation ? ( (  from_dash_string231 ) ( ( "Punct" ) ,  ( 5 ) ) ) :  dref3814 == CharType_1198_CharWord ? ( (  from_dash_string231 ) ( ( "Word" ) ,  ( 4 ) ) ) :  dref3814 == CharType_1198_CharSpace ? ( (  from_dash_string231 ) ( ( "Space" ) ,  ( 5 ) ) ) : ( (  todo1678 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1691   into_dash_iter1714 (    struct StrConcat_1684  dref1498 ) {
    return ( (struct StrConcatIter_1691) { .f_left = ( (  chars1715 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1732 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1691   chars1713 (    struct StrConcat_1684  self1509 ) {
    return ( (  into_dash_iter1714 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1733 (    struct Screen_672 *  screen3527 ,    struct StrConcat_1684  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp328 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp328 ( (  y3533 ) , ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add285 ( (  op_dash_mul1405 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min480 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size273 ) ( (  op_dash_sub823 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1691  temp1734 =  into_dash_iter1712 ( ( (  chars1713 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_617  __cond1735 =  next1701 (&temp1734);
        if (  __cond1735 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1735 .stuff .Maybe_617_Just_s .field0;
        ( (  put_dash_char1628 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add285 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add285 ( (  xx3538 ) , ( (  rendered_dash_wcwidth974 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1688 (    struct Screen_672 *  screen3543 ,    struct StrConcat_1684  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1689 ) ( ( (  map1711 ) ( ( (  chars1713 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth974 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub823 ( (  op_dash_sub823 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1733 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1687 (   struct env1650* env ,    struct StrConcat_1684  s4297 ) {
    ( (  draw_dash_str_dash_right1688 ) ( ( env->screen4290 ) ,  (  s4297 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4294 ) ) ) );
    (* env->curline4294 ) = (  op_dash_add285 ( ( * ( env->curline4294 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1738 {
    struct StrView_21  field0;
    struct Maybe_28  field1;
};

static struct StrConcat_1738 StrConcat_1738_StrConcat (  struct StrView_21  field0 ,  struct Maybe_28  field1 ) {
    return ( struct StrConcat_1738 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1737 {
    enum Unit_7  (*fun) (  struct env1651*  ,    struct StrConcat_1738  );
    struct env1651 env;
};

struct StrConcatIter_1745 {
    struct StrConcatIter_1693  f_left;
    struct AppendIter_884  f_right;
};

struct StrCaseIter_1744 {
    enum {
        StrCaseIter_1744_StrCaseIter1_t,
        StrCaseIter_1744_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_614  field0;
        } StrCaseIter_1744_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1745  field0;
        } StrCaseIter_1744_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1744 StrCaseIter_1744_StrCaseIter1 (  struct StrViewIter_614  field0 ) {
    return ( struct StrCaseIter_1744 ) { .tag = StrCaseIter_1744_StrCaseIter1_t, .stuff = { .StrCaseIter_1744_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1744 StrCaseIter_1744_StrCaseIter2 (  struct StrConcatIter_1745  field0 ) {
    return ( struct StrCaseIter_1744 ) { .tag = StrCaseIter_1744_StrCaseIter2_t, .stuff = { .StrCaseIter_1744_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1743 {
    struct StrViewIter_614  f_left;
    struct StrCaseIter_1744  f_right;
};

struct Map_1742 {
    struct StrConcatIter_1743  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1742 Map_1742_Map (  struct StrConcatIter_1743  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1742 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1742   into_dash_iter1747 (    struct Map_1742  self796 ) {
    return (  self796 );
}

static  struct Maybe_617   next1751 (    struct StrConcatIter_1745 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next1703 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next910 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next1750 (    struct StrCaseIter_1744 *  self1516 ) {
    struct StrCaseIter_1744 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1744_StrCaseIter1_t ) {
        return ( (  next618 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1744_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1744_StrCaseIter2_t ) {
            return ( (  next1751 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1744_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_617   next1749 (    struct StrConcatIter_1743 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next1750 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_283   next1748 (    struct Map_1742 *  dref798 ) {
    struct Maybe_617  dref801 = ( (  next1749 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_617_None_t ) {
        return ( (struct Maybe_283) { .tag = Maybe_283_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_617_Just_t ) {
            return ( ( Maybe_283_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_617_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1746 (    struct Map_1742  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1742  it1099 = ( (  into_dash_iter1747 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_283  dref1100 = ( (  next1748 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_283_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_283_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_283_Just_s .field0 ) ,  (  x1098 ) ) );
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
    return (  op_dash_add285 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1741 (    struct Map_1742  it1110 ) {
    return ( (  reduce1746 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1754 ) ) );
}

static  struct StrConcatIter_1743   into_dash_iter1756 (    struct StrConcatIter_1743  self1491 ) {
    return (  self1491 );
}

static  struct Map_1742   map1755 (    struct StrConcatIter_1743  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1743  it808 = ( (  into_dash_iter1756 ) ( (  iterable805 ) ) );
    return ( ( Map_1742_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1761 {
    struct StrConcat_1686  field0;
    struct Char_57  field1;
};

static struct StrConcat_1761 StrConcat_1761_StrConcat (  struct StrConcat_1686  field0 ,  struct Char_57  field1 ) {
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

static  struct StrConcatIter_1745   into_dash_iter1766 (    struct StrConcat_1761  dref1498 ) {
    return ( (struct StrConcatIter_1745) { .f_left = ( (  chars1717 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars924 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1745   chars1765 (    struct StrConcat_1761  self1509 ) {
    return ( (  into_dash_iter1766 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1744   into_dash_iter1764 (    struct StrCase_1760  self1522 ) {
    struct StrCase_1760  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1760_StrCase1_t ) {
        return ( ( StrCaseIter_1744_StrCaseIter1 ) ( ( (  chars619 ) ( ( dref1523 .stuff .StrCase_1760_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1760_StrCase2_t ) {
            return ( ( StrCaseIter_1744_StrCaseIter2 ) ( ( (  chars1765 ) ( ( dref1523 .stuff .StrCase_1760_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1744   chars1763 (    struct StrCase_1760  self1534 ) {
    return ( (  into_dash_iter1764 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1744   chars1759 (    struct Maybe_28  self1548 ) {
    struct StrCase_1760  temp1762;
    struct StrCase_1760  c1549 = (  temp1762 );
    struct Maybe_28  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_28_None_t ) {
        c1549 = ( ( StrCase_1760_StrCase1 ) ( ( (  from_dash_string231 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_28_Just_t ) {
            c1549 = ( ( StrCase_1760_StrCase2 ) ( ( ( StrConcat_1761_StrConcat ) ( ( ( StrConcat_1686_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_28_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1763 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1743   into_dash_iter1758 (    struct StrConcat_1738  dref1498 ) {
    return ( (struct StrConcatIter_1743) { .f_left = ( (  chars619 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1759 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1743   chars1757 (    struct StrConcat_1738  self1509 ) {
    return ( (  into_dash_iter1758 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1767 (    struct Screen_672 *  screen3527 ,    struct StrConcat_1738  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp328 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp328 ( (  y3533 ) , ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add285 ( (  op_dash_mul1405 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min480 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size273 ) ( (  op_dash_sub823 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1743  temp1768 =  into_dash_iter1756 ( ( (  chars1757 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_617  __cond1769 =  next1749 (&temp1768);
        if (  __cond1769 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1769 .stuff .Maybe_617_Just_s .field0;
        ( (  put_dash_char1628 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add285 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add285 ( (  xx3538 ) , ( (  rendered_dash_wcwidth974 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1740 (    struct Screen_672 *  screen3543 ,    struct StrConcat_1738  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1741 ) ( ( (  map1755 ) ( ( (  chars1757 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth974 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub823 ( (  op_dash_sub823 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1767 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1739 (   struct env1651* env ,    struct StrConcat_1738  s4297 ) {
    ( (  draw_dash_str_dash_right1740 ) ( ( env->screen4290 ) ,  (  s4297 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4294 ) ) ) );
    (* env->curline4294 ) = (  op_dash_add285 ( ( * ( env->curline4294 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct Take_1772 {
    struct StrViewIter_614  field0;
    size_t  field1;
};

static struct Take_1772 Take_1772_Take (  struct StrViewIter_614  field0 ,  size_t  field1 ) {
    return ( struct Take_1772 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1771 {
    struct Take_1772  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1771 StrConcat_1771_StrConcat (  struct Take_1772  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1771 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_1770 {
    enum {
        Maybe_1770_None_t,
        Maybe_1770_Just_t,
    } tag;
    union {
        struct {
            struct StrConcat_1771  field0;
        } Maybe_1770_Just_s;
    } stuff;
};

static struct Maybe_1770 Maybe_1770_Just (  struct StrConcat_1771  field0 ) {
    return ( struct Maybe_1770 ) { .tag = Maybe_1770_Just_t, .stuff = { .Maybe_1770_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1770   fmap_dash_maybe1773 (    struct Maybe_148  x1275 ,    struct StrConcat_1771 (*  fun1277 )(    struct StrView_21  ) ) {
    struct Maybe_148  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_148_None_t ) {
        return ( (struct Maybe_1770) { .tag = Maybe_1770_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_148_Just_t ) {
            return ( ( Maybe_1770_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_148_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Take_1772   take1775 (    struct StrView_21  it867 ,    size_t  i869 ) {
    return ( ( Take_1772_Take ) ( ( (  into_dash_iter620 ) ( (  it867 ) ) ) ,  (  i869 ) ) );
}

struct Drop_1777 {
    struct StrViewIter_614  field0;
    size_t  field1;
};

static struct Drop_1777 Drop_1777_Drop (  struct StrViewIter_614  field0 ,  size_t  field1 ) {
    return ( struct Drop_1777 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Maybe_617   next1779 (    struct Drop_1777 *  dref847 ) {
    while ( (  cmp195 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next618 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub315 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next618 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Drop_1777   into_dash_iter1781 (    struct Drop_1777  self845 ) {
    return (  self845 );
}

static  struct Maybe_617   head1778 (    struct Drop_1777  it1142 ) {
    struct Drop_1777  temp1780 = ( (  into_dash_iter1781 ) ( (  it1142 ) ) );
    return ( (  next1779 ) ( ( &temp1780 ) ) );
}

static  bool   null1776 (    struct Drop_1777  it1151 ) {
    struct Maybe_617  dref1152 = ( (  head1778 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_617_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Drop_1777   drop1782 (    struct StrView_21  iterable852 ,    size_t  i854 ) {
    struct StrViewIter_614  it855 = ( (  into_dash_iter620 ) ( (  iterable852 ) ) );
    return ( ( Drop_1777_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct StrConcat_1771   lam1774 (    struct StrView_21  s4300 ) {
    return ( ( StrConcat_1771_StrConcat ) ( ( (  take1775 ) ( (  s4300 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ,  ( ( (  null1776 ) ( ( (  drop1782 ) ( (  s4300 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ) ) ? ( (  from_dash_string231 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_string231 ) ( ( "..." ) ,  ( 3 ) ) ) ) ) );
}

struct StrConcat_1785 {
    struct StrView_21  field0;
    struct Maybe_1770  field1;
};

static struct StrConcat_1785 StrConcat_1785_StrConcat (  struct StrView_21  field0 ,  struct Maybe_1770  field1 ) {
    return ( struct StrConcat_1785 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1784 {
    enum Unit_7  (*fun) (  struct env1652*  ,    struct StrConcat_1785  );
    struct env1652 env;
};

struct StrConcatIter_1794 {
    struct Take_1772  f_left;
    struct StrViewIter_614  f_right;
};

struct StrConcatIter_1793 {
    struct StrViewIter_614  f_left;
    struct StrConcatIter_1794  f_right;
};

struct StrConcatIter_1792 {
    struct StrConcatIter_1793  f_left;
    struct AppendIter_884  f_right;
};

struct StrCaseIter_1791 {
    enum {
        StrCaseIter_1791_StrCaseIter1_t,
        StrCaseIter_1791_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_614  field0;
        } StrCaseIter_1791_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1792  field0;
        } StrCaseIter_1791_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1791 StrCaseIter_1791_StrCaseIter1 (  struct StrViewIter_614  field0 ) {
    return ( struct StrCaseIter_1791 ) { .tag = StrCaseIter_1791_StrCaseIter1_t, .stuff = { .StrCaseIter_1791_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1791 StrCaseIter_1791_StrCaseIter2 (  struct StrConcatIter_1792  field0 ) {
    return ( struct StrCaseIter_1791 ) { .tag = StrCaseIter_1791_StrCaseIter2_t, .stuff = { .StrCaseIter_1791_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1790 {
    struct StrViewIter_614  f_left;
    struct StrCaseIter_1791  f_right;
};

struct Map_1789 {
    struct StrConcatIter_1790  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1789 Map_1789_Map (  struct StrConcatIter_1790  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1789 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1789   into_dash_iter1796 (    struct Map_1789  self796 ) {
    return (  self796 );
}

static  struct Maybe_617   next1803 (    struct Take_1772 *  dref861 ) {
    if ( (  cmp195 ( ( (* dref861 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_617  x864 = ( (  next618 ) ( ( & ( (* dref861 ) .field0 ) ) ) );
        (* dref861 ) .field1 = (  op_dash_sub315 ( ( (* dref861 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
        return (  x864 );
    } else {
        return ( (struct Maybe_617) { .tag = Maybe_617_None_t } );
    }
}

static  struct Maybe_617   next1802 (    struct StrConcatIter_1794 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next1803 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next1801 (    struct StrConcatIter_1793 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next1802 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next1800 (    struct StrConcatIter_1792 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next1801 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next910 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next1799 (    struct StrCaseIter_1791 *  self1516 ) {
    struct StrCaseIter_1791 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1791_StrCaseIter1_t ) {
        return ( (  next618 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1791_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1791_StrCaseIter2_t ) {
            return ( (  next1800 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1791_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_617   next1798 (    struct StrConcatIter_1790 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next1799 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_283   next1797 (    struct Map_1789 *  dref798 ) {
    struct Maybe_617  dref801 = ( (  next1798 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_617_None_t ) {
        return ( (struct Maybe_283) { .tag = Maybe_283_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_617_Just_t ) {
            return ( ( Maybe_283_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_617_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1795 (    struct Map_1789  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1789  it1099 = ( (  into_dash_iter1796 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_283  dref1100 = ( (  next1797 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_283_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_283_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_283_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1804 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1804);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1805;
    return (  temp1805 );
}

static  int32_t   lam1806 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add285 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1788 (    struct Map_1789  it1110 ) {
    return ( (  reduce1795 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1806 ) ) );
}

static  struct StrConcatIter_1790   into_dash_iter1808 (    struct StrConcatIter_1790  self1491 ) {
    return (  self1491 );
}

static  struct Map_1789   map1807 (    struct StrConcatIter_1790  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1790  it808 = ( (  into_dash_iter1808 ) ( (  iterable805 ) ) );
    return ( ( Map_1789_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1814 {
    struct StrView_21  field0;
    struct StrConcat_1771  field1;
};

static struct StrConcat_1814 StrConcat_1814_StrConcat (  struct StrView_21  field0 ,  struct StrConcat_1771  field1 ) {
    return ( struct StrConcat_1814 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1813 {
    struct StrConcat_1814  field0;
    struct Char_57  field1;
};

static struct StrConcat_1813 StrConcat_1813_StrConcat (  struct StrConcat_1814  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1813 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1812 {
    enum {
        StrCase_1812_StrCase1_t,
        StrCase_1812_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1812_StrCase1_s;
        struct {
            struct StrConcat_1813  field0;
        } StrCase_1812_StrCase2_s;
    } stuff;
};

static struct StrCase_1812 StrCase_1812_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1812 ) { .tag = StrCase_1812_StrCase1_t, .stuff = { .StrCase_1812_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1812 StrCase_1812_StrCase2 (  struct StrConcat_1813  field0 ) {
    return ( struct StrCase_1812 ) { .tag = StrCase_1812_StrCase2_t, .stuff = { .StrCase_1812_StrCase2_s = { .field0 = field0 } } };
};

static  struct Take_1772   chars1824 (    struct Take_1772  self1639 ) {
    return (  self1639 );
}

static  struct StrConcatIter_1794   into_dash_iter1823 (    struct StrConcat_1771  dref1498 ) {
    return ( (struct StrConcatIter_1794) { .f_left = ( (  chars1824 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars619 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1794   chars1822 (    struct StrConcat_1771  self1509 ) {
    return ( (  into_dash_iter1823 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1793   into_dash_iter1821 (    struct StrConcat_1814  dref1498 ) {
    return ( (struct StrConcatIter_1793) { .f_left = ( (  chars619 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1822 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1793   chars1820 (    struct StrConcat_1814  self1509 ) {
    return ( (  into_dash_iter1821 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1792   into_dash_iter1819 (    struct StrConcat_1813  dref1498 ) {
    return ( (struct StrConcatIter_1792) { .f_left = ( (  chars1820 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars924 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1792   chars1818 (    struct StrConcat_1813  self1509 ) {
    return ( (  into_dash_iter1819 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1791   into_dash_iter1817 (    struct StrCase_1812  self1522 ) {
    struct StrCase_1812  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1812_StrCase1_t ) {
        return ( ( StrCaseIter_1791_StrCaseIter1 ) ( ( (  chars619 ) ( ( dref1523 .stuff .StrCase_1812_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1812_StrCase2_t ) {
            return ( ( StrCaseIter_1791_StrCaseIter2 ) ( ( (  chars1818 ) ( ( dref1523 .stuff .StrCase_1812_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1791   chars1816 (    struct StrCase_1812  self1534 ) {
    return ( (  into_dash_iter1817 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1791   chars1811 (    struct Maybe_1770  self1548 ) {
    struct StrCase_1812  temp1815;
    struct StrCase_1812  c1549 = (  temp1815 );
    struct Maybe_1770  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_1770_None_t ) {
        c1549 = ( ( StrCase_1812_StrCase1 ) ( ( (  from_dash_string231 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_1770_Just_t ) {
            c1549 = ( ( StrCase_1812_StrCase2 ) ( ( ( StrConcat_1813_StrConcat ) ( ( ( StrConcat_1814_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_1770_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1816 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1790   into_dash_iter1810 (    struct StrConcat_1785  dref1498 ) {
    return ( (struct StrConcatIter_1790) { .f_left = ( (  chars619 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1811 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1790   chars1809 (    struct StrConcat_1785  self1509 ) {
    return ( (  into_dash_iter1810 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1825 (    struct Screen_672 *  screen3527 ,    struct StrConcat_1785  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp328 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp328 ( (  y3533 ) , ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add285 ( (  op_dash_mul1405 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min480 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size273 ) ( (  op_dash_sub823 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1790  temp1826 =  into_dash_iter1808 ( ( (  chars1809 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_617  __cond1827 =  next1798 (&temp1826);
        if (  __cond1827 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1827 .stuff .Maybe_617_Just_s .field0;
        ( (  put_dash_char1628 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add285 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add285 ( (  xx3538 ) , ( (  rendered_dash_wcwidth974 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1787 (    struct Screen_672 *  screen3543 ,    struct StrConcat_1785  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1788 ) ( ( (  map1807 ) ( ( (  chars1809 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth974 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub823 ( (  op_dash_sub823 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1825 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1786 (   struct env1652* env ,    struct StrConcat_1785  s4297 ) {
    ( (  draw_dash_str_dash_right1787 ) ( ( env->screen4290 ) ,  (  s4297 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4294 ) ) ) );
    (* env->curline4294 ) = (  op_dash_add285 ( ( * ( env->curline4294 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Maybe_1770   fmap_dash_maybe1828 (    struct Maybe_148  x1275 ,    struct StrConcat_1771 (*  fun1277 )(    struct StrView_21  ) ) {
    struct Maybe_148  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_148_None_t ) {
        return ( (struct Maybe_1770) { .tag = Maybe_1770_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_148_Just_t ) {
            return ( ( Maybe_1770_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_148_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrConcat_1771   lam1829 (    struct StrView_21  s4303 ) {
    return ( ( StrConcat_1771_StrConcat ) ( ( (  take1775 ) ( (  s4303 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ,  ( ( (  null1776 ) ( ( (  drop1782 ) ( (  s4303 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ) ) ? ( (  from_dash_string231 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_string231 ) ( ( "..." ) ,  ( 3 ) ) ) ) ) );
}

struct envunion1831 {
    enum Unit_7  (*fun) (  struct env1652*  ,    struct StrConcat_1785  );
    struct env1652 env;
};

struct StrConcat_1834 {
    struct StrView_21  field0;
    struct EditorMode_149  field1;
};

static struct StrConcat_1834 StrConcat_1834_StrConcat (  struct StrView_21  field0 ,  struct EditorMode_149  field1 ) {
    return ( struct StrConcat_1834 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1833 {
    enum Unit_7  (*fun) (  struct env1653*  ,    struct StrConcat_1834  );
    struct env1653 env;
};

struct StrConcatIter_1842 {
    struct StrConcatIter_1745  f_left;
    struct StrViewIter_614  f_right;
};

struct StrConcatIter_1841 {
    struct StrConcatIter_1842  f_left;
    struct AppendIter_884  f_right;
};

struct StrCaseIter_1840 {
    enum {
        StrCaseIter_1840_StrCaseIter1_t,
        StrCaseIter_1840_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_614  field0;
        } StrCaseIter_1840_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1841  field0;
        } StrCaseIter_1840_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1840 StrCaseIter_1840_StrCaseIter1 (  struct StrViewIter_614  field0 ) {
    return ( struct StrCaseIter_1840 ) { .tag = StrCaseIter_1840_StrCaseIter1_t, .stuff = { .StrCaseIter_1840_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1840 StrCaseIter_1840_StrCaseIter2 (  struct StrConcatIter_1841  field0 ) {
    return ( struct StrCaseIter_1840 ) { .tag = StrCaseIter_1840_StrCaseIter2_t, .stuff = { .StrCaseIter_1840_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1839 {
    struct StrViewIter_614  f_left;
    struct StrCaseIter_1840  f_right;
};

struct Map_1838 {
    struct StrConcatIter_1839  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1838 Map_1838_Map (  struct StrConcatIter_1839  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1838 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1838   into_dash_iter1844 (    struct Map_1838  self796 ) {
    return (  self796 );
}

static  struct Maybe_617   next1849 (    struct StrConcatIter_1842 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next1751 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next1848 (    struct StrConcatIter_1841 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next1849 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next910 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next1847 (    struct StrCaseIter_1840 *  self1516 ) {
    struct StrCaseIter_1840 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1840_StrCaseIter1_t ) {
        return ( (  next618 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1840_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1840_StrCaseIter2_t ) {
            return ( (  next1848 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1840_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_617   next1846 (    struct StrConcatIter_1839 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next1847 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_283   next1845 (    struct Map_1838 *  dref798 ) {
    struct Maybe_617  dref801 = ( (  next1846 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_617_None_t ) {
        return ( (struct Maybe_283) { .tag = Maybe_283_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_617_Just_t ) {
            return ( ( Maybe_283_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_617_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1843 (    struct Map_1838  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1838  it1099 = ( (  into_dash_iter1844 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_283  dref1100 = ( (  next1845 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_283_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_283_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_283_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1850 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1850);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1851;
    return (  temp1851 );
}

static  int32_t   lam1852 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add285 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1837 (    struct Map_1838  it1110 ) {
    return ( (  reduce1843 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1852 ) ) );
}

static  struct StrConcatIter_1839   into_dash_iter1854 (    struct StrConcatIter_1839  self1491 ) {
    return (  self1491 );
}

static  struct Map_1838   map1853 (    struct StrConcatIter_1839  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1839  it808 = ( (  into_dash_iter1854 ) ( (  iterable805 ) ) );
    return ( ( Map_1838_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1860 {
    struct StrConcat_1761  field0;
    struct StrBuilder_54  field1;
};

static struct StrConcat_1860 StrConcat_1860_StrConcat (  struct StrConcat_1761  field0 ,  struct StrBuilder_54  field1 ) {
    return ( struct StrConcat_1860 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1859 {
    struct StrConcat_1860  field0;
    struct Char_57  field1;
};

static struct StrConcat_1859 StrConcat_1859_StrConcat (  struct StrConcat_1860  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1859 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1858 {
    enum {
        StrCase_1858_StrCase1_t,
        StrCase_1858_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1858_StrCase1_s;
        struct {
            struct StrConcat_1859  field0;
        } StrCase_1858_StrCase2_s;
    } stuff;
};

static struct StrCase_1858 StrCase_1858_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1858 ) { .tag = StrCase_1858_StrCase1_t, .stuff = { .StrCase_1858_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1858 StrCase_1858_StrCase2 (  struct StrConcat_1859  field0 ) {
    return ( struct StrCase_1858 ) { .tag = StrCase_1858_StrCase2_t, .stuff = { .StrCase_1858_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrCaseIter_1840   undefined1863 (  ) {
    struct StrCaseIter_1840  temp1864;
    return (  temp1864 );
}

static  struct StrCaseIter_1840   todo1862 (  ) {
    ( (  print1213 ) ( ( (  from_dash_string231 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral48 ( 1 ) ) ) );
    return ( (  undefined1863 ) ( ) );
}

static  struct StrConcatIter_1842   into_dash_iter1870 (    struct StrConcat_1860  dref1498 ) {
    return ( (struct StrConcatIter_1842) { .f_left = ( (  chars1765 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1548 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1842   chars1869 (    struct StrConcat_1860  self1509 ) {
    return ( (  into_dash_iter1870 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1841   into_dash_iter1868 (    struct StrConcat_1859  dref1498 ) {
    return ( (struct StrConcatIter_1841) { .f_left = ( (  chars1869 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars924 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1841   chars1867 (    struct StrConcat_1859  self1509 ) {
    return ( (  into_dash_iter1868 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1840   into_dash_iter1866 (    struct StrCase_1858  self1522 ) {
    struct StrCase_1858  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1858_StrCase1_t ) {
        return ( ( StrCaseIter_1840_StrCaseIter1 ) ( ( (  chars619 ) ( ( dref1523 .stuff .StrCase_1858_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1858_StrCase2_t ) {
            return ( ( StrCaseIter_1840_StrCaseIter2 ) ( ( (  chars1867 ) ( ( dref1523 .stuff .StrCase_1858_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1840   chars1865 (    struct StrCase_1858  self1534 ) {
    return ( (  into_dash_iter1866 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1840   chars1857 (    struct EditorMode_149  self4174 ) {
    struct StrCase_1858  temp1861;
    struct StrCase_1858  c4175 = (  temp1861 );
    struct EditorMode_149  dref4176 = (  self4174 );
    if ( dref4176.tag == EditorMode_149_Normal_t ) {
        c4175 = ( ( StrCase_1858_StrCase1 ) ( ( (  from_dash_string231 ) ( ( "Normal" ) ,  ( 6 ) ) ) ) );
    }
    else {
        if ( dref4176.tag == EditorMode_149_Cmd_t ) {
            c4175 = ( ( StrCase_1858_StrCase2 ) ( ( ( StrConcat_1859_StrConcat ) ( ( ( StrConcat_1860_StrConcat ) ( ( ( StrConcat_1761_StrConcat ) ( ( ( StrConcat_1686_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Cmd(" ) ,  ( 4 ) ) ) ,  ( dref4176 .stuff .EditorMode_149_Cmd_s .field0 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "|" ) ,  ( 1 ) ) ) ) ) ,  ( dref4176 .stuff .EditorMode_149_Cmd_s .field1 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
        else {
            if ( dref4176.tag == EditorMode_149_Search_t ) {
                c4175 = ( ( StrCase_1858_StrCase2 ) ( ( ( StrConcat_1859_StrConcat ) ( ( ( StrConcat_1860_StrConcat ) ( ( ( StrConcat_1761_StrConcat ) ( ( ( StrConcat_1686_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Search(" ) ,  ( 7 ) ) ) ,  ( dref4176 .stuff .EditorMode_149_Search_s .field0 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "|" ) ,  ( 1 ) ) ) ) ) ,  ( dref4176 .stuff .EditorMode_149_Search_s .field1 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
            }
            else {
                if ( true ) {
                    return ( (  todo1862 ) ( ) );
                }
            }
        }
    }
    return ( (  chars1865 ) ( (  c4175 ) ) );
}

static  struct StrConcatIter_1839   into_dash_iter1856 (    struct StrConcat_1834  dref1498 ) {
    return ( (struct StrConcatIter_1839) { .f_left = ( (  chars619 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1857 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1839   chars1855 (    struct StrConcat_1834  self1509 ) {
    return ( (  into_dash_iter1856 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1871 (    struct Screen_672 *  screen3527 ,    struct StrConcat_1834  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp328 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp328 ( (  y3533 ) , ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add285 ( (  op_dash_mul1405 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min480 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size273 ) ( (  op_dash_sub823 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1839  temp1872 =  into_dash_iter1854 ( ( (  chars1855 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_617  __cond1873 =  next1846 (&temp1872);
        if (  __cond1873 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1873 .stuff .Maybe_617_Just_s .field0;
        ( (  put_dash_char1628 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add285 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add285 ( (  xx3538 ) , ( (  rendered_dash_wcwidth974 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1836 (    struct Screen_672 *  screen3543 ,    struct StrConcat_1834  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1837 ) ( ( (  map1853 ) ( ( (  chars1855 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth974 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub823 ( (  op_dash_sub823 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1871 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1835 (   struct env1653* env ,    struct StrConcat_1834  s4297 ) {
    ( (  draw_dash_str_dash_right1836 ) ( ( env->screen4290 ) ,  (  s4297 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4294 ) ) ) );
    (* env->curline4294 ) = (  op_dash_add285 ( ( * ( env->curline4294 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1876 {
    struct StrView_21  field0;
    struct Maybe_148  field1;
};

static struct StrConcat_1876 StrConcat_1876_StrConcat (  struct StrView_21  field0 ,  struct Maybe_148  field1 ) {
    return ( struct StrConcat_1876 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1875 {
    enum Unit_7  (*fun) (  struct env1654*  ,    struct StrConcat_1876  );
    struct env1654 env;
};

struct StrConcatIter_1883 {
    struct StrConcatIter_1665  f_left;
    struct AppendIter_884  f_right;
};

struct StrCaseIter_1882 {
    enum {
        StrCaseIter_1882_StrCaseIter1_t,
        StrCaseIter_1882_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_614  field0;
        } StrCaseIter_1882_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1883  field0;
        } StrCaseIter_1882_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1882 StrCaseIter_1882_StrCaseIter1 (  struct StrViewIter_614  field0 ) {
    return ( struct StrCaseIter_1882 ) { .tag = StrCaseIter_1882_StrCaseIter1_t, .stuff = { .StrCaseIter_1882_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1882 StrCaseIter_1882_StrCaseIter2 (  struct StrConcatIter_1883  field0 ) {
    return ( struct StrCaseIter_1882 ) { .tag = StrCaseIter_1882_StrCaseIter2_t, .stuff = { .StrCaseIter_1882_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1881 {
    struct StrViewIter_614  f_left;
    struct StrCaseIter_1882  f_right;
};

struct Map_1880 {
    struct StrConcatIter_1881  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1880 Map_1880_Map (  struct StrConcatIter_1881  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1880 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1880   into_dash_iter1885 (    struct Map_1880  self796 ) {
    return (  self796 );
}

static  struct Maybe_617   next1889 (    struct StrConcatIter_1883 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next1669 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next910 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next1888 (    struct StrCaseIter_1882 *  self1516 ) {
    struct StrCaseIter_1882 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1882_StrCaseIter1_t ) {
        return ( (  next618 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1882_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1882_StrCaseIter2_t ) {
            return ( (  next1889 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1882_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_617   next1887 (    struct StrConcatIter_1881 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next1888 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_283   next1886 (    struct Map_1880 *  dref798 ) {
    struct Maybe_617  dref801 = ( (  next1887 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_617_None_t ) {
        return ( (struct Maybe_283) { .tag = Maybe_283_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_617_Just_t ) {
            return ( ( Maybe_283_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_617_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1884 (    struct Map_1880  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1880  it1099 = ( (  into_dash_iter1885 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_283  dref1100 = ( (  next1886 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_283_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_283_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_283_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1890 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1890);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1891;
    return (  temp1891 );
}

static  int32_t   lam1892 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add285 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1879 (    struct Map_1880  it1110 ) {
    return ( (  reduce1884 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1892 ) ) );
}

static  struct StrConcatIter_1881   into_dash_iter1894 (    struct StrConcatIter_1881  self1491 ) {
    return (  self1491 );
}

static  struct Map_1880   map1893 (    struct StrConcatIter_1881  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1881  it808 = ( (  into_dash_iter1894 ) ( (  iterable805 ) ) );
    return ( ( Map_1880_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrCase_1898 {
    enum {
        StrCase_1898_StrCase1_t,
        StrCase_1898_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_21  field0;
        } StrCase_1898_StrCase1_s;
        struct {
            struct StrConcat_490  field0;
        } StrCase_1898_StrCase2_s;
    } stuff;
};

static struct StrCase_1898 StrCase_1898_StrCase1 (  struct StrView_21  field0 ) {
    return ( struct StrCase_1898 ) { .tag = StrCase_1898_StrCase1_t, .stuff = { .StrCase_1898_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1898 StrCase_1898_StrCase2 (  struct StrConcat_490  field0 ) {
    return ( struct StrCase_1898 ) { .tag = StrCase_1898_StrCase2_t, .stuff = { .StrCase_1898_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1665   into_dash_iter1905 (    struct StrConcat_491  dref1498 ) {
    return ( (struct StrConcatIter_1665) { .f_left = ( (  chars619 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars619 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1665   chars1904 (    struct StrConcat_491  self1509 ) {
    return ( (  into_dash_iter1905 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1883   into_dash_iter1903 (    struct StrConcat_490  dref1498 ) {
    return ( (struct StrConcatIter_1883) { .f_left = ( (  chars1904 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars924 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1883   chars1902 (    struct StrConcat_490  self1509 ) {
    return ( (  into_dash_iter1903 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1882   into_dash_iter1901 (    struct StrCase_1898  self1522 ) {
    struct StrCase_1898  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1898_StrCase1_t ) {
        return ( ( StrCaseIter_1882_StrCaseIter1 ) ( ( (  chars619 ) ( ( dref1523 .stuff .StrCase_1898_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1898_StrCase2_t ) {
            return ( ( StrCaseIter_1882_StrCaseIter2 ) ( ( (  chars1902 ) ( ( dref1523 .stuff .StrCase_1898_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1882   chars1900 (    struct StrCase_1898  self1534 ) {
    return ( (  into_dash_iter1901 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1882   chars1897 (    struct Maybe_148  self1548 ) {
    struct StrCase_1898  temp1899;
    struct StrCase_1898  c1549 = (  temp1899 );
    struct Maybe_148  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_148_None_t ) {
        c1549 = ( ( StrCase_1898_StrCase1 ) ( ( (  from_dash_string231 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_148_Just_t ) {
            c1549 = ( ( StrCase_1898_StrCase2 ) ( ( ( StrConcat_490_StrConcat ) ( ( ( StrConcat_491_StrConcat ) ( ( (  from_dash_string231 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_148_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1900 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1881   into_dash_iter1896 (    struct StrConcat_1876  dref1498 ) {
    return ( (struct StrConcatIter_1881) { .f_left = ( (  chars619 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1897 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1881   chars1895 (    struct StrConcat_1876  self1509 ) {
    return ( (  into_dash_iter1896 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1906 (    struct Screen_672 *  screen3527 ,    struct StrConcat_1876  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp328 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp328 ( (  y3533 ) , ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add285 ( (  op_dash_mul1405 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min480 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size273 ) ( (  op_dash_sub823 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1881  temp1907 =  into_dash_iter1894 ( ( (  chars1895 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_617  __cond1908 =  next1887 (&temp1907);
        if (  __cond1908 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1908 .stuff .Maybe_617_Just_s .field0;
        ( (  put_dash_char1628 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add285 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add285 ( (  xx3538 ) , ( (  rendered_dash_wcwidth974 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1878 (    struct Screen_672 *  screen3543 ,    struct StrConcat_1876  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1879 ) ( ( (  map1893 ) ( ( (  chars1895 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth974 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub823 ( (  op_dash_sub823 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1906 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1877 (   struct env1654* env ,    struct StrConcat_1876  s4297 ) {
    ( (  draw_dash_str_dash_right1878 ) ( ( env->screen4290 ) ,  (  s4297 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4294 ) ) ) );
    (* env->curline4294 ) = (  op_dash_add285 ( ( * ( env->curline4294 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1913 {
    struct StrConcat_1632  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1913 StrConcat_1913_StrConcat (  struct StrConcat_1632  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1913 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1912 {
    struct StrConcat_1913  field0;
    int32_t  field1;
};

static struct StrConcat_1912 StrConcat_1912_StrConcat (  struct StrConcat_1913  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1912 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1911 {
    struct StrConcat_1912  field0;
    struct Char_57  field1;
};

static struct StrConcat_1911 StrConcat_1911_StrConcat (  struct StrConcat_1912  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1911 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1910 {
    enum Unit_7  (*fun) (  struct env1655*  ,    struct StrConcat_1911  );
    struct env1655 env;
};

struct StrConcatIter_1921 {
    struct StrViewIter_614  f_left;
    struct IntStrIter_1594  f_right;
};

struct StrConcatIter_1920 {
    struct StrConcatIter_1921  f_left;
    struct StrViewIter_614  f_right;
};

struct StrConcatIter_1919 {
    struct StrConcatIter_1920  f_left;
    struct IntStrIter_1594  f_right;
};

struct StrConcatIter_1918 {
    struct StrConcatIter_1919  f_left;
    struct AppendIter_884  f_right;
};

struct Map_1917 {
    struct StrConcatIter_1918  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1917 Map_1917_Map (  struct StrConcatIter_1918  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1917 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1917   into_dash_iter1923 (    struct Map_1917  self796 ) {
    return (  self796 );
}

static  struct Maybe_617   next1928 (    struct StrConcatIter_1921 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next1597 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next1927 (    struct StrConcatIter_1920 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next1928 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next1926 (    struct StrConcatIter_1919 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next1927 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next1597 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next1925 (    struct StrConcatIter_1918 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next1926 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next910 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_283   next1924 (    struct Map_1917 *  dref798 ) {
    struct Maybe_617  dref801 = ( (  next1925 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_617_None_t ) {
        return ( (struct Maybe_283) { .tag = Maybe_283_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_617_Just_t ) {
            return ( ( Maybe_283_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_617_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1922 (    struct Map_1917  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1917  it1099 = ( (  into_dash_iter1923 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_283  dref1100 = ( (  next1924 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_283_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_283_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_283_Just_s .field0 ) ,  (  x1098 ) ) );
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
    return (  op_dash_add285 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1916 (    struct Map_1917  it1110 ) {
    return ( (  reduce1922 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1931 ) ) );
}

static  struct StrConcatIter_1918   into_dash_iter1933 (    struct StrConcatIter_1918  self1491 ) {
    return (  self1491 );
}

static  struct Map_1917   map1932 (    struct StrConcatIter_1918  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1918  it808 = ( (  into_dash_iter1933 ) ( (  iterable805 ) ) );
    return ( ( Map_1917_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_1921   into_dash_iter1941 (    struct StrConcat_1632  dref1498 ) {
    return ( (struct StrConcatIter_1921) { .f_left = ( (  chars619 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1610 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1921   chars1940 (    struct StrConcat_1632  self1509 ) {
    return ( (  into_dash_iter1941 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1920   into_dash_iter1939 (    struct StrConcat_1913  dref1498 ) {
    return ( (struct StrConcatIter_1920) { .f_left = ( (  chars1940 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars619 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1920   chars1938 (    struct StrConcat_1913  self1509 ) {
    return ( (  into_dash_iter1939 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1919   into_dash_iter1937 (    struct StrConcat_1912  dref1498 ) {
    return ( (struct StrConcatIter_1919) { .f_left = ( (  chars1938 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1610 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1919   chars1936 (    struct StrConcat_1912  self1509 ) {
    return ( (  into_dash_iter1937 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1918   into_dash_iter1935 (    struct StrConcat_1911  dref1498 ) {
    return ( (struct StrConcatIter_1918) { .f_left = ( (  chars1936 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars924 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1918   chars1934 (    struct StrConcat_1911  self1509 ) {
    return ( (  into_dash_iter1935 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1942 (    struct Screen_672 *  screen3527 ,    struct StrConcat_1911  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp328 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp328 ( (  y3533 ) , ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add285 ( (  op_dash_mul1405 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min480 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size273 ) ( (  op_dash_sub823 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1918  temp1943 =  into_dash_iter1933 ( ( (  chars1934 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_617  __cond1944 =  next1925 (&temp1943);
        if (  __cond1944 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1944 .stuff .Maybe_617_Just_s .field0;
        ( (  put_dash_char1628 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add285 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add285 ( (  xx3538 ) , ( (  rendered_dash_wcwidth974 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1915 (    struct Screen_672 *  screen3543 ,    struct StrConcat_1911  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1916 ) ( ( (  map1932 ) ( ( (  chars1934 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth974 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub823 ( (  op_dash_sub823 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1942 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1914 (   struct env1655* env ,    struct StrConcat_1911  s4297 ) {
    ( (  draw_dash_str_dash_right1915 ) ( ( env->screen4290 ) ,  (  s4297 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4294 ) ) ) );
    (* env->curline4294 ) = (  op_dash_add285 ( ( * ( env->curline4294 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1947 {
    struct StrConcat_1912  field0;
    struct StrView_21  field1;
};

static struct StrConcat_1947 StrConcat_1947_StrConcat (  struct StrConcat_1912  field0 ,  struct StrView_21  field1 ) {
    return ( struct StrConcat_1947 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1946 {
    enum Unit_7  (*fun) (  struct env1656*  ,    struct StrConcat_1947  );
    struct env1656 env;
};

struct StrConcatIter_1952 {
    struct StrConcatIter_1919  f_left;
    struct StrViewIter_614  f_right;
};

struct Map_1951 {
    struct StrConcatIter_1952  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1951 Map_1951_Map (  struct StrConcatIter_1952  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1951 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1951   into_dash_iter1954 (    struct Map_1951  self796 ) {
    return (  self796 );
}

static  struct Maybe_617   next1956 (    struct StrConcatIter_1952 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next1926 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_283   next1955 (    struct Map_1951 *  dref798 ) {
    struct Maybe_617  dref801 = ( (  next1956 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_617_None_t ) {
        return ( (struct Maybe_283) { .tag = Maybe_283_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_617_Just_t ) {
            return ( ( Maybe_283_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_617_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1953 (    struct Map_1951  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1951  it1099 = ( (  into_dash_iter1954 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_283  dref1100 = ( (  next1955 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_283_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_283_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_283_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1957 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1957);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1958;
    return (  temp1958 );
}

static  int32_t   lam1959 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add285 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1950 (    struct Map_1951  it1110 ) {
    return ( (  reduce1953 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1959 ) ) );
}

static  struct StrConcatIter_1952   into_dash_iter1961 (    struct StrConcatIter_1952  self1491 ) {
    return (  self1491 );
}

static  struct Map_1951   map1960 (    struct StrConcatIter_1952  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1952  it808 = ( (  into_dash_iter1961 ) ( (  iterable805 ) ) );
    return ( ( Map_1951_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_1952   into_dash_iter1963 (    struct StrConcat_1947  dref1498 ) {
    return ( (struct StrConcatIter_1952) { .f_left = ( (  chars1936 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars619 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1952   chars1962 (    struct StrConcat_1947  self1509 ) {
    return ( (  into_dash_iter1963 ) ( (  self1509 ) ) );
}

static  enum Unit_7   draw_dash_str1964 (    struct Screen_672 *  screen3527 ,    struct StrConcat_1947  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp328 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp328 ( (  y3533 ) , ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add285 ( (  op_dash_mul1405 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min480 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size273 ) ( (  op_dash_sub823 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1952  temp1965 =  into_dash_iter1961 ( ( (  chars1962 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_617  __cond1966 =  next1956 (&temp1965);
        if (  __cond1966 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1966 .stuff .Maybe_617_Just_s .field0;
        ( (  put_dash_char1628 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add285 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add285 ( (  xx3538 ) , ( (  rendered_dash_wcwidth974 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1949 (    struct Screen_672 *  screen3543 ,    struct StrConcat_1947  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1950 ) ( ( (  map1960 ) ( ( (  chars1962 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth974 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub823 ( (  op_dash_sub823 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1964 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1948 (   struct env1656* env ,    struct StrConcat_1947  s4297 ) {
    ( (  draw_dash_str_dash_right1949 ) ( ( env->screen4290 ) ,  (  s4297 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4294 ) ) ) );
    (* env->curline4294 ) = (  op_dash_add285 ( ( * ( env->curline4294 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

struct envunion1968 {
    enum Unit_7  (*fun) (  struct env1657*  ,    struct StrConcat_67  );
    struct env1657 env;
};

struct Map_1972 {
    struct StrConcatIter_1300  field0;
    int32_t (*  field1 )(    struct Char_57  );
};

static struct Map_1972 Map_1972_Map (  struct StrConcatIter_1300  field0 ,  int32_t (*  field1 )(    struct Char_57  ) ) {
    return ( struct Map_1972 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1972   into_dash_iter1974 (    struct Map_1972  self796 ) {
    return (  self796 );
}

static  struct Maybe_283   next1975 (    struct Map_1972 *  dref798 ) {
    struct Maybe_617  dref801 = ( (  next1307 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_617_None_t ) {
        return ( (struct Maybe_283) { .tag = Maybe_283_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_617_Just_t ) {
            return ( ( Maybe_283_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_617_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1973 (    struct Map_1972  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1972  it1099 = ( (  into_dash_iter1974 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_283  dref1100 = ( (  next1975 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_283_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_283_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_283_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1976 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1976);
    exit ( 1 );
    ( Unit_7_Unit );
    int32_t  temp1977;
    return (  temp1977 );
}

static  int32_t   lam1978 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add285 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1971 (    struct Map_1972  it1110 ) {
    return ( (  reduce1973 ) ( (  it1110 ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  lam1978 ) ) );
}

static  struct StrConcatIter_1300   into_dash_iter1980 (    struct StrConcatIter_1300  self1491 ) {
    return (  self1491 );
}

static  struct Map_1972   map1979 (    struct StrConcatIter_1300  iterable805 ,    int32_t (*  fun807 )(    struct Char_57  ) ) {
    struct StrConcatIter_1300  it808 = ( (  into_dash_iter1980 ) ( (  iterable805 ) ) );
    return ( ( Map_1972_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  enum Unit_7   draw_dash_str1981 (    struct Screen_672 *  screen3527 ,    struct StrConcat_67  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp328 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp328 ( (  y3533 ) , ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add285 ( (  op_dash_mul1405 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min480 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size273 ) ( (  op_dash_sub823 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1300  temp1982 =  into_dash_iter1980 ( ( (  chars1321 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_617  __cond1983 =  next1307 (&temp1982);
        if (  __cond1983 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond1983 .stuff .Maybe_617_Just_s .field0;
        ( (  put_dash_char1628 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add285 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add285 ( (  xx3538 ) , ( (  rendered_dash_wcwidth974 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   draw_dash_str_dash_right1970 (    struct Screen_672 *  screen3543 ,    struct StrConcat_67  s3545 ,    int32_t  x3547 ,    int32_t  y3549 ) {
    int32_t  slen3550 = ( (  sum1971 ) ( ( (  map1979 ) ( ( (  chars1321 ) ( (  s3545 ) ) ) ,  (  rendered_dash_wcwidth974 ) ) ) ) );
    int32_t  w3551 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3543 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3552 = (  op_dash_sub823 ( (  op_dash_sub823 ( (  w3551 ) , (  x3547 ) ) ) , (  slen3550 ) ) );
    ( (  draw_dash_str1981 ) ( (  screen3543 ) ,  (  s3545 ) ,  (  x3552 ) ,  (  y3549 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   ann1969 (   struct env1657* env ,    struct StrConcat_67  s4297 ) {
    ( (  draw_dash_str_dash_right1970 ) ( ( env->screen4290 ) ,  (  s4297 ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( * ( env->curline4294 ) ) ) );
    (* env->curline4294 ) = (  op_dash_add285 ( ( * ( env->curline4294 ) ) , (  from_dash_integral48 ( 1 ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   render_dash_editor1585 (    struct Screen_672 *  screen4290 ,    struct Editor_147 *  ed4292 ) {
    struct ScreenDims_1586  screen_dash_dims4293 = ( (struct ScreenDims_1586) { .f_from_dash_sx = (  from_dash_integral48 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub823 ( ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen4290 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral48 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub823 ( ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen4290 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) } );
    ( (  render1589 ) ( (  screen4290 ) ,  ( (  pane999 ) ( (  ed4292 ) ) ) ,  (  screen_dash_dims4293 ) ) );
    int32_t  temp1648 = (  from_dash_integral48 ( 0 ) );
    int32_t *  curline4294 = ( &temp1648 );
    struct env1649 envinst1649 = {
        .screen4290 =  screen4290 ,
        .curline4294 =  curline4294 ,
    };
    struct env1650 envinst1650 = {
        .screen4290 =  screen4290 ,
        .curline4294 =  curline4294 ,
    };
    struct env1651 envinst1651 = {
        .screen4290 =  screen4290 ,
        .curline4294 =  curline4294 ,
    };
    struct env1652 envinst1652 = {
        .screen4290 =  screen4290 ,
        .curline4294 =  curline4294 ,
    };
    struct env1653 envinst1653 = {
        .screen4290 =  screen4290 ,
        .curline4294 =  curline4294 ,
    };
    struct env1654 envinst1654 = {
        .screen4290 =  screen4290 ,
        .curline4294 =  curline4294 ,
    };
    struct env1655 envinst1655 = {
        .screen4290 =  screen4290 ,
        .curline4294 =  curline4294 ,
    };
    struct env1656 envinst1656 = {
        .screen4290 =  screen4290 ,
        .curline4294 =  curline4294 ,
    };
    struct env1657 envinst1657 = {
        .screen4290 =  screen4290 ,
        .curline4294 =  curline4294 ,
    };
    struct envunion1659  temp1658 = ( (struct envunion1659){ .fun = (  enum Unit_7  (*) (  struct env1649*  ,    struct StrConcat_1660  ) )ann1661 , .env =  envinst1649 } );
    ( temp1658.fun ( &temp1658.env ,  ( ( StrConcat_1660_StrConcat ) ( ( (  from_dash_string231 ) ( ( "mode: " ) ,  ( 6 ) ) ) ,  ( ( ( * (  ed4292 ) ) .f_pane ) .f_mode ) ) ) ) );
    enum CharType_1198  cur_dash_ty4298 = ( (  char_dash_type1200 ) ( ( (  char_dash_at1208 ) ( ( (  pane999 ) ( (  ed4292 ) ) ) ,  ( ( ( * (  ed4292 ) ) .f_pane ) .f_cursor ) ) ) ) );
    struct envunion1683  temp1682 = ( (struct envunion1683){ .fun = (  enum Unit_7  (*) (  struct env1650*  ,    struct StrConcat_1684  ) )ann1687 , .env =  envinst1650 } );
    ( temp1682.fun ( &temp1682.env ,  ( ( StrConcat_1684_StrConcat ) ( ( ( StrConcat_1685_StrConcat ) ( ( ( StrConcat_1686_StrConcat ) ( ( (  from_dash_string231 ) ( ( "cur: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4292 ) ) .f_pane ) .f_cursor ) ) ) ,  ( (  from_dash_string231 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  (  cur_dash_ty4298 ) ) ) ) );
    struct envunion1737  temp1736 = ( (struct envunion1737){ .fun = (  enum Unit_7  (*) (  struct env1651*  ,    struct StrConcat_1738  ) )ann1739 , .env =  envinst1651 } );
    ( temp1736.fun ( &temp1736.env ,  ( ( StrConcat_1738_StrConcat ) ( ( (  from_dash_string231 ) ( ( "sel: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4292 ) ) .f_pane ) .f_sel ) ) ) ) );
    struct Maybe_1770  cp4301 = ( (  fmap_dash_maybe1773 ) ( ( ( * (  ed4292 ) ) .f_clipboard ) ,  (  lam1774 ) ) );
    struct envunion1784  temp1783 = ( (struct envunion1784){ .fun = (  enum Unit_7  (*) (  struct env1652*  ,    struct StrConcat_1785  ) )ann1786 , .env =  envinst1652 } );
    ( temp1783.fun ( &temp1783.env ,  ( ( StrConcat_1785_StrConcat ) ( ( (  from_dash_string231 ) ( ( "cp: " ) ,  ( 4 ) ) ) ,  (  cp4301 ) ) ) ) );
    struct Maybe_1770  st4304 = ( (  fmap_dash_maybe1828 ) ( ( ( * (  ed4292 ) ) .f_search_dash_term ) ,  (  lam1829 ) ) );
    struct envunion1831  temp1830 = ( (struct envunion1831){ .fun = (  enum Unit_7  (*) (  struct env1652*  ,    struct StrConcat_1785  ) )ann1786 , .env =  envinst1652 } );
    ( temp1830.fun ( &temp1830.env ,  ( ( StrConcat_1785_StrConcat ) ( ( (  from_dash_string231 ) ( ( "st: " ) ,  ( 4 ) ) ) ,  (  st4304 ) ) ) ) );
    struct envunion1833  temp1832 = ( (struct envunion1833){ .fun = (  enum Unit_7  (*) (  struct env1653*  ,    struct StrConcat_1834  ) )ann1835 , .env =  envinst1653 } );
    ( temp1832.fun ( &temp1832.env ,  ( ( StrConcat_1834_StrConcat ) ( ( (  from_dash_string231 ) ( ( "edmode: " ) ,  ( 8 ) ) ) ,  ( ( * (  ed4292 ) ) .f_mode ) ) ) ) );
    struct envunion1875  temp1874 = ( (struct envunion1875){ .fun = (  enum Unit_7  (*) (  struct env1654*  ,    struct StrConcat_1876  ) )ann1877 , .env =  envinst1654 } );
    ( temp1874.fun ( &temp1874.env ,  ( ( StrConcat_1876_StrConcat ) ( ( (  from_dash_string231 ) ( ( "msg: " ) ,  ( 5 ) ) ) ,  ( ( * (  ed4292 ) ) .f_msg ) ) ) ) );
    struct envunion1910  temp1909 = ( (struct envunion1910){ .fun = (  enum Unit_7  (*) (  struct env1655*  ,    struct StrConcat_1911  ) )ann1914 , .env =  envinst1655 } );
    ( temp1909.fun ( &temp1909.env ,  ( ( StrConcat_1911_StrConcat ) ( ( ( StrConcat_1912_StrConcat ) ( ( ( StrConcat_1913_StrConcat ) ( ( ( StrConcat_1632_StrConcat ) ( ( (  from_dash_string231 ) ( ( "sc-off: (" ) ,  ( 9 ) ) ) ,  ( ( ( ( * (  ed4292 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_top ) ) ) ,  ( (  from_dash_string231 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( ( ( ( * (  ed4292 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_left ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    struct envunion1946  temp1945 = ( (struct envunion1946){ .fun = (  enum Unit_7  (*) (  struct env1656*  ,    struct StrConcat_1947  ) )ann1948 , .env =  envinst1656 } );
    ( temp1945.fun ( &temp1945.env ,  ( ( StrConcat_1947_StrConcat ) ( ( ( StrConcat_1912_StrConcat ) ( ( ( StrConcat_1913_StrConcat ) ( ( ( StrConcat_1632_StrConcat ) ( ( (  from_dash_string231 ) ( ( "dims: { " ) ,  ( 8 ) ) ) ,  ( (  screen_dash_dims4293 ) .f_to_dash_sx ) ) ) ,  ( (  from_dash_string231 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  screen_dash_dims4293 ) .f_to_dash_sy ) ) ) ,  ( (  from_dash_string231 ) ( ( " }" ) ,  ( 2 ) ) ) ) ) ) );
    struct envunion1968  temp1967 = ( (struct envunion1968){ .fun = (  enum Unit_7  (*) (  struct env1657*  ,    struct StrConcat_67  ) )ann1969 , .env =  envinst1657 } );
    ( temp1967.fun ( &temp1967.env ,  ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "num actions: " ) ,  ( 13 ) ) ) ,  ( ( ( ( * ( ( ( * (  ed4292 ) ) .f_pane ) .f_buf ) ) .f_actions ) .f_list ) .f_count ) ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_1986 {
    struct StrView_21  field0;
    uint32_t  field1;
};

static struct StrConcat_1986 StrConcat_1986_StrConcat (  struct StrView_21  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1986 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1985 {
    struct StrConcat_1986  field0;
    struct Char_57  field1;
};

static struct StrConcat_1985 StrConcat_1985_StrConcat (  struct StrConcat_1986  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_1985 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1990 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1989 {
    struct StrViewIter_614  f_left;
    struct IntStrIter_1990  f_right;
};

struct StrConcatIter_1988 {
    struct StrConcatIter_1989  f_left;
    struct AppendIter_884  f_right;
};

static  struct StrConcatIter_1988   into_dash_iter1991 (    struct StrConcatIter_1988  self1491 ) {
    return (  self1491 );
}

static  uint32_t   op_dash_div1999 (    uint32_t  l245 ,    uint32_t  r247 ) {
    return ( (  l245 ) / (  r247 ) );
}

static  int32_t   count_dash_digits1998 (    uint32_t  self1430 ) {
    if ( (  eq418 ( (  self1430 ) , (  from_dash_integral227 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp226 ( (  self1430 ) , (  from_dash_integral227 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1999 ( (  self1430 ) , (  from_dash_integral227 ( 10 ) ) ) );
        digits1431 = (  op_dash_add285 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1990   uint_dash_iter1997 (    uint32_t  int1437 ) {
    return ( (struct IntStrIter_1990) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1998 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1990   chars1996 (    uint32_t  self1449 ) {
    return ( (  uint_dash_iter1997 ) ( (  self1449 ) ) );
}

static  struct StrConcatIter_1989   into_dash_iter1995 (    struct StrConcat_1986  dref1498 ) {
    return ( (struct StrConcatIter_1989) { .f_left = ( (  chars619 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1996 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1989   chars1994 (    struct StrConcat_1986  self1509 ) {
    return ( (  into_dash_iter1995 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1988   into_dash_iter1993 (    struct StrConcat_1985  dref1498 ) {
    return ( (struct StrConcatIter_1988) { .f_left = ( (  chars1994 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars924 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1988   chars1992 (    struct StrConcat_1985  self1509 ) {
    return ( (  into_dash_iter1993 ) ( (  self1509 ) ) );
}

struct env2006 {
    ;
    uint32_t  base1210;
};

struct envunion2007 {
    uint32_t  (*fun) (  struct env2006*  ,    int32_t  ,    uint32_t  );
    struct env2006 env;
};

static  uint32_t   reduce2005 (    struct Range_697  iterable1093 ,    uint32_t  base1095 ,   struct envunion2007  fun1097 ) {
    uint32_t  x1098 = (  base1095 );
    struct RangeIter_700  it1099 = ( (  into_dash_iter702 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_283  dref1100 = ( (  next703 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_283_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_283_Just_t ) {
                struct envunion2007  temp2008 = (  fun1097 );
                x1098 = ( temp2008.fun ( &temp2008.env ,  ( dref1100 .stuff .Maybe_283_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2009 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2009);
    exit ( 1 );
    ( Unit_7_Unit );
    uint32_t  temp2010;
    return (  temp2010 );
}

static  uint32_t   lam2011 (   struct env2006* env ,    int32_t  item1214 ,    uint32_t  x1216 ) {
    return (  op_dash_mul694 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint32_t   pow2004 (    uint32_t  base1210 ,    int32_t  p1212 ) {
    struct env2006 envinst2006 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce2005 ) ( ( (  to705 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub823 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral227 ( 1 ) ) ,  ( (struct envunion2007){ .fun = (  uint32_t  (*) (  struct env2006*  ,    int32_t  ,    uint32_t  ) )lam2011 , .env =  envinst2006 } ) ) );
}

static  uint32_t   op_dash_sub2012 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) - (  r237 ) );
}

static  struct Maybe_617   next2003 (    struct IntStrIter_1990 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_617_Just ) ( ( (  from_dash_charlike232 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp328 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_617) { .tag = Maybe_617_None_t } );
    }
    uint32_t  trim_dash_down1423 = ( (  pow2004 ) ( (  from_dash_integral227 ( 10 ) ) ,  (  op_dash_sub823 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    uint32_t  upper1424 = (  op_dash_div1999 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    uint32_t  upper_dash_mask1425 = (  op_dash_mul694 ( (  op_dash_div1999 ( (  upper1424 ) , (  from_dash_integral227 ( 10 ) ) ) ) , (  from_dash_integral227 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast230 ) ( (  op_dash_sub2012 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub823 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8903 ) ( (  op_dash_add793 ( (  digit1426 ) , (  from_dash_integral223 ( 48 ) ) ) ) ) );
    return ( ( Maybe_617_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_617   next2002 (    struct StrConcatIter_1989 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next2003 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next2001 (    struct StrConcatIter_1988 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next2002 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next910 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   draw_dash_str1984 (    struct Screen_672 *  screen3527 ,    struct StrConcat_1985  s3529 ,    int32_t  x3531 ,    int32_t  y3533 ) {
    int32_t  w3534 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp328 ( (  y3533 ) , (  from_dash_integral48 ( 0 ) ) ) == 0 ) || (  cmp328 ( (  y3533 ) , ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3527 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_7_Unit );
    }
    int32_t  i3535 = (  op_dash_add285 ( (  op_dash_mul1405 ( (  y3533 ) , (  w3534 ) ) ) , (  x3531 ) ) );
    int32_t  x3536 = ( (  min480 ) ( (  x3531 ) ,  (  w3534 ) ) );
    size_t  max_dash_len3537 = ( (  i32_dash_size273 ) ( (  op_dash_sub823 ( (  w3534 ) , (  x3536 ) ) ) ) );
    int32_t  xx3538 = (  from_dash_integral48 ( 0 ) );
    struct StrConcatIter_1988  temp1987 =  into_dash_iter1991 ( ( (  chars1992 ) ( (  s3529 ) ) ) );
    while (true) {
        struct Maybe_617  __cond2000 =  next2001 (&temp1987);
        if (  __cond2000 .tag == 0 ) {
            break;
        }
        struct Char_57  c3540 =  __cond2000 .stuff .Maybe_617_Just_s .field0;
        ( (  put_dash_char1628 ) ( (  screen3527 ) ,  (  c3540 ) ,  (  op_dash_add285 ( (  x3536 ) , (  xx3538 ) ) ) ,  (  y3533 ) ) );
        xx3538 = (  op_dash_add285 ( (  xx3538 ) , ( (  rendered_dash_wcwidth974 ) ( (  c3540 ) ) ) ) );
    }
    return ( Unit_7_Unit );
}

struct RenderState_2014 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_675  f_fg;
    struct Color_675  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_2019 {
    struct StrConcat_1985  field0;
    uint32_t  field1;
};

static struct StrConcat_2019 StrConcat_2019_StrConcat (  struct StrConcat_1985  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2019 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2018 {
    struct StrConcat_2019  field0;
    struct Char_57  field1;
};

static struct StrConcat_2018 StrConcat_2018_StrConcat (  struct StrConcat_2019  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_2018 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2022 {
    struct StrConcatIter_1988  f_left;
    struct IntStrIter_1990  f_right;
};

struct StrConcatIter_2021 {
    struct StrConcatIter_2022  f_left;
    struct AppendIter_884  f_right;
};

static  struct StrConcatIter_2021   into_dash_iter2024 (    struct StrConcatIter_2021  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_617   next2026 (    struct StrConcatIter_2022 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next2001 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next2003 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next2025 (    struct StrConcatIter_2021 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next2026 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next910 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each2020 (    struct StrConcatIter_2021  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrConcatIter_2021  temp2023 = ( (  into_dash_iter2024 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2021 *  it1077 = ( &temp2023 );
    while ( ( true ) ) {
        struct Maybe_617  dref1078 = ( (  next2025 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_617_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_617_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_617_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrConcatIter_2022   into_dash_iter2030 (    struct StrConcat_2019  dref1498 ) {
    return ( (struct StrConcatIter_2022) { .f_left = ( (  chars1992 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1996 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2022   chars2029 (    struct StrConcat_2019  self1509 ) {
    return ( (  into_dash_iter2030 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2021   into_dash_iter2028 (    struct StrConcat_2018  dref1498 ) {
    return ( (struct StrConcatIter_2021) { .f_left = ( (  chars2029 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars924 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2021   chars2027 (    struct StrConcat_2018  self1509 ) {
    return ( (  into_dash_iter2028 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print2017 (    struct StrConcat_2018  s2563 ) {
    ( (  for_dash_each2020 ) ( ( (  chars2027 ) ( (  s2563 ) ) ) ,  (  printf_dash_char215 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   move_dash_cursor_dash_to2016 (    uint32_t  x2577 ,    uint32_t  y2579 ) {
    uint32_t  x2580 = (  op_dash_add795 ( (  x2577 ) , (  from_dash_integral227 ( 1 ) ) ) );
    uint32_t  y2581 = (  op_dash_add795 ( (  y2579 ) , (  from_dash_integral227 ( 1 ) ) ) );
    ( (  print2017 ) ( ( ( StrConcat_2018_StrConcat ) ( ( ( StrConcat_2019_StrConcat ) ( ( ( StrConcat_1985_StrConcat ) ( ( ( StrConcat_1986_StrConcat ) ( ( (  from_dash_string231 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2581 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2580 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  struct Slice_673   subslice2033 (    struct Slice_673  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Cell_674 *  begin_dash_ptr1787 = ( (  offset_dash_ptr709 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp195 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp195 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_673) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub315 ( ( (  min342 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_673) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

struct SliceIter_2036 {
    struct Slice_673  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2035 {
    struct SliceIter_2036  f_left_dash_it;
    struct SliceIter_2036  f_right_dash_it;
};

struct Tuple2_2037 {
    struct Cell_674  field0;
    struct Cell_674  field1;
};

static struct Tuple2_2037 Tuple2_2037_Tuple2 (  struct Cell_674  field0 ,  struct Cell_674  field1 ) {
    return ( struct Tuple2_2037 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2039 {
    bool (*  fun1135 )(    struct Tuple2_2037  );
};

struct envunion2040 {
    bool  (*fun) (  struct env2039*  ,    struct Tuple2_2037  ,    bool  );
    struct env2039 env;
};

static  struct Zip_2035   into_dash_iter2041 (    struct Zip_2035  self911 ) {
    return (  self911 );
}

struct Maybe_2042 {
    enum {
        Maybe_2042_None_t,
        Maybe_2042_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2037  field0;
        } Maybe_2042_Just_s;
    } stuff;
};

static struct Maybe_2042 Maybe_2042_Just (  struct Tuple2_2037  field0 ) {
    return ( struct Maybe_2042 ) { .tag = Maybe_2042_Just_t, .stuff = { .Maybe_2042_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_714   next2044 (    struct SliceIter_2036 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp195 ( (  op_dash_add243 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_714) { .tag = Maybe_714_None_t } );
    }
    struct Cell_674  elem1830 = ( * ( (  offset_dash_ptr709 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64272 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add243 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_714_Just ) ( (  elem1830 ) ) );
}

static  struct Maybe_2042   next2043 (    struct Zip_2035 *  self914 ) {
    struct Zip_2035  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_714  dref916 = ( (  next2044 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_714_None_t ) {
            return ( (struct Maybe_2042) { .tag = Maybe_2042_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_714_Just_t ) {
                struct Maybe_714  dref918 = ( (  next2044 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_714_None_t ) {
                    return ( (struct Maybe_2042) { .tag = Maybe_2042_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_714_Just_t ) {
                        ( (  next2044 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next2044 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2042_Just ) ( ( ( Tuple2_2037_Tuple2 ) ( ( dref916 .stuff .Maybe_714_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_714_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce2038 (    struct Zip_2035  iterable1093 ,    bool  base1095 ,   struct envunion2040  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_2035  it1099 = ( (  into_dash_iter2041 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_2042  dref1100 = ( (  next2043 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_2042_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_2042_Just_t ) {
                struct envunion2040  temp2045 = (  fun1097 );
                x1098 = ( temp2045.fun ( &temp2045.env ,  ( dref1100 .stuff .Maybe_2042_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2046 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2046);
    exit ( 1 );
    ( Unit_7_Unit );
    bool  temp2047;
    return (  temp2047 );
}

static  bool   lam2048 (   struct env2039* env ,    struct Tuple2_2037  e1137 ,    bool  x1139 ) {
    return ( ( ( env->fun1135 ) ( (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any2034 (    struct Zip_2035  it1133 ,    bool (*  fun1135 )(    struct Tuple2_2037  ) ) {
    struct env2039 envinst2039 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce2038 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion2040){ .fun = (  bool  (*) (  struct env2039*  ,    struct Tuple2_2037  ,    bool  ) )lam2048 , .env =  envinst2039 } ) ) );
}

static  struct SliceIter_2036   into_dash_iter2050 (    struct Slice_673  self1822 ) {
    return ( (struct SliceIter_2036) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2035   zip2049 (    struct Slice_673  left922 ,    struct Slice_673  right924 ) {
    struct SliceIter_2036  left_dash_it925 = ( (  into_dash_iter2050 ) ( (  left922 ) ) );
    struct SliceIter_2036  right_dash_it926 = ( (  into_dash_iter2050 ) ( (  right924 ) ) );
    return ( (struct Zip_2035) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

struct Tuple2_2054 {
    struct Color_675  field0;
    struct Color_675  field1;
};

static struct Tuple2_2054 Tuple2_2054_Tuple2 (  struct Color_675  field0 ,  struct Color_675  field1 ) {
    return ( struct Tuple2_2054 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_676 *   cast2058 (    int32_t *  x356 ) {
    return ( (enum Color8_676 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2056 (    enum Color8_676  x573 ) {
    int32_t  temp2057 = ( (  zeroed866 ) ( ) );
    int32_t *  y574 = ( &temp2057 );
    enum Color8_676 *  yp575 = ( (  cast2058 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq2055 (    enum Color8_676  l2605 ,    enum Color8_676  r2607 ) {
    return (  eq331 ( ( ( (  cast_dash_on_dash_zeroed2056 ) ( (  l2605 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2056 ) ( (  r2607 ) ) ) ) );
}

static  enum Color16_677 *   cast2062 (    int32_t *  x356 ) {
    return ( (enum Color16_677 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2060 (    enum Color16_677  x573 ) {
    int32_t  temp2061 = ( (  zeroed866 ) ( ) );
    int32_t *  y574 = ( &temp2061 );
    enum Color16_677 *  yp575 = ( (  cast2062 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq2059 (    enum Color16_677  l2611 ,    enum Color16_677  r2613 ) {
    return (  eq331 ( ( ( (  cast_dash_on_dash_zeroed2060 ) ( (  l2611 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2060 ) ( (  r2613 ) ) ) ) );
}

static  bool   eq2063 (    struct RGB_678  l2641 ,    struct RGB_678  r2643 ) {
    return ( ( (  eq219 ( ( (  l2641 ) .f_r ) , ( (  r2643 ) .f_r ) ) ) && (  eq219 ( ( (  l2641 ) .f_g ) , ( (  r2643 ) .f_g ) ) ) ) && (  eq219 ( ( (  l2641 ) .f_b ) , ( (  r2643 ) .f_b ) ) ) );
}

static  bool   eq2053 (    struct Color_675  l2664 ,    struct Color_675  r2666 ) {
    return ( {  struct Tuple2_2054  dref2667 = ( ( Tuple2_2054_Tuple2 ) ( (  l2664 ) ,  (  r2666 ) ) ) ; dref2667 .field0.tag == Color_675_ColorDefault_t && dref2667 .field1.tag == Color_675_ColorDefault_t ? ( true ) : dref2667 .field0.tag == Color_675_Color8_t && dref2667 .field1.tag == Color_675_Color8_t ? (  eq2055 ( ( dref2667 .field0 .stuff .Color_675_Color8_s .field0 ) , ( dref2667 .field1 .stuff .Color_675_Color8_s .field0 ) ) ) : dref2667 .field0.tag == Color_675_Color16_t && dref2667 .field1.tag == Color_675_Color16_t ? (  eq2059 ( ( dref2667 .field0 .stuff .Color_675_Color16_s .field0 ) , ( dref2667 .field1 .stuff .Color_675_Color16_s .field0 ) ) ) : dref2667 .field0.tag == Color_675_Color256_t && dref2667 .field1.tag == Color_675_Color256_t ? (  eq219 ( ( dref2667 .field0 .stuff .Color_675_Color256_s .field0 ) , ( dref2667 .field1 .stuff .Color_675_Color256_s .field0 ) ) ) : dref2667 .field0.tag == Color_675_ColorRGB_t && dref2667 .field1.tag == Color_675_ColorRGB_t ? (  eq2063 ( ( dref2667 .field0 .stuff .Color_675_ColorRGB_s .field0 ) , ( dref2667 .field1 .stuff .Color_675_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2052 (    struct Cell_674  l3400 ,    struct Cell_674  r3402 ) {
    if ( ( !  eq414 ( ( (  l3400 ) .f_c ) , ( (  r3402 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2053 ( ( (  l3400 ) .f_fg ) , ( (  r3402 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2053 ( ( (  l3400 ) .f_bg ) , ( (  r3402 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam2051 (    struct Tuple2_2037  dref3456 ) {
    return ( !  eq2052 ( ( dref3456 .field0 ) , ( dref3456 .field1 ) ) );
}

static  enum Unit_7   set_dash_default_dash_fg2066 (  ) {
    ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg82067 (    enum Color8_676  color2616 ) {
    enum Color8_676  dref2617 = (  color2616 );
    switch (  dref2617 ) {
        case Color8_676_Black8 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_676_Red8 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_676_Green8 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_676_Yellow8 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_676_Blue8 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_676_Magenta8 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_676_Cyan8 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_676_White8 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg162068 (    enum Color16_677  color2620 ) {
    enum Color16_677  dref2621 = (  color2620 );
    switch (  dref2621 ) {
        case Color16_677_Black16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_Red16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_Green16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_Yellow16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_Blue16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_Magenta16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_Cyan16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_White16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_BrightBlack16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_BrightRed16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_BrightGreen16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_BrightYellow16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_BrightBlue16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_BrightMagenta16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_BrightCyan16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_BrightWhite16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

struct StrConcat_2072 {
    struct StrView_21  field0;
    uint8_t  field1;
};

static struct StrConcat_2072 StrConcat_2072_StrConcat (  struct StrView_21  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2072 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2071 {
    struct StrConcat_2072  field0;
    struct Char_57  field1;
};

static struct StrConcat_2071 StrConcat_2071_StrConcat (  struct StrConcat_2072  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_2071 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2076 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2075 {
    struct StrViewIter_614  f_left;
    struct IntStrIter_2076  f_right;
};

struct StrConcatIter_2074 {
    struct StrConcatIter_2075  f_left;
    struct AppendIter_884  f_right;
};

static  struct StrConcatIter_2074   into_dash_iter2078 (    struct StrConcatIter_2074  self1491 ) {
    return (  self1491 );
}

struct env2084 {
    uint8_t  base1210;
    ;
};

struct envunion2085 {
    uint8_t  (*fun) (  struct env2084*  ,    int32_t  ,    uint8_t  );
    struct env2084 env;
};

static  uint8_t   reduce2083 (    struct Range_697  iterable1093 ,    uint8_t  base1095 ,   struct envunion2085  fun1097 ) {
    uint8_t  x1098 = (  base1095 );
    struct RangeIter_700  it1099 = ( (  into_dash_iter702 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_283  dref1100 = ( (  next703 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_283_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_283_Just_t ) {
                struct envunion2085  temp2086 = (  fun1097 );
                x1098 = ( temp2086.fun ( &temp2086.env ,  ( dref1100 .stuff .Maybe_283_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2087 = ( (  from_dash_string49 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2087);
    exit ( 1 );
    ( Unit_7_Unit );
    uint8_t  temp2088;
    return (  temp2088 );
}

static  uint8_t   op_dash_mul2090 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam2089 (   struct env2084* env ,    int32_t  item1214 ,    uint8_t  x1216 ) {
    return (  op_dash_mul2090 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint8_t   pow2082 (    uint8_t  base1210 ,    int32_t  p1212 ) {
    struct env2084 envinst2084 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce2083 ) ( ( (  to705 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub823 ( (  p1212 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral223 ( 1 ) ) ,  ( (struct envunion2085){ .fun = (  uint8_t  (*) (  struct env2084*  ,    int32_t  ,    uint8_t  ) )lam2089 , .env =  envinst2084 } ) ) );
}

static  uint8_t   op_dash_div2091 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast2092 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_617   next2081 (    struct IntStrIter_2076 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_617_Just ) ( ( (  from_dash_charlike232 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp328 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_617) { .tag = Maybe_617_None_t } );
    }
    uint8_t  trim_dash_down1423 = ( (  pow2082 ) ( (  from_dash_integral223 ( 10 ) ) ,  (  op_dash_sub823 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
    uint8_t  upper1424 = (  op_dash_div2091 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    uint8_t  upper_dash_mask1425 = (  op_dash_mul2090 ( (  op_dash_div2091 ( (  upper1424 ) , (  from_dash_integral223 ( 10 ) ) ) ) , (  from_dash_integral223 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast2092 ) ( (  op_dash_sub792 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub823 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral48 ( 1 ) ) ) );
    struct Char_57  digit_dash_char1427 = ( (  from_dash_u8903 ) ( (  op_dash_add793 ( (  digit1426 ) , (  from_dash_integral223 ( 48 ) ) ) ) ) );
    return ( ( Maybe_617_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_617   next2080 (    struct StrConcatIter_2075 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next618 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next2081 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next2079 (    struct StrConcatIter_2074 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next2080 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next910 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each2073 (    struct StrConcatIter_2074  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrConcatIter_2074  temp2077 = ( (  into_dash_iter2078 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2074 *  it1077 = ( &temp2077 );
    while ( ( true ) ) {
        struct Maybe_617  dref1078 = ( (  next2079 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_617_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_617_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_617_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  int32_t   count_dash_digits2099 (    uint8_t  self1430 ) {
    if ( (  eq219 ( (  self1430 ) , (  from_dash_integral223 ( 0 ) ) ) ) ) {
        return (  from_dash_integral48 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral48 ( 0 ) );
    while ( (  cmp236 ( (  self1430 ) , (  from_dash_integral223 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div2091 ( (  self1430 ) , (  from_dash_integral223 ( 10 ) ) ) );
        digits1431 = (  op_dash_add285 ( (  digits1431 ) , (  from_dash_integral48 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_2076   uint_dash_iter2098 (    uint8_t  int1437 ) {
    return ( (struct IntStrIter_2076) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits2099 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2076   chars2097 (    uint8_t  self1455 ) {
    return ( (  uint_dash_iter2098 ) ( (  self1455 ) ) );
}

static  struct StrConcatIter_2075   into_dash_iter2096 (    struct StrConcat_2072  dref1498 ) {
    return ( (struct StrConcatIter_2075) { .f_left = ( (  chars619 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars2097 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2075   chars2095 (    struct StrConcat_2072  self1509 ) {
    return ( (  into_dash_iter2096 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2074   into_dash_iter2094 (    struct StrConcat_2071  dref1498 ) {
    return ( (struct StrConcatIter_2074) { .f_left = ( (  chars2095 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars924 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2074   chars2093 (    struct StrConcat_2071  self1509 ) {
    return ( (  into_dash_iter2094 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print2070 (    struct StrConcat_2071  s2563 ) {
    ( (  for_dash_each2073 ) ( ( (  chars2093 ) ( (  s2563 ) ) ) ,  (  printf_dash_char215 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg2562069 (    uint8_t  color2634 ) {
    ( (  print2070 ) ( ( ( StrConcat_2071_StrConcat ) ( ( ( StrConcat_2072_StrConcat ) ( ( (  from_dash_string231 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2634 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

struct StrConcat_2105 {
    struct StrConcat_2071  field0;
    uint8_t  field1;
};

static struct StrConcat_2105 StrConcat_2105_StrConcat (  struct StrConcat_2071  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2105 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2104 {
    struct StrConcat_2105  field0;
    struct Char_57  field1;
};

static struct StrConcat_2104 StrConcat_2104_StrConcat (  struct StrConcat_2105  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_2104 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2103 {
    struct StrConcat_2104  field0;
    uint8_t  field1;
};

static struct StrConcat_2103 StrConcat_2103_StrConcat (  struct StrConcat_2104  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2103 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2102 {
    struct StrConcat_2103  field0;
    struct Char_57  field1;
};

static struct StrConcat_2102 StrConcat_2102_StrConcat (  struct StrConcat_2103  field0 ,  struct Char_57  field1 ) {
    return ( struct StrConcat_2102 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2110 {
    struct StrConcatIter_2074  f_left;
    struct IntStrIter_2076  f_right;
};

struct StrConcatIter_2109 {
    struct StrConcatIter_2110  f_left;
    struct AppendIter_884  f_right;
};

struct StrConcatIter_2108 {
    struct StrConcatIter_2109  f_left;
    struct IntStrIter_2076  f_right;
};

struct StrConcatIter_2107 {
    struct StrConcatIter_2108  f_left;
    struct AppendIter_884  f_right;
};

static  struct StrConcatIter_2107   into_dash_iter2112 (    struct StrConcatIter_2107  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_617   next2116 (    struct StrConcatIter_2110 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next2079 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next2081 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next2115 (    struct StrConcatIter_2109 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next2116 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next910 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next2114 (    struct StrConcatIter_2108 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next2115 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next2081 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_617   next2113 (    struct StrConcatIter_2107 *  self1494 ) {
    struct Maybe_617  dref1495 = ( (  next2114 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_617_Just_t ) {
        return ( ( Maybe_617_Just ) ( ( dref1495 .stuff .Maybe_617_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_617_None_t ) {
            return ( (  next910 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each2106 (    struct StrConcatIter_2107  iterable1074 ,    enum Unit_7 (*  fun1076 )(    struct Char_57  ) ) {
    struct StrConcatIter_2107  temp2111 = ( (  into_dash_iter2112 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2107 *  it1077 = ( &temp2111 );
    while ( ( true ) ) {
        struct Maybe_617  dref1078 = ( (  next2113 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_617_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_617_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_617_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct StrConcatIter_2110   into_dash_iter2124 (    struct StrConcat_2105  dref1498 ) {
    return ( (struct StrConcatIter_2110) { .f_left = ( (  chars2093 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars2097 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2110   chars2123 (    struct StrConcat_2105  self1509 ) {
    return ( (  into_dash_iter2124 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2109   into_dash_iter2122 (    struct StrConcat_2104  dref1498 ) {
    return ( (struct StrConcatIter_2109) { .f_left = ( (  chars2123 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars924 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2109   chars2121 (    struct StrConcat_2104  self1509 ) {
    return ( (  into_dash_iter2122 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2108   into_dash_iter2120 (    struct StrConcat_2103  dref1498 ) {
    return ( (struct StrConcatIter_2108) { .f_left = ( (  chars2121 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars2097 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2108   chars2119 (    struct StrConcat_2103  self1509 ) {
    return ( (  into_dash_iter2120 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_2107   into_dash_iter2118 (    struct StrConcat_2102  dref1498 ) {
    return ( (struct StrConcatIter_2107) { .f_left = ( (  chars2119 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars924 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_2107   chars2117 (    struct StrConcat_2102  self1509 ) {
    return ( (  into_dash_iter2118 ) ( (  self1509 ) ) );
}

static  enum Unit_7   print2101 (    struct StrConcat_2102  s2563 ) {
    ( (  for_dash_each2106 ) ( ( (  chars2117 ) ( (  s2563 ) ) ) ,  (  printf_dash_char215 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg_dash_rgb2100 (    struct RGB_678  c2657 ) {
    ( (  print2101 ) ( ( ( StrConcat_2102_StrConcat ) ( ( ( StrConcat_2103_StrConcat ) ( ( ( StrConcat_2104_StrConcat ) ( ( ( StrConcat_2105_StrConcat ) ( ( ( StrConcat_2071_StrConcat ) ( ( ( StrConcat_2072_StrConcat ) ( ( (  from_dash_string231 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2657 ) .f_r ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2657 ) .f_g ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2657 ) .f_b ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_fg2065 (    struct Color_675  c2678 ) {
    struct Color_675  dref2679 = (  c2678 );
    if ( dref2679.tag == Color_675_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2066 ) ( ) );
    }
    else {
        if ( dref2679.tag == Color_675_Color8_t ) {
            ( (  set_dash_fg82067 ) ( ( dref2679 .stuff .Color_675_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2679.tag == Color_675_Color16_t ) {
                ( (  set_dash_fg162068 ) ( ( dref2679 .stuff .Color_675_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2679.tag == Color_675_Color256_t ) {
                    ( (  set_dash_fg2562069 ) ( ( dref2679 .stuff .Color_675_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2679.tag == Color_675_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2100 ) ( ( dref2679 .stuff .Color_675_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_default_dash_bg2126 (  ) {
    ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg82127 (    enum Color8_676  color2624 ) {
    enum Color8_676  dref2625 = (  color2624 );
    switch (  dref2625 ) {
        case Color8_676_Black8 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_676_Red8 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_676_Green8 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_676_Yellow8 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_676_Blue8 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_676_Magenta8 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_676_Cyan8 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_676_White8 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg162128 (    enum Color16_677  color2628 ) {
    enum Color16_677  dref2629 = (  color2628 );
    switch (  dref2629 ) {
        case Color16_677_Black16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_Red16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_Green16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_Yellow16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_Blue16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_Magenta16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_Cyan16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_White16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_677_BrightBlack16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_677_BrightRed16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_677_BrightGreen16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_677_BrightYellow16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_677_BrightBlue16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_677_BrightMagenta16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_677_BrightCyan16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_677_BrightWhite16 : {
            ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg2562129 (    uint8_t  color2637 ) {
    ( (  print2070 ) ( ( ( StrConcat_2071_StrConcat ) ( ( ( StrConcat_2072_StrConcat ) ( ( (  from_dash_string231 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2637 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg_dash_rgb2130 (    struct RGB_678  c2660 ) {
    ( (  print2101 ) ( ( ( StrConcat_2102_StrConcat ) ( ( ( StrConcat_2103_StrConcat ) ( ( ( StrConcat_2104_StrConcat ) ( ( ( StrConcat_2105_StrConcat ) ( ( ( StrConcat_2071_StrConcat ) ( ( ( StrConcat_2072_StrConcat ) ( ( (  from_dash_string231 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2660 ) .f_r ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2660 ) .f_g ) ) ) ,  ( (  from_dash_charlike232 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2660 ) .f_b ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   set_dash_bg2125 (    struct Color_675  c2686 ) {
    struct Color_675  dref2687 = (  c2686 );
    if ( dref2687.tag == Color_675_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2126 ) ( ) );
    }
    else {
        if ( dref2687.tag == Color_675_Color8_t ) {
            ( (  set_dash_bg82127 ) ( ( dref2687 .stuff .Color_675_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2687.tag == Color_675_Color16_t ) {
                ( (  set_dash_bg162128 ) ( ( dref2687 .stuff .Color_675_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2687.tag == Color_675_Color256_t ) {
                    ( (  set_dash_bg2562129 ) ( ( dref2687 .stuff .Color_675_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2687.tag == Color_675_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2130 ) ( ( dref2687 .stuff .Color_675_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_7_Unit );
}

static  uint32_t   i32_dash_u322131 (    int32_t  x603 ) {
    return ( (uint32_t ) (  x603 ) );
}

static  enum Unit_7   emit_dash_cell2064 (    struct RenderState_2014 *  rs3432 ,    struct Cell_674 *  c3434 ,    uint32_t  x3436 ,    uint32_t  y3438 ) {
    if ( ( ( !  eq418 ( (  x3436 ) , ( ( * (  rs3432 ) ) .f_x ) ) ) || ( !  eq418 ( (  y3438 ) , ( ( * (  rs3432 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to2016 ) ( (  x3436 ) ,  (  y3438 ) ) );
        (*  rs3432 ) .f_x = (  x3436 );
        (*  rs3432 ) .f_y = (  y3438 );
    }
    struct Char_57  char3439 = ( ( * (  c3434 ) ) .f_c );
    struct Color_675  bg3440 = ( ( * (  c3434 ) ) .f_bg );
    if ( (  eq331 ( ( ( * (  c3434 ) ) .f_char_dash_width ) , (  op_dash_neg647 ( (  from_dash_integral48 ( 1 ) ) ) ) ) ) ) {
        char3439 = ( (  from_dash_charlike232 ) ( ( " " ) ,  ( 1 ) ) );
        bg3440 = ( ( Color_675_Color8 ) ( ( Color8_676_Red8 ) ) );
    }
    if ( ( !  eq2053 ( ( ( * (  rs3432 ) ) .f_fg ) , ( ( * (  c3434 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2065 ) ( ( ( * (  c3434 ) ) .f_fg ) ) );
        (*  rs3432 ) .f_fg = ( ( * (  c3434 ) ) .f_fg );
    }
    if ( ( !  eq2053 ( ( ( * (  rs3432 ) ) .f_bg ) , (  bg3440 ) ) ) ) {
        ( (  set_dash_bg2125 ) ( (  bg3440 ) ) );
        (*  rs3432 ) .f_bg = (  bg3440 );
    }
    ( (  print_dash_str214 ) ( (  char3439 ) ) );
    uint32_t  char_dash_width3441 = ( (  i32_dash_u322131 ) ( ( (  max975 ) ( ( ( * (  c3434 ) ) .f_char_dash_width ) ,  (  from_dash_integral48 ( 1 ) ) ) ) ) );
    (*  rs3432 ) .f_x = (  op_dash_add795 ( ( ( * (  rs3432 ) ) .f_x ) , (  char_dash_width3441 ) ) );
    return ( Unit_7_Unit );
}

struct Zip_2134 {
    struct SliceIter_2036  f_left_dash_it;
    struct FromIter_277  f_right_dash_it;
};

struct env2135 {
    ;
    struct Slice_673  dest1853;
    ;
};

struct Tuple2_2137 {
    struct Cell_674  field0;
    int32_t  field1;
};

static struct Tuple2_2137 Tuple2_2137_Tuple2 (  struct Cell_674  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2137 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2136 {
    enum Unit_7  (*fun) (  struct env2135*  ,    struct Tuple2_2137  );
    struct env2135 env;
};

static  struct Zip_2134   into_dash_iter2139 (    struct Zip_2134  self911 ) {
    return (  self911 );
}

struct Maybe_2140 {
    enum {
        Maybe_2140_None_t,
        Maybe_2140_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2137  field0;
        } Maybe_2140_Just_s;
    } stuff;
};

static struct Maybe_2140 Maybe_2140_Just (  struct Tuple2_2137  field0 ) {
    return ( struct Maybe_2140 ) { .tag = Maybe_2140_Just_t, .stuff = { .Maybe_2140_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2140   next2141 (    struct Zip_2134 *  self914 ) {
    struct Zip_2134  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_714  dref916 = ( (  next2044 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_714_None_t ) {
            return ( (struct Maybe_2140) { .tag = Maybe_2140_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_714_Just_t ) {
                struct Maybe_283  dref918 = ( (  next284 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_283_None_t ) {
                    return ( (struct Maybe_2140) { .tag = Maybe_2140_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_283_Just_t ) {
                        ( (  next2044 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next284 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2140_Just ) ( ( ( Tuple2_2137_Tuple2 ) ( ( dref916 .stuff .Maybe_714_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_283_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_7   for_dash_each2133 (    struct Zip_2134  iterable1074 ,   struct envunion2136  fun1076 ) {
    struct Zip_2134  temp2138 = ( (  into_dash_iter2139 ) ( (  iterable1074 ) ) );
    struct Zip_2134 *  it1077 = ( &temp2138 );
    while ( ( true ) ) {
        struct Maybe_2140  dref1078 = ( (  next2141 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_2140_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_2140_Just_t ) {
                struct envunion2136  temp2142 = (  fun1076 );
                ( temp2142.fun ( &temp2142.env ,  ( dref1078 .stuff .Maybe_2140_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  struct Zip_2134   zip2143 (    struct Slice_673  left922 ,    struct FromIter_277  right924 ) {
    struct SliceIter_2036  left_dash_it925 = ( (  into_dash_iter2050 ) ( (  left922 ) ) );
    struct FromIter_277  right_dash_it926 = ( (  into_dash_iter289 ) ( (  right924 ) ) );
    return ( (struct Zip_2134) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_7   lam2144 (   struct env2135* env ,    struct Tuple2_2137  dref1854 ) {
    return ( (  set707 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size273 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_7   copy_dash_to2132 (    struct Slice_673  src1851 ,    struct Slice_673  dest1853 ) {
    if ( (  cmp195 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic464 ) ( ( ( StrConcat_465_StrConcat ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string231 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string231 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string231 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2135 envinst2135 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each2133 ) ( ( (  zip2143 ) ( (  src1851 ) ,  ( (  from290 ) ( (  from_dash_integral48 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2136){ .fun = (  enum Unit_7  (*) (  struct env2135*  ,    struct Tuple2_2137  ) )lam2144 , .env =  envinst2135 } ) ) );
    return ( Unit_7_Unit );
}

static  uint32_t   render_dash_screen2013 (    struct Screen_672 *  screen3444 ) {
    int32_t  w3445 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3444 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3446 = ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen3444 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_2014  temp2015 = ( (struct RenderState_2014) { .f_x = (  from_dash_integral227 ( 0 ) ) , .f_y = (  from_dash_integral227 ( 0 ) ) , .f_fg = ( (struct Color_675) { .tag = Color_675_ColorDefault_t } ) , .f_bg = ( (struct Color_675) { .tag = Color_675_ColorDefault_t } ) , .f_changes = (  from_dash_integral227 ( 0 ) ) } );
    struct RenderState_2014 *  rs3447 = ( &temp2015 );
    ( (  move_dash_cursor_dash_to2016 ) ( (  from_dash_integral227 ( 0 ) ) ,  (  from_dash_integral227 ( 0 ) ) ) );
    struct RangeIter_700  temp2031 =  into_dash_iter702 ( ( (  to705 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub823 ( (  h3446 ) , (  from_dash_integral48 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_283  __cond2032 =  next703 (&temp2031);
        if (  __cond2032 .tag == 0 ) {
            break;
        }
        int32_t  y3449 =  __cond2032 .stuff .Maybe_283_Just_s .field0;
        int32_t  x_dash_v3450 = (  from_dash_integral48 ( 0 ) );
        while ( (  cmp328 ( (  x_dash_v3450 ) , (  w3445 ) ) == 0 ) ) {
            size_t  i3451 = ( (  i32_dash_size273 ) ( (  op_dash_add285 ( (  op_dash_mul1405 ( (  y3449 ) , (  w3445 ) ) ) , (  x_dash_v3450 ) ) ) ) );
            struct Cell_674 *  cur3452 = ( (  get_dash_ptr708 ) ( ( ( * (  screen3444 ) ) .f_current ) ,  (  i3451 ) ) );
            int32_t  char_dash_width3453 = ( (  max975 ) ( ( ( * (  cur3452 ) ) .f_char_dash_width ) ,  (  from_dash_integral48 ( 1 ) ) ) );
            struct Slice_673  curs3454 = ( (  subslice2033 ) ( ( ( * (  screen3444 ) ) .f_current ) ,  (  i3451 ) ,  (  op_dash_add243 ( (  i3451 ) , ( (  i32_dash_size273 ) ( (  char_dash_width3453 ) ) ) ) ) ) );
            struct Slice_673  prevs3455 = ( (  subslice2033 ) ( ( ( * (  screen3444 ) ) .f_previous ) ,  (  i3451 ) ,  (  op_dash_add243 ( (  i3451 ) , ( (  i32_dash_size273 ) ( (  char_dash_width3453 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3444 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any2034 ) ( ( (  zip2049 ) ( (  curs3454 ) ,  (  prevs3455 ) ) ) ,  (  lam2051 ) ) ) ) ) {
                (*  rs3447 ) .f_changes = (  op_dash_add795 ( ( ( * (  rs3447 ) ) .f_changes ) , (  from_dash_integral227 ( 1 ) ) ) );
                ( (  emit_dash_cell2064 ) ( (  rs3447 ) ,  (  cur3452 ) ,  ( (  i32_dash_u322131 ) ( (  x_dash_v3450 ) ) ) ,  ( (  i32_dash_u322131 ) ( (  y3449 ) ) ) ) );
                ( (  copy_dash_to2132 ) ( (  curs3454 ) ,  (  prevs3455 ) ) );
            }
            x_dash_v3450 = (  op_dash_add285 ( (  x_dash_v3450 ) , (  char_dash_width3453 ) ) );
        }
    }
    (*  screen3444 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors621 ) ( ) );
    ( (  flush_dash_stdout624 ) ( ) );
    return ( ( * (  rs3447 ) ) .f_changes );
}

static  void *   cast_dash_ptr2151 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of2152 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed2149 (  ) {
    struct timespec *  temp2150;
    struct timespec *  x570 = (  temp2150 );
    ( ( memset ) ( ( (  cast_dash_ptr2151 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  ( (  size_dash_of2152 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct timespec *   null_dash_ptr2148 (  ) {
    return ( (  zeroed2149 ) ( ) );
}

static  enum Unit_7   sync2145 (    struct Tui_73 *  tui3315 ) {
    if ( (  eq418 ( ( ( * (  tui3315 ) ) .f_target_dash_fps ) , (  from_dash_integral227 ( 0 ) ) ) ) ) {
        return ( Unit_7_Unit );
    }
    int64_t  frame_dash_ns3316 = (  op_dash_div900 ( (  from_dash_integral314 ( 1000000000 ) ) , ( (  size_dash_i64272 ) ( ( (  u32_dash_size686 ) ( ( ( * (  tui3315 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2146 = ( (  undefined660 ) ( ) );
    struct timespec *  now3317 = ( &temp2146 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic662 ) ( ) ) ,  (  now3317 ) ) );
    int64_t  elapsed_dash_ns3318 = (  op_dash_add416 ( (  op_dash_mul241 ( (  op_dash_sub902 ( ( ( * (  now3317 ) ) .tv_sec ) , ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral314 ( 1000000000 ) ) ) ) , (  op_dash_sub902 ( ( ( * (  now3317 ) ) .tv_nsec ) , ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3319 = (  op_dash_sub902 ( (  frame_dash_ns3316 ) , (  elapsed_dash_ns3318 ) ) );
    if ( (  cmp920 ( (  sleep_dash_ns3319 ) , (  from_dash_integral314 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2147 = ( (struct timespec) { .tv_sec = (  from_dash_integral314 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3319 ) } );
        struct timespec *  ts3320 = ( &temp2147 );
        ( ( nanosleep ) ( (  ts3320 ) ,  ( (  null_dash_ptr2148 ) ( ) ) ) );
    }
    struct timespec  temp2153 = ( (  undefined660 ) ( ) );
    struct timespec *  last_dash_sync3321 = ( &temp2153 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic662 ) ( ) ) ,  (  last_dash_sync3321 ) ) );
    (*  tui3315 ) .f_last_dash_sync = ( * (  last_dash_sync3321 ) );
    (*  tui3315 ) .f_fps_dash_count = (  op_dash_add795 ( ( ( * (  tui3315 ) ) .f_fps_dash_count ) , (  from_dash_integral227 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3322 = (  op_dash_add416 ( (  op_dash_mul241 ( (  op_dash_sub902 ( ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3315 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral314 ( 1000 ) ) ) ) , (  op_dash_div900 ( (  op_dash_sub902 ( ( ( ( * (  tui3315 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3315 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral314 ( 1000000 ) ) ) ) ) );
    if ( (  cmp920 ( (  fps_dash_elapsed_dash_ms3322 ) , (  from_dash_integral314 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3315 ) .f_actual_dash_fps = ( ( * (  tui3315 ) ) .f_fps_dash_count );
        (*  tui3315 ) .f_fps_dash_count = (  from_dash_integral227 ( 0 ) );
        (*  tui3315 ) .f_fps_dash_ts = ( ( * (  tui3315 ) ) .f_last_dash_sync );
    }
    return ( Unit_7_Unit );
}

static  void *   cast_dash_ptr2156 (    struct Cell_674 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_7   free2155 (    enum CAllocator_9  dref1959 ,    struct Slice_673  slice1961 ) {
    if (!(  dref1959 == CAllocator_9_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr2156 ) ( ( (  slice1961 ) .f_ptr ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   free_dash_screen2154 (    struct Screen_672 *  screen3420 ) {
    enum CAllocator_9  al3421 = ( ( * (  screen3420 ) ) .f_al );
    ( (  free2155 ) ( (  al3421 ) ,  ( ( * (  screen3420 ) ) .f_current ) ) );
    ( (  free2155 ) ( (  al3421 ) ,  ( ( * (  screen3420 ) ) .f_previous ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   disable_dash_mouse2158 (  ) {
    ( (  print_dash_str206 ) ( ( (  from_dash_string231 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   show_dash_cursor2159 (  ) {
    ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   reset_dash_cursor_dash_position2160 (  ) {
    ( (  print612 ) ( ( (  from_dash_string231 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   disable_dash_raw_dash_mode2161 (    struct Termios_75 *  og_dash_termios3295 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno550 ) ( ) ) ,  ( (  tcsa_dash_flush610 ) ( ) ) ,  ( (  cast_dash_ptr551 ) ( (  og_dash_termios3295 ) ) ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   deinit2157 (    struct Tui_73 *  tui3325 ) {
    ( (  disable_dash_mouse2158 ) ( ) );
    ( (  show_dash_cursor2159 ) ( ) );
    ( (  reset_dash_colors621 ) ( ) );
    ( (  clear_dash_screen622 ) ( ) );
    ( (  reset_dash_cursor_dash_position2160 ) ( ) );
    ( (  disable_dash_raw_dash_mode2161 ) ( ( & ( ( * (  tui3325 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout624 ) ( ) );
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
        .envinst104 = envinst104 ,
    };
    struct env124 envinst124 = {
        .envinst109 = envinst109 ,
        .envinst122 = envinst122 ,
    };
    struct env130 envinst130 = {
        .envinst109 = envinst109 ,
        .envinst104 = envinst104 ,
    };
    struct env133 envinst133 = {
        .envinst122 = envinst122 ,
    };
    struct env135 envinst135 = {
        .envinst111 = envinst111 ,
        .envinst120 = envinst120 ,
    };
    struct env139 envinst139 = {
        .envinst102 = envinst102 ,
    };
    struct env141 envinst141 = {
        .envinst61 = envinst61 ,
    };
    struct env143 envinst143 = {
        .envinst64 = envinst64 ,
    };
    struct env145 envinst145 = {
        .envinst141 = envinst141 ,
    };
    struct env150 envinst150 = {
        .envinst124 = envinst124 ,
        .envinst120 = envinst120 ,
        .envinst133 = envinst133 ,
        .envinst111 = envinst111 ,
        .envinst139 = envinst139 ,
        .envinst135 = envinst135 ,
        .envinst130 = envinst130 ,
        .envinst116 = envinst116 ,
        .envinst143 = envinst143 ,
        .envinst118 = envinst118 ,
    };
    struct env161 envinst161 = {
        .envinst111 = envinst111 ,
        .envinst145 = envinst145 ,
        .envinst114 = envinst114 ,
        .envinst52 = envinst52 ,
        .envinst59 = envinst59 ,
        .envinst150 = envinst150 ,
        .envinst133 = envinst133 ,
    };
    enum CAllocator_9  al4305 = ( (  idc170 ) ( ) );
    struct envunion173  temp172 = ( (struct envunion173){ .fun = (  struct TextBuf_88  (*) (  struct env79*  ,    enum CAllocator_9  ,    struct Pos_20  ) )mk174 , .env =  envinst79 } );
    struct TextBuf_88  temp171 = ( temp172.fun ( &temp172.env ,  (  al4305 ) ,  ( (  mk309 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) ) );
    struct TextBuf_88 *  tb4306 = ( &temp171 );
    struct Slice_310  args4309 = ( (  get311 ) ( ) );
    if ( (  cmp195 ( ( (  args4309 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        const char*  fname4310 = (  elem_dash_get316 ( (  args4309 ) , (  from_dash_integral0 ( 0 ) ) ) );
        struct envunion324  temp323 = ( (struct envunion324){ .fun = (  enum Unit_7  (*) (  struct env85*  ,    struct TextBuf_88 *  ,    struct Pos_20  ,    struct Pos_20  ,    struct StrView_21  ) )change_dash_no_dash_action325 , .env =  envinst85 } );
        ( temp323.fun ( &temp323.env ,  (  tb4306 ) ,  ( (  mk309 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) ,  ( (  mk309 ) ( (  from_dash_integral48 ( 0 ) ) ,  (  from_dash_integral48 ( 0 ) ) ) ) ,  ( (  read_dash_contents515 ) ( (  fname4310 ) ,  (  al4305 ) ) ) ) );
    }
    struct Editor_147  temp540 = ( (struct Editor_147) { .f_running = ( true ) , .f_al = (  al4305 ) , .f_pane = ( (  mk541 ) ( (  al4305 ) ,  (  tb4306 ) ) ) , .f_clipboard = ( (struct Maybe_148) { .tag = Maybe_148_None_t } ) , .f_search_dash_term = ( (struct Maybe_148) { .tag = Maybe_148_None_t } ) , .f_mode = ( (struct EditorMode_149) { .tag = EditorMode_149_Normal_t } ) , .f_msg = ( (struct Maybe_148) { .tag = Maybe_148_None_t } ) } );
    struct Editor_147 *  ed4311 = ( &temp540 );
    struct envunion544  temp543 = ( (struct envunion544){ .fun = (  struct Tui_73  (*) (  struct env69*  ) )mk545 , .env =  envinst69 } );
    struct Tui_73  temp542 = ( temp543.fun ( &temp543.env ) );
    struct Tui_73 *  tui4312 = ( &temp542 );
    struct Screen_672  temp679 = ( (  mk_dash_screen680 ) ( (  tui4312 ) ,  (  al4305 ) ) );
    struct Screen_672 *  screen4313 = ( &temp679 );
    uint32_t  last_dash_redraw_dash_changes4314 = (  from_dash_integral227 ( 0 ) );
    while ( ( ( * (  ed4311 ) ) .f_running ) ) {
        struct env730 envinst730 = {
            .tui4312 =  tui4312 ,
            .envinst71 = envinst71 ,
        };
        struct FunIter_729  temp728 =  into_dash_iter737 ( ( (  from_dash_function738 ) ( ( (struct envunion736){ .fun = (  struct Maybe_732  (*) (  struct env730*  ) )lam739 , .env =  envinst730 } ) ) ) );
        while (true) {
            struct Maybe_732  __cond940 =  next941 (&temp728);
            if (  __cond940 .tag == 0 ) {
                break;
            }
            struct InputEvent_733  ev4316 =  __cond940 .stuff .Maybe_732_Just_s .field0;
            struct InputEvent_733  dref4317 = (  ev4316 );
            if ( dref4317.tag == InputEvent_733_Key_t ) {
                ( (  reset_dash_msg943 ) ( (  ed4311 ) ) );
                struct envunion951  temp950 = ( (struct envunion951){ .fun = (  enum Unit_7  (*) (  struct env161*  ,    struct Editor_147 *  ,    struct Key_168  ) )handle_dash_key952 , .env =  envinst161 } );
                ( temp950.fun ( &temp950.env ,  (  ed4311 ) ,  ( dref4317 .stuff .InputEvent_733_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1570  temp1569 = ( (struct envunion1570){ .fun = (  bool  (*) (  struct env77*  ,    struct Screen_672 *  ) )resize_dash_screen_dash_if_dash_needed1571 , .env =  envinst77 } );
        ( temp1569.fun ( &temp1569.env ,  (  screen4313 ) ) );
        if ( ( (  should_dash_redraw1573 ) ( (  tui4312 ) ) ) ) {
            (*  screen4313 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1574 ) ( (  screen4313 ) ) );
            ( (  set_dash_screen_dash_fg1583 ) ( (  screen4313 ) ,  ( (struct Color_675) { .tag = Color_675_ColorDefault_t } ) ) );
            ( (  set_dash_screen_dash_bg1584 ) ( (  screen4313 ) ,  ( (struct Color_675) { .tag = Color_675_ColorDefault_t } ) ) );
            ( (  render_dash_editor1585 ) ( (  screen4313 ) ,  (  ed4311 ) ) );
            ( (  draw_dash_str1984 ) ( (  screen4313 ) ,  ( ( StrConcat_1985_StrConcat ) ( ( ( StrConcat_1986_StrConcat ) ( ( (  from_dash_string231 ) ( ( "REDRAWS[" ) ,  ( 8 ) ) ) ,  (  last_dash_redraw_dash_changes4314 ) ) ) ,  ( (  from_dash_charlike232 ) ( ( "]" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral48 ( 0 ) ) ,  (  op_dash_sub823 ( ( (  u32_dash_i321587 ) ( ( ( * ( ( * (  screen4313 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral48 ( 1 ) ) ) ) ) );
            last_dash_redraw_dash_changes4314 = ( (  render_dash_screen2013 ) ( (  screen4313 ) ) );
        }
        ( (  sync2145 ) ( (  tui4312 ) ) );
    }
    ( (  free_dash_screen2154 ) ( (  screen4313 ) ) );
    ( (  deinit2157 ) ( (  tui4312 ) ) );
}
