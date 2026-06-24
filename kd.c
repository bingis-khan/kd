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
    size_t  growth_dash_factor2038;
    size_t  starting_dash_size2037;
    ;
    ;
    ;
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
    size_t  growth_dash_factor2038;
    size_t  starting_dash_size2037;
    ;
    ;
    ;
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
    size_t  growth_dash_factor2038;
    size_t  starting_dash_size2037;
    ;
    ;
    ;
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
    size_t  growth_dash_factor2038;
    size_t  starting_dash_size2037;
    ;
    ;
    ;
    ;
    ;
};

struct env5 {
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2038;
    size_t  starting_dash_size2037;
    ;
    ;
    ;
    ;
    ;
};

enum Unit_8 {
    Unit_8_Unit,
};

enum CAllocator_10 {
    CAllocator_10_CAllocator,
};

struct Slice_14 {
    uint8_t *  f_ptr;
    size_t  f_count;
};

struct List_13 {
    enum CAllocator_10  f_al;
    struct Slice_14  f_elements;
    size_t  f_count;
};

enum HighlightType_18 {
    HighlightType_18_Number,
    HighlightType_18_String,
    HighlightType_18_Comment,
    HighlightType_18_Ident1,
    HighlightType_18_Ident2,
    HighlightType_18_Ident3,
    HighlightType_18_Ident4,
    HighlightType_18_Keyword1,
    HighlightType_18_Keyword2,
    HighlightType_18_Special1,
    HighlightType_18_Special2,
    HighlightType_18_Invalid,
};

struct Highlight_17 {
    enum HighlightType_18  f_type;
    int32_t  f_from;
    int32_t  f_to;
};

struct Slice_16 {
    struct Highlight_17 *  f_ptr;
    size_t  f_count;
};

struct List_15 {
    enum CAllocator_10  f_al;
    struct Slice_16  f_elements;
    size_t  f_count;
};

struct Line_12 {
    struct List_13  f_line;
    bool  f_invalidated;
    struct List_15  f_highlights;
};

struct Slice_11 {
    struct Line_12 *  f_ptr;
    size_t  f_count;
};

struct List_9 {
    enum CAllocator_10  f_al;
    struct Slice_11  f_elements;
    size_t  f_count;
};

struct envunion7 {
    enum Unit_8  (*fun) (  struct env1*  ,    struct List_9 *  );
    struct env1 env;
};

struct env6 {
    ;
    ;
    ;
    ;
    ;
    struct env1 envinst1;
};

struct envunion20 {
    enum Unit_8  (*fun) (  struct env2*  ,    struct List_13 *  );
    struct env2 env;
};

struct env19 {
    ;
    ;
    ;
    ;
    ;
    struct env2 envinst2;
};

struct Pos_26 {
    int32_t  f_line;
    int32_t  f_bi;
};

struct StrView_27 {
    struct Slice_14  f_contents;
};

struct Action_25 {
    struct Pos_26  f_from;
    struct StrView_27  f_fwd;
    struct Pos_26  f_to_dash_fwd;
    struct StrView_27  f_bwd;
    struct Pos_26  f_to_dash_bwd;
};

struct Slice_24 {
    struct Action_25 *  f_ptr;
    size_t  f_count;
};

struct List_23 {
    enum CAllocator_10  f_al;
    struct Slice_24  f_elements;
    size_t  f_count;
};

struct envunion22 {
    enum Unit_8  (*fun) (  struct env3*  ,    struct List_23 *  );
    struct env3 env;
};

struct env21 {
    ;
    ;
    ;
    ;
    ;
    struct env3 envinst3;
};

struct Maybe_34 {
    enum {
        Maybe_34_None_t,
        Maybe_34_Just_t,
    } tag;
    union {
        struct {
            struct Pos_26  field0;
        } Maybe_34_Just_s;
    } stuff;
};

static struct Maybe_34 Maybe_34_Just (  struct Pos_26  field0 ) {
    return ( struct Maybe_34 ) { .tag = Maybe_34_Just_t, .stuff = { .Maybe_34_Just_s = { .field0 = field0 } } };
};

struct Cursors_33 {
    struct Pos_26  f_cur;
    struct Maybe_34  f_sel;
};

struct Changeset_32 {
    struct List_23  f_parts;
    struct Cursors_33  f_before_dash_cursors;
};

struct Slice_31 {
    struct Changeset_32 *  f_ptr;
    size_t  f_count;
};

struct List_30 {
    enum CAllocator_10  f_al;
    struct Slice_31  f_elements;
    size_t  f_count;
};

struct envunion29 {
    enum Unit_8  (*fun) (  struct env4*  ,    struct List_30 *  );
    struct env4 env;
};

struct env28 {
    ;
    ;
    ;
    ;
    ;
    struct env4 envinst4;
};

struct envunion36 {
    enum Unit_8  (*fun) (  struct env5*  ,    struct List_15 *  );
    struct env5 env;
};

struct env35 {
    ;
    ;
    ;
    ;
    ;
    struct env5 envinst5;
};

struct envunion38 {
    enum Unit_8  (*fun) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  );
    struct env6 env;
};

struct envunion39 {
    enum Unit_8  (*fun) (  struct env1*  ,    struct List_9 *  );
    struct env1 env;
};

struct env37 {
    struct env6 envinst6;
    ;
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

struct env40 {
    size_t  shrink_dash_factor2039;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct env41 {
    size_t  shrink_dash_factor2039;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct envunion43 {
    enum Unit_8  (*fun) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  );
    struct env40 env;
};

struct env42 {
    ;
    ;
    ;
    ;
    struct env40 envinst40;
};

struct envunion45 {
    enum Unit_8  (*fun) (  struct env42*  ,    struct List_13 *  ,    size_t  );
    struct env42 env;
};

struct env44 {
    struct env42 envinst42;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion47 {
    enum Unit_8  (*fun) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  );
    struct env6 env;
};

struct env46 {
    ;
    struct env6 envinst6;
    ;
    ;
    ;
    ;
};

struct envunion49 {
    enum Unit_8  (*fun) (  struct env19*  ,    struct List_13 *  ,    uint8_t  );
    struct env19 env;
};

struct env48 {
    ;
    struct env19 envinst19;
    ;
    ;
    ;
    ;
};

struct Array_52 {
    struct Line_12 _arr [1];
};

struct envunion51 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Array_52  );
    struct env46 env;
};

struct env50 {
    ;
    ;
    struct env46 envinst46;
    ;
    ;
    ;
};

struct envunion54 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct env53 {
    ;
    ;
    struct env48 envinst48;
    ;
    ;
    ;
};

static  int32_t   from_dash_integral56 (    int64_t  x49 ) {
    return ( (int32_t ) (  x49 ) );
}

static  int32_t   lc_dash_ctype55 (  ) {
    return (  from_dash_integral56 ( 0 ) );
}

static  const char*   from_dash_string57 (    uint8_t *  ptr82 ,    size_t  dref83 ) {
    return ( ( (const char* ) (  ptr82 ) ) );
}

struct envunion59 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct env58 {
    struct env48 envinst48;
    ;
    ;
};

struct StrBuilder_62 {
    struct List_13  f_chars;
};

struct envunion61 {
    enum Unit_8  (*fun) (  struct env58*  ,    struct StrBuilder_62 *  ,    struct Slice_14  );
    struct env58 env;
};

struct env60 {
    struct env58 envinst58;
    ;
    ;
    ;
};

struct Char_65 {
    uint8_t *  f_ptr;
    size_t  f_num_dash_bytes;
};

struct envunion64 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

struct env63 {
    ;
    struct env60 envinst60;
    ;
    ;
    ;
    ;
    ;
};

struct env66 {
    ;
    struct env60 envinst60;
    ;
    ;
    ;
    ;
    ;
};

struct envunion68 {
    enum Unit_8  (*fun) (  struct env44*  ,    struct List_13 *  );
    struct env44 env;
};

struct env67 {
    struct env44 envinst44;
    ;
    ;
};

struct envunion70 {
    enum Unit_8  (*fun) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrView_27  );
    struct env63 env;
};

struct envunion71 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

struct env69 {
    ;
    struct env63 envinst63;
    ;
    ;
    ;
    ;
    ;
    struct env60 envinst60;
    ;
    ;
    ;
    ;
};

struct StrConcat_75 {
    struct StrView_27  field0;
    size_t  field1;
};

static struct StrConcat_75 StrConcat_75_StrConcat (  struct StrView_27  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_75 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_74 {
    struct StrConcat_75  field0;
    struct StrView_27  field1;
};

static struct StrConcat_74 StrConcat_74_StrConcat (  struct StrConcat_75  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_74 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion73 {
    enum Unit_8  (*fun) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrConcat_74  );
    struct env66 env;
};

struct env72 {
    ;
    struct env66 envinst66;
    ;
    ;
    ;
    ;
    struct env60 envinst60;
    ;
    ;
    ;
    ;
    ;
};

struct env77 {
    ;
    ;
    ;
    ;
    bool *  should_dash_resize3349;
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

struct env78 {
    ;
    ;
    bool *  should_dash_resize3349;
    ;
};

enum ColorPalette_82 {
    ColorPalette_82_Palette8,
    ColorPalette_82_Palette16,
    ColorPalette_82_Palette256,
    ColorPalette_82_PaletteRGB,
};

struct Array_84 {
    uint8_t _arr [32];
};

struct Termios_83 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_84  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

struct Tui_81 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_82  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_83  f_orig_dash_termios;
    bool  f_should_dash_redraw;
};

struct envunion80 {
    bool  (*fun) (  struct env78*  ,    struct Tui_81 *  );
    struct env78 env;
};

struct env79 {
    struct env78 envinst78;
    ;
};

struct envunion86 {
    bool  (*fun) (  struct env78*  ,    struct Tui_81 *  );
    struct env78 env;
};

struct env85 {
    struct env78 envinst78;
    ;
    ;
    ;
    ;
    ;
};

struct envunion88 {
    struct List_9  (*fun) (  struct env50*  ,    struct Array_52  ,    enum CAllocator_10  );
    struct env50 env;
};

struct env87 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env50 envinst50;
};

struct envunion90 {
    enum Unit_8  (*fun) (  struct env37*  ,    struct List_9 *  ,    size_t  ,    struct Line_12  );
    struct env37 env;
};

struct envunion91 {
    struct List_13  (*fun) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  );
    struct env53 env;
};

struct envunion92 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct env89 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env37 envinst37;
    struct env53 envinst53;
    struct env48 envinst48;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct envunion94 {
    enum Unit_8  (*fun) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  );
    struct env6 env;
};

struct envunion95 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion96 {
    enum Unit_8  (*fun) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  );
    struct env40 env;
};

struct envunion97 {
    enum Unit_8  (*fun) (  struct env41*  ,    struct List_9 *  ,    size_t  ,    size_t  );
    struct env41 env;
};

enum ChangesetInputType_101 {
    ChangesetInputType_101_NoChangeset,
    ChangesetInputType_101_InputChangeset,
    ChangesetInputType_101_CustomChangeset,
};

struct Actions_100 {
    struct List_30  f_list;
    size_t  f_cur;
    enum ChangesetInputType_101  f_input_dash_changeset;
};

struct TextBuf_99 {
    enum CAllocator_10  f_al;
    struct List_9  f_buf;
    struct Actions_100  f_actions;
};

struct envunion98 {
    int32_t  (*fun) (  struct env89*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env89 env;
};

struct env93 {
    struct env6 envinst6;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env48 envinst48;
    ;
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
    struct env41 envinst41;
    ;
    ;
    ;
    struct env89 envinst89;
    ;
    ;
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

struct envunion103 {
    enum Unit_8  (*fun) (  struct env93*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
    struct env93 env;
};

struct env102 {
    ;
    ;
    ;
    ;
    struct env93 envinst93;
};

struct envunion105 {
    enum Unit_8  (*fun) (  struct env93*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
    struct env93 env;
};

struct env104 {
    ;
    ;
    ;
    ;
    struct env93 envinst93;
};

struct envunion107 {
    struct Pos_26  (*fun) (  struct env102*  ,    struct TextBuf_99 *  ,    struct Action_25  );
    struct env102 env;
};

struct env106 {
    ;
    ;
    ;
    ;
    ;
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

struct envunion109 {
    struct Pos_26  (*fun) (  struct env104*  ,    struct TextBuf_99 *  ,    struct Action_25  );
    struct env104 env;
};

struct env108 {
    ;
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
    ;
    ;
    ;
    ;
};

struct envunion111 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct env110 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env48 envinst48;
    ;
    ;
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

struct envunion113 {
    enum Unit_8  (*fun) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  );
    struct env21 env;
};

struct envunion114 {
    enum Unit_8  (*fun) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  );
    struct env28 env;
};

struct envunion115 {
    struct StrView_27  (*fun) (  struct env110*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  );
    struct env110 env;
};

struct envunion116 {
    struct Pos_26  (*fun) (  struct env104*  ,    struct TextBuf_99 *  ,    struct Action_25  );
    struct env104 env;
};

struct env112 {
    struct env21 envinst21;
    struct env28 envinst28;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env110 envinst110;
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion118 {
    enum Unit_8  (*fun) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  );
    struct env28 env;
};

struct env117 {
    struct env28 envinst28;
    ;
    ;
    ;
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

struct envunion120 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct env119 {
    struct env35 envinst35;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct envunion122 {
    enum Unit_8  (*fun) (  struct env119*  ,    struct TextBuf_99 *  ,    struct Line_12 *  );
    struct env119 env;
};

struct env121 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env119 envinst119;
    ;
    ;
};

struct Maybe_125 {
    enum {
        Maybe_125_None_t,
        Maybe_125_Just_t,
    } tag;
    union {
        struct {
            enum HighlightType_18  field0;
        } Maybe_125_Just_s;
    } stuff;
};

static struct Maybe_125 Maybe_125_Just (  enum HighlightType_18  field0 ) {
    return ( struct Maybe_125 ) { .tag = Maybe_125_Just_t, .stuff = { .Maybe_125_Just_s = { .field0 = field0 } } };
};

struct envunion124 {
    struct Maybe_125  (*fun) (  struct env121*  ,    struct TextBuf_99 *  ,    struct Pos_26  );
    struct env121 env;
};

struct env123 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    ;
    ;
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

struct Maybe_128 {
    enum {
        Maybe_128_None_t,
        Maybe_128_Just_t,
    } tag;
    union {
        struct {
            struct Cursors_33  field0;
        } Maybe_128_Just_s;
    } stuff;
};

static struct Maybe_128 Maybe_128_Just (  struct Cursors_33  field0 ) {
    return ( struct Maybe_128 ) { .tag = Maybe_128_Just_t, .stuff = { .Maybe_128_Just_s = { .field0 = field0 } } };
};

struct envunion127 {
    struct Maybe_128  (*fun) (  struct env112*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_128  );
    struct env112 env;
};

struct env126 {
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

struct envunion130 {
    struct Maybe_128  (*fun) (  struct env112*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_128  );
    struct env112 env;
};

struct env129 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env112 envinst112;
    ;
    ;
};

struct envunion132 {
    struct Maybe_128  (*fun) (  struct env106*  ,    struct TextBuf_99 *  );
    struct env106 env;
};

struct env131 {
    ;
    ;
    ;
    ;
    struct env106 envinst106;
    ;
    ;
};

struct envunion134 {
    struct Maybe_128  (*fun) (  struct env108*  ,    struct TextBuf_99 *  );
    struct env108 env;
};

struct env133 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env108 envinst108;
};

struct envunion136 {
    struct Maybe_128  (*fun) (  struct env112*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_128  );
    struct env112 env;
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
    struct env112 envinst112;
    ;
    ;
    ;
    ;
};

struct envunion138 {
    struct Maybe_128  (*fun) (  struct env112*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_128  );
    struct env112 env;
};

struct env137 {
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
    ;
};

enum Mode_142 {
    Mode_142_Normal,
    Mode_142_Insert,
    Mode_142_Select,
};

struct ScreenCursorOffset_143 {
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
};

struct Pane_141 {
    struct TextBuf_99 *  f_buf;
    struct Pos_26  f_cursor;
    int32_t  f_vi;
    struct Maybe_34  f_sel;
    enum Mode_142  f_mode;
    struct ScreenCursorOffset_143  f_sc_dash_off;
};

struct envunion140 {
    enum Unit_8  (*fun) (  struct env137*  ,    struct Pane_141 *  ,    int32_t  );
    struct env137 env;
};

struct envunion144 {
    enum Unit_8  (*fun) (  struct env117*  ,    struct TextBuf_99 *  ,    struct Cursors_33  );
    struct env117 env;
};

struct env139 {
    ;
    ;
    ;
    ;
    ;
    struct env137 envinst137;
    ;
    ;
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
};

struct envunion146 {
    struct Maybe_128  (*fun) (  struct env112*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_128  );
    struct env112 env;
};

struct envunion147 {
    enum Unit_8  (*fun) (  struct env117*  ,    struct TextBuf_99 *  ,    struct Cursors_33  );
    struct env117 env;
};

struct env145 {
    ;
    ;
    ;
    ;
    ;
    ;
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
    ;
    ;
    ;
    struct env117 envinst117;
    ;
    ;
    ;
    ;
};

struct envunion149 {
    enum Unit_8  (*fun) (  struct env137*  ,    struct Pane_141 *  ,    int32_t  );
    struct env137 env;
};

struct env148 {
    ;
    ;
    ;
    ;
    ;
    struct env137 envinst137;
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
    enum Unit_8  (*fun) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  );
    struct env126 env;
};

struct Tuple2_153 {
    struct Pos_26  field0;
    struct Pos_26  field1;
};

static struct Tuple2_153 Tuple2_153_Tuple2 (  struct Pos_26  field0 ,  struct Pos_26  field1 ) {
    return ( struct Tuple2_153 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion152 {
    enum Unit_8  (*fun) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_153  ,    struct StrView_27  );
    struct env135 env;
};

struct envunion154 {
    enum Unit_8  (*fun) (  struct env117*  ,    struct TextBuf_99 *  ,    struct Cursors_33  );
    struct env117 env;
};

struct env150 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env126 envinst126;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    struct env117 envinst117;
    ;
    ;
    ;
};

struct envunion156 {
    struct StrView_27  (*fun) (  struct env110*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  );
    struct env110 env;
};

struct env155 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env110 envinst110;
};

struct envunion158 {
    struct StrView_27  (*fun) (  struct env69*  ,    struct StrView_27  ,    enum CAllocator_10  );
    struct env69 env;
};

struct env157 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env69 envinst69;
};

struct envunion160 {
    struct StrView_27  (*fun) (  struct env72*  ,    struct StrConcat_74  ,    enum CAllocator_10  );
    struct env72 env;
};

struct env159 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env72 envinst72;
};

struct Maybe_164 {
    enum {
        Maybe_164_None_t,
        Maybe_164_Just_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } Maybe_164_Just_s;
    } stuff;
};

static struct Maybe_164 Maybe_164_Just (  struct StrView_27  field0 ) {
    return ( struct Maybe_164 ) { .tag = Maybe_164_Just_t, .stuff = { .Maybe_164_Just_s = { .field0 = field0 } } };
};

struct EditorMode_165 {
    enum {
        EditorMode_165_Normal_t,
        EditorMode_165_Cmd_t,
        EditorMode_165_Search_t,
    } tag;
    union {
        struct {
            struct Pos_26  field0;
            struct StrBuilder_62  field1;
        } EditorMode_165_Cmd_s;
        struct {
            struct Pos_26  field0;
            struct StrBuilder_62  field1;
        } EditorMode_165_Search_s;
    } stuff;
};

static struct EditorMode_165 EditorMode_165_Cmd (  struct Pos_26  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct EditorMode_165 ) { .tag = EditorMode_165_Cmd_t, .stuff = { .EditorMode_165_Cmd_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct EditorMode_165 EditorMode_165_Search (  struct Pos_26  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct EditorMode_165 ) { .tag = EditorMode_165_Search_t, .stuff = { .EditorMode_165_Search_s = { .field0 = field0 ,  .field1 = field1 } } };
};

struct Editor_163 {
    enum CAllocator_10  f_al;
    bool  f_running;
    struct Pane_141  f_pane;
    struct Maybe_164  f_clipboard;
    struct Maybe_164  f_search_dash_term;
    struct EditorMode_165  f_mode;
    struct Maybe_164  f_msg;
};

struct envunion162 {
    enum Unit_8  (*fun) (  struct env157*  ,    struct Editor_163 *  ,    struct StrView_27  );
    struct env157 env;
};

struct env161 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env157 envinst157;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion167 {
    enum Unit_8  (*fun) (  struct env133*  ,    struct Pane_141 *  );
    struct env133 env;
};

struct envunion168 {
    enum Unit_8  (*fun) (  struct env139*  ,    struct Pane_141 *  );
    struct env139 env;
};

struct envunion169 {
    enum Unit_8  (*fun) (  struct env155*  ,    struct Editor_163 *  );
    struct env155 env;
};

struct envunion170 {
    enum Unit_8  (*fun) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_153  ,    struct StrView_27  );
    struct env135 env;
};

struct envunion171 {
    enum Unit_8  (*fun) (  struct env148*  ,    struct Pane_141 *  ,    int32_t  );
    struct env148 env;
};

struct envunion172 {
    enum Unit_8  (*fun) (  struct env159*  ,    struct Editor_163 *  ,    struct StrConcat_74  );
    struct env159 env;
};

struct envunion173 {
    enum Unit_8  (*fun) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  );
    struct env126 env;
};

struct envunion174 {
    enum Unit_8  (*fun) (  struct env150*  ,    struct Pane_141 *  );
    struct env150 env;
};

struct envunion175 {
    enum Unit_8  (*fun) (  struct env145*  ,    struct Pane_141 *  );
    struct env145 env;
};

struct envunion176 {
    enum Unit_8  (*fun) (  struct env131*  ,    struct Pane_141 *  );
    struct env131 env;
};

struct env166 {
    ;
    ;
    ;
    struct env133 envinst133;
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
    ;
    ;
    ;
    ;
    ;
    struct env155 envinst155;
    struct env135 envinst135;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env148 envinst148;
    ;
    ;
    struct env159 envinst159;
    ;
    ;
    struct env126 envinst126;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env150 envinst150;
    ;
    ;
    struct env145 envinst145;
    ;
    ;
    struct env131 envinst131;
    ;
};

struct envunion178 {
    enum Unit_8  (*fun) (  struct env148*  ,    struct Pane_141 *  ,    int32_t  );
    struct env148 env;
};

struct envunion179 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

struct envunion180 {
    enum Unit_8  (*fun) (  struct env67*  ,    struct StrBuilder_62 *  );
    struct env67 env;
};

struct envunion181 {
    enum Unit_8  (*fun) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  );
    struct env126 env;
};

struct Key_183 {
    enum {
        Key_183_Escape_t,
        Key_183_Enter_t,
        Key_183_Tab_t,
        Key_183_Backspace_t,
        Key_183_Char_t,
        Key_183_Ctrl_t,
        Key_183_Up_t,
        Key_183_Down_t,
        Key_183_Left_t,
        Key_183_Right_t,
        Key_183_Home_t,
        Key_183_End_t,
        Key_183_PageUp_t,
        Key_183_PageDown_t,
        Key_183_Delete_t,
        Key_183_Insert_t,
        Key_183_F1_t,
        Key_183_F2_t,
        Key_183_F3_t,
        Key_183_F4_t,
        Key_183_F5_t,
        Key_183_F6_t,
        Key_183_F7_t,
        Key_183_F8_t,
        Key_183_F9_t,
        Key_183_F10_t,
        Key_183_F11_t,
        Key_183_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_183_Char_s;
        struct {
            char  field0;
        } Key_183_Ctrl_s;
    } stuff;
};

static struct Key_183 Key_183_Char (  char  field0 ) {
    return ( struct Key_183 ) { .tag = Key_183_Char_t, .stuff = { .Key_183_Char_s = { .field0 = field0 } } };
};

static struct Key_183 Key_183_Ctrl (  char  field0 ) {
    return ( struct Key_183 ) { .tag = Key_183_Ctrl_t, .stuff = { .Key_183_Ctrl_s = { .field0 = field0 } } };
};

struct envunion182 {
    enum Unit_8  (*fun) (  struct env166*  ,    struct Editor_163 *  ,    struct Key_183  );
    struct env166 env;
};

struct envunion184 {
    enum Unit_8  (*fun) (  struct env129*  ,    struct Pane_141 *  );
    struct env129 env;
};

struct envunion185 {
    enum Unit_8  (*fun) (  struct env161*  ,    struct Editor_163 *  ,    struct StrView_27  );
    struct env161 env;
};

struct env177 {
    ;
    struct env148 envinst148;
    ;
    ;
    struct env60 envinst60;
    ;
    struct env67 envinst67;
    ;
    struct env126 envinst126;
    struct env166 envinst166;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env129 envinst129;
    ;
    ;
    ;
    ;
    struct env161 envinst161;
    ;
    ;
    ;
};

enum Color8_192 {
    Color8_192_Black8,
    Color8_192_Red8,
    Color8_192_Green8,
    Color8_192_Yellow8,
    Color8_192_Blue8,
    Color8_192_Magenta8,
    Color8_192_Cyan8,
    Color8_192_White8,
};

enum Color16_193 {
    Color16_193_Black16,
    Color16_193_Red16,
    Color16_193_Green16,
    Color16_193_Yellow16,
    Color16_193_Blue16,
    Color16_193_Magenta16,
    Color16_193_Cyan16,
    Color16_193_White16,
    Color16_193_BrightBlack16,
    Color16_193_BrightRed16,
    Color16_193_BrightGreen16,
    Color16_193_BrightYellow16,
    Color16_193_BrightBlue16,
    Color16_193_BrightMagenta16,
    Color16_193_BrightCyan16,
    Color16_193_BrightWhite16,
};

struct RGB_194 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_191 {
    enum {
        Color_191_ColorDefault_t,
        Color_191_Color8_t,
        Color_191_Color16_t,
        Color_191_Color256_t,
        Color_191_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_192  field0;
        } Color_191_Color8_s;
        struct {
            enum Color16_193  field0;
        } Color_191_Color16_s;
        struct {
            uint8_t  field0;
        } Color_191_Color256_s;
        struct {
            struct RGB_194  field0;
        } Color_191_ColorRGB_s;
    } stuff;
};

static struct Color_191 Color_191_Color8 (  enum Color8_192  field0 ) {
    return ( struct Color_191 ) { .tag = Color_191_Color8_t, .stuff = { .Color_191_Color8_s = { .field0 = field0 } } };
};

static struct Color_191 Color_191_Color16 (  enum Color16_193  field0 ) {
    return ( struct Color_191 ) { .tag = Color_191_Color16_t, .stuff = { .Color_191_Color16_s = { .field0 = field0 } } };
};

static struct Color_191 Color_191_Color256 (  uint8_t  field0 ) {
    return ( struct Color_191 ) { .tag = Color_191_Color256_t, .stuff = { .Color_191_Color256_s = { .field0 = field0 } } };
};

static struct Color_191 Color_191_ColorRGB (  struct RGB_194  field0 ) {
    return ( struct Color_191 ) { .tag = Color_191_ColorRGB_t, .stuff = { .Color_191_ColorRGB_s = { .field0 = field0 } } };
};

struct Cell_190 {
    struct Char_65  f_c;
    struct Color_191  f_fg;
    struct Color_191  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_189 {
    struct Cell_190 *  f_ptr;
    size_t  f_count;
};

struct Screen_188 {
    enum CAllocator_10  f_al;
    struct Tui_81 *  f_tui;
    struct Slice_189  f_current;
    struct Slice_189  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_191  f_default_dash_fg;
    struct Color_191  f_default_dash_bg;
};

struct ScreenDims_195 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

struct envunion187 {
    enum Unit_8  (*fun) (  struct env123*  ,    struct Screen_188 *  ,    struct Pane_141 *  ,    struct ScreenDims_195  );
    struct env123 env;
};

struct env186 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  enum CAllocator_10   idc196 (  ) {
    return ( CAllocator_10_CAllocator );
}

struct envunion199 {
    struct TextBuf_99  (*fun) (  struct env87*  ,    enum CAllocator_10  ,    struct Pos_26  );
    struct env87 env;
};

static  void *   cast_dash_ptr209 (    struct Line_12 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of210 (    struct Line_12 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Line_12 *   zeroed207 (  ) {
    struct Line_12 *  temp208;
    struct Line_12 *  x570 = (  temp208 );
    ( ( memset ) ( ( (  cast_dash_ptr209 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of210 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Line_12 *   null_dash_ptr206 (  ) {
    return ( (  zeroed207 ) ( ) );
}

static  struct Slice_11   empty205 (  ) {
    return ( (struct Slice_11) { .f_ptr = ( (  null_dash_ptr206 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_9   mk204 (    enum CAllocator_10  al2032 ) {
    struct Slice_11  elements2033 = ( (  empty205 ) ( ) );
    return ( (struct List_9) { .f_al = (  al2032 ) , .f_elements = (  elements2033 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env214 {
    struct env6 envinst6;
    struct List_9 *  list2099;
};

struct envunion215 {
    enum Unit_8  (*fun) (  struct env214*  ,    struct Line_12  );
    struct env214 env;
};

struct ArrayIter_216 {
    struct Array_52  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_216   into_dash_iter218 (    struct Array_52  self2323 ) {
    return ( (struct ArrayIter_216) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_219 {
    enum {
        Maybe_219_None_t,
        Maybe_219_Just_t,
    } tag;
    union {
        struct {
            struct Line_12  field0;
        } Maybe_219_Just_s;
    } stuff;
};

static struct Maybe_219 Maybe_219_Just (  struct Line_12  field0 ) {
    return ( struct Maybe_219 ) { .tag = Maybe_219_Just_t, .stuff = { .Maybe_219_Just_s = { .field0 = field0 } } };
};

enum Ordering_222 {
    Ordering_222_LT,
    Ordering_222_EQ,
    Ordering_222_GT,
};

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_222   cmp221 (    size_t  l179 ,    size_t  r181 ) {
    return ( builtin_size_tcmp( (  l179 ) , (  r181 ) ) );
}

struct StrConcat_227 {
    struct StrConcat_74  field0;
    int32_t  field1;
};

static struct StrConcat_227 StrConcat_227_StrConcat (  struct StrConcat_74  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_227 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_226 {
    struct StrConcat_227  field0;
    struct Char_65  field1;
};

static struct StrConcat_226 StrConcat_226_StrConcat (  struct StrConcat_227  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_226 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_230 {
    struct StrView_27  field0;
    struct StrConcat_226  field1;
};

static struct StrConcat_230 StrConcat_230_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_226  field1 ) {
    return ( struct StrConcat_230 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_229 {
    struct StrConcat_230  field0;
    struct Char_65  field1;
};

static struct StrConcat_229 StrConcat_229_StrConcat (  struct StrConcat_230  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_229 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32233 (    size_t  x630 ) {
    return ( (int32_t ) (  x630 ) );
}

static  enum Unit_8   print_dash_str232 (    struct StrView_27  self1379 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32233 ) ( ( ( (  self1379 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1379 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str238 (    size_t  self1470 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1470 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str237 (    struct StrConcat_75  self1509 ) {
    struct StrConcat_75  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str232 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str238 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str236 (    struct StrConcat_74  self1509 ) {
    struct StrConcat_74  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str237 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str232 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str239 (    int32_t  self1446 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1446 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str235 (    struct StrConcat_227  self1509 ) {
    struct StrConcat_227  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str236 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str239 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

struct Scalar_243 {
    uint32_t  f_value;
};

struct CharDestructured_242 {
    enum {
        CharDestructured_242_Ref_t,
        CharDestructured_242_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } CharDestructured_242_Ref_s;
        struct {
            struct Scalar_243  field0;
        } CharDestructured_242_Scalar_s;
    } stuff;
};

static struct CharDestructured_242 CharDestructured_242_Ref (  struct Char_65  field0 ) {
    return ( struct CharDestructured_242 ) { .tag = CharDestructured_242_Ref_t, .stuff = { .CharDestructured_242_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_242 CharDestructured_242_Scalar (  struct Scalar_243  field0 ) {
    return ( struct CharDestructured_242 ) { .tag = CharDestructured_242_Scalar_t, .stuff = { .CharDestructured_242_Scalar_s = { .field0 = field0 } } };
};

static  bool   eq245 (    uint8_t  l116 ,    uint8_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint8_t   size_dash_u8247 (    size_t  x639 ) {
    return ( (uint8_t ) (  x639 ) );
}

static  size_t   op_dash_div248 (    size_t  l285 ,    size_t  r287 ) {
    return ( (  l285 ) / (  r287 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer246 (    uint8_t *  ptr678 ) {
    return ( (  size_dash_u8247 ) ( (  op_dash_div248 ( ( ( (size_t ) (  ptr678 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint8_t   from_dash_integral249 (    int64_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  uint32_t   size_dash_u32250 (    size_t  x633 ) {
    return ( (uint32_t ) (  x633 ) );
}

static  size_t   cast251 (    uint8_t *  x356 ) {
    return ( (size_t ) (  x356 ) );
}

static  struct CharDestructured_242   destructure244 (    struct Char_65  c712 ) {
    if ( (  eq245 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer246 ) ( ( (  c712 ) .f_ptr ) ) ) , (  from_dash_integral249 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_242_Scalar ) ( ( (struct Scalar_243) { .f_value = ( (  size_dash_u32250 ) ( ( ( (  cast251 ) ( ( (  c712 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_242_Ref ) ( (  c712 ) ) );
    }
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_222   cmp252 (    uint32_t  l164 ,    uint32_t  r166 ) {
    return ( builtin_uint32_tcmp( (  l164 ) , (  r166 ) ) );
}

static  uint32_t   from_dash_integral253 (    int64_t  x52 ) {
    return ( (uint32_t ) (  x52 ) );
}

static  uint8_t   cast256 (    uint32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  uint8_t   u32_dash_u8255 (    uint32_t  x657 ) {
    return ( (  cast256 ) ( (  x657 ) ) );
}

static  enum Unit_8   printf_dash_char241 (    struct Char_65  c758 ) {
    struct CharDestructured_242  dref759 = ( (  destructure244 ) ( (  c758 ) ) );
    if ( dref759.tag == CharDestructured_242_Ref_t ) {
        ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32233 ) ( ( ( dref759 .stuff .CharDestructured_242_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref759 .stuff .CharDestructured_242_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref759.tag == CharDestructured_242_Scalar_t ) {
            if ( (  cmp252 ( ( ( dref759 .stuff .CharDestructured_242_Scalar_s .field0 ) .f_value ) , (  from_dash_integral253 ( 127 ) ) ) == 2 ) ) {
                const char*  temp254 = ( (  from_dash_string57 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp254);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8255 ) ( ( ( dref759 .stuff .CharDestructured_242_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str240 (    struct Char_65  self1410 ) {
    ( (  printf_dash_char241 ) ( (  self1410 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str234 (    struct StrConcat_226  self1509 ) {
    struct StrConcat_226  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str235 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str240 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str231 (    struct StrConcat_230  self1509 ) {
    struct StrConcat_230  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str232 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str234 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str228 (    struct StrConcat_229  self1509 ) {
    struct StrConcat_229  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str231 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str240 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  struct StrView_27   from_dash_string257 (    uint8_t *  ptr86 ,    size_t  count88 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = (  ptr86 ) , .f_count = (  count88 ) } ) } );
}

static  uint8_t *   cast259 (    uint8_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_222   cmp262 (    uint8_t  l169 ,    uint8_t  r171 ) {
    return ( builtin_uint8_tcmp( (  l169 ) , (  r171 ) ) );
}

static  size_t   next_dash_char261 (    uint8_t *  p688 ) {
    uint8_t  pb689 = ( * (  p688 ) );
    if ( (  cmp262 ( (  pb689 ) , (  from_dash_integral249 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp262 ( (  pb689 ) , (  from_dash_integral249 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp262 ( (  pb689 ) , (  from_dash_integral249 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp262 ( (  pb689 ) , (  from_dash_integral249 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp263 = ( (  from_dash_string57 ) ( ( "(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp263);
                    exit ( 1 );
                    ( Unit_8_Unit );
                }
            }
        }
    }
}

static  struct Char_65   scan_dash_from_dash_mem260 (    uint8_t *  p700 ) {
    size_t  clen701 = ( (  next_dash_char261 ) ( (  p700 ) ) );
    if ( (  cmp221 ( (  clen701 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp264 = ( (  from_dash_string57 ) ( ( "UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp264);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( (struct Char_65) { .f_ptr = (  p700 ) , .f_num_dash_bytes = (  clen701 ) } );
}

static  struct Char_65   from_dash_charlike258 (    uint8_t *  ptr704 ,    size_t  num_dash_bytes706 ) {
    uint8_t *  ptr707 = ( ( (  cast259 ) ( (  ptr704 ) ) ) );
    return ( (  scan_dash_from_dash_mem260 ) ( (  ptr707 ) ) );
}

static  enum Unit_8   panic225 (    struct StrConcat_226  errmsg1713 ) {
    ( (  print_dash_str228 ) ( ( ( StrConcat_229_StrConcat ) ( ( ( StrConcat_230_StrConcat ) ( ( (  from_dash_string257 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Line_12 *   cast_dash_ptr265 (    struct Array_52 *  p359 ) {
    return ( (struct Line_12 * ) (  p359 ) );
}

static  int64_t   op_dash_mul267 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) * (  r196 ) );
}

static  struct Line_12 *   offset_dash_ptr266 (    struct Line_12 *  x338 ,    int64_t  count340 ) {
    struct Line_12  temp268;
    return ( (struct Line_12 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul267 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp268 ) ) ) ) ) ) ) ) );
}

static  struct Line_12 *   get_dash_ptr224 (    struct Array_52 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp221 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i2254 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic225 ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_12 *  p2255 = ( ( (  cast_dash_ptr265 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr266 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  struct Line_12   get223 (    struct Array_52 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr224 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  size_t   op_dash_add269 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) + (  r272 ) );
}

static  struct Maybe_219   next220 (    struct ArrayIter_216 *  self2330 ) {
    if ( (  cmp221 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_219) { .tag = Maybe_219_None_t } );
    }
    struct Line_12  e2332 = ( (  get223 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add269 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_219_Just ) ( (  e2332 ) ) );
}

static  enum Unit_8   for_dash_each213 (    struct Array_52  iterable1074 ,   struct envunion215  fun1076 ) {
    struct ArrayIter_216  temp217 = ( (  into_dash_iter218 ) ( (  iterable1074 ) ) );
    struct ArrayIter_216 *  it1077 = ( &temp217 );
    while ( ( true ) ) {
        struct Maybe_219  dref1078 = ( (  next220 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_219_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_219_Just_t ) {
                struct envunion215  temp270 = (  fun1076 );
                ( temp270.fun ( &temp270.env ,  ( dref1078 .stuff .Maybe_219_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  bool   eq276 (    size_t  l126 ,    size_t  r128 ) {
    return ( (  l126 ) == (  r128 ) );
}

struct TypeSize_279 {
    size_t  f_size;
};

static  struct TypeSize_279   get_dash_typesize278 (  ) {
    struct Line_12  temp280;
    return ( (struct TypeSize_279) { .f_size = ( sizeof( ( (  temp280 ) ) ) ) } );
}

static  struct Line_12 *   cast_dash_ptr281 (    void *  p359 ) {
    return ( (struct Line_12 * ) (  p359 ) );
}

static  size_t   op_dash_mul282 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) * (  r282 ) );
}

static  struct Slice_11   allocate277 (    enum CAllocator_10  dref1954 ,    size_t  count1956 ) {
    if (!(  dref1954 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1957 = ( ( ( (  get_dash_typesize278 ) ( ) ) ) .f_size );
    struct Line_12 *  ptr1958 = ( (  cast_dash_ptr281 ) ( ( ( malloc ) ( (  op_dash_mul282 ( (  size1957 ) , (  count1956 ) ) ) ) ) ) );
    return ( (struct Slice_11) { .f_ptr = (  ptr1958 ) , .f_count = (  count1956 ) } );
}

struct env283 {
    struct Slice_11  new_dash_slice2043;
    ;
    ;
};

struct Tuple2_285 {
    struct Line_12  field0;
    int32_t  field1;
};

static struct Tuple2_285 Tuple2_285_Tuple2 (  struct Line_12  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_285 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion284 {
    enum Unit_8  (*fun) (  struct env283*  ,    struct Tuple2_285  );
    struct env283 env;
};

struct StrConcat_291 {
    struct StrConcat_74  field0;
    size_t  field1;
};

static struct StrConcat_291 StrConcat_291_StrConcat (  struct StrConcat_74  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_291 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_290 {
    struct StrConcat_291  field0;
    struct Char_65  field1;
};

static struct StrConcat_290 StrConcat_290_StrConcat (  struct StrConcat_291  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_290 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_294 {
    struct StrView_27  field0;
    struct StrConcat_290  field1;
};

static struct StrConcat_294 StrConcat_294_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_290  field1 ) {
    return ( struct StrConcat_294 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_293 {
    struct StrConcat_294  field0;
    struct Char_65  field1;
};

static struct StrConcat_293 StrConcat_293_StrConcat (  struct StrConcat_294  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_293 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str297 (    struct StrConcat_291  self1509 ) {
    struct StrConcat_291  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str236 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str238 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str296 (    struct StrConcat_290  self1509 ) {
    struct StrConcat_290  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str297 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str240 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str295 (    struct StrConcat_294  self1509 ) {
    struct StrConcat_294  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str232 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str296 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str292 (    struct StrConcat_293  self1509 ) {
    struct StrConcat_293  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str295 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str240 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic289 (    struct StrConcat_290  errmsg1713 ) {
    ( (  print_dash_str292 ) ( ( ( StrConcat_293_StrConcat ) ( ( ( StrConcat_294_StrConcat ) ( ( (  from_dash_string257 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  int64_t   size_dash_i64298 (    size_t  x594 ) {
    return ( (int64_t ) (  x594 ) );
}

static  struct Line_12 *   get_dash_ptr288 (    struct Slice_11  slice1758 ,    size_t  i1760 ) {
    if ( ( (  cmp221 ( (  i1760 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic289 ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1760 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1758 ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_12 *  elem_dash_ptr1761 = ( (  offset_dash_ptr266 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  i1760 ) ) ) ) );
    return (  elem_dash_ptr1761 );
}

static  enum Unit_8   set287 (    struct Slice_11  slice1775 ,    size_t  i1777 ,    struct Line_12  x1779 ) {
    struct Line_12 *  ep1780 = ( (  get_dash_ptr288 ) ( (  slice1775 ) ,  (  i1777 ) ) );
    (*  ep1780 ) = (  x1779 );
    return ( Unit_8_Unit );
}

static  size_t   i32_dash_size299 (    int32_t  x609 ) {
    return ( (size_t ) ( (int64_t ) (  x609 ) ) );
}

static  enum Unit_8   lam286 (   struct env283* env ,    struct Tuple2_285  dref2044 ) {
    return ( (  set287 ) ( ( env->new_dash_slice2043 ) ,  ( (  i32_dash_size299 ) ( ( dref2044 .field1 ) ) ) ,  ( dref2044 .field0 ) ) );
}

struct SliceIter_302 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_303 {
    int32_t  f_from;
};

struct Zip_301 {
    struct SliceIter_302  f_left_dash_it;
    struct FromIter_303  f_right_dash_it;
};

static  struct Zip_301   into_dash_iter305 (    struct Zip_301  self911 ) {
    return (  self911 );
}

struct Maybe_306 {
    enum {
        Maybe_306_None_t,
        Maybe_306_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_285  field0;
        } Maybe_306_Just_s;
    } stuff;
};

static struct Maybe_306 Maybe_306_Just (  struct Tuple2_285  field0 ) {
    return ( struct Maybe_306 ) { .tag = Maybe_306_Just_t, .stuff = { .Maybe_306_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_219   next308 (    struct SliceIter_302 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp221 ( (  op_dash_add269 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_219) { .tag = Maybe_219_None_t } );
    }
    struct Line_12  elem1831 = ( * ( (  offset_dash_ptr266 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add269 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_219_Just ) ( (  elem1831 ) ) );
}

struct Maybe_309 {
    enum {
        Maybe_309_None_t,
        Maybe_309_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_309_Just_s;
    } stuff;
};

static struct Maybe_309 Maybe_309_Just (  int32_t  field0 ) {
    return ( struct Maybe_309 ) { .tag = Maybe_309_Just_t, .stuff = { .Maybe_309_Just_s = { .field0 = field0 } } };
};

static  int32_t   op_dash_add311 (    int32_t  l207 ,    int32_t  r209 ) {
    return ( (  l207 ) + (  r209 ) );
}

static  struct Maybe_309   next310 (    struct FromIter_303 *  dref905 ) {
    int32_t  v907 = ( ( (* dref905 ) ) .f_from );
    (* dref905 ) .f_from = (  op_dash_add311 ( ( ( (* dref905 ) ) .f_from ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( ( Maybe_309_Just ) ( (  v907 ) ) );
}

static  struct Maybe_306   next307 (    struct Zip_301 *  self914 ) {
    struct Zip_301  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_219  dref916 = ( (  next308 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_219_None_t ) {
            return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_219_Just_t ) {
                struct Maybe_309  dref918 = ( (  next310 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_309_None_t ) {
                    return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_309_Just_t ) {
                        ( (  next308 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next310 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_306_Just ) ( ( ( Tuple2_285_Tuple2 ) ( ( dref916 .stuff .Maybe_219_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_309_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each300 (    struct Zip_301  iterable1074 ,   struct envunion284  fun1076 ) {
    struct Zip_301  temp304 = ( (  into_dash_iter305 ) ( (  iterable1074 ) ) );
    struct Zip_301 *  it1077 = ( &temp304 );
    while ( ( true ) ) {
        struct Maybe_306  dref1078 = ( (  next307 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_306_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_306_Just_t ) {
                struct envunion284  temp312 = (  fun1076 );
                ( temp312.fun ( &temp312.env ,  ( dref1078 .stuff .Maybe_306_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_302   into_dash_iter314 (    struct Slice_11  self1823 ) {
    return ( (struct SliceIter_302) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_303   into_dash_iter315 (    struct FromIter_303  it903 ) {
    return (  it903 );
}

static  struct Zip_301   zip313 (    struct Slice_11  left922 ,    struct FromIter_303  right924 ) {
    struct SliceIter_302  left_dash_it925 = ( (  into_dash_iter314 ) ( (  left922 ) ) );
    struct FromIter_303  right_dash_it926 = ( (  into_dash_iter315 ) ( (  right924 ) ) );
    return ( (struct Zip_301) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct FromIter_303   from316 (    int32_t  f900 ) {
    return ( (struct FromIter_303) { .f_from = (  f900 ) } );
}

static  void *   cast_dash_ptr318 (    struct Line_12 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free317 (    enum CAllocator_10  dref1960 ,    struct Slice_11  slice1962 ) {
    if (!(  dref1960 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr318 ) ( ( (  slice1962 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full275 (   struct env1* env ,    struct List_9 *  list2042 ) {
    if ( (  eq276 ( ( ( * (  list2042 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2042 ) .f_elements = ( (  allocate277 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( env->starting_dash_size2037 ) ) );
    } else {
        if ( (  eq276 ( ( ( * (  list2042 ) ) .f_count ) , ( ( ( * (  list2042 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_11  new_dash_slice2043 = ( (  allocate277 ) ( ( ( * (  list2042 ) ) .f_al ) ,  (  op_dash_mul282 ( ( ( * (  list2042 ) ) .f_count ) , ( env->growth_dash_factor2038 ) ) ) ) );
            struct env283 envinst283 = {
                .new_dash_slice2043 =  new_dash_slice2043 ,
            };
            struct envunion284  fun2047 = ( (struct envunion284){ .fun = (  enum Unit_8  (*) (  struct env283*  ,    struct Tuple2_285  ) )lam286 , .env =  envinst283 } );
            ( (  for_dash_each300 ) ( ( (  zip313 ) ( ( ( * (  list2042 ) ) .f_elements ) ,  ( (  from316 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2047 ) ) );
            ( (  free317 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( ( * (  list2042 ) ) .f_elements ) ) );
            (*  list2042 ) .f_elements = (  new_dash_slice2043 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add273 (   struct env6* env ,    struct List_9 *  list2050 ,    struct Line_12  elem2052 ) {
    struct envunion7  temp274 = ( (struct envunion7){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full275 , .env =  env->envinst1 } );
    ( temp274.fun ( &temp274.env ,  (  list2050 ) ) );
    ( (  set287 ) ( ( ( * (  list2050 ) ) .f_elements ) ,  ( ( * (  list2050 ) ) .f_count ) ,  (  elem2052 ) ) );
    (*  list2050 ) .f_count = (  op_dash_add269 ( ( ( * (  list2050 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam271 (   struct env214* env ,    struct Line_12  x2103 ) {
    struct envunion47  temp272 = ( (struct envunion47){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add273 , .env =  env->envinst6 } );
    return ( temp272.fun ( &temp272.env ,  ( env->list2099 ) ,  (  x2103 ) ) );
}

static  enum Unit_8   add_dash_all212 (   struct env46* env ,    struct List_9 *  list2099 ,    struct Array_52  it2101 ) {
    struct env214 envinst214 = {
        .envinst6 = env->envinst6 ,
        .list2099 =  list2099 ,
    };
    ( (  for_dash_each213 ) ( (  it2101 ) ,  ( (struct envunion215){ .fun = (  enum Unit_8  (*) (  struct env214*  ,    struct Line_12  ) )lam271 , .env =  envinst214 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_9   from_dash_iter202 (   struct env50* env ,    struct Array_52  iter2140 ,    enum CAllocator_10  al2142 ) {
    struct List_9  temp203 = ( (  mk204 ) ( (  al2142 ) ) );
    struct List_9 *  list2143 = ( &temp203 );
    struct envunion51  temp211 = ( (struct envunion51){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Array_52  ) )add_dash_all212 , .env =  env->envinst46 } );
    ( temp211.fun ( &temp211.env ,  (  list2143 ) ,  (  iter2140 ) ) );
    return ( * (  list2143 ) );
}

static  struct Array_52   from_dash_listlike319 (    struct Array_52  self330 ) {
    return (  self330 );
}

static  void *   cast_dash_ptr326 (    struct Highlight_17 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of327 (    struct Highlight_17 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Highlight_17 *   zeroed324 (  ) {
    struct Highlight_17 *  temp325;
    struct Highlight_17 *  x570 = (  temp325 );
    ( ( memset ) ( ( (  cast_dash_ptr326 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of327 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Highlight_17 *   null_dash_ptr323 (  ) {
    return ( (  zeroed324 ) ( ) );
}

static  struct Slice_16   empty322 (  ) {
    return ( (struct Slice_16) { .f_ptr = ( (  null_dash_ptr323 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_15   mk321 (    enum CAllocator_10  al2032 ) {
    struct Slice_16  elements2033 = ( (  empty322 ) ( ) );
    return ( (struct List_15) { .f_al = (  al2032 ) , .f_elements = (  elements2033 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Line_12   mk_dash_line320 (    struct List_13  initial3689 ) {
    return ( (struct Line_12) { .f_line = (  initial3689 ) , .f_invalidated = ( true ) , .f_highlights = ( (  mk321 ) ( ( (  initial3689 ) .f_al ) ) ) } );
}

static  void *   cast_dash_ptr333 (    uint8_t * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of334 (    uint8_t *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint8_t *   zeroed331 (  ) {
    uint8_t *  temp332;
    uint8_t *  x570 = (  temp332 );
    ( ( memset ) ( ( (  cast_dash_ptr333 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of334 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   null_dash_ptr330 (  ) {
    return ( (  zeroed331 ) ( ) );
}

static  struct Slice_14   empty329 (  ) {
    return ( (struct Slice_14) { .f_ptr = ( (  null_dash_ptr330 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_13   mk328 (    enum CAllocator_10  al2032 ) {
    struct Slice_14  elements2033 = ( (  empty329 ) ( ) );
    return ( (struct List_13) { .f_al = (  al2032 ) , .f_elements = (  elements2033 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr341 (    struct Changeset_32 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of342 (    struct Changeset_32 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Changeset_32 *   zeroed339 (  ) {
    struct Changeset_32 *  temp340;
    struct Changeset_32 *  x570 = (  temp340 );
    ( ( memset ) ( ( (  cast_dash_ptr341 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of342 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Changeset_32 *   null_dash_ptr338 (  ) {
    return ( (  zeroed339 ) ( ) );
}

static  struct Slice_31   empty337 (  ) {
    return ( (struct Slice_31) { .f_ptr = ( (  null_dash_ptr338 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_30   mk336 (    enum CAllocator_10  al2032 ) {
    struct Slice_31  elements2033 = ( (  empty337 ) ( ) );
    return ( (struct List_30) { .f_al = (  al2032 ) , .f_elements = (  elements2033 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_100   mk_dash_actions335 (    enum CAllocator_10  al3677 ) {
    return ( (struct Actions_100) { .f_list = ( (  mk336 ) ( (  al3677 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( ChangesetInputType_101_NoChangeset ) } );
}

static  struct TextBuf_99   mk200 (   struct env87* env ,    enum CAllocator_10  al3696 ,    struct Pos_26  cursor_dash_pos3698 ) {
    struct envunion88  temp201 = ( (struct envunion88){ .fun = (  struct List_9  (*) (  struct env50*  ,    struct Array_52  ,    enum CAllocator_10  ) )from_dash_iter202 , .env =  env->envinst50 } );
    return ( (struct TextBuf_99) { .f_al = (  al3696 ) , .f_buf = ( temp201.fun ( &temp201.env ,  ( (  from_dash_listlike319 ) ( ( (struct Array_52) { ._arr = { ( (  mk_dash_line320 ) ( ( (  mk328 ) ( (  al3696 ) ) ) ) ) } } ) ) ) ,  (  al3696 ) ) ) , .f_actions = ( (  mk_dash_actions335 ) ( (  al3696 ) ) ) } );
}

static  struct Pos_26   mk343 (    int32_t  line3623 ,    int32_t  bi3625 ) {
    return ( (struct Pos_26) { .f_line = (  line3623 ) , .f_bi = (  bi3625 ) } );
}

struct Slice_344 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  const char* *   offset_dash_ptr346 (    const char* *  x338 ,    int64_t  count340 ) {
    const char*  temp347;
    return ( (const char* * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul267 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp347 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral348 (    int64_t  x46 ) {
    return (  x46 );
}

static  size_t   op_dash_sub349 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) - (  r277 ) );
}

static  struct Slice_344   get345 (  ) {
    return ( (struct Slice_344) { .f_ptr = ( (  offset_dash_ptr346 ) ( ( _global_argv ) ,  (  from_dash_integral348 ( 1 ) ) ) ) , .f_count = (  op_dash_sub349 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

struct Maybe_353 {
    enum {
        Maybe_353_None_t,
        Maybe_353_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_353_Just_s;
    } stuff;
};

static struct Maybe_353 Maybe_353_Just (  const char*  field0 ) {
    return ( struct Maybe_353 ) { .tag = Maybe_353_Just_t, .stuff = { .Maybe_353_Just_s = { .field0 = field0 } } };
};

static  const char*   undefined354 (  ) {
    const char*  temp355;
    return (  temp355 );
}

static  const char*   or_dash_fail352 (    struct Maybe_353  x1726 ,    struct StrConcat_290  errmsg1728 ) {
    struct Maybe_353  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_353_None_t ) {
        ( (  panic289 ) ( (  errmsg1728 ) ) );
        return ( (  undefined354 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_353_Just_t ) {
            return ( dref1729 .stuff .Maybe_353_Just_s .field0 );
        }
    }
}

static  struct Maybe_353   try_dash_get356 (    struct Slice_344  slice1764 ,    size_t  i1766 ) {
    if ( ( (  cmp221 ( (  i1766 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i1766 ) , ( (  slice1764 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_353) { .tag = Maybe_353_None_t } );
    }
    const char* *  elem_dash_ptr1767 = ( (  offset_dash_ptr346 ) ( ( (  slice1764 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  i1766 ) ) ) ) );
    return ( ( Maybe_353_Just ) ( ( * (  elem_dash_ptr1767 ) ) ) );
}

static  const char*   get351 (    struct Slice_344  slice1770 ,    size_t  i1772 ) {
    return ( (  or_dash_fail352 ) ( ( (  try_dash_get356 ) ( (  slice1770 ) ,  (  i1772 ) ) ) ,  ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1772 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1770 ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get350 (    struct Slice_344  self1868 ,    size_t  idx1870 ) {
    return ( (  get351 ) ( (  self1868 ) ,  (  idx1870 ) ) );
}

struct envunion358 {
    enum Unit_8  (*fun) (  struct env93*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
    struct env93 env;
};

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_222   cmp362 (    int32_t  l159 ,    int32_t  r161 ) {
    return ( builtin_int32_tcmp( (  l159 ) , (  r161 ) ) );
}

static  enum Ordering_222   cmp361 (    struct Pos_26  l3616 ,    struct Pos_26  r3618 ) {
    enum Ordering_222  dref3619 = ( (  cmp362 ) ( ( (  l3616 ) .f_line ) ,  ( (  r3618 ) .f_line ) ) );
    switch (  dref3619 ) {
        case Ordering_222_EQ : {
            return ( (  cmp362 ) ( ( (  l3616 ) .f_bi ) ,  ( (  r3618 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_222  els3620 =  dref3619;
            return (  els3620 );
            break;
        }
    }
}

static  struct Pos_26   min360 (    struct Pos_26  l1236 ,    struct Pos_26  r1238 ) {
    if ( (  cmp361 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Pos_26   max363 (    struct Pos_26  l1315 ,    struct Pos_26  r1317 ) {
    if ( (  cmp361 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  bool   eq365 (    int32_t  l106 ,    int32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq364 (    struct Pos_26  l3611 ,    struct Pos_26  r3613 ) {
    return ( (  eq365 ( ( (  l3611 ) .f_line ) , ( (  r3613 ) .f_line ) ) ) && (  eq365 ( ( (  l3611 ) .f_bi ) , ( (  r3613 ) .f_bi ) ) ) );
}

static  size_t   size366 (    struct List_9 *  l2134 ) {
    return ( ( * (  l2134 ) ) .f_count );
}

static  struct Line_12 *   get_dash_ptr371 (    struct List_9 *  list2002 ,    size_t  i2004 ) {
    if ( ( (  cmp221 ( (  i2004 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i2004 ) , ( ( * (  list2002 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic289 ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2004 ) ) ) ,  ( (  from_dash_string257 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2002 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr288 ) ( ( ( * (  list2002 ) ) .f_elements ) ,  (  i2004 ) ) );
}

static  struct Line_12   get370 (    struct List_9 *  list2012 ,    size_t  i2014 ) {
    return ( * ( (  get_dash_ptr371 ) ( (  list2012 ) ,  (  i2014 ) ) ) );
}

static  uint8_t *   offset_dash_ptr374 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp375;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul267 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp375 ) ) ) ) ) ) ) ) );
}

static  size_t   min376 (    size_t  l1236 ,    size_t  r1238 ) {
    if ( (  cmp221 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Slice_14   subslice373 (    struct Slice_14  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    uint8_t *  begin_dash_ptr1788 = ( (  offset_dash_ptr374 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp221 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp221 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_14) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub349 ( ( (  min376 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_14) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

static  struct Slice_14   from372 (    struct Slice_14  slice1792 ,    size_t  from1794 ) {
    return ( (  subslice373 ) ( (  slice1792 ) ,  (  from1794 ) ,  ( (  slice1792 ) .f_count ) ) );
}

static  struct Slice_14   to_dash_slice377 (    struct List_13  l2127 ) {
    uint8_t *  ptr2128 = ( ( (  l2127 ) .f_elements ) .f_ptr );
    return ( (struct Slice_14) { .f_ptr = (  ptr2128 ) , .f_count = ( (  l2127 ) .f_count ) } );
}

static  enum Unit_8   set378 (    struct List_9 *  list2022 ,    size_t  i2024 ,    struct Line_12  elem2026 ) {
    if ( ( (  cmp221 ( (  i2024 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i2024 ) , ( ( * (  list2022 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic289 ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2024 ) ) ) ,  ( (  from_dash_string257 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2022 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set287 ) ( ( ( * (  list2022 ) ) .f_elements ) ,  (  i2024 ) ,  (  elem2026 ) ) );
    return ( Unit_8_Unit );
}

struct env385 {
    struct env19 envinst19;
    struct List_13 *  list2099;
};

struct envunion386 {
    enum Unit_8  (*fun) (  struct env385*  ,    uint8_t  );
    struct env385 env;
};

struct SliceIter_387 {
    struct Slice_14  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_387   into_dash_iter389 (    struct Slice_14  self1823 ) {
    return ( (struct SliceIter_387) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_390 {
    enum {
        Maybe_390_None_t,
        Maybe_390_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_390_Just_s;
    } stuff;
};

static struct Maybe_390 Maybe_390_Just (  uint8_t  field0 ) {
    return ( struct Maybe_390 ) { .tag = Maybe_390_Just_t, .stuff = { .Maybe_390_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_390   next391 (    struct SliceIter_387 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp221 ( (  op_dash_add269 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_390) { .tag = Maybe_390_None_t } );
    }
    uint8_t  elem1831 = ( * ( (  offset_dash_ptr374 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add269 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_390_Just ) ( (  elem1831 ) ) );
}

static  enum Unit_8   for_dash_each384 (    struct Slice_14  iterable1074 ,   struct envunion386  fun1076 ) {
    struct SliceIter_387  temp388 = ( (  into_dash_iter389 ) ( (  iterable1074 ) ) );
    struct SliceIter_387 *  it1077 = ( &temp388 );
    while ( ( true ) ) {
        struct Maybe_390  dref1078 = ( (  next391 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_390_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_390_Just_t ) {
                struct envunion386  temp392 = (  fun1076 );
                ( temp392.fun ( &temp392.env ,  ( dref1078 .stuff .Maybe_390_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct TypeSize_400 {
    size_t  f_size;
};

static  struct TypeSize_400   get_dash_typesize399 (  ) {
    uint8_t  temp401;
    return ( (struct TypeSize_400) { .f_size = ( sizeof( ( (  temp401 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr402 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_14   allocate398 (    enum CAllocator_10  dref1954 ,    size_t  count1956 ) {
    if (!(  dref1954 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1957 = ( ( ( (  get_dash_typesize399 ) ( ) ) ) .f_size );
    uint8_t *  ptr1958 = ( (  cast_dash_ptr402 ) ( ( ( malloc ) ( (  op_dash_mul282 ( (  size1957 ) , (  count1956 ) ) ) ) ) ) );
    return ( (struct Slice_14) { .f_ptr = (  ptr1958 ) , .f_count = (  count1956 ) } );
}

struct env403 {
    struct Slice_14  new_dash_slice2043;
    ;
    ;
};

struct Tuple2_405 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_405 Tuple2_405_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_405 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion404 {
    enum Unit_8  (*fun) (  struct env403*  ,    struct Tuple2_405  );
    struct env403 env;
};

static  uint8_t *   get_dash_ptr408 (    struct Slice_14  slice1758 ,    size_t  i1760 ) {
    if ( ( (  cmp221 ( (  i1760 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic289 ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1760 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1758 ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1761 = ( (  offset_dash_ptr374 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  i1760 ) ) ) ) );
    return (  elem_dash_ptr1761 );
}

static  enum Unit_8   set407 (    struct Slice_14  slice1775 ,    size_t  i1777 ,    uint8_t  x1779 ) {
    uint8_t *  ep1780 = ( (  get_dash_ptr408 ) ( (  slice1775 ) ,  (  i1777 ) ) );
    (*  ep1780 ) = (  x1779 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam406 (   struct env403* env ,    struct Tuple2_405  dref2044 ) {
    return ( (  set407 ) ( ( env->new_dash_slice2043 ) ,  ( (  i32_dash_size299 ) ( ( dref2044 .field1 ) ) ) ,  ( dref2044 .field0 ) ) );
}

struct Zip_410 {
    struct SliceIter_387  f_left_dash_it;
    struct FromIter_303  f_right_dash_it;
};

static  struct Zip_410   into_dash_iter412 (    struct Zip_410  self911 ) {
    return (  self911 );
}

struct Maybe_413 {
    enum {
        Maybe_413_None_t,
        Maybe_413_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_405  field0;
        } Maybe_413_Just_s;
    } stuff;
};

static struct Maybe_413 Maybe_413_Just (  struct Tuple2_405  field0 ) {
    return ( struct Maybe_413 ) { .tag = Maybe_413_Just_t, .stuff = { .Maybe_413_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_413   next414 (    struct Zip_410 *  self914 ) {
    struct Zip_410  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_390  dref916 = ( (  next391 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_390_None_t ) {
            return ( (struct Maybe_413) { .tag = Maybe_413_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_390_Just_t ) {
                struct Maybe_309  dref918 = ( (  next310 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_309_None_t ) {
                    return ( (struct Maybe_413) { .tag = Maybe_413_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_309_Just_t ) {
                        ( (  next391 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next310 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_413_Just ) ( ( ( Tuple2_405_Tuple2 ) ( ( dref916 .stuff .Maybe_390_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_309_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each409 (    struct Zip_410  iterable1074 ,   struct envunion404  fun1076 ) {
    struct Zip_410  temp411 = ( (  into_dash_iter412 ) ( (  iterable1074 ) ) );
    struct Zip_410 *  it1077 = ( &temp411 );
    while ( ( true ) ) {
        struct Maybe_413  dref1078 = ( (  next414 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_413_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_413_Just_t ) {
                struct envunion404  temp415 = (  fun1076 );
                ( temp415.fun ( &temp415.env ,  ( dref1078 .stuff .Maybe_413_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_410   zip416 (    struct Slice_14  left922 ,    struct FromIter_303  right924 ) {
    struct SliceIter_387  left_dash_it925 = ( (  into_dash_iter389 ) ( (  left922 ) ) );
    struct FromIter_303  right_dash_it926 = ( (  into_dash_iter315 ) ( (  right924 ) ) );
    return ( (struct Zip_410) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr418 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free417 (    enum CAllocator_10  dref1960 ,    struct Slice_14  slice1962 ) {
    if (!(  dref1960 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr418 ) ( ( (  slice1962 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full397 (   struct env2* env ,    struct List_13 *  list2042 ) {
    if ( (  eq276 ( ( ( * (  list2042 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2042 ) .f_elements = ( (  allocate398 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( env->starting_dash_size2037 ) ) );
    } else {
        if ( (  eq276 ( ( ( * (  list2042 ) ) .f_count ) , ( ( ( * (  list2042 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_14  new_dash_slice2043 = ( (  allocate398 ) ( ( ( * (  list2042 ) ) .f_al ) ,  (  op_dash_mul282 ( ( ( * (  list2042 ) ) .f_count ) , ( env->growth_dash_factor2038 ) ) ) ) );
            struct env403 envinst403 = {
                .new_dash_slice2043 =  new_dash_slice2043 ,
            };
            struct envunion404  fun2047 = ( (struct envunion404){ .fun = (  enum Unit_8  (*) (  struct env403*  ,    struct Tuple2_405  ) )lam406 , .env =  envinst403 } );
            ( (  for_dash_each409 ) ( ( (  zip416 ) ( ( ( * (  list2042 ) ) .f_elements ) ,  ( (  from316 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2047 ) ) );
            ( (  free417 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( ( * (  list2042 ) ) .f_elements ) ) );
            (*  list2042 ) .f_elements = (  new_dash_slice2043 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add395 (   struct env19* env ,    struct List_13 *  list2050 ,    uint8_t  elem2052 ) {
    struct envunion20  temp396 = ( (struct envunion20){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_13 *  ) )grow_dash_if_dash_full397 , .env =  env->envinst2 } );
    ( temp396.fun ( &temp396.env ,  (  list2050 ) ) );
    ( (  set407 ) ( ( ( * (  list2050 ) ) .f_elements ) ,  ( ( * (  list2050 ) ) .f_count ) ,  (  elem2052 ) ) );
    (*  list2050 ) .f_count = (  op_dash_add269 ( ( ( * (  list2050 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam393 (   struct env385* env ,    uint8_t  x2103 ) {
    struct envunion49  temp394 = ( (struct envunion49){ .fun = (  enum Unit_8  (*) (  struct env19*  ,    struct List_13 *  ,    uint8_t  ) )add395 , .env =  env->envinst19 } );
    return ( temp394.fun ( &temp394.env ,  ( env->list2099 ) ,  (  x2103 ) ) );
}

static  enum Unit_8   add_dash_all383 (   struct env48* env ,    struct List_13 *  list2099 ,    struct Slice_14  it2101 ) {
    struct env385 envinst385 = {
        .envinst19 = env->envinst19 ,
        .list2099 =  list2099 ,
    };
    ( (  for_dash_each384 ) ( (  it2101 ) ,  ( (struct envunion386){ .fun = (  enum Unit_8  (*) (  struct env385*  ,    uint8_t  ) )lam393 , .env =  envinst385 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_13   from_dash_iter380 (   struct env53* env ,    struct Slice_14  iter2140 ,    enum CAllocator_10  al2142 ) {
    struct List_13  temp381 = ( (  mk328 ) ( (  al2142 ) ) );
    struct List_13 *  list2143 = ( &temp381 );
    struct envunion54  temp382 = ( (struct envunion54){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all383 , .env =  env->envinst48 } );
    ( temp382.fun ( &temp382.env ,  (  list2143 ) ,  (  iter2140 ) ) );
    return ( * (  list2143 ) );
}

static  struct StrView_27   or_dash_else420 (    struct Maybe_164  self1733 ,    struct StrView_27  alt1735 ) {
    struct Maybe_164  dref1736 = (  self1733 );
    if ( dref1736.tag == Maybe_164_None_t ) {
        return (  alt1735 );
    }
    else {
        if ( dref1736.tag == Maybe_164_Just_t ) {
            return ( dref1736 .stuff .Maybe_164_Just_s .field0 );
        }
    }
}

struct LineIter_422 {
    struct StrView_27  f_og;
    size_t  f_last;
};

static  uint8_t   undefined426 (  ) {
    uint8_t  temp427;
    return (  temp427 );
}

static  uint8_t   or_dash_fail425 (    struct Maybe_390  x1726 ,    struct StrConcat_290  errmsg1728 ) {
    struct Maybe_390  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_390_None_t ) {
        ( (  panic289 ) ( (  errmsg1728 ) ) );
        return ( (  undefined426 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_390_Just_t ) {
            return ( dref1729 .stuff .Maybe_390_Just_s .field0 );
        }
    }
}

static  struct Maybe_390   try_dash_get428 (    struct Slice_14  slice1764 ,    size_t  i1766 ) {
    if ( ( (  cmp221 ( (  i1766 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i1766 ) , ( (  slice1764 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_390) { .tag = Maybe_390_None_t } );
    }
    uint8_t *  elem_dash_ptr1767 = ( (  offset_dash_ptr374 ) ( ( (  slice1764 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  i1766 ) ) ) ) );
    return ( ( Maybe_390_Just ) ( ( * (  elem_dash_ptr1767 ) ) ) );
}

static  uint8_t   get424 (    struct Slice_14  slice1770 ,    size_t  i1772 ) {
    return ( (  or_dash_fail425 ) ( ( (  try_dash_get428 ) ( (  slice1770 ) ,  (  i1772 ) ) ) ,  ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1772 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1770 ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   char_dash_u8429 (    struct Char_65  c718 ) {
    struct CharDestructured_242  dref719 = ( (  destructure244 ) ( (  c718 ) ) );
    if ( dref719.tag == CharDestructured_242_Ref_t ) {
        return ( * ( ( dref719 .stuff .CharDestructured_242_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref719.tag == CharDestructured_242_Scalar_t ) {
            return ( (  u32_dash_u8255 ) ( ( ( dref719 .stuff .CharDestructured_242_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct StrView_27   byte_dash_substr430 (    struct StrView_27  s2184 ,    size_t  from2186 ,    size_t  to2188 ) {
    return ( (struct StrView_27) { .f_contents = ( (  subslice373 ) ( ( (  s2184 ) .f_contents ) ,  (  from2186 ) ,  (  to2188 ) ) ) } );
}

static  struct Maybe_164   next423 (    struct LineIter_422 *  self2420 ) {
    if ( (  cmp221 ( ( ( * (  self2420 ) ) .f_last ) , ( ( ( ( * (  self2420 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
    size_t  i2421 = ( ( * (  self2420 ) ) .f_last );
    while ( ( (  cmp221 ( (  i2421 ) , ( ( ( ( * (  self2420 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq245 ( ( (  get424 ) ( ( ( ( * (  self2420 ) ) .f_og ) .f_contents ) ,  (  i2421 ) ) ) , ( (  char_dash_u8429 ) ( ( (  from_dash_charlike258 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2421 = (  op_dash_add269 ( (  i2421 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_27  line2422 = ( (  byte_dash_substr430 ) ( ( ( * (  self2420 ) ) .f_og ) ,  ( ( * (  self2420 ) ) .f_last ) ,  (  i2421 ) ) );
    if ( (  cmp221 ( (  i2421 ) , ( ( ( ( * (  self2420 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2421 = (  op_dash_add269 ( (  i2421 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2420 ) .f_last = (  i2421 );
    return ( ( Maybe_164_Just ) ( (  line2422 ) ) );
}

static  struct LineIter_422   into_dash_iter432 (    struct LineIter_422  self2417 ) {
    return (  self2417 );
}

static  struct Maybe_164   head421 (    struct LineIter_422  it1142 ) {
    struct LineIter_422  temp431 = ( (  into_dash_iter432 ) ( (  it1142 ) ) );
    return ( (  next423 ) ( ( &temp431 ) ) );
}

static  struct LineIter_422   lines433 (    struct StrView_27  s2414 ) {
    return ( (struct LineIter_422) { .f_og = (  s2414 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env438 {
    ;
    struct Char_65  c2223;
};

struct envunion439 {
    bool  (*fun) (  struct env438*  ,    struct Char_65  );
    struct env438 env;
};

struct SplitIter_437 {
    struct StrView_27  f_og;
    size_t  f_last;
    struct envunion439  f_fun;
};

struct Drop_436 {
    struct SplitIter_437  field0;
    size_t  field1;
};

static struct Drop_436 Drop_436_Drop (  struct SplitIter_437  field0 ,  size_t  field1 ) {
    return ( struct Drop_436 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_435 {
    struct Drop_436  f_left_dash_it;
    struct FromIter_303  f_right_dash_it;
};

static  struct Zip_435   into_dash_iter440 (    struct Zip_435  self911 ) {
    return (  self911 );
}

static  struct Drop_436   into_dash_iter442 (    struct Drop_436  self845 ) {
    return (  self845 );
}

static  struct Zip_435   zip441 (    struct Drop_436  left922 ,    struct FromIter_303  right924 ) {
    struct Drop_436  left_dash_it925 = ( (  into_dash_iter442 ) ( (  left922 ) ) );
    struct FromIter_303  right_dash_it926 = ( (  into_dash_iter315 ) ( (  right924 ) ) );
    return ( (struct Zip_435) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct SplitIter_437   into_dash_iter444 (    struct SplitIter_437  self2228 ) {
    return (  self2228 );
}

static  struct Drop_436   drop443 (    struct SplitIter_437  iterable852 ,    size_t  i854 ) {
    struct SplitIter_437  it855 = ( (  into_dash_iter444 ) ( (  iterable852 ) ) );
    return ( ( Drop_436_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SplitIter_437   split_dash_by_dash_filter446 (    struct StrView_27  s2216 ,   struct envunion439  fun2218 ) {
    return ( (struct SplitIter_437) { .f_og = (  s2216 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2218 ) } );
}

struct Tuple2_449 {
    struct CharDestructured_242  field0;
    struct CharDestructured_242  field1;
};

static struct Tuple2_449 Tuple2_449_Tuple2 (  struct CharDestructured_242  field0 ,  struct CharDestructured_242  field1 ) {
    return ( struct Tuple2_449 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int64_t   op_dash_add450 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) + (  r186 ) );
}

static  bool   eq452 (    uint32_t  l111 ,    uint32_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  bool   eq451 (    struct Scalar_243  l724 ,    struct Scalar_243  r726 ) {
    return (  eq452 ( ( (  l724 ) .f_value ) , ( (  r726 ) .f_value ) ) );
}

static  bool   eq448 (    struct Char_65  l729 ,    struct Char_65  r731 ) {
    if ( ( !  eq276 ( ( (  l729 ) .f_num_dash_bytes ) , ( (  r731 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_449  dref732 = ( ( Tuple2_449_Tuple2 ) ( ( (  destructure244 ) ( (  l729 ) ) ) ,  ( (  destructure244 ) ( (  r731 ) ) ) ) );
    if ( dref732 .field0.tag == CharDestructured_242_Ref_t && dref732 .field1.tag == CharDestructured_242_Ref_t ) {
        int64_t  i735 = (  from_dash_integral348 ( 0 ) );
        while ( (  cmp221 ( ( (size_t ) (  i735 ) ) , ( ( dref732 .field0 .stuff .CharDestructured_242_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq245 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field0 .stuff .CharDestructured_242_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field1 .stuff .CharDestructured_242_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) ) ) ) {
                return ( false );
            }
            i735 = (  op_dash_add450 ( (  i735 ) , (  from_dash_integral348 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref732 .field0.tag == CharDestructured_242_Scalar_t && dref732 .field1.tag == CharDestructured_242_Scalar_t ) {
            return (  eq451 ( ( dref732 .field0 .stuff .CharDestructured_242_Scalar_s .field0 ) , ( dref732 .field1 .stuff .CharDestructured_242_Scalar_s .field0 ) ) );
        }
        else {
            if ( dref732 .field0.tag == CharDestructured_242_Scalar_t && dref732 .field1.tag == CharDestructured_242_Ref_t ) {
                return (  eq245 ( ( (  u32_dash_u8255 ) ( ( ( dref732 .field0 .stuff .CharDestructured_242_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref732 .field1 .stuff .CharDestructured_242_Ref_s .field0 ) .f_ptr ) ) ) );
            }
            else {
                if ( dref732 .field0.tag == CharDestructured_242_Ref_t && dref732 .field1.tag == CharDestructured_242_Scalar_t ) {
                    return (  eq245 ( ( (  u32_dash_u8255 ) ( ( ( dref732 .field1 .stuff .CharDestructured_242_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref732 .field0 .stuff .CharDestructured_242_Ref_s .field0 ) .f_ptr ) ) ) );
                }
            }
        }
    }
}

static  bool   lam447 (   struct env438* env ,    struct Char_65  cc2225 ) {
    return (  eq448 ( (  cc2225 ) , ( env->c2223 ) ) );
}

static  struct SplitIter_437   split_dash_by_dash_each445 (    struct StrView_27  s2221 ,    struct Char_65  c2223 ) {
    struct env438 envinst438 = {
        .c2223 =  c2223 ,
    };
    return ( (  split_dash_by_dash_filter446 ) ( (  s2221 ) ,  ( (struct envunion439){ .fun = (  bool  (*) (  struct env438*  ,    struct Char_65  ) )lam447 , .env =  envinst438 } ) ) );
}

struct Tuple2_455 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct Tuple2_455 Tuple2_455_Tuple2 (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_455 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_454 {
    enum {
        Maybe_454_None_t,
        Maybe_454_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_455  field0;
        } Maybe_454_Just_s;
    } stuff;
};

static struct Maybe_454 Maybe_454_Just (  struct Tuple2_455  field0 ) {
    return ( struct Maybe_454 ) { .tag = Maybe_454_Just_t, .stuff = { .Maybe_454_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_164   next458 (    struct SplitIter_437 *  self2231 ) {
    if ( (  cmp221 ( ( ( * (  self2231 ) ) .f_last ) , ( ( ( ( * (  self2231 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
    size_t  i2232 = ( ( * (  self2231 ) ) .f_last );
    while ( (  cmp221 ( (  i2232 ) , ( ( ( ( * (  self2231 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2233 = ( (  get_dash_ptr408 ) ( ( ( ( * (  self2231 ) ) .f_og ) .f_contents ) ,  (  i2232 ) ) );
        struct Char_65  c2234 = ( (  scan_dash_from_dash_mem260 ) ( (  ptr2233 ) ) );
        struct envunion439  temp459 = ( ( * (  self2231 ) ) .f_fun );
        if ( ( temp459.fun ( &temp459.env ,  (  c2234 ) ) ) ) {
            break;
        }
        i2232 = (  op_dash_add269 ( (  i2232 ) , ( (  next_dash_char261 ) ( (  ptr2233 ) ) ) ) );
    }
    struct StrView_27  line2235 = ( (  byte_dash_substr430 ) ( ( ( * (  self2231 ) ) .f_og ) ,  ( ( * (  self2231 ) ) .f_last ) ,  (  i2232 ) ) );
    i2232 = (  op_dash_add269 ( (  i2232 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2231 ) .f_last = (  i2232 );
    return ( ( Maybe_164_Just ) ( (  line2235 ) ) );
}

static  struct Maybe_164   next457 (    struct Drop_436 *  dref847 ) {
    while ( (  cmp221 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next458 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub349 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next458 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Maybe_454   next456 (    struct Zip_435 *  self914 ) {
    struct Zip_435  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_164  dref916 = ( (  next457 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_164_None_t ) {
            return ( (struct Maybe_454) { .tag = Maybe_454_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_164_Just_t ) {
                struct Maybe_309  dref918 = ( (  next310 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_309_None_t ) {
                    return ( (struct Maybe_454) { .tag = Maybe_454_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_309_Just_t ) {
                        ( (  next457 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next310 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_454_Just ) ( ( ( Tuple2_455_Tuple2 ) ( ( dref916 .stuff .Maybe_164_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_309_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion462 {
    struct List_13  (*fun) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  );
    struct env53 env;
};

static  enum Unit_8   insert464 (   struct env37* env ,    struct List_9 *  list2055 ,    size_t  i2057 ,    struct Line_12  elem2059 ) {
    if ( ( (  cmp221 ( (  i2057 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i2057 ) , ( ( * (  list2055 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic289 ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2057 ) ) ) ,  ( (  from_dash_string257 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2055 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq276 ( ( ( * (  list2055 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion38  temp465 = ( (struct envunion38){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add273 , .env =  env->envinst6 } );
        ( temp465.fun ( &temp465.env ,  (  list2055 ) ,  (  elem2059 ) ) );
        return ( Unit_8_Unit );
    }
    struct envunion39  temp466 = ( (struct envunion39){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full275 , .env =  env->envinst1 } );
    ( temp466.fun ( &temp466.env ,  (  list2055 ) ) );
    size_t  ii2060 = (  op_dash_sub349 ( ( ( * (  list2055 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp221 ( (  ii2060 ) , (  i2057 ) ) != 0 ) ) {
        ( (  set287 ) ( ( ( * (  list2055 ) ) .f_elements ) ,  (  op_dash_add269 ( (  ii2060 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get370 ) ( (  list2055 ) ,  (  ii2060 ) ) ) ) );
        if ( (  eq276 ( (  ii2060 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2060 = (  op_dash_sub349 ( (  ii2060 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set287 ) ( ( ( * (  list2055 ) ) .f_elements ) ,  (  i2057 ) ,  (  elem2059 ) ) );
    (*  list2055 ) .f_count = (  op_dash_add269 ( ( ( * (  list2055 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion468 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

static  enum Unit_8   free470 (    struct List_13 *  list2036 ) {
    ( (  free417 ) ( ( ( * (  list2036 ) ) .f_al ) ,  ( ( * (  list2036 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_line469 (    struct Line_12 *  line3692 ) {
    ( (  free470 ) ( ( & ( ( * (  line3692 ) ) .f_line ) ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   add_dash_to_dash_spot369 (   struct env89* env ,    struct TextBuf_99 *  self3730 ,    struct Pos_26  p3732 ,    struct StrView_27  bytes3734 ) {
    enum CAllocator_10  al3735 = ( ( ( * (  self3730 ) ) .f_buf ) .f_al );
    struct List_9 *  buf3736 = ( & ( ( * (  self3730 ) ) .f_buf ) );
    struct Line_12  extracted_dash_line_dash_buf3737 = ( (  get370 ) ( (  buf3736 ) ,  ( (  i32_dash_size299 ) ( ( (  p3732 ) .f_line ) ) ) ) );
    struct Slice_14  remaining3738 = ( (  from372 ) ( ( (  to_dash_slice377 ) ( ( (  extracted_dash_line_dash_buf3737 ) .f_line ) ) ) ,  ( (  i32_dash_size299 ) ( ( (  p3732 ) .f_bi ) ) ) ) );
    struct envunion91  temp379 = ( (struct envunion91){ .fun = (  struct List_13  (*) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  ) )from_dash_iter380 , .env =  env->envinst53 } );
    ( (  set378 ) ( (  buf3736 ) ,  ( (  i32_dash_size299 ) ( ( (  p3732 ) .f_line ) ) ) ,  ( (  mk_dash_line320 ) ( ( temp379.fun ( &temp379.env ,  ( (  subslice373 ) ( ( (  to_dash_slice377 ) ( ( (  extracted_dash_line_dash_buf3737 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size299 ) ( ( (  p3732 ) .f_bi ) ) ) ) ) ,  (  al3735 ) ) ) ) ) ) );
    struct Line_12 *  last_dash_line3739 = ( (  get_dash_ptr371 ) ( (  buf3736 ) ,  ( (  i32_dash_size299 ) ( ( (  p3732 ) .f_line ) ) ) ) );
    struct envunion92  temp419 = ( (struct envunion92){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all383 , .env =  env->envinst48 } );
    ( temp419.fun ( &temp419.env ,  ( & ( ( * (  last_dash_line3739 ) ) .f_line ) ) ,  ( ( (  or_dash_else420 ) ( ( (  head421 ) ( ( (  lines433 ) ( (  bytes3734 ) ) ) ) ) ,  ( (  from_dash_string257 ) ( ( "" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3740 = (  from_dash_integral56 ( 0 ) );
    struct Zip_435  temp434 =  into_dash_iter440 ( ( (  zip441 ) ( ( (  drop443 ) ( ( (  split_dash_by_dash_each445 ) ( (  bytes3734 ) ,  ( (  from_dash_charlike258 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from316 ) ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_454  __cond453 =  next456 (&temp434);
        if (  __cond453 .tag == 0 ) {
            break;
        }
        struct Tuple2_455  dref3741 =  __cond453 .stuff .Maybe_454_Just_s .field0;
        struct envunion462  temp461 = ( (struct envunion462){ .fun = (  struct List_13  (*) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  ) )from_dash_iter380 , .env =  env->envinst53 } );
        struct Line_12  temp460 = ( (  mk_dash_line320 ) ( ( temp461.fun ( &temp461.env ,  ( ( dref3741 .field0 ) .f_contents ) ,  (  al3735 ) ) ) ) );
        struct Line_12 *  nuline3744 = ( &temp460 );
        size_t  next_dash_line3745 = ( (  i32_dash_size299 ) ( (  op_dash_add311 ( ( (  p3732 ) .f_line ) , ( dref3741 .field1 ) ) ) ) );
        struct envunion90  temp463 = ( (struct envunion90){ .fun = (  enum Unit_8  (*) (  struct env37*  ,    struct List_9 *  ,    size_t  ,    struct Line_12  ) )insert464 , .env =  env->envinst37 } );
        ( temp463.fun ( &temp463.env ,  (  buf3736 ) ,  (  next_dash_line3745 ) ,  ( * (  nuline3744 ) ) ) );
        last_dash_line3739 = ( (  get_dash_ptr371 ) ( (  buf3736 ) ,  (  next_dash_line3745 ) ) );
        lines_dash_added3740 = (  op_dash_add311 ( (  lines_dash_added3740 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    struct envunion468  temp467 = ( (struct envunion468){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all383 , .env =  env->envinst48 } );
    ( temp467.fun ( &temp467.env ,  ( & ( ( * (  last_dash_line3739 ) ) .f_line ) ) ,  (  remaining3738 ) ) );
    ( (  free_dash_line469 ) ( ( & (  extracted_dash_line_dash_buf3737 ) ) ) );
    return (  lines_dash_added3740 );
}

static  size_t   size471 (    struct List_13 *  l2134 ) {
    return ( ( * (  l2134 ) ) .f_count );
}

struct StrConcat_477 {
    struct StrConcat_75  field0;
    struct Char_65  field1;
};

static struct StrConcat_477 StrConcat_477_StrConcat (  struct StrConcat_75  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_477 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_476 {
    struct StrConcat_477  field0;
    size_t  field1;
};

static struct StrConcat_476 StrConcat_476_StrConcat (  struct StrConcat_477  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_476 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_475 {
    struct StrConcat_476  field0;
    struct Char_65  field1;
};

static struct StrConcat_475 StrConcat_475_StrConcat (  struct StrConcat_476  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_475 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_480 {
    struct StrView_27  field0;
    struct StrConcat_475  field1;
};

static struct StrConcat_480 StrConcat_480_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_475  field1 ) {
    return ( struct StrConcat_480 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_479 {
    struct StrConcat_480  field0;
    struct Char_65  field1;
};

static struct StrConcat_479 StrConcat_479_StrConcat (  struct StrConcat_480  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_479 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str484 (    struct StrConcat_477  self1509 ) {
    struct StrConcat_477  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str237 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str240 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str483 (    struct StrConcat_476  self1509 ) {
    struct StrConcat_476  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str484 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str238 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str482 (    struct StrConcat_475  self1509 ) {
    struct StrConcat_475  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str483 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str240 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str481 (    struct StrConcat_480  self1509 ) {
    struct StrConcat_480  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str232 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str482 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str478 (    struct StrConcat_479  self1509 ) {
    struct StrConcat_479  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str481 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str240 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic474 (    struct StrConcat_475  errmsg1713 ) {
    ( (  print_dash_str478 ) ( ( ( StrConcat_479_StrConcat ) ( ( ( StrConcat_480_StrConcat ) ( ( (  from_dash_string257 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct Drop_486 {
    struct Zip_410  field0;
    size_t  field1;
};

static struct Drop_486 Drop_486_Drop (  struct Zip_410  field0 ,  size_t  field1 ) {
    return ( struct Drop_486 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env487 {
    ;
    ;
    ;
    size_t  num_dash_elems2068;
    struct List_13 *  list2063;
};

struct envunion488 {
    enum Unit_8  (*fun) (  struct env487*  ,    struct Tuple2_405  );
    struct env487 env;
};

static  struct Drop_486   into_dash_iter490 (    struct Drop_486  self845 ) {
    return (  self845 );
}

static  struct Maybe_413   next491 (    struct Drop_486 *  dref847 ) {
    while ( (  cmp221 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next414 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub349 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next414 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each485 (    struct Drop_486  iterable1074 ,   struct envunion488  fun1076 ) {
    struct Drop_486  temp489 = ( (  into_dash_iter490 ) ( (  iterable1074 ) ) );
    struct Drop_486 *  it1077 = ( &temp489 );
    while ( ( true ) ) {
        struct Maybe_413  dref1078 = ( (  next491 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_413_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_413_Just_t ) {
                struct envunion488  temp492 = (  fun1076 );
                ( temp492.fun ( &temp492.env ,  ( dref1078 .stuff .Maybe_413_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_486   drop493 (    struct Zip_410  iterable852 ,    size_t  i854 ) {
    struct Zip_410  it855 = ( (  into_dash_iter412 ) ( (  iterable852 ) ) );
    return ( ( Drop_486_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SliceIter_387   into_dash_iter495 (    struct List_13  self2029 ) {
    return ( (  into_dash_iter389 ) ( ( (  subslice373 ) ( ( (  self2029 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2029 ) .f_count ) ) ) ) );
}

static  struct Zip_410   zip494 (    struct List_13  left922 ,    struct FromIter_303  right924 ) {
    struct SliceIter_387  left_dash_it925 = ( (  into_dash_iter495 ) ( (  left922 ) ) );
    struct FromIter_303  right_dash_it926 = ( (  into_dash_iter315 ) ( (  right924 ) ) );
    return ( (struct Zip_410) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_8   set497 (    struct List_13 *  list2022 ,    size_t  i2024 ,    uint8_t  elem2026 ) {
    if ( ( (  cmp221 ( (  i2024 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i2024 ) , ( ( * (  list2022 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic289 ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2024 ) ) ) ,  ( (  from_dash_string257 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2022 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set407 ) ( ( ( * (  list2022 ) ) .f_elements ) ,  (  i2024 ) ,  (  elem2026 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam496 (   struct env487* env ,    struct Tuple2_405  dref2069 ) {
    return ( (  set497 ) ( ( env->list2063 ) ,  (  op_dash_sub349 ( ( (  i32_dash_size299 ) ( ( dref2069 .field1 ) ) ) , ( env->num_dash_elems2068 ) ) ) ,  ( dref2069 .field0 ) ) );
}

struct StrConcat_500 {
    struct StrConcat_291  field0;
    struct StrView_27  field1;
};

static struct StrConcat_500 StrConcat_500_StrConcat (  struct StrConcat_291  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_500 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_503 {
    struct StrView_27  field0;
    struct StrConcat_500  field1;
};

static struct StrConcat_503 StrConcat_503_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_500  field1 ) {
    return ( struct StrConcat_503 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_502 {
    struct StrConcat_503  field0;
    struct Char_65  field1;
};

static struct StrConcat_502 StrConcat_502_StrConcat (  struct StrConcat_503  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_502 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str505 (    struct StrConcat_500  self1509 ) {
    struct StrConcat_500  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str297 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str232 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str504 (    struct StrConcat_503  self1509 ) {
    struct StrConcat_503  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str232 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str505 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str501 (    struct StrConcat_502  self1509 ) {
    struct StrConcat_502  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str504 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str240 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic499 (    struct StrConcat_500  errmsg1713 ) {
    ( (  print_dash_str501 ) ( ( ( StrConcat_502_StrConcat ) ( ( ( StrConcat_503_StrConcat ) ( ( (  from_dash_string257 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct env507 {
    ;
    struct Slice_14  dest1854;
    ;
};

struct envunion508 {
    enum Unit_8  (*fun) (  struct env507*  ,    struct Tuple2_405  );
    struct env507 env;
};

static  enum Unit_8   for_dash_each506 (    struct Zip_410  iterable1074 ,   struct envunion508  fun1076 ) {
    struct Zip_410  temp509 = ( (  into_dash_iter412 ) ( (  iterable1074 ) ) );
    struct Zip_410 *  it1077 = ( &temp509 );
    while ( ( true ) ) {
        struct Maybe_413  dref1078 = ( (  next414 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_413_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_413_Just_t ) {
                struct envunion508  temp510 = (  fun1076 );
                ( temp510.fun ( &temp510.env ,  ( dref1078 .stuff .Maybe_413_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam511 (   struct env507* env ,    struct Tuple2_405  dref1855 ) {
    return ( (  set407 ) ( ( env->dest1854 ) ,  ( (  i32_dash_size299 ) ( ( dref1855 .field1 ) ) ) ,  ( dref1855 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to498 (    struct Slice_14  src1852 ,    struct Slice_14  dest1854 ) {
    if ( (  cmp221 ( ( (  src1852 ) .f_count ) , ( (  dest1854 ) .f_count ) ) == 2 ) ) {
        ( (  panic499 ) ( ( ( StrConcat_500_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1852 ) .f_count ) ) ) ,  ( (  from_dash_string257 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1854 ) .f_count ) ) ) ,  ( (  from_dash_string257 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env507 envinst507 = {
        .dest1854 =  dest1854 ,
    };
    ( (  for_dash_each506 ) ( ( (  zip416 ) ( (  src1852 ) ,  ( (  from316 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion508){ .fun = (  enum Unit_8  (*) (  struct env507*  ,    struct Tuple2_405  ) )lam511 , .env =  envinst507 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   remove_dash_range473 (   struct env40* env ,    struct List_13 *  list2063 ,    size_t  from2065 ,    size_t  to_dash_excl2067 ) {
    if ( (  cmp221 ( (  to_dash_excl2067 ) , (  from2065 ) ) == 0 ) ) {
        ( (  panic474 ) ( ( ( StrConcat_475_StrConcat ) ( ( ( StrConcat_476_StrConcat ) ( ( ( StrConcat_477_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2065 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2067 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp221 ( (  from2065 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic289 ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2065 ) ) ) ,  ( (  from_dash_string257 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2063 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp221 ( (  to_dash_excl2067 ) , ( ( * (  list2063 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic289 ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2067 ) ) ) ,  ( (  from_dash_string257 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2063 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2068 = (  op_dash_sub349 ( (  to_dash_excl2067 ) , (  from2065 ) ) );
    struct env487 envinst487 = {
        .num_dash_elems2068 =  num_dash_elems2068 ,
        .list2063 =  list2063 ,
    };
    ( (  for_dash_each485 ) ( ( (  drop493 ) ( ( (  zip494 ) ( ( * (  list2063 ) ) ,  ( (  from316 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add269 ( (  from2065 ) , (  num_dash_elems2068 ) ) ) ) ) ,  ( (struct envunion488){ .fun = (  enum Unit_8  (*) (  struct env487*  ,    struct Tuple2_405  ) )lam496 , .env =  envinst487 } ) ) );
    (*  list2063 ) .f_count = (  op_dash_sub349 ( ( ( * (  list2063 ) ) .f_count ) , (  num_dash_elems2068 ) ) );
    size_t  capacity2072 = ( ( ( * (  list2063 ) ) .f_elements ) .f_count );
    if ( (  cmp221 ( (  op_dash_mul282 ( ( ( * (  list2063 ) ) .f_count ) , ( env->shrink_dash_factor2039 ) ) ) , (  capacity2072 ) ) == 0 ) ) {
        if ( (  eq276 ( ( ( * (  list2063 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free417 ) ( ( ( * (  list2063 ) ) .f_al ) ,  ( ( * (  list2063 ) ) .f_elements ) ) );
            (*  list2063 ) .f_elements = ( (  empty329 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2073 = (  op_dash_mul282 ( (  op_dash_add269 ( (  op_dash_div248 ( ( ( * (  list2063 ) ) .f_count ) , ( env->shrink_dash_factor2039 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2039 ) ) );
        struct Slice_14  new_dash_slice2074 = ( (  allocate398 ) ( ( ( * (  list2063 ) ) .f_al ) ,  (  new_dash_size2073 ) ) );
        ( (  copy_dash_to498 ) ( ( (  subslice373 ) ( ( ( * (  list2063 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2063 ) ) .f_count ) ) ) ,  (  new_dash_slice2074 ) ) );
        ( (  free417 ) ( ( ( * (  list2063 ) ) .f_al ) ,  ( ( * (  list2063 ) ) .f_elements ) ) );
        (*  list2063 ) .f_elements = (  new_dash_slice2074 );
    }
    return ( Unit_8_Unit );
}

struct envunion513 {
    int32_t  (*fun) (  struct env89*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env89 env;
};

static  enum Unit_8   trim514 (    struct List_13 *  l2116 ,    size_t  new_dash_count2118 ) {
    (*  l2116 ) .f_count = ( (  min376 ) ( (  new_dash_count2118 ) ,  ( ( * (  l2116 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   min515 (    int32_t  l1236 ,    int32_t  r1238 ) {
    if ( (  cmp362 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

struct envunion517 {
    int32_t  (*fun) (  struct env89*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env89 env;
};

struct Maybe_519 {
    enum {
        Maybe_519_None_t,
        Maybe_519_Just_t,
    } tag;
    union {
        struct {
            struct Slice_14  field0;
        } Maybe_519_Just_s;
    } stuff;
};

static struct Maybe_519 Maybe_519_Just (  struct Slice_14  field0 ) {
    return ( struct Maybe_519 ) { .tag = Maybe_519_Just_t, .stuff = { .Maybe_519_Just_s = { .field0 = field0 } } };
};

static  struct Slice_14   or_dash_else518 (    struct Maybe_519  self1733 ,    struct Slice_14  alt1735 ) {
    struct Maybe_519  dref1736 = (  self1733 );
    if ( dref1736.tag == Maybe_519_None_t ) {
        return (  alt1735 );
    }
    else {
        if ( dref1736.tag == Maybe_519_Just_t ) {
            return ( dref1736 .stuff .Maybe_519_Just_s .field0 );
        }
    }
}

static  struct Maybe_519   fmap_dash_maybe520 (    struct Maybe_219  x1275 ,    struct Slice_14 (*  fun1277 )(    struct Line_12  ) ) {
    struct Maybe_219  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_219_None_t ) {
        return ( (struct Maybe_519) { .tag = Maybe_519_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_219_Just_t ) {
            return ( ( Maybe_519_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_219_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_219   try_dash_get521 (    struct List_9 *  list2017 ,    size_t  i2019 ) {
    if ( (  cmp221 ( (  i2019 ) , ( ( * (  list2017 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_219) { .tag = Maybe_219_None_t } );
    }
    return ( ( Maybe_219_Just ) ( ( (  get370 ) ( (  list2017 ) ,  (  i2019 ) ) ) ) );
}

static  struct Slice_14   lam522 (    struct Line_12  line3763 ) {
    return ( (  to_dash_slice377 ) ( ( (  line3763 ) .f_line ) ) );
}

struct StrConcat_527 {
    struct StrView_27  field0;
    struct StrView_27  field1;
};

static struct StrConcat_527 StrConcat_527_StrConcat (  struct StrView_27  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_527 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_526 {
    struct StrConcat_527  field0;
    struct Char_65  field1;
};

static struct StrConcat_526 StrConcat_526_StrConcat (  struct StrConcat_527  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_526 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str528 (    struct StrConcat_527  self1509 ) {
    struct StrConcat_527  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str232 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str232 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str525 (    struct StrConcat_526  self1509 ) {
    struct StrConcat_526  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str528 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str240 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert524 (    bool  cond1719 ,    struct StrView_27  msg1721 ) {
    if ( ( ! (  cond1719 ) ) ) {
        ( (  print_dash_str525 ) ( ( ( StrConcat_526_StrConcat ) ( ( ( StrConcat_527_StrConcat ) ( ( (  from_dash_string257 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1721 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct Drop_532 {
    struct Zip_301  field0;
    size_t  field1;
};

static struct Drop_532 Drop_532_Drop (  struct Zip_301  field0 ,  size_t  field1 ) {
    return ( struct Drop_532 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env533 {
    ;
    ;
    ;
    size_t  num_dash_elems2068;
    struct List_9 *  list2063;
};

struct envunion534 {
    enum Unit_8  (*fun) (  struct env533*  ,    struct Tuple2_285  );
    struct env533 env;
};

static  struct Drop_532   into_dash_iter536 (    struct Drop_532  self845 ) {
    return (  self845 );
}

static  struct Maybe_306   next537 (    struct Drop_532 *  dref847 ) {
    while ( (  cmp221 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next307 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub349 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next307 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each531 (    struct Drop_532  iterable1074 ,   struct envunion534  fun1076 ) {
    struct Drop_532  temp535 = ( (  into_dash_iter536 ) ( (  iterable1074 ) ) );
    struct Drop_532 *  it1077 = ( &temp535 );
    while ( ( true ) ) {
        struct Maybe_306  dref1078 = ( (  next537 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_306_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_306_Just_t ) {
                struct envunion534  temp538 = (  fun1076 );
                ( temp538.fun ( &temp538.env ,  ( dref1078 .stuff .Maybe_306_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_532   drop539 (    struct Zip_301  iterable852 ,    size_t  i854 ) {
    struct Zip_301  it855 = ( (  into_dash_iter305 ) ( (  iterable852 ) ) );
    return ( ( Drop_532_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct Slice_11   subslice542 (    struct Slice_11  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    struct Line_12 *  begin_dash_ptr1788 = ( (  offset_dash_ptr266 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp221 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp221 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub349 ( ( (  min376 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

static  struct SliceIter_302   into_dash_iter541 (    struct List_9  self2029 ) {
    return ( (  into_dash_iter314 ) ( ( (  subslice542 ) ( ( (  self2029 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2029 ) .f_count ) ) ) ) );
}

static  struct Zip_301   zip540 (    struct List_9  left922 ,    struct FromIter_303  right924 ) {
    struct SliceIter_302  left_dash_it925 = ( (  into_dash_iter541 ) ( (  left922 ) ) );
    struct FromIter_303  right_dash_it926 = ( (  into_dash_iter315 ) ( (  right924 ) ) );
    return ( (struct Zip_301) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_8   lam543 (   struct env533* env ,    struct Tuple2_285  dref2069 ) {
    return ( (  set378 ) ( ( env->list2063 ) ,  (  op_dash_sub349 ( ( (  i32_dash_size299 ) ( ( dref2069 .field1 ) ) ) , ( env->num_dash_elems2068 ) ) ) ,  ( dref2069 .field0 ) ) );
}

struct env546 {
    ;
    struct Slice_11  dest1854;
    ;
};

struct envunion547 {
    enum Unit_8  (*fun) (  struct env546*  ,    struct Tuple2_285  );
    struct env546 env;
};

static  enum Unit_8   for_dash_each545 (    struct Zip_301  iterable1074 ,   struct envunion547  fun1076 ) {
    struct Zip_301  temp548 = ( (  into_dash_iter305 ) ( (  iterable1074 ) ) );
    struct Zip_301 *  it1077 = ( &temp548 );
    while ( ( true ) ) {
        struct Maybe_306  dref1078 = ( (  next307 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_306_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_306_Just_t ) {
                struct envunion547  temp549 = (  fun1076 );
                ( temp549.fun ( &temp549.env ,  ( dref1078 .stuff .Maybe_306_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam550 (   struct env546* env ,    struct Tuple2_285  dref1855 ) {
    return ( (  set287 ) ( ( env->dest1854 ) ,  ( (  i32_dash_size299 ) ( ( dref1855 .field1 ) ) ) ,  ( dref1855 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to544 (    struct Slice_11  src1852 ,    struct Slice_11  dest1854 ) {
    if ( (  cmp221 ( ( (  src1852 ) .f_count ) , ( (  dest1854 ) .f_count ) ) == 2 ) ) {
        ( (  panic499 ) ( ( ( StrConcat_500_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1852 ) .f_count ) ) ) ,  ( (  from_dash_string257 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1854 ) .f_count ) ) ) ,  ( (  from_dash_string257 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env546 envinst546 = {
        .dest1854 =  dest1854 ,
    };
    ( (  for_dash_each545 ) ( ( (  zip313 ) ( (  src1852 ) ,  ( (  from316 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion547){ .fun = (  enum Unit_8  (*) (  struct env546*  ,    struct Tuple2_285  ) )lam550 , .env =  envinst546 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   remove_dash_range530 (   struct env41* env ,    struct List_9 *  list2063 ,    size_t  from2065 ,    size_t  to_dash_excl2067 ) {
    if ( (  cmp221 ( (  to_dash_excl2067 ) , (  from2065 ) ) == 0 ) ) {
        ( (  panic474 ) ( ( ( StrConcat_475_StrConcat ) ( ( ( StrConcat_476_StrConcat ) ( ( ( StrConcat_477_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2065 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2067 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp221 ( (  from2065 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic289 ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2065 ) ) ) ,  ( (  from_dash_string257 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2063 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp221 ( (  to_dash_excl2067 ) , ( ( * (  list2063 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic289 ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2067 ) ) ) ,  ( (  from_dash_string257 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2063 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2068 = (  op_dash_sub349 ( (  to_dash_excl2067 ) , (  from2065 ) ) );
    struct env533 envinst533 = {
        .num_dash_elems2068 =  num_dash_elems2068 ,
        .list2063 =  list2063 ,
    };
    ( (  for_dash_each531 ) ( ( (  drop539 ) ( ( (  zip540 ) ( ( * (  list2063 ) ) ,  ( (  from316 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add269 ( (  from2065 ) , (  num_dash_elems2068 ) ) ) ) ) ,  ( (struct envunion534){ .fun = (  enum Unit_8  (*) (  struct env533*  ,    struct Tuple2_285  ) )lam543 , .env =  envinst533 } ) ) );
    (*  list2063 ) .f_count = (  op_dash_sub349 ( ( ( * (  list2063 ) ) .f_count ) , (  num_dash_elems2068 ) ) );
    size_t  capacity2072 = ( ( ( * (  list2063 ) ) .f_elements ) .f_count );
    if ( (  cmp221 ( (  op_dash_mul282 ( ( ( * (  list2063 ) ) .f_count ) , ( env->shrink_dash_factor2039 ) ) ) , (  capacity2072 ) ) == 0 ) ) {
        if ( (  eq276 ( ( ( * (  list2063 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free317 ) ( ( ( * (  list2063 ) ) .f_al ) ,  ( ( * (  list2063 ) ) .f_elements ) ) );
            (*  list2063 ) .f_elements = ( (  empty205 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2073 = (  op_dash_mul282 ( (  op_dash_add269 ( (  op_dash_div248 ( ( ( * (  list2063 ) ) .f_count ) , ( env->shrink_dash_factor2039 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2039 ) ) );
        struct Slice_11  new_dash_slice2074 = ( (  allocate277 ) ( ( ( * (  list2063 ) ) .f_al ) ,  (  new_dash_size2073 ) ) );
        ( (  copy_dash_to544 ) ( ( (  subslice542 ) ( ( ( * (  list2063 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2063 ) ) .f_count ) ) ) ,  (  new_dash_slice2074 ) ) );
        ( (  free317 ) ( ( ( * (  list2063 ) ) .f_al ) ,  ( ( * (  list2063 ) ) .f_elements ) ) );
        (*  list2063 ) .f_elements = (  new_dash_slice2074 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   change_dash_no_dash_action359 (   struct env93* env ,    struct TextBuf_99 *  self3748 ,    struct Pos_26  from_dash_pos3750 ,    struct Pos_26  to_dash_pos3752 ,    struct StrView_27  bytes3754 ) {
    struct Pos_26  from3755 = ( (  min360 ) ( (  from_dash_pos3750 ) ,  (  to_dash_pos3752 ) ) );
    struct Pos_26  to3756 = ( (  max363 ) ( (  from_dash_pos3750 ) ,  (  to_dash_pos3752 ) ) );
    if ( (  eq364 ( (  to3756 ) , (  from3755 ) ) ) ) {
        enum CAllocator_10  al3757 = ( ( ( * (  self3748 ) ) .f_buf ) .f_al );
        if ( ( (  eq276 ( ( (  size366 ) ( ( & ( ( * (  self3748 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size299 ) ( ( (  from3755 ) .f_line ) ) ) ) ) && (  eq365 ( ( (  from3755 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) ) {
            struct envunion94  temp367 = ( (struct envunion94){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add273 , .env =  env->envinst6 } );
            ( temp367.fun ( &temp367.env ,  ( & ( ( * (  self3748 ) ) .f_buf ) ) ,  ( (  mk_dash_line320 ) ( ( (  mk328 ) ( (  al3757 ) ) ) ) ) ) );
        }
        struct envunion98  temp368 = ( (struct envunion98){ .fun = (  int32_t  (*) (  struct env89*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot369 , .env =  env->envinst89 } );
        ( temp368.fun ( &temp368.env ,  (  self3748 ) ,  (  from3755 ) ,  (  bytes3754 ) ) );
    } else {
        struct List_9 *  lines_dash_buf3758 = ( & ( ( * (  self3748 ) ) .f_buf ) );
        struct Line_12 *  first_dash_line3759 = ( (  get_dash_ptr371 ) ( (  lines_dash_buf3758 ) ,  ( (  i32_dash_size299 ) ( ( (  from3755 ) .f_line ) ) ) ) );
        (*  first_dash_line3759 ) .f_invalidated = ( true );
        if ( ( (  eq365 ( ( (  from3755 ) .f_line ) , ( (  to3756 ) .f_line ) ) ) && (  cmp362 ( ( (  to3756 ) .f_bi ) , (  op_dash_add311 ( ( (  size_dash_i32233 ) ( ( (  size471 ) ( ( & ( ( * (  first_dash_line3759 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion96  temp472 = ( (struct envunion96){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  ) )remove_dash_range473 , .env =  env->envinst40 } );
            ( temp472.fun ( &temp472.env ,  ( & ( ( * (  first_dash_line3759 ) ) .f_line ) ) ,  ( (  i32_dash_size299 ) ( ( (  from3755 ) .f_bi ) ) ) ,  ( (  i32_dash_size299 ) ( ( (  to3756 ) .f_bi ) ) ) ) );
            struct envunion513  temp512 = ( (struct envunion513){ .fun = (  int32_t  (*) (  struct env89*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot369 , .env =  env->envinst89 } );
            ( temp512.fun ( &temp512.env ,  (  self3748 ) ,  (  from3755 ) ,  (  bytes3754 ) ) );
        } else {
            ( (  trim514 ) ( ( & ( ( * (  first_dash_line3759 ) ) .f_line ) ) ,  ( (  i32_dash_size299 ) ( ( (  from3755 ) .f_bi ) ) ) ) );
            struct Line_12 *  last_dash_line3760 = ( (  get_dash_ptr371 ) ( (  lines_dash_buf3758 ) ,  ( (  i32_dash_size299 ) ( ( (  to3756 ) .f_line ) ) ) ) );
            (*  last_dash_line3760 ) .f_invalidated = ( true );
            to3756 .f_bi = ( (  min515 ) ( ( (  to3756 ) .f_bi ) ,  (  op_dash_add311 ( ( (  size_dash_i32233 ) ( ( (  size471 ) ( ( & ( ( * (  last_dash_line3760 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
            if ( (  eq365 ( ( (  to3756 ) .f_bi ) , (  op_dash_add311 ( ( (  size_dash_i32233 ) ( ( (  size471 ) ( ( & ( ( * (  last_dash_line3760 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
                to3756 .f_line = (  op_dash_add311 ( ( (  to3756 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
                to3756 .f_bi = (  from_dash_integral56 ( 0 ) );
            }
            struct envunion517  temp516 = ( (struct envunion517){ .fun = (  int32_t  (*) (  struct env89*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot369 , .env =  env->envinst89 } );
            int32_t  lines_dash_added3761 = ( temp516.fun ( &temp516.env ,  (  self3748 ) ,  (  from3755 ) ,  (  bytes3754 ) ) );
            to3756 .f_line = (  op_dash_add311 ( ( (  to3756 ) .f_line ) , (  lines_dash_added3761 ) ) );
            from3755 .f_line = (  op_dash_add311 ( ( (  from3755 ) .f_line ) , (  lines_dash_added3761 ) ) );
            struct Slice_14  last_dash_line3764 = ( (  or_dash_else518 ) ( ( (  fmap_dash_maybe520 ) ( ( (  try_dash_get521 ) ( (  lines_dash_buf3758 ) ,  ( (  i32_dash_size299 ) ( ( (  to3756 ) .f_line ) ) ) ) ) ,  (  lam522 ) ) ) ,  ( (  empty329 ) ( ) ) ) );
            struct envunion95  temp523 = ( (struct envunion95){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all383 , .env =  env->envinst48 } );
            ( temp523.fun ( &temp523.env ,  ( & ( ( * (  first_dash_line3759 ) ) .f_line ) ) ,  ( (  from372 ) ( (  last_dash_line3764 ) ,  ( (  i32_dash_size299 ) ( ( (  to3756 ) .f_bi ) ) ) ) ) ) );
            ( (  assert524 ) ( (  cmp362 ( ( (  to3756 ) .f_line ) , ( (  from3755 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string257 ) ( ( "there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion97  temp529 = ( (struct envunion97){ .fun = (  enum Unit_8  (*) (  struct env41*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range530 , .env =  env->envinst41 } );
            ( temp529.fun ( &temp529.env ,  ( & ( ( * (  self3748 ) ) .f_buf ) ) ,  ( (  i32_dash_size299 ) ( (  op_dash_add311 ( ( (  from3755 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  op_dash_add269 ( ( (  i32_dash_size299 ) ( ( (  to3756 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

struct StrConcat_554 {
    struct StrView_27  field0;
    const char*  field1;
};

static struct StrConcat_554 StrConcat_554_StrConcat (  struct StrView_27  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_554 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_553 {
    struct StrConcat_554  field0;
    struct Char_65  field1;
};

static struct StrConcat_553 StrConcat_553_StrConcat (  struct StrConcat_554  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_553 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_558 {
    struct StrView_27  field0;
    struct StrConcat_553  field1;
};

static struct StrConcat_558 StrConcat_558_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_553  field1 ) {
    return ( struct StrConcat_558 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_557 {
    struct StrConcat_558  field0;
    struct Char_65  field1;
};

static struct StrConcat_557 StrConcat_557_StrConcat (  struct StrConcat_558  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_557 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str562 (    const char*  self1404 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%s" ) ,  ( 2 ) ) ) ,  (  self1404 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str561 (    struct StrConcat_554  self1509 ) {
    struct StrConcat_554  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str232 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str562 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str560 (    struct StrConcat_553  self1509 ) {
    struct StrConcat_553  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str561 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str240 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str559 (    struct StrConcat_558  self1509 ) {
    struct StrConcat_558  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str232 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str560 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str556 (    struct StrConcat_557  self1509 ) {
    struct StrConcat_557  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str559 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str240 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic555 (    struct StrConcat_553  errmsg1713 ) {
    ( (  print_dash_str556 ) ( ( ( StrConcat_557_StrConcat ) ( ( ( StrConcat_558_StrConcat ) ( ( (  from_dash_string257 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   undefined563 (  ) {
    struct StrView_27  temp564;
    return (  temp564 );
}

static  struct StrView_27   or_dash_fail552 (    struct Maybe_164  x1726 ,    struct StrConcat_553  errmsg1728 ) {
    struct Maybe_164  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_164_None_t ) {
        ( (  panic555 ) ( (  errmsg1728 ) ) );
        return ( (  undefined563 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_164_Just_t ) {
            return ( dref1729 .stuff .Maybe_164_Just_s .field0 );
        }
    }
}

static  const char*   from_dash_charlike566 (    uint8_t *  ptr73 ,    size_t  dref74 ) {
    return ( ( (const char* ) (  ptr73 ) ) );
}

static  void *   cast_dash_ptr571 (    FILE * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of572 (    FILE *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  FILE *   zeroed569 (  ) {
    FILE *  temp570;
    FILE *  x570 = (  temp570 );
    ( ( memset ) ( ( (  cast_dash_ptr571 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of572 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  FILE *   null_dash_ptr568 (  ) {
    return ( (  zeroed569 ) ( ) );
}

static  bool   is_dash_ptr_dash_null567 (    FILE *  p580 ) {
    return ( (  p580 ) == ( (  null_dash_ptr568 ) ( ) ) );
}

static  int32_t   seek_dash_end573 (  ) {
    return (  from_dash_integral56 ( 2 ) );
}

static  int32_t   seek_dash_set574 (  ) {
    return (  from_dash_integral56 ( 0 ) );
}

static  struct Char_65   nullchar575 (  ) {
    return ( (  from_dash_charlike258 ) ( ( "\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_164   try_dash_read_dash_contents565 (    const char*  filename2949 ,    enum CAllocator_10  al2951 ) {
    FILE *  file2952 = ( ( fopen ) ( (  filename2949 ) ,  ( (  from_dash_charlike566 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null567 ) ( (  file2952 ) ) ) ) {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
    ( ( fseek ) ( (  file2952 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_end573 ) ( ) ) ) );
    int32_t  file_dash_size2953 = ( ( ftell ) ( (  file2952 ) ) );
    ( ( fseek ) ( (  file2952 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_set574 ) ( ) ) ) );
    struct Slice_14  file_dash_buf2954 = ( ( (  allocate398 ) ( (  al2951 ) ,  (  op_dash_add269 ( ( (  i32_dash_size299 ) ( (  file_dash_size2953 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2954 ) .f_ptr ) ,  (  file_dash_size2953 ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  file2952 ) ) );
    ( (  set407 ) ( (  file_dash_buf2954 ) ,  ( (  i32_dash_size299 ) ( (  file_dash_size2953 ) ) ) ,  ( (  char_dash_u8429 ) ( ( (  nullchar575 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2952 ) ) );
    struct StrView_27  str2955 = ( (struct StrView_27) { .f_contents = ( (  subslice373 ) ( (  file_dash_buf2954 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub349 ( ( (  file_dash_buf2954 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_164_Just ) ( (  str2955 ) ) );
}

static  struct StrView_27   read_dash_contents551 (    const char*  filename2958 ,    enum CAllocator_10  al2960 ) {
    return ( (  or_dash_fail552 ) ( ( (  try_dash_read_dash_contents565 ) ( (  filename2958 ) ,  (  al2960 ) ) ) ,  ( ( StrConcat_553_StrConcat ) ( ( ( StrConcat_554_StrConcat ) ( ( (  from_dash_string257 ) ( ( "could not open file " ) ,  ( 20 ) ) ) ,  (  filename2958 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "!" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Pane_141   mk577 (    enum CAllocator_10  al3938 ,    struct TextBuf_99 *  buf3940 ) {
    return ( (struct Pane_141) { .f_buf = (  buf3940 ) , .f_cursor = ( (  mk343 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral56 ( 0 ) ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) , .f_mode = ( Mode_142_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_143) { .f_screen_dash_top = (  from_dash_integral56 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral56 ( 0 ) ) } ) } );
}

struct envunion580 {
    struct Tui_81  (*fun) (  struct env77*  );
    struct env77 env;
};

static  struct Termios_83   undefined584 (  ) {
    struct Termios_83  temp585;
    return (  temp585 );
}

static  int32_t   stdin_dash_fileno586 (  ) {
    return (  from_dash_integral56 ( 0 ) );
}

static  struct termios *   cast_dash_ptr587 (    struct Termios_83 *  p359 ) {
    return ( (struct termios * ) (  p359 ) );
}

static  uint32_t   u32_dash_and588 (    uint32_t  l2848 ,    uint32_t  r2850 ) {
    return ( (  l2848 ) & (  r2850 ) );
}

static  uint32_t   u32_dash_neg589 (    uint32_t  l2853 ) {
    return ( ~ (  l2853 ) );
}

struct Array_591 {
    uint32_t _arr [4];
};

struct ArrayIter_593 {
    struct Array_591  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_593   into_dash_iter594 (    struct Array_591  self2323 ) {
    return ( (struct ArrayIter_593) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_595 {
    enum {
        Maybe_595_None_t,
        Maybe_595_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_595_Just_s;
    } stuff;
};

static struct Maybe_595 Maybe_595_Just (  uint32_t  field0 ) {
    return ( struct Maybe_595 ) { .tag = Maybe_595_Just_t, .stuff = { .Maybe_595_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr599 (    struct Array_591 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   offset_dash_ptr600 (    uint32_t *  x338 ,    int64_t  count340 ) {
    uint32_t  temp601;
    return ( (uint32_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul267 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp601 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr598 (    struct Array_591 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp221 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i2254 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic225 ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2255 = ( ( (  cast_dash_ptr599 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr600 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  uint32_t   get597 (    struct Array_591 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr598 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_595   next596 (    struct ArrayIter_593 *  self2330 ) {
    if ( (  cmp221 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
    }
    uint32_t  e2332 = ( (  get597 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add269 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_595_Just ) ( (  e2332 ) ) );
}

static  uint32_t   reduce592 (    struct Array_591  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_593  it1099 = ( (  into_dash_iter594 ) ( (  iterable1093 ) ) );
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
    const char*  temp602 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp602);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp603;
    return (  temp603 );
}

static  uint32_t   u32_dash_or604 (    uint32_t  l2840 ,    uint32_t  r2842 ) {
    return ( (  l2840 ) | (  r2842 ) );
}

static  uint32_t   u32_dash_ors590 (    struct Array_591  vals2845 ) {
    return ( (  reduce592 ) ( (  vals2845 ) ,  (  from_dash_integral253 ( 0 ) ) ,  (  u32_dash_or604 ) ) );
}

static  struct Array_591   from_dash_listlike605 (    struct Array_591  self330 ) {
    return (  self330 );
}

static  uint32_t   echo606 (  ) {
    return (  from_dash_integral253 ( 8 ) );
}

static  uint32_t   icanon607 (  ) {
    return (  from_dash_integral253 ( 2 ) );
}

static  uint32_t   isig608 (  ) {
    return (  from_dash_integral253 ( 1 ) );
}

static  uint32_t   iexten609 (  ) {
    return (  from_dash_integral253 ( 32768 ) );
}

struct Array_611 {
    uint32_t _arr [5];
};

struct ArrayIter_613 {
    struct Array_611  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_613   into_dash_iter614 (    struct Array_611  self2323 ) {
    return ( (struct ArrayIter_613) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr618 (    struct Array_611 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr617 (    struct Array_611 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp221 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i2254 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic225 ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2255 = ( ( (  cast_dash_ptr618 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr600 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  uint32_t   get616 (    struct Array_611 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr617 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_595   next615 (    struct ArrayIter_613 *  self2330 ) {
    if ( (  cmp221 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
    }
    uint32_t  e2332 = ( (  get616 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add269 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_595_Just ) ( (  e2332 ) ) );
}

static  uint32_t   reduce612 (    struct Array_611  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_613  it1099 = ( (  into_dash_iter614 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_595  dref1100 = ( (  next615 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_595_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_595_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_595_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp619 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp619);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp620;
    return (  temp620 );
}

static  uint32_t   u32_dash_ors610 (    struct Array_611  vals2845 ) {
    return ( (  reduce612 ) ( (  vals2845 ) ,  (  from_dash_integral253 ( 0 ) ) ,  (  u32_dash_or604 ) ) );
}

static  struct Array_611   from_dash_listlike621 (    struct Array_611  self330 ) {
    return (  self330 );
}

static  uint32_t   brkint622 (  ) {
    return (  from_dash_integral253 ( 2 ) );
}

static  uint32_t   icrnl623 (  ) {
    return (  from_dash_integral253 ( 256 ) );
}

static  uint32_t   inpck624 (  ) {
    return (  from_dash_integral253 ( 16 ) );
}

static  uint32_t   istrip625 (  ) {
    return (  from_dash_integral253 ( 32 ) );
}

static  uint32_t   ixon626 (  ) {
    return (  from_dash_integral253 ( 1024 ) );
}

struct Array_628 {
    uint32_t _arr [1];
};

struct ArrayIter_630 {
    struct Array_628  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_630   into_dash_iter631 (    struct Array_628  self2323 ) {
    return ( (struct ArrayIter_630) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr635 (    struct Array_628 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr634 (    struct Array_628 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp221 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i2254 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic225 ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2255 = ( ( (  cast_dash_ptr635 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr600 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  uint32_t   get633 (    struct Array_628 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr634 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_595   next632 (    struct ArrayIter_630 *  self2330 ) {
    if ( (  cmp221 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
    }
    uint32_t  e2332 = ( (  get633 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add269 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_595_Just ) ( (  e2332 ) ) );
}

static  uint32_t   reduce629 (    struct Array_628  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_630  it1099 = ( (  into_dash_iter631 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_595  dref1100 = ( (  next632 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_595_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_595_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_595_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp636 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp636);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp637;
    return (  temp637 );
}

static  uint32_t   u32_dash_ors627 (    struct Array_628  vals2845 ) {
    return ( (  reduce629 ) ( (  vals2845 ) ,  (  from_dash_integral253 ( 0 ) ) ,  (  u32_dash_or604 ) ) );
}

static  struct Array_628   from_dash_listlike638 (    struct Array_628  self330 ) {
    return (  self330 );
}

static  uint32_t   opost639 (  ) {
    return (  from_dash_integral253 ( 1 ) );
}

static  uint32_t   cs8640 (  ) {
    return (  from_dash_integral253 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr643 (    struct Array_84 *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  uint8_t *   get_dash_ptr642 (    struct Array_84 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp221 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i2254 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic225 ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2255 = ( ( (  cast_dash_ptr643 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr374 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  enum Unit_8   set641 (    struct Array_84 *  arr2264 ,    size_t  i2267 ,    uint8_t  e2269 ) {
    uint8_t *  p2270 = ( (  get_dash_ptr642 ) ( (  arr2264 ) ,  (  i2267 ) ) );
    (*  p2270 ) = (  e2269 );
    return ( Unit_8_Unit );
}

static  size_t   vmin644 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime645 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush646 (  ) {
    return (  from_dash_integral56 ( 2 ) );
}

static  struct Termios_83   enable_dash_raw_dash_mode582 (  ) {
    struct Termios_83  temp583 = ( (  undefined584 ) ( ) );
    struct Termios_83 *  orig_dash_termios3335 = ( &temp583 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno586 ) ( ) ) ,  ( (  cast_dash_ptr587 ) ( (  orig_dash_termios3335 ) ) ) ) );
    struct Termios_83  raw3336 = ( * (  orig_dash_termios3335 ) );
    raw3336 .f_c_dash_lflag = ( (  u32_dash_and588 ) ( ( (  raw3336 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg589 ) ( ( (  u32_dash_ors590 ) ( ( (  from_dash_listlike605 ) ( ( (struct Array_591) { ._arr = { ( (  echo606 ) ( ) ) , ( (  icanon607 ) ( ) ) , ( (  isig608 ) ( ) ) , ( ( (  iexten609 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3336 .f_c_dash_iflag = ( (  u32_dash_and588 ) ( ( (  raw3336 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg589 ) ( ( (  u32_dash_ors610 ) ( ( (  from_dash_listlike621 ) ( ( (struct Array_611) { ._arr = { ( (  brkint622 ) ( ) ) , ( (  icrnl623 ) ( ) ) , ( (  inpck624 ) ( ) ) , ( (  istrip625 ) ( ) ) , ( ( (  ixon626 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3336 .f_c_dash_oflag = ( (  u32_dash_and588 ) ( ( (  raw3336 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg589 ) ( ( (  u32_dash_ors627 ) ( ( (  from_dash_listlike638 ) ( ( (struct Array_628) { ._arr = { ( ( (  opost639 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3336 .f_c_dash_cflag = ( (  u32_dash_or604 ) ( ( (  raw3336 ) .f_c_dash_cflag ) ,  ( (  cs8640 ) ( ) ) ) );
    ( (  set641 ) ( ( & ( (  raw3336 ) .f_c_dash_cc ) ) ,  ( (  vmin644 ) ( ) ) ,  (  from_dash_integral249 ( 0 ) ) ) );
    ( (  set641 ) ( ( & ( (  raw3336 ) .f_c_dash_cc ) ) ,  ( (  vtime645 ) ( ) ) ,  (  from_dash_integral249 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno586 ) ( ) ) ,  ( (  tcsa_dash_flush646 ) ( ) ) ,  ( (  cast_dash_ptr587 ) ( ( & (  raw3336 ) ) ) ) ) );
    return ( * (  orig_dash_termios3335 ) );
}

struct StrViewIter_650 {
    struct StrView_27  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_650   into_dash_iter652 (    struct StrViewIter_650  self1371 ) {
    return (  self1371 );
}

struct Maybe_653 {
    enum {
        Maybe_653_None_t,
        Maybe_653_Just_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } Maybe_653_Just_s;
    } stuff;
};

static struct Maybe_653 Maybe_653_Just (  struct Char_65  field0 ) {
    return ( struct Maybe_653 ) { .tag = Maybe_653_Just_t, .stuff = { .Maybe_653_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_653   next654 (    struct StrViewIter_650 *  self1374 ) {
    if ( (  cmp221 ( ( ( * (  self1374 ) ) .f_i ) , ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
    }
    uint8_t *  char_dash_ptr1375 = ( ( (  offset_dash_ptr374 ) ( ( (  cast259 ) ( ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64298 ) ( ( ( * (  self1374 ) ) .f_i ) ) ) ) ) );
    struct Char_65  char1376 = ( (  scan_dash_from_dash_mem260 ) ( (  char_dash_ptr1375 ) ) );
    (*  self1374 ) .f_i = (  op_dash_add269 ( ( ( * (  self1374 ) ) .f_i ) , ( (  char1376 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_653_Just ) ( (  char1376 ) ) );
}

static  enum Unit_8   for_dash_each649 (    struct StrViewIter_650  iterable1074 ,    enum Unit_8 (*  fun1076 )(    struct Char_65  ) ) {
    struct StrViewIter_650  temp651 = ( (  into_dash_iter652 ) ( (  iterable1074 ) ) );
    struct StrViewIter_650 *  it1077 = ( &temp651 );
    while ( ( true ) ) {
        struct Maybe_653  dref1078 = ( (  next654 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_653_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_653_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_653_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrViewIter_650   into_dash_iter656 (    struct StrView_27  self1368 ) {
    return ( (struct StrViewIter_650) { .f_ds = (  self1368 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_650   chars655 (    struct StrView_27  self1382 ) {
    return ( (  into_dash_iter656 ) ( (  self1382 ) ) );
}

static  enum Unit_8   print648 (    struct StrView_27  s2579 ) {
    ( (  for_dash_each649 ) ( ( (  chars655 ) ( (  s2579 ) ) ) ,  (  printf_dash_char241 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   hide_dash_cursor647 (  ) {
    ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_colors657 (  ) {
    ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   clear_dash_screen658 (  ) {
    ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   enable_dash_mouse659 (  ) {
    ( (  print_dash_str232 ) ( ( (  from_dash_string257 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_stdout660 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr568 ) ( ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   ptr_dash_eq664 (    enum Unit_8 *  l586 ,    enum Unit_8 *  r588 ) {
    return ( (  l586 ) == (  r588 ) );
}

static  enum Unit_8 *   cast665 (    const char*  x356 ) {
    return ( (enum Unit_8 * ) (  x356 ) );
}

static  void *   cast_dash_ptr669 (    enum Unit_8 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of670 (    enum Unit_8 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  enum Unit_8 *   zeroed667 (  ) {
    enum Unit_8 *  temp668;
    enum Unit_8 *  x570 = (  temp668 );
    ( ( memset ) ( ( (  cast_dash_ptr669 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of670 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  enum Unit_8 *   null_dash_ptr666 (  ) {
    return ( (  zeroed667 ) ( ) );
}

static  struct Maybe_353   from_dash_nullable_dash_c_dash_str663 (    const char*  s591 ) {
    if ( ( (  ptr_dash_eq664 ) ( ( (  cast665 ) ( (  s591 ) ) ) ,  ( ( (  null_dash_ptr666 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_353) { .tag = Maybe_353_None_t } );
    } else {
        return ( ( Maybe_353_Just ) ( (  s591 ) ) );
    }
}

static  struct Maybe_353   get662 (    const char*  s2612 ) {
    return ( (  from_dash_nullable_dash_c_dash_str663 ) ( ( ( getenv ) ( (  s2612 ) ) ) ) );
}

static  bool   eq671 (    const char*  l1697 ,    const char*  r1699 ) {
    return (  eq365 ( ( ( strcmp ) ( (  l1697 ) ,  (  r1699 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) );
}

static  enum ColorPalette_82   query_dash_palette661 (  ) {
    struct Maybe_353  colorterm2613 = ( (  get662 ) ( ( (  from_dash_string57 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_353  dref2614 = (  colorterm2613 );
    if ( dref2614.tag == Maybe_353_Just_t ) {
        if ( ( (  eq671 ( ( dref2614 .stuff .Maybe_353_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq671 ( ( dref2614 .stuff .Maybe_353_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_82_PaletteRGB );
        }
    }
    else {
        if ( dref2614.tag == Maybe_353_None_t ) {
        }
    }
    struct Maybe_353  dref2616 = ( (  get662 ) ( ( (  from_dash_string57 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2616.tag == Maybe_353_Just_t ) {
        if ( (  eq671 ( ( dref2616 .stuff .Maybe_353_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_82_Palette8 );
        }
    }
    else {
        if ( dref2616.tag == Maybe_353_None_t ) {
        }
    }
    return ( ColorPalette_82_Palette16 );
}

struct Tuple2_672 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_672 Tuple2_672_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_672 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_674 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr678 (    struct Winsize_674 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of679 (    struct Winsize_674  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Winsize_674   zeroed676 (  ) {
    struct Winsize_674  temp677;
    struct Winsize_674  x570 = (  temp677 );
    ( ( memset ) ( ( (  cast_dash_ptr678 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of679 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  int32_t   stdout_dash_fileno680 (  ) {
    return (  from_dash_integral56 ( 1 ) );
}

static  uint64_t   from_dash_integral682 (    int64_t  x64 ) {
    return ( (uint64_t ) (  x64 ) );
}

static  uint64_t   tiocgwinsz681 (  ) {
    return (  from_dash_integral682 ( 21523 ) );
}

static  int32_t   op_dash_neg683 (    int32_t  x227 ) {
    return ( (  from_dash_integral56 ( 0 ) ) - (  x227 ) );
}

static  bool   eq684 (    uint16_t  l121 ,    uint16_t  r123 ) {
    return ( (  l121 ) == (  r123 ) );
}

static  uint16_t   from_dash_integral685 (    int64_t  x55 ) {
    return ( (uint16_t ) (  x55 ) );
}

static  void *   cast_dash_ptr691 (    uint32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of692 (    uint32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint32_t   zeroed689 (  ) {
    uint32_t  temp690;
    uint32_t  x570 = (  temp690 );
    ( ( memset ) ( ( (  cast_dash_ptr691 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of692 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint16_t *   cast693 (    uint32_t *  x356 ) {
    return ( (uint16_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed687 (    uint16_t  x573 ) {
    uint32_t  temp688 = ( (  zeroed689 ) ( ) );
    uint32_t *  y574 = ( &temp688 );
    uint16_t *  yp575 = ( (  cast693 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u16_dash_u32686 (    uint16_t  x645 ) {
    return ( (  cast_dash_on_dash_zeroed687 ) ( (  x645 ) ) );
}

static  struct Tuple2_672   get_dash_dimensions673 (  ) {
    struct Winsize_674  temp675 = ( ( (  zeroed676 ) ( ) ) );
    struct Winsize_674 *  ws2601 = ( &temp675 );
    if ( ( (  eq365 ( ( ( ioctl ) ( ( (  stdout_dash_fileno680 ) ( ) ) ,  ( (  tiocgwinsz681 ) ( ) ) ,  (  ws2601 ) ) ) , (  op_dash_neg683 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) || (  eq684 ( ( ( * (  ws2601 ) ) .f_ws_dash_col ) , (  from_dash_integral685 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_672_Tuple2 ) ( (  from_dash_integral253 ( 80 ) ) ,  (  from_dash_integral253 ( 24 ) ) ) );
    }
    return ( ( Tuple2_672_Tuple2 ) ( ( (  u16_dash_u32686 ) ( ( ( * (  ws2601 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32686 ) ( ( ( * (  ws2601 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined696 (  ) {
    struct timespec  temp697;
    return (  temp697 );
}

static  int32_t   clock_dash_monotonic698 (  ) {
    return (  from_dash_integral56 ( 1 ) );
}

static  struct timespec   now694 (  ) {
    struct timespec  temp695 = ( (  undefined696 ) ( ) );
    struct timespec *  t3297 = ( &temp695 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic698 ) ( ) ) ,  (  t3297 ) ) );
    return ( * (  t3297 ) );
}

struct env699 {
    bool *  should_dash_resize3349;
};

struct envunion700 {
    enum Unit_8  (*fun) (  struct env699*  ,    int32_t  );
    struct env699 env;
};

struct envunion700  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig701 ) {
    struct envunion700  temp702 = _intr_sigarr [  __intr__sig701 ];
    temp702.fun ( &temp702.env ,  __intr__sig701 );
}

static  enum Unit_8  _intr_register_signal (    int32_t  __intr__sig703 ,   struct envunion700  __intr__fun704 ) {
    _intr_sigarr [  __intr__sig703 ] =  __intr__fun704;
    signal(  __intr__sig703 , _intr_sighandle );
    return Unit_8_Unit;
}

static  enum Unit_8   lam705 (   struct env699* env ,    int32_t  dref3356 ) {
    (* env->should_dash_resize3349 ) = ( true );
    return ( Unit_8_Unit );
}

static  uint32_t   fst706 (    struct Tuple2_672  dref1253 ) {
    return ( dref1253 .field0 );
}

static  uint32_t   snd707 (    struct Tuple2_672  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tui_81   mk581 (   struct env77* env ) {
    struct Termios_83  og_dash_termios3351 = ( (  enable_dash_raw_dash_mode582 ) ( ) );
    ( (  hide_dash_cursor647 ) ( ) );
    ( (  reset_dash_colors657 ) ( ) );
    ( (  clear_dash_screen658 ) ( ) );
    ( (  enable_dash_mouse659 ) ( ) );
    ( (  flush_dash_stdout660 ) ( ) );
    enum ColorPalette_82  palette3352 = ( (  query_dash_palette661 ) ( ) );
    struct Tuple2_672  dims3353 = ( (  get_dash_dimensions673 ) ( ) );
    uint32_t  fps3354 = (  from_dash_integral253 ( 60 ) );
    struct timespec  last_dash_sync3355 = ( (  now694 ) ( ) );
    struct env699 envinst699 = {
        .should_dash_resize3349 = env->should_dash_resize3349 ,
    };
    ( _intr_register_signal ( (  from_dash_integral56 ( 28 ) ) , ( (struct envunion700){ .fun = (  enum Unit_8  (*) (  struct env699*  ,    int32_t  ) )lam705 , .env =  envinst699 } ) ) );
    return ( (struct Tui_81) { .f_width = ( (  fst706 ) ( (  dims3353 ) ) ) , .f_height = ( (  snd707 ) ( (  dims3353 ) ) ) , .f_target_dash_fps = (  fps3354 ) , .f_actual_dash_fps = (  from_dash_integral253 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3355 ) , .f_fps_dash_ts = (  last_dash_sync3355 ) , .f_fps_dash_count = (  from_dash_integral253 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3351 ) , .f_palette = (  palette3352 ) , .f_should_dash_redraw = ( true ) } );
}

struct TypeSize_712 {
    size_t  f_size;
};

static  struct TypeSize_712   get_dash_typesize711 (  ) {
    struct Cell_190  temp713;
    return ( (struct TypeSize_712) { .f_size = ( sizeof( ( (  temp713 ) ) ) ) } );
}

static  struct Cell_190 *   cast_dash_ptr714 (    void *  p359 ) {
    return ( (struct Cell_190 * ) (  p359 ) );
}

static  struct Slice_189   allocate710 (    enum CAllocator_10  dref1954 ,    size_t  count1956 ) {
    if (!(  dref1954 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1957 = ( ( ( (  get_dash_typesize711 ) ( ) ) ) .f_size );
    struct Cell_190 *  ptr1958 = ( (  cast_dash_ptr714 ) ( ( ( malloc ) ( (  op_dash_mul282 ( (  size1957 ) , (  count1956 ) ) ) ) ) ) );
    return ( (struct Slice_189) { .f_ptr = (  ptr1958 ) , .f_count = (  count1956 ) } );
}

static  void *   cast_dash_ptr720 (    size_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of721 (    size_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  size_t   zeroed718 (  ) {
    size_t  temp719;
    size_t  x570 = (  temp719 );
    ( ( memset ) ( ( (  cast_dash_ptr720 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of721 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint32_t *   cast722 (    size_t *  x356 ) {
    return ( (uint32_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed716 (    uint32_t  x573 ) {
    size_t  temp717 = ( (  zeroed718 ) ( ) );
    size_t *  y574 = ( &temp717 );
    uint32_t *  yp575 = ( (  cast722 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u32_dash_size715 (    uint32_t  x651 ) {
    return ( (  cast_dash_on_dash_zeroed716 ) ( (  x651 ) ) );
}

static  uint32_t   op_dash_mul723 (    uint32_t  l240 ,    uint32_t  r242 ) {
    return ( (  l240 ) * (  r242 ) );
}

struct Range_726 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_726 Range_726_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_726 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env727 {
    struct Slice_189  s1906;
    struct Cell_190 (*  fun1908 )(    struct Cell_190  );
    ;
    ;
    ;
};

struct envunion728 {
    enum Unit_8  (*fun) (  struct env727*  ,    int32_t  );
    struct env727 env;
};

struct RangeIter_729 {
    struct Range_726  field0;
    int32_t  field1;
};

static struct RangeIter_729 RangeIter_729_RangeIter (  struct Range_726  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_729 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_729   into_dash_iter731 (    struct Range_726  dref883 ) {
    return ( ( RangeIter_729_RangeIter ) ( ( ( Range_726_Range ) ( ( dref883 .field0 ) ,  ( dref883 .field1 ) ) ) ,  ( dref883 .field0 ) ) );
}

static  struct Maybe_309   next732 (    struct RangeIter_729 *  self891 ) {
    struct RangeIter_729  dref892 = ( * (  self891 ) );
    if ( true ) {
        if ( (  cmp362 ( ( dref892 .field1 ) , ( dref892 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
        }
        struct Maybe_309  x896 = ( ( Maybe_309_Just ) ( ( dref892 .field1 ) ) );
        (*  self891 ) = ( ( RangeIter_729_RangeIter ) ( ( ( Range_726_Range ) ( ( dref892 .field0 .field0 ) ,  ( dref892 .field0 .field1 ) ) ) ,  (  op_dash_add311 ( ( dref892 .field1 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
        return (  x896 );
    }
}

static  enum Unit_8   for_dash_each725 (    struct Range_726  iterable1074 ,   struct envunion728  fun1076 ) {
    struct RangeIter_729  temp730 = ( (  into_dash_iter731 ) ( (  iterable1074 ) ) );
    struct RangeIter_729 *  it1077 = ( &temp730 );
    while ( ( true ) ) {
        struct Maybe_309  dref1078 = ( (  next732 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_309_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_309_Just_t ) {
                struct envunion728  temp733 = (  fun1076 );
                ( temp733.fun ( &temp733.env ,  ( dref1078 .stuff .Maybe_309_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Range_726   to734 (    int32_t  from874 ,    int32_t  to876 ) {
    return ( ( Range_726_Range ) ( (  from874 ) ,  (  to876 ) ) );
}

static  struct Cell_190 *   offset_dash_ptr738 (    struct Cell_190 *  x338 ,    int64_t  count340 ) {
    struct Cell_190  temp739;
    return ( (struct Cell_190 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul267 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp739 ) ) ) ) ) ) ) ) );
}

static  struct Cell_190 *   get_dash_ptr737 (    struct Slice_189  slice1758 ,    size_t  i1760 ) {
    if ( ( (  cmp221 ( (  i1760 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic289 ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1760 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1758 ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_190 *  elem_dash_ptr1761 = ( (  offset_dash_ptr738 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  i1760 ) ) ) ) );
    return (  elem_dash_ptr1761 );
}

static  enum Unit_8   set736 (    struct Slice_189  slice1775 ,    size_t  i1777 ,    struct Cell_190  x1779 ) {
    struct Cell_190 *  ep1780 = ( (  get_dash_ptr737 ) ( (  slice1775 ) ,  (  i1777 ) ) );
    (*  ep1780 ) = (  x1779 );
    return ( Unit_8_Unit );
}

struct Maybe_743 {
    enum {
        Maybe_743_None_t,
        Maybe_743_Just_t,
    } tag;
    union {
        struct {
            struct Cell_190  field0;
        } Maybe_743_Just_s;
    } stuff;
};

static struct Maybe_743 Maybe_743_Just (  struct Cell_190  field0 ) {
    return ( struct Maybe_743 ) { .tag = Maybe_743_Just_t, .stuff = { .Maybe_743_Just_s = { .field0 = field0 } } };
};

static  struct Cell_190   undefined744 (  ) {
    struct Cell_190  temp745;
    return (  temp745 );
}

static  struct Cell_190   or_dash_fail742 (    struct Maybe_743  x1726 ,    struct StrConcat_290  errmsg1728 ) {
    struct Maybe_743  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_743_None_t ) {
        ( (  panic289 ) ( (  errmsg1728 ) ) );
        return ( (  undefined744 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_743_Just_t ) {
            return ( dref1729 .stuff .Maybe_743_Just_s .field0 );
        }
    }
}

static  struct Maybe_743   try_dash_get746 (    struct Slice_189  slice1764 ,    size_t  i1766 ) {
    if ( ( (  cmp221 ( (  i1766 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i1766 ) , ( (  slice1764 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_743) { .tag = Maybe_743_None_t } );
    }
    struct Cell_190 *  elem_dash_ptr1767 = ( (  offset_dash_ptr738 ) ( ( (  slice1764 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  i1766 ) ) ) ) );
    return ( ( Maybe_743_Just ) ( ( * (  elem_dash_ptr1767 ) ) ) );
}

static  struct Cell_190   get741 (    struct Slice_189  slice1770 ,    size_t  i1772 ) {
    return ( (  or_dash_fail742 ) ( ( (  try_dash_get746 ) ( (  slice1770 ) ,  (  i1772 ) ) ) ,  ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1772 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1770 ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_190   elem_dash_get740 (    struct Slice_189  self1868 ,    size_t  idx1870 ) {
    return ( (  get741 ) ( (  self1868 ) ,  (  idx1870 ) ) );
}

static  enum Unit_8   lam735 (   struct env727* env ,    int32_t  i1910 ) {
    return ( (  set736 ) ( ( env->s1906 ) ,  ( (  i32_dash_size299 ) ( (  i1910 ) ) ) ,  ( ( env->fun1908 ) ( (  elem_dash_get740 ( ( env->s1906 ) , ( (  i32_dash_size299 ) ( (  i1910 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map724 (    struct Slice_189  s1906 ,    struct Cell_190 (*  fun1908 )(    struct Cell_190  ) ) {
    struct env727 envinst727 = {
        .s1906 =  s1906 ,
        .fun1908 =  fun1908 ,
    };
    ( (  for_dash_each725 ) ( ( (  to734 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32233 ) ( (  op_dash_sub349 ( ( (  s1906 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion728){ .fun = (  enum Unit_8  (*) (  struct env727*  ,    int32_t  ) )lam735 , .env =  envinst727 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_190   default_dash_cell748 (  ) {
    return ( (struct Cell_190) { .f_c = ( (  from_dash_charlike258 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_191) { .tag = Color_191_ColorDefault_t } ) , .f_bg = ( (struct Color_191) { .tag = Color_191_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } );
}

static  struct Cell_190   lam747 (    struct Cell_190  dref3459 ) {
    return ( (  default_dash_cell748 ) ( ) );
}

struct env751 {
    struct Slice_189  s1906;
    struct Cell_190 (*  fun1908 )(    struct Cell_190  );
    ;
    ;
    ;
};

struct envunion752 {
    enum Unit_8  (*fun) (  struct env751*  ,    int32_t  );
    struct env751 env;
};

static  enum Unit_8   for_dash_each750 (    struct Range_726  iterable1074 ,   struct envunion752  fun1076 ) {
    struct RangeIter_729  temp753 = ( (  into_dash_iter731 ) ( (  iterable1074 ) ) );
    struct RangeIter_729 *  it1077 = ( &temp753 );
    while ( ( true ) ) {
        struct Maybe_309  dref1078 = ( (  next732 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_309_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_309_Just_t ) {
                struct envunion752  temp754 = (  fun1076 );
                ( temp754.fun ( &temp754.env ,  ( dref1078 .stuff .Maybe_309_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam755 (   struct env751* env ,    int32_t  i1910 ) {
    return ( (  set736 ) ( ( env->s1906 ) ,  ( (  i32_dash_size299 ) ( (  i1910 ) ) ) ,  ( ( env->fun1908 ) ( (  elem_dash_get740 ( ( env->s1906 ) , ( (  i32_dash_size299 ) ( (  i1910 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map749 (    struct Slice_189  s1906 ,    struct Cell_190 (*  fun1908 )(    struct Cell_190  ) ) {
    struct env751 envinst751 = {
        .s1906 =  s1906 ,
        .fun1908 =  fun1908 ,
    };
    ( (  for_dash_each750 ) ( ( (  to734 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32233 ) ( (  op_dash_sub349 ( ( (  s1906 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion752){ .fun = (  enum Unit_8  (*) (  struct env751*  ,    int32_t  ) )lam755 , .env =  envinst751 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_190   lam756 (    struct Cell_190  dref3461 ) {
    return ( (  default_dash_cell748 ) ( ) );
}

static  struct Screen_188   mk_dash_screen709 (    struct Tui_81 *  tui3455 ,    enum CAllocator_10  al3457 ) {
    struct Slice_189  cur3458 = ( (  allocate710 ) ( (  al3457 ) ,  ( (  u32_dash_size715 ) ( (  op_dash_mul723 ( ( ( * (  tui3455 ) ) .f_width ) , ( ( * (  tui3455 ) ) .f_height ) ) ) ) ) ) );
    ( (  map724 ) ( (  cur3458 ) ,  (  lam747 ) ) );
    struct Slice_189  prev3460 = ( (  allocate710 ) ( (  al3457 ) ,  ( (  u32_dash_size715 ) ( (  op_dash_mul723 ( ( ( * (  tui3455 ) ) .f_width ) , ( ( * (  tui3455 ) ) .f_height ) ) ) ) ) ) );
    ( (  map749 ) ( (  prev3460 ) ,  (  lam756 ) ) );
    return ( (struct Screen_188) { .f_current = (  cur3458 ) , .f_previous = (  prev3460 ) , .f_al = (  al3457 ) , .f_tui = (  tui3455 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_191) { .tag = Color_191_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_191) { .tag = Color_191_ColorDefault_t } ) } );
}

enum MouseButton_764 {
    MouseButton_764_MouseLeft,
    MouseButton_764_MouseMiddle,
    MouseButton_764_MouseRight,
    MouseButton_764_ScrollUp,
    MouseButton_764_ScrollDown,
};

struct MouseEvent_763 {
    enum MouseButton_764  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_762 {
    enum {
        InputEvent_762_Key_t,
        InputEvent_762_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_183  field0;
        } InputEvent_762_Key_s;
        struct {
            struct MouseEvent_763  field0;
        } InputEvent_762_Mouse_s;
    } stuff;
};

static struct InputEvent_762 InputEvent_762_Key (  struct Key_183  field0 ) {
    return ( struct InputEvent_762 ) { .tag = InputEvent_762_Key_t, .stuff = { .InputEvent_762_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_762 InputEvent_762_Mouse (  struct MouseEvent_763  field0 ) {
    return ( struct InputEvent_762 ) { .tag = InputEvent_762_Mouse_t, .stuff = { .InputEvent_762_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_761 {
    enum {
        Maybe_761_None_t,
        Maybe_761_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_762  field0;
        } Maybe_761_Just_s;
    } stuff;
};

static struct Maybe_761 Maybe_761_Just (  struct InputEvent_762  field0 ) {
    return ( struct Maybe_761 ) { .tag = Maybe_761_Just_t, .stuff = { .Maybe_761_Just_s = { .field0 = field0 } } };
};

struct envunion760 {
    struct Maybe_761  (*fun) (  struct env79*  ,    struct Tui_81 *  );
    struct env79 env;
};

struct env759 {
    struct env79 envinst79;
    struct Tui_81 *  tui4430;
};

struct envunion765 {
    struct Maybe_761  (*fun) (  struct env759*  );
    struct env759 env;
};

struct FunIter_758 {
    struct envunion765  f_fun;
    bool  f_finished;
};

static  struct FunIter_758   into_dash_iter766 (    struct FunIter_758  self1028 ) {
    return (  self1028 );
}

static  struct FunIter_758   from_dash_function767 (   struct envunion765  fun1036 ) {
    return ( (struct FunIter_758) { .f_fun = (  fun1036 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions772 (   struct env78* env ,    struct Tui_81 *  tui3421 ) {
    if ( ( ! ( * ( env->should_dash_resize3349 ) ) ) ) {
        return ( false );
    }
    (*  tui3421 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3349 ) = ( false );
    struct Tuple2_672  dim3422 = ( (  get_dash_dimensions673 ) ( ) );
    uint32_t  w3423 = ( (  fst706 ) ( (  dim3422 ) ) );
    uint32_t  h3424 = ( (  snd707 ) ( (  dim3422 ) ) );
    (*  tui3421 ) .f_width = (  w3423 );
    (*  tui3421 ) .f_height = (  h3424 );
    return ( true );
}

static  char   undefined775 (  ) {
    char  temp776;
    return (  temp776 );
}

struct Maybe_777 {
    enum {
        Maybe_777_None_t,
        Maybe_777_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_777_Just_s;
    } stuff;
};

static struct Maybe_777 Maybe_777_Just (  char  field0 ) {
    return ( struct Maybe_777 ) { .tag = Maybe_777_Just_t, .stuff = { .Maybe_777_Just_s = { .field0 = field0 } } };
};

struct Pollfd_779 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr780 (    struct Pollfd_779 *  p359 ) {
    return ( (struct pollfd * ) (  p359 ) );
}

static  void *   cast_dash_ptr783 (    char *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of784 (    char  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  char   zeroed781 (  ) {
    char  temp782;
    char  x570 = (  temp782 );
    ( ( memset ) ( ( (  cast_dash_ptr783 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of784 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Maybe_777   read_dash_byte778 (    int32_t  timeout_dash_ms3343 ) {
    struct Pollfd_779  pfd3344 = ( (struct Pollfd_779) { .f_fd = (  from_dash_integral56 ( 0 ) ) , .f_events = (  from_dash_integral685 ( 1 ) ) , .f_revents = (  from_dash_integral685 ( 0 ) ) } );
    if ( (  cmp362 ( ( ( poll ) ( ( (  cast_dash_ptr780 ) ( ( & (  pfd3344 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  timeout_dash_ms3343 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_777) { .tag = Maybe_777_None_t } );
    }
    char  c3345 = ( ( (  zeroed781 ) ( ) ) );
    if ( (  cmp362 ( ( ( read ) ( ( (  stdin_dash_fileno586 ) ( ) ) ,  ( (  cast_dash_ptr783 ) ( ( & (  c3345 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_777) { .tag = Maybe_777_None_t } );
    }
    return ( ( Maybe_777_Just ) ( (  c3345 ) ) );
}

static  uint8_t   ascii_dash_u8785 (    char  c776 ) {
    return ( ( (uint8_t ) (  c776 ) ) );
}

static  char   u8_dash_ascii786 (    uint8_t  b779 ) {
    return ( ( (char ) (  b779 ) ) );
}

static  uint8_t *   cast790 (    uint32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed788 (    uint8_t  x573 ) {
    uint32_t  temp789 = ( (  zeroed689 ) ( ) );
    uint32_t *  y574 = ( &temp789 );
    uint8_t *  yp575 = ( (  cast790 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u8_dash_u32787 (    uint8_t  x672 ) {
    return ( (  cast_dash_on_dash_zeroed788 ) ( (  x672 ) ) );
}

struct Map_793 {
    struct StrViewIter_650  field0;
    uint32_t (*  field1 )(    struct Char_65  );
};

static struct Map_793 Map_793_Map (  struct StrViewIter_650  field0 ,  uint32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_793 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_793   into_dash_iter794 (    struct Map_793  self796 ) {
    return (  self796 );
}

static  struct Maybe_595   next795 (    struct Map_793 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next654 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_595_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce792 (    struct Map_793  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct Map_793  it1099 = ( (  into_dash_iter794 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_595  dref1100 = ( (  next795 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_595_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_595_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_595_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp796 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp796);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp797;
    return (  temp797 );
}

static  struct Map_793   map798 (    struct StrView_27  iterable805 ,    uint32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrViewIter_650  it808 = ( (  into_dash_iter656 ) ( (  iterable805 ) ) );
    return ( ( Map_793_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  void *   cast_dash_ptr805 (    int64_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of806 (    int64_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int64_t   zeroed803 (  ) {
    int64_t  temp804;
    int64_t  x570 = (  temp804 );
    ( ( memset ) ( ( (  cast_dash_ptr805 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of806 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast807 (    int64_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int64_t   cast_dash_on_dash_zeroed801 (    uint8_t  x573 ) {
    int64_t  temp802 = ( (  zeroed803 ) ( ) );
    int64_t *  y574 = ( &temp802 );
    uint8_t *  yp575 = ( (  cast807 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int64_t   u8_dash_i64800 (    uint8_t  x666 ) {
    return ( (  cast_dash_on_dash_zeroed801 ) ( (  x666 ) ) );
}

struct StrConcat_810 {
    struct Char_65  field0;
    struct Char_65  field1;
};

static struct StrConcat_810 StrConcat_810_StrConcat (  struct Char_65  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_810 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_809 {
    struct StrConcat_810  field0;
    struct StrView_27  field1;
};

static struct StrConcat_809 StrConcat_809_StrConcat (  struct StrConcat_810  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_809 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_814 {
    struct StrView_27  field0;
    struct StrConcat_809  field1;
};

static struct StrConcat_814 StrConcat_814_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_809  field1 ) {
    return ( struct StrConcat_814 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_813 {
    struct StrConcat_814  field0;
    struct Char_65  field1;
};

static struct StrConcat_813 StrConcat_813_StrConcat (  struct StrConcat_814  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_813 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str817 (    struct StrConcat_810  self1509 ) {
    struct StrConcat_810  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str240 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str240 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str816 (    struct StrConcat_809  self1509 ) {
    struct StrConcat_809  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str817 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str232 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str815 (    struct StrConcat_814  self1509 ) {
    struct StrConcat_814  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str232 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str816 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str812 (    struct StrConcat_813  self1509 ) {
    struct StrConcat_813  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str815 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str240 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic811 (    struct StrConcat_809  errmsg1713 ) {
    ( (  print_dash_str812 ) ( ( ( StrConcat_813_StrConcat ) ( ( ( StrConcat_814_StrConcat ) ( ( (  from_dash_string257 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t   or_dash_fail808 (    struct Maybe_390  x1726 ,    struct StrConcat_809  errmsg1728 ) {
    struct Maybe_390  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_390_None_t ) {
        ( (  panic811 ) ( (  errmsg1728 ) ) );
        return ( (  undefined426 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_390_Just_t ) {
            return ( dref1729 .stuff .Maybe_390_Just_s .field0 );
        }
    }
}

static  enum Ordering_222   cmp819 (    struct Char_65  l744 ,    struct Char_65  r746 ) {
    if ( ( ( !  eq276 ( ( (  l744 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq276 ( ( (  r746 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp820 = ( (  from_dash_string57 ) ( ( "(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp820);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( (  cmp262 ) ( ( (  char_dash_u8429 ) ( (  l744 ) ) ) ,  ( (  char_dash_u8429 ) ( (  r746 ) ) ) ) );
}

static  uint8_t   op_dash_sub821 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  uint8_t   op_dash_add822 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  struct Maybe_390   hex_dash_digit818 (    struct Char_65  c2561 ) {
    if ( ( (  cmp819 ( (  c2561 ) , ( (  from_dash_charlike258 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp819 ( (  c2561 ) , ( (  from_dash_charlike258 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_390_Just ) ( (  op_dash_sub821 ( ( (  char_dash_u8429 ) ( (  c2561 ) ) ) , ( (  char_dash_u8429 ) ( ( (  from_dash_charlike258 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp819 ( (  c2561 ) , ( (  from_dash_charlike258 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp819 ( (  c2561 ) , ( (  from_dash_charlike258 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_390_Just ) ( (  op_dash_add822 ( (  op_dash_sub821 ( ( (  char_dash_u8429 ) ( (  c2561 ) ) ) , ( (  char_dash_u8429 ) ( ( (  from_dash_charlike258 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral249 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp819 ( (  c2561 ) , ( (  from_dash_charlike258 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp819 ( (  c2561 ) , ( (  from_dash_charlike258 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_390_Just ) ( (  op_dash_add822 ( (  op_dash_sub821 ( ( (  char_dash_u8429 ) ( (  c2561 ) ) ) , ( (  char_dash_u8429 ) ( ( (  from_dash_charlike258 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral249 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_390) { .tag = Maybe_390_None_t } );
}

static  uint32_t   lam799 (    struct Char_65  c2566 ) {
    return ( (  from_dash_integral253 ) ( ( (  u8_dash_i64800 ) ( ( (  or_dash_fail808 ) ( ( (  hex_dash_digit818 ) ( (  c2566 ) ) ) ,  ( ( StrConcat_809_StrConcat ) ( ( ( StrConcat_810_StrConcat ) ( ( (  from_dash_charlike258 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2566 ) ) ) ,  ( (  from_dash_string257 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   op_dash_add824 (    uint32_t  l230 ,    uint32_t  r232 ) {
    return ( (  l230 ) + (  r232 ) );
}

static  uint32_t   lam823 (    uint32_t  elem2568 ,    uint32_t  b2570 ) {
    return (  op_dash_add824 ( (  op_dash_mul723 ( (  b2570 ) , (  from_dash_integral253 ( 16 ) ) ) ) , (  elem2568 ) ) );
}

static  uint32_t   from_dash_hex791 (    struct StrView_27  arr2564 ) {
    return ( (  reduce792 ) ( ( (  map798 ) ( (  arr2564 ) ,  (  lam799 ) ) ) ,  (  from_dash_integral253 ( 0 ) ) ,  (  lam823 ) ) );
}

static  bool   eq826 (    char  l374 ,    char  r376 ) {
    return ( (  l374 ) == (  r376 ) );
}

static  char   from_dash_charlike827 (    uint8_t *  ptr369 ,    size_t  num_dash_bytes371 ) {
    if ( ( !  eq276 ( (  num_dash_bytes371 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp828 = ( (  from_dash_string57 ) ( ( "(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp828);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( ( (char ) ( * (  ptr369 ) ) ) );
}

struct Array_829 {
    char _arr [32];
};

static  void *   cast_dash_ptr833 (    struct Array_829 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of834 (    struct Array_829  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Array_829   zeroed831 (  ) {
    struct Array_829  temp832;
    struct Array_829  x570 = (  temp832 );
    ( ( memset ) ( ( (  cast_dash_ptr833 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of834 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr838 (    struct Array_829 *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  char *   offset_dash_ptr839 (    char *  x338 ,    int64_t  count340 ) {
    char  temp840;
    return ( (char * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul267 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp840 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr837 (    struct Array_829 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp221 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i2254 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic225 ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2255 = ( ( (  cast_dash_ptr838 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr839 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  enum Unit_8   set836 (    struct Array_829 *  arr2264 ,    size_t  i2267 ,    char  e2269 ) {
    char *  p2270 = ( (  get_dash_ptr837 ) ( (  arr2264 ) ,  (  i2267 ) ) );
    (*  p2270 ) = (  e2269 );
    return ( Unit_8_Unit );
}

struct Slice_842 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail845 (    struct Maybe_777  x1726 ,    struct StrConcat_290  errmsg1728 ) {
    struct Maybe_777  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_777_None_t ) {
        ( (  panic289 ) ( (  errmsg1728 ) ) );
        return ( (  undefined775 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_777_Just_t ) {
            return ( dref1729 .stuff .Maybe_777_Just_s .field0 );
        }
    }
}

static  struct Maybe_777   try_dash_get846 (    struct Slice_842  slice1764 ,    size_t  i1766 ) {
    if ( ( (  cmp221 ( (  i1766 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i1766 ) , ( (  slice1764 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_777) { .tag = Maybe_777_None_t } );
    }
    char *  elem_dash_ptr1767 = ( (  offset_dash_ptr839 ) ( ( (  slice1764 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  i1766 ) ) ) ) );
    return ( ( Maybe_777_Just ) ( ( * (  elem_dash_ptr1767 ) ) ) );
}

static  char   get844 (    struct Slice_842  slice1770 ,    size_t  i1772 ) {
    return ( (  or_dash_fail845 ) ( ( (  try_dash_get846 ) ( (  slice1770 ) ,  (  i1772 ) ) ) ,  ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1772 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1770 ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get843 (    struct Slice_842  self1868 ,    size_t  idx1870 ) {
    return ( (  get844 ) ( (  self1868 ) ,  (  idx1870 ) ) );
}

struct Scanner_847 {
    struct StrViewIter_650  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_847   mk_dash_from_dash_str849 (    struct StrView_27  s3190 ) {
    return ( (struct Scanner_847) { .f_s = ( (  chars655 ) ( (  s3190 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  int32_t   op_dash_sub852 (    int32_t  l212 ,    int32_t  r214 ) {
    return ( (  l212 ) - (  r214 ) );
}

static  uint8_t *   offset_dash_ptr_prime_854 (    uint8_t *  x343 ,    size_t  count345 ) {
    return ( (  offset_dash_ptr374 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
}

static  struct StrView_27   substr850 (    struct StrView_27  s2173 ,    size_t  from2175 ,    size_t  to2177 ) {
    size_t  from_dash_bs2178 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_729  temp851 =  into_dash_iter731 ( ( (  to734 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub852 ( ( (  size_dash_i32233 ) ( (  from2175 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_309  __cond853 =  next732 (&temp851);
        if (  __cond853 .tag == 0 ) {
            break;
        }
        int32_t  dref2179 =  __cond853 .stuff .Maybe_309_Just_s .field0;
        if ( (  cmp221 ( (  from_dash_bs2178 ) , ( ( (  s2173 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2178 = (  op_dash_add269 ( (  from_dash_bs2178 ) , ( (  next_dash_char261 ) ( ( (  offset_dash_ptr_prime_854 ) ( ( ( (  s2173 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2178 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2180 = (  from_dash_bs2178 );
    struct RangeIter_729  temp855 =  into_dash_iter731 ( ( (  to734 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub852 ( (  op_dash_sub852 ( ( (  size_dash_i32233 ) ( (  to2177 ) ) ) , ( (  size_dash_i32233 ) ( (  from2175 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_309  __cond856 =  next732 (&temp855);
        if (  __cond856 .tag == 0 ) {
            break;
        }
        int32_t  dref2181 =  __cond856 .stuff .Maybe_309_Just_s .field0;
        if ( (  cmp221 ( (  to_dash_bs2180 ) , ( ( (  s2173 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2180 = (  op_dash_add269 ( (  to_dash_bs2180 ) , ( (  next_dash_char261 ) ( ( (  offset_dash_ptr_prime_854 ) ( ( ( (  s2173 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2180 ) ) ) ) ) ) );
    }
    return ( (struct StrView_27) { .f_contents = ( (  subslice373 ) ( ( (  s2173 ) .f_contents ) ,  (  from_dash_bs2178 ) ,  (  to_dash_bs2180 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr859 (    char *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_14   cast_dash_slice858 (    struct Slice_842  s1933 ) {
    return ( (struct Slice_14) { .f_ptr = ( (  cast_dash_ptr859 ) ( ( (  s1933 ) .f_ptr ) ) ) , .f_count = ( (  s1933 ) .f_count ) } );
}

static  struct StrView_27   from_dash_ascii_dash_slice857 (    struct Slice_842  sl2150 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice858 ) ( (  sl2150 ) ) ) } );
}

struct Maybe_860 {
    enum {
        Maybe_860_None_t,
        Maybe_860_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_860_Just_s;
    } stuff;
};

static struct Maybe_860 Maybe_860_Just (  int64_t  field0 ) {
    return ( struct Maybe_860 ) { .tag = Maybe_860_Just_t, .stuff = { .Maybe_860_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_862 {
    struct Scanner_847  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

static  struct Scanner_847   into_dash_iter865 (    struct Scanner_847  self3181 ) {
    return (  self3181 );
}

static  struct Scanner_847   into_dash_iter864 (    struct Scanner_847 *  self785 ) {
    return ( (  into_dash_iter865 ) ( ( * (  self785 ) ) ) );
}

static  struct TakeWhile_862   take_dash_while863 (    struct Scanner_847 *  it970 ,    bool (*  pred972 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_862) { .f_it = ( (  into_dash_iter864 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  bool   is_dash_digit866 (    struct Char_65  c2467 ) {
    return ( (  cmp262 ( ( (  char_dash_u8429 ) ( (  c2467 ) ) ) , ( (  char_dash_u8429 ) ( ( (  from_dash_charlike258 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp262 ( ( (  char_dash_u8429 ) ( (  c2467 ) ) ) , ( (  char_dash_u8429 ) ( ( (  from_dash_charlike258 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_653   next870 (    struct Scanner_847 *  self3176 ) {
    struct Maybe_653  dref3177 = ( (  next654 ) ( ( & ( ( * (  self3176 ) ) .f_s ) ) ) );
    if ( dref3177.tag == Maybe_653_Just_t ) {
        (*  self3176 ) .f_byte_dash_offset = (  op_dash_add269 ( ( ( * (  self3176 ) ) .f_byte_dash_offset ) , ( ( dref3177 .stuff .Maybe_653_Just_s .field0 ) .f_num_dash_bytes ) ) );
        return ( ( Maybe_653_Just ) ( ( dref3177 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref3177.tag == Maybe_653_None_t ) {
            return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
        }
    }
}

static  struct Maybe_653   next869 (    struct TakeWhile_862 *  self964 ) {
    struct Maybe_653  mx965 = ( (  next870 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_653  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_653_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_653_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_653_Just ) ( ( dref966 .stuff .Maybe_653_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
            }
        }
    }
}

static  struct TakeWhile_862   into_dash_iter872 (    struct TakeWhile_862  self961 ) {
    return (  self961 );
}

static  struct Maybe_653   head868 (    struct TakeWhile_862  it1142 ) {
    struct TakeWhile_862  temp871 = ( (  into_dash_iter872 ) ( (  it1142 ) ) );
    return ( (  next869 ) ( ( &temp871 ) ) );
}

static  bool   null867 (    struct TakeWhile_862  it1151 ) {
    struct Maybe_653  dref1152 = ( (  head868 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_653_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env875 {
    struct Scanner_847 *  it1186;
    ;
};

struct envunion876 {
    struct Maybe_653  (*fun) (  struct env875*  ,    int32_t  );
    struct env875 env;
};

static  enum Unit_8   for_dash_each874 (    struct Range_726  iterable1074 ,   struct envunion876  fun1076 ) {
    struct RangeIter_729  temp877 = ( (  into_dash_iter731 ) ( (  iterable1074 ) ) );
    struct RangeIter_729 *  it1077 = ( &temp877 );
    while ( ( true ) ) {
        struct Maybe_309  dref1078 = ( (  next732 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_309_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_309_Just_t ) {
                struct envunion876  temp878 = (  fun1076 );
                ( temp878.fun ( &temp878.env ,  ( dref1078 .stuff .Maybe_309_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_653   lam879 (   struct env875* env ,    int32_t  dref1189 ) {
    return ( (  next870 ) ( ( env->it1186 ) ) );
}

static  enum Unit_8   drop_prime_873 (    struct Scanner_847 *  it1186 ,    size_t  n1188 ) {
    struct env875 envinst875 = {
        .it1186 =  it1186 ,
    };
    ( (  for_dash_each874 ) ( ( (  to734 ) ( (  from_dash_integral56 ( 1 ) ) ,  ( (  size_dash_i32233 ) ( (  n1188 ) ) ) ) ) ,  ( (struct envunion876){ .fun = (  struct Maybe_653  (*) (  struct env875*  ,    int32_t  ) )lam879 , .env =  envinst875 } ) ) );
    return ( Unit_8_Unit );
}

static  size_t   reduce881 (    struct TakeWhile_862  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct TakeWhile_862  it1099 = ( (  into_dash_iter872 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_653  dref1100 = ( (  next869 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_653_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_653_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_653_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp882 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp882);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp883;
    return (  temp883 );
}

static  size_t   lam884 (    struct Char_65  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add269 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count880 (    struct TakeWhile_862  it1104 ) {
    return ( (  reduce881 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam884 ) ) );
}

static  struct TakeWhile_862   chars886 (    struct TakeWhile_862  self1657 ) {
    return (  self1657 );
}

static  struct Maybe_860   reduce887 (    struct TakeWhile_862  iterable1093 ,    struct Maybe_860  base1095 ,    struct Maybe_860 (*  fun1097 )(    struct Char_65  ,    struct Maybe_860  ) ) {
    struct Maybe_860  x1098 = (  base1095 );
    struct TakeWhile_862  it1099 = ( (  into_dash_iter872 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_653  dref1100 = ( (  next869 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_653_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_653_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_653_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp888 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp888);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_860  temp889;
    return (  temp889 );
}

static  void *   cast_dash_ptr897 (    int32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of898 (    int32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int32_t   zeroed895 (  ) {
    int32_t  temp896;
    int32_t  x570 = (  temp896 );
    ( ( memset ) ( ( (  cast_dash_ptr897 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of898 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast899 (    int32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed893 (    uint8_t  x573 ) {
    int32_t  temp894 = ( (  zeroed895 ) ( ) );
    int32_t *  y574 = ( &temp894 );
    uint8_t *  yp575 = ( (  cast899 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int32_t   u8_dash_i32892 (    uint8_t  x669 ) {
    return ( (  cast_dash_on_dash_zeroed893 ) ( (  x669 ) ) );
}

static  struct Maybe_309   parse_dash_digit891 (    struct Char_65  c2470 ) {
    if ( ( (  is_dash_digit866 ) ( (  c2470 ) ) ) ) {
        return ( ( Maybe_309_Just ) ( ( (  u8_dash_i32892 ) ( (  op_dash_sub821 ( ( (  char_dash_u8429 ) ( (  c2470 ) ) ) , ( (  char_dash_u8429 ) ( ( (  from_dash_charlike258 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
}

static  int64_t   i32_dash_i64900 (    int32_t  x606 ) {
    return ( (int64_t ) (  x606 ) );
}

static  struct Maybe_860   sequence_dash_maybe890 (    struct Char_65  e2476 ,    struct Maybe_860  b2478 ) {
    struct Maybe_860  dref2479 = (  b2478 );
    if ( dref2479.tag == Maybe_860_None_t ) {
        return ( (struct Maybe_860) { .tag = Maybe_860_None_t } );
    }
    else {
        if ( dref2479.tag == Maybe_860_Just_t ) {
            struct Maybe_309  dref2481 = ( (  parse_dash_digit891 ) ( (  e2476 ) ) );
            if ( dref2481.tag == Maybe_309_None_t ) {
                return ( (struct Maybe_860) { .tag = Maybe_860_None_t } );
            }
            else {
                if ( dref2481.tag == Maybe_309_Just_t ) {
                    return ( ( Maybe_860_Just ) ( (  op_dash_add450 ( (  op_dash_mul267 ( ( dref2479 .stuff .Maybe_860_Just_s .field0 ) , (  from_dash_integral348 ( 10 ) ) ) ) , ( (  i32_dash_i64900 ) ( ( dref2481 .stuff .Maybe_309_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_860   parse_dash_int885 (    struct TakeWhile_862  s2473 ) {
    struct TakeWhile_862  cs2483 = ( (  chars886 ) ( (  s2473 ) ) );
    struct Maybe_653  dref2484 = ( (  head868 ) ( (  cs2483 ) ) );
    if ( dref2484.tag == Maybe_653_Just_t ) {
        return ( (  reduce887 ) ( (  cs2483 ) ,  ( ( Maybe_860_Just ) ( (  from_dash_integral348 ( 0 ) ) ) ) ,  (  sequence_dash_maybe890 ) ) );
    }
    else {
        if ( dref2484.tag == Maybe_653_None_t ) {
            return ( (struct Maybe_860) { .tag = Maybe_860_None_t } );
        }
    }
}

static  struct Maybe_860   scan_dash_int861 (    struct Scanner_847 *  sc3193 ) {
    struct TakeWhile_862  digit_dash_chars3194 = ( (  take_dash_while863 ) ( (  sc3193 ) ,  (  is_dash_digit866 ) ) );
    if ( ( (  null867 ) ( (  digit_dash_chars3194 ) ) ) ) {
        return ( (struct Maybe_860) { .tag = Maybe_860_None_t } );
    }
    ( (  drop_prime_873 ) ( (  sc3193 ) ,  ( (  count880 ) ( (  digit_dash_chars3194 ) ) ) ) );
    return ( (  parse_dash_int885 ) ( (  digit_dash_chars3194 ) ) );
}

static  int32_t   i64_dash_i32902 (    int64_t  x618 ) {
    return ( (int32_t ) (  x618 ) );
}

struct StrConcat_904 {
    struct StrView_27  field0;
    int64_t  field1;
};

static struct StrConcat_904 StrConcat_904_StrConcat (  struct StrView_27  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_904 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_907 {
    struct StrView_27  field0;
    struct StrConcat_904  field1;
};

static struct StrConcat_907 StrConcat_907_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_904  field1 ) {
    return ( struct StrConcat_907 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_906 {
    struct StrConcat_907  field0;
    struct Char_65  field1;
};

static struct StrConcat_906 StrConcat_906_StrConcat (  struct StrConcat_907  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_906 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_912 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_911 {
    struct StrViewIter_650  f_left;
    struct IntStrIter_912  f_right;
};

struct StrConcatIter_910 {
    struct StrViewIter_650  f_left;
    struct StrConcatIter_911  f_right;
};

enum EmptyIter_914 {
    EmptyIter_914_EmptyIter,
};

struct AppendIter_913 {
    enum EmptyIter_914  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

struct StrConcatIter_909 {
    struct StrConcatIter_910  f_left;
    struct AppendIter_913  f_right;
};

static  struct StrConcatIter_909   into_dash_iter916 (    struct StrConcatIter_909  self1497 ) {
    return (  self1497 );
}

struct env923 {
    ;
    int64_t  base1210;
};

struct envunion924 {
    int64_t  (*fun) (  struct env923*  ,    int32_t  ,    int64_t  );
    struct env923 env;
};

static  int64_t   reduce922 (    struct Range_726  iterable1093 ,    int64_t  base1095 ,   struct envunion924  fun1097 ) {
    int64_t  x1098 = (  base1095 );
    struct RangeIter_729  it1099 = ( (  into_dash_iter731 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next732 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                struct envunion924  temp925 = (  fun1097 );
                x1098 = ( temp925.fun ( &temp925.env ,  ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp926 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp926);
    exit ( 1 );
    ( Unit_8_Unit );
    int64_t  temp927;
    return (  temp927 );
}

static  int64_t   lam928 (   struct env923* env ,    int32_t  item1214 ,    int64_t  x1216 ) {
    return (  op_dash_mul267 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int64_t   pow921 (    int64_t  base1210 ,    int32_t  p1212 ) {
    struct env923 envinst923 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce922 ) ( ( (  to734 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub852 ( (  p1212 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral348 ( 1 ) ) ,  ( (struct envunion924){ .fun = (  int64_t  (*) (  struct env923*  ,    int32_t  ,    int64_t  ) )lam928 , .env =  envinst923 } ) ) );
}

static  int64_t   op_dash_div929 (    int64_t  l199 ,    int64_t  r201 ) {
    return ( (  l199 ) / (  r201 ) );
}

static  uint8_t   cast930 (    int64_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  int64_t   op_dash_sub931 (    int64_t  l189 ,    int64_t  r191 ) {
    return ( (  l189 ) - (  r191 ) );
}

static  uint8_t *   cast937 (    size_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed935 (    uint8_t  x573 ) {
    size_t  temp936 = ( (  zeroed718 ) ( ) );
    size_t *  y574 = ( &temp936 );
    uint8_t *  yp575 = ( (  cast937 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u8_dash_size934 (    uint8_t  x663 ) {
    return ( (  cast_dash_on_dash_zeroed935 ) ( (  x663 ) ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer933 (    uint8_t *  ptr681 ,    uint8_t  b683 ) {
    size_t  s684 = ( ( (size_t ) (  ptr681 ) ) );
    size_t  exp685 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add269 ( (  op_dash_sub349 ( (  s684 ) , ( (  u8_dash_size934 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer246 ) ( (  ptr681 ) ) ) ) ) ) ) , (  op_dash_mul282 ( (  exp685 ) , ( (  u8_dash_size934 ) ( (  b683 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast938 (    size_t  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_65   from_dash_u8932 (    uint8_t  b772 ) {
    uint8_t *  ptr773 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer933 ) ( ( ( (  cast938 ) ( ( (  u8_dash_size934 ) ( (  b772 ) ) ) ) ) ) ,  (  from_dash_integral249 ( 103 ) ) ) );
    return ( (struct Char_65) { .f_ptr = (  ptr773 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_653   next920 (    struct IntStrIter_912 *  self1428 ) {
    if ( ( ( * (  self1428 ) ) .f_negative ) ) {
        (*  self1428 ) .f_negative = ( false );
        return ( ( Maybe_653_Just ) ( ( (  from_dash_charlike258 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp362 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
    }
    int64_t  trim_dash_down1429 = ( (  pow921 ) ( (  from_dash_integral348 ( 10 ) ) ,  (  op_dash_sub852 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int64_t  upper1430 = (  op_dash_div929 ( ( ( * (  self1428 ) ) .f_int ) , (  trim_dash_down1429 ) ) );
    int64_t  upper_dash_mask1431 = (  op_dash_mul267 ( (  op_dash_div929 ( (  upper1430 ) , (  from_dash_integral348 ( 10 ) ) ) ) , (  from_dash_integral348 ( 10 ) ) ) );
    uint8_t  digit1432 = ( ( (  cast930 ) ( (  op_dash_sub931 ( (  upper1430 ) , (  upper_dash_mask1431 ) ) ) ) ) );
    (*  self1428 ) .f_len = (  op_dash_sub852 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1433 = ( (  from_dash_u8932 ) ( (  op_dash_add822 ( (  digit1432 ) , (  from_dash_integral249 ( 48 ) ) ) ) ) );
    return ( ( Maybe_653_Just ) ( (  digit_dash_char1433 ) ) );
}

static  struct Maybe_653   next919 (    struct StrConcatIter_911 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next920 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next918 (    struct StrConcatIter_910 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next919 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next940 (    enum EmptyIter_914 *  dref792 ) {
    return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
}

static  struct Maybe_653   next939 (    struct AppendIter_913 *  self1022 ) {
    struct Maybe_653  dref1023 = ( (  next940 ) ( ( & ( ( * (  self1022 ) ) .f_it ) ) ) );
    if ( dref1023.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1023 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1023.tag == Maybe_653_None_t ) {
            if ( ( ! ( ( * (  self1022 ) ) .f_appended ) ) ) {
                (*  self1022 ) .f_appended = ( true );
                return ( ( Maybe_653_Just ) ( ( ( * (  self1022 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
        }
    }
}

static  struct Maybe_653   next917 (    struct StrConcatIter_909 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next918 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each908 (    struct StrConcatIter_909  iterable1074 ,    enum Unit_8 (*  fun1076 )(    struct Char_65  ) ) {
    struct StrConcatIter_909  temp915 = ( (  into_dash_iter916 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_909 *  it1077 = ( &temp915 );
    while ( ( true ) ) {
        struct Maybe_653  dref1078 = ( (  next917 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_653_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_653_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_653_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_222   cmp949 (    int64_t  l154 ,    int64_t  r156 ) {
    return ( builtin_int64_tcmp( (  l154 ) , (  r156 ) ) );
}

static  int64_t   op_dash_neg950 (    int64_t  l204 ) {
    return ( (  from_dash_integral348 ( 0 ) ) - (  l204 ) );
}

static  bool   eq952 (    int64_t  l101 ,    int64_t  r103 ) {
    return ( (  l101 ) == (  r103 ) );
}

static  int32_t   count_dash_digits951 (    int64_t  self1436 ) {
    if ( (  eq952 ( (  self1436 ) , (  from_dash_integral348 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1437 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp949 ( (  self1436 ) , (  from_dash_integral348 ( 0 ) ) ) == 2 ) ) {
        self1436 = (  op_dash_div929 ( (  self1436 ) , (  from_dash_integral348 ( 10 ) ) ) );
        digits1437 = (  op_dash_add311 ( (  digits1437 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1437 );
}

static  struct IntStrIter_912   int_dash_iter948 (    int64_t  int1440 ) {
    if ( (  cmp949 ( (  int1440 ) , (  from_dash_integral348 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_912) { .f_int = (  op_dash_neg950 ( (  int1440 ) ) ) , .f_len = ( (  count_dash_digits951 ) ( (  op_dash_neg950 ( (  int1440 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_912) { .f_int = (  int1440 ) , .f_len = ( (  count_dash_digits951 ) ( (  int1440 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_912   chars947 (    int64_t  self1467 ) {
    return ( (  int_dash_iter948 ) ( (  self1467 ) ) );
}

static  struct StrConcatIter_911   into_dash_iter946 (    struct StrConcat_904  dref1504 ) {
    return ( (struct StrConcatIter_911) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars947 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_911   chars945 (    struct StrConcat_904  self1515 ) {
    return ( (  into_dash_iter946 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_910   into_dash_iter944 (    struct StrConcat_907  dref1504 ) {
    return ( (struct StrConcatIter_910) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars945 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_910   chars943 (    struct StrConcat_907  self1515 ) {
    return ( (  into_dash_iter944 ) ( (  self1515 ) ) );
}

static  enum EmptyIter_914   into_dash_iter957 (    enum EmptyIter_914  self790 ) {
    return (  self790 );
}

static  struct AppendIter_913   append956 (    enum EmptyIter_914  it1006 ,    struct Char_65  e1008 ) {
    return ( (struct AppendIter_913) { .f_it = ( (  into_dash_iter957 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_913   cons955 (    enum EmptyIter_914  it1011 ,    struct Char_65  e1013 ) {
    return ( (  append956 ) ( (  it1011 ) ,  (  e1013 ) ) );
}

static  enum EmptyIter_914   nil958 (  ) {
    return ( EmptyIter_914_EmptyIter );
}

static  struct AppendIter_913   single954 (    struct Char_65  e1016 ) {
    return ( (  cons955 ) ( ( (  nil958 ) ( ) ) ,  (  e1016 ) ) );
}

static  struct AppendIter_913   chars953 (    struct Char_65  self1413 ) {
    return ( (  single954 ) ( (  self1413 ) ) );
}

static  struct StrConcatIter_909   into_dash_iter942 (    struct StrConcat_906  dref1504 ) {
    return ( (struct StrConcatIter_909) { .f_left = ( (  chars943 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_909   chars941 (    struct StrConcat_906  self1515 ) {
    return ( (  into_dash_iter942 ) ( (  self1515 ) ) );
}

static  enum Unit_8   print905 (    struct StrConcat_906  s1702 ) {
    ( (  for_dash_each908 ) ( ( (  chars941 ) ( (  s1702 ) ) ) ,  (  printf_dash_char241 ) ) );
    return ( Unit_8_Unit );
}

static  enum MouseButton_764   undefined959 (  ) {
    enum MouseButton_764  temp960;
    return (  temp960 );
}

static  enum MouseButton_764   panic_prime_903 (    struct StrConcat_904  errmsg1716 ) {
    ( (  print905 ) ( ( ( StrConcat_906_StrConcat ) ( ( ( StrConcat_907_StrConcat ) ( ( (  from_dash_string257 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1716 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( (  undefined959 ) ( ) );
}

static  enum MouseButton_764   btn_dash_to_dash_mouse_dash_button901 (    int64_t  btn3381 ) {
    return ( {  int32_t  dref3382 = ( (  i64_dash_i32902 ) ( (  btn3381 ) ) ) ;  dref3382 == 0 ? ( MouseButton_764_MouseLeft ) :  dref3382 == 1 ? ( MouseButton_764_MouseMiddle ) :  dref3382 == 2 ? ( MouseButton_764_MouseRight ) :  dref3382 == 64 ? ( MouseButton_764_ScrollUp ) :  dref3382 == 65 ? ( MouseButton_764_ScrollDown ) : ( (  panic_prime_903 ) ( ( ( StrConcat_904_StrConcat ) ( ( (  from_dash_string257 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3381 ) ) ) ) ) ; } );
}

static  struct Scanner_847   mk962 (    struct StrView_27  s3184 ) {
    return ( (struct Scanner_847) { .f_s = ( (  into_dash_iter656 ) ( (  s3184 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_761   parse_dash_csi841 (    struct Slice_842  seq3388 ) {
    if ( (  eq276 ( ( (  seq3388 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_761) { .tag = Maybe_761_None_t } );
    }
    char  last3389 = (  elem_dash_get843 ( (  seq3388 ) , (  op_dash_sub349 ( ( (  seq3388 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq826 ( (  elem_dash_get843 ( (  seq3388 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike827 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq826 ( (  last3389 ) , ( (  from_dash_charlike827 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq826 ( (  last3389 ) , ( (  from_dash_charlike827 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_847  temp848 = ( (  mk_dash_from_dash_str849 ) ( ( (  substr850 ) ( ( (  from_dash_ascii_dash_slice857 ) ( (  seq3388 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3388 ) .f_count ) ) ) ) );
        struct Scanner_847 *  sc3390 = ( &temp848 );
        struct Maybe_860  dref3391 = ( (  scan_dash_int861 ) ( (  sc3390 ) ) );
        if ( dref3391.tag == Maybe_860_None_t ) {
            return ( (struct Maybe_761) { .tag = Maybe_761_None_t } );
        }
        else {
            if ( dref3391.tag == Maybe_860_Just_t ) {
                ( (  next870 ) ( (  sc3390 ) ) );
                struct Maybe_860  dref3393 = ( (  scan_dash_int861 ) ( (  sc3390 ) ) );
                if ( dref3393.tag == Maybe_860_None_t ) {
                    return ( (struct Maybe_761) { .tag = Maybe_761_None_t } );
                }
                else {
                    if ( dref3393.tag == Maybe_860_Just_t ) {
                        ( (  next870 ) ( (  sc3390 ) ) );
                        struct Maybe_860  dref3395 = ( (  scan_dash_int861 ) ( (  sc3390 ) ) );
                        if ( dref3395.tag == Maybe_860_None_t ) {
                            return ( (struct Maybe_761) { .tag = Maybe_761_None_t } );
                        }
                        else {
                            if ( dref3395.tag == Maybe_860_Just_t ) {
                                return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Mouse ) ( ( (struct MouseEvent_763) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button901 ) ( ( dref3391 .stuff .Maybe_860_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub852 ( ( (  i64_dash_i32902 ) ( ( dref3393 .stuff .Maybe_860_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_y = (  op_dash_sub852 ( ( (  i64_dash_i32902 ) ( ( dref3395 .stuff .Maybe_860_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_pressed = (  eq826 ( (  last3389 ) , ( (  from_dash_charlike827 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq276 ( ( (  seq3388 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq826 ( (  last3389 ) , ( (  from_dash_charlike827 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_Up_t } ) ) ) ) );
        }
        if ( (  eq826 ( (  last3389 ) , ( (  from_dash_charlike827 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_Down_t } ) ) ) ) );
        }
        if ( (  eq826 ( (  last3389 ) , ( (  from_dash_charlike827 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_Right_t } ) ) ) ) );
        }
        if ( (  eq826 ( (  last3389 ) , ( (  from_dash_charlike827 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_Left_t } ) ) ) ) );
        }
        if ( (  eq826 ( (  last3389 ) , ( (  from_dash_charlike827 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_Home_t } ) ) ) ) );
        }
        if ( (  eq826 ( (  last3389 ) , ( (  from_dash_charlike827 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_761) { .tag = Maybe_761_None_t } );
    }
    if ( (  eq826 ( (  last3389 ) , ( (  from_dash_charlike827 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_847  temp961 = ( (  mk962 ) ( ( (  from_dash_ascii_dash_slice857 ) ( (  seq3388 ) ) ) ) );
        struct Scanner_847 *  sc3397 = ( &temp961 );
        struct Maybe_860  dref3398 = ( (  scan_dash_int861 ) ( (  sc3397 ) ) );
        if ( dref3398.tag == Maybe_860_None_t ) {
            return ( (struct Maybe_761) { .tag = Maybe_761_None_t } );
        }
        else {
            if ( dref3398.tag == Maybe_860_Just_t ) {
                return ( {  int32_t  dref3400 = ( (  i64_dash_i32902 ) ( ( dref3398 .stuff .Maybe_860_Just_s .field0 ) ) ) ;  dref3400 == 1 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_Home_t } ) ) ) ) ) :  dref3400 == 2 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_Insert_t } ) ) ) ) ) :  dref3400 == 3 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_Delete_t } ) ) ) ) ) :  dref3400 == 4 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_End_t } ) ) ) ) ) :  dref3400 == 5 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_PageUp_t } ) ) ) ) ) :  dref3400 == 6 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_PageDown_t } ) ) ) ) ) :  dref3400 == 15 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_F5_t } ) ) ) ) ) :  dref3400 == 17 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_F6_t } ) ) ) ) ) :  dref3400 == 18 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_F7_t } ) ) ) ) ) :  dref3400 == 19 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_F8_t } ) ) ) ) ) :  dref3400 == 20 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_F9_t } ) ) ) ) ) :  dref3400 == 21 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_F10_t } ) ) ) ) ) :  dref3400 == 23 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_F11_t } ) ) ) ) ) :  dref3400 == 24 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_F12_t } ) ) ) ) ) : ( (struct Maybe_761) { .tag = Maybe_761_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_761) { .tag = Maybe_761_None_t } );
}

static  struct Slice_842   subslice963 (    struct Slice_842  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    char *  begin_dash_ptr1788 = ( (  offset_dash_ptr839 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp221 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp221 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_842) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub349 ( ( (  min376 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_842) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

static  char *   cast965 (    struct Array_829 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_842   as_dash_slice964 (    struct Array_829 *  arr2273 ) {
    return ( (struct Slice_842) { .f_ptr = ( (  cast965 ) ( (  arr2273 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_967 {
    enum {
        Maybe_967_None_t,
        Maybe_967_Just_t,
    } tag;
    union {
        struct {
            struct Key_183  field0;
        } Maybe_967_Just_s;
    } stuff;
};

static struct Maybe_967 Maybe_967_Just (  struct Key_183  field0 ) {
    return ( struct Maybe_967 ) { .tag = Maybe_967_Just_t, .stuff = { .Maybe_967_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_967   parse_dash_ss3968 (    char  c3385 ) {
    if ( (  eq826 ( (  c3385 ) , ( (  from_dash_charlike827 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_967_Just ) ( ( (struct Key_183) { .tag = Key_183_Up_t } ) ) );
    }
    if ( (  eq826 ( (  c3385 ) , ( (  from_dash_charlike827 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_967_Just ) ( ( (struct Key_183) { .tag = Key_183_Down_t } ) ) );
    }
    if ( (  eq826 ( (  c3385 ) , ( (  from_dash_charlike827 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_967_Just ) ( ( (struct Key_183) { .tag = Key_183_Right_t } ) ) );
    }
    if ( (  eq826 ( (  c3385 ) , ( (  from_dash_charlike827 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_967_Just ) ( ( (struct Key_183) { .tag = Key_183_Left_t } ) ) );
    }
    if ( (  eq826 ( (  c3385 ) , ( (  from_dash_charlike827 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_967_Just ) ( ( (struct Key_183) { .tag = Key_183_Home_t } ) ) );
    }
    if ( (  eq826 ( (  c3385 ) , ( (  from_dash_charlike827 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_967_Just ) ( ( (struct Key_183) { .tag = Key_183_End_t } ) ) );
    }
    if ( (  eq826 ( (  c3385 ) , ( (  from_dash_charlike827 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_967_Just ) ( ( (struct Key_183) { .tag = Key_183_F1_t } ) ) );
    }
    if ( (  eq826 ( (  c3385 ) , ( (  from_dash_charlike827 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_967_Just ) ( ( (struct Key_183) { .tag = Key_183_F2_t } ) ) );
    }
    if ( (  eq826 ( (  c3385 ) , ( (  from_dash_charlike827 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_967_Just ) ( ( (struct Key_183) { .tag = Key_183_F3_t } ) ) );
    }
    if ( (  eq826 ( (  c3385 ) , ( (  from_dash_charlike827 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_967_Just ) ( ( (struct Key_183) { .tag = Key_183_F4_t } ) ) );
    }
    return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
}

static  struct Maybe_761   read_dash_key773 (  ) {
    char  temp774 = ( (  undefined775 ) ( ) );
    char *  ch3402 = ( &temp774 );
    struct Maybe_777  dref3403 = ( (  read_dash_byte778 ) ( (  from_dash_integral56 ( 0 ) ) ) );
    if ( dref3403.tag == Maybe_777_None_t ) {
        return ( (struct Maybe_761) { .tag = Maybe_761_None_t } );
    }
    else {
        if ( dref3403.tag == Maybe_777_Just_t ) {
            (*  ch3402 ) = ( dref3403 .stuff .Maybe_777_Just_s .field0 );
        }
    }
    if ( (  eq245 ( ( (  ascii_dash_u8785 ) ( ( * (  ch3402 ) ) ) ) , (  from_dash_integral249 ( 13 ) ) ) ) ) {
        return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_Enter_t } ) ) ) ) );
    }
    if ( (  eq245 ( ( (  ascii_dash_u8785 ) ( ( * (  ch3402 ) ) ) ) , (  from_dash_integral249 ( 127 ) ) ) ) ) {
        return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp262 ( ( (  ascii_dash_u8785 ) ( ( * (  ch3402 ) ) ) ) , (  from_dash_integral249 ( 27 ) ) ) == 0 ) && ( !  eq245 ( ( (  ascii_dash_u8785 ) ( ( * (  ch3402 ) ) ) ) , (  from_dash_integral249 ( 9 ) ) ) ) ) ) {
        char  letter3405 = ( (  u8_dash_ascii786 ) ( ( (  u32_dash_u8255 ) ( ( (  u32_dash_or604 ) ( ( (  u8_dash_u32787 ) ( ( (  ascii_dash_u8785 ) ( ( * (  ch3402 ) ) ) ) ) ) ,  ( (  from_dash_hex791 ) ( ( (  from_dash_string257 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( ( Key_183_Ctrl ) ( (  letter3405 ) ) ) ) ) ) );
    }
    if ( ( !  eq245 ( ( (  ascii_dash_u8785 ) ( ( * (  ch3402 ) ) ) ) , (  from_dash_integral249 ( 27 ) ) ) ) ) {
        if ( (  cmp262 ( ( (  ascii_dash_u8785 ) ( ( * (  ch3402 ) ) ) ) , (  from_dash_integral249 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key773 ) ( ) );
        } else {
            return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( ( Key_183_Char ) ( ( * (  ch3402 ) ) ) ) ) ) ) );
        }
    }
    char  temp825 = ( (  undefined775 ) ( ) );
    char *  ch23406 = ( &temp825 );
    struct Maybe_777  dref3407 = ( (  read_dash_byte778 ) ( (  from_dash_integral56 ( 50 ) ) ) );
    if ( dref3407.tag == Maybe_777_None_t ) {
        return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3407.tag == Maybe_777_Just_t ) {
            (*  ch23406 ) = ( dref3407 .stuff .Maybe_777_Just_s .field0 );
        }
    }
    if ( (  eq826 ( ( * (  ch23406 ) ) , ( (  from_dash_charlike827 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_829  temp830 = ( ( (  zeroed831 ) ( ) ) );
        struct Array_829 *  seq3409 = ( &temp830 );
        int32_t  slen3410 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp362 ( (  slen3410 ) , (  from_dash_integral56 ( 31 ) ) ) == 0 ) ) {
            char  temp835 = ( (  undefined775 ) ( ) );
            char *  sc3411 = ( &temp835 );
            struct Maybe_777  dref3412 = ( (  read_dash_byte778 ) ( (  from_dash_integral56 ( 50 ) ) ) );
            if ( dref3412.tag == Maybe_777_None_t ) {
                break;
            }
            else {
                if ( dref3412.tag == Maybe_777_Just_t ) {
                    (*  sc3411 ) = ( dref3412 .stuff .Maybe_777_Just_s .field0 );
                }
            }
            ( (  set836 ) ( (  seq3409 ) ,  ( (  i32_dash_size299 ) ( (  slen3410 ) ) ) ,  ( * (  sc3411 ) ) ) );
            slen3410 = (  op_dash_add311 ( (  slen3410 ) , (  from_dash_integral56 ( 1 ) ) ) );
            if ( ( (  cmp262 ( ( (  ascii_dash_u8785 ) ( ( * (  sc3411 ) ) ) ) , (  from_dash_integral249 ( 64 ) ) ) != 0 ) && (  cmp262 ( ( (  ascii_dash_u8785 ) ( ( * (  sc3411 ) ) ) ) , (  from_dash_integral249 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi841 ) ( ( (  subslice963 ) ( ( (  as_dash_slice964 ) ( (  seq3409 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size299 ) ( (  slen3410 ) ) ) ) ) ) );
    }
    if ( (  eq826 ( ( * (  ch23406 ) ) , ( (  from_dash_charlike827 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp966 = ( (  undefined775 ) ( ) );
        char *  sc3414 = ( &temp966 );
        struct Maybe_777  dref3415 = ( (  read_dash_byte778 ) ( (  from_dash_integral56 ( 50 ) ) ) );
        if ( dref3415.tag == Maybe_777_None_t ) {
            return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3415.tag == Maybe_777_Just_t ) {
                (*  sc3414 ) = ( dref3415 .stuff .Maybe_777_Just_s .field0 );
            }
        }
        struct Maybe_967  dref3417 = ( (  parse_dash_ss3968 ) ( ( * (  sc3414 ) ) ) );
        if ( dref3417.tag == Maybe_967_None_t ) {
            return ( (struct Maybe_761) { .tag = Maybe_761_None_t } );
        }
        else {
            if ( dref3417.tag == Maybe_967_Just_t ) {
                return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( dref3417 .stuff .Maybe_967_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_183) { .tag = Key_183_Escape_t } ) ) ) ) );
}

static  struct Maybe_761   read_dash_event770 (   struct env79* env ,    struct Tui_81 *  tui3427 ) {
    struct envunion80  temp771 = ( (struct envunion80){ .fun = (  bool  (*) (  struct env78*  ,    struct Tui_81 *  ) )update_dash_dimensions772 , .env =  env->envinst78 } );
    ( temp771.fun ( &temp771.env ,  (  tui3427 ) ) );
    struct Maybe_761  dref3428 = ( (  read_dash_key773 ) ( ) );
    if ( dref3428.tag == Maybe_761_None_t ) {
        return ( (struct Maybe_761) { .tag = Maybe_761_None_t } );
    }
    else {
        if ( dref3428.tag == Maybe_761_Just_t ) {
            (*  tui3427 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_761_Just ) ( ( dref3428 .stuff .Maybe_761_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_761   lam768 (   struct env759* env ) {
    struct envunion760  temp769 = ( (struct envunion760){ .fun = (  struct Maybe_761  (*) (  struct env79*  ,    struct Tui_81 *  ) )read_dash_event770 , .env =  env->envinst79 } );
    return ( temp769.fun ( &temp769.env ,  ( env->tui4430 ) ) );
}

static  struct Maybe_761   next970 (    struct FunIter_758 *  self1031 ) {
    if ( ( ( * (  self1031 ) ) .f_finished ) ) {
        return ( (struct Maybe_761) { .tag = Maybe_761_None_t } );
    }
    struct envunion765  temp971 = ( ( * (  self1031 ) ) .f_fun );
    struct Maybe_761  dref1032 = ( temp971.fun ( &temp971.env ) );
    if ( dref1032.tag == Maybe_761_Just_t ) {
        return ( ( Maybe_761_Just ) ( ( dref1032 .stuff .Maybe_761_Just_s .field0 ) ) );
    }
    else {
        if ( dref1032.tag == Maybe_761_None_t ) {
            (*  self1031 ) .f_finished = ( true );
            return ( (struct Maybe_761) { .tag = Maybe_761_None_t } );
        }
    }
}

struct env974 {
    struct Editor_163 *  ed4312;
    ;
};

struct envunion975 {
    enum Unit_8  (*fun) (  struct env974*  ,    struct StrView_27  );
    struct env974 env;
};

static  enum Unit_8   if_dash_just973 (    struct Maybe_164  x1291 ,   struct envunion975  fun1293 ) {
    struct Maybe_164  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_164_Just_t ) {
        struct envunion975  temp976 = (  fun1293 );
        ( temp976.fun ( &temp976.env ,  ( dref1294 .stuff .Maybe_164_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_164_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free978 (    struct StrView_27  s2168 ,    enum CAllocator_10  al2170 ) {
    ( (  free417 ) ( (  al2170 ) ,  ( (struct Slice_14) { .f_ptr = ( ( (  s2168 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam977 (   struct env974* env ,    struct StrView_27  msg4314 ) {
    ( (  free978 ) ( (  msg4314 ) ,  ( ( * ( env->ed4312 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_msg972 (    struct Editor_163 *  ed4312 ) {
    struct env974 envinst974 = {
        .ed4312 =  ed4312 ,
    };
    ( (  if_dash_just973 ) ( ( ( * (  ed4312 ) ) .f_msg ) ,  ( (struct envunion975){ .fun = (  enum Unit_8  (*) (  struct env974*  ,    struct StrView_27  ) )lam977 , .env =  envinst974 } ) ) );
    (*  ed4312 ) .f_msg = ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    return ( Unit_8_Unit );
}

struct envunion980 {
    enum Unit_8  (*fun) (  struct env177*  ,    struct Editor_163 *  ,    struct Key_183  );
    struct env177 env;
};

enum CursorMovement_986 {
    CursorMovement_986_NoChanges,
    CursorMovement_986_UpdateVI,
    CursorMovement_986_OverrideSelect,
};

struct Tuple2_988 {
    enum CursorMovement_986  field0;
    enum CursorMovement_986  field1;
};

static struct Tuple2_988 Tuple2_988_Tuple2 (  enum CursorMovement_986  field0 ,  enum CursorMovement_986  field1 ) {
    return ( struct Tuple2_988 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq987 (    enum CursorMovement_986  l4053 ,    enum CursorMovement_986  r4055 ) {
    return ( {  struct Tuple2_988  dref4056 = ( ( Tuple2_988_Tuple2 ) ( (  l4053 ) ,  (  r4055 ) ) ) ;  dref4056 .field0 == CursorMovement_986_NoChanges &&  dref4056 .field1 == CursorMovement_986_NoChanges ? ( true ) :  dref4056 .field0 == CursorMovement_986_UpdateVI &&  dref4056 .field1 == CursorMovement_986_UpdateVI ? ( true ) :  dref4056 .field0 == CursorMovement_986_OverrideSelect &&  dref4056 .field1 == CursorMovement_986_OverrideSelect ? ( true ) : ( false ) ; } );
}

static  struct StrView_27   from_dash_bytes992 (    struct Slice_14  sl2153 ) {
    return ( (struct StrView_27) { .f_contents = (  sl2153 ) } );
}

static  struct StrView_27   line991 (    struct TextBuf_99 *  self3701 ,    int32_t  li3703 ) {
    return ( (  from_dash_bytes992 ) ( ( (  to_dash_slice377 ) ( ( ( (  get370 ) ( ( & ( ( * (  self3701 ) ) .f_buf ) ) ,  ( (  i32_dash_size299 ) ( (  li3703 ) ) ) ) ) .f_line ) ) ) ) );
}

static  int32_t   maybe995 (    struct Maybe_164  x1282 ,    int32_t (*  fun1284 )(    struct StrView_27  ) ,    int32_t  default1286 ) {
    return ( {  struct Maybe_164  dref1287 = (  x1282 ) ; dref1287.tag == Maybe_164_Just_t ? ( (  fun1284 ) ( ( dref1287 .stuff .Maybe_164_Just_s .field0 ) ) ) : (  default1286 ) ; } );
}

static  struct Maybe_164   char_dash_replacement996 (    struct Char_65  c3943 ) {
    if ( (  eq448 ( (  c3943 ) , ( (  from_dash_charlike258 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_164_Just ) ( ( (  from_dash_string257 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
}

static  size_t   reduce999 (    struct StrViewIter_650  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct StrViewIter_650  it1099 = ( (  into_dash_iter652 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_653  dref1100 = ( (  next654 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_653_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_653_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_653_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1000 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1000);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1001;
    return (  temp1001 );
}

static  size_t   lam1002 (    struct Char_65  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add269 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count998 (    struct StrViewIter_650  it1104 ) {
    return ( (  reduce999 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1002 ) ) );
}

static  int32_t   lam997 (    struct StrView_27  s3948 ) {
    return ( (  size_dash_i32233 ) ( ( (  count998 ) ( ( (  chars655 ) ( (  s3948 ) ) ) ) ) ) );
}

static  int32_t   max1004 (    int32_t  l1315 ,    int32_t  r1317 ) {
    if ( (  cmp362 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  void *   cast_dash_ptr1010 (    wchar_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1011 (    wchar_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  wchar_t   zeroed1008 (  ) {
    wchar_t  temp1009;
    wchar_t  x570 = (  temp1009 );
    ( ( memset ) ( ( (  cast_dash_ptr1010 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1011 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr1012 (    uint8_t *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  size_t   cast1013 (    int64_t  x356 ) {
    return ( (size_t ) (  x356 ) );
}

struct TypeSize_1016 {
    size_t  f_size;
};

static  struct TypeSize_1016   get_dash_typesize1015 (  ) {
    wchar_t  temp1017;
    return ( (struct TypeSize_1016) { .f_size = ( sizeof( ( (  temp1017 ) ) ) ) } );
}

static  wchar_t   cast1019 (    uint32_t  x356 ) {
    return ( (wchar_t ) (  x356 ) );
}

static  wchar_t   to_dash_c_dash_wchar1006 (    struct Char_65  c750 ) {
    struct CharDestructured_242  dref751 = ( (  destructure244 ) ( (  c750 ) ) );
    if ( dref751.tag == CharDestructured_242_Ref_t ) {
        wchar_t  temp1007 = ( (  zeroed1008 ) ( ) );
        wchar_t *  wcp753 = ( &temp1007 );
        size_t  num_dash_chars754 = ( ( mbstowcs ) ( (  wcp753 ) ,  ( (  cast_dash_ptr1012 ) ( ( ( dref751 .stuff .CharDestructured_242_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq276 ( (  num_dash_chars754 ) , ( ( (  cast1013 ) ( ( (  op_dash_neg950 ( (  from_dash_integral348 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp1014 = ( (  from_dash_string57 ) ( ( "could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp1014);
            exit ( 1 );
            ( Unit_8_Unit );
        }
        return ( * (  wcp753 ) );
    }
    else {
        if ( dref751.tag == CharDestructured_242_Scalar_t ) {
            if ( ( ! (  eq276 ( ( (  size_dash_of692 ) ( ( ( dref751 .stuff .CharDestructured_242_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize1015 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp1018 = ( (  from_dash_string57 ) ( ( "Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp1018);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            return ( (  cast1019 ) ( ( ( dref751 .stuff .CharDestructured_242_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth1005 (    struct Char_65  c2588 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar1006 ) ( (  c2588 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth1003 (    struct Char_65  c3472 ) {
    return ( (  max1004 ) ( ( (  wcwidth1005 ) ( (  c3472 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width994 (    struct Char_65  c3946 ) {
    return ( (  maybe995 ) ( ( (  char_dash_replacement996 ) ( (  c3946 ) ) ) ,  (  lam997 ) ,  ( (  rendered_dash_wcwidth1003 ) ( (  c3946 ) ) ) ) );
}

static  int32_t   pos_dash_vi989 (    struct TextBuf_99 *  self3962 ,    struct Pos_26  pos3964 ) {
    int32_t  bi3965 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi3966 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_650  temp990 =  into_dash_iter652 ( ( (  chars655 ) ( ( (  line991 ) ( (  self3962 ) ,  ( (  pos3964 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_653  __cond993 =  next654 (&temp990);
        if (  __cond993 .tag == 0 ) {
            break;
        }
        struct Char_65  c3968 =  __cond993 .stuff .Maybe_653_Just_s .field0;
        bi3965 = (  op_dash_add311 ( (  bi3965 ) , ( (  size_dash_i32233 ) ( ( (  c3968 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp362 ( ( (  pos3964 ) .f_bi ) , (  bi3965 ) ) == 0 ) ) {
            break;
        }
        vi3966 = (  op_dash_add311 ( (  vi3966 ) , ( (  char_dash_screen_dash_width994 ) ( (  c3968 ) ) ) ) );
    }
    return (  vi3966 );
}

struct Tuple2_1022 {
    enum Mode_142  field0;
    enum Mode_142  field1;
};

static struct Tuple2_1022 Tuple2_1022_Tuple2 (  enum Mode_142  field0 ,  enum Mode_142  field1 ) {
    return ( struct Tuple2_1022 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1021 (    enum Mode_142  l3926 ,    enum Mode_142  r3928 ) {
    return ( {  struct Tuple2_1022  dref3929 = ( ( Tuple2_1022_Tuple2 ) ( (  l3926 ) ,  (  r3928 ) ) ) ;  dref3929 .field0 == Mode_142_Normal &&  dref3929 .field1 == Mode_142_Normal ? ( true ) :  dref3929 .field0 == Mode_142_Insert &&  dref3929 .field1 == Mode_142_Insert ? ( true ) :  dref3929 .field0 == Mode_142_Select &&  dref3929 .field1 == Mode_142_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_8   set_dash_sel1020 (    struct Pane_141 *  self4042 ,    struct Maybe_34  sel4044 ) {
    if ( ( !  eq1021 ( ( ( * (  self4042 ) ) .f_mode ) , ( Mode_142_Select ) ) ) ) {
        (*  self4042 ) .f_sel = (  sel4044 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_cursors985 (    struct Pane_141 *  self4059 ,    struct Pos_26  cur4061 ,    struct Maybe_34  sel4063 ,    enum CursorMovement_986  cursor_dash_movement_dash_type4065 ) {
    if ( ( !  eq987 ( (  cursor_dash_movement_dash_type4065 ) , ( CursorMovement_986_NoChanges ) ) ) ) {
        (*  self4059 ) .f_vi = ( (  pos_dash_vi989 ) ( ( ( * (  self4059 ) ) .f_buf ) ,  (  cur4061 ) ) );
    }
    (*  self4059 ) .f_cursor = (  cur4061 );
    if ( ( !  eq987 ( (  cursor_dash_movement_dash_type4065 ) , ( CursorMovement_986_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel1020 ) ( (  self4059 ) ,  (  sel4063 ) ) );
    } else {
        (*  self4059 ) .f_sel = (  sel4063 );
    }
    return ( Unit_8_Unit );
}

static  size_t   num_dash_bytes1024 (    struct StrView_27  self2196 ) {
    return ( ( (  self2196 ) .f_contents ) .f_count );
}

static  size_t   clamp1025 (    size_t  x1352 ,    size_t  mn1354 ,    size_t  mx1356 ) {
    if ( (  cmp221 ( (  x1352 ) , (  mn1354 ) ) == 0 ) ) {
        return (  mn1354 );
    } else {
        if ( (  cmp221 ( (  x1352 ) , (  mx1356 ) ) == 2 ) ) {
            return (  mx1356 );
        } else {
            return (  x1352 );
        }
    }
}

static  size_t   sync_dash_char1027 (    uint8_t *  p692 ) {
    size_t  i693 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb694 = ( * ( (uint8_t * ) ( ( (void*) (  p692 ) ) + (  op_dash_neg950 ( ( (  size_dash_i64298 ) ( (  i693 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp262 ( (  pb694 ) , (  from_dash_integral249 ( 128 ) ) ) != 0 ) && (  cmp262 ( (  pb694 ) , (  op_dash_add822 ( (  from_dash_integral249 ( 128 ) ) , (  from_dash_integral249 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i693 );
        }
        i693 = (  op_dash_add269 ( (  i693 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char1026 (    uint8_t *  p697 ) {
    return (  op_dash_add269 ( ( (  sync_dash_char1027 ) ( ( (  offset_dash_ptr374 ) ( (  p697 ) ,  (  op_dash_neg950 ( (  from_dash_integral348 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_26   left_dash_pos1023 (    struct TextBuf_99 *  self3722 ,    struct Pos_26  pos3724 ) {
    if ( (  eq364 ( (  pos3724 ) , ( (  mk343 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk343 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    if ( (  eq365 ( ( (  pos3724 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        ( (  assert524 ) ( (  cmp362 ( ( (  pos3724 ) .f_line ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string257 ) ( ( "previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk343 ) ( (  op_dash_sub852 ( ( (  pos3724 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  size_dash_i32233 ) ( ( (  num_dash_bytes1024 ) ( ( (  line991 ) ( (  self3722 ) ,  (  op_dash_sub852 ( ( (  pos3724 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_27  line3725 = ( (  line991 ) ( (  self3722 ) ,  ( (  pos3724 ) .f_line ) ) );
    size_t  pos_dash_bi3726 = ( (  clamp1025 ) ( ( (  i32_dash_size299 ) ( ( (  pos3724 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes1024 ) ( (  line3725 ) ) ) ) );
    size_t  off3727 = ( (  previous_dash_char1026 ) ( ( (  offset_dash_ptr374 ) ( ( ( (  line3725 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  pos_dash_bi3726 ) ) ) ) ) ) );
    return ( (  mk343 ) ( ( (  pos3724 ) .f_line ) ,  ( (  size_dash_i32233 ) ( (  op_dash_sub349 ( (  pos_dash_bi3726 ) , (  off3727 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_left984 (    struct Pane_141 *  self4071 ) {
    ( (  set_dash_cursors985 ) ( (  self4071 ) ,  ( (  left_dash_pos1023 ) ( ( ( * (  self4071 ) ) .f_buf ) ,  ( ( * (  self4071 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  struct Pane_141 *   pane1028 (    struct Editor_163 *  ed4302 ) {
    return ( & ( ( * (  ed4302 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines1031 (    struct TextBuf_99 *  self3706 ) {
    return ( (  size_dash_i32233 ) ( ( (  size366 ) ( ( & ( ( * (  self3706 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_26   right_dash_pos1030 (    struct TextBuf_99 *  self3714 ,    struct Pos_26  pos3716 ) {
    if ( (  cmp362 ( ( (  pos3716 ) .f_line ) , ( (  num_dash_lines1031 ) ( (  self3714 ) ) ) ) != 0 ) ) {
        return ( (  mk343 ) ( ( (  num_dash_lines1031 ) ( (  self3714 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    struct StrView_27  line3717 = ( (  line991 ) ( (  self3714 ) ,  ( (  pos3716 ) .f_line ) ) );
    int64_t  bi3718 = ( (  i32_dash_i64900 ) ( ( (  pos3716 ) .f_bi ) ) );
    if ( (  cmp949 ( (  bi3718 ) , ( (  size_dash_i64298 ) ( ( (  num_dash_bytes1024 ) ( (  line3717 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp362 ( (  op_dash_add311 ( ( (  pos3716 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1031 ) ( (  self3714 ) ) ) ) != 0 ) ) {
            return ( (  mk343 ) ( ( (  pos3716 ) .f_line ) ,  ( (  size_dash_i32233 ) ( ( (  num_dash_bytes1024 ) ( (  line3717 ) ) ) ) ) ) );
        }
        return ( (  mk343 ) ( (  op_dash_add311 ( ( (  pos3716 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    int32_t  off3719 = ( (  size_dash_i32233 ) ( ( (  next_dash_char261 ) ( ( (  offset_dash_ptr374 ) ( ( ( (  line3717 ) .f_contents ) .f_ptr ) ,  (  bi3718 ) ) ) ) ) ) );
    return ( (  mk343 ) ( ( (  pos3716 ) .f_line ) ,  (  op_dash_add311 ( ( (  pos3716 ) .f_bi ) , (  off3719 ) ) ) ) );
}

static  enum Unit_8   move_dash_right1029 (    struct Pane_141 *  self4068 ) {
    ( (  set_dash_cursors985 ) ( (  self4068 ) ,  ( (  right_dash_pos1030 ) ( ( ( * (  self4068 ) ) .f_buf ) ,  ( ( * (  self4068 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   vi_dash_bi1033 (    struct TextBuf_99 *  self3951 ,    int32_t  ln3953 ,    int32_t  vx3955 ) {
    int32_t  bi3956 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi3957 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_650  temp1034 =  into_dash_iter652 ( ( (  chars655 ) ( ( (  line991 ) ( (  self3951 ) ,  (  ln3953 ) ) ) ) ) );
    while (true) {
        struct Maybe_653  __cond1035 =  next654 (&temp1034);
        if (  __cond1035 .tag == 0 ) {
            break;
        }
        struct Char_65  c3959 =  __cond1035 .stuff .Maybe_653_Just_s .field0;
        vi3957 = (  op_dash_add311 ( (  vi3957 ) , ( (  char_dash_screen_dash_width994 ) ( (  c3959 ) ) ) ) );
        if ( (  cmp362 ( (  vx3955 ) , (  vi3957 ) ) == 0 ) ) {
            break;
        }
        bi3956 = (  op_dash_add311 ( (  bi3956 ) , ( (  size_dash_i32233 ) ( ( (  c3959 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi3956 );
}

static  enum Unit_8   move_dash_down1032 (    struct Pane_141 *  self4074 ,    int32_t  amnt4076 ) {
    struct Pos_26  cur4077 = ( ( * (  self4074 ) ) .f_cursor );
    int32_t  nu_dash_line4078 = ( (  min515 ) ( (  op_dash_add311 ( ( (  cur4077 ) .f_line ) , (  amnt4076 ) ) ) ,  (  op_dash_sub852 ( ( (  num_dash_lines1031 ) ( ( ( * (  self4074 ) ) .f_buf ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  vci4079 = ( ( * (  self4074 ) ) .f_vi );
    int32_t  bi4080 = ( (  vi_dash_bi1033 ) ( ( ( * (  self4074 ) ) .f_buf ) ,  (  nu_dash_line4078 ) ,  (  vci4079 ) ) );
    ( (  set_dash_cursors985 ) ( (  self4074 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4078 ) , .f_bi = (  bi4080 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_up1036 (    struct Pane_141 *  self4083 ,    int32_t  amnt4085 ) {
    struct Pos_26  cur4086 = ( ( * (  self4083 ) ) .f_cursor );
    int32_t  nu_dash_line4087 = ( (  max1004 ) ( (  op_dash_sub852 ( ( (  cur4086 ) .f_line ) , (  amnt4085 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  vci4088 = ( ( * (  self4083 ) ) .f_vi );
    int32_t  bi4089 = ( (  vi_dash_bi1033 ) ( ( ( * (  self4083 ) ) .f_buf ) ,  (  nu_dash_line4087 ) ,  (  vci4088 ) ) );
    ( (  set_dash_cursors985 ) ( (  self4083 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4087 ) , .f_bi = (  bi4089 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_insert_dash_action1038 (    struct TextBuf_99 *  self3789 ) {
    (*  self3789 ) .f_actions .f_input_dash_changeset = ( ChangesetInputType_101_NoChangeset );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_mode1037 (    struct Pane_141 *  self4047 ,    enum Mode_142  mode4049 ) {
    if ( (  eq1021 ( (  mode4049 ) , ( Mode_142_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action1038 ) ( ( ( * (  self4047 ) ) .f_buf ) ) );
    }
    (*  self4047 ) .f_mode = (  mode4049 );
    return ( Unit_8_Unit );
}

struct TakeWhile_1043 {
    struct StrViewIter_650  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1042 {
    struct TakeWhile_1043  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1042 Map_1042_Map (  struct TakeWhile_1043  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1042 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1042   into_dash_iter1045 (    struct Map_1042  self796 ) {
    return (  self796 );
}

struct Maybe_1046 {
    enum {
        Maybe_1046_None_t,
        Maybe_1046_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_1046_Just_s;
    } stuff;
};

static struct Maybe_1046 Maybe_1046_Just (  size_t  field0 ) {
    return ( struct Maybe_1046 ) { .tag = Maybe_1046_Just_t, .stuff = { .Maybe_1046_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_653   next1048 (    struct TakeWhile_1043 *  self964 ) {
    struct Maybe_653  mx965 = ( (  next654 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_653  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_653_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_653_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_653_Just ) ( ( dref966 .stuff .Maybe_653_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
            }
        }
    }
}

static  struct Maybe_1046   next1047 (    struct Map_1042 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next1048 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_1046) { .tag = Maybe_1046_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_1046_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1044 (    struct Map_1042  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1042  it1099 = ( (  into_dash_iter1045 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1046  dref1100 = ( (  next1047 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1046_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1046_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1046_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1049 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1049);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1050;
    return (  temp1050 );
}

static  size_t   lam1051 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add269 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1041 (    struct Map_1042  it1110 ) {
    return ( (  reduce1044 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1051 ) ) );
}

static  struct TakeWhile_1043   into_dash_iter1053 (    struct TakeWhile_1043  self961 ) {
    return (  self961 );
}

static  struct Map_1042   map1052 (    struct TakeWhile_1043  iterable805 ,    size_t (*  fun807 )(    struct Char_65  ) ) {
    struct TakeWhile_1043  it808 = ( (  into_dash_iter1053 ) ( (  iterable805 ) ) );
    return ( ( Map_1042_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1043   take_dash_while1054 (    struct StrView_27  it970 ,    bool (*  pred972 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1043) { .f_it = ( (  into_dash_iter656 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  bool   lam1055 (    struct Char_65  c4137 ) {
    return (  eq448 ( (  c4137 ) , ( (  from_dash_charlike258 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
}

static  size_t   lam1056 (    struct Char_65  c4139 ) {
    return ( (  c4139 ) .f_num_dash_bytes );
}

static  int32_t   indent_dash_at_dash_line1040 (    struct Pane_141 *  pane4133 ,    int32_t  line4135 ) {
    return ( (  size_dash_i32233 ) ( ( (  sum1041 ) ( ( (  map1052 ) ( ( (  take_dash_while1054 ) ( ( (  line991 ) ( ( ( * (  pane4133 ) ) .f_buf ) ,  (  line4135 ) ) ) ,  (  lam1055 ) ) ) ,  (  lam1056 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_to_dash_beginning_dash_indented1039 (    struct Pane_141 *  self4152 ) {
    struct Pos_26  cur4153 = ( ( * (  self4152 ) ) .f_cursor );
    int32_t  indent4154 = ( (  indent_dash_at_dash_line1040 ) ( (  self4152 ) ,  ( (  cur4153 ) .f_line ) ) );
    struct Pos_26  temp1057 = (  cur4153 );
    temp1057 .  f_bi = (  indent4154 );
    ( (  set_dash_cursors985 ) ( (  self4152 ) ,  ( temp1057 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_end1058 (    struct Pane_141 *  self4157 ) {
    struct Pos_26  cur4158 = ( ( * (  self4157 ) ) .f_cursor );
    struct Pos_26  temp1059 = (  cur4158 );
    temp1059 .  f_bi = ( (  size_dash_i32233 ) ( ( (  num_dash_bytes1024 ) ( ( (  line991 ) ( ( ( * (  self4157 ) ) .f_buf ) ,  ( (  cur4158 ) .f_line ) ) ) ) ) ) );
    ( (  set_dash_cursors985 ) ( (  self4157 ) ,  ( temp1059 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct SliceIter_1067 {
    struct Slice_31  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1066 {
    struct SliceIter_1067  field0;
    size_t  field1;
};

static struct Drop_1066 Drop_1066_Drop (  struct SliceIter_1067  field0 ,  size_t  field1 ) {
    return ( struct Drop_1066 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1066   into_dash_iter1068 (    struct Drop_1066  self845 ) {
    return (  self845 );
}

static  struct SliceIter_1067   into_dash_iter1071 (    struct Slice_31  self1823 ) {
    return ( (struct SliceIter_1067) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Changeset_32 *   offset_dash_ptr1073 (    struct Changeset_32 *  x338 ,    int64_t  count340 ) {
    struct Changeset_32  temp1074;
    return ( (struct Changeset_32 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul267 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1074 ) ) ) ) ) ) ) ) );
}

static  struct Slice_31   subslice1072 (    struct Slice_31  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    struct Changeset_32 *  begin_dash_ptr1788 = ( (  offset_dash_ptr1073 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp221 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp221 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub349 ( ( (  min376 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

static  struct SliceIter_1067   into_dash_iter1070 (    struct List_30  self2029 ) {
    return ( (  into_dash_iter1071 ) ( ( (  subslice1072 ) ( ( (  self2029 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2029 ) .f_count ) ) ) ) );
}

static  struct Drop_1066   drop1069 (    struct List_30  iterable852 ,    size_t  i854 ) {
    struct SliceIter_1067  it855 = ( (  into_dash_iter1070 ) ( (  iterable852 ) ) );
    return ( ( Drop_1066_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

struct Maybe_1076 {
    enum {
        Maybe_1076_None_t,
        Maybe_1076_Just_t,
    } tag;
    union {
        struct {
            struct Changeset_32  field0;
        } Maybe_1076_Just_s;
    } stuff;
};

static struct Maybe_1076 Maybe_1076_Just (  struct Changeset_32  field0 ) {
    return ( struct Maybe_1076 ) { .tag = Maybe_1076_Just_t, .stuff = { .Maybe_1076_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1076   next1078 (    struct SliceIter_1067 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp221 ( (  op_dash_add269 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1076) { .tag = Maybe_1076_None_t } );
    }
    struct Changeset_32  elem1831 = ( * ( (  offset_dash_ptr1073 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add269 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1076_Just ) ( (  elem1831 ) ) );
}

static  struct Maybe_1076   next1077 (    struct Drop_1066 *  dref847 ) {
    while ( (  cmp221 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1078 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub349 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1078 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

struct env1081 {
    enum CAllocator_10  al3664;
    ;
};

struct envunion1082 {
    enum Unit_8  (*fun) (  struct env1081*  ,    struct Action_25  );
    struct env1081 env;
};

struct SliceIter_1083 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1083   into_dash_iter1086 (    struct Slice_24  self1823 ) {
    return ( (struct SliceIter_1083) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_25 *   offset_dash_ptr1088 (    struct Action_25 *  x338 ,    int64_t  count340 ) {
    struct Action_25  temp1089;
    return ( (struct Action_25 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul267 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1089 ) ) ) ) ) ) ) ) );
}

static  struct Slice_24   subslice1087 (    struct Slice_24  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    struct Action_25 *  begin_dash_ptr1788 = ( (  offset_dash_ptr1088 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp221 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp221 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub349 ( ( (  min376 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

static  struct SliceIter_1083   into_dash_iter1085 (    struct List_23  self2029 ) {
    return ( (  into_dash_iter1086 ) ( ( (  subslice1087 ) ( ( (  self2029 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2029 ) .f_count ) ) ) ) );
}

struct Maybe_1090 {
    enum {
        Maybe_1090_None_t,
        Maybe_1090_Just_t,
    } tag;
    union {
        struct {
            struct Action_25  field0;
        } Maybe_1090_Just_s;
    } stuff;
};

static struct Maybe_1090 Maybe_1090_Just (  struct Action_25  field0 ) {
    return ( struct Maybe_1090 ) { .tag = Maybe_1090_Just_t, .stuff = { .Maybe_1090_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1090   next1091 (    struct SliceIter_1083 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp221 ( (  op_dash_add269 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1090) { .tag = Maybe_1090_None_t } );
    }
    struct Action_25  elem1831 = ( * ( (  offset_dash_ptr1088 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add269 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1090_Just ) ( (  elem1831 ) ) );
}

static  enum Unit_8   for_dash_each1080 (    struct List_23  iterable1074 ,   struct envunion1082  fun1076 ) {
    struct SliceIter_1083  temp1084 = ( (  into_dash_iter1085 ) ( (  iterable1074 ) ) );
    struct SliceIter_1083 *  it1077 = ( &temp1084 );
    while ( ( true ) ) {
        struct Maybe_1090  dref1078 = ( (  next1091 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1090_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1090_Just_t ) {
                struct envunion1082  temp1092 = (  fun1076 );
                ( temp1092.fun ( &temp1092.env ,  ( dref1078 .stuff .Maybe_1090_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_action1094 (    struct Action_25  action3657 ,    enum CAllocator_10  al3659 ) {
    ( (  free978 ) ( ( (  action3657 ) .f_fwd ) ,  (  al3659 ) ) );
    ( (  free978 ) ( ( (  action3657 ) .f_bwd ) ,  (  al3659 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1093 (   struct env1081* env ,    struct Action_25  a3666 ) {
    return ( (  free_dash_action1094 ) ( (  a3666 ) ,  ( env->al3664 ) ) );
}

static  void *   cast_dash_ptr1097 (    struct Action_25 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1096 (    enum CAllocator_10  dref1960 ,    struct Slice_24  slice1962 ) {
    if (!(  dref1960 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1097 ) ( ( (  slice1962 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free1095 (    struct List_23 *  list2036 ) {
    ( (  free1096 ) ( ( ( * (  list2036 ) ) .f_al ) ,  ( ( * (  list2036 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_changeset1079 (    struct Changeset_32  chs3662 ,    enum CAllocator_10  al3664 ) {
    struct env1081 envinst1081 = {
        .al3664 =  al3664 ,
    };
    ( (  for_dash_each1080 ) ( ( (  chs3662 ) .f_parts ) ,  ( (struct envunion1082){ .fun = (  enum Unit_8  (*) (  struct env1081*  ,    struct Action_25  ) )lam1093 , .env =  envinst1081 } ) ) );
    ( (  free1095 ) ( ( & ( (  chs3662 ) .f_parts ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1098 (    struct List_30 *  l2116 ,    size_t  new_dash_count2118 ) {
    (*  l2116 ) .f_count = ( (  min376 ) ( (  new_dash_count2118 ) ,  ( ( * (  l2116 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim_dash_actions1064 (    struct Actions_100 *  actions3680 ) {
    enum CAllocator_10  al3681 = ( ( ( * (  actions3680 ) ) .f_list ) .f_al );
    size_t  cur3682 = ( ( * (  actions3680 ) ) .f_cur );
    struct Drop_1066  temp1065 =  into_dash_iter1068 ( ( (  drop1069 ) ( ( ( * (  actions3680 ) ) .f_list ) ,  (  cur3682 ) ) ) );
    while (true) {
        struct Maybe_1076  __cond1075 =  next1077 (&temp1065);
        if (  __cond1075 .tag == 0 ) {
            break;
        }
        struct Changeset_32  action3684 =  __cond1075 .stuff .Maybe_1076_Just_s .field0;
        ( (  free_dash_changeset1079 ) ( (  action3684 ) ,  (  al3681 ) ) );
    }
    ( (  trim1098 ) ( ( & ( ( * (  actions3680 ) ) .f_list ) ) ,  (  cur3682 ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   clone_dash_01100 (    struct StrView_27  s2156 ,    enum CAllocator_10  al2158 ) {
    size_t  cnt2159 = ( ( (  s2156 ) .f_contents ) .f_count );
    struct Slice_14  nus2160 = ( (  allocate398 ) ( (  al2158 ) ,  (  op_dash_add269 ( (  cnt2159 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to498 ) ( ( (  s2156 ) .f_contents ) ,  (  nus2160 ) ) );
    ( (  set407 ) ( (  nus2160 ) ,  (  cnt2159 ) ,  ( (  char_dash_u8429 ) ( ( (  from_dash_charlike258 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( (  nus2160 ) .f_ptr ) , .f_count = (  cnt2159 ) } ) } );
}

static  struct StrView_27   clone1099 (    struct StrView_27  s2163 ,    enum CAllocator_10  al2165 ) {
    return ( (  clone_dash_01100 ) ( (  s2163 ) ,  (  al2165 ) ) );
}

static  struct Maybe_164   head1102 (    struct SplitIter_437  it1142 ) {
    struct SplitIter_437  temp1103 = ( (  into_dash_iter444 ) ( (  it1142 ) ) );
    return ( (  next458 ) ( ( &temp1103 ) ) );
}

static  struct Maybe_164   head1105 (    struct Drop_436  it1142 ) {
    struct Drop_436  temp1106 = ( (  into_dash_iter442 ) ( (  it1142 ) ) );
    return ( (  next457 ) ( ( &temp1106 ) ) );
}

static  bool   null1104 (    struct Drop_436  it1151 ) {
    struct Maybe_164  dref1152 = ( (  head1105 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_164_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   panic1108 (    struct StrView_27  errmsg1713 ) {
    ( (  print_dash_str525 ) ( ( ( StrConcat_526_StrConcat ) ( ( ( StrConcat_527_StrConcat ) ( ( (  from_dash_string257 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_455   undefined1109 (  ) {
    struct Tuple2_455  temp1110;
    return (  temp1110 );
}

static  struct Tuple2_455   or_dash_fail1107 (    struct Maybe_454  x1726 ,    struct StrView_27  errmsg1728 ) {
    struct Maybe_454  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_454_None_t ) {
        ( (  panic1108 ) ( (  errmsg1728 ) ) );
        return ( (  undefined1109 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_454_Just_t ) {
            return ( dref1729 .stuff .Maybe_454_Just_s .field0 );
        }
    }
}

static  struct Maybe_454   reduce1112 (    struct Zip_435  iterable1093 ,    struct Maybe_454  base1095 ,    struct Maybe_454 (*  fun1097 )(    struct Tuple2_455  ,    struct Maybe_454  ) ) {
    struct Maybe_454  x1098 = (  base1095 );
    struct Zip_435  it1099 = ( (  into_dash_iter440 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_454  dref1100 = ( (  next456 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_454_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_454_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_454_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1113 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1113);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_454  temp1114;
    return (  temp1114 );
}

static  struct Maybe_454   lam1115 (    struct Tuple2_455  e1147 ,    struct Maybe_454  dref1148 ) {
    return ( ( Maybe_454_Just ) ( (  e1147 ) ) );
}

static  struct Maybe_454   last1111 (    struct Zip_435  it1145 ) {
    return ( (  reduce1112 ) ( (  it1145 ) ,  ( (struct Maybe_454) { .tag = Maybe_454_None_t } ) ,  (  lam1115 ) ) );
}

static  int32_t   snd1116 (    struct Tuple2_455  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct StrView_27   fst1117 (    struct Tuple2_455  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_26   pos_dash_after_dash_str1101 (    struct TextBuf_99 *  self3777 ,    struct StrView_27  bytes3779 ,    struct Pos_26  from3781 ) {
    struct SplitIter_437  lines3782 = ( (  split_dash_by_dash_each445 ) ( (  bytes3779 ) ,  ( (  from_dash_charlike258 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_27  first_dash_line3783 = ( (  or_dash_else420 ) ( ( (  head1102 ) ( (  lines3782 ) ) ) ,  ( (  from_dash_string257 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_436  headless3784 = ( (  drop443 ) ( (  lines3782 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1104 ) ( (  headless3784 ) ) ) ) {
        struct Pos_26  next_dash_pos3785 = ( (  mk343 ) ( ( (  from3781 ) .f_line ) ,  (  op_dash_add311 ( ( (  from3781 ) .f_bi ) , ( (  size_dash_i32233 ) ( ( (  num_dash_bytes1024 ) ( (  first_dash_line3783 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3785 );
    } else {
        struct Tuple2_455  last_dash_line3786 = ( (  or_dash_fail1107 ) ( ( (  last1111 ) ( ( (  zip441 ) ( (  headless3784 ) ,  ( (  from316 ) ( (  op_dash_add311 ( ( (  from3781 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string257 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk343 ) ( ( (  snd1116 ) ( (  last_dash_line3786 ) ) ) ,  ( (  size_dash_i32233 ) ( ( (  num_dash_bytes1024 ) ( ( (  fst1117 ) ( (  last_dash_line3786 ) ) ) ) ) ) ) ) );
    }
}

struct envunion1123 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

static  struct StrView_27   from_dash_charlike1124 (    uint8_t *  ptr77 ,    size_t  count79 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = (  ptr77 ) , .f_count = (  count79 ) } ) } );
}

struct envunion1128 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion1130 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion1132 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

static  struct StrView_27   str_dash_between1119 (   struct env110* env ,    struct TextBuf_99 *  self3809 ,    struct Pos_26  from3811 ,    struct Pos_26  to3813 ) {
    enum CAllocator_10  al3814 = ( ( ( * (  self3809 ) ) .f_buf ) .f_al );
    if ( (  eq365 ( ( (  from3811 ) .f_line ) , ( (  to3813 ) .f_line ) ) ) ) {
        size_t  from_dash_bi3815 = ( (  i32_dash_size299 ) ( ( (  min515 ) ( ( (  from3811 ) .f_bi ) ,  ( (  to3813 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3816 = ( (  i32_dash_size299 ) ( ( (  max1004 ) ( ( (  from3811 ) .f_bi ) ,  ( (  to3813 ) .f_bi ) ) ) ) );
        return ( (  clone1099 ) ( ( (  byte_dash_substr430 ) ( ( (  line991 ) ( (  self3809 ) ,  ( (  from3811 ) .f_line ) ) ) ,  (  from_dash_bi3815 ) ,  (  to_dash_bi3816 ) ) ) ,  (  al3814 ) ) );
    } else {
        struct Pos_26  from_dash_pos3817 = ( (  min360 ) ( (  from3811 ) ,  (  to3813 ) ) );
        struct Pos_26  to_dash_pos3818 = ( (  max363 ) ( (  from3811 ) ,  (  to3813 ) ) );
        struct List_13  temp1120 = ( (  mk328 ) ( (  al3814 ) ) );
        struct List_13 *  sb3819 = ( &temp1120 );
        struct StrView_27  first_dash_line3820 = ( (  line991 ) ( (  self3809 ) ,  ( (  from_dash_pos3817 ) .f_line ) ) );
        struct envunion111  temp1121 = ( (struct envunion111){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all383 , .env =  env->envinst48 } );
        ( temp1121.fun ( &temp1121.env ,  (  sb3819 ) ,  ( ( (  byte_dash_substr430 ) ( (  first_dash_line3820 ) ,  ( (  i32_dash_size299 ) ( ( (  from_dash_pos3817 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1024 ) ( (  first_dash_line3820 ) ) ) ) ) .f_contents ) ) );
        struct envunion1123  temp1122 = ( (struct envunion1123){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all383 , .env =  env->envinst48 } );
        ( temp1122.fun ( &temp1122.env ,  (  sb3819 ) ,  ( ( ( (  from_dash_charlike1124 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_729  temp1125 =  into_dash_iter731 ( ( (  to734 ) ( (  op_dash_add311 ( ( (  from_dash_pos3817 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  op_dash_sub852 ( ( (  to_dash_pos3818 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_309  __cond1126 =  next732 (&temp1125);
            if (  __cond1126 .tag == 0 ) {
                break;
            }
            int32_t  i3822 =  __cond1126 .stuff .Maybe_309_Just_s .field0;
            struct envunion1128  temp1127 = ( (struct envunion1128){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all383 , .env =  env->envinst48 } );
            ( temp1127.fun ( &temp1127.env ,  (  sb3819 ) ,  ( ( (  line991 ) ( (  self3809 ) ,  (  i3822 ) ) ) .f_contents ) ) );
            struct envunion1130  temp1129 = ( (struct envunion1130){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all383 , .env =  env->envinst48 } );
            ( temp1129.fun ( &temp1129.env ,  (  sb3819 ) ,  ( ( ( (  from_dash_charlike1124 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1132  temp1131 = ( (struct envunion1132){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all383 , .env =  env->envinst48 } );
        ( temp1131.fun ( &temp1131.env ,  (  sb3819 ) ,  ( ( (  byte_dash_substr430 ) ( ( (  line991 ) ( (  self3809 ) ,  ( (  to_dash_pos3818 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size299 ) ( ( (  to_dash_pos3818 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes992 ) ( ( (  to_dash_slice377 ) ( ( * (  sb3819 ) ) ) ) ) );
    }
}

static  bool   is_dash_none1133 (    struct Maybe_128  m1264 ) {
    struct Maybe_128  dref1265 = (  m1264 );
    if ( dref1265.tag == Maybe_128_None_t ) {
        return ( true );
    }
    else {
        if ( dref1265.tag == Maybe_128_Just_t ) {
            return ( false );
        }
    }
}

struct Tuple2_1135 {
    enum ChangesetInputType_101  field0;
    enum ChangesetInputType_101  field1;
};

static struct Tuple2_1135 Tuple2_1135_Tuple2 (  enum ChangesetInputType_101  field0 ,  enum ChangesetInputType_101  field1 ) {
    return ( struct Tuple2_1135 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1134 (    enum ChangesetInputType_101  l3670 ,    enum ChangesetInputType_101  r3672 ) {
    return ( {  struct Tuple2_1135  dref3673 = ( ( Tuple2_1135_Tuple2 ) ( (  l3670 ) ,  (  r3672 ) ) ) ;  dref3673 .field0 == ChangesetInputType_101_NoChangeset &&  dref3673 .field1 == ChangesetInputType_101_NoChangeset ? ( true ) :  dref3673 .field0 == ChangesetInputType_101_InputChangeset &&  dref3673 .field1 == ChangesetInputType_101_InputChangeset ? ( true ) :  dref3673 .field0 == ChangesetInputType_101_CustomChangeset &&  dref3673 .field1 == ChangesetInputType_101_CustomChangeset ? ( true ) : ( false ) ; } );
}

static  struct Changeset_32 *   get_dash_ptr1137 (    struct Slice_31  slice1758 ,    size_t  i1760 ) {
    if ( ( (  cmp221 ( (  i1760 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic289 ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1760 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1758 ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_32 *  elem_dash_ptr1761 = ( (  offset_dash_ptr1073 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  i1760 ) ) ) ) );
    return (  elem_dash_ptr1761 );
}

static  struct Changeset_32 *   last_dash_ptr1136 (    struct Slice_31  s1939 ) {
    if ( (  eq276 ( ( (  s1939 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1108 ) ( ( (  from_dash_string257 ) ( ( "(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1137 ) ( (  s1939 ) ,  (  op_dash_sub349 ( ( (  s1939 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_31   to_dash_slice1138 (    struct List_30  l2127 ) {
    struct Changeset_32 *  ptr2128 = ( ( (  l2127 ) .f_elements ) .f_ptr );
    return ( (struct Slice_31) { .f_ptr = (  ptr2128 ) , .f_count = ( (  l2127 ) .f_count ) } );
}

struct TypeSize_1145 {
    size_t  f_size;
};

static  struct TypeSize_1145   get_dash_typesize1144 (  ) {
    struct Action_25  temp1146;
    return ( (struct TypeSize_1145) { .f_size = ( sizeof( ( (  temp1146 ) ) ) ) } );
}

static  struct Action_25 *   cast_dash_ptr1147 (    void *  p359 ) {
    return ( (struct Action_25 * ) (  p359 ) );
}

static  struct Slice_24   allocate1143 (    enum CAllocator_10  dref1954 ,    size_t  count1956 ) {
    if (!(  dref1954 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1957 = ( ( ( (  get_dash_typesize1144 ) ( ) ) ) .f_size );
    struct Action_25 *  ptr1958 = ( (  cast_dash_ptr1147 ) ( ( ( malloc ) ( (  op_dash_mul282 ( (  size1957 ) , (  count1956 ) ) ) ) ) ) );
    return ( (struct Slice_24) { .f_ptr = (  ptr1958 ) , .f_count = (  count1956 ) } );
}

struct env1148 {
    struct Slice_24  new_dash_slice2043;
    ;
    ;
};

struct Tuple2_1150 {
    struct Action_25  field0;
    int32_t  field1;
};

static struct Tuple2_1150 Tuple2_1150_Tuple2 (  struct Action_25  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1150 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1149 {
    enum Unit_8  (*fun) (  struct env1148*  ,    struct Tuple2_1150  );
    struct env1148 env;
};

static  struct Action_25 *   get_dash_ptr1153 (    struct Slice_24  slice1758 ,    size_t  i1760 ) {
    if ( ( (  cmp221 ( (  i1760 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic289 ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1760 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1758 ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_25 *  elem_dash_ptr1761 = ( (  offset_dash_ptr1088 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  i1760 ) ) ) ) );
    return (  elem_dash_ptr1761 );
}

static  enum Unit_8   set1152 (    struct Slice_24  slice1775 ,    size_t  i1777 ,    struct Action_25  x1779 ) {
    struct Action_25 *  ep1780 = ( (  get_dash_ptr1153 ) ( (  slice1775 ) ,  (  i1777 ) ) );
    (*  ep1780 ) = (  x1779 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1151 (   struct env1148* env ,    struct Tuple2_1150  dref2044 ) {
    return ( (  set1152 ) ( ( env->new_dash_slice2043 ) ,  ( (  i32_dash_size299 ) ( ( dref2044 .field1 ) ) ) ,  ( dref2044 .field0 ) ) );
}

struct Zip_1155 {
    struct SliceIter_1083  f_left_dash_it;
    struct FromIter_303  f_right_dash_it;
};

static  struct Zip_1155   into_dash_iter1157 (    struct Zip_1155  self911 ) {
    return (  self911 );
}

struct Maybe_1158 {
    enum {
        Maybe_1158_None_t,
        Maybe_1158_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1150  field0;
        } Maybe_1158_Just_s;
    } stuff;
};

static struct Maybe_1158 Maybe_1158_Just (  struct Tuple2_1150  field0 ) {
    return ( struct Maybe_1158 ) { .tag = Maybe_1158_Just_t, .stuff = { .Maybe_1158_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1158   next1159 (    struct Zip_1155 *  self914 ) {
    struct Zip_1155  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1090  dref916 = ( (  next1091 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1090_None_t ) {
            return ( (struct Maybe_1158) { .tag = Maybe_1158_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1090_Just_t ) {
                struct Maybe_309  dref918 = ( (  next310 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_309_None_t ) {
                    return ( (struct Maybe_1158) { .tag = Maybe_1158_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_309_Just_t ) {
                        ( (  next1091 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next310 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1158_Just ) ( ( ( Tuple2_1150_Tuple2 ) ( ( dref916 .stuff .Maybe_1090_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_309_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1154 (    struct Zip_1155  iterable1074 ,   struct envunion1149  fun1076 ) {
    struct Zip_1155  temp1156 = ( (  into_dash_iter1157 ) ( (  iterable1074 ) ) );
    struct Zip_1155 *  it1077 = ( &temp1156 );
    while ( ( true ) ) {
        struct Maybe_1158  dref1078 = ( (  next1159 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1158_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1158_Just_t ) {
                struct envunion1149  temp1160 = (  fun1076 );
                ( temp1160.fun ( &temp1160.env ,  ( dref1078 .stuff .Maybe_1158_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1155   zip1161 (    struct Slice_24  left922 ,    struct FromIter_303  right924 ) {
    struct SliceIter_1083  left_dash_it925 = ( (  into_dash_iter1086 ) ( (  left922 ) ) );
    struct FromIter_303  right_dash_it926 = ( (  into_dash_iter315 ) ( (  right924 ) ) );
    return ( (struct Zip_1155) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_8   grow_dash_if_dash_full1142 (   struct env3* env ,    struct List_23 *  list2042 ) {
    if ( (  eq276 ( ( ( * (  list2042 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2042 ) .f_elements = ( (  allocate1143 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( env->starting_dash_size2037 ) ) );
    } else {
        if ( (  eq276 ( ( ( * (  list2042 ) ) .f_count ) , ( ( ( * (  list2042 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_24  new_dash_slice2043 = ( (  allocate1143 ) ( ( ( * (  list2042 ) ) .f_al ) ,  (  op_dash_mul282 ( ( ( * (  list2042 ) ) .f_count ) , ( env->growth_dash_factor2038 ) ) ) ) );
            struct env1148 envinst1148 = {
                .new_dash_slice2043 =  new_dash_slice2043 ,
            };
            struct envunion1149  fun2047 = ( (struct envunion1149){ .fun = (  enum Unit_8  (*) (  struct env1148*  ,    struct Tuple2_1150  ) )lam1151 , .env =  envinst1148 } );
            ( (  for_dash_each1154 ) ( ( (  zip1161 ) ( ( ( * (  list2042 ) ) .f_elements ) ,  ( (  from316 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2047 ) ) );
            ( (  free1096 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( ( * (  list2042 ) ) .f_elements ) ) );
            (*  list2042 ) .f_elements = (  new_dash_slice2043 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1140 (   struct env21* env ,    struct List_23 *  list2050 ,    struct Action_25  elem2052 ) {
    struct envunion22  temp1141 = ( (struct envunion22){ .fun = (  enum Unit_8  (*) (  struct env3*  ,    struct List_23 *  ) )grow_dash_if_dash_full1142 , .env =  env->envinst3 } );
    ( temp1141.fun ( &temp1141.env ,  (  list2050 ) ) );
    ( (  set1152 ) ( ( ( * (  list2050 ) ) .f_elements ) ,  ( ( * (  list2050 ) ) .f_count ) ,  (  elem2052 ) ) );
    (*  list2050 ) .f_count = (  op_dash_add269 ( ( ( * (  list2050 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr1168 (    struct Action_25 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1169 (    struct Action_25 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Action_25 *   zeroed1166 (  ) {
    struct Action_25 *  temp1167;
    struct Action_25 *  x570 = (  temp1167 );
    ( ( memset ) ( ( (  cast_dash_ptr1168 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1169 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Action_25 *   null_dash_ptr1165 (  ) {
    return ( (  zeroed1166 ) ( ) );
}

static  struct Slice_24   empty1164 (  ) {
    return ( (struct Slice_24) { .f_ptr = ( (  null_dash_ptr1165 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_23   mk1163 (    enum CAllocator_10  al2032 ) {
    struct Slice_24  elements2033 = ( (  empty1164 ) ( ) );
    return ( (struct List_23) { .f_al = (  al2032 ) , .f_elements = (  elements2033 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_33   or_dash_else1170 (    struct Maybe_128  self1733 ,    struct Cursors_33  alt1735 ) {
    struct Maybe_128  dref1736 = (  self1733 );
    if ( dref1736.tag == Maybe_128_None_t ) {
        return (  alt1735 );
    }
    else {
        if ( dref1736.tag == Maybe_128_Just_t ) {
            return ( dref1736 .stuff .Maybe_128_Just_s .field0 );
        }
    }
}

struct envunion1172 {
    enum Unit_8  (*fun) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  );
    struct env21 env;
};

struct TypeSize_1179 {
    size_t  f_size;
};

static  struct TypeSize_1179   get_dash_typesize1178 (  ) {
    struct Changeset_32  temp1180;
    return ( (struct TypeSize_1179) { .f_size = ( sizeof( ( (  temp1180 ) ) ) ) } );
}

static  struct Changeset_32 *   cast_dash_ptr1181 (    void *  p359 ) {
    return ( (struct Changeset_32 * ) (  p359 ) );
}

static  struct Slice_31   allocate1177 (    enum CAllocator_10  dref1954 ,    size_t  count1956 ) {
    if (!(  dref1954 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1957 = ( ( ( (  get_dash_typesize1178 ) ( ) ) ) .f_size );
    struct Changeset_32 *  ptr1958 = ( (  cast_dash_ptr1181 ) ( ( ( malloc ) ( (  op_dash_mul282 ( (  size1957 ) , (  count1956 ) ) ) ) ) ) );
    return ( (struct Slice_31) { .f_ptr = (  ptr1958 ) , .f_count = (  count1956 ) } );
}

struct env1182 {
    struct Slice_31  new_dash_slice2043;
    ;
    ;
};

struct Tuple2_1184 {
    struct Changeset_32  field0;
    int32_t  field1;
};

static struct Tuple2_1184 Tuple2_1184_Tuple2 (  struct Changeset_32  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1184 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1183 {
    enum Unit_8  (*fun) (  struct env1182*  ,    struct Tuple2_1184  );
    struct env1182 env;
};

static  enum Unit_8   set1186 (    struct Slice_31  slice1775 ,    size_t  i1777 ,    struct Changeset_32  x1779 ) {
    struct Changeset_32 *  ep1780 = ( (  get_dash_ptr1137 ) ( (  slice1775 ) ,  (  i1777 ) ) );
    (*  ep1780 ) = (  x1779 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1185 (   struct env1182* env ,    struct Tuple2_1184  dref2044 ) {
    return ( (  set1186 ) ( ( env->new_dash_slice2043 ) ,  ( (  i32_dash_size299 ) ( ( dref2044 .field1 ) ) ) ,  ( dref2044 .field0 ) ) );
}

struct Zip_1188 {
    struct SliceIter_1067  f_left_dash_it;
    struct FromIter_303  f_right_dash_it;
};

static  struct Zip_1188   into_dash_iter1190 (    struct Zip_1188  self911 ) {
    return (  self911 );
}

struct Maybe_1191 {
    enum {
        Maybe_1191_None_t,
        Maybe_1191_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1184  field0;
        } Maybe_1191_Just_s;
    } stuff;
};

static struct Maybe_1191 Maybe_1191_Just (  struct Tuple2_1184  field0 ) {
    return ( struct Maybe_1191 ) { .tag = Maybe_1191_Just_t, .stuff = { .Maybe_1191_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1191   next1192 (    struct Zip_1188 *  self914 ) {
    struct Zip_1188  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1076  dref916 = ( (  next1078 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1076_None_t ) {
            return ( (struct Maybe_1191) { .tag = Maybe_1191_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1076_Just_t ) {
                struct Maybe_309  dref918 = ( (  next310 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_309_None_t ) {
                    return ( (struct Maybe_1191) { .tag = Maybe_1191_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_309_Just_t ) {
                        ( (  next1078 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next310 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1191_Just ) ( ( ( Tuple2_1184_Tuple2 ) ( ( dref916 .stuff .Maybe_1076_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_309_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1187 (    struct Zip_1188  iterable1074 ,   struct envunion1183  fun1076 ) {
    struct Zip_1188  temp1189 = ( (  into_dash_iter1190 ) ( (  iterable1074 ) ) );
    struct Zip_1188 *  it1077 = ( &temp1189 );
    while ( ( true ) ) {
        struct Maybe_1191  dref1078 = ( (  next1192 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1191_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1191_Just_t ) {
                struct envunion1183  temp1193 = (  fun1076 );
                ( temp1193.fun ( &temp1193.env ,  ( dref1078 .stuff .Maybe_1191_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1188   zip1194 (    struct Slice_31  left922 ,    struct FromIter_303  right924 ) {
    struct SliceIter_1067  left_dash_it925 = ( (  into_dash_iter1071 ) ( (  left922 ) ) );
    struct FromIter_303  right_dash_it926 = ( (  into_dash_iter315 ) ( (  right924 ) ) );
    return ( (struct Zip_1188) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr1196 (    struct Changeset_32 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1195 (    enum CAllocator_10  dref1960 ,    struct Slice_31  slice1962 ) {
    if (!(  dref1960 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1196 ) ( ( (  slice1962 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1176 (   struct env4* env ,    struct List_30 *  list2042 ) {
    if ( (  eq276 ( ( ( * (  list2042 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2042 ) .f_elements = ( (  allocate1177 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( env->starting_dash_size2037 ) ) );
    } else {
        if ( (  eq276 ( ( ( * (  list2042 ) ) .f_count ) , ( ( ( * (  list2042 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_31  new_dash_slice2043 = ( (  allocate1177 ) ( ( ( * (  list2042 ) ) .f_al ) ,  (  op_dash_mul282 ( ( ( * (  list2042 ) ) .f_count ) , ( env->growth_dash_factor2038 ) ) ) ) );
            struct env1182 envinst1182 = {
                .new_dash_slice2043 =  new_dash_slice2043 ,
            };
            struct envunion1183  fun2047 = ( (struct envunion1183){ .fun = (  enum Unit_8  (*) (  struct env1182*  ,    struct Tuple2_1184  ) )lam1185 , .env =  envinst1182 } );
            ( (  for_dash_each1187 ) ( ( (  zip1194 ) ( ( ( * (  list2042 ) ) .f_elements ) ,  ( (  from316 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2047 ) ) );
            ( (  free1195 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( ( * (  list2042 ) ) .f_elements ) ) );
            (*  list2042 ) .f_elements = (  new_dash_slice2043 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1174 (   struct env28* env ,    struct List_30 *  list2050 ,    struct Changeset_32  elem2052 ) {
    struct envunion29  temp1175 = ( (struct envunion29){ .fun = (  enum Unit_8  (*) (  struct env4*  ,    struct List_30 *  ) )grow_dash_if_dash_full1176 , .env =  env->envinst4 } );
    ( temp1175.fun ( &temp1175.env ,  (  list2050 ) ) );
    ( (  set1186 ) ( ( ( * (  list2050 ) ) .f_elements ) ,  ( ( * (  list2050 ) ) .f_count ) ,  (  elem2052 ) ) );
    (*  list2050 ) .f_count = (  op_dash_add269 ( ( ( * (  list2050 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Pos_26   action_dash_fwd1198 (   struct env104* env ,    struct TextBuf_99 *  self3772 ,    struct Action_25  action3774 ) {
    struct envunion105  temp1199 = ( (struct envunion105){ .fun = (  enum Unit_8  (*) (  struct env93*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action359 , .env =  env->envinst93 } );
    ( temp1199.fun ( &temp1199.env ,  (  self3772 ) ,  ( (  action3774 ) .f_from ) ,  ( (  action3774 ) .f_to_dash_bwd ) ,  ( (  action3774 ) .f_fwd ) ) );
    return ( (  action3774 ) .f_to_dash_fwd );
}

static  struct Maybe_128   change1063 (   struct env112* env ,    struct TextBuf_99 *  self3839 ,    struct Pos_26  from3841 ,    struct Pos_26  to3843 ,    struct StrView_27  bytes3845 ,    struct Maybe_128  before_dash_cursors3847 ) {
    struct Pos_26  from_dash_pos3848 = ( (  min360 ) ( (  from3841 ) ,  (  to3843 ) ) );
    struct Pos_26  to_dash_pos3849 = ( (  max363 ) ( (  from3841 ) ,  (  to3843 ) ) );
    struct Actions_100 *  actions3850 = ( & ( ( * (  self3839 ) ) .f_actions ) );
    ( (  trim_dash_actions1064 ) ( (  actions3850 ) ) );
    struct envunion115  temp1118 = ( (struct envunion115){ .fun = (  struct StrView_27  (*) (  struct env110*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1119 , .env =  env->envinst110 } );
    struct Action_25  action3851 = ( (struct Action_25) { .f_from = (  from3841 ) , .f_fwd = ( (  clone1099 ) ( (  bytes3845 ) ,  ( ( * (  self3839 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1101 ) ( (  self3839 ) ,  (  bytes3845 ) ,  (  from_dash_pos3848 ) ) ) , .f_bwd = ( temp1118.fun ( &temp1118.env ,  (  self3839 ) ,  (  from_dash_pos3848 ) ,  (  to_dash_pos3849 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3849 ) } );
    enum CAllocator_10  al3852 = ( ( ( * (  actions3850 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in3853 = ( (  is_dash_none1133 ) ( (  before_dash_cursors3847 ) ) );
    if ( ( (  eq1134 ( ( ( ( * (  self3839 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_101_CustomChangeset ) ) ) || ( (  eq1134 ( ( ( ( * (  self3839 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_101_InputChangeset ) ) ) && (  is_dash_typed_dash_in3853 ) ) ) ) {
        struct Changeset_32 *  last_dash_changeset3854 = ( (  last_dash_ptr1136 ) ( ( (  to_dash_slice1138 ) ( ( ( * (  actions3850 ) ) .f_list ) ) ) ) );
        struct envunion113  temp1139 = ( (struct envunion113){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1140 , .env =  env->envinst21 } );
        ( temp1139.fun ( &temp1139.env ,  ( & ( ( * (  last_dash_changeset3854 ) ) .f_parts ) ) ,  (  action3851 ) ) );
    } else {
        struct Changeset_32  temp1162 = ( (struct Changeset_32) { .f_parts = ( (  mk1163 ) ( (  al3852 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1170 ) ( (  before_dash_cursors3847 ) ,  ( (struct Cursors_33) { .f_cur = (  from3841 ) , .f_sel = ( (  eq364 ( (  from3841 ) , (  to3843 ) ) ) ? ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) : ( ( Maybe_34_Just ) ( (  to3843 ) ) ) ) } ) ) ) } );
        struct Changeset_32 *  changeset3855 = ( &temp1162 );
        struct envunion1172  temp1171 = ( (struct envunion1172){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1140 , .env =  env->envinst21 } );
        ( temp1171.fun ( &temp1171.env ,  ( & ( ( * (  changeset3855 ) ) .f_parts ) ) ,  (  action3851 ) ) );
        struct envunion114  temp1173 = ( (struct envunion114){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1174 , .env =  env->envinst28 } );
        ( temp1173.fun ( &temp1173.env ,  ( & ( ( * (  actions3850 ) ) .f_list ) ) ,  ( * (  changeset3855 ) ) ) );
        (*  actions3850 ) .f_input_dash_changeset = ( (  is_dash_typed_dash_in3853 ) ? ( ChangesetInputType_101_InputChangeset ) : ( ChangesetInputType_101_NoChangeset ) );
        (*  actions3850 ) .f_cur = (  op_dash_add269 ( ( ( * (  actions3850 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion116  temp1197 = ( (struct envunion116){ .fun = (  struct Pos_26  (*) (  struct env104*  ,    struct TextBuf_99 *  ,    struct Action_25  ) )action_dash_fwd1198 , .env =  env->envinst104 } );
    struct Pos_26  to_dash_fwd3856 = ( temp1197.fun ( &temp1197.env ,  (  self3839 ) ,  (  action3851 ) ) );
    if ( (  cmp221 ( ( (  num_dash_bytes1024 ) ( ( (  action3851 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd3857 = ( (  left_dash_pos1023 ) ( (  self3839 ) ,  (  to_dash_fwd3856 ) ) );
        return ( ( Maybe_128_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3857 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  action3851 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_128_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3856 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

static  enum Unit_8   add_dash_str_dash_at_dash_char1061 (   struct env126* env ,    struct Pane_141 *  self4170 ,    struct StrView_27  s4172 ) {
    struct Pos_26  cur4173 = ( ( * (  self4170 ) ) .f_cursor );
    struct envunion127  temp1062 = ( (struct envunion127){ .fun = (  struct Maybe_128  (*) (  struct env112*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_128  ) )change1063 , .env =  env->envinst112 } );
    ( temp1062.fun ( &temp1062.env ,  ( ( * (  self4170 ) ) .f_buf ) ,  (  cur4173 ) ,  (  cur4173 ) ,  (  s4172 ) ,  ( (struct Maybe_128) { .tag = Maybe_128_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at1205 (   struct env137* env ,    struct Pane_141 *  self4208 ,    int32_t  line4210 ) {
    struct envunion138  temp1206 = ( (struct envunion138){ .fun = (  struct Maybe_128  (*) (  struct env112*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_128  ) )change1063 , .env =  env->envinst112 } );
    ( temp1206.fun ( &temp1206.env ,  ( ( * (  self4208 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4210 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4210 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (  from_dash_charlike1124 ) ( ( "\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_128) { .tag = Maybe_128_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at_dash_current1201 (   struct env148* env ,    struct Pane_141 *  self4229 ,    int32_t  indent4231 ) {
    struct RangeIter_729  temp1202 =  into_dash_iter731 ( ( (  to734 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  indent4231 ) ) ) );
    while (true) {
        struct Maybe_309  __cond1203 =  next732 (&temp1202);
        if (  __cond1203 .tag == 0 ) {
            break;
        }
        int32_t  dref4232 =  __cond1203 .stuff .Maybe_309_Just_s .field0;
        struct envunion149  temp1204 = ( (struct envunion149){ .fun = (  enum Unit_8  (*) (  struct env137*  ,    struct Pane_141 *  ,    int32_t  ) )indent_dash_at1205 , .env =  env->envinst137 } );
        ( temp1204.fun ( &temp1204.env ,  (  self4229 ) ,  ( ( ( * (  self4229 ) ) .f_cursor ) .f_line ) ) );
        ( (  move_dash_right1029 ) ( (  self4229 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_beginning1207 (    struct Pane_141 *  self4149 ) {
    struct Pos_26  temp1208 = ( ( * (  self4149 ) ) .f_cursor );
    temp1208 .  f_bi = (  from_dash_integral56 ( 0 ) );
    ( (  set_dash_cursors985 ) ( (  self4149 ) ,  ( temp1208 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct envunion1210 {
    enum Unit_8  (*fun) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  );
    struct env126 env;
};

struct envunion1212 {
    enum Unit_8  (*fun) (  struct env148*  ,    struct Pane_141 *  ,    int32_t  );
    struct env148 env;
};

enum MoveDirection_1214 {
    MoveDirection_1214_MoveFwd,
    MoveDirection_1214_MoveBwd,
};

enum MoveTarget_1215 {
    MoveTarget_1215_NextWordStart,
    MoveTarget_1215_NextWordEnd,
};

static  struct Pos_26   own1217 (    struct Pos_26  x1251 ) {
    return (  x1251 );
}

struct env1218 {
    enum MoveDirection_1214  dir4112;
    ;
    struct Pos_26 *  prev4115;
    struct Pane_141 *  pane4110;
    ;
};

static  bool   is_dash_at_dash_line_dash_end1220 (    struct Pane_141 *  pane4092 ,    struct Pos_26  pos4094 ) {
    return (  eq276 ( ( (  i32_dash_size299 ) ( ( (  pos4094 ) .f_bi ) ) ) , ( (  num_dash_bytes1024 ) ( ( (  line991 ) ( ( ( * (  pane4092 ) ) .f_buf ) ,  ( (  pos4094 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1219 (    struct Pane_141 *  pane4097 ) {
    return ( (  is_dash_at_dash_line_dash_end1220 ) ( (  pane4097 ) ,  ( ( * (  pane4097 ) ) .f_cursor ) ) );
}

struct envunion1222 {
    enum Unit_8  (*fun) (  struct env1218*  );
    struct env1218 env;
};

static  enum Unit_8   advance1223 (   struct env1218* env ) {
    (* env->prev4115 ) = ( ( * ( env->pane4110 ) ) .f_cursor );
    enum MoveDirection_1214  dref4117 = ( env->dir4112 );
    switch (  dref4117 ) {
        case MoveDirection_1214_MoveFwd : {
            ( (  move_dash_right1029 ) ( ( env->pane4110 ) ) );
            break;
        }
        case MoveDirection_1214_MoveBwd : {
            ( (  move_dash_left984 ) ( ( env->pane4110 ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

enum CharType_1227 {
    CharType_1227_CharSpace,
    CharType_1227_CharWord,
    CharType_1227_CharPunctuation,
};

struct Tuple2_1228 {
    enum CharType_1227  field0;
    enum CharType_1227  field1;
};

static struct Tuple2_1228 Tuple2_1228_Tuple2 (  enum CharType_1227  field0 ,  enum CharType_1227  field1 ) {
    return ( struct Tuple2_1228 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1226 (    enum CharType_1227  l3636 ,    enum CharType_1227  r3638 ) {
    struct Tuple2_1228  dref3639 = ( ( Tuple2_1228_Tuple2 ) ( (  l3636 ) ,  (  r3638 ) ) );
    if (  dref3639 .field0 == CharType_1227_CharSpace &&  dref3639 .field1 == CharType_1227_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3639 .field0 == CharType_1227_CharWord &&  dref3639 .field1 == CharType_1227_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3639 .field0 == CharType_1227_CharPunctuation &&  dref3639 .field1 == CharType_1227_CharPunctuation ) {
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

static  struct Char_65   min1233 (    struct Char_65  l1236 ,    struct Char_65  r1238 ) {
    if ( (  cmp819 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Char_65   max1234 (    struct Char_65  l1315 ,    struct Char_65  r1317 ) {
    if ( (  cmp819 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  bool   between1232 (    struct Char_65  c1337 ,    struct Char_65  l1339 ,    struct Char_65  r1341 ) {
    struct Char_65  from1342 = ( (  min1233 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Char_65  to1343 = ( (  max1234 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp819 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp819 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_alpha1231 (    struct Char_65  c2389 ) {
    return ( ( (  cmp221 ( ( (  c2389 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between1232 ) ( (  c2389 ) ,  ( (  from_dash_charlike258 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1232 ) ( (  c2389 ) ,  ( (  from_dash_charlike258 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_digit1235 (    struct Char_65  c2392 ) {
    return ( (  eq276 ( ( (  c2392 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1232 ) ( (  c2392 ) ,  ( (  from_dash_charlike258 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1230 (    struct Char_65  c2404 ) {
    return ( ( (  is_dash_alpha1231 ) ( (  c2404 ) ) ) || ( (  is_dash_digit1235 ) ( (  c2404 ) ) ) );
}

static  bool   is_dash_whitespace1236 (    struct Char_65  c2380 ) {
    return ( ( (  eq448 ( (  c2380 ) , ( (  from_dash_charlike258 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq448 ( (  c2380 ) , ( (  from_dash_charlike258 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq448 ( (  c2380 ) , ( (  from_dash_charlike258 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_1227   char_dash_type1229 (    struct Char_65  c3642 ) {
    if ( ( ( ( (  is_dash_alphanumeric1230 ) ( (  c3642 ) ) ) || (  eq448 ( (  c3642 ) , ( (  from_dash_charlike258 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq448 ( (  c3642 ) , ( (  from_dash_charlike258 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1227_CharWord );
    } else {
        if ( ( (  is_dash_whitespace1236 ) ( (  c3642 ) ) ) ) {
            return ( CharType_1227_CharSpace );
        } else {
            return ( CharType_1227_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1225 (    struct Char_65  l3645 ,    struct Char_65  r3647 ) {
    return ( !  eq1226 ( ( (  char_dash_type1229 ) ( (  l3645 ) ) ) , ( (  char_dash_type1229 ) ( (  r3647 ) ) ) ) );
}

static  struct Char_65   or_dash_else1238 (    struct Maybe_653  self1733 ,    struct Char_65  alt1735 ) {
    struct Maybe_653  dref1736 = (  self1733 );
    if ( dref1736.tag == Maybe_653_None_t ) {
        return (  alt1735 );
    }
    else {
        if ( dref1736.tag == Maybe_653_Just_t ) {
            return ( dref1736 .stuff .Maybe_653_Just_s .field0 );
        }
    }
}

static  struct Maybe_653   head1239 (    struct StrViewIter_650  it1142 ) {
    struct StrViewIter_650  temp1240 = ( (  into_dash_iter652 ) ( (  it1142 ) ) );
    return ( (  next654 ) ( ( &temp1240 ) ) );
}

static  struct Char_65   char_dash_at1237 (    struct Pane_141 *  pane3971 ,    struct Pos_26  pos3973 ) {
    struct StrView_27  line3974 = ( (  line991 ) ( ( ( * (  pane3971 ) ) .f_buf ) ,  ( (  pos3973 ) .f_line ) ) );
    return ( (  or_dash_else1238 ) ( ( (  head1239 ) ( ( (  chars655 ) ( ( (  byte_dash_substr430 ) ( (  line3974 ) ,  ( (  i32_dash_size299 ) ( ( (  pos3973 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1024 ) ( (  line3974 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
}

static  enum Unit_8   print1242 (    struct StrView_27  s1702 ) {
    ( (  for_dash_each649 ) ( ( (  chars655 ) ( (  s1702 ) ) ) ,  (  printf_dash_char241 ) ) );
    return ( Unit_8_Unit );
}

static  bool   undefined1243 (  ) {
    bool  temp1244;
    return (  temp1244 );
}

static  bool   todo1241 (  ) {
    ( (  print1242 ) ( ( (  from_dash_string257 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( (  undefined1243 ) ( ) );
}

static  bool   reached_dash_target1224 (    struct Pane_141 *  pane4102 ,    enum MoveTarget_1215  target4104 ,    struct Pos_26  prev4106 ) {
    return ( {  enum MoveTarget_1215  dref4107 = (  target4104 ) ;  dref4107 == MoveTarget_1215_NextWordStart ? ( ( (  is_dash_word_dash_boundary1225 ) ( ( (  char_dash_at1237 ) ( (  pane4102 ) ,  (  prev4106 ) ) ) ,  ( (  char_dash_at1237 ) ( (  pane4102 ) ,  ( ( * (  pane4102 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1226 ( ( (  char_dash_type1229 ) ( ( (  char_dash_at1237 ) ( (  pane4102 ) ,  ( ( * (  pane4102 ) ) .f_cursor ) ) ) ) ) , ( CharType_1227_CharSpace ) ) ) ) ) :  dref4107 == MoveTarget_1215_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1225 ) ( ( (  char_dash_at1237 ) ( (  pane4102 ) ,  (  prev4106 ) ) ) ,  ( (  char_dash_at1237 ) ( (  pane4102 ) ,  ( ( * (  pane4102 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1226 ( ( (  char_dash_type1229 ) ( ( (  char_dash_at1237 ) ( (  pane4102 ) ,  (  prev4106 ) ) ) ) ) , ( CharType_1227_CharSpace ) ) ) ) ) : ( (  todo1241 ) ( ) ) ; } );
}

struct envunion1246 {
    enum Unit_8  (*fun) (  struct env1218*  );
    struct env1218 env;
};

struct envunion1248 {
    enum Unit_8  (*fun) (  struct env1218*  );
    struct env1218 env;
};

static  enum Unit_8   advance_dash_word1213 (    struct Pane_141 *  pane4110 ,    enum MoveDirection_1214  dir4112 ,    enum MoveTarget_1215  target4114 ) {
    struct Pos_26  temp1216 = ( (  own1217 ) ( ( ( * (  pane4110 ) ) .f_cursor ) ) );
    struct Pos_26 *  prev4115 = ( &temp1216 );
    struct env1218 envinst1218 = {
        .dir4112 =  dir4112 ,
        .prev4115 =  prev4115 ,
        .pane4110 =  pane4110 ,
    };
    struct Pos_26  sel4118 = ( ( * (  pane4110 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4119 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1219 ) ( (  pane4110 ) ) );
    struct envunion1222  temp1221 = ( (struct envunion1222){ .fun = (  enum Unit_8  (*) (  struct env1218*  ) )advance1223 , .env =  envinst1218 } );
    ( temp1221.fun ( &temp1221.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4119 ) || ( (  reached_dash_target1224 ) ( (  pane4110 ) ,  (  target4114 ) ,  ( * (  prev4115 ) ) ) ) ) ) {
        sel4118 = ( ( * (  pane4110 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1219 ) ( (  pane4110 ) ) ) ) {
        if ( (  eq364 ( ( ( * (  pane4110 ) ) .f_cursor ) , ( * (  prev4115 ) ) ) ) ) {
            return ( Unit_8_Unit );
        }
        struct envunion1246  temp1245 = ( (struct envunion1246){ .fun = (  enum Unit_8  (*) (  struct env1218*  ) )advance1223 , .env =  envinst1218 } );
        ( temp1245.fun ( &temp1245.env ) );
        sel4118 = ( ( * (  pane4110 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1248  temp1247 = ( (struct envunion1248){ .fun = (  enum Unit_8  (*) (  struct env1218*  ) )advance1223 , .env =  envinst1218 } );
        ( temp1247.fun ( &temp1247.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1219 ) ( (  pane4110 ) ) ) || ( (  reached_dash_target1224 ) ( (  pane4110 ) ,  (  target4114 ) ,  ( * (  prev4115 ) ) ) ) ) ) {
            enum MoveDirection_1214  dref4120 = (  dir4112 );
            switch (  dref4120 ) {
                case MoveDirection_1214_MoveFwd : {
                    ( (  move_dash_left984 ) ( (  pane4110 ) ) );
                    break;
                }
                case MoveDirection_1214_MoveBwd : {
                    ( (  move_dash_right1029 ) ( (  pane4110 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq364 ( ( * (  prev4115 ) ) , ( ( * (  pane4110 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel1020 ) ( (  pane4110 ) ,  ( ( Maybe_34_Just ) ( (  sel4118 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  size_t   size1253 (    struct List_30 *  l2134 ) {
    return ( ( * (  l2134 ) ) .f_count );
}

static  struct Changeset_32 *   get_dash_ptr1256 (    struct List_30 *  list2002 ,    size_t  i2004 ) {
    if ( ( (  cmp221 ( (  i2004 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i2004 ) , ( ( * (  list2002 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic289 ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2004 ) ) ) ,  ( (  from_dash_string257 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2002 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1137 ) ( ( ( * (  list2002 ) ) .f_elements ) ,  (  i2004 ) ) );
}

static  struct Changeset_32   get1255 (    struct List_30 *  list2012 ,    size_t  i2014 ) {
    return ( * ( (  get_dash_ptr1256 ) ( (  list2012 ) ,  (  i2014 ) ) ) );
}

static  struct Changeset_32   elem_dash_get1254 (    struct List_30  self2082 ,    size_t  k2084 ) {
    return ( (  get1255 ) ( ( & (  self2082 ) ) ,  (  k2084 ) ) );
}

static  struct Action_25   undefined1265 (  ) {
    struct Action_25  temp1266;
    return (  temp1266 );
}

static  struct Action_25   or_dash_fail1264 (    struct Maybe_1090  x1726 ,    struct StrConcat_290  errmsg1728 ) {
    struct Maybe_1090  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_1090_None_t ) {
        ( (  panic289 ) ( (  errmsg1728 ) ) );
        return ( (  undefined1265 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_1090_Just_t ) {
            return ( dref1729 .stuff .Maybe_1090_Just_s .field0 );
        }
    }
}

static  struct Maybe_1090   try_dash_get1267 (    struct Slice_24  slice1764 ,    size_t  i1766 ) {
    if ( ( (  cmp221 ( (  i1766 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i1766 ) , ( (  slice1764 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1090) { .tag = Maybe_1090_None_t } );
    }
    struct Action_25 *  elem_dash_ptr1767 = ( (  offset_dash_ptr1088 ) ( ( (  slice1764 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  i1766 ) ) ) ) );
    return ( ( Maybe_1090_Just ) ( ( * (  elem_dash_ptr1767 ) ) ) );
}

static  struct Action_25   get1263 (    struct Slice_24  slice1770 ,    size_t  i1772 ) {
    return ( (  or_dash_fail1264 ) ( ( (  try_dash_get1267 ) ( (  slice1770 ) ,  (  i1772 ) ) ) ,  ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1772 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1770 ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_25   elem_dash_get1262 (    struct Slice_24  self1868 ,    size_t  idx1870 ) {
    return ( (  get1263 ) ( (  self1868 ) ,  (  idx1870 ) ) );
}

static  struct Action_25   last1261 (    struct Slice_24  s1936 ) {
    if ( (  eq276 ( ( (  s1936 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1108 ) ( ( (  from_dash_string257 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1262 ( (  s1936 ) , (  op_dash_sub349 ( ( (  s1936 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_24   to_dash_slice1268 (    struct List_23  l2127 ) {
    struct Action_25 *  ptr2128 = ( ( (  l2127 ) .f_elements ) .f_ptr );
    return ( (struct Slice_24) { .f_ptr = (  ptr2128 ) , .f_count = ( (  l2127 ) .f_count ) } );
}

static  struct Maybe_128   redo1252 (   struct env108* env ,    struct TextBuf_99 *  self3799 ) {
    ( (  flush_dash_insert_dash_action1038 ) ( (  self3799 ) ) );
    struct Actions_100 *  actions3800 = ( & ( ( * (  self3799 ) ) .f_actions ) );
    if ( (  cmp221 ( ( ( * (  actions3800 ) ) .f_cur ) , ( (  size1253 ) ( ( & ( ( * (  actions3800 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_128) { .tag = Maybe_128_None_t } );
    }
    struct Changeset_32  changeset3801 = (  elem_dash_get1254 ( ( ( * (  actions3800 ) ) .f_list ) , ( ( * (  actions3800 ) ) .f_cur ) ) );
    struct Pos_26  temp1257;
    struct Pos_26  to_dash_fwd3802 = (  temp1257 );
    struct SliceIter_1083  temp1258 =  into_dash_iter1085 ( ( (  changeset3801 ) .f_parts ) );
    while (true) {
        struct Maybe_1090  __cond1259 =  next1091 (&temp1258);
        if (  __cond1259 .tag == 0 ) {
            break;
        }
        struct Action_25  action3804 =  __cond1259 .stuff .Maybe_1090_Just_s .field0;
        struct envunion109  temp1260 = ( (struct envunion109){ .fun = (  struct Pos_26  (*) (  struct env104*  ,    struct TextBuf_99 *  ,    struct Action_25  ) )action_dash_fwd1198 , .env =  env->envinst104 } );
        to_dash_fwd3802 = ( temp1260.fun ( &temp1260.env ,  (  self3799 ) ,  (  action3804 ) ) );
    }
    (*  actions3800 ) .f_cur = (  op_dash_add269 ( ( ( * (  actions3800 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_25  last_dash_action3805 = ( (  last1261 ) ( ( (  to_dash_slice1268 ) ( ( (  changeset3801 ) .f_parts ) ) ) ) );
    if ( (  cmp221 ( ( (  num_dash_bytes1024 ) ( ( (  last_dash_action3805 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd3806 = ( (  left_dash_pos1023 ) ( (  self3799 ) ,  (  to_dash_fwd3802 ) ) );
        return ( ( Maybe_128_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3806 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  last_dash_action3805 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_128_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3802 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

struct env1270 {
    struct Pane_141 *  self4186;
    ;
};

struct envunion1271 {
    enum Unit_8  (*fun) (  struct env1270*  ,    struct Cursors_33  );
    struct env1270 env;
};

static  enum Unit_8   if_dash_just1269 (    struct Maybe_128  x1291 ,   struct envunion1271  fun1293 ) {
    struct Maybe_128  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_128_Just_t ) {
        struct envunion1271  temp1272 = (  fun1293 );
        ( temp1272.fun ( &temp1272.env ,  ( dref1294 .stuff .Maybe_128_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_128_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1273 (   struct env1270* env ,    struct Cursors_33  cursors4189 ) {
    ( (  set_dash_cursors985 ) ( ( env->self4186 ) ,  ( (  cursors4189 ) .f_cur ) ,  ( (  cursors4189 ) .f_sel ) ,  ( CursorMovement_986_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   redo1250 (   struct env133* env ,    struct Pane_141 *  self4186 ) {
    struct envunion134  temp1251 = ( (struct envunion134){ .fun = (  struct Maybe_128  (*) (  struct env108*  ,    struct TextBuf_99 *  ) )redo1252 , .env =  env->envinst108 } );
    struct Maybe_128  mcursors4187 = ( temp1251.fun ( &temp1251.env ,  ( ( * (  self4186 ) ) .f_buf ) ) );
    struct env1270 envinst1270 = {
        .self4186 =  self4186 ,
    };
    ( (  if_dash_just1269 ) ( (  mcursors4187 ) ,  ( (struct envunion1271){ .fun = (  enum Unit_8  (*) (  struct env1270*  ,    struct Cursors_33  ) )lam1273 , .env =  envinst1270 } ) ) );
    return ( Unit_8_Unit );
}

struct SliceReversedIter_1279 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1279   into_dash_iter1280 (    struct SliceReversedIter_1279  self1899 ) {
    return (  self1899 );
}

static  struct SliceReversedIter_1279   reversed1281 (    struct Slice_24  slice1896 ) {
    return ( (struct SliceReversedIter_1279) { .f_slice = (  slice1896 ) , .f_current_dash_offset = ( (  slice1896 ) .f_count ) } );
}

static  struct Maybe_1090   next1283 (    struct SliceReversedIter_1279 *  self1902 ) {
    size_t  off1903 = ( ( * (  self1902 ) ) .f_current_dash_offset );
    if ( (  eq276 ( (  off1903 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1090) { .tag = Maybe_1090_None_t } );
    }
    (*  self1902 ) .f_current_dash_offset = (  op_dash_sub349 ( (  off1903 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1090_Just ) ( (  elem_dash_get1262 ( ( ( * (  self1902 ) ) .f_slice ) , ( ( * (  self1902 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_26   action_dash_bwd1285 (   struct env102* env ,    struct TextBuf_99 *  self3767 ,    struct Action_25  action3769 ) {
    struct envunion103  temp1286 = ( (struct envunion103){ .fun = (  enum Unit_8  (*) (  struct env93*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action359 , .env =  env->envinst93 } );
    ( temp1286.fun ( &temp1286.env ,  (  self3767 ) ,  ( (  action3769 ) .f_from ) ,  ( (  action3769 ) .f_to_dash_fwd ) ,  ( (  action3769 ) .f_bwd ) ) );
    return ( (  action3769 ) .f_to_dash_bwd );
}

static  struct Maybe_128   undo1277 (   struct env106* env ,    struct TextBuf_99 *  self3792 ) {
    ( (  flush_dash_insert_dash_action1038 ) ( (  self3792 ) ) );
    struct Actions_100 *  actions3793 = ( & ( ( * (  self3792 ) ) .f_actions ) );
    if ( (  eq276 ( ( ( * (  actions3793 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_128) { .tag = Maybe_128_None_t } );
    }
    (*  actions3793 ) .f_cur = (  op_dash_sub349 ( ( ( * (  actions3793 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_32  changeset3794 = (  elem_dash_get1254 ( ( ( * (  actions3793 ) ) .f_list ) , ( ( * (  actions3793 ) ) .f_cur ) ) );
    struct SliceReversedIter_1279  temp1278 =  into_dash_iter1280 ( ( (  reversed1281 ) ( ( (  to_dash_slice1268 ) ( ( (  changeset3794 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1090  __cond1282 =  next1283 (&temp1278);
        if (  __cond1282 .tag == 0 ) {
            break;
        }
        struct Action_25  action3796 =  __cond1282 .stuff .Maybe_1090_Just_s .field0;
        struct envunion107  temp1284 = ( (struct envunion107){ .fun = (  struct Pos_26  (*) (  struct env102*  ,    struct TextBuf_99 *  ,    struct Action_25  ) )action_dash_bwd1285 , .env =  env->envinst102 } );
        ( temp1284.fun ( &temp1284.env ,  (  self3792 ) ,  (  action3796 ) ) );
    }
    return ( ( Maybe_128_Just ) ( ( (  changeset3794 ) .f_before_dash_cursors ) ) );
}

struct env1288 {
    ;
    struct Pane_141 *  self4180;
};

struct envunion1289 {
    enum Unit_8  (*fun) (  struct env1288*  ,    struct Cursors_33  );
    struct env1288 env;
};

static  enum Unit_8   if_dash_just1287 (    struct Maybe_128  x1291 ,   struct envunion1289  fun1293 ) {
    struct Maybe_128  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_128_Just_t ) {
        struct envunion1289  temp1290 = (  fun1293 );
        ( temp1290.fun ( &temp1290.env ,  ( dref1294 .stuff .Maybe_128_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_128_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1291 (   struct env1288* env ,    struct Cursors_33  cursors4183 ) {
    ( (  set_dash_cursors985 ) ( ( env->self4180 ) ,  ( (  cursors4183 ) .f_cur ) ,  ( (  cursors4183 ) .f_sel ) ,  ( CursorMovement_986_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undo1275 (   struct env131* env ,    struct Pane_141 *  self4180 ) {
    struct envunion132  temp1276 = ( (struct envunion132){ .fun = (  struct Maybe_128  (*) (  struct env106*  ,    struct TextBuf_99 *  ) )undo1277 , .env =  env->envinst106 } );
    struct Maybe_128  mcursors4181 = ( temp1276.fun ( &temp1276.env ,  ( ( * (  self4180 ) ) .f_buf ) ) );
    struct env1288 envinst1288 = {
        .self4180 =  self4180 ,
    };
    ( (  if_dash_just1287 ) ( (  mcursors4181 ) ,  ( (struct envunion1289){ .fun = (  enum Unit_8  (*) (  struct env1288*  ,    struct Cursors_33  ) )lam1291 , .env =  envinst1288 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_153   minmax1295 (    struct Pos_26  l1329 ,    struct Pos_26  r1331 ) {
    return ( (  cmp361 ( (  l1329 ) , (  r1331 ) ) == 0 ) ? ( ( Tuple2_153_Tuple2 ) ( (  l1329 ) ,  (  r1331 ) ) ) : ( ( Tuple2_153_Tuple2 ) ( (  r1331 ) ,  (  l1329 ) ) ) );
}

static  struct Pos_26   or_dash_else1296 (    struct Maybe_34  self1733 ,    struct Pos_26  alt1735 ) {
    struct Maybe_34  dref1736 = (  self1733 );
    if ( dref1736.tag == Maybe_34_None_t ) {
        return (  alt1735 );
    }
    else {
        if ( dref1736.tag == Maybe_34_Just_t ) {
            return ( dref1736 .stuff .Maybe_34_Just_s .field0 );
        }
    }
}

static  struct Pos_26   fst1297 (    struct Tuple2_153  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_26   snd1298 (    struct Tuple2_153  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tuple2_153   selection1294 (    struct Pane_141 *  self4192 ) {
    struct Tuple2_153  from_dash_to4193 = ( (  minmax1295 ) ( ( (  or_dash_else1296 ) ( ( ( * (  self4192 ) ) .f_sel ) ,  ( ( * (  self4192 ) ) .f_cursor ) ) ) ,  ( ( * (  self4192 ) ) .f_cursor ) ) );
    struct Pos_26  from4194 = ( (  fst1297 ) ( (  from_dash_to4193 ) ) );
    struct Pos_26  to4195 = ( (  right_dash_pos1030 ) ( ( ( * (  self4192 ) ) .f_buf ) ,  ( (  snd1298 ) ( (  from_dash_to4193 ) ) ) ) );
    return ( ( Tuple2_153_Tuple2 ) ( (  from4194 ) ,  (  to4195 ) ) );
}

struct env1301 {
    struct Editor_163 *  ed4305;
    ;
};

struct envunion1302 {
    enum Unit_8  (*fun) (  struct env1301*  ,    struct StrView_27  );
    struct env1301 env;
};

static  enum Unit_8   if_dash_just1300 (    struct Maybe_164  x1291 ,   struct envunion1302  fun1293 ) {
    struct Maybe_164  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_164_Just_t ) {
        struct envunion1302  temp1303 = (  fun1293 );
        ( temp1303.fun ( &temp1303.env ,  ( dref1294 .stuff .Maybe_164_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_164_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1304 (   struct env1301* env ,    struct StrView_27  cp4309 ) {
    ( (  free978 ) ( (  cp4309 ) ,  ( ( * ( env->ed4305 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   copy_dash_selection_dash_to_dash_clipboard1293 (   struct env155* env ,    struct Editor_163 *  ed4305 ) {
    struct Tuple2_153  from_dash_to4306 = ( (  selection1294 ) ( ( (  pane1028 ) ( (  ed4305 ) ) ) ) );
    struct envunion156  temp1299 = ( (struct envunion156){ .fun = (  struct StrView_27  (*) (  struct env110*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1119 , .env =  env->envinst110 } );
    struct StrView_27  cpd4307 = ( temp1299.fun ( &temp1299.env ,  ( ( ( * (  ed4305 ) ) .f_pane ) .f_buf ) ,  ( (  fst1297 ) ( (  from_dash_to4306 ) ) ) ,  ( (  snd1298 ) ( (  from_dash_to4306 ) ) ) ) );
    struct env1301 envinst1301 = {
        .ed4305 =  ed4305 ,
    };
    ( (  if_dash_just1300 ) ( ( ( * (  ed4305 ) ) .f_clipboard ) ,  ( (struct envunion1302){ .fun = (  enum Unit_8  (*) (  struct env1301*  ,    struct StrView_27  ) )lam1304 , .env =  envinst1301 } ) ) );
    (*  ed4305 ) .f_clipboard = ( ( Maybe_164_Just ) ( (  cpd4307 ) ) );
    return ( Unit_8_Unit );
}

struct env1309 {
    ;
    struct Pane_141 *  self4198;
};

struct envunion1310 {
    enum Unit_8  (*fun) (  struct env1309*  ,    struct Cursors_33  );
    struct env1309 env;
};

static  enum Unit_8   if_dash_just1308 (    struct Maybe_128  x1291 ,   struct envunion1310  fun1293 ) {
    struct Maybe_128  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_128_Just_t ) {
        struct envunion1310  temp1311 = (  fun1293 );
        ( temp1311.fun ( &temp1311.env ,  ( dref1294 .stuff .Maybe_128_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_128_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1312 (   struct env1309* env ,    struct Cursors_33  cursors4205 ) {
    ( (  set_dash_cursors985 ) ( ( env->self4198 ) ,  ( (  cursors4205 ) .f_cur ) ,  ( (  cursors4205 ) .f_sel ) ,  ( CursorMovement_986_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   replace_dash_selection1306 (   struct env135* env ,    struct Pane_141 *  self4198 ,    struct Tuple2_153  pos_prime_s4200 ,    struct StrView_27  cp4202 ) {
    struct envunion136  temp1307 = ( (struct envunion136){ .fun = (  struct Maybe_128  (*) (  struct env112*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_128  ) )change1063 , .env =  env->envinst112 } );
    struct Maybe_128  mcursors4203 = ( temp1307.fun ( &temp1307.env ,  ( ( * (  self4198 ) ) .f_buf ) ,  ( (  fst1297 ) ( (  pos_prime_s4200 ) ) ) ,  ( (  snd1298 ) ( (  pos_prime_s4200 ) ) ) ,  (  cp4202 ) ,  ( ( Maybe_128_Just ) ( ( (struct Cursors_33) { .f_cur = ( ( * (  self4198 ) ) .f_cursor ) , .f_sel = ( ( * (  self4198 ) ) .f_sel ) } ) ) ) ) );
    struct env1309 envinst1309 = {
        .self4198 =  self4198 ,
    };
    ( (  if_dash_just1308 ) ( (  mcursors4203 ) ,  ( (struct envunion1310){ .fun = (  enum Unit_8  (*) (  struct env1309*  ,    struct Cursors_33  ) )lam1312 , .env =  envinst1309 } ) ) );
    return ( Unit_8_Unit );
}

struct envunion1314 {
    enum Unit_8  (*fun) (  struct env155*  ,    struct Editor_163 *  );
    struct env155 env;
};

struct envunion1316 {
    enum Unit_8  (*fun) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_153  ,    struct StrView_27  );
    struct env135 env;
};

struct envunion1318 {
    enum Unit_8  (*fun) (  struct env155*  ,    struct Editor_163 *  );
    struct env155 env;
};

static  struct StrBuilder_62   mk1324 (    enum CAllocator_10  al2797 ) {
    return ( (struct StrBuilder_62) { .f_chars = ( (  mk328 ) ( (  al2797 ) ) ) } );
}

struct IntStrIter_1330 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1329 {
    struct StrViewIter_650  f_left;
    struct IntStrIter_1330  f_right;
};

struct StrConcatIter_1328 {
    struct StrConcatIter_1329  f_left;
    struct StrViewIter_650  f_right;
};

struct env1331 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2765;
};

struct envunion1332 {
    enum Unit_8  (*fun) (  struct env1331*  ,    struct Char_65  );
    struct env1331 env;
};

static  struct StrConcatIter_1328   into_dash_iter1334 (    struct StrConcatIter_1328  self1497 ) {
    return (  self1497 );
}

struct env1340 {
    ;
    size_t  base1210;
};

struct envunion1341 {
    size_t  (*fun) (  struct env1340*  ,    int32_t  ,    size_t  );
    struct env1340 env;
};

static  size_t   reduce1339 (    struct Range_726  iterable1093 ,    size_t  base1095 ,   struct envunion1341  fun1097 ) {
    size_t  x1098 = (  base1095 );
    struct RangeIter_729  it1099 = ( (  into_dash_iter731 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next732 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                struct envunion1341  temp1342 = (  fun1097 );
                x1098 = ( temp1342.fun ( &temp1342.env ,  ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1343 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1343);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1344;
    return (  temp1344 );
}

static  size_t   lam1345 (   struct env1340* env ,    int32_t  item1214 ,    size_t  x1216 ) {
    return (  op_dash_mul282 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  size_t   pow1338 (    size_t  base1210 ,    int32_t  p1212 ) {
    struct env1340 envinst1340 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1339 ) ( ( (  to734 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub852 ( (  p1212 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1341){ .fun = (  size_t  (*) (  struct env1340*  ,    int32_t  ,    size_t  ) )lam1345 , .env =  envinst1340 } ) ) );
}

static  uint8_t   cast1346 (    size_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_653   next1337 (    struct IntStrIter_1330 *  self1428 ) {
    if ( ( ( * (  self1428 ) ) .f_negative ) ) {
        (*  self1428 ) .f_negative = ( false );
        return ( ( Maybe_653_Just ) ( ( (  from_dash_charlike258 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp362 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
    }
    size_t  trim_dash_down1429 = ( (  pow1338 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub852 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    size_t  upper1430 = (  op_dash_div248 ( ( ( * (  self1428 ) ) .f_int ) , (  trim_dash_down1429 ) ) );
    size_t  upper_dash_mask1431 = (  op_dash_mul282 ( (  op_dash_div248 ( (  upper1430 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1432 = ( ( (  cast1346 ) ( (  op_dash_sub349 ( (  upper1430 ) , (  upper_dash_mask1431 ) ) ) ) ) );
    (*  self1428 ) .f_len = (  op_dash_sub852 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1433 = ( (  from_dash_u8932 ) ( (  op_dash_add822 ( (  digit1432 ) , (  from_dash_integral249 ( 48 ) ) ) ) ) );
    return ( ( Maybe_653_Just ) ( (  digit_dash_char1433 ) ) );
}

static  struct Maybe_653   next1336 (    struct StrConcatIter_1329 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next1337 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next1335 (    struct StrConcatIter_1328 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next1336 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1327 (    struct StrConcatIter_1328  iterable1074 ,   struct envunion1332  fun1076 ) {
    struct StrConcatIter_1328  temp1333 = ( (  into_dash_iter1334 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1328 *  it1077 = ( &temp1333 );
    while ( ( true ) ) {
        struct Maybe_653  dref1078 = ( (  next1335 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_653_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_653_Just_t ) {
                struct envunion1332  temp1347 = (  fun1076 );
                ( temp1347.fun ( &temp1347.env ,  ( dref1078 .stuff .Maybe_653_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits1354 (    size_t  self1436 ) {
    if ( (  eq276 ( (  self1436 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1437 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp221 ( (  self1436 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1436 = (  op_dash_div248 ( (  self1436 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1437 = (  op_dash_add311 ( (  digits1437 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1437 );
}

static  struct IntStrIter_1330   uint_dash_iter1353 (    size_t  int1443 ) {
    return ( (struct IntStrIter_1330) { .f_int = (  int1443 ) , .f_len = ( (  count_dash_digits1354 ) ( (  int1443 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1330   chars1352 (    size_t  self1473 ) {
    return ( (  uint_dash_iter1353 ) ( (  self1473 ) ) );
}

static  struct StrConcatIter_1329   into_dash_iter1351 (    struct StrConcat_75  dref1504 ) {
    return ( (struct StrConcatIter_1329) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1352 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1329   chars1350 (    struct StrConcat_75  self1515 ) {
    return ( (  into_dash_iter1351 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_1328   into_dash_iter1349 (    struct StrConcat_74  dref1504 ) {
    return ( (struct StrConcatIter_1328) { .f_left = ( (  chars1350 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars655 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1328   chars1348 (    struct StrConcat_74  self1515 ) {
    return ( (  into_dash_iter1349 ) ( (  self1515 ) ) );
}

static  enum Unit_8   write_dash_slice1359 (   struct env58* env ,    struct StrBuilder_62 *  builder2755 ,    struct Slice_14  s2757 ) {
    struct envunion59  temp1360 = ( (struct envunion59){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all383 , .env =  env->envinst48 } );
    ( temp1360.fun ( &temp1360.env ,  ( & ( ( * (  builder2755 ) ) .f_chars ) ) ,  (  s2757 ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_14   from_dash_char1361 (    struct Char_65  c1942 ,    uint8_t *  buf1944 ) {
    struct CharDestructured_242  dref1945 = ( (  destructure244 ) ( (  c1942 ) ) );
    if ( dref1945.tag == CharDestructured_242_Ref_t ) {
        return ( (struct Slice_14) { .f_ptr = ( ( dref1945 .stuff .CharDestructured_242_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1945 .stuff .CharDestructured_242_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1945.tag == CharDestructured_242_Scalar_t ) {
            if ( (  cmp252 ( ( ( dref1945 .stuff .CharDestructured_242_Scalar_s .field0 ) .f_value ) , (  from_dash_integral253 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1362 = ( (  from_dash_string57 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp1362);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            (*  buf1944 ) = ( (  u32_dash_u8255 ) ( ( ( dref1945 .stuff .CharDestructured_242_Scalar_s .field0 ) .f_value ) ) );
            return ( (struct Slice_14) { .f_ptr = (  buf1944 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_8   write_dash_char1357 (   struct env60* env ,    struct StrBuilder_62 *  builder2760 ,    struct Char_65  c2762 ) {
    struct envunion61  temp1358 = ( (struct envunion61){ .fun = (  enum Unit_8  (*) (  struct env58*  ,    struct StrBuilder_62 *  ,    struct Slice_14  ) )write_dash_slice1359 , .env =  env->envinst58 } );
    uint8_t  temp1364;
    uint8_t  temp1363 = (  temp1364 );
    ( temp1358.fun ( &temp1358.env ,  (  builder2760 ) ,  ( (  from_dash_char1361 ) ( (  c2762 ) ,  ( &temp1363 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1355 (   struct env1331* env ,    struct Char_65  c2769 ) {
    struct envunion64  temp1356 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1357 , .env =  env->envinst60 } );
    return ( temp1356.fun ( &temp1356.env ,  ( env->builder2765 ) ,  (  c2769 ) ) );
}

static  enum Unit_8   write1326 (   struct env66* env ,    struct StrBuilder_62 *  builder2765 ,    struct StrConcat_74  s2767 ) {
    struct env1331 envinst1331 = {
        .envinst60 = env->envinst60 ,
        .builder2765 =  builder2765 ,
    };
    ( (  for_dash_each1327 ) ( ( (  chars1348 ) ( (  s2767 ) ) ) ,  ( (struct envunion1332){ .fun = (  enum Unit_8  (*) (  struct env1331*  ,    struct Char_65  ) )lam1355 , .env =  envinst1331 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t *   cast_dash_ptr1368 (    uint8_t *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_14   cast_dash_slice1367 (    struct Slice_14  s1933 ) {
    return ( (struct Slice_14) { .f_ptr = ( (  cast_dash_ptr1368 ) ( ( (  s1933 ) .f_ptr ) ) ) , .f_count = ( (  s1933 ) .f_count ) } );
}

static  struct StrView_27   as_dash_str1366 (    struct StrBuilder_62 *  builder2803 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice1367 ) ( ( (  subslice373 ) ( ( ( ( * (  builder2803 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2803 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_27   mk_dash_dyn_dash_str1322 (   struct env72* env ,    struct StrConcat_74  s2823 ,    enum CAllocator_10  al2825 ) {
    struct StrBuilder_62  temp1323 = ( (  mk1324 ) ( (  al2825 ) ) );
    struct StrBuilder_62 *  sb2826 = ( &temp1323 );
    struct envunion73  temp1325 = ( (struct envunion73){ .fun = (  enum Unit_8  (*) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrConcat_74  ) )write1326 , .env =  env->envinst66 } );
    ( temp1325.fun ( &temp1325.env ,  (  sb2826 ) ,  (  s2823 ) ) );
    struct envunion71  temp1365 = ( (struct envunion71){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1357 , .env =  env->envinst60 } );
    ( temp1365.fun ( &temp1365.env ,  (  sb2826 ) ,  ( (  nullchar575 ) ( ) ) ) );
    struct StrView_27  dynstr2827 = ( (  as_dash_str1366 ) ( (  sb2826 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2827 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub349 ( ( ( (  dynstr2827 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1320 (   struct env159* env ,    struct Editor_163 *  ed4317 ,    struct StrConcat_74  s4319 ) {
    ( (  reset_dash_msg972 ) ( (  ed4317 ) ) );
    struct envunion160  temp1321 = ( (struct envunion160){ .fun = (  struct StrView_27  (*) (  struct env72*  ,    struct StrConcat_74  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1322 , .env =  env->envinst72 } );
    (*  ed4317 ) .f_msg = ( ( Maybe_164_Just ) ( ( temp1321.fun ( &temp1321.env ,  (  s4319 ) ,  ( ( * (  ed4317 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion1371 {
    enum Unit_8  (*fun) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_153  ,    struct StrView_27  );
    struct env135 env;
};

struct env1370 {
    ;
    ;
    ;
    ;
    ;
    struct env135 envinst135;
    ;
    ;
    ;
    struct Editor_163 *  ed4363;
    ;
    ;
    ;
};

struct envunion1372 {
    enum Unit_8  (*fun) (  struct env1370*  ,    struct StrView_27  );
    struct env1370 env;
};

static  enum Unit_8   if_dash_just1369 (    struct Maybe_164  x1291 ,   struct envunion1372  fun1293 ) {
    struct Maybe_164  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_164_Just_t ) {
        struct envunion1372  temp1373 = (  fun1293 );
        ( temp1373.fun ( &temp1373.env ,  ( dref1294 .stuff .Maybe_164_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_164_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   max_dash_pos1375 (    struct Pane_141 *  pane4128 ) {
    return ( {  struct Maybe_34  dref4129 = ( ( * (  pane4128 ) ) .f_sel ) ; dref4129.tag == Maybe_34_Just_t ? ( (  max363 ) ( ( ( * (  pane4128 ) ) .f_cursor ) ,  ( dref4129 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4128 ) ) .f_cursor ) ; } );
}

static  uint8_t   elem_dash_get1377 (    struct Slice_14  self1868 ,    size_t  idx1870 ) {
    return ( (  get424 ) ( (  self1868 ) ,  (  idx1870 ) ) );
}

static  uint8_t   last1376 (    struct Slice_14  s1936 ) {
    if ( (  eq276 ( ( (  s1936 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1108 ) ( ( (  from_dash_string257 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1377 ( (  s1936 ) , (  op_dash_sub349 ( ( (  s1936 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1378 (    int32_t  x1352 ,    int32_t  mn1354 ,    int32_t  mx1356 ) {
    if ( (  cmp362 ( (  x1352 ) , (  mn1354 ) ) == 0 ) ) {
        return (  mn1354 );
    } else {
        if ( (  cmp362 ( (  x1352 ) , (  mx1356 ) ) == 2 ) ) {
            return (  mx1356 );
        } else {
            return (  x1352 );
        }
    }
}

static  enum Unit_8   lam1374 (   struct env1370* env ,    struct StrView_27  cp4374 ) {
    struct Pos_26  start4375 = ( (  max_dash_pos1375 ) ( ( (  pane1028 ) ( ( env->ed4363 ) ) ) ) );
    if ( (  eq245 ( ( (  last1376 ) ( ( (  cp4374 ) .f_contents ) ) ) , ( (  ascii_dash_u8785 ) ( ( (  from_dash_charlike827 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        start4375 = ( (struct Pos_26) { .f_line = ( (  clamp1378 ) ( (  op_dash_add311 ( ( (  start4375 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  num_dash_lines1031 ) ( ( ( * ( (  pane1028 ) ( ( env->ed4363 ) ) ) ) .f_buf ) ) ) ) ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } );
    } else {
        start4375 = ( (  right_dash_pos1030 ) ( ( ( ( * ( env->ed4363 ) ) .f_pane ) .f_buf ) ,  (  start4375 ) ) );
    }
    struct envunion1371  temp1379 = ( (struct envunion1371){ .fun = (  enum Unit_8  (*) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_153  ,    struct StrView_27  ) )replace_dash_selection1306 , .env =  env->envinst135 } );
    ( temp1379.fun ( &temp1379.env ,  ( (  pane1028 ) ( ( env->ed4363 ) ) ) ,  ( ( Tuple2_153_Tuple2 ) ( (  start4375 ) ,  (  start4375 ) ) ) ,  (  cp4374 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1382 {
    enum Unit_8  (*fun) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_153  ,    struct StrView_27  );
    struct env135 env;
};

struct env1381 {
    ;
    struct Editor_163 *  ed4363;
    ;
    ;
    ;
    ;
    struct env135 envinst135;
    ;
    ;
};

struct envunion1383 {
    enum Unit_8  (*fun) (  struct env1381*  ,    struct StrView_27  );
    struct env1381 env;
};

static  enum Unit_8   if_dash_just1380 (    struct Maybe_164  x1291 ,   struct envunion1383  fun1293 ) {
    struct Maybe_164  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_164_Just_t ) {
        struct envunion1383  temp1384 = (  fun1293 );
        ( temp1384.fun ( &temp1384.env ,  ( dref1294 .stuff .Maybe_164_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_164_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   min_dash_pos1386 (    struct Pane_141 *  pane4123 ) {
    return ( {  struct Maybe_34  dref4124 = ( ( * (  pane4123 ) ) .f_sel ) ; dref4124.tag == Maybe_34_Just_t ? ( (  min360 ) ( ( ( * (  pane4123 ) ) .f_cursor ) ,  ( dref4124 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4123 ) ) .f_cursor ) ; } );
}

static  enum Unit_8   lam1385 (   struct env1381* env ,    struct StrView_27  cp4377 ) {
    struct Pos_26  start4378 = ( (  min_dash_pos1386 ) ( ( (  pane1028 ) ( ( env->ed4363 ) ) ) ) );
    if ( (  eq245 ( ( (  last1376 ) ( ( (  cp4377 ) .f_contents ) ) ) , ( (  ascii_dash_u8785 ) ( ( (  from_dash_charlike827 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_26  temp1387 = (  start4378 );
        temp1387 .  f_bi = (  from_dash_integral56 ( 0 ) );
        start4378 = ( temp1387 );
    }
    struct envunion1382  temp1388 = ( (struct envunion1382){ .fun = (  enum Unit_8  (*) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_153  ,    struct StrView_27  ) )replace_dash_selection1306 , .env =  env->envinst135 } );
    ( temp1388.fun ( &temp1388.env ,  ( (  pane1028 ) ( ( env->ed4363 ) ) ) ,  ( ( Tuple2_153_Tuple2 ) ( (  start4378 ) ,  (  start4378 ) ) ) ,  (  cp4377 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1391 {
    enum Unit_8  (*fun) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_153  ,    struct StrView_27  );
    struct env135 env;
};

struct env1390 {
    struct Editor_163 *  ed4363;
    ;
    ;
    struct env135 envinst135;
};

struct envunion1392 {
    enum Unit_8  (*fun) (  struct env1390*  ,    struct StrView_27  );
    struct env1390 env;
};

static  enum Unit_8   if_dash_just1389 (    struct Maybe_164  x1291 ,   struct envunion1392  fun1293 ) {
    struct Maybe_164  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_164_Just_t ) {
        struct envunion1392  temp1393 = (  fun1293 );
        ( temp1393.fun ( &temp1393.env ,  ( dref1294 .stuff .Maybe_164_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_164_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1394 (   struct env1390* env ,    struct StrView_27  cp4380 ) {
    struct Pos_26  start4381 = ( (  min_dash_pos1386 ) ( ( (  pane1028 ) ( ( env->ed4363 ) ) ) ) );
    struct envunion1391  temp1395 = ( (struct envunion1391){ .fun = (  enum Unit_8  (*) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_153  ,    struct StrView_27  ) )replace_dash_selection1306 , .env =  env->envinst135 } );
    ( temp1395.fun ( &temp1395.env ,  ( (  pane1028 ) ( ( env->ed4363 ) ) ) ,  ( ( Tuple2_153_Tuple2 ) ( (  start4381 ) ,  (  start4381 ) ) ) ,  (  cp4380 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   expand1396 (    struct Pane_141 *  pane4142 ) {
    struct Pos_26  min_dash_pos4143 = ( (  min_dash_pos1386 ) ( (  pane4142 ) ) );
    struct Pos_26  max_dash_pos4144 = ( (  max_dash_pos1375 ) ( (  pane4142 ) ) );
    int32_t  max_dash_pos_dash_max4145 = ( (  size_dash_i32233 ) ( ( (  num_dash_bytes1024 ) ( ( (  line991 ) ( ( ( * (  pane4142 ) ) .f_buf ) ,  ( (  max_dash_pos4144 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq365 ( ( (  min_dash_pos4143 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) && (  eq365 ( ( (  max_dash_pos4144 ) .f_bi ) , (  max_dash_pos_dash_max4145 ) ) ) ) ) ) {
        struct Pos_26  temp1397 = (  min_dash_pos4143 );
        temp1397 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4142 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1397 ) ) );
        struct Pos_26  temp1398 = (  max_dash_pos4144 );
        temp1398 .  f_bi = (  max_dash_pos_dash_max4145 );
        (*  pane4142 ) .f_cursor = ( temp1398 );
    } else {
        if ( (  cmp362 ( (  op_dash_add311 ( ( (  max_dash_pos4144 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1031 ) ( ( ( * (  pane4142 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_8_Unit );
        }
        struct Pos_26  temp1399 = (  min_dash_pos4143 );
        temp1399 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4142 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1399 ) ) );
        int32_t  next_dash_line4146 = (  op_dash_add311 ( ( (  max_dash_pos4144 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
        (*  pane4142 ) .f_cursor = ( (struct Pos_26) { .f_line = (  next_dash_line4146 ) , .f_bi = ( (  size_dash_i32233 ) ( ( (  num_dash_bytes1024 ) ( ( (  line991 ) ( ( ( * (  pane4142 ) ) .f_buf ) ,  (  next_dash_line4146 ) ) ) ) ) ) ) } );
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_none1400 (    struct Maybe_34  m1264 ) {
    struct Maybe_34  dref1265 = (  m1264 );
    if ( dref1265.tag == Maybe_34_None_t ) {
        return ( true );
    }
    else {
        if ( dref1265.tag == Maybe_34_Just_t ) {
            return ( false );
        }
    }
}

struct Maybe_1402 {
    enum {
        Maybe_1402_None_t,
        Maybe_1402_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_153  field0;
        } Maybe_1402_Just_s;
    } stuff;
};

static struct Maybe_1402 Maybe_1402_Just (  struct Tuple2_153  field0 ) {
    return ( struct Maybe_1402 ) { .tag = Maybe_1402_Just_t, .stuff = { .Maybe_1402_Just_s = { .field0 = field0 } } };
};

struct env1404 {
    ;
    ;
    struct Pane_141 *  pane4250;
    ;
    struct StrView_27  query4254;
    ;
};

struct envunion1406 {
    struct Maybe_1046  (*fun) (  struct env1404*  ,    struct Pos_26  );
    struct env1404 env;
};

struct Zip_1413 {
    struct SliceIter_387  f_left_dash_it;
    struct SliceIter_387  f_right_dash_it;
};

struct Tuple2_1414 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_1414 Tuple2_1414_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_1414 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1416 {
    bool (*  fun1126 )(    struct Tuple2_1414  );
};

struct envunion1417 {
    bool  (*fun) (  struct env1416*  ,    struct Tuple2_1414  ,    bool  );
    struct env1416 env;
};

static  struct Zip_1413   into_dash_iter1418 (    struct Zip_1413  self911 ) {
    return (  self911 );
}

struct Maybe_1419 {
    enum {
        Maybe_1419_None_t,
        Maybe_1419_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1414  field0;
        } Maybe_1419_Just_s;
    } stuff;
};

static struct Maybe_1419 Maybe_1419_Just (  struct Tuple2_1414  field0 ) {
    return ( struct Maybe_1419 ) { .tag = Maybe_1419_Just_t, .stuff = { .Maybe_1419_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1419   next1420 (    struct Zip_1413 *  self914 ) {
    struct Zip_1413  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_390  dref916 = ( (  next391 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_390_None_t ) {
            return ( (struct Maybe_1419) { .tag = Maybe_1419_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_390_Just_t ) {
                struct Maybe_390  dref918 = ( (  next391 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_390_None_t ) {
                    return ( (struct Maybe_1419) { .tag = Maybe_1419_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_390_Just_t ) {
                        ( (  next391 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next391 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1419_Just ) ( ( ( Tuple2_1414_Tuple2 ) ( ( dref916 .stuff .Maybe_390_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_390_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1415 (    struct Zip_1413  iterable1093 ,    bool  base1095 ,   struct envunion1417  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_1413  it1099 = ( (  into_dash_iter1418 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1419  dref1100 = ( (  next1420 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1419_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1419_Just_t ) {
                struct envunion1417  temp1421 = (  fun1097 );
                x1098 = ( temp1421.fun ( &temp1421.env ,  ( dref1100 .stuff .Maybe_1419_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1422 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1422);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1423;
    return (  temp1423 );
}

static  bool   lam1424 (   struct env1416* env ,    struct Tuple2_1414  e1128 ,    bool  x1130 ) {
    return ( ( ( env->fun1126 ) ( (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1412 (    struct Zip_1413  it1124 ,    bool (*  fun1126 )(    struct Tuple2_1414  ) ) {
    struct env1416 envinst1416 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1415 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1417){ .fun = (  bool  (*) (  struct env1416*  ,    struct Tuple2_1414  ,    bool  ) )lam1424 , .env =  envinst1416 } ) ) );
}

static  struct Zip_1413   zip1425 (    struct Slice_14  left922 ,    struct Slice_14  right924 ) {
    struct SliceIter_387  left_dash_it925 = ( (  into_dash_iter389 ) ( (  left922 ) ) );
    struct SliceIter_387  right_dash_it926 = ( (  into_dash_iter389 ) ( (  right924 ) ) );
    return ( (struct Zip_1413) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  bool   lam1426 (    struct Tuple2_1414  dref1863 ) {
    return (  eq245 ( ( dref1863 .field0 ) , ( dref1863 .field1 ) ) );
}

static  bool   eq1411 (    struct Slice_14  l1860 ,    struct Slice_14  r1862 ) {
    if ( ( !  eq276 ( ( (  l1860 ) .f_count ) , ( (  r1862 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all1412 ) ( ( (  zip1425 ) ( (  l1860 ) ,  (  r1862 ) ) ) ,  (  lam1426 ) ) );
}

static  struct Maybe_1046   find_dash_slice1408 (    struct Slice_14  haystack1913 ,    struct Slice_14  needle1915 ) {
    struct RangeIter_729  temp1409 =  into_dash_iter731 ( ( (  to734 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub852 ( ( (  size_dash_i32233 ) ( ( (  haystack1913 ) .f_count ) ) ) , ( (  size_dash_i32233 ) ( ( (  needle1915 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_309  __cond1410 =  next732 (&temp1409);
        if (  __cond1410 .tag == 0 ) {
            break;
        }
        int32_t  i1917 =  __cond1410 .stuff .Maybe_309_Just_s .field0;
        if ( (  eq1411 ( ( (  subslice373 ) ( (  haystack1913 ) ,  ( (  i32_dash_size299 ) ( (  i1917 ) ) ) ,  (  op_dash_add269 ( ( (  i32_dash_size299 ) ( (  i1917 ) ) ) , ( (  needle1915 ) .f_count ) ) ) ) ) , (  needle1915 ) ) ) ) {
            return ( ( Maybe_1046_Just ) ( ( (  i32_dash_size299 ) ( (  i1917 ) ) ) ) );
        }
    }
    return ( (struct Maybe_1046) { .tag = Maybe_1046_None_t } );
}

static  struct StrView_27   byte_dash_substr_dash_from1427 (    struct StrView_27  s2191 ,    size_t  from2193 ) {
    return ( (struct StrView_27) { .f_contents = ( (  from372 ) ( ( (  s2191 ) .f_contents ) ,  (  from2193 ) ) ) } );
}

static  struct Maybe_1046   search_dash_on_dash_line1407 (   struct env1404* env ,    struct Pos_26  pos4257 ) {
    return ( (  find_dash_slice1408 ) ( ( ( (  byte_dash_substr_dash_from1427 ) ( ( (  line991 ) ( ( ( * ( env->pane4250 ) ) .f_buf ) ,  ( (  pos4257 ) .f_line ) ) ) ,  ( (  i32_dash_size299 ) ( ( (  pos4257 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4254 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1433 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  int32_t   op_dash_mul1434 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  int32_t   mod1432 (    int32_t  l1229 ,    int32_t  d1231 ) {
    int32_t  r1232 = (  op_dash_div1433 ( (  l1229 ) , (  d1231 ) ) );
    int32_t  m1233 = (  op_dash_sub852 ( (  l1229 ) , (  op_dash_mul1434 ( (  r1232 ) , (  d1231 ) ) ) ) );
    if ( (  cmp362 ( (  m1233 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add311 ( (  d1231 ) , (  m1233 ) ) );
    } else {
        return (  m1233 );
    }
}

struct envunion1436 {
    struct Maybe_1046  (*fun) (  struct env1404*  ,    struct Pos_26  );
    struct env1404 env;
};

static  struct Maybe_1402   search_dash_from1403 (    struct Pane_141 *  pane4250 ,    struct Pos_26  pos4252 ,    struct StrView_27  query4254 ) {
    struct env1404 envinst1404 = {
        .pane4250 =  pane4250 ,
        .query4254 =  query4254 ,
    };
    struct envunion1406  temp1405 = ( (struct envunion1406){ .fun = (  struct Maybe_1046  (*) (  struct env1404*  ,    struct Pos_26  ) )search_dash_on_dash_line1407 , .env =  envinst1404 } );
    struct Maybe_1046  dref4258 = ( temp1405.fun ( &temp1405.env ,  (  pos4252 ) ) );
    if ( dref4258.tag == Maybe_1046_Just_t ) {
        struct Pos_26  temp1428 = (  pos4252 );
        temp1428 .  f_bi = (  op_dash_add311 ( ( (  pos4252 ) .f_bi ) , ( (  size_dash_i32233 ) ( ( dref4258 .stuff .Maybe_1046_Just_s .field0 ) ) ) ) );
        struct Pos_26  sel_dash_pos4260 = ( temp1428 );
        struct Pos_26  temp1429 = (  pos4252 );
        temp1429 .  f_bi = (  op_dash_sub852 ( (  op_dash_add311 ( ( (  pos4252 ) .f_bi ) , ( (  size_dash_i32233 ) ( (  op_dash_add269 ( ( dref4258 .stuff .Maybe_1046_Just_s .field0 ) , ( (  num_dash_bytes1024 ) ( (  query4254 ) ) ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4261 = ( temp1429 );
        return ( ( Maybe_1402_Just ) ( ( ( Tuple2_153_Tuple2 ) ( (  sel_dash_pos4260 ) ,  (  cur_dash_pos4261 ) ) ) ) );
    }
    else {
        if ( dref4258.tag == Maybe_1046_None_t ) {
            int32_t  num_dash_lines4262 = ( (  num_dash_lines1031 ) ( ( ( * (  pane4250 ) ) .f_buf ) ) );
            struct RangeIter_729  temp1430 =  into_dash_iter731 ( ( (  to734 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4262 ) ) ) );
            while (true) {
                struct Maybe_309  __cond1431 =  next732 (&temp1430);
                if (  __cond1431 .tag == 0 ) {
                    break;
                }
                int32_t  i4264 =  __cond1431 .stuff .Maybe_309_Just_s .field0;
                int32_t  line4265 = ( (  mod1432 ) ( (  op_dash_add311 ( ( (  pos4252 ) .f_line ) , (  i4264 ) ) ) ,  (  num_dash_lines4262 ) ) );
                struct envunion1436  temp1435 = ( (struct envunion1436){ .fun = (  struct Maybe_1046  (*) (  struct env1404*  ,    struct Pos_26  ) )search_dash_on_dash_line1407 , .env =  envinst1404 } );
                struct Maybe_1046  dref4266 = ( temp1435.fun ( &temp1435.env ,  ( (struct Pos_26) { .f_line = (  line4265 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) );
                if ( dref4266.tag == Maybe_1046_Just_t ) {
                    struct Pos_26  sel_dash_pos4268 = ( (struct Pos_26) { .f_line = (  line4265 ) , .f_bi = ( (  size_dash_i32233 ) ( ( dref4266 .stuff .Maybe_1046_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4269 = ( (struct Pos_26) { .f_line = (  line4265 ) , .f_bi = (  op_dash_sub852 ( ( (  size_dash_i32233 ) ( (  op_dash_add269 ( ( dref4266 .stuff .Maybe_1046_Just_s .field0 ) , ( (  num_dash_bytes1024 ) ( (  query4254 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1402_Just ) ( ( ( Tuple2_153_Tuple2 ) ( (  sel_dash_pos4268 ) ,  (  cur_dash_pos4269 ) ) ) ) );
                }
                else {
                    if ( dref4266.tag == Maybe_1046_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1402) { .tag = Maybe_1402_None_t } );
        }
    }
}

static  enum Unit_8   next_dash_match1401 (    struct Editor_163 *  ed4347 ) {
    struct Maybe_164  dref4348 = ( ( * (  ed4347 ) ) .f_search_dash_term );
    if ( dref4348.tag == Maybe_164_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4348.tag == Maybe_164_Just_t ) {
            struct Maybe_1402  dref4350 = ( (  search_dash_from1403 ) ( ( (  pane1028 ) ( (  ed4347 ) ) ) ,  ( (  max_dash_pos1375 ) ( ( (  pane1028 ) ( (  ed4347 ) ) ) ) ) ,  ( dref4348 .stuff .Maybe_164_Just_s .field0 ) ) );
            if ( dref4350.tag == Maybe_1402_None_t ) {
            }
            else {
                if ( dref4350.tag == Maybe_1402_Just_t ) {
                    ( (  set_dash_cursors985 ) ( ( (  pane1028 ) ( (  ed4347 ) ) ) ,  ( dref4350 .stuff .Maybe_1402_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4350 .stuff .Maybe_1402_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_986_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_1046   find_dash_last_dash_occurence_dash_of_dash_slice1439 (    struct Slice_14  haystack1920 ,    struct Slice_14  needle1922 ) {
    struct Maybe_1046  occ1923 = ( (struct Maybe_1046) { .tag = Maybe_1046_None_t } );
    struct RangeIter_729  temp1440 =  into_dash_iter731 ( ( (  to734 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub852 ( ( (  size_dash_i32233 ) ( ( (  haystack1920 ) .f_count ) ) ) , ( (  size_dash_i32233 ) ( ( (  needle1922 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_309  __cond1441 =  next732 (&temp1440);
        if (  __cond1441 .tag == 0 ) {
            break;
        }
        int32_t  i1925 =  __cond1441 .stuff .Maybe_309_Just_s .field0;
        if ( (  eq1411 ( ( (  subslice373 ) ( (  haystack1920 ) ,  ( (  i32_dash_size299 ) ( (  i1925 ) ) ) ,  (  op_dash_add269 ( ( (  i32_dash_size299 ) ( (  i1925 ) ) ) , ( (  needle1922 ) .f_count ) ) ) ) ) , (  needle1922 ) ) ) ) {
            occ1923 = ( ( Maybe_1046_Just ) ( ( (  i32_dash_size299 ) ( (  i1925 ) ) ) ) );
        }
    }
    return (  occ1923 );
}

static  struct Maybe_1402   search_dash_back1438 (    struct Pane_141 *  pane4272 ,    struct Pos_26  pos4274 ,    struct StrView_27  query4276 ) {
    struct Maybe_1046  dref4277 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1439 ) ( ( ( (  byte_dash_substr430 ) ( ( (  line991 ) ( ( ( * (  pane4272 ) ) .f_buf ) ,  ( (  pos4274 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size299 ) ( ( (  pos4274 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4276 ) .f_contents ) ) );
    if ( dref4277.tag == Maybe_1046_Just_t ) {
        struct Pos_26  temp1442 = (  pos4274 );
        temp1442 .  f_bi = ( (  size_dash_i32233 ) ( ( dref4277 .stuff .Maybe_1046_Just_s .field0 ) ) );
        struct Pos_26  sel_dash_pos4279 = ( temp1442 );
        struct Pos_26  temp1443 = (  pos4274 );
        temp1443 .  f_bi = (  op_dash_sub852 ( ( (  size_dash_i32233 ) ( (  op_dash_add269 ( ( dref4277 .stuff .Maybe_1046_Just_s .field0 ) , ( (  num_dash_bytes1024 ) ( (  query4276 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4280 = ( temp1443 );
        return ( ( Maybe_1402_Just ) ( ( ( Tuple2_153_Tuple2 ) ( (  sel_dash_pos4279 ) ,  (  cur_dash_pos4280 ) ) ) ) );
    }
    else {
        if ( dref4277.tag == Maybe_1046_None_t ) {
            int32_t  num_dash_lines4281 = ( (  num_dash_lines1031 ) ( ( ( * (  pane4272 ) ) .f_buf ) ) );
            struct RangeIter_729  temp1444 =  into_dash_iter731 ( ( (  to734 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4281 ) ) ) );
            while (true) {
                struct Maybe_309  __cond1445 =  next732 (&temp1444);
                if (  __cond1445 .tag == 0 ) {
                    break;
                }
                int32_t  i4283 =  __cond1445 .stuff .Maybe_309_Just_s .field0;
                int32_t  line4284 = ( (  mod1432 ) ( (  op_dash_sub852 ( ( (  pos4274 ) .f_line ) , (  i4283 ) ) ) ,  (  num_dash_lines4281 ) ) );
                struct Maybe_1046  dref4285 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1439 ) ( ( ( (  line991 ) ( ( ( * (  pane4272 ) ) .f_buf ) ,  (  line4284 ) ) ) .f_contents ) ,  ( (  query4276 ) .f_contents ) ) );
                if ( dref4285.tag == Maybe_1046_Just_t ) {
                    struct Pos_26  sel_dash_pos4287 = ( (struct Pos_26) { .f_line = (  line4284 ) , .f_bi = ( (  size_dash_i32233 ) ( ( dref4285 .stuff .Maybe_1046_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4288 = ( (struct Pos_26) { .f_line = (  line4284 ) , .f_bi = (  op_dash_sub852 ( ( (  size_dash_i32233 ) ( (  op_dash_add269 ( ( dref4285 .stuff .Maybe_1046_Just_s .field0 ) , ( (  num_dash_bytes1024 ) ( (  query4276 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1402_Just ) ( ( ( Tuple2_153_Tuple2 ) ( (  sel_dash_pos4287 ) ,  (  cur_dash_pos4288 ) ) ) ) );
                }
                else {
                    if ( dref4285.tag == Maybe_1046_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1402) { .tag = Maybe_1402_None_t } );
        }
    }
}

static  enum Unit_8   prev_dash_match1437 (    struct Editor_163 *  ed4355 ) {
    struct Maybe_164  dref4356 = ( ( * (  ed4355 ) ) .f_search_dash_term );
    if ( dref4356.tag == Maybe_164_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4356.tag == Maybe_164_Just_t ) {
            struct Maybe_1402  dref4358 = ( (  search_dash_back1438 ) ( ( (  pane1028 ) ( (  ed4355 ) ) ) ,  ( (  min_dash_pos1386 ) ( ( (  pane1028 ) ( (  ed4355 ) ) ) ) ) ,  ( dref4356 .stuff .Maybe_164_Just_s .field0 ) ) );
            if ( dref4358.tag == Maybe_1402_None_t ) {
            }
            else {
                if ( dref4358.tag == Maybe_1402_Just_t ) {
                    ( (  set_dash_cursors985 ) ( ( (  pane1028 ) ( (  ed4355 ) ) ) ,  ( dref4358 .stuff .Maybe_1402_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4358 .stuff .Maybe_1402_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_986_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   begin_dash_changeset1449 (   struct env117* env ,    struct TextBuf_99 *  self3860 ,    struct Cursors_33  before_dash_cursors3862 ) {
    struct Actions_100 *  actions3863 = ( & ( ( * (  self3860 ) ) .f_actions ) );
    ( (  trim_dash_actions1064 ) ( (  actions3863 ) ) );
    ( (  flush_dash_insert_dash_action1038 ) ( (  self3860 ) ) );
    ( (  assert524 ) ( (  eq1134 ( ( ( ( * (  self3860 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_101_NoChangeset ) ) ) ,  ( (  from_dash_string257 ) ( ( "expect no changeset bruh" ) ,  ( 24 ) ) ) ) );
    enum CAllocator_10  al3864 = ( ( * (  self3860 ) ) .f_al );
    struct Changeset_32  temp1450 = ( (struct Changeset_32) { .f_parts = ( (  mk1163 ) ( (  al3864 ) ) ) , .f_before_dash_cursors = (  before_dash_cursors3862 ) } );
    struct Changeset_32 *  changeset3865 = ( &temp1450 );
    struct envunion118  temp1451 = ( (struct envunion118){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1174 , .env =  env->envinst28 } );
    ( temp1451.fun ( &temp1451.env ,  ( & ( ( * (  actions3863 ) ) .f_list ) ) ,  ( * (  changeset3865 ) ) ) );
    (*  actions3863 ) .f_input_dash_changeset = ( ChangesetInputType_101_CustomChangeset );
    (*  actions3863 ) .f_cur = (  op_dash_add269 ( ( ( * (  actions3863 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_1090   head1457 (    struct List_23  it1142 ) {
    struct SliceIter_1083  temp1458 = ( (  into_dash_iter1085 ) ( (  it1142 ) ) );
    return ( (  next1091 ) ( ( &temp1458 ) ) );
}

static  bool   null1456 (    struct List_23  it1151 ) {
    struct Maybe_1090  dref1152 = ( (  head1457 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_1090_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   end_dash_changeset1455 (    struct TextBuf_99 *  self3868 ) {
    ( (  flush_dash_insert_dash_action1038 ) ( (  self3868 ) ) );
    struct Actions_100 *  actions3869 = ( & ( ( * (  self3868 ) ) .f_actions ) );
    if ( ( (  null1456 ) ( ( ( * ( (  last_dash_ptr1136 ) ( ( (  to_dash_slice1138 ) ( ( ( * (  actions3869 ) ) .f_list ) ) ) ) ) ) .f_parts ) ) ) ) {
        (*  actions3869 ) .f_cur = (  op_dash_sub349 ( ( ( * (  actions3869 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
        (*  actions3869 ) .f_input_dash_changeset = ( ChangesetInputType_101_NoChangeset );
        ( (  trim_dash_actions1064 ) ( (  actions3869 ) ) );
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_34   fmap_dash_maybe1460 (    struct Maybe_34  x1275 ,    struct Pos_26 (*  fun1277 )(    struct Pos_26  ) ) {
    struct Maybe_34  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_34_None_t ) {
        return ( (struct Maybe_34) { .tag = Maybe_34_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_34_Just_t ) {
            return ( ( Maybe_34_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_34_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_26   lam1461 (    struct Pos_26  sel4217 ) {
    struct Pos_26  temp1462 = (  sel4217 );
    temp1462 .  f_bi = (  op_dash_add311 ( ( (  sel4217 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( temp1462 );
}

static  enum Unit_8   indent_dash_selection1447 (   struct env139* env ,    struct Pane_141 *  self4213 ) {
    struct envunion144  temp1448 = ( (struct envunion144){ .fun = (  enum Unit_8  (*) (  struct env117*  ,    struct TextBuf_99 *  ,    struct Cursors_33  ) )begin_dash_changeset1449 , .env =  env->envinst117 } );
    ( temp1448.fun ( &temp1448.env ,  ( ( * (  self4213 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4213 ) ) .f_cursor ) , .f_sel = ( ( * (  self4213 ) ) .f_sel ) } ) ) );
    struct RangeIter_729  temp1452 =  into_dash_iter731 ( ( (  to734 ) ( ( ( (  min_dash_pos1386 ) ( (  self4213 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1375 ) ( (  self4213 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_309  __cond1453 =  next732 (&temp1452);
        if (  __cond1453 .tag == 0 ) {
            break;
        }
        int32_t  line4215 =  __cond1453 .stuff .Maybe_309_Just_s .field0;
        struct envunion140  temp1454 = ( (struct envunion140){ .fun = (  enum Unit_8  (*) (  struct env137*  ,    struct Pane_141 *  ,    int32_t  ) )indent_dash_at1205 , .env =  env->envinst137 } );
        ( temp1454.fun ( &temp1454.env ,  (  self4213 ) ,  (  line4215 ) ) );
    }
    ( (  end_dash_changeset1455 ) ( ( ( * (  self4213 ) ) .f_buf ) ) );
    struct Pos_26  temp1459 = ( ( * (  self4213 ) ) .f_cursor );
    temp1459 .  f_bi = (  op_dash_add311 ( ( ( ( * (  self4213 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( (  set_dash_cursors985 ) ( (  self4213 ) ,  ( temp1459 ) ,  ( (  fmap_dash_maybe1460 ) ( ( ( * (  self4213 ) ) .f_sel ) ,  (  lam1461 ) ) ) ,  ( CursorMovement_986_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

struct env1473 {
    ;
    bool  last_dash_char_dash_was_dash_tab4222;
    ;
};

struct envunion1474 {
    struct Pos_26  (*fun) (  struct env1473*  ,    struct Pos_26  );
    struct env1473 env;
};

static  struct Maybe_34   fmap_dash_maybe1472 (    struct Maybe_34  x1275 ,   struct envunion1474  fun1277 ) {
    struct Maybe_34  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_34_None_t ) {
        return ( (struct Maybe_34) { .tag = Maybe_34_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_34_Just_t ) {
            struct envunion1474  temp1475 = (  fun1277 );
            return ( ( Maybe_34_Just ) ( ( temp1475.fun ( &temp1475.env ,  ( dref1278 .stuff .Maybe_34_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_26   lam1476 (   struct env1473* env ,    struct Pos_26  sel4226 ) {
    struct Pos_26  temp1477 = (  sel4226 );
    temp1477 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4222 ) ? (  op_dash_sub852 ( ( (  sel4226 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( (  sel4226 ) .f_bi ) );
    return ( temp1477 );
}

static  enum Unit_8   dedent_dash_selection1464 (   struct env145* env ,    struct Pane_141 *  self4220 ) {
    struct envunion147  temp1465 = ( (struct envunion147){ .fun = (  enum Unit_8  (*) (  struct env117*  ,    struct TextBuf_99 *  ,    struct Cursors_33  ) )begin_dash_changeset1449 , .env =  env->envinst117 } );
    ( temp1465.fun ( &temp1465.env ,  ( ( * (  self4220 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4220 ) ) .f_cursor ) , .f_sel = ( ( * (  self4220 ) ) .f_sel ) } ) ) );
    struct Pos_26  temp1466 = ( (  min_dash_pos1386 ) ( (  self4220 ) ) );
    temp1466 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4221 = (  eq448 ( ( (  char_dash_at1237 ) ( (  self4220 ) ,  ( temp1466 ) ) ) , ( (  from_dash_charlike258 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_26  temp1467 = ( (  max_dash_pos1375 ) ( (  self4220 ) ) );
    temp1467 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4222 = (  eq448 ( ( (  char_dash_at1237 ) ( (  self4220 ) ,  ( temp1467 ) ) ) , ( (  from_dash_charlike258 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_729  temp1468 =  into_dash_iter731 ( ( (  to734 ) ( ( ( (  min_dash_pos1386 ) ( (  self4220 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1375 ) ( (  self4220 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_309  __cond1469 =  next732 (&temp1468);
        if (  __cond1469 .tag == 0 ) {
            break;
        }
        int32_t  line4224 =  __cond1469 .stuff .Maybe_309_Just_s .field0;
        if ( (  eq448 ( ( (  char_dash_at1237 ) ( (  self4220 ) ,  ( (struct Pos_26) { .f_line = (  line4224 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike258 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion146  temp1470 = ( (struct envunion146){ .fun = (  struct Maybe_128  (*) (  struct env112*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_128  ) )change1063 , .env =  env->envinst112 } );
            ( temp1470.fun ( &temp1470.env ,  ( ( * (  self4220 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4224 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4224 ) , .f_bi = (  from_dash_integral56 ( 1 ) ) } ) ,  ( (  from_dash_string257 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_128) { .tag = Maybe_128_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1455 ) ( ( ( * (  self4220 ) ) .f_buf ) ) );
    struct Pos_26  temp1471 = ( ( * (  self4220 ) ) .f_cursor );
    temp1471 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4221 ) ? (  op_dash_sub852 ( ( ( ( * (  self4220 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( ( ( * (  self4220 ) ) .f_cursor ) .f_bi ) );
    struct env1473 envinst1473 = {
        .last_dash_char_dash_was_dash_tab4222 =  last_dash_char_dash_was_dash_tab4222 ,
    };
    ( (  set_dash_cursors985 ) ( (  self4220 ) ,  ( temp1471 ) ,  ( (  fmap_dash_maybe1472 ) ( ( ( * (  self4220 ) ) .f_sel ) ,  ( (struct envunion1474){ .fun = (  struct Pos_26  (*) (  struct env1473*  ,    struct Pos_26  ) )lam1476 , .env =  envinst1473 } ) ) ) ,  ( CursorMovement_986_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   undefined1481 (  ) {
    int32_t  temp1482;
    return (  temp1482 );
}

static  int32_t   or_dash_fail1480 (    struct Maybe_309  x1726 ,    struct StrView_27  errmsg1728 ) {
    struct Maybe_309  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_309_None_t ) {
        ( (  panic1108 ) ( (  errmsg1728 ) ) );
        return ( (  undefined1481 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_309_Just_t ) {
            return ( dref1729 .stuff .Maybe_309_Just_s .field0 );
        }
    }
}

struct env1485 {
    ;
    struct Pane_141 *  self4235;
};

struct envunion1486 {
    int32_t  (*fun) (  struct env1485*  ,    int32_t  );
    struct env1485 env;
};

struct Map_1484 {
    struct RangeIter_729  field0;
    struct envunion1486  field1;
};

static struct Map_1484 Map_1484_Map (  struct RangeIter_729  field0 , struct envunion1486  field1 ) {
    return ( struct Map_1484 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1484   into_dash_iter1488 (    struct Map_1484  self796 ) {
    return (  self796 );
}

static  struct Maybe_309   next1489 (    struct Map_1484 *  dref798 ) {
    struct Maybe_309  dref801 = ( (  next732 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_309_None_t ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_309_Just_t ) {
            struct envunion1486  temp1490 = ( (* dref798 ) .field1 );
            return ( ( Maybe_309_Just ) ( ( temp1490.fun ( &temp1490.env ,  ( dref801 .stuff .Maybe_309_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_309   reduce1487 (    struct Map_1484  iterable1093 ,    struct Maybe_309  base1095 ,    struct Maybe_309 (*  fun1097 )(    int32_t  ,    struct Maybe_309  ) ) {
    struct Maybe_309  x1098 = (  base1095 );
    struct Map_1484  it1099 = ( (  into_dash_iter1488 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next1489 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1491 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1491);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_309  temp1492;
    return (  temp1492 );
}

struct env1495 {
    int32_t  x1243;
    ;
};

struct envunion1496 {
    struct Maybe_309  (*fun) (  struct env1495*  ,    int32_t  );
    struct env1495 env;
};

static  struct Maybe_309   maybe1494 (    struct Maybe_309  x1282 ,   struct envunion1496  fun1284 ,    struct Maybe_309  default1286 ) {
    struct envunion1496  temp1497 = (  fun1284 );
    return ( {  struct Maybe_309  dref1287 = (  x1282 ) ; dref1287.tag == Maybe_309_Just_t ? ( temp1497.fun ( &temp1497.env ,  ( dref1287 .stuff .Maybe_309_Just_s .field0 ) ) ) : (  default1286 ) ; } );
}

static  struct Maybe_309   lam1498 (   struct env1495* env ,    int32_t  lm1312 ) {
    return ( ( Maybe_309_Just ) ( ( (  min515 ) ( (  lm1312 ) ,  ( env->x1243 ) ) ) ) );
}

static  struct Maybe_309   lam1493 (    int32_t  x1243 ,    struct Maybe_309  last_dash_min1245 ) {
    struct env1495 envinst1495 = {
        .x1243 =  x1243 ,
    };
    return ( (  maybe1494 ) ( (  last_dash_min1245 ) ,  ( (struct envunion1496){ .fun = (  struct Maybe_309  (*) (  struct env1495*  ,    int32_t  ) )lam1498 , .env =  envinst1495 } ) ,  ( ( Maybe_309_Just ) ( (  x1243 ) ) ) ) );
}

static  struct Maybe_309   minimum1483 (    struct Map_1484  it1241 ) {
    return ( (  reduce1487 ) ( (  it1241 ) ,  ( (struct Maybe_309) { .tag = Maybe_309_None_t } ) ,  (  lam1493 ) ) );
}

static  struct Map_1484   map1499 (    struct Range_726  iterable805 ,   struct envunion1486  fun807 ) {
    struct RangeIter_729  it808 = ( (  into_dash_iter731 ) ( (  iterable805 ) ) );
    return ( ( Map_1484_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  int32_t   lam1500 (   struct env1485* env ,    int32_t  ln4239 ) {
    return ( (  indent_dash_at_dash_line1040 ) ( ( env->self4235 ) ,  (  ln4239 ) ) );
}

struct env1502 {
    struct Pane_141 *  self4235;
    ;
    ;
};

struct envunion1503 {
    bool  (*fun) (  struct env1502*  ,    int32_t  );
    struct env1502 env;
};

struct env1505 {
    struct envunion1503  fun1126;
};

struct envunion1506 {
    bool  (*fun) (  struct env1505*  ,    int32_t  ,    bool  );
    struct env1505 env;
};

static  bool   reduce1504 (    struct Range_726  iterable1093 ,    bool  base1095 ,   struct envunion1506  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct RangeIter_729  it1099 = ( (  into_dash_iter731 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next732 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                struct envunion1506  temp1507 = (  fun1097 );
                x1098 = ( temp1507.fun ( &temp1507.env ,  ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1508 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1508);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1509;
    return (  temp1509 );
}

static  bool   lam1510 (   struct env1505* env ,    int32_t  e1128 ,    bool  x1130 ) {
    struct envunion1503  temp1511 = ( env->fun1126 );
    return ( ( temp1511.fun ( &temp1511.env ,  (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1501 (    struct Range_726  it1124 ,   struct envunion1503  fun1126 ) {
    struct env1505 envinst1505 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1504 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1506){ .fun = (  bool  (*) (  struct env1505*  ,    int32_t  ,    bool  ) )lam1510 , .env =  envinst1505 } ) ) );
}

static  bool   is_dash_just1513 (    struct Maybe_1402  m1260 ) {
    struct Maybe_1402  dref1261 = (  m1260 );
    if ( dref1261.tag == Maybe_1402_None_t ) {
        return ( false );
    }
    else {
        if ( dref1261.tag == Maybe_1402_Just_t ) {
            return ( true );
        }
    }
}

static  bool   lam1515 (    struct Char_65  c4167 ) {
    return ( ( !  eq448 ( (  c4167 ) , ( (  from_dash_charlike258 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) && ( (  is_dash_whitespace1236 ) ( (  c4167 ) ) ) );
}

static  struct Maybe_1402   line_dash_begins_dash_with_dash_comment1514 (    struct Pane_141 *  self4161 ,    int32_t  line4163 ) {
    int32_t  indent4164 = ( (  indent_dash_at_dash_line1040 ) ( (  self4161 ) ,  (  line4163 ) ) );
    if ( (  eq448 ( ( (  char_dash_at1237 ) ( (  self4161 ) ,  ( (  mk343 ) ( (  line4163 ) ,  (  indent4164 ) ) ) ) ) , ( (  from_dash_charlike258 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
        int32_t  i4165 = (  op_dash_add311 ( (  indent4164 ) , (  from_dash_integral56 ( 1 ) ) ) );
        while ( ( (  lam1515 ) ( ( (  char_dash_at1237 ) ( (  self4161 ) ,  ( (  mk343 ) ( (  line4163 ) ,  (  i4165 ) ) ) ) ) ) ) ) {
            i4165 = (  op_dash_add311 ( (  i4165 ) , (  from_dash_integral56 ( 1 ) ) ) );
        }
        return ( ( Maybe_1402_Just ) ( ( ( Tuple2_153_Tuple2 ) ( ( (  mk343 ) ( (  line4163 ) ,  (  indent4164 ) ) ) ,  ( (  mk343 ) ( (  line4163 ) ,  (  i4165 ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_1402) { .tag = Maybe_1402_None_t } );
    }
}

static  bool   lam1512 (   struct env1502* env ,    int32_t  ln4242 ) {
    return ( (  is_dash_just1513 ) ( ( (  line_dash_begins_dash_with_dash_comment1514 ) ( ( env->self4235 ) ,  (  ln4242 ) ) ) ) );
}

static  struct Tuple2_153   undefined1521 (  ) {
    struct Tuple2_153  temp1522;
    return (  temp1522 );
}

static  struct Tuple2_153   or_dash_fail1520 (    struct Maybe_1402  x1726 ,    struct StrView_27  errmsg1728 ) {
    struct Maybe_1402  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_1402_None_t ) {
        ( (  panic1108 ) ( (  errmsg1728 ) ) );
        return ( (  undefined1521 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_1402_Just_t ) {
            return ( dref1729 .stuff .Maybe_1402_Just_s .field0 );
        }
    }
}

static  enum Unit_8   toggle_dash_comment1479 (   struct env150* env ,    struct Pane_141 *  self4235 ) {
    int32_t  from_dash_line4236 = ( ( (  min_dash_pos1386 ) ( (  self4235 ) ) ) .f_line );
    int32_t  to_dash_line4237 = ( ( (  max_dash_pos1375 ) ( (  self4235 ) ) ) .f_line );
    struct env1485 envinst1485 = {
        .self4235 =  self4235 ,
    };
    int32_t  min_dash_indent4240 = ( (  or_dash_fail1480 ) ( ( (  minimum1483 ) ( ( (  map1499 ) ( ( (  to734 ) ( (  from_dash_line4236 ) ,  (  to_dash_line4237 ) ) ) ,  ( (struct envunion1486){ .fun = (  int32_t  (*) (  struct env1485*  ,    int32_t  ) )lam1500 , .env =  envinst1485 } ) ) ) ) ) ,  ( (  from_dash_string257 ) ( ( "no lines what??" ) ,  ( 15 ) ) ) ) );
    struct env1502 envinst1502 = {
        .self4235 =  self4235 ,
    };
    bool  all_dash_have_dash_comment4243 = ( (  all1501 ) ( ( (  to734 ) ( (  from_dash_line4236 ) ,  (  to_dash_line4237 ) ) ) ,  ( (struct envunion1503){ .fun = (  bool  (*) (  struct env1502*  ,    int32_t  ) )lam1512 , .env =  envinst1502 } ) ) );
    struct envunion154  temp1516 = ( (struct envunion154){ .fun = (  enum Unit_8  (*) (  struct env117*  ,    struct TextBuf_99 *  ,    struct Cursors_33  ) )begin_dash_changeset1449 , .env =  env->envinst117 } );
    ( temp1516.fun ( &temp1516.env ,  ( ( * (  self4235 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4235 ) ) .f_cursor ) , .f_sel = ( ( * (  self4235 ) ) .f_sel ) } ) ) );
    struct RangeIter_729  temp1517 =  into_dash_iter731 ( ( (  to734 ) ( (  from_dash_line4236 ) ,  (  to_dash_line4237 ) ) ) );
    while (true) {
        struct Maybe_309  __cond1518 =  next732 (&temp1517);
        if (  __cond1518 .tag == 0 ) {
            break;
        }
        int32_t  line4245 =  __cond1518 .stuff .Maybe_309_Just_s .field0;
        struct Char_65  comment_dash_str4246 = ( (  from_dash_charlike258 ) ( ( "#" ) ,  ( 1 ) ) );
        if ( ( ! (  all_dash_have_dash_comment4243 ) ) ) {
            ( (  set_dash_cursors985 ) ( (  self4235 ) ,  ( (  mk343 ) ( (  line4245 ) ,  (  min_dash_indent4240 ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_NoChanges ) ) );
            struct envunion151  temp1519 = ( (struct envunion151){ .fun = (  enum Unit_8  (*) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1061 , .env =  env->envinst126 } );
            ( temp1519.fun ( &temp1519.env ,  (  self4235 ) ,  ( (  from_dash_string257 ) ( ( "# " ) ,  ( 2 ) ) ) ) );
        } else {
            struct Tuple2_153  tup4247 = ( (  or_dash_fail1520 ) ( ( (  line_dash_begins_dash_with_dash_comment1514 ) ( (  self4235 ) ,  (  line4245 ) ) ) ,  ( (  from_dash_string257 ) ( ( "(Pane.toggle-comment) impossiburu" ) ,  ( 33 ) ) ) ) );
            struct envunion152  temp1523 = ( (struct envunion152){ .fun = (  enum Unit_8  (*) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_153  ,    struct StrView_27  ) )replace_dash_selection1306 , .env =  env->envinst135 } );
            ( temp1523.fun ( &temp1523.env ,  (  self4235 ) ,  ( ( Tuple2_153_Tuple2 ) ( ( (  fst1297 ) ( (  tup4247 ) ) ) ,  ( (  snd1298 ) ( (  tup4247 ) ) ) ) ) ,  ( (  from_dash_string257 ) ( ( "" ) ,  ( 0 ) ) ) ) );
        }
    }
    ( (  end_dash_changeset1455 ) ( ( ( * (  self4235 ) ) .f_buf ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   handle_dash_normal_dash_key983 (   struct env166* env ,    struct Editor_163 *  ed4363 ,    struct Key_183  key4365 ) {
    struct Key_183  dref4366 = (  key4365 );
    if ( dref4366.tag == Key_183_Char_t ) {
        if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4363 ) .f_running = ( false );
        } else {
            if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left984 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ) );
            } else {
                if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right1029 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ) );
                } else {
                    if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down1032 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                    } else {
                        if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up1036 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                        } else {
                            if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode1037 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ,  ( Mode_142_Insert ) ) );
                            } else {
                                if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "I" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  move_dash_to_dash_beginning_dash_indented1039 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ) );
                                    ( (  set_dash_mode1037 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ,  ( Mode_142_Insert ) ) );
                                } else {
                                    if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  move_dash_to_dash_end1058 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ) );
                                        ( (  set_dash_mode1037 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ,  ( Mode_142_Insert ) ) );
                                    } else {
                                        if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                            struct Pane_141 *  pane4368 = ( (  pane1028 ) ( (  ed4363 ) ) );
                                            int32_t  indent4369 = ( (  indent_dash_at_dash_line1040 ) ( (  pane4368 ) ,  ( ( ( * (  pane4368 ) ) .f_cursor ) .f_line ) ) );
                                            ( (  move_dash_to_dash_end1058 ) ( (  pane4368 ) ) );
                                            struct envunion173  temp1060 = ( (struct envunion173){ .fun = (  enum Unit_8  (*) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1061 , .env =  env->envinst126 } );
                                            ( temp1060.fun ( &temp1060.env ,  (  pane4368 ) ,  ( (  from_dash_charlike1124 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                            ( (  move_dash_right1029 ) ( (  pane4368 ) ) );
                                            struct envunion171  temp1200 = ( (struct envunion171){ .fun = (  enum Unit_8  (*) (  struct env148*  ,    struct Pane_141 *  ,    int32_t  ) )indent_dash_at_dash_current1201 , .env =  env->envinst148 } );
                                            ( temp1200.fun ( &temp1200.env ,  (  pane4368 ) ,  (  indent4369 ) ) );
                                            ( (  set_dash_mode1037 ) ( (  pane4368 ) ,  ( Mode_142_Insert ) ) );
                                        } else {
                                            if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct Pane_141 *  pane4370 = ( (  pane1028 ) ( (  ed4363 ) ) );
                                                int32_t  indent4371 = ( (  indent_dash_at_dash_line1040 ) ( (  pane4370 ) ,  ( ( ( * (  pane4370 ) ) .f_cursor ) .f_line ) ) );
                                                ( (  move_dash_to_dash_beginning1207 ) ( (  pane4370 ) ) );
                                                struct envunion1210  temp1209 = ( (struct envunion1210){ .fun = (  enum Unit_8  (*) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1061 , .env =  env->envinst126 } );
                                                ( temp1209.fun ( &temp1209.env ,  (  pane4370 ) ,  ( (  from_dash_charlike1124 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                                struct envunion1212  temp1211 = ( (struct envunion1212){ .fun = (  enum Unit_8  (*) (  struct env148*  ,    struct Pane_141 *  ,    int32_t  ) )indent_dash_at_dash_current1201 , .env =  env->envinst148 } );
                                                ( temp1211.fun ( &temp1211.env ,  (  pane4370 ) ,  (  indent4371 ) ) );
                                                ( (  set_dash_mode1037 ) ( (  pane4370 ) ,  ( Mode_142_Insert ) ) );
                                            } else {
                                                if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  advance_dash_word1213 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ,  ( MoveDirection_1214_MoveFwd ) ,  ( MoveTarget_1215_NextWordStart ) ) );
                                                } else {
                                                    if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  advance_dash_word1213 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ,  ( MoveDirection_1214_MoveFwd ) ,  ( MoveTarget_1215_NextWordEnd ) ) );
                                                    } else {
                                                        if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  advance_dash_word1213 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ,  ( MoveDirection_1214_MoveBwd ) ,  ( MoveTarget_1215_NextWordEnd ) ) );
                                                        } else {
                                                            if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion167  temp1249 = ( (struct envunion167){ .fun = (  enum Unit_8  (*) (  struct env133*  ,    struct Pane_141 *  ) )redo1250 , .env =  env->envinst133 } );
                                                                ( temp1249.fun ( &temp1249.env ,  ( (  pane1028 ) ( (  ed4363 ) ) ) ) );
                                                            } else {
                                                                if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct envunion176  temp1274 = ( (struct envunion176){ .fun = (  enum Unit_8  (*) (  struct env131*  ,    struct Pane_141 *  ) )undo1275 , .env =  env->envinst131 } );
                                                                    ( temp1274.fun ( &temp1274.env ,  ( (  pane1028 ) ( (  ed4363 ) ) ) ) );
                                                                } else {
                                                                    if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct envunion169  temp1292 = ( (struct envunion169){ .fun = (  enum Unit_8  (*) (  struct env155*  ,    struct Editor_163 *  ) )copy_dash_selection_dash_to_dash_clipboard1293 , .env =  env->envinst155 } );
                                                                        ( temp1292.fun ( &temp1292.env ,  (  ed4363 ) ) );
                                                                        struct envunion170  temp1305 = ( (struct envunion170){ .fun = (  enum Unit_8  (*) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_153  ,    struct StrView_27  ) )replace_dash_selection1306 , .env =  env->envinst135 } );
                                                                        ( temp1305.fun ( &temp1305.env ,  ( (  pane1028 ) ( (  ed4363 ) ) ) ,  ( (  selection1294 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ) ) ,  ( (  from_dash_string257 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                        ( (  set_dash_mode1037 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ,  ( Mode_142_Normal ) ) );
                                                                    } else {
                                                                        if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct envunion1314  temp1313 = ( (struct envunion1314){ .fun = (  enum Unit_8  (*) (  struct env155*  ,    struct Editor_163 *  ) )copy_dash_selection_dash_to_dash_clipboard1293 , .env =  env->envinst155 } );
                                                                            ( temp1313.fun ( &temp1313.env ,  (  ed4363 ) ) );
                                                                            struct envunion1316  temp1315 = ( (struct envunion1316){ .fun = (  enum Unit_8  (*) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_153  ,    struct StrView_27  ) )replace_dash_selection1306 , .env =  env->envinst135 } );
                                                                            ( temp1315.fun ( &temp1315.env ,  ( (  pane1028 ) ( (  ed4363 ) ) ) ,  ( (  selection1294 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ) ) ,  ( (  from_dash_string257 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                            ( (  set_dash_mode1037 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ,  ( Mode_142_Insert ) ) );
                                                                        } else {
                                                                            if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                struct envunion1318  temp1317 = ( (struct envunion1318){ .fun = (  enum Unit_8  (*) (  struct env155*  ,    struct Editor_163 *  ) )copy_dash_selection_dash_to_dash_clipboard1293 , .env =  env->envinst155 } );
                                                                                ( temp1317.fun ( &temp1317.env ,  (  ed4363 ) ) );
                                                                                size_t  bytes_dash_yanked4372 = ( (  num_dash_bytes1024 ) ( ( (  or_dash_else420 ) ( ( ( * (  ed4363 ) ) .f_clipboard ) ,  ( (  from_dash_string257 ) ( ( "" ) ,  ( 0 ) ) ) ) ) ) );
                                                                                struct envunion172  temp1319 = ( (struct envunion172){ .fun = (  enum Unit_8  (*) (  struct env159*  ,    struct Editor_163 *  ,    struct StrConcat_74  ) )set_dash_msg1320 , .env =  env->envinst159 } );
                                                                                ( temp1319.fun ( &temp1319.env ,  (  ed4363 ) ,  ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4372 ) ) ) ,  ( (  from_dash_string257 ) ( ( " bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    struct env1370 envinst1370 = {
                                                                                        .envinst135 = env->envinst135 ,
                                                                                        .ed4363 =  ed4363 ,
                                                                                    };
                                                                                    ( (  if_dash_just1369 ) ( ( ( * (  ed4363 ) ) .f_clipboard ) ,  ( (struct envunion1372){ .fun = (  enum Unit_8  (*) (  struct env1370*  ,    struct StrView_27  ) )lam1374 , .env =  envinst1370 } ) ) );
                                                                                } else {
                                                                                    if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        struct env1381 envinst1381 = {
                                                                                            .ed4363 =  ed4363 ,
                                                                                            .envinst135 = env->envinst135 ,
                                                                                        };
                                                                                        ( (  if_dash_just1380 ) ( ( ( * (  ed4363 ) ) .f_clipboard ) ,  ( (struct envunion1383){ .fun = (  enum Unit_8  (*) (  struct env1381*  ,    struct StrView_27  ) )lam1385 , .env =  envinst1381 } ) ) );
                                                                                    } else {
                                                                                        if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            struct env1390 envinst1390 = {
                                                                                                .ed4363 =  ed4363 ,
                                                                                                .envinst135 = env->envinst135 ,
                                                                                            };
                                                                                            ( (  if_dash_just1389 ) ( ( ( * (  ed4363 ) ) .f_clipboard ) ,  ( (struct envunion1392){ .fun = (  enum Unit_8  (*) (  struct env1390*  ,    struct StrView_27  ) )lam1394 , .env =  envinst1390 } ) ) );
                                                                                        } else {
                                                                                            if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  expand1396 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ) );
                                                                                            } else {
                                                                                                if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  set_dash_mode1037 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ,  ( Mode_142_Select ) ) );
                                                                                                    if ( ( (  is_dash_none1400 ) ( ( ( ( * (  ed4363 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                                        (*  ed4363 ) .f_pane .f_sel = ( ( Maybe_34_Just ) ( ( ( ( * (  ed4363 ) ) .f_pane ) .f_cursor ) ) );
                                                                                                    }
                                                                                                } else {
                                                                                                    if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        (*  ed4363 ) .f_mode = ( ( EditorMode_165_Cmd ) ( ( ( * ( (  pane1028 ) ( (  ed4363 ) ) ) ) .f_cursor ) ,  ( (  mk1324 ) ( ( ( * (  ed4363 ) ) .f_al ) ) ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            (*  ed4363 ) .f_mode = ( ( EditorMode_165_Search ) ( ( ( * ( (  pane1028 ) ( (  ed4363 ) ) ) ) .f_cursor ) ,  ( (  mk1324 ) ( ( ( * (  ed4363 ) ) .f_al ) ) ) ) );
                                                                                                        } else {
                                                                                                            if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                ( (  next_dash_match1401 ) ( (  ed4363 ) ) );
                                                                                                            } else {
                                                                                                                if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                    ( (  prev_dash_match1437 ) ( (  ed4363 ) ) );
                                                                                                                } else {
                                                                                                                    if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( ">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                        struct envunion168  temp1446 = ( (struct envunion168){ .fun = (  enum Unit_8  (*) (  struct env139*  ,    struct Pane_141 *  ) )indent_dash_selection1447 , .env =  env->envinst139 } );
                                                                                                                        ( temp1446.fun ( &temp1446.env ,  ( (  pane1028 ) ( (  ed4363 ) ) ) ) );
                                                                                                                    } else {
                                                                                                                        if ( (  eq826 ( ( dref4366 .stuff .Key_183_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                            struct envunion175  temp1463 = ( (struct envunion175){ .fun = (  enum Unit_8  (*) (  struct env145*  ,    struct Pane_141 *  ) )dedent_dash_selection1464 , .env =  env->envinst145 } );
                                                                                                                            ( temp1463.fun ( &temp1463.env ,  ( (  pane1028 ) ( (  ed4363 ) ) ) ) );
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
        if ( dref4366.tag == Key_183_Escape_t ) {
            ( (  set_dash_mode1037 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ,  ( Mode_142_Normal ) ) );
        }
        else {
            if ( dref4366.tag == Key_183_Ctrl_t ) {
                if ( (  eq826 ( ( dref4366 .stuff .Key_183_Ctrl_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                    struct envunion174  temp1478 = ( (struct envunion174){ .fun = (  enum Unit_8  (*) (  struct env150*  ,    struct Pane_141 *  ) )toggle_dash_comment1479 , .env =  env->envinst150 } );
                    ( temp1478.fun ( &temp1478.env ,  ( (  pane1028 ) ( (  ed4363 ) ) ) ) );
                } else {
                    if ( (  eq826 ( ( dref4366 .stuff .Key_183_Ctrl_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_up1036 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
                    } else {
                        if ( (  eq826 ( ( dref4366 .stuff .Key_183_Ctrl_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_down1032 ) ( ( (  pane1028 ) ( (  ed4363 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
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
    return ( Unit_8_Unit );
}

struct envunion1525 {
    enum Unit_8  (*fun) (  struct env166*  ,    struct Editor_163 *  ,    struct Key_183  );
    struct env166 env;
};

struct envunion1527 {
    enum Unit_8  (*fun) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  );
    struct env126 env;
};

static  enum Unit_8   backspace1530 (   struct env129* env ,    struct Pane_141 *  self4176 ) {
    struct Pos_26  prev_dash_cur4177 = ( ( * (  self4176 ) ) .f_cursor );
    ( (  move_dash_left984 ) ( (  self4176 ) ) );
    struct envunion130  temp1531 = ( (struct envunion130){ .fun = (  struct Maybe_128  (*) (  struct env112*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_128  ) )change1063 , .env =  env->envinst112 } );
    ( temp1531.fun ( &temp1531.env ,  ( ( * (  self4176 ) ) .f_buf ) ,  ( ( * (  self4176 ) ) .f_cursor ) ,  (  prev_dash_cur4177 ) ,  ( (  from_dash_string257 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_128) { .tag = Maybe_128_None_t } ) ) );
    return ( Unit_8_Unit );
}

struct Array_1533 {
    char _arr [1];
};

static  char *   cast1534 (    struct Array_1533 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_842   as_dash_slice1532 (    struct Array_1533 *  arr2273 ) {
    return ( (struct Slice_842) { .f_ptr = ( (  cast1534 ) ( (  arr2273 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1533   from_dash_listlike1536 (    struct Array_1533  self330 ) {
    return (  self330 );
}

struct Scanner_1540 {
    struct StrView_27  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_1540   mk_dash_from_dash_strview1542 (    struct StrView_27  s3187 ) {
    return ( (struct Scanner_1540) { .f_s = (  s3187 ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct TakeWhile_1547 {
    struct StrViewIter_650  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1546 {
    struct TakeWhile_1547  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1546 Map_1546_Map (  struct TakeWhile_1547  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1546 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1546   into_dash_iter1549 (    struct Map_1546  self796 ) {
    return (  self796 );
}

static  struct Maybe_653   next1551 (    struct TakeWhile_1547 *  self964 ) {
    struct Maybe_653  mx965 = ( (  next654 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_653  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_653_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_653_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_653_Just ) ( ( dref966 .stuff .Maybe_653_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
            }
        }
    }
}

static  struct Maybe_1046   next1550 (    struct Map_1546 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next1551 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_1046) { .tag = Maybe_1046_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_1046_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1548 (    struct Map_1546  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1546  it1099 = ( (  into_dash_iter1549 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1046  dref1100 = ( (  next1550 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1046_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1046_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1046_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1552 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1552);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1553;
    return (  temp1553 );
}

static  size_t   lam1554 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add269 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1545 (    struct Map_1546  it1110 ) {
    return ( (  reduce1548 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1554 ) ) );
}

static  struct TakeWhile_1547   into_dash_iter1556 (    struct TakeWhile_1547  self961 ) {
    return (  self961 );
}

static  struct Map_1546   map1555 (    struct TakeWhile_1547  iterable805 ,    size_t (*  fun807 )(    struct Char_65  ) ) {
    struct TakeWhile_1547  it808 = ( (  into_dash_iter1556 ) ( (  iterable805 ) ) );
    return ( ( Map_1546_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1547   take_dash_while1557 (    struct StrViewIter_650  it970 ,    bool (*  pred972 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1547) { .f_it = ( (  into_dash_iter652 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1558 (    struct Char_65  c2203 ) {
    return ( (  c2203 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1544 (    struct StrView_27  self2199 ,    bool (*  fun2201 )(    struct Char_65  ) ) {
    size_t  bi2204 = ( (  sum1545 ) ( ( (  map1555 ) ( ( (  take_dash_while1557 ) ( ( (  chars655 ) ( (  self2199 ) ) ) ,  (  fun2201 ) ) ) ,  (  lam1558 ) ) ) ) );
    return ( (  byte_dash_substr430 ) ( (  self2199 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2204 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1543 (    struct Scanner_1540 *  sc3259 ,    bool (*  fun3261 )(    struct Char_65  ) ) {
    struct StrView_27  s3262 = ( (  take_dash_while1544 ) ( ( ( * (  sc3259 ) ) .f_s ) ,  (  fun3261 ) ) );
    (*  sc3259 ) .f_s = ( (  byte_dash_substr_dash_from1427 ) ( ( ( * (  sc3259 ) ) .f_s ) ,  ( (  num_dash_bytes1024 ) ( (  s3262 ) ) ) ) );
    return (  s3262 );
}

static  bool   is_dash_not_dash_whitespace1559 (    struct Char_65  c2383 ) {
    return ( ! ( (  is_dash_whitespace1236 ) ( (  c2383 ) ) ) );
}

struct TakeWhile_1565 {
    struct StrViewIter_650  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1564 {
    struct TakeWhile_1565  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1564 Map_1564_Map (  struct TakeWhile_1565  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1564 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1564   into_dash_iter1567 (    struct Map_1564  self796 ) {
    return (  self796 );
}

static  struct Maybe_653   next1569 (    struct TakeWhile_1565 *  self964 ) {
    struct Maybe_653  mx965 = ( (  next654 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_653  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_653_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_653_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_653_Just ) ( ( dref966 .stuff .Maybe_653_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
            }
        }
    }
}

static  struct Maybe_1046   next1568 (    struct Map_1564 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next1569 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_1046) { .tag = Maybe_1046_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_1046_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1566 (    struct Map_1564  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1564  it1099 = ( (  into_dash_iter1567 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1046  dref1100 = ( (  next1568 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1046_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1046_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1046_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1570 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1570);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1571;
    return (  temp1571 );
}

static  size_t   lam1572 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add269 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1563 (    struct Map_1564  it1110 ) {
    return ( (  reduce1566 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1572 ) ) );
}

static  struct TakeWhile_1565   into_dash_iter1574 (    struct TakeWhile_1565  self961 ) {
    return (  self961 );
}

static  struct Map_1564   map1573 (    struct TakeWhile_1565  iterable805 ,    size_t (*  fun807 )(    struct Char_65  ) ) {
    struct TakeWhile_1565  it808 = ( (  into_dash_iter1574 ) ( (  iterable805 ) ) );
    return ( ( Map_1564_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1565   take_dash_while1575 (    struct StrViewIter_650  it970 ,    bool (*  pred972 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1565) { .f_it = ( (  into_dash_iter652 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1576 (    struct Char_65  c2203 ) {
    return ( (  c2203 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1562 (    struct StrView_27  self2199 ,    bool (*  fun2201 )(    struct Char_65  ) ) {
    size_t  bi2204 = ( (  sum1563 ) ( ( (  map1573 ) ( ( (  take_dash_while1575 ) ( ( (  chars655 ) ( (  self2199 ) ) ) ,  (  fun2201 ) ) ) ,  (  lam1576 ) ) ) ) );
    return ( (  byte_dash_substr430 ) ( (  self2199 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2204 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1561 (    struct Scanner_1540 *  sc3259 ,    bool (*  fun3261 )(    struct Char_65  ) ) {
    struct StrView_27  s3262 = ( (  take_dash_while1562 ) ( ( ( * (  sc3259 ) ) .f_s ) ,  (  fun3261 ) ) );
    (*  sc3259 ) .f_s = ( (  byte_dash_substr_dash_from1427 ) ( ( ( * (  sc3259 ) ) .f_s ) ,  ( (  num_dash_bytes1024 ) ( (  s3262 ) ) ) ) );
    return (  s3262 );
}

static  enum Unit_8   drop_dash_str_dash_while1560 (    struct Scanner_1540 *  sc3265 ,    bool (*  fun3267 )(    struct Char_65  ) ) {
    ( (  take_dash_str_dash_while1561 ) ( (  sc3265 ) ,  (  fun3267 ) ) );
    return ( Unit_8_Unit );
}

static  bool   eq1577 (    struct StrView_27  l2210 ,    struct StrView_27  r2212 ) {
    return (  eq1411 ( ( (  l2210 ) .f_contents ) , ( (  r2212 ) .f_contents ) ) );
}

static  enum Unit_8   undefined1579 (  ) {
    enum Unit_8  temp1580;
    return (  temp1580 );
}

static  enum Unit_8   todo1578 (  ) {
    ( (  print1242 ) ( ( (  from_dash_string257 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( (  undefined1579 ) ( ) );
}

struct env1583 {
    bool (*  fun1126 )(    struct Char_65  );
};

struct envunion1584 {
    bool  (*fun) (  struct env1583*  ,    struct Char_65  ,    bool  );
    struct env1583 env;
};

static  bool   reduce1582 (    struct StrView_27  iterable1093 ,    bool  base1095 ,   struct envunion1584  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct StrViewIter_650  it1099 = ( (  into_dash_iter656 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_653  dref1100 = ( (  next654 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_653_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_653_Just_t ) {
                struct envunion1584  temp1585 = (  fun1097 );
                x1098 = ( temp1585.fun ( &temp1585.env ,  ( dref1100 .stuff .Maybe_653_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1586 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1586);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1587;
    return (  temp1587 );
}

static  bool   lam1588 (   struct env1583* env ,    struct Char_65  e1128 ,    bool  x1130 ) {
    return ( ( ( env->fun1126 ) ( (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1581 (    struct StrView_27  it1124 ,    bool (*  fun1126 )(    struct Char_65  ) ) {
    struct env1583 envinst1583 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1582 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1584){ .fun = (  bool  (*) (  struct env1583*  ,    struct Char_65  ,    bool  ) )lam1588 , .env =  envinst1583 } ) ) );
}

struct env1597 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2765;
};

struct envunion1598 {
    enum Unit_8  (*fun) (  struct env1597*  ,    struct Char_65  );
    struct env1597 env;
};

static  enum Unit_8   for_dash_each1596 (    struct StrViewIter_650  iterable1074 ,   struct envunion1598  fun1076 ) {
    struct StrViewIter_650  temp1599 = ( (  into_dash_iter652 ) ( (  iterable1074 ) ) );
    struct StrViewIter_650 *  it1077 = ( &temp1599 );
    while ( ( true ) ) {
        struct Maybe_653  dref1078 = ( (  next654 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_653_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_653_Just_t ) {
                struct envunion1598  temp1600 = (  fun1076 );
                ( temp1600.fun ( &temp1600.env ,  ( dref1078 .stuff .Maybe_653_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1601 (   struct env1597* env ,    struct Char_65  c2769 ) {
    struct envunion64  temp1602 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1357 , .env =  env->envinst60 } );
    return ( temp1602.fun ( &temp1602.env ,  ( env->builder2765 ) ,  (  c2769 ) ) );
}

static  enum Unit_8   write1595 (   struct env63* env ,    struct StrBuilder_62 *  builder2765 ,    struct StrView_27  s2767 ) {
    struct env1597 envinst1597 = {
        .envinst60 = env->envinst60 ,
        .builder2765 =  builder2765 ,
    };
    ( (  for_dash_each1596 ) ( ( (  chars655 ) ( (  s2767 ) ) ) ,  ( (struct envunion1598){ .fun = (  enum Unit_8  (*) (  struct env1597*  ,    struct Char_65  ) )lam1601 , .env =  envinst1597 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1592 (   struct env69* env ,    struct StrView_27  s2823 ,    enum CAllocator_10  al2825 ) {
    struct StrBuilder_62  temp1593 = ( (  mk1324 ) ( (  al2825 ) ) );
    struct StrBuilder_62 *  sb2826 = ( &temp1593 );
    struct envunion70  temp1594 = ( (struct envunion70){ .fun = (  enum Unit_8  (*) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrView_27  ) )write1595 , .env =  env->envinst63 } );
    ( temp1594.fun ( &temp1594.env ,  (  sb2826 ) ,  (  s2823 ) ) );
    struct envunion71  temp1603 = ( (struct envunion71){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1357 , .env =  env->envinst60 } );
    ( temp1603.fun ( &temp1603.env ,  (  sb2826 ) ,  ( (  nullchar575 ) ( ) ) ) );
    struct StrView_27  dynstr2827 = ( (  as_dash_str1366 ) ( (  sb2826 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2827 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub349 ( ( ( (  dynstr2827 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1590 (   struct env157* env ,    struct Editor_163 *  ed4317 ,    struct StrView_27  s4319 ) {
    ( (  reset_dash_msg972 ) ( (  ed4317 ) ) );
    struct envunion158  temp1591 = ( (struct envunion158){ .fun = (  struct StrView_27  (*) (  struct env69*  ,    struct StrView_27  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1592 , .env =  env->envinst69 } );
    (*  ed4317 ) .f_msg = ( ( Maybe_164_Just ) ( ( temp1591.fun ( &temp1591.env ,  (  s4319 ) ,  ( ( * (  ed4317 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   run_dash_cmd1539 (   struct env161* env ,    struct Editor_163 *  ed4330 ,    struct StrView_27  s4332 ) {
    struct Scanner_1540  temp1541 = ( (  mk_dash_from_dash_strview1542 ) ( (  s4332 ) ) );
    struct Scanner_1540 *  sc4333 = ( &temp1541 );
    struct StrView_27  cmd4334 = ( (  take_dash_str_dash_while1543 ) ( (  sc4333 ) ,  (  is_dash_not_dash_whitespace1559 ) ) );
    ( (  drop_dash_str_dash_while1560 ) ( (  sc4333 ) ,  (  is_dash_whitespace1236 ) ) );
    if ( (  eq1577 ( (  cmd4334 ) , ( (  from_dash_charlike1124 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4330 ) .f_running = ( false );
    } else {
        if ( (  eq1577 ( (  cmd4334 ) , ( (  from_dash_string257 ) ( ( "wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq1577 ( (  cmd4334 ) , ( (  from_dash_charlike1124 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  todo1578 ) ( ) );
            } else {
                if ( (  eq1577 ( (  cmd4334 ) , ( (  from_dash_string257 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                } else {
                    if ( ( (  all1581 ) ( (  cmd4334 ) ,  (  is_dash_digit866 ) ) ) ) {
                    } else {
                        struct envunion162  temp1589 = ( (struct envunion162){ .fun = (  enum Unit_8  (*) (  struct env157*  ,    struct Editor_163 *  ,    struct StrView_27  ) )set_dash_msg1590 , .env =  env->envinst157 } );
                        ( temp1589.fun ( &temp1589.env ,  (  ed4330 ) ,  ( (  from_dash_string257 ) ( ( "unknown command" ) ,  ( 15 ) ) ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free1604 (    struct StrBuilder_62 *  builder2809 ) {
    ( (  free470 ) ( ( & ( ( * (  builder2809 ) ) .f_chars ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Char_65   ascii_dash_char1606 (    char  c782 ) {
    return ( (  from_dash_u8932 ) ( ( (  ascii_dash_u8785 ) ( (  c782 ) ) ) ) );
}

static  struct Maybe_860   reduce1609 (    struct StrViewIter_650  iterable1093 ,    struct Maybe_860  base1095 ,    struct Maybe_860 (*  fun1097 )(    struct Char_65  ,    struct Maybe_860  ) ) {
    struct Maybe_860  x1098 = (  base1095 );
    struct StrViewIter_650  it1099 = ( (  into_dash_iter652 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_653  dref1100 = ( (  next654 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_653_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_653_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_653_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1610 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1610);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_860  temp1611;
    return (  temp1611 );
}

static  struct Maybe_860   sequence_dash_maybe1612 (    struct Char_65  e2476 ,    struct Maybe_860  b2478 ) {
    struct Maybe_860  dref2479 = (  b2478 );
    if ( dref2479.tag == Maybe_860_None_t ) {
        return ( (struct Maybe_860) { .tag = Maybe_860_None_t } );
    }
    else {
        if ( dref2479.tag == Maybe_860_Just_t ) {
            struct Maybe_309  dref2481 = ( (  parse_dash_digit891 ) ( (  e2476 ) ) );
            if ( dref2481.tag == Maybe_309_None_t ) {
                return ( (struct Maybe_860) { .tag = Maybe_860_None_t } );
            }
            else {
                if ( dref2481.tag == Maybe_309_Just_t ) {
                    return ( ( Maybe_860_Just ) ( (  op_dash_add450 ( (  op_dash_mul267 ( ( dref2479 .stuff .Maybe_860_Just_s .field0 ) , (  from_dash_integral348 ( 10 ) ) ) ) , ( (  i32_dash_i64900 ) ( ( dref2481 .stuff .Maybe_309_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_860   parse_dash_int1608 (    struct StrView_27  s2473 ) {
    struct StrViewIter_650  cs2483 = ( (  chars655 ) ( (  s2473 ) ) );
    struct Maybe_653  dref2484 = ( (  head1239 ) ( (  cs2483 ) ) );
    if ( dref2484.tag == Maybe_653_Just_t ) {
        return ( (  reduce1609 ) ( (  cs2483 ) ,  ( ( Maybe_860_Just ) ( (  from_dash_integral348 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1612 ) ) );
    }
    else {
        if ( dref2484.tag == Maybe_653_None_t ) {
            return ( (struct Maybe_860) { .tag = Maybe_860_None_t } );
        }
    }
}

static  enum Unit_8   live_dash_cmd1607 (    struct Editor_163 *  ed4322 ,    struct StrView_27  cmd4324 ) {
    struct Maybe_860  dref4325 = ( (  parse_dash_int1608 ) ( (  cmd4324 ) ) );
    if ( dref4325.tag == Maybe_860_Just_t ) {
        int32_t  line4327 = ( (  clamp1378 ) ( ( (  i64_dash_i32902 ) ( ( dref4325 .stuff .Maybe_860_Just_s .field0 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub852 ( ( (  num_dash_lines1031 ) ( ( ( * ( (  pane1028 ) ( (  ed4322 ) ) ) ) .f_buf ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
        ( (  set_dash_cursors985 ) ( ( (  pane1028 ) ( (  ed4322 ) ) ) ,  ( (struct Pos_26) { .f_line = (  line4327 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_NoChanges ) ) );
    }
    else {
        if ( dref4325.tag == Maybe_860_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrViewIter_650   chars1617 (    struct StrBuilder_62  s2817 ) {
    return ( (  into_dash_iter656 ) ( ( (  as_dash_str1366 ) ( ( & (  s2817 ) ) ) ) ) );
}

static  struct StrViewIter_650   into_dash_iter1616 (    struct StrBuilder_62  self2820 ) {
    return ( (  chars1617 ) ( (  self2820 ) ) );
}

static  struct Maybe_653   head1614 (    struct StrBuilder_62  it1142 ) {
    struct StrViewIter_650  temp1615 = ( (  into_dash_iter1616 ) ( (  it1142 ) ) );
    return ( (  next654 ) ( ( &temp1615 ) ) );
}

static  bool   null1613 (    struct StrBuilder_62  it1151 ) {
    struct Maybe_653  dref1152 = ( (  head1614 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_653_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   remove1623 (   struct env42* env ,    struct List_13 *  list2077 ,    size_t  i2079 ) {
    struct envunion43  temp1624 = ( (struct envunion43){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  ) )remove_dash_range473 , .env =  env->envinst40 } );
    ( temp1624.fun ( &temp1624.env ,  (  list2077 ) ,  (  i2079 ) ,  (  op_dash_add269 ( (  i2079 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   pop1621 (   struct env44* env ,    struct List_13 *  list2093 ) {
    if ( (  eq276 ( ( ( * (  list2093 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1108 ) ( ( (  from_dash_string257 ) ( ( "List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct envunion45  temp1622 = ( (struct envunion45){ .fun = (  enum Unit_8  (*) (  struct env42*  ,    struct List_13 *  ,    size_t  ) )remove1623 , .env =  env->envinst42 } );
    return ( temp1622.fun ( &temp1622.env ,  (  list2093 ) ,  (  op_dash_sub349 ( ( ( * (  list2093 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  enum Unit_8   pop1619 (   struct env67* env ,    struct StrBuilder_62 *  sb2783 ) {
    struct envunion68  temp1620 = ( (struct envunion68){ .fun = (  enum Unit_8  (*) (  struct env44*  ,    struct List_13 *  ) )pop1621 , .env =  env->envinst44 } );
    return ( temp1620.fun ( &temp1620.env ,  ( & ( ( * (  sb2783 ) ) .f_chars ) ) ) );
}

struct env1626 {
    struct Editor_163 *  ed4385;
    ;
};

struct envunion1627 {
    enum Unit_8  (*fun) (  struct env1626*  ,    struct StrView_27  );
    struct env1626 env;
};

static  enum Unit_8   if_dash_just1625 (    struct Maybe_164  x1291 ,   struct envunion1627  fun1293 ) {
    struct Maybe_164  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_164_Just_t ) {
        struct envunion1627  temp1628 = (  fun1293 );
        ( temp1628.fun ( &temp1628.env ,  ( dref1294 .stuff .Maybe_164_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_164_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1629 (   struct env1626* env ,    struct StrView_27  st4402 ) {
    ( (  free978 ) ( (  st4402 ) ,  ( ( * ( env->ed4385 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

struct envunion1631 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

static  struct Maybe_653   head1634 (    struct StrView_27  it1142 ) {
    struct StrViewIter_650  temp1635 = ( (  into_dash_iter656 ) ( (  it1142 ) ) );
    return ( (  next654 ) ( ( &temp1635 ) ) );
}

static  bool   null1633 (    struct StrView_27  it1151 ) {
    struct Maybe_653  dref1152 = ( (  head1634 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_653_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   live_dash_search1632 (    struct Editor_163 *  ed4337 ,    struct Pos_26  begin_dash_pos4339 ,    struct StrView_27  query4341 ) {
    if ( ( ! ( (  null1633 ) ( (  query4341 ) ) ) ) ) {
        struct Maybe_1402  dref4342 = ( (  search_dash_from1403 ) ( ( (  pane1028 ) ( (  ed4337 ) ) ) ,  (  begin_dash_pos4339 ) ,  (  query4341 ) ) );
        if ( dref4342.tag == Maybe_1402_Just_t ) {
            ( (  set_dash_cursors985 ) ( ( (  pane1028 ) ( (  ed4337 ) ) ) ,  ( dref4342 .stuff .Maybe_1402_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4342 .stuff .Maybe_1402_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_986_NoChanges ) ) );
        }
        else {
            if ( dref4342.tag == Maybe_1402_None_t ) {
                ( (  set_dash_cursors985 ) ( ( (  pane1028 ) ( (  ed4337 ) ) ) ,  (  begin_dash_pos4339 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors985 ) ( ( (  pane1028 ) ( (  ed4337 ) ) ) ,  (  begin_dash_pos4339 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_NoChanges ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1637 {
    enum Unit_8  (*fun) (  struct env67*  ,    struct StrBuilder_62 *  );
    struct env67 env;
};

static  enum Unit_8   handle_dash_key981 (   struct env177* env ,    struct Editor_163 *  ed4385 ,    struct Key_183  key4387 ) {
    struct EditorMode_165 *  dref4388 = ( & ( ( * (  ed4385 ) ) .f_mode ) );
    if ( (* dref4388 ).tag == EditorMode_165_Normal_t ) {
        enum Mode_142  dref4389 = ( ( ( * (  ed4385 ) ) .f_pane ) .f_mode );
        switch (  dref4389 ) {
            case Mode_142_Normal : {
                struct envunion182  temp982 = ( (struct envunion182){ .fun = (  enum Unit_8  (*) (  struct env166*  ,    struct Editor_163 *  ,    struct Key_183  ) )handle_dash_normal_dash_key983 , .env =  env->envinst166 } );
                ( temp982.fun ( &temp982.env ,  (  ed4385 ) ,  (  key4387 ) ) );
                break;
            }
            case Mode_142_Select : {
                struct envunion1525  temp1524 = ( (struct envunion1525){ .fun = (  enum Unit_8  (*) (  struct env166*  ,    struct Editor_163 *  ,    struct Key_183  ) )handle_dash_normal_dash_key983 , .env =  env->envinst166 } );
                ( temp1524.fun ( &temp1524.env ,  (  ed4385 ) ,  (  key4387 ) ) );
                break;
            }
            case Mode_142_Insert : {
                struct Key_183  dref4390 = (  key4387 );
                if ( dref4390.tag == Key_183_Escape_t ) {
                    ( (  set_dash_mode1037 ) ( ( (  pane1028 ) ( (  ed4385 ) ) ) ,  ( Mode_142_Normal ) ) );
                }
                else {
                    if ( dref4390.tag == Key_183_Enter_t ) {
                        int32_t  indent4391 = ( (  indent_dash_at_dash_line1040 ) ( ( (  pane1028 ) ( (  ed4385 ) ) ) ,  ( ( ( * ( (  pane1028 ) ( (  ed4385 ) ) ) ) .f_cursor ) .f_line ) ) );
                        struct envunion1527  temp1526 = ( (struct envunion1527){ .fun = (  enum Unit_8  (*) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1061 , .env =  env->envinst126 } );
                        ( temp1526.fun ( &temp1526.env ,  ( (  pane1028 ) ( (  ed4385 ) ) ) ,  ( (  from_dash_charlike1124 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right1029 ) ( ( (  pane1028 ) ( (  ed4385 ) ) ) ) );
                        struct envunion178  temp1528 = ( (struct envunion178){ .fun = (  enum Unit_8  (*) (  struct env148*  ,    struct Pane_141 *  ,    int32_t  ) )indent_dash_at_dash_current1201 , .env =  env->envinst148 } );
                        ( temp1528.fun ( &temp1528.env ,  ( (  pane1028 ) ( (  ed4385 ) ) ) ,  (  indent4391 ) ) );
                    }
                    else {
                        if ( dref4390.tag == Key_183_Backspace_t ) {
                            struct envunion184  temp1529 = ( (struct envunion184){ .fun = (  enum Unit_8  (*) (  struct env129*  ,    struct Pane_141 *  ) )backspace1530 , .env =  env->envinst129 } );
                            ( temp1529.fun ( &temp1529.env ,  ( (  pane1028 ) ( (  ed4385 ) ) ) ) );
                        }
                        else {
                            if ( dref4390.tag == Key_183_Char_t ) {
                                struct Array_1533  temp1535 = ( (  from_dash_listlike1536 ) ( ( (struct Array_1533) { ._arr = { ( dref4390 .stuff .Key_183_Char_s .field0 ) } } ) ) );
                                struct StrView_27  s4393 = ( (  from_dash_ascii_dash_slice857 ) ( ( (  as_dash_slice1532 ) ( ( &temp1535 ) ) ) ) );
                                struct envunion181  temp1537 = ( (struct envunion181){ .fun = (  enum Unit_8  (*) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1061 , .env =  env->envinst126 } );
                                ( temp1537.fun ( &temp1537.env ,  ( (  pane1028 ) ( (  ed4385 ) ) ) ,  (  s4393 ) ) );
                                ( (  move_dash_right1029 ) ( ( (  pane1028 ) ( (  ed4385 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4388 ).tag == EditorMode_165_Cmd_t ) {
            struct Key_183  dref4396 = (  key4387 );
            if ( dref4396.tag == Key_183_Escape_t ) {
                ( (  set_dash_cursors985 ) ( ( (  pane1028 ) ( (  ed4385 ) ) ) ,  ( (* dref4388 ) .stuff .EditorMode_165_Cmd_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_UpdateVI ) ) );
                (*  ed4385 ) .f_mode = ( (struct EditorMode_165) { .tag = EditorMode_165_Normal_t } );
            }
            else {
                if ( dref4396.tag == Key_183_Enter_t ) {
                    struct envunion185  temp1538 = ( (struct envunion185){ .fun = (  enum Unit_8  (*) (  struct env161*  ,    struct Editor_163 *  ,    struct StrView_27  ) )run_dash_cmd1539 , .env =  env->envinst161 } );
                    ( temp1538.fun ( &temp1538.env ,  (  ed4385 ) ,  ( (  as_dash_str1366 ) ( ( & ( (* dref4388 ) .stuff .EditorMode_165_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1604 ) ( ( & ( (* dref4388 ) .stuff .EditorMode_165_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors985 ) ( ( (  pane1028 ) ( (  ed4385 ) ) ) ,  ( ( * ( (  pane1028 ) ( (  ed4385 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_UpdateVI ) ) );
                    (*  ed4385 ) .f_mode = ( (struct EditorMode_165) { .tag = EditorMode_165_Normal_t } );
                }
                else {
                    if ( dref4396.tag == Key_183_Char_t ) {
                        struct envunion179  temp1605 = ( (struct envunion179){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1357 , .env =  env->envinst60 } );
                        ( temp1605.fun ( &temp1605.env ,  ( & ( (* dref4388 ) .stuff .EditorMode_165_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1606 ) ( ( dref4396 .stuff .Key_183_Char_s .field0 ) ) ) ) );
                        ( (  live_dash_cmd1607 ) ( (  ed4385 ) ,  ( (  as_dash_str1366 ) ( ( & ( (* dref4388 ) .stuff .EditorMode_165_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4396.tag == Key_183_Backspace_t ) {
                            if ( ( ! ( (  null1613 ) ( ( (* dref4388 ) .stuff .EditorMode_165_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion180  temp1618 = ( (struct envunion180){ .fun = (  enum Unit_8  (*) (  struct env67*  ,    struct StrBuilder_62 *  ) )pop1619 , .env =  env->envinst67 } );
                                ( temp1618.fun ( &temp1618.env ,  ( & ( (* dref4388 ) .stuff .EditorMode_165_Cmd_s .field1 ) ) ) );
                            }
                            ( (  live_dash_cmd1607 ) ( (  ed4385 ) ,  ( (  as_dash_str1366 ) ( ( & ( (* dref4388 ) .stuff .EditorMode_165_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref4388 ).tag == EditorMode_165_Search_t ) {
                struct Key_183  dref4400 = (  key4387 );
                if ( dref4400.tag == Key_183_Escape_t ) {
                    ( (  set_dash_cursors985 ) ( ( (  pane1028 ) ( (  ed4385 ) ) ) ,  ( (* dref4388 ) .stuff .EditorMode_165_Search_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_UpdateVI ) ) );
                    (*  ed4385 ) .f_mode = ( (struct EditorMode_165) { .tag = EditorMode_165_Normal_t } );
                }
                else {
                    if ( dref4400.tag == Key_183_Enter_t ) {
                        ( (  set_dash_cursors985 ) ( ( (  pane1028 ) ( (  ed4385 ) ) ) ,  ( ( * ( (  pane1028 ) ( (  ed4385 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane1028 ) ( (  ed4385 ) ) ) ) .f_sel ) ,  ( CursorMovement_986_UpdateVI ) ) );
                        struct env1626 envinst1626 = {
                            .ed4385 =  ed4385 ,
                        };
                        ( (  if_dash_just1625 ) ( ( ( * (  ed4385 ) ) .f_search_dash_term ) ,  ( (struct envunion1627){ .fun = (  enum Unit_8  (*) (  struct env1626*  ,    struct StrView_27  ) )lam1629 , .env =  envinst1626 } ) ) );
                        if ( ( ! ( (  null1613 ) ( ( (* dref4388 ) .stuff .EditorMode_165_Search_s .field1 ) ) ) ) ) {
                            struct Pos_26  to4403 = ( ( * ( (  pane1028 ) ( (  ed4385 ) ) ) ) .f_cursor );
                            struct Pos_26  from4404 = ( (  or_dash_else1296 ) ( ( ( * ( (  pane1028 ) ( (  ed4385 ) ) ) ) .f_sel ) ,  (  to4403 ) ) );
                            (*  ed4385 ) .f_search_dash_term = ( ( Maybe_164_Just ) ( ( (  as_dash_str1366 ) ( ( & ( (* dref4388 ) .stuff .EditorMode_165_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4385 ) .f_search_dash_term = ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
                        }
                        (*  ed4385 ) .f_mode = ( (struct EditorMode_165) { .tag = EditorMode_165_Normal_t } );
                    }
                    else {
                        if ( dref4400.tag == Key_183_Char_t ) {
                            struct envunion1631  temp1630 = ( (struct envunion1631){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1357 , .env =  env->envinst60 } );
                            ( temp1630.fun ( &temp1630.env ,  ( & ( (* dref4388 ) .stuff .EditorMode_165_Search_s .field1 ) ) ,  ( (  ascii_dash_char1606 ) ( ( dref4400 .stuff .Key_183_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1632 ) ( (  ed4385 ) ,  ( (* dref4388 ) .stuff .EditorMode_165_Search_s .field0 ) ,  ( (  as_dash_str1366 ) ( ( & ( (* dref4388 ) .stuff .EditorMode_165_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4400.tag == Key_183_Backspace_t ) {
                                if ( ( ! ( (  null1613 ) ( ( (* dref4388 ) .stuff .EditorMode_165_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1637  temp1636 = ( (struct envunion1637){ .fun = (  enum Unit_8  (*) (  struct env67*  ,    struct StrBuilder_62 *  ) )pop1619 , .env =  env->envinst67 } );
                                    ( temp1636.fun ( &temp1636.env ,  ( & ( (* dref4388 ) .stuff .EditorMode_165_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1632 ) ( (  ed4385 ) ,  ( (* dref4388 ) .stuff .EditorMode_165_Search_s .field0 ) ,  ( (  as_dash_str1366 ) ( ( & ( (* dref4388 ) .stuff .EditorMode_165_Search_s .field1 ) ) ) ) ) );
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
                    ( (  todo1578 ) ( ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1639 {
    bool  (*fun) (  struct env85*  ,    struct Screen_188 *  );
    struct env85 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1640 (   struct env85* env ,    struct Screen_188 *  screen3505 ) {
    struct Tui_81 *  tui3506 = ( ( * (  screen3505 ) ) .f_tui );
    struct envunion86  temp1641 = ( (struct envunion86){ .fun = (  bool  (*) (  struct env78*  ,    struct Tui_81 *  ) )update_dash_dimensions772 , .env =  env->envinst78 } );
    bool  updated_dash_dimensions3507 = ( temp1641.fun ( &temp1641.env ,  (  tui3506 ) ) );
    if ( ( ! (  updated_dash_dimensions3507 ) ) ) {
        return ( false );
    }
    (*  screen3505 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3508 = ( ( * ( ( * (  screen3505 ) ) .f_tui ) ) .f_width );
    uint32_t  h3509 = ( ( * ( ( * (  screen3505 ) ) .f_tui ) ) .f_height );
    size_t  nusz3510 = ( (  u32_dash_size715 ) ( (  op_dash_mul723 ( (  w3508 ) , (  h3509 ) ) ) ) );
    if ( (  cmp221 ( (  nusz3510 ) , ( ( ( * (  screen3505 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_188  nuscreen3511 = ( (  mk_dash_screen709 ) ( (  tui3506 ) ,  ( ( * (  screen3505 ) ) .f_al ) ) );
    (*  screen3505 ) .f_current = ( (  nuscreen3511 ) .f_current );
    (*  screen3505 ) .f_previous = ( (  nuscreen3511 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1642 (    struct Tui_81 *  tui3432 ) {
    bool  redraw3433 = ( ( * (  tui3432 ) ) .f_should_dash_redraw );
    (*  tui3432 ) .f_should_dash_redraw = ( false );
    return (  redraw3433 );
}

struct env1646 {
    struct Slice_189  s1906;
    struct Cell_190 (*  fun1908 )(    struct Cell_190  );
    ;
    ;
    ;
};

struct envunion1647 {
    enum Unit_8  (*fun) (  struct env1646*  ,    int32_t  );
    struct env1646 env;
};

static  enum Unit_8   for_dash_each1645 (    struct Range_726  iterable1074 ,   struct envunion1647  fun1076 ) {
    struct RangeIter_729  temp1648 = ( (  into_dash_iter731 ) ( (  iterable1074 ) ) );
    struct RangeIter_729 *  it1077 = ( &temp1648 );
    while ( ( true ) ) {
        struct Maybe_309  dref1078 = ( (  next732 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_309_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_309_Just_t ) {
                struct envunion1647  temp1649 = (  fun1076 );
                ( temp1649.fun ( &temp1649.env ,  ( dref1078 .stuff .Maybe_309_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1650 (   struct env1646* env ,    int32_t  i1910 ) {
    return ( (  set736 ) ( ( env->s1906 ) ,  ( (  i32_dash_size299 ) ( (  i1910 ) ) ) ,  ( ( env->fun1908 ) ( (  elem_dash_get740 ( ( env->s1906 ) , ( (  i32_dash_size299 ) ( (  i1910 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map1644 (    struct Slice_189  s1906 ,    struct Cell_190 (*  fun1908 )(    struct Cell_190  ) ) {
    struct env1646 envinst1646 = {
        .s1906 =  s1906 ,
        .fun1908 =  fun1908 ,
    };
    ( (  for_dash_each1645 ) ( ( (  to734 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32233 ) ( (  op_dash_sub349 ( ( (  s1906 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1647){ .fun = (  enum Unit_8  (*) (  struct env1646*  ,    int32_t  ) )lam1650 , .env =  envinst1646 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_190   lam1651 (    struct Cell_190  dref3469 ) {
    return ( (  default_dash_cell748 ) ( ) );
}

static  enum Unit_8   clear_dash_screen1643 (    struct Screen_188 *  screen3468 ) {
    ( (  map1644 ) ( ( ( * (  screen3468 ) ) .f_current ) ,  (  lam1651 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_fg1652 (    struct Screen_188 *  screen3514 ,    struct Color_191  c3516 ) {
    (*  screen3514 ) .f_default_dash_fg = (  c3516 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_bg1653 (    struct Screen_188 *  screen3519 ,    struct Color_191  c3521 ) {
    (*  screen3519 ) .f_default_dash_bg = (  c3521 );
    return ( Unit_8_Unit );
}

struct envunion1655 {
    enum Unit_8  (*fun) (  struct env186*  ,    struct Screen_188 *  ,    struct Editor_163 *  );
    struct env186 env;
};

static  int32_t   cast1658 (    uint32_t  x356 ) {
    return ( (int32_t ) (  x356 ) );
}

static  int32_t   u32_dash_i321657 (    uint32_t  x660 ) {
    return ( (  cast1658 ) ( (  x660 ) ) );
}

static  int32_t   screen_dash_width1662 (    struct ScreenDims_195  sd3985 ) {
    return (  op_dash_add311 ( (  op_dash_sub852 ( ( (  sd3985 ) .f_to_dash_sx ) , ( (  sd3985 ) .f_from_dash_sx ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1663 (    struct ScreenDims_195  sd3988 ) {
    return (  op_dash_add311 ( (  op_dash_sub852 ( ( (  sd3988 ) .f_to_dash_sy ) , ( (  sd3988 ) .f_from_dash_sy ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  enum Unit_8   update_dash_screen_dash_offset1661 (    struct Pane_141 *  pane3991 ,    struct ScreenDims_195  sd3993 ) {
    struct Pos_26  cur3994 = ( ( * (  pane3991 ) ) .f_cursor );
    int32_t  cur_dash_sx3995 = ( (  pos_dash_vi989 ) ( ( ( * (  pane3991 ) ) .f_buf ) ,  (  cur3994 ) ) );
    struct ScreenCursorOffset_143  sc_dash_off3996 = ( ( * (  pane3991 ) ) .f_sc_dash_off );
    int32_t  sw3997 = (  op_dash_sub852 ( ( (  screen_dash_width1662 ) ( (  sd3993 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  sh3998 = (  op_dash_sub852 ( ( (  screen_dash_height1663 ) ( (  sd3993 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  margin3999 = (  from_dash_integral56 ( 5 ) );
    int32_t  csi4000 = ( (  pos_dash_vi989 ) ( ( ( * (  pane3991 ) ) .f_buf ) ,  (  cur3994 ) ) );
    int32_t  csx4001 = (  op_dash_sub852 ( (  csi4000 ) , ( (  sc_dash_off3996 ) .f_screen_dash_left ) ) );
    int32_t  csy4002 = (  op_dash_sub852 ( ( (  cur3994 ) .f_line ) , ( (  sc_dash_off3996 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left4003 = ( (  sc_dash_off3996 ) .f_screen_dash_left );
    if ( (  cmp362 ( (  csx4001 ) , (  margin3999 ) ) == 0 ) ) {
        nu_dash_screen_dash_left4003 = (  op_dash_sub852 ( (  csi4000 ) , (  margin3999 ) ) );
    } else {
        if ( (  cmp362 ( (  csx4001 ) , (  op_dash_sub852 ( (  sw3997 ) , (  margin3999 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left4003 = (  op_dash_add311 ( (  op_dash_sub852 ( (  csi4000 ) , (  sw3997 ) ) ) , (  margin3999 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left4004 = ( (  max1004 ) ( (  nu_dash_screen_dash_left4003 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top4005 = ( (  sc_dash_off3996 ) .f_screen_dash_top );
    if ( (  cmp362 ( (  csy4002 ) , (  margin3999 ) ) == 0 ) ) {
        nu_dash_screen_dash_top4005 = (  op_dash_sub852 ( ( (  cur3994 ) .f_line ) , (  margin3999 ) ) );
    } else {
        if ( (  cmp362 ( (  csy4002 ) , (  op_dash_sub852 ( (  sh3998 ) , (  margin3999 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top4005 = (  op_dash_add311 ( (  op_dash_sub852 ( ( (  cur3994 ) .f_line ) , (  sh3998 ) ) ) , (  margin3999 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top4006 = ( (  max1004 ) ( (  nu_dash_screen_dash_top4005 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    (*  pane3991 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_143) { .f_screen_dash_top = (  nu_dash_screen_dash_top4006 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left4004 ) } );
    return ( Unit_8_Unit );
}

struct IntStrIter_1665 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

static  struct IntStrIter_1665   into_dash_iter1667 (    struct IntStrIter_1665  self1425 ) {
    return (  self1425 );
}

struct env1671 {
    int32_t  base1210;
    ;
};

struct envunion1672 {
    int32_t  (*fun) (  struct env1671*  ,    int32_t  ,    int32_t  );
    struct env1671 env;
};

static  int32_t   reduce1670 (    struct Range_726  iterable1093 ,    int32_t  base1095 ,   struct envunion1672  fun1097 ) {
    int32_t  x1098 = (  base1095 );
    struct RangeIter_729  it1099 = ( (  into_dash_iter731 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next732 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                struct envunion1672  temp1673 = (  fun1097 );
                x1098 = ( temp1673.fun ( &temp1673.env ,  ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1674 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1674);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1675;
    return (  temp1675 );
}

static  int32_t   lam1676 (   struct env1671* env ,    int32_t  item1214 ,    int32_t  x1216 ) {
    return (  op_dash_mul1434 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int32_t   pow1669 (    int32_t  base1210 ,    int32_t  p1212 ) {
    struct env1671 envinst1671 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1670 ) ( ( (  to734 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub852 ( (  p1212 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  ( (struct envunion1672){ .fun = (  int32_t  (*) (  struct env1671*  ,    int32_t  ,    int32_t  ) )lam1676 , .env =  envinst1671 } ) ) );
}

static  uint8_t   cast1677 (    int32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_653   next1668 (    struct IntStrIter_1665 *  self1428 ) {
    if ( ( ( * (  self1428 ) ) .f_negative ) ) {
        (*  self1428 ) .f_negative = ( false );
        return ( ( Maybe_653_Just ) ( ( (  from_dash_charlike258 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp362 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
    }
    int32_t  trim_dash_down1429 = ( (  pow1669 ) ( (  from_dash_integral56 ( 10 ) ) ,  (  op_dash_sub852 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  upper1430 = (  op_dash_div1433 ( ( ( * (  self1428 ) ) .f_int ) , (  trim_dash_down1429 ) ) );
    int32_t  upper_dash_mask1431 = (  op_dash_mul1434 ( (  op_dash_div1433 ( (  upper1430 ) , (  from_dash_integral56 ( 10 ) ) ) ) , (  from_dash_integral56 ( 10 ) ) ) );
    uint8_t  digit1432 = ( ( (  cast1677 ) ( (  op_dash_sub852 ( (  upper1430 ) , (  upper_dash_mask1431 ) ) ) ) ) );
    (*  self1428 ) .f_len = (  op_dash_sub852 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1433 = ( (  from_dash_u8932 ) ( (  op_dash_add822 ( (  digit1432 ) , (  from_dash_integral249 ( 48 ) ) ) ) ) );
    return ( ( Maybe_653_Just ) ( (  digit_dash_char1433 ) ) );
}

static  size_t   reduce1666 (    struct IntStrIter_1665  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct IntStrIter_1665  it1099 = ( (  into_dash_iter1667 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_653  dref1100 = ( (  next1668 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_653_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_653_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_653_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1678 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1678);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1679;
    return (  temp1679 );
}

static  size_t   lam1680 (    struct Char_65  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add269 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1664 (    struct IntStrIter_1665  it1104 ) {
    return ( (  reduce1666 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1680 ) ) );
}

static  int32_t   count_dash_digits1683 (    int32_t  self1436 ) {
    if ( (  eq365 ( (  self1436 ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1437 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp362 ( (  self1436 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ) {
        self1436 = (  op_dash_div1433 ( (  self1436 ) , (  from_dash_integral56 ( 10 ) ) ) );
        digits1437 = (  op_dash_add311 ( (  digits1437 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1437 );
}

static  struct IntStrIter_1665   int_dash_iter1682 (    int32_t  int1440 ) {
    if ( (  cmp362 ( (  int1440 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1665) { .f_int = (  op_dash_neg683 ( (  int1440 ) ) ) , .f_len = ( (  count_dash_digits1683 ) ( (  op_dash_neg683 ( (  int1440 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1665) { .f_int = (  int1440 ) , .f_len = ( (  count_dash_digits1683 ) ( (  int1440 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1665   chars1681 (    int32_t  self1449 ) {
    return ( (  int_dash_iter1682 ) ( (  self1449 ) ) );
}

struct Map_1688 {
    struct IntStrIter_1665  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1688 Map_1688_Map (  struct IntStrIter_1665  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1688 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1688   into_dash_iter1690 (    struct Map_1688  self796 ) {
    return (  self796 );
}

static  struct Maybe_309   next1691 (    struct Map_1688 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next1668 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_309_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1689 (    struct Map_1688  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1688  it1099 = ( (  into_dash_iter1690 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next1691 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1692 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1692);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1693;
    return (  temp1693 );
}

static  int32_t   lam1694 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add311 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1687 (    struct Map_1688  it1110 ) {
    return ( (  reduce1689 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam1694 ) ) );
}

static  struct Map_1688   map1695 (    struct IntStrIter_1665  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct IntStrIter_1665  it808 = ( (  into_dash_iter1667 ) ( (  iterable805 ) ) );
    return ( ( Map_1688_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  enum Unit_8   put_dash_char1699 (    struct Screen_188 *  screen3552 ,    struct Char_65  c3554 ,    int32_t  x3556 ,    int32_t  y3558 ) {
    int32_t  w3559 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3552 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp362 ( (  x3556 ) , (  w3559 ) ) != 0 ) || (  cmp362 ( (  y3558 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3552 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp362 ( (  x3556 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) || (  cmp362 ( (  y3558 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    size_t  i3560 = ( (  i32_dash_size299 ) ( (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3558 ) , (  w3559 ) ) ) , (  x3556 ) ) ) ) );
    struct Color_191  fg3561 = ( ( * (  screen3552 ) ) .f_default_dash_fg );
    struct Color_191  bg3562 = ( ( * (  screen3552 ) ) .f_default_dash_bg );
    struct Char_65  c3563 = (  c3554 );
    int32_t  char_dash_width3564 = ( (  wcwidth1005 ) ( (  c3563 ) ) );
    if ( ( (  cmp362 ( (  x3556 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) && (  cmp362 ( ( (  elem_dash_get740 ( ( ( * (  screen3552 ) ) .f_current ) , (  op_dash_sub349 ( (  i3560 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral56 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_190  pc3565 = (  elem_dash_get740 ( ( ( * (  screen3552 ) ) .f_current ) , (  op_dash_sub349 ( (  i3560 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set736 ) ( ( ( * (  screen3552 ) ) .f_current ) ,  (  op_dash_sub349 ( (  i3560 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_190) { .f_c = ( (  from_dash_charlike258 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3565 ) .f_fg ) , .f_bg = ( (  pc3565 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    ( (  set736 ) ( ( ( * (  screen3552 ) ) .f_current ) ,  (  i3560 ) ,  ( (struct Cell_190) { .f_c = (  c3563 ) , .f_fg = (  fg3561 ) , .f_bg = (  bg3562 ) , .f_char_dash_width = (  char_dash_width3564 ) } ) ) );
    struct RangeIter_729  temp1700 =  into_dash_iter731 ( ( (  to734 ) ( (  op_dash_add311 ( (  x3556 ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min515 ) ( (  op_dash_sub852 ( (  op_dash_add311 ( (  x3556 ) , (  char_dash_width3564 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  w3559 ) ) ) ) ) );
    while (true) {
        struct Maybe_309  __cond1701 =  next732 (&temp1700);
        if (  __cond1701 .tag == 0 ) {
            break;
        }
        int32_t  xx3567 =  __cond1701 .stuff .Maybe_309_Just_s .field0;
        size_t  i3568 = ( (  i32_dash_size299 ) ( (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3558 ) , (  w3559 ) ) ) , (  xx3567 ) ) ) ) );
        ( (  set736 ) ( ( ( * (  screen3552 ) ) .f_current ) ,  (  i3568 ) ,  ( (struct Cell_190) { .f_c = ( (  from_dash_charlike258 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = (  fg3561 ) , .f_bg = (  bg3562 ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str1696 (    struct Screen_188 *  screen3571 ,    int32_t  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct IntStrIter_1665  temp1697 =  into_dash_iter1667 ( ( (  chars1681 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond1698 =  next1668 (&temp1697);
        if (  __cond1698 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond1698 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1686 (    struct Screen_188 *  screen3587 ,    int32_t  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum1687 ) ( ( (  map1695 ) ( ( (  chars1681 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1003 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str1696 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_1703 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct StrConcat_1703 StrConcat_1703_StrConcat (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1703 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1706 {
    struct StrView_27  field0;
    struct StrConcat_1703  field1;
};

static struct StrConcat_1706 StrConcat_1706_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_1703  field1 ) {
    return ( struct StrConcat_1706 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1705 {
    struct StrConcat_1706  field0;
    struct Char_65  field1;
};

static struct StrConcat_1705 StrConcat_1705_StrConcat (  struct StrConcat_1706  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1705 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str1708 (    struct StrConcat_1703  self1509 ) {
    struct StrConcat_1703  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str232 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str239 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1707 (    struct StrConcat_1706  self1509 ) {
    struct StrConcat_1706  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str232 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str1708 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1704 (    struct StrConcat_1705  self1509 ) {
    struct StrConcat_1705  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str1707 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str240 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert1702 (    bool  cond1719 ,    struct StrConcat_1703  msg1721 ) {
    if ( ( ! (  cond1719 ) ) ) {
        ( (  print_dash_str1704 ) ( ( ( StrConcat_1705_StrConcat ) ( ( ( StrConcat_1706_StrConcat ) ( ( (  from_dash_string257 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1721 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct AppendIter_1710 {
    struct StrViewIter_650  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1710   into_dash_iter1711 (    struct AppendIter_1710  self1019 ) {
    return (  self1019 );
}

static  struct AppendIter_1710   append1712 (    struct StrViewIter_650  it1006 ,    struct Char_65  e1008 ) {
    return ( (struct AppendIter_1710) { .f_it = ( (  into_dash_iter652 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct Maybe_653   next1714 (    struct AppendIter_1710 *  self1022 ) {
    struct Maybe_653  dref1023 = ( (  next654 ) ( ( & ( ( * (  self1022 ) ) .f_it ) ) ) );
    if ( dref1023.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1023 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1023.tag == Maybe_653_None_t ) {
            if ( ( ! ( ( * (  self1022 ) ) .f_appended ) ) ) {
                (*  self1022 ) .f_appended = ( true );
                return ( ( Maybe_653_Just ) ( ( ( * (  self1022 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
        }
    }
}

static  bool   between1716 (    struct Pos_26  c1337 ,    struct Pos_26  l1339 ,    struct Pos_26  r1341 ) {
    struct Pos_26  from1342 = ( (  min360 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Pos_26  to1343 = ( (  max363 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp361 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp361 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1715 (    struct Pane_141 *  pane3977 ,    struct Pos_26  pos3979 ) {
    return ( {  struct Maybe_34  dref3980 = ( ( * (  pane3977 ) ) .f_sel ) ; dref3980.tag == Maybe_34_Just_t ? ( (  between1716 ) ( (  pos3979 ) ,  ( ( * (  pane3977 ) ) .f_cursor ) ,  ( dref3980 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct env1718 {
    struct Screen_188 *  screen4009;
};

struct envunion1719 {
    enum Unit_8  (*fun) (  struct env1718*  ,    enum HighlightType_18  );
    struct env1718 env;
};

static  enum Unit_8   if_dash_just1717 (    struct Maybe_125  x1291 ,   struct envunion1719  fun1293 ) {
    struct Maybe_125  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_125_Just_t ) {
        struct envunion1719  temp1720 = (  fun1293 );
        ( temp1720.fun ( &temp1720.env ,  ( dref1294 .stuff .Maybe_125_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_125_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1725 (    struct List_15 *  l2116 ,    size_t  new_dash_count2118 ) {
    (*  l2116 ) .f_count = ( (  min376 ) ( (  new_dash_count2118 ) ,  ( ( * (  l2116 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_653   head1728 (    struct Scanner_847 *  it1142 ) {
    struct Scanner_847  temp1729 = ( (  into_dash_iter864 ) ( (  it1142 ) ) );
    return ( (  next870 ) ( ( &temp1729 ) ) );
}

static  bool   null1727 (    struct Scanner_847 *  it1151 ) {
    struct Maybe_653  dref1152 = ( (  head1728 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_653_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_653   peek1730 (    struct Scanner_847 *  sc3203 ) {
    return ( (  head1239 ) ( ( ( * (  sc3203 ) ) .f_s ) ) );
}

struct Tuple2_1733 {
    struct Maybe_653  field0;
    struct Maybe_653  field1;
};

static struct Tuple2_1733 Tuple2_1733_Tuple2 (  struct Maybe_653  field0 ,  struct Maybe_653  field1 ) {
    return ( struct Tuple2_1733 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1732 (    struct Maybe_653  l141 ,    struct Maybe_653  r143 ) {
    struct Tuple2_1733  dref144 = ( ( Tuple2_1733_Tuple2 ) ( (  l141 ) ,  (  r143 ) ) );
    if ( dref144 .field0.tag == Maybe_653_None_t && dref144 .field1.tag == Maybe_653_None_t ) {
        return ( true );
    }
    else {
        if ( dref144 .field0.tag == Maybe_653_Just_t && dref144 .field1.tag == Maybe_653_Just_t ) {
            return (  eq448 ( ( dref144 .field0 .stuff .Maybe_653_Just_s .field0 ) , ( dref144 .field1 .stuff .Maybe_653_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  bool   try_dash_char1731 (    struct Scanner_847 *  sc3206 ,    struct Char_65  char3208 ) {
    if ( (  eq1732 ( ( (  peek1730 ) ( (  sc3206 ) ) ) , ( ( Maybe_653_Just ) ( (  char3208 ) ) ) ) ) ) {
        ( (  drop_prime_873 ) ( (  sc3206 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        return ( true );
    }
    return ( false );
}

struct TypeSize_1740 {
    size_t  f_size;
};

static  struct TypeSize_1740   get_dash_typesize1739 (  ) {
    struct Highlight_17  temp1741;
    return ( (struct TypeSize_1740) { .f_size = ( sizeof( ( (  temp1741 ) ) ) ) } );
}

static  struct Highlight_17 *   cast_dash_ptr1742 (    void *  p359 ) {
    return ( (struct Highlight_17 * ) (  p359 ) );
}

static  struct Slice_16   allocate1738 (    enum CAllocator_10  dref1954 ,    size_t  count1956 ) {
    if (!(  dref1954 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1957 = ( ( ( (  get_dash_typesize1739 ) ( ) ) ) .f_size );
    struct Highlight_17 *  ptr1958 = ( (  cast_dash_ptr1742 ) ( ( ( malloc ) ( (  op_dash_mul282 ( (  size1957 ) , (  count1956 ) ) ) ) ) ) );
    return ( (struct Slice_16) { .f_ptr = (  ptr1958 ) , .f_count = (  count1956 ) } );
}

struct env1743 {
    struct Slice_16  new_dash_slice2043;
    ;
    ;
};

struct Tuple2_1745 {
    struct Highlight_17  field0;
    int32_t  field1;
};

static struct Tuple2_1745 Tuple2_1745_Tuple2 (  struct Highlight_17  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1745 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1744 {
    enum Unit_8  (*fun) (  struct env1743*  ,    struct Tuple2_1745  );
    struct env1743 env;
};

static  struct Highlight_17 *   offset_dash_ptr1749 (    struct Highlight_17 *  x338 ,    int64_t  count340 ) {
    struct Highlight_17  temp1750;
    return ( (struct Highlight_17 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul267 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1750 ) ) ) ) ) ) ) ) );
}

static  struct Highlight_17 *   get_dash_ptr1748 (    struct Slice_16  slice1758 ,    size_t  i1760 ) {
    if ( ( (  cmp221 ( (  i1760 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic289 ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1760 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1758 ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Highlight_17 *  elem_dash_ptr1761 = ( (  offset_dash_ptr1749 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  i1760 ) ) ) ) );
    return (  elem_dash_ptr1761 );
}

static  enum Unit_8   set1747 (    struct Slice_16  slice1775 ,    size_t  i1777 ,    struct Highlight_17  x1779 ) {
    struct Highlight_17 *  ep1780 = ( (  get_dash_ptr1748 ) ( (  slice1775 ) ,  (  i1777 ) ) );
    (*  ep1780 ) = (  x1779 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1746 (   struct env1743* env ,    struct Tuple2_1745  dref2044 ) {
    return ( (  set1747 ) ( ( env->new_dash_slice2043 ) ,  ( (  i32_dash_size299 ) ( ( dref2044 .field1 ) ) ) ,  ( dref2044 .field0 ) ) );
}

struct SliceIter_1753 {
    struct Slice_16  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_1752 {
    struct SliceIter_1753  f_left_dash_it;
    struct FromIter_303  f_right_dash_it;
};

static  struct Zip_1752   into_dash_iter1755 (    struct Zip_1752  self911 ) {
    return (  self911 );
}

struct Maybe_1756 {
    enum {
        Maybe_1756_None_t,
        Maybe_1756_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1745  field0;
        } Maybe_1756_Just_s;
    } stuff;
};

static struct Maybe_1756 Maybe_1756_Just (  struct Tuple2_1745  field0 ) {
    return ( struct Maybe_1756 ) { .tag = Maybe_1756_Just_t, .stuff = { .Maybe_1756_Just_s = { .field0 = field0 } } };
};

struct Maybe_1758 {
    enum {
        Maybe_1758_None_t,
        Maybe_1758_Just_t,
    } tag;
    union {
        struct {
            struct Highlight_17  field0;
        } Maybe_1758_Just_s;
    } stuff;
};

static struct Maybe_1758 Maybe_1758_Just (  struct Highlight_17  field0 ) {
    return ( struct Maybe_1758 ) { .tag = Maybe_1758_Just_t, .stuff = { .Maybe_1758_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1758   next1759 (    struct SliceIter_1753 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp221 ( (  op_dash_add269 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1758) { .tag = Maybe_1758_None_t } );
    }
    struct Highlight_17  elem1831 = ( * ( (  offset_dash_ptr1749 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add269 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1758_Just ) ( (  elem1831 ) ) );
}

static  struct Maybe_1756   next1757 (    struct Zip_1752 *  self914 ) {
    struct Zip_1752  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1758  dref916 = ( (  next1759 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1758_None_t ) {
            return ( (struct Maybe_1756) { .tag = Maybe_1756_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1758_Just_t ) {
                struct Maybe_309  dref918 = ( (  next310 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_309_None_t ) {
                    return ( (struct Maybe_1756) { .tag = Maybe_1756_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_309_Just_t ) {
                        ( (  next1759 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next310 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1756_Just ) ( ( ( Tuple2_1745_Tuple2 ) ( ( dref916 .stuff .Maybe_1758_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_309_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1751 (    struct Zip_1752  iterable1074 ,   struct envunion1744  fun1076 ) {
    struct Zip_1752  temp1754 = ( (  into_dash_iter1755 ) ( (  iterable1074 ) ) );
    struct Zip_1752 *  it1077 = ( &temp1754 );
    while ( ( true ) ) {
        struct Maybe_1756  dref1078 = ( (  next1757 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1756_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1756_Just_t ) {
                struct envunion1744  temp1760 = (  fun1076 );
                ( temp1760.fun ( &temp1760.env ,  ( dref1078 .stuff .Maybe_1756_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_1753   into_dash_iter1762 (    struct Slice_16  self1823 ) {
    return ( (struct SliceIter_1753) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_1752   zip1761 (    struct Slice_16  left922 ,    struct FromIter_303  right924 ) {
    struct SliceIter_1753  left_dash_it925 = ( (  into_dash_iter1762 ) ( (  left922 ) ) );
    struct FromIter_303  right_dash_it926 = ( (  into_dash_iter315 ) ( (  right924 ) ) );
    return ( (struct Zip_1752) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr1764 (    struct Highlight_17 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1763 (    enum CAllocator_10  dref1960 ,    struct Slice_16  slice1962 ) {
    if (!(  dref1960 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1764 ) ( ( (  slice1962 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1737 (   struct env5* env ,    struct List_15 *  list2042 ) {
    if ( (  eq276 ( ( ( * (  list2042 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2042 ) .f_elements = ( (  allocate1738 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( env->starting_dash_size2037 ) ) );
    } else {
        if ( (  eq276 ( ( ( * (  list2042 ) ) .f_count ) , ( ( ( * (  list2042 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_16  new_dash_slice2043 = ( (  allocate1738 ) ( ( ( * (  list2042 ) ) .f_al ) ,  (  op_dash_mul282 ( ( ( * (  list2042 ) ) .f_count ) , ( env->growth_dash_factor2038 ) ) ) ) );
            struct env1743 envinst1743 = {
                .new_dash_slice2043 =  new_dash_slice2043 ,
            };
            struct envunion1744  fun2047 = ( (struct envunion1744){ .fun = (  enum Unit_8  (*) (  struct env1743*  ,    struct Tuple2_1745  ) )lam1746 , .env =  envinst1743 } );
            ( (  for_dash_each1751 ) ( ( (  zip1761 ) ( ( ( * (  list2042 ) ) .f_elements ) ,  ( (  from316 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2047 ) ) );
            ( (  free1763 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( ( * (  list2042 ) ) .f_elements ) ) );
            (*  list2042 ) .f_elements = (  new_dash_slice2043 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1735 (   struct env35* env ,    struct List_15 *  list2050 ,    struct Highlight_17  elem2052 ) {
    struct envunion36  temp1736 = ( (struct envunion36){ .fun = (  enum Unit_8  (*) (  struct env5*  ,    struct List_15 *  ) )grow_dash_if_dash_full1737 , .env =  env->envinst5 } );
    ( temp1736.fun ( &temp1736.env ,  (  list2050 ) ) );
    ( (  set1747 ) ( ( ( * (  list2050 ) ) .f_elements ) ,  ( ( * (  list2050 ) ) .f_count ) ,  (  elem2052 ) ) );
    (*  list2050 ) .f_count = (  op_dash_add269 ( ( ( * (  list2050 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   char_dash_satisfies1766 (    struct Scanner_847 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
    struct Maybe_653  dref3214 = ( (  head1239 ) ( ( ( * (  sc3211 ) ) .f_s ) ) );
    if ( dref3214.tag == Maybe_653_Just_t ) {
        if ( ( (  condition3213 ) ( ( dref3214 .stuff .Maybe_653_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_873 ) ( (  sc3211 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3214.tag == Maybe_653_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1765 (    struct Scanner_847 *  sc3229 ,    bool (*  condition3231 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1766 ) ( (  sc3229 ) ,  (  condition3231 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1767 (    struct Char_65  c3881 ) {
    return ( ( !  eq448 ( (  c3881 ) , ( (  from_dash_charlike258 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) && ( !  eq448 ( (  c3881 ) , ( (  from_dash_charlike258 ) ( ( "\\" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion1769 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies1770 (    struct Scanner_847 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
    struct Maybe_653  dref3214 = ( (  head1239 ) ( ( ( * (  sc3211 ) ) .f_s ) ) );
    if ( dref3214.tag == Maybe_653_Just_t ) {
        if ( ( (  condition3213 ) ( ( dref3214 .stuff .Maybe_653_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_873 ) ( (  sc3211 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3214.tag == Maybe_653_None_t ) {
            return ( false );
        }
    }
}

static  bool   char_dash_satisfies1772 (    struct Scanner_847 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
    struct Maybe_653  dref3214 = ( (  head1239 ) ( ( ( * (  sc3211 ) ) .f_s ) ) );
    if ( dref3214.tag == Maybe_653_Just_t ) {
        if ( ( (  condition3213 ) ( ( dref3214 .stuff .Maybe_653_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_873 ) ( (  sc3211 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3214.tag == Maybe_653_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1771 (    struct Scanner_847 *  sc3229 ,    bool (*  condition3231 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1772 ) ( (  sc3229 ) ,  (  condition3231 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1773 (    struct Char_65  c3884 ) {
    return ( (  eq1226 ( ( (  char_dash_type1229 ) ( (  c3884 ) ) ) , ( CharType_1227_CharWord ) ) ) || (  eq448 ( (  c3884 ) , ( (  from_dash_charlike258 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion1775 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct Array_1777 {
    struct StrView_27 _arr [2];
};

struct env1778 {
    ;
    struct Scanner_847 *  sc3877;
};

struct envunion1779 {
    bool  (*fun) (  struct env1778*  ,    struct StrView_27  );
    struct env1778 env;
};

struct env1781 {
    struct envunion1779  fun1135;
};

struct envunion1782 {
    bool  (*fun) (  struct env1781*  ,    struct StrView_27  ,    bool  );
    struct env1781 env;
};

struct ArrayIter_1783 {
    struct Array_1777  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_1783   into_dash_iter1784 (    struct Array_1777  self2323 ) {
    return ( (struct ArrayIter_1783) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr1788 (    struct Array_1777 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   offset_dash_ptr1789 (    struct StrView_27 *  x338 ,    int64_t  count340 ) {
    struct StrView_27  temp1790;
    return ( (struct StrView_27 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul267 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1790 ) ) ) ) ) ) ) ) );
}

static  struct StrView_27 *   get_dash_ptr1787 (    struct Array_1777 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp221 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i2254 ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) ) {
        ( (  panic225 ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 2 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2255 = ( ( (  cast_dash_ptr1788 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr1789 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  struct StrView_27   get1786 (    struct Array_1777 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr1787 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_164   next1785 (    struct ArrayIter_1783 *  self2330 ) {
    if ( (  cmp221 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
    struct StrView_27  e2332 = ( (  get1786 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add269 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_164_Just ) ( (  e2332 ) ) );
}

static  bool   reduce1780 (    struct Array_1777  iterable1093 ,    bool  base1095 ,   struct envunion1782  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct ArrayIter_1783  it1099 = ( (  into_dash_iter1784 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1100 = ( (  next1785 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_164_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_164_Just_t ) {
                struct envunion1782  temp1791 = (  fun1097 );
                x1098 = ( temp1791.fun ( &temp1791.env ,  ( dref1100 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1792 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1792);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1793;
    return (  temp1793 );
}

static  bool   lam1794 (   struct env1781* env ,    struct StrView_27  e1137 ,    bool  x1139 ) {
    struct envunion1779  temp1795 = ( env->fun1135 );
    return ( ( temp1795.fun ( &temp1795.env ,  (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1776 (    struct Array_1777  it1133 ,   struct envunion1779  fun1135 ) {
    struct env1781 envinst1781 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1780 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1782){ .fun = (  bool  (*) (  struct env1781*  ,    struct StrView_27  ,    bool  ) )lam1794 , .env =  envinst1781 } ) ) );
}

static  struct Array_1777   from_dash_listlike1796 (    struct Array_1777  self330 ) {
    return (  self330 );
}

static  struct StrViewIter_650   own1801 (    struct StrViewIter_650  x1251 ) {
    return (  x1251 );
}

static  bool   matches_dash_str1798 (    struct Scanner_847 *  sc3218 ,    struct StrView_27  s3220 ) {
    size_t  skip3221 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_650  temp1799 = ( (  chars655 ) ( (  s3220 ) ) );
    struct StrViewIter_650 *  ss3222 = ( &temp1799 );
    struct StrViewIter_650  temp1800 = ( (  own1801 ) ( ( ( * (  sc3218 ) ) .f_s ) ) );
    struct StrViewIter_650 *  sccp3223 = ( &temp1800 );
    while ( ( true ) ) {
        struct Tuple2_1733  dref3224 = ( ( Tuple2_1733_Tuple2 ) ( ( (  next654 ) ( (  sccp3223 ) ) ) ,  ( (  next654 ) ( (  ss3222 ) ) ) ) );
        if ( dref3224 .field1.tag == Maybe_653_None_t ) {
            ( (  drop_prime_873 ) ( (  sc3218 ) ,  (  skip3221 ) ) );
            return ( true );
        }
        else {
            if ( dref3224 .field0.tag == Maybe_653_Just_t && dref3224 .field1.tag == Maybe_653_Just_t ) {
                if ( ( !  eq448 ( ( dref3224 .field0 .stuff .Maybe_653_Just_s .field0 ) , ( dref3224 .field1 .stuff .Maybe_653_Just_s .field0 ) ) ) ) {
                    return ( false );
                }
                skip3221 = (  op_dash_add269 ( (  skip3221 ) , (  from_dash_integral0 ( 1 ) ) ) );
            }
            else {
                if ( true ) {
                    return ( false );
                }
            }
        }
    }
}

static  bool   lam1797 (   struct env1778* env ,    struct StrView_27  sym3887 ) {
    return ( (  matches_dash_str1798 ) ( ( env->sc3877 ) ,  (  sym3887 ) ) );
}

struct envunion1803 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct Array_1805 {
    struct StrView_27 _arr [5];
};

struct env1806 {
    ;
    struct Scanner_847 *  sc3877;
};

struct envunion1807 {
    bool  (*fun) (  struct env1806*  ,    struct StrView_27  );
    struct env1806 env;
};

struct env1809 {
    struct envunion1807  fun1135;
};

struct envunion1810 {
    bool  (*fun) (  struct env1809*  ,    struct StrView_27  ,    bool  );
    struct env1809 env;
};

struct ArrayIter_1811 {
    struct Array_1805  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_1811   into_dash_iter1812 (    struct Array_1805  self2323 ) {
    return ( (struct ArrayIter_1811) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr1816 (    struct Array_1805 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr1815 (    struct Array_1805 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp221 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i2254 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic225 ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2255 = ( ( (  cast_dash_ptr1816 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr1789 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  struct StrView_27   get1814 (    struct Array_1805 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr1815 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_164   next1813 (    struct ArrayIter_1811 *  self2330 ) {
    if ( (  cmp221 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
    struct StrView_27  e2332 = ( (  get1814 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add269 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_164_Just ) ( (  e2332 ) ) );
}

static  bool   reduce1808 (    struct Array_1805  iterable1093 ,    bool  base1095 ,   struct envunion1810  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct ArrayIter_1811  it1099 = ( (  into_dash_iter1812 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1100 = ( (  next1813 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_164_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_164_Just_t ) {
                struct envunion1810  temp1817 = (  fun1097 );
                x1098 = ( temp1817.fun ( &temp1817.env ,  ( dref1100 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1818 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1818);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1819;
    return (  temp1819 );
}

static  bool   lam1820 (   struct env1809* env ,    struct StrView_27  e1137 ,    bool  x1139 ) {
    struct envunion1807  temp1821 = ( env->fun1135 );
    return ( ( temp1821.fun ( &temp1821.env ,  (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1804 (    struct Array_1805  it1133 ,   struct envunion1807  fun1135 ) {
    struct env1809 envinst1809 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1808 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1810){ .fun = (  bool  (*) (  struct env1809*  ,    struct StrView_27  ,    bool  ) )lam1820 , .env =  envinst1809 } ) ) );
}

static  struct Array_1805   from_dash_listlike1822 (    struct Array_1805  self330 ) {
    return (  self330 );
}

static  bool   lam1823 (   struct env1806* env ,    struct StrView_27  sym3891 ) {
    return ( (  matches_dash_str1798 ) ( ( env->sc3877 ) ,  (  sym3891 ) ) );
}

struct envunion1825 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies1827 (    struct Scanner_847 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
    struct Maybe_653  dref3214 = ( (  head1239 ) ( ( ( * (  sc3211 ) ) .f_s ) ) );
    if ( dref3214.tag == Maybe_653_Just_t ) {
        if ( ( (  condition3213 ) ( ( dref3214 .stuff .Maybe_653_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_873 ) ( (  sc3211 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3214.tag == Maybe_653_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1826 (    struct Scanner_847 *  sc3229 ,    bool (*  condition3231 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1827 ) ( (  sc3229 ) ,  (  condition3231 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1828 (    struct Char_65  c3895 ) {
    return ( (  eq1226 ( ( (  char_dash_type1229 ) ( (  c3895 ) ) ) , ( CharType_1227_CharWord ) ) ) || (  eq448 ( (  c3895 ) , ( (  from_dash_charlike258 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   maybe1829 (    struct Maybe_653  x1282 ,    bool (*  fun1284 )(    struct Char_65  ) ,    bool  default1286 ) {
    return ( {  struct Maybe_653  dref1287 = (  x1282 ) ; dref1287.tag == Maybe_653_Just_t ? ( (  fun1284 ) ( ( dref1287 .stuff .Maybe_653_Just_s .field0 ) ) ) : (  default1286 ) ; } );
}

static  bool   is_dash_upper1830 (    struct Char_65  c2407 ) {
    return ( (  eq276 ( ( (  c2407 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1232 ) ( (  c2407 ) ,  ( (  from_dash_charlike258 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

struct Array_1831 {
    struct StrView_27 _arr [15];
};

static  struct Array_1831   from_dash_listlike1832 (    struct Array_1831  self330 ) {
    return (  self330 );
}

struct env1834 {
    ;
    struct StrView_27  ident3899;
};

struct envunion1835 {
    bool  (*fun) (  struct env1834*  ,    struct StrView_27  );
    struct env1834 env;
};

struct env1837 {
    struct envunion1835  fun1135;
};

struct envunion1838 {
    bool  (*fun) (  struct env1837*  ,    struct StrView_27  ,    bool  );
    struct env1837 env;
};

static  bool   reduce1836 (    struct Array_1805  iterable1093 ,    bool  base1095 ,   struct envunion1838  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct ArrayIter_1811  it1099 = ( (  into_dash_iter1812 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1100 = ( (  next1813 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_164_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_164_Just_t ) {
                struct envunion1838  temp1839 = (  fun1097 );
                x1098 = ( temp1839.fun ( &temp1839.env ,  ( dref1100 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1840 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1840);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1841;
    return (  temp1841 );
}

static  bool   lam1842 (   struct env1837* env ,    struct StrView_27  e1137 ,    bool  x1139 ) {
    struct envunion1835  temp1843 = ( env->fun1135 );
    return ( ( temp1843.fun ( &temp1843.env ,  (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1833 (    struct Array_1805  it1133 ,   struct envunion1835  fun1135 ) {
    struct env1837 envinst1837 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1836 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1838){ .fun = (  bool  (*) (  struct env1837*  ,    struct StrView_27  ,    bool  ) )lam1842 , .env =  envinst1837 } ) ) );
}

static  bool   lam1844 (   struct env1834* env ,    struct StrView_27  kw3903 ) {
    return (  eq1577 ( (  kw3903 ) , ( env->ident3899 ) ) );
}

struct env1846 {
    ;
    struct StrView_27  ident3899;
};

struct envunion1847 {
    bool  (*fun) (  struct env1846*  ,    struct StrView_27  );
    struct env1846 env;
};

struct env1849 {
    struct envunion1847  fun1135;
};

struct envunion1850 {
    bool  (*fun) (  struct env1849*  ,    struct StrView_27  ,    bool  );
    struct env1849 env;
};

struct ArrayIter_1851 {
    struct Array_1831  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_1851   into_dash_iter1852 (    struct Array_1831  self2323 ) {
    return ( (struct ArrayIter_1851) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr1856 (    struct Array_1831 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr1855 (    struct Array_1831 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp221 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i2254 ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) ) {
        ( (  panic225 ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 15 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2255 = ( ( (  cast_dash_ptr1856 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr1789 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  struct StrView_27   get1854 (    struct Array_1831 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr1855 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_164   next1853 (    struct ArrayIter_1851 *  self2330 ) {
    if ( (  cmp221 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
    struct StrView_27  e2332 = ( (  get1854 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add269 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_164_Just ) ( (  e2332 ) ) );
}

static  bool   reduce1848 (    struct Array_1831  iterable1093 ,    bool  base1095 ,   struct envunion1850  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct ArrayIter_1851  it1099 = ( (  into_dash_iter1852 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1100 = ( (  next1853 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_164_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_164_Just_t ) {
                struct envunion1850  temp1857 = (  fun1097 );
                x1098 = ( temp1857.fun ( &temp1857.env ,  ( dref1100 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1858 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1858);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1859;
    return (  temp1859 );
}

static  bool   lam1860 (   struct env1849* env ,    struct StrView_27  e1137 ,    bool  x1139 ) {
    struct envunion1847  temp1861 = ( env->fun1135 );
    return ( ( temp1861.fun ( &temp1861.env ,  (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1845 (    struct Array_1831  it1133 ,   struct envunion1847  fun1135 ) {
    struct env1849 envinst1849 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1848 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1850){ .fun = (  bool  (*) (  struct env1849*  ,    struct StrView_27  ,    bool  ) )lam1860 , .env =  envinst1849 } ) ) );
}

static  bool   lam1862 (   struct env1846* env ,    struct StrView_27  kw3905 ) {
    return (  eq1577 ( (  kw3905 ) , ( env->ident3899 ) ) );
}

struct envunion1864 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_860   int1865 (    struct Scanner_847 *  sc3197 ) {
    return ( (  scan_dash_int861 ) ( (  sc3197 ) ) );
}

static  bool   char_dash_satisfies1867 (    struct Scanner_847 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
    struct Maybe_653  dref3214 = ( (  head1239 ) ( ( ( * (  sc3211 ) ) .f_s ) ) );
    if ( dref3214.tag == Maybe_653_Just_t ) {
        if ( ( (  condition3213 ) ( ( dref3214 .stuff .Maybe_653_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_873 ) ( (  sc3211 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3214.tag == Maybe_653_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1866 (    struct Scanner_847 *  sc3229 ,    bool (*  condition3231 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1867 ) ( (  sc3229 ) ,  (  condition3231 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_hex1868 (    struct Char_65  c2395 ) {
    return ( (  eq276 ( ( (  c2395 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( ( ( (  is_dash_digit1235 ) ( (  c2395 ) ) ) || ( (  between1232 ) ( (  c2395 ) ,  ( (  from_dash_charlike258 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "f" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1232 ) ( (  c2395 ) ,  ( (  from_dash_charlike258 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion1870 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies1872 (    struct Scanner_847 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
    struct Maybe_653  dref3214 = ( (  head1239 ) ( ( ( * (  sc3211 ) ) .f_s ) ) );
    if ( dref3214.tag == Maybe_653_Just_t ) {
        if ( ( (  condition3213 ) ( ( dref3214 .stuff .Maybe_653_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_873 ) ( (  sc3211 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3214.tag == Maybe_653_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1871 (    struct Scanner_847 *  sc3229 ,    bool (*  condition3231 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1872 ) ( (  sc3229 ) ,  (  condition3231 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_octal1873 (    struct Char_65  c2401 ) {
    return ( (  eq276 ( ( (  c2401 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1232 ) ( (  c2401 ) ,  ( (  from_dash_charlike258 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "7" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion1875 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies1877 (    struct Scanner_847 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
    struct Maybe_653  dref3214 = ( (  head1239 ) ( ( ( * (  sc3211 ) ) .f_s ) ) );
    if ( dref3214.tag == Maybe_653_Just_t ) {
        if ( ( (  condition3213 ) ( ( dref3214 .stuff .Maybe_653_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_873 ) ( (  sc3211 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3214.tag == Maybe_653_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1876 (    struct Scanner_847 *  sc3229 ,    bool (*  condition3231 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1877 ) ( (  sc3229 ) ,  (  condition3231 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion1879 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies1881 (    struct Scanner_847 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
    struct Maybe_653  dref3214 = ( (  head1239 ) ( ( ( * (  sc3211 ) ) .f_s ) ) );
    if ( dref3214.tag == Maybe_653_Just_t ) {
        if ( ( (  condition3213 ) ( ( dref3214 .stuff .Maybe_653_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_873 ) ( (  sc3211 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3214.tag == Maybe_653_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1880 (    struct Scanner_847 *  sc3229 ,    bool (*  condition3231 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1881 ) ( (  sc3229 ) ,  (  condition3231 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_binary1882 (    struct Char_65  c2398 ) {
    return ( (  eq276 ( ( (  c2398 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  eq448 ( (  c2398 ) , ( (  from_dash_charlike258 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) || (  eq448 ( (  c2398 ) , ( (  from_dash_charlike258 ) ( ( "1" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion1884 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion1886 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion1888 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion1890 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   recompute_dash_highlights_dash_at_dash_line1724 (   struct env119* env ,    struct TextBuf_99 *  self3872 ,    struct Line_12 *  line3874 ) {
    if ( ( ! ( ( * (  line3874 ) ) .f_invalidated ) ) ) {
        return ( Unit_8_Unit );
    }
    struct List_15 *  hls3875 = ( & ( ( * (  line3874 ) ) .f_highlights ) );
    ( (  trim1725 ) ( (  hls3875 ) ,  (  from_dash_integral0 ( 0 ) ) ) );
    struct StrView_27  line_dash_sv3876 = ( (  from_dash_bytes992 ) ( ( (  to_dash_slice377 ) ( ( ( * (  line3874 ) ) .f_line ) ) ) ) );
    struct Scanner_847  temp1726 = ( (  mk_dash_from_dash_str849 ) ( (  line_dash_sv3876 ) ) );
    struct Scanner_847 *  sc3877 = ( &temp1726 );
    while ( ( ! ( (  null1727 ) ( (  sc3877 ) ) ) ) ) {
        int32_t  from_dash_off3878 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
        struct Maybe_653  first_dash_char3879 = ( (  peek1730 ) ( (  sc3877 ) ) );
        if ( ( (  try_dash_char1731 ) ( (  sc3877 ) ,  ( (  from_dash_charlike258 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion120  temp1734 = ( (struct envunion120){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1735 , .env =  env->envinst35 } );
            ( temp1734.fun ( &temp1734.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = ( (  size_dash_i32233 ) ( ( (  num_dash_bytes1024 ) ( (  line_dash_sv3876 ) ) ) ) ) , .f_type = ( HighlightType_18_Comment ) } ) ) );
            break;
        } else {
            if ( ( (  try_dash_char1731 ) ( (  sc3877 ) ,  ( (  from_dash_charlike258 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) ) {
                while ( ( true ) ) {
                    ( (  skip_dash_while1765 ) ( (  sc3877 ) ,  (  lam1767 ) ) );
                    if ( (  eq1732 ( ( (  peek1730 ) ( (  sc3877 ) ) ) , ( ( Maybe_653_Just ) ( ( (  from_dash_charlike258 ) ( ( "\\" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                        ( (  drop_prime_873 ) ( (  sc3877 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        if ( (  eq1732 ( ( (  peek1730 ) ( (  sc3877 ) ) ) , ( ( Maybe_653_Just ) ( ( (  from_dash_charlike258 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                            ( (  drop_prime_873 ) ( (  sc3877 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        } else {
                        }
                    } else {
                        ( (  drop_prime_873 ) ( (  sc3877 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        break;
                    }
                }
                int32_t  cur_dash_off3882 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                struct envunion1769  temp1768 = ( (struct envunion1769){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1735 , .env =  env->envinst35 } );
                ( temp1768.fun ( &temp1768.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3882 ) , .f_type = ( HighlightType_18_String ) } ) ) );
            } else {
                if ( ( (  try_dash_char1731 ) ( (  sc3877 ) ,  ( (  from_dash_charlike258 ) ( ( "@" ) ,  ( 1 ) ) ) ) ) ) {
                    if ( ( (  char_dash_satisfies1770 ) ( (  sc3877 ) ,  (  is_dash_alpha1231 ) ) ) ) {
                        ( (  skip_dash_while1771 ) ( (  sc3877 ) ,  (  lam1773 ) ) );
                        int32_t  cur_dash_off3885 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                        struct envunion1775  temp1774 = ( (struct envunion1775){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1735 , .env =  env->envinst35 } );
                        ( temp1774.fun ( &temp1774.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3885 ) , .f_type = ( HighlightType_18_Ident3 ) } ) ) );
                    } else {
                    }
                } else {
                    struct env1778 envinst1778 = {
                        .sc3877 =  sc3877 ,
                    };
                    if ( ( (  any1776 ) ( ( (  from_dash_listlike1796 ) ( ( (struct Array_1777) { ._arr = { ( (  from_dash_string257 ) ( ( "==" ) ,  ( 2 ) ) ) , ( (  from_dash_string257 ) ( ( "/=" ) ,  ( 2 ) ) ) } } ) ) ) ,  ( (struct envunion1779){ .fun = (  bool  (*) (  struct env1778*  ,    struct StrView_27  ) )lam1797 , .env =  envinst1778 } ) ) ) ) {
                        int32_t  cur_dash_off3888 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                        enum HighlightType_18  type3889 = ( HighlightType_18_Special2 );
                        struct envunion1803  temp1802 = ( (struct envunion1803){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1735 , .env =  env->envinst35 } );
                        ( temp1802.fun ( &temp1802.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3888 ) , .f_type = (  type3889 ) } ) ) );
                    } else {
                        struct env1806 envinst1806 = {
                            .sc3877 =  sc3877 ,
                        };
                        if ( ( (  any1804 ) ( ( (  from_dash_listlike1822 ) ( ( (struct Array_1805) { ._arr = { ( (  from_dash_string257 ) ( ( "<&" ) ,  ( 2 ) ) ) , ( ( (  from_dash_charlike1124 ) ( ( "=" ) ,  ( 1 ) ) ) ) , ( (  from_dash_charlike1124 ) ( ( "&" ) ,  ( 1 ) ) ) , ( (  from_dash_string257 ) ( ( "->" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike1124 ) ( ( ":" ) ,  ( 1 ) ) ) } } ) ) ) ,  ( (struct envunion1807){ .fun = (  bool  (*) (  struct env1806*  ,    struct StrView_27  ) )lam1823 , .env =  envinst1806 } ) ) ) ) {
                            int32_t  cur_dash_off3892 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                            enum HighlightType_18  type3893 = ( HighlightType_18_Special1 );
                            struct envunion1825  temp1824 = ( (struct envunion1825){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1735 , .env =  env->envinst35 } );
                            ( temp1824.fun ( &temp1824.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3892 ) , .f_type = (  type3893 ) } ) ) );
                        } else {
                            if ( ( (  char_dash_satisfies1770 ) ( (  sc3877 ) ,  (  is_dash_alpha1231 ) ) ) ) {
                                ( (  skip_dash_while1826 ) ( (  sc3877 ) ,  (  lam1828 ) ) );
                                int32_t  cur_dash_off3896 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                bool  first_dash_char_dash_uppercase3897 = ( (  maybe1829 ) ( (  first_dash_char3879 ) ,  (  is_dash_upper1830 ) ,  ( false ) ) );
                                enum HighlightType_18  type3898 = ( (  first_dash_char_dash_uppercase3897 ) ? ( HighlightType_18_Ident2 ) : ( HighlightType_18_Ident1 ) );
                                struct StrView_27  ident3899 = ( ( (  byte_dash_substr430 ) ( (  line_dash_sv3876 ) ,  ( (  i32_dash_size299 ) ( (  from_dash_off3878 ) ) ) ,  ( (  i32_dash_size299 ) ( (  cur_dash_off3896 ) ) ) ) ) );
                                struct Array_1805  keywords13900 = ( (  from_dash_listlike1822 ) ( ( (struct Array_1805) { ._arr = { ( (  from_dash_string257 ) ( ( "fn" ) ,  ( 2 ) ) ) , ( (  from_dash_string257 ) ( ( "class" ) ,  ( 5 ) ) ) , ( (  from_dash_string257 ) ( ( "inst" ) ,  ( 4 ) ) ) , ( (  from_dash_string257 ) ( ( "external" ) ,  ( 8 ) ) ) , ( (  from_dash_string257 ) ( ( "use" ) ,  ( 3 ) ) ) } } ) ) );
                                struct Array_1831  keywords23901 = ( (  from_dash_listlike1832 ) ( ( (struct Array_1831) { ._arr = { ( (  from_dash_string257 ) ( ( "if" ) ,  ( 2 ) ) ) , ( (  from_dash_string257 ) ( ( "elif" ) ,  ( 4 ) ) ) , ( (  from_dash_string257 ) ( ( "else" ) ,  ( 4 ) ) ) , ( (  from_dash_string257 ) ( ( "case" ) ,  ( 4 ) ) ) , ( (  from_dash_string257 ) ( ( "for" ) ,  ( 3 ) ) ) , ( (  from_dash_string257 ) ( ( "in" ) ,  ( 2 ) ) ) , ( (  from_dash_string257 ) ( ( "while" ) ,  ( 5 ) ) ) , ( (  from_dash_string257 ) ( ( "pass" ) ,  ( 4 ) ) ) , ( (  from_dash_string257 ) ( ( "break" ) ,  ( 5 ) ) ) , ( (  from_dash_string257 ) ( ( "continue" ) ,  ( 8 ) ) ) , ( (  from_dash_string257 ) ( ( "as" ) ,  ( 2 ) ) ) , ( (  from_dash_string257 ) ( ( "or" ) ,  ( 2 ) ) ) , ( (  from_dash_string257 ) ( ( "and" ) ,  ( 3 ) ) ) , ( (  from_dash_string257 ) ( ( "not" ) ,  ( 3 ) ) ) , ( (  from_dash_string257 ) ( ( "return" ) ,  ( 6 ) ) ) } } ) ) );
                                struct env1834 envinst1834 = {
                                    .ident3899 =  ident3899 ,
                                };
                                if ( ( (  any1833 ) ( (  keywords13900 ) ,  ( (struct envunion1835){ .fun = (  bool  (*) (  struct env1834*  ,    struct StrView_27  ) )lam1844 , .env =  envinst1834 } ) ) ) ) {
                                    type3898 = ( HighlightType_18_Keyword1 );
                                } else {
                                    struct env1846 envinst1846 = {
                                        .ident3899 =  ident3899 ,
                                    };
                                    if ( ( (  any1845 ) ( (  keywords23901 ) ,  ( (struct envunion1847){ .fun = (  bool  (*) (  struct env1846*  ,    struct StrView_27  ) )lam1862 , .env =  envinst1846 } ) ) ) ) {
                                        type3898 = ( HighlightType_18_Keyword2 );
                                    } else {
                                        if ( ( ( ! (  first_dash_char_dash_uppercase3897 ) ) && (  eq1732 ( ( (  peek1730 ) ( (  sc3877 ) ) ) , ( ( Maybe_653_Just ) ( ( (  from_dash_charlike258 ) ( ( "(" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
                                            type3898 = ( HighlightType_18_Ident4 );
                                        }
                                    }
                                }
                                struct envunion1864  temp1863 = ( (struct envunion1864){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1735 , .env =  env->envinst35 } );
                                ( temp1863.fun ( &temp1863.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3896 ) , .f_type = (  type3898 ) } ) ) );
                            } else {
                                struct Maybe_860  dref3906 = ( (  int1865 ) ( (  sc3877 ) ) );
                                if ( dref3906.tag == Maybe_860_Just_t ) {
                                    int32_t  cur_dash_off3908 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                    enum HighlightType_18  type3909 = ( HighlightType_18_Number );
                                    if ( (  eq952 ( ( dref3906 .stuff .Maybe_860_Just_s .field0 ) , (  from_dash_integral348 ( 0 ) ) ) ) ) {
                                        if ( ( (  try_dash_char1731 ) ( (  sc3877 ) ,  ( (  from_dash_charlike258 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  skip_dash_while1866 ) ( (  sc3877 ) ,  (  is_dash_hex1868 ) ) );
                                            int32_t  cur_dash_off3910 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                            struct envunion1870  temp1869 = ( (struct envunion1870){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1735 , .env =  env->envinst35 } );
                                            ( temp1869.fun ( &temp1869.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3910 ) , .f_type = (  type3909 ) } ) ) );
                                        } else {
                                            if ( ( (  try_dash_char1731 ) ( (  sc3877 ) ,  ( (  from_dash_charlike258 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                                ( (  skip_dash_while1871 ) ( (  sc3877 ) ,  (  is_dash_octal1873 ) ) );
                                                int32_t  cur_dash_off3911 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                                struct envunion1875  temp1874 = ( (struct envunion1875){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1735 , .env =  env->envinst35 } );
                                                ( temp1874.fun ( &temp1874.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3911 ) , .f_type = (  type3909 ) } ) ) );
                                                ( (  skip_dash_while1876 ) ( (  sc3877 ) ,  (  is_dash_digit866 ) ) );
                                                int32_t  invalid_dash_off3912 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                                if ( ( !  eq365 ( (  cur_dash_off3911 ) , (  invalid_dash_off3912 ) ) ) ) {
                                                    struct envunion1879  temp1878 = ( (struct envunion1879){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1735 , .env =  env->envinst35 } );
                                                    ( temp1878.fun ( &temp1878.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off3911 ) , .f_to = (  invalid_dash_off3912 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                                }
                                            } else {
                                                if ( ( (  try_dash_char1731 ) ( (  sc3877 ) ,  ( (  from_dash_charlike258 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  skip_dash_while1880 ) ( (  sc3877 ) ,  (  is_dash_binary1882 ) ) );
                                                    int32_t  cur_dash_off3913 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                                    struct envunion1884  temp1883 = ( (struct envunion1884){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1735 , .env =  env->envinst35 } );
                                                    ( temp1883.fun ( &temp1883.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3913 ) , .f_type = (  type3909 ) } ) ) );
                                                    ( (  skip_dash_while1876 ) ( (  sc3877 ) ,  (  is_dash_digit866 ) ) );
                                                    int32_t  invalid_dash_off3914 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                                    if ( ( !  eq365 ( (  cur_dash_off3913 ) , (  invalid_dash_off3914 ) ) ) ) {
                                                        struct envunion1886  temp1885 = ( (struct envunion1886){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1735 , .env =  env->envinst35 } );
                                                        ( temp1885.fun ( &temp1885.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off3913 ) , .f_to = (  invalid_dash_off3914 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                                    }
                                                } else {
                                                    struct envunion1888  temp1887 = ( (struct envunion1888){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1735 , .env =  env->envinst35 } );
                                                    ( temp1887.fun ( &temp1887.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3908 ) , .f_type = (  type3909 ) } ) ) );
                                                }
                                            }
                                        }
                                    } else {
                                        struct envunion1890  temp1889 = ( (struct envunion1890){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1735 , .env =  env->envinst35 } );
                                        ( temp1889.fun ( &temp1889.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3908 ) , .f_type = (  type3909 ) } ) ) );
                                    }
                                }
                                else {
                                    if ( dref3906.tag == Maybe_860_None_t ) {
                                        ( (  drop_prime_873 ) ( (  sc3877 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    (*  line3874 ) .f_invalidated = ( false );
    return ( Unit_8_Unit );
}

static  struct Slice_16   subslice1893 (    struct Slice_16  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    struct Highlight_17 *  begin_dash_ptr1788 = ( (  offset_dash_ptr1749 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp221 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp221 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_16) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub349 ( ( (  min376 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_16) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

static  struct SliceIter_1753   into_dash_iter1892 (    struct List_15  self2029 ) {
    return ( (  into_dash_iter1762 ) ( ( (  subslice1893 ) ( ( (  self2029 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2029 ) .f_count ) ) ) ) );
}

static  bool   between1895 (    int32_t  c1337 ,    int32_t  l1339 ,    int32_t  r1341 ) {
    int32_t  from1342 = ( (  min515 ) ( (  l1339 ) ,  (  r1341 ) ) );
    int32_t  to1343 = ( (  max1004 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp362 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp362 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  struct Maybe_125   highlight_dash_at1722 (   struct env121* env ,    struct TextBuf_99 *  self3917 ,    struct Pos_26  pos3919 ) {
    struct Line_12 *  line3920 = ( (  get_dash_ptr371 ) ( ( & ( ( * (  self3917 ) ) .f_buf ) ) ,  ( (  i32_dash_size299 ) ( ( (  pos3919 ) .f_line ) ) ) ) );
    struct envunion122  temp1723 = ( (struct envunion122){ .fun = (  enum Unit_8  (*) (  struct env119*  ,    struct TextBuf_99 *  ,    struct Line_12 *  ) )recompute_dash_highlights_dash_at_dash_line1724 , .env =  env->envinst119 } );
    ( temp1723.fun ( &temp1723.env ,  (  self3917 ) ,  (  line3920 ) ) );
    struct SliceIter_1753  temp1891 =  into_dash_iter1892 ( ( ( * (  line3920 ) ) .f_highlights ) );
    while (true) {
        struct Maybe_1758  __cond1894 =  next1759 (&temp1891);
        if (  __cond1894 .tag == 0 ) {
            break;
        }
        struct Highlight_17  hl3922 =  __cond1894 .stuff .Maybe_1758_Just_s .field0;
        if ( ( (  between1895 ) ( ( (  pos3919 ) .f_bi ) ,  ( (  hl3922 ) .f_from ) ,  (  op_dash_sub852 ( ( (  hl3922 ) .f_to ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
            return ( ( Maybe_125_Just ) ( ( (  hl3922 ) .f_type ) ) );
        }
        if ( (  cmp362 ( ( (  pos3919 ) .f_bi ) , ( (  hl3922 ) .f_from ) ) == 0 ) ) {
            return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
        }
    }
    return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
}

static  enum Unit_8   lam1896 (   struct env1718* env ,    enum HighlightType_18  type4034 ) {
    enum HighlightType_18  dref4035 = (  type4034 );
    switch (  dref4035 ) {
        case HighlightType_18_Comment : {
            (* env->screen4009 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Blue8 ) ) );
            break;
        }
        case HighlightType_18_Number : {
            (* env->screen4009 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Red8 ) ) );
            break;
        }
        case HighlightType_18_String : {
            (* env->screen4009 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Green8 ) ) );
            break;
        }
        case HighlightType_18_Ident1 : {
            (* env->screen4009 ) .f_default_dash_fg = ( (struct Color_191) { .tag = Color_191_ColorDefault_t } );
            break;
        }
        case HighlightType_18_Ident2 : {
            (* env->screen4009 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Magenta8 ) ) );
            break;
        }
        case HighlightType_18_Ident3 : {
            (* env->screen4009 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Yellow8 ) ) );
            break;
        }
        case HighlightType_18_Ident4 : {
            (* env->screen4009 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Blue8 ) ) );
            break;
        }
        case HighlightType_18_Keyword1 : {
            (* env->screen4009 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Yellow8 ) ) );
            break;
        }
        case HighlightType_18_Keyword2 : {
            (* env->screen4009 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Green8 ) ) );
            break;
        }
        case HighlightType_18_Special1 : {
            (* env->screen4009 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Yellow8 ) ) );
            break;
        }
        case HighlightType_18_Special2 : {
            (* env->screen4009 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Green8 ) ) );
            break;
        }
        default: {
            (* env->screen4009 ) .f_default_dash_bg = ( ( Color_191_Color8 ) ( ( Color8_192_Red8 ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render1660 (   struct env123* env ,    struct Screen_188 *  screen4009 ,    struct Pane_141 *  pane4011 ,    struct ScreenDims_195  sd4013 ) {
    bool  display_dash_line_dash_numbers4014 = ( true );
    ( (  update_dash_screen_dash_offset1661 ) ( (  pane4011 ) ,  (  sd4013 ) ) );
    struct ScreenCursorOffset_143  sc_dash_off4015 = ( ( * (  pane4011 ) ) .f_sc_dash_off );
    int32_t  max_dash_line_dash_num_dash_chars4016 = ( (  size_dash_i32233 ) ( ( (  count1664 ) ( ( (  chars1681 ) ( ( (  num_dash_lines1031 ) ( ( ( * (  pane4011 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin4017 = (  from_dash_integral56 ( 2 ) );
    int32_t  num_dash_back_dash_margin4018 = (  from_dash_integral56 ( 2 ) );
    int32_t  total_dash_margin4019 = ( (  display_dash_line_dash_numbers4014 ) ? (  op_dash_add311 ( (  op_dash_add311 ( (  max_dash_line_dash_num_dash_chars4016 ) , (  num_dash_front_dash_margin4017 ) ) ) , (  num_dash_back_dash_margin4018 ) ) ) : (  from_dash_integral56 ( 0 ) ) );
    struct RangeIter_729  temp1684 =  into_dash_iter731 ( ( (  to734 ) ( (  op_dash_add311 ( ( (  sc_dash_off4015 ) .f_screen_dash_top ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min515 ) ( ( (  num_dash_lines1031 ) ( ( ( * (  pane4011 ) ) .f_buf ) ) ) ,  (  op_dash_add311 ( ( (  sc_dash_off4015 ) .f_screen_dash_top ) , ( (  screen_dash_height1663 ) ( (  sd4013 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_309  __cond1685 =  next732 (&temp1684);
        if (  __cond1685 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num4021 =  __cond1685 .stuff .Maybe_309_Just_s .field0;
        int32_t  ybi4022 = (  op_dash_sub852 ( (  line_dash_num4021 ) , (  from_dash_integral56 ( 1 ) ) ) );
        int32_t  xbi4023 = ( (  vi_dash_bi1033 ) ( ( ( * (  pane4011 ) ) .f_buf ) ,  (  ybi4022 ) ,  ( (  sc_dash_off4015 ) .f_screen_dash_left ) ) );
        struct StrView_27  line_dash_content4024 = ( (  line991 ) ( ( ( * (  pane4011 ) ) .f_buf ) ,  (  ybi4022 ) ) );
        int32_t  ys4025 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  op_dash_add311 ( ( (  sd4013 ) .f_from_dash_sy ) , (  line_dash_num4021 ) ) ) , ( (  sc_dash_off4015 ) .f_screen_dash_top ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers4014 ) ) {
            ( (  draw_dash_str_dash_right1686 ) ( (  screen4009 ) ,  (  line_dash_num4021 ) ,  (  op_dash_add311 ( (  op_dash_sub852 ( (  op_dash_sub852 ( ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen4009 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd4013 ) .f_from_dash_sx ) ) ) , (  total_dash_margin4019 ) ) ) , (  num_dash_back_dash_margin4018 ) ) ) ,  (  ys4025 ) ) );
        }
        int32_t  vx4026 = (  op_dash_sub852 ( ( (  pos_dash_vi989 ) ( ( ( * (  pane4011 ) ) .f_buf ) ,  ( (  mk343 ) ( (  ybi4022 ) ,  (  xbi4023 ) ) ) ) ) , ( (  sc_dash_off4015 ) .f_screen_dash_left ) ) );
        ( (  assert1702 ) ( (  cmp362 ( (  vx4026 ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1703_StrConcat ) ( ( (  from_dash_string257 ) ( ( "vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx4026 ) ) ) ) );
        int32_t  left_dash_offset4027 = (  op_dash_add311 ( ( (  sd4013 ) .f_from_dash_sx ) , (  total_dash_margin4019 ) ) );
        struct AppendIter_1710  temp1709 =  into_dash_iter1711 ( ( (  append1712 ) ( ( (  chars655 ) ( ( (  byte_dash_substr_dash_from1427 ) ( (  line_dash_content4024 ) ,  ( (  i32_dash_size299 ) ( (  xbi4023 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike258 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_653  __cond1713 =  next1714 (&temp1709);
            if (  __cond1713 .tag == 0 ) {
                break;
            }
            struct Char_65  c4029 =  __cond1713 .stuff .Maybe_653_Just_s .field0;
            if ( (  cmp362 ( (  vx4026 ) , ( (  sd4013 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_26  curpos4030 = ( (  mk343 ) ( (  ybi4022 ) ,  (  xbi4023 ) ) );
            bool  is_dash_cursor4031 = (  eq364 ( (  curpos4030 ) , ( ( * (  pane4011 ) ) .f_cursor ) ) );
            bool  in_dash_selection4032 = ( (  is_dash_in_dash_selection1715 ) ( (  pane4011 ) ,  ( (  mk343 ) ( (  ybi4022 ) ,  (  xbi4023 ) ) ) ) );
            if ( (  is_dash_cursor4031 ) ) {
                (*  screen4009 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Black8 ) ) );
                (*  screen4009 ) .f_default_dash_bg = ( ( Color_191_Color8 ) ( ( Color8_192_White8 ) ) );
            } else {
                if ( (  in_dash_selection4032 ) ) {
                    (*  screen4009 ) .f_default_dash_bg = ( ( Color_191_Color8 ) ( ( Color8_192_Cyan8 ) ) );
                } else {
                    struct envunion124  temp1721 = ( (struct envunion124){ .fun = (  struct Maybe_125  (*) (  struct env121*  ,    struct TextBuf_99 *  ,    struct Pos_26  ) )highlight_dash_at1722 , .env =  env->envinst121 } );
                    struct env1718 envinst1718 = {
                        .screen4009 =  screen4009 ,
                    };
                    ( (  if_dash_just1717 ) ( ( temp1721.fun ( &temp1721.env ,  ( ( * (  pane4011 ) ) .f_buf ) ,  (  curpos4030 ) ) ) ,  ( (struct envunion1719){ .fun = (  enum Unit_8  (*) (  struct env1718*  ,    enum HighlightType_18  ) )lam1896 , .env =  envinst1718 } ) ) );
                }
            }
            struct Maybe_164  dref4036 = ( (  char_dash_replacement996 ) ( (  c4029 ) ) );
            if ( dref4036.tag == Maybe_164_None_t ) {
                if ( ( ! ( (  cmp362 ( (  vx4026 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  op_dash_sub852 ( (  op_dash_add311 ( (  vx4026 ) , ( (  char_dash_screen_dash_width994 ) ( (  c4029 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  sd4013 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1699 ) ( (  screen4009 ) ,  (  c4029 ) ,  (  op_dash_add311 ( (  left_dash_offset4027 ) , (  vx4026 ) ) ) ,  (  ys4025 ) ) );
                }
                vx4026 = (  op_dash_add311 ( (  vx4026 ) , ( (  char_dash_screen_dash_width994 ) ( (  c4029 ) ) ) ) );
            }
            else {
                if ( dref4036.tag == Maybe_164_Just_t ) {
                    struct StrViewIter_650  temp1897 =  into_dash_iter652 ( ( (  chars655 ) ( ( dref4036 .stuff .Maybe_164_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_653  __cond1898 =  next654 (&temp1897);
                        if (  __cond1898 .tag == 0 ) {
                            break;
                        }
                        struct Char_65  c4039 =  __cond1898 .stuff .Maybe_653_Just_s .field0;
                        if ( (  cmp362 ( (  vx4026 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1699 ) ( (  screen4009 ) ,  (  c4039 ) ,  (  op_dash_add311 ( (  left_dash_offset4027 ) , (  vx4026 ) ) ) ,  (  ys4025 ) ) );
                        }
                        vx4026 = (  op_dash_add311 ( (  vx4026 ) , ( (  char_dash_screen_dash_width994 ) ( (  c4039 ) ) ) ) );
                    }
                }
            }
            (*  screen4009 ) .f_default_dash_fg = ( (struct Color_191) { .tag = Color_191_ColorDefault_t } );
            (*  screen4009 ) .f_default_dash_bg = ( (struct Color_191) { .tag = Color_191_ColorDefault_t } );
            xbi4023 = (  op_dash_add311 ( (  xbi4023 ) , ( (  size_dash_i32233 ) ( ( (  c4029 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

struct env1900 {
    ;
    ;
    ;
    struct Screen_188 *  screen4408;
    ;
    int32_t *  curline4412;
    ;
    ;
};

struct env1901 {
    ;
    ;
    ;
    struct Screen_188 *  screen4408;
    ;
    int32_t *  curline4412;
    ;
    ;
};

struct env1902 {
    ;
    ;
    ;
    struct Screen_188 *  screen4408;
    ;
    int32_t *  curline4412;
    ;
    ;
};

struct env1903 {
    ;
    ;
    ;
    struct Screen_188 *  screen4408;
    ;
    int32_t *  curline4412;
    ;
    ;
};

struct env1904 {
    ;
    ;
    ;
    struct Screen_188 *  screen4408;
    ;
    int32_t *  curline4412;
    ;
    ;
};

struct env1905 {
    ;
    ;
    ;
    struct Screen_188 *  screen4408;
    ;
    int32_t *  curline4412;
    ;
    ;
};

struct env1906 {
    ;
    ;
    ;
    struct Screen_188 *  screen4408;
    ;
    int32_t *  curline4412;
    ;
    ;
};

struct env1907 {
    ;
    ;
    ;
    struct Screen_188 *  screen4408;
    ;
    int32_t *  curline4412;
    ;
    ;
};

struct env1908 {
    ;
    ;
    ;
    struct Screen_188 *  screen4408;
    ;
    int32_t *  curline4412;
    ;
    ;
};

struct StrConcat_1911 {
    struct StrView_27  field0;
    enum Mode_142  field1;
};

static struct StrConcat_1911 StrConcat_1911_StrConcat (  struct StrView_27  field0 ,  enum Mode_142  field1 ) {
    return ( struct StrConcat_1911 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1910 {
    enum Unit_8  (*fun) (  struct env1900*  ,    struct StrConcat_1911  );
    struct env1900 env;
};

struct StrConcatIter_1916 {
    struct StrViewIter_650  f_left;
    struct StrViewIter_650  f_right;
};

struct Map_1915 {
    struct StrConcatIter_1916  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1915 Map_1915_Map (  struct StrConcatIter_1916  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1915 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1915   into_dash_iter1918 (    struct Map_1915  self796 ) {
    return (  self796 );
}

static  struct Maybe_653   next1920 (    struct StrConcatIter_1916 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_309   next1919 (    struct Map_1915 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next1920 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_309_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1917 (    struct Map_1915  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1915  it1099 = ( (  into_dash_iter1918 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next1919 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1921 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1921);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1922;
    return (  temp1922 );
}

static  int32_t   lam1923 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add311 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1914 (    struct Map_1915  it1110 ) {
    return ( (  reduce1917 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam1923 ) ) );
}

static  struct StrConcatIter_1916   into_dash_iter1925 (    struct StrConcatIter_1916  self1497 ) {
    return (  self1497 );
}

static  struct Map_1915   map1924 (    struct StrConcatIter_1916  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_1916  it808 = ( (  into_dash_iter1925 ) ( (  iterable805 ) ) );
    return ( ( Map_1915_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrView_27   todo1929 (  ) {
    ( (  print1242 ) ( ( (  from_dash_string257 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( (  undefined563 ) ( ) );
}

static  struct StrViewIter_650   chars1928 (    enum Mode_142  self3932 ) {
    return ( (  chars655 ) ( ( {  enum Mode_142  dref3933 = (  self3932 ) ;  dref3933 == Mode_142_Normal ? ( (  from_dash_string257 ) ( ( "Normal" ) ,  ( 6 ) ) ) :  dref3933 == Mode_142_Insert ? ( (  from_dash_string257 ) ( ( "Insert" ) ,  ( 6 ) ) ) :  dref3933 == Mode_142_Select ? ( (  from_dash_string257 ) ( ( "Select" ) ,  ( 6 ) ) ) : ( (  todo1929 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1916   into_dash_iter1927 (    struct StrConcat_1911  dref1504 ) {
    return ( (struct StrConcatIter_1916) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1928 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1916   chars1926 (    struct StrConcat_1911  self1515 ) {
    return ( (  into_dash_iter1927 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str1930 (    struct Screen_188 *  screen3571 ,    struct StrConcat_1911  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_1916  temp1931 =  into_dash_iter1925 ( ( (  chars1926 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond1932 =  next1920 (&temp1931);
        if (  __cond1932 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond1932 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1913 (    struct Screen_188 *  screen3587 ,    struct StrConcat_1911  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum1914 ) ( ( (  map1924 ) ( ( (  chars1926 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1003 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str1930 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann1912 (   struct env1900* env ,    struct StrConcat_1911  s4415 ) {
    ( (  draw_dash_str_dash_right1913 ) ( ( env->screen4408 ) ,  (  s4415 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4412 ) ) ) );
    (* env->curline4412 ) = (  op_dash_add311 ( ( * ( env->curline4412 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_1937 {
    struct StrView_27  field0;
    struct Pos_26  field1;
};

static struct StrConcat_1937 StrConcat_1937_StrConcat (  struct StrView_27  field0 ,  struct Pos_26  field1 ) {
    return ( struct StrConcat_1937 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1936 {
    struct StrConcat_1937  field0;
    struct StrView_27  field1;
};

static struct StrConcat_1936 StrConcat_1936_StrConcat (  struct StrConcat_1937  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_1936 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1935 {
    struct StrConcat_1936  field0;
    enum CharType_1227  field1;
};

static struct StrConcat_1935 StrConcat_1935_StrConcat (  struct StrConcat_1936  field0 ,  enum CharType_1227  field1 ) {
    return ( struct StrConcat_1935 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1934 {
    enum Unit_8  (*fun) (  struct env1901*  ,    struct StrConcat_1935  );
    struct env1901 env;
};

struct StrConcatIter_1948 {
    struct AppendIter_913  f_left;
    struct IntStrIter_1665  f_right;
};

struct StrConcatIter_1947 {
    struct StrConcatIter_1948  f_left;
    struct StrViewIter_650  f_right;
};

struct StrConcatIter_1946 {
    struct StrConcatIter_1947  f_left;
    struct IntStrIter_1665  f_right;
};

struct StrConcatIter_1945 {
    struct StrConcatIter_1946  f_left;
    struct AppendIter_913  f_right;
};

struct StrConcatIter_1944 {
    struct StrViewIter_650  f_left;
    struct StrConcatIter_1945  f_right;
};

struct StrConcatIter_1943 {
    struct StrConcatIter_1944  f_left;
    struct StrViewIter_650  f_right;
};

struct StrConcatIter_1942 {
    struct StrConcatIter_1943  f_left;
    struct StrViewIter_650  f_right;
};

struct Map_1941 {
    struct StrConcatIter_1942  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1941 Map_1941_Map (  struct StrConcatIter_1942  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1941 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1941   into_dash_iter1950 (    struct Map_1941  self796 ) {
    return (  self796 );
}

static  struct Maybe_653   next1958 (    struct StrConcatIter_1948 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next1668 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next1957 (    struct StrConcatIter_1947 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next1958 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next1956 (    struct StrConcatIter_1946 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next1957 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next1668 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next1955 (    struct StrConcatIter_1945 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next1956 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next1954 (    struct StrConcatIter_1944 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next1955 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next1953 (    struct StrConcatIter_1943 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next1954 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next1952 (    struct StrConcatIter_1942 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next1953 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_309   next1951 (    struct Map_1941 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next1952 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_309_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1949 (    struct Map_1941  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1941  it1099 = ( (  into_dash_iter1950 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next1951 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1959 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1959);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1960;
    return (  temp1960 );
}

static  int32_t   lam1961 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add311 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1940 (    struct Map_1941  it1110 ) {
    return ( (  reduce1949 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam1961 ) ) );
}

static  struct StrConcatIter_1942   into_dash_iter1963 (    struct StrConcatIter_1942  self1497 ) {
    return (  self1497 );
}

static  struct Map_1941   map1962 (    struct StrConcatIter_1942  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_1942  it808 = ( (  into_dash_iter1963 ) ( (  iterable805 ) ) );
    return ( ( Map_1941_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1975 {
    struct Char_65  field0;
    int32_t  field1;
};

static struct StrConcat_1975 StrConcat_1975_StrConcat (  struct Char_65  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1975 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1974 {
    struct StrConcat_1975  field0;
    struct StrView_27  field1;
};

static struct StrConcat_1974 StrConcat_1974_StrConcat (  struct StrConcat_1975  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_1974 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1973 {
    struct StrConcat_1974  field0;
    int32_t  field1;
};

static struct StrConcat_1973 StrConcat_1973_StrConcat (  struct StrConcat_1974  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1973 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1972 {
    struct StrConcat_1973  field0;
    struct Char_65  field1;
};

static struct StrConcat_1972 StrConcat_1972_StrConcat (  struct StrConcat_1973  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1972 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_1948   into_dash_iter1982 (    struct StrConcat_1975  dref1504 ) {
    return ( (struct StrConcatIter_1948) { .f_left = ( (  chars953 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1681 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1948   chars1981 (    struct StrConcat_1975  self1515 ) {
    return ( (  into_dash_iter1982 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_1947   into_dash_iter1980 (    struct StrConcat_1974  dref1504 ) {
    return ( (struct StrConcatIter_1947) { .f_left = ( (  chars1981 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars655 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1947   chars1979 (    struct StrConcat_1974  self1515 ) {
    return ( (  into_dash_iter1980 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_1946   into_dash_iter1978 (    struct StrConcat_1973  dref1504 ) {
    return ( (struct StrConcatIter_1946) { .f_left = ( (  chars1979 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1681 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1946   chars1977 (    struct StrConcat_1973  self1515 ) {
    return ( (  into_dash_iter1978 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_1945   into_dash_iter1976 (    struct StrConcat_1972  dref1504 ) {
    return ( (struct StrConcatIter_1945) { .f_left = ( (  chars1977 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1945   chars1971 (    struct StrConcat_1972  self1515 ) {
    return ( (  into_dash_iter1976 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_1945   chars1970 (    struct Pos_26  self3628 ) {
    return ( (  chars1971 ) ( ( ( StrConcat_1972_StrConcat ) ( ( ( StrConcat_1973_StrConcat ) ( ( ( StrConcat_1974_StrConcat ) ( ( ( StrConcat_1975_StrConcat ) ( ( (  from_dash_charlike258 ) ( ( "(" ) ,  ( 1 ) ) ) ,  ( (  self3628 ) .f_line ) ) ) ,  ( (  from_dash_string257 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  self3628 ) .f_bi ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrConcatIter_1944   into_dash_iter1969 (    struct StrConcat_1937  dref1504 ) {
    return ( (struct StrConcatIter_1944) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1970 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1944   chars1968 (    struct StrConcat_1937  self1515 ) {
    return ( (  into_dash_iter1969 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_1943   into_dash_iter1967 (    struct StrConcat_1936  dref1504 ) {
    return ( (struct StrConcatIter_1943) { .f_left = ( (  chars1968 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars655 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1943   chars1966 (    struct StrConcat_1936  self1515 ) {
    return ( (  into_dash_iter1967 ) ( (  self1515 ) ) );
}

static  struct StrViewIter_650   chars1983 (    enum CharType_1227  self3650 ) {
    return ( (  chars655 ) ( ( {  enum CharType_1227  dref3651 = (  self3650 ) ;  dref3651 == CharType_1227_CharPunctuation ? ( (  from_dash_string257 ) ( ( "Punct" ) ,  ( 5 ) ) ) :  dref3651 == CharType_1227_CharWord ? ( (  from_dash_string257 ) ( ( "Word" ) ,  ( 4 ) ) ) :  dref3651 == CharType_1227_CharSpace ? ( (  from_dash_string257 ) ( ( "Space" ) ,  ( 5 ) ) ) : ( (  todo1929 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1942   into_dash_iter1965 (    struct StrConcat_1935  dref1504 ) {
    return ( (struct StrConcatIter_1942) { .f_left = ( (  chars1966 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1983 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1942   chars1964 (    struct StrConcat_1935  self1515 ) {
    return ( (  into_dash_iter1965 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str1984 (    struct Screen_188 *  screen3571 ,    struct StrConcat_1935  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_1942  temp1985 =  into_dash_iter1963 ( ( (  chars1964 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond1986 =  next1952 (&temp1985);
        if (  __cond1986 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond1986 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1939 (    struct Screen_188 *  screen3587 ,    struct StrConcat_1935  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum1940 ) ( ( (  map1962 ) ( ( (  chars1964 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1003 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str1984 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann1938 (   struct env1901* env ,    struct StrConcat_1935  s4415 ) {
    ( (  draw_dash_str_dash_right1939 ) ( ( env->screen4408 ) ,  (  s4415 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4412 ) ) ) );
    (* env->curline4412 ) = (  op_dash_add311 ( ( * ( env->curline4412 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_1989 {
    struct StrView_27  field0;
    struct Maybe_34  field1;
};

static struct StrConcat_1989 StrConcat_1989_StrConcat (  struct StrView_27  field0 ,  struct Maybe_34  field1 ) {
    return ( struct StrConcat_1989 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1988 {
    enum Unit_8  (*fun) (  struct env1902*  ,    struct StrConcat_1989  );
    struct env1902 env;
};

struct StrConcatIter_1996 {
    struct StrConcatIter_1944  f_left;
    struct AppendIter_913  f_right;
};

struct StrCaseIter_1995 {
    enum {
        StrCaseIter_1995_StrCaseIter1_t,
        StrCaseIter_1995_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_650  field0;
        } StrCaseIter_1995_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1996  field0;
        } StrCaseIter_1995_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1995 StrCaseIter_1995_StrCaseIter1 (  struct StrViewIter_650  field0 ) {
    return ( struct StrCaseIter_1995 ) { .tag = StrCaseIter_1995_StrCaseIter1_t, .stuff = { .StrCaseIter_1995_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1995 StrCaseIter_1995_StrCaseIter2 (  struct StrConcatIter_1996  field0 ) {
    return ( struct StrCaseIter_1995 ) { .tag = StrCaseIter_1995_StrCaseIter2_t, .stuff = { .StrCaseIter_1995_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1994 {
    struct StrViewIter_650  f_left;
    struct StrCaseIter_1995  f_right;
};

struct Map_1993 {
    struct StrConcatIter_1994  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1993 Map_1993_Map (  struct StrConcatIter_1994  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1993 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1993   into_dash_iter1998 (    struct Map_1993  self796 ) {
    return (  self796 );
}

static  struct Maybe_653   next2002 (    struct StrConcatIter_1996 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next1954 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2001 (    struct StrCaseIter_1995 *  self1522 ) {
    struct StrCaseIter_1995 *  dref1523 = (  self1522 );
    if ( (* dref1523 ).tag == StrCaseIter_1995_StrCaseIter1_t ) {
        return ( (  next654 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_1995_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1523 ).tag == StrCaseIter_1995_StrCaseIter2_t ) {
            return ( (  next2002 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_1995_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_653   next2000 (    struct StrConcatIter_1994 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next2001 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_309   next1999 (    struct Map_1993 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next2000 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_309_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1997 (    struct Map_1993  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1993  it1099 = ( (  into_dash_iter1998 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next1999 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2003 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2003);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp2004;
    return (  temp2004 );
}

static  int32_t   lam2005 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add311 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1992 (    struct Map_1993  it1110 ) {
    return ( (  reduce1997 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2005 ) ) );
}

static  struct StrConcatIter_1994   into_dash_iter2007 (    struct StrConcatIter_1994  self1497 ) {
    return (  self1497 );
}

static  struct Map_1993   map2006 (    struct StrConcatIter_1994  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_1994  it808 = ( (  into_dash_iter2007 ) ( (  iterable805 ) ) );
    return ( ( Map_1993_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_2012 {
    struct StrConcat_1937  field0;
    struct Char_65  field1;
};

static struct StrConcat_2012 StrConcat_2012_StrConcat (  struct StrConcat_1937  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2012 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_2011 {
    enum {
        StrCase_2011_StrCase1_t,
        StrCase_2011_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_2011_StrCase1_s;
        struct {
            struct StrConcat_2012  field0;
        } StrCase_2011_StrCase2_s;
    } stuff;
};

static struct StrCase_2011 StrCase_2011_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_2011 ) { .tag = StrCase_2011_StrCase1_t, .stuff = { .StrCase_2011_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_2011 StrCase_2011_StrCase2 (  struct StrConcat_2012  field0 ) {
    return ( struct StrCase_2011 ) { .tag = StrCase_2011_StrCase2_t, .stuff = { .StrCase_2011_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1996   into_dash_iter2017 (    struct StrConcat_2012  dref1504 ) {
    return ( (struct StrConcatIter_1996) { .f_left = ( (  chars1968 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1996   chars2016 (    struct StrConcat_2012  self1515 ) {
    return ( (  into_dash_iter2017 ) ( (  self1515 ) ) );
}

static  struct StrCaseIter_1995   into_dash_iter2015 (    struct StrCase_2011  self1528 ) {
    struct StrCase_2011  dref1529 = (  self1528 );
    if ( dref1529.tag == StrCase_2011_StrCase1_t ) {
        return ( ( StrCaseIter_1995_StrCaseIter1 ) ( ( (  chars655 ) ( ( dref1529 .stuff .StrCase_2011_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1529.tag == StrCase_2011_StrCase2_t ) {
            return ( ( StrCaseIter_1995_StrCaseIter2 ) ( ( (  chars2016 ) ( ( dref1529 .stuff .StrCase_2011_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1995   chars2014 (    struct StrCase_2011  self1540 ) {
    return ( (  into_dash_iter2015 ) ( (  self1540 ) ) );
}

static  struct StrCaseIter_1995   chars2010 (    struct Maybe_34  self1554 ) {
    struct StrCase_2011  temp2013;
    struct StrCase_2011  c1555 = (  temp2013 );
    struct Maybe_34  dref1556 = (  self1554 );
    if ( dref1556.tag == Maybe_34_None_t ) {
        c1555 = ( ( StrCase_2011_StrCase1 ) ( ( (  from_dash_string257 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1556.tag == Maybe_34_Just_t ) {
            c1555 = ( ( StrCase_2011_StrCase2 ) ( ( ( StrConcat_2012_StrConcat ) ( ( ( StrConcat_1937_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1556 .stuff .Maybe_34_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars2014 ) ( (  c1555 ) ) );
}

static  struct StrConcatIter_1994   into_dash_iter2009 (    struct StrConcat_1989  dref1504 ) {
    return ( (struct StrConcatIter_1994) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2010 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1994   chars2008 (    struct StrConcat_1989  self1515 ) {
    return ( (  into_dash_iter2009 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str2018 (    struct Screen_188 *  screen3571 ,    struct StrConcat_1989  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_1994  temp2019 =  into_dash_iter2007 ( ( (  chars2008 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond2020 =  next2000 (&temp2019);
        if (  __cond2020 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2020 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1991 (    struct Screen_188 *  screen3587 ,    struct StrConcat_1989  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum1992 ) ( ( (  map2006 ) ( ( (  chars2008 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1003 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str2018 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann1990 (   struct env1902* env ,    struct StrConcat_1989  s4415 ) {
    ( (  draw_dash_str_dash_right1991 ) ( ( env->screen4408 ) ,  (  s4415 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4412 ) ) ) );
    (* env->curline4412 ) = (  op_dash_add311 ( ( * ( env->curline4412 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct Take_2023 {
    struct StrViewIter_650  field0;
    size_t  field1;
};

static struct Take_2023 Take_2023_Take (  struct StrViewIter_650  field0 ,  size_t  field1 ) {
    return ( struct Take_2023 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2022 {
    struct Take_2023  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2022 StrConcat_2022_StrConcat (  struct Take_2023  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2022 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_2021 {
    enum {
        Maybe_2021_None_t,
        Maybe_2021_Just_t,
    } tag;
    union {
        struct {
            struct StrConcat_2022  field0;
        } Maybe_2021_Just_s;
    } stuff;
};

static struct Maybe_2021 Maybe_2021_Just (  struct StrConcat_2022  field0 ) {
    return ( struct Maybe_2021 ) { .tag = Maybe_2021_Just_t, .stuff = { .Maybe_2021_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2021   fmap_dash_maybe2024 (    struct Maybe_164  x1275 ,    struct StrConcat_2022 (*  fun1277 )(    struct StrView_27  ) ) {
    struct Maybe_164  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_164_None_t ) {
        return ( (struct Maybe_2021) { .tag = Maybe_2021_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_164_Just_t ) {
            return ( ( Maybe_2021_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Take_2023   take2026 (    struct StrView_27  it867 ,    size_t  i869 ) {
    return ( ( Take_2023_Take ) ( ( (  into_dash_iter656 ) ( (  it867 ) ) ) ,  (  i869 ) ) );
}

struct Drop_2028 {
    struct StrViewIter_650  field0;
    size_t  field1;
};

static struct Drop_2028 Drop_2028_Drop (  struct StrViewIter_650  field0 ,  size_t  field1 ) {
    return ( struct Drop_2028 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Maybe_653   next2030 (    struct Drop_2028 *  dref847 ) {
    while ( (  cmp221 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next654 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub349 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next654 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Drop_2028   into_dash_iter2032 (    struct Drop_2028  self845 ) {
    return (  self845 );
}

static  struct Maybe_653   head2029 (    struct Drop_2028  it1142 ) {
    struct Drop_2028  temp2031 = ( (  into_dash_iter2032 ) ( (  it1142 ) ) );
    return ( (  next2030 ) ( ( &temp2031 ) ) );
}

static  bool   null2027 (    struct Drop_2028  it1151 ) {
    struct Maybe_653  dref1152 = ( (  head2029 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_653_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Drop_2028   drop2033 (    struct StrView_27  iterable852 ,    size_t  i854 ) {
    struct StrViewIter_650  it855 = ( (  into_dash_iter656 ) ( (  iterable852 ) ) );
    return ( ( Drop_2028_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct StrConcat_2022   lam2025 (    struct StrView_27  s4418 ) {
    return ( ( StrConcat_2022_StrConcat ) ( ( (  take2026 ) ( (  s4418 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ,  ( ( (  null2027 ) ( ( (  drop2033 ) ( (  s4418 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ) ) ? ( (  from_dash_string257 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_string257 ) ( ( "..." ) ,  ( 3 ) ) ) ) ) );
}

struct StrConcat_2036 {
    struct StrView_27  field0;
    struct Maybe_2021  field1;
};

static struct StrConcat_2036 StrConcat_2036_StrConcat (  struct StrView_27  field0 ,  struct Maybe_2021  field1 ) {
    return ( struct StrConcat_2036 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2035 {
    enum Unit_8  (*fun) (  struct env1903*  ,    struct StrConcat_2036  );
    struct env1903 env;
};

struct StrConcatIter_2045 {
    struct Take_2023  f_left;
    struct StrViewIter_650  f_right;
};

struct StrConcatIter_2044 {
    struct StrViewIter_650  f_left;
    struct StrConcatIter_2045  f_right;
};

struct StrConcatIter_2043 {
    struct StrConcatIter_2044  f_left;
    struct AppendIter_913  f_right;
};

struct StrCaseIter_2042 {
    enum {
        StrCaseIter_2042_StrCaseIter1_t,
        StrCaseIter_2042_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_650  field0;
        } StrCaseIter_2042_StrCaseIter1_s;
        struct {
            struct StrConcatIter_2043  field0;
        } StrCaseIter_2042_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_2042 StrCaseIter_2042_StrCaseIter1 (  struct StrViewIter_650  field0 ) {
    return ( struct StrCaseIter_2042 ) { .tag = StrCaseIter_2042_StrCaseIter1_t, .stuff = { .StrCaseIter_2042_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_2042 StrCaseIter_2042_StrCaseIter2 (  struct StrConcatIter_2043  field0 ) {
    return ( struct StrCaseIter_2042 ) { .tag = StrCaseIter_2042_StrCaseIter2_t, .stuff = { .StrCaseIter_2042_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_2041 {
    struct StrViewIter_650  f_left;
    struct StrCaseIter_2042  f_right;
};

struct Map_2040 {
    struct StrConcatIter_2041  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2040 Map_2040_Map (  struct StrConcatIter_2041  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2040 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2040   into_dash_iter2047 (    struct Map_2040  self796 ) {
    return (  self796 );
}

static  struct Maybe_653   next2054 (    struct Take_2023 *  dref861 ) {
    if ( (  cmp221 ( ( (* dref861 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_653  x864 = ( (  next654 ) ( ( & ( (* dref861 ) .field0 ) ) ) );
        (* dref861 ) .field1 = (  op_dash_sub349 ( ( (* dref861 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
        return (  x864 );
    } else {
        return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
    }
}

static  struct Maybe_653   next2053 (    struct StrConcatIter_2045 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2054 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2052 (    struct StrConcatIter_2044 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next2053 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2051 (    struct StrConcatIter_2043 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2052 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2050 (    struct StrCaseIter_2042 *  self1522 ) {
    struct StrCaseIter_2042 *  dref1523 = (  self1522 );
    if ( (* dref1523 ).tag == StrCaseIter_2042_StrCaseIter1_t ) {
        return ( (  next654 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_2042_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1523 ).tag == StrCaseIter_2042_StrCaseIter2_t ) {
            return ( (  next2051 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_2042_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_653   next2049 (    struct StrConcatIter_2041 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next2050 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_309   next2048 (    struct Map_2040 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next2049 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_309_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2046 (    struct Map_2040  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_2040  it1099 = ( (  into_dash_iter2047 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next2048 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2055 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2055);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp2056;
    return (  temp2056 );
}

static  int32_t   lam2057 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add311 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum2039 (    struct Map_2040  it1110 ) {
    return ( (  reduce2046 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2057 ) ) );
}

static  struct StrConcatIter_2041   into_dash_iter2059 (    struct StrConcatIter_2041  self1497 ) {
    return (  self1497 );
}

static  struct Map_2040   map2058 (    struct StrConcatIter_2041  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_2041  it808 = ( (  into_dash_iter2059 ) ( (  iterable805 ) ) );
    return ( ( Map_2040_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_2065 {
    struct StrView_27  field0;
    struct StrConcat_2022  field1;
};

static struct StrConcat_2065 StrConcat_2065_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_2022  field1 ) {
    return ( struct StrConcat_2065 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2064 {
    struct StrConcat_2065  field0;
    struct Char_65  field1;
};

static struct StrConcat_2064 StrConcat_2064_StrConcat (  struct StrConcat_2065  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2064 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_2063 {
    enum {
        StrCase_2063_StrCase1_t,
        StrCase_2063_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_2063_StrCase1_s;
        struct {
            struct StrConcat_2064  field0;
        } StrCase_2063_StrCase2_s;
    } stuff;
};

static struct StrCase_2063 StrCase_2063_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_2063 ) { .tag = StrCase_2063_StrCase1_t, .stuff = { .StrCase_2063_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_2063 StrCase_2063_StrCase2 (  struct StrConcat_2064  field0 ) {
    return ( struct StrCase_2063 ) { .tag = StrCase_2063_StrCase2_t, .stuff = { .StrCase_2063_StrCase2_s = { .field0 = field0 } } };
};

static  struct Take_2023   chars2075 (    struct Take_2023  self1645 ) {
    return (  self1645 );
}

static  struct StrConcatIter_2045   into_dash_iter2074 (    struct StrConcat_2022  dref1504 ) {
    return ( (struct StrConcatIter_2045) { .f_left = ( (  chars2075 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars655 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2045   chars2073 (    struct StrConcat_2022  self1515 ) {
    return ( (  into_dash_iter2074 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2044   into_dash_iter2072 (    struct StrConcat_2065  dref1504 ) {
    return ( (struct StrConcatIter_2044) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2073 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2044   chars2071 (    struct StrConcat_2065  self1515 ) {
    return ( (  into_dash_iter2072 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2043   into_dash_iter2070 (    struct StrConcat_2064  dref1504 ) {
    return ( (struct StrConcatIter_2043) { .f_left = ( (  chars2071 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2043   chars2069 (    struct StrConcat_2064  self1515 ) {
    return ( (  into_dash_iter2070 ) ( (  self1515 ) ) );
}

static  struct StrCaseIter_2042   into_dash_iter2068 (    struct StrCase_2063  self1528 ) {
    struct StrCase_2063  dref1529 = (  self1528 );
    if ( dref1529.tag == StrCase_2063_StrCase1_t ) {
        return ( ( StrCaseIter_2042_StrCaseIter1 ) ( ( (  chars655 ) ( ( dref1529 .stuff .StrCase_2063_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1529.tag == StrCase_2063_StrCase2_t ) {
            return ( ( StrCaseIter_2042_StrCaseIter2 ) ( ( (  chars2069 ) ( ( dref1529 .stuff .StrCase_2063_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_2042   chars2067 (    struct StrCase_2063  self1540 ) {
    return ( (  into_dash_iter2068 ) ( (  self1540 ) ) );
}

static  struct StrCaseIter_2042   chars2062 (    struct Maybe_2021  self1554 ) {
    struct StrCase_2063  temp2066;
    struct StrCase_2063  c1555 = (  temp2066 );
    struct Maybe_2021  dref1556 = (  self1554 );
    if ( dref1556.tag == Maybe_2021_None_t ) {
        c1555 = ( ( StrCase_2063_StrCase1 ) ( ( (  from_dash_string257 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1556.tag == Maybe_2021_Just_t ) {
            c1555 = ( ( StrCase_2063_StrCase2 ) ( ( ( StrConcat_2064_StrConcat ) ( ( ( StrConcat_2065_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1556 .stuff .Maybe_2021_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars2067 ) ( (  c1555 ) ) );
}

static  struct StrConcatIter_2041   into_dash_iter2061 (    struct StrConcat_2036  dref1504 ) {
    return ( (struct StrConcatIter_2041) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2062 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2041   chars2060 (    struct StrConcat_2036  self1515 ) {
    return ( (  into_dash_iter2061 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str2076 (    struct Screen_188 *  screen3571 ,    struct StrConcat_2036  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2041  temp2077 =  into_dash_iter2059 ( ( (  chars2060 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond2078 =  next2049 (&temp2077);
        if (  __cond2078 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2078 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2038 (    struct Screen_188 *  screen3587 ,    struct StrConcat_2036  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum2039 ) ( ( (  map2058 ) ( ( (  chars2060 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1003 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str2076 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann2037 (   struct env1903* env ,    struct StrConcat_2036  s4415 ) {
    ( (  draw_dash_str_dash_right2038 ) ( ( env->screen4408 ) ,  (  s4415 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4412 ) ) ) );
    (* env->curline4412 ) = (  op_dash_add311 ( ( * ( env->curline4412 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_2021   fmap_dash_maybe2079 (    struct Maybe_164  x1275 ,    struct StrConcat_2022 (*  fun1277 )(    struct StrView_27  ) ) {
    struct Maybe_164  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_164_None_t ) {
        return ( (struct Maybe_2021) { .tag = Maybe_2021_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_164_Just_t ) {
            return ( ( Maybe_2021_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrConcat_2022   lam2080 (    struct StrView_27  s4421 ) {
    return ( ( StrConcat_2022_StrConcat ) ( ( (  take2026 ) ( (  s4421 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ,  ( ( (  null2027 ) ( ( (  drop2033 ) ( (  s4421 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ) ) ? ( (  from_dash_string257 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_string257 ) ( ( "..." ) ,  ( 3 ) ) ) ) ) );
}

struct envunion2082 {
    enum Unit_8  (*fun) (  struct env1903*  ,    struct StrConcat_2036  );
    struct env1903 env;
};

struct StrConcat_2085 {
    struct StrView_27  field0;
    struct EditorMode_165  field1;
};

static struct StrConcat_2085 StrConcat_2085_StrConcat (  struct StrView_27  field0 ,  struct EditorMode_165  field1 ) {
    return ( struct StrConcat_2085 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2084 {
    enum Unit_8  (*fun) (  struct env1904*  ,    struct StrConcat_2085  );
    struct env1904 env;
};

struct StrConcatIter_2093 {
    struct StrConcatIter_1996  f_left;
    struct StrViewIter_650  f_right;
};

struct StrConcatIter_2092 {
    struct StrConcatIter_2093  f_left;
    struct AppendIter_913  f_right;
};

struct StrCaseIter_2091 {
    enum {
        StrCaseIter_2091_StrCaseIter1_t,
        StrCaseIter_2091_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_650  field0;
        } StrCaseIter_2091_StrCaseIter1_s;
        struct {
            struct StrConcatIter_2092  field0;
        } StrCaseIter_2091_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_2091 StrCaseIter_2091_StrCaseIter1 (  struct StrViewIter_650  field0 ) {
    return ( struct StrCaseIter_2091 ) { .tag = StrCaseIter_2091_StrCaseIter1_t, .stuff = { .StrCaseIter_2091_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_2091 StrCaseIter_2091_StrCaseIter2 (  struct StrConcatIter_2092  field0 ) {
    return ( struct StrCaseIter_2091 ) { .tag = StrCaseIter_2091_StrCaseIter2_t, .stuff = { .StrCaseIter_2091_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_2090 {
    struct StrViewIter_650  f_left;
    struct StrCaseIter_2091  f_right;
};

struct Map_2089 {
    struct StrConcatIter_2090  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2089 Map_2089_Map (  struct StrConcatIter_2090  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2089 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2089   into_dash_iter2095 (    struct Map_2089  self796 ) {
    return (  self796 );
}

static  struct Maybe_653   next2100 (    struct StrConcatIter_2093 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2002 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2099 (    struct StrConcatIter_2092 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2100 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2098 (    struct StrCaseIter_2091 *  self1522 ) {
    struct StrCaseIter_2091 *  dref1523 = (  self1522 );
    if ( (* dref1523 ).tag == StrCaseIter_2091_StrCaseIter1_t ) {
        return ( (  next654 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_2091_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1523 ).tag == StrCaseIter_2091_StrCaseIter2_t ) {
            return ( (  next2099 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_2091_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_653   next2097 (    struct StrConcatIter_2090 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next2098 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_309   next2096 (    struct Map_2089 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next2097 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_309_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2094 (    struct Map_2089  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_2089  it1099 = ( (  into_dash_iter2095 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next2096 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2101 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2101);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp2102;
    return (  temp2102 );
}

static  int32_t   lam2103 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add311 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum2088 (    struct Map_2089  it1110 ) {
    return ( (  reduce2094 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2103 ) ) );
}

static  struct StrConcatIter_2090   into_dash_iter2105 (    struct StrConcatIter_2090  self1497 ) {
    return (  self1497 );
}

static  struct Map_2089   map2104 (    struct StrConcatIter_2090  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_2090  it808 = ( (  into_dash_iter2105 ) ( (  iterable805 ) ) );
    return ( ( Map_2089_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_2111 {
    struct StrConcat_2012  field0;
    struct StrBuilder_62  field1;
};

static struct StrConcat_2111 StrConcat_2111_StrConcat (  struct StrConcat_2012  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct StrConcat_2111 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2110 {
    struct StrConcat_2111  field0;
    struct Char_65  field1;
};

static struct StrConcat_2110 StrConcat_2110_StrConcat (  struct StrConcat_2111  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2110 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_2109 {
    enum {
        StrCase_2109_StrCase1_t,
        StrCase_2109_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_2109_StrCase1_s;
        struct {
            struct StrConcat_2110  field0;
        } StrCase_2109_StrCase2_s;
    } stuff;
};

static struct StrCase_2109 StrCase_2109_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_2109 ) { .tag = StrCase_2109_StrCase1_t, .stuff = { .StrCase_2109_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_2109 StrCase_2109_StrCase2 (  struct StrConcat_2110  field0 ) {
    return ( struct StrCase_2109 ) { .tag = StrCase_2109_StrCase2_t, .stuff = { .StrCase_2109_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrCaseIter_2091   undefined2114 (  ) {
    struct StrCaseIter_2091  temp2115;
    return (  temp2115 );
}

static  struct StrCaseIter_2091   todo2113 (  ) {
    ( (  print1242 ) ( ( (  from_dash_string257 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( (  undefined2114 ) ( ) );
}

static  struct StrConcatIter_2093   into_dash_iter2121 (    struct StrConcat_2111  dref1504 ) {
    return ( (struct StrConcatIter_2093) { .f_left = ( (  chars2016 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1617 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2093   chars2120 (    struct StrConcat_2111  self1515 ) {
    return ( (  into_dash_iter2121 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2092   into_dash_iter2119 (    struct StrConcat_2110  dref1504 ) {
    return ( (struct StrConcatIter_2092) { .f_left = ( (  chars2120 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2092   chars2118 (    struct StrConcat_2110  self1515 ) {
    return ( (  into_dash_iter2119 ) ( (  self1515 ) ) );
}

static  struct StrCaseIter_2091   into_dash_iter2117 (    struct StrCase_2109  self1528 ) {
    struct StrCase_2109  dref1529 = (  self1528 );
    if ( dref1529.tag == StrCase_2109_StrCase1_t ) {
        return ( ( StrCaseIter_2091_StrCaseIter1 ) ( ( (  chars655 ) ( ( dref1529 .stuff .StrCase_2109_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1529.tag == StrCase_2109_StrCase2_t ) {
            return ( ( StrCaseIter_2091_StrCaseIter2 ) ( ( (  chars2118 ) ( ( dref1529 .stuff .StrCase_2109_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_2091   chars2116 (    struct StrCase_2109  self1540 ) {
    return ( (  into_dash_iter2117 ) ( (  self1540 ) ) );
}

static  struct StrCaseIter_2091   chars2108 (    struct EditorMode_165  self4292 ) {
    struct StrCase_2109  temp2112;
    struct StrCase_2109  c4293 = (  temp2112 );
    struct EditorMode_165  dref4294 = (  self4292 );
    if ( dref4294.tag == EditorMode_165_Normal_t ) {
        c4293 = ( ( StrCase_2109_StrCase1 ) ( ( (  from_dash_string257 ) ( ( "Normal" ) ,  ( 6 ) ) ) ) );
    }
    else {
        if ( dref4294.tag == EditorMode_165_Cmd_t ) {
            c4293 = ( ( StrCase_2109_StrCase2 ) ( ( ( StrConcat_2110_StrConcat ) ( ( ( StrConcat_2111_StrConcat ) ( ( ( StrConcat_2012_StrConcat ) ( ( ( StrConcat_1937_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Cmd(" ) ,  ( 4 ) ) ) ,  ( dref4294 .stuff .EditorMode_165_Cmd_s .field0 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "|" ) ,  ( 1 ) ) ) ) ) ,  ( dref4294 .stuff .EditorMode_165_Cmd_s .field1 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
        else {
            if ( dref4294.tag == EditorMode_165_Search_t ) {
                c4293 = ( ( StrCase_2109_StrCase2 ) ( ( ( StrConcat_2110_StrConcat ) ( ( ( StrConcat_2111_StrConcat ) ( ( ( StrConcat_2012_StrConcat ) ( ( ( StrConcat_1937_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Search(" ) ,  ( 7 ) ) ) ,  ( dref4294 .stuff .EditorMode_165_Search_s .field0 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "|" ) ,  ( 1 ) ) ) ) ) ,  ( dref4294 .stuff .EditorMode_165_Search_s .field1 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
            }
            else {
                if ( true ) {
                    return ( (  todo2113 ) ( ) );
                }
            }
        }
    }
    return ( (  chars2116 ) ( (  c4293 ) ) );
}

static  struct StrConcatIter_2090   into_dash_iter2107 (    struct StrConcat_2085  dref1504 ) {
    return ( (struct StrConcatIter_2090) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2108 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2090   chars2106 (    struct StrConcat_2085  self1515 ) {
    return ( (  into_dash_iter2107 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str2122 (    struct Screen_188 *  screen3571 ,    struct StrConcat_2085  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2090  temp2123 =  into_dash_iter2105 ( ( (  chars2106 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond2124 =  next2097 (&temp2123);
        if (  __cond2124 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2124 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2087 (    struct Screen_188 *  screen3587 ,    struct StrConcat_2085  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum2088 ) ( ( (  map2104 ) ( ( (  chars2106 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1003 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str2122 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann2086 (   struct env1904* env ,    struct StrConcat_2085  s4415 ) {
    ( (  draw_dash_str_dash_right2087 ) ( ( env->screen4408 ) ,  (  s4415 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4412 ) ) ) );
    (* env->curline4412 ) = (  op_dash_add311 ( ( * ( env->curline4412 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2127 {
    struct StrView_27  field0;
    struct Maybe_164  field1;
};

static struct StrConcat_2127 StrConcat_2127_StrConcat (  struct StrView_27  field0 ,  struct Maybe_164  field1 ) {
    return ( struct StrConcat_2127 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2126 {
    enum Unit_8  (*fun) (  struct env1905*  ,    struct StrConcat_2127  );
    struct env1905 env;
};

struct StrConcatIter_2134 {
    struct StrConcatIter_1916  f_left;
    struct AppendIter_913  f_right;
};

struct StrCaseIter_2133 {
    enum {
        StrCaseIter_2133_StrCaseIter1_t,
        StrCaseIter_2133_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_650  field0;
        } StrCaseIter_2133_StrCaseIter1_s;
        struct {
            struct StrConcatIter_2134  field0;
        } StrCaseIter_2133_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_2133 StrCaseIter_2133_StrCaseIter1 (  struct StrViewIter_650  field0 ) {
    return ( struct StrCaseIter_2133 ) { .tag = StrCaseIter_2133_StrCaseIter1_t, .stuff = { .StrCaseIter_2133_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_2133 StrCaseIter_2133_StrCaseIter2 (  struct StrConcatIter_2134  field0 ) {
    return ( struct StrCaseIter_2133 ) { .tag = StrCaseIter_2133_StrCaseIter2_t, .stuff = { .StrCaseIter_2133_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_2132 {
    struct StrViewIter_650  f_left;
    struct StrCaseIter_2133  f_right;
};

struct Map_2131 {
    struct StrConcatIter_2132  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2131 Map_2131_Map (  struct StrConcatIter_2132  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2131 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2131   into_dash_iter2136 (    struct Map_2131  self796 ) {
    return (  self796 );
}

static  struct Maybe_653   next2140 (    struct StrConcatIter_2134 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next1920 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2139 (    struct StrCaseIter_2133 *  self1522 ) {
    struct StrCaseIter_2133 *  dref1523 = (  self1522 );
    if ( (* dref1523 ).tag == StrCaseIter_2133_StrCaseIter1_t ) {
        return ( (  next654 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_2133_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1523 ).tag == StrCaseIter_2133_StrCaseIter2_t ) {
            return ( (  next2140 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_2133_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_653   next2138 (    struct StrConcatIter_2132 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next2139 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_309   next2137 (    struct Map_2131 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next2138 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_309_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2135 (    struct Map_2131  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_2131  it1099 = ( (  into_dash_iter2136 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next2137 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2141 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2141);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp2142;
    return (  temp2142 );
}

static  int32_t   lam2143 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add311 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum2130 (    struct Map_2131  it1110 ) {
    return ( (  reduce2135 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2143 ) ) );
}

static  struct StrConcatIter_2132   into_dash_iter2145 (    struct StrConcatIter_2132  self1497 ) {
    return (  self1497 );
}

static  struct Map_2131   map2144 (    struct StrConcatIter_2132  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_2132  it808 = ( (  into_dash_iter2145 ) ( (  iterable805 ) ) );
    return ( ( Map_2131_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrCase_2149 {
    enum {
        StrCase_2149_StrCase1_t,
        StrCase_2149_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_2149_StrCase1_s;
        struct {
            struct StrConcat_526  field0;
        } StrCase_2149_StrCase2_s;
    } stuff;
};

static struct StrCase_2149 StrCase_2149_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_2149 ) { .tag = StrCase_2149_StrCase1_t, .stuff = { .StrCase_2149_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_2149 StrCase_2149_StrCase2 (  struct StrConcat_526  field0 ) {
    return ( struct StrCase_2149 ) { .tag = StrCase_2149_StrCase2_t, .stuff = { .StrCase_2149_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1916   into_dash_iter2156 (    struct StrConcat_527  dref1504 ) {
    return ( (struct StrConcatIter_1916) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars655 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1916   chars2155 (    struct StrConcat_527  self1515 ) {
    return ( (  into_dash_iter2156 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2134   into_dash_iter2154 (    struct StrConcat_526  dref1504 ) {
    return ( (struct StrConcatIter_2134) { .f_left = ( (  chars2155 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2134   chars2153 (    struct StrConcat_526  self1515 ) {
    return ( (  into_dash_iter2154 ) ( (  self1515 ) ) );
}

static  struct StrCaseIter_2133   into_dash_iter2152 (    struct StrCase_2149  self1528 ) {
    struct StrCase_2149  dref1529 = (  self1528 );
    if ( dref1529.tag == StrCase_2149_StrCase1_t ) {
        return ( ( StrCaseIter_2133_StrCaseIter1 ) ( ( (  chars655 ) ( ( dref1529 .stuff .StrCase_2149_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1529.tag == StrCase_2149_StrCase2_t ) {
            return ( ( StrCaseIter_2133_StrCaseIter2 ) ( ( (  chars2153 ) ( ( dref1529 .stuff .StrCase_2149_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_2133   chars2151 (    struct StrCase_2149  self1540 ) {
    return ( (  into_dash_iter2152 ) ( (  self1540 ) ) );
}

static  struct StrCaseIter_2133   chars2148 (    struct Maybe_164  self1554 ) {
    struct StrCase_2149  temp2150;
    struct StrCase_2149  c1555 = (  temp2150 );
    struct Maybe_164  dref1556 = (  self1554 );
    if ( dref1556.tag == Maybe_164_None_t ) {
        c1555 = ( ( StrCase_2149_StrCase1 ) ( ( (  from_dash_string257 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1556.tag == Maybe_164_Just_t ) {
            c1555 = ( ( StrCase_2149_StrCase2 ) ( ( ( StrConcat_526_StrConcat ) ( ( ( StrConcat_527_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1556 .stuff .Maybe_164_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars2151 ) ( (  c1555 ) ) );
}

static  struct StrConcatIter_2132   into_dash_iter2147 (    struct StrConcat_2127  dref1504 ) {
    return ( (struct StrConcatIter_2132) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2148 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2132   chars2146 (    struct StrConcat_2127  self1515 ) {
    return ( (  into_dash_iter2147 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str2157 (    struct Screen_188 *  screen3571 ,    struct StrConcat_2127  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2132  temp2158 =  into_dash_iter2145 ( ( (  chars2146 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond2159 =  next2138 (&temp2158);
        if (  __cond2159 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2159 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2129 (    struct Screen_188 *  screen3587 ,    struct StrConcat_2127  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum2130 ) ( ( (  map2144 ) ( ( (  chars2146 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1003 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str2157 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann2128 (   struct env1905* env ,    struct StrConcat_2127  s4415 ) {
    ( (  draw_dash_str_dash_right2129 ) ( ( env->screen4408 ) ,  (  s4415 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4412 ) ) ) );
    (* env->curline4412 ) = (  op_dash_add311 ( ( * ( env->curline4412 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2164 {
    struct StrConcat_1703  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2164 StrConcat_2164_StrConcat (  struct StrConcat_1703  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2164 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2163 {
    struct StrConcat_2164  field0;
    int32_t  field1;
};

static struct StrConcat_2163 StrConcat_2163_StrConcat (  struct StrConcat_2164  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_2163 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2162 {
    struct StrConcat_2163  field0;
    struct Char_65  field1;
};

static struct StrConcat_2162 StrConcat_2162_StrConcat (  struct StrConcat_2163  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2162 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2161 {
    enum Unit_8  (*fun) (  struct env1906*  ,    struct StrConcat_2162  );
    struct env1906 env;
};

struct StrConcatIter_2172 {
    struct StrViewIter_650  f_left;
    struct IntStrIter_1665  f_right;
};

struct StrConcatIter_2171 {
    struct StrConcatIter_2172  f_left;
    struct StrViewIter_650  f_right;
};

struct StrConcatIter_2170 {
    struct StrConcatIter_2171  f_left;
    struct IntStrIter_1665  f_right;
};

struct StrConcatIter_2169 {
    struct StrConcatIter_2170  f_left;
    struct AppendIter_913  f_right;
};

struct Map_2168 {
    struct StrConcatIter_2169  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2168 Map_2168_Map (  struct StrConcatIter_2169  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2168 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2168   into_dash_iter2174 (    struct Map_2168  self796 ) {
    return (  self796 );
}

static  struct Maybe_653   next2179 (    struct StrConcatIter_2172 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next1668 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2178 (    struct StrConcatIter_2171 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2179 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2177 (    struct StrConcatIter_2170 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2178 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next1668 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2176 (    struct StrConcatIter_2169 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2177 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_309   next2175 (    struct Map_2168 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next2176 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_309_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2173 (    struct Map_2168  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_2168  it1099 = ( (  into_dash_iter2174 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next2175 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2180 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2180);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp2181;
    return (  temp2181 );
}

static  int32_t   lam2182 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add311 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum2167 (    struct Map_2168  it1110 ) {
    return ( (  reduce2173 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2182 ) ) );
}

static  struct StrConcatIter_2169   into_dash_iter2184 (    struct StrConcatIter_2169  self1497 ) {
    return (  self1497 );
}

static  struct Map_2168   map2183 (    struct StrConcatIter_2169  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_2169  it808 = ( (  into_dash_iter2184 ) ( (  iterable805 ) ) );
    return ( ( Map_2168_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_2172   into_dash_iter2192 (    struct StrConcat_1703  dref1504 ) {
    return ( (struct StrConcatIter_2172) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1681 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2172   chars2191 (    struct StrConcat_1703  self1515 ) {
    return ( (  into_dash_iter2192 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2171   into_dash_iter2190 (    struct StrConcat_2164  dref1504 ) {
    return ( (struct StrConcatIter_2171) { .f_left = ( (  chars2191 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars655 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2171   chars2189 (    struct StrConcat_2164  self1515 ) {
    return ( (  into_dash_iter2190 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2170   into_dash_iter2188 (    struct StrConcat_2163  dref1504 ) {
    return ( (struct StrConcatIter_2170) { .f_left = ( (  chars2189 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1681 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2170   chars2187 (    struct StrConcat_2163  self1515 ) {
    return ( (  into_dash_iter2188 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2169   into_dash_iter2186 (    struct StrConcat_2162  dref1504 ) {
    return ( (struct StrConcatIter_2169) { .f_left = ( (  chars2187 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2169   chars2185 (    struct StrConcat_2162  self1515 ) {
    return ( (  into_dash_iter2186 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str2193 (    struct Screen_188 *  screen3571 ,    struct StrConcat_2162  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2169  temp2194 =  into_dash_iter2184 ( ( (  chars2185 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond2195 =  next2176 (&temp2194);
        if (  __cond2195 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2195 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2166 (    struct Screen_188 *  screen3587 ,    struct StrConcat_2162  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum2167 ) ( ( (  map2183 ) ( ( (  chars2185 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1003 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str2193 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann2165 (   struct env1906* env ,    struct StrConcat_2162  s4415 ) {
    ( (  draw_dash_str_dash_right2166 ) ( ( env->screen4408 ) ,  (  s4415 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4412 ) ) ) );
    (* env->curline4412 ) = (  op_dash_add311 ( ( * ( env->curline4412 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2198 {
    struct StrConcat_2163  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2198 StrConcat_2198_StrConcat (  struct StrConcat_2163  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2198 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2197 {
    enum Unit_8  (*fun) (  struct env1907*  ,    struct StrConcat_2198  );
    struct env1907 env;
};

struct StrConcatIter_2203 {
    struct StrConcatIter_2170  f_left;
    struct StrViewIter_650  f_right;
};

struct Map_2202 {
    struct StrConcatIter_2203  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2202 Map_2202_Map (  struct StrConcatIter_2203  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2202 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2202   into_dash_iter2205 (    struct Map_2202  self796 ) {
    return (  self796 );
}

static  struct Maybe_653   next2207 (    struct StrConcatIter_2203 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2177 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_309   next2206 (    struct Map_2202 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next2207 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_309_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2204 (    struct Map_2202  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_2202  it1099 = ( (  into_dash_iter2205 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next2206 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2208 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2208);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp2209;
    return (  temp2209 );
}

static  int32_t   lam2210 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add311 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum2201 (    struct Map_2202  it1110 ) {
    return ( (  reduce2204 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2210 ) ) );
}

static  struct StrConcatIter_2203   into_dash_iter2212 (    struct StrConcatIter_2203  self1497 ) {
    return (  self1497 );
}

static  struct Map_2202   map2211 (    struct StrConcatIter_2203  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_2203  it808 = ( (  into_dash_iter2212 ) ( (  iterable805 ) ) );
    return ( ( Map_2202_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_2203   into_dash_iter2214 (    struct StrConcat_2198  dref1504 ) {
    return ( (struct StrConcatIter_2203) { .f_left = ( (  chars2187 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars655 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2203   chars2213 (    struct StrConcat_2198  self1515 ) {
    return ( (  into_dash_iter2214 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str2215 (    struct Screen_188 *  screen3571 ,    struct StrConcat_2198  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2203  temp2216 =  into_dash_iter2212 ( ( (  chars2213 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond2217 =  next2207 (&temp2216);
        if (  __cond2217 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2217 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2200 (    struct Screen_188 *  screen3587 ,    struct StrConcat_2198  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum2201 ) ( ( (  map2211 ) ( ( (  chars2213 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1003 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str2215 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann2199 (   struct env1907* env ,    struct StrConcat_2198  s4415 ) {
    ( (  draw_dash_str_dash_right2200 ) ( ( env->screen4408 ) ,  (  s4415 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4412 ) ) ) );
    (* env->curline4412 ) = (  op_dash_add311 ( ( * ( env->curline4412 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion2219 {
    enum Unit_8  (*fun) (  struct env1908*  ,    struct StrConcat_75  );
    struct env1908 env;
};

struct Map_2223 {
    struct StrConcatIter_1329  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2223 Map_2223_Map (  struct StrConcatIter_1329  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2223 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2223   into_dash_iter2225 (    struct Map_2223  self796 ) {
    return (  self796 );
}

static  struct Maybe_309   next2226 (    struct Map_2223 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next1336 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_309_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2224 (    struct Map_2223  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_2223  it1099 = ( (  into_dash_iter2225 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next2226 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2227 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2227);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp2228;
    return (  temp2228 );
}

static  int32_t   lam2229 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add311 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum2222 (    struct Map_2223  it1110 ) {
    return ( (  reduce2224 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2229 ) ) );
}

static  struct StrConcatIter_1329   into_dash_iter2231 (    struct StrConcatIter_1329  self1497 ) {
    return (  self1497 );
}

static  struct Map_2223   map2230 (    struct StrConcatIter_1329  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_1329  it808 = ( (  into_dash_iter2231 ) ( (  iterable805 ) ) );
    return ( ( Map_2223_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  enum Unit_8   draw_dash_str2232 (    struct Screen_188 *  screen3571 ,    struct StrConcat_75  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_1329  temp2233 =  into_dash_iter2231 ( ( (  chars1350 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond2234 =  next1336 (&temp2233);
        if (  __cond2234 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2234 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2221 (    struct Screen_188 *  screen3587 ,    struct StrConcat_75  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum2222 ) ( ( (  map2230 ) ( ( (  chars1350 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1003 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str2232 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann2220 (   struct env1908* env ,    struct StrConcat_75  s4415 ) {
    ( (  draw_dash_str_dash_right2221 ) ( ( env->screen4408 ) ,  (  s4415 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4412 ) ) ) );
    (* env->curline4412 ) = (  op_dash_add311 ( ( * ( env->curline4412 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   render_dash_editor1656 (   struct env186* env ,    struct Screen_188 *  screen4408 ,    struct Editor_163 *  ed4410 ) {
    struct ScreenDims_195  screen_dash_dims4411 = ( (struct ScreenDims_195) { .f_from_dash_sx = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub852 ( ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen4408 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub852 ( ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen4408 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
    struct envunion187  temp1659 = ( (struct envunion187){ .fun = (  enum Unit_8  (*) (  struct env123*  ,    struct Screen_188 *  ,    struct Pane_141 *  ,    struct ScreenDims_195  ) )render1660 , .env =  env->envinst123 } );
    ( temp1659.fun ( &temp1659.env ,  (  screen4408 ) ,  ( (  pane1028 ) ( (  ed4410 ) ) ) ,  (  screen_dash_dims4411 ) ) );
    int32_t  temp1899 = (  from_dash_integral56 ( 0 ) );
    int32_t *  curline4412 = ( &temp1899 );
    struct env1900 envinst1900 = {
        .screen4408 =  screen4408 ,
        .curline4412 =  curline4412 ,
    };
    struct env1901 envinst1901 = {
        .screen4408 =  screen4408 ,
        .curline4412 =  curline4412 ,
    };
    struct env1902 envinst1902 = {
        .screen4408 =  screen4408 ,
        .curline4412 =  curline4412 ,
    };
    struct env1903 envinst1903 = {
        .screen4408 =  screen4408 ,
        .curline4412 =  curline4412 ,
    };
    struct env1904 envinst1904 = {
        .screen4408 =  screen4408 ,
        .curline4412 =  curline4412 ,
    };
    struct env1905 envinst1905 = {
        .screen4408 =  screen4408 ,
        .curline4412 =  curline4412 ,
    };
    struct env1906 envinst1906 = {
        .screen4408 =  screen4408 ,
        .curline4412 =  curline4412 ,
    };
    struct env1907 envinst1907 = {
        .screen4408 =  screen4408 ,
        .curline4412 =  curline4412 ,
    };
    struct env1908 envinst1908 = {
        .screen4408 =  screen4408 ,
        .curline4412 =  curline4412 ,
    };
    struct envunion1910  temp1909 = ( (struct envunion1910){ .fun = (  enum Unit_8  (*) (  struct env1900*  ,    struct StrConcat_1911  ) )ann1912 , .env =  envinst1900 } );
    ( temp1909.fun ( &temp1909.env ,  ( ( StrConcat_1911_StrConcat ) ( ( (  from_dash_string257 ) ( ( "mode: " ) ,  ( 6 ) ) ) ,  ( ( ( * (  ed4410 ) ) .f_pane ) .f_mode ) ) ) ) );
    enum CharType_1227  cur_dash_ty4416 = ( (  char_dash_type1229 ) ( ( (  char_dash_at1237 ) ( ( (  pane1028 ) ( (  ed4410 ) ) ) ,  ( ( ( * (  ed4410 ) ) .f_pane ) .f_cursor ) ) ) ) );
    struct envunion1934  temp1933 = ( (struct envunion1934){ .fun = (  enum Unit_8  (*) (  struct env1901*  ,    struct StrConcat_1935  ) )ann1938 , .env =  envinst1901 } );
    ( temp1933.fun ( &temp1933.env ,  ( ( StrConcat_1935_StrConcat ) ( ( ( StrConcat_1936_StrConcat ) ( ( ( StrConcat_1937_StrConcat ) ( ( (  from_dash_string257 ) ( ( "cur: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4410 ) ) .f_pane ) .f_cursor ) ) ) ,  ( (  from_dash_string257 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  (  cur_dash_ty4416 ) ) ) ) );
    struct envunion1988  temp1987 = ( (struct envunion1988){ .fun = (  enum Unit_8  (*) (  struct env1902*  ,    struct StrConcat_1989  ) )ann1990 , .env =  envinst1902 } );
    ( temp1987.fun ( &temp1987.env ,  ( ( StrConcat_1989_StrConcat ) ( ( (  from_dash_string257 ) ( ( "sel: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4410 ) ) .f_pane ) .f_sel ) ) ) ) );
    struct Maybe_2021  cp4419 = ( (  fmap_dash_maybe2024 ) ( ( ( * (  ed4410 ) ) .f_clipboard ) ,  (  lam2025 ) ) );
    struct envunion2035  temp2034 = ( (struct envunion2035){ .fun = (  enum Unit_8  (*) (  struct env1903*  ,    struct StrConcat_2036  ) )ann2037 , .env =  envinst1903 } );
    ( temp2034.fun ( &temp2034.env ,  ( ( StrConcat_2036_StrConcat ) ( ( (  from_dash_string257 ) ( ( "cp: " ) ,  ( 4 ) ) ) ,  (  cp4419 ) ) ) ) );
    struct Maybe_2021  st4422 = ( (  fmap_dash_maybe2079 ) ( ( ( * (  ed4410 ) ) .f_search_dash_term ) ,  (  lam2080 ) ) );
    struct envunion2082  temp2081 = ( (struct envunion2082){ .fun = (  enum Unit_8  (*) (  struct env1903*  ,    struct StrConcat_2036  ) )ann2037 , .env =  envinst1903 } );
    ( temp2081.fun ( &temp2081.env ,  ( ( StrConcat_2036_StrConcat ) ( ( (  from_dash_string257 ) ( ( "st: " ) ,  ( 4 ) ) ) ,  (  st4422 ) ) ) ) );
    struct envunion2084  temp2083 = ( (struct envunion2084){ .fun = (  enum Unit_8  (*) (  struct env1904*  ,    struct StrConcat_2085  ) )ann2086 , .env =  envinst1904 } );
    ( temp2083.fun ( &temp2083.env ,  ( ( StrConcat_2085_StrConcat ) ( ( (  from_dash_string257 ) ( ( "edmode: " ) ,  ( 8 ) ) ) ,  ( ( * (  ed4410 ) ) .f_mode ) ) ) ) );
    struct envunion2126  temp2125 = ( (struct envunion2126){ .fun = (  enum Unit_8  (*) (  struct env1905*  ,    struct StrConcat_2127  ) )ann2128 , .env =  envinst1905 } );
    ( temp2125.fun ( &temp2125.env ,  ( ( StrConcat_2127_StrConcat ) ( ( (  from_dash_string257 ) ( ( "msg: " ) ,  ( 5 ) ) ) ,  ( ( * (  ed4410 ) ) .f_msg ) ) ) ) );
    struct envunion2161  temp2160 = ( (struct envunion2161){ .fun = (  enum Unit_8  (*) (  struct env1906*  ,    struct StrConcat_2162  ) )ann2165 , .env =  envinst1906 } );
    ( temp2160.fun ( &temp2160.env ,  ( ( StrConcat_2162_StrConcat ) ( ( ( StrConcat_2163_StrConcat ) ( ( ( StrConcat_2164_StrConcat ) ( ( ( StrConcat_1703_StrConcat ) ( ( (  from_dash_string257 ) ( ( "sc-off: (" ) ,  ( 9 ) ) ) ,  ( ( ( ( * (  ed4410 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_top ) ) ) ,  ( (  from_dash_string257 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( ( ( ( * (  ed4410 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_left ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    struct envunion2197  temp2196 = ( (struct envunion2197){ .fun = (  enum Unit_8  (*) (  struct env1907*  ,    struct StrConcat_2198  ) )ann2199 , .env =  envinst1907 } );
    ( temp2196.fun ( &temp2196.env ,  ( ( StrConcat_2198_StrConcat ) ( ( ( StrConcat_2163_StrConcat ) ( ( ( StrConcat_2164_StrConcat ) ( ( ( StrConcat_1703_StrConcat ) ( ( (  from_dash_string257 ) ( ( "dims: { " ) ,  ( 8 ) ) ) ,  ( (  screen_dash_dims4411 ) .f_to_dash_sx ) ) ) ,  ( (  from_dash_string257 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  screen_dash_dims4411 ) .f_to_dash_sy ) ) ) ,  ( (  from_dash_string257 ) ( ( " }" ) ,  ( 2 ) ) ) ) ) ) );
    struct envunion2219  temp2218 = ( (struct envunion2219){ .fun = (  enum Unit_8  (*) (  struct env1908*  ,    struct StrConcat_75  ) )ann2220 , .env =  envinst1908 } );
    ( temp2218.fun ( &temp2218.env ,  ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "num actions: " ) ,  ( 13 ) ) ) ,  ( ( ( ( * ( ( ( * (  ed4410 ) ) .f_pane ) .f_buf ) ) .f_actions ) .f_list ) .f_count ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2237 {
    struct StrView_27  field0;
    uint32_t  field1;
};

static struct StrConcat_2237 StrConcat_2237_StrConcat (  struct StrView_27  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2237 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2236 {
    struct StrConcat_2237  field0;
    struct Char_65  field1;
};

static struct StrConcat_2236 StrConcat_2236_StrConcat (  struct StrConcat_2237  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2236 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2241 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2240 {
    struct StrViewIter_650  f_left;
    struct IntStrIter_2241  f_right;
};

struct StrConcatIter_2239 {
    struct StrConcatIter_2240  f_left;
    struct AppendIter_913  f_right;
};

static  struct StrConcatIter_2239   into_dash_iter2242 (    struct StrConcatIter_2239  self1497 ) {
    return (  self1497 );
}

static  uint32_t   op_dash_div2250 (    uint32_t  l245 ,    uint32_t  r247 ) {
    return ( (  l245 ) / (  r247 ) );
}

static  int32_t   count_dash_digits2249 (    uint32_t  self1436 ) {
    if ( (  eq452 ( (  self1436 ) , (  from_dash_integral253 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1437 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp252 ( (  self1436 ) , (  from_dash_integral253 ( 0 ) ) ) == 2 ) ) {
        self1436 = (  op_dash_div2250 ( (  self1436 ) , (  from_dash_integral253 ( 10 ) ) ) );
        digits1437 = (  op_dash_add311 ( (  digits1437 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1437 );
}

static  struct IntStrIter_2241   uint_dash_iter2248 (    uint32_t  int1443 ) {
    return ( (struct IntStrIter_2241) { .f_int = (  int1443 ) , .f_len = ( (  count_dash_digits2249 ) ( (  int1443 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2241   chars2247 (    uint32_t  self1455 ) {
    return ( (  uint_dash_iter2248 ) ( (  self1455 ) ) );
}

static  struct StrConcatIter_2240   into_dash_iter2246 (    struct StrConcat_2237  dref1504 ) {
    return ( (struct StrConcatIter_2240) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2247 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2240   chars2245 (    struct StrConcat_2237  self1515 ) {
    return ( (  into_dash_iter2246 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2239   into_dash_iter2244 (    struct StrConcat_2236  dref1504 ) {
    return ( (struct StrConcatIter_2239) { .f_left = ( (  chars2245 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2239   chars2243 (    struct StrConcat_2236  self1515 ) {
    return ( (  into_dash_iter2244 ) ( (  self1515 ) ) );
}

struct env2257 {
    ;
    uint32_t  base1210;
};

struct envunion2258 {
    uint32_t  (*fun) (  struct env2257*  ,    int32_t  ,    uint32_t  );
    struct env2257 env;
};

static  uint32_t   reduce2256 (    struct Range_726  iterable1093 ,    uint32_t  base1095 ,   struct envunion2258  fun1097 ) {
    uint32_t  x1098 = (  base1095 );
    struct RangeIter_729  it1099 = ( (  into_dash_iter731 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next732 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                struct envunion2258  temp2259 = (  fun1097 );
                x1098 = ( temp2259.fun ( &temp2259.env ,  ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2260 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2260);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp2261;
    return (  temp2261 );
}

static  uint32_t   lam2262 (   struct env2257* env ,    int32_t  item1214 ,    uint32_t  x1216 ) {
    return (  op_dash_mul723 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint32_t   pow2255 (    uint32_t  base1210 ,    int32_t  p1212 ) {
    struct env2257 envinst2257 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce2256 ) ( ( (  to734 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub852 ( (  p1212 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral253 ( 1 ) ) ,  ( (struct envunion2258){ .fun = (  uint32_t  (*) (  struct env2257*  ,    int32_t  ,    uint32_t  ) )lam2262 , .env =  envinst2257 } ) ) );
}

static  uint32_t   op_dash_sub2263 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) - (  r237 ) );
}

static  struct Maybe_653   next2254 (    struct IntStrIter_2241 *  self1428 ) {
    if ( ( ( * (  self1428 ) ) .f_negative ) ) {
        (*  self1428 ) .f_negative = ( false );
        return ( ( Maybe_653_Just ) ( ( (  from_dash_charlike258 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp362 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
    }
    uint32_t  trim_dash_down1429 = ( (  pow2255 ) ( (  from_dash_integral253 ( 10 ) ) ,  (  op_dash_sub852 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint32_t  upper1430 = (  op_dash_div2250 ( ( ( * (  self1428 ) ) .f_int ) , (  trim_dash_down1429 ) ) );
    uint32_t  upper_dash_mask1431 = (  op_dash_mul723 ( (  op_dash_div2250 ( (  upper1430 ) , (  from_dash_integral253 ( 10 ) ) ) ) , (  from_dash_integral253 ( 10 ) ) ) );
    uint8_t  digit1432 = ( ( (  cast256 ) ( (  op_dash_sub2263 ( (  upper1430 ) , (  upper_dash_mask1431 ) ) ) ) ) );
    (*  self1428 ) .f_len = (  op_dash_sub852 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1433 = ( (  from_dash_u8932 ) ( (  op_dash_add822 ( (  digit1432 ) , (  from_dash_integral249 ( 48 ) ) ) ) ) );
    return ( ( Maybe_653_Just ) ( (  digit_dash_char1433 ) ) );
}

static  struct Maybe_653   next2253 (    struct StrConcatIter_2240 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next2254 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2252 (    struct StrConcatIter_2239 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2253 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   draw_dash_str2235 (    struct Screen_188 *  screen3571 ,    struct StrConcat_2236  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2239  temp2238 =  into_dash_iter2242 ( ( (  chars2243 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond2251 =  next2252 (&temp2238);
        if (  __cond2251 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2251 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct RenderState_2265 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_191  f_fg;
    struct Color_191  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_2270 {
    struct StrConcat_2236  field0;
    uint32_t  field1;
};

static struct StrConcat_2270 StrConcat_2270_StrConcat (  struct StrConcat_2236  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2270 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2269 {
    struct StrConcat_2270  field0;
    struct Char_65  field1;
};

static struct StrConcat_2269 StrConcat_2269_StrConcat (  struct StrConcat_2270  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2269 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2273 {
    struct StrConcatIter_2239  f_left;
    struct IntStrIter_2241  f_right;
};

struct StrConcatIter_2272 {
    struct StrConcatIter_2273  f_left;
    struct AppendIter_913  f_right;
};

static  struct StrConcatIter_2272   into_dash_iter2275 (    struct StrConcatIter_2272  self1497 ) {
    return (  self1497 );
}

static  struct Maybe_653   next2277 (    struct StrConcatIter_2273 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2252 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next2254 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2276 (    struct StrConcatIter_2272 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2277 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2271 (    struct StrConcatIter_2272  iterable1074 ,    enum Unit_8 (*  fun1076 )(    struct Char_65  ) ) {
    struct StrConcatIter_2272  temp2274 = ( (  into_dash_iter2275 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2272 *  it1077 = ( &temp2274 );
    while ( ( true ) ) {
        struct Maybe_653  dref1078 = ( (  next2276 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_653_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_653_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_653_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_2273   into_dash_iter2281 (    struct StrConcat_2270  dref1504 ) {
    return ( (struct StrConcatIter_2273) { .f_left = ( (  chars2243 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2247 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2273   chars2280 (    struct StrConcat_2270  self1515 ) {
    return ( (  into_dash_iter2281 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2272   into_dash_iter2279 (    struct StrConcat_2269  dref1504 ) {
    return ( (struct StrConcatIter_2272) { .f_left = ( (  chars2280 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2272   chars2278 (    struct StrConcat_2269  self1515 ) {
    return ( (  into_dash_iter2279 ) ( (  self1515 ) ) );
}

static  enum Unit_8   print2268 (    struct StrConcat_2269  s2579 ) {
    ( (  for_dash_each2271 ) ( ( (  chars2278 ) ( (  s2579 ) ) ) ,  (  printf_dash_char241 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_cursor_dash_to2267 (    uint32_t  x2593 ,    uint32_t  y2595 ) {
    uint32_t  x2596 = (  op_dash_add824 ( (  x2593 ) , (  from_dash_integral253 ( 1 ) ) ) );
    uint32_t  y2597 = (  op_dash_add824 ( (  y2595 ) , (  from_dash_integral253 ( 1 ) ) ) );
    ( (  print2268 ) ( ( ( StrConcat_2269_StrConcat ) ( ( ( StrConcat_2270_StrConcat ) ( ( ( StrConcat_2236_StrConcat ) ( ( ( StrConcat_2237_StrConcat ) ( ( (  from_dash_string257 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2597 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2596 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_189   subslice2284 (    struct Slice_189  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    struct Cell_190 *  begin_dash_ptr1788 = ( (  offset_dash_ptr738 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp221 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp221 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_189) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub349 ( ( (  min376 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_189) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

struct SliceIter_2287 {
    struct Slice_189  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2286 {
    struct SliceIter_2287  f_left_dash_it;
    struct SliceIter_2287  f_right_dash_it;
};

struct Tuple2_2288 {
    struct Cell_190  field0;
    struct Cell_190  field1;
};

static struct Tuple2_2288 Tuple2_2288_Tuple2 (  struct Cell_190  field0 ,  struct Cell_190  field1 ) {
    return ( struct Tuple2_2288 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2290 {
    bool (*  fun1135 )(    struct Tuple2_2288  );
};

struct envunion2291 {
    bool  (*fun) (  struct env2290*  ,    struct Tuple2_2288  ,    bool  );
    struct env2290 env;
};

static  struct Zip_2286   into_dash_iter2292 (    struct Zip_2286  self911 ) {
    return (  self911 );
}

struct Maybe_2293 {
    enum {
        Maybe_2293_None_t,
        Maybe_2293_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2288  field0;
        } Maybe_2293_Just_s;
    } stuff;
};

static struct Maybe_2293 Maybe_2293_Just (  struct Tuple2_2288  field0 ) {
    return ( struct Maybe_2293 ) { .tag = Maybe_2293_Just_t, .stuff = { .Maybe_2293_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_743   next2295 (    struct SliceIter_2287 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp221 ( (  op_dash_add269 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_743) { .tag = Maybe_743_None_t } );
    }
    struct Cell_190  elem1831 = ( * ( (  offset_dash_ptr738 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add269 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_743_Just ) ( (  elem1831 ) ) );
}

static  struct Maybe_2293   next2294 (    struct Zip_2286 *  self914 ) {
    struct Zip_2286  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_743  dref916 = ( (  next2295 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_743_None_t ) {
            return ( (struct Maybe_2293) { .tag = Maybe_2293_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_743_Just_t ) {
                struct Maybe_743  dref918 = ( (  next2295 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_743_None_t ) {
                    return ( (struct Maybe_2293) { .tag = Maybe_2293_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_743_Just_t ) {
                        ( (  next2295 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next2295 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2293_Just ) ( ( ( Tuple2_2288_Tuple2 ) ( ( dref916 .stuff .Maybe_743_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_743_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce2289 (    struct Zip_2286  iterable1093 ,    bool  base1095 ,   struct envunion2291  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_2286  it1099 = ( (  into_dash_iter2292 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_2293  dref1100 = ( (  next2294 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_2293_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_2293_Just_t ) {
                struct envunion2291  temp2296 = (  fun1097 );
                x1098 = ( temp2296.fun ( &temp2296.env ,  ( dref1100 .stuff .Maybe_2293_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2297 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2297);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2298;
    return (  temp2298 );
}

static  bool   lam2299 (   struct env2290* env ,    struct Tuple2_2288  e1137 ,    bool  x1139 ) {
    return ( ( ( env->fun1135 ) ( (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any2285 (    struct Zip_2286  it1133 ,    bool (*  fun1135 )(    struct Tuple2_2288  ) ) {
    struct env2290 envinst2290 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce2289 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion2291){ .fun = (  bool  (*) (  struct env2290*  ,    struct Tuple2_2288  ,    bool  ) )lam2299 , .env =  envinst2290 } ) ) );
}

static  struct SliceIter_2287   into_dash_iter2301 (    struct Slice_189  self1823 ) {
    return ( (struct SliceIter_2287) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2286   zip2300 (    struct Slice_189  left922 ,    struct Slice_189  right924 ) {
    struct SliceIter_2287  left_dash_it925 = ( (  into_dash_iter2301 ) ( (  left922 ) ) );
    struct SliceIter_2287  right_dash_it926 = ( (  into_dash_iter2301 ) ( (  right924 ) ) );
    return ( (struct Zip_2286) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

struct Tuple2_2305 {
    struct Color_191  field0;
    struct Color_191  field1;
};

static struct Tuple2_2305 Tuple2_2305_Tuple2 (  struct Color_191  field0 ,  struct Color_191  field1 ) {
    return ( struct Tuple2_2305 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_192 *   cast2309 (    int32_t *  x356 ) {
    return ( (enum Color8_192 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2307 (    enum Color8_192  x573 ) {
    int32_t  temp2308 = ( (  zeroed895 ) ( ) );
    int32_t *  y574 = ( &temp2308 );
    enum Color8_192 *  yp575 = ( (  cast2309 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq2306 (    enum Color8_192  l2621 ,    enum Color8_192  r2623 ) {
    return (  eq365 ( ( ( (  cast_dash_on_dash_zeroed2307 ) ( (  l2621 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2307 ) ( (  r2623 ) ) ) ) );
}

static  enum Color16_193 *   cast2313 (    int32_t *  x356 ) {
    return ( (enum Color16_193 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2311 (    enum Color16_193  x573 ) {
    int32_t  temp2312 = ( (  zeroed895 ) ( ) );
    int32_t *  y574 = ( &temp2312 );
    enum Color16_193 *  yp575 = ( (  cast2313 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq2310 (    enum Color16_193  l2627 ,    enum Color16_193  r2629 ) {
    return (  eq365 ( ( ( (  cast_dash_on_dash_zeroed2311 ) ( (  l2627 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2311 ) ( (  r2629 ) ) ) ) );
}

static  bool   eq2314 (    struct RGB_194  l2657 ,    struct RGB_194  r2659 ) {
    return ( ( (  eq245 ( ( (  l2657 ) .f_r ) , ( (  r2659 ) .f_r ) ) ) && (  eq245 ( ( (  l2657 ) .f_g ) , ( (  r2659 ) .f_g ) ) ) ) && (  eq245 ( ( (  l2657 ) .f_b ) , ( (  r2659 ) .f_b ) ) ) );
}

static  bool   eq2304 (    struct Color_191  l2680 ,    struct Color_191  r2682 ) {
    return ( {  struct Tuple2_2305  dref2683 = ( ( Tuple2_2305_Tuple2 ) ( (  l2680 ) ,  (  r2682 ) ) ) ; dref2683 .field0.tag == Color_191_ColorDefault_t && dref2683 .field1.tag == Color_191_ColorDefault_t ? ( true ) : dref2683 .field0.tag == Color_191_Color8_t && dref2683 .field1.tag == Color_191_Color8_t ? (  eq2306 ( ( dref2683 .field0 .stuff .Color_191_Color8_s .field0 ) , ( dref2683 .field1 .stuff .Color_191_Color8_s .field0 ) ) ) : dref2683 .field0.tag == Color_191_Color16_t && dref2683 .field1.tag == Color_191_Color16_t ? (  eq2310 ( ( dref2683 .field0 .stuff .Color_191_Color16_s .field0 ) , ( dref2683 .field1 .stuff .Color_191_Color16_s .field0 ) ) ) : dref2683 .field0.tag == Color_191_Color256_t && dref2683 .field1.tag == Color_191_Color256_t ? (  eq245 ( ( dref2683 .field0 .stuff .Color_191_Color256_s .field0 ) , ( dref2683 .field1 .stuff .Color_191_Color256_s .field0 ) ) ) : dref2683 .field0.tag == Color_191_ColorRGB_t && dref2683 .field1.tag == Color_191_ColorRGB_t ? (  eq2314 ( ( dref2683 .field0 .stuff .Color_191_ColorRGB_s .field0 ) , ( dref2683 .field1 .stuff .Color_191_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2303 (    struct Cell_190  l3444 ,    struct Cell_190  r3446 ) {
    if ( ( !  eq448 ( ( (  l3444 ) .f_c ) , ( (  r3446 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2304 ( ( (  l3444 ) .f_fg ) , ( (  r3446 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2304 ( ( (  l3444 ) .f_bg ) , ( (  r3446 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam2302 (    struct Tuple2_2288  dref3500 ) {
    return ( !  eq2303 ( ( dref3500 .field0 ) , ( dref3500 .field1 ) ) );
}

static  enum Unit_8   set_dash_default_dash_fg2317 (  ) {
    ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg82318 (    enum Color8_192  color2632 ) {
    enum Color8_192  dref2633 = (  color2632 );
    switch (  dref2633 ) {
        case Color8_192_Black8 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_192_Red8 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_192_Green8 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_192_Yellow8 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_192_Blue8 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_192_Magenta8 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_192_Cyan8 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_192_White8 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg162319 (    enum Color16_193  color2636 ) {
    enum Color16_193  dref2637 = (  color2636 );
    switch (  dref2637 ) {
        case Color16_193_Black16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_Red16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_Green16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_Yellow16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_Blue16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_Magenta16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_Cyan16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_White16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_BrightBlack16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_BrightRed16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_BrightGreen16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_BrightYellow16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_BrightBlue16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_BrightMagenta16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_BrightCyan16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_BrightWhite16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2323 {
    struct StrView_27  field0;
    uint8_t  field1;
};

static struct StrConcat_2323 StrConcat_2323_StrConcat (  struct StrView_27  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2323 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2322 {
    struct StrConcat_2323  field0;
    struct Char_65  field1;
};

static struct StrConcat_2322 StrConcat_2322_StrConcat (  struct StrConcat_2323  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2322 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2327 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2326 {
    struct StrViewIter_650  f_left;
    struct IntStrIter_2327  f_right;
};

struct StrConcatIter_2325 {
    struct StrConcatIter_2326  f_left;
    struct AppendIter_913  f_right;
};

static  struct StrConcatIter_2325   into_dash_iter2329 (    struct StrConcatIter_2325  self1497 ) {
    return (  self1497 );
}

struct env2335 {
    uint8_t  base1210;
    ;
};

struct envunion2336 {
    uint8_t  (*fun) (  struct env2335*  ,    int32_t  ,    uint8_t  );
    struct env2335 env;
};

static  uint8_t   reduce2334 (    struct Range_726  iterable1093 ,    uint8_t  base1095 ,   struct envunion2336  fun1097 ) {
    uint8_t  x1098 = (  base1095 );
    struct RangeIter_729  it1099 = ( (  into_dash_iter731 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next732 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                struct envunion2336  temp2337 = (  fun1097 );
                x1098 = ( temp2337.fun ( &temp2337.env ,  ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2338 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2338);
    exit ( 1 );
    ( Unit_8_Unit );
    uint8_t  temp2339;
    return (  temp2339 );
}

static  uint8_t   op_dash_mul2341 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam2340 (   struct env2335* env ,    int32_t  item1214 ,    uint8_t  x1216 ) {
    return (  op_dash_mul2341 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint8_t   pow2333 (    uint8_t  base1210 ,    int32_t  p1212 ) {
    struct env2335 envinst2335 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce2334 ) ( ( (  to734 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub852 ( (  p1212 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral249 ( 1 ) ) ,  ( (struct envunion2336){ .fun = (  uint8_t  (*) (  struct env2335*  ,    int32_t  ,    uint8_t  ) )lam2340 , .env =  envinst2335 } ) ) );
}

static  uint8_t   op_dash_div2342 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast2343 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_653   next2332 (    struct IntStrIter_2327 *  self1428 ) {
    if ( ( ( * (  self1428 ) ) .f_negative ) ) {
        (*  self1428 ) .f_negative = ( false );
        return ( ( Maybe_653_Just ) ( ( (  from_dash_charlike258 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp362 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
    }
    uint8_t  trim_dash_down1429 = ( (  pow2333 ) ( (  from_dash_integral249 ( 10 ) ) ,  (  op_dash_sub852 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint8_t  upper1430 = (  op_dash_div2342 ( ( ( * (  self1428 ) ) .f_int ) , (  trim_dash_down1429 ) ) );
    uint8_t  upper_dash_mask1431 = (  op_dash_mul2341 ( (  op_dash_div2342 ( (  upper1430 ) , (  from_dash_integral249 ( 10 ) ) ) ) , (  from_dash_integral249 ( 10 ) ) ) );
    uint8_t  digit1432 = ( ( (  cast2343 ) ( (  op_dash_sub821 ( (  upper1430 ) , (  upper_dash_mask1431 ) ) ) ) ) );
    (*  self1428 ) .f_len = (  op_dash_sub852 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1433 = ( (  from_dash_u8932 ) ( (  op_dash_add822 ( (  digit1432 ) , (  from_dash_integral249 ( 48 ) ) ) ) ) );
    return ( ( Maybe_653_Just ) ( (  digit_dash_char1433 ) ) );
}

static  struct Maybe_653   next2331 (    struct StrConcatIter_2326 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next2332 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2330 (    struct StrConcatIter_2325 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2331 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2324 (    struct StrConcatIter_2325  iterable1074 ,    enum Unit_8 (*  fun1076 )(    struct Char_65  ) ) {
    struct StrConcatIter_2325  temp2328 = ( (  into_dash_iter2329 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2325 *  it1077 = ( &temp2328 );
    while ( ( true ) ) {
        struct Maybe_653  dref1078 = ( (  next2330 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_653_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_653_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_653_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2350 (    uint8_t  self1436 ) {
    if ( (  eq245 ( (  self1436 ) , (  from_dash_integral249 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1437 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp262 ( (  self1436 ) , (  from_dash_integral249 ( 0 ) ) ) == 2 ) ) {
        self1436 = (  op_dash_div2342 ( (  self1436 ) , (  from_dash_integral249 ( 10 ) ) ) );
        digits1437 = (  op_dash_add311 ( (  digits1437 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1437 );
}

static  struct IntStrIter_2327   uint_dash_iter2349 (    uint8_t  int1443 ) {
    return ( (struct IntStrIter_2327) { .f_int = (  int1443 ) , .f_len = ( (  count_dash_digits2350 ) ( (  int1443 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2327   chars2348 (    uint8_t  self1461 ) {
    return ( (  uint_dash_iter2349 ) ( (  self1461 ) ) );
}

static  struct StrConcatIter_2326   into_dash_iter2347 (    struct StrConcat_2323  dref1504 ) {
    return ( (struct StrConcatIter_2326) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2348 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2326   chars2346 (    struct StrConcat_2323  self1515 ) {
    return ( (  into_dash_iter2347 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2325   into_dash_iter2345 (    struct StrConcat_2322  dref1504 ) {
    return ( (struct StrConcatIter_2325) { .f_left = ( (  chars2346 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2325   chars2344 (    struct StrConcat_2322  self1515 ) {
    return ( (  into_dash_iter2345 ) ( (  self1515 ) ) );
}

static  enum Unit_8   print2321 (    struct StrConcat_2322  s2579 ) {
    ( (  for_dash_each2324 ) ( ( (  chars2344 ) ( (  s2579 ) ) ) ,  (  printf_dash_char241 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2562320 (    uint8_t  color2650 ) {
    ( (  print2321 ) ( ( ( StrConcat_2322_StrConcat ) ( ( ( StrConcat_2323_StrConcat ) ( ( (  from_dash_string257 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2650 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2356 {
    struct StrConcat_2322  field0;
    uint8_t  field1;
};

static struct StrConcat_2356 StrConcat_2356_StrConcat (  struct StrConcat_2322  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2356 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2355 {
    struct StrConcat_2356  field0;
    struct Char_65  field1;
};

static struct StrConcat_2355 StrConcat_2355_StrConcat (  struct StrConcat_2356  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2355 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2354 {
    struct StrConcat_2355  field0;
    uint8_t  field1;
};

static struct StrConcat_2354 StrConcat_2354_StrConcat (  struct StrConcat_2355  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2354 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2353 {
    struct StrConcat_2354  field0;
    struct Char_65  field1;
};

static struct StrConcat_2353 StrConcat_2353_StrConcat (  struct StrConcat_2354  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2353 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2361 {
    struct StrConcatIter_2325  f_left;
    struct IntStrIter_2327  f_right;
};

struct StrConcatIter_2360 {
    struct StrConcatIter_2361  f_left;
    struct AppendIter_913  f_right;
};

struct StrConcatIter_2359 {
    struct StrConcatIter_2360  f_left;
    struct IntStrIter_2327  f_right;
};

struct StrConcatIter_2358 {
    struct StrConcatIter_2359  f_left;
    struct AppendIter_913  f_right;
};

static  struct StrConcatIter_2358   into_dash_iter2363 (    struct StrConcatIter_2358  self1497 ) {
    return (  self1497 );
}

static  struct Maybe_653   next2367 (    struct StrConcatIter_2361 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2330 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next2332 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2366 (    struct StrConcatIter_2360 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2367 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2365 (    struct StrConcatIter_2359 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2366 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next2332 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2364 (    struct StrConcatIter_2358 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2365 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2357 (    struct StrConcatIter_2358  iterable1074 ,    enum Unit_8 (*  fun1076 )(    struct Char_65  ) ) {
    struct StrConcatIter_2358  temp2362 = ( (  into_dash_iter2363 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2358 *  it1077 = ( &temp2362 );
    while ( ( true ) ) {
        struct Maybe_653  dref1078 = ( (  next2364 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_653_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_653_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_653_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_2361   into_dash_iter2375 (    struct StrConcat_2356  dref1504 ) {
    return ( (struct StrConcatIter_2361) { .f_left = ( (  chars2344 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2348 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2361   chars2374 (    struct StrConcat_2356  self1515 ) {
    return ( (  into_dash_iter2375 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2360   into_dash_iter2373 (    struct StrConcat_2355  dref1504 ) {
    return ( (struct StrConcatIter_2360) { .f_left = ( (  chars2374 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2360   chars2372 (    struct StrConcat_2355  self1515 ) {
    return ( (  into_dash_iter2373 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2359   into_dash_iter2371 (    struct StrConcat_2354  dref1504 ) {
    return ( (struct StrConcatIter_2359) { .f_left = ( (  chars2372 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2348 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2359   chars2370 (    struct StrConcat_2354  self1515 ) {
    return ( (  into_dash_iter2371 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2358   into_dash_iter2369 (    struct StrConcat_2353  dref1504 ) {
    return ( (struct StrConcatIter_2358) { .f_left = ( (  chars2370 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2358   chars2368 (    struct StrConcat_2353  self1515 ) {
    return ( (  into_dash_iter2369 ) ( (  self1515 ) ) );
}

static  enum Unit_8   print2352 (    struct StrConcat_2353  s2579 ) {
    ( (  for_dash_each2357 ) ( ( (  chars2368 ) ( (  s2579 ) ) ) ,  (  printf_dash_char241 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg_dash_rgb2351 (    struct RGB_194  c2673 ) {
    ( (  print2352 ) ( ( ( StrConcat_2353_StrConcat ) ( ( ( StrConcat_2354_StrConcat ) ( ( ( StrConcat_2355_StrConcat ) ( ( ( StrConcat_2356_StrConcat ) ( ( ( StrConcat_2322_StrConcat ) ( ( ( StrConcat_2323_StrConcat ) ( ( (  from_dash_string257 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2673 ) .f_r ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2673 ) .f_g ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2673 ) .f_b ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2316 (    struct Color_191  c2694 ) {
    struct Color_191  dref2695 = (  c2694 );
    if ( dref2695.tag == Color_191_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2317 ) ( ) );
    }
    else {
        if ( dref2695.tag == Color_191_Color8_t ) {
            ( (  set_dash_fg82318 ) ( ( dref2695 .stuff .Color_191_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2695.tag == Color_191_Color16_t ) {
                ( (  set_dash_fg162319 ) ( ( dref2695 .stuff .Color_191_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2695.tag == Color_191_Color256_t ) {
                    ( (  set_dash_fg2562320 ) ( ( dref2695 .stuff .Color_191_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2695.tag == Color_191_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2351 ) ( ( dref2695 .stuff .Color_191_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_default_dash_bg2377 (  ) {
    ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg82378 (    enum Color8_192  color2640 ) {
    enum Color8_192  dref2641 = (  color2640 );
    switch (  dref2641 ) {
        case Color8_192_Black8 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_192_Red8 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_192_Green8 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_192_Yellow8 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_192_Blue8 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_192_Magenta8 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_192_Cyan8 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_192_White8 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg162379 (    enum Color16_193  color2644 ) {
    enum Color16_193  dref2645 = (  color2644 );
    switch (  dref2645 ) {
        case Color16_193_Black16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_Red16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_Green16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_Yellow16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_Blue16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_Magenta16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_Cyan16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_White16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_193_BrightBlack16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_193_BrightRed16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_193_BrightGreen16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_193_BrightYellow16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_193_BrightBlue16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_193_BrightMagenta16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_193_BrightCyan16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_193_BrightWhite16 : {
            ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2562380 (    uint8_t  color2653 ) {
    ( (  print2321 ) ( ( ( StrConcat_2322_StrConcat ) ( ( ( StrConcat_2323_StrConcat ) ( ( (  from_dash_string257 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2653 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg_dash_rgb2381 (    struct RGB_194  c2676 ) {
    ( (  print2352 ) ( ( ( StrConcat_2353_StrConcat ) ( ( ( StrConcat_2354_StrConcat ) ( ( ( StrConcat_2355_StrConcat ) ( ( ( StrConcat_2356_StrConcat ) ( ( ( StrConcat_2322_StrConcat ) ( ( ( StrConcat_2323_StrConcat ) ( ( (  from_dash_string257 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2676 ) .f_r ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2676 ) .f_g ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2676 ) .f_b ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2376 (    struct Color_191  c2702 ) {
    struct Color_191  dref2703 = (  c2702 );
    if ( dref2703.tag == Color_191_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2377 ) ( ) );
    }
    else {
        if ( dref2703.tag == Color_191_Color8_t ) {
            ( (  set_dash_bg82378 ) ( ( dref2703 .stuff .Color_191_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2703.tag == Color_191_Color16_t ) {
                ( (  set_dash_bg162379 ) ( ( dref2703 .stuff .Color_191_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2703.tag == Color_191_Color256_t ) {
                    ( (  set_dash_bg2562380 ) ( ( dref2703 .stuff .Color_191_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2703.tag == Color_191_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2381 ) ( ( dref2703 .stuff .Color_191_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  uint32_t   i32_dash_u322382 (    int32_t  x603 ) {
    return ( (uint32_t ) (  x603 ) );
}

static  enum Unit_8   emit_dash_cell2315 (    struct RenderState_2265 *  rs3476 ,    struct Cell_190 *  c3478 ,    uint32_t  x3480 ,    uint32_t  y3482 ) {
    if ( ( ( !  eq452 ( (  x3480 ) , ( ( * (  rs3476 ) ) .f_x ) ) ) || ( !  eq452 ( (  y3482 ) , ( ( * (  rs3476 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to2267 ) ( (  x3480 ) ,  (  y3482 ) ) );
        (*  rs3476 ) .f_x = (  x3480 );
        (*  rs3476 ) .f_y = (  y3482 );
    }
    struct Char_65  char3483 = ( ( * (  c3478 ) ) .f_c );
    struct Color_191  bg3484 = ( ( * (  c3478 ) ) .f_bg );
    if ( (  eq365 ( ( ( * (  c3478 ) ) .f_char_dash_width ) , (  op_dash_neg683 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        char3483 = ( (  from_dash_charlike258 ) ( ( " " ) ,  ( 1 ) ) );
        bg3484 = ( ( Color_191_Color8 ) ( ( Color8_192_Red8 ) ) );
    }
    if ( ( !  eq2304 ( ( ( * (  rs3476 ) ) .f_fg ) , ( ( * (  c3478 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2316 ) ( ( ( * (  c3478 ) ) .f_fg ) ) );
        (*  rs3476 ) .f_fg = ( ( * (  c3478 ) ) .f_fg );
    }
    if ( ( !  eq2304 ( ( ( * (  rs3476 ) ) .f_bg ) , (  bg3484 ) ) ) ) {
        ( (  set_dash_bg2376 ) ( (  bg3484 ) ) );
        (*  rs3476 ) .f_bg = (  bg3484 );
    }
    ( (  print_dash_str240 ) ( (  char3483 ) ) );
    uint32_t  char_dash_width3485 = ( (  i32_dash_u322382 ) ( ( (  max1004 ) ( ( ( * (  c3478 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) ) ) );
    (*  rs3476 ) .f_x = (  op_dash_add824 ( ( ( * (  rs3476 ) ) .f_x ) , (  char_dash_width3485 ) ) );
    return ( Unit_8_Unit );
}

struct Zip_2385 {
    struct SliceIter_2287  f_left_dash_it;
    struct FromIter_303  f_right_dash_it;
};

struct env2386 {
    ;
    struct Slice_189  dest1854;
    ;
};

struct Tuple2_2388 {
    struct Cell_190  field0;
    int32_t  field1;
};

static struct Tuple2_2388 Tuple2_2388_Tuple2 (  struct Cell_190  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2388 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2387 {
    enum Unit_8  (*fun) (  struct env2386*  ,    struct Tuple2_2388  );
    struct env2386 env;
};

static  struct Zip_2385   into_dash_iter2390 (    struct Zip_2385  self911 ) {
    return (  self911 );
}

struct Maybe_2391 {
    enum {
        Maybe_2391_None_t,
        Maybe_2391_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2388  field0;
        } Maybe_2391_Just_s;
    } stuff;
};

static struct Maybe_2391 Maybe_2391_Just (  struct Tuple2_2388  field0 ) {
    return ( struct Maybe_2391 ) { .tag = Maybe_2391_Just_t, .stuff = { .Maybe_2391_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2391   next2392 (    struct Zip_2385 *  self914 ) {
    struct Zip_2385  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_743  dref916 = ( (  next2295 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_743_None_t ) {
            return ( (struct Maybe_2391) { .tag = Maybe_2391_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_743_Just_t ) {
                struct Maybe_309  dref918 = ( (  next310 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_309_None_t ) {
                    return ( (struct Maybe_2391) { .tag = Maybe_2391_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_309_Just_t ) {
                        ( (  next2295 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next310 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2391_Just ) ( ( ( Tuple2_2388_Tuple2 ) ( ( dref916 .stuff .Maybe_743_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_309_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2384 (    struct Zip_2385  iterable1074 ,   struct envunion2387  fun1076 ) {
    struct Zip_2385  temp2389 = ( (  into_dash_iter2390 ) ( (  iterable1074 ) ) );
    struct Zip_2385 *  it1077 = ( &temp2389 );
    while ( ( true ) ) {
        struct Maybe_2391  dref1078 = ( (  next2392 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_2391_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_2391_Just_t ) {
                struct envunion2387  temp2393 = (  fun1076 );
                ( temp2393.fun ( &temp2393.env ,  ( dref1078 .stuff .Maybe_2391_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_2385   zip2394 (    struct Slice_189  left922 ,    struct FromIter_303  right924 ) {
    struct SliceIter_2287  left_dash_it925 = ( (  into_dash_iter2301 ) ( (  left922 ) ) );
    struct FromIter_303  right_dash_it926 = ( (  into_dash_iter315 ) ( (  right924 ) ) );
    return ( (struct Zip_2385) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_8   lam2395 (   struct env2386* env ,    struct Tuple2_2388  dref1855 ) {
    return ( (  set736 ) ( ( env->dest1854 ) ,  ( (  i32_dash_size299 ) ( ( dref1855 .field1 ) ) ) ,  ( dref1855 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to2383 (    struct Slice_189  src1852 ,    struct Slice_189  dest1854 ) {
    if ( (  cmp221 ( ( (  src1852 ) .f_count ) , ( (  dest1854 ) .f_count ) ) == 2 ) ) {
        ( (  panic499 ) ( ( ( StrConcat_500_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1852 ) .f_count ) ) ) ,  ( (  from_dash_string257 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1854 ) .f_count ) ) ) ,  ( (  from_dash_string257 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2386 envinst2386 = {
        .dest1854 =  dest1854 ,
    };
    ( (  for_dash_each2384 ) ( ( (  zip2394 ) ( (  src1852 ) ,  ( (  from316 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2387){ .fun = (  enum Unit_8  (*) (  struct env2386*  ,    struct Tuple2_2388  ) )lam2395 , .env =  envinst2386 } ) ) );
    return ( Unit_8_Unit );
}

static  uint32_t   render_dash_screen2264 (    struct Screen_188 *  screen3488 ) {
    int32_t  w3489 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3488 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3490 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3488 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_2265  temp2266 = ( (struct RenderState_2265) { .f_x = (  from_dash_integral253 ( 0 ) ) , .f_y = (  from_dash_integral253 ( 0 ) ) , .f_fg = ( (struct Color_191) { .tag = Color_191_ColorDefault_t } ) , .f_bg = ( (struct Color_191) { .tag = Color_191_ColorDefault_t } ) , .f_changes = (  from_dash_integral253 ( 0 ) ) } );
    struct RenderState_2265 *  rs3491 = ( &temp2266 );
    ( (  move_dash_cursor_dash_to2267 ) ( (  from_dash_integral253 ( 0 ) ) ,  (  from_dash_integral253 ( 0 ) ) ) );
    struct RangeIter_729  temp2282 =  into_dash_iter731 ( ( (  to734 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub852 ( (  h3490 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_309  __cond2283 =  next732 (&temp2282);
        if (  __cond2283 .tag == 0 ) {
            break;
        }
        int32_t  y3493 =  __cond2283 .stuff .Maybe_309_Just_s .field0;
        int32_t  x_dash_v3494 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp362 ( (  x_dash_v3494 ) , (  w3489 ) ) == 0 ) ) {
            size_t  i3495 = ( (  i32_dash_size299 ) ( (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3493 ) , (  w3489 ) ) ) , (  x_dash_v3494 ) ) ) ) );
            struct Cell_190 *  cur3496 = ( (  get_dash_ptr737 ) ( ( ( * (  screen3488 ) ) .f_current ) ,  (  i3495 ) ) );
            int32_t  char_dash_width3497 = ( (  max1004 ) ( ( ( * (  cur3496 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            struct Slice_189  curs3498 = ( (  subslice2284 ) ( ( ( * (  screen3488 ) ) .f_current ) ,  (  i3495 ) ,  (  op_dash_add269 ( (  i3495 ) , ( (  i32_dash_size299 ) ( (  char_dash_width3497 ) ) ) ) ) ) );
            struct Slice_189  prevs3499 = ( (  subslice2284 ) ( ( ( * (  screen3488 ) ) .f_previous ) ,  (  i3495 ) ,  (  op_dash_add269 ( (  i3495 ) , ( (  i32_dash_size299 ) ( (  char_dash_width3497 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3488 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any2285 ) ( ( (  zip2300 ) ( (  curs3498 ) ,  (  prevs3499 ) ) ) ,  (  lam2302 ) ) ) ) ) {
                (*  rs3491 ) .f_changes = (  op_dash_add824 ( ( ( * (  rs3491 ) ) .f_changes ) , (  from_dash_integral253 ( 1 ) ) ) );
                ( (  emit_dash_cell2315 ) ( (  rs3491 ) ,  (  cur3496 ) ,  ( (  i32_dash_u322382 ) ( (  x_dash_v3494 ) ) ) ,  ( (  i32_dash_u322382 ) ( (  y3493 ) ) ) ) );
                ( (  copy_dash_to2383 ) ( (  curs3498 ) ,  (  prevs3499 ) ) );
            }
            x_dash_v3494 = (  op_dash_add311 ( (  x_dash_v3494 ) , (  char_dash_width3497 ) ) );
        }
    }
    (*  screen3488 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors657 ) ( ) );
    ( (  flush_dash_stdout660 ) ( ) );
    return ( ( * (  rs3491 ) ) .f_changes );
}

static  void *   cast_dash_ptr2402 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of2403 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed2400 (  ) {
    struct timespec *  temp2401;
    struct timespec *  x570 = (  temp2401 );
    ( ( memset ) ( ( (  cast_dash_ptr2402 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of2403 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct timespec *   null_dash_ptr2399 (  ) {
    return ( (  zeroed2400 ) ( ) );
}

static  enum Unit_8   sync2396 (    struct Tui_81 *  tui3359 ) {
    if ( (  eq452 ( ( ( * (  tui3359 ) ) .f_target_dash_fps ) , (  from_dash_integral253 ( 0 ) ) ) ) ) {
        return ( Unit_8_Unit );
    }
    int64_t  frame_dash_ns3360 = (  op_dash_div929 ( (  from_dash_integral348 ( 1000000000 ) ) , ( (  size_dash_i64298 ) ( ( (  u32_dash_size715 ) ( ( ( * (  tui3359 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2397 = ( (  undefined696 ) ( ) );
    struct timespec *  now3361 = ( &temp2397 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic698 ) ( ) ) ,  (  now3361 ) ) );
    int64_t  elapsed_dash_ns3362 = (  op_dash_add450 ( (  op_dash_mul267 ( (  op_dash_sub931 ( ( ( * (  now3361 ) ) .tv_sec ) , ( ( ( * (  tui3359 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral348 ( 1000000000 ) ) ) ) , (  op_dash_sub931 ( ( ( * (  now3361 ) ) .tv_nsec ) , ( ( ( * (  tui3359 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3363 = (  op_dash_sub931 ( (  frame_dash_ns3360 ) , (  elapsed_dash_ns3362 ) ) );
    if ( (  cmp949 ( (  sleep_dash_ns3363 ) , (  from_dash_integral348 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2398 = ( (struct timespec) { .tv_sec = (  from_dash_integral348 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3363 ) } );
        struct timespec *  ts3364 = ( &temp2398 );
        ( ( nanosleep ) ( (  ts3364 ) ,  ( (  null_dash_ptr2399 ) ( ) ) ) );
    }
    struct timespec  temp2404 = ( (  undefined696 ) ( ) );
    struct timespec *  last_dash_sync3365 = ( &temp2404 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic698 ) ( ) ) ,  (  last_dash_sync3365 ) ) );
    (*  tui3359 ) .f_last_dash_sync = ( * (  last_dash_sync3365 ) );
    (*  tui3359 ) .f_fps_dash_count = (  op_dash_add824 ( ( ( * (  tui3359 ) ) .f_fps_dash_count ) , (  from_dash_integral253 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3366 = (  op_dash_add450 ( (  op_dash_mul267 ( (  op_dash_sub931 ( ( ( ( * (  tui3359 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3359 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral348 ( 1000 ) ) ) ) , (  op_dash_div929 ( (  op_dash_sub931 ( ( ( ( * (  tui3359 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3359 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral348 ( 1000000 ) ) ) ) ) );
    if ( (  cmp949 ( (  fps_dash_elapsed_dash_ms3366 ) , (  from_dash_integral348 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3359 ) .f_actual_dash_fps = ( ( * (  tui3359 ) ) .f_fps_dash_count );
        (*  tui3359 ) .f_fps_dash_count = (  from_dash_integral253 ( 0 ) );
        (*  tui3359 ) .f_fps_dash_ts = ( ( * (  tui3359 ) ) .f_last_dash_sync );
    }
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr2407 (    struct Cell_190 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free2406 (    enum CAllocator_10  dref1960 ,    struct Slice_189  slice1962 ) {
    if (!(  dref1960 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr2407 ) ( ( (  slice1962 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_screen2405 (    struct Screen_188 *  screen3464 ) {
    enum CAllocator_10  al3465 = ( ( * (  screen3464 ) ) .f_al );
    ( (  free2406 ) ( (  al3465 ) ,  ( ( * (  screen3464 ) ) .f_current ) ) );
    ( (  free2406 ) ( (  al3465 ) ,  ( ( * (  screen3464 ) ) .f_previous ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_mouse2409 (  ) {
    ( (  print_dash_str232 ) ( ( (  from_dash_string257 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   show_dash_cursor2410 (  ) {
    ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_cursor_dash_position2411 (  ) {
    ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_raw_dash_mode2412 (    struct Termios_83 *  og_dash_termios3339 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno586 ) ( ) ) ,  ( (  tcsa_dash_flush646 ) ( ) ) ,  ( (  cast_dash_ptr587 ) ( (  og_dash_termios3339 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   deinit2408 (    struct Tui_81 *  tui3369 ) {
    ( (  disable_dash_mouse2409 ) ( ) );
    ( (  show_dash_cursor2410 ) ( ) );
    ( (  reset_dash_colors657 ) ( ) );
    ( (  clear_dash_screen658 ) ( ) );
    ( (  reset_dash_cursor_dash_position2411 ) ( ) );
    ( (  disable_dash_raw_dash_mode2412 ) ( ( & ( ( * (  tui3369 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout660 ) ( ) );
    return ( Unit_8_Unit );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size2037 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor2038 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor2039 = ( (  from_dash_integral0 ( 8 ) ) );
    struct env1 envinst1 = {
        .growth_dash_factor2038 =  growth_dash_factor2038 ,
        .starting_dash_size2037 =  starting_dash_size2037 ,
    };
    struct env2 envinst2 = {
        .growth_dash_factor2038 =  growth_dash_factor2038 ,
        .starting_dash_size2037 =  starting_dash_size2037 ,
    };
    struct env3 envinst3 = {
        .growth_dash_factor2038 =  growth_dash_factor2038 ,
        .starting_dash_size2037 =  starting_dash_size2037 ,
    };
    struct env4 envinst4 = {
        .growth_dash_factor2038 =  growth_dash_factor2038 ,
        .starting_dash_size2037 =  starting_dash_size2037 ,
    };
    struct env5 envinst5 = {
        .growth_dash_factor2038 =  growth_dash_factor2038 ,
        .starting_dash_size2037 =  starting_dash_size2037 ,
    };
    struct env6 envinst6 = {
        .envinst1 = envinst1 ,
    };
    struct env19 envinst19 = {
        .envinst2 = envinst2 ,
    };
    struct env21 envinst21 = {
        .envinst3 = envinst3 ,
    };
    struct env28 envinst28 = {
        .envinst4 = envinst4 ,
    };
    struct env35 envinst35 = {
        .envinst5 = envinst5 ,
    };
    struct env37 envinst37 = {
        .envinst6 = envinst6 ,
        .envinst1 = envinst1 ,
    };
    struct env40 envinst40 = {
        .shrink_dash_factor2039 =  shrink_dash_factor2039 ,
    };
    struct env41 envinst41 = {
        .shrink_dash_factor2039 =  shrink_dash_factor2039 ,
    };
    struct env42 envinst42 = {
        .envinst40 = envinst40 ,
    };
    struct env44 envinst44 = {
        .envinst42 = envinst42 ,
    };
    struct env46 envinst46 = {
        .envinst6 = envinst6 ,
    };
    struct env48 envinst48 = {
        .envinst19 = envinst19 ,
    };
    struct env50 envinst50 = {
        .envinst46 = envinst46 ,
    };
    struct env53 envinst53 = {
        .envinst48 = envinst48 ,
    };
    ( ( setlocale ) ( ( (  lc_dash_ctype55 ) ( ) ) ,  ( (  from_dash_string57 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct env58 envinst58 = {
        .envinst48 = envinst48 ,
    };
    struct env60 envinst60 = {
        .envinst58 = envinst58 ,
    };
    struct env63 envinst63 = {
        .envinst60 = envinst60 ,
    };
    struct env66 envinst66 = {
        .envinst60 = envinst60 ,
    };
    struct env67 envinst67 = {
        .envinst44 = envinst44 ,
    };
    struct env69 envinst69 = {
        .envinst63 = envinst63 ,
        .envinst60 = envinst60 ,
    };
    struct env72 envinst72 = {
        .envinst66 = envinst66 ,
        .envinst60 = envinst60 ,
    };
    bool  temp76 = ( false );
    bool *  should_dash_resize3349 = ( &temp76 );
    struct env77 envinst77 = {
        .should_dash_resize3349 =  should_dash_resize3349 ,
    };
    struct env78 envinst78 = {
        .should_dash_resize3349 =  should_dash_resize3349 ,
    };
    struct env79 envinst79 = {
        .envinst78 = envinst78 ,
    };
    struct env85 envinst85 = {
        .envinst78 = envinst78 ,
    };
    struct env87 envinst87 = {
        .envinst50 = envinst50 ,
    };
    struct env89 envinst89 = {
        .envinst37 = envinst37 ,
        .envinst53 = envinst53 ,
        .envinst48 = envinst48 ,
    };
    struct env93 envinst93 = {
        .envinst6 = envinst6 ,
        .envinst48 = envinst48 ,
        .envinst40 = envinst40 ,
        .envinst41 = envinst41 ,
        .envinst89 = envinst89 ,
    };
    struct env102 envinst102 = {
        .envinst93 = envinst93 ,
    };
    struct env104 envinst104 = {
        .envinst93 = envinst93 ,
    };
    struct env106 envinst106 = {
        .envinst102 = envinst102 ,
    };
    struct env108 envinst108 = {
        .envinst104 = envinst104 ,
    };
    struct env110 envinst110 = {
        .envinst48 = envinst48 ,
    };
    struct env112 envinst112 = {
        .envinst21 = envinst21 ,
        .envinst28 = envinst28 ,
        .envinst110 = envinst110 ,
        .envinst104 = envinst104 ,
    };
    struct env117 envinst117 = {
        .envinst28 = envinst28 ,
    };
    struct env119 envinst119 = {
        .envinst35 = envinst35 ,
    };
    struct env121 envinst121 = {
        .envinst119 = envinst119 ,
    };
    struct env123 envinst123 = {
        .envinst121 = envinst121 ,
    };
    struct env126 envinst126 = {
        .envinst112 = envinst112 ,
    };
    struct env129 envinst129 = {
        .envinst112 = envinst112 ,
    };
    struct env131 envinst131 = {
        .envinst106 = envinst106 ,
    };
    struct env133 envinst133 = {
        .envinst108 = envinst108 ,
    };
    struct env135 envinst135 = {
        .envinst112 = envinst112 ,
    };
    struct env137 envinst137 = {
        .envinst112 = envinst112 ,
    };
    struct env139 envinst139 = {
        .envinst137 = envinst137 ,
        .envinst117 = envinst117 ,
    };
    struct env145 envinst145 = {
        .envinst112 = envinst112 ,
        .envinst117 = envinst117 ,
    };
    struct env148 envinst148 = {
        .envinst137 = envinst137 ,
    };
    struct env150 envinst150 = {
        .envinst126 = envinst126 ,
        .envinst135 = envinst135 ,
        .envinst117 = envinst117 ,
    };
    struct env155 envinst155 = {
        .envinst110 = envinst110 ,
    };
    struct env157 envinst157 = {
        .envinst69 = envinst69 ,
    };
    struct env159 envinst159 = {
        .envinst72 = envinst72 ,
    };
    struct env161 envinst161 = {
        .envinst157 = envinst157 ,
    };
    struct env166 envinst166 = {
        .envinst133 = envinst133 ,
        .envinst139 = envinst139 ,
        .envinst155 = envinst155 ,
        .envinst135 = envinst135 ,
        .envinst148 = envinst148 ,
        .envinst159 = envinst159 ,
        .envinst126 = envinst126 ,
        .envinst150 = envinst150 ,
        .envinst145 = envinst145 ,
        .envinst131 = envinst131 ,
    };
    struct env177 envinst177 = {
        .envinst148 = envinst148 ,
        .envinst60 = envinst60 ,
        .envinst67 = envinst67 ,
        .envinst126 = envinst126 ,
        .envinst166 = envinst166 ,
        .envinst129 = envinst129 ,
        .envinst161 = envinst161 ,
    };
    struct env186 envinst186 = {
        .envinst123 = envinst123 ,
    };
    enum CAllocator_10  al4423 = ( (  idc196 ) ( ) );
    struct envunion199  temp198 = ( (struct envunion199){ .fun = (  struct TextBuf_99  (*) (  struct env87*  ,    enum CAllocator_10  ,    struct Pos_26  ) )mk200 , .env =  envinst87 } );
    struct TextBuf_99  temp197 = ( temp198.fun ( &temp198.env ,  (  al4423 ) ,  ( (  mk343 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ) );
    struct TextBuf_99 *  tb4424 = ( &temp197 );
    struct Slice_344  args4427 = ( (  get345 ) ( ) );
    if ( (  cmp221 ( ( (  args4427 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        const char*  fname4428 = (  elem_dash_get350 ( (  args4427 ) , (  from_dash_integral0 ( 0 ) ) ) );
        struct envunion358  temp357 = ( (struct envunion358){ .fun = (  enum Unit_8  (*) (  struct env93*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action359 , .env =  envinst93 } );
        ( temp357.fun ( &temp357.env ,  (  tb4424 ) ,  ( (  mk343 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( (  mk343 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( (  read_dash_contents551 ) ( (  fname4428 ) ,  (  al4423 ) ) ) ) );
    }
    struct Editor_163  temp576 = ( (struct Editor_163) { .f_running = ( true ) , .f_al = (  al4423 ) , .f_pane = ( (  mk577 ) ( (  al4423 ) ,  (  tb4424 ) ) ) , .f_clipboard = ( (struct Maybe_164) { .tag = Maybe_164_None_t } ) , .f_search_dash_term = ( (struct Maybe_164) { .tag = Maybe_164_None_t } ) , .f_mode = ( (struct EditorMode_165) { .tag = EditorMode_165_Normal_t } ) , .f_msg = ( (struct Maybe_164) { .tag = Maybe_164_None_t } ) } );
    struct Editor_163 *  ed4429 = ( &temp576 );
    struct envunion580  temp579 = ( (struct envunion580){ .fun = (  struct Tui_81  (*) (  struct env77*  ) )mk581 , .env =  envinst77 } );
    struct Tui_81  temp578 = ( temp579.fun ( &temp579.env ) );
    struct Tui_81 *  tui4430 = ( &temp578 );
    struct Screen_188  temp708 = ( (  mk_dash_screen709 ) ( (  tui4430 ) ,  (  al4423 ) ) );
    struct Screen_188 *  screen4431 = ( &temp708 );
    uint32_t  last_dash_redraw_dash_changes4432 = (  from_dash_integral253 ( 0 ) );
    while ( ( ( * (  ed4429 ) ) .f_running ) ) {
        struct env759 envinst759 = {
            .envinst79 = envinst79 ,
            .tui4430 =  tui4430 ,
        };
        struct FunIter_758  temp757 =  into_dash_iter766 ( ( (  from_dash_function767 ) ( ( (struct envunion765){ .fun = (  struct Maybe_761  (*) (  struct env759*  ) )lam768 , .env =  envinst759 } ) ) ) );
        while (true) {
            struct Maybe_761  __cond969 =  next970 (&temp757);
            if (  __cond969 .tag == 0 ) {
                break;
            }
            struct InputEvent_762  ev4434 =  __cond969 .stuff .Maybe_761_Just_s .field0;
            struct InputEvent_762  dref4435 = (  ev4434 );
            if ( dref4435.tag == InputEvent_762_Key_t ) {
                ( (  reset_dash_msg972 ) ( (  ed4429 ) ) );
                struct envunion980  temp979 = ( (struct envunion980){ .fun = (  enum Unit_8  (*) (  struct env177*  ,    struct Editor_163 *  ,    struct Key_183  ) )handle_dash_key981 , .env =  envinst177 } );
                ( temp979.fun ( &temp979.env ,  (  ed4429 ) ,  ( dref4435 .stuff .InputEvent_762_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1639  temp1638 = ( (struct envunion1639){ .fun = (  bool  (*) (  struct env85*  ,    struct Screen_188 *  ) )resize_dash_screen_dash_if_dash_needed1640 , .env =  envinst85 } );
        ( temp1638.fun ( &temp1638.env ,  (  screen4431 ) ) );
        if ( ( (  should_dash_redraw1642 ) ( (  tui4430 ) ) ) ) {
            (*  screen4431 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1643 ) ( (  screen4431 ) ) );
            ( (  set_dash_screen_dash_fg1652 ) ( (  screen4431 ) ,  ( (struct Color_191) { .tag = Color_191_ColorDefault_t } ) ) );
            ( (  set_dash_screen_dash_bg1653 ) ( (  screen4431 ) ,  ( (struct Color_191) { .tag = Color_191_ColorDefault_t } ) ) );
            struct envunion1655  temp1654 = ( (struct envunion1655){ .fun = (  enum Unit_8  (*) (  struct env186*  ,    struct Screen_188 *  ,    struct Editor_163 *  ) )render_dash_editor1656 , .env =  envinst186 } );
            ( temp1654.fun ( &temp1654.env ,  (  screen4431 ) ,  (  ed4429 ) ) );
            ( (  draw_dash_str2235 ) ( (  screen4431 ) ,  ( ( StrConcat_2236_StrConcat ) ( ( ( StrConcat_2237_StrConcat ) ( ( (  from_dash_string257 ) ( ( "REDRAWS[" ) ,  ( 8 ) ) ) ,  (  last_dash_redraw_dash_changes4432 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "]" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub852 ( ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen4431 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
            last_dash_redraw_dash_changes4432 = ( (  render_dash_screen2264 ) ( (  screen4431 ) ) );
        }
        ( (  sync2396 ) ( (  tui4430 ) ) );
    }
    ( (  free_dash_screen2405 ) ( (  screen4431 ) ) );
    ( (  deinit2408 ) ( (  tui4430 ) ) );
}
