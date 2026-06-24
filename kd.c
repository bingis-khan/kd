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

struct Tuple2_152 {
    struct Pos_26  field0;
    struct Pos_26  field1;
};

static struct Tuple2_152 Tuple2_152_Tuple2 (  struct Pos_26  field0 ,  struct Pos_26  field1 ) {
    return ( struct Tuple2_152 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion151 {
    enum Unit_8  (*fun) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_152  ,    struct StrView_27  );
    struct env135 env;
};

struct envunion153 {
    enum Unit_8  (*fun) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  );
    struct env126 env;
};

struct env150 {
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
    struct env126 envinst126;
    ;
    ;
    ;
};

struct envunion155 {
    struct StrView_27  (*fun) (  struct env110*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  );
    struct env110 env;
};

struct env154 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env110 envinst110;
    ;
};

struct envunion157 {
    struct StrView_27  (*fun) (  struct env69*  ,    struct StrView_27  ,    enum CAllocator_10  );
    struct env69 env;
};

struct env156 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env69 envinst69;
};

struct envunion159 {
    struct StrView_27  (*fun) (  struct env72*  ,    struct StrConcat_74  ,    enum CAllocator_10  );
    struct env72 env;
};

struct env158 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env72 envinst72;
};

struct Maybe_163 {
    enum {
        Maybe_163_None_t,
        Maybe_163_Just_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } Maybe_163_Just_s;
    } stuff;
};

static struct Maybe_163 Maybe_163_Just (  struct StrView_27  field0 ) {
    return ( struct Maybe_163 ) { .tag = Maybe_163_Just_t, .stuff = { .Maybe_163_Just_s = { .field0 = field0 } } };
};

struct EditorMode_164 {
    enum {
        EditorMode_164_Normal_t,
        EditorMode_164_Cmd_t,
        EditorMode_164_Search_t,
    } tag;
    union {
        struct {
            struct Pos_26  field0;
            struct StrBuilder_62  field1;
        } EditorMode_164_Cmd_s;
        struct {
            struct Pos_26  field0;
            struct StrBuilder_62  field1;
        } EditorMode_164_Search_s;
    } stuff;
};

static struct EditorMode_164 EditorMode_164_Cmd (  struct Pos_26  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct EditorMode_164 ) { .tag = EditorMode_164_Cmd_t, .stuff = { .EditorMode_164_Cmd_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct EditorMode_164 EditorMode_164_Search (  struct Pos_26  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct EditorMode_164 ) { .tag = EditorMode_164_Search_t, .stuff = { .EditorMode_164_Search_s = { .field0 = field0 ,  .field1 = field1 } } };
};

struct Editor_162 {
    enum CAllocator_10  f_al;
    bool  f_running;
    struct Pane_141  f_pane;
    struct Maybe_163  f_clipboard;
    struct Maybe_163  f_search_dash_term;
    struct EditorMode_164  f_mode;
    struct Maybe_163  f_msg;
};

struct envunion161 {
    enum Unit_8  (*fun) (  struct env156*  ,    struct Editor_162 *  ,    struct StrView_27  );
    struct env156 env;
};

struct env160 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env156 envinst156;
    ;
    ;
};

struct envunion166 {
    enum Unit_8  (*fun) (  struct env133*  ,    struct Pane_141 *  );
    struct env133 env;
};

struct envunion167 {
    enum Unit_8  (*fun) (  struct env139*  ,    struct Pane_141 *  );
    struct env139 env;
};

struct envunion168 {
    enum Unit_8  (*fun) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_152  ,    struct StrView_27  );
    struct env135 env;
};

struct envunion169 {
    enum Unit_8  (*fun) (  struct env148*  ,    struct Pane_141 *  ,    int32_t  );
    struct env148 env;
};

struct envunion170 {
    enum Unit_8  (*fun) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  );
    struct env126 env;
};

struct envunion171 {
    enum Unit_8  (*fun) (  struct env154*  ,    struct Editor_162 *  );
    struct env154 env;
};

struct envunion172 {
    enum Unit_8  (*fun) (  struct env150*  ,    struct Pane_141 *  );
    struct env150 env;
};

struct envunion173 {
    enum Unit_8  (*fun) (  struct env145*  ,    struct Pane_141 *  );
    struct env145 env;
};

struct envunion174 {
    enum Unit_8  (*fun) (  struct env131*  ,    struct Pane_141 *  );
    struct env131 env;
};

struct envunion175 {
    enum Unit_8  (*fun) (  struct env158*  ,    struct Editor_162 *  ,    struct StrConcat_74  );
    struct env158 env;
};

struct env165 {
    ;
    ;
    ;
    struct env133 envinst133;
    ;
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
    struct env135 envinst135;
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
    ;
    ;
    ;
    struct env126 envinst126;
    struct env154 envinst154;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env150 envinst150;
    ;
    struct env145 envinst145;
    ;
    ;
    ;
    struct env131 envinst131;
    ;
    struct env158 envinst158;
};

struct Key_178 {
    enum {
        Key_178_Escape_t,
        Key_178_Enter_t,
        Key_178_Tab_t,
        Key_178_Backspace_t,
        Key_178_Char_t,
        Key_178_Ctrl_t,
        Key_178_Up_t,
        Key_178_Down_t,
        Key_178_Left_t,
        Key_178_Right_t,
        Key_178_Home_t,
        Key_178_End_t,
        Key_178_PageUp_t,
        Key_178_PageDown_t,
        Key_178_Delete_t,
        Key_178_Insert_t,
        Key_178_F1_t,
        Key_178_F2_t,
        Key_178_F3_t,
        Key_178_F4_t,
        Key_178_F5_t,
        Key_178_F6_t,
        Key_178_F7_t,
        Key_178_F8_t,
        Key_178_F9_t,
        Key_178_F10_t,
        Key_178_F11_t,
        Key_178_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_178_Char_s;
        struct {
            char  field0;
        } Key_178_Ctrl_s;
    } stuff;
};

static struct Key_178 Key_178_Char (  char  field0 ) {
    return ( struct Key_178 ) { .tag = Key_178_Char_t, .stuff = { .Key_178_Char_s = { .field0 = field0 } } };
};

static struct Key_178 Key_178_Ctrl (  char  field0 ) {
    return ( struct Key_178 ) { .tag = Key_178_Ctrl_t, .stuff = { .Key_178_Ctrl_s = { .field0 = field0 } } };
};

struct envunion177 {
    enum Unit_8  (*fun) (  struct env165*  ,    struct Editor_162 *  ,    struct Key_178  );
    struct env165 env;
};

struct envunion179 {
    enum Unit_8  (*fun) (  struct env148*  ,    struct Pane_141 *  ,    int32_t  );
    struct env148 env;
};

struct envunion180 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

struct envunion181 {
    enum Unit_8  (*fun) (  struct env67*  ,    struct StrBuilder_62 *  );
    struct env67 env;
};

struct envunion182 {
    enum Unit_8  (*fun) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  );
    struct env126 env;
};

struct envunion183 {
    enum Unit_8  (*fun) (  struct env160*  ,    struct Editor_162 *  ,    struct StrView_27  );
    struct env160 env;
};

struct envunion184 {
    enum Unit_8  (*fun) (  struct env129*  ,    struct Pane_141 *  );
    struct env129 env;
};

struct env176 {
    struct env165 envinst165;
    ;
    struct env148 envinst148;
    ;
    ;
    ;
    struct env60 envinst60;
    ;
    struct env67 envinst67;
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
    ;
    ;
    ;
    struct env160 envinst160;
    ;
    struct env129 envinst129;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

enum Color8_191 {
    Color8_191_Black8,
    Color8_191_Red8,
    Color8_191_Green8,
    Color8_191_Yellow8,
    Color8_191_Blue8,
    Color8_191_Magenta8,
    Color8_191_Cyan8,
    Color8_191_White8,
};

enum Color16_192 {
    Color16_192_Black16,
    Color16_192_Red16,
    Color16_192_Green16,
    Color16_192_Yellow16,
    Color16_192_Blue16,
    Color16_192_Magenta16,
    Color16_192_Cyan16,
    Color16_192_White16,
    Color16_192_BrightBlack16,
    Color16_192_BrightRed16,
    Color16_192_BrightGreen16,
    Color16_192_BrightYellow16,
    Color16_192_BrightBlue16,
    Color16_192_BrightMagenta16,
    Color16_192_BrightCyan16,
    Color16_192_BrightWhite16,
};

struct RGB_193 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_190 {
    enum {
        Color_190_ColorDefault_t,
        Color_190_Color8_t,
        Color_190_Color16_t,
        Color_190_Color256_t,
        Color_190_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_191  field0;
        } Color_190_Color8_s;
        struct {
            enum Color16_192  field0;
        } Color_190_Color16_s;
        struct {
            uint8_t  field0;
        } Color_190_Color256_s;
        struct {
            struct RGB_193  field0;
        } Color_190_ColorRGB_s;
    } stuff;
};

static struct Color_190 Color_190_Color8 (  enum Color8_191  field0 ) {
    return ( struct Color_190 ) { .tag = Color_190_Color8_t, .stuff = { .Color_190_Color8_s = { .field0 = field0 } } };
};

static struct Color_190 Color_190_Color16 (  enum Color16_192  field0 ) {
    return ( struct Color_190 ) { .tag = Color_190_Color16_t, .stuff = { .Color_190_Color16_s = { .field0 = field0 } } };
};

static struct Color_190 Color_190_Color256 (  uint8_t  field0 ) {
    return ( struct Color_190 ) { .tag = Color_190_Color256_t, .stuff = { .Color_190_Color256_s = { .field0 = field0 } } };
};

static struct Color_190 Color_190_ColorRGB (  struct RGB_193  field0 ) {
    return ( struct Color_190 ) { .tag = Color_190_ColorRGB_t, .stuff = { .Color_190_ColorRGB_s = { .field0 = field0 } } };
};

struct Cell_189 {
    struct Char_65  f_c;
    struct Color_190  f_fg;
    struct Color_190  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_188 {
    struct Cell_189 *  f_ptr;
    size_t  f_count;
};

struct Screen_187 {
    enum CAllocator_10  f_al;
    struct Tui_81 *  f_tui;
    struct Slice_188  f_current;
    struct Slice_188  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_190  f_default_dash_fg;
    struct Color_190  f_default_dash_bg;
};

struct ScreenDims_194 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

struct envunion186 {
    enum Unit_8  (*fun) (  struct env123*  ,    struct Screen_187 *  ,    struct Pane_141 *  ,    struct ScreenDims_194  );
    struct env123 env;
};

struct env185 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
};

static  enum CAllocator_10   idc195 (  ) {
    return ( CAllocator_10_CAllocator );
}

struct envunion198 {
    struct TextBuf_99  (*fun) (  struct env87*  ,    enum CAllocator_10  ,    struct Pos_26  );
    struct env87 env;
};

static  void *   cast_dash_ptr208 (    struct Line_12 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of209 (    struct Line_12 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Line_12 *   zeroed206 (  ) {
    struct Line_12 *  temp207;
    struct Line_12 *  x570 = (  temp207 );
    ( ( memset ) ( ( (  cast_dash_ptr208 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of209 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Line_12 *   null_dash_ptr205 (  ) {
    return ( (  zeroed206 ) ( ) );
}

static  struct Slice_11   empty204 (  ) {
    return ( (struct Slice_11) { .f_ptr = ( (  null_dash_ptr205 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_9   mk203 (    enum CAllocator_10  al2032 ) {
    struct Slice_11  elements2033 = ( (  empty204 ) ( ) );
    return ( (struct List_9) { .f_al = (  al2032 ) , .f_elements = (  elements2033 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env213 {
    struct env6 envinst6;
    struct List_9 *  list2099;
};

struct envunion214 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Line_12  );
    struct env213 env;
};

struct ArrayIter_215 {
    struct Array_52  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_215   into_dash_iter217 (    struct Array_52  self2323 ) {
    return ( (struct ArrayIter_215) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_218 {
    enum {
        Maybe_218_None_t,
        Maybe_218_Just_t,
    } tag;
    union {
        struct {
            struct Line_12  field0;
        } Maybe_218_Just_s;
    } stuff;
};

static struct Maybe_218 Maybe_218_Just (  struct Line_12  field0 ) {
    return ( struct Maybe_218 ) { .tag = Maybe_218_Just_t, .stuff = { .Maybe_218_Just_s = { .field0 = field0 } } };
};

enum Ordering_221 {
    Ordering_221_LT,
    Ordering_221_EQ,
    Ordering_221_GT,
};

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_221   cmp220 (    size_t  l179 ,    size_t  r181 ) {
    return ( builtin_size_tcmp( (  l179 ) , (  r181 ) ) );
}

struct StrConcat_226 {
    struct StrConcat_74  field0;
    int32_t  field1;
};

static struct StrConcat_226 StrConcat_226_StrConcat (  struct StrConcat_74  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_226 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_225 {
    struct StrConcat_226  field0;
    struct Char_65  field1;
};

static struct StrConcat_225 StrConcat_225_StrConcat (  struct StrConcat_226  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_225 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_229 {
    struct StrView_27  field0;
    struct StrConcat_225  field1;
};

static struct StrConcat_229 StrConcat_229_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_225  field1 ) {
    return ( struct StrConcat_229 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_228 {
    struct StrConcat_229  field0;
    struct Char_65  field1;
};

static struct StrConcat_228 StrConcat_228_StrConcat (  struct StrConcat_229  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_228 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32232 (    size_t  x630 ) {
    return ( (int32_t ) (  x630 ) );
}

static  enum Unit_8   print_dash_str231 (    struct StrView_27  self1379 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32232 ) ( ( ( (  self1379 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1379 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str237 (    size_t  self1470 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1470 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str236 (    struct StrConcat_75  self1509 ) {
    struct StrConcat_75  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str231 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str237 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str235 (    struct StrConcat_74  self1509 ) {
    struct StrConcat_74  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str236 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str231 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str238 (    int32_t  self1446 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1446 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str234 (    struct StrConcat_226  self1509 ) {
    struct StrConcat_226  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str235 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str238 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

struct Scalar_242 {
    uint32_t  f_value;
};

struct CharDestructured_241 {
    enum {
        CharDestructured_241_Ref_t,
        CharDestructured_241_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } CharDestructured_241_Ref_s;
        struct {
            struct Scalar_242  field0;
        } CharDestructured_241_Scalar_s;
    } stuff;
};

static struct CharDestructured_241 CharDestructured_241_Ref (  struct Char_65  field0 ) {
    return ( struct CharDestructured_241 ) { .tag = CharDestructured_241_Ref_t, .stuff = { .CharDestructured_241_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_241 CharDestructured_241_Scalar (  struct Scalar_242  field0 ) {
    return ( struct CharDestructured_241 ) { .tag = CharDestructured_241_Scalar_t, .stuff = { .CharDestructured_241_Scalar_s = { .field0 = field0 } } };
};

static  bool   eq244 (    uint8_t  l116 ,    uint8_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint8_t   size_dash_u8246 (    size_t  x639 ) {
    return ( (uint8_t ) (  x639 ) );
}

static  size_t   op_dash_div247 (    size_t  l285 ,    size_t  r287 ) {
    return ( (  l285 ) / (  r287 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer245 (    uint8_t *  ptr678 ) {
    return ( (  size_dash_u8246 ) ( (  op_dash_div247 ( ( ( (size_t ) (  ptr678 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint8_t   from_dash_integral248 (    int64_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  uint32_t   size_dash_u32249 (    size_t  x633 ) {
    return ( (uint32_t ) (  x633 ) );
}

static  size_t   cast250 (    uint8_t *  x356 ) {
    return ( (size_t ) (  x356 ) );
}

static  struct CharDestructured_241   destructure243 (    struct Char_65  c712 ) {
    if ( (  eq244 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer245 ) ( ( (  c712 ) .f_ptr ) ) ) , (  from_dash_integral248 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_241_Scalar ) ( ( (struct Scalar_242) { .f_value = ( (  size_dash_u32249 ) ( ( ( (  cast250 ) ( ( (  c712 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_241_Ref ) ( (  c712 ) ) );
    }
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_221   cmp251 (    uint32_t  l164 ,    uint32_t  r166 ) {
    return ( builtin_uint32_tcmp( (  l164 ) , (  r166 ) ) );
}

static  uint32_t   from_dash_integral252 (    int64_t  x52 ) {
    return ( (uint32_t ) (  x52 ) );
}

static  uint8_t   cast255 (    uint32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  uint8_t   u32_dash_u8254 (    uint32_t  x657 ) {
    return ( (  cast255 ) ( (  x657 ) ) );
}

static  enum Unit_8   printf_dash_char240 (    struct Char_65  c758 ) {
    struct CharDestructured_241  dref759 = ( (  destructure243 ) ( (  c758 ) ) );
    if ( dref759.tag == CharDestructured_241_Ref_t ) {
        ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32232 ) ( ( ( dref759 .stuff .CharDestructured_241_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref759 .stuff .CharDestructured_241_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref759.tag == CharDestructured_241_Scalar_t ) {
            if ( (  cmp251 ( ( ( dref759 .stuff .CharDestructured_241_Scalar_s .field0 ) .f_value ) , (  from_dash_integral252 ( 127 ) ) ) == 2 ) ) {
                const char*  temp253 = ( (  from_dash_string57 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp253);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8254 ) ( ( ( dref759 .stuff .CharDestructured_241_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str239 (    struct Char_65  self1410 ) {
    ( (  printf_dash_char240 ) ( (  self1410 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str233 (    struct StrConcat_225  self1509 ) {
    struct StrConcat_225  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str234 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str239 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str230 (    struct StrConcat_229  self1509 ) {
    struct StrConcat_229  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str231 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str233 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str227 (    struct StrConcat_228  self1509 ) {
    struct StrConcat_228  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str230 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str239 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  struct StrView_27   from_dash_string256 (    uint8_t *  ptr86 ,    size_t  count88 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = (  ptr86 ) , .f_count = (  count88 ) } ) } );
}

static  uint8_t *   cast258 (    uint8_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_221   cmp261 (    uint8_t  l169 ,    uint8_t  r171 ) {
    return ( builtin_uint8_tcmp( (  l169 ) , (  r171 ) ) );
}

static  size_t   next_dash_char260 (    uint8_t *  p688 ) {
    uint8_t  pb689 = ( * (  p688 ) );
    if ( (  cmp261 ( (  pb689 ) , (  from_dash_integral248 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp261 ( (  pb689 ) , (  from_dash_integral248 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp261 ( (  pb689 ) , (  from_dash_integral248 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp261 ( (  pb689 ) , (  from_dash_integral248 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp262 = ( (  from_dash_string57 ) ( ( "(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp262);
                    exit ( 1 );
                    ( Unit_8_Unit );
                }
            }
        }
    }
}

static  struct Char_65   scan_dash_from_dash_mem259 (    uint8_t *  p700 ) {
    size_t  clen701 = ( (  next_dash_char260 ) ( (  p700 ) ) );
    if ( (  cmp220 ( (  clen701 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp263 = ( (  from_dash_string57 ) ( ( "UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp263);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( (struct Char_65) { .f_ptr = (  p700 ) , .f_num_dash_bytes = (  clen701 ) } );
}

static  struct Char_65   from_dash_charlike257 (    uint8_t *  ptr704 ,    size_t  num_dash_bytes706 ) {
    uint8_t *  ptr707 = ( ( (  cast258 ) ( (  ptr704 ) ) ) );
    return ( (  scan_dash_from_dash_mem259 ) ( (  ptr707 ) ) );
}

static  enum Unit_8   panic224 (    struct StrConcat_225  errmsg1713 ) {
    ( (  print_dash_str227 ) ( ( ( StrConcat_228_StrConcat ) ( ( ( StrConcat_229_StrConcat ) ( ( (  from_dash_string256 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Line_12 *   cast_dash_ptr264 (    struct Array_52 *  p359 ) {
    return ( (struct Line_12 * ) (  p359 ) );
}

static  int64_t   op_dash_mul266 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) * (  r196 ) );
}

static  struct Line_12 *   offset_dash_ptr265 (    struct Line_12 *  x338 ,    int64_t  count340 ) {
    struct Line_12  temp267;
    return ( (struct Line_12 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul266 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp267 ) ) ) ) ) ) ) ) );
}

static  struct Line_12 *   get_dash_ptr223 (    struct Array_52 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp220 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i2254 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic224 ) ( ( ( StrConcat_225_StrConcat ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string256 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_12 *  p2255 = ( ( (  cast_dash_ptr264 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr265 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  struct Line_12   get222 (    struct Array_52 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr223 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  size_t   op_dash_add268 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) + (  r272 ) );
}

static  struct Maybe_218   next219 (    struct ArrayIter_215 *  self2330 ) {
    if ( (  cmp220 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_218) { .tag = Maybe_218_None_t } );
    }
    struct Line_12  e2332 = ( (  get222 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add268 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_218_Just ) ( (  e2332 ) ) );
}

static  enum Unit_8   for_dash_each212 (    struct Array_52  iterable1074 ,   struct envunion214  fun1076 ) {
    struct ArrayIter_215  temp216 = ( (  into_dash_iter217 ) ( (  iterable1074 ) ) );
    struct ArrayIter_215 *  it1077 = ( &temp216 );
    while ( ( true ) ) {
        struct Maybe_218  dref1078 = ( (  next219 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_218_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_218_Just_t ) {
                struct envunion214  temp269 = (  fun1076 );
                ( temp269.fun ( &temp269.env ,  ( dref1078 .stuff .Maybe_218_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  bool   eq275 (    size_t  l126 ,    size_t  r128 ) {
    return ( (  l126 ) == (  r128 ) );
}

struct TypeSize_278 {
    size_t  f_size;
};

static  struct TypeSize_278   get_dash_typesize277 (  ) {
    struct Line_12  temp279;
    return ( (struct TypeSize_278) { .f_size = ( sizeof( ( (  temp279 ) ) ) ) } );
}

static  struct Line_12 *   cast_dash_ptr280 (    void *  p359 ) {
    return ( (struct Line_12 * ) (  p359 ) );
}

static  size_t   op_dash_mul281 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) * (  r282 ) );
}

static  struct Slice_11   allocate276 (    enum CAllocator_10  dref1954 ,    size_t  count1956 ) {
    if (!(  dref1954 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1957 = ( ( ( (  get_dash_typesize277 ) ( ) ) ) .f_size );
    struct Line_12 *  ptr1958 = ( (  cast_dash_ptr280 ) ( ( ( malloc ) ( (  op_dash_mul281 ( (  size1957 ) , (  count1956 ) ) ) ) ) ) );
    return ( (struct Slice_11) { .f_ptr = (  ptr1958 ) , .f_count = (  count1956 ) } );
}

struct env282 {
    struct Slice_11  new_dash_slice2043;
    ;
    ;
};

struct Tuple2_284 {
    struct Line_12  field0;
    int32_t  field1;
};

static struct Tuple2_284 Tuple2_284_Tuple2 (  struct Line_12  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_284 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion283 {
    enum Unit_8  (*fun) (  struct env282*  ,    struct Tuple2_284  );
    struct env282 env;
};

struct StrConcat_290 {
    struct StrConcat_74  field0;
    size_t  field1;
};

static struct StrConcat_290 StrConcat_290_StrConcat (  struct StrConcat_74  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_290 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_289 {
    struct StrConcat_290  field0;
    struct Char_65  field1;
};

static struct StrConcat_289 StrConcat_289_StrConcat (  struct StrConcat_290  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_289 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_293 {
    struct StrView_27  field0;
    struct StrConcat_289  field1;
};

static struct StrConcat_293 StrConcat_293_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_289  field1 ) {
    return ( struct StrConcat_293 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_292 {
    struct StrConcat_293  field0;
    struct Char_65  field1;
};

static struct StrConcat_292 StrConcat_292_StrConcat (  struct StrConcat_293  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_292 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str296 (    struct StrConcat_290  self1509 ) {
    struct StrConcat_290  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str235 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str237 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str295 (    struct StrConcat_289  self1509 ) {
    struct StrConcat_289  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str296 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str239 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str294 (    struct StrConcat_293  self1509 ) {
    struct StrConcat_293  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str231 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str295 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str291 (    struct StrConcat_292  self1509 ) {
    struct StrConcat_292  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str294 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str239 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic288 (    struct StrConcat_289  errmsg1713 ) {
    ( (  print_dash_str291 ) ( ( ( StrConcat_292_StrConcat ) ( ( ( StrConcat_293_StrConcat ) ( ( (  from_dash_string256 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  int64_t   size_dash_i64297 (    size_t  x594 ) {
    return ( (int64_t ) (  x594 ) );
}

static  struct Line_12 *   get_dash_ptr287 (    struct Slice_11  slice1758 ,    size_t  i1760 ) {
    if ( ( (  cmp220 ( (  i1760 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic288 ) ( ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1760 ) ) ) ,  ( (  from_dash_string256 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1758 ) .f_count ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_12 *  elem_dash_ptr1761 = ( (  offset_dash_ptr265 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  i1760 ) ) ) ) );
    return (  elem_dash_ptr1761 );
}

static  enum Unit_8   set286 (    struct Slice_11  slice1775 ,    size_t  i1777 ,    struct Line_12  x1779 ) {
    struct Line_12 *  ep1780 = ( (  get_dash_ptr287 ) ( (  slice1775 ) ,  (  i1777 ) ) );
    (*  ep1780 ) = (  x1779 );
    return ( Unit_8_Unit );
}

static  size_t   i32_dash_size298 (    int32_t  x609 ) {
    return ( (size_t ) ( (int64_t ) (  x609 ) ) );
}

static  enum Unit_8   lam285 (   struct env282* env ,    struct Tuple2_284  dref2044 ) {
    return ( (  set286 ) ( ( env->new_dash_slice2043 ) ,  ( (  i32_dash_size298 ) ( ( dref2044 .field1 ) ) ) ,  ( dref2044 .field0 ) ) );
}

struct SliceIter_301 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_302 {
    int32_t  f_from;
};

struct Zip_300 {
    struct SliceIter_301  f_left_dash_it;
    struct FromIter_302  f_right_dash_it;
};

static  struct Zip_300   into_dash_iter304 (    struct Zip_300  self911 ) {
    return (  self911 );
}

struct Maybe_305 {
    enum {
        Maybe_305_None_t,
        Maybe_305_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_284  field0;
        } Maybe_305_Just_s;
    } stuff;
};

static struct Maybe_305 Maybe_305_Just (  struct Tuple2_284  field0 ) {
    return ( struct Maybe_305 ) { .tag = Maybe_305_Just_t, .stuff = { .Maybe_305_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_218   next307 (    struct SliceIter_301 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp220 ( (  op_dash_add268 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_218) { .tag = Maybe_218_None_t } );
    }
    struct Line_12  elem1831 = ( * ( (  offset_dash_ptr265 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add268 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_218_Just ) ( (  elem1831 ) ) );
}

struct Maybe_308 {
    enum {
        Maybe_308_None_t,
        Maybe_308_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_308_Just_s;
    } stuff;
};

static struct Maybe_308 Maybe_308_Just (  int32_t  field0 ) {
    return ( struct Maybe_308 ) { .tag = Maybe_308_Just_t, .stuff = { .Maybe_308_Just_s = { .field0 = field0 } } };
};

static  int32_t   op_dash_add310 (    int32_t  l207 ,    int32_t  r209 ) {
    return ( (  l207 ) + (  r209 ) );
}

static  struct Maybe_308   next309 (    struct FromIter_302 *  dref905 ) {
    int32_t  v907 = ( ( (* dref905 ) ) .f_from );
    (* dref905 ) .f_from = (  op_dash_add310 ( ( ( (* dref905 ) ) .f_from ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( ( Maybe_308_Just ) ( (  v907 ) ) );
}

static  struct Maybe_305   next306 (    struct Zip_300 *  self914 ) {
    struct Zip_300  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_218  dref916 = ( (  next307 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_218_None_t ) {
            return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_218_Just_t ) {
                struct Maybe_308  dref918 = ( (  next309 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_308_None_t ) {
                    return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_308_Just_t ) {
                        ( (  next307 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next309 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_305_Just ) ( ( ( Tuple2_284_Tuple2 ) ( ( dref916 .stuff .Maybe_218_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_308_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each299 (    struct Zip_300  iterable1074 ,   struct envunion283  fun1076 ) {
    struct Zip_300  temp303 = ( (  into_dash_iter304 ) ( (  iterable1074 ) ) );
    struct Zip_300 *  it1077 = ( &temp303 );
    while ( ( true ) ) {
        struct Maybe_305  dref1078 = ( (  next306 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_305_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_305_Just_t ) {
                struct envunion283  temp311 = (  fun1076 );
                ( temp311.fun ( &temp311.env ,  ( dref1078 .stuff .Maybe_305_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_301   into_dash_iter313 (    struct Slice_11  self1823 ) {
    return ( (struct SliceIter_301) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_302   into_dash_iter314 (    struct FromIter_302  it903 ) {
    return (  it903 );
}

static  struct Zip_300   zip312 (    struct Slice_11  left922 ,    struct FromIter_302  right924 ) {
    struct SliceIter_301  left_dash_it925 = ( (  into_dash_iter313 ) ( (  left922 ) ) );
    struct FromIter_302  right_dash_it926 = ( (  into_dash_iter314 ) ( (  right924 ) ) );
    return ( (struct Zip_300) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct FromIter_302   from315 (    int32_t  f900 ) {
    return ( (struct FromIter_302) { .f_from = (  f900 ) } );
}

static  void *   cast_dash_ptr317 (    struct Line_12 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free316 (    enum CAllocator_10  dref1960 ,    struct Slice_11  slice1962 ) {
    if (!(  dref1960 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr317 ) ( ( (  slice1962 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full274 (   struct env1* env ,    struct List_9 *  list2042 ) {
    if ( (  eq275 ( ( ( * (  list2042 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2042 ) .f_elements = ( (  allocate276 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( env->starting_dash_size2037 ) ) );
    } else {
        if ( (  eq275 ( ( ( * (  list2042 ) ) .f_count ) , ( ( ( * (  list2042 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_11  new_dash_slice2043 = ( (  allocate276 ) ( ( ( * (  list2042 ) ) .f_al ) ,  (  op_dash_mul281 ( ( ( * (  list2042 ) ) .f_count ) , ( env->growth_dash_factor2038 ) ) ) ) );
            struct env282 envinst282 = {
                .new_dash_slice2043 =  new_dash_slice2043 ,
            };
            struct envunion283  fun2047 = ( (struct envunion283){ .fun = (  enum Unit_8  (*) (  struct env282*  ,    struct Tuple2_284  ) )lam285 , .env =  envinst282 } );
            ( (  for_dash_each299 ) ( ( (  zip312 ) ( ( ( * (  list2042 ) ) .f_elements ) ,  ( (  from315 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2047 ) ) );
            ( (  free316 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( ( * (  list2042 ) ) .f_elements ) ) );
            (*  list2042 ) .f_elements = (  new_dash_slice2043 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add272 (   struct env6* env ,    struct List_9 *  list2050 ,    struct Line_12  elem2052 ) {
    struct envunion7  temp273 = ( (struct envunion7){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full274 , .env =  env->envinst1 } );
    ( temp273.fun ( &temp273.env ,  (  list2050 ) ) );
    ( (  set286 ) ( ( ( * (  list2050 ) ) .f_elements ) ,  ( ( * (  list2050 ) ) .f_count ) ,  (  elem2052 ) ) );
    (*  list2050 ) .f_count = (  op_dash_add268 ( ( ( * (  list2050 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam270 (   struct env213* env ,    struct Line_12  x2103 ) {
    struct envunion47  temp271 = ( (struct envunion47){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add272 , .env =  env->envinst6 } );
    return ( temp271.fun ( &temp271.env ,  ( env->list2099 ) ,  (  x2103 ) ) );
}

static  enum Unit_8   add_dash_all211 (   struct env46* env ,    struct List_9 *  list2099 ,    struct Array_52  it2101 ) {
    struct env213 envinst213 = {
        .envinst6 = env->envinst6 ,
        .list2099 =  list2099 ,
    };
    ( (  for_dash_each212 ) ( (  it2101 ) ,  ( (struct envunion214){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Line_12  ) )lam270 , .env =  envinst213 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_9   from_dash_iter201 (   struct env50* env ,    struct Array_52  iter2140 ,    enum CAllocator_10  al2142 ) {
    struct List_9  temp202 = ( (  mk203 ) ( (  al2142 ) ) );
    struct List_9 *  list2143 = ( &temp202 );
    struct envunion51  temp210 = ( (struct envunion51){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Array_52  ) )add_dash_all211 , .env =  env->envinst46 } );
    ( temp210.fun ( &temp210.env ,  (  list2143 ) ,  (  iter2140 ) ) );
    return ( * (  list2143 ) );
}

static  struct Array_52   from_dash_listlike318 (    struct Array_52  self330 ) {
    return (  self330 );
}

static  void *   cast_dash_ptr325 (    struct Highlight_17 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of326 (    struct Highlight_17 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Highlight_17 *   zeroed323 (  ) {
    struct Highlight_17 *  temp324;
    struct Highlight_17 *  x570 = (  temp324 );
    ( ( memset ) ( ( (  cast_dash_ptr325 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of326 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Highlight_17 *   null_dash_ptr322 (  ) {
    return ( (  zeroed323 ) ( ) );
}

static  struct Slice_16   empty321 (  ) {
    return ( (struct Slice_16) { .f_ptr = ( (  null_dash_ptr322 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_15   mk320 (    enum CAllocator_10  al2032 ) {
    struct Slice_16  elements2033 = ( (  empty321 ) ( ) );
    return ( (struct List_15) { .f_al = (  al2032 ) , .f_elements = (  elements2033 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Line_12   mk_dash_line319 (    struct List_13  initial3689 ) {
    return ( (struct Line_12) { .f_line = (  initial3689 ) , .f_invalidated = ( true ) , .f_highlights = ( (  mk320 ) ( ( (  initial3689 ) .f_al ) ) ) } );
}

static  void *   cast_dash_ptr332 (    uint8_t * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of333 (    uint8_t *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint8_t *   zeroed330 (  ) {
    uint8_t *  temp331;
    uint8_t *  x570 = (  temp331 );
    ( ( memset ) ( ( (  cast_dash_ptr332 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of333 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   null_dash_ptr329 (  ) {
    return ( (  zeroed330 ) ( ) );
}

static  struct Slice_14   empty328 (  ) {
    return ( (struct Slice_14) { .f_ptr = ( (  null_dash_ptr329 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_13   mk327 (    enum CAllocator_10  al2032 ) {
    struct Slice_14  elements2033 = ( (  empty328 ) ( ) );
    return ( (struct List_13) { .f_al = (  al2032 ) , .f_elements = (  elements2033 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr340 (    struct Changeset_32 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of341 (    struct Changeset_32 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Changeset_32 *   zeroed338 (  ) {
    struct Changeset_32 *  temp339;
    struct Changeset_32 *  x570 = (  temp339 );
    ( ( memset ) ( ( (  cast_dash_ptr340 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of341 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Changeset_32 *   null_dash_ptr337 (  ) {
    return ( (  zeroed338 ) ( ) );
}

static  struct Slice_31   empty336 (  ) {
    return ( (struct Slice_31) { .f_ptr = ( (  null_dash_ptr337 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_30   mk335 (    enum CAllocator_10  al2032 ) {
    struct Slice_31  elements2033 = ( (  empty336 ) ( ) );
    return ( (struct List_30) { .f_al = (  al2032 ) , .f_elements = (  elements2033 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_100   mk_dash_actions334 (    enum CAllocator_10  al3677 ) {
    return ( (struct Actions_100) { .f_list = ( (  mk335 ) ( (  al3677 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( ChangesetInputType_101_NoChangeset ) } );
}

static  struct TextBuf_99   mk199 (   struct env87* env ,    enum CAllocator_10  al3696 ,    struct Pos_26  cursor_dash_pos3698 ) {
    struct envunion88  temp200 = ( (struct envunion88){ .fun = (  struct List_9  (*) (  struct env50*  ,    struct Array_52  ,    enum CAllocator_10  ) )from_dash_iter201 , .env =  env->envinst50 } );
    return ( (struct TextBuf_99) { .f_al = (  al3696 ) , .f_buf = ( temp200.fun ( &temp200.env ,  ( (  from_dash_listlike318 ) ( ( (struct Array_52) { ._arr = { ( (  mk_dash_line319 ) ( ( (  mk327 ) ( (  al3696 ) ) ) ) ) } } ) ) ) ,  (  al3696 ) ) ) , .f_actions = ( (  mk_dash_actions334 ) ( (  al3696 ) ) ) } );
}

static  struct Pos_26   mk342 (    int32_t  line3623 ,    int32_t  bi3625 ) {
    return ( (struct Pos_26) { .f_line = (  line3623 ) , .f_bi = (  bi3625 ) } );
}

struct Slice_343 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  const char* *   offset_dash_ptr345 (    const char* *  x338 ,    int64_t  count340 ) {
    const char*  temp346;
    return ( (const char* * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul266 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp346 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral347 (    int64_t  x46 ) {
    return (  x46 );
}

static  size_t   op_dash_sub348 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) - (  r277 ) );
}

static  struct Slice_343   get344 (  ) {
    return ( (struct Slice_343) { .f_ptr = ( (  offset_dash_ptr345 ) ( ( _global_argv ) ,  (  from_dash_integral347 ( 1 ) ) ) ) , .f_count = (  op_dash_sub348 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

struct Maybe_352 {
    enum {
        Maybe_352_None_t,
        Maybe_352_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_352_Just_s;
    } stuff;
};

static struct Maybe_352 Maybe_352_Just (  const char*  field0 ) {
    return ( struct Maybe_352 ) { .tag = Maybe_352_Just_t, .stuff = { .Maybe_352_Just_s = { .field0 = field0 } } };
};

static  const char*   undefined353 (  ) {
    const char*  temp354;
    return (  temp354 );
}

static  const char*   or_dash_fail351 (    struct Maybe_352  x1726 ,    struct StrConcat_289  errmsg1728 ) {
    struct Maybe_352  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_352_None_t ) {
        ( (  panic288 ) ( (  errmsg1728 ) ) );
        return ( (  undefined353 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_352_Just_t ) {
            return ( dref1729 .stuff .Maybe_352_Just_s .field0 );
        }
    }
}

static  struct Maybe_352   try_dash_get355 (    struct Slice_343  slice1764 ,    size_t  i1766 ) {
    if ( ( (  cmp220 ( (  i1766 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i1766 ) , ( (  slice1764 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
    }
    const char* *  elem_dash_ptr1767 = ( (  offset_dash_ptr345 ) ( ( (  slice1764 ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  i1766 ) ) ) ) );
    return ( ( Maybe_352_Just ) ( ( * (  elem_dash_ptr1767 ) ) ) );
}

static  const char*   get350 (    struct Slice_343  slice1770 ,    size_t  i1772 ) {
    return ( (  or_dash_fail351 ) ( ( (  try_dash_get355 ) ( (  slice1770 ) ,  (  i1772 ) ) ) ,  ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1772 ) ) ) ,  ( (  from_dash_string256 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1770 ) .f_count ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get349 (    struct Slice_343  self1868 ,    size_t  idx1870 ) {
    return ( (  get350 ) ( (  self1868 ) ,  (  idx1870 ) ) );
}

struct envunion357 {
    enum Unit_8  (*fun) (  struct env93*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
    struct env93 env;
};

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_221   cmp361 (    int32_t  l159 ,    int32_t  r161 ) {
    return ( builtin_int32_tcmp( (  l159 ) , (  r161 ) ) );
}

static  enum Ordering_221   cmp360 (    struct Pos_26  l3616 ,    struct Pos_26  r3618 ) {
    enum Ordering_221  dref3619 = ( (  cmp361 ) ( ( (  l3616 ) .f_line ) ,  ( (  r3618 ) .f_line ) ) );
    switch (  dref3619 ) {
        case Ordering_221_EQ : {
            return ( (  cmp361 ) ( ( (  l3616 ) .f_bi ) ,  ( (  r3618 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_221  els3620 =  dref3619;
            return (  els3620 );
            break;
        }
    }
}

static  struct Pos_26   min359 (    struct Pos_26  l1236 ,    struct Pos_26  r1238 ) {
    if ( (  cmp360 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Pos_26   max362 (    struct Pos_26  l1315 ,    struct Pos_26  r1317 ) {
    if ( (  cmp360 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  bool   eq364 (    int32_t  l106 ,    int32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq363 (    struct Pos_26  l3611 ,    struct Pos_26  r3613 ) {
    return ( (  eq364 ( ( (  l3611 ) .f_line ) , ( (  r3613 ) .f_line ) ) ) && (  eq364 ( ( (  l3611 ) .f_bi ) , ( (  r3613 ) .f_bi ) ) ) );
}

static  size_t   size365 (    struct List_9 *  l2134 ) {
    return ( ( * (  l2134 ) ) .f_count );
}

static  struct Line_12 *   get_dash_ptr370 (    struct List_9 *  list2002 ,    size_t  i2004 ) {
    if ( ( (  cmp220 ( (  i2004 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i2004 ) , ( ( * (  list2002 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic288 ) ( ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2004 ) ) ) ,  ( (  from_dash_string256 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2002 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr287 ) ( ( ( * (  list2002 ) ) .f_elements ) ,  (  i2004 ) ) );
}

static  struct Line_12   get369 (    struct List_9 *  list2012 ,    size_t  i2014 ) {
    return ( * ( (  get_dash_ptr370 ) ( (  list2012 ) ,  (  i2014 ) ) ) );
}

static  uint8_t *   offset_dash_ptr373 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp374;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul266 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp374 ) ) ) ) ) ) ) ) );
}

static  size_t   min375 (    size_t  l1236 ,    size_t  r1238 ) {
    if ( (  cmp220 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Slice_14   subslice372 (    struct Slice_14  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    uint8_t *  begin_dash_ptr1788 = ( (  offset_dash_ptr373 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp220 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp220 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_14) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub348 ( ( (  min375 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_14) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

static  struct Slice_14   from371 (    struct Slice_14  slice1792 ,    size_t  from1794 ) {
    return ( (  subslice372 ) ( (  slice1792 ) ,  (  from1794 ) ,  ( (  slice1792 ) .f_count ) ) );
}

static  struct Slice_14   to_dash_slice376 (    struct List_13  l2127 ) {
    uint8_t *  ptr2128 = ( ( (  l2127 ) .f_elements ) .f_ptr );
    return ( (struct Slice_14) { .f_ptr = (  ptr2128 ) , .f_count = ( (  l2127 ) .f_count ) } );
}

static  enum Unit_8   set377 (    struct List_9 *  list2022 ,    size_t  i2024 ,    struct Line_12  elem2026 ) {
    if ( ( (  cmp220 ( (  i2024 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i2024 ) , ( ( * (  list2022 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic288 ) ( ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2024 ) ) ) ,  ( (  from_dash_string256 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2022 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set286 ) ( ( ( * (  list2022 ) ) .f_elements ) ,  (  i2024 ) ,  (  elem2026 ) ) );
    return ( Unit_8_Unit );
}

struct env384 {
    struct env19 envinst19;
    struct List_13 *  list2099;
};

struct envunion385 {
    enum Unit_8  (*fun) (  struct env384*  ,    uint8_t  );
    struct env384 env;
};

struct SliceIter_386 {
    struct Slice_14  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_386   into_dash_iter388 (    struct Slice_14  self1823 ) {
    return ( (struct SliceIter_386) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_389 {
    enum {
        Maybe_389_None_t,
        Maybe_389_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_389_Just_s;
    } stuff;
};

static struct Maybe_389 Maybe_389_Just (  uint8_t  field0 ) {
    return ( struct Maybe_389 ) { .tag = Maybe_389_Just_t, .stuff = { .Maybe_389_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_389   next390 (    struct SliceIter_386 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp220 ( (  op_dash_add268 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_389) { .tag = Maybe_389_None_t } );
    }
    uint8_t  elem1831 = ( * ( (  offset_dash_ptr373 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add268 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_389_Just ) ( (  elem1831 ) ) );
}

static  enum Unit_8   for_dash_each383 (    struct Slice_14  iterable1074 ,   struct envunion385  fun1076 ) {
    struct SliceIter_386  temp387 = ( (  into_dash_iter388 ) ( (  iterable1074 ) ) );
    struct SliceIter_386 *  it1077 = ( &temp387 );
    while ( ( true ) ) {
        struct Maybe_389  dref1078 = ( (  next390 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_389_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_389_Just_t ) {
                struct envunion385  temp391 = (  fun1076 );
                ( temp391.fun ( &temp391.env ,  ( dref1078 .stuff .Maybe_389_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct TypeSize_399 {
    size_t  f_size;
};

static  struct TypeSize_399   get_dash_typesize398 (  ) {
    uint8_t  temp400;
    return ( (struct TypeSize_399) { .f_size = ( sizeof( ( (  temp400 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr401 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_14   allocate397 (    enum CAllocator_10  dref1954 ,    size_t  count1956 ) {
    if (!(  dref1954 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1957 = ( ( ( (  get_dash_typesize398 ) ( ) ) ) .f_size );
    uint8_t *  ptr1958 = ( (  cast_dash_ptr401 ) ( ( ( malloc ) ( (  op_dash_mul281 ( (  size1957 ) , (  count1956 ) ) ) ) ) ) );
    return ( (struct Slice_14) { .f_ptr = (  ptr1958 ) , .f_count = (  count1956 ) } );
}

struct env402 {
    struct Slice_14  new_dash_slice2043;
    ;
    ;
};

struct Tuple2_404 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_404 Tuple2_404_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_404 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion403 {
    enum Unit_8  (*fun) (  struct env402*  ,    struct Tuple2_404  );
    struct env402 env;
};

static  uint8_t *   get_dash_ptr407 (    struct Slice_14  slice1758 ,    size_t  i1760 ) {
    if ( ( (  cmp220 ( (  i1760 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic288 ) ( ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1760 ) ) ) ,  ( (  from_dash_string256 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1758 ) .f_count ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1761 = ( (  offset_dash_ptr373 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  i1760 ) ) ) ) );
    return (  elem_dash_ptr1761 );
}

static  enum Unit_8   set406 (    struct Slice_14  slice1775 ,    size_t  i1777 ,    uint8_t  x1779 ) {
    uint8_t *  ep1780 = ( (  get_dash_ptr407 ) ( (  slice1775 ) ,  (  i1777 ) ) );
    (*  ep1780 ) = (  x1779 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam405 (   struct env402* env ,    struct Tuple2_404  dref2044 ) {
    return ( (  set406 ) ( ( env->new_dash_slice2043 ) ,  ( (  i32_dash_size298 ) ( ( dref2044 .field1 ) ) ) ,  ( dref2044 .field0 ) ) );
}

struct Zip_409 {
    struct SliceIter_386  f_left_dash_it;
    struct FromIter_302  f_right_dash_it;
};

static  struct Zip_409   into_dash_iter411 (    struct Zip_409  self911 ) {
    return (  self911 );
}

struct Maybe_412 {
    enum {
        Maybe_412_None_t,
        Maybe_412_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_404  field0;
        } Maybe_412_Just_s;
    } stuff;
};

static struct Maybe_412 Maybe_412_Just (  struct Tuple2_404  field0 ) {
    return ( struct Maybe_412 ) { .tag = Maybe_412_Just_t, .stuff = { .Maybe_412_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_412   next413 (    struct Zip_409 *  self914 ) {
    struct Zip_409  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_389  dref916 = ( (  next390 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_389_None_t ) {
            return ( (struct Maybe_412) { .tag = Maybe_412_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_389_Just_t ) {
                struct Maybe_308  dref918 = ( (  next309 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_308_None_t ) {
                    return ( (struct Maybe_412) { .tag = Maybe_412_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_308_Just_t ) {
                        ( (  next390 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next309 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_412_Just ) ( ( ( Tuple2_404_Tuple2 ) ( ( dref916 .stuff .Maybe_389_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_308_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each408 (    struct Zip_409  iterable1074 ,   struct envunion403  fun1076 ) {
    struct Zip_409  temp410 = ( (  into_dash_iter411 ) ( (  iterable1074 ) ) );
    struct Zip_409 *  it1077 = ( &temp410 );
    while ( ( true ) ) {
        struct Maybe_412  dref1078 = ( (  next413 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_412_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_412_Just_t ) {
                struct envunion403  temp414 = (  fun1076 );
                ( temp414.fun ( &temp414.env ,  ( dref1078 .stuff .Maybe_412_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_409   zip415 (    struct Slice_14  left922 ,    struct FromIter_302  right924 ) {
    struct SliceIter_386  left_dash_it925 = ( (  into_dash_iter388 ) ( (  left922 ) ) );
    struct FromIter_302  right_dash_it926 = ( (  into_dash_iter314 ) ( (  right924 ) ) );
    return ( (struct Zip_409) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr417 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free416 (    enum CAllocator_10  dref1960 ,    struct Slice_14  slice1962 ) {
    if (!(  dref1960 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr417 ) ( ( (  slice1962 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full396 (   struct env2* env ,    struct List_13 *  list2042 ) {
    if ( (  eq275 ( ( ( * (  list2042 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2042 ) .f_elements = ( (  allocate397 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( env->starting_dash_size2037 ) ) );
    } else {
        if ( (  eq275 ( ( ( * (  list2042 ) ) .f_count ) , ( ( ( * (  list2042 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_14  new_dash_slice2043 = ( (  allocate397 ) ( ( ( * (  list2042 ) ) .f_al ) ,  (  op_dash_mul281 ( ( ( * (  list2042 ) ) .f_count ) , ( env->growth_dash_factor2038 ) ) ) ) );
            struct env402 envinst402 = {
                .new_dash_slice2043 =  new_dash_slice2043 ,
            };
            struct envunion403  fun2047 = ( (struct envunion403){ .fun = (  enum Unit_8  (*) (  struct env402*  ,    struct Tuple2_404  ) )lam405 , .env =  envinst402 } );
            ( (  for_dash_each408 ) ( ( (  zip415 ) ( ( ( * (  list2042 ) ) .f_elements ) ,  ( (  from315 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2047 ) ) );
            ( (  free416 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( ( * (  list2042 ) ) .f_elements ) ) );
            (*  list2042 ) .f_elements = (  new_dash_slice2043 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add394 (   struct env19* env ,    struct List_13 *  list2050 ,    uint8_t  elem2052 ) {
    struct envunion20  temp395 = ( (struct envunion20){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_13 *  ) )grow_dash_if_dash_full396 , .env =  env->envinst2 } );
    ( temp395.fun ( &temp395.env ,  (  list2050 ) ) );
    ( (  set406 ) ( ( ( * (  list2050 ) ) .f_elements ) ,  ( ( * (  list2050 ) ) .f_count ) ,  (  elem2052 ) ) );
    (*  list2050 ) .f_count = (  op_dash_add268 ( ( ( * (  list2050 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam392 (   struct env384* env ,    uint8_t  x2103 ) {
    struct envunion49  temp393 = ( (struct envunion49){ .fun = (  enum Unit_8  (*) (  struct env19*  ,    struct List_13 *  ,    uint8_t  ) )add394 , .env =  env->envinst19 } );
    return ( temp393.fun ( &temp393.env ,  ( env->list2099 ) ,  (  x2103 ) ) );
}

static  enum Unit_8   add_dash_all382 (   struct env48* env ,    struct List_13 *  list2099 ,    struct Slice_14  it2101 ) {
    struct env384 envinst384 = {
        .envinst19 = env->envinst19 ,
        .list2099 =  list2099 ,
    };
    ( (  for_dash_each383 ) ( (  it2101 ) ,  ( (struct envunion385){ .fun = (  enum Unit_8  (*) (  struct env384*  ,    uint8_t  ) )lam392 , .env =  envinst384 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_13   from_dash_iter379 (   struct env53* env ,    struct Slice_14  iter2140 ,    enum CAllocator_10  al2142 ) {
    struct List_13  temp380 = ( (  mk327 ) ( (  al2142 ) ) );
    struct List_13 *  list2143 = ( &temp380 );
    struct envunion54  temp381 = ( (struct envunion54){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all382 , .env =  env->envinst48 } );
    ( temp381.fun ( &temp381.env ,  (  list2143 ) ,  (  iter2140 ) ) );
    return ( * (  list2143 ) );
}

static  struct StrView_27   or_dash_else419 (    struct Maybe_163  self1733 ,    struct StrView_27  alt1735 ) {
    struct Maybe_163  dref1736 = (  self1733 );
    if ( dref1736.tag == Maybe_163_None_t ) {
        return (  alt1735 );
    }
    else {
        if ( dref1736.tag == Maybe_163_Just_t ) {
            return ( dref1736 .stuff .Maybe_163_Just_s .field0 );
        }
    }
}

struct LineIter_421 {
    struct StrView_27  f_og;
    size_t  f_last;
};

static  uint8_t   undefined425 (  ) {
    uint8_t  temp426;
    return (  temp426 );
}

static  uint8_t   or_dash_fail424 (    struct Maybe_389  x1726 ,    struct StrConcat_289  errmsg1728 ) {
    struct Maybe_389  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_389_None_t ) {
        ( (  panic288 ) ( (  errmsg1728 ) ) );
        return ( (  undefined425 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_389_Just_t ) {
            return ( dref1729 .stuff .Maybe_389_Just_s .field0 );
        }
    }
}

static  struct Maybe_389   try_dash_get427 (    struct Slice_14  slice1764 ,    size_t  i1766 ) {
    if ( ( (  cmp220 ( (  i1766 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i1766 ) , ( (  slice1764 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_389) { .tag = Maybe_389_None_t } );
    }
    uint8_t *  elem_dash_ptr1767 = ( (  offset_dash_ptr373 ) ( ( (  slice1764 ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  i1766 ) ) ) ) );
    return ( ( Maybe_389_Just ) ( ( * (  elem_dash_ptr1767 ) ) ) );
}

static  uint8_t   get423 (    struct Slice_14  slice1770 ,    size_t  i1772 ) {
    return ( (  or_dash_fail424 ) ( ( (  try_dash_get427 ) ( (  slice1770 ) ,  (  i1772 ) ) ) ,  ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1772 ) ) ) ,  ( (  from_dash_string256 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1770 ) .f_count ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   char_dash_u8428 (    struct Char_65  c718 ) {
    struct CharDestructured_241  dref719 = ( (  destructure243 ) ( (  c718 ) ) );
    if ( dref719.tag == CharDestructured_241_Ref_t ) {
        return ( * ( ( dref719 .stuff .CharDestructured_241_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref719.tag == CharDestructured_241_Scalar_t ) {
            return ( (  u32_dash_u8254 ) ( ( ( dref719 .stuff .CharDestructured_241_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct StrView_27   byte_dash_substr429 (    struct StrView_27  s2184 ,    size_t  from2186 ,    size_t  to2188 ) {
    return ( (struct StrView_27) { .f_contents = ( (  subslice372 ) ( ( (  s2184 ) .f_contents ) ,  (  from2186 ) ,  (  to2188 ) ) ) } );
}

static  struct Maybe_163   next422 (    struct LineIter_421 *  self2420 ) {
    if ( (  cmp220 ( ( ( * (  self2420 ) ) .f_last ) , ( ( ( ( * (  self2420 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_163) { .tag = Maybe_163_None_t } );
    }
    size_t  i2421 = ( ( * (  self2420 ) ) .f_last );
    while ( ( (  cmp220 ( (  i2421 ) , ( ( ( ( * (  self2420 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq244 ( ( (  get423 ) ( ( ( ( * (  self2420 ) ) .f_og ) .f_contents ) ,  (  i2421 ) ) ) , ( (  char_dash_u8428 ) ( ( (  from_dash_charlike257 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2421 = (  op_dash_add268 ( (  i2421 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_27  line2422 = ( (  byte_dash_substr429 ) ( ( ( * (  self2420 ) ) .f_og ) ,  ( ( * (  self2420 ) ) .f_last ) ,  (  i2421 ) ) );
    if ( (  cmp220 ( (  i2421 ) , ( ( ( ( * (  self2420 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2421 = (  op_dash_add268 ( (  i2421 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2420 ) .f_last = (  i2421 );
    return ( ( Maybe_163_Just ) ( (  line2422 ) ) );
}

static  struct LineIter_421   into_dash_iter431 (    struct LineIter_421  self2417 ) {
    return (  self2417 );
}

static  struct Maybe_163   head420 (    struct LineIter_421  it1142 ) {
    struct LineIter_421  temp430 = ( (  into_dash_iter431 ) ( (  it1142 ) ) );
    return ( (  next422 ) ( ( &temp430 ) ) );
}

static  struct LineIter_421   lines432 (    struct StrView_27  s2414 ) {
    return ( (struct LineIter_421) { .f_og = (  s2414 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env437 {
    ;
    struct Char_65  c2223;
};

struct envunion438 {
    bool  (*fun) (  struct env437*  ,    struct Char_65  );
    struct env437 env;
};

struct SplitIter_436 {
    struct StrView_27  f_og;
    size_t  f_last;
    struct envunion438  f_fun;
};

struct Drop_435 {
    struct SplitIter_436  field0;
    size_t  field1;
};

static struct Drop_435 Drop_435_Drop (  struct SplitIter_436  field0 ,  size_t  field1 ) {
    return ( struct Drop_435 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_434 {
    struct Drop_435  f_left_dash_it;
    struct FromIter_302  f_right_dash_it;
};

static  struct Zip_434   into_dash_iter439 (    struct Zip_434  self911 ) {
    return (  self911 );
}

static  struct Drop_435   into_dash_iter441 (    struct Drop_435  self845 ) {
    return (  self845 );
}

static  struct Zip_434   zip440 (    struct Drop_435  left922 ,    struct FromIter_302  right924 ) {
    struct Drop_435  left_dash_it925 = ( (  into_dash_iter441 ) ( (  left922 ) ) );
    struct FromIter_302  right_dash_it926 = ( (  into_dash_iter314 ) ( (  right924 ) ) );
    return ( (struct Zip_434) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct SplitIter_436   into_dash_iter443 (    struct SplitIter_436  self2228 ) {
    return (  self2228 );
}

static  struct Drop_435   drop442 (    struct SplitIter_436  iterable852 ,    size_t  i854 ) {
    struct SplitIter_436  it855 = ( (  into_dash_iter443 ) ( (  iterable852 ) ) );
    return ( ( Drop_435_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SplitIter_436   split_dash_by_dash_filter445 (    struct StrView_27  s2216 ,   struct envunion438  fun2218 ) {
    return ( (struct SplitIter_436) { .f_og = (  s2216 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2218 ) } );
}

struct Tuple2_448 {
    struct CharDestructured_241  field0;
    struct CharDestructured_241  field1;
};

static struct Tuple2_448 Tuple2_448_Tuple2 (  struct CharDestructured_241  field0 ,  struct CharDestructured_241  field1 ) {
    return ( struct Tuple2_448 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int64_t   op_dash_add449 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) + (  r186 ) );
}

static  bool   eq451 (    uint32_t  l111 ,    uint32_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  bool   eq450 (    struct Scalar_242  l724 ,    struct Scalar_242  r726 ) {
    return (  eq451 ( ( (  l724 ) .f_value ) , ( (  r726 ) .f_value ) ) );
}

static  bool   eq447 (    struct Char_65  l729 ,    struct Char_65  r731 ) {
    if ( ( !  eq275 ( ( (  l729 ) .f_num_dash_bytes ) , ( (  r731 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_448  dref732 = ( ( Tuple2_448_Tuple2 ) ( ( (  destructure243 ) ( (  l729 ) ) ) ,  ( (  destructure243 ) ( (  r731 ) ) ) ) );
    if ( dref732 .field0.tag == CharDestructured_241_Ref_t && dref732 .field1.tag == CharDestructured_241_Ref_t ) {
        int64_t  i735 = (  from_dash_integral347 ( 0 ) );
        while ( (  cmp220 ( ( (size_t ) (  i735 ) ) , ( ( dref732 .field0 .stuff .CharDestructured_241_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq244 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field0 .stuff .CharDestructured_241_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field1 .stuff .CharDestructured_241_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) ) ) ) {
                return ( false );
            }
            i735 = (  op_dash_add449 ( (  i735 ) , (  from_dash_integral347 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref732 .field0.tag == CharDestructured_241_Scalar_t && dref732 .field1.tag == CharDestructured_241_Scalar_t ) {
            return (  eq450 ( ( dref732 .field0 .stuff .CharDestructured_241_Scalar_s .field0 ) , ( dref732 .field1 .stuff .CharDestructured_241_Scalar_s .field0 ) ) );
        }
        else {
            if ( dref732 .field0.tag == CharDestructured_241_Scalar_t && dref732 .field1.tag == CharDestructured_241_Ref_t ) {
                return (  eq244 ( ( (  u32_dash_u8254 ) ( ( ( dref732 .field0 .stuff .CharDestructured_241_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref732 .field1 .stuff .CharDestructured_241_Ref_s .field0 ) .f_ptr ) ) ) );
            }
            else {
                if ( dref732 .field0.tag == CharDestructured_241_Ref_t && dref732 .field1.tag == CharDestructured_241_Scalar_t ) {
                    return (  eq244 ( ( (  u32_dash_u8254 ) ( ( ( dref732 .field1 .stuff .CharDestructured_241_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref732 .field0 .stuff .CharDestructured_241_Ref_s .field0 ) .f_ptr ) ) ) );
                }
            }
        }
    }
}

static  bool   lam446 (   struct env437* env ,    struct Char_65  cc2225 ) {
    return (  eq447 ( (  cc2225 ) , ( env->c2223 ) ) );
}

static  struct SplitIter_436   split_dash_by_dash_each444 (    struct StrView_27  s2221 ,    struct Char_65  c2223 ) {
    struct env437 envinst437 = {
        .c2223 =  c2223 ,
    };
    return ( (  split_dash_by_dash_filter445 ) ( (  s2221 ) ,  ( (struct envunion438){ .fun = (  bool  (*) (  struct env437*  ,    struct Char_65  ) )lam446 , .env =  envinst437 } ) ) );
}

struct Tuple2_454 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct Tuple2_454 Tuple2_454_Tuple2 (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_454 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_453 {
    enum {
        Maybe_453_None_t,
        Maybe_453_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_454  field0;
        } Maybe_453_Just_s;
    } stuff;
};

static struct Maybe_453 Maybe_453_Just (  struct Tuple2_454  field0 ) {
    return ( struct Maybe_453 ) { .tag = Maybe_453_Just_t, .stuff = { .Maybe_453_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_163   next457 (    struct SplitIter_436 *  self2231 ) {
    if ( (  cmp220 ( ( ( * (  self2231 ) ) .f_last ) , ( ( ( ( * (  self2231 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_163) { .tag = Maybe_163_None_t } );
    }
    size_t  i2232 = ( ( * (  self2231 ) ) .f_last );
    while ( (  cmp220 ( (  i2232 ) , ( ( ( ( * (  self2231 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2233 = ( (  get_dash_ptr407 ) ( ( ( ( * (  self2231 ) ) .f_og ) .f_contents ) ,  (  i2232 ) ) );
        struct Char_65  c2234 = ( (  scan_dash_from_dash_mem259 ) ( (  ptr2233 ) ) );
        struct envunion438  temp458 = ( ( * (  self2231 ) ) .f_fun );
        if ( ( temp458.fun ( &temp458.env ,  (  c2234 ) ) ) ) {
            break;
        }
        i2232 = (  op_dash_add268 ( (  i2232 ) , ( (  next_dash_char260 ) ( (  ptr2233 ) ) ) ) );
    }
    struct StrView_27  line2235 = ( (  byte_dash_substr429 ) ( ( ( * (  self2231 ) ) .f_og ) ,  ( ( * (  self2231 ) ) .f_last ) ,  (  i2232 ) ) );
    i2232 = (  op_dash_add268 ( (  i2232 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2231 ) .f_last = (  i2232 );
    return ( ( Maybe_163_Just ) ( (  line2235 ) ) );
}

static  struct Maybe_163   next456 (    struct Drop_435 *  dref847 ) {
    while ( (  cmp220 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next457 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub348 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next457 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Maybe_453   next455 (    struct Zip_434 *  self914 ) {
    struct Zip_434  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_163  dref916 = ( (  next456 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_163_None_t ) {
            return ( (struct Maybe_453) { .tag = Maybe_453_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_163_Just_t ) {
                struct Maybe_308  dref918 = ( (  next309 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_308_None_t ) {
                    return ( (struct Maybe_453) { .tag = Maybe_453_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_308_Just_t ) {
                        ( (  next456 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next309 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_453_Just ) ( ( ( Tuple2_454_Tuple2 ) ( ( dref916 .stuff .Maybe_163_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_308_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion461 {
    struct List_13  (*fun) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  );
    struct env53 env;
};

static  enum Unit_8   insert463 (   struct env37* env ,    struct List_9 *  list2055 ,    size_t  i2057 ,    struct Line_12  elem2059 ) {
    if ( ( (  cmp220 ( (  i2057 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i2057 ) , ( ( * (  list2055 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic288 ) ( ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2057 ) ) ) ,  ( (  from_dash_string256 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2055 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq275 ( ( ( * (  list2055 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion38  temp464 = ( (struct envunion38){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add272 , .env =  env->envinst6 } );
        ( temp464.fun ( &temp464.env ,  (  list2055 ) ,  (  elem2059 ) ) );
        return ( Unit_8_Unit );
    }
    struct envunion39  temp465 = ( (struct envunion39){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full274 , .env =  env->envinst1 } );
    ( temp465.fun ( &temp465.env ,  (  list2055 ) ) );
    size_t  ii2060 = (  op_dash_sub348 ( ( ( * (  list2055 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp220 ( (  ii2060 ) , (  i2057 ) ) != 0 ) ) {
        ( (  set286 ) ( ( ( * (  list2055 ) ) .f_elements ) ,  (  op_dash_add268 ( (  ii2060 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get369 ) ( (  list2055 ) ,  (  ii2060 ) ) ) ) );
        if ( (  eq275 ( (  ii2060 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2060 = (  op_dash_sub348 ( (  ii2060 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set286 ) ( ( ( * (  list2055 ) ) .f_elements ) ,  (  i2057 ) ,  (  elem2059 ) ) );
    (*  list2055 ) .f_count = (  op_dash_add268 ( ( ( * (  list2055 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion467 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

static  enum Unit_8   free469 (    struct List_13 *  list2036 ) {
    ( (  free416 ) ( ( ( * (  list2036 ) ) .f_al ) ,  ( ( * (  list2036 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_line468 (    struct Line_12 *  line3692 ) {
    ( (  free469 ) ( ( & ( ( * (  line3692 ) ) .f_line ) ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   add_dash_to_dash_spot368 (   struct env89* env ,    struct TextBuf_99 *  self3730 ,    struct Pos_26  p3732 ,    struct StrView_27  bytes3734 ) {
    enum CAllocator_10  al3735 = ( ( ( * (  self3730 ) ) .f_buf ) .f_al );
    struct List_9 *  buf3736 = ( & ( ( * (  self3730 ) ) .f_buf ) );
    struct Line_12  extracted_dash_line_dash_buf3737 = ( (  get369 ) ( (  buf3736 ) ,  ( (  i32_dash_size298 ) ( ( (  p3732 ) .f_line ) ) ) ) );
    struct Slice_14  remaining3738 = ( (  from371 ) ( ( (  to_dash_slice376 ) ( ( (  extracted_dash_line_dash_buf3737 ) .f_line ) ) ) ,  ( (  i32_dash_size298 ) ( ( (  p3732 ) .f_bi ) ) ) ) );
    struct envunion91  temp378 = ( (struct envunion91){ .fun = (  struct List_13  (*) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  ) )from_dash_iter379 , .env =  env->envinst53 } );
    ( (  set377 ) ( (  buf3736 ) ,  ( (  i32_dash_size298 ) ( ( (  p3732 ) .f_line ) ) ) ,  ( (  mk_dash_line319 ) ( ( temp378.fun ( &temp378.env ,  ( (  subslice372 ) ( ( (  to_dash_slice376 ) ( ( (  extracted_dash_line_dash_buf3737 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size298 ) ( ( (  p3732 ) .f_bi ) ) ) ) ) ,  (  al3735 ) ) ) ) ) ) );
    struct Line_12 *  last_dash_line3739 = ( (  get_dash_ptr370 ) ( (  buf3736 ) ,  ( (  i32_dash_size298 ) ( ( (  p3732 ) .f_line ) ) ) ) );
    struct envunion92  temp418 = ( (struct envunion92){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all382 , .env =  env->envinst48 } );
    ( temp418.fun ( &temp418.env ,  ( & ( ( * (  last_dash_line3739 ) ) .f_line ) ) ,  ( ( (  or_dash_else419 ) ( ( (  head420 ) ( ( (  lines432 ) ( (  bytes3734 ) ) ) ) ) ,  ( (  from_dash_string256 ) ( ( "" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3740 = (  from_dash_integral56 ( 0 ) );
    struct Zip_434  temp433 =  into_dash_iter439 ( ( (  zip440 ) ( ( (  drop442 ) ( ( (  split_dash_by_dash_each444 ) ( (  bytes3734 ) ,  ( (  from_dash_charlike257 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from315 ) ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_453  __cond452 =  next455 (&temp433);
        if (  __cond452 .tag == 0 ) {
            break;
        }
        struct Tuple2_454  dref3741 =  __cond452 .stuff .Maybe_453_Just_s .field0;
        struct envunion461  temp460 = ( (struct envunion461){ .fun = (  struct List_13  (*) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  ) )from_dash_iter379 , .env =  env->envinst53 } );
        struct Line_12  temp459 = ( (  mk_dash_line319 ) ( ( temp460.fun ( &temp460.env ,  ( ( dref3741 .field0 ) .f_contents ) ,  (  al3735 ) ) ) ) );
        struct Line_12 *  nuline3744 = ( &temp459 );
        size_t  next_dash_line3745 = ( (  i32_dash_size298 ) ( (  op_dash_add310 ( ( (  p3732 ) .f_line ) , ( dref3741 .field1 ) ) ) ) );
        struct envunion90  temp462 = ( (struct envunion90){ .fun = (  enum Unit_8  (*) (  struct env37*  ,    struct List_9 *  ,    size_t  ,    struct Line_12  ) )insert463 , .env =  env->envinst37 } );
        ( temp462.fun ( &temp462.env ,  (  buf3736 ) ,  (  next_dash_line3745 ) ,  ( * (  nuline3744 ) ) ) );
        last_dash_line3739 = ( (  get_dash_ptr370 ) ( (  buf3736 ) ,  (  next_dash_line3745 ) ) );
        lines_dash_added3740 = (  op_dash_add310 ( (  lines_dash_added3740 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    struct envunion467  temp466 = ( (struct envunion467){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all382 , .env =  env->envinst48 } );
    ( temp466.fun ( &temp466.env ,  ( & ( ( * (  last_dash_line3739 ) ) .f_line ) ) ,  (  remaining3738 ) ) );
    ( (  free_dash_line468 ) ( ( & (  extracted_dash_line_dash_buf3737 ) ) ) );
    return (  lines_dash_added3740 );
}

static  size_t   size470 (    struct List_13 *  l2134 ) {
    return ( ( * (  l2134 ) ) .f_count );
}

struct StrConcat_476 {
    struct StrConcat_75  field0;
    struct Char_65  field1;
};

static struct StrConcat_476 StrConcat_476_StrConcat (  struct StrConcat_75  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_476 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_475 {
    struct StrConcat_476  field0;
    size_t  field1;
};

static struct StrConcat_475 StrConcat_475_StrConcat (  struct StrConcat_476  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_475 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_474 {
    struct StrConcat_475  field0;
    struct Char_65  field1;
};

static struct StrConcat_474 StrConcat_474_StrConcat (  struct StrConcat_475  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_474 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_479 {
    struct StrView_27  field0;
    struct StrConcat_474  field1;
};

static struct StrConcat_479 StrConcat_479_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_474  field1 ) {
    return ( struct StrConcat_479 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_478 {
    struct StrConcat_479  field0;
    struct Char_65  field1;
};

static struct StrConcat_478 StrConcat_478_StrConcat (  struct StrConcat_479  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_478 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str483 (    struct StrConcat_476  self1509 ) {
    struct StrConcat_476  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str236 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str239 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str482 (    struct StrConcat_475  self1509 ) {
    struct StrConcat_475  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str483 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str237 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str481 (    struct StrConcat_474  self1509 ) {
    struct StrConcat_474  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str482 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str239 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str480 (    struct StrConcat_479  self1509 ) {
    struct StrConcat_479  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str231 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str481 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str477 (    struct StrConcat_478  self1509 ) {
    struct StrConcat_478  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str480 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str239 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic473 (    struct StrConcat_474  errmsg1713 ) {
    ( (  print_dash_str477 ) ( ( ( StrConcat_478_StrConcat ) ( ( ( StrConcat_479_StrConcat ) ( ( (  from_dash_string256 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct Drop_485 {
    struct Zip_409  field0;
    size_t  field1;
};

static struct Drop_485 Drop_485_Drop (  struct Zip_409  field0 ,  size_t  field1 ) {
    return ( struct Drop_485 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env486 {
    ;
    ;
    ;
    size_t  num_dash_elems2068;
    struct List_13 *  list2063;
};

struct envunion487 {
    enum Unit_8  (*fun) (  struct env486*  ,    struct Tuple2_404  );
    struct env486 env;
};

static  struct Drop_485   into_dash_iter489 (    struct Drop_485  self845 ) {
    return (  self845 );
}

static  struct Maybe_412   next490 (    struct Drop_485 *  dref847 ) {
    while ( (  cmp220 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next413 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub348 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next413 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each484 (    struct Drop_485  iterable1074 ,   struct envunion487  fun1076 ) {
    struct Drop_485  temp488 = ( (  into_dash_iter489 ) ( (  iterable1074 ) ) );
    struct Drop_485 *  it1077 = ( &temp488 );
    while ( ( true ) ) {
        struct Maybe_412  dref1078 = ( (  next490 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_412_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_412_Just_t ) {
                struct envunion487  temp491 = (  fun1076 );
                ( temp491.fun ( &temp491.env ,  ( dref1078 .stuff .Maybe_412_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_485   drop492 (    struct Zip_409  iterable852 ,    size_t  i854 ) {
    struct Zip_409  it855 = ( (  into_dash_iter411 ) ( (  iterable852 ) ) );
    return ( ( Drop_485_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SliceIter_386   into_dash_iter494 (    struct List_13  self2029 ) {
    return ( (  into_dash_iter388 ) ( ( (  subslice372 ) ( ( (  self2029 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2029 ) .f_count ) ) ) ) );
}

static  struct Zip_409   zip493 (    struct List_13  left922 ,    struct FromIter_302  right924 ) {
    struct SliceIter_386  left_dash_it925 = ( (  into_dash_iter494 ) ( (  left922 ) ) );
    struct FromIter_302  right_dash_it926 = ( (  into_dash_iter314 ) ( (  right924 ) ) );
    return ( (struct Zip_409) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_8   set496 (    struct List_13 *  list2022 ,    size_t  i2024 ,    uint8_t  elem2026 ) {
    if ( ( (  cmp220 ( (  i2024 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i2024 ) , ( ( * (  list2022 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic288 ) ( ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2024 ) ) ) ,  ( (  from_dash_string256 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2022 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set406 ) ( ( ( * (  list2022 ) ) .f_elements ) ,  (  i2024 ) ,  (  elem2026 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam495 (   struct env486* env ,    struct Tuple2_404  dref2069 ) {
    return ( (  set496 ) ( ( env->list2063 ) ,  (  op_dash_sub348 ( ( (  i32_dash_size298 ) ( ( dref2069 .field1 ) ) ) , ( env->num_dash_elems2068 ) ) ) ,  ( dref2069 .field0 ) ) );
}

struct StrConcat_499 {
    struct StrConcat_290  field0;
    struct StrView_27  field1;
};

static struct StrConcat_499 StrConcat_499_StrConcat (  struct StrConcat_290  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_499 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_502 {
    struct StrView_27  field0;
    struct StrConcat_499  field1;
};

static struct StrConcat_502 StrConcat_502_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_499  field1 ) {
    return ( struct StrConcat_502 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_501 {
    struct StrConcat_502  field0;
    struct Char_65  field1;
};

static struct StrConcat_501 StrConcat_501_StrConcat (  struct StrConcat_502  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_501 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str504 (    struct StrConcat_499  self1509 ) {
    struct StrConcat_499  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str296 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str231 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str503 (    struct StrConcat_502  self1509 ) {
    struct StrConcat_502  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str231 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str504 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str500 (    struct StrConcat_501  self1509 ) {
    struct StrConcat_501  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str503 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str239 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic498 (    struct StrConcat_499  errmsg1713 ) {
    ( (  print_dash_str500 ) ( ( ( StrConcat_501_StrConcat ) ( ( ( StrConcat_502_StrConcat ) ( ( (  from_dash_string256 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct env506 {
    ;
    struct Slice_14  dest1854;
    ;
};

struct envunion507 {
    enum Unit_8  (*fun) (  struct env506*  ,    struct Tuple2_404  );
    struct env506 env;
};

static  enum Unit_8   for_dash_each505 (    struct Zip_409  iterable1074 ,   struct envunion507  fun1076 ) {
    struct Zip_409  temp508 = ( (  into_dash_iter411 ) ( (  iterable1074 ) ) );
    struct Zip_409 *  it1077 = ( &temp508 );
    while ( ( true ) ) {
        struct Maybe_412  dref1078 = ( (  next413 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_412_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_412_Just_t ) {
                struct envunion507  temp509 = (  fun1076 );
                ( temp509.fun ( &temp509.env ,  ( dref1078 .stuff .Maybe_412_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam510 (   struct env506* env ,    struct Tuple2_404  dref1855 ) {
    return ( (  set406 ) ( ( env->dest1854 ) ,  ( (  i32_dash_size298 ) ( ( dref1855 .field1 ) ) ) ,  ( dref1855 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to497 (    struct Slice_14  src1852 ,    struct Slice_14  dest1854 ) {
    if ( (  cmp220 ( ( (  src1852 ) .f_count ) , ( (  dest1854 ) .f_count ) ) == 2 ) ) {
        ( (  panic498 ) ( ( ( StrConcat_499_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1852 ) .f_count ) ) ) ,  ( (  from_dash_string256 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1854 ) .f_count ) ) ) ,  ( (  from_dash_string256 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env506 envinst506 = {
        .dest1854 =  dest1854 ,
    };
    ( (  for_dash_each505 ) ( ( (  zip415 ) ( (  src1852 ) ,  ( (  from315 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion507){ .fun = (  enum Unit_8  (*) (  struct env506*  ,    struct Tuple2_404  ) )lam510 , .env =  envinst506 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   remove_dash_range472 (   struct env40* env ,    struct List_13 *  list2063 ,    size_t  from2065 ,    size_t  to_dash_excl2067 ) {
    if ( (  cmp220 ( (  to_dash_excl2067 ) , (  from2065 ) ) == 0 ) ) {
        ( (  panic473 ) ( ( ( StrConcat_474_StrConcat ) ( ( ( StrConcat_475_StrConcat ) ( ( ( StrConcat_476_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2065 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2067 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp220 ( (  from2065 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic288 ) ( ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2065 ) ) ) ,  ( (  from_dash_string256 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2063 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp220 ( (  to_dash_excl2067 ) , ( ( * (  list2063 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic288 ) ( ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2067 ) ) ) ,  ( (  from_dash_string256 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2063 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2068 = (  op_dash_sub348 ( (  to_dash_excl2067 ) , (  from2065 ) ) );
    struct env486 envinst486 = {
        .num_dash_elems2068 =  num_dash_elems2068 ,
        .list2063 =  list2063 ,
    };
    ( (  for_dash_each484 ) ( ( (  drop492 ) ( ( (  zip493 ) ( ( * (  list2063 ) ) ,  ( (  from315 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add268 ( (  from2065 ) , (  num_dash_elems2068 ) ) ) ) ) ,  ( (struct envunion487){ .fun = (  enum Unit_8  (*) (  struct env486*  ,    struct Tuple2_404  ) )lam495 , .env =  envinst486 } ) ) );
    (*  list2063 ) .f_count = (  op_dash_sub348 ( ( ( * (  list2063 ) ) .f_count ) , (  num_dash_elems2068 ) ) );
    size_t  capacity2072 = ( ( ( * (  list2063 ) ) .f_elements ) .f_count );
    if ( (  cmp220 ( (  op_dash_mul281 ( ( ( * (  list2063 ) ) .f_count ) , ( env->shrink_dash_factor2039 ) ) ) , (  capacity2072 ) ) == 0 ) ) {
        if ( (  eq275 ( ( ( * (  list2063 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free416 ) ( ( ( * (  list2063 ) ) .f_al ) ,  ( ( * (  list2063 ) ) .f_elements ) ) );
            (*  list2063 ) .f_elements = ( (  empty328 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2073 = (  op_dash_mul281 ( (  op_dash_add268 ( (  op_dash_div247 ( ( ( * (  list2063 ) ) .f_count ) , ( env->shrink_dash_factor2039 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2039 ) ) );
        struct Slice_14  new_dash_slice2074 = ( (  allocate397 ) ( ( ( * (  list2063 ) ) .f_al ) ,  (  new_dash_size2073 ) ) );
        ( (  copy_dash_to497 ) ( ( (  subslice372 ) ( ( ( * (  list2063 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2063 ) ) .f_count ) ) ) ,  (  new_dash_slice2074 ) ) );
        ( (  free416 ) ( ( ( * (  list2063 ) ) .f_al ) ,  ( ( * (  list2063 ) ) .f_elements ) ) );
        (*  list2063 ) .f_elements = (  new_dash_slice2074 );
    }
    return ( Unit_8_Unit );
}

struct envunion512 {
    int32_t  (*fun) (  struct env89*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env89 env;
};

static  enum Unit_8   trim513 (    struct List_13 *  l2116 ,    size_t  new_dash_count2118 ) {
    (*  l2116 ) .f_count = ( (  min375 ) ( (  new_dash_count2118 ) ,  ( ( * (  l2116 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   min514 (    int32_t  l1236 ,    int32_t  r1238 ) {
    if ( (  cmp361 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

struct envunion516 {
    int32_t  (*fun) (  struct env89*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env89 env;
};

struct Maybe_518 {
    enum {
        Maybe_518_None_t,
        Maybe_518_Just_t,
    } tag;
    union {
        struct {
            struct Slice_14  field0;
        } Maybe_518_Just_s;
    } stuff;
};

static struct Maybe_518 Maybe_518_Just (  struct Slice_14  field0 ) {
    return ( struct Maybe_518 ) { .tag = Maybe_518_Just_t, .stuff = { .Maybe_518_Just_s = { .field0 = field0 } } };
};

static  struct Slice_14   or_dash_else517 (    struct Maybe_518  self1733 ,    struct Slice_14  alt1735 ) {
    struct Maybe_518  dref1736 = (  self1733 );
    if ( dref1736.tag == Maybe_518_None_t ) {
        return (  alt1735 );
    }
    else {
        if ( dref1736.tag == Maybe_518_Just_t ) {
            return ( dref1736 .stuff .Maybe_518_Just_s .field0 );
        }
    }
}

static  struct Maybe_518   fmap_dash_maybe519 (    struct Maybe_218  x1275 ,    struct Slice_14 (*  fun1277 )(    struct Line_12  ) ) {
    struct Maybe_218  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_218_None_t ) {
        return ( (struct Maybe_518) { .tag = Maybe_518_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_218_Just_t ) {
            return ( ( Maybe_518_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_218_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_218   try_dash_get520 (    struct List_9 *  list2017 ,    size_t  i2019 ) {
    if ( (  cmp220 ( (  i2019 ) , ( ( * (  list2017 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_218) { .tag = Maybe_218_None_t } );
    }
    return ( ( Maybe_218_Just ) ( ( (  get369 ) ( (  list2017 ) ,  (  i2019 ) ) ) ) );
}

static  struct Slice_14   lam521 (    struct Line_12  line3763 ) {
    return ( (  to_dash_slice376 ) ( ( (  line3763 ) .f_line ) ) );
}

struct StrConcat_526 {
    struct StrView_27  field0;
    struct StrView_27  field1;
};

static struct StrConcat_526 StrConcat_526_StrConcat (  struct StrView_27  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_526 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_525 {
    struct StrConcat_526  field0;
    struct Char_65  field1;
};

static struct StrConcat_525 StrConcat_525_StrConcat (  struct StrConcat_526  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_525 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str527 (    struct StrConcat_526  self1509 ) {
    struct StrConcat_526  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str231 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str231 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str524 (    struct StrConcat_525  self1509 ) {
    struct StrConcat_525  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str527 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str239 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert523 (    bool  cond1719 ,    struct StrView_27  msg1721 ) {
    if ( ( ! (  cond1719 ) ) ) {
        ( (  print_dash_str524 ) ( ( ( StrConcat_525_StrConcat ) ( ( ( StrConcat_526_StrConcat ) ( ( (  from_dash_string256 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1721 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct Drop_531 {
    struct Zip_300  field0;
    size_t  field1;
};

static struct Drop_531 Drop_531_Drop (  struct Zip_300  field0 ,  size_t  field1 ) {
    return ( struct Drop_531 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env532 {
    ;
    ;
    ;
    size_t  num_dash_elems2068;
    struct List_9 *  list2063;
};

struct envunion533 {
    enum Unit_8  (*fun) (  struct env532*  ,    struct Tuple2_284  );
    struct env532 env;
};

static  struct Drop_531   into_dash_iter535 (    struct Drop_531  self845 ) {
    return (  self845 );
}

static  struct Maybe_305   next536 (    struct Drop_531 *  dref847 ) {
    while ( (  cmp220 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next306 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub348 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next306 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each530 (    struct Drop_531  iterable1074 ,   struct envunion533  fun1076 ) {
    struct Drop_531  temp534 = ( (  into_dash_iter535 ) ( (  iterable1074 ) ) );
    struct Drop_531 *  it1077 = ( &temp534 );
    while ( ( true ) ) {
        struct Maybe_305  dref1078 = ( (  next536 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_305_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_305_Just_t ) {
                struct envunion533  temp537 = (  fun1076 );
                ( temp537.fun ( &temp537.env ,  ( dref1078 .stuff .Maybe_305_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_531   drop538 (    struct Zip_300  iterable852 ,    size_t  i854 ) {
    struct Zip_300  it855 = ( (  into_dash_iter304 ) ( (  iterable852 ) ) );
    return ( ( Drop_531_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct Slice_11   subslice541 (    struct Slice_11  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    struct Line_12 *  begin_dash_ptr1788 = ( (  offset_dash_ptr265 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp220 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp220 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub348 ( ( (  min375 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

static  struct SliceIter_301   into_dash_iter540 (    struct List_9  self2029 ) {
    return ( (  into_dash_iter313 ) ( ( (  subslice541 ) ( ( (  self2029 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2029 ) .f_count ) ) ) ) );
}

static  struct Zip_300   zip539 (    struct List_9  left922 ,    struct FromIter_302  right924 ) {
    struct SliceIter_301  left_dash_it925 = ( (  into_dash_iter540 ) ( (  left922 ) ) );
    struct FromIter_302  right_dash_it926 = ( (  into_dash_iter314 ) ( (  right924 ) ) );
    return ( (struct Zip_300) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_8   lam542 (   struct env532* env ,    struct Tuple2_284  dref2069 ) {
    return ( (  set377 ) ( ( env->list2063 ) ,  (  op_dash_sub348 ( ( (  i32_dash_size298 ) ( ( dref2069 .field1 ) ) ) , ( env->num_dash_elems2068 ) ) ) ,  ( dref2069 .field0 ) ) );
}

struct env545 {
    ;
    struct Slice_11  dest1854;
    ;
};

struct envunion546 {
    enum Unit_8  (*fun) (  struct env545*  ,    struct Tuple2_284  );
    struct env545 env;
};

static  enum Unit_8   for_dash_each544 (    struct Zip_300  iterable1074 ,   struct envunion546  fun1076 ) {
    struct Zip_300  temp547 = ( (  into_dash_iter304 ) ( (  iterable1074 ) ) );
    struct Zip_300 *  it1077 = ( &temp547 );
    while ( ( true ) ) {
        struct Maybe_305  dref1078 = ( (  next306 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_305_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_305_Just_t ) {
                struct envunion546  temp548 = (  fun1076 );
                ( temp548.fun ( &temp548.env ,  ( dref1078 .stuff .Maybe_305_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam549 (   struct env545* env ,    struct Tuple2_284  dref1855 ) {
    return ( (  set286 ) ( ( env->dest1854 ) ,  ( (  i32_dash_size298 ) ( ( dref1855 .field1 ) ) ) ,  ( dref1855 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to543 (    struct Slice_11  src1852 ,    struct Slice_11  dest1854 ) {
    if ( (  cmp220 ( ( (  src1852 ) .f_count ) , ( (  dest1854 ) .f_count ) ) == 2 ) ) {
        ( (  panic498 ) ( ( ( StrConcat_499_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1852 ) .f_count ) ) ) ,  ( (  from_dash_string256 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1854 ) .f_count ) ) ) ,  ( (  from_dash_string256 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env545 envinst545 = {
        .dest1854 =  dest1854 ,
    };
    ( (  for_dash_each544 ) ( ( (  zip312 ) ( (  src1852 ) ,  ( (  from315 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion546){ .fun = (  enum Unit_8  (*) (  struct env545*  ,    struct Tuple2_284  ) )lam549 , .env =  envinst545 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   remove_dash_range529 (   struct env41* env ,    struct List_9 *  list2063 ,    size_t  from2065 ,    size_t  to_dash_excl2067 ) {
    if ( (  cmp220 ( (  to_dash_excl2067 ) , (  from2065 ) ) == 0 ) ) {
        ( (  panic473 ) ( ( ( StrConcat_474_StrConcat ) ( ( ( StrConcat_475_StrConcat ) ( ( ( StrConcat_476_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2065 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2067 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp220 ( (  from2065 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic288 ) ( ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2065 ) ) ) ,  ( (  from_dash_string256 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2063 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp220 ( (  to_dash_excl2067 ) , ( ( * (  list2063 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic288 ) ( ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2067 ) ) ) ,  ( (  from_dash_string256 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2063 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2068 = (  op_dash_sub348 ( (  to_dash_excl2067 ) , (  from2065 ) ) );
    struct env532 envinst532 = {
        .num_dash_elems2068 =  num_dash_elems2068 ,
        .list2063 =  list2063 ,
    };
    ( (  for_dash_each530 ) ( ( (  drop538 ) ( ( (  zip539 ) ( ( * (  list2063 ) ) ,  ( (  from315 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add268 ( (  from2065 ) , (  num_dash_elems2068 ) ) ) ) ) ,  ( (struct envunion533){ .fun = (  enum Unit_8  (*) (  struct env532*  ,    struct Tuple2_284  ) )lam542 , .env =  envinst532 } ) ) );
    (*  list2063 ) .f_count = (  op_dash_sub348 ( ( ( * (  list2063 ) ) .f_count ) , (  num_dash_elems2068 ) ) );
    size_t  capacity2072 = ( ( ( * (  list2063 ) ) .f_elements ) .f_count );
    if ( (  cmp220 ( (  op_dash_mul281 ( ( ( * (  list2063 ) ) .f_count ) , ( env->shrink_dash_factor2039 ) ) ) , (  capacity2072 ) ) == 0 ) ) {
        if ( (  eq275 ( ( ( * (  list2063 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free316 ) ( ( ( * (  list2063 ) ) .f_al ) ,  ( ( * (  list2063 ) ) .f_elements ) ) );
            (*  list2063 ) .f_elements = ( (  empty204 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2073 = (  op_dash_mul281 ( (  op_dash_add268 ( (  op_dash_div247 ( ( ( * (  list2063 ) ) .f_count ) , ( env->shrink_dash_factor2039 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2039 ) ) );
        struct Slice_11  new_dash_slice2074 = ( (  allocate276 ) ( ( ( * (  list2063 ) ) .f_al ) ,  (  new_dash_size2073 ) ) );
        ( (  copy_dash_to543 ) ( ( (  subslice541 ) ( ( ( * (  list2063 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2063 ) ) .f_count ) ) ) ,  (  new_dash_slice2074 ) ) );
        ( (  free316 ) ( ( ( * (  list2063 ) ) .f_al ) ,  ( ( * (  list2063 ) ) .f_elements ) ) );
        (*  list2063 ) .f_elements = (  new_dash_slice2074 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   change_dash_no_dash_action358 (   struct env93* env ,    struct TextBuf_99 *  self3748 ,    struct Pos_26  from_dash_pos3750 ,    struct Pos_26  to_dash_pos3752 ,    struct StrView_27  bytes3754 ) {
    struct Pos_26  from3755 = ( (  min359 ) ( (  from_dash_pos3750 ) ,  (  to_dash_pos3752 ) ) );
    struct Pos_26  to3756 = ( (  max362 ) ( (  from_dash_pos3750 ) ,  (  to_dash_pos3752 ) ) );
    if ( (  eq363 ( (  to3756 ) , (  from3755 ) ) ) ) {
        enum CAllocator_10  al3757 = ( ( ( * (  self3748 ) ) .f_buf ) .f_al );
        if ( ( (  eq275 ( ( (  size365 ) ( ( & ( ( * (  self3748 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size298 ) ( ( (  from3755 ) .f_line ) ) ) ) ) && (  eq364 ( ( (  from3755 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) ) {
            struct envunion94  temp366 = ( (struct envunion94){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add272 , .env =  env->envinst6 } );
            ( temp366.fun ( &temp366.env ,  ( & ( ( * (  self3748 ) ) .f_buf ) ) ,  ( (  mk_dash_line319 ) ( ( (  mk327 ) ( (  al3757 ) ) ) ) ) ) );
        }
        struct envunion98  temp367 = ( (struct envunion98){ .fun = (  int32_t  (*) (  struct env89*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot368 , .env =  env->envinst89 } );
        ( temp367.fun ( &temp367.env ,  (  self3748 ) ,  (  from3755 ) ,  (  bytes3754 ) ) );
    } else {
        struct List_9 *  lines_dash_buf3758 = ( & ( ( * (  self3748 ) ) .f_buf ) );
        struct Line_12 *  first_dash_line3759 = ( (  get_dash_ptr370 ) ( (  lines_dash_buf3758 ) ,  ( (  i32_dash_size298 ) ( ( (  from3755 ) .f_line ) ) ) ) );
        (*  first_dash_line3759 ) .f_invalidated = ( true );
        if ( ( (  eq364 ( ( (  from3755 ) .f_line ) , ( (  to3756 ) .f_line ) ) ) && (  cmp361 ( ( (  to3756 ) .f_bi ) , (  op_dash_add310 ( ( (  size_dash_i32232 ) ( ( (  size470 ) ( ( & ( ( * (  first_dash_line3759 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion96  temp471 = ( (struct envunion96){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  ) )remove_dash_range472 , .env =  env->envinst40 } );
            ( temp471.fun ( &temp471.env ,  ( & ( ( * (  first_dash_line3759 ) ) .f_line ) ) ,  ( (  i32_dash_size298 ) ( ( (  from3755 ) .f_bi ) ) ) ,  ( (  i32_dash_size298 ) ( ( (  to3756 ) .f_bi ) ) ) ) );
            struct envunion512  temp511 = ( (struct envunion512){ .fun = (  int32_t  (*) (  struct env89*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot368 , .env =  env->envinst89 } );
            ( temp511.fun ( &temp511.env ,  (  self3748 ) ,  (  from3755 ) ,  (  bytes3754 ) ) );
        } else {
            ( (  trim513 ) ( ( & ( ( * (  first_dash_line3759 ) ) .f_line ) ) ,  ( (  i32_dash_size298 ) ( ( (  from3755 ) .f_bi ) ) ) ) );
            struct Line_12 *  last_dash_line3760 = ( (  get_dash_ptr370 ) ( (  lines_dash_buf3758 ) ,  ( (  i32_dash_size298 ) ( ( (  to3756 ) .f_line ) ) ) ) );
            (*  last_dash_line3760 ) .f_invalidated = ( true );
            to3756 .f_bi = ( (  min514 ) ( ( (  to3756 ) .f_bi ) ,  (  op_dash_add310 ( ( (  size_dash_i32232 ) ( ( (  size470 ) ( ( & ( ( * (  last_dash_line3760 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
            if ( (  eq364 ( ( (  to3756 ) .f_bi ) , (  op_dash_add310 ( ( (  size_dash_i32232 ) ( ( (  size470 ) ( ( & ( ( * (  last_dash_line3760 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
                to3756 .f_line = (  op_dash_add310 ( ( (  to3756 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
                to3756 .f_bi = (  from_dash_integral56 ( 0 ) );
            }
            struct envunion516  temp515 = ( (struct envunion516){ .fun = (  int32_t  (*) (  struct env89*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot368 , .env =  env->envinst89 } );
            int32_t  lines_dash_added3761 = ( temp515.fun ( &temp515.env ,  (  self3748 ) ,  (  from3755 ) ,  (  bytes3754 ) ) );
            to3756 .f_line = (  op_dash_add310 ( ( (  to3756 ) .f_line ) , (  lines_dash_added3761 ) ) );
            from3755 .f_line = (  op_dash_add310 ( ( (  from3755 ) .f_line ) , (  lines_dash_added3761 ) ) );
            struct Slice_14  last_dash_line3764 = ( (  or_dash_else517 ) ( ( (  fmap_dash_maybe519 ) ( ( (  try_dash_get520 ) ( (  lines_dash_buf3758 ) ,  ( (  i32_dash_size298 ) ( ( (  to3756 ) .f_line ) ) ) ) ) ,  (  lam521 ) ) ) ,  ( (  empty328 ) ( ) ) ) );
            struct envunion95  temp522 = ( (struct envunion95){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all382 , .env =  env->envinst48 } );
            ( temp522.fun ( &temp522.env ,  ( & ( ( * (  first_dash_line3759 ) ) .f_line ) ) ,  ( (  from371 ) ( (  last_dash_line3764 ) ,  ( (  i32_dash_size298 ) ( ( (  to3756 ) .f_bi ) ) ) ) ) ) );
            ( (  assert523 ) ( (  cmp361 ( ( (  to3756 ) .f_line ) , ( (  from3755 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string256 ) ( ( "there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion97  temp528 = ( (struct envunion97){ .fun = (  enum Unit_8  (*) (  struct env41*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range529 , .env =  env->envinst41 } );
            ( temp528.fun ( &temp528.env ,  ( & ( ( * (  self3748 ) ) .f_buf ) ) ,  ( (  i32_dash_size298 ) ( (  op_dash_add310 ( ( (  from3755 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  op_dash_add268 ( ( (  i32_dash_size298 ) ( ( (  to3756 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

struct StrConcat_553 {
    struct StrView_27  field0;
    const char*  field1;
};

static struct StrConcat_553 StrConcat_553_StrConcat (  struct StrView_27  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_553 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_552 {
    struct StrConcat_553  field0;
    struct Char_65  field1;
};

static struct StrConcat_552 StrConcat_552_StrConcat (  struct StrConcat_553  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_552 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_557 {
    struct StrView_27  field0;
    struct StrConcat_552  field1;
};

static struct StrConcat_557 StrConcat_557_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_552  field1 ) {
    return ( struct StrConcat_557 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_556 {
    struct StrConcat_557  field0;
    struct Char_65  field1;
};

static struct StrConcat_556 StrConcat_556_StrConcat (  struct StrConcat_557  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_556 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str561 (    const char*  self1404 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%s" ) ,  ( 2 ) ) ) ,  (  self1404 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str560 (    struct StrConcat_553  self1509 ) {
    struct StrConcat_553  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str231 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str561 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str559 (    struct StrConcat_552  self1509 ) {
    struct StrConcat_552  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str560 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str239 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str558 (    struct StrConcat_557  self1509 ) {
    struct StrConcat_557  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str231 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str559 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str555 (    struct StrConcat_556  self1509 ) {
    struct StrConcat_556  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str558 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str239 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic554 (    struct StrConcat_552  errmsg1713 ) {
    ( (  print_dash_str555 ) ( ( ( StrConcat_556_StrConcat ) ( ( ( StrConcat_557_StrConcat ) ( ( (  from_dash_string256 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   undefined562 (  ) {
    struct StrView_27  temp563;
    return (  temp563 );
}

static  struct StrView_27   or_dash_fail551 (    struct Maybe_163  x1726 ,    struct StrConcat_552  errmsg1728 ) {
    struct Maybe_163  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_163_None_t ) {
        ( (  panic554 ) ( (  errmsg1728 ) ) );
        return ( (  undefined562 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_163_Just_t ) {
            return ( dref1729 .stuff .Maybe_163_Just_s .field0 );
        }
    }
}

static  const char*   from_dash_charlike565 (    uint8_t *  ptr73 ,    size_t  dref74 ) {
    return ( ( (const char* ) (  ptr73 ) ) );
}

static  void *   cast_dash_ptr570 (    FILE * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of571 (    FILE *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  FILE *   zeroed568 (  ) {
    FILE *  temp569;
    FILE *  x570 = (  temp569 );
    ( ( memset ) ( ( (  cast_dash_ptr570 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of571 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  FILE *   null_dash_ptr567 (  ) {
    return ( (  zeroed568 ) ( ) );
}

static  bool   is_dash_ptr_dash_null566 (    FILE *  p580 ) {
    return ( (  p580 ) == ( (  null_dash_ptr567 ) ( ) ) );
}

static  int32_t   seek_dash_end572 (  ) {
    return (  from_dash_integral56 ( 2 ) );
}

static  int32_t   seek_dash_set573 (  ) {
    return (  from_dash_integral56 ( 0 ) );
}

static  struct Char_65   nullchar574 (  ) {
    return ( (  from_dash_charlike257 ) ( ( "\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_163   try_dash_read_dash_contents564 (    const char*  filename2949 ,    enum CAllocator_10  al2951 ) {
    FILE *  file2952 = ( ( fopen ) ( (  filename2949 ) ,  ( (  from_dash_charlike565 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null566 ) ( (  file2952 ) ) ) ) {
        return ( (struct Maybe_163) { .tag = Maybe_163_None_t } );
    }
    ( ( fseek ) ( (  file2952 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_end572 ) ( ) ) ) );
    int32_t  file_dash_size2953 = ( ( ftell ) ( (  file2952 ) ) );
    ( ( fseek ) ( (  file2952 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_set573 ) ( ) ) ) );
    struct Slice_14  file_dash_buf2954 = ( ( (  allocate397 ) ( (  al2951 ) ,  (  op_dash_add268 ( ( (  i32_dash_size298 ) ( (  file_dash_size2953 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2954 ) .f_ptr ) ,  (  file_dash_size2953 ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  file2952 ) ) );
    ( (  set406 ) ( (  file_dash_buf2954 ) ,  ( (  i32_dash_size298 ) ( (  file_dash_size2953 ) ) ) ,  ( (  char_dash_u8428 ) ( ( (  nullchar574 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2952 ) ) );
    struct StrView_27  str2955 = ( (struct StrView_27) { .f_contents = ( (  subslice372 ) ( (  file_dash_buf2954 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub348 ( ( (  file_dash_buf2954 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_163_Just ) ( (  str2955 ) ) );
}

static  struct StrView_27   read_dash_contents550 (    const char*  filename2958 ,    enum CAllocator_10  al2960 ) {
    return ( (  or_dash_fail551 ) ( ( (  try_dash_read_dash_contents564 ) ( (  filename2958 ) ,  (  al2960 ) ) ) ,  ( ( StrConcat_552_StrConcat ) ( ( ( StrConcat_553_StrConcat ) ( ( (  from_dash_string256 ) ( ( "could not open file " ) ,  ( 20 ) ) ) ,  (  filename2958 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "!" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Pane_141   mk576 (    enum CAllocator_10  al3938 ,    struct TextBuf_99 *  buf3940 ) {
    return ( (struct Pane_141) { .f_buf = (  buf3940 ) , .f_cursor = ( (  mk342 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral56 ( 0 ) ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) , .f_mode = ( Mode_142_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_143) { .f_screen_dash_top = (  from_dash_integral56 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral56 ( 0 ) ) } ) } );
}

struct envunion579 {
    struct Tui_81  (*fun) (  struct env77*  );
    struct env77 env;
};

static  struct Termios_83   undefined583 (  ) {
    struct Termios_83  temp584;
    return (  temp584 );
}

static  int32_t   stdin_dash_fileno585 (  ) {
    return (  from_dash_integral56 ( 0 ) );
}

static  struct termios *   cast_dash_ptr586 (    struct Termios_83 *  p359 ) {
    return ( (struct termios * ) (  p359 ) );
}

static  uint32_t   u32_dash_and587 (    uint32_t  l2848 ,    uint32_t  r2850 ) {
    return ( (  l2848 ) & (  r2850 ) );
}

static  uint32_t   u32_dash_neg588 (    uint32_t  l2853 ) {
    return ( ~ (  l2853 ) );
}

struct Array_590 {
    uint32_t _arr [4];
};

struct ArrayIter_592 {
    struct Array_590  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_592   into_dash_iter593 (    struct Array_590  self2323 ) {
    return ( (struct ArrayIter_592) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_594 {
    enum {
        Maybe_594_None_t,
        Maybe_594_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_594_Just_s;
    } stuff;
};

static struct Maybe_594 Maybe_594_Just (  uint32_t  field0 ) {
    return ( struct Maybe_594 ) { .tag = Maybe_594_Just_t, .stuff = { .Maybe_594_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr598 (    struct Array_590 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   offset_dash_ptr599 (    uint32_t *  x338 ,    int64_t  count340 ) {
    uint32_t  temp600;
    return ( (uint32_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul266 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp600 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr597 (    struct Array_590 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp220 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i2254 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic224 ) ( ( ( StrConcat_225_StrConcat ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string256 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2255 = ( ( (  cast_dash_ptr598 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr599 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  uint32_t   get596 (    struct Array_590 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr597 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_594   next595 (    struct ArrayIter_592 *  self2330 ) {
    if ( (  cmp220 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_594) { .tag = Maybe_594_None_t } );
    }
    uint32_t  e2332 = ( (  get596 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add268 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_594_Just ) ( (  e2332 ) ) );
}

static  uint32_t   reduce591 (    struct Array_590  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_592  it1099 = ( (  into_dash_iter593 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_594  dref1100 = ( (  next595 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_594_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_594_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_594_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp601 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp601);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp602;
    return (  temp602 );
}

static  uint32_t   u32_dash_or603 (    uint32_t  l2840 ,    uint32_t  r2842 ) {
    return ( (  l2840 ) | (  r2842 ) );
}

static  uint32_t   u32_dash_ors589 (    struct Array_590  vals2845 ) {
    return ( (  reduce591 ) ( (  vals2845 ) ,  (  from_dash_integral252 ( 0 ) ) ,  (  u32_dash_or603 ) ) );
}

static  struct Array_590   from_dash_listlike604 (    struct Array_590  self330 ) {
    return (  self330 );
}

static  uint32_t   echo605 (  ) {
    return (  from_dash_integral252 ( 8 ) );
}

static  uint32_t   icanon606 (  ) {
    return (  from_dash_integral252 ( 2 ) );
}

static  uint32_t   isig607 (  ) {
    return (  from_dash_integral252 ( 1 ) );
}

static  uint32_t   iexten608 (  ) {
    return (  from_dash_integral252 ( 32768 ) );
}

struct Array_610 {
    uint32_t _arr [5];
};

struct ArrayIter_612 {
    struct Array_610  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_612   into_dash_iter613 (    struct Array_610  self2323 ) {
    return ( (struct ArrayIter_612) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr617 (    struct Array_610 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr616 (    struct Array_610 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp220 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i2254 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic224 ) ( ( ( StrConcat_225_StrConcat ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string256 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2255 = ( ( (  cast_dash_ptr617 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr599 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  uint32_t   get615 (    struct Array_610 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr616 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_594   next614 (    struct ArrayIter_612 *  self2330 ) {
    if ( (  cmp220 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_594) { .tag = Maybe_594_None_t } );
    }
    uint32_t  e2332 = ( (  get615 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add268 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_594_Just ) ( (  e2332 ) ) );
}

static  uint32_t   reduce611 (    struct Array_610  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_612  it1099 = ( (  into_dash_iter613 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_594  dref1100 = ( (  next614 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_594_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_594_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_594_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp618 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp618);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp619;
    return (  temp619 );
}

static  uint32_t   u32_dash_ors609 (    struct Array_610  vals2845 ) {
    return ( (  reduce611 ) ( (  vals2845 ) ,  (  from_dash_integral252 ( 0 ) ) ,  (  u32_dash_or603 ) ) );
}

static  struct Array_610   from_dash_listlike620 (    struct Array_610  self330 ) {
    return (  self330 );
}

static  uint32_t   brkint621 (  ) {
    return (  from_dash_integral252 ( 2 ) );
}

static  uint32_t   icrnl622 (  ) {
    return (  from_dash_integral252 ( 256 ) );
}

static  uint32_t   inpck623 (  ) {
    return (  from_dash_integral252 ( 16 ) );
}

static  uint32_t   istrip624 (  ) {
    return (  from_dash_integral252 ( 32 ) );
}

static  uint32_t   ixon625 (  ) {
    return (  from_dash_integral252 ( 1024 ) );
}

struct Array_627 {
    uint32_t _arr [1];
};

struct ArrayIter_629 {
    struct Array_627  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_629   into_dash_iter630 (    struct Array_627  self2323 ) {
    return ( (struct ArrayIter_629) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr634 (    struct Array_627 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr633 (    struct Array_627 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp220 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i2254 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic224 ) ( ( ( StrConcat_225_StrConcat ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string256 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2255 = ( ( (  cast_dash_ptr634 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr599 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  uint32_t   get632 (    struct Array_627 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr633 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_594   next631 (    struct ArrayIter_629 *  self2330 ) {
    if ( (  cmp220 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_594) { .tag = Maybe_594_None_t } );
    }
    uint32_t  e2332 = ( (  get632 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add268 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_594_Just ) ( (  e2332 ) ) );
}

static  uint32_t   reduce628 (    struct Array_627  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_629  it1099 = ( (  into_dash_iter630 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_594  dref1100 = ( (  next631 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_594_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_594_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_594_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp635 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp635);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp636;
    return (  temp636 );
}

static  uint32_t   u32_dash_ors626 (    struct Array_627  vals2845 ) {
    return ( (  reduce628 ) ( (  vals2845 ) ,  (  from_dash_integral252 ( 0 ) ) ,  (  u32_dash_or603 ) ) );
}

static  struct Array_627   from_dash_listlike637 (    struct Array_627  self330 ) {
    return (  self330 );
}

static  uint32_t   opost638 (  ) {
    return (  from_dash_integral252 ( 1 ) );
}

static  uint32_t   cs8639 (  ) {
    return (  from_dash_integral252 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr642 (    struct Array_84 *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  uint8_t *   get_dash_ptr641 (    struct Array_84 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp220 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i2254 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic224 ) ( ( ( StrConcat_225_StrConcat ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string256 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2255 = ( ( (  cast_dash_ptr642 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr373 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  enum Unit_8   set640 (    struct Array_84 *  arr2264 ,    size_t  i2267 ,    uint8_t  e2269 ) {
    uint8_t *  p2270 = ( (  get_dash_ptr641 ) ( (  arr2264 ) ,  (  i2267 ) ) );
    (*  p2270 ) = (  e2269 );
    return ( Unit_8_Unit );
}

static  size_t   vmin643 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime644 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush645 (  ) {
    return (  from_dash_integral56 ( 2 ) );
}

static  struct Termios_83   enable_dash_raw_dash_mode581 (  ) {
    struct Termios_83  temp582 = ( (  undefined583 ) ( ) );
    struct Termios_83 *  orig_dash_termios3335 = ( &temp582 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno585 ) ( ) ) ,  ( (  cast_dash_ptr586 ) ( (  orig_dash_termios3335 ) ) ) ) );
    struct Termios_83  raw3336 = ( * (  orig_dash_termios3335 ) );
    raw3336 .f_c_dash_lflag = ( (  u32_dash_and587 ) ( ( (  raw3336 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg588 ) ( ( (  u32_dash_ors589 ) ( ( (  from_dash_listlike604 ) ( ( (struct Array_590) { ._arr = { ( (  echo605 ) ( ) ) , ( (  icanon606 ) ( ) ) , ( (  isig607 ) ( ) ) , ( ( (  iexten608 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3336 .f_c_dash_iflag = ( (  u32_dash_and587 ) ( ( (  raw3336 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg588 ) ( ( (  u32_dash_ors609 ) ( ( (  from_dash_listlike620 ) ( ( (struct Array_610) { ._arr = { ( (  brkint621 ) ( ) ) , ( (  icrnl622 ) ( ) ) , ( (  inpck623 ) ( ) ) , ( (  istrip624 ) ( ) ) , ( ( (  ixon625 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3336 .f_c_dash_oflag = ( (  u32_dash_and587 ) ( ( (  raw3336 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg588 ) ( ( (  u32_dash_ors626 ) ( ( (  from_dash_listlike637 ) ( ( (struct Array_627) { ._arr = { ( ( (  opost638 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3336 .f_c_dash_cflag = ( (  u32_dash_or603 ) ( ( (  raw3336 ) .f_c_dash_cflag ) ,  ( (  cs8639 ) ( ) ) ) );
    ( (  set640 ) ( ( & ( (  raw3336 ) .f_c_dash_cc ) ) ,  ( (  vmin643 ) ( ) ) ,  (  from_dash_integral248 ( 0 ) ) ) );
    ( (  set640 ) ( ( & ( (  raw3336 ) .f_c_dash_cc ) ) ,  ( (  vtime644 ) ( ) ) ,  (  from_dash_integral248 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno585 ) ( ) ) ,  ( (  tcsa_dash_flush645 ) ( ) ) ,  ( (  cast_dash_ptr586 ) ( ( & (  raw3336 ) ) ) ) ) );
    return ( * (  orig_dash_termios3335 ) );
}

struct StrViewIter_649 {
    struct StrView_27  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_649   into_dash_iter651 (    struct StrViewIter_649  self1371 ) {
    return (  self1371 );
}

struct Maybe_652 {
    enum {
        Maybe_652_None_t,
        Maybe_652_Just_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } Maybe_652_Just_s;
    } stuff;
};

static struct Maybe_652 Maybe_652_Just (  struct Char_65  field0 ) {
    return ( struct Maybe_652 ) { .tag = Maybe_652_Just_t, .stuff = { .Maybe_652_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_652   next653 (    struct StrViewIter_649 *  self1374 ) {
    if ( (  cmp220 ( ( ( * (  self1374 ) ) .f_i ) , ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_652) { .tag = Maybe_652_None_t } );
    }
    uint8_t *  char_dash_ptr1375 = ( ( (  offset_dash_ptr373 ) ( ( (  cast258 ) ( ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64297 ) ( ( ( * (  self1374 ) ) .f_i ) ) ) ) ) );
    struct Char_65  char1376 = ( (  scan_dash_from_dash_mem259 ) ( (  char_dash_ptr1375 ) ) );
    (*  self1374 ) .f_i = (  op_dash_add268 ( ( ( * (  self1374 ) ) .f_i ) , ( (  char1376 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_652_Just ) ( (  char1376 ) ) );
}

static  enum Unit_8   for_dash_each648 (    struct StrViewIter_649  iterable1074 ,    enum Unit_8 (*  fun1076 )(    struct Char_65  ) ) {
    struct StrViewIter_649  temp650 = ( (  into_dash_iter651 ) ( (  iterable1074 ) ) );
    struct StrViewIter_649 *  it1077 = ( &temp650 );
    while ( ( true ) ) {
        struct Maybe_652  dref1078 = ( (  next653 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_652_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_652_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_652_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrViewIter_649   into_dash_iter655 (    struct StrView_27  self1368 ) {
    return ( (struct StrViewIter_649) { .f_ds = (  self1368 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_649   chars654 (    struct StrView_27  self1382 ) {
    return ( (  into_dash_iter655 ) ( (  self1382 ) ) );
}

static  enum Unit_8   print647 (    struct StrView_27  s2579 ) {
    ( (  for_dash_each648 ) ( ( (  chars654 ) ( (  s2579 ) ) ) ,  (  printf_dash_char240 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   hide_dash_cursor646 (  ) {
    ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_colors656 (  ) {
    ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   clear_dash_screen657 (  ) {
    ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   enable_dash_mouse658 (  ) {
    ( (  print_dash_str231 ) ( ( (  from_dash_string256 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_stdout659 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr567 ) ( ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   ptr_dash_eq663 (    enum Unit_8 *  l586 ,    enum Unit_8 *  r588 ) {
    return ( (  l586 ) == (  r588 ) );
}

static  enum Unit_8 *   cast664 (    const char*  x356 ) {
    return ( (enum Unit_8 * ) (  x356 ) );
}

static  void *   cast_dash_ptr668 (    enum Unit_8 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of669 (    enum Unit_8 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  enum Unit_8 *   zeroed666 (  ) {
    enum Unit_8 *  temp667;
    enum Unit_8 *  x570 = (  temp667 );
    ( ( memset ) ( ( (  cast_dash_ptr668 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of669 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  enum Unit_8 *   null_dash_ptr665 (  ) {
    return ( (  zeroed666 ) ( ) );
}

static  struct Maybe_352   from_dash_nullable_dash_c_dash_str662 (    const char*  s591 ) {
    if ( ( (  ptr_dash_eq663 ) ( ( (  cast664 ) ( (  s591 ) ) ) ,  ( ( (  null_dash_ptr665 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
    } else {
        return ( ( Maybe_352_Just ) ( (  s591 ) ) );
    }
}

static  struct Maybe_352   get661 (    const char*  s2612 ) {
    return ( (  from_dash_nullable_dash_c_dash_str662 ) ( ( ( getenv ) ( (  s2612 ) ) ) ) );
}

static  bool   eq670 (    const char*  l1697 ,    const char*  r1699 ) {
    return (  eq364 ( ( ( strcmp ) ( (  l1697 ) ,  (  r1699 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) );
}

static  enum ColorPalette_82   query_dash_palette660 (  ) {
    struct Maybe_352  colorterm2613 = ( (  get661 ) ( ( (  from_dash_string57 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_352  dref2614 = (  colorterm2613 );
    if ( dref2614.tag == Maybe_352_Just_t ) {
        if ( ( (  eq670 ( ( dref2614 .stuff .Maybe_352_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq670 ( ( dref2614 .stuff .Maybe_352_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_82_PaletteRGB );
        }
    }
    else {
        if ( dref2614.tag == Maybe_352_None_t ) {
        }
    }
    struct Maybe_352  dref2616 = ( (  get661 ) ( ( (  from_dash_string57 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2616.tag == Maybe_352_Just_t ) {
        if ( (  eq670 ( ( dref2616 .stuff .Maybe_352_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_82_Palette8 );
        }
    }
    else {
        if ( dref2616.tag == Maybe_352_None_t ) {
        }
    }
    return ( ColorPalette_82_Palette16 );
}

struct Tuple2_671 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_671 Tuple2_671_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_671 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_673 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr677 (    struct Winsize_673 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of678 (    struct Winsize_673  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Winsize_673   zeroed675 (  ) {
    struct Winsize_673  temp676;
    struct Winsize_673  x570 = (  temp676 );
    ( ( memset ) ( ( (  cast_dash_ptr677 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of678 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  int32_t   stdout_dash_fileno679 (  ) {
    return (  from_dash_integral56 ( 1 ) );
}

static  uint64_t   from_dash_integral681 (    int64_t  x64 ) {
    return ( (uint64_t ) (  x64 ) );
}

static  uint64_t   tiocgwinsz680 (  ) {
    return (  from_dash_integral681 ( 21523 ) );
}

static  int32_t   op_dash_neg682 (    int32_t  x227 ) {
    return ( (  from_dash_integral56 ( 0 ) ) - (  x227 ) );
}

static  bool   eq683 (    uint16_t  l121 ,    uint16_t  r123 ) {
    return ( (  l121 ) == (  r123 ) );
}

static  uint16_t   from_dash_integral684 (    int64_t  x55 ) {
    return ( (uint16_t ) (  x55 ) );
}

static  void *   cast_dash_ptr690 (    uint32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of691 (    uint32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint32_t   zeroed688 (  ) {
    uint32_t  temp689;
    uint32_t  x570 = (  temp689 );
    ( ( memset ) ( ( (  cast_dash_ptr690 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of691 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint16_t *   cast692 (    uint32_t *  x356 ) {
    return ( (uint16_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed686 (    uint16_t  x573 ) {
    uint32_t  temp687 = ( (  zeroed688 ) ( ) );
    uint32_t *  y574 = ( &temp687 );
    uint16_t *  yp575 = ( (  cast692 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u16_dash_u32685 (    uint16_t  x645 ) {
    return ( (  cast_dash_on_dash_zeroed686 ) ( (  x645 ) ) );
}

static  struct Tuple2_671   get_dash_dimensions672 (  ) {
    struct Winsize_673  temp674 = ( ( (  zeroed675 ) ( ) ) );
    struct Winsize_673 *  ws2601 = ( &temp674 );
    if ( ( (  eq364 ( ( ( ioctl ) ( ( (  stdout_dash_fileno679 ) ( ) ) ,  ( (  tiocgwinsz680 ) ( ) ) ,  (  ws2601 ) ) ) , (  op_dash_neg682 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) || (  eq683 ( ( ( * (  ws2601 ) ) .f_ws_dash_col ) , (  from_dash_integral684 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_671_Tuple2 ) ( (  from_dash_integral252 ( 80 ) ) ,  (  from_dash_integral252 ( 24 ) ) ) );
    }
    return ( ( Tuple2_671_Tuple2 ) ( ( (  u16_dash_u32685 ) ( ( ( * (  ws2601 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32685 ) ( ( ( * (  ws2601 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined695 (  ) {
    struct timespec  temp696;
    return (  temp696 );
}

static  int32_t   clock_dash_monotonic697 (  ) {
    return (  from_dash_integral56 ( 1 ) );
}

static  struct timespec   now693 (  ) {
    struct timespec  temp694 = ( (  undefined695 ) ( ) );
    struct timespec *  t3297 = ( &temp694 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic697 ) ( ) ) ,  (  t3297 ) ) );
    return ( * (  t3297 ) );
}

struct env698 {
    bool *  should_dash_resize3349;
};

struct envunion699 {
    enum Unit_8  (*fun) (  struct env698*  ,    int32_t  );
    struct env698 env;
};

struct envunion699  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig700 ) {
    struct envunion699  temp701 = _intr_sigarr [  __intr__sig700 ];
    temp701.fun ( &temp701.env ,  __intr__sig700 );
}

static  enum Unit_8  _intr_register_signal (    int32_t  __intr__sig702 ,   struct envunion699  __intr__fun703 ) {
    _intr_sigarr [  __intr__sig702 ] =  __intr__fun703;
    signal(  __intr__sig702 , _intr_sighandle );
    return Unit_8_Unit;
}

static  enum Unit_8   lam704 (   struct env698* env ,    int32_t  dref3356 ) {
    (* env->should_dash_resize3349 ) = ( true );
    return ( Unit_8_Unit );
}

static  uint32_t   fst705 (    struct Tuple2_671  dref1253 ) {
    return ( dref1253 .field0 );
}

static  uint32_t   snd706 (    struct Tuple2_671  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tui_81   mk580 (   struct env77* env ) {
    struct Termios_83  og_dash_termios3351 = ( (  enable_dash_raw_dash_mode581 ) ( ) );
    ( (  hide_dash_cursor646 ) ( ) );
    ( (  reset_dash_colors656 ) ( ) );
    ( (  clear_dash_screen657 ) ( ) );
    ( (  enable_dash_mouse658 ) ( ) );
    ( (  flush_dash_stdout659 ) ( ) );
    enum ColorPalette_82  palette3352 = ( (  query_dash_palette660 ) ( ) );
    struct Tuple2_671  dims3353 = ( (  get_dash_dimensions672 ) ( ) );
    uint32_t  fps3354 = (  from_dash_integral252 ( 60 ) );
    struct timespec  last_dash_sync3355 = ( (  now693 ) ( ) );
    struct env698 envinst698 = {
        .should_dash_resize3349 = env->should_dash_resize3349 ,
    };
    ( _intr_register_signal ( (  from_dash_integral56 ( 28 ) ) , ( (struct envunion699){ .fun = (  enum Unit_8  (*) (  struct env698*  ,    int32_t  ) )lam704 , .env =  envinst698 } ) ) );
    return ( (struct Tui_81) { .f_width = ( (  fst705 ) ( (  dims3353 ) ) ) , .f_height = ( (  snd706 ) ( (  dims3353 ) ) ) , .f_target_dash_fps = (  fps3354 ) , .f_actual_dash_fps = (  from_dash_integral252 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3355 ) , .f_fps_dash_ts = (  last_dash_sync3355 ) , .f_fps_dash_count = (  from_dash_integral252 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3351 ) , .f_palette = (  palette3352 ) , .f_should_dash_redraw = ( true ) } );
}

struct TypeSize_711 {
    size_t  f_size;
};

static  struct TypeSize_711   get_dash_typesize710 (  ) {
    struct Cell_189  temp712;
    return ( (struct TypeSize_711) { .f_size = ( sizeof( ( (  temp712 ) ) ) ) } );
}

static  struct Cell_189 *   cast_dash_ptr713 (    void *  p359 ) {
    return ( (struct Cell_189 * ) (  p359 ) );
}

static  struct Slice_188   allocate709 (    enum CAllocator_10  dref1954 ,    size_t  count1956 ) {
    if (!(  dref1954 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1957 = ( ( ( (  get_dash_typesize710 ) ( ) ) ) .f_size );
    struct Cell_189 *  ptr1958 = ( (  cast_dash_ptr713 ) ( ( ( malloc ) ( (  op_dash_mul281 ( (  size1957 ) , (  count1956 ) ) ) ) ) ) );
    return ( (struct Slice_188) { .f_ptr = (  ptr1958 ) , .f_count = (  count1956 ) } );
}

static  void *   cast_dash_ptr719 (    size_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of720 (    size_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  size_t   zeroed717 (  ) {
    size_t  temp718;
    size_t  x570 = (  temp718 );
    ( ( memset ) ( ( (  cast_dash_ptr719 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of720 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint32_t *   cast721 (    size_t *  x356 ) {
    return ( (uint32_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed715 (    uint32_t  x573 ) {
    size_t  temp716 = ( (  zeroed717 ) ( ) );
    size_t *  y574 = ( &temp716 );
    uint32_t *  yp575 = ( (  cast721 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u32_dash_size714 (    uint32_t  x651 ) {
    return ( (  cast_dash_on_dash_zeroed715 ) ( (  x651 ) ) );
}

static  uint32_t   op_dash_mul722 (    uint32_t  l240 ,    uint32_t  r242 ) {
    return ( (  l240 ) * (  r242 ) );
}

struct Range_725 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_725 Range_725_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_725 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env726 {
    struct Slice_188  s1906;
    struct Cell_189 (*  fun1908 )(    struct Cell_189  );
    ;
    ;
    ;
};

struct envunion727 {
    enum Unit_8  (*fun) (  struct env726*  ,    int32_t  );
    struct env726 env;
};

struct RangeIter_728 {
    struct Range_725  field0;
    int32_t  field1;
};

static struct RangeIter_728 RangeIter_728_RangeIter (  struct Range_725  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_728 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_728   into_dash_iter730 (    struct Range_725  dref883 ) {
    return ( ( RangeIter_728_RangeIter ) ( ( ( Range_725_Range ) ( ( dref883 .field0 ) ,  ( dref883 .field1 ) ) ) ,  ( dref883 .field0 ) ) );
}

static  struct Maybe_308   next731 (    struct RangeIter_728 *  self891 ) {
    struct RangeIter_728  dref892 = ( * (  self891 ) );
    if ( true ) {
        if ( (  cmp361 ( ( dref892 .field1 ) , ( dref892 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
        }
        struct Maybe_308  x896 = ( ( Maybe_308_Just ) ( ( dref892 .field1 ) ) );
        (*  self891 ) = ( ( RangeIter_728_RangeIter ) ( ( ( Range_725_Range ) ( ( dref892 .field0 .field0 ) ,  ( dref892 .field0 .field1 ) ) ) ,  (  op_dash_add310 ( ( dref892 .field1 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
        return (  x896 );
    }
}

static  enum Unit_8   for_dash_each724 (    struct Range_725  iterable1074 ,   struct envunion727  fun1076 ) {
    struct RangeIter_728  temp729 = ( (  into_dash_iter730 ) ( (  iterable1074 ) ) );
    struct RangeIter_728 *  it1077 = ( &temp729 );
    while ( ( true ) ) {
        struct Maybe_308  dref1078 = ( (  next731 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_308_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_308_Just_t ) {
                struct envunion727  temp732 = (  fun1076 );
                ( temp732.fun ( &temp732.env ,  ( dref1078 .stuff .Maybe_308_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Range_725   to733 (    int32_t  from874 ,    int32_t  to876 ) {
    return ( ( Range_725_Range ) ( (  from874 ) ,  (  to876 ) ) );
}

static  struct Cell_189 *   offset_dash_ptr737 (    struct Cell_189 *  x338 ,    int64_t  count340 ) {
    struct Cell_189  temp738;
    return ( (struct Cell_189 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul266 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp738 ) ) ) ) ) ) ) ) );
}

static  struct Cell_189 *   get_dash_ptr736 (    struct Slice_188  slice1758 ,    size_t  i1760 ) {
    if ( ( (  cmp220 ( (  i1760 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic288 ) ( ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1760 ) ) ) ,  ( (  from_dash_string256 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1758 ) .f_count ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_189 *  elem_dash_ptr1761 = ( (  offset_dash_ptr737 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  i1760 ) ) ) ) );
    return (  elem_dash_ptr1761 );
}

static  enum Unit_8   set735 (    struct Slice_188  slice1775 ,    size_t  i1777 ,    struct Cell_189  x1779 ) {
    struct Cell_189 *  ep1780 = ( (  get_dash_ptr736 ) ( (  slice1775 ) ,  (  i1777 ) ) );
    (*  ep1780 ) = (  x1779 );
    return ( Unit_8_Unit );
}

struct Maybe_742 {
    enum {
        Maybe_742_None_t,
        Maybe_742_Just_t,
    } tag;
    union {
        struct {
            struct Cell_189  field0;
        } Maybe_742_Just_s;
    } stuff;
};

static struct Maybe_742 Maybe_742_Just (  struct Cell_189  field0 ) {
    return ( struct Maybe_742 ) { .tag = Maybe_742_Just_t, .stuff = { .Maybe_742_Just_s = { .field0 = field0 } } };
};

static  struct Cell_189   undefined743 (  ) {
    struct Cell_189  temp744;
    return (  temp744 );
}

static  struct Cell_189   or_dash_fail741 (    struct Maybe_742  x1726 ,    struct StrConcat_289  errmsg1728 ) {
    struct Maybe_742  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_742_None_t ) {
        ( (  panic288 ) ( (  errmsg1728 ) ) );
        return ( (  undefined743 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_742_Just_t ) {
            return ( dref1729 .stuff .Maybe_742_Just_s .field0 );
        }
    }
}

static  struct Maybe_742   try_dash_get745 (    struct Slice_188  slice1764 ,    size_t  i1766 ) {
    if ( ( (  cmp220 ( (  i1766 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i1766 ) , ( (  slice1764 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_742) { .tag = Maybe_742_None_t } );
    }
    struct Cell_189 *  elem_dash_ptr1767 = ( (  offset_dash_ptr737 ) ( ( (  slice1764 ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  i1766 ) ) ) ) );
    return ( ( Maybe_742_Just ) ( ( * (  elem_dash_ptr1767 ) ) ) );
}

static  struct Cell_189   get740 (    struct Slice_188  slice1770 ,    size_t  i1772 ) {
    return ( (  or_dash_fail741 ) ( ( (  try_dash_get745 ) ( (  slice1770 ) ,  (  i1772 ) ) ) ,  ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1772 ) ) ) ,  ( (  from_dash_string256 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1770 ) .f_count ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_189   elem_dash_get739 (    struct Slice_188  self1868 ,    size_t  idx1870 ) {
    return ( (  get740 ) ( (  self1868 ) ,  (  idx1870 ) ) );
}

static  enum Unit_8   lam734 (   struct env726* env ,    int32_t  i1910 ) {
    return ( (  set735 ) ( ( env->s1906 ) ,  ( (  i32_dash_size298 ) ( (  i1910 ) ) ) ,  ( ( env->fun1908 ) ( (  elem_dash_get739 ( ( env->s1906 ) , ( (  i32_dash_size298 ) ( (  i1910 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map723 (    struct Slice_188  s1906 ,    struct Cell_189 (*  fun1908 )(    struct Cell_189  ) ) {
    struct env726 envinst726 = {
        .s1906 =  s1906 ,
        .fun1908 =  fun1908 ,
    };
    ( (  for_dash_each724 ) ( ( (  to733 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32232 ) ( (  op_dash_sub348 ( ( (  s1906 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion727){ .fun = (  enum Unit_8  (*) (  struct env726*  ,    int32_t  ) )lam734 , .env =  envinst726 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_189   default_dash_cell747 (  ) {
    return ( (struct Cell_189) { .f_c = ( (  from_dash_charlike257 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_190) { .tag = Color_190_ColorDefault_t } ) , .f_bg = ( (struct Color_190) { .tag = Color_190_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } );
}

static  struct Cell_189   lam746 (    struct Cell_189  dref3459 ) {
    return ( (  default_dash_cell747 ) ( ) );
}

struct env750 {
    struct Slice_188  s1906;
    struct Cell_189 (*  fun1908 )(    struct Cell_189  );
    ;
    ;
    ;
};

struct envunion751 {
    enum Unit_8  (*fun) (  struct env750*  ,    int32_t  );
    struct env750 env;
};

static  enum Unit_8   for_dash_each749 (    struct Range_725  iterable1074 ,   struct envunion751  fun1076 ) {
    struct RangeIter_728  temp752 = ( (  into_dash_iter730 ) ( (  iterable1074 ) ) );
    struct RangeIter_728 *  it1077 = ( &temp752 );
    while ( ( true ) ) {
        struct Maybe_308  dref1078 = ( (  next731 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_308_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_308_Just_t ) {
                struct envunion751  temp753 = (  fun1076 );
                ( temp753.fun ( &temp753.env ,  ( dref1078 .stuff .Maybe_308_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam754 (   struct env750* env ,    int32_t  i1910 ) {
    return ( (  set735 ) ( ( env->s1906 ) ,  ( (  i32_dash_size298 ) ( (  i1910 ) ) ) ,  ( ( env->fun1908 ) ( (  elem_dash_get739 ( ( env->s1906 ) , ( (  i32_dash_size298 ) ( (  i1910 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map748 (    struct Slice_188  s1906 ,    struct Cell_189 (*  fun1908 )(    struct Cell_189  ) ) {
    struct env750 envinst750 = {
        .s1906 =  s1906 ,
        .fun1908 =  fun1908 ,
    };
    ( (  for_dash_each749 ) ( ( (  to733 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32232 ) ( (  op_dash_sub348 ( ( (  s1906 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion751){ .fun = (  enum Unit_8  (*) (  struct env750*  ,    int32_t  ) )lam754 , .env =  envinst750 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_189   lam755 (    struct Cell_189  dref3461 ) {
    return ( (  default_dash_cell747 ) ( ) );
}

static  struct Screen_187   mk_dash_screen708 (    struct Tui_81 *  tui3455 ,    enum CAllocator_10  al3457 ) {
    struct Slice_188  cur3458 = ( (  allocate709 ) ( (  al3457 ) ,  ( (  u32_dash_size714 ) ( (  op_dash_mul722 ( ( ( * (  tui3455 ) ) .f_width ) , ( ( * (  tui3455 ) ) .f_height ) ) ) ) ) ) );
    ( (  map723 ) ( (  cur3458 ) ,  (  lam746 ) ) );
    struct Slice_188  prev3460 = ( (  allocate709 ) ( (  al3457 ) ,  ( (  u32_dash_size714 ) ( (  op_dash_mul722 ( ( ( * (  tui3455 ) ) .f_width ) , ( ( * (  tui3455 ) ) .f_height ) ) ) ) ) ) );
    ( (  map748 ) ( (  prev3460 ) ,  (  lam755 ) ) );
    return ( (struct Screen_187) { .f_current = (  cur3458 ) , .f_previous = (  prev3460 ) , .f_al = (  al3457 ) , .f_tui = (  tui3455 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_190) { .tag = Color_190_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_190) { .tag = Color_190_ColorDefault_t } ) } );
}

enum MouseButton_763 {
    MouseButton_763_MouseLeft,
    MouseButton_763_MouseMiddle,
    MouseButton_763_MouseRight,
    MouseButton_763_ScrollUp,
    MouseButton_763_ScrollDown,
};

struct MouseEvent_762 {
    enum MouseButton_763  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_761 {
    enum {
        InputEvent_761_Key_t,
        InputEvent_761_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_178  field0;
        } InputEvent_761_Key_s;
        struct {
            struct MouseEvent_762  field0;
        } InputEvent_761_Mouse_s;
    } stuff;
};

static struct InputEvent_761 InputEvent_761_Key (  struct Key_178  field0 ) {
    return ( struct InputEvent_761 ) { .tag = InputEvent_761_Key_t, .stuff = { .InputEvent_761_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_761 InputEvent_761_Mouse (  struct MouseEvent_762  field0 ) {
    return ( struct InputEvent_761 ) { .tag = InputEvent_761_Mouse_t, .stuff = { .InputEvent_761_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_760 {
    enum {
        Maybe_760_None_t,
        Maybe_760_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_761  field0;
        } Maybe_760_Just_s;
    } stuff;
};

static struct Maybe_760 Maybe_760_Just (  struct InputEvent_761  field0 ) {
    return ( struct Maybe_760 ) { .tag = Maybe_760_Just_t, .stuff = { .Maybe_760_Just_s = { .field0 = field0 } } };
};

struct envunion759 {
    struct Maybe_760  (*fun) (  struct env79*  ,    struct Tui_81 *  );
    struct env79 env;
};

struct env758 {
    struct env79 envinst79;
    struct Tui_81 *  tui4423;
};

struct envunion764 {
    struct Maybe_760  (*fun) (  struct env758*  );
    struct env758 env;
};

struct FunIter_757 {
    struct envunion764  f_fun;
    bool  f_finished;
};

static  struct FunIter_757   into_dash_iter765 (    struct FunIter_757  self1028 ) {
    return (  self1028 );
}

static  struct FunIter_757   from_dash_function766 (   struct envunion764  fun1036 ) {
    return ( (struct FunIter_757) { .f_fun = (  fun1036 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions771 (   struct env78* env ,    struct Tui_81 *  tui3421 ) {
    if ( ( ! ( * ( env->should_dash_resize3349 ) ) ) ) {
        return ( false );
    }
    (*  tui3421 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3349 ) = ( false );
    struct Tuple2_671  dim3422 = ( (  get_dash_dimensions672 ) ( ) );
    uint32_t  w3423 = ( (  fst705 ) ( (  dim3422 ) ) );
    uint32_t  h3424 = ( (  snd706 ) ( (  dim3422 ) ) );
    (*  tui3421 ) .f_width = (  w3423 );
    (*  tui3421 ) .f_height = (  h3424 );
    return ( true );
}

static  char   undefined774 (  ) {
    char  temp775;
    return (  temp775 );
}

struct Maybe_776 {
    enum {
        Maybe_776_None_t,
        Maybe_776_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_776_Just_s;
    } stuff;
};

static struct Maybe_776 Maybe_776_Just (  char  field0 ) {
    return ( struct Maybe_776 ) { .tag = Maybe_776_Just_t, .stuff = { .Maybe_776_Just_s = { .field0 = field0 } } };
};

struct Pollfd_778 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr779 (    struct Pollfd_778 *  p359 ) {
    return ( (struct pollfd * ) (  p359 ) );
}

static  void *   cast_dash_ptr782 (    char *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of783 (    char  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  char   zeroed780 (  ) {
    char  temp781;
    char  x570 = (  temp781 );
    ( ( memset ) ( ( (  cast_dash_ptr782 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of783 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Maybe_776   read_dash_byte777 (    int32_t  timeout_dash_ms3343 ) {
    struct Pollfd_778  pfd3344 = ( (struct Pollfd_778) { .f_fd = (  from_dash_integral56 ( 0 ) ) , .f_events = (  from_dash_integral684 ( 1 ) ) , .f_revents = (  from_dash_integral684 ( 0 ) ) } );
    if ( (  cmp361 ( ( ( poll ) ( ( (  cast_dash_ptr779 ) ( ( & (  pfd3344 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  timeout_dash_ms3343 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_776) { .tag = Maybe_776_None_t } );
    }
    char  c3345 = ( ( (  zeroed780 ) ( ) ) );
    if ( (  cmp361 ( ( ( read ) ( ( (  stdin_dash_fileno585 ) ( ) ) ,  ( (  cast_dash_ptr782 ) ( ( & (  c3345 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_776) { .tag = Maybe_776_None_t } );
    }
    return ( ( Maybe_776_Just ) ( (  c3345 ) ) );
}

static  uint8_t   ascii_dash_u8784 (    char  c776 ) {
    return ( ( (uint8_t ) (  c776 ) ) );
}

static  char   u8_dash_ascii785 (    uint8_t  b779 ) {
    return ( ( (char ) (  b779 ) ) );
}

static  uint8_t *   cast789 (    uint32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed787 (    uint8_t  x573 ) {
    uint32_t  temp788 = ( (  zeroed688 ) ( ) );
    uint32_t *  y574 = ( &temp788 );
    uint8_t *  yp575 = ( (  cast789 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u8_dash_u32786 (    uint8_t  x672 ) {
    return ( (  cast_dash_on_dash_zeroed787 ) ( (  x672 ) ) );
}

struct Map_792 {
    struct StrViewIter_649  field0;
    uint32_t (*  field1 )(    struct Char_65  );
};

static struct Map_792 Map_792_Map (  struct StrViewIter_649  field0 ,  uint32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_792 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_792   into_dash_iter793 (    struct Map_792  self796 ) {
    return (  self796 );
}

static  struct Maybe_594   next794 (    struct Map_792 *  dref798 ) {
    struct Maybe_652  dref801 = ( (  next653 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_652_None_t ) {
        return ( (struct Maybe_594) { .tag = Maybe_594_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_652_Just_t ) {
            return ( ( Maybe_594_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_652_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce791 (    struct Map_792  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct Map_792  it1099 = ( (  into_dash_iter793 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_594  dref1100 = ( (  next794 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_594_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_594_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_594_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp795 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp795);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp796;
    return (  temp796 );
}

static  struct Map_792   map797 (    struct StrView_27  iterable805 ,    uint32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrViewIter_649  it808 = ( (  into_dash_iter655 ) ( (  iterable805 ) ) );
    return ( ( Map_792_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  void *   cast_dash_ptr804 (    int64_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of805 (    int64_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int64_t   zeroed802 (  ) {
    int64_t  temp803;
    int64_t  x570 = (  temp803 );
    ( ( memset ) ( ( (  cast_dash_ptr804 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of805 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast806 (    int64_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int64_t   cast_dash_on_dash_zeroed800 (    uint8_t  x573 ) {
    int64_t  temp801 = ( (  zeroed802 ) ( ) );
    int64_t *  y574 = ( &temp801 );
    uint8_t *  yp575 = ( (  cast806 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int64_t   u8_dash_i64799 (    uint8_t  x666 ) {
    return ( (  cast_dash_on_dash_zeroed800 ) ( (  x666 ) ) );
}

struct StrConcat_809 {
    struct Char_65  field0;
    struct Char_65  field1;
};

static struct StrConcat_809 StrConcat_809_StrConcat (  struct Char_65  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_809 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_808 {
    struct StrConcat_809  field0;
    struct StrView_27  field1;
};

static struct StrConcat_808 StrConcat_808_StrConcat (  struct StrConcat_809  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_808 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_813 {
    struct StrView_27  field0;
    struct StrConcat_808  field1;
};

static struct StrConcat_813 StrConcat_813_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_808  field1 ) {
    return ( struct StrConcat_813 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_812 {
    struct StrConcat_813  field0;
    struct Char_65  field1;
};

static struct StrConcat_812 StrConcat_812_StrConcat (  struct StrConcat_813  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_812 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str816 (    struct StrConcat_809  self1509 ) {
    struct StrConcat_809  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str239 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str239 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str815 (    struct StrConcat_808  self1509 ) {
    struct StrConcat_808  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str816 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str231 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str814 (    struct StrConcat_813  self1509 ) {
    struct StrConcat_813  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str231 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str815 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str811 (    struct StrConcat_812  self1509 ) {
    struct StrConcat_812  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str814 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str239 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic810 (    struct StrConcat_808  errmsg1713 ) {
    ( (  print_dash_str811 ) ( ( ( StrConcat_812_StrConcat ) ( ( ( StrConcat_813_StrConcat ) ( ( (  from_dash_string256 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t   or_dash_fail807 (    struct Maybe_389  x1726 ,    struct StrConcat_808  errmsg1728 ) {
    struct Maybe_389  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_389_None_t ) {
        ( (  panic810 ) ( (  errmsg1728 ) ) );
        return ( (  undefined425 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_389_Just_t ) {
            return ( dref1729 .stuff .Maybe_389_Just_s .field0 );
        }
    }
}

static  enum Ordering_221   cmp818 (    struct Char_65  l744 ,    struct Char_65  r746 ) {
    if ( ( ( !  eq275 ( ( (  l744 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq275 ( ( (  r746 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp819 = ( (  from_dash_string57 ) ( ( "(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp819);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( (  cmp261 ) ( ( (  char_dash_u8428 ) ( (  l744 ) ) ) ,  ( (  char_dash_u8428 ) ( (  r746 ) ) ) ) );
}

static  uint8_t   op_dash_sub820 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  uint8_t   op_dash_add821 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  struct Maybe_389   hex_dash_digit817 (    struct Char_65  c2561 ) {
    if ( ( (  cmp818 ( (  c2561 ) , ( (  from_dash_charlike257 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp818 ( (  c2561 ) , ( (  from_dash_charlike257 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_389_Just ) ( (  op_dash_sub820 ( ( (  char_dash_u8428 ) ( (  c2561 ) ) ) , ( (  char_dash_u8428 ) ( ( (  from_dash_charlike257 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp818 ( (  c2561 ) , ( (  from_dash_charlike257 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp818 ( (  c2561 ) , ( (  from_dash_charlike257 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_389_Just ) ( (  op_dash_add821 ( (  op_dash_sub820 ( ( (  char_dash_u8428 ) ( (  c2561 ) ) ) , ( (  char_dash_u8428 ) ( ( (  from_dash_charlike257 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral248 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp818 ( (  c2561 ) , ( (  from_dash_charlike257 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp818 ( (  c2561 ) , ( (  from_dash_charlike257 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_389_Just ) ( (  op_dash_add821 ( (  op_dash_sub820 ( ( (  char_dash_u8428 ) ( (  c2561 ) ) ) , ( (  char_dash_u8428 ) ( ( (  from_dash_charlike257 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral248 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_389) { .tag = Maybe_389_None_t } );
}

static  uint32_t   lam798 (    struct Char_65  c2566 ) {
    return ( (  from_dash_integral252 ) ( ( (  u8_dash_i64799 ) ( ( (  or_dash_fail807 ) ( ( (  hex_dash_digit817 ) ( (  c2566 ) ) ) ,  ( ( StrConcat_808_StrConcat ) ( ( ( StrConcat_809_StrConcat ) ( ( (  from_dash_charlike257 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2566 ) ) ) ,  ( (  from_dash_string256 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   op_dash_add823 (    uint32_t  l230 ,    uint32_t  r232 ) {
    return ( (  l230 ) + (  r232 ) );
}

static  uint32_t   lam822 (    uint32_t  elem2568 ,    uint32_t  b2570 ) {
    return (  op_dash_add823 ( (  op_dash_mul722 ( (  b2570 ) , (  from_dash_integral252 ( 16 ) ) ) ) , (  elem2568 ) ) );
}

static  uint32_t   from_dash_hex790 (    struct StrView_27  arr2564 ) {
    return ( (  reduce791 ) ( ( (  map797 ) ( (  arr2564 ) ,  (  lam798 ) ) ) ,  (  from_dash_integral252 ( 0 ) ) ,  (  lam822 ) ) );
}

static  bool   eq825 (    char  l374 ,    char  r376 ) {
    return ( (  l374 ) == (  r376 ) );
}

static  char   from_dash_charlike826 (    uint8_t *  ptr369 ,    size_t  num_dash_bytes371 ) {
    if ( ( !  eq275 ( (  num_dash_bytes371 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp827 = ( (  from_dash_string57 ) ( ( "(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp827);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( ( (char ) ( * (  ptr369 ) ) ) );
}

struct Array_828 {
    char _arr [32];
};

static  void *   cast_dash_ptr832 (    struct Array_828 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of833 (    struct Array_828  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Array_828   zeroed830 (  ) {
    struct Array_828  temp831;
    struct Array_828  x570 = (  temp831 );
    ( ( memset ) ( ( (  cast_dash_ptr832 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of833 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr837 (    struct Array_828 *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  char *   offset_dash_ptr838 (    char *  x338 ,    int64_t  count340 ) {
    char  temp839;
    return ( (char * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul266 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp839 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr836 (    struct Array_828 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp220 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i2254 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic224 ) ( ( ( StrConcat_225_StrConcat ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string256 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2255 = ( ( (  cast_dash_ptr837 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr838 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  enum Unit_8   set835 (    struct Array_828 *  arr2264 ,    size_t  i2267 ,    char  e2269 ) {
    char *  p2270 = ( (  get_dash_ptr836 ) ( (  arr2264 ) ,  (  i2267 ) ) );
    (*  p2270 ) = (  e2269 );
    return ( Unit_8_Unit );
}

struct Slice_841 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail844 (    struct Maybe_776  x1726 ,    struct StrConcat_289  errmsg1728 ) {
    struct Maybe_776  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_776_None_t ) {
        ( (  panic288 ) ( (  errmsg1728 ) ) );
        return ( (  undefined774 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_776_Just_t ) {
            return ( dref1729 .stuff .Maybe_776_Just_s .field0 );
        }
    }
}

static  struct Maybe_776   try_dash_get845 (    struct Slice_841  slice1764 ,    size_t  i1766 ) {
    if ( ( (  cmp220 ( (  i1766 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i1766 ) , ( (  slice1764 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_776) { .tag = Maybe_776_None_t } );
    }
    char *  elem_dash_ptr1767 = ( (  offset_dash_ptr838 ) ( ( (  slice1764 ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  i1766 ) ) ) ) );
    return ( ( Maybe_776_Just ) ( ( * (  elem_dash_ptr1767 ) ) ) );
}

static  char   get843 (    struct Slice_841  slice1770 ,    size_t  i1772 ) {
    return ( (  or_dash_fail844 ) ( ( (  try_dash_get845 ) ( (  slice1770 ) ,  (  i1772 ) ) ) ,  ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1772 ) ) ) ,  ( (  from_dash_string256 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1770 ) .f_count ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get842 (    struct Slice_841  self1868 ,    size_t  idx1870 ) {
    return ( (  get843 ) ( (  self1868 ) ,  (  idx1870 ) ) );
}

struct Scanner_846 {
    struct StrViewIter_649  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_846   mk_dash_from_dash_str848 (    struct StrView_27  s3190 ) {
    return ( (struct Scanner_846) { .f_s = ( (  chars654 ) ( (  s3190 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  int32_t   op_dash_sub851 (    int32_t  l212 ,    int32_t  r214 ) {
    return ( (  l212 ) - (  r214 ) );
}

static  uint8_t *   offset_dash_ptr_prime_853 (    uint8_t *  x343 ,    size_t  count345 ) {
    return ( (  offset_dash_ptr373 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
}

static  struct StrView_27   substr849 (    struct StrView_27  s2173 ,    size_t  from2175 ,    size_t  to2177 ) {
    size_t  from_dash_bs2178 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_728  temp850 =  into_dash_iter730 ( ( (  to733 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub851 ( ( (  size_dash_i32232 ) ( (  from2175 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_308  __cond852 =  next731 (&temp850);
        if (  __cond852 .tag == 0 ) {
            break;
        }
        int32_t  dref2179 =  __cond852 .stuff .Maybe_308_Just_s .field0;
        if ( (  cmp220 ( (  from_dash_bs2178 ) , ( ( (  s2173 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2178 = (  op_dash_add268 ( (  from_dash_bs2178 ) , ( (  next_dash_char260 ) ( ( (  offset_dash_ptr_prime_853 ) ( ( ( (  s2173 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2178 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2180 = (  from_dash_bs2178 );
    struct RangeIter_728  temp854 =  into_dash_iter730 ( ( (  to733 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub851 ( (  op_dash_sub851 ( ( (  size_dash_i32232 ) ( (  to2177 ) ) ) , ( (  size_dash_i32232 ) ( (  from2175 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_308  __cond855 =  next731 (&temp854);
        if (  __cond855 .tag == 0 ) {
            break;
        }
        int32_t  dref2181 =  __cond855 .stuff .Maybe_308_Just_s .field0;
        if ( (  cmp220 ( (  to_dash_bs2180 ) , ( ( (  s2173 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2180 = (  op_dash_add268 ( (  to_dash_bs2180 ) , ( (  next_dash_char260 ) ( ( (  offset_dash_ptr_prime_853 ) ( ( ( (  s2173 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2180 ) ) ) ) ) ) );
    }
    return ( (struct StrView_27) { .f_contents = ( (  subslice372 ) ( ( (  s2173 ) .f_contents ) ,  (  from_dash_bs2178 ) ,  (  to_dash_bs2180 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr858 (    char *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_14   cast_dash_slice857 (    struct Slice_841  s1933 ) {
    return ( (struct Slice_14) { .f_ptr = ( (  cast_dash_ptr858 ) ( ( (  s1933 ) .f_ptr ) ) ) , .f_count = ( (  s1933 ) .f_count ) } );
}

static  struct StrView_27   from_dash_ascii_dash_slice856 (    struct Slice_841  sl2150 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice857 ) ( (  sl2150 ) ) ) } );
}

struct Maybe_859 {
    enum {
        Maybe_859_None_t,
        Maybe_859_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_859_Just_s;
    } stuff;
};

static struct Maybe_859 Maybe_859_Just (  int64_t  field0 ) {
    return ( struct Maybe_859 ) { .tag = Maybe_859_Just_t, .stuff = { .Maybe_859_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_861 {
    struct Scanner_846  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

static  struct Scanner_846   into_dash_iter864 (    struct Scanner_846  self3181 ) {
    return (  self3181 );
}

static  struct Scanner_846   into_dash_iter863 (    struct Scanner_846 *  self785 ) {
    return ( (  into_dash_iter864 ) ( ( * (  self785 ) ) ) );
}

static  struct TakeWhile_861   take_dash_while862 (    struct Scanner_846 *  it970 ,    bool (*  pred972 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_861) { .f_it = ( (  into_dash_iter863 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  bool   is_dash_digit865 (    struct Char_65  c2467 ) {
    return ( (  cmp261 ( ( (  char_dash_u8428 ) ( (  c2467 ) ) ) , ( (  char_dash_u8428 ) ( ( (  from_dash_charlike257 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp261 ( ( (  char_dash_u8428 ) ( (  c2467 ) ) ) , ( (  char_dash_u8428 ) ( ( (  from_dash_charlike257 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_652   next869 (    struct Scanner_846 *  self3176 ) {
    struct Maybe_652  dref3177 = ( (  next653 ) ( ( & ( ( * (  self3176 ) ) .f_s ) ) ) );
    if ( dref3177.tag == Maybe_652_Just_t ) {
        (*  self3176 ) .f_byte_dash_offset = (  op_dash_add268 ( ( ( * (  self3176 ) ) .f_byte_dash_offset ) , ( ( dref3177 .stuff .Maybe_652_Just_s .field0 ) .f_num_dash_bytes ) ) );
        return ( ( Maybe_652_Just ) ( ( dref3177 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref3177.tag == Maybe_652_None_t ) {
            return ( (struct Maybe_652) { .tag = Maybe_652_None_t } );
        }
    }
}

static  struct Maybe_652   next868 (    struct TakeWhile_861 *  self964 ) {
    struct Maybe_652  mx965 = ( (  next869 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_652  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_652_None_t ) {
        return ( (struct Maybe_652) { .tag = Maybe_652_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_652_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_652_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_652_Just ) ( ( dref966 .stuff .Maybe_652_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_652) { .tag = Maybe_652_None_t } );
            }
        }
    }
}

static  struct TakeWhile_861   into_dash_iter871 (    struct TakeWhile_861  self961 ) {
    return (  self961 );
}

static  struct Maybe_652   head867 (    struct TakeWhile_861  it1142 ) {
    struct TakeWhile_861  temp870 = ( (  into_dash_iter871 ) ( (  it1142 ) ) );
    return ( (  next868 ) ( ( &temp870 ) ) );
}

static  bool   null866 (    struct TakeWhile_861  it1151 ) {
    struct Maybe_652  dref1152 = ( (  head867 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_652_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env874 {
    struct Scanner_846 *  it1186;
    ;
};

struct envunion875 {
    struct Maybe_652  (*fun) (  struct env874*  ,    int32_t  );
    struct env874 env;
};

static  enum Unit_8   for_dash_each873 (    struct Range_725  iterable1074 ,   struct envunion875  fun1076 ) {
    struct RangeIter_728  temp876 = ( (  into_dash_iter730 ) ( (  iterable1074 ) ) );
    struct RangeIter_728 *  it1077 = ( &temp876 );
    while ( ( true ) ) {
        struct Maybe_308  dref1078 = ( (  next731 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_308_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_308_Just_t ) {
                struct envunion875  temp877 = (  fun1076 );
                ( temp877.fun ( &temp877.env ,  ( dref1078 .stuff .Maybe_308_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_652   lam878 (   struct env874* env ,    int32_t  dref1189 ) {
    return ( (  next869 ) ( ( env->it1186 ) ) );
}

static  enum Unit_8   drop_prime_872 (    struct Scanner_846 *  it1186 ,    size_t  n1188 ) {
    struct env874 envinst874 = {
        .it1186 =  it1186 ,
    };
    ( (  for_dash_each873 ) ( ( (  to733 ) ( (  from_dash_integral56 ( 1 ) ) ,  ( (  size_dash_i32232 ) ( (  n1188 ) ) ) ) ) ,  ( (struct envunion875){ .fun = (  struct Maybe_652  (*) (  struct env874*  ,    int32_t  ) )lam878 , .env =  envinst874 } ) ) );
    return ( Unit_8_Unit );
}

static  size_t   reduce880 (    struct TakeWhile_861  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct TakeWhile_861  it1099 = ( (  into_dash_iter871 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_652  dref1100 = ( (  next868 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_652_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_652_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_652_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp881 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp881);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp882;
    return (  temp882 );
}

static  size_t   lam883 (    struct Char_65  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add268 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count879 (    struct TakeWhile_861  it1104 ) {
    return ( (  reduce880 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam883 ) ) );
}

static  struct TakeWhile_861   chars885 (    struct TakeWhile_861  self1657 ) {
    return (  self1657 );
}

static  struct Maybe_859   reduce886 (    struct TakeWhile_861  iterable1093 ,    struct Maybe_859  base1095 ,    struct Maybe_859 (*  fun1097 )(    struct Char_65  ,    struct Maybe_859  ) ) {
    struct Maybe_859  x1098 = (  base1095 );
    struct TakeWhile_861  it1099 = ( (  into_dash_iter871 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_652  dref1100 = ( (  next868 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_652_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_652_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_652_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp887 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp887);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_859  temp888;
    return (  temp888 );
}

static  void *   cast_dash_ptr896 (    int32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of897 (    int32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int32_t   zeroed894 (  ) {
    int32_t  temp895;
    int32_t  x570 = (  temp895 );
    ( ( memset ) ( ( (  cast_dash_ptr896 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of897 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast898 (    int32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed892 (    uint8_t  x573 ) {
    int32_t  temp893 = ( (  zeroed894 ) ( ) );
    int32_t *  y574 = ( &temp893 );
    uint8_t *  yp575 = ( (  cast898 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int32_t   u8_dash_i32891 (    uint8_t  x669 ) {
    return ( (  cast_dash_on_dash_zeroed892 ) ( (  x669 ) ) );
}

static  struct Maybe_308   parse_dash_digit890 (    struct Char_65  c2470 ) {
    if ( ( (  is_dash_digit865 ) ( (  c2470 ) ) ) ) {
        return ( ( Maybe_308_Just ) ( ( (  u8_dash_i32891 ) ( (  op_dash_sub820 ( ( (  char_dash_u8428 ) ( (  c2470 ) ) ) , ( (  char_dash_u8428 ) ( ( (  from_dash_charlike257 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
}

static  int64_t   i32_dash_i64899 (    int32_t  x606 ) {
    return ( (int64_t ) (  x606 ) );
}

static  struct Maybe_859   sequence_dash_maybe889 (    struct Char_65  e2476 ,    struct Maybe_859  b2478 ) {
    struct Maybe_859  dref2479 = (  b2478 );
    if ( dref2479.tag == Maybe_859_None_t ) {
        return ( (struct Maybe_859) { .tag = Maybe_859_None_t } );
    }
    else {
        if ( dref2479.tag == Maybe_859_Just_t ) {
            struct Maybe_308  dref2481 = ( (  parse_dash_digit890 ) ( (  e2476 ) ) );
            if ( dref2481.tag == Maybe_308_None_t ) {
                return ( (struct Maybe_859) { .tag = Maybe_859_None_t } );
            }
            else {
                if ( dref2481.tag == Maybe_308_Just_t ) {
                    return ( ( Maybe_859_Just ) ( (  op_dash_add449 ( (  op_dash_mul266 ( ( dref2479 .stuff .Maybe_859_Just_s .field0 ) , (  from_dash_integral347 ( 10 ) ) ) ) , ( (  i32_dash_i64899 ) ( ( dref2481 .stuff .Maybe_308_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_859   parse_dash_int884 (    struct TakeWhile_861  s2473 ) {
    struct TakeWhile_861  cs2483 = ( (  chars885 ) ( (  s2473 ) ) );
    struct Maybe_652  dref2484 = ( (  head867 ) ( (  cs2483 ) ) );
    if ( dref2484.tag == Maybe_652_Just_t ) {
        return ( (  reduce886 ) ( (  cs2483 ) ,  ( ( Maybe_859_Just ) ( (  from_dash_integral347 ( 0 ) ) ) ) ,  (  sequence_dash_maybe889 ) ) );
    }
    else {
        if ( dref2484.tag == Maybe_652_None_t ) {
            return ( (struct Maybe_859) { .tag = Maybe_859_None_t } );
        }
    }
}

static  struct Maybe_859   scan_dash_int860 (    struct Scanner_846 *  sc3193 ) {
    struct TakeWhile_861  digit_dash_chars3194 = ( (  take_dash_while862 ) ( (  sc3193 ) ,  (  is_dash_digit865 ) ) );
    if ( ( (  null866 ) ( (  digit_dash_chars3194 ) ) ) ) {
        return ( (struct Maybe_859) { .tag = Maybe_859_None_t } );
    }
    ( (  drop_prime_872 ) ( (  sc3193 ) ,  ( (  count879 ) ( (  digit_dash_chars3194 ) ) ) ) );
    return ( (  parse_dash_int884 ) ( (  digit_dash_chars3194 ) ) );
}

static  int32_t   i64_dash_i32901 (    int64_t  x618 ) {
    return ( (int32_t ) (  x618 ) );
}

struct StrConcat_903 {
    struct StrView_27  field0;
    int64_t  field1;
};

static struct StrConcat_903 StrConcat_903_StrConcat (  struct StrView_27  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_903 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_906 {
    struct StrView_27  field0;
    struct StrConcat_903  field1;
};

static struct StrConcat_906 StrConcat_906_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_903  field1 ) {
    return ( struct StrConcat_906 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_905 {
    struct StrConcat_906  field0;
    struct Char_65  field1;
};

static struct StrConcat_905 StrConcat_905_StrConcat (  struct StrConcat_906  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_905 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_911 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_910 {
    struct StrViewIter_649  f_left;
    struct IntStrIter_911  f_right;
};

struct StrConcatIter_909 {
    struct StrViewIter_649  f_left;
    struct StrConcatIter_910  f_right;
};

enum EmptyIter_913 {
    EmptyIter_913_EmptyIter,
};

struct AppendIter_912 {
    enum EmptyIter_913  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

struct StrConcatIter_908 {
    struct StrConcatIter_909  f_left;
    struct AppendIter_912  f_right;
};

static  struct StrConcatIter_908   into_dash_iter915 (    struct StrConcatIter_908  self1497 ) {
    return (  self1497 );
}

struct env922 {
    ;
    int64_t  base1210;
};

struct envunion923 {
    int64_t  (*fun) (  struct env922*  ,    int32_t  ,    int64_t  );
    struct env922 env;
};

static  int64_t   reduce921 (    struct Range_725  iterable1093 ,    int64_t  base1095 ,   struct envunion923  fun1097 ) {
    int64_t  x1098 = (  base1095 );
    struct RangeIter_728  it1099 = ( (  into_dash_iter730 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_308  dref1100 = ( (  next731 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_308_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_308_Just_t ) {
                struct envunion923  temp924 = (  fun1097 );
                x1098 = ( temp924.fun ( &temp924.env ,  ( dref1100 .stuff .Maybe_308_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp925 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp925);
    exit ( 1 );
    ( Unit_8_Unit );
    int64_t  temp926;
    return (  temp926 );
}

static  int64_t   lam927 (   struct env922* env ,    int32_t  item1214 ,    int64_t  x1216 ) {
    return (  op_dash_mul266 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int64_t   pow920 (    int64_t  base1210 ,    int32_t  p1212 ) {
    struct env922 envinst922 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce921 ) ( ( (  to733 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub851 ( (  p1212 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral347 ( 1 ) ) ,  ( (struct envunion923){ .fun = (  int64_t  (*) (  struct env922*  ,    int32_t  ,    int64_t  ) )lam927 , .env =  envinst922 } ) ) );
}

static  int64_t   op_dash_div928 (    int64_t  l199 ,    int64_t  r201 ) {
    return ( (  l199 ) / (  r201 ) );
}

static  uint8_t   cast929 (    int64_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  int64_t   op_dash_sub930 (    int64_t  l189 ,    int64_t  r191 ) {
    return ( (  l189 ) - (  r191 ) );
}

static  uint8_t *   cast936 (    size_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed934 (    uint8_t  x573 ) {
    size_t  temp935 = ( (  zeroed717 ) ( ) );
    size_t *  y574 = ( &temp935 );
    uint8_t *  yp575 = ( (  cast936 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u8_dash_size933 (    uint8_t  x663 ) {
    return ( (  cast_dash_on_dash_zeroed934 ) ( (  x663 ) ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer932 (    uint8_t *  ptr681 ,    uint8_t  b683 ) {
    size_t  s684 = ( ( (size_t ) (  ptr681 ) ) );
    size_t  exp685 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add268 ( (  op_dash_sub348 ( (  s684 ) , ( (  u8_dash_size933 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer245 ) ( (  ptr681 ) ) ) ) ) ) ) , (  op_dash_mul281 ( (  exp685 ) , ( (  u8_dash_size933 ) ( (  b683 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast937 (    size_t  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_65   from_dash_u8931 (    uint8_t  b772 ) {
    uint8_t *  ptr773 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer932 ) ( ( ( (  cast937 ) ( ( (  u8_dash_size933 ) ( (  b772 ) ) ) ) ) ) ,  (  from_dash_integral248 ( 103 ) ) ) );
    return ( (struct Char_65) { .f_ptr = (  ptr773 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_652   next919 (    struct IntStrIter_911 *  self1428 ) {
    if ( ( ( * (  self1428 ) ) .f_negative ) ) {
        (*  self1428 ) .f_negative = ( false );
        return ( ( Maybe_652_Just ) ( ( (  from_dash_charlike257 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp361 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_652) { .tag = Maybe_652_None_t } );
    }
    int64_t  trim_dash_down1429 = ( (  pow920 ) ( (  from_dash_integral347 ( 10 ) ) ,  (  op_dash_sub851 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int64_t  upper1430 = (  op_dash_div928 ( ( ( * (  self1428 ) ) .f_int ) , (  trim_dash_down1429 ) ) );
    int64_t  upper_dash_mask1431 = (  op_dash_mul266 ( (  op_dash_div928 ( (  upper1430 ) , (  from_dash_integral347 ( 10 ) ) ) ) , (  from_dash_integral347 ( 10 ) ) ) );
    uint8_t  digit1432 = ( ( (  cast929 ) ( (  op_dash_sub930 ( (  upper1430 ) , (  upper_dash_mask1431 ) ) ) ) ) );
    (*  self1428 ) .f_len = (  op_dash_sub851 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1433 = ( (  from_dash_u8931 ) ( (  op_dash_add821 ( (  digit1432 ) , (  from_dash_integral248 ( 48 ) ) ) ) ) );
    return ( ( Maybe_652_Just ) ( (  digit_dash_char1433 ) ) );
}

static  struct Maybe_652   next918 (    struct StrConcatIter_910 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next919 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next917 (    struct StrConcatIter_909 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next918 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next939 (    enum EmptyIter_913 *  dref792 ) {
    return ( (struct Maybe_652) { .tag = Maybe_652_None_t } );
}

static  struct Maybe_652   next938 (    struct AppendIter_912 *  self1022 ) {
    struct Maybe_652  dref1023 = ( (  next939 ) ( ( & ( ( * (  self1022 ) ) .f_it ) ) ) );
    if ( dref1023.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1023 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1023.tag == Maybe_652_None_t ) {
            if ( ( ! ( ( * (  self1022 ) ) .f_appended ) ) ) {
                (*  self1022 ) .f_appended = ( true );
                return ( ( Maybe_652_Just ) ( ( ( * (  self1022 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_652) { .tag = Maybe_652_None_t } );
        }
    }
}

static  struct Maybe_652   next916 (    struct StrConcatIter_908 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next917 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next938 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each907 (    struct StrConcatIter_908  iterable1074 ,    enum Unit_8 (*  fun1076 )(    struct Char_65  ) ) {
    struct StrConcatIter_908  temp914 = ( (  into_dash_iter915 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_908 *  it1077 = ( &temp914 );
    while ( ( true ) ) {
        struct Maybe_652  dref1078 = ( (  next916 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_652_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_652_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_652_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_221   cmp948 (    int64_t  l154 ,    int64_t  r156 ) {
    return ( builtin_int64_tcmp( (  l154 ) , (  r156 ) ) );
}

static  int64_t   op_dash_neg949 (    int64_t  l204 ) {
    return ( (  from_dash_integral347 ( 0 ) ) - (  l204 ) );
}

static  bool   eq951 (    int64_t  l101 ,    int64_t  r103 ) {
    return ( (  l101 ) == (  r103 ) );
}

static  int32_t   count_dash_digits950 (    int64_t  self1436 ) {
    if ( (  eq951 ( (  self1436 ) , (  from_dash_integral347 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1437 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp948 ( (  self1436 ) , (  from_dash_integral347 ( 0 ) ) ) == 2 ) ) {
        self1436 = (  op_dash_div928 ( (  self1436 ) , (  from_dash_integral347 ( 10 ) ) ) );
        digits1437 = (  op_dash_add310 ( (  digits1437 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1437 );
}

static  struct IntStrIter_911   int_dash_iter947 (    int64_t  int1440 ) {
    if ( (  cmp948 ( (  int1440 ) , (  from_dash_integral347 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_911) { .f_int = (  op_dash_neg949 ( (  int1440 ) ) ) , .f_len = ( (  count_dash_digits950 ) ( (  op_dash_neg949 ( (  int1440 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_911) { .f_int = (  int1440 ) , .f_len = ( (  count_dash_digits950 ) ( (  int1440 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_911   chars946 (    int64_t  self1467 ) {
    return ( (  int_dash_iter947 ) ( (  self1467 ) ) );
}

static  struct StrConcatIter_910   into_dash_iter945 (    struct StrConcat_903  dref1504 ) {
    return ( (struct StrConcatIter_910) { .f_left = ( (  chars654 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars946 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_910   chars944 (    struct StrConcat_903  self1515 ) {
    return ( (  into_dash_iter945 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_909   into_dash_iter943 (    struct StrConcat_906  dref1504 ) {
    return ( (struct StrConcatIter_909) { .f_left = ( (  chars654 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars944 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_909   chars942 (    struct StrConcat_906  self1515 ) {
    return ( (  into_dash_iter943 ) ( (  self1515 ) ) );
}

static  enum EmptyIter_913   into_dash_iter956 (    enum EmptyIter_913  self790 ) {
    return (  self790 );
}

static  struct AppendIter_912   append955 (    enum EmptyIter_913  it1006 ,    struct Char_65  e1008 ) {
    return ( (struct AppendIter_912) { .f_it = ( (  into_dash_iter956 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_912   cons954 (    enum EmptyIter_913  it1011 ,    struct Char_65  e1013 ) {
    return ( (  append955 ) ( (  it1011 ) ,  (  e1013 ) ) );
}

static  enum EmptyIter_913   nil957 (  ) {
    return ( EmptyIter_913_EmptyIter );
}

static  struct AppendIter_912   single953 (    struct Char_65  e1016 ) {
    return ( (  cons954 ) ( ( (  nil957 ) ( ) ) ,  (  e1016 ) ) );
}

static  struct AppendIter_912   chars952 (    struct Char_65  self1413 ) {
    return ( (  single953 ) ( (  self1413 ) ) );
}

static  struct StrConcatIter_908   into_dash_iter941 (    struct StrConcat_905  dref1504 ) {
    return ( (struct StrConcatIter_908) { .f_left = ( (  chars942 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars952 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_908   chars940 (    struct StrConcat_905  self1515 ) {
    return ( (  into_dash_iter941 ) ( (  self1515 ) ) );
}

static  enum Unit_8   print904 (    struct StrConcat_905  s1702 ) {
    ( (  for_dash_each907 ) ( ( (  chars940 ) ( (  s1702 ) ) ) ,  (  printf_dash_char240 ) ) );
    return ( Unit_8_Unit );
}

static  enum MouseButton_763   undefined958 (  ) {
    enum MouseButton_763  temp959;
    return (  temp959 );
}

static  enum MouseButton_763   panic_prime_902 (    struct StrConcat_903  errmsg1716 ) {
    ( (  print904 ) ( ( ( StrConcat_905_StrConcat ) ( ( ( StrConcat_906_StrConcat ) ( ( (  from_dash_string256 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1716 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( (  undefined958 ) ( ) );
}

static  enum MouseButton_763   btn_dash_to_dash_mouse_dash_button900 (    int64_t  btn3381 ) {
    return ( {  int32_t  dref3382 = ( (  i64_dash_i32901 ) ( (  btn3381 ) ) ) ;  dref3382 == 0 ? ( MouseButton_763_MouseLeft ) :  dref3382 == 1 ? ( MouseButton_763_MouseMiddle ) :  dref3382 == 2 ? ( MouseButton_763_MouseRight ) :  dref3382 == 64 ? ( MouseButton_763_ScrollUp ) :  dref3382 == 65 ? ( MouseButton_763_ScrollDown ) : ( (  panic_prime_902 ) ( ( ( StrConcat_903_StrConcat ) ( ( (  from_dash_string256 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3381 ) ) ) ) ) ; } );
}

static  struct Scanner_846   mk961 (    struct StrView_27  s3184 ) {
    return ( (struct Scanner_846) { .f_s = ( (  into_dash_iter655 ) ( (  s3184 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_760   parse_dash_csi840 (    struct Slice_841  seq3388 ) {
    if ( (  eq275 ( ( (  seq3388 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_760) { .tag = Maybe_760_None_t } );
    }
    char  last3389 = (  elem_dash_get842 ( (  seq3388 ) , (  op_dash_sub348 ( ( (  seq3388 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq825 ( (  elem_dash_get842 ( (  seq3388 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike826 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq825 ( (  last3389 ) , ( (  from_dash_charlike826 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq825 ( (  last3389 ) , ( (  from_dash_charlike826 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_846  temp847 = ( (  mk_dash_from_dash_str848 ) ( ( (  substr849 ) ( ( (  from_dash_ascii_dash_slice856 ) ( (  seq3388 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3388 ) .f_count ) ) ) ) );
        struct Scanner_846 *  sc3390 = ( &temp847 );
        struct Maybe_859  dref3391 = ( (  scan_dash_int860 ) ( (  sc3390 ) ) );
        if ( dref3391.tag == Maybe_859_None_t ) {
            return ( (struct Maybe_760) { .tag = Maybe_760_None_t } );
        }
        else {
            if ( dref3391.tag == Maybe_859_Just_t ) {
                ( (  next869 ) ( (  sc3390 ) ) );
                struct Maybe_859  dref3393 = ( (  scan_dash_int860 ) ( (  sc3390 ) ) );
                if ( dref3393.tag == Maybe_859_None_t ) {
                    return ( (struct Maybe_760) { .tag = Maybe_760_None_t } );
                }
                else {
                    if ( dref3393.tag == Maybe_859_Just_t ) {
                        ( (  next869 ) ( (  sc3390 ) ) );
                        struct Maybe_859  dref3395 = ( (  scan_dash_int860 ) ( (  sc3390 ) ) );
                        if ( dref3395.tag == Maybe_859_None_t ) {
                            return ( (struct Maybe_760) { .tag = Maybe_760_None_t } );
                        }
                        else {
                            if ( dref3395.tag == Maybe_859_Just_t ) {
                                return ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Mouse ) ( ( (struct MouseEvent_762) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button900 ) ( ( dref3391 .stuff .Maybe_859_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub851 ( ( (  i64_dash_i32901 ) ( ( dref3393 .stuff .Maybe_859_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_y = (  op_dash_sub851 ( ( (  i64_dash_i32901 ) ( ( dref3395 .stuff .Maybe_859_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_pressed = (  eq825 ( (  last3389 ) , ( (  from_dash_charlike826 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq275 ( ( (  seq3388 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq825 ( (  last3389 ) , ( (  from_dash_charlike826 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_Up_t } ) ) ) ) );
        }
        if ( (  eq825 ( (  last3389 ) , ( (  from_dash_charlike826 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_Down_t } ) ) ) ) );
        }
        if ( (  eq825 ( (  last3389 ) , ( (  from_dash_charlike826 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_Right_t } ) ) ) ) );
        }
        if ( (  eq825 ( (  last3389 ) , ( (  from_dash_charlike826 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_Left_t } ) ) ) ) );
        }
        if ( (  eq825 ( (  last3389 ) , ( (  from_dash_charlike826 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_Home_t } ) ) ) ) );
        }
        if ( (  eq825 ( (  last3389 ) , ( (  from_dash_charlike826 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_760) { .tag = Maybe_760_None_t } );
    }
    if ( (  eq825 ( (  last3389 ) , ( (  from_dash_charlike826 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_846  temp960 = ( (  mk961 ) ( ( (  from_dash_ascii_dash_slice856 ) ( (  seq3388 ) ) ) ) );
        struct Scanner_846 *  sc3397 = ( &temp960 );
        struct Maybe_859  dref3398 = ( (  scan_dash_int860 ) ( (  sc3397 ) ) );
        if ( dref3398.tag == Maybe_859_None_t ) {
            return ( (struct Maybe_760) { .tag = Maybe_760_None_t } );
        }
        else {
            if ( dref3398.tag == Maybe_859_Just_t ) {
                return ( {  int32_t  dref3400 = ( (  i64_dash_i32901 ) ( ( dref3398 .stuff .Maybe_859_Just_s .field0 ) ) ) ;  dref3400 == 1 ? ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_Home_t } ) ) ) ) ) :  dref3400 == 2 ? ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_Insert_t } ) ) ) ) ) :  dref3400 == 3 ? ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_Delete_t } ) ) ) ) ) :  dref3400 == 4 ? ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_End_t } ) ) ) ) ) :  dref3400 == 5 ? ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_PageUp_t } ) ) ) ) ) :  dref3400 == 6 ? ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_PageDown_t } ) ) ) ) ) :  dref3400 == 15 ? ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_F5_t } ) ) ) ) ) :  dref3400 == 17 ? ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_F6_t } ) ) ) ) ) :  dref3400 == 18 ? ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_F7_t } ) ) ) ) ) :  dref3400 == 19 ? ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_F8_t } ) ) ) ) ) :  dref3400 == 20 ? ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_F9_t } ) ) ) ) ) :  dref3400 == 21 ? ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_F10_t } ) ) ) ) ) :  dref3400 == 23 ? ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_F11_t } ) ) ) ) ) :  dref3400 == 24 ? ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_F12_t } ) ) ) ) ) : ( (struct Maybe_760) { .tag = Maybe_760_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_760) { .tag = Maybe_760_None_t } );
}

static  struct Slice_841   subslice962 (    struct Slice_841  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    char *  begin_dash_ptr1788 = ( (  offset_dash_ptr838 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp220 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp220 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_841) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub348 ( ( (  min375 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_841) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

static  char *   cast964 (    struct Array_828 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_841   as_dash_slice963 (    struct Array_828 *  arr2273 ) {
    return ( (struct Slice_841) { .f_ptr = ( (  cast964 ) ( (  arr2273 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_966 {
    enum {
        Maybe_966_None_t,
        Maybe_966_Just_t,
    } tag;
    union {
        struct {
            struct Key_178  field0;
        } Maybe_966_Just_s;
    } stuff;
};

static struct Maybe_966 Maybe_966_Just (  struct Key_178  field0 ) {
    return ( struct Maybe_966 ) { .tag = Maybe_966_Just_t, .stuff = { .Maybe_966_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_966   parse_dash_ss3967 (    char  c3385 ) {
    if ( (  eq825 ( (  c3385 ) , ( (  from_dash_charlike826 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_966_Just ) ( ( (struct Key_178) { .tag = Key_178_Up_t } ) ) );
    }
    if ( (  eq825 ( (  c3385 ) , ( (  from_dash_charlike826 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_966_Just ) ( ( (struct Key_178) { .tag = Key_178_Down_t } ) ) );
    }
    if ( (  eq825 ( (  c3385 ) , ( (  from_dash_charlike826 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_966_Just ) ( ( (struct Key_178) { .tag = Key_178_Right_t } ) ) );
    }
    if ( (  eq825 ( (  c3385 ) , ( (  from_dash_charlike826 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_966_Just ) ( ( (struct Key_178) { .tag = Key_178_Left_t } ) ) );
    }
    if ( (  eq825 ( (  c3385 ) , ( (  from_dash_charlike826 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_966_Just ) ( ( (struct Key_178) { .tag = Key_178_Home_t } ) ) );
    }
    if ( (  eq825 ( (  c3385 ) , ( (  from_dash_charlike826 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_966_Just ) ( ( (struct Key_178) { .tag = Key_178_End_t } ) ) );
    }
    if ( (  eq825 ( (  c3385 ) , ( (  from_dash_charlike826 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_966_Just ) ( ( (struct Key_178) { .tag = Key_178_F1_t } ) ) );
    }
    if ( (  eq825 ( (  c3385 ) , ( (  from_dash_charlike826 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_966_Just ) ( ( (struct Key_178) { .tag = Key_178_F2_t } ) ) );
    }
    if ( (  eq825 ( (  c3385 ) , ( (  from_dash_charlike826 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_966_Just ) ( ( (struct Key_178) { .tag = Key_178_F3_t } ) ) );
    }
    if ( (  eq825 ( (  c3385 ) , ( (  from_dash_charlike826 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_966_Just ) ( ( (struct Key_178) { .tag = Key_178_F4_t } ) ) );
    }
    return ( (struct Maybe_966) { .tag = Maybe_966_None_t } );
}

static  struct Maybe_760   read_dash_key772 (  ) {
    char  temp773 = ( (  undefined774 ) ( ) );
    char *  ch3402 = ( &temp773 );
    struct Maybe_776  dref3403 = ( (  read_dash_byte777 ) ( (  from_dash_integral56 ( 0 ) ) ) );
    if ( dref3403.tag == Maybe_776_None_t ) {
        return ( (struct Maybe_760) { .tag = Maybe_760_None_t } );
    }
    else {
        if ( dref3403.tag == Maybe_776_Just_t ) {
            (*  ch3402 ) = ( dref3403 .stuff .Maybe_776_Just_s .field0 );
        }
    }
    if ( (  eq244 ( ( (  ascii_dash_u8784 ) ( ( * (  ch3402 ) ) ) ) , (  from_dash_integral248 ( 13 ) ) ) ) ) {
        return ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_Enter_t } ) ) ) ) );
    }
    if ( (  eq244 ( ( (  ascii_dash_u8784 ) ( ( * (  ch3402 ) ) ) ) , (  from_dash_integral248 ( 127 ) ) ) ) ) {
        return ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp261 ( ( (  ascii_dash_u8784 ) ( ( * (  ch3402 ) ) ) ) , (  from_dash_integral248 ( 27 ) ) ) == 0 ) && ( !  eq244 ( ( (  ascii_dash_u8784 ) ( ( * (  ch3402 ) ) ) ) , (  from_dash_integral248 ( 9 ) ) ) ) ) ) {
        char  letter3405 = ( (  u8_dash_ascii785 ) ( ( (  u32_dash_u8254 ) ( ( (  u32_dash_or603 ) ( ( (  u8_dash_u32786 ) ( ( (  ascii_dash_u8784 ) ( ( * (  ch3402 ) ) ) ) ) ) ,  ( (  from_dash_hex790 ) ( ( (  from_dash_string256 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( ( Key_178_Ctrl ) ( (  letter3405 ) ) ) ) ) ) );
    }
    if ( ( !  eq244 ( ( (  ascii_dash_u8784 ) ( ( * (  ch3402 ) ) ) ) , (  from_dash_integral248 ( 27 ) ) ) ) ) {
        if ( (  cmp261 ( ( (  ascii_dash_u8784 ) ( ( * (  ch3402 ) ) ) ) , (  from_dash_integral248 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key772 ) ( ) );
        } else {
            return ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( ( Key_178_Char ) ( ( * (  ch3402 ) ) ) ) ) ) ) );
        }
    }
    char  temp824 = ( (  undefined774 ) ( ) );
    char *  ch23406 = ( &temp824 );
    struct Maybe_776  dref3407 = ( (  read_dash_byte777 ) ( (  from_dash_integral56 ( 50 ) ) ) );
    if ( dref3407.tag == Maybe_776_None_t ) {
        return ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3407.tag == Maybe_776_Just_t ) {
            (*  ch23406 ) = ( dref3407 .stuff .Maybe_776_Just_s .field0 );
        }
    }
    if ( (  eq825 ( ( * (  ch23406 ) ) , ( (  from_dash_charlike826 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_828  temp829 = ( ( (  zeroed830 ) ( ) ) );
        struct Array_828 *  seq3409 = ( &temp829 );
        int32_t  slen3410 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp361 ( (  slen3410 ) , (  from_dash_integral56 ( 31 ) ) ) == 0 ) ) {
            char  temp834 = ( (  undefined774 ) ( ) );
            char *  sc3411 = ( &temp834 );
            struct Maybe_776  dref3412 = ( (  read_dash_byte777 ) ( (  from_dash_integral56 ( 50 ) ) ) );
            if ( dref3412.tag == Maybe_776_None_t ) {
                break;
            }
            else {
                if ( dref3412.tag == Maybe_776_Just_t ) {
                    (*  sc3411 ) = ( dref3412 .stuff .Maybe_776_Just_s .field0 );
                }
            }
            ( (  set835 ) ( (  seq3409 ) ,  ( (  i32_dash_size298 ) ( (  slen3410 ) ) ) ,  ( * (  sc3411 ) ) ) );
            slen3410 = (  op_dash_add310 ( (  slen3410 ) , (  from_dash_integral56 ( 1 ) ) ) );
            if ( ( (  cmp261 ( ( (  ascii_dash_u8784 ) ( ( * (  sc3411 ) ) ) ) , (  from_dash_integral248 ( 64 ) ) ) != 0 ) && (  cmp261 ( ( (  ascii_dash_u8784 ) ( ( * (  sc3411 ) ) ) ) , (  from_dash_integral248 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi840 ) ( ( (  subslice962 ) ( ( (  as_dash_slice963 ) ( (  seq3409 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size298 ) ( (  slen3410 ) ) ) ) ) ) );
    }
    if ( (  eq825 ( ( * (  ch23406 ) ) , ( (  from_dash_charlike826 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp965 = ( (  undefined774 ) ( ) );
        char *  sc3414 = ( &temp965 );
        struct Maybe_776  dref3415 = ( (  read_dash_byte777 ) ( (  from_dash_integral56 ( 50 ) ) ) );
        if ( dref3415.tag == Maybe_776_None_t ) {
            return ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3415.tag == Maybe_776_Just_t ) {
                (*  sc3414 ) = ( dref3415 .stuff .Maybe_776_Just_s .field0 );
            }
        }
        struct Maybe_966  dref3417 = ( (  parse_dash_ss3967 ) ( ( * (  sc3414 ) ) ) );
        if ( dref3417.tag == Maybe_966_None_t ) {
            return ( (struct Maybe_760) { .tag = Maybe_760_None_t } );
        }
        else {
            if ( dref3417.tag == Maybe_966_Just_t ) {
                return ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( dref3417 .stuff .Maybe_966_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_760_Just ) ( ( ( InputEvent_761_Key ) ( ( (struct Key_178) { .tag = Key_178_Escape_t } ) ) ) ) );
}

static  struct Maybe_760   read_dash_event769 (   struct env79* env ,    struct Tui_81 *  tui3427 ) {
    struct envunion80  temp770 = ( (struct envunion80){ .fun = (  bool  (*) (  struct env78*  ,    struct Tui_81 *  ) )update_dash_dimensions771 , .env =  env->envinst78 } );
    ( temp770.fun ( &temp770.env ,  (  tui3427 ) ) );
    struct Maybe_760  dref3428 = ( (  read_dash_key772 ) ( ) );
    if ( dref3428.tag == Maybe_760_None_t ) {
        return ( (struct Maybe_760) { .tag = Maybe_760_None_t } );
    }
    else {
        if ( dref3428.tag == Maybe_760_Just_t ) {
            (*  tui3427 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_760_Just ) ( ( dref3428 .stuff .Maybe_760_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_760   lam767 (   struct env758* env ) {
    struct envunion759  temp768 = ( (struct envunion759){ .fun = (  struct Maybe_760  (*) (  struct env79*  ,    struct Tui_81 *  ) )read_dash_event769 , .env =  env->envinst79 } );
    return ( temp768.fun ( &temp768.env ,  ( env->tui4423 ) ) );
}

static  struct Maybe_760   next969 (    struct FunIter_757 *  self1031 ) {
    if ( ( ( * (  self1031 ) ) .f_finished ) ) {
        return ( (struct Maybe_760) { .tag = Maybe_760_None_t } );
    }
    struct envunion764  temp970 = ( ( * (  self1031 ) ) .f_fun );
    struct Maybe_760  dref1032 = ( temp970.fun ( &temp970.env ) );
    if ( dref1032.tag == Maybe_760_Just_t ) {
        return ( ( Maybe_760_Just ) ( ( dref1032 .stuff .Maybe_760_Just_s .field0 ) ) );
    }
    else {
        if ( dref1032.tag == Maybe_760_None_t ) {
            (*  self1031 ) .f_finished = ( true );
            return ( (struct Maybe_760) { .tag = Maybe_760_None_t } );
        }
    }
}

struct env973 {
    struct Editor_162 *  ed4305;
    ;
};

struct envunion974 {
    enum Unit_8  (*fun) (  struct env973*  ,    struct StrView_27  );
    struct env973 env;
};

static  enum Unit_8   if_dash_just972 (    struct Maybe_163  x1291 ,   struct envunion974  fun1293 ) {
    struct Maybe_163  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_163_Just_t ) {
        struct envunion974  temp975 = (  fun1293 );
        ( temp975.fun ( &temp975.env ,  ( dref1294 .stuff .Maybe_163_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_163_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free977 (    struct StrView_27  s2168 ,    enum CAllocator_10  al2170 ) {
    ( (  free416 ) ( (  al2170 ) ,  ( (struct Slice_14) { .f_ptr = ( ( (  s2168 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam976 (   struct env973* env ,    struct StrView_27  msg4307 ) {
    ( (  free977 ) ( (  msg4307 ) ,  ( ( * ( env->ed4305 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_msg971 (    struct Editor_162 *  ed4305 ) {
    struct env973 envinst973 = {
        .ed4305 =  ed4305 ,
    };
    ( (  if_dash_just972 ) ( ( ( * (  ed4305 ) ) .f_msg ) ,  ( (struct envunion974){ .fun = (  enum Unit_8  (*) (  struct env973*  ,    struct StrView_27  ) )lam976 , .env =  envinst973 } ) ) );
    (*  ed4305 ) .f_msg = ( (struct Maybe_163) { .tag = Maybe_163_None_t } );
    return ( Unit_8_Unit );
}

struct envunion979 {
    enum Unit_8  (*fun) (  struct env176*  ,    struct Editor_162 *  ,    struct Key_178  );
    struct env176 env;
};

enum CursorMovement_985 {
    CursorMovement_985_NoChanges,
    CursorMovement_985_UpdateVI,
    CursorMovement_985_OverrideSelect,
};

struct Tuple2_987 {
    enum CursorMovement_985  field0;
    enum CursorMovement_985  field1;
};

static struct Tuple2_987 Tuple2_987_Tuple2 (  enum CursorMovement_985  field0 ,  enum CursorMovement_985  field1 ) {
    return ( struct Tuple2_987 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq986 (    enum CursorMovement_985  l4053 ,    enum CursorMovement_985  r4055 ) {
    return ( {  struct Tuple2_987  dref4056 = ( ( Tuple2_987_Tuple2 ) ( (  l4053 ) ,  (  r4055 ) ) ) ;  dref4056 .field0 == CursorMovement_985_NoChanges &&  dref4056 .field1 == CursorMovement_985_NoChanges ? ( true ) :  dref4056 .field0 == CursorMovement_985_UpdateVI &&  dref4056 .field1 == CursorMovement_985_UpdateVI ? ( true ) :  dref4056 .field0 == CursorMovement_985_OverrideSelect &&  dref4056 .field1 == CursorMovement_985_OverrideSelect ? ( true ) : ( false ) ; } );
}

static  struct StrView_27   from_dash_bytes991 (    struct Slice_14  sl2153 ) {
    return ( (struct StrView_27) { .f_contents = (  sl2153 ) } );
}

static  struct StrView_27   line990 (    struct TextBuf_99 *  self3701 ,    int32_t  li3703 ) {
    return ( (  from_dash_bytes991 ) ( ( (  to_dash_slice376 ) ( ( ( (  get369 ) ( ( & ( ( * (  self3701 ) ) .f_buf ) ) ,  ( (  i32_dash_size298 ) ( (  li3703 ) ) ) ) ) .f_line ) ) ) ) );
}

static  int32_t   maybe994 (    struct Maybe_163  x1282 ,    int32_t (*  fun1284 )(    struct StrView_27  ) ,    int32_t  default1286 ) {
    return ( {  struct Maybe_163  dref1287 = (  x1282 ) ; dref1287.tag == Maybe_163_Just_t ? ( (  fun1284 ) ( ( dref1287 .stuff .Maybe_163_Just_s .field0 ) ) ) : (  default1286 ) ; } );
}

static  struct Maybe_163   char_dash_replacement995 (    struct Char_65  c3943 ) {
    if ( (  eq447 ( (  c3943 ) , ( (  from_dash_charlike257 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_163_Just ) ( ( (  from_dash_string256 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_163) { .tag = Maybe_163_None_t } );
    }
}

static  size_t   reduce998 (    struct StrViewIter_649  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct StrViewIter_649  it1099 = ( (  into_dash_iter651 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_652  dref1100 = ( (  next653 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_652_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_652_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_652_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp999 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp999);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1000;
    return (  temp1000 );
}

static  size_t   lam1001 (    struct Char_65  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add268 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count997 (    struct StrViewIter_649  it1104 ) {
    return ( (  reduce998 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1001 ) ) );
}

static  int32_t   lam996 (    struct StrView_27  s3948 ) {
    return ( (  size_dash_i32232 ) ( ( (  count997 ) ( ( (  chars654 ) ( (  s3948 ) ) ) ) ) ) );
}

static  int32_t   max1003 (    int32_t  l1315 ,    int32_t  r1317 ) {
    if ( (  cmp361 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  void *   cast_dash_ptr1009 (    wchar_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1010 (    wchar_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  wchar_t   zeroed1007 (  ) {
    wchar_t  temp1008;
    wchar_t  x570 = (  temp1008 );
    ( ( memset ) ( ( (  cast_dash_ptr1009 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1010 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr1011 (    uint8_t *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  size_t   cast1012 (    int64_t  x356 ) {
    return ( (size_t ) (  x356 ) );
}

struct TypeSize_1015 {
    size_t  f_size;
};

static  struct TypeSize_1015   get_dash_typesize1014 (  ) {
    wchar_t  temp1016;
    return ( (struct TypeSize_1015) { .f_size = ( sizeof( ( (  temp1016 ) ) ) ) } );
}

static  wchar_t   cast1018 (    uint32_t  x356 ) {
    return ( (wchar_t ) (  x356 ) );
}

static  wchar_t   to_dash_c_dash_wchar1005 (    struct Char_65  c750 ) {
    struct CharDestructured_241  dref751 = ( (  destructure243 ) ( (  c750 ) ) );
    if ( dref751.tag == CharDestructured_241_Ref_t ) {
        wchar_t  temp1006 = ( (  zeroed1007 ) ( ) );
        wchar_t *  wcp753 = ( &temp1006 );
        size_t  num_dash_chars754 = ( ( mbstowcs ) ( (  wcp753 ) ,  ( (  cast_dash_ptr1011 ) ( ( ( dref751 .stuff .CharDestructured_241_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq275 ( (  num_dash_chars754 ) , ( ( (  cast1012 ) ( ( (  op_dash_neg949 ( (  from_dash_integral347 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp1013 = ( (  from_dash_string57 ) ( ( "could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp1013);
            exit ( 1 );
            ( Unit_8_Unit );
        }
        return ( * (  wcp753 ) );
    }
    else {
        if ( dref751.tag == CharDestructured_241_Scalar_t ) {
            if ( ( ! (  eq275 ( ( (  size_dash_of691 ) ( ( ( dref751 .stuff .CharDestructured_241_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize1014 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp1017 = ( (  from_dash_string57 ) ( ( "Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp1017);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            return ( (  cast1018 ) ( ( ( dref751 .stuff .CharDestructured_241_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth1004 (    struct Char_65  c2588 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar1005 ) ( (  c2588 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth1002 (    struct Char_65  c3472 ) {
    return ( (  max1003 ) ( ( (  wcwidth1004 ) ( (  c3472 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width993 (    struct Char_65  c3946 ) {
    return ( (  maybe994 ) ( ( (  char_dash_replacement995 ) ( (  c3946 ) ) ) ,  (  lam996 ) ,  ( (  rendered_dash_wcwidth1002 ) ( (  c3946 ) ) ) ) );
}

static  int32_t   pos_dash_vi988 (    struct TextBuf_99 *  self3962 ,    struct Pos_26  pos3964 ) {
    int32_t  bi3965 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi3966 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_649  temp989 =  into_dash_iter651 ( ( (  chars654 ) ( ( (  line990 ) ( (  self3962 ) ,  ( (  pos3964 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_652  __cond992 =  next653 (&temp989);
        if (  __cond992 .tag == 0 ) {
            break;
        }
        struct Char_65  c3968 =  __cond992 .stuff .Maybe_652_Just_s .field0;
        bi3965 = (  op_dash_add310 ( (  bi3965 ) , ( (  size_dash_i32232 ) ( ( (  c3968 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp361 ( ( (  pos3964 ) .f_bi ) , (  bi3965 ) ) == 0 ) ) {
            break;
        }
        vi3966 = (  op_dash_add310 ( (  vi3966 ) , ( (  char_dash_screen_dash_width993 ) ( (  c3968 ) ) ) ) );
    }
    return (  vi3966 );
}

struct Tuple2_1021 {
    enum Mode_142  field0;
    enum Mode_142  field1;
};

static struct Tuple2_1021 Tuple2_1021_Tuple2 (  enum Mode_142  field0 ,  enum Mode_142  field1 ) {
    return ( struct Tuple2_1021 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1020 (    enum Mode_142  l3926 ,    enum Mode_142  r3928 ) {
    return ( {  struct Tuple2_1021  dref3929 = ( ( Tuple2_1021_Tuple2 ) ( (  l3926 ) ,  (  r3928 ) ) ) ;  dref3929 .field0 == Mode_142_Normal &&  dref3929 .field1 == Mode_142_Normal ? ( true ) :  dref3929 .field0 == Mode_142_Insert &&  dref3929 .field1 == Mode_142_Insert ? ( true ) :  dref3929 .field0 == Mode_142_Select &&  dref3929 .field1 == Mode_142_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_8   set_dash_sel1019 (    struct Pane_141 *  self4042 ,    struct Maybe_34  sel4044 ) {
    if ( ( !  eq1020 ( ( ( * (  self4042 ) ) .f_mode ) , ( Mode_142_Select ) ) ) ) {
        (*  self4042 ) .f_sel = (  sel4044 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_cursors984 (    struct Pane_141 *  self4059 ,    struct Pos_26  cur4061 ,    struct Maybe_34  sel4063 ,    enum CursorMovement_985  cursor_dash_movement_dash_type4065 ) {
    if ( ( !  eq986 ( (  cursor_dash_movement_dash_type4065 ) , ( CursorMovement_985_NoChanges ) ) ) ) {
        (*  self4059 ) .f_vi = ( (  pos_dash_vi988 ) ( ( ( * (  self4059 ) ) .f_buf ) ,  (  cur4061 ) ) );
    }
    (*  self4059 ) .f_cursor = (  cur4061 );
    if ( ( !  eq986 ( (  cursor_dash_movement_dash_type4065 ) , ( CursorMovement_985_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel1019 ) ( (  self4059 ) ,  (  sel4063 ) ) );
    } else {
        (*  self4059 ) .f_sel = (  sel4063 );
    }
    return ( Unit_8_Unit );
}

static  size_t   num_dash_bytes1023 (    struct StrView_27  self2196 ) {
    return ( ( (  self2196 ) .f_contents ) .f_count );
}

static  size_t   clamp1024 (    size_t  x1352 ,    size_t  mn1354 ,    size_t  mx1356 ) {
    if ( (  cmp220 ( (  x1352 ) , (  mn1354 ) ) == 0 ) ) {
        return (  mn1354 );
    } else {
        if ( (  cmp220 ( (  x1352 ) , (  mx1356 ) ) == 2 ) ) {
            return (  mx1356 );
        } else {
            return (  x1352 );
        }
    }
}

static  size_t   sync_dash_char1026 (    uint8_t *  p692 ) {
    size_t  i693 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb694 = ( * ( (uint8_t * ) ( ( (void*) (  p692 ) ) + (  op_dash_neg949 ( ( (  size_dash_i64297 ) ( (  i693 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp261 ( (  pb694 ) , (  from_dash_integral248 ( 128 ) ) ) != 0 ) && (  cmp261 ( (  pb694 ) , (  op_dash_add821 ( (  from_dash_integral248 ( 128 ) ) , (  from_dash_integral248 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i693 );
        }
        i693 = (  op_dash_add268 ( (  i693 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char1025 (    uint8_t *  p697 ) {
    return (  op_dash_add268 ( ( (  sync_dash_char1026 ) ( ( (  offset_dash_ptr373 ) ( (  p697 ) ,  (  op_dash_neg949 ( (  from_dash_integral347 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_26   left_dash_pos1022 (    struct TextBuf_99 *  self3722 ,    struct Pos_26  pos3724 ) {
    if ( (  eq363 ( (  pos3724 ) , ( (  mk342 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk342 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    if ( (  eq364 ( ( (  pos3724 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        ( (  assert523 ) ( (  cmp361 ( ( (  pos3724 ) .f_line ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string256 ) ( ( "previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk342 ) ( (  op_dash_sub851 ( ( (  pos3724 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  size_dash_i32232 ) ( ( (  num_dash_bytes1023 ) ( ( (  line990 ) ( (  self3722 ) ,  (  op_dash_sub851 ( ( (  pos3724 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_27  line3725 = ( (  line990 ) ( (  self3722 ) ,  ( (  pos3724 ) .f_line ) ) );
    size_t  pos_dash_bi3726 = ( (  clamp1024 ) ( ( (  i32_dash_size298 ) ( ( (  pos3724 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes1023 ) ( (  line3725 ) ) ) ) );
    size_t  off3727 = ( (  previous_dash_char1025 ) ( ( (  offset_dash_ptr373 ) ( ( ( (  line3725 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  pos_dash_bi3726 ) ) ) ) ) ) );
    return ( (  mk342 ) ( ( (  pos3724 ) .f_line ) ,  ( (  size_dash_i32232 ) ( (  op_dash_sub348 ( (  pos_dash_bi3726 ) , (  off3727 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_left983 (    struct Pane_141 *  self4071 ) {
    ( (  set_dash_cursors984 ) ( (  self4071 ) ,  ( (  left_dash_pos1022 ) ( ( ( * (  self4071 ) ) .f_buf ) ,  ( ( * (  self4071 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_985_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  struct Pane_141 *   pane1027 (    struct Editor_162 *  ed4295 ) {
    return ( & ( ( * (  ed4295 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines1030 (    struct TextBuf_99 *  self3706 ) {
    return ( (  size_dash_i32232 ) ( ( (  size365 ) ( ( & ( ( * (  self3706 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_26   right_dash_pos1029 (    struct TextBuf_99 *  self3714 ,    struct Pos_26  pos3716 ) {
    if ( (  cmp361 ( ( (  pos3716 ) .f_line ) , ( (  num_dash_lines1030 ) ( (  self3714 ) ) ) ) != 0 ) ) {
        return ( (  mk342 ) ( ( (  num_dash_lines1030 ) ( (  self3714 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    struct StrView_27  line3717 = ( (  line990 ) ( (  self3714 ) ,  ( (  pos3716 ) .f_line ) ) );
    int64_t  bi3718 = ( (  i32_dash_i64899 ) ( ( (  pos3716 ) .f_bi ) ) );
    if ( (  cmp948 ( (  bi3718 ) , ( (  size_dash_i64297 ) ( ( (  num_dash_bytes1023 ) ( (  line3717 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp361 ( (  op_dash_add310 ( ( (  pos3716 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1030 ) ( (  self3714 ) ) ) ) != 0 ) ) {
            return ( (  mk342 ) ( ( (  pos3716 ) .f_line ) ,  ( (  size_dash_i32232 ) ( ( (  num_dash_bytes1023 ) ( (  line3717 ) ) ) ) ) ) );
        }
        return ( (  mk342 ) ( (  op_dash_add310 ( ( (  pos3716 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    int32_t  off3719 = ( (  size_dash_i32232 ) ( ( (  next_dash_char260 ) ( ( (  offset_dash_ptr373 ) ( ( ( (  line3717 ) .f_contents ) .f_ptr ) ,  (  bi3718 ) ) ) ) ) ) );
    return ( (  mk342 ) ( ( (  pos3716 ) .f_line ) ,  (  op_dash_add310 ( ( (  pos3716 ) .f_bi ) , (  off3719 ) ) ) ) );
}

static  enum Unit_8   move_dash_right1028 (    struct Pane_141 *  self4068 ) {
    ( (  set_dash_cursors984 ) ( (  self4068 ) ,  ( (  right_dash_pos1029 ) ( ( ( * (  self4068 ) ) .f_buf ) ,  ( ( * (  self4068 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_985_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   vi_dash_bi1032 (    struct TextBuf_99 *  self3951 ,    int32_t  ln3953 ,    int32_t  vx3955 ) {
    int32_t  bi3956 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi3957 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_649  temp1033 =  into_dash_iter651 ( ( (  chars654 ) ( ( (  line990 ) ( (  self3951 ) ,  (  ln3953 ) ) ) ) ) );
    while (true) {
        struct Maybe_652  __cond1034 =  next653 (&temp1033);
        if (  __cond1034 .tag == 0 ) {
            break;
        }
        struct Char_65  c3959 =  __cond1034 .stuff .Maybe_652_Just_s .field0;
        vi3957 = (  op_dash_add310 ( (  vi3957 ) , ( (  char_dash_screen_dash_width993 ) ( (  c3959 ) ) ) ) );
        if ( (  cmp361 ( (  vx3955 ) , (  vi3957 ) ) == 0 ) ) {
            break;
        }
        bi3956 = (  op_dash_add310 ( (  bi3956 ) , ( (  size_dash_i32232 ) ( ( (  c3959 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi3956 );
}

static  enum Unit_8   move_dash_down1031 (    struct Pane_141 *  self4074 ,    int32_t  amnt4076 ) {
    struct Pos_26  cur4077 = ( ( * (  self4074 ) ) .f_cursor );
    int32_t  nu_dash_line4078 = ( (  min514 ) ( (  op_dash_add310 ( ( (  cur4077 ) .f_line ) , (  amnt4076 ) ) ) ,  (  op_dash_sub851 ( ( (  num_dash_lines1030 ) ( ( ( * (  self4074 ) ) .f_buf ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  vci4079 = ( ( * (  self4074 ) ) .f_vi );
    int32_t  bi4080 = ( (  vi_dash_bi1032 ) ( ( ( * (  self4074 ) ) .f_buf ) ,  (  nu_dash_line4078 ) ,  (  vci4079 ) ) );
    ( (  set_dash_cursors984 ) ( (  self4074 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4078 ) , .f_bi = (  bi4080 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_985_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_up1035 (    struct Pane_141 *  self4083 ,    int32_t  amnt4085 ) {
    struct Pos_26  cur4086 = ( ( * (  self4083 ) ) .f_cursor );
    int32_t  nu_dash_line4087 = ( (  max1003 ) ( (  op_dash_sub851 ( ( (  cur4086 ) .f_line ) , (  amnt4085 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  vci4088 = ( ( * (  self4083 ) ) .f_vi );
    int32_t  bi4089 = ( (  vi_dash_bi1032 ) ( ( ( * (  self4083 ) ) .f_buf ) ,  (  nu_dash_line4087 ) ,  (  vci4088 ) ) );
    ( (  set_dash_cursors984 ) ( (  self4083 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4087 ) , .f_bi = (  bi4089 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_985_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_insert_dash_action1037 (    struct TextBuf_99 *  self3789 ) {
    (*  self3789 ) .f_actions .f_input_dash_changeset = ( ChangesetInputType_101_NoChangeset );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_mode1036 (    struct Pane_141 *  self4047 ,    enum Mode_142  mode4049 ) {
    if ( (  eq1020 ( (  mode4049 ) , ( Mode_142_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action1037 ) ( ( ( * (  self4047 ) ) .f_buf ) ) );
    }
    (*  self4047 ) .f_mode = (  mode4049 );
    return ( Unit_8_Unit );
}

struct TakeWhile_1042 {
    struct StrViewIter_649  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1041 {
    struct TakeWhile_1042  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1041 Map_1041_Map (  struct TakeWhile_1042  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1041 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1041   into_dash_iter1044 (    struct Map_1041  self796 ) {
    return (  self796 );
}

struct Maybe_1045 {
    enum {
        Maybe_1045_None_t,
        Maybe_1045_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_1045_Just_s;
    } stuff;
};

static struct Maybe_1045 Maybe_1045_Just (  size_t  field0 ) {
    return ( struct Maybe_1045 ) { .tag = Maybe_1045_Just_t, .stuff = { .Maybe_1045_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_652   next1047 (    struct TakeWhile_1042 *  self964 ) {
    struct Maybe_652  mx965 = ( (  next653 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_652  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_652_None_t ) {
        return ( (struct Maybe_652) { .tag = Maybe_652_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_652_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_652_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_652_Just ) ( ( dref966 .stuff .Maybe_652_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_652) { .tag = Maybe_652_None_t } );
            }
        }
    }
}

static  struct Maybe_1045   next1046 (    struct Map_1041 *  dref798 ) {
    struct Maybe_652  dref801 = ( (  next1047 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_652_None_t ) {
        return ( (struct Maybe_1045) { .tag = Maybe_1045_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_652_Just_t ) {
            return ( ( Maybe_1045_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_652_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1043 (    struct Map_1041  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1041  it1099 = ( (  into_dash_iter1044 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1045  dref1100 = ( (  next1046 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1045_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1045_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1045_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1048 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1048);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1049;
    return (  temp1049 );
}

static  size_t   lam1050 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add268 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1040 (    struct Map_1041  it1110 ) {
    return ( (  reduce1043 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1050 ) ) );
}

static  struct TakeWhile_1042   into_dash_iter1052 (    struct TakeWhile_1042  self961 ) {
    return (  self961 );
}

static  struct Map_1041   map1051 (    struct TakeWhile_1042  iterable805 ,    size_t (*  fun807 )(    struct Char_65  ) ) {
    struct TakeWhile_1042  it808 = ( (  into_dash_iter1052 ) ( (  iterable805 ) ) );
    return ( ( Map_1041_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1042   take_dash_while1053 (    struct StrView_27  it970 ,    bool (*  pred972 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1042) { .f_it = ( (  into_dash_iter655 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  bool   lam1054 (    struct Char_65  c4137 ) {
    return (  eq447 ( (  c4137 ) , ( (  from_dash_charlike257 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
}

static  size_t   lam1055 (    struct Char_65  c4139 ) {
    return ( (  c4139 ) .f_num_dash_bytes );
}

static  int32_t   indent_dash_at_dash_line1039 (    struct Pane_141 *  pane4133 ,    int32_t  line4135 ) {
    return ( (  size_dash_i32232 ) ( ( (  sum1040 ) ( ( (  map1051 ) ( ( (  take_dash_while1053 ) ( ( (  line990 ) ( ( ( * (  pane4133 ) ) .f_buf ) ,  (  line4135 ) ) ) ,  (  lam1054 ) ) ) ,  (  lam1055 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_to_dash_beginning_dash_indented1038 (    struct Pane_141 *  self4152 ) {
    struct Pos_26  cur4153 = ( ( * (  self4152 ) ) .f_cursor );
    int32_t  indent4154 = ( (  indent_dash_at_dash_line1039 ) ( (  self4152 ) ,  ( (  cur4153 ) .f_line ) ) );
    struct Pos_26  temp1056 = (  cur4153 );
    temp1056 .  f_bi = (  indent4154 );
    ( (  set_dash_cursors984 ) ( (  self4152 ) ,  ( temp1056 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_985_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_end1057 (    struct Pane_141 *  self4157 ) {
    struct Pos_26  cur4158 = ( ( * (  self4157 ) ) .f_cursor );
    struct Pos_26  temp1058 = (  cur4158 );
    temp1058 .  f_bi = ( (  size_dash_i32232 ) ( ( (  num_dash_bytes1023 ) ( ( (  line990 ) ( ( ( * (  self4157 ) ) .f_buf ) ,  ( (  cur4158 ) .f_line ) ) ) ) ) ) );
    ( (  set_dash_cursors984 ) ( (  self4157 ) ,  ( temp1058 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_985_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct SliceIter_1066 {
    struct Slice_31  f_slice;
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

static  struct SliceIter_1066   into_dash_iter1070 (    struct Slice_31  self1823 ) {
    return ( (struct SliceIter_1066) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Changeset_32 *   offset_dash_ptr1072 (    struct Changeset_32 *  x338 ,    int64_t  count340 ) {
    struct Changeset_32  temp1073;
    return ( (struct Changeset_32 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul266 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1073 ) ) ) ) ) ) ) ) );
}

static  struct Slice_31   subslice1071 (    struct Slice_31  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    struct Changeset_32 *  begin_dash_ptr1788 = ( (  offset_dash_ptr1072 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp220 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp220 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub348 ( ( (  min375 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

static  struct SliceIter_1066   into_dash_iter1069 (    struct List_30  self2029 ) {
    return ( (  into_dash_iter1070 ) ( ( (  subslice1071 ) ( ( (  self2029 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2029 ) .f_count ) ) ) ) );
}

static  struct Drop_1065   drop1068 (    struct List_30  iterable852 ,    size_t  i854 ) {
    struct SliceIter_1066  it855 = ( (  into_dash_iter1069 ) ( (  iterable852 ) ) );
    return ( ( Drop_1065_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

struct Maybe_1075 {
    enum {
        Maybe_1075_None_t,
        Maybe_1075_Just_t,
    } tag;
    union {
        struct {
            struct Changeset_32  field0;
        } Maybe_1075_Just_s;
    } stuff;
};

static struct Maybe_1075 Maybe_1075_Just (  struct Changeset_32  field0 ) {
    return ( struct Maybe_1075 ) { .tag = Maybe_1075_Just_t, .stuff = { .Maybe_1075_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1075   next1077 (    struct SliceIter_1066 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp220 ( (  op_dash_add268 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1075) { .tag = Maybe_1075_None_t } );
    }
    struct Changeset_32  elem1831 = ( * ( (  offset_dash_ptr1072 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add268 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1075_Just ) ( (  elem1831 ) ) );
}

static  struct Maybe_1075   next1076 (    struct Drop_1065 *  dref847 ) {
    while ( (  cmp220 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1077 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub348 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1077 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

struct env1080 {
    enum CAllocator_10  al3664;
    ;
};

struct envunion1081 {
    enum Unit_8  (*fun) (  struct env1080*  ,    struct Action_25  );
    struct env1080 env;
};

struct SliceIter_1082 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1082   into_dash_iter1085 (    struct Slice_24  self1823 ) {
    return ( (struct SliceIter_1082) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_25 *   offset_dash_ptr1087 (    struct Action_25 *  x338 ,    int64_t  count340 ) {
    struct Action_25  temp1088;
    return ( (struct Action_25 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul266 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1088 ) ) ) ) ) ) ) ) );
}

static  struct Slice_24   subslice1086 (    struct Slice_24  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    struct Action_25 *  begin_dash_ptr1788 = ( (  offset_dash_ptr1087 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp220 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp220 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub348 ( ( (  min375 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

static  struct SliceIter_1082   into_dash_iter1084 (    struct List_23  self2029 ) {
    return ( (  into_dash_iter1085 ) ( ( (  subslice1086 ) ( ( (  self2029 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2029 ) .f_count ) ) ) ) );
}

struct Maybe_1089 {
    enum {
        Maybe_1089_None_t,
        Maybe_1089_Just_t,
    } tag;
    union {
        struct {
            struct Action_25  field0;
        } Maybe_1089_Just_s;
    } stuff;
};

static struct Maybe_1089 Maybe_1089_Just (  struct Action_25  field0 ) {
    return ( struct Maybe_1089 ) { .tag = Maybe_1089_Just_t, .stuff = { .Maybe_1089_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1089   next1090 (    struct SliceIter_1082 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp220 ( (  op_dash_add268 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1089) { .tag = Maybe_1089_None_t } );
    }
    struct Action_25  elem1831 = ( * ( (  offset_dash_ptr1087 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add268 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1089_Just ) ( (  elem1831 ) ) );
}

static  enum Unit_8   for_dash_each1079 (    struct List_23  iterable1074 ,   struct envunion1081  fun1076 ) {
    struct SliceIter_1082  temp1083 = ( (  into_dash_iter1084 ) ( (  iterable1074 ) ) );
    struct SliceIter_1082 *  it1077 = ( &temp1083 );
    while ( ( true ) ) {
        struct Maybe_1089  dref1078 = ( (  next1090 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1089_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1089_Just_t ) {
                struct envunion1081  temp1091 = (  fun1076 );
                ( temp1091.fun ( &temp1091.env ,  ( dref1078 .stuff .Maybe_1089_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_action1093 (    struct Action_25  action3657 ,    enum CAllocator_10  al3659 ) {
    ( (  free977 ) ( ( (  action3657 ) .f_fwd ) ,  (  al3659 ) ) );
    ( (  free977 ) ( ( (  action3657 ) .f_bwd ) ,  (  al3659 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1092 (   struct env1080* env ,    struct Action_25  a3666 ) {
    return ( (  free_dash_action1093 ) ( (  a3666 ) ,  ( env->al3664 ) ) );
}

static  void *   cast_dash_ptr1096 (    struct Action_25 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1095 (    enum CAllocator_10  dref1960 ,    struct Slice_24  slice1962 ) {
    if (!(  dref1960 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1096 ) ( ( (  slice1962 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free1094 (    struct List_23 *  list2036 ) {
    ( (  free1095 ) ( ( ( * (  list2036 ) ) .f_al ) ,  ( ( * (  list2036 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_changeset1078 (    struct Changeset_32  chs3662 ,    enum CAllocator_10  al3664 ) {
    struct env1080 envinst1080 = {
        .al3664 =  al3664 ,
    };
    ( (  for_dash_each1079 ) ( ( (  chs3662 ) .f_parts ) ,  ( (struct envunion1081){ .fun = (  enum Unit_8  (*) (  struct env1080*  ,    struct Action_25  ) )lam1092 , .env =  envinst1080 } ) ) );
    ( (  free1094 ) ( ( & ( (  chs3662 ) .f_parts ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1097 (    struct List_30 *  l2116 ,    size_t  new_dash_count2118 ) {
    (*  l2116 ) .f_count = ( (  min375 ) ( (  new_dash_count2118 ) ,  ( ( * (  l2116 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim_dash_actions1063 (    struct Actions_100 *  actions3680 ) {
    enum CAllocator_10  al3681 = ( ( ( * (  actions3680 ) ) .f_list ) .f_al );
    size_t  cur3682 = ( ( * (  actions3680 ) ) .f_cur );
    struct Drop_1065  temp1064 =  into_dash_iter1067 ( ( (  drop1068 ) ( ( ( * (  actions3680 ) ) .f_list ) ,  (  cur3682 ) ) ) );
    while (true) {
        struct Maybe_1075  __cond1074 =  next1076 (&temp1064);
        if (  __cond1074 .tag == 0 ) {
            break;
        }
        struct Changeset_32  action3684 =  __cond1074 .stuff .Maybe_1075_Just_s .field0;
        ( (  free_dash_changeset1078 ) ( (  action3684 ) ,  (  al3681 ) ) );
    }
    ( (  trim1097 ) ( ( & ( ( * (  actions3680 ) ) .f_list ) ) ,  (  cur3682 ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   clone_dash_01099 (    struct StrView_27  s2156 ,    enum CAllocator_10  al2158 ) {
    size_t  cnt2159 = ( ( (  s2156 ) .f_contents ) .f_count );
    struct Slice_14  nus2160 = ( (  allocate397 ) ( (  al2158 ) ,  (  op_dash_add268 ( (  cnt2159 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to497 ) ( ( (  s2156 ) .f_contents ) ,  (  nus2160 ) ) );
    ( (  set406 ) ( (  nus2160 ) ,  (  cnt2159 ) ,  ( (  char_dash_u8428 ) ( ( (  from_dash_charlike257 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( (  nus2160 ) .f_ptr ) , .f_count = (  cnt2159 ) } ) } );
}

static  struct StrView_27   clone1098 (    struct StrView_27  s2163 ,    enum CAllocator_10  al2165 ) {
    return ( (  clone_dash_01099 ) ( (  s2163 ) ,  (  al2165 ) ) );
}

static  struct Maybe_163   head1101 (    struct SplitIter_436  it1142 ) {
    struct SplitIter_436  temp1102 = ( (  into_dash_iter443 ) ( (  it1142 ) ) );
    return ( (  next457 ) ( ( &temp1102 ) ) );
}

static  struct Maybe_163   head1104 (    struct Drop_435  it1142 ) {
    struct Drop_435  temp1105 = ( (  into_dash_iter441 ) ( (  it1142 ) ) );
    return ( (  next456 ) ( ( &temp1105 ) ) );
}

static  bool   null1103 (    struct Drop_435  it1151 ) {
    struct Maybe_163  dref1152 = ( (  head1104 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_163_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   panic1107 (    struct StrView_27  errmsg1713 ) {
    ( (  print_dash_str524 ) ( ( ( StrConcat_525_StrConcat ) ( ( ( StrConcat_526_StrConcat ) ( ( (  from_dash_string256 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_454   undefined1108 (  ) {
    struct Tuple2_454  temp1109;
    return (  temp1109 );
}

static  struct Tuple2_454   or_dash_fail1106 (    struct Maybe_453  x1726 ,    struct StrView_27  errmsg1728 ) {
    struct Maybe_453  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_453_None_t ) {
        ( (  panic1107 ) ( (  errmsg1728 ) ) );
        return ( (  undefined1108 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_453_Just_t ) {
            return ( dref1729 .stuff .Maybe_453_Just_s .field0 );
        }
    }
}

static  struct Maybe_453   reduce1111 (    struct Zip_434  iterable1093 ,    struct Maybe_453  base1095 ,    struct Maybe_453 (*  fun1097 )(    struct Tuple2_454  ,    struct Maybe_453  ) ) {
    struct Maybe_453  x1098 = (  base1095 );
    struct Zip_434  it1099 = ( (  into_dash_iter439 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_453  dref1100 = ( (  next455 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_453_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_453_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_453_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1112 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1112);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_453  temp1113;
    return (  temp1113 );
}

static  struct Maybe_453   lam1114 (    struct Tuple2_454  e1147 ,    struct Maybe_453  dref1148 ) {
    return ( ( Maybe_453_Just ) ( (  e1147 ) ) );
}

static  struct Maybe_453   last1110 (    struct Zip_434  it1145 ) {
    return ( (  reduce1111 ) ( (  it1145 ) ,  ( (struct Maybe_453) { .tag = Maybe_453_None_t } ) ,  (  lam1114 ) ) );
}

static  int32_t   snd1115 (    struct Tuple2_454  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct StrView_27   fst1116 (    struct Tuple2_454  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_26   pos_dash_after_dash_str1100 (    struct TextBuf_99 *  self3777 ,    struct StrView_27  bytes3779 ,    struct Pos_26  from3781 ) {
    struct SplitIter_436  lines3782 = ( (  split_dash_by_dash_each444 ) ( (  bytes3779 ) ,  ( (  from_dash_charlike257 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_27  first_dash_line3783 = ( (  or_dash_else419 ) ( ( (  head1101 ) ( (  lines3782 ) ) ) ,  ( (  from_dash_string256 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_435  headless3784 = ( (  drop442 ) ( (  lines3782 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1103 ) ( (  headless3784 ) ) ) ) {
        struct Pos_26  next_dash_pos3785 = ( (  mk342 ) ( ( (  from3781 ) .f_line ) ,  (  op_dash_add310 ( ( (  from3781 ) .f_bi ) , ( (  size_dash_i32232 ) ( ( (  num_dash_bytes1023 ) ( (  first_dash_line3783 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3785 );
    } else {
        struct Tuple2_454  last_dash_line3786 = ( (  or_dash_fail1106 ) ( ( (  last1110 ) ( ( (  zip440 ) ( (  headless3784 ) ,  ( (  from315 ) ( (  op_dash_add310 ( ( (  from3781 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string256 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk342 ) ( ( (  snd1115 ) ( (  last_dash_line3786 ) ) ) ,  ( (  size_dash_i32232 ) ( ( (  num_dash_bytes1023 ) ( ( (  fst1116 ) ( (  last_dash_line3786 ) ) ) ) ) ) ) ) );
    }
}

struct envunion1122 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

static  struct StrView_27   from_dash_charlike1123 (    uint8_t *  ptr77 ,    size_t  count79 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = (  ptr77 ) , .f_count = (  count79 ) } ) } );
}

struct envunion1127 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion1129 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion1131 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

static  struct StrView_27   str_dash_between1118 (   struct env110* env ,    struct TextBuf_99 *  self3809 ,    struct Pos_26  from3811 ,    struct Pos_26  to3813 ) {
    enum CAllocator_10  al3814 = ( ( ( * (  self3809 ) ) .f_buf ) .f_al );
    if ( (  eq364 ( ( (  from3811 ) .f_line ) , ( (  to3813 ) .f_line ) ) ) ) {
        size_t  from_dash_bi3815 = ( (  i32_dash_size298 ) ( ( (  min514 ) ( ( (  from3811 ) .f_bi ) ,  ( (  to3813 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3816 = ( (  i32_dash_size298 ) ( ( (  max1003 ) ( ( (  from3811 ) .f_bi ) ,  ( (  to3813 ) .f_bi ) ) ) ) );
        return ( (  clone1098 ) ( ( (  byte_dash_substr429 ) ( ( (  line990 ) ( (  self3809 ) ,  ( (  from3811 ) .f_line ) ) ) ,  (  from_dash_bi3815 ) ,  (  to_dash_bi3816 ) ) ) ,  (  al3814 ) ) );
    } else {
        struct Pos_26  from_dash_pos3817 = ( (  min359 ) ( (  from3811 ) ,  (  to3813 ) ) );
        struct Pos_26  to_dash_pos3818 = ( (  max362 ) ( (  from3811 ) ,  (  to3813 ) ) );
        struct List_13  temp1119 = ( (  mk327 ) ( (  al3814 ) ) );
        struct List_13 *  sb3819 = ( &temp1119 );
        struct StrView_27  first_dash_line3820 = ( (  line990 ) ( (  self3809 ) ,  ( (  from_dash_pos3817 ) .f_line ) ) );
        struct envunion111  temp1120 = ( (struct envunion111){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all382 , .env =  env->envinst48 } );
        ( temp1120.fun ( &temp1120.env ,  (  sb3819 ) ,  ( ( (  byte_dash_substr429 ) ( (  first_dash_line3820 ) ,  ( (  i32_dash_size298 ) ( ( (  from_dash_pos3817 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1023 ) ( (  first_dash_line3820 ) ) ) ) ) .f_contents ) ) );
        struct envunion1122  temp1121 = ( (struct envunion1122){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all382 , .env =  env->envinst48 } );
        ( temp1121.fun ( &temp1121.env ,  (  sb3819 ) ,  ( ( ( (  from_dash_charlike1123 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_728  temp1124 =  into_dash_iter730 ( ( (  to733 ) ( (  op_dash_add310 ( ( (  from_dash_pos3817 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  op_dash_sub851 ( ( (  to_dash_pos3818 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_308  __cond1125 =  next731 (&temp1124);
            if (  __cond1125 .tag == 0 ) {
                break;
            }
            int32_t  i3822 =  __cond1125 .stuff .Maybe_308_Just_s .field0;
            struct envunion1127  temp1126 = ( (struct envunion1127){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all382 , .env =  env->envinst48 } );
            ( temp1126.fun ( &temp1126.env ,  (  sb3819 ) ,  ( ( (  line990 ) ( (  self3809 ) ,  (  i3822 ) ) ) .f_contents ) ) );
            struct envunion1129  temp1128 = ( (struct envunion1129){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all382 , .env =  env->envinst48 } );
            ( temp1128.fun ( &temp1128.env ,  (  sb3819 ) ,  ( ( ( (  from_dash_charlike1123 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1131  temp1130 = ( (struct envunion1131){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all382 , .env =  env->envinst48 } );
        ( temp1130.fun ( &temp1130.env ,  (  sb3819 ) ,  ( ( (  byte_dash_substr429 ) ( ( (  line990 ) ( (  self3809 ) ,  ( (  to_dash_pos3818 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size298 ) ( ( (  to_dash_pos3818 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes991 ) ( ( (  to_dash_slice376 ) ( ( * (  sb3819 ) ) ) ) ) );
    }
}

static  bool   is_dash_none1132 (    struct Maybe_128  m1264 ) {
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

struct Tuple2_1134 {
    enum ChangesetInputType_101  field0;
    enum ChangesetInputType_101  field1;
};

static struct Tuple2_1134 Tuple2_1134_Tuple2 (  enum ChangesetInputType_101  field0 ,  enum ChangesetInputType_101  field1 ) {
    return ( struct Tuple2_1134 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1133 (    enum ChangesetInputType_101  l3670 ,    enum ChangesetInputType_101  r3672 ) {
    return ( {  struct Tuple2_1134  dref3673 = ( ( Tuple2_1134_Tuple2 ) ( (  l3670 ) ,  (  r3672 ) ) ) ;  dref3673 .field0 == ChangesetInputType_101_NoChangeset &&  dref3673 .field1 == ChangesetInputType_101_NoChangeset ? ( true ) :  dref3673 .field0 == ChangesetInputType_101_InputChangeset &&  dref3673 .field1 == ChangesetInputType_101_InputChangeset ? ( true ) :  dref3673 .field0 == ChangesetInputType_101_CustomChangeset &&  dref3673 .field1 == ChangesetInputType_101_CustomChangeset ? ( true ) : ( false ) ; } );
}

static  struct Changeset_32 *   get_dash_ptr1136 (    struct Slice_31  slice1758 ,    size_t  i1760 ) {
    if ( ( (  cmp220 ( (  i1760 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic288 ) ( ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1760 ) ) ) ,  ( (  from_dash_string256 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1758 ) .f_count ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_32 *  elem_dash_ptr1761 = ( (  offset_dash_ptr1072 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  i1760 ) ) ) ) );
    return (  elem_dash_ptr1761 );
}

static  struct Changeset_32 *   last_dash_ptr1135 (    struct Slice_31  s1939 ) {
    if ( (  eq275 ( ( (  s1939 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1107 ) ( ( (  from_dash_string256 ) ( ( "(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1136 ) ( (  s1939 ) ,  (  op_dash_sub348 ( ( (  s1939 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_31   to_dash_slice1137 (    struct List_30  l2127 ) {
    struct Changeset_32 *  ptr2128 = ( ( (  l2127 ) .f_elements ) .f_ptr );
    return ( (struct Slice_31) { .f_ptr = (  ptr2128 ) , .f_count = ( (  l2127 ) .f_count ) } );
}

struct TypeSize_1144 {
    size_t  f_size;
};

static  struct TypeSize_1144   get_dash_typesize1143 (  ) {
    struct Action_25  temp1145;
    return ( (struct TypeSize_1144) { .f_size = ( sizeof( ( (  temp1145 ) ) ) ) } );
}

static  struct Action_25 *   cast_dash_ptr1146 (    void *  p359 ) {
    return ( (struct Action_25 * ) (  p359 ) );
}

static  struct Slice_24   allocate1142 (    enum CAllocator_10  dref1954 ,    size_t  count1956 ) {
    if (!(  dref1954 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1957 = ( ( ( (  get_dash_typesize1143 ) ( ) ) ) .f_size );
    struct Action_25 *  ptr1958 = ( (  cast_dash_ptr1146 ) ( ( ( malloc ) ( (  op_dash_mul281 ( (  size1957 ) , (  count1956 ) ) ) ) ) ) );
    return ( (struct Slice_24) { .f_ptr = (  ptr1958 ) , .f_count = (  count1956 ) } );
}

struct env1147 {
    struct Slice_24  new_dash_slice2043;
    ;
    ;
};

struct Tuple2_1149 {
    struct Action_25  field0;
    int32_t  field1;
};

static struct Tuple2_1149 Tuple2_1149_Tuple2 (  struct Action_25  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1149 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1148 {
    enum Unit_8  (*fun) (  struct env1147*  ,    struct Tuple2_1149  );
    struct env1147 env;
};

static  struct Action_25 *   get_dash_ptr1152 (    struct Slice_24  slice1758 ,    size_t  i1760 ) {
    if ( ( (  cmp220 ( (  i1760 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic288 ) ( ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1760 ) ) ) ,  ( (  from_dash_string256 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1758 ) .f_count ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_25 *  elem_dash_ptr1761 = ( (  offset_dash_ptr1087 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  i1760 ) ) ) ) );
    return (  elem_dash_ptr1761 );
}

static  enum Unit_8   set1151 (    struct Slice_24  slice1775 ,    size_t  i1777 ,    struct Action_25  x1779 ) {
    struct Action_25 *  ep1780 = ( (  get_dash_ptr1152 ) ( (  slice1775 ) ,  (  i1777 ) ) );
    (*  ep1780 ) = (  x1779 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1150 (   struct env1147* env ,    struct Tuple2_1149  dref2044 ) {
    return ( (  set1151 ) ( ( env->new_dash_slice2043 ) ,  ( (  i32_dash_size298 ) ( ( dref2044 .field1 ) ) ) ,  ( dref2044 .field0 ) ) );
}

struct Zip_1154 {
    struct SliceIter_1082  f_left_dash_it;
    struct FromIter_302  f_right_dash_it;
};

static  struct Zip_1154   into_dash_iter1156 (    struct Zip_1154  self911 ) {
    return (  self911 );
}

struct Maybe_1157 {
    enum {
        Maybe_1157_None_t,
        Maybe_1157_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1149  field0;
        } Maybe_1157_Just_s;
    } stuff;
};

static struct Maybe_1157 Maybe_1157_Just (  struct Tuple2_1149  field0 ) {
    return ( struct Maybe_1157 ) { .tag = Maybe_1157_Just_t, .stuff = { .Maybe_1157_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1157   next1158 (    struct Zip_1154 *  self914 ) {
    struct Zip_1154  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1089  dref916 = ( (  next1090 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1089_None_t ) {
            return ( (struct Maybe_1157) { .tag = Maybe_1157_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1089_Just_t ) {
                struct Maybe_308  dref918 = ( (  next309 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_308_None_t ) {
                    return ( (struct Maybe_1157) { .tag = Maybe_1157_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_308_Just_t ) {
                        ( (  next1090 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next309 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1157_Just ) ( ( ( Tuple2_1149_Tuple2 ) ( ( dref916 .stuff .Maybe_1089_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_308_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1153 (    struct Zip_1154  iterable1074 ,   struct envunion1148  fun1076 ) {
    struct Zip_1154  temp1155 = ( (  into_dash_iter1156 ) ( (  iterable1074 ) ) );
    struct Zip_1154 *  it1077 = ( &temp1155 );
    while ( ( true ) ) {
        struct Maybe_1157  dref1078 = ( (  next1158 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1157_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1157_Just_t ) {
                struct envunion1148  temp1159 = (  fun1076 );
                ( temp1159.fun ( &temp1159.env ,  ( dref1078 .stuff .Maybe_1157_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1154   zip1160 (    struct Slice_24  left922 ,    struct FromIter_302  right924 ) {
    struct SliceIter_1082  left_dash_it925 = ( (  into_dash_iter1085 ) ( (  left922 ) ) );
    struct FromIter_302  right_dash_it926 = ( (  into_dash_iter314 ) ( (  right924 ) ) );
    return ( (struct Zip_1154) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_8   grow_dash_if_dash_full1141 (   struct env3* env ,    struct List_23 *  list2042 ) {
    if ( (  eq275 ( ( ( * (  list2042 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2042 ) .f_elements = ( (  allocate1142 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( env->starting_dash_size2037 ) ) );
    } else {
        if ( (  eq275 ( ( ( * (  list2042 ) ) .f_count ) , ( ( ( * (  list2042 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_24  new_dash_slice2043 = ( (  allocate1142 ) ( ( ( * (  list2042 ) ) .f_al ) ,  (  op_dash_mul281 ( ( ( * (  list2042 ) ) .f_count ) , ( env->growth_dash_factor2038 ) ) ) ) );
            struct env1147 envinst1147 = {
                .new_dash_slice2043 =  new_dash_slice2043 ,
            };
            struct envunion1148  fun2047 = ( (struct envunion1148){ .fun = (  enum Unit_8  (*) (  struct env1147*  ,    struct Tuple2_1149  ) )lam1150 , .env =  envinst1147 } );
            ( (  for_dash_each1153 ) ( ( (  zip1160 ) ( ( ( * (  list2042 ) ) .f_elements ) ,  ( (  from315 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2047 ) ) );
            ( (  free1095 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( ( * (  list2042 ) ) .f_elements ) ) );
            (*  list2042 ) .f_elements = (  new_dash_slice2043 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1139 (   struct env21* env ,    struct List_23 *  list2050 ,    struct Action_25  elem2052 ) {
    struct envunion22  temp1140 = ( (struct envunion22){ .fun = (  enum Unit_8  (*) (  struct env3*  ,    struct List_23 *  ) )grow_dash_if_dash_full1141 , .env =  env->envinst3 } );
    ( temp1140.fun ( &temp1140.env ,  (  list2050 ) ) );
    ( (  set1151 ) ( ( ( * (  list2050 ) ) .f_elements ) ,  ( ( * (  list2050 ) ) .f_count ) ,  (  elem2052 ) ) );
    (*  list2050 ) .f_count = (  op_dash_add268 ( ( ( * (  list2050 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr1167 (    struct Action_25 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1168 (    struct Action_25 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Action_25 *   zeroed1165 (  ) {
    struct Action_25 *  temp1166;
    struct Action_25 *  x570 = (  temp1166 );
    ( ( memset ) ( ( (  cast_dash_ptr1167 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1168 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Action_25 *   null_dash_ptr1164 (  ) {
    return ( (  zeroed1165 ) ( ) );
}

static  struct Slice_24   empty1163 (  ) {
    return ( (struct Slice_24) { .f_ptr = ( (  null_dash_ptr1164 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_23   mk1162 (    enum CAllocator_10  al2032 ) {
    struct Slice_24  elements2033 = ( (  empty1163 ) ( ) );
    return ( (struct List_23) { .f_al = (  al2032 ) , .f_elements = (  elements2033 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_33   or_dash_else1169 (    struct Maybe_128  self1733 ,    struct Cursors_33  alt1735 ) {
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

struct envunion1171 {
    enum Unit_8  (*fun) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  );
    struct env21 env;
};

struct TypeSize_1178 {
    size_t  f_size;
};

static  struct TypeSize_1178   get_dash_typesize1177 (  ) {
    struct Changeset_32  temp1179;
    return ( (struct TypeSize_1178) { .f_size = ( sizeof( ( (  temp1179 ) ) ) ) } );
}

static  struct Changeset_32 *   cast_dash_ptr1180 (    void *  p359 ) {
    return ( (struct Changeset_32 * ) (  p359 ) );
}

static  struct Slice_31   allocate1176 (    enum CAllocator_10  dref1954 ,    size_t  count1956 ) {
    if (!(  dref1954 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1957 = ( ( ( (  get_dash_typesize1177 ) ( ) ) ) .f_size );
    struct Changeset_32 *  ptr1958 = ( (  cast_dash_ptr1180 ) ( ( ( malloc ) ( (  op_dash_mul281 ( (  size1957 ) , (  count1956 ) ) ) ) ) ) );
    return ( (struct Slice_31) { .f_ptr = (  ptr1958 ) , .f_count = (  count1956 ) } );
}

struct env1181 {
    struct Slice_31  new_dash_slice2043;
    ;
    ;
};

struct Tuple2_1183 {
    struct Changeset_32  field0;
    int32_t  field1;
};

static struct Tuple2_1183 Tuple2_1183_Tuple2 (  struct Changeset_32  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1183 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1182 {
    enum Unit_8  (*fun) (  struct env1181*  ,    struct Tuple2_1183  );
    struct env1181 env;
};

static  enum Unit_8   set1185 (    struct Slice_31  slice1775 ,    size_t  i1777 ,    struct Changeset_32  x1779 ) {
    struct Changeset_32 *  ep1780 = ( (  get_dash_ptr1136 ) ( (  slice1775 ) ,  (  i1777 ) ) );
    (*  ep1780 ) = (  x1779 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1184 (   struct env1181* env ,    struct Tuple2_1183  dref2044 ) {
    return ( (  set1185 ) ( ( env->new_dash_slice2043 ) ,  ( (  i32_dash_size298 ) ( ( dref2044 .field1 ) ) ) ,  ( dref2044 .field0 ) ) );
}

struct Zip_1187 {
    struct SliceIter_1066  f_left_dash_it;
    struct FromIter_302  f_right_dash_it;
};

static  struct Zip_1187   into_dash_iter1189 (    struct Zip_1187  self911 ) {
    return (  self911 );
}

struct Maybe_1190 {
    enum {
        Maybe_1190_None_t,
        Maybe_1190_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1183  field0;
        } Maybe_1190_Just_s;
    } stuff;
};

static struct Maybe_1190 Maybe_1190_Just (  struct Tuple2_1183  field0 ) {
    return ( struct Maybe_1190 ) { .tag = Maybe_1190_Just_t, .stuff = { .Maybe_1190_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1190   next1191 (    struct Zip_1187 *  self914 ) {
    struct Zip_1187  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1075  dref916 = ( (  next1077 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1075_None_t ) {
            return ( (struct Maybe_1190) { .tag = Maybe_1190_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1075_Just_t ) {
                struct Maybe_308  dref918 = ( (  next309 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_308_None_t ) {
                    return ( (struct Maybe_1190) { .tag = Maybe_1190_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_308_Just_t ) {
                        ( (  next1077 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next309 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1190_Just ) ( ( ( Tuple2_1183_Tuple2 ) ( ( dref916 .stuff .Maybe_1075_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_308_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1186 (    struct Zip_1187  iterable1074 ,   struct envunion1182  fun1076 ) {
    struct Zip_1187  temp1188 = ( (  into_dash_iter1189 ) ( (  iterable1074 ) ) );
    struct Zip_1187 *  it1077 = ( &temp1188 );
    while ( ( true ) ) {
        struct Maybe_1190  dref1078 = ( (  next1191 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1190_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1190_Just_t ) {
                struct envunion1182  temp1192 = (  fun1076 );
                ( temp1192.fun ( &temp1192.env ,  ( dref1078 .stuff .Maybe_1190_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1187   zip1193 (    struct Slice_31  left922 ,    struct FromIter_302  right924 ) {
    struct SliceIter_1066  left_dash_it925 = ( (  into_dash_iter1070 ) ( (  left922 ) ) );
    struct FromIter_302  right_dash_it926 = ( (  into_dash_iter314 ) ( (  right924 ) ) );
    return ( (struct Zip_1187) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr1195 (    struct Changeset_32 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1194 (    enum CAllocator_10  dref1960 ,    struct Slice_31  slice1962 ) {
    if (!(  dref1960 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1195 ) ( ( (  slice1962 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1175 (   struct env4* env ,    struct List_30 *  list2042 ) {
    if ( (  eq275 ( ( ( * (  list2042 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2042 ) .f_elements = ( (  allocate1176 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( env->starting_dash_size2037 ) ) );
    } else {
        if ( (  eq275 ( ( ( * (  list2042 ) ) .f_count ) , ( ( ( * (  list2042 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_31  new_dash_slice2043 = ( (  allocate1176 ) ( ( ( * (  list2042 ) ) .f_al ) ,  (  op_dash_mul281 ( ( ( * (  list2042 ) ) .f_count ) , ( env->growth_dash_factor2038 ) ) ) ) );
            struct env1181 envinst1181 = {
                .new_dash_slice2043 =  new_dash_slice2043 ,
            };
            struct envunion1182  fun2047 = ( (struct envunion1182){ .fun = (  enum Unit_8  (*) (  struct env1181*  ,    struct Tuple2_1183  ) )lam1184 , .env =  envinst1181 } );
            ( (  for_dash_each1186 ) ( ( (  zip1193 ) ( ( ( * (  list2042 ) ) .f_elements ) ,  ( (  from315 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2047 ) ) );
            ( (  free1194 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( ( * (  list2042 ) ) .f_elements ) ) );
            (*  list2042 ) .f_elements = (  new_dash_slice2043 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1173 (   struct env28* env ,    struct List_30 *  list2050 ,    struct Changeset_32  elem2052 ) {
    struct envunion29  temp1174 = ( (struct envunion29){ .fun = (  enum Unit_8  (*) (  struct env4*  ,    struct List_30 *  ) )grow_dash_if_dash_full1175 , .env =  env->envinst4 } );
    ( temp1174.fun ( &temp1174.env ,  (  list2050 ) ) );
    ( (  set1185 ) ( ( ( * (  list2050 ) ) .f_elements ) ,  ( ( * (  list2050 ) ) .f_count ) ,  (  elem2052 ) ) );
    (*  list2050 ) .f_count = (  op_dash_add268 ( ( ( * (  list2050 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Pos_26   action_dash_fwd1197 (   struct env104* env ,    struct TextBuf_99 *  self3772 ,    struct Action_25  action3774 ) {
    struct envunion105  temp1198 = ( (struct envunion105){ .fun = (  enum Unit_8  (*) (  struct env93*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action358 , .env =  env->envinst93 } );
    ( temp1198.fun ( &temp1198.env ,  (  self3772 ) ,  ( (  action3774 ) .f_from ) ,  ( (  action3774 ) .f_to_dash_bwd ) ,  ( (  action3774 ) .f_fwd ) ) );
    return ( (  action3774 ) .f_to_dash_fwd );
}

static  struct Maybe_128   change1062 (   struct env112* env ,    struct TextBuf_99 *  self3839 ,    struct Pos_26  from3841 ,    struct Pos_26  to3843 ,    struct StrView_27  bytes3845 ,    struct Maybe_128  before_dash_cursors3847 ) {
    struct Pos_26  from_dash_pos3848 = ( (  min359 ) ( (  from3841 ) ,  (  to3843 ) ) );
    struct Pos_26  to_dash_pos3849 = ( (  max362 ) ( (  from3841 ) ,  (  to3843 ) ) );
    struct Actions_100 *  actions3850 = ( & ( ( * (  self3839 ) ) .f_actions ) );
    ( (  trim_dash_actions1063 ) ( (  actions3850 ) ) );
    struct envunion115  temp1117 = ( (struct envunion115){ .fun = (  struct StrView_27  (*) (  struct env110*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1118 , .env =  env->envinst110 } );
    struct Action_25  action3851 = ( (struct Action_25) { .f_from = (  from3841 ) , .f_fwd = ( (  clone1098 ) ( (  bytes3845 ) ,  ( ( * (  self3839 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1100 ) ( (  self3839 ) ,  (  bytes3845 ) ,  (  from_dash_pos3848 ) ) ) , .f_bwd = ( temp1117.fun ( &temp1117.env ,  (  self3839 ) ,  (  from_dash_pos3848 ) ,  (  to_dash_pos3849 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3849 ) } );
    enum CAllocator_10  al3852 = ( ( ( * (  actions3850 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in3853 = ( (  is_dash_none1132 ) ( (  before_dash_cursors3847 ) ) );
    if ( ( (  eq1133 ( ( ( ( * (  self3839 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_101_CustomChangeset ) ) ) || ( (  eq1133 ( ( ( ( * (  self3839 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_101_InputChangeset ) ) ) && (  is_dash_typed_dash_in3853 ) ) ) ) {
        struct Changeset_32 *  last_dash_changeset3854 = ( (  last_dash_ptr1135 ) ( ( (  to_dash_slice1137 ) ( ( ( * (  actions3850 ) ) .f_list ) ) ) ) );
        struct envunion113  temp1138 = ( (struct envunion113){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1139 , .env =  env->envinst21 } );
        ( temp1138.fun ( &temp1138.env ,  ( & ( ( * (  last_dash_changeset3854 ) ) .f_parts ) ) ,  (  action3851 ) ) );
    } else {
        struct Changeset_32  temp1161 = ( (struct Changeset_32) { .f_parts = ( (  mk1162 ) ( (  al3852 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1169 ) ( (  before_dash_cursors3847 ) ,  ( (struct Cursors_33) { .f_cur = (  from3841 ) , .f_sel = ( (  eq363 ( (  from3841 ) , (  to3843 ) ) ) ? ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) : ( ( Maybe_34_Just ) ( (  to3843 ) ) ) ) } ) ) ) } );
        struct Changeset_32 *  changeset3855 = ( &temp1161 );
        struct envunion1171  temp1170 = ( (struct envunion1171){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1139 , .env =  env->envinst21 } );
        ( temp1170.fun ( &temp1170.env ,  ( & ( ( * (  changeset3855 ) ) .f_parts ) ) ,  (  action3851 ) ) );
        struct envunion114  temp1172 = ( (struct envunion114){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1173 , .env =  env->envinst28 } );
        ( temp1172.fun ( &temp1172.env ,  ( & ( ( * (  actions3850 ) ) .f_list ) ) ,  ( * (  changeset3855 ) ) ) );
        (*  actions3850 ) .f_input_dash_changeset = ( (  is_dash_typed_dash_in3853 ) ? ( ChangesetInputType_101_InputChangeset ) : ( ChangesetInputType_101_NoChangeset ) );
        (*  actions3850 ) .f_cur = (  op_dash_add268 ( ( ( * (  actions3850 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion116  temp1196 = ( (struct envunion116){ .fun = (  struct Pos_26  (*) (  struct env104*  ,    struct TextBuf_99 *  ,    struct Action_25  ) )action_dash_fwd1197 , .env =  env->envinst104 } );
    struct Pos_26  to_dash_fwd3856 = ( temp1196.fun ( &temp1196.env ,  (  self3839 ) ,  (  action3851 ) ) );
    if ( (  cmp220 ( ( (  num_dash_bytes1023 ) ( ( (  action3851 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd3857 = ( (  left_dash_pos1022 ) ( (  self3839 ) ,  (  to_dash_fwd3856 ) ) );
        return ( ( Maybe_128_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3857 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  action3851 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_128_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3856 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

static  enum Unit_8   add_dash_str_dash_at_dash_char1060 (   struct env126* env ,    struct Pane_141 *  self4170 ,    struct StrView_27  s4172 ) {
    struct Pos_26  cur4173 = ( ( * (  self4170 ) ) .f_cursor );
    struct envunion127  temp1061 = ( (struct envunion127){ .fun = (  struct Maybe_128  (*) (  struct env112*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_128  ) )change1062 , .env =  env->envinst112 } );
    ( temp1061.fun ( &temp1061.env ,  ( ( * (  self4170 ) ) .f_buf ) ,  (  cur4173 ) ,  (  cur4173 ) ,  (  s4172 ) ,  ( (struct Maybe_128) { .tag = Maybe_128_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at1204 (   struct env137* env ,    struct Pane_141 *  self4208 ,    int32_t  line4210 ) {
    struct envunion138  temp1205 = ( (struct envunion138){ .fun = (  struct Maybe_128  (*) (  struct env112*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_128  ) )change1062 , .env =  env->envinst112 } );
    ( temp1205.fun ( &temp1205.env ,  ( ( * (  self4208 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4210 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4210 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (  from_dash_charlike1123 ) ( ( "\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_128) { .tag = Maybe_128_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at_dash_current1200 (   struct env148* env ,    struct Pane_141 *  self4229 ,    int32_t  indent4231 ) {
    struct RangeIter_728  temp1201 =  into_dash_iter730 ( ( (  to733 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  indent4231 ) ) ) );
    while (true) {
        struct Maybe_308  __cond1202 =  next731 (&temp1201);
        if (  __cond1202 .tag == 0 ) {
            break;
        }
        int32_t  dref4232 =  __cond1202 .stuff .Maybe_308_Just_s .field0;
        struct envunion149  temp1203 = ( (struct envunion149){ .fun = (  enum Unit_8  (*) (  struct env137*  ,    struct Pane_141 *  ,    int32_t  ) )indent_dash_at1204 , .env =  env->envinst137 } );
        ( temp1203.fun ( &temp1203.env ,  (  self4229 ) ,  ( ( ( * (  self4229 ) ) .f_cursor ) .f_line ) ) );
        ( (  move_dash_right1028 ) ( (  self4229 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_beginning1206 (    struct Pane_141 *  self4149 ) {
    struct Pos_26  temp1207 = ( ( * (  self4149 ) ) .f_cursor );
    temp1207 .  f_bi = (  from_dash_integral56 ( 0 ) );
    ( (  set_dash_cursors984 ) ( (  self4149 ) ,  ( temp1207 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_985_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct envunion1209 {
    enum Unit_8  (*fun) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  );
    struct env126 env;
};

struct envunion1211 {
    enum Unit_8  (*fun) (  struct env148*  ,    struct Pane_141 *  ,    int32_t  );
    struct env148 env;
};

enum MoveDirection_1213 {
    MoveDirection_1213_MoveFwd,
    MoveDirection_1213_MoveBwd,
};

enum MoveTarget_1214 {
    MoveTarget_1214_NextWordStart,
    MoveTarget_1214_NextWordEnd,
};

static  struct Pos_26   own1216 (    struct Pos_26  x1251 ) {
    return (  x1251 );
}

struct env1217 {
    enum MoveDirection_1213  dir4112;
    ;
    struct Pos_26 *  prev4115;
    struct Pane_141 *  pane4110;
    ;
};

static  bool   is_dash_at_dash_line_dash_end1219 (    struct Pane_141 *  pane4092 ,    struct Pos_26  pos4094 ) {
    return (  eq275 ( ( (  i32_dash_size298 ) ( ( (  pos4094 ) .f_bi ) ) ) , ( (  num_dash_bytes1023 ) ( ( (  line990 ) ( ( ( * (  pane4092 ) ) .f_buf ) ,  ( (  pos4094 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1218 (    struct Pane_141 *  pane4097 ) {
    return ( (  is_dash_at_dash_line_dash_end1219 ) ( (  pane4097 ) ,  ( ( * (  pane4097 ) ) .f_cursor ) ) );
}

struct envunion1221 {
    enum Unit_8  (*fun) (  struct env1217*  );
    struct env1217 env;
};

static  enum Unit_8   advance1222 (   struct env1217* env ) {
    (* env->prev4115 ) = ( ( * ( env->pane4110 ) ) .f_cursor );
    enum MoveDirection_1213  dref4117 = ( env->dir4112 );
    switch (  dref4117 ) {
        case MoveDirection_1213_MoveFwd : {
            ( (  move_dash_right1028 ) ( ( env->pane4110 ) ) );
            break;
        }
        case MoveDirection_1213_MoveBwd : {
            ( (  move_dash_left983 ) ( ( env->pane4110 ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

enum CharType_1226 {
    CharType_1226_CharSpace,
    CharType_1226_CharWord,
    CharType_1226_CharPunctuation,
};

struct Tuple2_1227 {
    enum CharType_1226  field0;
    enum CharType_1226  field1;
};

static struct Tuple2_1227 Tuple2_1227_Tuple2 (  enum CharType_1226  field0 ,  enum CharType_1226  field1 ) {
    return ( struct Tuple2_1227 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1225 (    enum CharType_1226  l3636 ,    enum CharType_1226  r3638 ) {
    struct Tuple2_1227  dref3639 = ( ( Tuple2_1227_Tuple2 ) ( (  l3636 ) ,  (  r3638 ) ) );
    if (  dref3639 .field0 == CharType_1226_CharSpace &&  dref3639 .field1 == CharType_1226_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3639 .field0 == CharType_1226_CharWord &&  dref3639 .field1 == CharType_1226_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3639 .field0 == CharType_1226_CharPunctuation &&  dref3639 .field1 == CharType_1226_CharPunctuation ) {
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

static  struct Char_65   min1232 (    struct Char_65  l1236 ,    struct Char_65  r1238 ) {
    if ( (  cmp818 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Char_65   max1233 (    struct Char_65  l1315 ,    struct Char_65  r1317 ) {
    if ( (  cmp818 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  bool   between1231 (    struct Char_65  c1337 ,    struct Char_65  l1339 ,    struct Char_65  r1341 ) {
    struct Char_65  from1342 = ( (  min1232 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Char_65  to1343 = ( (  max1233 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp818 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp818 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_alpha1230 (    struct Char_65  c2389 ) {
    return ( ( (  cmp220 ( ( (  c2389 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between1231 ) ( (  c2389 ) ,  ( (  from_dash_charlike257 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1231 ) ( (  c2389 ) ,  ( (  from_dash_charlike257 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_digit1234 (    struct Char_65  c2392 ) {
    return ( (  eq275 ( ( (  c2392 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1231 ) ( (  c2392 ) ,  ( (  from_dash_charlike257 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1229 (    struct Char_65  c2404 ) {
    return ( ( (  is_dash_alpha1230 ) ( (  c2404 ) ) ) || ( (  is_dash_digit1234 ) ( (  c2404 ) ) ) );
}

static  bool   is_dash_whitespace1235 (    struct Char_65  c2380 ) {
    return ( ( (  eq447 ( (  c2380 ) , ( (  from_dash_charlike257 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq447 ( (  c2380 ) , ( (  from_dash_charlike257 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq447 ( (  c2380 ) , ( (  from_dash_charlike257 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_1226   char_dash_type1228 (    struct Char_65  c3642 ) {
    if ( ( ( ( (  is_dash_alphanumeric1229 ) ( (  c3642 ) ) ) || (  eq447 ( (  c3642 ) , ( (  from_dash_charlike257 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq447 ( (  c3642 ) , ( (  from_dash_charlike257 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1226_CharWord );
    } else {
        if ( ( (  is_dash_whitespace1235 ) ( (  c3642 ) ) ) ) {
            return ( CharType_1226_CharSpace );
        } else {
            return ( CharType_1226_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1224 (    struct Char_65  l3645 ,    struct Char_65  r3647 ) {
    return ( !  eq1225 ( ( (  char_dash_type1228 ) ( (  l3645 ) ) ) , ( (  char_dash_type1228 ) ( (  r3647 ) ) ) ) );
}

static  struct Char_65   or_dash_else1237 (    struct Maybe_652  self1733 ,    struct Char_65  alt1735 ) {
    struct Maybe_652  dref1736 = (  self1733 );
    if ( dref1736.tag == Maybe_652_None_t ) {
        return (  alt1735 );
    }
    else {
        if ( dref1736.tag == Maybe_652_Just_t ) {
            return ( dref1736 .stuff .Maybe_652_Just_s .field0 );
        }
    }
}

static  struct Maybe_652   head1238 (    struct StrViewIter_649  it1142 ) {
    struct StrViewIter_649  temp1239 = ( (  into_dash_iter651 ) ( (  it1142 ) ) );
    return ( (  next653 ) ( ( &temp1239 ) ) );
}

static  struct Char_65   char_dash_at1236 (    struct Pane_141 *  pane3971 ,    struct Pos_26  pos3973 ) {
    struct StrView_27  line3974 = ( (  line990 ) ( ( ( * (  pane3971 ) ) .f_buf ) ,  ( (  pos3973 ) .f_line ) ) );
    return ( (  or_dash_else1237 ) ( ( (  head1238 ) ( ( (  chars654 ) ( ( (  byte_dash_substr429 ) ( (  line3974 ) ,  ( (  i32_dash_size298 ) ( ( (  pos3973 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1023 ) ( (  line3974 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
}

static  enum Unit_8   print1241 (    struct StrView_27  s1702 ) {
    ( (  for_dash_each648 ) ( ( (  chars654 ) ( (  s1702 ) ) ) ,  (  printf_dash_char240 ) ) );
    return ( Unit_8_Unit );
}

static  bool   undefined1242 (  ) {
    bool  temp1243;
    return (  temp1243 );
}

static  bool   todo1240 (  ) {
    ( (  print1241 ) ( ( (  from_dash_string256 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( (  undefined1242 ) ( ) );
}

static  bool   reached_dash_target1223 (    struct Pane_141 *  pane4102 ,    enum MoveTarget_1214  target4104 ,    struct Pos_26  prev4106 ) {
    return ( {  enum MoveTarget_1214  dref4107 = (  target4104 ) ;  dref4107 == MoveTarget_1214_NextWordStart ? ( ( (  is_dash_word_dash_boundary1224 ) ( ( (  char_dash_at1236 ) ( (  pane4102 ) ,  (  prev4106 ) ) ) ,  ( (  char_dash_at1236 ) ( (  pane4102 ) ,  ( ( * (  pane4102 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1225 ( ( (  char_dash_type1228 ) ( ( (  char_dash_at1236 ) ( (  pane4102 ) ,  ( ( * (  pane4102 ) ) .f_cursor ) ) ) ) ) , ( CharType_1226_CharSpace ) ) ) ) ) :  dref4107 == MoveTarget_1214_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1224 ) ( ( (  char_dash_at1236 ) ( (  pane4102 ) ,  (  prev4106 ) ) ) ,  ( (  char_dash_at1236 ) ( (  pane4102 ) ,  ( ( * (  pane4102 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1225 ( ( (  char_dash_type1228 ) ( ( (  char_dash_at1236 ) ( (  pane4102 ) ,  (  prev4106 ) ) ) ) ) , ( CharType_1226_CharSpace ) ) ) ) ) : ( (  todo1240 ) ( ) ) ; } );
}

struct envunion1245 {
    enum Unit_8  (*fun) (  struct env1217*  );
    struct env1217 env;
};

struct envunion1247 {
    enum Unit_8  (*fun) (  struct env1217*  );
    struct env1217 env;
};

static  enum Unit_8   advance_dash_word1212 (    struct Pane_141 *  pane4110 ,    enum MoveDirection_1213  dir4112 ,    enum MoveTarget_1214  target4114 ) {
    struct Pos_26  temp1215 = ( (  own1216 ) ( ( ( * (  pane4110 ) ) .f_cursor ) ) );
    struct Pos_26 *  prev4115 = ( &temp1215 );
    struct env1217 envinst1217 = {
        .dir4112 =  dir4112 ,
        .prev4115 =  prev4115 ,
        .pane4110 =  pane4110 ,
    };
    struct Pos_26  sel4118 = ( ( * (  pane4110 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4119 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1218 ) ( (  pane4110 ) ) );
    struct envunion1221  temp1220 = ( (struct envunion1221){ .fun = (  enum Unit_8  (*) (  struct env1217*  ) )advance1222 , .env =  envinst1217 } );
    ( temp1220.fun ( &temp1220.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4119 ) || ( (  reached_dash_target1223 ) ( (  pane4110 ) ,  (  target4114 ) ,  ( * (  prev4115 ) ) ) ) ) ) {
        sel4118 = ( ( * (  pane4110 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1218 ) ( (  pane4110 ) ) ) ) {
        if ( (  eq363 ( ( ( * (  pane4110 ) ) .f_cursor ) , ( * (  prev4115 ) ) ) ) ) {
            return ( Unit_8_Unit );
        }
        struct envunion1245  temp1244 = ( (struct envunion1245){ .fun = (  enum Unit_8  (*) (  struct env1217*  ) )advance1222 , .env =  envinst1217 } );
        ( temp1244.fun ( &temp1244.env ) );
        sel4118 = ( ( * (  pane4110 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1247  temp1246 = ( (struct envunion1247){ .fun = (  enum Unit_8  (*) (  struct env1217*  ) )advance1222 , .env =  envinst1217 } );
        ( temp1246.fun ( &temp1246.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1218 ) ( (  pane4110 ) ) ) || ( (  reached_dash_target1223 ) ( (  pane4110 ) ,  (  target4114 ) ,  ( * (  prev4115 ) ) ) ) ) ) {
            enum MoveDirection_1213  dref4120 = (  dir4112 );
            switch (  dref4120 ) {
                case MoveDirection_1213_MoveFwd : {
                    ( (  move_dash_left983 ) ( (  pane4110 ) ) );
                    break;
                }
                case MoveDirection_1213_MoveBwd : {
                    ( (  move_dash_right1028 ) ( (  pane4110 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq363 ( ( * (  prev4115 ) ) , ( ( * (  pane4110 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel1019 ) ( (  pane4110 ) ,  ( ( Maybe_34_Just ) ( (  sel4118 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  size_t   size1252 (    struct List_30 *  l2134 ) {
    return ( ( * (  l2134 ) ) .f_count );
}

static  struct Changeset_32 *   get_dash_ptr1255 (    struct List_30 *  list2002 ,    size_t  i2004 ) {
    if ( ( (  cmp220 ( (  i2004 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i2004 ) , ( ( * (  list2002 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic288 ) ( ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2004 ) ) ) ,  ( (  from_dash_string256 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2002 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1136 ) ( ( ( * (  list2002 ) ) .f_elements ) ,  (  i2004 ) ) );
}

static  struct Changeset_32   get1254 (    struct List_30 *  list2012 ,    size_t  i2014 ) {
    return ( * ( (  get_dash_ptr1255 ) ( (  list2012 ) ,  (  i2014 ) ) ) );
}

static  struct Changeset_32   elem_dash_get1253 (    struct List_30  self2082 ,    size_t  k2084 ) {
    return ( (  get1254 ) ( ( & (  self2082 ) ) ,  (  k2084 ) ) );
}

static  struct Action_25   undefined1264 (  ) {
    struct Action_25  temp1265;
    return (  temp1265 );
}

static  struct Action_25   or_dash_fail1263 (    struct Maybe_1089  x1726 ,    struct StrConcat_289  errmsg1728 ) {
    struct Maybe_1089  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_1089_None_t ) {
        ( (  panic288 ) ( (  errmsg1728 ) ) );
        return ( (  undefined1264 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_1089_Just_t ) {
            return ( dref1729 .stuff .Maybe_1089_Just_s .field0 );
        }
    }
}

static  struct Maybe_1089   try_dash_get1266 (    struct Slice_24  slice1764 ,    size_t  i1766 ) {
    if ( ( (  cmp220 ( (  i1766 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i1766 ) , ( (  slice1764 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1089) { .tag = Maybe_1089_None_t } );
    }
    struct Action_25 *  elem_dash_ptr1767 = ( (  offset_dash_ptr1087 ) ( ( (  slice1764 ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  i1766 ) ) ) ) );
    return ( ( Maybe_1089_Just ) ( ( * (  elem_dash_ptr1767 ) ) ) );
}

static  struct Action_25   get1262 (    struct Slice_24  slice1770 ,    size_t  i1772 ) {
    return ( (  or_dash_fail1263 ) ( ( (  try_dash_get1266 ) ( (  slice1770 ) ,  (  i1772 ) ) ) ,  ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1772 ) ) ) ,  ( (  from_dash_string256 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1770 ) .f_count ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_25   elem_dash_get1261 (    struct Slice_24  self1868 ,    size_t  idx1870 ) {
    return ( (  get1262 ) ( (  self1868 ) ,  (  idx1870 ) ) );
}

static  struct Action_25   last1260 (    struct Slice_24  s1936 ) {
    if ( (  eq275 ( ( (  s1936 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1107 ) ( ( (  from_dash_string256 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1261 ( (  s1936 ) , (  op_dash_sub348 ( ( (  s1936 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_24   to_dash_slice1267 (    struct List_23  l2127 ) {
    struct Action_25 *  ptr2128 = ( ( (  l2127 ) .f_elements ) .f_ptr );
    return ( (struct Slice_24) { .f_ptr = (  ptr2128 ) , .f_count = ( (  l2127 ) .f_count ) } );
}

static  struct Maybe_128   redo1251 (   struct env108* env ,    struct TextBuf_99 *  self3799 ) {
    ( (  flush_dash_insert_dash_action1037 ) ( (  self3799 ) ) );
    struct Actions_100 *  actions3800 = ( & ( ( * (  self3799 ) ) .f_actions ) );
    if ( (  cmp220 ( ( ( * (  actions3800 ) ) .f_cur ) , ( (  size1252 ) ( ( & ( ( * (  actions3800 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_128) { .tag = Maybe_128_None_t } );
    }
    struct Changeset_32  changeset3801 = (  elem_dash_get1253 ( ( ( * (  actions3800 ) ) .f_list ) , ( ( * (  actions3800 ) ) .f_cur ) ) );
    struct Pos_26  temp1256;
    struct Pos_26  to_dash_fwd3802 = (  temp1256 );
    struct SliceIter_1082  temp1257 =  into_dash_iter1084 ( ( (  changeset3801 ) .f_parts ) );
    while (true) {
        struct Maybe_1089  __cond1258 =  next1090 (&temp1257);
        if (  __cond1258 .tag == 0 ) {
            break;
        }
        struct Action_25  action3804 =  __cond1258 .stuff .Maybe_1089_Just_s .field0;
        struct envunion109  temp1259 = ( (struct envunion109){ .fun = (  struct Pos_26  (*) (  struct env104*  ,    struct TextBuf_99 *  ,    struct Action_25  ) )action_dash_fwd1197 , .env =  env->envinst104 } );
        to_dash_fwd3802 = ( temp1259.fun ( &temp1259.env ,  (  self3799 ) ,  (  action3804 ) ) );
    }
    (*  actions3800 ) .f_cur = (  op_dash_add268 ( ( ( * (  actions3800 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_25  last_dash_action3805 = ( (  last1260 ) ( ( (  to_dash_slice1267 ) ( ( (  changeset3801 ) .f_parts ) ) ) ) );
    if ( (  cmp220 ( ( (  num_dash_bytes1023 ) ( ( (  last_dash_action3805 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd3806 = ( (  left_dash_pos1022 ) ( (  self3799 ) ,  (  to_dash_fwd3802 ) ) );
        return ( ( Maybe_128_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3806 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  last_dash_action3805 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_128_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3802 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

struct env1269 {
    struct Pane_141 *  self4186;
    ;
};

struct envunion1270 {
    enum Unit_8  (*fun) (  struct env1269*  ,    struct Cursors_33  );
    struct env1269 env;
};

static  enum Unit_8   if_dash_just1268 (    struct Maybe_128  x1291 ,   struct envunion1270  fun1293 ) {
    struct Maybe_128  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_128_Just_t ) {
        struct envunion1270  temp1271 = (  fun1293 );
        ( temp1271.fun ( &temp1271.env ,  ( dref1294 .stuff .Maybe_128_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_128_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1272 (   struct env1269* env ,    struct Cursors_33  cursors4189 ) {
    ( (  set_dash_cursors984 ) ( ( env->self4186 ) ,  ( (  cursors4189 ) .f_cur ) ,  ( (  cursors4189 ) .f_sel ) ,  ( CursorMovement_985_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   redo1249 (   struct env133* env ,    struct Pane_141 *  self4186 ) {
    struct envunion134  temp1250 = ( (struct envunion134){ .fun = (  struct Maybe_128  (*) (  struct env108*  ,    struct TextBuf_99 *  ) )redo1251 , .env =  env->envinst108 } );
    struct Maybe_128  mcursors4187 = ( temp1250.fun ( &temp1250.env ,  ( ( * (  self4186 ) ) .f_buf ) ) );
    struct env1269 envinst1269 = {
        .self4186 =  self4186 ,
    };
    ( (  if_dash_just1268 ) ( (  mcursors4187 ) ,  ( (struct envunion1270){ .fun = (  enum Unit_8  (*) (  struct env1269*  ,    struct Cursors_33  ) )lam1272 , .env =  envinst1269 } ) ) );
    return ( Unit_8_Unit );
}

struct SliceReversedIter_1278 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1278   into_dash_iter1279 (    struct SliceReversedIter_1278  self1899 ) {
    return (  self1899 );
}

static  struct SliceReversedIter_1278   reversed1280 (    struct Slice_24  slice1896 ) {
    return ( (struct SliceReversedIter_1278) { .f_slice = (  slice1896 ) , .f_current_dash_offset = ( (  slice1896 ) .f_count ) } );
}

static  struct Maybe_1089   next1282 (    struct SliceReversedIter_1278 *  self1902 ) {
    size_t  off1903 = ( ( * (  self1902 ) ) .f_current_dash_offset );
    if ( (  eq275 ( (  off1903 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1089) { .tag = Maybe_1089_None_t } );
    }
    (*  self1902 ) .f_current_dash_offset = (  op_dash_sub348 ( (  off1903 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1089_Just ) ( (  elem_dash_get1261 ( ( ( * (  self1902 ) ) .f_slice ) , ( ( * (  self1902 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_26   action_dash_bwd1284 (   struct env102* env ,    struct TextBuf_99 *  self3767 ,    struct Action_25  action3769 ) {
    struct envunion103  temp1285 = ( (struct envunion103){ .fun = (  enum Unit_8  (*) (  struct env93*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action358 , .env =  env->envinst93 } );
    ( temp1285.fun ( &temp1285.env ,  (  self3767 ) ,  ( (  action3769 ) .f_from ) ,  ( (  action3769 ) .f_to_dash_fwd ) ,  ( (  action3769 ) .f_bwd ) ) );
    return ( (  action3769 ) .f_to_dash_bwd );
}

static  struct Maybe_128   undo1276 (   struct env106* env ,    struct TextBuf_99 *  self3792 ) {
    ( (  flush_dash_insert_dash_action1037 ) ( (  self3792 ) ) );
    struct Actions_100 *  actions3793 = ( & ( ( * (  self3792 ) ) .f_actions ) );
    if ( (  eq275 ( ( ( * (  actions3793 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_128) { .tag = Maybe_128_None_t } );
    }
    (*  actions3793 ) .f_cur = (  op_dash_sub348 ( ( ( * (  actions3793 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_32  changeset3794 = (  elem_dash_get1253 ( ( ( * (  actions3793 ) ) .f_list ) , ( ( * (  actions3793 ) ) .f_cur ) ) );
    struct SliceReversedIter_1278  temp1277 =  into_dash_iter1279 ( ( (  reversed1280 ) ( ( (  to_dash_slice1267 ) ( ( (  changeset3794 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1089  __cond1281 =  next1282 (&temp1277);
        if (  __cond1281 .tag == 0 ) {
            break;
        }
        struct Action_25  action3796 =  __cond1281 .stuff .Maybe_1089_Just_s .field0;
        struct envunion107  temp1283 = ( (struct envunion107){ .fun = (  struct Pos_26  (*) (  struct env102*  ,    struct TextBuf_99 *  ,    struct Action_25  ) )action_dash_bwd1284 , .env =  env->envinst102 } );
        ( temp1283.fun ( &temp1283.env ,  (  self3792 ) ,  (  action3796 ) ) );
    }
    return ( ( Maybe_128_Just ) ( ( (  changeset3794 ) .f_before_dash_cursors ) ) );
}

struct env1287 {
    ;
    struct Pane_141 *  self4180;
};

struct envunion1288 {
    enum Unit_8  (*fun) (  struct env1287*  ,    struct Cursors_33  );
    struct env1287 env;
};

static  enum Unit_8   if_dash_just1286 (    struct Maybe_128  x1291 ,   struct envunion1288  fun1293 ) {
    struct Maybe_128  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_128_Just_t ) {
        struct envunion1288  temp1289 = (  fun1293 );
        ( temp1289.fun ( &temp1289.env ,  ( dref1294 .stuff .Maybe_128_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_128_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1290 (   struct env1287* env ,    struct Cursors_33  cursors4183 ) {
    ( (  set_dash_cursors984 ) ( ( env->self4180 ) ,  ( (  cursors4183 ) .f_cur ) ,  ( (  cursors4183 ) .f_sel ) ,  ( CursorMovement_985_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undo1274 (   struct env131* env ,    struct Pane_141 *  self4180 ) {
    struct envunion132  temp1275 = ( (struct envunion132){ .fun = (  struct Maybe_128  (*) (  struct env106*  ,    struct TextBuf_99 *  ) )undo1276 , .env =  env->envinst106 } );
    struct Maybe_128  mcursors4181 = ( temp1275.fun ( &temp1275.env ,  ( ( * (  self4180 ) ) .f_buf ) ) );
    struct env1287 envinst1287 = {
        .self4180 =  self4180 ,
    };
    ( (  if_dash_just1286 ) ( (  mcursors4181 ) ,  ( (struct envunion1288){ .fun = (  enum Unit_8  (*) (  struct env1287*  ,    struct Cursors_33  ) )lam1290 , .env =  envinst1287 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_152   minmax1294 (    struct Pos_26  l1329 ,    struct Pos_26  r1331 ) {
    return ( (  cmp360 ( (  l1329 ) , (  r1331 ) ) == 0 ) ? ( ( Tuple2_152_Tuple2 ) ( (  l1329 ) ,  (  r1331 ) ) ) : ( ( Tuple2_152_Tuple2 ) ( (  r1331 ) ,  (  l1329 ) ) ) );
}

static  struct Pos_26   or_dash_else1295 (    struct Maybe_34  self1733 ,    struct Pos_26  alt1735 ) {
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

static  struct Pos_26   fst1296 (    struct Tuple2_152  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_26   snd1297 (    struct Tuple2_152  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tuple2_152   selection1293 (    struct Pane_141 *  self4192 ) {
    struct Tuple2_152  from_dash_to4193 = ( (  minmax1294 ) ( ( (  or_dash_else1295 ) ( ( ( * (  self4192 ) ) .f_sel ) ,  ( ( * (  self4192 ) ) .f_cursor ) ) ) ,  ( ( * (  self4192 ) ) .f_cursor ) ) );
    struct Pos_26  from4194 = ( (  fst1296 ) ( (  from_dash_to4193 ) ) );
    struct Pos_26  to4195 = ( (  right_dash_pos1029 ) ( ( ( * (  self4192 ) ) .f_buf ) ,  ( (  snd1297 ) ( (  from_dash_to4193 ) ) ) ) );
    return ( ( Tuple2_152_Tuple2 ) ( (  from4194 ) ,  (  to4195 ) ) );
}

struct env1300 {
    ;
    struct Editor_162 *  ed4298;
};

struct envunion1301 {
    enum Unit_8  (*fun) (  struct env1300*  ,    struct StrView_27  );
    struct env1300 env;
};

static  enum Unit_8   if_dash_just1299 (    struct Maybe_163  x1291 ,   struct envunion1301  fun1293 ) {
    struct Maybe_163  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_163_Just_t ) {
        struct envunion1301  temp1302 = (  fun1293 );
        ( temp1302.fun ( &temp1302.env ,  ( dref1294 .stuff .Maybe_163_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_163_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1303 (   struct env1300* env ,    struct StrView_27  cp4302 ) {
    ( (  free977 ) ( (  cp4302 ) ,  ( ( * ( env->ed4298 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   copy_dash_selection_dash_to_dash_clipboard1292 (   struct env154* env ,    struct Editor_162 *  ed4298 ) {
    struct Tuple2_152  from_dash_to4299 = ( (  selection1293 ) ( ( (  pane1027 ) ( (  ed4298 ) ) ) ) );
    struct envunion155  temp1298 = ( (struct envunion155){ .fun = (  struct StrView_27  (*) (  struct env110*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1118 , .env =  env->envinst110 } );
    struct StrView_27  cpd4300 = ( temp1298.fun ( &temp1298.env ,  ( ( ( * (  ed4298 ) ) .f_pane ) .f_buf ) ,  ( (  fst1296 ) ( (  from_dash_to4299 ) ) ) ,  ( (  snd1297 ) ( (  from_dash_to4299 ) ) ) ) );
    struct env1300 envinst1300 = {
        .ed4298 =  ed4298 ,
    };
    ( (  if_dash_just1299 ) ( ( ( * (  ed4298 ) ) .f_clipboard ) ,  ( (struct envunion1301){ .fun = (  enum Unit_8  (*) (  struct env1300*  ,    struct StrView_27  ) )lam1303 , .env =  envinst1300 } ) ) );
    (*  ed4298 ) .f_clipboard = ( ( Maybe_163_Just ) ( (  cpd4300 ) ) );
    return ( Unit_8_Unit );
}

struct env1308 {
    ;
    struct Pane_141 *  self4198;
};

struct envunion1309 {
    enum Unit_8  (*fun) (  struct env1308*  ,    struct Cursors_33  );
    struct env1308 env;
};

static  enum Unit_8   if_dash_just1307 (    struct Maybe_128  x1291 ,   struct envunion1309  fun1293 ) {
    struct Maybe_128  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_128_Just_t ) {
        struct envunion1309  temp1310 = (  fun1293 );
        ( temp1310.fun ( &temp1310.env ,  ( dref1294 .stuff .Maybe_128_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_128_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1311 (   struct env1308* env ,    struct Cursors_33  cursors4205 ) {
    ( (  set_dash_cursors984 ) ( ( env->self4198 ) ,  ( (  cursors4205 ) .f_cur ) ,  ( (  cursors4205 ) .f_sel ) ,  ( CursorMovement_985_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   replace_dash_selection1305 (   struct env135* env ,    struct Pane_141 *  self4198 ,    struct Tuple2_152  pos_prime_s4200 ,    struct StrView_27  cp4202 ) {
    struct envunion136  temp1306 = ( (struct envunion136){ .fun = (  struct Maybe_128  (*) (  struct env112*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_128  ) )change1062 , .env =  env->envinst112 } );
    struct Maybe_128  mcursors4203 = ( temp1306.fun ( &temp1306.env ,  ( ( * (  self4198 ) ) .f_buf ) ,  ( (  fst1296 ) ( (  pos_prime_s4200 ) ) ) ,  ( (  snd1297 ) ( (  pos_prime_s4200 ) ) ) ,  (  cp4202 ) ,  ( ( Maybe_128_Just ) ( ( (struct Cursors_33) { .f_cur = ( ( * (  self4198 ) ) .f_cursor ) , .f_sel = ( ( * (  self4198 ) ) .f_sel ) } ) ) ) ) );
    struct env1308 envinst1308 = {
        .self4198 =  self4198 ,
    };
    ( (  if_dash_just1307 ) ( (  mcursors4203 ) ,  ( (struct envunion1309){ .fun = (  enum Unit_8  (*) (  struct env1308*  ,    struct Cursors_33  ) )lam1311 , .env =  envinst1308 } ) ) );
    return ( Unit_8_Unit );
}

struct envunion1313 {
    enum Unit_8  (*fun) (  struct env154*  ,    struct Editor_162 *  );
    struct env154 env;
};

struct envunion1315 {
    enum Unit_8  (*fun) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_152  ,    struct StrView_27  );
    struct env135 env;
};

struct envunion1317 {
    enum Unit_8  (*fun) (  struct env154*  ,    struct Editor_162 *  );
    struct env154 env;
};

static  struct StrBuilder_62   mk1323 (    enum CAllocator_10  al2797 ) {
    return ( (struct StrBuilder_62) { .f_chars = ( (  mk327 ) ( (  al2797 ) ) ) } );
}

struct IntStrIter_1329 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1328 {
    struct StrViewIter_649  f_left;
    struct IntStrIter_1329  f_right;
};

struct StrConcatIter_1327 {
    struct StrConcatIter_1328  f_left;
    struct StrViewIter_649  f_right;
};

struct env1330 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2765;
};

struct envunion1331 {
    enum Unit_8  (*fun) (  struct env1330*  ,    struct Char_65  );
    struct env1330 env;
};

static  struct StrConcatIter_1327   into_dash_iter1333 (    struct StrConcatIter_1327  self1497 ) {
    return (  self1497 );
}

struct env1339 {
    ;
    size_t  base1210;
};

struct envunion1340 {
    size_t  (*fun) (  struct env1339*  ,    int32_t  ,    size_t  );
    struct env1339 env;
};

static  size_t   reduce1338 (    struct Range_725  iterable1093 ,    size_t  base1095 ,   struct envunion1340  fun1097 ) {
    size_t  x1098 = (  base1095 );
    struct RangeIter_728  it1099 = ( (  into_dash_iter730 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_308  dref1100 = ( (  next731 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_308_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_308_Just_t ) {
                struct envunion1340  temp1341 = (  fun1097 );
                x1098 = ( temp1341.fun ( &temp1341.env ,  ( dref1100 .stuff .Maybe_308_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1342 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1342);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1343;
    return (  temp1343 );
}

static  size_t   lam1344 (   struct env1339* env ,    int32_t  item1214 ,    size_t  x1216 ) {
    return (  op_dash_mul281 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  size_t   pow1337 (    size_t  base1210 ,    int32_t  p1212 ) {
    struct env1339 envinst1339 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1338 ) ( ( (  to733 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub851 ( (  p1212 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1340){ .fun = (  size_t  (*) (  struct env1339*  ,    int32_t  ,    size_t  ) )lam1344 , .env =  envinst1339 } ) ) );
}

static  uint8_t   cast1345 (    size_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_652   next1336 (    struct IntStrIter_1329 *  self1428 ) {
    if ( ( ( * (  self1428 ) ) .f_negative ) ) {
        (*  self1428 ) .f_negative = ( false );
        return ( ( Maybe_652_Just ) ( ( (  from_dash_charlike257 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp361 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_652) { .tag = Maybe_652_None_t } );
    }
    size_t  trim_dash_down1429 = ( (  pow1337 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub851 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    size_t  upper1430 = (  op_dash_div247 ( ( ( * (  self1428 ) ) .f_int ) , (  trim_dash_down1429 ) ) );
    size_t  upper_dash_mask1431 = (  op_dash_mul281 ( (  op_dash_div247 ( (  upper1430 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1432 = ( ( (  cast1345 ) ( (  op_dash_sub348 ( (  upper1430 ) , (  upper_dash_mask1431 ) ) ) ) ) );
    (*  self1428 ) .f_len = (  op_dash_sub851 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1433 = ( (  from_dash_u8931 ) ( (  op_dash_add821 ( (  digit1432 ) , (  from_dash_integral248 ( 48 ) ) ) ) ) );
    return ( ( Maybe_652_Just ) ( (  digit_dash_char1433 ) ) );
}

static  struct Maybe_652   next1335 (    struct StrConcatIter_1328 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next1336 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next1334 (    struct StrConcatIter_1327 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next1335 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1326 (    struct StrConcatIter_1327  iterable1074 ,   struct envunion1331  fun1076 ) {
    struct StrConcatIter_1327  temp1332 = ( (  into_dash_iter1333 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1327 *  it1077 = ( &temp1332 );
    while ( ( true ) ) {
        struct Maybe_652  dref1078 = ( (  next1334 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_652_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_652_Just_t ) {
                struct envunion1331  temp1346 = (  fun1076 );
                ( temp1346.fun ( &temp1346.env ,  ( dref1078 .stuff .Maybe_652_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits1353 (    size_t  self1436 ) {
    if ( (  eq275 ( (  self1436 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1437 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp220 ( (  self1436 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1436 = (  op_dash_div247 ( (  self1436 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1437 = (  op_dash_add310 ( (  digits1437 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1437 );
}

static  struct IntStrIter_1329   uint_dash_iter1352 (    size_t  int1443 ) {
    return ( (struct IntStrIter_1329) { .f_int = (  int1443 ) , .f_len = ( (  count_dash_digits1353 ) ( (  int1443 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1329   chars1351 (    size_t  self1473 ) {
    return ( (  uint_dash_iter1352 ) ( (  self1473 ) ) );
}

static  struct StrConcatIter_1328   into_dash_iter1350 (    struct StrConcat_75  dref1504 ) {
    return ( (struct StrConcatIter_1328) { .f_left = ( (  chars654 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1351 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1328   chars1349 (    struct StrConcat_75  self1515 ) {
    return ( (  into_dash_iter1350 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_1327   into_dash_iter1348 (    struct StrConcat_74  dref1504 ) {
    return ( (struct StrConcatIter_1327) { .f_left = ( (  chars1349 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars654 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1327   chars1347 (    struct StrConcat_74  self1515 ) {
    return ( (  into_dash_iter1348 ) ( (  self1515 ) ) );
}

static  enum Unit_8   write_dash_slice1358 (   struct env58* env ,    struct StrBuilder_62 *  builder2755 ,    struct Slice_14  s2757 ) {
    struct envunion59  temp1359 = ( (struct envunion59){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all382 , .env =  env->envinst48 } );
    ( temp1359.fun ( &temp1359.env ,  ( & ( ( * (  builder2755 ) ) .f_chars ) ) ,  (  s2757 ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_14   from_dash_char1360 (    struct Char_65  c1942 ,    uint8_t *  buf1944 ) {
    struct CharDestructured_241  dref1945 = ( (  destructure243 ) ( (  c1942 ) ) );
    if ( dref1945.tag == CharDestructured_241_Ref_t ) {
        return ( (struct Slice_14) { .f_ptr = ( ( dref1945 .stuff .CharDestructured_241_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1945 .stuff .CharDestructured_241_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1945.tag == CharDestructured_241_Scalar_t ) {
            if ( (  cmp251 ( ( ( dref1945 .stuff .CharDestructured_241_Scalar_s .field0 ) .f_value ) , (  from_dash_integral252 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1361 = ( (  from_dash_string57 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp1361);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            (*  buf1944 ) = ( (  u32_dash_u8254 ) ( ( ( dref1945 .stuff .CharDestructured_241_Scalar_s .field0 ) .f_value ) ) );
            return ( (struct Slice_14) { .f_ptr = (  buf1944 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_8   write_dash_char1356 (   struct env60* env ,    struct StrBuilder_62 *  builder2760 ,    struct Char_65  c2762 ) {
    struct envunion61  temp1357 = ( (struct envunion61){ .fun = (  enum Unit_8  (*) (  struct env58*  ,    struct StrBuilder_62 *  ,    struct Slice_14  ) )write_dash_slice1358 , .env =  env->envinst58 } );
    uint8_t  temp1363;
    uint8_t  temp1362 = (  temp1363 );
    ( temp1357.fun ( &temp1357.env ,  (  builder2760 ) ,  ( (  from_dash_char1360 ) ( (  c2762 ) ,  ( &temp1362 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1354 (   struct env1330* env ,    struct Char_65  c2769 ) {
    struct envunion64  temp1355 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1356 , .env =  env->envinst60 } );
    return ( temp1355.fun ( &temp1355.env ,  ( env->builder2765 ) ,  (  c2769 ) ) );
}

static  enum Unit_8   write1325 (   struct env66* env ,    struct StrBuilder_62 *  builder2765 ,    struct StrConcat_74  s2767 ) {
    struct env1330 envinst1330 = {
        .envinst60 = env->envinst60 ,
        .builder2765 =  builder2765 ,
    };
    ( (  for_dash_each1326 ) ( ( (  chars1347 ) ( (  s2767 ) ) ) ,  ( (struct envunion1331){ .fun = (  enum Unit_8  (*) (  struct env1330*  ,    struct Char_65  ) )lam1354 , .env =  envinst1330 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t *   cast_dash_ptr1367 (    uint8_t *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_14   cast_dash_slice1366 (    struct Slice_14  s1933 ) {
    return ( (struct Slice_14) { .f_ptr = ( (  cast_dash_ptr1367 ) ( ( (  s1933 ) .f_ptr ) ) ) , .f_count = ( (  s1933 ) .f_count ) } );
}

static  struct StrView_27   as_dash_str1365 (    struct StrBuilder_62 *  builder2803 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice1366 ) ( ( (  subslice372 ) ( ( ( ( * (  builder2803 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2803 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_27   mk_dash_dyn_dash_str1321 (   struct env72* env ,    struct StrConcat_74  s2823 ,    enum CAllocator_10  al2825 ) {
    struct StrBuilder_62  temp1322 = ( (  mk1323 ) ( (  al2825 ) ) );
    struct StrBuilder_62 *  sb2826 = ( &temp1322 );
    struct envunion73  temp1324 = ( (struct envunion73){ .fun = (  enum Unit_8  (*) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrConcat_74  ) )write1325 , .env =  env->envinst66 } );
    ( temp1324.fun ( &temp1324.env ,  (  sb2826 ) ,  (  s2823 ) ) );
    struct envunion71  temp1364 = ( (struct envunion71){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1356 , .env =  env->envinst60 } );
    ( temp1364.fun ( &temp1364.env ,  (  sb2826 ) ,  ( (  nullchar574 ) ( ) ) ) );
    struct StrView_27  dynstr2827 = ( (  as_dash_str1365 ) ( (  sb2826 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2827 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub348 ( ( ( (  dynstr2827 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1319 (   struct env158* env ,    struct Editor_162 *  ed4310 ,    struct StrConcat_74  s4312 ) {
    ( (  reset_dash_msg971 ) ( (  ed4310 ) ) );
    struct envunion159  temp1320 = ( (struct envunion159){ .fun = (  struct StrView_27  (*) (  struct env72*  ,    struct StrConcat_74  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1321 , .env =  env->envinst72 } );
    (*  ed4310 ) .f_msg = ( ( Maybe_163_Just ) ( ( temp1320.fun ( &temp1320.env ,  (  s4312 ) ,  ( ( * (  ed4310 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion1370 {
    enum Unit_8  (*fun) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_152  ,    struct StrView_27  );
    struct env135 env;
};

struct env1369 {
    ;
    struct Editor_162 *  ed4356;
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
};

struct envunion1371 {
    enum Unit_8  (*fun) (  struct env1369*  ,    struct StrView_27  );
    struct env1369 env;
};

static  enum Unit_8   if_dash_just1368 (    struct Maybe_163  x1291 ,   struct envunion1371  fun1293 ) {
    struct Maybe_163  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_163_Just_t ) {
        struct envunion1371  temp1372 = (  fun1293 );
        ( temp1372.fun ( &temp1372.env ,  ( dref1294 .stuff .Maybe_163_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_163_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   max_dash_pos1374 (    struct Pane_141 *  pane4128 ) {
    return ( {  struct Maybe_34  dref4129 = ( ( * (  pane4128 ) ) .f_sel ) ; dref4129.tag == Maybe_34_Just_t ? ( (  max362 ) ( ( ( * (  pane4128 ) ) .f_cursor ) ,  ( dref4129 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4128 ) ) .f_cursor ) ; } );
}

static  uint8_t   elem_dash_get1376 (    struct Slice_14  self1868 ,    size_t  idx1870 ) {
    return ( (  get423 ) ( (  self1868 ) ,  (  idx1870 ) ) );
}

static  uint8_t   last1375 (    struct Slice_14  s1936 ) {
    if ( (  eq275 ( ( (  s1936 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1107 ) ( ( (  from_dash_string256 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1376 ( (  s1936 ) , (  op_dash_sub348 ( ( (  s1936 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1377 (    int32_t  x1352 ,    int32_t  mn1354 ,    int32_t  mx1356 ) {
    if ( (  cmp361 ( (  x1352 ) , (  mn1354 ) ) == 0 ) ) {
        return (  mn1354 );
    } else {
        if ( (  cmp361 ( (  x1352 ) , (  mx1356 ) ) == 2 ) ) {
            return (  mx1356 );
        } else {
            return (  x1352 );
        }
    }
}

static  enum Unit_8   lam1373 (   struct env1369* env ,    struct StrView_27  cp4367 ) {
    struct Pos_26  start4368 = ( (  max_dash_pos1374 ) ( ( (  pane1027 ) ( ( env->ed4356 ) ) ) ) );
    if ( (  eq244 ( ( (  last1375 ) ( ( (  cp4367 ) .f_contents ) ) ) , ( (  ascii_dash_u8784 ) ( ( (  from_dash_charlike826 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        start4368 = ( (struct Pos_26) { .f_line = ( (  clamp1377 ) ( (  op_dash_add310 ( ( (  start4368 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  num_dash_lines1030 ) ( ( ( * ( (  pane1027 ) ( ( env->ed4356 ) ) ) ) .f_buf ) ) ) ) ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } );
    } else {
        start4368 = ( (  right_dash_pos1029 ) ( ( ( ( * ( env->ed4356 ) ) .f_pane ) .f_buf ) ,  (  start4368 ) ) );
    }
    struct envunion1370  temp1378 = ( (struct envunion1370){ .fun = (  enum Unit_8  (*) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_152  ,    struct StrView_27  ) )replace_dash_selection1305 , .env =  env->envinst135 } );
    ( temp1378.fun ( &temp1378.env ,  ( (  pane1027 ) ( ( env->ed4356 ) ) ) ,  ( ( Tuple2_152_Tuple2 ) ( (  start4368 ) ,  (  start4368 ) ) ) ,  (  cp4367 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1381 {
    enum Unit_8  (*fun) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_152  ,    struct StrView_27  );
    struct env135 env;
};

struct env1380 {
    ;
    struct Editor_162 *  ed4356;
    ;
    ;
    ;
    struct env135 envinst135;
    ;
    ;
    ;
};

struct envunion1382 {
    enum Unit_8  (*fun) (  struct env1380*  ,    struct StrView_27  );
    struct env1380 env;
};

static  enum Unit_8   if_dash_just1379 (    struct Maybe_163  x1291 ,   struct envunion1382  fun1293 ) {
    struct Maybe_163  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_163_Just_t ) {
        struct envunion1382  temp1383 = (  fun1293 );
        ( temp1383.fun ( &temp1383.env ,  ( dref1294 .stuff .Maybe_163_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_163_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   min_dash_pos1385 (    struct Pane_141 *  pane4123 ) {
    return ( {  struct Maybe_34  dref4124 = ( ( * (  pane4123 ) ) .f_sel ) ; dref4124.tag == Maybe_34_Just_t ? ( (  min359 ) ( ( ( * (  pane4123 ) ) .f_cursor ) ,  ( dref4124 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4123 ) ) .f_cursor ) ; } );
}

static  enum Unit_8   lam1384 (   struct env1380* env ,    struct StrView_27  cp4370 ) {
    struct Pos_26  start4371 = ( (  min_dash_pos1385 ) ( ( (  pane1027 ) ( ( env->ed4356 ) ) ) ) );
    if ( (  eq244 ( ( (  last1375 ) ( ( (  cp4370 ) .f_contents ) ) ) , ( (  ascii_dash_u8784 ) ( ( (  from_dash_charlike826 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_26  temp1386 = (  start4371 );
        temp1386 .  f_bi = (  from_dash_integral56 ( 0 ) );
        start4371 = ( temp1386 );
    }
    struct envunion1381  temp1387 = ( (struct envunion1381){ .fun = (  enum Unit_8  (*) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_152  ,    struct StrView_27  ) )replace_dash_selection1305 , .env =  env->envinst135 } );
    ( temp1387.fun ( &temp1387.env ,  ( (  pane1027 ) ( ( env->ed4356 ) ) ) ,  ( ( Tuple2_152_Tuple2 ) ( (  start4371 ) ,  (  start4371 ) ) ) ,  (  cp4370 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1390 {
    enum Unit_8  (*fun) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_152  ,    struct StrView_27  );
    struct env135 env;
};

struct env1389 {
    ;
    struct Editor_162 *  ed4356;
    struct env135 envinst135;
    ;
};

struct envunion1391 {
    enum Unit_8  (*fun) (  struct env1389*  ,    struct StrView_27  );
    struct env1389 env;
};

static  enum Unit_8   if_dash_just1388 (    struct Maybe_163  x1291 ,   struct envunion1391  fun1293 ) {
    struct Maybe_163  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_163_Just_t ) {
        struct envunion1391  temp1392 = (  fun1293 );
        ( temp1392.fun ( &temp1392.env ,  ( dref1294 .stuff .Maybe_163_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_163_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1393 (   struct env1389* env ,    struct StrView_27  cp4373 ) {
    struct Pos_26  start4374 = ( (  min_dash_pos1385 ) ( ( (  pane1027 ) ( ( env->ed4356 ) ) ) ) );
    struct envunion1390  temp1394 = ( (struct envunion1390){ .fun = (  enum Unit_8  (*) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_152  ,    struct StrView_27  ) )replace_dash_selection1305 , .env =  env->envinst135 } );
    ( temp1394.fun ( &temp1394.env ,  ( (  pane1027 ) ( ( env->ed4356 ) ) ) ,  ( ( Tuple2_152_Tuple2 ) ( (  start4374 ) ,  (  start4374 ) ) ) ,  (  cp4373 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   expand1395 (    struct Pane_141 *  pane4142 ) {
    struct Pos_26  min_dash_pos4143 = ( (  min_dash_pos1385 ) ( (  pane4142 ) ) );
    struct Pos_26  max_dash_pos4144 = ( (  max_dash_pos1374 ) ( (  pane4142 ) ) );
    int32_t  max_dash_pos_dash_max4145 = ( (  size_dash_i32232 ) ( ( (  num_dash_bytes1023 ) ( ( (  line990 ) ( ( ( * (  pane4142 ) ) .f_buf ) ,  ( (  max_dash_pos4144 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq364 ( ( (  min_dash_pos4143 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) && (  eq364 ( ( (  max_dash_pos4144 ) .f_bi ) , (  max_dash_pos_dash_max4145 ) ) ) ) ) ) {
        struct Pos_26  temp1396 = (  min_dash_pos4143 );
        temp1396 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4142 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1396 ) ) );
        struct Pos_26  temp1397 = (  max_dash_pos4144 );
        temp1397 .  f_bi = (  max_dash_pos_dash_max4145 );
        (*  pane4142 ) .f_cursor = ( temp1397 );
    } else {
        if ( (  cmp361 ( (  op_dash_add310 ( ( (  max_dash_pos4144 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1030 ) ( ( ( * (  pane4142 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_8_Unit );
        }
        struct Pos_26  temp1398 = (  min_dash_pos4143 );
        temp1398 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4142 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1398 ) ) );
        int32_t  next_dash_line4146 = (  op_dash_add310 ( ( (  max_dash_pos4144 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
        (*  pane4142 ) .f_cursor = ( (struct Pos_26) { .f_line = (  next_dash_line4146 ) , .f_bi = ( (  size_dash_i32232 ) ( ( (  num_dash_bytes1023 ) ( ( (  line990 ) ( ( ( * (  pane4142 ) ) .f_buf ) ,  (  next_dash_line4146 ) ) ) ) ) ) ) } );
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_none1399 (    struct Maybe_34  m1264 ) {
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

struct Maybe_1401 {
    enum {
        Maybe_1401_None_t,
        Maybe_1401_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_152  field0;
        } Maybe_1401_Just_s;
    } stuff;
};

static struct Maybe_1401 Maybe_1401_Just (  struct Tuple2_152  field0 ) {
    return ( struct Maybe_1401 ) { .tag = Maybe_1401_Just_t, .stuff = { .Maybe_1401_Just_s = { .field0 = field0 } } };
};

struct env1403 {
    ;
    ;
    struct Pane_141 *  pane4243;
    ;
    ;
    struct StrView_27  query4247;
};

struct envunion1405 {
    struct Maybe_1045  (*fun) (  struct env1403*  ,    struct Pos_26  );
    struct env1403 env;
};

struct Zip_1412 {
    struct SliceIter_386  f_left_dash_it;
    struct SliceIter_386  f_right_dash_it;
};

struct Tuple2_1413 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_1413 Tuple2_1413_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_1413 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1415 {
    bool (*  fun1126 )(    struct Tuple2_1413  );
};

struct envunion1416 {
    bool  (*fun) (  struct env1415*  ,    struct Tuple2_1413  ,    bool  );
    struct env1415 env;
};

static  struct Zip_1412   into_dash_iter1417 (    struct Zip_1412  self911 ) {
    return (  self911 );
}

struct Maybe_1418 {
    enum {
        Maybe_1418_None_t,
        Maybe_1418_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1413  field0;
        } Maybe_1418_Just_s;
    } stuff;
};

static struct Maybe_1418 Maybe_1418_Just (  struct Tuple2_1413  field0 ) {
    return ( struct Maybe_1418 ) { .tag = Maybe_1418_Just_t, .stuff = { .Maybe_1418_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1418   next1419 (    struct Zip_1412 *  self914 ) {
    struct Zip_1412  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_389  dref916 = ( (  next390 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_389_None_t ) {
            return ( (struct Maybe_1418) { .tag = Maybe_1418_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_389_Just_t ) {
                struct Maybe_389  dref918 = ( (  next390 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_389_None_t ) {
                    return ( (struct Maybe_1418) { .tag = Maybe_1418_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_389_Just_t ) {
                        ( (  next390 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next390 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1418_Just ) ( ( ( Tuple2_1413_Tuple2 ) ( ( dref916 .stuff .Maybe_389_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_389_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1414 (    struct Zip_1412  iterable1093 ,    bool  base1095 ,   struct envunion1416  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_1412  it1099 = ( (  into_dash_iter1417 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1418  dref1100 = ( (  next1419 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1418_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1418_Just_t ) {
                struct envunion1416  temp1420 = (  fun1097 );
                x1098 = ( temp1420.fun ( &temp1420.env ,  ( dref1100 .stuff .Maybe_1418_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1421 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1421);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1422;
    return (  temp1422 );
}

static  bool   lam1423 (   struct env1415* env ,    struct Tuple2_1413  e1128 ,    bool  x1130 ) {
    return ( ( ( env->fun1126 ) ( (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1411 (    struct Zip_1412  it1124 ,    bool (*  fun1126 )(    struct Tuple2_1413  ) ) {
    struct env1415 envinst1415 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1414 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1416){ .fun = (  bool  (*) (  struct env1415*  ,    struct Tuple2_1413  ,    bool  ) )lam1423 , .env =  envinst1415 } ) ) );
}

static  struct Zip_1412   zip1424 (    struct Slice_14  left922 ,    struct Slice_14  right924 ) {
    struct SliceIter_386  left_dash_it925 = ( (  into_dash_iter388 ) ( (  left922 ) ) );
    struct SliceIter_386  right_dash_it926 = ( (  into_dash_iter388 ) ( (  right924 ) ) );
    return ( (struct Zip_1412) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  bool   lam1425 (    struct Tuple2_1413  dref1863 ) {
    return (  eq244 ( ( dref1863 .field0 ) , ( dref1863 .field1 ) ) );
}

static  bool   eq1410 (    struct Slice_14  l1860 ,    struct Slice_14  r1862 ) {
    if ( ( !  eq275 ( ( (  l1860 ) .f_count ) , ( (  r1862 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all1411 ) ( ( (  zip1424 ) ( (  l1860 ) ,  (  r1862 ) ) ) ,  (  lam1425 ) ) );
}

static  struct Maybe_1045   find_dash_slice1407 (    struct Slice_14  haystack1913 ,    struct Slice_14  needle1915 ) {
    struct RangeIter_728  temp1408 =  into_dash_iter730 ( ( (  to733 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub851 ( ( (  size_dash_i32232 ) ( ( (  haystack1913 ) .f_count ) ) ) , ( (  size_dash_i32232 ) ( ( (  needle1915 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_308  __cond1409 =  next731 (&temp1408);
        if (  __cond1409 .tag == 0 ) {
            break;
        }
        int32_t  i1917 =  __cond1409 .stuff .Maybe_308_Just_s .field0;
        if ( (  eq1410 ( ( (  subslice372 ) ( (  haystack1913 ) ,  ( (  i32_dash_size298 ) ( (  i1917 ) ) ) ,  (  op_dash_add268 ( ( (  i32_dash_size298 ) ( (  i1917 ) ) ) , ( (  needle1915 ) .f_count ) ) ) ) ) , (  needle1915 ) ) ) ) {
            return ( ( Maybe_1045_Just ) ( ( (  i32_dash_size298 ) ( (  i1917 ) ) ) ) );
        }
    }
    return ( (struct Maybe_1045) { .tag = Maybe_1045_None_t } );
}

static  struct StrView_27   byte_dash_substr_dash_from1426 (    struct StrView_27  s2191 ,    size_t  from2193 ) {
    return ( (struct StrView_27) { .f_contents = ( (  from371 ) ( ( (  s2191 ) .f_contents ) ,  (  from2193 ) ) ) } );
}

static  struct Maybe_1045   search_dash_on_dash_line1406 (   struct env1403* env ,    struct Pos_26  pos4250 ) {
    return ( (  find_dash_slice1407 ) ( ( ( (  byte_dash_substr_dash_from1426 ) ( ( (  line990 ) ( ( ( * ( env->pane4243 ) ) .f_buf ) ,  ( (  pos4250 ) .f_line ) ) ) ,  ( (  i32_dash_size298 ) ( ( (  pos4250 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4247 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1432 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  int32_t   op_dash_mul1433 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  int32_t   mod1431 (    int32_t  l1229 ,    int32_t  d1231 ) {
    int32_t  r1232 = (  op_dash_div1432 ( (  l1229 ) , (  d1231 ) ) );
    int32_t  m1233 = (  op_dash_sub851 ( (  l1229 ) , (  op_dash_mul1433 ( (  r1232 ) , (  d1231 ) ) ) ) );
    if ( (  cmp361 ( (  m1233 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add310 ( (  d1231 ) , (  m1233 ) ) );
    } else {
        return (  m1233 );
    }
}

struct envunion1435 {
    struct Maybe_1045  (*fun) (  struct env1403*  ,    struct Pos_26  );
    struct env1403 env;
};

static  struct Maybe_1401   search_dash_from1402 (    struct Pane_141 *  pane4243 ,    struct Pos_26  pos4245 ,    struct StrView_27  query4247 ) {
    struct env1403 envinst1403 = {
        .pane4243 =  pane4243 ,
        .query4247 =  query4247 ,
    };
    struct envunion1405  temp1404 = ( (struct envunion1405){ .fun = (  struct Maybe_1045  (*) (  struct env1403*  ,    struct Pos_26  ) )search_dash_on_dash_line1406 , .env =  envinst1403 } );
    struct Maybe_1045  dref4251 = ( temp1404.fun ( &temp1404.env ,  (  pos4245 ) ) );
    if ( dref4251.tag == Maybe_1045_Just_t ) {
        struct Pos_26  temp1427 = (  pos4245 );
        temp1427 .  f_bi = (  op_dash_add310 ( ( (  pos4245 ) .f_bi ) , ( (  size_dash_i32232 ) ( ( dref4251 .stuff .Maybe_1045_Just_s .field0 ) ) ) ) );
        struct Pos_26  sel_dash_pos4253 = ( temp1427 );
        struct Pos_26  temp1428 = (  pos4245 );
        temp1428 .  f_bi = (  op_dash_sub851 ( (  op_dash_add310 ( ( (  pos4245 ) .f_bi ) , ( (  size_dash_i32232 ) ( (  op_dash_add268 ( ( dref4251 .stuff .Maybe_1045_Just_s .field0 ) , ( (  num_dash_bytes1023 ) ( (  query4247 ) ) ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4254 = ( temp1428 );
        return ( ( Maybe_1401_Just ) ( ( ( Tuple2_152_Tuple2 ) ( (  sel_dash_pos4253 ) ,  (  cur_dash_pos4254 ) ) ) ) );
    }
    else {
        if ( dref4251.tag == Maybe_1045_None_t ) {
            int32_t  num_dash_lines4255 = ( (  num_dash_lines1030 ) ( ( ( * (  pane4243 ) ) .f_buf ) ) );
            struct RangeIter_728  temp1429 =  into_dash_iter730 ( ( (  to733 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4255 ) ) ) );
            while (true) {
                struct Maybe_308  __cond1430 =  next731 (&temp1429);
                if (  __cond1430 .tag == 0 ) {
                    break;
                }
                int32_t  i4257 =  __cond1430 .stuff .Maybe_308_Just_s .field0;
                int32_t  line4258 = ( (  mod1431 ) ( (  op_dash_add310 ( ( (  pos4245 ) .f_line ) , (  i4257 ) ) ) ,  (  num_dash_lines4255 ) ) );
                struct envunion1435  temp1434 = ( (struct envunion1435){ .fun = (  struct Maybe_1045  (*) (  struct env1403*  ,    struct Pos_26  ) )search_dash_on_dash_line1406 , .env =  envinst1403 } );
                struct Maybe_1045  dref4259 = ( temp1434.fun ( &temp1434.env ,  ( (struct Pos_26) { .f_line = (  line4258 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) );
                if ( dref4259.tag == Maybe_1045_Just_t ) {
                    struct Pos_26  sel_dash_pos4261 = ( (struct Pos_26) { .f_line = (  line4258 ) , .f_bi = ( (  size_dash_i32232 ) ( ( dref4259 .stuff .Maybe_1045_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4262 = ( (struct Pos_26) { .f_line = (  line4258 ) , .f_bi = (  op_dash_sub851 ( ( (  size_dash_i32232 ) ( (  op_dash_add268 ( ( dref4259 .stuff .Maybe_1045_Just_s .field0 ) , ( (  num_dash_bytes1023 ) ( (  query4247 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1401_Just ) ( ( ( Tuple2_152_Tuple2 ) ( (  sel_dash_pos4261 ) ,  (  cur_dash_pos4262 ) ) ) ) );
                }
                else {
                    if ( dref4259.tag == Maybe_1045_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1401) { .tag = Maybe_1401_None_t } );
        }
    }
}

static  enum Unit_8   next_dash_match1400 (    struct Editor_162 *  ed4340 ) {
    struct Maybe_163  dref4341 = ( ( * (  ed4340 ) ) .f_search_dash_term );
    if ( dref4341.tag == Maybe_163_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4341.tag == Maybe_163_Just_t ) {
            struct Maybe_1401  dref4343 = ( (  search_dash_from1402 ) ( ( (  pane1027 ) ( (  ed4340 ) ) ) ,  ( (  max_dash_pos1374 ) ( ( (  pane1027 ) ( (  ed4340 ) ) ) ) ) ,  ( dref4341 .stuff .Maybe_163_Just_s .field0 ) ) );
            if ( dref4343.tag == Maybe_1401_None_t ) {
            }
            else {
                if ( dref4343.tag == Maybe_1401_Just_t ) {
                    ( (  set_dash_cursors984 ) ( ( (  pane1027 ) ( (  ed4340 ) ) ) ,  ( dref4343 .stuff .Maybe_1401_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4343 .stuff .Maybe_1401_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_985_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_1045   find_dash_last_dash_occurence_dash_of_dash_slice1438 (    struct Slice_14  haystack1920 ,    struct Slice_14  needle1922 ) {
    struct Maybe_1045  occ1923 = ( (struct Maybe_1045) { .tag = Maybe_1045_None_t } );
    struct RangeIter_728  temp1439 =  into_dash_iter730 ( ( (  to733 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub851 ( ( (  size_dash_i32232 ) ( ( (  haystack1920 ) .f_count ) ) ) , ( (  size_dash_i32232 ) ( ( (  needle1922 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_308  __cond1440 =  next731 (&temp1439);
        if (  __cond1440 .tag == 0 ) {
            break;
        }
        int32_t  i1925 =  __cond1440 .stuff .Maybe_308_Just_s .field0;
        if ( (  eq1410 ( ( (  subslice372 ) ( (  haystack1920 ) ,  ( (  i32_dash_size298 ) ( (  i1925 ) ) ) ,  (  op_dash_add268 ( ( (  i32_dash_size298 ) ( (  i1925 ) ) ) , ( (  needle1922 ) .f_count ) ) ) ) ) , (  needle1922 ) ) ) ) {
            occ1923 = ( ( Maybe_1045_Just ) ( ( (  i32_dash_size298 ) ( (  i1925 ) ) ) ) );
        }
    }
    return (  occ1923 );
}

static  struct Maybe_1401   search_dash_back1437 (    struct Pane_141 *  pane4265 ,    struct Pos_26  pos4267 ,    struct StrView_27  query4269 ) {
    struct Maybe_1045  dref4270 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1438 ) ( ( ( (  byte_dash_substr429 ) ( ( (  line990 ) ( ( ( * (  pane4265 ) ) .f_buf ) ,  ( (  pos4267 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size298 ) ( ( (  pos4267 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4269 ) .f_contents ) ) );
    if ( dref4270.tag == Maybe_1045_Just_t ) {
        struct Pos_26  temp1441 = (  pos4267 );
        temp1441 .  f_bi = ( (  size_dash_i32232 ) ( ( dref4270 .stuff .Maybe_1045_Just_s .field0 ) ) );
        struct Pos_26  sel_dash_pos4272 = ( temp1441 );
        struct Pos_26  temp1442 = (  pos4267 );
        temp1442 .  f_bi = (  op_dash_sub851 ( ( (  size_dash_i32232 ) ( (  op_dash_add268 ( ( dref4270 .stuff .Maybe_1045_Just_s .field0 ) , ( (  num_dash_bytes1023 ) ( (  query4269 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4273 = ( temp1442 );
        return ( ( Maybe_1401_Just ) ( ( ( Tuple2_152_Tuple2 ) ( (  sel_dash_pos4272 ) ,  (  cur_dash_pos4273 ) ) ) ) );
    }
    else {
        if ( dref4270.tag == Maybe_1045_None_t ) {
            int32_t  num_dash_lines4274 = ( (  num_dash_lines1030 ) ( ( ( * (  pane4265 ) ) .f_buf ) ) );
            struct RangeIter_728  temp1443 =  into_dash_iter730 ( ( (  to733 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4274 ) ) ) );
            while (true) {
                struct Maybe_308  __cond1444 =  next731 (&temp1443);
                if (  __cond1444 .tag == 0 ) {
                    break;
                }
                int32_t  i4276 =  __cond1444 .stuff .Maybe_308_Just_s .field0;
                int32_t  line4277 = ( (  mod1431 ) ( (  op_dash_sub851 ( ( (  pos4267 ) .f_line ) , (  i4276 ) ) ) ,  (  num_dash_lines4274 ) ) );
                struct Maybe_1045  dref4278 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1438 ) ( ( ( (  line990 ) ( ( ( * (  pane4265 ) ) .f_buf ) ,  (  line4277 ) ) ) .f_contents ) ,  ( (  query4269 ) .f_contents ) ) );
                if ( dref4278.tag == Maybe_1045_Just_t ) {
                    struct Pos_26  sel_dash_pos4280 = ( (struct Pos_26) { .f_line = (  line4277 ) , .f_bi = ( (  size_dash_i32232 ) ( ( dref4278 .stuff .Maybe_1045_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4281 = ( (struct Pos_26) { .f_line = (  line4277 ) , .f_bi = (  op_dash_sub851 ( ( (  size_dash_i32232 ) ( (  op_dash_add268 ( ( dref4278 .stuff .Maybe_1045_Just_s .field0 ) , ( (  num_dash_bytes1023 ) ( (  query4269 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1401_Just ) ( ( ( Tuple2_152_Tuple2 ) ( (  sel_dash_pos4280 ) ,  (  cur_dash_pos4281 ) ) ) ) );
                }
                else {
                    if ( dref4278.tag == Maybe_1045_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1401) { .tag = Maybe_1401_None_t } );
        }
    }
}

static  enum Unit_8   prev_dash_match1436 (    struct Editor_162 *  ed4348 ) {
    struct Maybe_163  dref4349 = ( ( * (  ed4348 ) ) .f_search_dash_term );
    if ( dref4349.tag == Maybe_163_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4349.tag == Maybe_163_Just_t ) {
            struct Maybe_1401  dref4351 = ( (  search_dash_back1437 ) ( ( (  pane1027 ) ( (  ed4348 ) ) ) ,  ( (  min_dash_pos1385 ) ( ( (  pane1027 ) ( (  ed4348 ) ) ) ) ) ,  ( dref4349 .stuff .Maybe_163_Just_s .field0 ) ) );
            if ( dref4351.tag == Maybe_1401_None_t ) {
            }
            else {
                if ( dref4351.tag == Maybe_1401_Just_t ) {
                    ( (  set_dash_cursors984 ) ( ( (  pane1027 ) ( (  ed4348 ) ) ) ,  ( dref4351 .stuff .Maybe_1401_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4351 .stuff .Maybe_1401_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_985_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   begin_dash_changeset1448 (   struct env117* env ,    struct TextBuf_99 *  self3860 ,    struct Cursors_33  before_dash_cursors3862 ) {
    struct Actions_100 *  actions3863 = ( & ( ( * (  self3860 ) ) .f_actions ) );
    ( (  trim_dash_actions1063 ) ( (  actions3863 ) ) );
    ( (  flush_dash_insert_dash_action1037 ) ( (  self3860 ) ) );
    ( (  assert523 ) ( (  eq1133 ( ( ( ( * (  self3860 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_101_NoChangeset ) ) ) ,  ( (  from_dash_string256 ) ( ( "expect no changeset bruh" ) ,  ( 24 ) ) ) ) );
    enum CAllocator_10  al3864 = ( ( * (  self3860 ) ) .f_al );
    struct Changeset_32  temp1449 = ( (struct Changeset_32) { .f_parts = ( (  mk1162 ) ( (  al3864 ) ) ) , .f_before_dash_cursors = (  before_dash_cursors3862 ) } );
    struct Changeset_32 *  changeset3865 = ( &temp1449 );
    struct envunion118  temp1450 = ( (struct envunion118){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1173 , .env =  env->envinst28 } );
    ( temp1450.fun ( &temp1450.env ,  ( & ( ( * (  actions3863 ) ) .f_list ) ) ,  ( * (  changeset3865 ) ) ) );
    (*  actions3863 ) .f_input_dash_changeset = ( ChangesetInputType_101_CustomChangeset );
    (*  actions3863 ) .f_cur = (  op_dash_add268 ( ( ( * (  actions3863 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_1089   head1456 (    struct List_23  it1142 ) {
    struct SliceIter_1082  temp1457 = ( (  into_dash_iter1084 ) ( (  it1142 ) ) );
    return ( (  next1090 ) ( ( &temp1457 ) ) );
}

static  bool   null1455 (    struct List_23  it1151 ) {
    struct Maybe_1089  dref1152 = ( (  head1456 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_1089_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   end_dash_changeset1454 (    struct TextBuf_99 *  self3868 ) {
    ( (  flush_dash_insert_dash_action1037 ) ( (  self3868 ) ) );
    struct Actions_100 *  actions3869 = ( & ( ( * (  self3868 ) ) .f_actions ) );
    if ( ( (  null1455 ) ( ( ( * ( (  last_dash_ptr1135 ) ( ( (  to_dash_slice1137 ) ( ( ( * (  actions3869 ) ) .f_list ) ) ) ) ) ) .f_parts ) ) ) ) {
        (*  actions3869 ) .f_cur = (  op_dash_sub348 ( ( ( * (  actions3869 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
        (*  actions3869 ) .f_input_dash_changeset = ( ChangesetInputType_101_NoChangeset );
        ( (  trim_dash_actions1063 ) ( (  actions3869 ) ) );
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_34   fmap_dash_maybe1459 (    struct Maybe_34  x1275 ,    struct Pos_26 (*  fun1277 )(    struct Pos_26  ) ) {
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

static  struct Pos_26   lam1460 (    struct Pos_26  sel4217 ) {
    struct Pos_26  temp1461 = (  sel4217 );
    temp1461 .  f_bi = (  op_dash_add310 ( ( (  sel4217 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( temp1461 );
}

static  enum Unit_8   indent_dash_selection1446 (   struct env139* env ,    struct Pane_141 *  self4213 ) {
    struct envunion144  temp1447 = ( (struct envunion144){ .fun = (  enum Unit_8  (*) (  struct env117*  ,    struct TextBuf_99 *  ,    struct Cursors_33  ) )begin_dash_changeset1448 , .env =  env->envinst117 } );
    ( temp1447.fun ( &temp1447.env ,  ( ( * (  self4213 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4213 ) ) .f_cursor ) , .f_sel = ( ( * (  self4213 ) ) .f_sel ) } ) ) );
    struct RangeIter_728  temp1451 =  into_dash_iter730 ( ( (  to733 ) ( ( ( (  min_dash_pos1385 ) ( (  self4213 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1374 ) ( (  self4213 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_308  __cond1452 =  next731 (&temp1451);
        if (  __cond1452 .tag == 0 ) {
            break;
        }
        int32_t  line4215 =  __cond1452 .stuff .Maybe_308_Just_s .field0;
        struct envunion140  temp1453 = ( (struct envunion140){ .fun = (  enum Unit_8  (*) (  struct env137*  ,    struct Pane_141 *  ,    int32_t  ) )indent_dash_at1204 , .env =  env->envinst137 } );
        ( temp1453.fun ( &temp1453.env ,  (  self4213 ) ,  (  line4215 ) ) );
    }
    ( (  end_dash_changeset1454 ) ( ( ( * (  self4213 ) ) .f_buf ) ) );
    struct Pos_26  temp1458 = ( ( * (  self4213 ) ) .f_cursor );
    temp1458 .  f_bi = (  op_dash_add310 ( ( ( ( * (  self4213 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( (  set_dash_cursors984 ) ( (  self4213 ) ,  ( temp1458 ) ,  ( (  fmap_dash_maybe1459 ) ( ( ( * (  self4213 ) ) .f_sel ) ,  (  lam1460 ) ) ) ,  ( CursorMovement_985_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

struct env1472 {
    ;
    bool  last_dash_char_dash_was_dash_tab4222;
    ;
};

struct envunion1473 {
    struct Pos_26  (*fun) (  struct env1472*  ,    struct Pos_26  );
    struct env1472 env;
};

static  struct Maybe_34   fmap_dash_maybe1471 (    struct Maybe_34  x1275 ,   struct envunion1473  fun1277 ) {
    struct Maybe_34  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_34_None_t ) {
        return ( (struct Maybe_34) { .tag = Maybe_34_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_34_Just_t ) {
            struct envunion1473  temp1474 = (  fun1277 );
            return ( ( Maybe_34_Just ) ( ( temp1474.fun ( &temp1474.env ,  ( dref1278 .stuff .Maybe_34_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_26   lam1475 (   struct env1472* env ,    struct Pos_26  sel4226 ) {
    struct Pos_26  temp1476 = (  sel4226 );
    temp1476 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4222 ) ? (  op_dash_sub851 ( ( (  sel4226 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( (  sel4226 ) .f_bi ) );
    return ( temp1476 );
}

static  enum Unit_8   dedent_dash_selection1463 (   struct env145* env ,    struct Pane_141 *  self4220 ) {
    struct envunion147  temp1464 = ( (struct envunion147){ .fun = (  enum Unit_8  (*) (  struct env117*  ,    struct TextBuf_99 *  ,    struct Cursors_33  ) )begin_dash_changeset1448 , .env =  env->envinst117 } );
    ( temp1464.fun ( &temp1464.env ,  ( ( * (  self4220 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4220 ) ) .f_cursor ) , .f_sel = ( ( * (  self4220 ) ) .f_sel ) } ) ) );
    struct Pos_26  temp1465 = ( (  min_dash_pos1385 ) ( (  self4220 ) ) );
    temp1465 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4221 = (  eq447 ( ( (  char_dash_at1236 ) ( (  self4220 ) ,  ( temp1465 ) ) ) , ( (  from_dash_charlike257 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_26  temp1466 = ( (  max_dash_pos1374 ) ( (  self4220 ) ) );
    temp1466 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4222 = (  eq447 ( ( (  char_dash_at1236 ) ( (  self4220 ) ,  ( temp1466 ) ) ) , ( (  from_dash_charlike257 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_728  temp1467 =  into_dash_iter730 ( ( (  to733 ) ( ( ( (  min_dash_pos1385 ) ( (  self4220 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1374 ) ( (  self4220 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_308  __cond1468 =  next731 (&temp1467);
        if (  __cond1468 .tag == 0 ) {
            break;
        }
        int32_t  line4224 =  __cond1468 .stuff .Maybe_308_Just_s .field0;
        if ( (  eq447 ( ( (  char_dash_at1236 ) ( (  self4220 ) ,  ( (struct Pos_26) { .f_line = (  line4224 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike257 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion146  temp1469 = ( (struct envunion146){ .fun = (  struct Maybe_128  (*) (  struct env112*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_128  ) )change1062 , .env =  env->envinst112 } );
            ( temp1469.fun ( &temp1469.env ,  ( ( * (  self4220 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4224 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4224 ) , .f_bi = (  from_dash_integral56 ( 1 ) ) } ) ,  ( (  from_dash_string256 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_128) { .tag = Maybe_128_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1454 ) ( ( ( * (  self4220 ) ) .f_buf ) ) );
    struct Pos_26  temp1470 = ( ( * (  self4220 ) ) .f_cursor );
    temp1470 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4221 ) ? (  op_dash_sub851 ( ( ( ( * (  self4220 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( ( ( * (  self4220 ) ) .f_cursor ) .f_bi ) );
    struct env1472 envinst1472 = {
        .last_dash_char_dash_was_dash_tab4222 =  last_dash_char_dash_was_dash_tab4222 ,
    };
    ( (  set_dash_cursors984 ) ( (  self4220 ) ,  ( temp1470 ) ,  ( (  fmap_dash_maybe1471 ) ( ( ( * (  self4220 ) ) .f_sel ) ,  ( (struct envunion1473){ .fun = (  struct Pos_26  (*) (  struct env1472*  ,    struct Pos_26  ) )lam1475 , .env =  envinst1472 } ) ) ) ,  ( CursorMovement_985_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  bool   lam1480 (    struct Char_65  c4167 ) {
    return ( ( !  eq447 ( (  c4167 ) , ( (  from_dash_charlike257 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) && ( (  is_dash_whitespace1235 ) ( (  c4167 ) ) ) );
}

static  struct Maybe_1401   line_dash_begins_dash_with_dash_comment1479 (    struct Pane_141 *  self4161 ,    int32_t  line4163 ) {
    int32_t  indent4164 = ( (  indent_dash_at_dash_line1039 ) ( (  self4161 ) ,  (  line4163 ) ) );
    if ( (  eq447 ( ( (  char_dash_at1236 ) ( (  self4161 ) ,  ( (  mk342 ) ( (  line4163 ) ,  (  indent4164 ) ) ) ) ) , ( (  from_dash_charlike257 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
        int32_t  i4165 = (  op_dash_add310 ( (  indent4164 ) , (  from_dash_integral56 ( 1 ) ) ) );
        while ( ( (  lam1480 ) ( ( (  char_dash_at1236 ) ( (  self4161 ) ,  ( (  mk342 ) ( (  line4163 ) ,  (  i4165 ) ) ) ) ) ) ) ) {
            i4165 = (  op_dash_add310 ( (  i4165 ) , (  from_dash_integral56 ( 1 ) ) ) );
        }
        return ( ( Maybe_1401_Just ) ( ( ( Tuple2_152_Tuple2 ) ( ( (  mk342 ) ( (  line4163 ) ,  (  indent4164 ) ) ) ,  ( (  mk342 ) ( (  line4163 ) ,  (  i4165 ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_1401) { .tag = Maybe_1401_None_t } );
    }
}

static  enum Unit_8   toggle_dash_comment1478 (   struct env150* env ,    struct Pane_141 *  self4235 ) {
    struct Pos_26  cur4236 = ( ( * (  self4235 ) ) .f_cursor );
    struct Char_65  comment_dash_str4237 = ( (  from_dash_charlike257 ) ( ( "#" ) ,  ( 1 ) ) );
    struct Maybe_1401  dref4238 = ( (  line_dash_begins_dash_with_dash_comment1479 ) ( (  self4235 ) ,  ( (  cur4236 ) .f_line ) ) );
    if ( dref4238.tag == Maybe_1401_None_t ) {
        ( (  move_dash_to_dash_beginning_dash_indented1038 ) ( (  self4235 ) ) );
        struct envunion153  temp1481 = ( (struct envunion153){ .fun = (  enum Unit_8  (*) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1060 , .env =  env->envinst126 } );
        ( temp1481.fun ( &temp1481.env ,  (  self4235 ) ,  ( (  from_dash_string256 ) ( ( "# " ) ,  ( 2 ) ) ) ) );
    }
    else {
        if ( dref4238.tag == Maybe_1401_Just_t ) {
            struct envunion151  temp1482 = ( (struct envunion151){ .fun = (  enum Unit_8  (*) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_152  ,    struct StrView_27  ) )replace_dash_selection1305 , .env =  env->envinst135 } );
            ( temp1482.fun ( &temp1482.env ,  (  self4235 ) ,  ( ( Tuple2_152_Tuple2 ) ( ( dref4238 .stuff .Maybe_1401_Just_s .field0 .field0 ) ,  ( dref4238 .stuff .Maybe_1401_Just_s .field0 .field1 ) ) ) ,  ( (  from_dash_string256 ) ( ( "" ) ,  ( 0 ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   handle_dash_normal_dash_key982 (   struct env165* env ,    struct Editor_162 *  ed4356 ,    struct Key_178  key4358 ) {
    struct Key_178  dref4359 = (  key4358 );
    if ( dref4359.tag == Key_178_Char_t ) {
        if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4356 ) .f_running = ( false );
        } else {
            if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left983 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ) );
            } else {
                if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right1028 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ) );
                } else {
                    if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down1031 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                    } else {
                        if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up1035 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                        } else {
                            if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode1036 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ,  ( Mode_142_Insert ) ) );
                            } else {
                                if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "I" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  move_dash_to_dash_beginning_dash_indented1038 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ) );
                                    ( (  set_dash_mode1036 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ,  ( Mode_142_Insert ) ) );
                                } else {
                                    if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  move_dash_to_dash_end1057 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ) );
                                        ( (  set_dash_mode1036 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ,  ( Mode_142_Insert ) ) );
                                    } else {
                                        if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                            struct Pane_141 *  pane4361 = ( (  pane1027 ) ( (  ed4356 ) ) );
                                            int32_t  indent4362 = ( (  indent_dash_at_dash_line1039 ) ( (  pane4361 ) ,  ( ( ( * (  pane4361 ) ) .f_cursor ) .f_line ) ) );
                                            ( (  move_dash_to_dash_end1057 ) ( (  pane4361 ) ) );
                                            struct envunion170  temp1059 = ( (struct envunion170){ .fun = (  enum Unit_8  (*) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1060 , .env =  env->envinst126 } );
                                            ( temp1059.fun ( &temp1059.env ,  (  pane4361 ) ,  ( (  from_dash_charlike1123 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                            ( (  move_dash_right1028 ) ( (  pane4361 ) ) );
                                            struct envunion169  temp1199 = ( (struct envunion169){ .fun = (  enum Unit_8  (*) (  struct env148*  ,    struct Pane_141 *  ,    int32_t  ) )indent_dash_at_dash_current1200 , .env =  env->envinst148 } );
                                            ( temp1199.fun ( &temp1199.env ,  (  pane4361 ) ,  (  indent4362 ) ) );
                                            ( (  set_dash_mode1036 ) ( (  pane4361 ) ,  ( Mode_142_Insert ) ) );
                                        } else {
                                            if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct Pane_141 *  pane4363 = ( (  pane1027 ) ( (  ed4356 ) ) );
                                                int32_t  indent4364 = ( (  indent_dash_at_dash_line1039 ) ( (  pane4363 ) ,  ( ( ( * (  pane4363 ) ) .f_cursor ) .f_line ) ) );
                                                ( (  move_dash_to_dash_beginning1206 ) ( (  pane4363 ) ) );
                                                struct envunion1209  temp1208 = ( (struct envunion1209){ .fun = (  enum Unit_8  (*) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1060 , .env =  env->envinst126 } );
                                                ( temp1208.fun ( &temp1208.env ,  (  pane4363 ) ,  ( (  from_dash_charlike1123 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                                struct envunion1211  temp1210 = ( (struct envunion1211){ .fun = (  enum Unit_8  (*) (  struct env148*  ,    struct Pane_141 *  ,    int32_t  ) )indent_dash_at_dash_current1200 , .env =  env->envinst148 } );
                                                ( temp1210.fun ( &temp1210.env ,  (  pane4363 ) ,  (  indent4364 ) ) );
                                                ( (  set_dash_mode1036 ) ( (  pane4363 ) ,  ( Mode_142_Insert ) ) );
                                            } else {
                                                if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  advance_dash_word1212 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ,  ( MoveDirection_1213_MoveFwd ) ,  ( MoveTarget_1214_NextWordStart ) ) );
                                                } else {
                                                    if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  advance_dash_word1212 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ,  ( MoveDirection_1213_MoveFwd ) ,  ( MoveTarget_1214_NextWordEnd ) ) );
                                                    } else {
                                                        if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  advance_dash_word1212 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ,  ( MoveDirection_1213_MoveBwd ) ,  ( MoveTarget_1214_NextWordEnd ) ) );
                                                        } else {
                                                            if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion166  temp1248 = ( (struct envunion166){ .fun = (  enum Unit_8  (*) (  struct env133*  ,    struct Pane_141 *  ) )redo1249 , .env =  env->envinst133 } );
                                                                ( temp1248.fun ( &temp1248.env ,  ( (  pane1027 ) ( (  ed4356 ) ) ) ) );
                                                            } else {
                                                                if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct envunion174  temp1273 = ( (struct envunion174){ .fun = (  enum Unit_8  (*) (  struct env131*  ,    struct Pane_141 *  ) )undo1274 , .env =  env->envinst131 } );
                                                                    ( temp1273.fun ( &temp1273.env ,  ( (  pane1027 ) ( (  ed4356 ) ) ) ) );
                                                                } else {
                                                                    if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct envunion171  temp1291 = ( (struct envunion171){ .fun = (  enum Unit_8  (*) (  struct env154*  ,    struct Editor_162 *  ) )copy_dash_selection_dash_to_dash_clipboard1292 , .env =  env->envinst154 } );
                                                                        ( temp1291.fun ( &temp1291.env ,  (  ed4356 ) ) );
                                                                        struct envunion168  temp1304 = ( (struct envunion168){ .fun = (  enum Unit_8  (*) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_152  ,    struct StrView_27  ) )replace_dash_selection1305 , .env =  env->envinst135 } );
                                                                        ( temp1304.fun ( &temp1304.env ,  ( (  pane1027 ) ( (  ed4356 ) ) ) ,  ( (  selection1293 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ) ) ,  ( (  from_dash_string256 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                        ( (  set_dash_mode1036 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ,  ( Mode_142_Normal ) ) );
                                                                    } else {
                                                                        if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct envunion1313  temp1312 = ( (struct envunion1313){ .fun = (  enum Unit_8  (*) (  struct env154*  ,    struct Editor_162 *  ) )copy_dash_selection_dash_to_dash_clipboard1292 , .env =  env->envinst154 } );
                                                                            ( temp1312.fun ( &temp1312.env ,  (  ed4356 ) ) );
                                                                            struct envunion1315  temp1314 = ( (struct envunion1315){ .fun = (  enum Unit_8  (*) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_152  ,    struct StrView_27  ) )replace_dash_selection1305 , .env =  env->envinst135 } );
                                                                            ( temp1314.fun ( &temp1314.env ,  ( (  pane1027 ) ( (  ed4356 ) ) ) ,  ( (  selection1293 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ) ) ,  ( (  from_dash_string256 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                            ( (  set_dash_mode1036 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ,  ( Mode_142_Insert ) ) );
                                                                        } else {
                                                                            if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                struct envunion1317  temp1316 = ( (struct envunion1317){ .fun = (  enum Unit_8  (*) (  struct env154*  ,    struct Editor_162 *  ) )copy_dash_selection_dash_to_dash_clipboard1292 , .env =  env->envinst154 } );
                                                                                ( temp1316.fun ( &temp1316.env ,  (  ed4356 ) ) );
                                                                                size_t  bytes_dash_yanked4365 = ( (  num_dash_bytes1023 ) ( ( (  or_dash_else419 ) ( ( ( * (  ed4356 ) ) .f_clipboard ) ,  ( (  from_dash_string256 ) ( ( "" ) ,  ( 0 ) ) ) ) ) ) );
                                                                                struct envunion175  temp1318 = ( (struct envunion175){ .fun = (  enum Unit_8  (*) (  struct env158*  ,    struct Editor_162 *  ,    struct StrConcat_74  ) )set_dash_msg1319 , .env =  env->envinst158 } );
                                                                                ( temp1318.fun ( &temp1318.env ,  (  ed4356 ) ,  ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4365 ) ) ) ,  ( (  from_dash_string256 ) ( ( " bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    struct env1369 envinst1369 = {
                                                                                        .ed4356 =  ed4356 ,
                                                                                        .envinst135 = env->envinst135 ,
                                                                                    };
                                                                                    ( (  if_dash_just1368 ) ( ( ( * (  ed4356 ) ) .f_clipboard ) ,  ( (struct envunion1371){ .fun = (  enum Unit_8  (*) (  struct env1369*  ,    struct StrView_27  ) )lam1373 , .env =  envinst1369 } ) ) );
                                                                                } else {
                                                                                    if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        struct env1380 envinst1380 = {
                                                                                            .ed4356 =  ed4356 ,
                                                                                            .envinst135 = env->envinst135 ,
                                                                                        };
                                                                                        ( (  if_dash_just1379 ) ( ( ( * (  ed4356 ) ) .f_clipboard ) ,  ( (struct envunion1382){ .fun = (  enum Unit_8  (*) (  struct env1380*  ,    struct StrView_27  ) )lam1384 , .env =  envinst1380 } ) ) );
                                                                                    } else {
                                                                                        if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            struct env1389 envinst1389 = {
                                                                                                .ed4356 =  ed4356 ,
                                                                                                .envinst135 = env->envinst135 ,
                                                                                            };
                                                                                            ( (  if_dash_just1388 ) ( ( ( * (  ed4356 ) ) .f_clipboard ) ,  ( (struct envunion1391){ .fun = (  enum Unit_8  (*) (  struct env1389*  ,    struct StrView_27  ) )lam1393 , .env =  envinst1389 } ) ) );
                                                                                        } else {
                                                                                            if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  expand1395 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ) );
                                                                                            } else {
                                                                                                if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  set_dash_mode1036 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ,  ( Mode_142_Select ) ) );
                                                                                                    if ( ( (  is_dash_none1399 ) ( ( ( ( * (  ed4356 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                                        (*  ed4356 ) .f_pane .f_sel = ( ( Maybe_34_Just ) ( ( ( ( * (  ed4356 ) ) .f_pane ) .f_cursor ) ) );
                                                                                                    }
                                                                                                } else {
                                                                                                    if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        (*  ed4356 ) .f_mode = ( ( EditorMode_164_Cmd ) ( ( ( * ( (  pane1027 ) ( (  ed4356 ) ) ) ) .f_cursor ) ,  ( (  mk1323 ) ( ( ( * (  ed4356 ) ) .f_al ) ) ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            (*  ed4356 ) .f_mode = ( ( EditorMode_164_Search ) ( ( ( * ( (  pane1027 ) ( (  ed4356 ) ) ) ) .f_cursor ) ,  ( (  mk1323 ) ( ( ( * (  ed4356 ) ) .f_al ) ) ) ) );
                                                                                                        } else {
                                                                                                            if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                ( (  next_dash_match1400 ) ( (  ed4356 ) ) );
                                                                                                            } else {
                                                                                                                if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                    ( (  prev_dash_match1436 ) ( (  ed4356 ) ) );
                                                                                                                } else {
                                                                                                                    if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( ">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                        struct envunion167  temp1445 = ( (struct envunion167){ .fun = (  enum Unit_8  (*) (  struct env139*  ,    struct Pane_141 *  ) )indent_dash_selection1446 , .env =  env->envinst139 } );
                                                                                                                        ( temp1445.fun ( &temp1445.env ,  ( (  pane1027 ) ( (  ed4356 ) ) ) ) );
                                                                                                                    } else {
                                                                                                                        if ( (  eq825 ( ( dref4359 .stuff .Key_178_Char_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                            struct envunion173  temp1462 = ( (struct envunion173){ .fun = (  enum Unit_8  (*) (  struct env145*  ,    struct Pane_141 *  ) )dedent_dash_selection1463 , .env =  env->envinst145 } );
                                                                                                                            ( temp1462.fun ( &temp1462.env ,  ( (  pane1027 ) ( (  ed4356 ) ) ) ) );
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
        if ( dref4359.tag == Key_178_Escape_t ) {
            ( (  set_dash_mode1036 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ,  ( Mode_142_Normal ) ) );
        }
        else {
            if ( dref4359.tag == Key_178_Ctrl_t ) {
                if ( (  eq825 ( ( dref4359 .stuff .Key_178_Ctrl_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                    struct envunion172  temp1477 = ( (struct envunion172){ .fun = (  enum Unit_8  (*) (  struct env150*  ,    struct Pane_141 *  ) )toggle_dash_comment1478 , .env =  env->envinst150 } );
                    ( temp1477.fun ( &temp1477.env ,  ( (  pane1027 ) ( (  ed4356 ) ) ) ) );
                } else {
                    if ( (  eq825 ( ( dref4359 .stuff .Key_178_Ctrl_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_up1035 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
                    } else {
                        if ( (  eq825 ( ( dref4359 .stuff .Key_178_Ctrl_s .field0 ) , ( (  from_dash_charlike826 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_down1031 ) ( ( (  pane1027 ) ( (  ed4356 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
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

struct envunion1484 {
    enum Unit_8  (*fun) (  struct env165*  ,    struct Editor_162 *  ,    struct Key_178  );
    struct env165 env;
};

struct envunion1486 {
    enum Unit_8  (*fun) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  );
    struct env126 env;
};

static  enum Unit_8   backspace1489 (   struct env129* env ,    struct Pane_141 *  self4176 ) {
    struct Pos_26  prev_dash_cur4177 = ( ( * (  self4176 ) ) .f_cursor );
    ( (  move_dash_left983 ) ( (  self4176 ) ) );
    struct envunion130  temp1490 = ( (struct envunion130){ .fun = (  struct Maybe_128  (*) (  struct env112*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_128  ) )change1062 , .env =  env->envinst112 } );
    ( temp1490.fun ( &temp1490.env ,  ( ( * (  self4176 ) ) .f_buf ) ,  ( ( * (  self4176 ) ) .f_cursor ) ,  (  prev_dash_cur4177 ) ,  ( (  from_dash_string256 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_128) { .tag = Maybe_128_None_t } ) ) );
    return ( Unit_8_Unit );
}

struct Array_1492 {
    char _arr [1];
};

static  char *   cast1493 (    struct Array_1492 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_841   as_dash_slice1491 (    struct Array_1492 *  arr2273 ) {
    return ( (struct Slice_841) { .f_ptr = ( (  cast1493 ) ( (  arr2273 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1492   from_dash_listlike1495 (    struct Array_1492  self330 ) {
    return (  self330 );
}

struct Scanner_1499 {
    struct StrView_27  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_1499   mk_dash_from_dash_strview1501 (    struct StrView_27  s3187 ) {
    return ( (struct Scanner_1499) { .f_s = (  s3187 ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct TakeWhile_1506 {
    struct StrViewIter_649  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1505 {
    struct TakeWhile_1506  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1505 Map_1505_Map (  struct TakeWhile_1506  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1505 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1505   into_dash_iter1508 (    struct Map_1505  self796 ) {
    return (  self796 );
}

static  struct Maybe_652   next1510 (    struct TakeWhile_1506 *  self964 ) {
    struct Maybe_652  mx965 = ( (  next653 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_652  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_652_None_t ) {
        return ( (struct Maybe_652) { .tag = Maybe_652_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_652_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_652_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_652_Just ) ( ( dref966 .stuff .Maybe_652_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_652) { .tag = Maybe_652_None_t } );
            }
        }
    }
}

static  struct Maybe_1045   next1509 (    struct Map_1505 *  dref798 ) {
    struct Maybe_652  dref801 = ( (  next1510 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_652_None_t ) {
        return ( (struct Maybe_1045) { .tag = Maybe_1045_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_652_Just_t ) {
            return ( ( Maybe_1045_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_652_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1507 (    struct Map_1505  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1505  it1099 = ( (  into_dash_iter1508 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1045  dref1100 = ( (  next1509 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1045_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1045_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1045_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1511 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1511);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1512;
    return (  temp1512 );
}

static  size_t   lam1513 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add268 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1504 (    struct Map_1505  it1110 ) {
    return ( (  reduce1507 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1513 ) ) );
}

static  struct TakeWhile_1506   into_dash_iter1515 (    struct TakeWhile_1506  self961 ) {
    return (  self961 );
}

static  struct Map_1505   map1514 (    struct TakeWhile_1506  iterable805 ,    size_t (*  fun807 )(    struct Char_65  ) ) {
    struct TakeWhile_1506  it808 = ( (  into_dash_iter1515 ) ( (  iterable805 ) ) );
    return ( ( Map_1505_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1506   take_dash_while1516 (    struct StrViewIter_649  it970 ,    bool (*  pred972 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1506) { .f_it = ( (  into_dash_iter651 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1517 (    struct Char_65  c2203 ) {
    return ( (  c2203 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1503 (    struct StrView_27  self2199 ,    bool (*  fun2201 )(    struct Char_65  ) ) {
    size_t  bi2204 = ( (  sum1504 ) ( ( (  map1514 ) ( ( (  take_dash_while1516 ) ( ( (  chars654 ) ( (  self2199 ) ) ) ,  (  fun2201 ) ) ) ,  (  lam1517 ) ) ) ) );
    return ( (  byte_dash_substr429 ) ( (  self2199 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2204 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1502 (    struct Scanner_1499 *  sc3259 ,    bool (*  fun3261 )(    struct Char_65  ) ) {
    struct StrView_27  s3262 = ( (  take_dash_while1503 ) ( ( ( * (  sc3259 ) ) .f_s ) ,  (  fun3261 ) ) );
    (*  sc3259 ) .f_s = ( (  byte_dash_substr_dash_from1426 ) ( ( ( * (  sc3259 ) ) .f_s ) ,  ( (  num_dash_bytes1023 ) ( (  s3262 ) ) ) ) );
    return (  s3262 );
}

static  bool   is_dash_not_dash_whitespace1518 (    struct Char_65  c2383 ) {
    return ( ! ( (  is_dash_whitespace1235 ) ( (  c2383 ) ) ) );
}

struct TakeWhile_1524 {
    struct StrViewIter_649  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1523 {
    struct TakeWhile_1524  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1523 Map_1523_Map (  struct TakeWhile_1524  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1523 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1523   into_dash_iter1526 (    struct Map_1523  self796 ) {
    return (  self796 );
}

static  struct Maybe_652   next1528 (    struct TakeWhile_1524 *  self964 ) {
    struct Maybe_652  mx965 = ( (  next653 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_652  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_652_None_t ) {
        return ( (struct Maybe_652) { .tag = Maybe_652_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_652_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_652_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_652_Just ) ( ( dref966 .stuff .Maybe_652_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_652) { .tag = Maybe_652_None_t } );
            }
        }
    }
}

static  struct Maybe_1045   next1527 (    struct Map_1523 *  dref798 ) {
    struct Maybe_652  dref801 = ( (  next1528 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_652_None_t ) {
        return ( (struct Maybe_1045) { .tag = Maybe_1045_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_652_Just_t ) {
            return ( ( Maybe_1045_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_652_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1525 (    struct Map_1523  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1523  it1099 = ( (  into_dash_iter1526 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1045  dref1100 = ( (  next1527 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1045_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1045_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1045_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1529 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1529);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1530;
    return (  temp1530 );
}

static  size_t   lam1531 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add268 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1522 (    struct Map_1523  it1110 ) {
    return ( (  reduce1525 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1531 ) ) );
}

static  struct TakeWhile_1524   into_dash_iter1533 (    struct TakeWhile_1524  self961 ) {
    return (  self961 );
}

static  struct Map_1523   map1532 (    struct TakeWhile_1524  iterable805 ,    size_t (*  fun807 )(    struct Char_65  ) ) {
    struct TakeWhile_1524  it808 = ( (  into_dash_iter1533 ) ( (  iterable805 ) ) );
    return ( ( Map_1523_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1524   take_dash_while1534 (    struct StrViewIter_649  it970 ,    bool (*  pred972 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1524) { .f_it = ( (  into_dash_iter651 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1535 (    struct Char_65  c2203 ) {
    return ( (  c2203 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1521 (    struct StrView_27  self2199 ,    bool (*  fun2201 )(    struct Char_65  ) ) {
    size_t  bi2204 = ( (  sum1522 ) ( ( (  map1532 ) ( ( (  take_dash_while1534 ) ( ( (  chars654 ) ( (  self2199 ) ) ) ,  (  fun2201 ) ) ) ,  (  lam1535 ) ) ) ) );
    return ( (  byte_dash_substr429 ) ( (  self2199 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2204 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1520 (    struct Scanner_1499 *  sc3259 ,    bool (*  fun3261 )(    struct Char_65  ) ) {
    struct StrView_27  s3262 = ( (  take_dash_while1521 ) ( ( ( * (  sc3259 ) ) .f_s ) ,  (  fun3261 ) ) );
    (*  sc3259 ) .f_s = ( (  byte_dash_substr_dash_from1426 ) ( ( ( * (  sc3259 ) ) .f_s ) ,  ( (  num_dash_bytes1023 ) ( (  s3262 ) ) ) ) );
    return (  s3262 );
}

static  enum Unit_8   drop_dash_str_dash_while1519 (    struct Scanner_1499 *  sc3265 ,    bool (*  fun3267 )(    struct Char_65  ) ) {
    ( (  take_dash_str_dash_while1520 ) ( (  sc3265 ) ,  (  fun3267 ) ) );
    return ( Unit_8_Unit );
}

static  bool   eq1536 (    struct StrView_27  l2210 ,    struct StrView_27  r2212 ) {
    return (  eq1410 ( ( (  l2210 ) .f_contents ) , ( (  r2212 ) .f_contents ) ) );
}

static  enum Unit_8   undefined1538 (  ) {
    enum Unit_8  temp1539;
    return (  temp1539 );
}

static  enum Unit_8   todo1537 (  ) {
    ( (  print1241 ) ( ( (  from_dash_string256 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( (  undefined1538 ) ( ) );
}

struct env1542 {
    bool (*  fun1126 )(    struct Char_65  );
};

struct envunion1543 {
    bool  (*fun) (  struct env1542*  ,    struct Char_65  ,    bool  );
    struct env1542 env;
};

static  bool   reduce1541 (    struct StrView_27  iterable1093 ,    bool  base1095 ,   struct envunion1543  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct StrViewIter_649  it1099 = ( (  into_dash_iter655 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_652  dref1100 = ( (  next653 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_652_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_652_Just_t ) {
                struct envunion1543  temp1544 = (  fun1097 );
                x1098 = ( temp1544.fun ( &temp1544.env ,  ( dref1100 .stuff .Maybe_652_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1545 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1545);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1546;
    return (  temp1546 );
}

static  bool   lam1547 (   struct env1542* env ,    struct Char_65  e1128 ,    bool  x1130 ) {
    return ( ( ( env->fun1126 ) ( (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1540 (    struct StrView_27  it1124 ,    bool (*  fun1126 )(    struct Char_65  ) ) {
    struct env1542 envinst1542 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1541 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1543){ .fun = (  bool  (*) (  struct env1542*  ,    struct Char_65  ,    bool  ) )lam1547 , .env =  envinst1542 } ) ) );
}

struct env1556 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2765;
};

struct envunion1557 {
    enum Unit_8  (*fun) (  struct env1556*  ,    struct Char_65  );
    struct env1556 env;
};

static  enum Unit_8   for_dash_each1555 (    struct StrViewIter_649  iterable1074 ,   struct envunion1557  fun1076 ) {
    struct StrViewIter_649  temp1558 = ( (  into_dash_iter651 ) ( (  iterable1074 ) ) );
    struct StrViewIter_649 *  it1077 = ( &temp1558 );
    while ( ( true ) ) {
        struct Maybe_652  dref1078 = ( (  next653 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_652_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_652_Just_t ) {
                struct envunion1557  temp1559 = (  fun1076 );
                ( temp1559.fun ( &temp1559.env ,  ( dref1078 .stuff .Maybe_652_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1560 (   struct env1556* env ,    struct Char_65  c2769 ) {
    struct envunion64  temp1561 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1356 , .env =  env->envinst60 } );
    return ( temp1561.fun ( &temp1561.env ,  ( env->builder2765 ) ,  (  c2769 ) ) );
}

static  enum Unit_8   write1554 (   struct env63* env ,    struct StrBuilder_62 *  builder2765 ,    struct StrView_27  s2767 ) {
    struct env1556 envinst1556 = {
        .envinst60 = env->envinst60 ,
        .builder2765 =  builder2765 ,
    };
    ( (  for_dash_each1555 ) ( ( (  chars654 ) ( (  s2767 ) ) ) ,  ( (struct envunion1557){ .fun = (  enum Unit_8  (*) (  struct env1556*  ,    struct Char_65  ) )lam1560 , .env =  envinst1556 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1551 (   struct env69* env ,    struct StrView_27  s2823 ,    enum CAllocator_10  al2825 ) {
    struct StrBuilder_62  temp1552 = ( (  mk1323 ) ( (  al2825 ) ) );
    struct StrBuilder_62 *  sb2826 = ( &temp1552 );
    struct envunion70  temp1553 = ( (struct envunion70){ .fun = (  enum Unit_8  (*) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrView_27  ) )write1554 , .env =  env->envinst63 } );
    ( temp1553.fun ( &temp1553.env ,  (  sb2826 ) ,  (  s2823 ) ) );
    struct envunion71  temp1562 = ( (struct envunion71){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1356 , .env =  env->envinst60 } );
    ( temp1562.fun ( &temp1562.env ,  (  sb2826 ) ,  ( (  nullchar574 ) ( ) ) ) );
    struct StrView_27  dynstr2827 = ( (  as_dash_str1365 ) ( (  sb2826 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2827 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub348 ( ( ( (  dynstr2827 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1549 (   struct env156* env ,    struct Editor_162 *  ed4310 ,    struct StrView_27  s4312 ) {
    ( (  reset_dash_msg971 ) ( (  ed4310 ) ) );
    struct envunion157  temp1550 = ( (struct envunion157){ .fun = (  struct StrView_27  (*) (  struct env69*  ,    struct StrView_27  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1551 , .env =  env->envinst69 } );
    (*  ed4310 ) .f_msg = ( ( Maybe_163_Just ) ( ( temp1550.fun ( &temp1550.env ,  (  s4312 ) ,  ( ( * (  ed4310 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   run_dash_cmd1498 (   struct env160* env ,    struct Editor_162 *  ed4323 ,    struct StrView_27  s4325 ) {
    struct Scanner_1499  temp1500 = ( (  mk_dash_from_dash_strview1501 ) ( (  s4325 ) ) );
    struct Scanner_1499 *  sc4326 = ( &temp1500 );
    struct StrView_27  cmd4327 = ( (  take_dash_str_dash_while1502 ) ( (  sc4326 ) ,  (  is_dash_not_dash_whitespace1518 ) ) );
    ( (  drop_dash_str_dash_while1519 ) ( (  sc4326 ) ,  (  is_dash_whitespace1235 ) ) );
    if ( (  eq1536 ( (  cmd4327 ) , ( (  from_dash_charlike1123 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4323 ) .f_running = ( false );
    } else {
        if ( (  eq1536 ( (  cmd4327 ) , ( (  from_dash_string256 ) ( ( "wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq1536 ( (  cmd4327 ) , ( (  from_dash_charlike1123 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  todo1537 ) ( ) );
            } else {
                if ( (  eq1536 ( (  cmd4327 ) , ( (  from_dash_string256 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                } else {
                    if ( ( (  all1540 ) ( (  cmd4327 ) ,  (  is_dash_digit865 ) ) ) ) {
                    } else {
                        struct envunion161  temp1548 = ( (struct envunion161){ .fun = (  enum Unit_8  (*) (  struct env156*  ,    struct Editor_162 *  ,    struct StrView_27  ) )set_dash_msg1549 , .env =  env->envinst156 } );
                        ( temp1548.fun ( &temp1548.env ,  (  ed4323 ) ,  ( (  from_dash_string256 ) ( ( "unknown command" ) ,  ( 15 ) ) ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free1563 (    struct StrBuilder_62 *  builder2809 ) {
    ( (  free469 ) ( ( & ( ( * (  builder2809 ) ) .f_chars ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Char_65   ascii_dash_char1565 (    char  c782 ) {
    return ( (  from_dash_u8931 ) ( ( (  ascii_dash_u8784 ) ( (  c782 ) ) ) ) );
}

static  struct Maybe_859   reduce1568 (    struct StrViewIter_649  iterable1093 ,    struct Maybe_859  base1095 ,    struct Maybe_859 (*  fun1097 )(    struct Char_65  ,    struct Maybe_859  ) ) {
    struct Maybe_859  x1098 = (  base1095 );
    struct StrViewIter_649  it1099 = ( (  into_dash_iter651 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_652  dref1100 = ( (  next653 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_652_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_652_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_652_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1569 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1569);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_859  temp1570;
    return (  temp1570 );
}

static  struct Maybe_859   sequence_dash_maybe1571 (    struct Char_65  e2476 ,    struct Maybe_859  b2478 ) {
    struct Maybe_859  dref2479 = (  b2478 );
    if ( dref2479.tag == Maybe_859_None_t ) {
        return ( (struct Maybe_859) { .tag = Maybe_859_None_t } );
    }
    else {
        if ( dref2479.tag == Maybe_859_Just_t ) {
            struct Maybe_308  dref2481 = ( (  parse_dash_digit890 ) ( (  e2476 ) ) );
            if ( dref2481.tag == Maybe_308_None_t ) {
                return ( (struct Maybe_859) { .tag = Maybe_859_None_t } );
            }
            else {
                if ( dref2481.tag == Maybe_308_Just_t ) {
                    return ( ( Maybe_859_Just ) ( (  op_dash_add449 ( (  op_dash_mul266 ( ( dref2479 .stuff .Maybe_859_Just_s .field0 ) , (  from_dash_integral347 ( 10 ) ) ) ) , ( (  i32_dash_i64899 ) ( ( dref2481 .stuff .Maybe_308_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_859   parse_dash_int1567 (    struct StrView_27  s2473 ) {
    struct StrViewIter_649  cs2483 = ( (  chars654 ) ( (  s2473 ) ) );
    struct Maybe_652  dref2484 = ( (  head1238 ) ( (  cs2483 ) ) );
    if ( dref2484.tag == Maybe_652_Just_t ) {
        return ( (  reduce1568 ) ( (  cs2483 ) ,  ( ( Maybe_859_Just ) ( (  from_dash_integral347 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1571 ) ) );
    }
    else {
        if ( dref2484.tag == Maybe_652_None_t ) {
            return ( (struct Maybe_859) { .tag = Maybe_859_None_t } );
        }
    }
}

static  enum Unit_8   live_dash_cmd1566 (    struct Editor_162 *  ed4315 ,    struct StrView_27  cmd4317 ) {
    struct Maybe_859  dref4318 = ( (  parse_dash_int1567 ) ( (  cmd4317 ) ) );
    if ( dref4318.tag == Maybe_859_Just_t ) {
        int32_t  line4320 = ( (  clamp1377 ) ( ( (  i64_dash_i32901 ) ( ( dref4318 .stuff .Maybe_859_Just_s .field0 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub851 ( ( (  num_dash_lines1030 ) ( ( ( * ( (  pane1027 ) ( (  ed4315 ) ) ) ) .f_buf ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
        ( (  set_dash_cursors984 ) ( ( (  pane1027 ) ( (  ed4315 ) ) ) ,  ( (struct Pos_26) { .f_line = (  line4320 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_985_NoChanges ) ) );
    }
    else {
        if ( dref4318.tag == Maybe_859_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrViewIter_649   chars1576 (    struct StrBuilder_62  s2817 ) {
    return ( (  into_dash_iter655 ) ( ( (  as_dash_str1365 ) ( ( & (  s2817 ) ) ) ) ) );
}

static  struct StrViewIter_649   into_dash_iter1575 (    struct StrBuilder_62  self2820 ) {
    return ( (  chars1576 ) ( (  self2820 ) ) );
}

static  struct Maybe_652   head1573 (    struct StrBuilder_62  it1142 ) {
    struct StrViewIter_649  temp1574 = ( (  into_dash_iter1575 ) ( (  it1142 ) ) );
    return ( (  next653 ) ( ( &temp1574 ) ) );
}

static  bool   null1572 (    struct StrBuilder_62  it1151 ) {
    struct Maybe_652  dref1152 = ( (  head1573 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_652_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   remove1582 (   struct env42* env ,    struct List_13 *  list2077 ,    size_t  i2079 ) {
    struct envunion43  temp1583 = ( (struct envunion43){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  ) )remove_dash_range472 , .env =  env->envinst40 } );
    ( temp1583.fun ( &temp1583.env ,  (  list2077 ) ,  (  i2079 ) ,  (  op_dash_add268 ( (  i2079 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   pop1580 (   struct env44* env ,    struct List_13 *  list2093 ) {
    if ( (  eq275 ( ( ( * (  list2093 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1107 ) ( ( (  from_dash_string256 ) ( ( "List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct envunion45  temp1581 = ( (struct envunion45){ .fun = (  enum Unit_8  (*) (  struct env42*  ,    struct List_13 *  ,    size_t  ) )remove1582 , .env =  env->envinst42 } );
    return ( temp1581.fun ( &temp1581.env ,  (  list2093 ) ,  (  op_dash_sub348 ( ( ( * (  list2093 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  enum Unit_8   pop1578 (   struct env67* env ,    struct StrBuilder_62 *  sb2783 ) {
    struct envunion68  temp1579 = ( (struct envunion68){ .fun = (  enum Unit_8  (*) (  struct env44*  ,    struct List_13 *  ) )pop1580 , .env =  env->envinst44 } );
    return ( temp1579.fun ( &temp1579.env ,  ( & ( ( * (  sb2783 ) ) .f_chars ) ) ) );
}

struct env1585 {
    ;
    struct Editor_162 *  ed4378;
};

struct envunion1586 {
    enum Unit_8  (*fun) (  struct env1585*  ,    struct StrView_27  );
    struct env1585 env;
};

static  enum Unit_8   if_dash_just1584 (    struct Maybe_163  x1291 ,   struct envunion1586  fun1293 ) {
    struct Maybe_163  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_163_Just_t ) {
        struct envunion1586  temp1587 = (  fun1293 );
        ( temp1587.fun ( &temp1587.env ,  ( dref1294 .stuff .Maybe_163_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_163_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1588 (   struct env1585* env ,    struct StrView_27  st4395 ) {
    ( (  free977 ) ( (  st4395 ) ,  ( ( * ( env->ed4378 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

struct envunion1590 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

static  struct Maybe_652   head1593 (    struct StrView_27  it1142 ) {
    struct StrViewIter_649  temp1594 = ( (  into_dash_iter655 ) ( (  it1142 ) ) );
    return ( (  next653 ) ( ( &temp1594 ) ) );
}

static  bool   null1592 (    struct StrView_27  it1151 ) {
    struct Maybe_652  dref1152 = ( (  head1593 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_652_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   live_dash_search1591 (    struct Editor_162 *  ed4330 ,    struct Pos_26  begin_dash_pos4332 ,    struct StrView_27  query4334 ) {
    if ( ( ! ( (  null1592 ) ( (  query4334 ) ) ) ) ) {
        struct Maybe_1401  dref4335 = ( (  search_dash_from1402 ) ( ( (  pane1027 ) ( (  ed4330 ) ) ) ,  (  begin_dash_pos4332 ) ,  (  query4334 ) ) );
        if ( dref4335.tag == Maybe_1401_Just_t ) {
            ( (  set_dash_cursors984 ) ( ( (  pane1027 ) ( (  ed4330 ) ) ) ,  ( dref4335 .stuff .Maybe_1401_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4335 .stuff .Maybe_1401_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_985_NoChanges ) ) );
        }
        else {
            if ( dref4335.tag == Maybe_1401_None_t ) {
                ( (  set_dash_cursors984 ) ( ( (  pane1027 ) ( (  ed4330 ) ) ) ,  (  begin_dash_pos4332 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_985_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors984 ) ( ( (  pane1027 ) ( (  ed4330 ) ) ) ,  (  begin_dash_pos4332 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_985_NoChanges ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1596 {
    enum Unit_8  (*fun) (  struct env67*  ,    struct StrBuilder_62 *  );
    struct env67 env;
};

static  enum Unit_8   handle_dash_key980 (   struct env176* env ,    struct Editor_162 *  ed4378 ,    struct Key_178  key4380 ) {
    struct EditorMode_164 *  dref4381 = ( & ( ( * (  ed4378 ) ) .f_mode ) );
    if ( (* dref4381 ).tag == EditorMode_164_Normal_t ) {
        enum Mode_142  dref4382 = ( ( ( * (  ed4378 ) ) .f_pane ) .f_mode );
        switch (  dref4382 ) {
            case Mode_142_Normal : {
                struct envunion177  temp981 = ( (struct envunion177){ .fun = (  enum Unit_8  (*) (  struct env165*  ,    struct Editor_162 *  ,    struct Key_178  ) )handle_dash_normal_dash_key982 , .env =  env->envinst165 } );
                ( temp981.fun ( &temp981.env ,  (  ed4378 ) ,  (  key4380 ) ) );
                break;
            }
            case Mode_142_Select : {
                struct envunion1484  temp1483 = ( (struct envunion1484){ .fun = (  enum Unit_8  (*) (  struct env165*  ,    struct Editor_162 *  ,    struct Key_178  ) )handle_dash_normal_dash_key982 , .env =  env->envinst165 } );
                ( temp1483.fun ( &temp1483.env ,  (  ed4378 ) ,  (  key4380 ) ) );
                break;
            }
            case Mode_142_Insert : {
                struct Key_178  dref4383 = (  key4380 );
                if ( dref4383.tag == Key_178_Escape_t ) {
                    ( (  set_dash_mode1036 ) ( ( (  pane1027 ) ( (  ed4378 ) ) ) ,  ( Mode_142_Normal ) ) );
                }
                else {
                    if ( dref4383.tag == Key_178_Enter_t ) {
                        int32_t  indent4384 = ( (  indent_dash_at_dash_line1039 ) ( ( (  pane1027 ) ( (  ed4378 ) ) ) ,  ( ( ( * ( (  pane1027 ) ( (  ed4378 ) ) ) ) .f_cursor ) .f_line ) ) );
                        struct envunion1486  temp1485 = ( (struct envunion1486){ .fun = (  enum Unit_8  (*) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1060 , .env =  env->envinst126 } );
                        ( temp1485.fun ( &temp1485.env ,  ( (  pane1027 ) ( (  ed4378 ) ) ) ,  ( (  from_dash_charlike1123 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right1028 ) ( ( (  pane1027 ) ( (  ed4378 ) ) ) ) );
                        struct envunion179  temp1487 = ( (struct envunion179){ .fun = (  enum Unit_8  (*) (  struct env148*  ,    struct Pane_141 *  ,    int32_t  ) )indent_dash_at_dash_current1200 , .env =  env->envinst148 } );
                        ( temp1487.fun ( &temp1487.env ,  ( (  pane1027 ) ( (  ed4378 ) ) ) ,  (  indent4384 ) ) );
                    }
                    else {
                        if ( dref4383.tag == Key_178_Backspace_t ) {
                            struct envunion184  temp1488 = ( (struct envunion184){ .fun = (  enum Unit_8  (*) (  struct env129*  ,    struct Pane_141 *  ) )backspace1489 , .env =  env->envinst129 } );
                            ( temp1488.fun ( &temp1488.env ,  ( (  pane1027 ) ( (  ed4378 ) ) ) ) );
                        }
                        else {
                            if ( dref4383.tag == Key_178_Char_t ) {
                                struct Array_1492  temp1494 = ( (  from_dash_listlike1495 ) ( ( (struct Array_1492) { ._arr = { ( dref4383 .stuff .Key_178_Char_s .field0 ) } } ) ) );
                                struct StrView_27  s4386 = ( (  from_dash_ascii_dash_slice856 ) ( ( (  as_dash_slice1491 ) ( ( &temp1494 ) ) ) ) );
                                struct envunion182  temp1496 = ( (struct envunion182){ .fun = (  enum Unit_8  (*) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1060 , .env =  env->envinst126 } );
                                ( temp1496.fun ( &temp1496.env ,  ( (  pane1027 ) ( (  ed4378 ) ) ) ,  (  s4386 ) ) );
                                ( (  move_dash_right1028 ) ( ( (  pane1027 ) ( (  ed4378 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4381 ).tag == EditorMode_164_Cmd_t ) {
            struct Key_178  dref4389 = (  key4380 );
            if ( dref4389.tag == Key_178_Escape_t ) {
                ( (  set_dash_cursors984 ) ( ( (  pane1027 ) ( (  ed4378 ) ) ) ,  ( (* dref4381 ) .stuff .EditorMode_164_Cmd_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_985_UpdateVI ) ) );
                (*  ed4378 ) .f_mode = ( (struct EditorMode_164) { .tag = EditorMode_164_Normal_t } );
            }
            else {
                if ( dref4389.tag == Key_178_Enter_t ) {
                    struct envunion183  temp1497 = ( (struct envunion183){ .fun = (  enum Unit_8  (*) (  struct env160*  ,    struct Editor_162 *  ,    struct StrView_27  ) )run_dash_cmd1498 , .env =  env->envinst160 } );
                    ( temp1497.fun ( &temp1497.env ,  (  ed4378 ) ,  ( (  as_dash_str1365 ) ( ( & ( (* dref4381 ) .stuff .EditorMode_164_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1563 ) ( ( & ( (* dref4381 ) .stuff .EditorMode_164_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors984 ) ( ( (  pane1027 ) ( (  ed4378 ) ) ) ,  ( ( * ( (  pane1027 ) ( (  ed4378 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_985_UpdateVI ) ) );
                    (*  ed4378 ) .f_mode = ( (struct EditorMode_164) { .tag = EditorMode_164_Normal_t } );
                }
                else {
                    if ( dref4389.tag == Key_178_Char_t ) {
                        struct envunion180  temp1564 = ( (struct envunion180){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1356 , .env =  env->envinst60 } );
                        ( temp1564.fun ( &temp1564.env ,  ( & ( (* dref4381 ) .stuff .EditorMode_164_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1565 ) ( ( dref4389 .stuff .Key_178_Char_s .field0 ) ) ) ) );
                        ( (  live_dash_cmd1566 ) ( (  ed4378 ) ,  ( (  as_dash_str1365 ) ( ( & ( (* dref4381 ) .stuff .EditorMode_164_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4389.tag == Key_178_Backspace_t ) {
                            if ( ( ! ( (  null1572 ) ( ( (* dref4381 ) .stuff .EditorMode_164_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion181  temp1577 = ( (struct envunion181){ .fun = (  enum Unit_8  (*) (  struct env67*  ,    struct StrBuilder_62 *  ) )pop1578 , .env =  env->envinst67 } );
                                ( temp1577.fun ( &temp1577.env ,  ( & ( (* dref4381 ) .stuff .EditorMode_164_Cmd_s .field1 ) ) ) );
                            }
                            ( (  live_dash_cmd1566 ) ( (  ed4378 ) ,  ( (  as_dash_str1365 ) ( ( & ( (* dref4381 ) .stuff .EditorMode_164_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref4381 ).tag == EditorMode_164_Search_t ) {
                struct Key_178  dref4393 = (  key4380 );
                if ( dref4393.tag == Key_178_Escape_t ) {
                    ( (  set_dash_cursors984 ) ( ( (  pane1027 ) ( (  ed4378 ) ) ) ,  ( (* dref4381 ) .stuff .EditorMode_164_Search_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_985_UpdateVI ) ) );
                    (*  ed4378 ) .f_mode = ( (struct EditorMode_164) { .tag = EditorMode_164_Normal_t } );
                }
                else {
                    if ( dref4393.tag == Key_178_Enter_t ) {
                        ( (  set_dash_cursors984 ) ( ( (  pane1027 ) ( (  ed4378 ) ) ) ,  ( ( * ( (  pane1027 ) ( (  ed4378 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane1027 ) ( (  ed4378 ) ) ) ) .f_sel ) ,  ( CursorMovement_985_UpdateVI ) ) );
                        struct env1585 envinst1585 = {
                            .ed4378 =  ed4378 ,
                        };
                        ( (  if_dash_just1584 ) ( ( ( * (  ed4378 ) ) .f_search_dash_term ) ,  ( (struct envunion1586){ .fun = (  enum Unit_8  (*) (  struct env1585*  ,    struct StrView_27  ) )lam1588 , .env =  envinst1585 } ) ) );
                        if ( ( ! ( (  null1572 ) ( ( (* dref4381 ) .stuff .EditorMode_164_Search_s .field1 ) ) ) ) ) {
                            struct Pos_26  to4396 = ( ( * ( (  pane1027 ) ( (  ed4378 ) ) ) ) .f_cursor );
                            struct Pos_26  from4397 = ( (  or_dash_else1295 ) ( ( ( * ( (  pane1027 ) ( (  ed4378 ) ) ) ) .f_sel ) ,  (  to4396 ) ) );
                            (*  ed4378 ) .f_search_dash_term = ( ( Maybe_163_Just ) ( ( (  as_dash_str1365 ) ( ( & ( (* dref4381 ) .stuff .EditorMode_164_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4378 ) .f_search_dash_term = ( (struct Maybe_163) { .tag = Maybe_163_None_t } );
                        }
                        (*  ed4378 ) .f_mode = ( (struct EditorMode_164) { .tag = EditorMode_164_Normal_t } );
                    }
                    else {
                        if ( dref4393.tag == Key_178_Char_t ) {
                            struct envunion1590  temp1589 = ( (struct envunion1590){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1356 , .env =  env->envinst60 } );
                            ( temp1589.fun ( &temp1589.env ,  ( & ( (* dref4381 ) .stuff .EditorMode_164_Search_s .field1 ) ) ,  ( (  ascii_dash_char1565 ) ( ( dref4393 .stuff .Key_178_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1591 ) ( (  ed4378 ) ,  ( (* dref4381 ) .stuff .EditorMode_164_Search_s .field0 ) ,  ( (  as_dash_str1365 ) ( ( & ( (* dref4381 ) .stuff .EditorMode_164_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4393.tag == Key_178_Backspace_t ) {
                                if ( ( ! ( (  null1572 ) ( ( (* dref4381 ) .stuff .EditorMode_164_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1596  temp1595 = ( (struct envunion1596){ .fun = (  enum Unit_8  (*) (  struct env67*  ,    struct StrBuilder_62 *  ) )pop1578 , .env =  env->envinst67 } );
                                    ( temp1595.fun ( &temp1595.env ,  ( & ( (* dref4381 ) .stuff .EditorMode_164_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1591 ) ( (  ed4378 ) ,  ( (* dref4381 ) .stuff .EditorMode_164_Search_s .field0 ) ,  ( (  as_dash_str1365 ) ( ( & ( (* dref4381 ) .stuff .EditorMode_164_Search_s .field1 ) ) ) ) ) );
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
                    ( (  todo1537 ) ( ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1598 {
    bool  (*fun) (  struct env85*  ,    struct Screen_187 *  );
    struct env85 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1599 (   struct env85* env ,    struct Screen_187 *  screen3505 ) {
    struct Tui_81 *  tui3506 = ( ( * (  screen3505 ) ) .f_tui );
    struct envunion86  temp1600 = ( (struct envunion86){ .fun = (  bool  (*) (  struct env78*  ,    struct Tui_81 *  ) )update_dash_dimensions771 , .env =  env->envinst78 } );
    bool  updated_dash_dimensions3507 = ( temp1600.fun ( &temp1600.env ,  (  tui3506 ) ) );
    if ( ( ! (  updated_dash_dimensions3507 ) ) ) {
        return ( false );
    }
    (*  screen3505 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3508 = ( ( * ( ( * (  screen3505 ) ) .f_tui ) ) .f_width );
    uint32_t  h3509 = ( ( * ( ( * (  screen3505 ) ) .f_tui ) ) .f_height );
    size_t  nusz3510 = ( (  u32_dash_size714 ) ( (  op_dash_mul722 ( (  w3508 ) , (  h3509 ) ) ) ) );
    if ( (  cmp220 ( (  nusz3510 ) , ( ( ( * (  screen3505 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_187  nuscreen3511 = ( (  mk_dash_screen708 ) ( (  tui3506 ) ,  ( ( * (  screen3505 ) ) .f_al ) ) );
    (*  screen3505 ) .f_current = ( (  nuscreen3511 ) .f_current );
    (*  screen3505 ) .f_previous = ( (  nuscreen3511 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1601 (    struct Tui_81 *  tui3432 ) {
    bool  redraw3433 = ( ( * (  tui3432 ) ) .f_should_dash_redraw );
    (*  tui3432 ) .f_should_dash_redraw = ( false );
    return (  redraw3433 );
}

struct env1605 {
    struct Slice_188  s1906;
    struct Cell_189 (*  fun1908 )(    struct Cell_189  );
    ;
    ;
    ;
};

struct envunion1606 {
    enum Unit_8  (*fun) (  struct env1605*  ,    int32_t  );
    struct env1605 env;
};

static  enum Unit_8   for_dash_each1604 (    struct Range_725  iterable1074 ,   struct envunion1606  fun1076 ) {
    struct RangeIter_728  temp1607 = ( (  into_dash_iter730 ) ( (  iterable1074 ) ) );
    struct RangeIter_728 *  it1077 = ( &temp1607 );
    while ( ( true ) ) {
        struct Maybe_308  dref1078 = ( (  next731 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_308_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_308_Just_t ) {
                struct envunion1606  temp1608 = (  fun1076 );
                ( temp1608.fun ( &temp1608.env ,  ( dref1078 .stuff .Maybe_308_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1609 (   struct env1605* env ,    int32_t  i1910 ) {
    return ( (  set735 ) ( ( env->s1906 ) ,  ( (  i32_dash_size298 ) ( (  i1910 ) ) ) ,  ( ( env->fun1908 ) ( (  elem_dash_get739 ( ( env->s1906 ) , ( (  i32_dash_size298 ) ( (  i1910 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map1603 (    struct Slice_188  s1906 ,    struct Cell_189 (*  fun1908 )(    struct Cell_189  ) ) {
    struct env1605 envinst1605 = {
        .s1906 =  s1906 ,
        .fun1908 =  fun1908 ,
    };
    ( (  for_dash_each1604 ) ( ( (  to733 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32232 ) ( (  op_dash_sub348 ( ( (  s1906 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1606){ .fun = (  enum Unit_8  (*) (  struct env1605*  ,    int32_t  ) )lam1609 , .env =  envinst1605 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_189   lam1610 (    struct Cell_189  dref3469 ) {
    return ( (  default_dash_cell747 ) ( ) );
}

static  enum Unit_8   clear_dash_screen1602 (    struct Screen_187 *  screen3468 ) {
    ( (  map1603 ) ( ( ( * (  screen3468 ) ) .f_current ) ,  (  lam1610 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_fg1611 (    struct Screen_187 *  screen3514 ,    struct Color_190  c3516 ) {
    (*  screen3514 ) .f_default_dash_fg = (  c3516 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_bg1612 (    struct Screen_187 *  screen3519 ,    struct Color_190  c3521 ) {
    (*  screen3519 ) .f_default_dash_bg = (  c3521 );
    return ( Unit_8_Unit );
}

struct envunion1614 {
    enum Unit_8  (*fun) (  struct env185*  ,    struct Screen_187 *  ,    struct Editor_162 *  );
    struct env185 env;
};

static  int32_t   cast1617 (    uint32_t  x356 ) {
    return ( (int32_t ) (  x356 ) );
}

static  int32_t   u32_dash_i321616 (    uint32_t  x660 ) {
    return ( (  cast1617 ) ( (  x660 ) ) );
}

static  int32_t   screen_dash_width1621 (    struct ScreenDims_194  sd3985 ) {
    return (  op_dash_add310 ( (  op_dash_sub851 ( ( (  sd3985 ) .f_to_dash_sx ) , ( (  sd3985 ) .f_from_dash_sx ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1622 (    struct ScreenDims_194  sd3988 ) {
    return (  op_dash_add310 ( (  op_dash_sub851 ( ( (  sd3988 ) .f_to_dash_sy ) , ( (  sd3988 ) .f_from_dash_sy ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  enum Unit_8   update_dash_screen_dash_offset1620 (    struct Pane_141 *  pane3991 ,    struct ScreenDims_194  sd3993 ) {
    struct Pos_26  cur3994 = ( ( * (  pane3991 ) ) .f_cursor );
    int32_t  cur_dash_sx3995 = ( (  pos_dash_vi988 ) ( ( ( * (  pane3991 ) ) .f_buf ) ,  (  cur3994 ) ) );
    struct ScreenCursorOffset_143  sc_dash_off3996 = ( ( * (  pane3991 ) ) .f_sc_dash_off );
    int32_t  sw3997 = (  op_dash_sub851 ( ( (  screen_dash_width1621 ) ( (  sd3993 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  sh3998 = (  op_dash_sub851 ( ( (  screen_dash_height1622 ) ( (  sd3993 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  margin3999 = (  from_dash_integral56 ( 5 ) );
    int32_t  csi4000 = ( (  pos_dash_vi988 ) ( ( ( * (  pane3991 ) ) .f_buf ) ,  (  cur3994 ) ) );
    int32_t  csx4001 = (  op_dash_sub851 ( (  csi4000 ) , ( (  sc_dash_off3996 ) .f_screen_dash_left ) ) );
    int32_t  csy4002 = (  op_dash_sub851 ( ( (  cur3994 ) .f_line ) , ( (  sc_dash_off3996 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left4003 = ( (  sc_dash_off3996 ) .f_screen_dash_left );
    if ( (  cmp361 ( (  csx4001 ) , (  margin3999 ) ) == 0 ) ) {
        nu_dash_screen_dash_left4003 = (  op_dash_sub851 ( (  csi4000 ) , (  margin3999 ) ) );
    } else {
        if ( (  cmp361 ( (  csx4001 ) , (  op_dash_sub851 ( (  sw3997 ) , (  margin3999 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left4003 = (  op_dash_add310 ( (  op_dash_sub851 ( (  csi4000 ) , (  sw3997 ) ) ) , (  margin3999 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left4004 = ( (  max1003 ) ( (  nu_dash_screen_dash_left4003 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top4005 = ( (  sc_dash_off3996 ) .f_screen_dash_top );
    if ( (  cmp361 ( (  csy4002 ) , (  margin3999 ) ) == 0 ) ) {
        nu_dash_screen_dash_top4005 = (  op_dash_sub851 ( ( (  cur3994 ) .f_line ) , (  margin3999 ) ) );
    } else {
        if ( (  cmp361 ( (  csy4002 ) , (  op_dash_sub851 ( (  sh3998 ) , (  margin3999 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top4005 = (  op_dash_add310 ( (  op_dash_sub851 ( ( (  cur3994 ) .f_line ) , (  sh3998 ) ) ) , (  margin3999 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top4006 = ( (  max1003 ) ( (  nu_dash_screen_dash_top4005 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    (*  pane3991 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_143) { .f_screen_dash_top = (  nu_dash_screen_dash_top4006 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left4004 ) } );
    return ( Unit_8_Unit );
}

struct IntStrIter_1624 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

static  struct IntStrIter_1624   into_dash_iter1626 (    struct IntStrIter_1624  self1425 ) {
    return (  self1425 );
}

struct env1630 {
    int32_t  base1210;
    ;
};

struct envunion1631 {
    int32_t  (*fun) (  struct env1630*  ,    int32_t  ,    int32_t  );
    struct env1630 env;
};

static  int32_t   reduce1629 (    struct Range_725  iterable1093 ,    int32_t  base1095 ,   struct envunion1631  fun1097 ) {
    int32_t  x1098 = (  base1095 );
    struct RangeIter_728  it1099 = ( (  into_dash_iter730 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_308  dref1100 = ( (  next731 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_308_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_308_Just_t ) {
                struct envunion1631  temp1632 = (  fun1097 );
                x1098 = ( temp1632.fun ( &temp1632.env ,  ( dref1100 .stuff .Maybe_308_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1633 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1633);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1634;
    return (  temp1634 );
}

static  int32_t   lam1635 (   struct env1630* env ,    int32_t  item1214 ,    int32_t  x1216 ) {
    return (  op_dash_mul1433 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int32_t   pow1628 (    int32_t  base1210 ,    int32_t  p1212 ) {
    struct env1630 envinst1630 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1629 ) ( ( (  to733 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub851 ( (  p1212 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  ( (struct envunion1631){ .fun = (  int32_t  (*) (  struct env1630*  ,    int32_t  ,    int32_t  ) )lam1635 , .env =  envinst1630 } ) ) );
}

static  uint8_t   cast1636 (    int32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_652   next1627 (    struct IntStrIter_1624 *  self1428 ) {
    if ( ( ( * (  self1428 ) ) .f_negative ) ) {
        (*  self1428 ) .f_negative = ( false );
        return ( ( Maybe_652_Just ) ( ( (  from_dash_charlike257 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp361 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_652) { .tag = Maybe_652_None_t } );
    }
    int32_t  trim_dash_down1429 = ( (  pow1628 ) ( (  from_dash_integral56 ( 10 ) ) ,  (  op_dash_sub851 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  upper1430 = (  op_dash_div1432 ( ( ( * (  self1428 ) ) .f_int ) , (  trim_dash_down1429 ) ) );
    int32_t  upper_dash_mask1431 = (  op_dash_mul1433 ( (  op_dash_div1432 ( (  upper1430 ) , (  from_dash_integral56 ( 10 ) ) ) ) , (  from_dash_integral56 ( 10 ) ) ) );
    uint8_t  digit1432 = ( ( (  cast1636 ) ( (  op_dash_sub851 ( (  upper1430 ) , (  upper_dash_mask1431 ) ) ) ) ) );
    (*  self1428 ) .f_len = (  op_dash_sub851 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1433 = ( (  from_dash_u8931 ) ( (  op_dash_add821 ( (  digit1432 ) , (  from_dash_integral248 ( 48 ) ) ) ) ) );
    return ( ( Maybe_652_Just ) ( (  digit_dash_char1433 ) ) );
}

static  size_t   reduce1625 (    struct IntStrIter_1624  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct IntStrIter_1624  it1099 = ( (  into_dash_iter1626 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_652  dref1100 = ( (  next1627 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_652_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_652_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_652_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1637 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1637);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1638;
    return (  temp1638 );
}

static  size_t   lam1639 (    struct Char_65  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add268 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1623 (    struct IntStrIter_1624  it1104 ) {
    return ( (  reduce1625 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1639 ) ) );
}

static  int32_t   count_dash_digits1642 (    int32_t  self1436 ) {
    if ( (  eq364 ( (  self1436 ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1437 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp361 ( (  self1436 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ) {
        self1436 = (  op_dash_div1432 ( (  self1436 ) , (  from_dash_integral56 ( 10 ) ) ) );
        digits1437 = (  op_dash_add310 ( (  digits1437 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1437 );
}

static  struct IntStrIter_1624   int_dash_iter1641 (    int32_t  int1440 ) {
    if ( (  cmp361 ( (  int1440 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1624) { .f_int = (  op_dash_neg682 ( (  int1440 ) ) ) , .f_len = ( (  count_dash_digits1642 ) ( (  op_dash_neg682 ( (  int1440 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1624) { .f_int = (  int1440 ) , .f_len = ( (  count_dash_digits1642 ) ( (  int1440 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1624   chars1640 (    int32_t  self1449 ) {
    return ( (  int_dash_iter1641 ) ( (  self1449 ) ) );
}

struct Map_1647 {
    struct IntStrIter_1624  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1647 Map_1647_Map (  struct IntStrIter_1624  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1647 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1647   into_dash_iter1649 (    struct Map_1647  self796 ) {
    return (  self796 );
}

static  struct Maybe_308   next1650 (    struct Map_1647 *  dref798 ) {
    struct Maybe_652  dref801 = ( (  next1627 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_652_None_t ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_652_Just_t ) {
            return ( ( Maybe_308_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_652_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1648 (    struct Map_1647  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1647  it1099 = ( (  into_dash_iter1649 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_308  dref1100 = ( (  next1650 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_308_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_308_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_308_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1651 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1651);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1652;
    return (  temp1652 );
}

static  int32_t   lam1653 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add310 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1646 (    struct Map_1647  it1110 ) {
    return ( (  reduce1648 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam1653 ) ) );
}

static  struct Map_1647   map1654 (    struct IntStrIter_1624  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct IntStrIter_1624  it808 = ( (  into_dash_iter1626 ) ( (  iterable805 ) ) );
    return ( ( Map_1647_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  enum Unit_8   put_dash_char1658 (    struct Screen_187 *  screen3552 ,    struct Char_65  c3554 ,    int32_t  x3556 ,    int32_t  y3558 ) {
    int32_t  w3559 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3552 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp361 ( (  x3556 ) , (  w3559 ) ) != 0 ) || (  cmp361 ( (  y3558 ) , ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3552 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp361 ( (  x3556 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) || (  cmp361 ( (  y3558 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    size_t  i3560 = ( (  i32_dash_size298 ) ( (  op_dash_add310 ( (  op_dash_mul1433 ( (  y3558 ) , (  w3559 ) ) ) , (  x3556 ) ) ) ) );
    struct Color_190  fg3561 = ( ( * (  screen3552 ) ) .f_default_dash_fg );
    struct Color_190  bg3562 = ( ( * (  screen3552 ) ) .f_default_dash_bg );
    struct Char_65  c3563 = (  c3554 );
    int32_t  char_dash_width3564 = ( (  wcwidth1004 ) ( (  c3563 ) ) );
    if ( ( (  cmp361 ( (  x3556 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) && (  cmp361 ( ( (  elem_dash_get739 ( ( ( * (  screen3552 ) ) .f_current ) , (  op_dash_sub348 ( (  i3560 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral56 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_189  pc3565 = (  elem_dash_get739 ( ( ( * (  screen3552 ) ) .f_current ) , (  op_dash_sub348 ( (  i3560 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set735 ) ( ( ( * (  screen3552 ) ) .f_current ) ,  (  op_dash_sub348 ( (  i3560 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_189) { .f_c = ( (  from_dash_charlike257 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3565 ) .f_fg ) , .f_bg = ( (  pc3565 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    ( (  set735 ) ( ( ( * (  screen3552 ) ) .f_current ) ,  (  i3560 ) ,  ( (struct Cell_189) { .f_c = (  c3563 ) , .f_fg = (  fg3561 ) , .f_bg = (  bg3562 ) , .f_char_dash_width = (  char_dash_width3564 ) } ) ) );
    struct RangeIter_728  temp1659 =  into_dash_iter730 ( ( (  to733 ) ( (  op_dash_add310 ( (  x3556 ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min514 ) ( (  op_dash_sub851 ( (  op_dash_add310 ( (  x3556 ) , (  char_dash_width3564 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  w3559 ) ) ) ) ) );
    while (true) {
        struct Maybe_308  __cond1660 =  next731 (&temp1659);
        if (  __cond1660 .tag == 0 ) {
            break;
        }
        int32_t  xx3567 =  __cond1660 .stuff .Maybe_308_Just_s .field0;
        size_t  i3568 = ( (  i32_dash_size298 ) ( (  op_dash_add310 ( (  op_dash_mul1433 ( (  y3558 ) , (  w3559 ) ) ) , (  xx3567 ) ) ) ) );
        ( (  set735 ) ( ( ( * (  screen3552 ) ) .f_current ) ,  (  i3568 ) ,  ( (struct Cell_189) { .f_c = ( (  from_dash_charlike257 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = (  fg3561 ) , .f_bg = (  bg3562 ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str1655 (    struct Screen_187 *  screen3571 ,    int32_t  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp361 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp361 ( (  y3577 ) , ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add310 ( (  op_dash_mul1433 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min514 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size298 ) ( (  op_dash_sub851 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct IntStrIter_1624  temp1656 =  into_dash_iter1626 ( ( (  chars1640 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_652  __cond1657 =  next1627 (&temp1656);
        if (  __cond1657 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond1657 .stuff .Maybe_652_Just_s .field0;
        ( (  put_dash_char1658 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add310 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add310 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1002 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1645 (    struct Screen_187 *  screen3587 ,    int32_t  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum1646 ) ( ( (  map1654 ) ( ( (  chars1640 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1002 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub851 ( (  op_dash_sub851 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str1655 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_1662 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct StrConcat_1662 StrConcat_1662_StrConcat (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1662 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1665 {
    struct StrView_27  field0;
    struct StrConcat_1662  field1;
};

static struct StrConcat_1665 StrConcat_1665_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_1662  field1 ) {
    return ( struct StrConcat_1665 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1664 {
    struct StrConcat_1665  field0;
    struct Char_65  field1;
};

static struct StrConcat_1664 StrConcat_1664_StrConcat (  struct StrConcat_1665  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1664 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str1667 (    struct StrConcat_1662  self1509 ) {
    struct StrConcat_1662  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str231 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str238 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1666 (    struct StrConcat_1665  self1509 ) {
    struct StrConcat_1665  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str231 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str1667 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1663 (    struct StrConcat_1664  self1509 ) {
    struct StrConcat_1664  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str1666 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str239 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert1661 (    bool  cond1719 ,    struct StrConcat_1662  msg1721 ) {
    if ( ( ! (  cond1719 ) ) ) {
        ( (  print_dash_str1663 ) ( ( ( StrConcat_1664_StrConcat ) ( ( ( StrConcat_1665_StrConcat ) ( ( (  from_dash_string256 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1721 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct AppendIter_1669 {
    struct StrViewIter_649  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1669   into_dash_iter1670 (    struct AppendIter_1669  self1019 ) {
    return (  self1019 );
}

static  struct AppendIter_1669   append1671 (    struct StrViewIter_649  it1006 ,    struct Char_65  e1008 ) {
    return ( (struct AppendIter_1669) { .f_it = ( (  into_dash_iter651 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct Maybe_652   next1673 (    struct AppendIter_1669 *  self1022 ) {
    struct Maybe_652  dref1023 = ( (  next653 ) ( ( & ( ( * (  self1022 ) ) .f_it ) ) ) );
    if ( dref1023.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1023 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1023.tag == Maybe_652_None_t ) {
            if ( ( ! ( ( * (  self1022 ) ) .f_appended ) ) ) {
                (*  self1022 ) .f_appended = ( true );
                return ( ( Maybe_652_Just ) ( ( ( * (  self1022 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_652) { .tag = Maybe_652_None_t } );
        }
    }
}

static  bool   between1675 (    struct Pos_26  c1337 ,    struct Pos_26  l1339 ,    struct Pos_26  r1341 ) {
    struct Pos_26  from1342 = ( (  min359 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Pos_26  to1343 = ( (  max362 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp360 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp360 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1674 (    struct Pane_141 *  pane3977 ,    struct Pos_26  pos3979 ) {
    return ( {  struct Maybe_34  dref3980 = ( ( * (  pane3977 ) ) .f_sel ) ; dref3980.tag == Maybe_34_Just_t ? ( (  between1675 ) ( (  pos3979 ) ,  ( ( * (  pane3977 ) ) .f_cursor ) ,  ( dref3980 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct env1677 {
    struct Screen_187 *  screen4009;
};

struct envunion1678 {
    enum Unit_8  (*fun) (  struct env1677*  ,    enum HighlightType_18  );
    struct env1677 env;
};

static  enum Unit_8   if_dash_just1676 (    struct Maybe_125  x1291 ,   struct envunion1678  fun1293 ) {
    struct Maybe_125  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_125_Just_t ) {
        struct envunion1678  temp1679 = (  fun1293 );
        ( temp1679.fun ( &temp1679.env ,  ( dref1294 .stuff .Maybe_125_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_125_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1684 (    struct List_15 *  l2116 ,    size_t  new_dash_count2118 ) {
    (*  l2116 ) .f_count = ( (  min375 ) ( (  new_dash_count2118 ) ,  ( ( * (  l2116 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_652   head1687 (    struct Scanner_846 *  it1142 ) {
    struct Scanner_846  temp1688 = ( (  into_dash_iter863 ) ( (  it1142 ) ) );
    return ( (  next869 ) ( ( &temp1688 ) ) );
}

static  bool   null1686 (    struct Scanner_846 *  it1151 ) {
    struct Maybe_652  dref1152 = ( (  head1687 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_652_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_652   peek1689 (    struct Scanner_846 *  sc3203 ) {
    return ( (  head1238 ) ( ( ( * (  sc3203 ) ) .f_s ) ) );
}

struct Tuple2_1692 {
    struct Maybe_652  field0;
    struct Maybe_652  field1;
};

static struct Tuple2_1692 Tuple2_1692_Tuple2 (  struct Maybe_652  field0 ,  struct Maybe_652  field1 ) {
    return ( struct Tuple2_1692 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1691 (    struct Maybe_652  l141 ,    struct Maybe_652  r143 ) {
    struct Tuple2_1692  dref144 = ( ( Tuple2_1692_Tuple2 ) ( (  l141 ) ,  (  r143 ) ) );
    if ( dref144 .field0.tag == Maybe_652_None_t && dref144 .field1.tag == Maybe_652_None_t ) {
        return ( true );
    }
    else {
        if ( dref144 .field0.tag == Maybe_652_Just_t && dref144 .field1.tag == Maybe_652_Just_t ) {
            return (  eq447 ( ( dref144 .field0 .stuff .Maybe_652_Just_s .field0 ) , ( dref144 .field1 .stuff .Maybe_652_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  bool   try_dash_char1690 (    struct Scanner_846 *  sc3206 ,    struct Char_65  char3208 ) {
    if ( (  eq1691 ( ( (  peek1689 ) ( (  sc3206 ) ) ) , ( ( Maybe_652_Just ) ( (  char3208 ) ) ) ) ) ) {
        ( (  drop_prime_872 ) ( (  sc3206 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        return ( true );
    }
    return ( false );
}

struct TypeSize_1699 {
    size_t  f_size;
};

static  struct TypeSize_1699   get_dash_typesize1698 (  ) {
    struct Highlight_17  temp1700;
    return ( (struct TypeSize_1699) { .f_size = ( sizeof( ( (  temp1700 ) ) ) ) } );
}

static  struct Highlight_17 *   cast_dash_ptr1701 (    void *  p359 ) {
    return ( (struct Highlight_17 * ) (  p359 ) );
}

static  struct Slice_16   allocate1697 (    enum CAllocator_10  dref1954 ,    size_t  count1956 ) {
    if (!(  dref1954 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1957 = ( ( ( (  get_dash_typesize1698 ) ( ) ) ) .f_size );
    struct Highlight_17 *  ptr1958 = ( (  cast_dash_ptr1701 ) ( ( ( malloc ) ( (  op_dash_mul281 ( (  size1957 ) , (  count1956 ) ) ) ) ) ) );
    return ( (struct Slice_16) { .f_ptr = (  ptr1958 ) , .f_count = (  count1956 ) } );
}

struct env1702 {
    struct Slice_16  new_dash_slice2043;
    ;
    ;
};

struct Tuple2_1704 {
    struct Highlight_17  field0;
    int32_t  field1;
};

static struct Tuple2_1704 Tuple2_1704_Tuple2 (  struct Highlight_17  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1704 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1703 {
    enum Unit_8  (*fun) (  struct env1702*  ,    struct Tuple2_1704  );
    struct env1702 env;
};

static  struct Highlight_17 *   offset_dash_ptr1708 (    struct Highlight_17 *  x338 ,    int64_t  count340 ) {
    struct Highlight_17  temp1709;
    return ( (struct Highlight_17 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul266 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1709 ) ) ) ) ) ) ) ) );
}

static  struct Highlight_17 *   get_dash_ptr1707 (    struct Slice_16  slice1758 ,    size_t  i1760 ) {
    if ( ( (  cmp220 ( (  i1760 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic288 ) ( ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1760 ) ) ) ,  ( (  from_dash_string256 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1758 ) .f_count ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Highlight_17 *  elem_dash_ptr1761 = ( (  offset_dash_ptr1708 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  i1760 ) ) ) ) );
    return (  elem_dash_ptr1761 );
}

static  enum Unit_8   set1706 (    struct Slice_16  slice1775 ,    size_t  i1777 ,    struct Highlight_17  x1779 ) {
    struct Highlight_17 *  ep1780 = ( (  get_dash_ptr1707 ) ( (  slice1775 ) ,  (  i1777 ) ) );
    (*  ep1780 ) = (  x1779 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1705 (   struct env1702* env ,    struct Tuple2_1704  dref2044 ) {
    return ( (  set1706 ) ( ( env->new_dash_slice2043 ) ,  ( (  i32_dash_size298 ) ( ( dref2044 .field1 ) ) ) ,  ( dref2044 .field0 ) ) );
}

struct SliceIter_1712 {
    struct Slice_16  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_1711 {
    struct SliceIter_1712  f_left_dash_it;
    struct FromIter_302  f_right_dash_it;
};

static  struct Zip_1711   into_dash_iter1714 (    struct Zip_1711  self911 ) {
    return (  self911 );
}

struct Maybe_1715 {
    enum {
        Maybe_1715_None_t,
        Maybe_1715_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1704  field0;
        } Maybe_1715_Just_s;
    } stuff;
};

static struct Maybe_1715 Maybe_1715_Just (  struct Tuple2_1704  field0 ) {
    return ( struct Maybe_1715 ) { .tag = Maybe_1715_Just_t, .stuff = { .Maybe_1715_Just_s = { .field0 = field0 } } };
};

struct Maybe_1717 {
    enum {
        Maybe_1717_None_t,
        Maybe_1717_Just_t,
    } tag;
    union {
        struct {
            struct Highlight_17  field0;
        } Maybe_1717_Just_s;
    } stuff;
};

static struct Maybe_1717 Maybe_1717_Just (  struct Highlight_17  field0 ) {
    return ( struct Maybe_1717 ) { .tag = Maybe_1717_Just_t, .stuff = { .Maybe_1717_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1717   next1718 (    struct SliceIter_1712 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp220 ( (  op_dash_add268 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1717) { .tag = Maybe_1717_None_t } );
    }
    struct Highlight_17  elem1831 = ( * ( (  offset_dash_ptr1708 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add268 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1717_Just ) ( (  elem1831 ) ) );
}

static  struct Maybe_1715   next1716 (    struct Zip_1711 *  self914 ) {
    struct Zip_1711  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1717  dref916 = ( (  next1718 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1717_None_t ) {
            return ( (struct Maybe_1715) { .tag = Maybe_1715_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1717_Just_t ) {
                struct Maybe_308  dref918 = ( (  next309 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_308_None_t ) {
                    return ( (struct Maybe_1715) { .tag = Maybe_1715_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_308_Just_t ) {
                        ( (  next1718 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next309 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1715_Just ) ( ( ( Tuple2_1704_Tuple2 ) ( ( dref916 .stuff .Maybe_1717_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_308_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1710 (    struct Zip_1711  iterable1074 ,   struct envunion1703  fun1076 ) {
    struct Zip_1711  temp1713 = ( (  into_dash_iter1714 ) ( (  iterable1074 ) ) );
    struct Zip_1711 *  it1077 = ( &temp1713 );
    while ( ( true ) ) {
        struct Maybe_1715  dref1078 = ( (  next1716 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1715_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1715_Just_t ) {
                struct envunion1703  temp1719 = (  fun1076 );
                ( temp1719.fun ( &temp1719.env ,  ( dref1078 .stuff .Maybe_1715_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_1712   into_dash_iter1721 (    struct Slice_16  self1823 ) {
    return ( (struct SliceIter_1712) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_1711   zip1720 (    struct Slice_16  left922 ,    struct FromIter_302  right924 ) {
    struct SliceIter_1712  left_dash_it925 = ( (  into_dash_iter1721 ) ( (  left922 ) ) );
    struct FromIter_302  right_dash_it926 = ( (  into_dash_iter314 ) ( (  right924 ) ) );
    return ( (struct Zip_1711) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr1723 (    struct Highlight_17 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1722 (    enum CAllocator_10  dref1960 ,    struct Slice_16  slice1962 ) {
    if (!(  dref1960 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1723 ) ( ( (  slice1962 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1696 (   struct env5* env ,    struct List_15 *  list2042 ) {
    if ( (  eq275 ( ( ( * (  list2042 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2042 ) .f_elements = ( (  allocate1697 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( env->starting_dash_size2037 ) ) );
    } else {
        if ( (  eq275 ( ( ( * (  list2042 ) ) .f_count ) , ( ( ( * (  list2042 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_16  new_dash_slice2043 = ( (  allocate1697 ) ( ( ( * (  list2042 ) ) .f_al ) ,  (  op_dash_mul281 ( ( ( * (  list2042 ) ) .f_count ) , ( env->growth_dash_factor2038 ) ) ) ) );
            struct env1702 envinst1702 = {
                .new_dash_slice2043 =  new_dash_slice2043 ,
            };
            struct envunion1703  fun2047 = ( (struct envunion1703){ .fun = (  enum Unit_8  (*) (  struct env1702*  ,    struct Tuple2_1704  ) )lam1705 , .env =  envinst1702 } );
            ( (  for_dash_each1710 ) ( ( (  zip1720 ) ( ( ( * (  list2042 ) ) .f_elements ) ,  ( (  from315 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2047 ) ) );
            ( (  free1722 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( ( * (  list2042 ) ) .f_elements ) ) );
            (*  list2042 ) .f_elements = (  new_dash_slice2043 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1694 (   struct env35* env ,    struct List_15 *  list2050 ,    struct Highlight_17  elem2052 ) {
    struct envunion36  temp1695 = ( (struct envunion36){ .fun = (  enum Unit_8  (*) (  struct env5*  ,    struct List_15 *  ) )grow_dash_if_dash_full1696 , .env =  env->envinst5 } );
    ( temp1695.fun ( &temp1695.env ,  (  list2050 ) ) );
    ( (  set1706 ) ( ( ( * (  list2050 ) ) .f_elements ) ,  ( ( * (  list2050 ) ) .f_count ) ,  (  elem2052 ) ) );
    (*  list2050 ) .f_count = (  op_dash_add268 ( ( ( * (  list2050 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   char_dash_satisfies1725 (    struct Scanner_846 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
    struct Maybe_652  dref3214 = ( (  head1238 ) ( ( ( * (  sc3211 ) ) .f_s ) ) );
    if ( dref3214.tag == Maybe_652_Just_t ) {
        if ( ( (  condition3213 ) ( ( dref3214 .stuff .Maybe_652_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_872 ) ( (  sc3211 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3214.tag == Maybe_652_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1724 (    struct Scanner_846 *  sc3229 ,    bool (*  condition3231 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1725 ) ( (  sc3229 ) ,  (  condition3231 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1726 (    struct Char_65  c3881 ) {
    return ( ( !  eq447 ( (  c3881 ) , ( (  from_dash_charlike257 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) && ( !  eq447 ( (  c3881 ) , ( (  from_dash_charlike257 ) ( ( "\\" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion1728 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies1729 (    struct Scanner_846 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
    struct Maybe_652  dref3214 = ( (  head1238 ) ( ( ( * (  sc3211 ) ) .f_s ) ) );
    if ( dref3214.tag == Maybe_652_Just_t ) {
        if ( ( (  condition3213 ) ( ( dref3214 .stuff .Maybe_652_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_872 ) ( (  sc3211 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3214.tag == Maybe_652_None_t ) {
            return ( false );
        }
    }
}

static  bool   char_dash_satisfies1731 (    struct Scanner_846 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
    struct Maybe_652  dref3214 = ( (  head1238 ) ( ( ( * (  sc3211 ) ) .f_s ) ) );
    if ( dref3214.tag == Maybe_652_Just_t ) {
        if ( ( (  condition3213 ) ( ( dref3214 .stuff .Maybe_652_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_872 ) ( (  sc3211 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3214.tag == Maybe_652_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1730 (    struct Scanner_846 *  sc3229 ,    bool (*  condition3231 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1731 ) ( (  sc3229 ) ,  (  condition3231 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1732 (    struct Char_65  c3884 ) {
    return (  eq1225 ( ( (  char_dash_type1228 ) ( (  c3884 ) ) ) , ( CharType_1226_CharWord ) ) );
}

struct envunion1734 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct Array_1736 {
    struct StrView_27 _arr [5];
};

struct env1737 {
    ;
    struct Scanner_846 *  sc3877;
};

struct envunion1738 {
    bool  (*fun) (  struct env1737*  ,    struct StrView_27  );
    struct env1737 env;
};

struct env1740 {
    struct envunion1738  fun1135;
};

struct envunion1741 {
    bool  (*fun) (  struct env1740*  ,    struct StrView_27  ,    bool  );
    struct env1740 env;
};

struct ArrayIter_1742 {
    struct Array_1736  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_1742   into_dash_iter1743 (    struct Array_1736  self2323 ) {
    return ( (struct ArrayIter_1742) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr1747 (    struct Array_1736 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   offset_dash_ptr1748 (    struct StrView_27 *  x338 ,    int64_t  count340 ) {
    struct StrView_27  temp1749;
    return ( (struct StrView_27 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul266 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1749 ) ) ) ) ) ) ) ) );
}

static  struct StrView_27 *   get_dash_ptr1746 (    struct Array_1736 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp220 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i2254 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic224 ) ( ( ( StrConcat_225_StrConcat ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string256 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2255 = ( ( (  cast_dash_ptr1747 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr1748 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  struct StrView_27   get1745 (    struct Array_1736 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr1746 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_163   next1744 (    struct ArrayIter_1742 *  self2330 ) {
    if ( (  cmp220 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_163) { .tag = Maybe_163_None_t } );
    }
    struct StrView_27  e2332 = ( (  get1745 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add268 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_163_Just ) ( (  e2332 ) ) );
}

static  bool   reduce1739 (    struct Array_1736  iterable1093 ,    bool  base1095 ,   struct envunion1741  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct ArrayIter_1742  it1099 = ( (  into_dash_iter1743 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_163  dref1100 = ( (  next1744 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_163_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_163_Just_t ) {
                struct envunion1741  temp1750 = (  fun1097 );
                x1098 = ( temp1750.fun ( &temp1750.env ,  ( dref1100 .stuff .Maybe_163_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1751 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1751);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1752;
    return (  temp1752 );
}

static  bool   lam1753 (   struct env1740* env ,    struct StrView_27  e1137 ,    bool  x1139 ) {
    struct envunion1738  temp1754 = ( env->fun1135 );
    return ( ( temp1754.fun ( &temp1754.env ,  (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1735 (    struct Array_1736  it1133 ,   struct envunion1738  fun1135 ) {
    struct env1740 envinst1740 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1739 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1741){ .fun = (  bool  (*) (  struct env1740*  ,    struct StrView_27  ,    bool  ) )lam1753 , .env =  envinst1740 } ) ) );
}

static  struct Array_1736   from_dash_listlike1755 (    struct Array_1736  self330 ) {
    return (  self330 );
}

static  struct StrViewIter_649   own1760 (    struct StrViewIter_649  x1251 ) {
    return (  x1251 );
}

static  bool   matches_dash_str1757 (    struct Scanner_846 *  sc3218 ,    struct StrView_27  s3220 ) {
    size_t  skip3221 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_649  temp1758 = ( (  chars654 ) ( (  s3220 ) ) );
    struct StrViewIter_649 *  ss3222 = ( &temp1758 );
    struct StrViewIter_649  temp1759 = ( (  own1760 ) ( ( ( * (  sc3218 ) ) .f_s ) ) );
    struct StrViewIter_649 *  sccp3223 = ( &temp1759 );
    while ( ( true ) ) {
        struct Tuple2_1692  dref3224 = ( ( Tuple2_1692_Tuple2 ) ( ( (  next653 ) ( (  sccp3223 ) ) ) ,  ( (  next653 ) ( (  ss3222 ) ) ) ) );
        if ( dref3224 .field1.tag == Maybe_652_None_t ) {
            ( (  drop_prime_872 ) ( (  sc3218 ) ,  (  skip3221 ) ) );
            return ( true );
        }
        else {
            if ( dref3224 .field0.tag == Maybe_652_Just_t && dref3224 .field1.tag == Maybe_652_Just_t ) {
                if ( ( !  eq447 ( ( dref3224 .field0 .stuff .Maybe_652_Just_s .field0 ) , ( dref3224 .field1 .stuff .Maybe_652_Just_s .field0 ) ) ) ) {
                    return ( false );
                }
                skip3221 = (  op_dash_add268 ( (  skip3221 ) , (  from_dash_integral0 ( 1 ) ) ) );
            }
            else {
                if ( true ) {
                    return ( false );
                }
            }
        }
    }
}

static  bool   lam1756 (   struct env1737* env ,    struct StrView_27  sym3887 ) {
    return ( (  matches_dash_str1757 ) ( ( env->sc3877 ) ,  (  sym3887 ) ) );
}

struct envunion1762 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct Array_1764 {
    struct StrView_27 _arr [2];
};

struct env1765 {
    ;
    struct Scanner_846 *  sc3877;
};

struct envunion1766 {
    bool  (*fun) (  struct env1765*  ,    struct StrView_27  );
    struct env1765 env;
};

struct env1768 {
    struct envunion1766  fun1135;
};

struct envunion1769 {
    bool  (*fun) (  struct env1768*  ,    struct StrView_27  ,    bool  );
    struct env1768 env;
};

struct ArrayIter_1770 {
    struct Array_1764  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_1770   into_dash_iter1771 (    struct Array_1764  self2323 ) {
    return ( (struct ArrayIter_1770) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr1775 (    struct Array_1764 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr1774 (    struct Array_1764 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp220 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i2254 ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) ) {
        ( (  panic224 ) ( ( ( StrConcat_225_StrConcat ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string256 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 2 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2255 = ( ( (  cast_dash_ptr1775 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr1748 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  struct StrView_27   get1773 (    struct Array_1764 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr1774 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_163   next1772 (    struct ArrayIter_1770 *  self2330 ) {
    if ( (  cmp220 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) {
        return ( (struct Maybe_163) { .tag = Maybe_163_None_t } );
    }
    struct StrView_27  e2332 = ( (  get1773 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add268 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_163_Just ) ( (  e2332 ) ) );
}

static  bool   reduce1767 (    struct Array_1764  iterable1093 ,    bool  base1095 ,   struct envunion1769  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct ArrayIter_1770  it1099 = ( (  into_dash_iter1771 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_163  dref1100 = ( (  next1772 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_163_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_163_Just_t ) {
                struct envunion1769  temp1776 = (  fun1097 );
                x1098 = ( temp1776.fun ( &temp1776.env ,  ( dref1100 .stuff .Maybe_163_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1777 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1777);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1778;
    return (  temp1778 );
}

static  bool   lam1779 (   struct env1768* env ,    struct StrView_27  e1137 ,    bool  x1139 ) {
    struct envunion1766  temp1780 = ( env->fun1135 );
    return ( ( temp1780.fun ( &temp1780.env ,  (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1763 (    struct Array_1764  it1133 ,   struct envunion1766  fun1135 ) {
    struct env1768 envinst1768 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1767 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1769){ .fun = (  bool  (*) (  struct env1768*  ,    struct StrView_27  ,    bool  ) )lam1779 , .env =  envinst1768 } ) ) );
}

static  struct Array_1764   from_dash_listlike1781 (    struct Array_1764  self330 ) {
    return (  self330 );
}

static  bool   lam1782 (   struct env1765* env ,    struct StrView_27  sym3891 ) {
    return ( (  matches_dash_str1757 ) ( ( env->sc3877 ) ,  (  sym3891 ) ) );
}

struct envunion1784 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies1786 (    struct Scanner_846 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
    struct Maybe_652  dref3214 = ( (  head1238 ) ( ( ( * (  sc3211 ) ) .f_s ) ) );
    if ( dref3214.tag == Maybe_652_Just_t ) {
        if ( ( (  condition3213 ) ( ( dref3214 .stuff .Maybe_652_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_872 ) ( (  sc3211 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3214.tag == Maybe_652_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1785 (    struct Scanner_846 *  sc3229 ,    bool (*  condition3231 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1786 ) ( (  sc3229 ) ,  (  condition3231 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1787 (    struct Char_65  c3895 ) {
    return (  eq1225 ( ( (  char_dash_type1228 ) ( (  c3895 ) ) ) , ( CharType_1226_CharWord ) ) );
}

static  bool   maybe1788 (    struct Maybe_652  x1282 ,    bool (*  fun1284 )(    struct Char_65  ) ,    bool  default1286 ) {
    return ( {  struct Maybe_652  dref1287 = (  x1282 ) ; dref1287.tag == Maybe_652_Just_t ? ( (  fun1284 ) ( ( dref1287 .stuff .Maybe_652_Just_s .field0 ) ) ) : (  default1286 ) ; } );
}

static  bool   is_dash_upper1789 (    struct Char_65  c2407 ) {
    return ( (  eq275 ( ( (  c2407 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1231 ) ( (  c2407 ) ,  ( (  from_dash_charlike257 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

struct Array_1790 {
    struct StrView_27 _arr [14];
};

static  struct Array_1790   from_dash_listlike1791 (    struct Array_1790  self330 ) {
    return (  self330 );
}

struct env1793 {
    ;
    struct StrView_27  ident3899;
};

struct envunion1794 {
    bool  (*fun) (  struct env1793*  ,    struct StrView_27  );
    struct env1793 env;
};

struct env1796 {
    struct envunion1794  fun1135;
};

struct envunion1797 {
    bool  (*fun) (  struct env1796*  ,    struct StrView_27  ,    bool  );
    struct env1796 env;
};

static  bool   reduce1795 (    struct Array_1736  iterable1093 ,    bool  base1095 ,   struct envunion1797  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct ArrayIter_1742  it1099 = ( (  into_dash_iter1743 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_163  dref1100 = ( (  next1744 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_163_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_163_Just_t ) {
                struct envunion1797  temp1798 = (  fun1097 );
                x1098 = ( temp1798.fun ( &temp1798.env ,  ( dref1100 .stuff .Maybe_163_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1799 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1799);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1800;
    return (  temp1800 );
}

static  bool   lam1801 (   struct env1796* env ,    struct StrView_27  e1137 ,    bool  x1139 ) {
    struct envunion1794  temp1802 = ( env->fun1135 );
    return ( ( temp1802.fun ( &temp1802.env ,  (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1792 (    struct Array_1736  it1133 ,   struct envunion1794  fun1135 ) {
    struct env1796 envinst1796 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1795 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1797){ .fun = (  bool  (*) (  struct env1796*  ,    struct StrView_27  ,    bool  ) )lam1801 , .env =  envinst1796 } ) ) );
}

static  bool   lam1803 (   struct env1793* env ,    struct StrView_27  kw3903 ) {
    return (  eq1536 ( (  kw3903 ) , ( env->ident3899 ) ) );
}

struct env1805 {
    ;
    struct StrView_27  ident3899;
};

struct envunion1806 {
    bool  (*fun) (  struct env1805*  ,    struct StrView_27  );
    struct env1805 env;
};

struct env1808 {
    struct envunion1806  fun1135;
};

struct envunion1809 {
    bool  (*fun) (  struct env1808*  ,    struct StrView_27  ,    bool  );
    struct env1808 env;
};

struct ArrayIter_1810 {
    struct Array_1790  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_1810   into_dash_iter1811 (    struct Array_1790  self2323 ) {
    return ( (struct ArrayIter_1810) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr1815 (    struct Array_1790 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr1814 (    struct Array_1790 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp220 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp220 ( (  i2254 ) , ( (size_t ) ( 14 ) ) ) != 0 ) ) ) {
        ( (  panic224 ) ( ( ( StrConcat_225_StrConcat ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string256 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 14 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2255 = ( ( (  cast_dash_ptr1815 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr1748 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  struct StrView_27   get1813 (    struct Array_1790 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr1814 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_163   next1812 (    struct ArrayIter_1810 *  self2330 ) {
    if ( (  cmp220 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 14 ) ) ) != 0 ) ) {
        return ( (struct Maybe_163) { .tag = Maybe_163_None_t } );
    }
    struct StrView_27  e2332 = ( (  get1813 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add268 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_163_Just ) ( (  e2332 ) ) );
}

static  bool   reduce1807 (    struct Array_1790  iterable1093 ,    bool  base1095 ,   struct envunion1809  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct ArrayIter_1810  it1099 = ( (  into_dash_iter1811 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_163  dref1100 = ( (  next1812 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_163_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_163_Just_t ) {
                struct envunion1809  temp1816 = (  fun1097 );
                x1098 = ( temp1816.fun ( &temp1816.env ,  ( dref1100 .stuff .Maybe_163_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1817 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1817);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1818;
    return (  temp1818 );
}

static  bool   lam1819 (   struct env1808* env ,    struct StrView_27  e1137 ,    bool  x1139 ) {
    struct envunion1806  temp1820 = ( env->fun1135 );
    return ( ( temp1820.fun ( &temp1820.env ,  (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1804 (    struct Array_1790  it1133 ,   struct envunion1806  fun1135 ) {
    struct env1808 envinst1808 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1807 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1809){ .fun = (  bool  (*) (  struct env1808*  ,    struct StrView_27  ,    bool  ) )lam1819 , .env =  envinst1808 } ) ) );
}

static  bool   lam1821 (   struct env1805* env ,    struct StrView_27  kw3905 ) {
    return (  eq1536 ( (  kw3905 ) , ( env->ident3899 ) ) );
}

struct envunion1823 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_859   int1824 (    struct Scanner_846 *  sc3197 ) {
    return ( (  scan_dash_int860 ) ( (  sc3197 ) ) );
}

static  bool   char_dash_satisfies1826 (    struct Scanner_846 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
    struct Maybe_652  dref3214 = ( (  head1238 ) ( ( ( * (  sc3211 ) ) .f_s ) ) );
    if ( dref3214.tag == Maybe_652_Just_t ) {
        if ( ( (  condition3213 ) ( ( dref3214 .stuff .Maybe_652_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_872 ) ( (  sc3211 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3214.tag == Maybe_652_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1825 (    struct Scanner_846 *  sc3229 ,    bool (*  condition3231 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1826 ) ( (  sc3229 ) ,  (  condition3231 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_hex1827 (    struct Char_65  c2395 ) {
    return ( (  eq275 ( ( (  c2395 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( ( ( (  is_dash_digit1234 ) ( (  c2395 ) ) ) || ( (  between1231 ) ( (  c2395 ) ,  ( (  from_dash_charlike257 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "f" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1231 ) ( (  c2395 ) ,  ( (  from_dash_charlike257 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion1829 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies1831 (    struct Scanner_846 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
    struct Maybe_652  dref3214 = ( (  head1238 ) ( ( ( * (  sc3211 ) ) .f_s ) ) );
    if ( dref3214.tag == Maybe_652_Just_t ) {
        if ( ( (  condition3213 ) ( ( dref3214 .stuff .Maybe_652_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_872 ) ( (  sc3211 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3214.tag == Maybe_652_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1830 (    struct Scanner_846 *  sc3229 ,    bool (*  condition3231 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1831 ) ( (  sc3229 ) ,  (  condition3231 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_octal1832 (    struct Char_65  c2401 ) {
    return ( (  eq275 ( ( (  c2401 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1231 ) ( (  c2401 ) ,  ( (  from_dash_charlike257 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "7" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion1834 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies1836 (    struct Scanner_846 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
    struct Maybe_652  dref3214 = ( (  head1238 ) ( ( ( * (  sc3211 ) ) .f_s ) ) );
    if ( dref3214.tag == Maybe_652_Just_t ) {
        if ( ( (  condition3213 ) ( ( dref3214 .stuff .Maybe_652_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_872 ) ( (  sc3211 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3214.tag == Maybe_652_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1835 (    struct Scanner_846 *  sc3229 ,    bool (*  condition3231 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1836 ) ( (  sc3229 ) ,  (  condition3231 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion1838 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies1840 (    struct Scanner_846 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
    struct Maybe_652  dref3214 = ( (  head1238 ) ( ( ( * (  sc3211 ) ) .f_s ) ) );
    if ( dref3214.tag == Maybe_652_Just_t ) {
        if ( ( (  condition3213 ) ( ( dref3214 .stuff .Maybe_652_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_872 ) ( (  sc3211 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3214.tag == Maybe_652_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1839 (    struct Scanner_846 *  sc3229 ,    bool (*  condition3231 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1840 ) ( (  sc3229 ) ,  (  condition3231 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_binary1841 (    struct Char_65  c2398 ) {
    return ( (  eq275 ( ( (  c2398 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  eq447 ( (  c2398 ) , ( (  from_dash_charlike257 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) || (  eq447 ( (  c2398 ) , ( (  from_dash_charlike257 ) ( ( "1" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion1843 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion1845 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion1847 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion1849 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   recompute_dash_highlights_dash_at_dash_line1683 (   struct env119* env ,    struct TextBuf_99 *  self3872 ,    struct Line_12 *  line3874 ) {
    if ( ( ! ( ( * (  line3874 ) ) .f_invalidated ) ) ) {
        return ( Unit_8_Unit );
    }
    struct List_15 *  hls3875 = ( & ( ( * (  line3874 ) ) .f_highlights ) );
    ( (  trim1684 ) ( (  hls3875 ) ,  (  from_dash_integral0 ( 0 ) ) ) );
    struct StrView_27  line_dash_sv3876 = ( (  from_dash_bytes991 ) ( ( (  to_dash_slice376 ) ( ( ( * (  line3874 ) ) .f_line ) ) ) ) );
    struct Scanner_846  temp1685 = ( (  mk_dash_from_dash_str848 ) ( (  line_dash_sv3876 ) ) );
    struct Scanner_846 *  sc3877 = ( &temp1685 );
    while ( ( ! ( (  null1686 ) ( (  sc3877 ) ) ) ) ) {
        int32_t  from_dash_off3878 = ( (  size_dash_i32232 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
        struct Maybe_652  first_dash_char3879 = ( (  peek1689 ) ( (  sc3877 ) ) );
        if ( ( (  try_dash_char1690 ) ( (  sc3877 ) ,  ( (  from_dash_charlike257 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion120  temp1693 = ( (struct envunion120){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1694 , .env =  env->envinst35 } );
            ( temp1693.fun ( &temp1693.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = ( (  size_dash_i32232 ) ( ( (  num_dash_bytes1023 ) ( (  line_dash_sv3876 ) ) ) ) ) , .f_type = ( HighlightType_18_Comment ) } ) ) );
            break;
        } else {
            if ( ( (  try_dash_char1690 ) ( (  sc3877 ) ,  ( (  from_dash_charlike257 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) ) {
                while ( ( true ) ) {
                    ( (  skip_dash_while1724 ) ( (  sc3877 ) ,  (  lam1726 ) ) );
                    if ( (  eq1691 ( ( (  peek1689 ) ( (  sc3877 ) ) ) , ( ( Maybe_652_Just ) ( ( (  from_dash_charlike257 ) ( ( "\\" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                        ( (  drop_prime_872 ) ( (  sc3877 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        if ( (  eq1691 ( ( (  peek1689 ) ( (  sc3877 ) ) ) , ( ( Maybe_652_Just ) ( ( (  from_dash_charlike257 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                            ( (  drop_prime_872 ) ( (  sc3877 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        } else {
                        }
                    } else {
                        ( (  drop_prime_872 ) ( (  sc3877 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        break;
                    }
                }
                int32_t  cur_dash_off3882 = ( (  size_dash_i32232 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                struct envunion1728  temp1727 = ( (struct envunion1728){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1694 , .env =  env->envinst35 } );
                ( temp1727.fun ( &temp1727.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3882 ) , .f_type = ( HighlightType_18_String ) } ) ) );
            } else {
                if ( ( (  try_dash_char1690 ) ( (  sc3877 ) ,  ( (  from_dash_charlike257 ) ( ( "@" ) ,  ( 1 ) ) ) ) ) ) {
                    if ( ( (  char_dash_satisfies1729 ) ( (  sc3877 ) ,  (  is_dash_alpha1230 ) ) ) ) {
                        ( (  skip_dash_while1730 ) ( (  sc3877 ) ,  (  lam1732 ) ) );
                        int32_t  cur_dash_off3885 = ( (  size_dash_i32232 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                        struct envunion1734  temp1733 = ( (struct envunion1734){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1694 , .env =  env->envinst35 } );
                        ( temp1733.fun ( &temp1733.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3885 ) , .f_type = ( HighlightType_18_Ident3 ) } ) ) );
                    } else {
                    }
                } else {
                    struct env1737 envinst1737 = {
                        .sc3877 =  sc3877 ,
                    };
                    if ( ( (  any1735 ) ( ( (  from_dash_listlike1755 ) ( ( (struct Array_1736) { ._arr = { ( (  from_dash_string256 ) ( ( "<&" ) ,  ( 2 ) ) ) , ( ( (  from_dash_charlike1123 ) ( ( "=" ) ,  ( 1 ) ) ) ) , ( (  from_dash_charlike1123 ) ( ( "&" ) ,  ( 1 ) ) ) , ( (  from_dash_string256 ) ( ( "->" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike1123 ) ( ( ":" ) ,  ( 1 ) ) ) } } ) ) ) ,  ( (struct envunion1738){ .fun = (  bool  (*) (  struct env1737*  ,    struct StrView_27  ) )lam1756 , .env =  envinst1737 } ) ) ) ) {
                        int32_t  cur_dash_off3888 = ( (  size_dash_i32232 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                        enum HighlightType_18  type3889 = ( HighlightType_18_Special1 );
                        struct envunion1762  temp1761 = ( (struct envunion1762){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1694 , .env =  env->envinst35 } );
                        ( temp1761.fun ( &temp1761.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3888 ) , .f_type = (  type3889 ) } ) ) );
                    } else {
                        struct env1765 envinst1765 = {
                            .sc3877 =  sc3877 ,
                        };
                        if ( ( (  any1763 ) ( ( (  from_dash_listlike1781 ) ( ( (struct Array_1764) { ._arr = { ( (  from_dash_string256 ) ( ( "==" ) ,  ( 2 ) ) ) , ( (  from_dash_string256 ) ( ( "/=" ) ,  ( 2 ) ) ) } } ) ) ) ,  ( (struct envunion1766){ .fun = (  bool  (*) (  struct env1765*  ,    struct StrView_27  ) )lam1782 , .env =  envinst1765 } ) ) ) ) {
                            int32_t  cur_dash_off3892 = ( (  size_dash_i32232 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                            enum HighlightType_18  type3893 = ( HighlightType_18_Special2 );
                            struct envunion1784  temp1783 = ( (struct envunion1784){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1694 , .env =  env->envinst35 } );
                            ( temp1783.fun ( &temp1783.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3892 ) , .f_type = (  type3893 ) } ) ) );
                        } else {
                            if ( ( (  char_dash_satisfies1729 ) ( (  sc3877 ) ,  (  is_dash_alpha1230 ) ) ) ) {
                                ( (  skip_dash_while1785 ) ( (  sc3877 ) ,  (  lam1787 ) ) );
                                int32_t  cur_dash_off3896 = ( (  size_dash_i32232 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                bool  first_dash_char_dash_uppercase3897 = ( (  maybe1788 ) ( (  first_dash_char3879 ) ,  (  is_dash_upper1789 ) ,  ( false ) ) );
                                enum HighlightType_18  type3898 = ( (  first_dash_char_dash_uppercase3897 ) ? ( HighlightType_18_Ident2 ) : ( HighlightType_18_Ident1 ) );
                                struct StrView_27  ident3899 = ( ( (  byte_dash_substr429 ) ( (  line_dash_sv3876 ) ,  ( (  i32_dash_size298 ) ( (  from_dash_off3878 ) ) ) ,  ( (  i32_dash_size298 ) ( (  cur_dash_off3896 ) ) ) ) ) );
                                struct Array_1736  keywords13900 = ( (  from_dash_listlike1755 ) ( ( (struct Array_1736) { ._arr = { ( (  from_dash_string256 ) ( ( "fn" ) ,  ( 2 ) ) ) , ( (  from_dash_string256 ) ( ( "class" ) ,  ( 5 ) ) ) , ( (  from_dash_string256 ) ( ( "inst" ) ,  ( 4 ) ) ) , ( (  from_dash_string256 ) ( ( "external" ) ,  ( 8 ) ) ) , ( (  from_dash_string256 ) ( ( "use" ) ,  ( 3 ) ) ) } } ) ) );
                                struct Array_1790  keywords23901 = ( (  from_dash_listlike1791 ) ( ( (struct Array_1790) { ._arr = { ( (  from_dash_string256 ) ( ( "if" ) ,  ( 2 ) ) ) , ( (  from_dash_string256 ) ( ( "elif" ) ,  ( 4 ) ) ) , ( (  from_dash_string256 ) ( ( "else" ) ,  ( 4 ) ) ) , ( (  from_dash_string256 ) ( ( "case" ) ,  ( 4 ) ) ) , ( (  from_dash_string256 ) ( ( "for" ) ,  ( 3 ) ) ) , ( (  from_dash_string256 ) ( ( "in" ) ,  ( 2 ) ) ) , ( (  from_dash_string256 ) ( ( "while" ) ,  ( 5 ) ) ) , ( (  from_dash_string256 ) ( ( "pass" ) ,  ( 4 ) ) ) , ( (  from_dash_string256 ) ( ( "break" ) ,  ( 5 ) ) ) , ( (  from_dash_string256 ) ( ( "continue" ) ,  ( 8 ) ) ) , ( (  from_dash_string256 ) ( ( "as" ) ,  ( 2 ) ) ) , ( (  from_dash_string256 ) ( ( "or" ) ,  ( 2 ) ) ) , ( (  from_dash_string256 ) ( ( "and" ) ,  ( 3 ) ) ) , ( (  from_dash_string256 ) ( ( "not" ) ,  ( 3 ) ) ) } } ) ) );
                                struct env1793 envinst1793 = {
                                    .ident3899 =  ident3899 ,
                                };
                                if ( ( (  any1792 ) ( (  keywords13900 ) ,  ( (struct envunion1794){ .fun = (  bool  (*) (  struct env1793*  ,    struct StrView_27  ) )lam1803 , .env =  envinst1793 } ) ) ) ) {
                                    type3898 = ( HighlightType_18_Keyword1 );
                                } else {
                                    struct env1805 envinst1805 = {
                                        .ident3899 =  ident3899 ,
                                    };
                                    if ( ( (  any1804 ) ( (  keywords23901 ) ,  ( (struct envunion1806){ .fun = (  bool  (*) (  struct env1805*  ,    struct StrView_27  ) )lam1821 , .env =  envinst1805 } ) ) ) ) {
                                        type3898 = ( HighlightType_18_Keyword2 );
                                    } else {
                                        if ( ( ( ! (  first_dash_char_dash_uppercase3897 ) ) && (  eq1691 ( ( (  peek1689 ) ( (  sc3877 ) ) ) , ( ( Maybe_652_Just ) ( ( (  from_dash_charlike257 ) ( ( "(" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
                                            type3898 = ( HighlightType_18_Ident4 );
                                        }
                                    }
                                }
                                struct envunion1823  temp1822 = ( (struct envunion1823){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1694 , .env =  env->envinst35 } );
                                ( temp1822.fun ( &temp1822.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3896 ) , .f_type = (  type3898 ) } ) ) );
                            } else {
                                struct Maybe_859  dref3906 = ( (  int1824 ) ( (  sc3877 ) ) );
                                if ( dref3906.tag == Maybe_859_Just_t ) {
                                    int32_t  cur_dash_off3908 = ( (  size_dash_i32232 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                    enum HighlightType_18  type3909 = ( HighlightType_18_Number );
                                    if ( (  eq951 ( ( dref3906 .stuff .Maybe_859_Just_s .field0 ) , (  from_dash_integral347 ( 0 ) ) ) ) ) {
                                        if ( ( (  try_dash_char1690 ) ( (  sc3877 ) ,  ( (  from_dash_charlike257 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  skip_dash_while1825 ) ( (  sc3877 ) ,  (  is_dash_hex1827 ) ) );
                                            int32_t  cur_dash_off3910 = ( (  size_dash_i32232 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                            struct envunion1829  temp1828 = ( (struct envunion1829){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1694 , .env =  env->envinst35 } );
                                            ( temp1828.fun ( &temp1828.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3910 ) , .f_type = (  type3909 ) } ) ) );
                                        } else {
                                            if ( ( (  try_dash_char1690 ) ( (  sc3877 ) ,  ( (  from_dash_charlike257 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                                ( (  skip_dash_while1830 ) ( (  sc3877 ) ,  (  is_dash_octal1832 ) ) );
                                                int32_t  cur_dash_off3911 = ( (  size_dash_i32232 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                                struct envunion1834  temp1833 = ( (struct envunion1834){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1694 , .env =  env->envinst35 } );
                                                ( temp1833.fun ( &temp1833.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3911 ) , .f_type = (  type3909 ) } ) ) );
                                                ( (  skip_dash_while1835 ) ( (  sc3877 ) ,  (  is_dash_digit865 ) ) );
                                                int32_t  invalid_dash_off3912 = ( (  size_dash_i32232 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                                if ( ( !  eq364 ( (  cur_dash_off3911 ) , (  invalid_dash_off3912 ) ) ) ) {
                                                    struct envunion1838  temp1837 = ( (struct envunion1838){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1694 , .env =  env->envinst35 } );
                                                    ( temp1837.fun ( &temp1837.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off3911 ) , .f_to = (  invalid_dash_off3912 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                                }
                                            } else {
                                                if ( ( (  try_dash_char1690 ) ( (  sc3877 ) ,  ( (  from_dash_charlike257 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  skip_dash_while1839 ) ( (  sc3877 ) ,  (  is_dash_binary1841 ) ) );
                                                    int32_t  cur_dash_off3913 = ( (  size_dash_i32232 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                                    struct envunion1843  temp1842 = ( (struct envunion1843){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1694 , .env =  env->envinst35 } );
                                                    ( temp1842.fun ( &temp1842.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3913 ) , .f_type = (  type3909 ) } ) ) );
                                                    ( (  skip_dash_while1835 ) ( (  sc3877 ) ,  (  is_dash_digit865 ) ) );
                                                    int32_t  invalid_dash_off3914 = ( (  size_dash_i32232 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                                    if ( ( !  eq364 ( (  cur_dash_off3913 ) , (  invalid_dash_off3914 ) ) ) ) {
                                                        struct envunion1845  temp1844 = ( (struct envunion1845){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1694 , .env =  env->envinst35 } );
                                                        ( temp1844.fun ( &temp1844.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off3913 ) , .f_to = (  invalid_dash_off3914 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                                    }
                                                } else {
                                                    struct envunion1847  temp1846 = ( (struct envunion1847){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1694 , .env =  env->envinst35 } );
                                                    ( temp1846.fun ( &temp1846.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3908 ) , .f_type = (  type3909 ) } ) ) );
                                                }
                                            }
                                        }
                                    } else {
                                        struct envunion1849  temp1848 = ( (struct envunion1849){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1694 , .env =  env->envinst35 } );
                                        ( temp1848.fun ( &temp1848.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3908 ) , .f_type = (  type3909 ) } ) ) );
                                    }
                                }
                                else {
                                    if ( dref3906.tag == Maybe_859_None_t ) {
                                        ( (  drop_prime_872 ) ( (  sc3877 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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

static  struct Slice_16   subslice1852 (    struct Slice_16  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    struct Highlight_17 *  begin_dash_ptr1788 = ( (  offset_dash_ptr1708 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp220 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp220 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_16) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub348 ( ( (  min375 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_16) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

static  struct SliceIter_1712   into_dash_iter1851 (    struct List_15  self2029 ) {
    return ( (  into_dash_iter1721 ) ( ( (  subslice1852 ) ( ( (  self2029 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2029 ) .f_count ) ) ) ) );
}

static  bool   between1854 (    int32_t  c1337 ,    int32_t  l1339 ,    int32_t  r1341 ) {
    int32_t  from1342 = ( (  min514 ) ( (  l1339 ) ,  (  r1341 ) ) );
    int32_t  to1343 = ( (  max1003 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp361 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp361 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  struct Maybe_125   highlight_dash_at1681 (   struct env121* env ,    struct TextBuf_99 *  self3917 ,    struct Pos_26  pos3919 ) {
    struct Line_12 *  line3920 = ( (  get_dash_ptr370 ) ( ( & ( ( * (  self3917 ) ) .f_buf ) ) ,  ( (  i32_dash_size298 ) ( ( (  pos3919 ) .f_line ) ) ) ) );
    struct envunion122  temp1682 = ( (struct envunion122){ .fun = (  enum Unit_8  (*) (  struct env119*  ,    struct TextBuf_99 *  ,    struct Line_12 *  ) )recompute_dash_highlights_dash_at_dash_line1683 , .env =  env->envinst119 } );
    ( temp1682.fun ( &temp1682.env ,  (  self3917 ) ,  (  line3920 ) ) );
    struct SliceIter_1712  temp1850 =  into_dash_iter1851 ( ( ( * (  line3920 ) ) .f_highlights ) );
    while (true) {
        struct Maybe_1717  __cond1853 =  next1718 (&temp1850);
        if (  __cond1853 .tag == 0 ) {
            break;
        }
        struct Highlight_17  hl3922 =  __cond1853 .stuff .Maybe_1717_Just_s .field0;
        if ( ( (  between1854 ) ( ( (  pos3919 ) .f_bi ) ,  ( (  hl3922 ) .f_from ) ,  (  op_dash_sub851 ( ( (  hl3922 ) .f_to ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
            return ( ( Maybe_125_Just ) ( ( (  hl3922 ) .f_type ) ) );
        }
        if ( (  cmp361 ( ( (  pos3919 ) .f_bi ) , ( (  hl3922 ) .f_from ) ) == 0 ) ) {
            return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
        }
    }
    return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
}

static  enum Unit_8   lam1855 (   struct env1677* env ,    enum HighlightType_18  type4034 ) {
    enum HighlightType_18  dref4035 = (  type4034 );
    switch (  dref4035 ) {
        case HighlightType_18_Comment : {
            (* env->screen4009 ) .f_default_dash_fg = ( ( Color_190_Color8 ) ( ( Color8_191_Blue8 ) ) );
            break;
        }
        case HighlightType_18_Number : {
            (* env->screen4009 ) .f_default_dash_fg = ( ( Color_190_Color8 ) ( ( Color8_191_Red8 ) ) );
            break;
        }
        case HighlightType_18_String : {
            (* env->screen4009 ) .f_default_dash_fg = ( ( Color_190_Color8 ) ( ( Color8_191_Green8 ) ) );
            break;
        }
        case HighlightType_18_Ident1 : {
            (* env->screen4009 ) .f_default_dash_fg = ( (struct Color_190) { .tag = Color_190_ColorDefault_t } );
            break;
        }
        case HighlightType_18_Ident2 : {
            (* env->screen4009 ) .f_default_dash_fg = ( ( Color_190_Color8 ) ( ( Color8_191_Magenta8 ) ) );
            break;
        }
        case HighlightType_18_Ident3 : {
            (* env->screen4009 ) .f_default_dash_fg = ( ( Color_190_Color8 ) ( ( Color8_191_Yellow8 ) ) );
            break;
        }
        case HighlightType_18_Ident4 : {
            (* env->screen4009 ) .f_default_dash_fg = ( ( Color_190_Color8 ) ( ( Color8_191_Blue8 ) ) );
            break;
        }
        case HighlightType_18_Keyword1 : {
            (* env->screen4009 ) .f_default_dash_fg = ( ( Color_190_Color8 ) ( ( Color8_191_Yellow8 ) ) );
            break;
        }
        case HighlightType_18_Keyword2 : {
            (* env->screen4009 ) .f_default_dash_fg = ( ( Color_190_Color8 ) ( ( Color8_191_Green8 ) ) );
            break;
        }
        case HighlightType_18_Special1 : {
            (* env->screen4009 ) .f_default_dash_fg = ( ( Color_190_Color8 ) ( ( Color8_191_Yellow8 ) ) );
            break;
        }
        case HighlightType_18_Special2 : {
            (* env->screen4009 ) .f_default_dash_fg = ( ( Color_190_Color8 ) ( ( Color8_191_Green8 ) ) );
            break;
        }
        default: {
            (* env->screen4009 ) .f_default_dash_bg = ( ( Color_190_Color8 ) ( ( Color8_191_Red8 ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render1619 (   struct env123* env ,    struct Screen_187 *  screen4009 ,    struct Pane_141 *  pane4011 ,    struct ScreenDims_194  sd4013 ) {
    bool  display_dash_line_dash_numbers4014 = ( true );
    ( (  update_dash_screen_dash_offset1620 ) ( (  pane4011 ) ,  (  sd4013 ) ) );
    struct ScreenCursorOffset_143  sc_dash_off4015 = ( ( * (  pane4011 ) ) .f_sc_dash_off );
    int32_t  max_dash_line_dash_num_dash_chars4016 = ( (  size_dash_i32232 ) ( ( (  count1623 ) ( ( (  chars1640 ) ( ( (  num_dash_lines1030 ) ( ( ( * (  pane4011 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin4017 = (  from_dash_integral56 ( 2 ) );
    int32_t  num_dash_back_dash_margin4018 = (  from_dash_integral56 ( 2 ) );
    int32_t  total_dash_margin4019 = ( (  display_dash_line_dash_numbers4014 ) ? (  op_dash_add310 ( (  op_dash_add310 ( (  max_dash_line_dash_num_dash_chars4016 ) , (  num_dash_front_dash_margin4017 ) ) ) , (  num_dash_back_dash_margin4018 ) ) ) : (  from_dash_integral56 ( 0 ) ) );
    struct RangeIter_728  temp1643 =  into_dash_iter730 ( ( (  to733 ) ( (  op_dash_add310 ( ( (  sc_dash_off4015 ) .f_screen_dash_top ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min514 ) ( ( (  num_dash_lines1030 ) ( ( ( * (  pane4011 ) ) .f_buf ) ) ) ,  (  op_dash_add310 ( ( (  sc_dash_off4015 ) .f_screen_dash_top ) , ( (  screen_dash_height1622 ) ( (  sd4013 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_308  __cond1644 =  next731 (&temp1643);
        if (  __cond1644 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num4021 =  __cond1644 .stuff .Maybe_308_Just_s .field0;
        int32_t  ybi4022 = (  op_dash_sub851 ( (  line_dash_num4021 ) , (  from_dash_integral56 ( 1 ) ) ) );
        int32_t  xbi4023 = ( (  vi_dash_bi1032 ) ( ( ( * (  pane4011 ) ) .f_buf ) ,  (  ybi4022 ) ,  ( (  sc_dash_off4015 ) .f_screen_dash_left ) ) );
        struct StrView_27  line_dash_content4024 = ( (  line990 ) ( ( ( * (  pane4011 ) ) .f_buf ) ,  (  ybi4022 ) ) );
        int32_t  ys4025 = (  op_dash_sub851 ( (  op_dash_sub851 ( (  op_dash_add310 ( ( (  sd4013 ) .f_from_dash_sy ) , (  line_dash_num4021 ) ) ) , ( (  sc_dash_off4015 ) .f_screen_dash_top ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers4014 ) ) {
            ( (  draw_dash_str_dash_right1645 ) ( (  screen4009 ) ,  (  line_dash_num4021 ) ,  (  op_dash_add310 ( (  op_dash_sub851 ( (  op_dash_sub851 ( ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen4009 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd4013 ) .f_from_dash_sx ) ) ) , (  total_dash_margin4019 ) ) ) , (  num_dash_back_dash_margin4018 ) ) ) ,  (  ys4025 ) ) );
        }
        int32_t  vx4026 = (  op_dash_sub851 ( ( (  pos_dash_vi988 ) ( ( ( * (  pane4011 ) ) .f_buf ) ,  ( (  mk342 ) ( (  ybi4022 ) ,  (  xbi4023 ) ) ) ) ) , ( (  sc_dash_off4015 ) .f_screen_dash_left ) ) );
        ( (  assert1661 ) ( (  cmp361 ( (  vx4026 ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1662_StrConcat ) ( ( (  from_dash_string256 ) ( ( "vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx4026 ) ) ) ) );
        int32_t  left_dash_offset4027 = (  op_dash_add310 ( ( (  sd4013 ) .f_from_dash_sx ) , (  total_dash_margin4019 ) ) );
        struct AppendIter_1669  temp1668 =  into_dash_iter1670 ( ( (  append1671 ) ( ( (  chars654 ) ( ( (  byte_dash_substr_dash_from1426 ) ( (  line_dash_content4024 ) ,  ( (  i32_dash_size298 ) ( (  xbi4023 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike257 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_652  __cond1672 =  next1673 (&temp1668);
            if (  __cond1672 .tag == 0 ) {
                break;
            }
            struct Char_65  c4029 =  __cond1672 .stuff .Maybe_652_Just_s .field0;
            if ( (  cmp361 ( (  vx4026 ) , ( (  sd4013 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_26  curpos4030 = ( (  mk342 ) ( (  ybi4022 ) ,  (  xbi4023 ) ) );
            bool  is_dash_cursor4031 = (  eq363 ( (  curpos4030 ) , ( ( * (  pane4011 ) ) .f_cursor ) ) );
            bool  in_dash_selection4032 = ( (  is_dash_in_dash_selection1674 ) ( (  pane4011 ) ,  ( (  mk342 ) ( (  ybi4022 ) ,  (  xbi4023 ) ) ) ) );
            if ( (  is_dash_cursor4031 ) ) {
                (*  screen4009 ) .f_default_dash_fg = ( ( Color_190_Color8 ) ( ( Color8_191_Black8 ) ) );
                (*  screen4009 ) .f_default_dash_bg = ( ( Color_190_Color8 ) ( ( Color8_191_White8 ) ) );
            } else {
                if ( (  in_dash_selection4032 ) ) {
                    (*  screen4009 ) .f_default_dash_bg = ( ( Color_190_Color8 ) ( ( Color8_191_Cyan8 ) ) );
                } else {
                    struct envunion124  temp1680 = ( (struct envunion124){ .fun = (  struct Maybe_125  (*) (  struct env121*  ,    struct TextBuf_99 *  ,    struct Pos_26  ) )highlight_dash_at1681 , .env =  env->envinst121 } );
                    struct env1677 envinst1677 = {
                        .screen4009 =  screen4009 ,
                    };
                    ( (  if_dash_just1676 ) ( ( temp1680.fun ( &temp1680.env ,  ( ( * (  pane4011 ) ) .f_buf ) ,  (  curpos4030 ) ) ) ,  ( (struct envunion1678){ .fun = (  enum Unit_8  (*) (  struct env1677*  ,    enum HighlightType_18  ) )lam1855 , .env =  envinst1677 } ) ) );
                }
            }
            struct Maybe_163  dref4036 = ( (  char_dash_replacement995 ) ( (  c4029 ) ) );
            if ( dref4036.tag == Maybe_163_None_t ) {
                if ( ( ! ( (  cmp361 ( (  vx4026 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp361 ( (  op_dash_sub851 ( (  op_dash_add310 ( (  vx4026 ) , ( (  char_dash_screen_dash_width993 ) ( (  c4029 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  sd4013 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1658 ) ( (  screen4009 ) ,  (  c4029 ) ,  (  op_dash_add310 ( (  left_dash_offset4027 ) , (  vx4026 ) ) ) ,  (  ys4025 ) ) );
                }
                vx4026 = (  op_dash_add310 ( (  vx4026 ) , ( (  char_dash_screen_dash_width993 ) ( (  c4029 ) ) ) ) );
            }
            else {
                if ( dref4036.tag == Maybe_163_Just_t ) {
                    struct StrViewIter_649  temp1856 =  into_dash_iter651 ( ( (  chars654 ) ( ( dref4036 .stuff .Maybe_163_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_652  __cond1857 =  next653 (&temp1856);
                        if (  __cond1857 .tag == 0 ) {
                            break;
                        }
                        struct Char_65  c4039 =  __cond1857 .stuff .Maybe_652_Just_s .field0;
                        if ( (  cmp361 ( (  vx4026 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1658 ) ( (  screen4009 ) ,  (  c4039 ) ,  (  op_dash_add310 ( (  left_dash_offset4027 ) , (  vx4026 ) ) ) ,  (  ys4025 ) ) );
                        }
                        vx4026 = (  op_dash_add310 ( (  vx4026 ) , ( (  char_dash_screen_dash_width993 ) ( (  c4039 ) ) ) ) );
                    }
                }
            }
            (*  screen4009 ) .f_default_dash_fg = ( (struct Color_190) { .tag = Color_190_ColorDefault_t } );
            (*  screen4009 ) .f_default_dash_bg = ( (struct Color_190) { .tag = Color_190_ColorDefault_t } );
            xbi4023 = (  op_dash_add310 ( (  xbi4023 ) , ( (  size_dash_i32232 ) ( ( (  c4029 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

struct env1859 {
    ;
    ;
    ;
    struct Screen_187 *  screen4401;
    ;
    int32_t *  curline4405;
    ;
    ;
};

struct env1860 {
    ;
    ;
    ;
    struct Screen_187 *  screen4401;
    ;
    int32_t *  curline4405;
    ;
    ;
};

struct env1861 {
    ;
    ;
    ;
    struct Screen_187 *  screen4401;
    ;
    int32_t *  curline4405;
    ;
    ;
};

struct env1862 {
    ;
    ;
    ;
    struct Screen_187 *  screen4401;
    ;
    int32_t *  curline4405;
    ;
    ;
};

struct env1863 {
    ;
    ;
    ;
    struct Screen_187 *  screen4401;
    ;
    int32_t *  curline4405;
    ;
    ;
};

struct env1864 {
    ;
    ;
    ;
    struct Screen_187 *  screen4401;
    ;
    int32_t *  curline4405;
    ;
    ;
};

struct env1865 {
    ;
    ;
    ;
    struct Screen_187 *  screen4401;
    ;
    int32_t *  curline4405;
    ;
    ;
};

struct env1866 {
    ;
    ;
    ;
    struct Screen_187 *  screen4401;
    ;
    int32_t *  curline4405;
    ;
    ;
};

struct env1867 {
    ;
    ;
    ;
    struct Screen_187 *  screen4401;
    ;
    int32_t *  curline4405;
    ;
    ;
};

struct StrConcat_1870 {
    struct StrView_27  field0;
    enum Mode_142  field1;
};

static struct StrConcat_1870 StrConcat_1870_StrConcat (  struct StrView_27  field0 ,  enum Mode_142  field1 ) {
    return ( struct StrConcat_1870 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1869 {
    enum Unit_8  (*fun) (  struct env1859*  ,    struct StrConcat_1870  );
    struct env1859 env;
};

struct StrConcatIter_1875 {
    struct StrViewIter_649  f_left;
    struct StrViewIter_649  f_right;
};

struct Map_1874 {
    struct StrConcatIter_1875  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1874 Map_1874_Map (  struct StrConcatIter_1875  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1874 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1874   into_dash_iter1877 (    struct Map_1874  self796 ) {
    return (  self796 );
}

static  struct Maybe_652   next1879 (    struct StrConcatIter_1875 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_308   next1878 (    struct Map_1874 *  dref798 ) {
    struct Maybe_652  dref801 = ( (  next1879 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_652_None_t ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_652_Just_t ) {
            return ( ( Maybe_308_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_652_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1876 (    struct Map_1874  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1874  it1099 = ( (  into_dash_iter1877 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_308  dref1100 = ( (  next1878 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_308_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_308_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_308_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1880 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1880);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1881;
    return (  temp1881 );
}

static  int32_t   lam1882 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add310 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1873 (    struct Map_1874  it1110 ) {
    return ( (  reduce1876 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam1882 ) ) );
}

static  struct StrConcatIter_1875   into_dash_iter1884 (    struct StrConcatIter_1875  self1497 ) {
    return (  self1497 );
}

static  struct Map_1874   map1883 (    struct StrConcatIter_1875  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_1875  it808 = ( (  into_dash_iter1884 ) ( (  iterable805 ) ) );
    return ( ( Map_1874_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrView_27   todo1888 (  ) {
    ( (  print1241 ) ( ( (  from_dash_string256 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( (  undefined562 ) ( ) );
}

static  struct StrViewIter_649   chars1887 (    enum Mode_142  self3932 ) {
    return ( (  chars654 ) ( ( {  enum Mode_142  dref3933 = (  self3932 ) ;  dref3933 == Mode_142_Normal ? ( (  from_dash_string256 ) ( ( "Normal" ) ,  ( 6 ) ) ) :  dref3933 == Mode_142_Insert ? ( (  from_dash_string256 ) ( ( "Insert" ) ,  ( 6 ) ) ) :  dref3933 == Mode_142_Select ? ( (  from_dash_string256 ) ( ( "Select" ) ,  ( 6 ) ) ) : ( (  todo1888 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1875   into_dash_iter1886 (    struct StrConcat_1870  dref1504 ) {
    return ( (struct StrConcatIter_1875) { .f_left = ( (  chars654 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1887 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1875   chars1885 (    struct StrConcat_1870  self1515 ) {
    return ( (  into_dash_iter1886 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str1889 (    struct Screen_187 *  screen3571 ,    struct StrConcat_1870  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp361 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp361 ( (  y3577 ) , ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add310 ( (  op_dash_mul1433 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min514 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size298 ) ( (  op_dash_sub851 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_1875  temp1890 =  into_dash_iter1884 ( ( (  chars1885 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_652  __cond1891 =  next1879 (&temp1890);
        if (  __cond1891 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond1891 .stuff .Maybe_652_Just_s .field0;
        ( (  put_dash_char1658 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add310 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add310 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1002 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1872 (    struct Screen_187 *  screen3587 ,    struct StrConcat_1870  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum1873 ) ( ( (  map1883 ) ( ( (  chars1885 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1002 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub851 ( (  op_dash_sub851 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str1889 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann1871 (   struct env1859* env ,    struct StrConcat_1870  s4408 ) {
    ( (  draw_dash_str_dash_right1872 ) ( ( env->screen4401 ) ,  (  s4408 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4405 ) ) ) );
    (* env->curline4405 ) = (  op_dash_add310 ( ( * ( env->curline4405 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_1896 {
    struct StrView_27  field0;
    struct Pos_26  field1;
};

static struct StrConcat_1896 StrConcat_1896_StrConcat (  struct StrView_27  field0 ,  struct Pos_26  field1 ) {
    return ( struct StrConcat_1896 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1895 {
    struct StrConcat_1896  field0;
    struct StrView_27  field1;
};

static struct StrConcat_1895 StrConcat_1895_StrConcat (  struct StrConcat_1896  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_1895 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1894 {
    struct StrConcat_1895  field0;
    enum CharType_1226  field1;
};

static struct StrConcat_1894 StrConcat_1894_StrConcat (  struct StrConcat_1895  field0 ,  enum CharType_1226  field1 ) {
    return ( struct StrConcat_1894 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1893 {
    enum Unit_8  (*fun) (  struct env1860*  ,    struct StrConcat_1894  );
    struct env1860 env;
};

struct StrConcatIter_1907 {
    struct AppendIter_912  f_left;
    struct IntStrIter_1624  f_right;
};

struct StrConcatIter_1906 {
    struct StrConcatIter_1907  f_left;
    struct StrViewIter_649  f_right;
};

struct StrConcatIter_1905 {
    struct StrConcatIter_1906  f_left;
    struct IntStrIter_1624  f_right;
};

struct StrConcatIter_1904 {
    struct StrConcatIter_1905  f_left;
    struct AppendIter_912  f_right;
};

struct StrConcatIter_1903 {
    struct StrViewIter_649  f_left;
    struct StrConcatIter_1904  f_right;
};

struct StrConcatIter_1902 {
    struct StrConcatIter_1903  f_left;
    struct StrViewIter_649  f_right;
};

struct StrConcatIter_1901 {
    struct StrConcatIter_1902  f_left;
    struct StrViewIter_649  f_right;
};

struct Map_1900 {
    struct StrConcatIter_1901  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1900 Map_1900_Map (  struct StrConcatIter_1901  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1900 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1900   into_dash_iter1909 (    struct Map_1900  self796 ) {
    return (  self796 );
}

static  struct Maybe_652   next1917 (    struct StrConcatIter_1907 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next938 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next1627 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next1916 (    struct StrConcatIter_1906 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next1917 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next1915 (    struct StrConcatIter_1905 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next1916 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next1627 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next1914 (    struct StrConcatIter_1904 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next1915 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next938 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next1913 (    struct StrConcatIter_1903 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next1914 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next1912 (    struct StrConcatIter_1902 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next1913 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next1911 (    struct StrConcatIter_1901 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next1912 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_308   next1910 (    struct Map_1900 *  dref798 ) {
    struct Maybe_652  dref801 = ( (  next1911 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_652_None_t ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_652_Just_t ) {
            return ( ( Maybe_308_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_652_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1908 (    struct Map_1900  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1900  it1099 = ( (  into_dash_iter1909 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_308  dref1100 = ( (  next1910 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_308_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_308_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_308_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1918 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1918);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1919;
    return (  temp1919 );
}

static  int32_t   lam1920 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add310 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1899 (    struct Map_1900  it1110 ) {
    return ( (  reduce1908 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam1920 ) ) );
}

static  struct StrConcatIter_1901   into_dash_iter1922 (    struct StrConcatIter_1901  self1497 ) {
    return (  self1497 );
}

static  struct Map_1900   map1921 (    struct StrConcatIter_1901  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_1901  it808 = ( (  into_dash_iter1922 ) ( (  iterable805 ) ) );
    return ( ( Map_1900_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1934 {
    struct Char_65  field0;
    int32_t  field1;
};

static struct StrConcat_1934 StrConcat_1934_StrConcat (  struct Char_65  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1934 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1933 {
    struct StrConcat_1934  field0;
    struct StrView_27  field1;
};

static struct StrConcat_1933 StrConcat_1933_StrConcat (  struct StrConcat_1934  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_1933 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1932 {
    struct StrConcat_1933  field0;
    int32_t  field1;
};

static struct StrConcat_1932 StrConcat_1932_StrConcat (  struct StrConcat_1933  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1932 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1931 {
    struct StrConcat_1932  field0;
    struct Char_65  field1;
};

static struct StrConcat_1931 StrConcat_1931_StrConcat (  struct StrConcat_1932  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1931 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_1907   into_dash_iter1941 (    struct StrConcat_1934  dref1504 ) {
    return ( (struct StrConcatIter_1907) { .f_left = ( (  chars952 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1640 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1907   chars1940 (    struct StrConcat_1934  self1515 ) {
    return ( (  into_dash_iter1941 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_1906   into_dash_iter1939 (    struct StrConcat_1933  dref1504 ) {
    return ( (struct StrConcatIter_1906) { .f_left = ( (  chars1940 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars654 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1906   chars1938 (    struct StrConcat_1933  self1515 ) {
    return ( (  into_dash_iter1939 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_1905   into_dash_iter1937 (    struct StrConcat_1932  dref1504 ) {
    return ( (struct StrConcatIter_1905) { .f_left = ( (  chars1938 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1640 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1905   chars1936 (    struct StrConcat_1932  self1515 ) {
    return ( (  into_dash_iter1937 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_1904   into_dash_iter1935 (    struct StrConcat_1931  dref1504 ) {
    return ( (struct StrConcatIter_1904) { .f_left = ( (  chars1936 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars952 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1904   chars1930 (    struct StrConcat_1931  self1515 ) {
    return ( (  into_dash_iter1935 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_1904   chars1929 (    struct Pos_26  self3628 ) {
    return ( (  chars1930 ) ( ( ( StrConcat_1931_StrConcat ) ( ( ( StrConcat_1932_StrConcat ) ( ( ( StrConcat_1933_StrConcat ) ( ( ( StrConcat_1934_StrConcat ) ( ( (  from_dash_charlike257 ) ( ( "(" ) ,  ( 1 ) ) ) ,  ( (  self3628 ) .f_line ) ) ) ,  ( (  from_dash_string256 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  self3628 ) .f_bi ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrConcatIter_1903   into_dash_iter1928 (    struct StrConcat_1896  dref1504 ) {
    return ( (struct StrConcatIter_1903) { .f_left = ( (  chars654 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1929 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1903   chars1927 (    struct StrConcat_1896  self1515 ) {
    return ( (  into_dash_iter1928 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_1902   into_dash_iter1926 (    struct StrConcat_1895  dref1504 ) {
    return ( (struct StrConcatIter_1902) { .f_left = ( (  chars1927 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars654 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1902   chars1925 (    struct StrConcat_1895  self1515 ) {
    return ( (  into_dash_iter1926 ) ( (  self1515 ) ) );
}

static  struct StrViewIter_649   chars1942 (    enum CharType_1226  self3650 ) {
    return ( (  chars654 ) ( ( {  enum CharType_1226  dref3651 = (  self3650 ) ;  dref3651 == CharType_1226_CharPunctuation ? ( (  from_dash_string256 ) ( ( "Punct" ) ,  ( 5 ) ) ) :  dref3651 == CharType_1226_CharWord ? ( (  from_dash_string256 ) ( ( "Word" ) ,  ( 4 ) ) ) :  dref3651 == CharType_1226_CharSpace ? ( (  from_dash_string256 ) ( ( "Space" ) ,  ( 5 ) ) ) : ( (  todo1888 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1901   into_dash_iter1924 (    struct StrConcat_1894  dref1504 ) {
    return ( (struct StrConcatIter_1901) { .f_left = ( (  chars1925 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1942 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1901   chars1923 (    struct StrConcat_1894  self1515 ) {
    return ( (  into_dash_iter1924 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str1943 (    struct Screen_187 *  screen3571 ,    struct StrConcat_1894  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp361 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp361 ( (  y3577 ) , ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add310 ( (  op_dash_mul1433 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min514 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size298 ) ( (  op_dash_sub851 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_1901  temp1944 =  into_dash_iter1922 ( ( (  chars1923 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_652  __cond1945 =  next1911 (&temp1944);
        if (  __cond1945 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond1945 .stuff .Maybe_652_Just_s .field0;
        ( (  put_dash_char1658 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add310 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add310 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1002 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1898 (    struct Screen_187 *  screen3587 ,    struct StrConcat_1894  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum1899 ) ( ( (  map1921 ) ( ( (  chars1923 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1002 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub851 ( (  op_dash_sub851 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str1943 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann1897 (   struct env1860* env ,    struct StrConcat_1894  s4408 ) {
    ( (  draw_dash_str_dash_right1898 ) ( ( env->screen4401 ) ,  (  s4408 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4405 ) ) ) );
    (* env->curline4405 ) = (  op_dash_add310 ( ( * ( env->curline4405 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_1948 {
    struct StrView_27  field0;
    struct Maybe_34  field1;
};

static struct StrConcat_1948 StrConcat_1948_StrConcat (  struct StrView_27  field0 ,  struct Maybe_34  field1 ) {
    return ( struct StrConcat_1948 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1947 {
    enum Unit_8  (*fun) (  struct env1861*  ,    struct StrConcat_1948  );
    struct env1861 env;
};

struct StrConcatIter_1955 {
    struct StrConcatIter_1903  f_left;
    struct AppendIter_912  f_right;
};

struct StrCaseIter_1954 {
    enum {
        StrCaseIter_1954_StrCaseIter1_t,
        StrCaseIter_1954_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_649  field0;
        } StrCaseIter_1954_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1955  field0;
        } StrCaseIter_1954_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1954 StrCaseIter_1954_StrCaseIter1 (  struct StrViewIter_649  field0 ) {
    return ( struct StrCaseIter_1954 ) { .tag = StrCaseIter_1954_StrCaseIter1_t, .stuff = { .StrCaseIter_1954_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1954 StrCaseIter_1954_StrCaseIter2 (  struct StrConcatIter_1955  field0 ) {
    return ( struct StrCaseIter_1954 ) { .tag = StrCaseIter_1954_StrCaseIter2_t, .stuff = { .StrCaseIter_1954_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1953 {
    struct StrViewIter_649  f_left;
    struct StrCaseIter_1954  f_right;
};

struct Map_1952 {
    struct StrConcatIter_1953  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1952 Map_1952_Map (  struct StrConcatIter_1953  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1952 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1952   into_dash_iter1957 (    struct Map_1952  self796 ) {
    return (  self796 );
}

static  struct Maybe_652   next1961 (    struct StrConcatIter_1955 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next1913 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next938 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next1960 (    struct StrCaseIter_1954 *  self1522 ) {
    struct StrCaseIter_1954 *  dref1523 = (  self1522 );
    if ( (* dref1523 ).tag == StrCaseIter_1954_StrCaseIter1_t ) {
        return ( (  next653 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_1954_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1523 ).tag == StrCaseIter_1954_StrCaseIter2_t ) {
            return ( (  next1961 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_1954_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_652   next1959 (    struct StrConcatIter_1953 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next1960 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_308   next1958 (    struct Map_1952 *  dref798 ) {
    struct Maybe_652  dref801 = ( (  next1959 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_652_None_t ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_652_Just_t ) {
            return ( ( Maybe_308_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_652_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1956 (    struct Map_1952  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1952  it1099 = ( (  into_dash_iter1957 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_308  dref1100 = ( (  next1958 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_308_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_308_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_308_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1962 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1962);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1963;
    return (  temp1963 );
}

static  int32_t   lam1964 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add310 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1951 (    struct Map_1952  it1110 ) {
    return ( (  reduce1956 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam1964 ) ) );
}

static  struct StrConcatIter_1953   into_dash_iter1966 (    struct StrConcatIter_1953  self1497 ) {
    return (  self1497 );
}

static  struct Map_1952   map1965 (    struct StrConcatIter_1953  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_1953  it808 = ( (  into_dash_iter1966 ) ( (  iterable805 ) ) );
    return ( ( Map_1952_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1971 {
    struct StrConcat_1896  field0;
    struct Char_65  field1;
};

static struct StrConcat_1971 StrConcat_1971_StrConcat (  struct StrConcat_1896  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1971 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1970 {
    enum {
        StrCase_1970_StrCase1_t,
        StrCase_1970_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_1970_StrCase1_s;
        struct {
            struct StrConcat_1971  field0;
        } StrCase_1970_StrCase2_s;
    } stuff;
};

static struct StrCase_1970 StrCase_1970_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_1970 ) { .tag = StrCase_1970_StrCase1_t, .stuff = { .StrCase_1970_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1970 StrCase_1970_StrCase2 (  struct StrConcat_1971  field0 ) {
    return ( struct StrCase_1970 ) { .tag = StrCase_1970_StrCase2_t, .stuff = { .StrCase_1970_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1955   into_dash_iter1976 (    struct StrConcat_1971  dref1504 ) {
    return ( (struct StrConcatIter_1955) { .f_left = ( (  chars1927 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars952 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1955   chars1975 (    struct StrConcat_1971  self1515 ) {
    return ( (  into_dash_iter1976 ) ( (  self1515 ) ) );
}

static  struct StrCaseIter_1954   into_dash_iter1974 (    struct StrCase_1970  self1528 ) {
    struct StrCase_1970  dref1529 = (  self1528 );
    if ( dref1529.tag == StrCase_1970_StrCase1_t ) {
        return ( ( StrCaseIter_1954_StrCaseIter1 ) ( ( (  chars654 ) ( ( dref1529 .stuff .StrCase_1970_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1529.tag == StrCase_1970_StrCase2_t ) {
            return ( ( StrCaseIter_1954_StrCaseIter2 ) ( ( (  chars1975 ) ( ( dref1529 .stuff .StrCase_1970_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1954   chars1973 (    struct StrCase_1970  self1540 ) {
    return ( (  into_dash_iter1974 ) ( (  self1540 ) ) );
}

static  struct StrCaseIter_1954   chars1969 (    struct Maybe_34  self1554 ) {
    struct StrCase_1970  temp1972;
    struct StrCase_1970  c1555 = (  temp1972 );
    struct Maybe_34  dref1556 = (  self1554 );
    if ( dref1556.tag == Maybe_34_None_t ) {
        c1555 = ( ( StrCase_1970_StrCase1 ) ( ( (  from_dash_string256 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1556.tag == Maybe_34_Just_t ) {
            c1555 = ( ( StrCase_1970_StrCase2 ) ( ( ( StrConcat_1971_StrConcat ) ( ( ( StrConcat_1896_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1556 .stuff .Maybe_34_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1973 ) ( (  c1555 ) ) );
}

static  struct StrConcatIter_1953   into_dash_iter1968 (    struct StrConcat_1948  dref1504 ) {
    return ( (struct StrConcatIter_1953) { .f_left = ( (  chars654 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1969 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1953   chars1967 (    struct StrConcat_1948  self1515 ) {
    return ( (  into_dash_iter1968 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str1977 (    struct Screen_187 *  screen3571 ,    struct StrConcat_1948  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp361 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp361 ( (  y3577 ) , ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add310 ( (  op_dash_mul1433 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min514 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size298 ) ( (  op_dash_sub851 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_1953  temp1978 =  into_dash_iter1966 ( ( (  chars1967 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_652  __cond1979 =  next1959 (&temp1978);
        if (  __cond1979 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond1979 .stuff .Maybe_652_Just_s .field0;
        ( (  put_dash_char1658 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add310 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add310 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1002 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1950 (    struct Screen_187 *  screen3587 ,    struct StrConcat_1948  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum1951 ) ( ( (  map1965 ) ( ( (  chars1967 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1002 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub851 ( (  op_dash_sub851 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str1977 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann1949 (   struct env1861* env ,    struct StrConcat_1948  s4408 ) {
    ( (  draw_dash_str_dash_right1950 ) ( ( env->screen4401 ) ,  (  s4408 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4405 ) ) ) );
    (* env->curline4405 ) = (  op_dash_add310 ( ( * ( env->curline4405 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct Take_1982 {
    struct StrViewIter_649  field0;
    size_t  field1;
};

static struct Take_1982 Take_1982_Take (  struct StrViewIter_649  field0 ,  size_t  field1 ) {
    return ( struct Take_1982 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1981 {
    struct Take_1982  field0;
    struct StrView_27  field1;
};

static struct StrConcat_1981 StrConcat_1981_StrConcat (  struct Take_1982  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_1981 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_1980 {
    enum {
        Maybe_1980_None_t,
        Maybe_1980_Just_t,
    } tag;
    union {
        struct {
            struct StrConcat_1981  field0;
        } Maybe_1980_Just_s;
    } stuff;
};

static struct Maybe_1980 Maybe_1980_Just (  struct StrConcat_1981  field0 ) {
    return ( struct Maybe_1980 ) { .tag = Maybe_1980_Just_t, .stuff = { .Maybe_1980_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1980   fmap_dash_maybe1983 (    struct Maybe_163  x1275 ,    struct StrConcat_1981 (*  fun1277 )(    struct StrView_27  ) ) {
    struct Maybe_163  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_163_None_t ) {
        return ( (struct Maybe_1980) { .tag = Maybe_1980_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_163_Just_t ) {
            return ( ( Maybe_1980_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_163_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Take_1982   take1985 (    struct StrView_27  it867 ,    size_t  i869 ) {
    return ( ( Take_1982_Take ) ( ( (  into_dash_iter655 ) ( (  it867 ) ) ) ,  (  i869 ) ) );
}

struct Drop_1987 {
    struct StrViewIter_649  field0;
    size_t  field1;
};

static struct Drop_1987 Drop_1987_Drop (  struct StrViewIter_649  field0 ,  size_t  field1 ) {
    return ( struct Drop_1987 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Maybe_652   next1989 (    struct Drop_1987 *  dref847 ) {
    while ( (  cmp220 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next653 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub348 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next653 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Drop_1987   into_dash_iter1991 (    struct Drop_1987  self845 ) {
    return (  self845 );
}

static  struct Maybe_652   head1988 (    struct Drop_1987  it1142 ) {
    struct Drop_1987  temp1990 = ( (  into_dash_iter1991 ) ( (  it1142 ) ) );
    return ( (  next1989 ) ( ( &temp1990 ) ) );
}

static  bool   null1986 (    struct Drop_1987  it1151 ) {
    struct Maybe_652  dref1152 = ( (  head1988 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_652_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Drop_1987   drop1992 (    struct StrView_27  iterable852 ,    size_t  i854 ) {
    struct StrViewIter_649  it855 = ( (  into_dash_iter655 ) ( (  iterable852 ) ) );
    return ( ( Drop_1987_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct StrConcat_1981   lam1984 (    struct StrView_27  s4411 ) {
    return ( ( StrConcat_1981_StrConcat ) ( ( (  take1985 ) ( (  s4411 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ,  ( ( (  null1986 ) ( ( (  drop1992 ) ( (  s4411 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ) ) ? ( (  from_dash_string256 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_string256 ) ( ( "..." ) ,  ( 3 ) ) ) ) ) );
}

struct StrConcat_1995 {
    struct StrView_27  field0;
    struct Maybe_1980  field1;
};

static struct StrConcat_1995 StrConcat_1995_StrConcat (  struct StrView_27  field0 ,  struct Maybe_1980  field1 ) {
    return ( struct StrConcat_1995 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1994 {
    enum Unit_8  (*fun) (  struct env1862*  ,    struct StrConcat_1995  );
    struct env1862 env;
};

struct StrConcatIter_2004 {
    struct Take_1982  f_left;
    struct StrViewIter_649  f_right;
};

struct StrConcatIter_2003 {
    struct StrViewIter_649  f_left;
    struct StrConcatIter_2004  f_right;
};

struct StrConcatIter_2002 {
    struct StrConcatIter_2003  f_left;
    struct AppendIter_912  f_right;
};

struct StrCaseIter_2001 {
    enum {
        StrCaseIter_2001_StrCaseIter1_t,
        StrCaseIter_2001_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_649  field0;
        } StrCaseIter_2001_StrCaseIter1_s;
        struct {
            struct StrConcatIter_2002  field0;
        } StrCaseIter_2001_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_2001 StrCaseIter_2001_StrCaseIter1 (  struct StrViewIter_649  field0 ) {
    return ( struct StrCaseIter_2001 ) { .tag = StrCaseIter_2001_StrCaseIter1_t, .stuff = { .StrCaseIter_2001_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_2001 StrCaseIter_2001_StrCaseIter2 (  struct StrConcatIter_2002  field0 ) {
    return ( struct StrCaseIter_2001 ) { .tag = StrCaseIter_2001_StrCaseIter2_t, .stuff = { .StrCaseIter_2001_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_2000 {
    struct StrViewIter_649  f_left;
    struct StrCaseIter_2001  f_right;
};

struct Map_1999 {
    struct StrConcatIter_2000  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1999 Map_1999_Map (  struct StrConcatIter_2000  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1999 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1999   into_dash_iter2006 (    struct Map_1999  self796 ) {
    return (  self796 );
}

static  struct Maybe_652   next2013 (    struct Take_1982 *  dref861 ) {
    if ( (  cmp220 ( ( (* dref861 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_652  x864 = ( (  next653 ) ( ( & ( (* dref861 ) .field0 ) ) ) );
        (* dref861 ) .field1 = (  op_dash_sub348 ( ( (* dref861 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
        return (  x864 );
    } else {
        return ( (struct Maybe_652) { .tag = Maybe_652_None_t } );
    }
}

static  struct Maybe_652   next2012 (    struct StrConcatIter_2004 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next2013 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next2011 (    struct StrConcatIter_2003 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next2012 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next2010 (    struct StrConcatIter_2002 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next2011 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next938 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next2009 (    struct StrCaseIter_2001 *  self1522 ) {
    struct StrCaseIter_2001 *  dref1523 = (  self1522 );
    if ( (* dref1523 ).tag == StrCaseIter_2001_StrCaseIter1_t ) {
        return ( (  next653 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_2001_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1523 ).tag == StrCaseIter_2001_StrCaseIter2_t ) {
            return ( (  next2010 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_2001_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_652   next2008 (    struct StrConcatIter_2000 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next2009 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_308   next2007 (    struct Map_1999 *  dref798 ) {
    struct Maybe_652  dref801 = ( (  next2008 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_652_None_t ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_652_Just_t ) {
            return ( ( Maybe_308_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_652_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2005 (    struct Map_1999  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1999  it1099 = ( (  into_dash_iter2006 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_308  dref1100 = ( (  next2007 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_308_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_308_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_308_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2014 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2014);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp2015;
    return (  temp2015 );
}

static  int32_t   lam2016 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add310 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1998 (    struct Map_1999  it1110 ) {
    return ( (  reduce2005 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2016 ) ) );
}

static  struct StrConcatIter_2000   into_dash_iter2018 (    struct StrConcatIter_2000  self1497 ) {
    return (  self1497 );
}

static  struct Map_1999   map2017 (    struct StrConcatIter_2000  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_2000  it808 = ( (  into_dash_iter2018 ) ( (  iterable805 ) ) );
    return ( ( Map_1999_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_2024 {
    struct StrView_27  field0;
    struct StrConcat_1981  field1;
};

static struct StrConcat_2024 StrConcat_2024_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_1981  field1 ) {
    return ( struct StrConcat_2024 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2023 {
    struct StrConcat_2024  field0;
    struct Char_65  field1;
};

static struct StrConcat_2023 StrConcat_2023_StrConcat (  struct StrConcat_2024  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2023 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_2022 {
    enum {
        StrCase_2022_StrCase1_t,
        StrCase_2022_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_2022_StrCase1_s;
        struct {
            struct StrConcat_2023  field0;
        } StrCase_2022_StrCase2_s;
    } stuff;
};

static struct StrCase_2022 StrCase_2022_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_2022 ) { .tag = StrCase_2022_StrCase1_t, .stuff = { .StrCase_2022_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_2022 StrCase_2022_StrCase2 (  struct StrConcat_2023  field0 ) {
    return ( struct StrCase_2022 ) { .tag = StrCase_2022_StrCase2_t, .stuff = { .StrCase_2022_StrCase2_s = { .field0 = field0 } } };
};

static  struct Take_1982   chars2034 (    struct Take_1982  self1645 ) {
    return (  self1645 );
}

static  struct StrConcatIter_2004   into_dash_iter2033 (    struct StrConcat_1981  dref1504 ) {
    return ( (struct StrConcatIter_2004) { .f_left = ( (  chars2034 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars654 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2004   chars2032 (    struct StrConcat_1981  self1515 ) {
    return ( (  into_dash_iter2033 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2003   into_dash_iter2031 (    struct StrConcat_2024  dref1504 ) {
    return ( (struct StrConcatIter_2003) { .f_left = ( (  chars654 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2032 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2003   chars2030 (    struct StrConcat_2024  self1515 ) {
    return ( (  into_dash_iter2031 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2002   into_dash_iter2029 (    struct StrConcat_2023  dref1504 ) {
    return ( (struct StrConcatIter_2002) { .f_left = ( (  chars2030 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars952 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2002   chars2028 (    struct StrConcat_2023  self1515 ) {
    return ( (  into_dash_iter2029 ) ( (  self1515 ) ) );
}

static  struct StrCaseIter_2001   into_dash_iter2027 (    struct StrCase_2022  self1528 ) {
    struct StrCase_2022  dref1529 = (  self1528 );
    if ( dref1529.tag == StrCase_2022_StrCase1_t ) {
        return ( ( StrCaseIter_2001_StrCaseIter1 ) ( ( (  chars654 ) ( ( dref1529 .stuff .StrCase_2022_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1529.tag == StrCase_2022_StrCase2_t ) {
            return ( ( StrCaseIter_2001_StrCaseIter2 ) ( ( (  chars2028 ) ( ( dref1529 .stuff .StrCase_2022_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_2001   chars2026 (    struct StrCase_2022  self1540 ) {
    return ( (  into_dash_iter2027 ) ( (  self1540 ) ) );
}

static  struct StrCaseIter_2001   chars2021 (    struct Maybe_1980  self1554 ) {
    struct StrCase_2022  temp2025;
    struct StrCase_2022  c1555 = (  temp2025 );
    struct Maybe_1980  dref1556 = (  self1554 );
    if ( dref1556.tag == Maybe_1980_None_t ) {
        c1555 = ( ( StrCase_2022_StrCase1 ) ( ( (  from_dash_string256 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1556.tag == Maybe_1980_Just_t ) {
            c1555 = ( ( StrCase_2022_StrCase2 ) ( ( ( StrConcat_2023_StrConcat ) ( ( ( StrConcat_2024_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1556 .stuff .Maybe_1980_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars2026 ) ( (  c1555 ) ) );
}

static  struct StrConcatIter_2000   into_dash_iter2020 (    struct StrConcat_1995  dref1504 ) {
    return ( (struct StrConcatIter_2000) { .f_left = ( (  chars654 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2021 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2000   chars2019 (    struct StrConcat_1995  self1515 ) {
    return ( (  into_dash_iter2020 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str2035 (    struct Screen_187 *  screen3571 ,    struct StrConcat_1995  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp361 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp361 ( (  y3577 ) , ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add310 ( (  op_dash_mul1433 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min514 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size298 ) ( (  op_dash_sub851 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2000  temp2036 =  into_dash_iter2018 ( ( (  chars2019 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_652  __cond2037 =  next2008 (&temp2036);
        if (  __cond2037 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2037 .stuff .Maybe_652_Just_s .field0;
        ( (  put_dash_char1658 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add310 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add310 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1002 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1997 (    struct Screen_187 *  screen3587 ,    struct StrConcat_1995  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum1998 ) ( ( (  map2017 ) ( ( (  chars2019 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1002 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub851 ( (  op_dash_sub851 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str2035 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann1996 (   struct env1862* env ,    struct StrConcat_1995  s4408 ) {
    ( (  draw_dash_str_dash_right1997 ) ( ( env->screen4401 ) ,  (  s4408 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4405 ) ) ) );
    (* env->curline4405 ) = (  op_dash_add310 ( ( * ( env->curline4405 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_1980   fmap_dash_maybe2038 (    struct Maybe_163  x1275 ,    struct StrConcat_1981 (*  fun1277 )(    struct StrView_27  ) ) {
    struct Maybe_163  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_163_None_t ) {
        return ( (struct Maybe_1980) { .tag = Maybe_1980_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_163_Just_t ) {
            return ( ( Maybe_1980_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_163_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrConcat_1981   lam2039 (    struct StrView_27  s4414 ) {
    return ( ( StrConcat_1981_StrConcat ) ( ( (  take1985 ) ( (  s4414 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ,  ( ( (  null1986 ) ( ( (  drop1992 ) ( (  s4414 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ) ) ? ( (  from_dash_string256 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_string256 ) ( ( "..." ) ,  ( 3 ) ) ) ) ) );
}

struct envunion2041 {
    enum Unit_8  (*fun) (  struct env1862*  ,    struct StrConcat_1995  );
    struct env1862 env;
};

struct StrConcat_2044 {
    struct StrView_27  field0;
    struct EditorMode_164  field1;
};

static struct StrConcat_2044 StrConcat_2044_StrConcat (  struct StrView_27  field0 ,  struct EditorMode_164  field1 ) {
    return ( struct StrConcat_2044 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2043 {
    enum Unit_8  (*fun) (  struct env1863*  ,    struct StrConcat_2044  );
    struct env1863 env;
};

struct StrConcatIter_2052 {
    struct StrConcatIter_1955  f_left;
    struct StrViewIter_649  f_right;
};

struct StrConcatIter_2051 {
    struct StrConcatIter_2052  f_left;
    struct AppendIter_912  f_right;
};

struct StrCaseIter_2050 {
    enum {
        StrCaseIter_2050_StrCaseIter1_t,
        StrCaseIter_2050_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_649  field0;
        } StrCaseIter_2050_StrCaseIter1_s;
        struct {
            struct StrConcatIter_2051  field0;
        } StrCaseIter_2050_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_2050 StrCaseIter_2050_StrCaseIter1 (  struct StrViewIter_649  field0 ) {
    return ( struct StrCaseIter_2050 ) { .tag = StrCaseIter_2050_StrCaseIter1_t, .stuff = { .StrCaseIter_2050_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_2050 StrCaseIter_2050_StrCaseIter2 (  struct StrConcatIter_2051  field0 ) {
    return ( struct StrCaseIter_2050 ) { .tag = StrCaseIter_2050_StrCaseIter2_t, .stuff = { .StrCaseIter_2050_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_2049 {
    struct StrViewIter_649  f_left;
    struct StrCaseIter_2050  f_right;
};

struct Map_2048 {
    struct StrConcatIter_2049  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2048 Map_2048_Map (  struct StrConcatIter_2049  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2048 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2048   into_dash_iter2054 (    struct Map_2048  self796 ) {
    return (  self796 );
}

static  struct Maybe_652   next2059 (    struct StrConcatIter_2052 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next1961 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next2058 (    struct StrConcatIter_2051 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next2059 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next938 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next2057 (    struct StrCaseIter_2050 *  self1522 ) {
    struct StrCaseIter_2050 *  dref1523 = (  self1522 );
    if ( (* dref1523 ).tag == StrCaseIter_2050_StrCaseIter1_t ) {
        return ( (  next653 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_2050_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1523 ).tag == StrCaseIter_2050_StrCaseIter2_t ) {
            return ( (  next2058 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_2050_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_652   next2056 (    struct StrConcatIter_2049 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next2057 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_308   next2055 (    struct Map_2048 *  dref798 ) {
    struct Maybe_652  dref801 = ( (  next2056 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_652_None_t ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_652_Just_t ) {
            return ( ( Maybe_308_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_652_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2053 (    struct Map_2048  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_2048  it1099 = ( (  into_dash_iter2054 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_308  dref1100 = ( (  next2055 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_308_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_308_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_308_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2060 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2060);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp2061;
    return (  temp2061 );
}

static  int32_t   lam2062 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add310 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum2047 (    struct Map_2048  it1110 ) {
    return ( (  reduce2053 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2062 ) ) );
}

static  struct StrConcatIter_2049   into_dash_iter2064 (    struct StrConcatIter_2049  self1497 ) {
    return (  self1497 );
}

static  struct Map_2048   map2063 (    struct StrConcatIter_2049  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_2049  it808 = ( (  into_dash_iter2064 ) ( (  iterable805 ) ) );
    return ( ( Map_2048_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_2070 {
    struct StrConcat_1971  field0;
    struct StrBuilder_62  field1;
};

static struct StrConcat_2070 StrConcat_2070_StrConcat (  struct StrConcat_1971  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct StrConcat_2070 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2069 {
    struct StrConcat_2070  field0;
    struct Char_65  field1;
};

static struct StrConcat_2069 StrConcat_2069_StrConcat (  struct StrConcat_2070  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2069 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_2068 {
    enum {
        StrCase_2068_StrCase1_t,
        StrCase_2068_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_2068_StrCase1_s;
        struct {
            struct StrConcat_2069  field0;
        } StrCase_2068_StrCase2_s;
    } stuff;
};

static struct StrCase_2068 StrCase_2068_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_2068 ) { .tag = StrCase_2068_StrCase1_t, .stuff = { .StrCase_2068_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_2068 StrCase_2068_StrCase2 (  struct StrConcat_2069  field0 ) {
    return ( struct StrCase_2068 ) { .tag = StrCase_2068_StrCase2_t, .stuff = { .StrCase_2068_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrCaseIter_2050   undefined2073 (  ) {
    struct StrCaseIter_2050  temp2074;
    return (  temp2074 );
}

static  struct StrCaseIter_2050   todo2072 (  ) {
    ( (  print1241 ) ( ( (  from_dash_string256 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( (  undefined2073 ) ( ) );
}

static  struct StrConcatIter_2052   into_dash_iter2080 (    struct StrConcat_2070  dref1504 ) {
    return ( (struct StrConcatIter_2052) { .f_left = ( (  chars1975 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1576 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2052   chars2079 (    struct StrConcat_2070  self1515 ) {
    return ( (  into_dash_iter2080 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2051   into_dash_iter2078 (    struct StrConcat_2069  dref1504 ) {
    return ( (struct StrConcatIter_2051) { .f_left = ( (  chars2079 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars952 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2051   chars2077 (    struct StrConcat_2069  self1515 ) {
    return ( (  into_dash_iter2078 ) ( (  self1515 ) ) );
}

static  struct StrCaseIter_2050   into_dash_iter2076 (    struct StrCase_2068  self1528 ) {
    struct StrCase_2068  dref1529 = (  self1528 );
    if ( dref1529.tag == StrCase_2068_StrCase1_t ) {
        return ( ( StrCaseIter_2050_StrCaseIter1 ) ( ( (  chars654 ) ( ( dref1529 .stuff .StrCase_2068_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1529.tag == StrCase_2068_StrCase2_t ) {
            return ( ( StrCaseIter_2050_StrCaseIter2 ) ( ( (  chars2077 ) ( ( dref1529 .stuff .StrCase_2068_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_2050   chars2075 (    struct StrCase_2068  self1540 ) {
    return ( (  into_dash_iter2076 ) ( (  self1540 ) ) );
}

static  struct StrCaseIter_2050   chars2067 (    struct EditorMode_164  self4285 ) {
    struct StrCase_2068  temp2071;
    struct StrCase_2068  c4286 = (  temp2071 );
    struct EditorMode_164  dref4287 = (  self4285 );
    if ( dref4287.tag == EditorMode_164_Normal_t ) {
        c4286 = ( ( StrCase_2068_StrCase1 ) ( ( (  from_dash_string256 ) ( ( "Normal" ) ,  ( 6 ) ) ) ) );
    }
    else {
        if ( dref4287.tag == EditorMode_164_Cmd_t ) {
            c4286 = ( ( StrCase_2068_StrCase2 ) ( ( ( StrConcat_2069_StrConcat ) ( ( ( StrConcat_2070_StrConcat ) ( ( ( StrConcat_1971_StrConcat ) ( ( ( StrConcat_1896_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Cmd(" ) ,  ( 4 ) ) ) ,  ( dref4287 .stuff .EditorMode_164_Cmd_s .field0 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "|" ) ,  ( 1 ) ) ) ) ) ,  ( dref4287 .stuff .EditorMode_164_Cmd_s .field1 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
        else {
            if ( dref4287.tag == EditorMode_164_Search_t ) {
                c4286 = ( ( StrCase_2068_StrCase2 ) ( ( ( StrConcat_2069_StrConcat ) ( ( ( StrConcat_2070_StrConcat ) ( ( ( StrConcat_1971_StrConcat ) ( ( ( StrConcat_1896_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Search(" ) ,  ( 7 ) ) ) ,  ( dref4287 .stuff .EditorMode_164_Search_s .field0 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "|" ) ,  ( 1 ) ) ) ) ) ,  ( dref4287 .stuff .EditorMode_164_Search_s .field1 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
            }
            else {
                if ( true ) {
                    return ( (  todo2072 ) ( ) );
                }
            }
        }
    }
    return ( (  chars2075 ) ( (  c4286 ) ) );
}

static  struct StrConcatIter_2049   into_dash_iter2066 (    struct StrConcat_2044  dref1504 ) {
    return ( (struct StrConcatIter_2049) { .f_left = ( (  chars654 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2067 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2049   chars2065 (    struct StrConcat_2044  self1515 ) {
    return ( (  into_dash_iter2066 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str2081 (    struct Screen_187 *  screen3571 ,    struct StrConcat_2044  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp361 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp361 ( (  y3577 ) , ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add310 ( (  op_dash_mul1433 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min514 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size298 ) ( (  op_dash_sub851 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2049  temp2082 =  into_dash_iter2064 ( ( (  chars2065 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_652  __cond2083 =  next2056 (&temp2082);
        if (  __cond2083 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2083 .stuff .Maybe_652_Just_s .field0;
        ( (  put_dash_char1658 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add310 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add310 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1002 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2046 (    struct Screen_187 *  screen3587 ,    struct StrConcat_2044  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum2047 ) ( ( (  map2063 ) ( ( (  chars2065 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1002 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub851 ( (  op_dash_sub851 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str2081 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann2045 (   struct env1863* env ,    struct StrConcat_2044  s4408 ) {
    ( (  draw_dash_str_dash_right2046 ) ( ( env->screen4401 ) ,  (  s4408 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4405 ) ) ) );
    (* env->curline4405 ) = (  op_dash_add310 ( ( * ( env->curline4405 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2086 {
    struct StrView_27  field0;
    struct Maybe_163  field1;
};

static struct StrConcat_2086 StrConcat_2086_StrConcat (  struct StrView_27  field0 ,  struct Maybe_163  field1 ) {
    return ( struct StrConcat_2086 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2085 {
    enum Unit_8  (*fun) (  struct env1864*  ,    struct StrConcat_2086  );
    struct env1864 env;
};

struct StrConcatIter_2093 {
    struct StrConcatIter_1875  f_left;
    struct AppendIter_912  f_right;
};

struct StrCaseIter_2092 {
    enum {
        StrCaseIter_2092_StrCaseIter1_t,
        StrCaseIter_2092_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_649  field0;
        } StrCaseIter_2092_StrCaseIter1_s;
        struct {
            struct StrConcatIter_2093  field0;
        } StrCaseIter_2092_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_2092 StrCaseIter_2092_StrCaseIter1 (  struct StrViewIter_649  field0 ) {
    return ( struct StrCaseIter_2092 ) { .tag = StrCaseIter_2092_StrCaseIter1_t, .stuff = { .StrCaseIter_2092_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_2092 StrCaseIter_2092_StrCaseIter2 (  struct StrConcatIter_2093  field0 ) {
    return ( struct StrCaseIter_2092 ) { .tag = StrCaseIter_2092_StrCaseIter2_t, .stuff = { .StrCaseIter_2092_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_2091 {
    struct StrViewIter_649  f_left;
    struct StrCaseIter_2092  f_right;
};

struct Map_2090 {
    struct StrConcatIter_2091  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2090 Map_2090_Map (  struct StrConcatIter_2091  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2090 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2090   into_dash_iter2095 (    struct Map_2090  self796 ) {
    return (  self796 );
}

static  struct Maybe_652   next2099 (    struct StrConcatIter_2093 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next1879 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next938 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next2098 (    struct StrCaseIter_2092 *  self1522 ) {
    struct StrCaseIter_2092 *  dref1523 = (  self1522 );
    if ( (* dref1523 ).tag == StrCaseIter_2092_StrCaseIter1_t ) {
        return ( (  next653 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_2092_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1523 ).tag == StrCaseIter_2092_StrCaseIter2_t ) {
            return ( (  next2099 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_2092_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_652   next2097 (    struct StrConcatIter_2091 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next2098 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_308   next2096 (    struct Map_2090 *  dref798 ) {
    struct Maybe_652  dref801 = ( (  next2097 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_652_None_t ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_652_Just_t ) {
            return ( ( Maybe_308_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_652_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2094 (    struct Map_2090  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_2090  it1099 = ( (  into_dash_iter2095 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_308  dref1100 = ( (  next2096 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_308_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_308_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_308_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2100 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2100);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp2101;
    return (  temp2101 );
}

static  int32_t   lam2102 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add310 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum2089 (    struct Map_2090  it1110 ) {
    return ( (  reduce2094 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2102 ) ) );
}

static  struct StrConcatIter_2091   into_dash_iter2104 (    struct StrConcatIter_2091  self1497 ) {
    return (  self1497 );
}

static  struct Map_2090   map2103 (    struct StrConcatIter_2091  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_2091  it808 = ( (  into_dash_iter2104 ) ( (  iterable805 ) ) );
    return ( ( Map_2090_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrCase_2108 {
    enum {
        StrCase_2108_StrCase1_t,
        StrCase_2108_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_2108_StrCase1_s;
        struct {
            struct StrConcat_525  field0;
        } StrCase_2108_StrCase2_s;
    } stuff;
};

static struct StrCase_2108 StrCase_2108_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_2108 ) { .tag = StrCase_2108_StrCase1_t, .stuff = { .StrCase_2108_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_2108 StrCase_2108_StrCase2 (  struct StrConcat_525  field0 ) {
    return ( struct StrCase_2108 ) { .tag = StrCase_2108_StrCase2_t, .stuff = { .StrCase_2108_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1875   into_dash_iter2115 (    struct StrConcat_526  dref1504 ) {
    return ( (struct StrConcatIter_1875) { .f_left = ( (  chars654 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars654 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1875   chars2114 (    struct StrConcat_526  self1515 ) {
    return ( (  into_dash_iter2115 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2093   into_dash_iter2113 (    struct StrConcat_525  dref1504 ) {
    return ( (struct StrConcatIter_2093) { .f_left = ( (  chars2114 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars952 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2093   chars2112 (    struct StrConcat_525  self1515 ) {
    return ( (  into_dash_iter2113 ) ( (  self1515 ) ) );
}

static  struct StrCaseIter_2092   into_dash_iter2111 (    struct StrCase_2108  self1528 ) {
    struct StrCase_2108  dref1529 = (  self1528 );
    if ( dref1529.tag == StrCase_2108_StrCase1_t ) {
        return ( ( StrCaseIter_2092_StrCaseIter1 ) ( ( (  chars654 ) ( ( dref1529 .stuff .StrCase_2108_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1529.tag == StrCase_2108_StrCase2_t ) {
            return ( ( StrCaseIter_2092_StrCaseIter2 ) ( ( (  chars2112 ) ( ( dref1529 .stuff .StrCase_2108_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_2092   chars2110 (    struct StrCase_2108  self1540 ) {
    return ( (  into_dash_iter2111 ) ( (  self1540 ) ) );
}

static  struct StrCaseIter_2092   chars2107 (    struct Maybe_163  self1554 ) {
    struct StrCase_2108  temp2109;
    struct StrCase_2108  c1555 = (  temp2109 );
    struct Maybe_163  dref1556 = (  self1554 );
    if ( dref1556.tag == Maybe_163_None_t ) {
        c1555 = ( ( StrCase_2108_StrCase1 ) ( ( (  from_dash_string256 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1556.tag == Maybe_163_Just_t ) {
            c1555 = ( ( StrCase_2108_StrCase2 ) ( ( ( StrConcat_525_StrConcat ) ( ( ( StrConcat_526_StrConcat ) ( ( (  from_dash_string256 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1556 .stuff .Maybe_163_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars2110 ) ( (  c1555 ) ) );
}

static  struct StrConcatIter_2091   into_dash_iter2106 (    struct StrConcat_2086  dref1504 ) {
    return ( (struct StrConcatIter_2091) { .f_left = ( (  chars654 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2107 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2091   chars2105 (    struct StrConcat_2086  self1515 ) {
    return ( (  into_dash_iter2106 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str2116 (    struct Screen_187 *  screen3571 ,    struct StrConcat_2086  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp361 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp361 ( (  y3577 ) , ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add310 ( (  op_dash_mul1433 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min514 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size298 ) ( (  op_dash_sub851 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2091  temp2117 =  into_dash_iter2104 ( ( (  chars2105 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_652  __cond2118 =  next2097 (&temp2117);
        if (  __cond2118 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2118 .stuff .Maybe_652_Just_s .field0;
        ( (  put_dash_char1658 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add310 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add310 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1002 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2088 (    struct Screen_187 *  screen3587 ,    struct StrConcat_2086  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum2089 ) ( ( (  map2103 ) ( ( (  chars2105 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1002 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub851 ( (  op_dash_sub851 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str2116 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann2087 (   struct env1864* env ,    struct StrConcat_2086  s4408 ) {
    ( (  draw_dash_str_dash_right2088 ) ( ( env->screen4401 ) ,  (  s4408 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4405 ) ) ) );
    (* env->curline4405 ) = (  op_dash_add310 ( ( * ( env->curline4405 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2123 {
    struct StrConcat_1662  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2123 StrConcat_2123_StrConcat (  struct StrConcat_1662  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2123 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2122 {
    struct StrConcat_2123  field0;
    int32_t  field1;
};

static struct StrConcat_2122 StrConcat_2122_StrConcat (  struct StrConcat_2123  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_2122 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2121 {
    struct StrConcat_2122  field0;
    struct Char_65  field1;
};

static struct StrConcat_2121 StrConcat_2121_StrConcat (  struct StrConcat_2122  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2121 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2120 {
    enum Unit_8  (*fun) (  struct env1865*  ,    struct StrConcat_2121  );
    struct env1865 env;
};

struct StrConcatIter_2131 {
    struct StrViewIter_649  f_left;
    struct IntStrIter_1624  f_right;
};

struct StrConcatIter_2130 {
    struct StrConcatIter_2131  f_left;
    struct StrViewIter_649  f_right;
};

struct StrConcatIter_2129 {
    struct StrConcatIter_2130  f_left;
    struct IntStrIter_1624  f_right;
};

struct StrConcatIter_2128 {
    struct StrConcatIter_2129  f_left;
    struct AppendIter_912  f_right;
};

struct Map_2127 {
    struct StrConcatIter_2128  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2127 Map_2127_Map (  struct StrConcatIter_2128  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2127 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2127   into_dash_iter2133 (    struct Map_2127  self796 ) {
    return (  self796 );
}

static  struct Maybe_652   next2138 (    struct StrConcatIter_2131 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next1627 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next2137 (    struct StrConcatIter_2130 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next2138 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next2136 (    struct StrConcatIter_2129 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next2137 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next1627 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next2135 (    struct StrConcatIter_2128 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next2136 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next938 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_308   next2134 (    struct Map_2127 *  dref798 ) {
    struct Maybe_652  dref801 = ( (  next2135 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_652_None_t ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_652_Just_t ) {
            return ( ( Maybe_308_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_652_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2132 (    struct Map_2127  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_2127  it1099 = ( (  into_dash_iter2133 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_308  dref1100 = ( (  next2134 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_308_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_308_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_308_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2139 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2139);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp2140;
    return (  temp2140 );
}

static  int32_t   lam2141 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add310 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum2126 (    struct Map_2127  it1110 ) {
    return ( (  reduce2132 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2141 ) ) );
}

static  struct StrConcatIter_2128   into_dash_iter2143 (    struct StrConcatIter_2128  self1497 ) {
    return (  self1497 );
}

static  struct Map_2127   map2142 (    struct StrConcatIter_2128  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_2128  it808 = ( (  into_dash_iter2143 ) ( (  iterable805 ) ) );
    return ( ( Map_2127_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_2131   into_dash_iter2151 (    struct StrConcat_1662  dref1504 ) {
    return ( (struct StrConcatIter_2131) { .f_left = ( (  chars654 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1640 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2131   chars2150 (    struct StrConcat_1662  self1515 ) {
    return ( (  into_dash_iter2151 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2130   into_dash_iter2149 (    struct StrConcat_2123  dref1504 ) {
    return ( (struct StrConcatIter_2130) { .f_left = ( (  chars2150 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars654 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2130   chars2148 (    struct StrConcat_2123  self1515 ) {
    return ( (  into_dash_iter2149 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2129   into_dash_iter2147 (    struct StrConcat_2122  dref1504 ) {
    return ( (struct StrConcatIter_2129) { .f_left = ( (  chars2148 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1640 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2129   chars2146 (    struct StrConcat_2122  self1515 ) {
    return ( (  into_dash_iter2147 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2128   into_dash_iter2145 (    struct StrConcat_2121  dref1504 ) {
    return ( (struct StrConcatIter_2128) { .f_left = ( (  chars2146 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars952 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2128   chars2144 (    struct StrConcat_2121  self1515 ) {
    return ( (  into_dash_iter2145 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str2152 (    struct Screen_187 *  screen3571 ,    struct StrConcat_2121  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp361 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp361 ( (  y3577 ) , ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add310 ( (  op_dash_mul1433 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min514 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size298 ) ( (  op_dash_sub851 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2128  temp2153 =  into_dash_iter2143 ( ( (  chars2144 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_652  __cond2154 =  next2135 (&temp2153);
        if (  __cond2154 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2154 .stuff .Maybe_652_Just_s .field0;
        ( (  put_dash_char1658 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add310 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add310 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1002 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2125 (    struct Screen_187 *  screen3587 ,    struct StrConcat_2121  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum2126 ) ( ( (  map2142 ) ( ( (  chars2144 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1002 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub851 ( (  op_dash_sub851 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str2152 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann2124 (   struct env1865* env ,    struct StrConcat_2121  s4408 ) {
    ( (  draw_dash_str_dash_right2125 ) ( ( env->screen4401 ) ,  (  s4408 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4405 ) ) ) );
    (* env->curline4405 ) = (  op_dash_add310 ( ( * ( env->curline4405 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2157 {
    struct StrConcat_2122  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2157 StrConcat_2157_StrConcat (  struct StrConcat_2122  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2157 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2156 {
    enum Unit_8  (*fun) (  struct env1866*  ,    struct StrConcat_2157  );
    struct env1866 env;
};

struct StrConcatIter_2162 {
    struct StrConcatIter_2129  f_left;
    struct StrViewIter_649  f_right;
};

struct Map_2161 {
    struct StrConcatIter_2162  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2161 Map_2161_Map (  struct StrConcatIter_2162  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2161 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2161   into_dash_iter2164 (    struct Map_2161  self796 ) {
    return (  self796 );
}

static  struct Maybe_652   next2166 (    struct StrConcatIter_2162 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next2136 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_308   next2165 (    struct Map_2161 *  dref798 ) {
    struct Maybe_652  dref801 = ( (  next2166 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_652_None_t ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_652_Just_t ) {
            return ( ( Maybe_308_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_652_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2163 (    struct Map_2161  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_2161  it1099 = ( (  into_dash_iter2164 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_308  dref1100 = ( (  next2165 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_308_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_308_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_308_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2167 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2167);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp2168;
    return (  temp2168 );
}

static  int32_t   lam2169 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add310 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum2160 (    struct Map_2161  it1110 ) {
    return ( (  reduce2163 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2169 ) ) );
}

static  struct StrConcatIter_2162   into_dash_iter2171 (    struct StrConcatIter_2162  self1497 ) {
    return (  self1497 );
}

static  struct Map_2161   map2170 (    struct StrConcatIter_2162  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_2162  it808 = ( (  into_dash_iter2171 ) ( (  iterable805 ) ) );
    return ( ( Map_2161_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_2162   into_dash_iter2173 (    struct StrConcat_2157  dref1504 ) {
    return ( (struct StrConcatIter_2162) { .f_left = ( (  chars2146 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars654 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2162   chars2172 (    struct StrConcat_2157  self1515 ) {
    return ( (  into_dash_iter2173 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str2174 (    struct Screen_187 *  screen3571 ,    struct StrConcat_2157  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp361 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp361 ( (  y3577 ) , ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add310 ( (  op_dash_mul1433 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min514 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size298 ) ( (  op_dash_sub851 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2162  temp2175 =  into_dash_iter2171 ( ( (  chars2172 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_652  __cond2176 =  next2166 (&temp2175);
        if (  __cond2176 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2176 .stuff .Maybe_652_Just_s .field0;
        ( (  put_dash_char1658 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add310 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add310 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1002 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2159 (    struct Screen_187 *  screen3587 ,    struct StrConcat_2157  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum2160 ) ( ( (  map2170 ) ( ( (  chars2172 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1002 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub851 ( (  op_dash_sub851 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str2174 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann2158 (   struct env1866* env ,    struct StrConcat_2157  s4408 ) {
    ( (  draw_dash_str_dash_right2159 ) ( ( env->screen4401 ) ,  (  s4408 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4405 ) ) ) );
    (* env->curline4405 ) = (  op_dash_add310 ( ( * ( env->curline4405 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion2178 {
    enum Unit_8  (*fun) (  struct env1867*  ,    struct StrConcat_75  );
    struct env1867 env;
};

struct Map_2182 {
    struct StrConcatIter_1328  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2182 Map_2182_Map (  struct StrConcatIter_1328  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2182 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2182   into_dash_iter2184 (    struct Map_2182  self796 ) {
    return (  self796 );
}

static  struct Maybe_308   next2185 (    struct Map_2182 *  dref798 ) {
    struct Maybe_652  dref801 = ( (  next1335 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_652_None_t ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_652_Just_t ) {
            return ( ( Maybe_308_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_652_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2183 (    struct Map_2182  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_2182  it1099 = ( (  into_dash_iter2184 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_308  dref1100 = ( (  next2185 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_308_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_308_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_308_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2186 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2186);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp2187;
    return (  temp2187 );
}

static  int32_t   lam2188 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add310 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum2181 (    struct Map_2182  it1110 ) {
    return ( (  reduce2183 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2188 ) ) );
}

static  struct StrConcatIter_1328   into_dash_iter2190 (    struct StrConcatIter_1328  self1497 ) {
    return (  self1497 );
}

static  struct Map_2182   map2189 (    struct StrConcatIter_1328  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_1328  it808 = ( (  into_dash_iter2190 ) ( (  iterable805 ) ) );
    return ( ( Map_2182_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  enum Unit_8   draw_dash_str2191 (    struct Screen_187 *  screen3571 ,    struct StrConcat_75  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp361 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp361 ( (  y3577 ) , ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add310 ( (  op_dash_mul1433 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min514 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size298 ) ( (  op_dash_sub851 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_1328  temp2192 =  into_dash_iter2190 ( ( (  chars1349 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_652  __cond2193 =  next1335 (&temp2192);
        if (  __cond2193 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2193 .stuff .Maybe_652_Just_s .field0;
        ( (  put_dash_char1658 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add310 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add310 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1002 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2180 (    struct Screen_187 *  screen3587 ,    struct StrConcat_75  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum2181 ) ( ( (  map2189 ) ( ( (  chars1349 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1002 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub851 ( (  op_dash_sub851 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str2191 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann2179 (   struct env1867* env ,    struct StrConcat_75  s4408 ) {
    ( (  draw_dash_str_dash_right2180 ) ( ( env->screen4401 ) ,  (  s4408 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4405 ) ) ) );
    (* env->curline4405 ) = (  op_dash_add310 ( ( * ( env->curline4405 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   render_dash_editor1615 (   struct env185* env ,    struct Screen_187 *  screen4401 ,    struct Editor_162 *  ed4403 ) {
    struct ScreenDims_194  screen_dash_dims4404 = ( (struct ScreenDims_194) { .f_from_dash_sx = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub851 ( ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen4401 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub851 ( ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen4401 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
    struct envunion186  temp1618 = ( (struct envunion186){ .fun = (  enum Unit_8  (*) (  struct env123*  ,    struct Screen_187 *  ,    struct Pane_141 *  ,    struct ScreenDims_194  ) )render1619 , .env =  env->envinst123 } );
    ( temp1618.fun ( &temp1618.env ,  (  screen4401 ) ,  ( (  pane1027 ) ( (  ed4403 ) ) ) ,  (  screen_dash_dims4404 ) ) );
    int32_t  temp1858 = (  from_dash_integral56 ( 0 ) );
    int32_t *  curline4405 = ( &temp1858 );
    struct env1859 envinst1859 = {
        .screen4401 =  screen4401 ,
        .curline4405 =  curline4405 ,
    };
    struct env1860 envinst1860 = {
        .screen4401 =  screen4401 ,
        .curline4405 =  curline4405 ,
    };
    struct env1861 envinst1861 = {
        .screen4401 =  screen4401 ,
        .curline4405 =  curline4405 ,
    };
    struct env1862 envinst1862 = {
        .screen4401 =  screen4401 ,
        .curline4405 =  curline4405 ,
    };
    struct env1863 envinst1863 = {
        .screen4401 =  screen4401 ,
        .curline4405 =  curline4405 ,
    };
    struct env1864 envinst1864 = {
        .screen4401 =  screen4401 ,
        .curline4405 =  curline4405 ,
    };
    struct env1865 envinst1865 = {
        .screen4401 =  screen4401 ,
        .curline4405 =  curline4405 ,
    };
    struct env1866 envinst1866 = {
        .screen4401 =  screen4401 ,
        .curline4405 =  curline4405 ,
    };
    struct env1867 envinst1867 = {
        .screen4401 =  screen4401 ,
        .curline4405 =  curline4405 ,
    };
    struct envunion1869  temp1868 = ( (struct envunion1869){ .fun = (  enum Unit_8  (*) (  struct env1859*  ,    struct StrConcat_1870  ) )ann1871 , .env =  envinst1859 } );
    ( temp1868.fun ( &temp1868.env ,  ( ( StrConcat_1870_StrConcat ) ( ( (  from_dash_string256 ) ( ( "mode: " ) ,  ( 6 ) ) ) ,  ( ( ( * (  ed4403 ) ) .f_pane ) .f_mode ) ) ) ) );
    enum CharType_1226  cur_dash_ty4409 = ( (  char_dash_type1228 ) ( ( (  char_dash_at1236 ) ( ( (  pane1027 ) ( (  ed4403 ) ) ) ,  ( ( ( * (  ed4403 ) ) .f_pane ) .f_cursor ) ) ) ) );
    struct envunion1893  temp1892 = ( (struct envunion1893){ .fun = (  enum Unit_8  (*) (  struct env1860*  ,    struct StrConcat_1894  ) )ann1897 , .env =  envinst1860 } );
    ( temp1892.fun ( &temp1892.env ,  ( ( StrConcat_1894_StrConcat ) ( ( ( StrConcat_1895_StrConcat ) ( ( ( StrConcat_1896_StrConcat ) ( ( (  from_dash_string256 ) ( ( "cur: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4403 ) ) .f_pane ) .f_cursor ) ) ) ,  ( (  from_dash_string256 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  (  cur_dash_ty4409 ) ) ) ) );
    struct envunion1947  temp1946 = ( (struct envunion1947){ .fun = (  enum Unit_8  (*) (  struct env1861*  ,    struct StrConcat_1948  ) )ann1949 , .env =  envinst1861 } );
    ( temp1946.fun ( &temp1946.env ,  ( ( StrConcat_1948_StrConcat ) ( ( (  from_dash_string256 ) ( ( "sel: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4403 ) ) .f_pane ) .f_sel ) ) ) ) );
    struct Maybe_1980  cp4412 = ( (  fmap_dash_maybe1983 ) ( ( ( * (  ed4403 ) ) .f_clipboard ) ,  (  lam1984 ) ) );
    struct envunion1994  temp1993 = ( (struct envunion1994){ .fun = (  enum Unit_8  (*) (  struct env1862*  ,    struct StrConcat_1995  ) )ann1996 , .env =  envinst1862 } );
    ( temp1993.fun ( &temp1993.env ,  ( ( StrConcat_1995_StrConcat ) ( ( (  from_dash_string256 ) ( ( "cp: " ) ,  ( 4 ) ) ) ,  (  cp4412 ) ) ) ) );
    struct Maybe_1980  st4415 = ( (  fmap_dash_maybe2038 ) ( ( ( * (  ed4403 ) ) .f_search_dash_term ) ,  (  lam2039 ) ) );
    struct envunion2041  temp2040 = ( (struct envunion2041){ .fun = (  enum Unit_8  (*) (  struct env1862*  ,    struct StrConcat_1995  ) )ann1996 , .env =  envinst1862 } );
    ( temp2040.fun ( &temp2040.env ,  ( ( StrConcat_1995_StrConcat ) ( ( (  from_dash_string256 ) ( ( "st: " ) ,  ( 4 ) ) ) ,  (  st4415 ) ) ) ) );
    struct envunion2043  temp2042 = ( (struct envunion2043){ .fun = (  enum Unit_8  (*) (  struct env1863*  ,    struct StrConcat_2044  ) )ann2045 , .env =  envinst1863 } );
    ( temp2042.fun ( &temp2042.env ,  ( ( StrConcat_2044_StrConcat ) ( ( (  from_dash_string256 ) ( ( "edmode: " ) ,  ( 8 ) ) ) ,  ( ( * (  ed4403 ) ) .f_mode ) ) ) ) );
    struct envunion2085  temp2084 = ( (struct envunion2085){ .fun = (  enum Unit_8  (*) (  struct env1864*  ,    struct StrConcat_2086  ) )ann2087 , .env =  envinst1864 } );
    ( temp2084.fun ( &temp2084.env ,  ( ( StrConcat_2086_StrConcat ) ( ( (  from_dash_string256 ) ( ( "msg: " ) ,  ( 5 ) ) ) ,  ( ( * (  ed4403 ) ) .f_msg ) ) ) ) );
    struct envunion2120  temp2119 = ( (struct envunion2120){ .fun = (  enum Unit_8  (*) (  struct env1865*  ,    struct StrConcat_2121  ) )ann2124 , .env =  envinst1865 } );
    ( temp2119.fun ( &temp2119.env ,  ( ( StrConcat_2121_StrConcat ) ( ( ( StrConcat_2122_StrConcat ) ( ( ( StrConcat_2123_StrConcat ) ( ( ( StrConcat_1662_StrConcat ) ( ( (  from_dash_string256 ) ( ( "sc-off: (" ) ,  ( 9 ) ) ) ,  ( ( ( ( * (  ed4403 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_top ) ) ) ,  ( (  from_dash_string256 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( ( ( ( * (  ed4403 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_left ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    struct envunion2156  temp2155 = ( (struct envunion2156){ .fun = (  enum Unit_8  (*) (  struct env1866*  ,    struct StrConcat_2157  ) )ann2158 , .env =  envinst1866 } );
    ( temp2155.fun ( &temp2155.env ,  ( ( StrConcat_2157_StrConcat ) ( ( ( StrConcat_2122_StrConcat ) ( ( ( StrConcat_2123_StrConcat ) ( ( ( StrConcat_1662_StrConcat ) ( ( (  from_dash_string256 ) ( ( "dims: { " ) ,  ( 8 ) ) ) ,  ( (  screen_dash_dims4404 ) .f_to_dash_sx ) ) ) ,  ( (  from_dash_string256 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  screen_dash_dims4404 ) .f_to_dash_sy ) ) ) ,  ( (  from_dash_string256 ) ( ( " }" ) ,  ( 2 ) ) ) ) ) ) );
    struct envunion2178  temp2177 = ( (struct envunion2178){ .fun = (  enum Unit_8  (*) (  struct env1867*  ,    struct StrConcat_75  ) )ann2179 , .env =  envinst1867 } );
    ( temp2177.fun ( &temp2177.env ,  ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "num actions: " ) ,  ( 13 ) ) ) ,  ( ( ( ( * ( ( ( * (  ed4403 ) ) .f_pane ) .f_buf ) ) .f_actions ) .f_list ) .f_count ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2196 {
    struct StrView_27  field0;
    uint32_t  field1;
};

static struct StrConcat_2196 StrConcat_2196_StrConcat (  struct StrView_27  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2196 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2195 {
    struct StrConcat_2196  field0;
    struct Char_65  field1;
};

static struct StrConcat_2195 StrConcat_2195_StrConcat (  struct StrConcat_2196  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2195 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2200 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2199 {
    struct StrViewIter_649  f_left;
    struct IntStrIter_2200  f_right;
};

struct StrConcatIter_2198 {
    struct StrConcatIter_2199  f_left;
    struct AppendIter_912  f_right;
};

static  struct StrConcatIter_2198   into_dash_iter2201 (    struct StrConcatIter_2198  self1497 ) {
    return (  self1497 );
}

static  uint32_t   op_dash_div2209 (    uint32_t  l245 ,    uint32_t  r247 ) {
    return ( (  l245 ) / (  r247 ) );
}

static  int32_t   count_dash_digits2208 (    uint32_t  self1436 ) {
    if ( (  eq451 ( (  self1436 ) , (  from_dash_integral252 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1437 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp251 ( (  self1436 ) , (  from_dash_integral252 ( 0 ) ) ) == 2 ) ) {
        self1436 = (  op_dash_div2209 ( (  self1436 ) , (  from_dash_integral252 ( 10 ) ) ) );
        digits1437 = (  op_dash_add310 ( (  digits1437 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1437 );
}

static  struct IntStrIter_2200   uint_dash_iter2207 (    uint32_t  int1443 ) {
    return ( (struct IntStrIter_2200) { .f_int = (  int1443 ) , .f_len = ( (  count_dash_digits2208 ) ( (  int1443 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2200   chars2206 (    uint32_t  self1455 ) {
    return ( (  uint_dash_iter2207 ) ( (  self1455 ) ) );
}

static  struct StrConcatIter_2199   into_dash_iter2205 (    struct StrConcat_2196  dref1504 ) {
    return ( (struct StrConcatIter_2199) { .f_left = ( (  chars654 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2206 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2199   chars2204 (    struct StrConcat_2196  self1515 ) {
    return ( (  into_dash_iter2205 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2198   into_dash_iter2203 (    struct StrConcat_2195  dref1504 ) {
    return ( (struct StrConcatIter_2198) { .f_left = ( (  chars2204 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars952 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2198   chars2202 (    struct StrConcat_2195  self1515 ) {
    return ( (  into_dash_iter2203 ) ( (  self1515 ) ) );
}

struct env2216 {
    ;
    uint32_t  base1210;
};

struct envunion2217 {
    uint32_t  (*fun) (  struct env2216*  ,    int32_t  ,    uint32_t  );
    struct env2216 env;
};

static  uint32_t   reduce2215 (    struct Range_725  iterable1093 ,    uint32_t  base1095 ,   struct envunion2217  fun1097 ) {
    uint32_t  x1098 = (  base1095 );
    struct RangeIter_728  it1099 = ( (  into_dash_iter730 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_308  dref1100 = ( (  next731 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_308_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_308_Just_t ) {
                struct envunion2217  temp2218 = (  fun1097 );
                x1098 = ( temp2218.fun ( &temp2218.env ,  ( dref1100 .stuff .Maybe_308_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2219 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2219);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp2220;
    return (  temp2220 );
}

static  uint32_t   lam2221 (   struct env2216* env ,    int32_t  item1214 ,    uint32_t  x1216 ) {
    return (  op_dash_mul722 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint32_t   pow2214 (    uint32_t  base1210 ,    int32_t  p1212 ) {
    struct env2216 envinst2216 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce2215 ) ( ( (  to733 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub851 ( (  p1212 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral252 ( 1 ) ) ,  ( (struct envunion2217){ .fun = (  uint32_t  (*) (  struct env2216*  ,    int32_t  ,    uint32_t  ) )lam2221 , .env =  envinst2216 } ) ) );
}

static  uint32_t   op_dash_sub2222 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) - (  r237 ) );
}

static  struct Maybe_652   next2213 (    struct IntStrIter_2200 *  self1428 ) {
    if ( ( ( * (  self1428 ) ) .f_negative ) ) {
        (*  self1428 ) .f_negative = ( false );
        return ( ( Maybe_652_Just ) ( ( (  from_dash_charlike257 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp361 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_652) { .tag = Maybe_652_None_t } );
    }
    uint32_t  trim_dash_down1429 = ( (  pow2214 ) ( (  from_dash_integral252 ( 10 ) ) ,  (  op_dash_sub851 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint32_t  upper1430 = (  op_dash_div2209 ( ( ( * (  self1428 ) ) .f_int ) , (  trim_dash_down1429 ) ) );
    uint32_t  upper_dash_mask1431 = (  op_dash_mul722 ( (  op_dash_div2209 ( (  upper1430 ) , (  from_dash_integral252 ( 10 ) ) ) ) , (  from_dash_integral252 ( 10 ) ) ) );
    uint8_t  digit1432 = ( ( (  cast255 ) ( (  op_dash_sub2222 ( (  upper1430 ) , (  upper_dash_mask1431 ) ) ) ) ) );
    (*  self1428 ) .f_len = (  op_dash_sub851 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1433 = ( (  from_dash_u8931 ) ( (  op_dash_add821 ( (  digit1432 ) , (  from_dash_integral248 ( 48 ) ) ) ) ) );
    return ( ( Maybe_652_Just ) ( (  digit_dash_char1433 ) ) );
}

static  struct Maybe_652   next2212 (    struct StrConcatIter_2199 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next2213 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next2211 (    struct StrConcatIter_2198 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next2212 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next938 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   draw_dash_str2194 (    struct Screen_187 *  screen3571 ,    struct StrConcat_2195  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp361 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp361 ( (  y3577 ) , ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add310 ( (  op_dash_mul1433 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min514 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size298 ) ( (  op_dash_sub851 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2198  temp2197 =  into_dash_iter2201 ( ( (  chars2202 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_652  __cond2210 =  next2211 (&temp2197);
        if (  __cond2210 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2210 .stuff .Maybe_652_Just_s .field0;
        ( (  put_dash_char1658 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add310 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add310 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1002 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct RenderState_2224 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_190  f_fg;
    struct Color_190  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_2229 {
    struct StrConcat_2195  field0;
    uint32_t  field1;
};

static struct StrConcat_2229 StrConcat_2229_StrConcat (  struct StrConcat_2195  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2229 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2228 {
    struct StrConcat_2229  field0;
    struct Char_65  field1;
};

static struct StrConcat_2228 StrConcat_2228_StrConcat (  struct StrConcat_2229  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2228 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2232 {
    struct StrConcatIter_2198  f_left;
    struct IntStrIter_2200  f_right;
};

struct StrConcatIter_2231 {
    struct StrConcatIter_2232  f_left;
    struct AppendIter_912  f_right;
};

static  struct StrConcatIter_2231   into_dash_iter2234 (    struct StrConcatIter_2231  self1497 ) {
    return (  self1497 );
}

static  struct Maybe_652   next2236 (    struct StrConcatIter_2232 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next2211 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next2213 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next2235 (    struct StrConcatIter_2231 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next2236 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next938 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2230 (    struct StrConcatIter_2231  iterable1074 ,    enum Unit_8 (*  fun1076 )(    struct Char_65  ) ) {
    struct StrConcatIter_2231  temp2233 = ( (  into_dash_iter2234 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2231 *  it1077 = ( &temp2233 );
    while ( ( true ) ) {
        struct Maybe_652  dref1078 = ( (  next2235 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_652_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_652_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_652_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_2232   into_dash_iter2240 (    struct StrConcat_2229  dref1504 ) {
    return ( (struct StrConcatIter_2232) { .f_left = ( (  chars2202 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2206 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2232   chars2239 (    struct StrConcat_2229  self1515 ) {
    return ( (  into_dash_iter2240 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2231   into_dash_iter2238 (    struct StrConcat_2228  dref1504 ) {
    return ( (struct StrConcatIter_2231) { .f_left = ( (  chars2239 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars952 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2231   chars2237 (    struct StrConcat_2228  self1515 ) {
    return ( (  into_dash_iter2238 ) ( (  self1515 ) ) );
}

static  enum Unit_8   print2227 (    struct StrConcat_2228  s2579 ) {
    ( (  for_dash_each2230 ) ( ( (  chars2237 ) ( (  s2579 ) ) ) ,  (  printf_dash_char240 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_cursor_dash_to2226 (    uint32_t  x2593 ,    uint32_t  y2595 ) {
    uint32_t  x2596 = (  op_dash_add823 ( (  x2593 ) , (  from_dash_integral252 ( 1 ) ) ) );
    uint32_t  y2597 = (  op_dash_add823 ( (  y2595 ) , (  from_dash_integral252 ( 1 ) ) ) );
    ( (  print2227 ) ( ( ( StrConcat_2228_StrConcat ) ( ( ( StrConcat_2229_StrConcat ) ( ( ( StrConcat_2195_StrConcat ) ( ( ( StrConcat_2196_StrConcat ) ( ( (  from_dash_string256 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2597 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2596 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_188   subslice2243 (    struct Slice_188  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    struct Cell_189 *  begin_dash_ptr1788 = ( (  offset_dash_ptr737 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp220 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp220 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_188) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub348 ( ( (  min375 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_188) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

struct SliceIter_2246 {
    struct Slice_188  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2245 {
    struct SliceIter_2246  f_left_dash_it;
    struct SliceIter_2246  f_right_dash_it;
};

struct Tuple2_2247 {
    struct Cell_189  field0;
    struct Cell_189  field1;
};

static struct Tuple2_2247 Tuple2_2247_Tuple2 (  struct Cell_189  field0 ,  struct Cell_189  field1 ) {
    return ( struct Tuple2_2247 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2249 {
    bool (*  fun1135 )(    struct Tuple2_2247  );
};

struct envunion2250 {
    bool  (*fun) (  struct env2249*  ,    struct Tuple2_2247  ,    bool  );
    struct env2249 env;
};

static  struct Zip_2245   into_dash_iter2251 (    struct Zip_2245  self911 ) {
    return (  self911 );
}

struct Maybe_2252 {
    enum {
        Maybe_2252_None_t,
        Maybe_2252_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2247  field0;
        } Maybe_2252_Just_s;
    } stuff;
};

static struct Maybe_2252 Maybe_2252_Just (  struct Tuple2_2247  field0 ) {
    return ( struct Maybe_2252 ) { .tag = Maybe_2252_Just_t, .stuff = { .Maybe_2252_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_742   next2254 (    struct SliceIter_2246 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp220 ( (  op_dash_add268 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_742) { .tag = Maybe_742_None_t } );
    }
    struct Cell_189  elem1831 = ( * ( (  offset_dash_ptr737 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64297 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add268 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_742_Just ) ( (  elem1831 ) ) );
}

static  struct Maybe_2252   next2253 (    struct Zip_2245 *  self914 ) {
    struct Zip_2245  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_742  dref916 = ( (  next2254 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_742_None_t ) {
            return ( (struct Maybe_2252) { .tag = Maybe_2252_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_742_Just_t ) {
                struct Maybe_742  dref918 = ( (  next2254 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_742_None_t ) {
                    return ( (struct Maybe_2252) { .tag = Maybe_2252_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_742_Just_t ) {
                        ( (  next2254 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next2254 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2252_Just ) ( ( ( Tuple2_2247_Tuple2 ) ( ( dref916 .stuff .Maybe_742_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_742_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce2248 (    struct Zip_2245  iterable1093 ,    bool  base1095 ,   struct envunion2250  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_2245  it1099 = ( (  into_dash_iter2251 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_2252  dref1100 = ( (  next2253 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_2252_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_2252_Just_t ) {
                struct envunion2250  temp2255 = (  fun1097 );
                x1098 = ( temp2255.fun ( &temp2255.env ,  ( dref1100 .stuff .Maybe_2252_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2256 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2256);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2257;
    return (  temp2257 );
}

static  bool   lam2258 (   struct env2249* env ,    struct Tuple2_2247  e1137 ,    bool  x1139 ) {
    return ( ( ( env->fun1135 ) ( (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any2244 (    struct Zip_2245  it1133 ,    bool (*  fun1135 )(    struct Tuple2_2247  ) ) {
    struct env2249 envinst2249 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce2248 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion2250){ .fun = (  bool  (*) (  struct env2249*  ,    struct Tuple2_2247  ,    bool  ) )lam2258 , .env =  envinst2249 } ) ) );
}

static  struct SliceIter_2246   into_dash_iter2260 (    struct Slice_188  self1823 ) {
    return ( (struct SliceIter_2246) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2245   zip2259 (    struct Slice_188  left922 ,    struct Slice_188  right924 ) {
    struct SliceIter_2246  left_dash_it925 = ( (  into_dash_iter2260 ) ( (  left922 ) ) );
    struct SliceIter_2246  right_dash_it926 = ( (  into_dash_iter2260 ) ( (  right924 ) ) );
    return ( (struct Zip_2245) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

struct Tuple2_2264 {
    struct Color_190  field0;
    struct Color_190  field1;
};

static struct Tuple2_2264 Tuple2_2264_Tuple2 (  struct Color_190  field0 ,  struct Color_190  field1 ) {
    return ( struct Tuple2_2264 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_191 *   cast2268 (    int32_t *  x356 ) {
    return ( (enum Color8_191 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2266 (    enum Color8_191  x573 ) {
    int32_t  temp2267 = ( (  zeroed894 ) ( ) );
    int32_t *  y574 = ( &temp2267 );
    enum Color8_191 *  yp575 = ( (  cast2268 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq2265 (    enum Color8_191  l2621 ,    enum Color8_191  r2623 ) {
    return (  eq364 ( ( ( (  cast_dash_on_dash_zeroed2266 ) ( (  l2621 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2266 ) ( (  r2623 ) ) ) ) );
}

static  enum Color16_192 *   cast2272 (    int32_t *  x356 ) {
    return ( (enum Color16_192 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2270 (    enum Color16_192  x573 ) {
    int32_t  temp2271 = ( (  zeroed894 ) ( ) );
    int32_t *  y574 = ( &temp2271 );
    enum Color16_192 *  yp575 = ( (  cast2272 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq2269 (    enum Color16_192  l2627 ,    enum Color16_192  r2629 ) {
    return (  eq364 ( ( ( (  cast_dash_on_dash_zeroed2270 ) ( (  l2627 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2270 ) ( (  r2629 ) ) ) ) );
}

static  bool   eq2273 (    struct RGB_193  l2657 ,    struct RGB_193  r2659 ) {
    return ( ( (  eq244 ( ( (  l2657 ) .f_r ) , ( (  r2659 ) .f_r ) ) ) && (  eq244 ( ( (  l2657 ) .f_g ) , ( (  r2659 ) .f_g ) ) ) ) && (  eq244 ( ( (  l2657 ) .f_b ) , ( (  r2659 ) .f_b ) ) ) );
}

static  bool   eq2263 (    struct Color_190  l2680 ,    struct Color_190  r2682 ) {
    return ( {  struct Tuple2_2264  dref2683 = ( ( Tuple2_2264_Tuple2 ) ( (  l2680 ) ,  (  r2682 ) ) ) ; dref2683 .field0.tag == Color_190_ColorDefault_t && dref2683 .field1.tag == Color_190_ColorDefault_t ? ( true ) : dref2683 .field0.tag == Color_190_Color8_t && dref2683 .field1.tag == Color_190_Color8_t ? (  eq2265 ( ( dref2683 .field0 .stuff .Color_190_Color8_s .field0 ) , ( dref2683 .field1 .stuff .Color_190_Color8_s .field0 ) ) ) : dref2683 .field0.tag == Color_190_Color16_t && dref2683 .field1.tag == Color_190_Color16_t ? (  eq2269 ( ( dref2683 .field0 .stuff .Color_190_Color16_s .field0 ) , ( dref2683 .field1 .stuff .Color_190_Color16_s .field0 ) ) ) : dref2683 .field0.tag == Color_190_Color256_t && dref2683 .field1.tag == Color_190_Color256_t ? (  eq244 ( ( dref2683 .field0 .stuff .Color_190_Color256_s .field0 ) , ( dref2683 .field1 .stuff .Color_190_Color256_s .field0 ) ) ) : dref2683 .field0.tag == Color_190_ColorRGB_t && dref2683 .field1.tag == Color_190_ColorRGB_t ? (  eq2273 ( ( dref2683 .field0 .stuff .Color_190_ColorRGB_s .field0 ) , ( dref2683 .field1 .stuff .Color_190_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2262 (    struct Cell_189  l3444 ,    struct Cell_189  r3446 ) {
    if ( ( !  eq447 ( ( (  l3444 ) .f_c ) , ( (  r3446 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2263 ( ( (  l3444 ) .f_fg ) , ( (  r3446 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2263 ( ( (  l3444 ) .f_bg ) , ( (  r3446 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam2261 (    struct Tuple2_2247  dref3500 ) {
    return ( !  eq2262 ( ( dref3500 .field0 ) , ( dref3500 .field1 ) ) );
}

static  enum Unit_8   set_dash_default_dash_fg2276 (  ) {
    ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg82277 (    enum Color8_191  color2632 ) {
    enum Color8_191  dref2633 = (  color2632 );
    switch (  dref2633 ) {
        case Color8_191_Black8 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_191_Red8 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_191_Green8 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_191_Yellow8 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_191_Blue8 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_191_Magenta8 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_191_Cyan8 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_191_White8 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg162278 (    enum Color16_192  color2636 ) {
    enum Color16_192  dref2637 = (  color2636 );
    switch (  dref2637 ) {
        case Color16_192_Black16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_Red16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_Green16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_Yellow16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_Blue16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_Magenta16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_Cyan16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_White16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_BrightBlack16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_BrightRed16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_BrightGreen16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_BrightYellow16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_BrightBlue16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_BrightMagenta16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_BrightCyan16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_BrightWhite16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2282 {
    struct StrView_27  field0;
    uint8_t  field1;
};

static struct StrConcat_2282 StrConcat_2282_StrConcat (  struct StrView_27  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2282 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2281 {
    struct StrConcat_2282  field0;
    struct Char_65  field1;
};

static struct StrConcat_2281 StrConcat_2281_StrConcat (  struct StrConcat_2282  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2281 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2286 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2285 {
    struct StrViewIter_649  f_left;
    struct IntStrIter_2286  f_right;
};

struct StrConcatIter_2284 {
    struct StrConcatIter_2285  f_left;
    struct AppendIter_912  f_right;
};

static  struct StrConcatIter_2284   into_dash_iter2288 (    struct StrConcatIter_2284  self1497 ) {
    return (  self1497 );
}

struct env2294 {
    uint8_t  base1210;
    ;
};

struct envunion2295 {
    uint8_t  (*fun) (  struct env2294*  ,    int32_t  ,    uint8_t  );
    struct env2294 env;
};

static  uint8_t   reduce2293 (    struct Range_725  iterable1093 ,    uint8_t  base1095 ,   struct envunion2295  fun1097 ) {
    uint8_t  x1098 = (  base1095 );
    struct RangeIter_728  it1099 = ( (  into_dash_iter730 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_308  dref1100 = ( (  next731 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_308_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_308_Just_t ) {
                struct envunion2295  temp2296 = (  fun1097 );
                x1098 = ( temp2296.fun ( &temp2296.env ,  ( dref1100 .stuff .Maybe_308_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2297 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2297);
    exit ( 1 );
    ( Unit_8_Unit );
    uint8_t  temp2298;
    return (  temp2298 );
}

static  uint8_t   op_dash_mul2300 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam2299 (   struct env2294* env ,    int32_t  item1214 ,    uint8_t  x1216 ) {
    return (  op_dash_mul2300 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint8_t   pow2292 (    uint8_t  base1210 ,    int32_t  p1212 ) {
    struct env2294 envinst2294 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce2293 ) ( ( (  to733 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub851 ( (  p1212 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral248 ( 1 ) ) ,  ( (struct envunion2295){ .fun = (  uint8_t  (*) (  struct env2294*  ,    int32_t  ,    uint8_t  ) )lam2299 , .env =  envinst2294 } ) ) );
}

static  uint8_t   op_dash_div2301 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast2302 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_652   next2291 (    struct IntStrIter_2286 *  self1428 ) {
    if ( ( ( * (  self1428 ) ) .f_negative ) ) {
        (*  self1428 ) .f_negative = ( false );
        return ( ( Maybe_652_Just ) ( ( (  from_dash_charlike257 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp361 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_652) { .tag = Maybe_652_None_t } );
    }
    uint8_t  trim_dash_down1429 = ( (  pow2292 ) ( (  from_dash_integral248 ( 10 ) ) ,  (  op_dash_sub851 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint8_t  upper1430 = (  op_dash_div2301 ( ( ( * (  self1428 ) ) .f_int ) , (  trim_dash_down1429 ) ) );
    uint8_t  upper_dash_mask1431 = (  op_dash_mul2300 ( (  op_dash_div2301 ( (  upper1430 ) , (  from_dash_integral248 ( 10 ) ) ) ) , (  from_dash_integral248 ( 10 ) ) ) );
    uint8_t  digit1432 = ( ( (  cast2302 ) ( (  op_dash_sub820 ( (  upper1430 ) , (  upper_dash_mask1431 ) ) ) ) ) );
    (*  self1428 ) .f_len = (  op_dash_sub851 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1433 = ( (  from_dash_u8931 ) ( (  op_dash_add821 ( (  digit1432 ) , (  from_dash_integral248 ( 48 ) ) ) ) ) );
    return ( ( Maybe_652_Just ) ( (  digit_dash_char1433 ) ) );
}

static  struct Maybe_652   next2290 (    struct StrConcatIter_2285 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next653 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next2291 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next2289 (    struct StrConcatIter_2284 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next2290 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next938 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2283 (    struct StrConcatIter_2284  iterable1074 ,    enum Unit_8 (*  fun1076 )(    struct Char_65  ) ) {
    struct StrConcatIter_2284  temp2287 = ( (  into_dash_iter2288 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2284 *  it1077 = ( &temp2287 );
    while ( ( true ) ) {
        struct Maybe_652  dref1078 = ( (  next2289 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_652_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_652_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_652_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2309 (    uint8_t  self1436 ) {
    if ( (  eq244 ( (  self1436 ) , (  from_dash_integral248 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1437 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp261 ( (  self1436 ) , (  from_dash_integral248 ( 0 ) ) ) == 2 ) ) {
        self1436 = (  op_dash_div2301 ( (  self1436 ) , (  from_dash_integral248 ( 10 ) ) ) );
        digits1437 = (  op_dash_add310 ( (  digits1437 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1437 );
}

static  struct IntStrIter_2286   uint_dash_iter2308 (    uint8_t  int1443 ) {
    return ( (struct IntStrIter_2286) { .f_int = (  int1443 ) , .f_len = ( (  count_dash_digits2309 ) ( (  int1443 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2286   chars2307 (    uint8_t  self1461 ) {
    return ( (  uint_dash_iter2308 ) ( (  self1461 ) ) );
}

static  struct StrConcatIter_2285   into_dash_iter2306 (    struct StrConcat_2282  dref1504 ) {
    return ( (struct StrConcatIter_2285) { .f_left = ( (  chars654 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2307 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2285   chars2305 (    struct StrConcat_2282  self1515 ) {
    return ( (  into_dash_iter2306 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2284   into_dash_iter2304 (    struct StrConcat_2281  dref1504 ) {
    return ( (struct StrConcatIter_2284) { .f_left = ( (  chars2305 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars952 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2284   chars2303 (    struct StrConcat_2281  self1515 ) {
    return ( (  into_dash_iter2304 ) ( (  self1515 ) ) );
}

static  enum Unit_8   print2280 (    struct StrConcat_2281  s2579 ) {
    ( (  for_dash_each2283 ) ( ( (  chars2303 ) ( (  s2579 ) ) ) ,  (  printf_dash_char240 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2562279 (    uint8_t  color2650 ) {
    ( (  print2280 ) ( ( ( StrConcat_2281_StrConcat ) ( ( ( StrConcat_2282_StrConcat ) ( ( (  from_dash_string256 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2650 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2315 {
    struct StrConcat_2281  field0;
    uint8_t  field1;
};

static struct StrConcat_2315 StrConcat_2315_StrConcat (  struct StrConcat_2281  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2315 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2314 {
    struct StrConcat_2315  field0;
    struct Char_65  field1;
};

static struct StrConcat_2314 StrConcat_2314_StrConcat (  struct StrConcat_2315  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2314 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2313 {
    struct StrConcat_2314  field0;
    uint8_t  field1;
};

static struct StrConcat_2313 StrConcat_2313_StrConcat (  struct StrConcat_2314  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2313 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2312 {
    struct StrConcat_2313  field0;
    struct Char_65  field1;
};

static struct StrConcat_2312 StrConcat_2312_StrConcat (  struct StrConcat_2313  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2312 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2320 {
    struct StrConcatIter_2284  f_left;
    struct IntStrIter_2286  f_right;
};

struct StrConcatIter_2319 {
    struct StrConcatIter_2320  f_left;
    struct AppendIter_912  f_right;
};

struct StrConcatIter_2318 {
    struct StrConcatIter_2319  f_left;
    struct IntStrIter_2286  f_right;
};

struct StrConcatIter_2317 {
    struct StrConcatIter_2318  f_left;
    struct AppendIter_912  f_right;
};

static  struct StrConcatIter_2317   into_dash_iter2322 (    struct StrConcatIter_2317  self1497 ) {
    return (  self1497 );
}

static  struct Maybe_652   next2326 (    struct StrConcatIter_2320 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next2289 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next2291 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next2325 (    struct StrConcatIter_2319 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next2326 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next938 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next2324 (    struct StrConcatIter_2318 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next2325 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next2291 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_652   next2323 (    struct StrConcatIter_2317 *  self1500 ) {
    struct Maybe_652  dref1501 = ( (  next2324 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_652_Just_t ) {
        return ( ( Maybe_652_Just ) ( ( dref1501 .stuff .Maybe_652_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_652_None_t ) {
            return ( (  next938 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2316 (    struct StrConcatIter_2317  iterable1074 ,    enum Unit_8 (*  fun1076 )(    struct Char_65  ) ) {
    struct StrConcatIter_2317  temp2321 = ( (  into_dash_iter2322 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2317 *  it1077 = ( &temp2321 );
    while ( ( true ) ) {
        struct Maybe_652  dref1078 = ( (  next2323 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_652_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_652_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_652_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_2320   into_dash_iter2334 (    struct StrConcat_2315  dref1504 ) {
    return ( (struct StrConcatIter_2320) { .f_left = ( (  chars2303 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2307 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2320   chars2333 (    struct StrConcat_2315  self1515 ) {
    return ( (  into_dash_iter2334 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2319   into_dash_iter2332 (    struct StrConcat_2314  dref1504 ) {
    return ( (struct StrConcatIter_2319) { .f_left = ( (  chars2333 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars952 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2319   chars2331 (    struct StrConcat_2314  self1515 ) {
    return ( (  into_dash_iter2332 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2318   into_dash_iter2330 (    struct StrConcat_2313  dref1504 ) {
    return ( (struct StrConcatIter_2318) { .f_left = ( (  chars2331 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2307 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2318   chars2329 (    struct StrConcat_2313  self1515 ) {
    return ( (  into_dash_iter2330 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2317   into_dash_iter2328 (    struct StrConcat_2312  dref1504 ) {
    return ( (struct StrConcatIter_2317) { .f_left = ( (  chars2329 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars952 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2317   chars2327 (    struct StrConcat_2312  self1515 ) {
    return ( (  into_dash_iter2328 ) ( (  self1515 ) ) );
}

static  enum Unit_8   print2311 (    struct StrConcat_2312  s2579 ) {
    ( (  for_dash_each2316 ) ( ( (  chars2327 ) ( (  s2579 ) ) ) ,  (  printf_dash_char240 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg_dash_rgb2310 (    struct RGB_193  c2673 ) {
    ( (  print2311 ) ( ( ( StrConcat_2312_StrConcat ) ( ( ( StrConcat_2313_StrConcat ) ( ( ( StrConcat_2314_StrConcat ) ( ( ( StrConcat_2315_StrConcat ) ( ( ( StrConcat_2281_StrConcat ) ( ( ( StrConcat_2282_StrConcat ) ( ( (  from_dash_string256 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2673 ) .f_r ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2673 ) .f_g ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2673 ) .f_b ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2275 (    struct Color_190  c2694 ) {
    struct Color_190  dref2695 = (  c2694 );
    if ( dref2695.tag == Color_190_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2276 ) ( ) );
    }
    else {
        if ( dref2695.tag == Color_190_Color8_t ) {
            ( (  set_dash_fg82277 ) ( ( dref2695 .stuff .Color_190_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2695.tag == Color_190_Color16_t ) {
                ( (  set_dash_fg162278 ) ( ( dref2695 .stuff .Color_190_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2695.tag == Color_190_Color256_t ) {
                    ( (  set_dash_fg2562279 ) ( ( dref2695 .stuff .Color_190_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2695.tag == Color_190_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2310 ) ( ( dref2695 .stuff .Color_190_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_default_dash_bg2336 (  ) {
    ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg82337 (    enum Color8_191  color2640 ) {
    enum Color8_191  dref2641 = (  color2640 );
    switch (  dref2641 ) {
        case Color8_191_Black8 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_191_Red8 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_191_Green8 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_191_Yellow8 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_191_Blue8 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_191_Magenta8 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_191_Cyan8 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_191_White8 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg162338 (    enum Color16_192  color2644 ) {
    enum Color16_192  dref2645 = (  color2644 );
    switch (  dref2645 ) {
        case Color16_192_Black16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_Red16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_Green16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_Yellow16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_Blue16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_Magenta16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_Cyan16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_White16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_192_BrightBlack16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_192_BrightRed16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_192_BrightGreen16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_192_BrightYellow16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_192_BrightBlue16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_192_BrightMagenta16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_192_BrightCyan16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_192_BrightWhite16 : {
            ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2562339 (    uint8_t  color2653 ) {
    ( (  print2280 ) ( ( ( StrConcat_2281_StrConcat ) ( ( ( StrConcat_2282_StrConcat ) ( ( (  from_dash_string256 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2653 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg_dash_rgb2340 (    struct RGB_193  c2676 ) {
    ( (  print2311 ) ( ( ( StrConcat_2312_StrConcat ) ( ( ( StrConcat_2313_StrConcat ) ( ( ( StrConcat_2314_StrConcat ) ( ( ( StrConcat_2315_StrConcat ) ( ( ( StrConcat_2281_StrConcat ) ( ( ( StrConcat_2282_StrConcat ) ( ( (  from_dash_string256 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2676 ) .f_r ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2676 ) .f_g ) ) ) ,  ( (  from_dash_charlike257 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2676 ) .f_b ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2335 (    struct Color_190  c2702 ) {
    struct Color_190  dref2703 = (  c2702 );
    if ( dref2703.tag == Color_190_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2336 ) ( ) );
    }
    else {
        if ( dref2703.tag == Color_190_Color8_t ) {
            ( (  set_dash_bg82337 ) ( ( dref2703 .stuff .Color_190_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2703.tag == Color_190_Color16_t ) {
                ( (  set_dash_bg162338 ) ( ( dref2703 .stuff .Color_190_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2703.tag == Color_190_Color256_t ) {
                    ( (  set_dash_bg2562339 ) ( ( dref2703 .stuff .Color_190_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2703.tag == Color_190_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2340 ) ( ( dref2703 .stuff .Color_190_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  uint32_t   i32_dash_u322341 (    int32_t  x603 ) {
    return ( (uint32_t ) (  x603 ) );
}

static  enum Unit_8   emit_dash_cell2274 (    struct RenderState_2224 *  rs3476 ,    struct Cell_189 *  c3478 ,    uint32_t  x3480 ,    uint32_t  y3482 ) {
    if ( ( ( !  eq451 ( (  x3480 ) , ( ( * (  rs3476 ) ) .f_x ) ) ) || ( !  eq451 ( (  y3482 ) , ( ( * (  rs3476 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to2226 ) ( (  x3480 ) ,  (  y3482 ) ) );
        (*  rs3476 ) .f_x = (  x3480 );
        (*  rs3476 ) .f_y = (  y3482 );
    }
    struct Char_65  char3483 = ( ( * (  c3478 ) ) .f_c );
    struct Color_190  bg3484 = ( ( * (  c3478 ) ) .f_bg );
    if ( (  eq364 ( ( ( * (  c3478 ) ) .f_char_dash_width ) , (  op_dash_neg682 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        char3483 = ( (  from_dash_charlike257 ) ( ( " " ) ,  ( 1 ) ) );
        bg3484 = ( ( Color_190_Color8 ) ( ( Color8_191_Red8 ) ) );
    }
    if ( ( !  eq2263 ( ( ( * (  rs3476 ) ) .f_fg ) , ( ( * (  c3478 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2275 ) ( ( ( * (  c3478 ) ) .f_fg ) ) );
        (*  rs3476 ) .f_fg = ( ( * (  c3478 ) ) .f_fg );
    }
    if ( ( !  eq2263 ( ( ( * (  rs3476 ) ) .f_bg ) , (  bg3484 ) ) ) ) {
        ( (  set_dash_bg2335 ) ( (  bg3484 ) ) );
        (*  rs3476 ) .f_bg = (  bg3484 );
    }
    ( (  print_dash_str239 ) ( (  char3483 ) ) );
    uint32_t  char_dash_width3485 = ( (  i32_dash_u322341 ) ( ( (  max1003 ) ( ( ( * (  c3478 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) ) ) );
    (*  rs3476 ) .f_x = (  op_dash_add823 ( ( ( * (  rs3476 ) ) .f_x ) , (  char_dash_width3485 ) ) );
    return ( Unit_8_Unit );
}

struct Zip_2344 {
    struct SliceIter_2246  f_left_dash_it;
    struct FromIter_302  f_right_dash_it;
};

struct env2345 {
    ;
    struct Slice_188  dest1854;
    ;
};

struct Tuple2_2347 {
    struct Cell_189  field0;
    int32_t  field1;
};

static struct Tuple2_2347 Tuple2_2347_Tuple2 (  struct Cell_189  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2347 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2346 {
    enum Unit_8  (*fun) (  struct env2345*  ,    struct Tuple2_2347  );
    struct env2345 env;
};

static  struct Zip_2344   into_dash_iter2349 (    struct Zip_2344  self911 ) {
    return (  self911 );
}

struct Maybe_2350 {
    enum {
        Maybe_2350_None_t,
        Maybe_2350_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2347  field0;
        } Maybe_2350_Just_s;
    } stuff;
};

static struct Maybe_2350 Maybe_2350_Just (  struct Tuple2_2347  field0 ) {
    return ( struct Maybe_2350 ) { .tag = Maybe_2350_Just_t, .stuff = { .Maybe_2350_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2350   next2351 (    struct Zip_2344 *  self914 ) {
    struct Zip_2344  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_742  dref916 = ( (  next2254 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_742_None_t ) {
            return ( (struct Maybe_2350) { .tag = Maybe_2350_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_742_Just_t ) {
                struct Maybe_308  dref918 = ( (  next309 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_308_None_t ) {
                    return ( (struct Maybe_2350) { .tag = Maybe_2350_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_308_Just_t ) {
                        ( (  next2254 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next309 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2350_Just ) ( ( ( Tuple2_2347_Tuple2 ) ( ( dref916 .stuff .Maybe_742_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_308_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2343 (    struct Zip_2344  iterable1074 ,   struct envunion2346  fun1076 ) {
    struct Zip_2344  temp2348 = ( (  into_dash_iter2349 ) ( (  iterable1074 ) ) );
    struct Zip_2344 *  it1077 = ( &temp2348 );
    while ( ( true ) ) {
        struct Maybe_2350  dref1078 = ( (  next2351 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_2350_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_2350_Just_t ) {
                struct envunion2346  temp2352 = (  fun1076 );
                ( temp2352.fun ( &temp2352.env ,  ( dref1078 .stuff .Maybe_2350_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_2344   zip2353 (    struct Slice_188  left922 ,    struct FromIter_302  right924 ) {
    struct SliceIter_2246  left_dash_it925 = ( (  into_dash_iter2260 ) ( (  left922 ) ) );
    struct FromIter_302  right_dash_it926 = ( (  into_dash_iter314 ) ( (  right924 ) ) );
    return ( (struct Zip_2344) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_8   lam2354 (   struct env2345* env ,    struct Tuple2_2347  dref1855 ) {
    return ( (  set735 ) ( ( env->dest1854 ) ,  ( (  i32_dash_size298 ) ( ( dref1855 .field1 ) ) ) ,  ( dref1855 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to2342 (    struct Slice_188  src1852 ,    struct Slice_188  dest1854 ) {
    if ( (  cmp220 ( ( (  src1852 ) .f_count ) , ( (  dest1854 ) .f_count ) ) == 2 ) ) {
        ( (  panic498 ) ( ( ( StrConcat_499_StrConcat ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string256 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1852 ) .f_count ) ) ) ,  ( (  from_dash_string256 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1854 ) .f_count ) ) ) ,  ( (  from_dash_string256 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2345 envinst2345 = {
        .dest1854 =  dest1854 ,
    };
    ( (  for_dash_each2343 ) ( ( (  zip2353 ) ( (  src1852 ) ,  ( (  from315 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2346){ .fun = (  enum Unit_8  (*) (  struct env2345*  ,    struct Tuple2_2347  ) )lam2354 , .env =  envinst2345 } ) ) );
    return ( Unit_8_Unit );
}

static  uint32_t   render_dash_screen2223 (    struct Screen_187 *  screen3488 ) {
    int32_t  w3489 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3488 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3490 = ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen3488 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_2224  temp2225 = ( (struct RenderState_2224) { .f_x = (  from_dash_integral252 ( 0 ) ) , .f_y = (  from_dash_integral252 ( 0 ) ) , .f_fg = ( (struct Color_190) { .tag = Color_190_ColorDefault_t } ) , .f_bg = ( (struct Color_190) { .tag = Color_190_ColorDefault_t } ) , .f_changes = (  from_dash_integral252 ( 0 ) ) } );
    struct RenderState_2224 *  rs3491 = ( &temp2225 );
    ( (  move_dash_cursor_dash_to2226 ) ( (  from_dash_integral252 ( 0 ) ) ,  (  from_dash_integral252 ( 0 ) ) ) );
    struct RangeIter_728  temp2241 =  into_dash_iter730 ( ( (  to733 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub851 ( (  h3490 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_308  __cond2242 =  next731 (&temp2241);
        if (  __cond2242 .tag == 0 ) {
            break;
        }
        int32_t  y3493 =  __cond2242 .stuff .Maybe_308_Just_s .field0;
        int32_t  x_dash_v3494 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp361 ( (  x_dash_v3494 ) , (  w3489 ) ) == 0 ) ) {
            size_t  i3495 = ( (  i32_dash_size298 ) ( (  op_dash_add310 ( (  op_dash_mul1433 ( (  y3493 ) , (  w3489 ) ) ) , (  x_dash_v3494 ) ) ) ) );
            struct Cell_189 *  cur3496 = ( (  get_dash_ptr736 ) ( ( ( * (  screen3488 ) ) .f_current ) ,  (  i3495 ) ) );
            int32_t  char_dash_width3497 = ( (  max1003 ) ( ( ( * (  cur3496 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            struct Slice_188  curs3498 = ( (  subslice2243 ) ( ( ( * (  screen3488 ) ) .f_current ) ,  (  i3495 ) ,  (  op_dash_add268 ( (  i3495 ) , ( (  i32_dash_size298 ) ( (  char_dash_width3497 ) ) ) ) ) ) );
            struct Slice_188  prevs3499 = ( (  subslice2243 ) ( ( ( * (  screen3488 ) ) .f_previous ) ,  (  i3495 ) ,  (  op_dash_add268 ( (  i3495 ) , ( (  i32_dash_size298 ) ( (  char_dash_width3497 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3488 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any2244 ) ( ( (  zip2259 ) ( (  curs3498 ) ,  (  prevs3499 ) ) ) ,  (  lam2261 ) ) ) ) ) {
                (*  rs3491 ) .f_changes = (  op_dash_add823 ( ( ( * (  rs3491 ) ) .f_changes ) , (  from_dash_integral252 ( 1 ) ) ) );
                ( (  emit_dash_cell2274 ) ( (  rs3491 ) ,  (  cur3496 ) ,  ( (  i32_dash_u322341 ) ( (  x_dash_v3494 ) ) ) ,  ( (  i32_dash_u322341 ) ( (  y3493 ) ) ) ) );
                ( (  copy_dash_to2342 ) ( (  curs3498 ) ,  (  prevs3499 ) ) );
            }
            x_dash_v3494 = (  op_dash_add310 ( (  x_dash_v3494 ) , (  char_dash_width3497 ) ) );
        }
    }
    (*  screen3488 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors656 ) ( ) );
    ( (  flush_dash_stdout659 ) ( ) );
    return ( ( * (  rs3491 ) ) .f_changes );
}

static  void *   cast_dash_ptr2361 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of2362 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed2359 (  ) {
    struct timespec *  temp2360;
    struct timespec *  x570 = (  temp2360 );
    ( ( memset ) ( ( (  cast_dash_ptr2361 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of2362 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct timespec *   null_dash_ptr2358 (  ) {
    return ( (  zeroed2359 ) ( ) );
}

static  enum Unit_8   sync2355 (    struct Tui_81 *  tui3359 ) {
    if ( (  eq451 ( ( ( * (  tui3359 ) ) .f_target_dash_fps ) , (  from_dash_integral252 ( 0 ) ) ) ) ) {
        return ( Unit_8_Unit );
    }
    int64_t  frame_dash_ns3360 = (  op_dash_div928 ( (  from_dash_integral347 ( 1000000000 ) ) , ( (  size_dash_i64297 ) ( ( (  u32_dash_size714 ) ( ( ( * (  tui3359 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2356 = ( (  undefined695 ) ( ) );
    struct timespec *  now3361 = ( &temp2356 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic697 ) ( ) ) ,  (  now3361 ) ) );
    int64_t  elapsed_dash_ns3362 = (  op_dash_add449 ( (  op_dash_mul266 ( (  op_dash_sub930 ( ( ( * (  now3361 ) ) .tv_sec ) , ( ( ( * (  tui3359 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral347 ( 1000000000 ) ) ) ) , (  op_dash_sub930 ( ( ( * (  now3361 ) ) .tv_nsec ) , ( ( ( * (  tui3359 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3363 = (  op_dash_sub930 ( (  frame_dash_ns3360 ) , (  elapsed_dash_ns3362 ) ) );
    if ( (  cmp948 ( (  sleep_dash_ns3363 ) , (  from_dash_integral347 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2357 = ( (struct timespec) { .tv_sec = (  from_dash_integral347 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3363 ) } );
        struct timespec *  ts3364 = ( &temp2357 );
        ( ( nanosleep ) ( (  ts3364 ) ,  ( (  null_dash_ptr2358 ) ( ) ) ) );
    }
    struct timespec  temp2363 = ( (  undefined695 ) ( ) );
    struct timespec *  last_dash_sync3365 = ( &temp2363 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic697 ) ( ) ) ,  (  last_dash_sync3365 ) ) );
    (*  tui3359 ) .f_last_dash_sync = ( * (  last_dash_sync3365 ) );
    (*  tui3359 ) .f_fps_dash_count = (  op_dash_add823 ( ( ( * (  tui3359 ) ) .f_fps_dash_count ) , (  from_dash_integral252 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3366 = (  op_dash_add449 ( (  op_dash_mul266 ( (  op_dash_sub930 ( ( ( ( * (  tui3359 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3359 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral347 ( 1000 ) ) ) ) , (  op_dash_div928 ( (  op_dash_sub930 ( ( ( ( * (  tui3359 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3359 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral347 ( 1000000 ) ) ) ) ) );
    if ( (  cmp948 ( (  fps_dash_elapsed_dash_ms3366 ) , (  from_dash_integral347 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3359 ) .f_actual_dash_fps = ( ( * (  tui3359 ) ) .f_fps_dash_count );
        (*  tui3359 ) .f_fps_dash_count = (  from_dash_integral252 ( 0 ) );
        (*  tui3359 ) .f_fps_dash_ts = ( ( * (  tui3359 ) ) .f_last_dash_sync );
    }
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr2366 (    struct Cell_189 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free2365 (    enum CAllocator_10  dref1960 ,    struct Slice_188  slice1962 ) {
    if (!(  dref1960 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr2366 ) ( ( (  slice1962 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_screen2364 (    struct Screen_187 *  screen3464 ) {
    enum CAllocator_10  al3465 = ( ( * (  screen3464 ) ) .f_al );
    ( (  free2365 ) ( (  al3465 ) ,  ( ( * (  screen3464 ) ) .f_current ) ) );
    ( (  free2365 ) ( (  al3465 ) ,  ( ( * (  screen3464 ) ) .f_previous ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_mouse2368 (  ) {
    ( (  print_dash_str231 ) ( ( (  from_dash_string256 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   show_dash_cursor2369 (  ) {
    ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_cursor_dash_position2370 (  ) {
    ( (  print647 ) ( ( (  from_dash_string256 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_raw_dash_mode2371 (    struct Termios_83 *  og_dash_termios3339 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno585 ) ( ) ) ,  ( (  tcsa_dash_flush645 ) ( ) ) ,  ( (  cast_dash_ptr586 ) ( (  og_dash_termios3339 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   deinit2367 (    struct Tui_81 *  tui3369 ) {
    ( (  disable_dash_mouse2368 ) ( ) );
    ( (  show_dash_cursor2369 ) ( ) );
    ( (  reset_dash_colors656 ) ( ) );
    ( (  clear_dash_screen657 ) ( ) );
    ( (  reset_dash_cursor_dash_position2370 ) ( ) );
    ( (  disable_dash_raw_dash_mode2371 ) ( ( & ( ( * (  tui3369 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout659 ) ( ) );
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
        .envinst135 = envinst135 ,
        .envinst126 = envinst126 ,
    };
    struct env154 envinst154 = {
        .envinst110 = envinst110 ,
    };
    struct env156 envinst156 = {
        .envinst69 = envinst69 ,
    };
    struct env158 envinst158 = {
        .envinst72 = envinst72 ,
    };
    struct env160 envinst160 = {
        .envinst156 = envinst156 ,
    };
    struct env165 envinst165 = {
        .envinst133 = envinst133 ,
        .envinst139 = envinst139 ,
        .envinst135 = envinst135 ,
        .envinst148 = envinst148 ,
        .envinst126 = envinst126 ,
        .envinst154 = envinst154 ,
        .envinst150 = envinst150 ,
        .envinst145 = envinst145 ,
        .envinst131 = envinst131 ,
        .envinst158 = envinst158 ,
    };
    struct env176 envinst176 = {
        .envinst165 = envinst165 ,
        .envinst148 = envinst148 ,
        .envinst60 = envinst60 ,
        .envinst67 = envinst67 ,
        .envinst126 = envinst126 ,
        .envinst160 = envinst160 ,
        .envinst129 = envinst129 ,
    };
    struct env185 envinst185 = {
        .envinst123 = envinst123 ,
    };
    enum CAllocator_10  al4416 = ( (  idc195 ) ( ) );
    struct envunion198  temp197 = ( (struct envunion198){ .fun = (  struct TextBuf_99  (*) (  struct env87*  ,    enum CAllocator_10  ,    struct Pos_26  ) )mk199 , .env =  envinst87 } );
    struct TextBuf_99  temp196 = ( temp197.fun ( &temp197.env ,  (  al4416 ) ,  ( (  mk342 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ) );
    struct TextBuf_99 *  tb4417 = ( &temp196 );
    struct Slice_343  args4420 = ( (  get344 ) ( ) );
    if ( (  cmp220 ( ( (  args4420 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        const char*  fname4421 = (  elem_dash_get349 ( (  args4420 ) , (  from_dash_integral0 ( 0 ) ) ) );
        struct envunion357  temp356 = ( (struct envunion357){ .fun = (  enum Unit_8  (*) (  struct env93*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action358 , .env =  envinst93 } );
        ( temp356.fun ( &temp356.env ,  (  tb4417 ) ,  ( (  mk342 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( (  mk342 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( (  read_dash_contents550 ) ( (  fname4421 ) ,  (  al4416 ) ) ) ) );
    }
    struct Editor_162  temp575 = ( (struct Editor_162) { .f_running = ( true ) , .f_al = (  al4416 ) , .f_pane = ( (  mk576 ) ( (  al4416 ) ,  (  tb4417 ) ) ) , .f_clipboard = ( (struct Maybe_163) { .tag = Maybe_163_None_t } ) , .f_search_dash_term = ( (struct Maybe_163) { .tag = Maybe_163_None_t } ) , .f_mode = ( (struct EditorMode_164) { .tag = EditorMode_164_Normal_t } ) , .f_msg = ( (struct Maybe_163) { .tag = Maybe_163_None_t } ) } );
    struct Editor_162 *  ed4422 = ( &temp575 );
    struct envunion579  temp578 = ( (struct envunion579){ .fun = (  struct Tui_81  (*) (  struct env77*  ) )mk580 , .env =  envinst77 } );
    struct Tui_81  temp577 = ( temp578.fun ( &temp578.env ) );
    struct Tui_81 *  tui4423 = ( &temp577 );
    struct Screen_187  temp707 = ( (  mk_dash_screen708 ) ( (  tui4423 ) ,  (  al4416 ) ) );
    struct Screen_187 *  screen4424 = ( &temp707 );
    uint32_t  last_dash_redraw_dash_changes4425 = (  from_dash_integral252 ( 0 ) );
    while ( ( ( * (  ed4422 ) ) .f_running ) ) {
        struct env758 envinst758 = {
            .envinst79 = envinst79 ,
            .tui4423 =  tui4423 ,
        };
        struct FunIter_757  temp756 =  into_dash_iter765 ( ( (  from_dash_function766 ) ( ( (struct envunion764){ .fun = (  struct Maybe_760  (*) (  struct env758*  ) )lam767 , .env =  envinst758 } ) ) ) );
        while (true) {
            struct Maybe_760  __cond968 =  next969 (&temp756);
            if (  __cond968 .tag == 0 ) {
                break;
            }
            struct InputEvent_761  ev4427 =  __cond968 .stuff .Maybe_760_Just_s .field0;
            struct InputEvent_761  dref4428 = (  ev4427 );
            if ( dref4428.tag == InputEvent_761_Key_t ) {
                ( (  reset_dash_msg971 ) ( (  ed4422 ) ) );
                struct envunion979  temp978 = ( (struct envunion979){ .fun = (  enum Unit_8  (*) (  struct env176*  ,    struct Editor_162 *  ,    struct Key_178  ) )handle_dash_key980 , .env =  envinst176 } );
                ( temp978.fun ( &temp978.env ,  (  ed4422 ) ,  ( dref4428 .stuff .InputEvent_761_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1598  temp1597 = ( (struct envunion1598){ .fun = (  bool  (*) (  struct env85*  ,    struct Screen_187 *  ) )resize_dash_screen_dash_if_dash_needed1599 , .env =  envinst85 } );
        ( temp1597.fun ( &temp1597.env ,  (  screen4424 ) ) );
        if ( ( (  should_dash_redraw1601 ) ( (  tui4423 ) ) ) ) {
            (*  screen4424 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1602 ) ( (  screen4424 ) ) );
            ( (  set_dash_screen_dash_fg1611 ) ( (  screen4424 ) ,  ( (struct Color_190) { .tag = Color_190_ColorDefault_t } ) ) );
            ( (  set_dash_screen_dash_bg1612 ) ( (  screen4424 ) ,  ( (struct Color_190) { .tag = Color_190_ColorDefault_t } ) ) );
            struct envunion1614  temp1613 = ( (struct envunion1614){ .fun = (  enum Unit_8  (*) (  struct env185*  ,    struct Screen_187 *  ,    struct Editor_162 *  ) )render_dash_editor1615 , .env =  envinst185 } );
            ( temp1613.fun ( &temp1613.env ,  (  screen4424 ) ,  (  ed4422 ) ) );
            ( (  draw_dash_str2194 ) ( (  screen4424 ) ,  ( ( StrConcat_2195_StrConcat ) ( ( ( StrConcat_2196_StrConcat ) ( ( (  from_dash_string256 ) ( ( "REDRAWS[" ) ,  ( 8 ) ) ) ,  (  last_dash_redraw_dash_changes4425 ) ) ) ,  ( (  from_dash_charlike257 ) ( ( "]" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub851 ( ( (  u32_dash_i321616 ) ( ( ( * ( ( * (  screen4424 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
            last_dash_redraw_dash_changes4425 = ( (  render_dash_screen2223 ) ( (  screen4424 ) ) );
        }
        ( (  sync2355 ) ( (  tui4423 ) ) );
    }
    ( (  free_dash_screen2364 ) ( (  screen4424 ) ) );
    ( (  deinit2367 ) ( (  tui4423 ) ) );
}
