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
    HighlightType_18_Special3,
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
    ;
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
    ;
    struct env106 envinst106;
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
    struct env117 envinst117;
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
    ;
    struct env117 envinst117;
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
    ;
    ;
    struct env137 envinst137;
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

struct envunion152 {
    enum Unit_8  (*fun) (  struct env117*  ,    struct TextBuf_99 *  ,    struct Cursors_33  );
    struct env117 env;
};

struct Tuple2_154 {
    struct Pos_26  field0;
    struct Pos_26  field1;
};

static struct Tuple2_154 Tuple2_154_Tuple2 (  struct Pos_26  field0 ,  struct Pos_26  field1 ) {
    return ( struct Tuple2_154 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion153 {
    enum Unit_8  (*fun) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_154  ,    struct StrView_27  );
    struct env135 env;
};

struct env150 {
    ;
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
    ;
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
    struct env135 envinst135;
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
    ;
    ;
    struct env157 envinst157;
    ;
    ;
    ;
    ;
};

struct envunion167 {
    enum Unit_8  (*fun) (  struct env148*  ,    struct Pane_141 *  ,    int32_t  );
    struct env148 env;
};

struct envunion168 {
    enum Unit_8  (*fun) (  struct env159*  ,    struct Editor_163 *  ,    struct StrConcat_74  );
    struct env159 env;
};

struct envunion169 {
    enum Unit_8  (*fun) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  );
    struct env126 env;
};

struct envunion170 {
    enum Unit_8  (*fun) (  struct env150*  ,    struct Pane_141 *  );
    struct env150 env;
};

struct envunion171 {
    enum Unit_8  (*fun) (  struct env145*  ,    struct Pane_141 *  );
    struct env145 env;
};

struct envunion172 {
    enum Unit_8  (*fun) (  struct env131*  ,    struct Pane_141 *  );
    struct env131 env;
};

struct envunion173 {
    enum Unit_8  (*fun) (  struct env133*  ,    struct Pane_141 *  );
    struct env133 env;
};

struct envunion174 {
    enum Unit_8  (*fun) (  struct env139*  ,    struct Pane_141 *  );
    struct env139 env;
};

struct envunion175 {
    enum Unit_8  (*fun) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_154  ,    struct StrView_27  );
    struct env135 env;
};

struct envunion176 {
    enum Unit_8  (*fun) (  struct env155*  ,    struct Editor_163 *  );
    struct env155 env;
};

struct env166 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env148 envinst148;
    struct env159 envinst159;
    struct env126 envinst126;
    ;
    ;
    ;
    ;
    ;
    struct env150 envinst150;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env145 envinst145;
    struct env131 envinst131;
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
    struct env135 envinst135;
    struct env155 envinst155;
    ;
};

struct envunion178 {
    enum Unit_8  (*fun) (  struct env161*  ,    struct Editor_163 *  ,    struct StrView_27  );
    struct env161 env;
};

struct envunion179 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

struct envunion180 {
    enum Unit_8  (*fun) (  struct env148*  ,    struct Pane_141 *  ,    int32_t  );
    struct env148 env;
};

struct envunion181 {
    enum Unit_8  (*fun) (  struct env67*  ,    struct StrBuilder_62 *  );
    struct env67 env;
};

struct envunion182 {
    enum Unit_8  (*fun) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  );
    struct env126 env;
};

struct Key_184 {
    enum {
        Key_184_Escape_t,
        Key_184_Enter_t,
        Key_184_Tab_t,
        Key_184_Backspace_t,
        Key_184_Char_t,
        Key_184_Ctrl_t,
        Key_184_Up_t,
        Key_184_Down_t,
        Key_184_Left_t,
        Key_184_Right_t,
        Key_184_Home_t,
        Key_184_End_t,
        Key_184_PageUp_t,
        Key_184_PageDown_t,
        Key_184_Delete_t,
        Key_184_Insert_t,
        Key_184_F1_t,
        Key_184_F2_t,
        Key_184_F3_t,
        Key_184_F4_t,
        Key_184_F5_t,
        Key_184_F6_t,
        Key_184_F7_t,
        Key_184_F8_t,
        Key_184_F9_t,
        Key_184_F10_t,
        Key_184_F11_t,
        Key_184_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_184_Char_s;
        struct {
            char  field0;
        } Key_184_Ctrl_s;
    } stuff;
};

static struct Key_184 Key_184_Char (  char  field0 ) {
    return ( struct Key_184 ) { .tag = Key_184_Char_t, .stuff = { .Key_184_Char_s = { .field0 = field0 } } };
};

static struct Key_184 Key_184_Ctrl (  char  field0 ) {
    return ( struct Key_184 ) { .tag = Key_184_Ctrl_t, .stuff = { .Key_184_Ctrl_s = { .field0 = field0 } } };
};

struct envunion183 {
    enum Unit_8  (*fun) (  struct env166*  ,    struct Editor_163 *  ,    struct Key_184  );
    struct env166 env;
};

struct envunion185 {
    enum Unit_8  (*fun) (  struct env129*  ,    struct Pane_141 *  );
    struct env129 env;
};

struct env177 {
    struct env161 envinst161;
    ;
    struct env60 envinst60;
    struct env148 envinst148;
    ;
    ;
    ;
    struct env67 envinst67;
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
    struct env166 envinst166;
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  struct Pane_141   mk577 (    enum CAllocator_10  al3941 ,    struct TextBuf_99 *  buf3943 ) {
    return ( (struct Pane_141) { .f_buf = (  buf3943 ) , .f_cursor = ( (  mk343 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral56 ( 0 ) ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) , .f_mode = ( Mode_142_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_143) { .f_screen_dash_top = (  from_dash_integral56 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral56 ( 0 ) ) } ) } );
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
            struct Key_184  field0;
        } InputEvent_762_Key_s;
        struct {
            struct MouseEvent_763  field0;
        } InputEvent_762_Mouse_s;
    } stuff;
};

static struct InputEvent_762 InputEvent_762_Key (  struct Key_184  field0 ) {
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
    struct Tui_81 *  tui4433;
    struct env79 envinst79;
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
            return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_Up_t } ) ) ) ) );
        }
        if ( (  eq826 ( (  last3389 ) , ( (  from_dash_charlike827 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_Down_t } ) ) ) ) );
        }
        if ( (  eq826 ( (  last3389 ) , ( (  from_dash_charlike827 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_Right_t } ) ) ) ) );
        }
        if ( (  eq826 ( (  last3389 ) , ( (  from_dash_charlike827 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_Left_t } ) ) ) ) );
        }
        if ( (  eq826 ( (  last3389 ) , ( (  from_dash_charlike827 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_Home_t } ) ) ) ) );
        }
        if ( (  eq826 ( (  last3389 ) , ( (  from_dash_charlike827 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_End_t } ) ) ) ) );
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
                return ( {  int32_t  dref3400 = ( (  i64_dash_i32902 ) ( ( dref3398 .stuff .Maybe_860_Just_s .field0 ) ) ) ;  dref3400 == 1 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_Home_t } ) ) ) ) ) :  dref3400 == 2 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_Insert_t } ) ) ) ) ) :  dref3400 == 3 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_Delete_t } ) ) ) ) ) :  dref3400 == 4 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_End_t } ) ) ) ) ) :  dref3400 == 5 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_PageUp_t } ) ) ) ) ) :  dref3400 == 6 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_PageDown_t } ) ) ) ) ) :  dref3400 == 15 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_F5_t } ) ) ) ) ) :  dref3400 == 17 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_F6_t } ) ) ) ) ) :  dref3400 == 18 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_F7_t } ) ) ) ) ) :  dref3400 == 19 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_F8_t } ) ) ) ) ) :  dref3400 == 20 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_F9_t } ) ) ) ) ) :  dref3400 == 21 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_F10_t } ) ) ) ) ) :  dref3400 == 23 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_F11_t } ) ) ) ) ) :  dref3400 == 24 ? ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_F12_t } ) ) ) ) ) : ( (struct Maybe_761) { .tag = Maybe_761_None_t } ) ; } );
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
            struct Key_184  field0;
        } Maybe_967_Just_s;
    } stuff;
};

static struct Maybe_967 Maybe_967_Just (  struct Key_184  field0 ) {
    return ( struct Maybe_967 ) { .tag = Maybe_967_Just_t, .stuff = { .Maybe_967_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_967   parse_dash_ss3968 (    char  c3385 ) {
    if ( (  eq826 ( (  c3385 ) , ( (  from_dash_charlike827 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_967_Just ) ( ( (struct Key_184) { .tag = Key_184_Up_t } ) ) );
    }
    if ( (  eq826 ( (  c3385 ) , ( (  from_dash_charlike827 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_967_Just ) ( ( (struct Key_184) { .tag = Key_184_Down_t } ) ) );
    }
    if ( (  eq826 ( (  c3385 ) , ( (  from_dash_charlike827 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_967_Just ) ( ( (struct Key_184) { .tag = Key_184_Right_t } ) ) );
    }
    if ( (  eq826 ( (  c3385 ) , ( (  from_dash_charlike827 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_967_Just ) ( ( (struct Key_184) { .tag = Key_184_Left_t } ) ) );
    }
    if ( (  eq826 ( (  c3385 ) , ( (  from_dash_charlike827 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_967_Just ) ( ( (struct Key_184) { .tag = Key_184_Home_t } ) ) );
    }
    if ( (  eq826 ( (  c3385 ) , ( (  from_dash_charlike827 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_967_Just ) ( ( (struct Key_184) { .tag = Key_184_End_t } ) ) );
    }
    if ( (  eq826 ( (  c3385 ) , ( (  from_dash_charlike827 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_967_Just ) ( ( (struct Key_184) { .tag = Key_184_F1_t } ) ) );
    }
    if ( (  eq826 ( (  c3385 ) , ( (  from_dash_charlike827 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_967_Just ) ( ( (struct Key_184) { .tag = Key_184_F2_t } ) ) );
    }
    if ( (  eq826 ( (  c3385 ) , ( (  from_dash_charlike827 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_967_Just ) ( ( (struct Key_184) { .tag = Key_184_F3_t } ) ) );
    }
    if ( (  eq826 ( (  c3385 ) , ( (  from_dash_charlike827 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_967_Just ) ( ( (struct Key_184) { .tag = Key_184_F4_t } ) ) );
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
        return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_Enter_t } ) ) ) ) );
    }
    if ( (  eq245 ( ( (  ascii_dash_u8785 ) ( ( * (  ch3402 ) ) ) ) , (  from_dash_integral249 ( 127 ) ) ) ) ) {
        return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp262 ( ( (  ascii_dash_u8785 ) ( ( * (  ch3402 ) ) ) ) , (  from_dash_integral249 ( 27 ) ) ) == 0 ) && ( !  eq245 ( ( (  ascii_dash_u8785 ) ( ( * (  ch3402 ) ) ) ) , (  from_dash_integral249 ( 9 ) ) ) ) ) ) {
        char  letter3405 = ( (  u8_dash_ascii786 ) ( ( (  u32_dash_u8255 ) ( ( (  u32_dash_or604 ) ( ( (  u8_dash_u32787 ) ( ( (  ascii_dash_u8785 ) ( ( * (  ch3402 ) ) ) ) ) ) ,  ( (  from_dash_hex791 ) ( ( (  from_dash_string257 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( ( Key_184_Ctrl ) ( (  letter3405 ) ) ) ) ) ) );
    }
    if ( ( !  eq245 ( ( (  ascii_dash_u8785 ) ( ( * (  ch3402 ) ) ) ) , (  from_dash_integral249 ( 27 ) ) ) ) ) {
        if ( (  cmp262 ( ( (  ascii_dash_u8785 ) ( ( * (  ch3402 ) ) ) ) , (  from_dash_integral249 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key773 ) ( ) );
        } else {
            return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( ( Key_184_Char ) ( ( * (  ch3402 ) ) ) ) ) ) ) );
        }
    }
    char  temp825 = ( (  undefined775 ) ( ) );
    char *  ch23406 = ( &temp825 );
    struct Maybe_777  dref3407 = ( (  read_dash_byte778 ) ( (  from_dash_integral56 ( 50 ) ) ) );
    if ( dref3407.tag == Maybe_777_None_t ) {
        return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_Escape_t } ) ) ) ) );
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
            return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_Escape_t } ) ) ) ) );
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
    return ( ( Maybe_761_Just ) ( ( ( InputEvent_762_Key ) ( ( (struct Key_184) { .tag = Key_184_Escape_t } ) ) ) ) );
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
    return ( temp769.fun ( &temp769.env ,  ( env->tui4433 ) ) );
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
    ;
    struct Editor_163 *  ed4315;
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

static  enum Unit_8   lam977 (   struct env974* env ,    struct StrView_27  msg4317 ) {
    ( (  free978 ) ( (  msg4317 ) ,  ( ( * ( env->ed4315 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_msg972 (    struct Editor_163 *  ed4315 ) {
    struct env974 envinst974 = {
        .ed4315 =  ed4315 ,
    };
    ( (  if_dash_just973 ) ( ( ( * (  ed4315 ) ) .f_msg ) ,  ( (struct envunion975){ .fun = (  enum Unit_8  (*) (  struct env974*  ,    struct StrView_27  ) )lam977 , .env =  envinst974 } ) ) );
    (*  ed4315 ) .f_msg = ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    return ( Unit_8_Unit );
}

struct envunion980 {
    enum Unit_8  (*fun) (  struct env177*  ,    struct Editor_163 *  ,    struct Key_184  );
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

static  bool   eq987 (    enum CursorMovement_986  l4056 ,    enum CursorMovement_986  r4058 ) {
    return ( {  struct Tuple2_988  dref4059 = ( ( Tuple2_988_Tuple2 ) ( (  l4056 ) ,  (  r4058 ) ) ) ;  dref4059 .field0 == CursorMovement_986_NoChanges &&  dref4059 .field1 == CursorMovement_986_NoChanges ? ( true ) :  dref4059 .field0 == CursorMovement_986_UpdateVI &&  dref4059 .field1 == CursorMovement_986_UpdateVI ? ( true ) :  dref4059 .field0 == CursorMovement_986_OverrideSelect &&  dref4059 .field1 == CursorMovement_986_OverrideSelect ? ( true ) : ( false ) ; } );
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

static  struct Maybe_164   char_dash_replacement996 (    struct Char_65  c3946 ) {
    if ( (  eq448 ( (  c3946 ) , ( (  from_dash_charlike258 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
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

static  int32_t   lam997 (    struct StrView_27  s3951 ) {
    return ( (  size_dash_i32233 ) ( ( (  count998 ) ( ( (  chars655 ) ( (  s3951 ) ) ) ) ) ) );
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

static  int32_t   char_dash_screen_dash_width994 (    struct Char_65  c3949 ) {
    return ( (  maybe995 ) ( ( (  char_dash_replacement996 ) ( (  c3949 ) ) ) ,  (  lam997 ) ,  ( (  rendered_dash_wcwidth1003 ) ( (  c3949 ) ) ) ) );
}

static  int32_t   pos_dash_vi989 (    struct TextBuf_99 *  self3965 ,    struct Pos_26  pos3967 ) {
    int32_t  bi3968 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi3969 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_650  temp990 =  into_dash_iter652 ( ( (  chars655 ) ( ( (  line991 ) ( (  self3965 ) ,  ( (  pos3967 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_653  __cond993 =  next654 (&temp990);
        if (  __cond993 .tag == 0 ) {
            break;
        }
        struct Char_65  c3971 =  __cond993 .stuff .Maybe_653_Just_s .field0;
        bi3968 = (  op_dash_add311 ( (  bi3968 ) , ( (  size_dash_i32233 ) ( ( (  c3971 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp362 ( ( (  pos3967 ) .f_bi ) , (  bi3968 ) ) == 0 ) ) {
            break;
        }
        vi3969 = (  op_dash_add311 ( (  vi3969 ) , ( (  char_dash_screen_dash_width994 ) ( (  c3971 ) ) ) ) );
    }
    return (  vi3969 );
}

struct Tuple2_1022 {
    enum Mode_142  field0;
    enum Mode_142  field1;
};

static struct Tuple2_1022 Tuple2_1022_Tuple2 (  enum Mode_142  field0 ,  enum Mode_142  field1 ) {
    return ( struct Tuple2_1022 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1021 (    enum Mode_142  l3929 ,    enum Mode_142  r3931 ) {
    return ( {  struct Tuple2_1022  dref3932 = ( ( Tuple2_1022_Tuple2 ) ( (  l3929 ) ,  (  r3931 ) ) ) ;  dref3932 .field0 == Mode_142_Normal &&  dref3932 .field1 == Mode_142_Normal ? ( true ) :  dref3932 .field0 == Mode_142_Insert &&  dref3932 .field1 == Mode_142_Insert ? ( true ) :  dref3932 .field0 == Mode_142_Select &&  dref3932 .field1 == Mode_142_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_8   set_dash_sel1020 (    struct Pane_141 *  self4045 ,    struct Maybe_34  sel4047 ) {
    if ( ( !  eq1021 ( ( ( * (  self4045 ) ) .f_mode ) , ( Mode_142_Select ) ) ) ) {
        (*  self4045 ) .f_sel = (  sel4047 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_cursors985 (    struct Pane_141 *  self4062 ,    struct Pos_26  cur4064 ,    struct Maybe_34  sel4066 ,    enum CursorMovement_986  cursor_dash_movement_dash_type4068 ) {
    if ( ( !  eq987 ( (  cursor_dash_movement_dash_type4068 ) , ( CursorMovement_986_NoChanges ) ) ) ) {
        (*  self4062 ) .f_vi = ( (  pos_dash_vi989 ) ( ( ( * (  self4062 ) ) .f_buf ) ,  (  cur4064 ) ) );
    }
    (*  self4062 ) .f_cursor = (  cur4064 );
    if ( ( !  eq987 ( (  cursor_dash_movement_dash_type4068 ) , ( CursorMovement_986_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel1020 ) ( (  self4062 ) ,  (  sel4066 ) ) );
    } else {
        (*  self4062 ) .f_sel = (  sel4066 );
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

static  enum Unit_8   move_dash_left984 (    struct Pane_141 *  self4074 ) {
    ( (  set_dash_cursors985 ) ( (  self4074 ) ,  ( (  left_dash_pos1023 ) ( ( ( * (  self4074 ) ) .f_buf ) ,  ( ( * (  self4074 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  struct Pane_141 *   pane1028 (    struct Editor_163 *  ed4305 ) {
    return ( & ( ( * (  ed4305 ) ) .f_pane ) );
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

static  enum Unit_8   move_dash_right1029 (    struct Pane_141 *  self4071 ) {
    ( (  set_dash_cursors985 ) ( (  self4071 ) ,  ( (  right_dash_pos1030 ) ( ( ( * (  self4071 ) ) .f_buf ) ,  ( ( * (  self4071 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   vi_dash_bi1033 (    struct TextBuf_99 *  self3954 ,    int32_t  ln3956 ,    int32_t  vx3958 ) {
    int32_t  bi3959 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi3960 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_650  temp1034 =  into_dash_iter652 ( ( (  chars655 ) ( ( (  line991 ) ( (  self3954 ) ,  (  ln3956 ) ) ) ) ) );
    while (true) {
        struct Maybe_653  __cond1035 =  next654 (&temp1034);
        if (  __cond1035 .tag == 0 ) {
            break;
        }
        struct Char_65  c3962 =  __cond1035 .stuff .Maybe_653_Just_s .field0;
        vi3960 = (  op_dash_add311 ( (  vi3960 ) , ( (  char_dash_screen_dash_width994 ) ( (  c3962 ) ) ) ) );
        if ( (  cmp362 ( (  vx3958 ) , (  vi3960 ) ) == 0 ) ) {
            break;
        }
        bi3959 = (  op_dash_add311 ( (  bi3959 ) , ( (  size_dash_i32233 ) ( ( (  c3962 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi3959 );
}

static  enum Unit_8   move_dash_down1032 (    struct Pane_141 *  self4077 ,    int32_t  amnt4079 ) {
    struct Pos_26  cur4080 = ( ( * (  self4077 ) ) .f_cursor );
    int32_t  nu_dash_line4081 = ( (  min515 ) ( (  op_dash_add311 ( ( (  cur4080 ) .f_line ) , (  amnt4079 ) ) ) ,  (  op_dash_sub852 ( ( (  num_dash_lines1031 ) ( ( ( * (  self4077 ) ) .f_buf ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  vci4082 = ( ( * (  self4077 ) ) .f_vi );
    int32_t  bi4083 = ( (  vi_dash_bi1033 ) ( ( ( * (  self4077 ) ) .f_buf ) ,  (  nu_dash_line4081 ) ,  (  vci4082 ) ) );
    ( (  set_dash_cursors985 ) ( (  self4077 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4081 ) , .f_bi = (  bi4083 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_up1036 (    struct Pane_141 *  self4086 ,    int32_t  amnt4088 ) {
    struct Pos_26  cur4089 = ( ( * (  self4086 ) ) .f_cursor );
    int32_t  nu_dash_line4090 = ( (  max1004 ) ( (  op_dash_sub852 ( ( (  cur4089 ) .f_line ) , (  amnt4088 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  vci4091 = ( ( * (  self4086 ) ) .f_vi );
    int32_t  bi4092 = ( (  vi_dash_bi1033 ) ( ( ( * (  self4086 ) ) .f_buf ) ,  (  nu_dash_line4090 ) ,  (  vci4091 ) ) );
    ( (  set_dash_cursors985 ) ( (  self4086 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4090 ) , .f_bi = (  bi4092 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_insert_dash_action1038 (    struct TextBuf_99 *  self3789 ) {
    (*  self3789 ) .f_actions .f_input_dash_changeset = ( ChangesetInputType_101_NoChangeset );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_mode1037 (    struct Pane_141 *  self4050 ,    enum Mode_142  mode4052 ) {
    if ( (  eq1021 ( (  mode4052 ) , ( Mode_142_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action1038 ) ( ( ( * (  self4050 ) ) .f_buf ) ) );
    }
    (*  self4050 ) .f_mode = (  mode4052 );
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

static  bool   lam1055 (    struct Char_65  c4140 ) {
    return (  eq448 ( (  c4140 ) , ( (  from_dash_charlike258 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
}

static  size_t   lam1056 (    struct Char_65  c4142 ) {
    return ( (  c4142 ) .f_num_dash_bytes );
}

static  int32_t   indent_dash_at_dash_line1040 (    struct Pane_141 *  pane4136 ,    int32_t  line4138 ) {
    return ( (  size_dash_i32233 ) ( ( (  sum1041 ) ( ( (  map1052 ) ( ( (  take_dash_while1054 ) ( ( (  line991 ) ( ( ( * (  pane4136 ) ) .f_buf ) ,  (  line4138 ) ) ) ,  (  lam1055 ) ) ) ,  (  lam1056 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_to_dash_beginning_dash_indented1039 (    struct Pane_141 *  self4155 ) {
    struct Pos_26  cur4156 = ( ( * (  self4155 ) ) .f_cursor );
    int32_t  indent4157 = ( (  indent_dash_at_dash_line1040 ) ( (  self4155 ) ,  ( (  cur4156 ) .f_line ) ) );
    struct Pos_26  temp1057 = (  cur4156 );
    temp1057 .  f_bi = (  indent4157 );
    ( (  set_dash_cursors985 ) ( (  self4155 ) ,  ( temp1057 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_end1058 (    struct Pane_141 *  self4160 ) {
    struct Pos_26  cur4161 = ( ( * (  self4160 ) ) .f_cursor );
    struct Pos_26  temp1059 = (  cur4161 );
    temp1059 .  f_bi = ( (  size_dash_i32233 ) ( ( (  num_dash_bytes1024 ) ( ( (  line991 ) ( ( ( * (  self4160 ) ) .f_buf ) ,  ( (  cur4161 ) .f_line ) ) ) ) ) ) );
    ( (  set_dash_cursors985 ) ( (  self4160 ) ,  ( temp1059 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_OverrideSelect ) ) );
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

static  enum Unit_8   add_dash_str_dash_at_dash_char1061 (   struct env126* env ,    struct Pane_141 *  self4173 ,    struct StrView_27  s4175 ) {
    struct Pos_26  cur4176 = ( ( * (  self4173 ) ) .f_cursor );
    struct envunion127  temp1062 = ( (struct envunion127){ .fun = (  struct Maybe_128  (*) (  struct env112*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_128  ) )change1063 , .env =  env->envinst112 } );
    ( temp1062.fun ( &temp1062.env ,  ( ( * (  self4173 ) ) .f_buf ) ,  (  cur4176 ) ,  (  cur4176 ) ,  (  s4175 ) ,  ( (struct Maybe_128) { .tag = Maybe_128_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at1205 (   struct env137* env ,    struct Pane_141 *  self4211 ,    int32_t  line4213 ) {
    struct envunion138  temp1206 = ( (struct envunion138){ .fun = (  struct Maybe_128  (*) (  struct env112*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_128  ) )change1063 , .env =  env->envinst112 } );
    ( temp1206.fun ( &temp1206.env ,  ( ( * (  self4211 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4213 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4213 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (  from_dash_charlike1124 ) ( ( "\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_128) { .tag = Maybe_128_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at_dash_current1201 (   struct env148* env ,    struct Pane_141 *  self4232 ,    int32_t  indent4234 ) {
    struct RangeIter_729  temp1202 =  into_dash_iter731 ( ( (  to734 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  indent4234 ) ) ) );
    while (true) {
        struct Maybe_309  __cond1203 =  next732 (&temp1202);
        if (  __cond1203 .tag == 0 ) {
            break;
        }
        int32_t  dref4235 =  __cond1203 .stuff .Maybe_309_Just_s .field0;
        struct envunion149  temp1204 = ( (struct envunion149){ .fun = (  enum Unit_8  (*) (  struct env137*  ,    struct Pane_141 *  ,    int32_t  ) )indent_dash_at1205 , .env =  env->envinst137 } );
        ( temp1204.fun ( &temp1204.env ,  (  self4232 ) ,  ( ( ( * (  self4232 ) ) .f_cursor ) .f_line ) ) );
        ( (  move_dash_right1029 ) ( (  self4232 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_beginning1207 (    struct Pane_141 *  self4152 ) {
    struct Pos_26  temp1208 = ( ( * (  self4152 ) ) .f_cursor );
    temp1208 .  f_bi = (  from_dash_integral56 ( 0 ) );
    ( (  set_dash_cursors985 ) ( (  self4152 ) ,  ( temp1208 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_OverrideSelect ) ) );
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
    ;
    struct Pane_141 *  pane4113;
    enum MoveDirection_1214  dir4115;
    struct Pos_26 *  prev4118;
    ;
};

static  bool   is_dash_at_dash_line_dash_end1220 (    struct Pane_141 *  pane4095 ,    struct Pos_26  pos4097 ) {
    return (  eq276 ( ( (  i32_dash_size299 ) ( ( (  pos4097 ) .f_bi ) ) ) , ( (  num_dash_bytes1024 ) ( ( (  line991 ) ( ( ( * (  pane4095 ) ) .f_buf ) ,  ( (  pos4097 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1219 (    struct Pane_141 *  pane4100 ) {
    return ( (  is_dash_at_dash_line_dash_end1220 ) ( (  pane4100 ) ,  ( ( * (  pane4100 ) ) .f_cursor ) ) );
}

struct envunion1222 {
    enum Unit_8  (*fun) (  struct env1218*  );
    struct env1218 env;
};

static  enum Unit_8   advance1223 (   struct env1218* env ) {
    (* env->prev4118 ) = ( ( * ( env->pane4113 ) ) .f_cursor );
    enum MoveDirection_1214  dref4120 = ( env->dir4115 );
    switch (  dref4120 ) {
        case MoveDirection_1214_MoveFwd : {
            ( (  move_dash_right1029 ) ( ( env->pane4113 ) ) );
            break;
        }
        case MoveDirection_1214_MoveBwd : {
            ( (  move_dash_left984 ) ( ( env->pane4113 ) ) );
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

static  struct Char_65   char_dash_at1237 (    struct Pane_141 *  pane3974 ,    struct Pos_26  pos3976 ) {
    struct StrView_27  line3977 = ( (  line991 ) ( ( ( * (  pane3974 ) ) .f_buf ) ,  ( (  pos3976 ) .f_line ) ) );
    return ( (  or_dash_else1238 ) ( ( (  head1239 ) ( ( (  chars655 ) ( ( (  byte_dash_substr430 ) ( (  line3977 ) ,  ( (  i32_dash_size299 ) ( ( (  pos3976 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1024 ) ( (  line3977 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
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

static  bool   reached_dash_target1224 (    struct Pane_141 *  pane4105 ,    enum MoveTarget_1215  target4107 ,    struct Pos_26  prev4109 ) {
    return ( {  enum MoveTarget_1215  dref4110 = (  target4107 ) ;  dref4110 == MoveTarget_1215_NextWordStart ? ( ( (  is_dash_word_dash_boundary1225 ) ( ( (  char_dash_at1237 ) ( (  pane4105 ) ,  (  prev4109 ) ) ) ,  ( (  char_dash_at1237 ) ( (  pane4105 ) ,  ( ( * (  pane4105 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1226 ( ( (  char_dash_type1229 ) ( ( (  char_dash_at1237 ) ( (  pane4105 ) ,  ( ( * (  pane4105 ) ) .f_cursor ) ) ) ) ) , ( CharType_1227_CharSpace ) ) ) ) ) :  dref4110 == MoveTarget_1215_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1225 ) ( ( (  char_dash_at1237 ) ( (  pane4105 ) ,  (  prev4109 ) ) ) ,  ( (  char_dash_at1237 ) ( (  pane4105 ) ,  ( ( * (  pane4105 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1226 ( ( (  char_dash_type1229 ) ( ( (  char_dash_at1237 ) ( (  pane4105 ) ,  (  prev4109 ) ) ) ) ) , ( CharType_1227_CharSpace ) ) ) ) ) : ( (  todo1241 ) ( ) ) ; } );
}

struct envunion1246 {
    enum Unit_8  (*fun) (  struct env1218*  );
    struct env1218 env;
};

struct envunion1248 {
    enum Unit_8  (*fun) (  struct env1218*  );
    struct env1218 env;
};

static  enum Unit_8   advance_dash_word1213 (    struct Pane_141 *  pane4113 ,    enum MoveDirection_1214  dir4115 ,    enum MoveTarget_1215  target4117 ) {
    struct Pos_26  temp1216 = ( (  own1217 ) ( ( ( * (  pane4113 ) ) .f_cursor ) ) );
    struct Pos_26 *  prev4118 = ( &temp1216 );
    struct env1218 envinst1218 = {
        .pane4113 =  pane4113 ,
        .dir4115 =  dir4115 ,
        .prev4118 =  prev4118 ,
    };
    struct Pos_26  sel4121 = ( ( * (  pane4113 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4122 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1219 ) ( (  pane4113 ) ) );
    struct envunion1222  temp1221 = ( (struct envunion1222){ .fun = (  enum Unit_8  (*) (  struct env1218*  ) )advance1223 , .env =  envinst1218 } );
    ( temp1221.fun ( &temp1221.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4122 ) || ( (  reached_dash_target1224 ) ( (  pane4113 ) ,  (  target4117 ) ,  ( * (  prev4118 ) ) ) ) ) ) {
        sel4121 = ( ( * (  pane4113 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1219 ) ( (  pane4113 ) ) ) ) {
        if ( (  eq364 ( ( ( * (  pane4113 ) ) .f_cursor ) , ( * (  prev4118 ) ) ) ) ) {
            return ( Unit_8_Unit );
        }
        struct envunion1246  temp1245 = ( (struct envunion1246){ .fun = (  enum Unit_8  (*) (  struct env1218*  ) )advance1223 , .env =  envinst1218 } );
        ( temp1245.fun ( &temp1245.env ) );
        sel4121 = ( ( * (  pane4113 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1248  temp1247 = ( (struct envunion1248){ .fun = (  enum Unit_8  (*) (  struct env1218*  ) )advance1223 , .env =  envinst1218 } );
        ( temp1247.fun ( &temp1247.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1219 ) ( (  pane4113 ) ) ) || ( (  reached_dash_target1224 ) ( (  pane4113 ) ,  (  target4117 ) ,  ( * (  prev4118 ) ) ) ) ) ) {
            enum MoveDirection_1214  dref4123 = (  dir4115 );
            switch (  dref4123 ) {
                case MoveDirection_1214_MoveFwd : {
                    ( (  move_dash_left984 ) ( (  pane4113 ) ) );
                    break;
                }
                case MoveDirection_1214_MoveBwd : {
                    ( (  move_dash_right1029 ) ( (  pane4113 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq364 ( ( * (  prev4118 ) ) , ( ( * (  pane4113 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel1020 ) ( (  pane4113 ) ,  ( ( Maybe_34_Just ) ( (  sel4121 ) ) ) ) );
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
    ;
    struct Pane_141 *  self4189;
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

static  enum Unit_8   lam1273 (   struct env1270* env ,    struct Cursors_33  cursors4192 ) {
    ( (  set_dash_cursors985 ) ( ( env->self4189 ) ,  ( (  cursors4192 ) .f_cur ) ,  ( (  cursors4192 ) .f_sel ) ,  ( CursorMovement_986_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   redo1250 (   struct env133* env ,    struct Pane_141 *  self4189 ) {
    struct envunion134  temp1251 = ( (struct envunion134){ .fun = (  struct Maybe_128  (*) (  struct env108*  ,    struct TextBuf_99 *  ) )redo1252 , .env =  env->envinst108 } );
    struct Maybe_128  mcursors4190 = ( temp1251.fun ( &temp1251.env ,  ( ( * (  self4189 ) ) .f_buf ) ) );
    struct env1270 envinst1270 = {
        .self4189 =  self4189 ,
    };
    ( (  if_dash_just1269 ) ( (  mcursors4190 ) ,  ( (struct envunion1271){ .fun = (  enum Unit_8  (*) (  struct env1270*  ,    struct Cursors_33  ) )lam1273 , .env =  envinst1270 } ) ) );
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
    struct Pane_141 *  self4183;
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

static  enum Unit_8   lam1291 (   struct env1288* env ,    struct Cursors_33  cursors4186 ) {
    ( (  set_dash_cursors985 ) ( ( env->self4183 ) ,  ( (  cursors4186 ) .f_cur ) ,  ( (  cursors4186 ) .f_sel ) ,  ( CursorMovement_986_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undo1275 (   struct env131* env ,    struct Pane_141 *  self4183 ) {
    struct envunion132  temp1276 = ( (struct envunion132){ .fun = (  struct Maybe_128  (*) (  struct env106*  ,    struct TextBuf_99 *  ) )undo1277 , .env =  env->envinst106 } );
    struct Maybe_128  mcursors4184 = ( temp1276.fun ( &temp1276.env ,  ( ( * (  self4183 ) ) .f_buf ) ) );
    struct env1288 envinst1288 = {
        .self4183 =  self4183 ,
    };
    ( (  if_dash_just1287 ) ( (  mcursors4184 ) ,  ( (struct envunion1289){ .fun = (  enum Unit_8  (*) (  struct env1288*  ,    struct Cursors_33  ) )lam1291 , .env =  envinst1288 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_154   minmax1295 (    struct Pos_26  l1329 ,    struct Pos_26  r1331 ) {
    return ( (  cmp361 ( (  l1329 ) , (  r1331 ) ) == 0 ) ? ( ( Tuple2_154_Tuple2 ) ( (  l1329 ) ,  (  r1331 ) ) ) : ( ( Tuple2_154_Tuple2 ) ( (  r1331 ) ,  (  l1329 ) ) ) );
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

static  struct Pos_26   fst1297 (    struct Tuple2_154  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_26   snd1298 (    struct Tuple2_154  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tuple2_154   selection1294 (    struct Pane_141 *  self4195 ) {
    struct Tuple2_154  from_dash_to4196 = ( (  minmax1295 ) ( ( (  or_dash_else1296 ) ( ( ( * (  self4195 ) ) .f_sel ) ,  ( ( * (  self4195 ) ) .f_cursor ) ) ) ,  ( ( * (  self4195 ) ) .f_cursor ) ) );
    struct Pos_26  from4197 = ( (  fst1297 ) ( (  from_dash_to4196 ) ) );
    struct Pos_26  to4198 = ( (  right_dash_pos1030 ) ( ( ( * (  self4195 ) ) .f_buf ) ,  ( (  snd1298 ) ( (  from_dash_to4196 ) ) ) ) );
    return ( ( Tuple2_154_Tuple2 ) ( (  from4197 ) ,  (  to4198 ) ) );
}

struct env1301 {
    ;
    struct Editor_163 *  ed4308;
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

static  enum Unit_8   lam1304 (   struct env1301* env ,    struct StrView_27  cp4312 ) {
    ( (  free978 ) ( (  cp4312 ) ,  ( ( * ( env->ed4308 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   copy_dash_selection_dash_to_dash_clipboard1293 (   struct env155* env ,    struct Editor_163 *  ed4308 ) {
    struct Tuple2_154  from_dash_to4309 = ( (  selection1294 ) ( ( (  pane1028 ) ( (  ed4308 ) ) ) ) );
    struct envunion156  temp1299 = ( (struct envunion156){ .fun = (  struct StrView_27  (*) (  struct env110*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1119 , .env =  env->envinst110 } );
    struct StrView_27  cpd4310 = ( temp1299.fun ( &temp1299.env ,  ( ( ( * (  ed4308 ) ) .f_pane ) .f_buf ) ,  ( (  fst1297 ) ( (  from_dash_to4309 ) ) ) ,  ( (  snd1298 ) ( (  from_dash_to4309 ) ) ) ) );
    struct env1301 envinst1301 = {
        .ed4308 =  ed4308 ,
    };
    ( (  if_dash_just1300 ) ( ( ( * (  ed4308 ) ) .f_clipboard ) ,  ( (struct envunion1302){ .fun = (  enum Unit_8  (*) (  struct env1301*  ,    struct StrView_27  ) )lam1304 , .env =  envinst1301 } ) ) );
    (*  ed4308 ) .f_clipboard = ( ( Maybe_164_Just ) ( (  cpd4310 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1306 {
    enum Unit_8  (*fun) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_154  ,    struct StrView_27  );
    struct env135 env;
};

struct env1310 {
    struct Pane_141 *  self4201;
    ;
};

struct envunion1311 {
    enum Unit_8  (*fun) (  struct env1310*  ,    struct Cursors_33  );
    struct env1310 env;
};

static  enum Unit_8   if_dash_just1309 (    struct Maybe_128  x1291 ,   struct envunion1311  fun1293 ) {
    struct Maybe_128  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_128_Just_t ) {
        struct envunion1311  temp1312 = (  fun1293 );
        ( temp1312.fun ( &temp1312.env ,  ( dref1294 .stuff .Maybe_128_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_128_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1313 (   struct env1310* env ,    struct Cursors_33  cursors4208 ) {
    ( (  set_dash_cursors985 ) ( ( env->self4201 ) ,  ( (  cursors4208 ) .f_cur ) ,  ( (  cursors4208 ) .f_sel ) ,  ( CursorMovement_986_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   replace_dash_selection1307 (   struct env135* env ,    struct Pane_141 *  self4201 ,    struct Tuple2_154  pos_prime_s4203 ,    struct StrView_27  cp4205 ) {
    struct envunion136  temp1308 = ( (struct envunion136){ .fun = (  struct Maybe_128  (*) (  struct env112*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_128  ) )change1063 , .env =  env->envinst112 } );
    struct Maybe_128  mcursors4206 = ( temp1308.fun ( &temp1308.env ,  ( ( * (  self4201 ) ) .f_buf ) ,  ( (  fst1297 ) ( (  pos_prime_s4203 ) ) ) ,  ( (  snd1298 ) ( (  pos_prime_s4203 ) ) ) ,  (  cp4205 ) ,  ( ( Maybe_128_Just ) ( ( (struct Cursors_33) { .f_cur = ( ( * (  self4201 ) ) .f_cursor ) , .f_sel = ( ( * (  self4201 ) ) .f_sel ) } ) ) ) ) );
    struct env1310 envinst1310 = {
        .self4201 =  self4201 ,
    };
    ( (  if_dash_just1309 ) ( (  mcursors4206 ) ,  ( (struct envunion1311){ .fun = (  enum Unit_8  (*) (  struct env1310*  ,    struct Cursors_33  ) )lam1313 , .env =  envinst1310 } ) ) );
    return ( Unit_8_Unit );
}

struct envunion1315 {
    enum Unit_8  (*fun) (  struct env155*  ,    struct Editor_163 *  );
    struct env155 env;
};

struct envunion1317 {
    enum Unit_8  (*fun) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_154  ,    struct StrView_27  );
    struct env135 env;
};

struct envunion1319 {
    enum Unit_8  (*fun) (  struct env155*  ,    struct Editor_163 *  );
    struct env155 env;
};

static  struct StrBuilder_62   mk1325 (    enum CAllocator_10  al2797 ) {
    return ( (struct StrBuilder_62) { .f_chars = ( (  mk328 ) ( (  al2797 ) ) ) } );
}

struct IntStrIter_1331 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1330 {
    struct StrViewIter_650  f_left;
    struct IntStrIter_1331  f_right;
};

struct StrConcatIter_1329 {
    struct StrConcatIter_1330  f_left;
    struct StrViewIter_650  f_right;
};

struct env1332 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2765;
};

struct envunion1333 {
    enum Unit_8  (*fun) (  struct env1332*  ,    struct Char_65  );
    struct env1332 env;
};

static  struct StrConcatIter_1329   into_dash_iter1335 (    struct StrConcatIter_1329  self1497 ) {
    return (  self1497 );
}

struct env1341 {
    ;
    size_t  base1210;
};

struct envunion1342 {
    size_t  (*fun) (  struct env1341*  ,    int32_t  ,    size_t  );
    struct env1341 env;
};

static  size_t   reduce1340 (    struct Range_726  iterable1093 ,    size_t  base1095 ,   struct envunion1342  fun1097 ) {
    size_t  x1098 = (  base1095 );
    struct RangeIter_729  it1099 = ( (  into_dash_iter731 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next732 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                struct envunion1342  temp1343 = (  fun1097 );
                x1098 = ( temp1343.fun ( &temp1343.env ,  ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1344 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1344);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1345;
    return (  temp1345 );
}

static  size_t   lam1346 (   struct env1341* env ,    int32_t  item1214 ,    size_t  x1216 ) {
    return (  op_dash_mul282 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  size_t   pow1339 (    size_t  base1210 ,    int32_t  p1212 ) {
    struct env1341 envinst1341 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1340 ) ( ( (  to734 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub852 ( (  p1212 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1342){ .fun = (  size_t  (*) (  struct env1341*  ,    int32_t  ,    size_t  ) )lam1346 , .env =  envinst1341 } ) ) );
}

static  uint8_t   cast1347 (    size_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_653   next1338 (    struct IntStrIter_1331 *  self1428 ) {
    if ( ( ( * (  self1428 ) ) .f_negative ) ) {
        (*  self1428 ) .f_negative = ( false );
        return ( ( Maybe_653_Just ) ( ( (  from_dash_charlike258 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp362 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
    }
    size_t  trim_dash_down1429 = ( (  pow1339 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub852 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    size_t  upper1430 = (  op_dash_div248 ( ( ( * (  self1428 ) ) .f_int ) , (  trim_dash_down1429 ) ) );
    size_t  upper_dash_mask1431 = (  op_dash_mul282 ( (  op_dash_div248 ( (  upper1430 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1432 = ( ( (  cast1347 ) ( (  op_dash_sub349 ( (  upper1430 ) , (  upper_dash_mask1431 ) ) ) ) ) );
    (*  self1428 ) .f_len = (  op_dash_sub852 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1433 = ( (  from_dash_u8932 ) ( (  op_dash_add822 ( (  digit1432 ) , (  from_dash_integral249 ( 48 ) ) ) ) ) );
    return ( ( Maybe_653_Just ) ( (  digit_dash_char1433 ) ) );
}

static  struct Maybe_653   next1337 (    struct StrConcatIter_1330 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next1338 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next1336 (    struct StrConcatIter_1329 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next1337 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1328 (    struct StrConcatIter_1329  iterable1074 ,   struct envunion1333  fun1076 ) {
    struct StrConcatIter_1329  temp1334 = ( (  into_dash_iter1335 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1329 *  it1077 = ( &temp1334 );
    while ( ( true ) ) {
        struct Maybe_653  dref1078 = ( (  next1336 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_653_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_653_Just_t ) {
                struct envunion1333  temp1348 = (  fun1076 );
                ( temp1348.fun ( &temp1348.env ,  ( dref1078 .stuff .Maybe_653_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits1355 (    size_t  self1436 ) {
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

static  struct IntStrIter_1331   uint_dash_iter1354 (    size_t  int1443 ) {
    return ( (struct IntStrIter_1331) { .f_int = (  int1443 ) , .f_len = ( (  count_dash_digits1355 ) ( (  int1443 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1331   chars1353 (    size_t  self1473 ) {
    return ( (  uint_dash_iter1354 ) ( (  self1473 ) ) );
}

static  struct StrConcatIter_1330   into_dash_iter1352 (    struct StrConcat_75  dref1504 ) {
    return ( (struct StrConcatIter_1330) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1353 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1330   chars1351 (    struct StrConcat_75  self1515 ) {
    return ( (  into_dash_iter1352 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_1329   into_dash_iter1350 (    struct StrConcat_74  dref1504 ) {
    return ( (struct StrConcatIter_1329) { .f_left = ( (  chars1351 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars655 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1329   chars1349 (    struct StrConcat_74  self1515 ) {
    return ( (  into_dash_iter1350 ) ( (  self1515 ) ) );
}

static  enum Unit_8   write_dash_slice1360 (   struct env58* env ,    struct StrBuilder_62 *  builder2755 ,    struct Slice_14  s2757 ) {
    struct envunion59  temp1361 = ( (struct envunion59){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all383 , .env =  env->envinst48 } );
    ( temp1361.fun ( &temp1361.env ,  ( & ( ( * (  builder2755 ) ) .f_chars ) ) ,  (  s2757 ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_14   from_dash_char1362 (    struct Char_65  c1942 ,    uint8_t *  buf1944 ) {
    struct CharDestructured_242  dref1945 = ( (  destructure244 ) ( (  c1942 ) ) );
    if ( dref1945.tag == CharDestructured_242_Ref_t ) {
        return ( (struct Slice_14) { .f_ptr = ( ( dref1945 .stuff .CharDestructured_242_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1945 .stuff .CharDestructured_242_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1945.tag == CharDestructured_242_Scalar_t ) {
            if ( (  cmp252 ( ( ( dref1945 .stuff .CharDestructured_242_Scalar_s .field0 ) .f_value ) , (  from_dash_integral253 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1363 = ( (  from_dash_string57 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp1363);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            (*  buf1944 ) = ( (  u32_dash_u8255 ) ( ( ( dref1945 .stuff .CharDestructured_242_Scalar_s .field0 ) .f_value ) ) );
            return ( (struct Slice_14) { .f_ptr = (  buf1944 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_8   write_dash_char1358 (   struct env60* env ,    struct StrBuilder_62 *  builder2760 ,    struct Char_65  c2762 ) {
    struct envunion61  temp1359 = ( (struct envunion61){ .fun = (  enum Unit_8  (*) (  struct env58*  ,    struct StrBuilder_62 *  ,    struct Slice_14  ) )write_dash_slice1360 , .env =  env->envinst58 } );
    uint8_t  temp1365;
    uint8_t  temp1364 = (  temp1365 );
    ( temp1359.fun ( &temp1359.env ,  (  builder2760 ) ,  ( (  from_dash_char1362 ) ( (  c2762 ) ,  ( &temp1364 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1356 (   struct env1332* env ,    struct Char_65  c2769 ) {
    struct envunion64  temp1357 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1358 , .env =  env->envinst60 } );
    return ( temp1357.fun ( &temp1357.env ,  ( env->builder2765 ) ,  (  c2769 ) ) );
}

static  enum Unit_8   write1327 (   struct env66* env ,    struct StrBuilder_62 *  builder2765 ,    struct StrConcat_74  s2767 ) {
    struct env1332 envinst1332 = {
        .envinst60 = env->envinst60 ,
        .builder2765 =  builder2765 ,
    };
    ( (  for_dash_each1328 ) ( ( (  chars1349 ) ( (  s2767 ) ) ) ,  ( (struct envunion1333){ .fun = (  enum Unit_8  (*) (  struct env1332*  ,    struct Char_65  ) )lam1356 , .env =  envinst1332 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t *   cast_dash_ptr1369 (    uint8_t *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_14   cast_dash_slice1368 (    struct Slice_14  s1933 ) {
    return ( (struct Slice_14) { .f_ptr = ( (  cast_dash_ptr1369 ) ( ( (  s1933 ) .f_ptr ) ) ) , .f_count = ( (  s1933 ) .f_count ) } );
}

static  struct StrView_27   as_dash_str1367 (    struct StrBuilder_62 *  builder2803 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice1368 ) ( ( (  subslice373 ) ( ( ( ( * (  builder2803 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2803 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_27   mk_dash_dyn_dash_str1323 (   struct env72* env ,    struct StrConcat_74  s2823 ,    enum CAllocator_10  al2825 ) {
    struct StrBuilder_62  temp1324 = ( (  mk1325 ) ( (  al2825 ) ) );
    struct StrBuilder_62 *  sb2826 = ( &temp1324 );
    struct envunion73  temp1326 = ( (struct envunion73){ .fun = (  enum Unit_8  (*) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrConcat_74  ) )write1327 , .env =  env->envinst66 } );
    ( temp1326.fun ( &temp1326.env ,  (  sb2826 ) ,  (  s2823 ) ) );
    struct envunion71  temp1366 = ( (struct envunion71){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1358 , .env =  env->envinst60 } );
    ( temp1366.fun ( &temp1366.env ,  (  sb2826 ) ,  ( (  nullchar575 ) ( ) ) ) );
    struct StrView_27  dynstr2827 = ( (  as_dash_str1367 ) ( (  sb2826 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2827 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub349 ( ( ( (  dynstr2827 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1321 (   struct env159* env ,    struct Editor_163 *  ed4320 ,    struct StrConcat_74  s4322 ) {
    ( (  reset_dash_msg972 ) ( (  ed4320 ) ) );
    struct envunion160  temp1322 = ( (struct envunion160){ .fun = (  struct StrView_27  (*) (  struct env72*  ,    struct StrConcat_74  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1323 , .env =  env->envinst72 } );
    (*  ed4320 ) .f_msg = ( ( Maybe_164_Just ) ( ( temp1322.fun ( &temp1322.env ,  (  s4322 ) ,  ( ( * (  ed4320 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion1372 {
    enum Unit_8  (*fun) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_154  ,    struct StrView_27  );
    struct env135 env;
};

struct env1371 {
    ;
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
    struct Editor_163 *  ed4366;
};

struct envunion1373 {
    enum Unit_8  (*fun) (  struct env1371*  ,    struct StrView_27  );
    struct env1371 env;
};

static  enum Unit_8   if_dash_just1370 (    struct Maybe_164  x1291 ,   struct envunion1373  fun1293 ) {
    struct Maybe_164  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_164_Just_t ) {
        struct envunion1373  temp1374 = (  fun1293 );
        ( temp1374.fun ( &temp1374.env ,  ( dref1294 .stuff .Maybe_164_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_164_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   max_dash_pos1376 (    struct Pane_141 *  pane4131 ) {
    return ( {  struct Maybe_34  dref4132 = ( ( * (  pane4131 ) ) .f_sel ) ; dref4132.tag == Maybe_34_Just_t ? ( (  max363 ) ( ( ( * (  pane4131 ) ) .f_cursor ) ,  ( dref4132 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4131 ) ) .f_cursor ) ; } );
}

static  uint8_t   elem_dash_get1378 (    struct Slice_14  self1868 ,    size_t  idx1870 ) {
    return ( (  get424 ) ( (  self1868 ) ,  (  idx1870 ) ) );
}

static  uint8_t   last1377 (    struct Slice_14  s1936 ) {
    if ( (  eq276 ( ( (  s1936 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1108 ) ( ( (  from_dash_string257 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1378 ( (  s1936 ) , (  op_dash_sub349 ( ( (  s1936 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1379 (    int32_t  x1352 ,    int32_t  mn1354 ,    int32_t  mx1356 ) {
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

static  enum Unit_8   lam1375 (   struct env1371* env ,    struct StrView_27  cp4377 ) {
    struct Pos_26  start4378 = ( (  max_dash_pos1376 ) ( ( (  pane1028 ) ( ( env->ed4366 ) ) ) ) );
    if ( (  eq245 ( ( (  last1377 ) ( ( (  cp4377 ) .f_contents ) ) ) , ( (  ascii_dash_u8785 ) ( ( (  from_dash_charlike827 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        start4378 = ( (struct Pos_26) { .f_line = ( (  clamp1379 ) ( (  op_dash_add311 ( ( (  start4378 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  num_dash_lines1031 ) ( ( ( * ( (  pane1028 ) ( ( env->ed4366 ) ) ) ) .f_buf ) ) ) ) ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } );
    } else {
        start4378 = ( (  right_dash_pos1030 ) ( ( ( ( * ( env->ed4366 ) ) .f_pane ) .f_buf ) ,  (  start4378 ) ) );
    }
    struct envunion1372  temp1380 = ( (struct envunion1372){ .fun = (  enum Unit_8  (*) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_154  ,    struct StrView_27  ) )replace_dash_selection1307 , .env =  env->envinst135 } );
    ( temp1380.fun ( &temp1380.env ,  ( (  pane1028 ) ( ( env->ed4366 ) ) ) ,  ( ( Tuple2_154_Tuple2 ) ( (  start4378 ) ,  (  start4378 ) ) ) ,  (  cp4377 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1383 {
    enum Unit_8  (*fun) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_154  ,    struct StrView_27  );
    struct env135 env;
};

struct env1382 {
    ;
    ;
    ;
    struct env135 envinst135;
    ;
    ;
    ;
    ;
    struct Editor_163 *  ed4366;
};

struct envunion1384 {
    enum Unit_8  (*fun) (  struct env1382*  ,    struct StrView_27  );
    struct env1382 env;
};

static  enum Unit_8   if_dash_just1381 (    struct Maybe_164  x1291 ,   struct envunion1384  fun1293 ) {
    struct Maybe_164  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_164_Just_t ) {
        struct envunion1384  temp1385 = (  fun1293 );
        ( temp1385.fun ( &temp1385.env ,  ( dref1294 .stuff .Maybe_164_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_164_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   min_dash_pos1387 (    struct Pane_141 *  pane4126 ) {
    return ( {  struct Maybe_34  dref4127 = ( ( * (  pane4126 ) ) .f_sel ) ; dref4127.tag == Maybe_34_Just_t ? ( (  min360 ) ( ( ( * (  pane4126 ) ) .f_cursor ) ,  ( dref4127 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4126 ) ) .f_cursor ) ; } );
}

static  enum Unit_8   lam1386 (   struct env1382* env ,    struct StrView_27  cp4380 ) {
    struct Pos_26  start4381 = ( (  min_dash_pos1387 ) ( ( (  pane1028 ) ( ( env->ed4366 ) ) ) ) );
    if ( (  eq245 ( ( (  last1377 ) ( ( (  cp4380 ) .f_contents ) ) ) , ( (  ascii_dash_u8785 ) ( ( (  from_dash_charlike827 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_26  temp1388 = (  start4381 );
        temp1388 .  f_bi = (  from_dash_integral56 ( 0 ) );
        start4381 = ( temp1388 );
    }
    struct envunion1383  temp1389 = ( (struct envunion1383){ .fun = (  enum Unit_8  (*) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_154  ,    struct StrView_27  ) )replace_dash_selection1307 , .env =  env->envinst135 } );
    ( temp1389.fun ( &temp1389.env ,  ( (  pane1028 ) ( ( env->ed4366 ) ) ) ,  ( ( Tuple2_154_Tuple2 ) ( (  start4381 ) ,  (  start4381 ) ) ) ,  (  cp4380 ) ) );
    return ( Unit_8_Unit );
}

struct env1391 {
    ;
    ;
    struct Editor_163 *  ed4366;
    struct env135 envinst135;
};

struct envunion1392 {
    enum Unit_8  (*fun) (  struct env1391*  ,    struct StrView_27  );
    struct env1391 env;
};

static  enum Unit_8   if_dash_just1390 (    struct Maybe_164  x1291 ,   struct envunion1392  fun1293 ) {
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

static  enum Unit_8   lam1394 (   struct env1391* env ,    struct StrView_27  cp4383 ) {
    struct Pos_26  start4384 = ( (  min_dash_pos1387 ) ( ( (  pane1028 ) ( ( env->ed4366 ) ) ) ) );
    struct envunion175  temp1395 = ( (struct envunion175){ .fun = (  enum Unit_8  (*) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_154  ,    struct StrView_27  ) )replace_dash_selection1307 , .env =  env->envinst135 } );
    ( temp1395.fun ( &temp1395.env ,  ( (  pane1028 ) ( ( env->ed4366 ) ) ) ,  ( ( Tuple2_154_Tuple2 ) ( (  start4384 ) ,  (  start4384 ) ) ) ,  (  cp4383 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   expand1396 (    struct Pane_141 *  pane4145 ) {
    struct Pos_26  min_dash_pos4146 = ( (  min_dash_pos1387 ) ( (  pane4145 ) ) );
    struct Pos_26  max_dash_pos4147 = ( (  max_dash_pos1376 ) ( (  pane4145 ) ) );
    int32_t  max_dash_pos_dash_max4148 = ( (  size_dash_i32233 ) ( ( (  num_dash_bytes1024 ) ( ( (  line991 ) ( ( ( * (  pane4145 ) ) .f_buf ) ,  ( (  max_dash_pos4147 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq365 ( ( (  min_dash_pos4146 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) && (  eq365 ( ( (  max_dash_pos4147 ) .f_bi ) , (  max_dash_pos_dash_max4148 ) ) ) ) ) ) {
        struct Pos_26  temp1397 = (  min_dash_pos4146 );
        temp1397 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4145 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1397 ) ) );
        struct Pos_26  temp1398 = (  max_dash_pos4147 );
        temp1398 .  f_bi = (  max_dash_pos_dash_max4148 );
        (*  pane4145 ) .f_cursor = ( temp1398 );
    } else {
        if ( (  cmp362 ( (  op_dash_add311 ( ( (  max_dash_pos4147 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1031 ) ( ( ( * (  pane4145 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_8_Unit );
        }
        struct Pos_26  temp1399 = (  min_dash_pos4146 );
        temp1399 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4145 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1399 ) ) );
        int32_t  next_dash_line4149 = (  op_dash_add311 ( ( (  max_dash_pos4147 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
        (*  pane4145 ) .f_cursor = ( (struct Pos_26) { .f_line = (  next_dash_line4149 ) , .f_bi = ( (  size_dash_i32233 ) ( ( (  num_dash_bytes1024 ) ( ( (  line991 ) ( ( ( * (  pane4145 ) ) .f_buf ) ,  (  next_dash_line4149 ) ) ) ) ) ) ) } );
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
            struct Tuple2_154  field0;
        } Maybe_1402_Just_s;
    } stuff;
};

static struct Maybe_1402 Maybe_1402_Just (  struct Tuple2_154  field0 ) {
    return ( struct Maybe_1402 ) { .tag = Maybe_1402_Just_t, .stuff = { .Maybe_1402_Just_s = { .field0 = field0 } } };
};

struct env1404 {
    ;
    ;
    struct StrView_27  query4257;
    ;
    struct Pane_141 *  pane4253;
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

static  struct Maybe_1046   search_dash_on_dash_line1407 (   struct env1404* env ,    struct Pos_26  pos4260 ) {
    return ( (  find_dash_slice1408 ) ( ( ( (  byte_dash_substr_dash_from1427 ) ( ( (  line991 ) ( ( ( * ( env->pane4253 ) ) .f_buf ) ,  ( (  pos4260 ) .f_line ) ) ) ,  ( (  i32_dash_size299 ) ( ( (  pos4260 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4257 ) .f_contents ) ) );
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

static  struct Maybe_1402   search_dash_from1403 (    struct Pane_141 *  pane4253 ,    struct Pos_26  pos4255 ,    struct StrView_27  query4257 ) {
    struct env1404 envinst1404 = {
        .query4257 =  query4257 ,
        .pane4253 =  pane4253 ,
    };
    struct envunion1406  temp1405 = ( (struct envunion1406){ .fun = (  struct Maybe_1046  (*) (  struct env1404*  ,    struct Pos_26  ) )search_dash_on_dash_line1407 , .env =  envinst1404 } );
    struct Maybe_1046  dref4261 = ( temp1405.fun ( &temp1405.env ,  (  pos4255 ) ) );
    if ( dref4261.tag == Maybe_1046_Just_t ) {
        struct Pos_26  temp1428 = (  pos4255 );
        temp1428 .  f_bi = (  op_dash_add311 ( ( (  pos4255 ) .f_bi ) , ( (  size_dash_i32233 ) ( ( dref4261 .stuff .Maybe_1046_Just_s .field0 ) ) ) ) );
        struct Pos_26  sel_dash_pos4263 = ( temp1428 );
        struct Pos_26  temp1429 = (  pos4255 );
        temp1429 .  f_bi = (  op_dash_sub852 ( (  op_dash_add311 ( ( (  pos4255 ) .f_bi ) , ( (  size_dash_i32233 ) ( (  op_dash_add269 ( ( dref4261 .stuff .Maybe_1046_Just_s .field0 ) , ( (  num_dash_bytes1024 ) ( (  query4257 ) ) ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4264 = ( temp1429 );
        return ( ( Maybe_1402_Just ) ( ( ( Tuple2_154_Tuple2 ) ( (  sel_dash_pos4263 ) ,  (  cur_dash_pos4264 ) ) ) ) );
    }
    else {
        if ( dref4261.tag == Maybe_1046_None_t ) {
            int32_t  num_dash_lines4265 = ( (  num_dash_lines1031 ) ( ( ( * (  pane4253 ) ) .f_buf ) ) );
            struct RangeIter_729  temp1430 =  into_dash_iter731 ( ( (  to734 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4265 ) ) ) );
            while (true) {
                struct Maybe_309  __cond1431 =  next732 (&temp1430);
                if (  __cond1431 .tag == 0 ) {
                    break;
                }
                int32_t  i4267 =  __cond1431 .stuff .Maybe_309_Just_s .field0;
                int32_t  line4268 = ( (  mod1432 ) ( (  op_dash_add311 ( ( (  pos4255 ) .f_line ) , (  i4267 ) ) ) ,  (  num_dash_lines4265 ) ) );
                struct envunion1436  temp1435 = ( (struct envunion1436){ .fun = (  struct Maybe_1046  (*) (  struct env1404*  ,    struct Pos_26  ) )search_dash_on_dash_line1407 , .env =  envinst1404 } );
                struct Maybe_1046  dref4269 = ( temp1435.fun ( &temp1435.env ,  ( (struct Pos_26) { .f_line = (  line4268 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) );
                if ( dref4269.tag == Maybe_1046_Just_t ) {
                    struct Pos_26  sel_dash_pos4271 = ( (struct Pos_26) { .f_line = (  line4268 ) , .f_bi = ( (  size_dash_i32233 ) ( ( dref4269 .stuff .Maybe_1046_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4272 = ( (struct Pos_26) { .f_line = (  line4268 ) , .f_bi = (  op_dash_sub852 ( ( (  size_dash_i32233 ) ( (  op_dash_add269 ( ( dref4269 .stuff .Maybe_1046_Just_s .field0 ) , ( (  num_dash_bytes1024 ) ( (  query4257 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1402_Just ) ( ( ( Tuple2_154_Tuple2 ) ( (  sel_dash_pos4271 ) ,  (  cur_dash_pos4272 ) ) ) ) );
                }
                else {
                    if ( dref4269.tag == Maybe_1046_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1402) { .tag = Maybe_1402_None_t } );
        }
    }
}

static  enum Unit_8   next_dash_match1401 (    struct Editor_163 *  ed4350 ) {
    struct Maybe_164  dref4351 = ( ( * (  ed4350 ) ) .f_search_dash_term );
    if ( dref4351.tag == Maybe_164_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4351.tag == Maybe_164_Just_t ) {
            struct Maybe_1402  dref4353 = ( (  search_dash_from1403 ) ( ( (  pane1028 ) ( (  ed4350 ) ) ) ,  ( (  max_dash_pos1376 ) ( ( (  pane1028 ) ( (  ed4350 ) ) ) ) ) ,  ( dref4351 .stuff .Maybe_164_Just_s .field0 ) ) );
            if ( dref4353.tag == Maybe_1402_None_t ) {
            }
            else {
                if ( dref4353.tag == Maybe_1402_Just_t ) {
                    ( (  set_dash_cursors985 ) ( ( (  pane1028 ) ( (  ed4350 ) ) ) ,  ( dref4353 .stuff .Maybe_1402_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4353 .stuff .Maybe_1402_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_986_UpdateVI ) ) );
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

static  struct Maybe_1402   search_dash_back1438 (    struct Pane_141 *  pane4275 ,    struct Pos_26  pos4277 ,    struct StrView_27  query4279 ) {
    struct Maybe_1046  dref4280 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1439 ) ( ( ( (  byte_dash_substr430 ) ( ( (  line991 ) ( ( ( * (  pane4275 ) ) .f_buf ) ,  ( (  pos4277 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size299 ) ( ( (  pos4277 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4279 ) .f_contents ) ) );
    if ( dref4280.tag == Maybe_1046_Just_t ) {
        struct Pos_26  temp1442 = (  pos4277 );
        temp1442 .  f_bi = ( (  size_dash_i32233 ) ( ( dref4280 .stuff .Maybe_1046_Just_s .field0 ) ) );
        struct Pos_26  sel_dash_pos4282 = ( temp1442 );
        struct Pos_26  temp1443 = (  pos4277 );
        temp1443 .  f_bi = (  op_dash_sub852 ( ( (  size_dash_i32233 ) ( (  op_dash_add269 ( ( dref4280 .stuff .Maybe_1046_Just_s .field0 ) , ( (  num_dash_bytes1024 ) ( (  query4279 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4283 = ( temp1443 );
        return ( ( Maybe_1402_Just ) ( ( ( Tuple2_154_Tuple2 ) ( (  sel_dash_pos4282 ) ,  (  cur_dash_pos4283 ) ) ) ) );
    }
    else {
        if ( dref4280.tag == Maybe_1046_None_t ) {
            int32_t  num_dash_lines4284 = ( (  num_dash_lines1031 ) ( ( ( * (  pane4275 ) ) .f_buf ) ) );
            struct RangeIter_729  temp1444 =  into_dash_iter731 ( ( (  to734 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4284 ) ) ) );
            while (true) {
                struct Maybe_309  __cond1445 =  next732 (&temp1444);
                if (  __cond1445 .tag == 0 ) {
                    break;
                }
                int32_t  i4286 =  __cond1445 .stuff .Maybe_309_Just_s .field0;
                int32_t  line4287 = ( (  mod1432 ) ( (  op_dash_sub852 ( ( (  pos4277 ) .f_line ) , (  i4286 ) ) ) ,  (  num_dash_lines4284 ) ) );
                struct Maybe_1046  dref4288 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1439 ) ( ( ( (  line991 ) ( ( ( * (  pane4275 ) ) .f_buf ) ,  (  line4287 ) ) ) .f_contents ) ,  ( (  query4279 ) .f_contents ) ) );
                if ( dref4288.tag == Maybe_1046_Just_t ) {
                    struct Pos_26  sel_dash_pos4290 = ( (struct Pos_26) { .f_line = (  line4287 ) , .f_bi = ( (  size_dash_i32233 ) ( ( dref4288 .stuff .Maybe_1046_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4291 = ( (struct Pos_26) { .f_line = (  line4287 ) , .f_bi = (  op_dash_sub852 ( ( (  size_dash_i32233 ) ( (  op_dash_add269 ( ( dref4288 .stuff .Maybe_1046_Just_s .field0 ) , ( (  num_dash_bytes1024 ) ( (  query4279 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1402_Just ) ( ( ( Tuple2_154_Tuple2 ) ( (  sel_dash_pos4290 ) ,  (  cur_dash_pos4291 ) ) ) ) );
                }
                else {
                    if ( dref4288.tag == Maybe_1046_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1402) { .tag = Maybe_1402_None_t } );
        }
    }
}

static  enum Unit_8   prev_dash_match1437 (    struct Editor_163 *  ed4358 ) {
    struct Maybe_164  dref4359 = ( ( * (  ed4358 ) ) .f_search_dash_term );
    if ( dref4359.tag == Maybe_164_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4359.tag == Maybe_164_Just_t ) {
            struct Maybe_1402  dref4361 = ( (  search_dash_back1438 ) ( ( (  pane1028 ) ( (  ed4358 ) ) ) ,  ( (  min_dash_pos1387 ) ( ( (  pane1028 ) ( (  ed4358 ) ) ) ) ) ,  ( dref4359 .stuff .Maybe_164_Just_s .field0 ) ) );
            if ( dref4361.tag == Maybe_1402_None_t ) {
            }
            else {
                if ( dref4361.tag == Maybe_1402_Just_t ) {
                    ( (  set_dash_cursors985 ) ( ( (  pane1028 ) ( (  ed4358 ) ) ) ,  ( dref4361 .stuff .Maybe_1402_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4361 .stuff .Maybe_1402_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_986_UpdateVI ) ) );
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

static  struct Pos_26   lam1461 (    struct Pos_26  sel4220 ) {
    struct Pos_26  temp1462 = (  sel4220 );
    temp1462 .  f_bi = (  op_dash_add311 ( ( (  sel4220 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( temp1462 );
}

static  enum Unit_8   indent_dash_selection1447 (   struct env139* env ,    struct Pane_141 *  self4216 ) {
    struct envunion144  temp1448 = ( (struct envunion144){ .fun = (  enum Unit_8  (*) (  struct env117*  ,    struct TextBuf_99 *  ,    struct Cursors_33  ) )begin_dash_changeset1449 , .env =  env->envinst117 } );
    ( temp1448.fun ( &temp1448.env ,  ( ( * (  self4216 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4216 ) ) .f_cursor ) , .f_sel = ( ( * (  self4216 ) ) .f_sel ) } ) ) );
    struct RangeIter_729  temp1452 =  into_dash_iter731 ( ( (  to734 ) ( ( ( (  min_dash_pos1387 ) ( (  self4216 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1376 ) ( (  self4216 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_309  __cond1453 =  next732 (&temp1452);
        if (  __cond1453 .tag == 0 ) {
            break;
        }
        int32_t  line4218 =  __cond1453 .stuff .Maybe_309_Just_s .field0;
        struct envunion140  temp1454 = ( (struct envunion140){ .fun = (  enum Unit_8  (*) (  struct env137*  ,    struct Pane_141 *  ,    int32_t  ) )indent_dash_at1205 , .env =  env->envinst137 } );
        ( temp1454.fun ( &temp1454.env ,  (  self4216 ) ,  (  line4218 ) ) );
    }
    ( (  end_dash_changeset1455 ) ( ( ( * (  self4216 ) ) .f_buf ) ) );
    struct Pos_26  temp1459 = ( ( * (  self4216 ) ) .f_cursor );
    temp1459 .  f_bi = (  op_dash_add311 ( ( ( ( * (  self4216 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( (  set_dash_cursors985 ) ( (  self4216 ) ,  ( temp1459 ) ,  ( (  fmap_dash_maybe1460 ) ( ( ( * (  self4216 ) ) .f_sel ) ,  (  lam1461 ) ) ) ,  ( CursorMovement_986_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

struct env1473 {
    bool  last_dash_char_dash_was_dash_tab4225;
    ;
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

static  struct Pos_26   lam1476 (   struct env1473* env ,    struct Pos_26  sel4229 ) {
    struct Pos_26  temp1477 = (  sel4229 );
    temp1477 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4225 ) ? (  op_dash_sub852 ( ( (  sel4229 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( (  sel4229 ) .f_bi ) );
    return ( temp1477 );
}

static  enum Unit_8   dedent_dash_selection1464 (   struct env145* env ,    struct Pane_141 *  self4223 ) {
    struct envunion147  temp1465 = ( (struct envunion147){ .fun = (  enum Unit_8  (*) (  struct env117*  ,    struct TextBuf_99 *  ,    struct Cursors_33  ) )begin_dash_changeset1449 , .env =  env->envinst117 } );
    ( temp1465.fun ( &temp1465.env ,  ( ( * (  self4223 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4223 ) ) .f_cursor ) , .f_sel = ( ( * (  self4223 ) ) .f_sel ) } ) ) );
    struct Pos_26  temp1466 = ( (  min_dash_pos1387 ) ( (  self4223 ) ) );
    temp1466 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4224 = (  eq448 ( ( (  char_dash_at1237 ) ( (  self4223 ) ,  ( temp1466 ) ) ) , ( (  from_dash_charlike258 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_26  temp1467 = ( (  max_dash_pos1376 ) ( (  self4223 ) ) );
    temp1467 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4225 = (  eq448 ( ( (  char_dash_at1237 ) ( (  self4223 ) ,  ( temp1467 ) ) ) , ( (  from_dash_charlike258 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_729  temp1468 =  into_dash_iter731 ( ( (  to734 ) ( ( ( (  min_dash_pos1387 ) ( (  self4223 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1376 ) ( (  self4223 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_309  __cond1469 =  next732 (&temp1468);
        if (  __cond1469 .tag == 0 ) {
            break;
        }
        int32_t  line4227 =  __cond1469 .stuff .Maybe_309_Just_s .field0;
        if ( (  eq448 ( ( (  char_dash_at1237 ) ( (  self4223 ) ,  ( (struct Pos_26) { .f_line = (  line4227 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike258 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion146  temp1470 = ( (struct envunion146){ .fun = (  struct Maybe_128  (*) (  struct env112*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_128  ) )change1063 , .env =  env->envinst112 } );
            ( temp1470.fun ( &temp1470.env ,  ( ( * (  self4223 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4227 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4227 ) , .f_bi = (  from_dash_integral56 ( 1 ) ) } ) ,  ( (  from_dash_string257 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_128) { .tag = Maybe_128_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1455 ) ( ( ( * (  self4223 ) ) .f_buf ) ) );
    struct Pos_26  temp1471 = ( ( * (  self4223 ) ) .f_cursor );
    temp1471 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4224 ) ? (  op_dash_sub852 ( ( ( ( * (  self4223 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( ( ( * (  self4223 ) ) .f_cursor ) .f_bi ) );
    struct env1473 envinst1473 = {
        .last_dash_char_dash_was_dash_tab4225 =  last_dash_char_dash_was_dash_tab4225 ,
    };
    ( (  set_dash_cursors985 ) ( (  self4223 ) ,  ( temp1471 ) ,  ( (  fmap_dash_maybe1472 ) ( ( ( * (  self4223 ) ) .f_sel ) ,  ( (struct envunion1474){ .fun = (  struct Pos_26  (*) (  struct env1473*  ,    struct Pos_26  ) )lam1476 , .env =  envinst1473 } ) ) ) ,  ( CursorMovement_986_UpdateVI ) ) );
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
    struct Pane_141 *  self4238;
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

static  int32_t   lam1500 (   struct env1485* env ,    int32_t  ln4242 ) {
    return ( (  indent_dash_at_dash_line1040 ) ( ( env->self4238 ) ,  (  ln4242 ) ) );
}

struct env1502 {
    ;
    ;
    struct Pane_141 *  self4238;
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

static  bool   lam1515 (    struct Char_65  c4170 ) {
    return ( ( !  eq448 ( (  c4170 ) , ( (  from_dash_charlike258 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) && ( (  is_dash_whitespace1236 ) ( (  c4170 ) ) ) );
}

static  struct Maybe_1402   line_dash_begins_dash_with_dash_comment1514 (    struct Pane_141 *  self4164 ,    int32_t  line4166 ) {
    int32_t  indent4167 = ( (  indent_dash_at_dash_line1040 ) ( (  self4164 ) ,  (  line4166 ) ) );
    if ( (  eq448 ( ( (  char_dash_at1237 ) ( (  self4164 ) ,  ( (  mk343 ) ( (  line4166 ) ,  (  indent4167 ) ) ) ) ) , ( (  from_dash_charlike258 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
        int32_t  i4168 = (  op_dash_add311 ( (  indent4167 ) , (  from_dash_integral56 ( 1 ) ) ) );
        while ( ( (  lam1515 ) ( ( (  char_dash_at1237 ) ( (  self4164 ) ,  ( (  mk343 ) ( (  line4166 ) ,  (  i4168 ) ) ) ) ) ) ) ) {
            i4168 = (  op_dash_add311 ( (  i4168 ) , (  from_dash_integral56 ( 1 ) ) ) );
        }
        return ( ( Maybe_1402_Just ) ( ( ( Tuple2_154_Tuple2 ) ( ( (  mk343 ) ( (  line4166 ) ,  (  indent4167 ) ) ) ,  ( (  mk343 ) ( (  line4166 ) ,  (  i4168 ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_1402) { .tag = Maybe_1402_None_t } );
    }
}

static  bool   lam1512 (   struct env1502* env ,    int32_t  ln4245 ) {
    return ( (  is_dash_just1513 ) ( ( (  line_dash_begins_dash_with_dash_comment1514 ) ( ( env->self4238 ) ,  (  ln4245 ) ) ) ) );
}

static  struct Tuple2_154   undefined1521 (  ) {
    struct Tuple2_154  temp1522;
    return (  temp1522 );
}

static  struct Tuple2_154   or_dash_fail1520 (    struct Maybe_1402  x1726 ,    struct StrView_27  errmsg1728 ) {
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

static  enum Unit_8   toggle_dash_comment1479 (   struct env150* env ,    struct Pane_141 *  self4238 ) {
    int32_t  from_dash_line4239 = ( ( (  min_dash_pos1387 ) ( (  self4238 ) ) ) .f_line );
    int32_t  to_dash_line4240 = ( ( (  max_dash_pos1376 ) ( (  self4238 ) ) ) .f_line );
    struct env1485 envinst1485 = {
        .self4238 =  self4238 ,
    };
    int32_t  min_dash_indent4243 = ( (  or_dash_fail1480 ) ( ( (  minimum1483 ) ( ( (  map1499 ) ( ( (  to734 ) ( (  from_dash_line4239 ) ,  (  to_dash_line4240 ) ) ) ,  ( (struct envunion1486){ .fun = (  int32_t  (*) (  struct env1485*  ,    int32_t  ) )lam1500 , .env =  envinst1485 } ) ) ) ) ) ,  ( (  from_dash_string257 ) ( ( "no lines what??" ) ,  ( 15 ) ) ) ) );
    struct env1502 envinst1502 = {
        .self4238 =  self4238 ,
    };
    bool  all_dash_have_dash_comment4246 = ( (  all1501 ) ( ( (  to734 ) ( (  from_dash_line4239 ) ,  (  to_dash_line4240 ) ) ) ,  ( (struct envunion1503){ .fun = (  bool  (*) (  struct env1502*  ,    int32_t  ) )lam1512 , .env =  envinst1502 } ) ) );
    struct envunion152  temp1516 = ( (struct envunion152){ .fun = (  enum Unit_8  (*) (  struct env117*  ,    struct TextBuf_99 *  ,    struct Cursors_33  ) )begin_dash_changeset1449 , .env =  env->envinst117 } );
    ( temp1516.fun ( &temp1516.env ,  ( ( * (  self4238 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4238 ) ) .f_cursor ) , .f_sel = ( ( * (  self4238 ) ) .f_sel ) } ) ) );
    struct RangeIter_729  temp1517 =  into_dash_iter731 ( ( (  to734 ) ( (  from_dash_line4239 ) ,  (  to_dash_line4240 ) ) ) );
    while (true) {
        struct Maybe_309  __cond1518 =  next732 (&temp1517);
        if (  __cond1518 .tag == 0 ) {
            break;
        }
        int32_t  line4248 =  __cond1518 .stuff .Maybe_309_Just_s .field0;
        struct Char_65  comment_dash_str4249 = ( (  from_dash_charlike258 ) ( ( "#" ) ,  ( 1 ) ) );
        if ( ( ! (  all_dash_have_dash_comment4246 ) ) ) {
            ( (  set_dash_cursors985 ) ( (  self4238 ) ,  ( (  mk343 ) ( (  line4248 ) ,  (  min_dash_indent4243 ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_NoChanges ) ) );
            struct envunion151  temp1519 = ( (struct envunion151){ .fun = (  enum Unit_8  (*) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1061 , .env =  env->envinst126 } );
            ( temp1519.fun ( &temp1519.env ,  (  self4238 ) ,  ( (  from_dash_string257 ) ( ( "# " ) ,  ( 2 ) ) ) ) );
        } else {
            struct Tuple2_154  tup4250 = ( (  or_dash_fail1520 ) ( ( (  line_dash_begins_dash_with_dash_comment1514 ) ( (  self4238 ) ,  (  line4248 ) ) ) ,  ( (  from_dash_string257 ) ( ( "(Pane.toggle-comment) impossiburu" ) ,  ( 33 ) ) ) ) );
            struct envunion153  temp1523 = ( (struct envunion153){ .fun = (  enum Unit_8  (*) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_154  ,    struct StrView_27  ) )replace_dash_selection1307 , .env =  env->envinst135 } );
            ( temp1523.fun ( &temp1523.env ,  (  self4238 ) ,  ( ( Tuple2_154_Tuple2 ) ( ( (  fst1297 ) ( (  tup4250 ) ) ) ,  ( (  snd1298 ) ( (  tup4250 ) ) ) ) ) ,  ( (  from_dash_string257 ) ( ( "" ) ,  ( 0 ) ) ) ) );
        }
    }
    ( (  end_dash_changeset1455 ) ( ( ( * (  self4238 ) ) .f_buf ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   handle_dash_normal_dash_key983 (   struct env166* env ,    struct Editor_163 *  ed4366 ,    struct Key_184  key4368 ) {
    struct Key_184  dref4369 = (  key4368 );
    if ( dref4369.tag == Key_184_Char_t ) {
        if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4366 ) .f_running = ( false );
        } else {
            if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left984 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ) );
            } else {
                if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right1029 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ) );
                } else {
                    if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down1032 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                    } else {
                        if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up1036 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                        } else {
                            if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode1037 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ,  ( Mode_142_Insert ) ) );
                            } else {
                                if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "I" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  move_dash_to_dash_beginning_dash_indented1039 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ) );
                                    ( (  set_dash_mode1037 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ,  ( Mode_142_Insert ) ) );
                                } else {
                                    if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  move_dash_to_dash_end1058 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ) );
                                        ( (  set_dash_mode1037 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ,  ( Mode_142_Insert ) ) );
                                    } else {
                                        if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                            struct Pane_141 *  pane4371 = ( (  pane1028 ) ( (  ed4366 ) ) );
                                            int32_t  indent4372 = ( (  indent_dash_at_dash_line1040 ) ( (  pane4371 ) ,  ( ( ( * (  pane4371 ) ) .f_cursor ) .f_line ) ) );
                                            ( (  move_dash_to_dash_end1058 ) ( (  pane4371 ) ) );
                                            struct envunion169  temp1060 = ( (struct envunion169){ .fun = (  enum Unit_8  (*) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1061 , .env =  env->envinst126 } );
                                            ( temp1060.fun ( &temp1060.env ,  (  pane4371 ) ,  ( (  from_dash_charlike1124 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                            ( (  move_dash_right1029 ) ( (  pane4371 ) ) );
                                            struct envunion167  temp1200 = ( (struct envunion167){ .fun = (  enum Unit_8  (*) (  struct env148*  ,    struct Pane_141 *  ,    int32_t  ) )indent_dash_at_dash_current1201 , .env =  env->envinst148 } );
                                            ( temp1200.fun ( &temp1200.env ,  (  pane4371 ) ,  (  indent4372 ) ) );
                                            ( (  set_dash_mode1037 ) ( (  pane4371 ) ,  ( Mode_142_Insert ) ) );
                                        } else {
                                            if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct Pane_141 *  pane4373 = ( (  pane1028 ) ( (  ed4366 ) ) );
                                                int32_t  indent4374 = ( (  indent_dash_at_dash_line1040 ) ( (  pane4373 ) ,  ( ( ( * (  pane4373 ) ) .f_cursor ) .f_line ) ) );
                                                ( (  move_dash_to_dash_beginning1207 ) ( (  pane4373 ) ) );
                                                struct envunion1210  temp1209 = ( (struct envunion1210){ .fun = (  enum Unit_8  (*) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1061 , .env =  env->envinst126 } );
                                                ( temp1209.fun ( &temp1209.env ,  (  pane4373 ) ,  ( (  from_dash_charlike1124 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                                struct envunion1212  temp1211 = ( (struct envunion1212){ .fun = (  enum Unit_8  (*) (  struct env148*  ,    struct Pane_141 *  ,    int32_t  ) )indent_dash_at_dash_current1201 , .env =  env->envinst148 } );
                                                ( temp1211.fun ( &temp1211.env ,  (  pane4373 ) ,  (  indent4374 ) ) );
                                                ( (  set_dash_mode1037 ) ( (  pane4373 ) ,  ( Mode_142_Insert ) ) );
                                            } else {
                                                if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  advance_dash_word1213 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ,  ( MoveDirection_1214_MoveFwd ) ,  ( MoveTarget_1215_NextWordStart ) ) );
                                                } else {
                                                    if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  advance_dash_word1213 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ,  ( MoveDirection_1214_MoveFwd ) ,  ( MoveTarget_1215_NextWordEnd ) ) );
                                                    } else {
                                                        if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  advance_dash_word1213 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ,  ( MoveDirection_1214_MoveBwd ) ,  ( MoveTarget_1215_NextWordEnd ) ) );
                                                        } else {
                                                            if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion173  temp1249 = ( (struct envunion173){ .fun = (  enum Unit_8  (*) (  struct env133*  ,    struct Pane_141 *  ) )redo1250 , .env =  env->envinst133 } );
                                                                ( temp1249.fun ( &temp1249.env ,  ( (  pane1028 ) ( (  ed4366 ) ) ) ) );
                                                            } else {
                                                                if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct envunion172  temp1274 = ( (struct envunion172){ .fun = (  enum Unit_8  (*) (  struct env131*  ,    struct Pane_141 *  ) )undo1275 , .env =  env->envinst131 } );
                                                                    ( temp1274.fun ( &temp1274.env ,  ( (  pane1028 ) ( (  ed4366 ) ) ) ) );
                                                                } else {
                                                                    if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct envunion176  temp1292 = ( (struct envunion176){ .fun = (  enum Unit_8  (*) (  struct env155*  ,    struct Editor_163 *  ) )copy_dash_selection_dash_to_dash_clipboard1293 , .env =  env->envinst155 } );
                                                                        ( temp1292.fun ( &temp1292.env ,  (  ed4366 ) ) );
                                                                        struct envunion1306  temp1305 = ( (struct envunion1306){ .fun = (  enum Unit_8  (*) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_154  ,    struct StrView_27  ) )replace_dash_selection1307 , .env =  env->envinst135 } );
                                                                        ( temp1305.fun ( &temp1305.env ,  ( (  pane1028 ) ( (  ed4366 ) ) ) ,  ( (  selection1294 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ) ) ,  ( (  from_dash_string257 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                        ( (  set_dash_mode1037 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ,  ( Mode_142_Normal ) ) );
                                                                    } else {
                                                                        if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct envunion1315  temp1314 = ( (struct envunion1315){ .fun = (  enum Unit_8  (*) (  struct env155*  ,    struct Editor_163 *  ) )copy_dash_selection_dash_to_dash_clipboard1293 , .env =  env->envinst155 } );
                                                                            ( temp1314.fun ( &temp1314.env ,  (  ed4366 ) ) );
                                                                            struct envunion1317  temp1316 = ( (struct envunion1317){ .fun = (  enum Unit_8  (*) (  struct env135*  ,    struct Pane_141 *  ,    struct Tuple2_154  ,    struct StrView_27  ) )replace_dash_selection1307 , .env =  env->envinst135 } );
                                                                            ( temp1316.fun ( &temp1316.env ,  ( (  pane1028 ) ( (  ed4366 ) ) ) ,  ( (  selection1294 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ) ) ,  ( (  from_dash_string257 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                            ( (  set_dash_mode1037 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ,  ( Mode_142_Insert ) ) );
                                                                        } else {
                                                                            if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                struct envunion1319  temp1318 = ( (struct envunion1319){ .fun = (  enum Unit_8  (*) (  struct env155*  ,    struct Editor_163 *  ) )copy_dash_selection_dash_to_dash_clipboard1293 , .env =  env->envinst155 } );
                                                                                ( temp1318.fun ( &temp1318.env ,  (  ed4366 ) ) );
                                                                                size_t  bytes_dash_yanked4375 = ( (  num_dash_bytes1024 ) ( ( (  or_dash_else420 ) ( ( ( * (  ed4366 ) ) .f_clipboard ) ,  ( (  from_dash_string257 ) ( ( "" ) ,  ( 0 ) ) ) ) ) ) );
                                                                                struct envunion168  temp1320 = ( (struct envunion168){ .fun = (  enum Unit_8  (*) (  struct env159*  ,    struct Editor_163 *  ,    struct StrConcat_74  ) )set_dash_msg1321 , .env =  env->envinst159 } );
                                                                                ( temp1320.fun ( &temp1320.env ,  (  ed4366 ) ,  ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4375 ) ) ) ,  ( (  from_dash_string257 ) ( ( " bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    struct env1371 envinst1371 = {
                                                                                        .envinst135 = env->envinst135 ,
                                                                                        .ed4366 =  ed4366 ,
                                                                                    };
                                                                                    ( (  if_dash_just1370 ) ( ( ( * (  ed4366 ) ) .f_clipboard ) ,  ( (struct envunion1373){ .fun = (  enum Unit_8  (*) (  struct env1371*  ,    struct StrView_27  ) )lam1375 , .env =  envinst1371 } ) ) );
                                                                                } else {
                                                                                    if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        struct env1382 envinst1382 = {
                                                                                            .envinst135 = env->envinst135 ,
                                                                                            .ed4366 =  ed4366 ,
                                                                                        };
                                                                                        ( (  if_dash_just1381 ) ( ( ( * (  ed4366 ) ) .f_clipboard ) ,  ( (struct envunion1384){ .fun = (  enum Unit_8  (*) (  struct env1382*  ,    struct StrView_27  ) )lam1386 , .env =  envinst1382 } ) ) );
                                                                                    } else {
                                                                                        if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            struct env1391 envinst1391 = {
                                                                                                .ed4366 =  ed4366 ,
                                                                                                .envinst135 = env->envinst135 ,
                                                                                            };
                                                                                            ( (  if_dash_just1390 ) ( ( ( * (  ed4366 ) ) .f_clipboard ) ,  ( (struct envunion1392){ .fun = (  enum Unit_8  (*) (  struct env1391*  ,    struct StrView_27  ) )lam1394 , .env =  envinst1391 } ) ) );
                                                                                        } else {
                                                                                            if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  expand1396 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ) );
                                                                                            } else {
                                                                                                if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  set_dash_mode1037 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ,  ( Mode_142_Select ) ) );
                                                                                                    if ( ( (  is_dash_none1400 ) ( ( ( ( * (  ed4366 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                                        (*  ed4366 ) .f_pane .f_sel = ( ( Maybe_34_Just ) ( ( ( ( * (  ed4366 ) ) .f_pane ) .f_cursor ) ) );
                                                                                                    }
                                                                                                } else {
                                                                                                    if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        (*  ed4366 ) .f_mode = ( ( EditorMode_165_Cmd ) ( ( ( * ( (  pane1028 ) ( (  ed4366 ) ) ) ) .f_cursor ) ,  ( (  mk1325 ) ( ( ( * (  ed4366 ) ) .f_al ) ) ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            (*  ed4366 ) .f_mode = ( ( EditorMode_165_Search ) ( ( ( * ( (  pane1028 ) ( (  ed4366 ) ) ) ) .f_cursor ) ,  ( (  mk1325 ) ( ( ( * (  ed4366 ) ) .f_al ) ) ) ) );
                                                                                                        } else {
                                                                                                            if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                ( (  next_dash_match1401 ) ( (  ed4366 ) ) );
                                                                                                            } else {
                                                                                                                if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                    ( (  prev_dash_match1437 ) ( (  ed4366 ) ) );
                                                                                                                } else {
                                                                                                                    if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( ">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                        struct envunion174  temp1446 = ( (struct envunion174){ .fun = (  enum Unit_8  (*) (  struct env139*  ,    struct Pane_141 *  ) )indent_dash_selection1447 , .env =  env->envinst139 } );
                                                                                                                        ( temp1446.fun ( &temp1446.env ,  ( (  pane1028 ) ( (  ed4366 ) ) ) ) );
                                                                                                                    } else {
                                                                                                                        if ( (  eq826 ( ( dref4369 .stuff .Key_184_Char_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                            struct envunion171  temp1463 = ( (struct envunion171){ .fun = (  enum Unit_8  (*) (  struct env145*  ,    struct Pane_141 *  ) )dedent_dash_selection1464 , .env =  env->envinst145 } );
                                                                                                                            ( temp1463.fun ( &temp1463.env ,  ( (  pane1028 ) ( (  ed4366 ) ) ) ) );
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
        if ( dref4369.tag == Key_184_Escape_t ) {
            ( (  set_dash_mode1037 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ,  ( Mode_142_Normal ) ) );
        }
        else {
            if ( dref4369.tag == Key_184_Ctrl_t ) {
                if ( (  eq826 ( ( dref4369 .stuff .Key_184_Ctrl_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                    struct envunion170  temp1478 = ( (struct envunion170){ .fun = (  enum Unit_8  (*) (  struct env150*  ,    struct Pane_141 *  ) )toggle_dash_comment1479 , .env =  env->envinst150 } );
                    ( temp1478.fun ( &temp1478.env ,  ( (  pane1028 ) ( (  ed4366 ) ) ) ) );
                } else {
                    if ( (  eq826 ( ( dref4369 .stuff .Key_184_Ctrl_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_up1036 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
                    } else {
                        if ( (  eq826 ( ( dref4369 .stuff .Key_184_Ctrl_s .field0 ) , ( (  from_dash_charlike827 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_down1032 ) ( ( (  pane1028 ) ( (  ed4366 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
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
    enum Unit_8  (*fun) (  struct env166*  ,    struct Editor_163 *  ,    struct Key_184  );
    struct env166 env;
};

static  enum Unit_8   backspace1529 (   struct env129* env ,    struct Pane_141 *  self4179 ) {
    struct Pos_26  prev_dash_cur4180 = ( ( * (  self4179 ) ) .f_cursor );
    ( (  move_dash_left984 ) ( (  self4179 ) ) );
    struct envunion130  temp1530 = ( (struct envunion130){ .fun = (  struct Maybe_128  (*) (  struct env112*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_128  ) )change1063 , .env =  env->envinst112 } );
    ( temp1530.fun ( &temp1530.env ,  ( ( * (  self4179 ) ) .f_buf ) ,  ( ( * (  self4179 ) ) .f_cursor ) ,  (  prev_dash_cur4180 ) ,  ( (  from_dash_string257 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_128) { .tag = Maybe_128_None_t } ) ) );
    return ( Unit_8_Unit );
}

struct Array_1532 {
    char _arr [1];
};

static  char *   cast1533 (    struct Array_1532 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_842   as_dash_slice1531 (    struct Array_1532 *  arr2273 ) {
    return ( (struct Slice_842) { .f_ptr = ( (  cast1533 ) ( (  arr2273 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1532   from_dash_listlike1535 (    struct Array_1532  self330 ) {
    return (  self330 );
}

struct envunion1537 {
    enum Unit_8  (*fun) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  );
    struct env126 env;
};

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
    struct envunion64  temp1602 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1358 , .env =  env->envinst60 } );
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
    struct StrBuilder_62  temp1593 = ( (  mk1325 ) ( (  al2825 ) ) );
    struct StrBuilder_62 *  sb2826 = ( &temp1593 );
    struct envunion70  temp1594 = ( (struct envunion70){ .fun = (  enum Unit_8  (*) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrView_27  ) )write1595 , .env =  env->envinst63 } );
    ( temp1594.fun ( &temp1594.env ,  (  sb2826 ) ,  (  s2823 ) ) );
    struct envunion71  temp1603 = ( (struct envunion71){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1358 , .env =  env->envinst60 } );
    ( temp1603.fun ( &temp1603.env ,  (  sb2826 ) ,  ( (  nullchar575 ) ( ) ) ) );
    struct StrView_27  dynstr2827 = ( (  as_dash_str1367 ) ( (  sb2826 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2827 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub349 ( ( ( (  dynstr2827 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1590 (   struct env157* env ,    struct Editor_163 *  ed4320 ,    struct StrView_27  s4322 ) {
    ( (  reset_dash_msg972 ) ( (  ed4320 ) ) );
    struct envunion158  temp1591 = ( (struct envunion158){ .fun = (  struct StrView_27  (*) (  struct env69*  ,    struct StrView_27  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1592 , .env =  env->envinst69 } );
    (*  ed4320 ) .f_msg = ( ( Maybe_164_Just ) ( ( temp1591.fun ( &temp1591.env ,  (  s4322 ) ,  ( ( * (  ed4320 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   run_dash_cmd1539 (   struct env161* env ,    struct Editor_163 *  ed4333 ,    struct StrView_27  s4335 ) {
    struct Scanner_1540  temp1541 = ( (  mk_dash_from_dash_strview1542 ) ( (  s4335 ) ) );
    struct Scanner_1540 *  sc4336 = ( &temp1541 );
    struct StrView_27  cmd4337 = ( (  take_dash_str_dash_while1543 ) ( (  sc4336 ) ,  (  is_dash_not_dash_whitespace1559 ) ) );
    ( (  drop_dash_str_dash_while1560 ) ( (  sc4336 ) ,  (  is_dash_whitespace1236 ) ) );
    if ( (  eq1577 ( (  cmd4337 ) , ( (  from_dash_charlike1124 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4333 ) .f_running = ( false );
    } else {
        if ( (  eq1577 ( (  cmd4337 ) , ( (  from_dash_string257 ) ( ( "wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq1577 ( (  cmd4337 ) , ( (  from_dash_charlike1124 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  todo1578 ) ( ) );
            } else {
                if ( (  eq1577 ( (  cmd4337 ) , ( (  from_dash_string257 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                } else {
                    if ( ( (  all1581 ) ( (  cmd4337 ) ,  (  is_dash_digit866 ) ) ) ) {
                    } else {
                        struct envunion162  temp1589 = ( (struct envunion162){ .fun = (  enum Unit_8  (*) (  struct env157*  ,    struct Editor_163 *  ,    struct StrView_27  ) )set_dash_msg1590 , .env =  env->envinst157 } );
                        ( temp1589.fun ( &temp1589.env ,  (  ed4333 ) ,  ( (  from_dash_string257 ) ( ( "unknown command" ) ,  ( 15 ) ) ) ) );
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

static  enum Unit_8   live_dash_cmd1607 (    struct Editor_163 *  ed4325 ,    struct StrView_27  cmd4327 ) {
    struct Maybe_860  dref4328 = ( (  parse_dash_int1608 ) ( (  cmd4327 ) ) );
    if ( dref4328.tag == Maybe_860_Just_t ) {
        int32_t  line4330 = ( (  clamp1379 ) ( ( (  i64_dash_i32902 ) ( ( dref4328 .stuff .Maybe_860_Just_s .field0 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub852 ( ( (  num_dash_lines1031 ) ( ( ( * ( (  pane1028 ) ( (  ed4325 ) ) ) ) .f_buf ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
        ( (  set_dash_cursors985 ) ( ( (  pane1028 ) ( (  ed4325 ) ) ) ,  ( (struct Pos_26) { .f_line = (  line4330 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_NoChanges ) ) );
    }
    else {
        if ( dref4328.tag == Maybe_860_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrViewIter_650   chars1617 (    struct StrBuilder_62  s2817 ) {
    return ( (  into_dash_iter656 ) ( ( (  as_dash_str1367 ) ( ( & (  s2817 ) ) ) ) ) );
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
    ;
    struct Editor_163 *  ed4388;
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

static  enum Unit_8   lam1629 (   struct env1626* env ,    struct StrView_27  st4405 ) {
    ( (  free978 ) ( (  st4405 ) ,  ( ( * ( env->ed4388 ) ) .f_al ) ) );
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

static  enum Unit_8   live_dash_search1632 (    struct Editor_163 *  ed4340 ,    struct Pos_26  begin_dash_pos4342 ,    struct StrView_27  query4344 ) {
    if ( ( ! ( (  null1633 ) ( (  query4344 ) ) ) ) ) {
        struct Maybe_1402  dref4345 = ( (  search_dash_from1403 ) ( ( (  pane1028 ) ( (  ed4340 ) ) ) ,  (  begin_dash_pos4342 ) ,  (  query4344 ) ) );
        if ( dref4345.tag == Maybe_1402_Just_t ) {
            ( (  set_dash_cursors985 ) ( ( (  pane1028 ) ( (  ed4340 ) ) ) ,  ( dref4345 .stuff .Maybe_1402_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4345 .stuff .Maybe_1402_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_986_NoChanges ) ) );
        }
        else {
            if ( dref4345.tag == Maybe_1402_None_t ) {
                ( (  set_dash_cursors985 ) ( ( (  pane1028 ) ( (  ed4340 ) ) ) ,  (  begin_dash_pos4342 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors985 ) ( ( (  pane1028 ) ( (  ed4340 ) ) ) ,  (  begin_dash_pos4342 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_NoChanges ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1637 {
    enum Unit_8  (*fun) (  struct env67*  ,    struct StrBuilder_62 *  );
    struct env67 env;
};

static  enum Unit_8   handle_dash_key981 (   struct env177* env ,    struct Editor_163 *  ed4388 ,    struct Key_184  key4390 ) {
    struct EditorMode_165 *  dref4391 = ( & ( ( * (  ed4388 ) ) .f_mode ) );
    if ( (* dref4391 ).tag == EditorMode_165_Normal_t ) {
        enum Mode_142  dref4392 = ( ( ( * (  ed4388 ) ) .f_pane ) .f_mode );
        switch (  dref4392 ) {
            case Mode_142_Normal : {
                struct envunion183  temp982 = ( (struct envunion183){ .fun = (  enum Unit_8  (*) (  struct env166*  ,    struct Editor_163 *  ,    struct Key_184  ) )handle_dash_normal_dash_key983 , .env =  env->envinst166 } );
                ( temp982.fun ( &temp982.env ,  (  ed4388 ) ,  (  key4390 ) ) );
                break;
            }
            case Mode_142_Select : {
                struct envunion1525  temp1524 = ( (struct envunion1525){ .fun = (  enum Unit_8  (*) (  struct env166*  ,    struct Editor_163 *  ,    struct Key_184  ) )handle_dash_normal_dash_key983 , .env =  env->envinst166 } );
                ( temp1524.fun ( &temp1524.env ,  (  ed4388 ) ,  (  key4390 ) ) );
                break;
            }
            case Mode_142_Insert : {
                struct Key_184  dref4393 = (  key4390 );
                if ( dref4393.tag == Key_184_Escape_t ) {
                    ( (  set_dash_mode1037 ) ( ( (  pane1028 ) ( (  ed4388 ) ) ) ,  ( Mode_142_Normal ) ) );
                }
                else {
                    if ( dref4393.tag == Key_184_Enter_t ) {
                        int32_t  indent4394 = ( (  indent_dash_at_dash_line1040 ) ( ( (  pane1028 ) ( (  ed4388 ) ) ) ,  ( ( ( * ( (  pane1028 ) ( (  ed4388 ) ) ) ) .f_cursor ) .f_line ) ) );
                        struct envunion182  temp1526 = ( (struct envunion182){ .fun = (  enum Unit_8  (*) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1061 , .env =  env->envinst126 } );
                        ( temp1526.fun ( &temp1526.env ,  ( (  pane1028 ) ( (  ed4388 ) ) ) ,  ( (  from_dash_charlike1124 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right1029 ) ( ( (  pane1028 ) ( (  ed4388 ) ) ) ) );
                        struct envunion180  temp1527 = ( (struct envunion180){ .fun = (  enum Unit_8  (*) (  struct env148*  ,    struct Pane_141 *  ,    int32_t  ) )indent_dash_at_dash_current1201 , .env =  env->envinst148 } );
                        ( temp1527.fun ( &temp1527.env ,  ( (  pane1028 ) ( (  ed4388 ) ) ) ,  (  indent4394 ) ) );
                    }
                    else {
                        if ( dref4393.tag == Key_184_Backspace_t ) {
                            struct envunion185  temp1528 = ( (struct envunion185){ .fun = (  enum Unit_8  (*) (  struct env129*  ,    struct Pane_141 *  ) )backspace1529 , .env =  env->envinst129 } );
                            ( temp1528.fun ( &temp1528.env ,  ( (  pane1028 ) ( (  ed4388 ) ) ) ) );
                        }
                        else {
                            if ( dref4393.tag == Key_184_Char_t ) {
                                struct Array_1532  temp1534 = ( (  from_dash_listlike1535 ) ( ( (struct Array_1532) { ._arr = { ( dref4393 .stuff .Key_184_Char_s .field0 ) } } ) ) );
                                struct StrView_27  s4396 = ( (  from_dash_ascii_dash_slice857 ) ( ( (  as_dash_slice1531 ) ( ( &temp1534 ) ) ) ) );
                                struct envunion1537  temp1536 = ( (struct envunion1537){ .fun = (  enum Unit_8  (*) (  struct env126*  ,    struct Pane_141 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1061 , .env =  env->envinst126 } );
                                ( temp1536.fun ( &temp1536.env ,  ( (  pane1028 ) ( (  ed4388 ) ) ) ,  (  s4396 ) ) );
                                ( (  move_dash_right1029 ) ( ( (  pane1028 ) ( (  ed4388 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4391 ).tag == EditorMode_165_Cmd_t ) {
            struct Key_184  dref4399 = (  key4390 );
            if ( dref4399.tag == Key_184_Escape_t ) {
                ( (  set_dash_cursors985 ) ( ( (  pane1028 ) ( (  ed4388 ) ) ) ,  ( (* dref4391 ) .stuff .EditorMode_165_Cmd_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_UpdateVI ) ) );
                (*  ed4388 ) .f_mode = ( (struct EditorMode_165) { .tag = EditorMode_165_Normal_t } );
            }
            else {
                if ( dref4399.tag == Key_184_Enter_t ) {
                    struct envunion178  temp1538 = ( (struct envunion178){ .fun = (  enum Unit_8  (*) (  struct env161*  ,    struct Editor_163 *  ,    struct StrView_27  ) )run_dash_cmd1539 , .env =  env->envinst161 } );
                    ( temp1538.fun ( &temp1538.env ,  (  ed4388 ) ,  ( (  as_dash_str1367 ) ( ( & ( (* dref4391 ) .stuff .EditorMode_165_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1604 ) ( ( & ( (* dref4391 ) .stuff .EditorMode_165_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors985 ) ( ( (  pane1028 ) ( (  ed4388 ) ) ) ,  ( ( * ( (  pane1028 ) ( (  ed4388 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_UpdateVI ) ) );
                    (*  ed4388 ) .f_mode = ( (struct EditorMode_165) { .tag = EditorMode_165_Normal_t } );
                }
                else {
                    if ( dref4399.tag == Key_184_Char_t ) {
                        struct envunion179  temp1605 = ( (struct envunion179){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1358 , .env =  env->envinst60 } );
                        ( temp1605.fun ( &temp1605.env ,  ( & ( (* dref4391 ) .stuff .EditorMode_165_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1606 ) ( ( dref4399 .stuff .Key_184_Char_s .field0 ) ) ) ) );
                        ( (  live_dash_cmd1607 ) ( (  ed4388 ) ,  ( (  as_dash_str1367 ) ( ( & ( (* dref4391 ) .stuff .EditorMode_165_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4399.tag == Key_184_Backspace_t ) {
                            if ( ( ! ( (  null1613 ) ( ( (* dref4391 ) .stuff .EditorMode_165_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion181  temp1618 = ( (struct envunion181){ .fun = (  enum Unit_8  (*) (  struct env67*  ,    struct StrBuilder_62 *  ) )pop1619 , .env =  env->envinst67 } );
                                ( temp1618.fun ( &temp1618.env ,  ( & ( (* dref4391 ) .stuff .EditorMode_165_Cmd_s .field1 ) ) ) );
                            }
                            ( (  live_dash_cmd1607 ) ( (  ed4388 ) ,  ( (  as_dash_str1367 ) ( ( & ( (* dref4391 ) .stuff .EditorMode_165_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref4391 ).tag == EditorMode_165_Search_t ) {
                struct Key_184  dref4403 = (  key4390 );
                if ( dref4403.tag == Key_184_Escape_t ) {
                    ( (  set_dash_cursors985 ) ( ( (  pane1028 ) ( (  ed4388 ) ) ) ,  ( (* dref4391 ) .stuff .EditorMode_165_Search_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_986_UpdateVI ) ) );
                    (*  ed4388 ) .f_mode = ( (struct EditorMode_165) { .tag = EditorMode_165_Normal_t } );
                }
                else {
                    if ( dref4403.tag == Key_184_Enter_t ) {
                        ( (  set_dash_cursors985 ) ( ( (  pane1028 ) ( (  ed4388 ) ) ) ,  ( ( * ( (  pane1028 ) ( (  ed4388 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane1028 ) ( (  ed4388 ) ) ) ) .f_sel ) ,  ( CursorMovement_986_UpdateVI ) ) );
                        struct env1626 envinst1626 = {
                            .ed4388 =  ed4388 ,
                        };
                        ( (  if_dash_just1625 ) ( ( ( * (  ed4388 ) ) .f_search_dash_term ) ,  ( (struct envunion1627){ .fun = (  enum Unit_8  (*) (  struct env1626*  ,    struct StrView_27  ) )lam1629 , .env =  envinst1626 } ) ) );
                        if ( ( ! ( (  null1613 ) ( ( (* dref4391 ) .stuff .EditorMode_165_Search_s .field1 ) ) ) ) ) {
                            struct Pos_26  to4406 = ( ( * ( (  pane1028 ) ( (  ed4388 ) ) ) ) .f_cursor );
                            struct Pos_26  from4407 = ( (  or_dash_else1296 ) ( ( ( * ( (  pane1028 ) ( (  ed4388 ) ) ) ) .f_sel ) ,  (  to4406 ) ) );
                            (*  ed4388 ) .f_search_dash_term = ( ( Maybe_164_Just ) ( ( (  as_dash_str1367 ) ( ( & ( (* dref4391 ) .stuff .EditorMode_165_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4388 ) .f_search_dash_term = ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
                        }
                        (*  ed4388 ) .f_mode = ( (struct EditorMode_165) { .tag = EditorMode_165_Normal_t } );
                    }
                    else {
                        if ( dref4403.tag == Key_184_Char_t ) {
                            struct envunion1631  temp1630 = ( (struct envunion1631){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1358 , .env =  env->envinst60 } );
                            ( temp1630.fun ( &temp1630.env ,  ( & ( (* dref4391 ) .stuff .EditorMode_165_Search_s .field1 ) ) ,  ( (  ascii_dash_char1606 ) ( ( dref4403 .stuff .Key_184_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1632 ) ( (  ed4388 ) ,  ( (* dref4391 ) .stuff .EditorMode_165_Search_s .field0 ) ,  ( (  as_dash_str1367 ) ( ( & ( (* dref4391 ) .stuff .EditorMode_165_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4403.tag == Key_184_Backspace_t ) {
                                if ( ( ! ( (  null1613 ) ( ( (* dref4391 ) .stuff .EditorMode_165_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1637  temp1636 = ( (struct envunion1637){ .fun = (  enum Unit_8  (*) (  struct env67*  ,    struct StrBuilder_62 *  ) )pop1619 , .env =  env->envinst67 } );
                                    ( temp1636.fun ( &temp1636.env ,  ( & ( (* dref4391 ) .stuff .EditorMode_165_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1632 ) ( (  ed4388 ) ,  ( (* dref4391 ) .stuff .EditorMode_165_Search_s .field0 ) ,  ( (  as_dash_str1367 ) ( ( & ( (* dref4391 ) .stuff .EditorMode_165_Search_s .field1 ) ) ) ) ) );
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

static  int32_t   screen_dash_width1662 (    struct ScreenDims_195  sd3988 ) {
    return (  op_dash_add311 ( (  op_dash_sub852 ( ( (  sd3988 ) .f_to_dash_sx ) , ( (  sd3988 ) .f_from_dash_sx ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1663 (    struct ScreenDims_195  sd3991 ) {
    return (  op_dash_add311 ( (  op_dash_sub852 ( ( (  sd3991 ) .f_to_dash_sy ) , ( (  sd3991 ) .f_from_dash_sy ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  enum Unit_8   update_dash_screen_dash_offset1661 (    struct Pane_141 *  pane3994 ,    struct ScreenDims_195  sd3996 ) {
    struct Pos_26  cur3997 = ( ( * (  pane3994 ) ) .f_cursor );
    int32_t  cur_dash_sx3998 = ( (  pos_dash_vi989 ) ( ( ( * (  pane3994 ) ) .f_buf ) ,  (  cur3997 ) ) );
    struct ScreenCursorOffset_143  sc_dash_off3999 = ( ( * (  pane3994 ) ) .f_sc_dash_off );
    int32_t  sw4000 = (  op_dash_sub852 ( ( (  screen_dash_width1662 ) ( (  sd3996 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  sh4001 = (  op_dash_sub852 ( ( (  screen_dash_height1663 ) ( (  sd3996 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  margin4002 = (  from_dash_integral56 ( 5 ) );
    int32_t  csi4003 = ( (  pos_dash_vi989 ) ( ( ( * (  pane3994 ) ) .f_buf ) ,  (  cur3997 ) ) );
    int32_t  csx4004 = (  op_dash_sub852 ( (  csi4003 ) , ( (  sc_dash_off3999 ) .f_screen_dash_left ) ) );
    int32_t  csy4005 = (  op_dash_sub852 ( ( (  cur3997 ) .f_line ) , ( (  sc_dash_off3999 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left4006 = ( (  sc_dash_off3999 ) .f_screen_dash_left );
    if ( (  cmp362 ( (  csx4004 ) , (  margin4002 ) ) == 0 ) ) {
        nu_dash_screen_dash_left4006 = (  op_dash_sub852 ( (  csi4003 ) , (  margin4002 ) ) );
    } else {
        if ( (  cmp362 ( (  csx4004 ) , (  op_dash_sub852 ( (  sw4000 ) , (  margin4002 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left4006 = (  op_dash_add311 ( (  op_dash_sub852 ( (  csi4003 ) , (  sw4000 ) ) ) , (  margin4002 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left4007 = ( (  max1004 ) ( (  nu_dash_screen_dash_left4006 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top4008 = ( (  sc_dash_off3999 ) .f_screen_dash_top );
    if ( (  cmp362 ( (  csy4005 ) , (  margin4002 ) ) == 0 ) ) {
        nu_dash_screen_dash_top4008 = (  op_dash_sub852 ( ( (  cur3997 ) .f_line ) , (  margin4002 ) ) );
    } else {
        if ( (  cmp362 ( (  csy4005 ) , (  op_dash_sub852 ( (  sh4001 ) , (  margin4002 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top4008 = (  op_dash_add311 ( (  op_dash_sub852 ( ( (  cur3997 ) .f_line ) , (  sh4001 ) ) ) , (  margin4002 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top4009 = ( (  max1004 ) ( (  nu_dash_screen_dash_top4008 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    (*  pane3994 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_143) { .f_screen_dash_top = (  nu_dash_screen_dash_top4009 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left4007 ) } );
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

static  bool   is_dash_in_dash_selection1715 (    struct Pane_141 *  pane3980 ,    struct Pos_26  pos3982 ) {
    return ( {  struct Maybe_34  dref3983 = ( ( * (  pane3980 ) ) .f_sel ) ; dref3983.tag == Maybe_34_Just_t ? ( (  between1716 ) ( (  pos3982 ) ,  ( ( * (  pane3980 ) ) .f_cursor ) ,  ( dref3983 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct env1718 {
    struct Screen_188 *  screen4012;
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

static  bool   char_dash_satisfies1735 (    struct Scanner_847 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
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

static  enum Unit_8   skip_dash_while1734 (    struct Scanner_847 *  sc3229 ,    bool (*  condition3231 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1735 ) ( (  sc3229 ) ,  (  condition3231 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1736 (    struct Char_65  c3881 ) {
    return ( !  eq448 ( (  c3881 ) , ( (  from_dash_charlike258 ) ( ( "]" ) ,  ( 1 ) ) ) ) );
}

struct TypeSize_1743 {
    size_t  f_size;
};

static  struct TypeSize_1743   get_dash_typesize1742 (  ) {
    struct Highlight_17  temp1744;
    return ( (struct TypeSize_1743) { .f_size = ( sizeof( ( (  temp1744 ) ) ) ) } );
}

static  struct Highlight_17 *   cast_dash_ptr1745 (    void *  p359 ) {
    return ( (struct Highlight_17 * ) (  p359 ) );
}

static  struct Slice_16   allocate1741 (    enum CAllocator_10  dref1954 ,    size_t  count1956 ) {
    if (!(  dref1954 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1957 = ( ( ( (  get_dash_typesize1742 ) ( ) ) ) .f_size );
    struct Highlight_17 *  ptr1958 = ( (  cast_dash_ptr1745 ) ( ( ( malloc ) ( (  op_dash_mul282 ( (  size1957 ) , (  count1956 ) ) ) ) ) ) );
    return ( (struct Slice_16) { .f_ptr = (  ptr1958 ) , .f_count = (  count1956 ) } );
}

struct env1746 {
    struct Slice_16  new_dash_slice2043;
    ;
    ;
};

struct Tuple2_1748 {
    struct Highlight_17  field0;
    int32_t  field1;
};

static struct Tuple2_1748 Tuple2_1748_Tuple2 (  struct Highlight_17  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1748 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1747 {
    enum Unit_8  (*fun) (  struct env1746*  ,    struct Tuple2_1748  );
    struct env1746 env;
};

static  struct Highlight_17 *   offset_dash_ptr1752 (    struct Highlight_17 *  x338 ,    int64_t  count340 ) {
    struct Highlight_17  temp1753;
    return ( (struct Highlight_17 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul267 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1753 ) ) ) ) ) ) ) ) );
}

static  struct Highlight_17 *   get_dash_ptr1751 (    struct Slice_16  slice1758 ,    size_t  i1760 ) {
    if ( ( (  cmp221 ( (  i1760 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic289 ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1760 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1758 ) .f_count ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Highlight_17 *  elem_dash_ptr1761 = ( (  offset_dash_ptr1752 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  i1760 ) ) ) ) );
    return (  elem_dash_ptr1761 );
}

static  enum Unit_8   set1750 (    struct Slice_16  slice1775 ,    size_t  i1777 ,    struct Highlight_17  x1779 ) {
    struct Highlight_17 *  ep1780 = ( (  get_dash_ptr1751 ) ( (  slice1775 ) ,  (  i1777 ) ) );
    (*  ep1780 ) = (  x1779 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1749 (   struct env1746* env ,    struct Tuple2_1748  dref2044 ) {
    return ( (  set1750 ) ( ( env->new_dash_slice2043 ) ,  ( (  i32_dash_size299 ) ( ( dref2044 .field1 ) ) ) ,  ( dref2044 .field0 ) ) );
}

struct SliceIter_1756 {
    struct Slice_16  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_1755 {
    struct SliceIter_1756  f_left_dash_it;
    struct FromIter_303  f_right_dash_it;
};

static  struct Zip_1755   into_dash_iter1758 (    struct Zip_1755  self911 ) {
    return (  self911 );
}

struct Maybe_1759 {
    enum {
        Maybe_1759_None_t,
        Maybe_1759_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1748  field0;
        } Maybe_1759_Just_s;
    } stuff;
};

static struct Maybe_1759 Maybe_1759_Just (  struct Tuple2_1748  field0 ) {
    return ( struct Maybe_1759 ) { .tag = Maybe_1759_Just_t, .stuff = { .Maybe_1759_Just_s = { .field0 = field0 } } };
};

struct Maybe_1761 {
    enum {
        Maybe_1761_None_t,
        Maybe_1761_Just_t,
    } tag;
    union {
        struct {
            struct Highlight_17  field0;
        } Maybe_1761_Just_s;
    } stuff;
};

static struct Maybe_1761 Maybe_1761_Just (  struct Highlight_17  field0 ) {
    return ( struct Maybe_1761 ) { .tag = Maybe_1761_Just_t, .stuff = { .Maybe_1761_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1761   next1762 (    struct SliceIter_1756 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp221 ( (  op_dash_add269 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1761) { .tag = Maybe_1761_None_t } );
    }
    struct Highlight_17  elem1831 = ( * ( (  offset_dash_ptr1752 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add269 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1761_Just ) ( (  elem1831 ) ) );
}

static  struct Maybe_1759   next1760 (    struct Zip_1755 *  self914 ) {
    struct Zip_1755  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1761  dref916 = ( (  next1762 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1761_None_t ) {
            return ( (struct Maybe_1759) { .tag = Maybe_1759_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1761_Just_t ) {
                struct Maybe_309  dref918 = ( (  next310 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_309_None_t ) {
                    return ( (struct Maybe_1759) { .tag = Maybe_1759_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_309_Just_t ) {
                        ( (  next1762 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next310 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1759_Just ) ( ( ( Tuple2_1748_Tuple2 ) ( ( dref916 .stuff .Maybe_1761_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_309_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1754 (    struct Zip_1755  iterable1074 ,   struct envunion1747  fun1076 ) {
    struct Zip_1755  temp1757 = ( (  into_dash_iter1758 ) ( (  iterable1074 ) ) );
    struct Zip_1755 *  it1077 = ( &temp1757 );
    while ( ( true ) ) {
        struct Maybe_1759  dref1078 = ( (  next1760 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1759_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1759_Just_t ) {
                struct envunion1747  temp1763 = (  fun1076 );
                ( temp1763.fun ( &temp1763.env ,  ( dref1078 .stuff .Maybe_1759_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_1756   into_dash_iter1765 (    struct Slice_16  self1823 ) {
    return ( (struct SliceIter_1756) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_1755   zip1764 (    struct Slice_16  left922 ,    struct FromIter_303  right924 ) {
    struct SliceIter_1756  left_dash_it925 = ( (  into_dash_iter1765 ) ( (  left922 ) ) );
    struct FromIter_303  right_dash_it926 = ( (  into_dash_iter315 ) ( (  right924 ) ) );
    return ( (struct Zip_1755) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr1767 (    struct Highlight_17 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1766 (    enum CAllocator_10  dref1960 ,    struct Slice_16  slice1962 ) {
    if (!(  dref1960 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1767 ) ( ( (  slice1962 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1740 (   struct env5* env ,    struct List_15 *  list2042 ) {
    if ( (  eq276 ( ( ( * (  list2042 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2042 ) .f_elements = ( (  allocate1741 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( env->starting_dash_size2037 ) ) );
    } else {
        if ( (  eq276 ( ( ( * (  list2042 ) ) .f_count ) , ( ( ( * (  list2042 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_16  new_dash_slice2043 = ( (  allocate1741 ) ( ( ( * (  list2042 ) ) .f_al ) ,  (  op_dash_mul282 ( ( ( * (  list2042 ) ) .f_count ) , ( env->growth_dash_factor2038 ) ) ) ) );
            struct env1746 envinst1746 = {
                .new_dash_slice2043 =  new_dash_slice2043 ,
            };
            struct envunion1747  fun2047 = ( (struct envunion1747){ .fun = (  enum Unit_8  (*) (  struct env1746*  ,    struct Tuple2_1748  ) )lam1749 , .env =  envinst1746 } );
            ( (  for_dash_each1754 ) ( ( (  zip1764 ) ( ( ( * (  list2042 ) ) .f_elements ) ,  ( (  from316 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2047 ) ) );
            ( (  free1766 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( ( * (  list2042 ) ) .f_elements ) ) );
            (*  list2042 ) .f_elements = (  new_dash_slice2043 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1738 (   struct env35* env ,    struct List_15 *  list2050 ,    struct Highlight_17  elem2052 ) {
    struct envunion36  temp1739 = ( (struct envunion36){ .fun = (  enum Unit_8  (*) (  struct env5*  ,    struct List_15 *  ) )grow_dash_if_dash_full1740 , .env =  env->envinst5 } );
    ( temp1739.fun ( &temp1739.env ,  (  list2050 ) ) );
    ( (  set1750 ) ( ( ( * (  list2050 ) ) .f_elements ) ,  ( ( * (  list2050 ) ) .f_count ) ,  (  elem2052 ) ) );
    (*  list2050 ) .f_count = (  op_dash_add269 ( ( ( * (  list2050 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion1769 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies1771 (    struct Scanner_847 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
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

static  enum Unit_8   skip_dash_while1770 (    struct Scanner_847 *  sc3229 ,    bool (*  condition3231 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1771 ) ( (  sc3229 ) ,  (  condition3231 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1772 (    struct Char_65  c3884 ) {
    return ( ( !  eq448 ( (  c3884 ) , ( (  from_dash_charlike258 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) && ( !  eq448 ( (  c3884 ) , ( (  from_dash_charlike258 ) ( ( "\\" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion1774 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies1775 (    struct Scanner_847 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
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

static  bool   char_dash_satisfies1777 (    struct Scanner_847 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
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

static  enum Unit_8   skip_dash_while1776 (    struct Scanner_847 *  sc3229 ,    bool (*  condition3231 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1777 ) ( (  sc3229 ) ,  (  condition3231 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1778 (    struct Char_65  c3887 ) {
    return ( (  eq1226 ( ( (  char_dash_type1229 ) ( (  c3887 ) ) ) , ( CharType_1227_CharWord ) ) ) || (  eq448 ( (  c3887 ) , ( (  from_dash_charlike258 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion1780 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct Array_1782 {
    struct StrView_27 _arr [2];
};

struct env1783 {
    ;
    struct Scanner_847 *  sc3877;
};

struct envunion1784 {
    bool  (*fun) (  struct env1783*  ,    struct StrView_27  );
    struct env1783 env;
};

struct env1786 {
    struct envunion1784  fun1135;
};

struct envunion1787 {
    bool  (*fun) (  struct env1786*  ,    struct StrView_27  ,    bool  );
    struct env1786 env;
};

struct ArrayIter_1788 {
    struct Array_1782  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_1788   into_dash_iter1789 (    struct Array_1782  self2323 ) {
    return ( (struct ArrayIter_1788) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr1793 (    struct Array_1782 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   offset_dash_ptr1794 (    struct StrView_27 *  x338 ,    int64_t  count340 ) {
    struct StrView_27  temp1795;
    return ( (struct StrView_27 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul267 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1795 ) ) ) ) ) ) ) ) );
}

static  struct StrView_27 *   get_dash_ptr1792 (    struct Array_1782 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp221 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i2254 ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) ) {
        ( (  panic225 ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 2 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2255 = ( ( (  cast_dash_ptr1793 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr1794 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  struct StrView_27   get1791 (    struct Array_1782 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr1792 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_164   next1790 (    struct ArrayIter_1788 *  self2330 ) {
    if ( (  cmp221 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
    struct StrView_27  e2332 = ( (  get1791 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add269 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_164_Just ) ( (  e2332 ) ) );
}

static  bool   reduce1785 (    struct Array_1782  iterable1093 ,    bool  base1095 ,   struct envunion1787  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct ArrayIter_1788  it1099 = ( (  into_dash_iter1789 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1100 = ( (  next1790 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_164_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_164_Just_t ) {
                struct envunion1787  temp1796 = (  fun1097 );
                x1098 = ( temp1796.fun ( &temp1796.env ,  ( dref1100 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1797 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1797);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1798;
    return (  temp1798 );
}

static  bool   lam1799 (   struct env1786* env ,    struct StrView_27  e1137 ,    bool  x1139 ) {
    struct envunion1784  temp1800 = ( env->fun1135 );
    return ( ( temp1800.fun ( &temp1800.env ,  (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1781 (    struct Array_1782  it1133 ,   struct envunion1784  fun1135 ) {
    struct env1786 envinst1786 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1785 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1787){ .fun = (  bool  (*) (  struct env1786*  ,    struct StrView_27  ,    bool  ) )lam1799 , .env =  envinst1786 } ) ) );
}

static  struct Array_1782   from_dash_listlike1801 (    struct Array_1782  self330 ) {
    return (  self330 );
}

static  struct StrViewIter_650   own1806 (    struct StrViewIter_650  x1251 ) {
    return (  x1251 );
}

static  bool   matches_dash_str1803 (    struct Scanner_847 *  sc3218 ,    struct StrView_27  s3220 ) {
    size_t  skip3221 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_650  temp1804 = ( (  chars655 ) ( (  s3220 ) ) );
    struct StrViewIter_650 *  ss3222 = ( &temp1804 );
    struct StrViewIter_650  temp1805 = ( (  own1806 ) ( ( ( * (  sc3218 ) ) .f_s ) ) );
    struct StrViewIter_650 *  sccp3223 = ( &temp1805 );
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

static  bool   lam1802 (   struct env1783* env ,    struct StrView_27  sym3890 ) {
    return ( (  matches_dash_str1803 ) ( ( env->sc3877 ) ,  (  sym3890 ) ) );
}

struct envunion1808 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct Array_1810 {
    struct StrView_27 _arr [5];
};

struct env1811 {
    ;
    struct Scanner_847 *  sc3877;
};

struct envunion1812 {
    bool  (*fun) (  struct env1811*  ,    struct StrView_27  );
    struct env1811 env;
};

struct env1814 {
    struct envunion1812  fun1135;
};

struct envunion1815 {
    bool  (*fun) (  struct env1814*  ,    struct StrView_27  ,    bool  );
    struct env1814 env;
};

struct ArrayIter_1816 {
    struct Array_1810  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_1816   into_dash_iter1817 (    struct Array_1810  self2323 ) {
    return ( (struct ArrayIter_1816) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr1821 (    struct Array_1810 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr1820 (    struct Array_1810 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp221 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i2254 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic225 ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2255 = ( ( (  cast_dash_ptr1821 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr1794 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  struct StrView_27   get1819 (    struct Array_1810 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr1820 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_164   next1818 (    struct ArrayIter_1816 *  self2330 ) {
    if ( (  cmp221 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
    struct StrView_27  e2332 = ( (  get1819 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add269 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_164_Just ) ( (  e2332 ) ) );
}

static  bool   reduce1813 (    struct Array_1810  iterable1093 ,    bool  base1095 ,   struct envunion1815  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct ArrayIter_1816  it1099 = ( (  into_dash_iter1817 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1100 = ( (  next1818 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_164_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_164_Just_t ) {
                struct envunion1815  temp1822 = (  fun1097 );
                x1098 = ( temp1822.fun ( &temp1822.env ,  ( dref1100 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1823 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1823);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1824;
    return (  temp1824 );
}

static  bool   lam1825 (   struct env1814* env ,    struct StrView_27  e1137 ,    bool  x1139 ) {
    struct envunion1812  temp1826 = ( env->fun1135 );
    return ( ( temp1826.fun ( &temp1826.env ,  (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1809 (    struct Array_1810  it1133 ,   struct envunion1812  fun1135 ) {
    struct env1814 envinst1814 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1813 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1815){ .fun = (  bool  (*) (  struct env1814*  ,    struct StrView_27  ,    bool  ) )lam1825 , .env =  envinst1814 } ) ) );
}

static  struct Array_1810   from_dash_listlike1827 (    struct Array_1810  self330 ) {
    return (  self330 );
}

static  bool   lam1828 (   struct env1811* env ,    struct StrView_27  sym3894 ) {
    return ( (  matches_dash_str1803 ) ( ( env->sc3877 ) ,  (  sym3894 ) ) );
}

struct envunion1830 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies1832 (    struct Scanner_847 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
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

static  enum Unit_8   skip_dash_while1831 (    struct Scanner_847 *  sc3229 ,    bool (*  condition3231 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1832 ) ( (  sc3229 ) ,  (  condition3231 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1833 (    struct Char_65  c3898 ) {
    return ( (  eq1226 ( ( (  char_dash_type1229 ) ( (  c3898 ) ) ) , ( CharType_1227_CharWord ) ) ) || (  eq448 ( (  c3898 ) , ( (  from_dash_charlike258 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   maybe1834 (    struct Maybe_653  x1282 ,    bool (*  fun1284 )(    struct Char_65  ) ,    bool  default1286 ) {
    return ( {  struct Maybe_653  dref1287 = (  x1282 ) ; dref1287.tag == Maybe_653_Just_t ? ( (  fun1284 ) ( ( dref1287 .stuff .Maybe_653_Just_s .field0 ) ) ) : (  default1286 ) ; } );
}

static  bool   is_dash_upper1835 (    struct Char_65  c2407 ) {
    return ( (  eq276 ( ( (  c2407 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1232 ) ( (  c2407 ) ,  ( (  from_dash_charlike258 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

struct Array_1836 {
    struct StrView_27 _arr [15];
};

static  struct Array_1836   from_dash_listlike1837 (    struct Array_1836  self330 ) {
    return (  self330 );
}

struct env1839 {
    ;
    struct StrView_27  ident3902;
};

struct envunion1840 {
    bool  (*fun) (  struct env1839*  ,    struct StrView_27  );
    struct env1839 env;
};

struct env1842 {
    struct envunion1840  fun1135;
};

struct envunion1843 {
    bool  (*fun) (  struct env1842*  ,    struct StrView_27  ,    bool  );
    struct env1842 env;
};

static  bool   reduce1841 (    struct Array_1810  iterable1093 ,    bool  base1095 ,   struct envunion1843  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct ArrayIter_1816  it1099 = ( (  into_dash_iter1817 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1100 = ( (  next1818 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_164_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_164_Just_t ) {
                struct envunion1843  temp1844 = (  fun1097 );
                x1098 = ( temp1844.fun ( &temp1844.env ,  ( dref1100 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1845 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1845);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1846;
    return (  temp1846 );
}

static  bool   lam1847 (   struct env1842* env ,    struct StrView_27  e1137 ,    bool  x1139 ) {
    struct envunion1840  temp1848 = ( env->fun1135 );
    return ( ( temp1848.fun ( &temp1848.env ,  (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1838 (    struct Array_1810  it1133 ,   struct envunion1840  fun1135 ) {
    struct env1842 envinst1842 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1841 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1843){ .fun = (  bool  (*) (  struct env1842*  ,    struct StrView_27  ,    bool  ) )lam1847 , .env =  envinst1842 } ) ) );
}

static  bool   lam1849 (   struct env1839* env ,    struct StrView_27  kw3906 ) {
    return (  eq1577 ( (  kw3906 ) , ( env->ident3902 ) ) );
}

struct env1851 {
    ;
    struct StrView_27  ident3902;
};

struct envunion1852 {
    bool  (*fun) (  struct env1851*  ,    struct StrView_27  );
    struct env1851 env;
};

struct env1854 {
    struct envunion1852  fun1135;
};

struct envunion1855 {
    bool  (*fun) (  struct env1854*  ,    struct StrView_27  ,    bool  );
    struct env1854 env;
};

struct ArrayIter_1856 {
    struct Array_1836  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_1856   into_dash_iter1857 (    struct Array_1836  self2323 ) {
    return ( (struct ArrayIter_1856) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr1861 (    struct Array_1836 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr1860 (    struct Array_1836 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp221 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp221 ( (  i2254 ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) ) {
        ( (  panic225 ) ( ( ( StrConcat_226_StrConcat ) ( ( ( StrConcat_227_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string257 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 15 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2255 = ( ( (  cast_dash_ptr1861 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr1794 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  struct StrView_27   get1859 (    struct Array_1836 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr1860 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_164   next1858 (    struct ArrayIter_1856 *  self2330 ) {
    if ( (  cmp221 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
    struct StrView_27  e2332 = ( (  get1859 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add269 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_164_Just ) ( (  e2332 ) ) );
}

static  bool   reduce1853 (    struct Array_1836  iterable1093 ,    bool  base1095 ,   struct envunion1855  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct ArrayIter_1856  it1099 = ( (  into_dash_iter1857 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1100 = ( (  next1858 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_164_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_164_Just_t ) {
                struct envunion1855  temp1862 = (  fun1097 );
                x1098 = ( temp1862.fun ( &temp1862.env ,  ( dref1100 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1863 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1863);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1864;
    return (  temp1864 );
}

static  bool   lam1865 (   struct env1854* env ,    struct StrView_27  e1137 ,    bool  x1139 ) {
    struct envunion1852  temp1866 = ( env->fun1135 );
    return ( ( temp1866.fun ( &temp1866.env ,  (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1850 (    struct Array_1836  it1133 ,   struct envunion1852  fun1135 ) {
    struct env1854 envinst1854 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1853 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1855){ .fun = (  bool  (*) (  struct env1854*  ,    struct StrView_27  ,    bool  ) )lam1865 , .env =  envinst1854 } ) ) );
}

static  bool   lam1867 (   struct env1851* env ,    struct StrView_27  kw3908 ) {
    return (  eq1577 ( (  kw3908 ) , ( env->ident3902 ) ) );
}

struct envunion1869 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_860   int1870 (    struct Scanner_847 *  sc3197 ) {
    return ( (  scan_dash_int861 ) ( (  sc3197 ) ) );
}

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

static  bool   is_dash_hex1873 (    struct Char_65  c2395 ) {
    return ( (  eq276 ( ( (  c2395 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( ( ( (  is_dash_digit1235 ) ( (  c2395 ) ) ) || ( (  between1232 ) ( (  c2395 ) ,  ( (  from_dash_charlike258 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "f" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1232 ) ( (  c2395 ) ,  ( (  from_dash_charlike258 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) );
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

static  bool   is_dash_octal1878 (    struct Char_65  c2401 ) {
    return ( (  eq276 ( ( (  c2401 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1232 ) ( (  c2401 ) ,  ( (  from_dash_charlike258 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "7" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion1880 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies1882 (    struct Scanner_847 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
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

static  enum Unit_8   skip_dash_while1881 (    struct Scanner_847 *  sc3229 ,    bool (*  condition3231 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1882 ) ( (  sc3229 ) ,  (  condition3231 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion1884 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies1886 (    struct Scanner_847 *  sc3211 ,    bool (*  condition3213 )(    struct Char_65  ) ) {
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

static  enum Unit_8   skip_dash_while1885 (    struct Scanner_847 *  sc3229 ,    bool (*  condition3231 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1886 ) ( (  sc3229 ) ,  (  condition3231 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_binary1887 (    struct Char_65  c2398 ) {
    return ( (  eq276 ( ( (  c2398 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  eq448 ( (  c2398 ) , ( (  from_dash_charlike258 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) || (  eq448 ( (  c2398 ) , ( (  from_dash_charlike258 ) ( ( "1" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion1889 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion1891 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion1893 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion1895 {
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
            if ( ( (  try_dash_char1731 ) ( (  sc3877 ) ,  ( (  from_dash_charlike258 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  skip_dash_while1734 ) ( (  sc3877 ) ,  (  lam1736 ) ) );
                ( (  drop_prime_873 ) ( (  sc3877 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                int32_t  to_dash_off3882 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                struct envunion120  temp1737 = ( (struct envunion120){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1738 , .env =  env->envinst35 } );
                ( temp1737.fun ( &temp1737.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = ( (  size_dash_i32233 ) ( ( (  num_dash_bytes1024 ) ( (  line_dash_sv3876 ) ) ) ) ) , .f_type = ( HighlightType_18_Special3 ) } ) ) );
            } else {
                struct envunion1769  temp1768 = ( (struct envunion1769){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1738 , .env =  env->envinst35 } );
                ( temp1768.fun ( &temp1768.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = ( (  size_dash_i32233 ) ( ( (  num_dash_bytes1024 ) ( (  line_dash_sv3876 ) ) ) ) ) , .f_type = ( HighlightType_18_Comment ) } ) ) );
            }
            break;
        } else {
            if ( ( (  try_dash_char1731 ) ( (  sc3877 ) ,  ( (  from_dash_charlike258 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) ) {
                while ( ( true ) ) {
                    ( (  skip_dash_while1770 ) ( (  sc3877 ) ,  (  lam1772 ) ) );
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
                int32_t  cur_dash_off3885 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                struct envunion1774  temp1773 = ( (struct envunion1774){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1738 , .env =  env->envinst35 } );
                ( temp1773.fun ( &temp1773.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3885 ) , .f_type = ( HighlightType_18_String ) } ) ) );
            } else {
                if ( ( (  try_dash_char1731 ) ( (  sc3877 ) ,  ( (  from_dash_charlike258 ) ( ( "@" ) ,  ( 1 ) ) ) ) ) ) {
                    if ( ( (  char_dash_satisfies1775 ) ( (  sc3877 ) ,  (  is_dash_alpha1231 ) ) ) ) {
                        ( (  skip_dash_while1776 ) ( (  sc3877 ) ,  (  lam1778 ) ) );
                        int32_t  cur_dash_off3888 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                        struct envunion1780  temp1779 = ( (struct envunion1780){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1738 , .env =  env->envinst35 } );
                        ( temp1779.fun ( &temp1779.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3888 ) , .f_type = ( HighlightType_18_Ident3 ) } ) ) );
                    } else {
                    }
                } else {
                    struct env1783 envinst1783 = {
                        .sc3877 =  sc3877 ,
                    };
                    if ( ( (  any1781 ) ( ( (  from_dash_listlike1801 ) ( ( (struct Array_1782) { ._arr = { ( (  from_dash_string257 ) ( ( "==" ) ,  ( 2 ) ) ) , ( (  from_dash_string257 ) ( ( "/=" ) ,  ( 2 ) ) ) } } ) ) ) ,  ( (struct envunion1784){ .fun = (  bool  (*) (  struct env1783*  ,    struct StrView_27  ) )lam1802 , .env =  envinst1783 } ) ) ) ) {
                        int32_t  cur_dash_off3891 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                        enum HighlightType_18  type3892 = ( HighlightType_18_Special2 );
                        struct envunion1808  temp1807 = ( (struct envunion1808){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1738 , .env =  env->envinst35 } );
                        ( temp1807.fun ( &temp1807.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3891 ) , .f_type = (  type3892 ) } ) ) );
                    } else {
                        struct env1811 envinst1811 = {
                            .sc3877 =  sc3877 ,
                        };
                        if ( ( (  any1809 ) ( ( (  from_dash_listlike1827 ) ( ( (struct Array_1810) { ._arr = { ( (  from_dash_string257 ) ( ( "<&" ) ,  ( 2 ) ) ) , ( ( (  from_dash_charlike1124 ) ( ( "=" ) ,  ( 1 ) ) ) ) , ( (  from_dash_charlike1124 ) ( ( "&" ) ,  ( 1 ) ) ) , ( (  from_dash_string257 ) ( ( "->" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike1124 ) ( ( ":" ) ,  ( 1 ) ) ) } } ) ) ) ,  ( (struct envunion1812){ .fun = (  bool  (*) (  struct env1811*  ,    struct StrView_27  ) )lam1828 , .env =  envinst1811 } ) ) ) ) {
                            int32_t  cur_dash_off3895 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                            enum HighlightType_18  type3896 = ( HighlightType_18_Special1 );
                            struct envunion1830  temp1829 = ( (struct envunion1830){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1738 , .env =  env->envinst35 } );
                            ( temp1829.fun ( &temp1829.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3895 ) , .f_type = (  type3896 ) } ) ) );
                        } else {
                            if ( ( (  char_dash_satisfies1775 ) ( (  sc3877 ) ,  (  is_dash_alpha1231 ) ) ) ) {
                                ( (  skip_dash_while1831 ) ( (  sc3877 ) ,  (  lam1833 ) ) );
                                int32_t  cur_dash_off3899 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                bool  first_dash_char_dash_uppercase3900 = ( (  maybe1834 ) ( (  first_dash_char3879 ) ,  (  is_dash_upper1835 ) ,  ( false ) ) );
                                enum HighlightType_18  type3901 = ( (  first_dash_char_dash_uppercase3900 ) ? ( HighlightType_18_Ident2 ) : ( HighlightType_18_Ident1 ) );
                                struct StrView_27  ident3902 = ( ( (  byte_dash_substr430 ) ( (  line_dash_sv3876 ) ,  ( (  i32_dash_size299 ) ( (  from_dash_off3878 ) ) ) ,  ( (  i32_dash_size299 ) ( (  cur_dash_off3899 ) ) ) ) ) );
                                struct Array_1810  keywords13903 = ( (  from_dash_listlike1827 ) ( ( (struct Array_1810) { ._arr = { ( (  from_dash_string257 ) ( ( "fn" ) ,  ( 2 ) ) ) , ( (  from_dash_string257 ) ( ( "class" ) ,  ( 5 ) ) ) , ( (  from_dash_string257 ) ( ( "inst" ) ,  ( 4 ) ) ) , ( (  from_dash_string257 ) ( ( "external" ) ,  ( 8 ) ) ) , ( (  from_dash_string257 ) ( ( "use" ) ,  ( 3 ) ) ) } } ) ) );
                                struct Array_1836  keywords23904 = ( (  from_dash_listlike1837 ) ( ( (struct Array_1836) { ._arr = { ( (  from_dash_string257 ) ( ( "if" ) ,  ( 2 ) ) ) , ( (  from_dash_string257 ) ( ( "elif" ) ,  ( 4 ) ) ) , ( (  from_dash_string257 ) ( ( "else" ) ,  ( 4 ) ) ) , ( (  from_dash_string257 ) ( ( "case" ) ,  ( 4 ) ) ) , ( (  from_dash_string257 ) ( ( "for" ) ,  ( 3 ) ) ) , ( (  from_dash_string257 ) ( ( "in" ) ,  ( 2 ) ) ) , ( (  from_dash_string257 ) ( ( "while" ) ,  ( 5 ) ) ) , ( (  from_dash_string257 ) ( ( "pass" ) ,  ( 4 ) ) ) , ( (  from_dash_string257 ) ( ( "break" ) ,  ( 5 ) ) ) , ( (  from_dash_string257 ) ( ( "continue" ) ,  ( 8 ) ) ) , ( (  from_dash_string257 ) ( ( "as" ) ,  ( 2 ) ) ) , ( (  from_dash_string257 ) ( ( "or" ) ,  ( 2 ) ) ) , ( (  from_dash_string257 ) ( ( "and" ) ,  ( 3 ) ) ) , ( (  from_dash_string257 ) ( ( "not" ) ,  ( 3 ) ) ) , ( (  from_dash_string257 ) ( ( "return" ) ,  ( 6 ) ) ) } } ) ) );
                                struct env1839 envinst1839 = {
                                    .ident3902 =  ident3902 ,
                                };
                                if ( ( (  any1838 ) ( (  keywords13903 ) ,  ( (struct envunion1840){ .fun = (  bool  (*) (  struct env1839*  ,    struct StrView_27  ) )lam1849 , .env =  envinst1839 } ) ) ) ) {
                                    type3901 = ( HighlightType_18_Keyword1 );
                                } else {
                                    struct env1851 envinst1851 = {
                                        .ident3902 =  ident3902 ,
                                    };
                                    if ( ( (  any1850 ) ( (  keywords23904 ) ,  ( (struct envunion1852){ .fun = (  bool  (*) (  struct env1851*  ,    struct StrView_27  ) )lam1867 , .env =  envinst1851 } ) ) ) ) {
                                        type3901 = ( HighlightType_18_Keyword2 );
                                    } else {
                                        if ( ( ( ! (  first_dash_char_dash_uppercase3900 ) ) && (  eq1732 ( ( (  peek1730 ) ( (  sc3877 ) ) ) , ( ( Maybe_653_Just ) ( ( (  from_dash_charlike258 ) ( ( "(" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
                                            type3901 = ( HighlightType_18_Ident4 );
                                        }
                                    }
                                }
                                struct envunion1869  temp1868 = ( (struct envunion1869){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1738 , .env =  env->envinst35 } );
                                ( temp1868.fun ( &temp1868.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3899 ) , .f_type = (  type3901 ) } ) ) );
                            } else {
                                struct Maybe_860  dref3909 = ( (  int1870 ) ( (  sc3877 ) ) );
                                if ( dref3909.tag == Maybe_860_Just_t ) {
                                    int32_t  cur_dash_off3911 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                    enum HighlightType_18  type3912 = ( HighlightType_18_Number );
                                    if ( (  eq952 ( ( dref3909 .stuff .Maybe_860_Just_s .field0 ) , (  from_dash_integral348 ( 0 ) ) ) ) ) {
                                        if ( ( (  try_dash_char1731 ) ( (  sc3877 ) ,  ( (  from_dash_charlike258 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  skip_dash_while1871 ) ( (  sc3877 ) ,  (  is_dash_hex1873 ) ) );
                                            int32_t  cur_dash_off3913 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                            struct envunion1875  temp1874 = ( (struct envunion1875){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1738 , .env =  env->envinst35 } );
                                            ( temp1874.fun ( &temp1874.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3913 ) , .f_type = (  type3912 ) } ) ) );
                                        } else {
                                            if ( ( (  try_dash_char1731 ) ( (  sc3877 ) ,  ( (  from_dash_charlike258 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                                ( (  skip_dash_while1876 ) ( (  sc3877 ) ,  (  is_dash_octal1878 ) ) );
                                                int32_t  cur_dash_off3914 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                                struct envunion1880  temp1879 = ( (struct envunion1880){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1738 , .env =  env->envinst35 } );
                                                ( temp1879.fun ( &temp1879.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3914 ) , .f_type = (  type3912 ) } ) ) );
                                                ( (  skip_dash_while1881 ) ( (  sc3877 ) ,  (  is_dash_digit866 ) ) );
                                                int32_t  invalid_dash_off3915 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                                if ( ( !  eq365 ( (  cur_dash_off3914 ) , (  invalid_dash_off3915 ) ) ) ) {
                                                    struct envunion1884  temp1883 = ( (struct envunion1884){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1738 , .env =  env->envinst35 } );
                                                    ( temp1883.fun ( &temp1883.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off3914 ) , .f_to = (  invalid_dash_off3915 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                                }
                                            } else {
                                                if ( ( (  try_dash_char1731 ) ( (  sc3877 ) ,  ( (  from_dash_charlike258 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  skip_dash_while1885 ) ( (  sc3877 ) ,  (  is_dash_binary1887 ) ) );
                                                    int32_t  cur_dash_off3916 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                                    struct envunion1889  temp1888 = ( (struct envunion1889){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1738 , .env =  env->envinst35 } );
                                                    ( temp1888.fun ( &temp1888.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3916 ) , .f_type = (  type3912 ) } ) ) );
                                                    ( (  skip_dash_while1881 ) ( (  sc3877 ) ,  (  is_dash_digit866 ) ) );
                                                    int32_t  invalid_dash_off3917 = ( (  size_dash_i32233 ) ( ( ( * (  sc3877 ) ) .f_byte_dash_offset ) ) );
                                                    if ( ( !  eq365 ( (  cur_dash_off3916 ) , (  invalid_dash_off3917 ) ) ) ) {
                                                        struct envunion1891  temp1890 = ( (struct envunion1891){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1738 , .env =  env->envinst35 } );
                                                        ( temp1890.fun ( &temp1890.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off3916 ) , .f_to = (  invalid_dash_off3917 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                                    }
                                                } else {
                                                    struct envunion1893  temp1892 = ( (struct envunion1893){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1738 , .env =  env->envinst35 } );
                                                    ( temp1892.fun ( &temp1892.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3911 ) , .f_type = (  type3912 ) } ) ) );
                                                }
                                            }
                                        }
                                    } else {
                                        struct envunion1895  temp1894 = ( (struct envunion1895){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1738 , .env =  env->envinst35 } );
                                        ( temp1894.fun ( &temp1894.env ,  (  hls3875 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3878 ) , .f_to = (  cur_dash_off3911 ) , .f_type = (  type3912 ) } ) ) );
                                    }
                                }
                                else {
                                    if ( dref3909.tag == Maybe_860_None_t ) {
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

static  struct Slice_16   subslice1898 (    struct Slice_16  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    struct Highlight_17 *  begin_dash_ptr1788 = ( (  offset_dash_ptr1752 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp221 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp221 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_16) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub349 ( ( (  min376 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_16) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

static  struct SliceIter_1756   into_dash_iter1897 (    struct List_15  self2029 ) {
    return ( (  into_dash_iter1765 ) ( ( (  subslice1898 ) ( ( (  self2029 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2029 ) .f_count ) ) ) ) );
}

static  bool   between1900 (    int32_t  c1337 ,    int32_t  l1339 ,    int32_t  r1341 ) {
    int32_t  from1342 = ( (  min515 ) ( (  l1339 ) ,  (  r1341 ) ) );
    int32_t  to1343 = ( (  max1004 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp362 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp362 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  struct Maybe_125   highlight_dash_at1722 (   struct env121* env ,    struct TextBuf_99 *  self3920 ,    struct Pos_26  pos3922 ) {
    struct Line_12 *  line3923 = ( (  get_dash_ptr371 ) ( ( & ( ( * (  self3920 ) ) .f_buf ) ) ,  ( (  i32_dash_size299 ) ( ( (  pos3922 ) .f_line ) ) ) ) );
    struct envunion122  temp1723 = ( (struct envunion122){ .fun = (  enum Unit_8  (*) (  struct env119*  ,    struct TextBuf_99 *  ,    struct Line_12 *  ) )recompute_dash_highlights_dash_at_dash_line1724 , .env =  env->envinst119 } );
    ( temp1723.fun ( &temp1723.env ,  (  self3920 ) ,  (  line3923 ) ) );
    struct SliceIter_1756  temp1896 =  into_dash_iter1897 ( ( ( * (  line3923 ) ) .f_highlights ) );
    while (true) {
        struct Maybe_1761  __cond1899 =  next1762 (&temp1896);
        if (  __cond1899 .tag == 0 ) {
            break;
        }
        struct Highlight_17  hl3925 =  __cond1899 .stuff .Maybe_1761_Just_s .field0;
        if ( ( (  between1900 ) ( ( (  pos3922 ) .f_bi ) ,  ( (  hl3925 ) .f_from ) ,  (  op_dash_sub852 ( ( (  hl3925 ) .f_to ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
            return ( ( Maybe_125_Just ) ( ( (  hl3925 ) .f_type ) ) );
        }
        if ( (  cmp362 ( ( (  pos3922 ) .f_bi ) , ( (  hl3925 ) .f_from ) ) == 0 ) ) {
            return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
        }
    }
    return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
}

static  enum Unit_8   lam1901 (   struct env1718* env ,    enum HighlightType_18  type4037 ) {
    enum HighlightType_18  dref4038 = (  type4037 );
    switch (  dref4038 ) {
        case HighlightType_18_Comment : {
            (* env->screen4012 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Blue8 ) ) );
            break;
        }
        case HighlightType_18_Number : {
            (* env->screen4012 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Red8 ) ) );
            break;
        }
        case HighlightType_18_String : {
            (* env->screen4012 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Green8 ) ) );
            break;
        }
        case HighlightType_18_Ident1 : {
            (* env->screen4012 ) .f_default_dash_fg = ( (struct Color_191) { .tag = Color_191_ColorDefault_t } );
            break;
        }
        case HighlightType_18_Ident2 : {
            (* env->screen4012 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Magenta8 ) ) );
            break;
        }
        case HighlightType_18_Ident3 : {
            (* env->screen4012 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Yellow8 ) ) );
            break;
        }
        case HighlightType_18_Ident4 : {
            (* env->screen4012 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Blue8 ) ) );
            break;
        }
        case HighlightType_18_Keyword1 : {
            (* env->screen4012 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Yellow8 ) ) );
            break;
        }
        case HighlightType_18_Keyword2 : {
            (* env->screen4012 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Green8 ) ) );
            break;
        }
        case HighlightType_18_Special1 : {
            (* env->screen4012 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Yellow8 ) ) );
            break;
        }
        case HighlightType_18_Special2 : {
            (* env->screen4012 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Green8 ) ) );
            break;
        }
        case HighlightType_18_Special3 : {
            (* env->screen4012 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Green8 ) ) );
            break;
        }
        default: {
            (* env->screen4012 ) .f_default_dash_bg = ( ( Color_191_Color8 ) ( ( Color8_192_Red8 ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render1660 (   struct env123* env ,    struct Screen_188 *  screen4012 ,    struct Pane_141 *  pane4014 ,    struct ScreenDims_195  sd4016 ) {
    bool  display_dash_line_dash_numbers4017 = ( true );
    ( (  update_dash_screen_dash_offset1661 ) ( (  pane4014 ) ,  (  sd4016 ) ) );
    struct ScreenCursorOffset_143  sc_dash_off4018 = ( ( * (  pane4014 ) ) .f_sc_dash_off );
    int32_t  max_dash_line_dash_num_dash_chars4019 = ( (  size_dash_i32233 ) ( ( (  count1664 ) ( ( (  chars1681 ) ( ( (  num_dash_lines1031 ) ( ( ( * (  pane4014 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin4020 = (  from_dash_integral56 ( 2 ) );
    int32_t  num_dash_back_dash_margin4021 = (  from_dash_integral56 ( 2 ) );
    int32_t  total_dash_margin4022 = ( (  display_dash_line_dash_numbers4017 ) ? (  op_dash_add311 ( (  op_dash_add311 ( (  max_dash_line_dash_num_dash_chars4019 ) , (  num_dash_front_dash_margin4020 ) ) ) , (  num_dash_back_dash_margin4021 ) ) ) : (  from_dash_integral56 ( 0 ) ) );
    struct RangeIter_729  temp1684 =  into_dash_iter731 ( ( (  to734 ) ( (  op_dash_add311 ( ( (  sc_dash_off4018 ) .f_screen_dash_top ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min515 ) ( ( (  num_dash_lines1031 ) ( ( ( * (  pane4014 ) ) .f_buf ) ) ) ,  (  op_dash_add311 ( ( (  sc_dash_off4018 ) .f_screen_dash_top ) , ( (  screen_dash_height1663 ) ( (  sd4016 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_309  __cond1685 =  next732 (&temp1684);
        if (  __cond1685 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num4024 =  __cond1685 .stuff .Maybe_309_Just_s .field0;
        int32_t  ybi4025 = (  op_dash_sub852 ( (  line_dash_num4024 ) , (  from_dash_integral56 ( 1 ) ) ) );
        int32_t  xbi4026 = ( (  vi_dash_bi1033 ) ( ( ( * (  pane4014 ) ) .f_buf ) ,  (  ybi4025 ) ,  ( (  sc_dash_off4018 ) .f_screen_dash_left ) ) );
        struct StrView_27  line_dash_content4027 = ( (  line991 ) ( ( ( * (  pane4014 ) ) .f_buf ) ,  (  ybi4025 ) ) );
        int32_t  ys4028 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  op_dash_add311 ( ( (  sd4016 ) .f_from_dash_sy ) , (  line_dash_num4024 ) ) ) , ( (  sc_dash_off4018 ) .f_screen_dash_top ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers4017 ) ) {
            ( (  draw_dash_str_dash_right1686 ) ( (  screen4012 ) ,  (  line_dash_num4024 ) ,  (  op_dash_add311 ( (  op_dash_sub852 ( (  op_dash_sub852 ( ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen4012 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd4016 ) .f_from_dash_sx ) ) ) , (  total_dash_margin4022 ) ) ) , (  num_dash_back_dash_margin4021 ) ) ) ,  (  ys4028 ) ) );
        }
        int32_t  vx4029 = (  op_dash_sub852 ( ( (  pos_dash_vi989 ) ( ( ( * (  pane4014 ) ) .f_buf ) ,  ( (  mk343 ) ( (  ybi4025 ) ,  (  xbi4026 ) ) ) ) ) , ( (  sc_dash_off4018 ) .f_screen_dash_left ) ) );
        ( (  assert1702 ) ( (  cmp362 ( (  vx4029 ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1703_StrConcat ) ( ( (  from_dash_string257 ) ( ( "vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx4029 ) ) ) ) );
        int32_t  left_dash_offset4030 = (  op_dash_add311 ( ( (  sd4016 ) .f_from_dash_sx ) , (  total_dash_margin4022 ) ) );
        struct AppendIter_1710  temp1709 =  into_dash_iter1711 ( ( (  append1712 ) ( ( (  chars655 ) ( ( (  byte_dash_substr_dash_from1427 ) ( (  line_dash_content4027 ) ,  ( (  i32_dash_size299 ) ( (  xbi4026 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike258 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_653  __cond1713 =  next1714 (&temp1709);
            if (  __cond1713 .tag == 0 ) {
                break;
            }
            struct Char_65  c4032 =  __cond1713 .stuff .Maybe_653_Just_s .field0;
            if ( (  cmp362 ( (  vx4029 ) , ( (  sd4016 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_26  curpos4033 = ( (  mk343 ) ( (  ybi4025 ) ,  (  xbi4026 ) ) );
            bool  is_dash_cursor4034 = (  eq364 ( (  curpos4033 ) , ( ( * (  pane4014 ) ) .f_cursor ) ) );
            bool  in_dash_selection4035 = ( (  is_dash_in_dash_selection1715 ) ( (  pane4014 ) ,  ( (  mk343 ) ( (  ybi4025 ) ,  (  xbi4026 ) ) ) ) );
            if ( (  is_dash_cursor4034 ) ) {
                (*  screen4012 ) .f_default_dash_fg = ( ( Color_191_Color8 ) ( ( Color8_192_Black8 ) ) );
                (*  screen4012 ) .f_default_dash_bg = ( ( Color_191_Color8 ) ( ( Color8_192_White8 ) ) );
            } else {
                if ( (  in_dash_selection4035 ) ) {
                    (*  screen4012 ) .f_default_dash_bg = ( ( Color_191_Color8 ) ( ( Color8_192_Cyan8 ) ) );
                } else {
                    struct envunion124  temp1721 = ( (struct envunion124){ .fun = (  struct Maybe_125  (*) (  struct env121*  ,    struct TextBuf_99 *  ,    struct Pos_26  ) )highlight_dash_at1722 , .env =  env->envinst121 } );
                    struct env1718 envinst1718 = {
                        .screen4012 =  screen4012 ,
                    };
                    ( (  if_dash_just1717 ) ( ( temp1721.fun ( &temp1721.env ,  ( ( * (  pane4014 ) ) .f_buf ) ,  (  curpos4033 ) ) ) ,  ( (struct envunion1719){ .fun = (  enum Unit_8  (*) (  struct env1718*  ,    enum HighlightType_18  ) )lam1901 , .env =  envinst1718 } ) ) );
                }
            }
            struct Maybe_164  dref4039 = ( (  char_dash_replacement996 ) ( (  c4032 ) ) );
            if ( dref4039.tag == Maybe_164_None_t ) {
                if ( ( ! ( (  cmp362 ( (  vx4029 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  op_dash_sub852 ( (  op_dash_add311 ( (  vx4029 ) , ( (  char_dash_screen_dash_width994 ) ( (  c4032 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  sd4016 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1699 ) ( (  screen4012 ) ,  (  c4032 ) ,  (  op_dash_add311 ( (  left_dash_offset4030 ) , (  vx4029 ) ) ) ,  (  ys4028 ) ) );
                }
                vx4029 = (  op_dash_add311 ( (  vx4029 ) , ( (  char_dash_screen_dash_width994 ) ( (  c4032 ) ) ) ) );
            }
            else {
                if ( dref4039.tag == Maybe_164_Just_t ) {
                    struct StrViewIter_650  temp1902 =  into_dash_iter652 ( ( (  chars655 ) ( ( dref4039 .stuff .Maybe_164_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_653  __cond1903 =  next654 (&temp1902);
                        if (  __cond1903 .tag == 0 ) {
                            break;
                        }
                        struct Char_65  c4042 =  __cond1903 .stuff .Maybe_653_Just_s .field0;
                        if ( (  cmp362 ( (  vx4029 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1699 ) ( (  screen4012 ) ,  (  c4042 ) ,  (  op_dash_add311 ( (  left_dash_offset4030 ) , (  vx4029 ) ) ) ,  (  ys4028 ) ) );
                        }
                        vx4029 = (  op_dash_add311 ( (  vx4029 ) , ( (  char_dash_screen_dash_width994 ) ( (  c4042 ) ) ) ) );
                    }
                }
            }
            (*  screen4012 ) .f_default_dash_fg = ( (struct Color_191) { .tag = Color_191_ColorDefault_t } );
            (*  screen4012 ) .f_default_dash_bg = ( (struct Color_191) { .tag = Color_191_ColorDefault_t } );
            xbi4026 = (  op_dash_add311 ( (  xbi4026 ) , ( (  size_dash_i32233 ) ( ( (  c4032 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

struct env1905 {
    struct Screen_188 *  screen4411;
    ;
    ;
    int32_t *  curline4415;
    ;
    ;
    ;
    ;
};

struct env1906 {
    struct Screen_188 *  screen4411;
    ;
    ;
    int32_t *  curline4415;
    ;
    ;
    ;
    ;
};

struct env1907 {
    struct Screen_188 *  screen4411;
    ;
    ;
    int32_t *  curline4415;
    ;
    ;
    ;
    ;
};

struct env1908 {
    struct Screen_188 *  screen4411;
    ;
    ;
    int32_t *  curline4415;
    ;
    ;
    ;
    ;
};

struct env1909 {
    struct Screen_188 *  screen4411;
    ;
    ;
    int32_t *  curline4415;
    ;
    ;
    ;
    ;
};

struct env1910 {
    struct Screen_188 *  screen4411;
    ;
    ;
    int32_t *  curline4415;
    ;
    ;
    ;
    ;
};

struct env1911 {
    struct Screen_188 *  screen4411;
    ;
    ;
    int32_t *  curline4415;
    ;
    ;
    ;
    ;
};

struct env1912 {
    struct Screen_188 *  screen4411;
    ;
    ;
    int32_t *  curline4415;
    ;
    ;
    ;
    ;
};

struct env1913 {
    struct Screen_188 *  screen4411;
    ;
    ;
    int32_t *  curline4415;
    ;
    ;
    ;
    ;
};

struct StrConcat_1916 {
    struct StrView_27  field0;
    enum Mode_142  field1;
};

static struct StrConcat_1916 StrConcat_1916_StrConcat (  struct StrView_27  field0 ,  enum Mode_142  field1 ) {
    return ( struct StrConcat_1916 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1915 {
    enum Unit_8  (*fun) (  struct env1905*  ,    struct StrConcat_1916  );
    struct env1905 env;
};

struct StrConcatIter_1921 {
    struct StrViewIter_650  f_left;
    struct StrViewIter_650  f_right;
};

struct Map_1920 {
    struct StrConcatIter_1921  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1920 Map_1920_Map (  struct StrConcatIter_1921  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1920 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1920   into_dash_iter1923 (    struct Map_1920  self796 ) {
    return (  self796 );
}

static  struct Maybe_653   next1925 (    struct StrConcatIter_1921 *  self1500 ) {
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

static  struct Maybe_309   next1924 (    struct Map_1920 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next1925 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_309_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1922 (    struct Map_1920  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1920  it1099 = ( (  into_dash_iter1923 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next1924 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1926 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1926);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1927;
    return (  temp1927 );
}

static  int32_t   lam1928 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add311 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1919 (    struct Map_1920  it1110 ) {
    return ( (  reduce1922 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam1928 ) ) );
}

static  struct StrConcatIter_1921   into_dash_iter1930 (    struct StrConcatIter_1921  self1497 ) {
    return (  self1497 );
}

static  struct Map_1920   map1929 (    struct StrConcatIter_1921  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_1921  it808 = ( (  into_dash_iter1930 ) ( (  iterable805 ) ) );
    return ( ( Map_1920_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrView_27   todo1934 (  ) {
    ( (  print1242 ) ( ( (  from_dash_string257 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( (  undefined563 ) ( ) );
}

static  struct StrViewIter_650   chars1933 (    enum Mode_142  self3935 ) {
    return ( (  chars655 ) ( ( {  enum Mode_142  dref3936 = (  self3935 ) ;  dref3936 == Mode_142_Normal ? ( (  from_dash_string257 ) ( ( "Normal" ) ,  ( 6 ) ) ) :  dref3936 == Mode_142_Insert ? ( (  from_dash_string257 ) ( ( "Insert" ) ,  ( 6 ) ) ) :  dref3936 == Mode_142_Select ? ( (  from_dash_string257 ) ( ( "Select" ) ,  ( 6 ) ) ) : ( (  todo1934 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1921   into_dash_iter1932 (    struct StrConcat_1916  dref1504 ) {
    return ( (struct StrConcatIter_1921) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1933 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1921   chars1931 (    struct StrConcat_1916  self1515 ) {
    return ( (  into_dash_iter1932 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str1935 (    struct Screen_188 *  screen3571 ,    struct StrConcat_1916  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_1921  temp1936 =  into_dash_iter1930 ( ( (  chars1931 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond1937 =  next1925 (&temp1936);
        if (  __cond1937 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond1937 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1918 (    struct Screen_188 *  screen3587 ,    struct StrConcat_1916  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum1919 ) ( ( (  map1929 ) ( ( (  chars1931 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1003 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str1935 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann1917 (   struct env1905* env ,    struct StrConcat_1916  s4418 ) {
    ( (  draw_dash_str_dash_right1918 ) ( ( env->screen4411 ) ,  (  s4418 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4415 ) ) ) );
    (* env->curline4415 ) = (  op_dash_add311 ( ( * ( env->curline4415 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_1942 {
    struct StrView_27  field0;
    struct Pos_26  field1;
};

static struct StrConcat_1942 StrConcat_1942_StrConcat (  struct StrView_27  field0 ,  struct Pos_26  field1 ) {
    return ( struct StrConcat_1942 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1941 {
    struct StrConcat_1942  field0;
    struct StrView_27  field1;
};

static struct StrConcat_1941 StrConcat_1941_StrConcat (  struct StrConcat_1942  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_1941 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1940 {
    struct StrConcat_1941  field0;
    enum CharType_1227  field1;
};

static struct StrConcat_1940 StrConcat_1940_StrConcat (  struct StrConcat_1941  field0 ,  enum CharType_1227  field1 ) {
    return ( struct StrConcat_1940 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1939 {
    enum Unit_8  (*fun) (  struct env1906*  ,    struct StrConcat_1940  );
    struct env1906 env;
};

struct StrConcatIter_1953 {
    struct AppendIter_913  f_left;
    struct IntStrIter_1665  f_right;
};

struct StrConcatIter_1952 {
    struct StrConcatIter_1953  f_left;
    struct StrViewIter_650  f_right;
};

struct StrConcatIter_1951 {
    struct StrConcatIter_1952  f_left;
    struct IntStrIter_1665  f_right;
};

struct StrConcatIter_1950 {
    struct StrConcatIter_1951  f_left;
    struct AppendIter_913  f_right;
};

struct StrConcatIter_1949 {
    struct StrViewIter_650  f_left;
    struct StrConcatIter_1950  f_right;
};

struct StrConcatIter_1948 {
    struct StrConcatIter_1949  f_left;
    struct StrViewIter_650  f_right;
};

struct StrConcatIter_1947 {
    struct StrConcatIter_1948  f_left;
    struct StrViewIter_650  f_right;
};

struct Map_1946 {
    struct StrConcatIter_1947  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1946 Map_1946_Map (  struct StrConcatIter_1947  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1946 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1946   into_dash_iter1955 (    struct Map_1946  self796 ) {
    return (  self796 );
}

static  struct Maybe_653   next1963 (    struct StrConcatIter_1953 *  self1500 ) {
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

static  struct Maybe_653   next1962 (    struct StrConcatIter_1952 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next1963 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next1961 (    struct StrConcatIter_1951 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next1962 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next1668 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next1960 (    struct StrConcatIter_1950 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next1961 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next1959 (    struct StrConcatIter_1949 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next1960 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next1958 (    struct StrConcatIter_1948 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next1959 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
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

static  struct Maybe_309   next1956 (    struct Map_1946 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next1957 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_309_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1954 (    struct Map_1946  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1946  it1099 = ( (  into_dash_iter1955 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next1956 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1964 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1964);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1965;
    return (  temp1965 );
}

static  int32_t   lam1966 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add311 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1945 (    struct Map_1946  it1110 ) {
    return ( (  reduce1954 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam1966 ) ) );
}

static  struct StrConcatIter_1947   into_dash_iter1968 (    struct StrConcatIter_1947  self1497 ) {
    return (  self1497 );
}

static  struct Map_1946   map1967 (    struct StrConcatIter_1947  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_1947  it808 = ( (  into_dash_iter1968 ) ( (  iterable805 ) ) );
    return ( ( Map_1946_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_1980 {
    struct Char_65  field0;
    int32_t  field1;
};

static struct StrConcat_1980 StrConcat_1980_StrConcat (  struct Char_65  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1980 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1979 {
    struct StrConcat_1980  field0;
    struct StrView_27  field1;
};

static struct StrConcat_1979 StrConcat_1979_StrConcat (  struct StrConcat_1980  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_1979 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1978 {
    struct StrConcat_1979  field0;
    int32_t  field1;
};

static struct StrConcat_1978 StrConcat_1978_StrConcat (  struct StrConcat_1979  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1978 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1977 {
    struct StrConcat_1978  field0;
    struct Char_65  field1;
};

static struct StrConcat_1977 StrConcat_1977_StrConcat (  struct StrConcat_1978  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1977 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_1953   into_dash_iter1987 (    struct StrConcat_1980  dref1504 ) {
    return ( (struct StrConcatIter_1953) { .f_left = ( (  chars953 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1681 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1953   chars1986 (    struct StrConcat_1980  self1515 ) {
    return ( (  into_dash_iter1987 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_1952   into_dash_iter1985 (    struct StrConcat_1979  dref1504 ) {
    return ( (struct StrConcatIter_1952) { .f_left = ( (  chars1986 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars655 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1952   chars1984 (    struct StrConcat_1979  self1515 ) {
    return ( (  into_dash_iter1985 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_1951   into_dash_iter1983 (    struct StrConcat_1978  dref1504 ) {
    return ( (struct StrConcatIter_1951) { .f_left = ( (  chars1984 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1681 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1951   chars1982 (    struct StrConcat_1978  self1515 ) {
    return ( (  into_dash_iter1983 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_1950   into_dash_iter1981 (    struct StrConcat_1977  dref1504 ) {
    return ( (struct StrConcatIter_1950) { .f_left = ( (  chars1982 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1950   chars1976 (    struct StrConcat_1977  self1515 ) {
    return ( (  into_dash_iter1981 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_1950   chars1975 (    struct Pos_26  self3628 ) {
    return ( (  chars1976 ) ( ( ( StrConcat_1977_StrConcat ) ( ( ( StrConcat_1978_StrConcat ) ( ( ( StrConcat_1979_StrConcat ) ( ( ( StrConcat_1980_StrConcat ) ( ( (  from_dash_charlike258 ) ( ( "(" ) ,  ( 1 ) ) ) ,  ( (  self3628 ) .f_line ) ) ) ,  ( (  from_dash_string257 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  self3628 ) .f_bi ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrConcatIter_1949   into_dash_iter1974 (    struct StrConcat_1942  dref1504 ) {
    return ( (struct StrConcatIter_1949) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1975 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1949   chars1973 (    struct StrConcat_1942  self1515 ) {
    return ( (  into_dash_iter1974 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_1948   into_dash_iter1972 (    struct StrConcat_1941  dref1504 ) {
    return ( (struct StrConcatIter_1948) { .f_left = ( (  chars1973 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars655 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1948   chars1971 (    struct StrConcat_1941  self1515 ) {
    return ( (  into_dash_iter1972 ) ( (  self1515 ) ) );
}

static  struct StrViewIter_650   chars1988 (    enum CharType_1227  self3650 ) {
    return ( (  chars655 ) ( ( {  enum CharType_1227  dref3651 = (  self3650 ) ;  dref3651 == CharType_1227_CharPunctuation ? ( (  from_dash_string257 ) ( ( "Punct" ) ,  ( 5 ) ) ) :  dref3651 == CharType_1227_CharWord ? ( (  from_dash_string257 ) ( ( "Word" ) ,  ( 4 ) ) ) :  dref3651 == CharType_1227_CharSpace ? ( (  from_dash_string257 ) ( ( "Space" ) ,  ( 5 ) ) ) : ( (  todo1934 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1947   into_dash_iter1970 (    struct StrConcat_1940  dref1504 ) {
    return ( (struct StrConcatIter_1947) { .f_left = ( (  chars1971 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1988 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1947   chars1969 (    struct StrConcat_1940  self1515 ) {
    return ( (  into_dash_iter1970 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str1989 (    struct Screen_188 *  screen3571 ,    struct StrConcat_1940  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_1947  temp1990 =  into_dash_iter1968 ( ( (  chars1969 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond1991 =  next1957 (&temp1990);
        if (  __cond1991 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond1991 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1944 (    struct Screen_188 *  screen3587 ,    struct StrConcat_1940  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum1945 ) ( ( (  map1967 ) ( ( (  chars1969 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1003 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str1989 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann1943 (   struct env1906* env ,    struct StrConcat_1940  s4418 ) {
    ( (  draw_dash_str_dash_right1944 ) ( ( env->screen4411 ) ,  (  s4418 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4415 ) ) ) );
    (* env->curline4415 ) = (  op_dash_add311 ( ( * ( env->curline4415 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_1994 {
    struct StrView_27  field0;
    struct Maybe_34  field1;
};

static struct StrConcat_1994 StrConcat_1994_StrConcat (  struct StrView_27  field0 ,  struct Maybe_34  field1 ) {
    return ( struct StrConcat_1994 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1993 {
    enum Unit_8  (*fun) (  struct env1907*  ,    struct StrConcat_1994  );
    struct env1907 env;
};

struct StrConcatIter_2001 {
    struct StrConcatIter_1949  f_left;
    struct AppendIter_913  f_right;
};

struct StrCaseIter_2000 {
    enum {
        StrCaseIter_2000_StrCaseIter1_t,
        StrCaseIter_2000_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_650  field0;
        } StrCaseIter_2000_StrCaseIter1_s;
        struct {
            struct StrConcatIter_2001  field0;
        } StrCaseIter_2000_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_2000 StrCaseIter_2000_StrCaseIter1 (  struct StrViewIter_650  field0 ) {
    return ( struct StrCaseIter_2000 ) { .tag = StrCaseIter_2000_StrCaseIter1_t, .stuff = { .StrCaseIter_2000_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_2000 StrCaseIter_2000_StrCaseIter2 (  struct StrConcatIter_2001  field0 ) {
    return ( struct StrCaseIter_2000 ) { .tag = StrCaseIter_2000_StrCaseIter2_t, .stuff = { .StrCaseIter_2000_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1999 {
    struct StrViewIter_650  f_left;
    struct StrCaseIter_2000  f_right;
};

struct Map_1998 {
    struct StrConcatIter_1999  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1998 Map_1998_Map (  struct StrConcatIter_1999  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1998 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1998   into_dash_iter2003 (    struct Map_1998  self796 ) {
    return (  self796 );
}

static  struct Maybe_653   next2007 (    struct StrConcatIter_2001 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next1959 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2006 (    struct StrCaseIter_2000 *  self1522 ) {
    struct StrCaseIter_2000 *  dref1523 = (  self1522 );
    if ( (* dref1523 ).tag == StrCaseIter_2000_StrCaseIter1_t ) {
        return ( (  next654 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_2000_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1523 ).tag == StrCaseIter_2000_StrCaseIter2_t ) {
            return ( (  next2007 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_2000_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_653   next2005 (    struct StrConcatIter_1999 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next2006 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_309   next2004 (    struct Map_1998 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next2005 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_309_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2002 (    struct Map_1998  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1998  it1099 = ( (  into_dash_iter2003 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next2004 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2008 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2008);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp2009;
    return (  temp2009 );
}

static  int32_t   lam2010 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add311 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1997 (    struct Map_1998  it1110 ) {
    return ( (  reduce2002 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2010 ) ) );
}

static  struct StrConcatIter_1999   into_dash_iter2012 (    struct StrConcatIter_1999  self1497 ) {
    return (  self1497 );
}

static  struct Map_1998   map2011 (    struct StrConcatIter_1999  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_1999  it808 = ( (  into_dash_iter2012 ) ( (  iterable805 ) ) );
    return ( ( Map_1998_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_2017 {
    struct StrConcat_1942  field0;
    struct Char_65  field1;
};

static struct StrConcat_2017 StrConcat_2017_StrConcat (  struct StrConcat_1942  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2017 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_2016 {
    enum {
        StrCase_2016_StrCase1_t,
        StrCase_2016_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_2016_StrCase1_s;
        struct {
            struct StrConcat_2017  field0;
        } StrCase_2016_StrCase2_s;
    } stuff;
};

static struct StrCase_2016 StrCase_2016_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_2016 ) { .tag = StrCase_2016_StrCase1_t, .stuff = { .StrCase_2016_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_2016 StrCase_2016_StrCase2 (  struct StrConcat_2017  field0 ) {
    return ( struct StrCase_2016 ) { .tag = StrCase_2016_StrCase2_t, .stuff = { .StrCase_2016_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_2001   into_dash_iter2022 (    struct StrConcat_2017  dref1504 ) {
    return ( (struct StrConcatIter_2001) { .f_left = ( (  chars1973 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2001   chars2021 (    struct StrConcat_2017  self1515 ) {
    return ( (  into_dash_iter2022 ) ( (  self1515 ) ) );
}

static  struct StrCaseIter_2000   into_dash_iter2020 (    struct StrCase_2016  self1528 ) {
    struct StrCase_2016  dref1529 = (  self1528 );
    if ( dref1529.tag == StrCase_2016_StrCase1_t ) {
        return ( ( StrCaseIter_2000_StrCaseIter1 ) ( ( (  chars655 ) ( ( dref1529 .stuff .StrCase_2016_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1529.tag == StrCase_2016_StrCase2_t ) {
            return ( ( StrCaseIter_2000_StrCaseIter2 ) ( ( (  chars2021 ) ( ( dref1529 .stuff .StrCase_2016_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_2000   chars2019 (    struct StrCase_2016  self1540 ) {
    return ( (  into_dash_iter2020 ) ( (  self1540 ) ) );
}

static  struct StrCaseIter_2000   chars2015 (    struct Maybe_34  self1554 ) {
    struct StrCase_2016  temp2018;
    struct StrCase_2016  c1555 = (  temp2018 );
    struct Maybe_34  dref1556 = (  self1554 );
    if ( dref1556.tag == Maybe_34_None_t ) {
        c1555 = ( ( StrCase_2016_StrCase1 ) ( ( (  from_dash_string257 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1556.tag == Maybe_34_Just_t ) {
            c1555 = ( ( StrCase_2016_StrCase2 ) ( ( ( StrConcat_2017_StrConcat ) ( ( ( StrConcat_1942_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1556 .stuff .Maybe_34_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars2019 ) ( (  c1555 ) ) );
}

static  struct StrConcatIter_1999   into_dash_iter2014 (    struct StrConcat_1994  dref1504 ) {
    return ( (struct StrConcatIter_1999) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2015 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1999   chars2013 (    struct StrConcat_1994  self1515 ) {
    return ( (  into_dash_iter2014 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str2023 (    struct Screen_188 *  screen3571 ,    struct StrConcat_1994  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_1999  temp2024 =  into_dash_iter2012 ( ( (  chars2013 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond2025 =  next2005 (&temp2024);
        if (  __cond2025 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2025 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1996 (    struct Screen_188 *  screen3587 ,    struct StrConcat_1994  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum1997 ) ( ( (  map2011 ) ( ( (  chars2013 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1003 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str2023 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann1995 (   struct env1907* env ,    struct StrConcat_1994  s4418 ) {
    ( (  draw_dash_str_dash_right1996 ) ( ( env->screen4411 ) ,  (  s4418 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4415 ) ) ) );
    (* env->curline4415 ) = (  op_dash_add311 ( ( * ( env->curline4415 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct Take_2028 {
    struct StrViewIter_650  field0;
    size_t  field1;
};

static struct Take_2028 Take_2028_Take (  struct StrViewIter_650  field0 ,  size_t  field1 ) {
    return ( struct Take_2028 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2027 {
    struct Take_2028  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2027 StrConcat_2027_StrConcat (  struct Take_2028  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2027 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_2026 {
    enum {
        Maybe_2026_None_t,
        Maybe_2026_Just_t,
    } tag;
    union {
        struct {
            struct StrConcat_2027  field0;
        } Maybe_2026_Just_s;
    } stuff;
};

static struct Maybe_2026 Maybe_2026_Just (  struct StrConcat_2027  field0 ) {
    return ( struct Maybe_2026 ) { .tag = Maybe_2026_Just_t, .stuff = { .Maybe_2026_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2026   fmap_dash_maybe2029 (    struct Maybe_164  x1275 ,    struct StrConcat_2027 (*  fun1277 )(    struct StrView_27  ) ) {
    struct Maybe_164  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_164_None_t ) {
        return ( (struct Maybe_2026) { .tag = Maybe_2026_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_164_Just_t ) {
            return ( ( Maybe_2026_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Take_2028   take2031 (    struct StrView_27  it867 ,    size_t  i869 ) {
    return ( ( Take_2028_Take ) ( ( (  into_dash_iter656 ) ( (  it867 ) ) ) ,  (  i869 ) ) );
}

struct Drop_2033 {
    struct StrViewIter_650  field0;
    size_t  field1;
};

static struct Drop_2033 Drop_2033_Drop (  struct StrViewIter_650  field0 ,  size_t  field1 ) {
    return ( struct Drop_2033 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Maybe_653   next2035 (    struct Drop_2033 *  dref847 ) {
    while ( (  cmp221 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next654 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub349 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next654 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Drop_2033   into_dash_iter2037 (    struct Drop_2033  self845 ) {
    return (  self845 );
}

static  struct Maybe_653   head2034 (    struct Drop_2033  it1142 ) {
    struct Drop_2033  temp2036 = ( (  into_dash_iter2037 ) ( (  it1142 ) ) );
    return ( (  next2035 ) ( ( &temp2036 ) ) );
}

static  bool   null2032 (    struct Drop_2033  it1151 ) {
    struct Maybe_653  dref1152 = ( (  head2034 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_653_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Drop_2033   drop2038 (    struct StrView_27  iterable852 ,    size_t  i854 ) {
    struct StrViewIter_650  it855 = ( (  into_dash_iter656 ) ( (  iterable852 ) ) );
    return ( ( Drop_2033_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct StrConcat_2027   lam2030 (    struct StrView_27  s4421 ) {
    return ( ( StrConcat_2027_StrConcat ) ( ( (  take2031 ) ( (  s4421 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ,  ( ( (  null2032 ) ( ( (  drop2038 ) ( (  s4421 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ) ) ? ( (  from_dash_string257 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_string257 ) ( ( "..." ) ,  ( 3 ) ) ) ) ) );
}

struct StrConcat_2041 {
    struct StrView_27  field0;
    struct Maybe_2026  field1;
};

static struct StrConcat_2041 StrConcat_2041_StrConcat (  struct StrView_27  field0 ,  struct Maybe_2026  field1 ) {
    return ( struct StrConcat_2041 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2040 {
    enum Unit_8  (*fun) (  struct env1908*  ,    struct StrConcat_2041  );
    struct env1908 env;
};

struct StrConcatIter_2050 {
    struct Take_2028  f_left;
    struct StrViewIter_650  f_right;
};

struct StrConcatIter_2049 {
    struct StrViewIter_650  f_left;
    struct StrConcatIter_2050  f_right;
};

struct StrConcatIter_2048 {
    struct StrConcatIter_2049  f_left;
    struct AppendIter_913  f_right;
};

struct StrCaseIter_2047 {
    enum {
        StrCaseIter_2047_StrCaseIter1_t,
        StrCaseIter_2047_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_650  field0;
        } StrCaseIter_2047_StrCaseIter1_s;
        struct {
            struct StrConcatIter_2048  field0;
        } StrCaseIter_2047_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_2047 StrCaseIter_2047_StrCaseIter1 (  struct StrViewIter_650  field0 ) {
    return ( struct StrCaseIter_2047 ) { .tag = StrCaseIter_2047_StrCaseIter1_t, .stuff = { .StrCaseIter_2047_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_2047 StrCaseIter_2047_StrCaseIter2 (  struct StrConcatIter_2048  field0 ) {
    return ( struct StrCaseIter_2047 ) { .tag = StrCaseIter_2047_StrCaseIter2_t, .stuff = { .StrCaseIter_2047_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_2046 {
    struct StrViewIter_650  f_left;
    struct StrCaseIter_2047  f_right;
};

struct Map_2045 {
    struct StrConcatIter_2046  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2045 Map_2045_Map (  struct StrConcatIter_2046  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2045 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2045   into_dash_iter2052 (    struct Map_2045  self796 ) {
    return (  self796 );
}

static  struct Maybe_653   next2059 (    struct Take_2028 *  dref861 ) {
    if ( (  cmp221 ( ( (* dref861 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_653  x864 = ( (  next654 ) ( ( & ( (* dref861 ) .field0 ) ) ) );
        (* dref861 ) .field1 = (  op_dash_sub349 ( ( (* dref861 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
        return (  x864 );
    } else {
        return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
    }
}

static  struct Maybe_653   next2058 (    struct StrConcatIter_2050 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2059 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2057 (    struct StrConcatIter_2049 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next2058 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2056 (    struct StrConcatIter_2048 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2057 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2055 (    struct StrCaseIter_2047 *  self1522 ) {
    struct StrCaseIter_2047 *  dref1523 = (  self1522 );
    if ( (* dref1523 ).tag == StrCaseIter_2047_StrCaseIter1_t ) {
        return ( (  next654 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_2047_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1523 ).tag == StrCaseIter_2047_StrCaseIter2_t ) {
            return ( (  next2056 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_2047_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_653   next2054 (    struct StrConcatIter_2046 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next2055 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_309   next2053 (    struct Map_2045 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next2054 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_309_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2051 (    struct Map_2045  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_2045  it1099 = ( (  into_dash_iter2052 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next2053 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
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
    return (  op_dash_add311 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum2044 (    struct Map_2045  it1110 ) {
    return ( (  reduce2051 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2062 ) ) );
}

static  struct StrConcatIter_2046   into_dash_iter2064 (    struct StrConcatIter_2046  self1497 ) {
    return (  self1497 );
}

static  struct Map_2045   map2063 (    struct StrConcatIter_2046  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_2046  it808 = ( (  into_dash_iter2064 ) ( (  iterable805 ) ) );
    return ( ( Map_2045_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_2070 {
    struct StrView_27  field0;
    struct StrConcat_2027  field1;
};

static struct StrConcat_2070 StrConcat_2070_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_2027  field1 ) {
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

static  struct Take_2028   chars2080 (    struct Take_2028  self1645 ) {
    return (  self1645 );
}

static  struct StrConcatIter_2050   into_dash_iter2079 (    struct StrConcat_2027  dref1504 ) {
    return ( (struct StrConcatIter_2050) { .f_left = ( (  chars2080 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars655 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2050   chars2078 (    struct StrConcat_2027  self1515 ) {
    return ( (  into_dash_iter2079 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2049   into_dash_iter2077 (    struct StrConcat_2070  dref1504 ) {
    return ( (struct StrConcatIter_2049) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2078 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2049   chars2076 (    struct StrConcat_2070  self1515 ) {
    return ( (  into_dash_iter2077 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2048   into_dash_iter2075 (    struct StrConcat_2069  dref1504 ) {
    return ( (struct StrConcatIter_2048) { .f_left = ( (  chars2076 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2048   chars2074 (    struct StrConcat_2069  self1515 ) {
    return ( (  into_dash_iter2075 ) ( (  self1515 ) ) );
}

static  struct StrCaseIter_2047   into_dash_iter2073 (    struct StrCase_2068  self1528 ) {
    struct StrCase_2068  dref1529 = (  self1528 );
    if ( dref1529.tag == StrCase_2068_StrCase1_t ) {
        return ( ( StrCaseIter_2047_StrCaseIter1 ) ( ( (  chars655 ) ( ( dref1529 .stuff .StrCase_2068_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1529.tag == StrCase_2068_StrCase2_t ) {
            return ( ( StrCaseIter_2047_StrCaseIter2 ) ( ( (  chars2074 ) ( ( dref1529 .stuff .StrCase_2068_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_2047   chars2072 (    struct StrCase_2068  self1540 ) {
    return ( (  into_dash_iter2073 ) ( (  self1540 ) ) );
}

static  struct StrCaseIter_2047   chars2067 (    struct Maybe_2026  self1554 ) {
    struct StrCase_2068  temp2071;
    struct StrCase_2068  c1555 = (  temp2071 );
    struct Maybe_2026  dref1556 = (  self1554 );
    if ( dref1556.tag == Maybe_2026_None_t ) {
        c1555 = ( ( StrCase_2068_StrCase1 ) ( ( (  from_dash_string257 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1556.tag == Maybe_2026_Just_t ) {
            c1555 = ( ( StrCase_2068_StrCase2 ) ( ( ( StrConcat_2069_StrConcat ) ( ( ( StrConcat_2070_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1556 .stuff .Maybe_2026_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars2072 ) ( (  c1555 ) ) );
}

static  struct StrConcatIter_2046   into_dash_iter2066 (    struct StrConcat_2041  dref1504 ) {
    return ( (struct StrConcatIter_2046) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2067 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2046   chars2065 (    struct StrConcat_2041  self1515 ) {
    return ( (  into_dash_iter2066 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str2081 (    struct Screen_188 *  screen3571 ,    struct StrConcat_2041  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2046  temp2082 =  into_dash_iter2064 ( ( (  chars2065 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond2083 =  next2054 (&temp2082);
        if (  __cond2083 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2083 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2043 (    struct Screen_188 *  screen3587 ,    struct StrConcat_2041  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum2044 ) ( ( (  map2063 ) ( ( (  chars2065 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1003 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str2081 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann2042 (   struct env1908* env ,    struct StrConcat_2041  s4418 ) {
    ( (  draw_dash_str_dash_right2043 ) ( ( env->screen4411 ) ,  (  s4418 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4415 ) ) ) );
    (* env->curline4415 ) = (  op_dash_add311 ( ( * ( env->curline4415 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_2026   fmap_dash_maybe2084 (    struct Maybe_164  x1275 ,    struct StrConcat_2027 (*  fun1277 )(    struct StrView_27  ) ) {
    struct Maybe_164  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_164_None_t ) {
        return ( (struct Maybe_2026) { .tag = Maybe_2026_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_164_Just_t ) {
            return ( ( Maybe_2026_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrConcat_2027   lam2085 (    struct StrView_27  s4424 ) {
    return ( ( StrConcat_2027_StrConcat ) ( ( (  take2031 ) ( (  s4424 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ,  ( ( (  null2032 ) ( ( (  drop2038 ) ( (  s4424 ) ,  (  from_dash_integral0 ( 10 ) ) ) ) ) ) ? ( (  from_dash_string257 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_string257 ) ( ( "..." ) ,  ( 3 ) ) ) ) ) );
}

struct envunion2087 {
    enum Unit_8  (*fun) (  struct env1908*  ,    struct StrConcat_2041  );
    struct env1908 env;
};

struct StrConcat_2090 {
    struct StrView_27  field0;
    struct EditorMode_165  field1;
};

static struct StrConcat_2090 StrConcat_2090_StrConcat (  struct StrView_27  field0 ,  struct EditorMode_165  field1 ) {
    return ( struct StrConcat_2090 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2089 {
    enum Unit_8  (*fun) (  struct env1909*  ,    struct StrConcat_2090  );
    struct env1909 env;
};

struct StrConcatIter_2098 {
    struct StrConcatIter_2001  f_left;
    struct StrViewIter_650  f_right;
};

struct StrConcatIter_2097 {
    struct StrConcatIter_2098  f_left;
    struct AppendIter_913  f_right;
};

struct StrCaseIter_2096 {
    enum {
        StrCaseIter_2096_StrCaseIter1_t,
        StrCaseIter_2096_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_650  field0;
        } StrCaseIter_2096_StrCaseIter1_s;
        struct {
            struct StrConcatIter_2097  field0;
        } StrCaseIter_2096_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_2096 StrCaseIter_2096_StrCaseIter1 (  struct StrViewIter_650  field0 ) {
    return ( struct StrCaseIter_2096 ) { .tag = StrCaseIter_2096_StrCaseIter1_t, .stuff = { .StrCaseIter_2096_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_2096 StrCaseIter_2096_StrCaseIter2 (  struct StrConcatIter_2097  field0 ) {
    return ( struct StrCaseIter_2096 ) { .tag = StrCaseIter_2096_StrCaseIter2_t, .stuff = { .StrCaseIter_2096_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_2095 {
    struct StrViewIter_650  f_left;
    struct StrCaseIter_2096  f_right;
};

struct Map_2094 {
    struct StrConcatIter_2095  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2094 Map_2094_Map (  struct StrConcatIter_2095  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2094 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2094   into_dash_iter2100 (    struct Map_2094  self796 ) {
    return (  self796 );
}

static  struct Maybe_653   next2105 (    struct StrConcatIter_2098 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2007 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2104 (    struct StrConcatIter_2097 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2105 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2103 (    struct StrCaseIter_2096 *  self1522 ) {
    struct StrCaseIter_2096 *  dref1523 = (  self1522 );
    if ( (* dref1523 ).tag == StrCaseIter_2096_StrCaseIter1_t ) {
        return ( (  next654 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_2096_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1523 ).tag == StrCaseIter_2096_StrCaseIter2_t ) {
            return ( (  next2104 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_2096_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_653   next2102 (    struct StrConcatIter_2095 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next2103 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_309   next2101 (    struct Map_2094 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next2102 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_309_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2099 (    struct Map_2094  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_2094  it1099 = ( (  into_dash_iter2100 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next2101 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2106 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2106);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp2107;
    return (  temp2107 );
}

static  int32_t   lam2108 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add311 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum2093 (    struct Map_2094  it1110 ) {
    return ( (  reduce2099 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2108 ) ) );
}

static  struct StrConcatIter_2095   into_dash_iter2110 (    struct StrConcatIter_2095  self1497 ) {
    return (  self1497 );
}

static  struct Map_2094   map2109 (    struct StrConcatIter_2095  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_2095  it808 = ( (  into_dash_iter2110 ) ( (  iterable805 ) ) );
    return ( ( Map_2094_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrConcat_2116 {
    struct StrConcat_2017  field0;
    struct StrBuilder_62  field1;
};

static struct StrConcat_2116 StrConcat_2116_StrConcat (  struct StrConcat_2017  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct StrConcat_2116 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2115 {
    struct StrConcat_2116  field0;
    struct Char_65  field1;
};

static struct StrConcat_2115 StrConcat_2115_StrConcat (  struct StrConcat_2116  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2115 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_2114 {
    enum {
        StrCase_2114_StrCase1_t,
        StrCase_2114_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_2114_StrCase1_s;
        struct {
            struct StrConcat_2115  field0;
        } StrCase_2114_StrCase2_s;
    } stuff;
};

static struct StrCase_2114 StrCase_2114_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_2114 ) { .tag = StrCase_2114_StrCase1_t, .stuff = { .StrCase_2114_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_2114 StrCase_2114_StrCase2 (  struct StrConcat_2115  field0 ) {
    return ( struct StrCase_2114 ) { .tag = StrCase_2114_StrCase2_t, .stuff = { .StrCase_2114_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrCaseIter_2096   undefined2119 (  ) {
    struct StrCaseIter_2096  temp2120;
    return (  temp2120 );
}

static  struct StrCaseIter_2096   todo2118 (  ) {
    ( (  print1242 ) ( ( (  from_dash_string257 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( (  undefined2119 ) ( ) );
}

static  struct StrConcatIter_2098   into_dash_iter2126 (    struct StrConcat_2116  dref1504 ) {
    return ( (struct StrConcatIter_2098) { .f_left = ( (  chars2021 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1617 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2098   chars2125 (    struct StrConcat_2116  self1515 ) {
    return ( (  into_dash_iter2126 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2097   into_dash_iter2124 (    struct StrConcat_2115  dref1504 ) {
    return ( (struct StrConcatIter_2097) { .f_left = ( (  chars2125 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2097   chars2123 (    struct StrConcat_2115  self1515 ) {
    return ( (  into_dash_iter2124 ) ( (  self1515 ) ) );
}

static  struct StrCaseIter_2096   into_dash_iter2122 (    struct StrCase_2114  self1528 ) {
    struct StrCase_2114  dref1529 = (  self1528 );
    if ( dref1529.tag == StrCase_2114_StrCase1_t ) {
        return ( ( StrCaseIter_2096_StrCaseIter1 ) ( ( (  chars655 ) ( ( dref1529 .stuff .StrCase_2114_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1529.tag == StrCase_2114_StrCase2_t ) {
            return ( ( StrCaseIter_2096_StrCaseIter2 ) ( ( (  chars2123 ) ( ( dref1529 .stuff .StrCase_2114_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_2096   chars2121 (    struct StrCase_2114  self1540 ) {
    return ( (  into_dash_iter2122 ) ( (  self1540 ) ) );
}

static  struct StrCaseIter_2096   chars2113 (    struct EditorMode_165  self4295 ) {
    struct StrCase_2114  temp2117;
    struct StrCase_2114  c4296 = (  temp2117 );
    struct EditorMode_165  dref4297 = (  self4295 );
    if ( dref4297.tag == EditorMode_165_Normal_t ) {
        c4296 = ( ( StrCase_2114_StrCase1 ) ( ( (  from_dash_string257 ) ( ( "Normal" ) ,  ( 6 ) ) ) ) );
    }
    else {
        if ( dref4297.tag == EditorMode_165_Cmd_t ) {
            c4296 = ( ( StrCase_2114_StrCase2 ) ( ( ( StrConcat_2115_StrConcat ) ( ( ( StrConcat_2116_StrConcat ) ( ( ( StrConcat_2017_StrConcat ) ( ( ( StrConcat_1942_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Cmd(" ) ,  ( 4 ) ) ) ,  ( dref4297 .stuff .EditorMode_165_Cmd_s .field0 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "|" ) ,  ( 1 ) ) ) ) ) ,  ( dref4297 .stuff .EditorMode_165_Cmd_s .field1 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
        else {
            if ( dref4297.tag == EditorMode_165_Search_t ) {
                c4296 = ( ( StrCase_2114_StrCase2 ) ( ( ( StrConcat_2115_StrConcat ) ( ( ( StrConcat_2116_StrConcat ) ( ( ( StrConcat_2017_StrConcat ) ( ( ( StrConcat_1942_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Search(" ) ,  ( 7 ) ) ) ,  ( dref4297 .stuff .EditorMode_165_Search_s .field0 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "|" ) ,  ( 1 ) ) ) ) ) ,  ( dref4297 .stuff .EditorMode_165_Search_s .field1 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
            }
            else {
                if ( true ) {
                    return ( (  todo2118 ) ( ) );
                }
            }
        }
    }
    return ( (  chars2121 ) ( (  c4296 ) ) );
}

static  struct StrConcatIter_2095   into_dash_iter2112 (    struct StrConcat_2090  dref1504 ) {
    return ( (struct StrConcatIter_2095) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2113 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2095   chars2111 (    struct StrConcat_2090  self1515 ) {
    return ( (  into_dash_iter2112 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str2127 (    struct Screen_188 *  screen3571 ,    struct StrConcat_2090  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2095  temp2128 =  into_dash_iter2110 ( ( (  chars2111 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond2129 =  next2102 (&temp2128);
        if (  __cond2129 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2129 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2092 (    struct Screen_188 *  screen3587 ,    struct StrConcat_2090  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum2093 ) ( ( (  map2109 ) ( ( (  chars2111 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1003 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str2127 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann2091 (   struct env1909* env ,    struct StrConcat_2090  s4418 ) {
    ( (  draw_dash_str_dash_right2092 ) ( ( env->screen4411 ) ,  (  s4418 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4415 ) ) ) );
    (* env->curline4415 ) = (  op_dash_add311 ( ( * ( env->curline4415 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2132 {
    struct StrView_27  field0;
    struct Maybe_164  field1;
};

static struct StrConcat_2132 StrConcat_2132_StrConcat (  struct StrView_27  field0 ,  struct Maybe_164  field1 ) {
    return ( struct StrConcat_2132 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2131 {
    enum Unit_8  (*fun) (  struct env1910*  ,    struct StrConcat_2132  );
    struct env1910 env;
};

struct StrConcatIter_2139 {
    struct StrConcatIter_1921  f_left;
    struct AppendIter_913  f_right;
};

struct StrCaseIter_2138 {
    enum {
        StrCaseIter_2138_StrCaseIter1_t,
        StrCaseIter_2138_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_650  field0;
        } StrCaseIter_2138_StrCaseIter1_s;
        struct {
            struct StrConcatIter_2139  field0;
        } StrCaseIter_2138_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_2138 StrCaseIter_2138_StrCaseIter1 (  struct StrViewIter_650  field0 ) {
    return ( struct StrCaseIter_2138 ) { .tag = StrCaseIter_2138_StrCaseIter1_t, .stuff = { .StrCaseIter_2138_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_2138 StrCaseIter_2138_StrCaseIter2 (  struct StrConcatIter_2139  field0 ) {
    return ( struct StrCaseIter_2138 ) { .tag = StrCaseIter_2138_StrCaseIter2_t, .stuff = { .StrCaseIter_2138_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_2137 {
    struct StrViewIter_650  f_left;
    struct StrCaseIter_2138  f_right;
};

struct Map_2136 {
    struct StrConcatIter_2137  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2136 Map_2136_Map (  struct StrConcatIter_2137  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2136 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2136   into_dash_iter2141 (    struct Map_2136  self796 ) {
    return (  self796 );
}

static  struct Maybe_653   next2145 (    struct StrConcatIter_2139 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next1925 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2144 (    struct StrCaseIter_2138 *  self1522 ) {
    struct StrCaseIter_2138 *  dref1523 = (  self1522 );
    if ( (* dref1523 ).tag == StrCaseIter_2138_StrCaseIter1_t ) {
        return ( (  next654 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_2138_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1523 ).tag == StrCaseIter_2138_StrCaseIter2_t ) {
            return ( (  next2145 ) ( ( & ( (* dref1523 ) .stuff .StrCaseIter_2138_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_653   next2143 (    struct StrConcatIter_2137 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next2144 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_309   next2142 (    struct Map_2136 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next2143 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_309_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2140 (    struct Map_2136  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_2136  it1099 = ( (  into_dash_iter2141 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next2142 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2146 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2146);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp2147;
    return (  temp2147 );
}

static  int32_t   lam2148 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add311 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum2135 (    struct Map_2136  it1110 ) {
    return ( (  reduce2140 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2148 ) ) );
}

static  struct StrConcatIter_2137   into_dash_iter2150 (    struct StrConcatIter_2137  self1497 ) {
    return (  self1497 );
}

static  struct Map_2136   map2149 (    struct StrConcatIter_2137  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_2137  it808 = ( (  into_dash_iter2150 ) ( (  iterable805 ) ) );
    return ( ( Map_2136_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

struct StrCase_2154 {
    enum {
        StrCase_2154_StrCase1_t,
        StrCase_2154_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_2154_StrCase1_s;
        struct {
            struct StrConcat_526  field0;
        } StrCase_2154_StrCase2_s;
    } stuff;
};

static struct StrCase_2154 StrCase_2154_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_2154 ) { .tag = StrCase_2154_StrCase1_t, .stuff = { .StrCase_2154_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_2154 StrCase_2154_StrCase2 (  struct StrConcat_526  field0 ) {
    return ( struct StrCase_2154 ) { .tag = StrCase_2154_StrCase2_t, .stuff = { .StrCase_2154_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1921   into_dash_iter2161 (    struct StrConcat_527  dref1504 ) {
    return ( (struct StrConcatIter_1921) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars655 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1921   chars2160 (    struct StrConcat_527  self1515 ) {
    return ( (  into_dash_iter2161 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2139   into_dash_iter2159 (    struct StrConcat_526  dref1504 ) {
    return ( (struct StrConcatIter_2139) { .f_left = ( (  chars2160 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2139   chars2158 (    struct StrConcat_526  self1515 ) {
    return ( (  into_dash_iter2159 ) ( (  self1515 ) ) );
}

static  struct StrCaseIter_2138   into_dash_iter2157 (    struct StrCase_2154  self1528 ) {
    struct StrCase_2154  dref1529 = (  self1528 );
    if ( dref1529.tag == StrCase_2154_StrCase1_t ) {
        return ( ( StrCaseIter_2138_StrCaseIter1 ) ( ( (  chars655 ) ( ( dref1529 .stuff .StrCase_2154_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1529.tag == StrCase_2154_StrCase2_t ) {
            return ( ( StrCaseIter_2138_StrCaseIter2 ) ( ( (  chars2158 ) ( ( dref1529 .stuff .StrCase_2154_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_2138   chars2156 (    struct StrCase_2154  self1540 ) {
    return ( (  into_dash_iter2157 ) ( (  self1540 ) ) );
}

static  struct StrCaseIter_2138   chars2153 (    struct Maybe_164  self1554 ) {
    struct StrCase_2154  temp2155;
    struct StrCase_2154  c1555 = (  temp2155 );
    struct Maybe_164  dref1556 = (  self1554 );
    if ( dref1556.tag == Maybe_164_None_t ) {
        c1555 = ( ( StrCase_2154_StrCase1 ) ( ( (  from_dash_string257 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1556.tag == Maybe_164_Just_t ) {
            c1555 = ( ( StrCase_2154_StrCase2 ) ( ( ( StrConcat_526_StrConcat ) ( ( ( StrConcat_527_StrConcat ) ( ( (  from_dash_string257 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1556 .stuff .Maybe_164_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars2156 ) ( (  c1555 ) ) );
}

static  struct StrConcatIter_2137   into_dash_iter2152 (    struct StrConcat_2132  dref1504 ) {
    return ( (struct StrConcatIter_2137) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2153 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2137   chars2151 (    struct StrConcat_2132  self1515 ) {
    return ( (  into_dash_iter2152 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str2162 (    struct Screen_188 *  screen3571 ,    struct StrConcat_2132  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2137  temp2163 =  into_dash_iter2150 ( ( (  chars2151 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond2164 =  next2143 (&temp2163);
        if (  __cond2164 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2164 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2134 (    struct Screen_188 *  screen3587 ,    struct StrConcat_2132  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum2135 ) ( ( (  map2149 ) ( ( (  chars2151 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1003 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str2162 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann2133 (   struct env1910* env ,    struct StrConcat_2132  s4418 ) {
    ( (  draw_dash_str_dash_right2134 ) ( ( env->screen4411 ) ,  (  s4418 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4415 ) ) ) );
    (* env->curline4415 ) = (  op_dash_add311 ( ( * ( env->curline4415 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2169 {
    struct StrConcat_1703  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2169 StrConcat_2169_StrConcat (  struct StrConcat_1703  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2169 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2168 {
    struct StrConcat_2169  field0;
    int32_t  field1;
};

static struct StrConcat_2168 StrConcat_2168_StrConcat (  struct StrConcat_2169  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_2168 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2167 {
    struct StrConcat_2168  field0;
    struct Char_65  field1;
};

static struct StrConcat_2167 StrConcat_2167_StrConcat (  struct StrConcat_2168  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2167 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2166 {
    enum Unit_8  (*fun) (  struct env1911*  ,    struct StrConcat_2167  );
    struct env1911 env;
};

struct StrConcatIter_2177 {
    struct StrViewIter_650  f_left;
    struct IntStrIter_1665  f_right;
};

struct StrConcatIter_2176 {
    struct StrConcatIter_2177  f_left;
    struct StrViewIter_650  f_right;
};

struct StrConcatIter_2175 {
    struct StrConcatIter_2176  f_left;
    struct IntStrIter_1665  f_right;
};

struct StrConcatIter_2174 {
    struct StrConcatIter_2175  f_left;
    struct AppendIter_913  f_right;
};

struct Map_2173 {
    struct StrConcatIter_2174  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2173 Map_2173_Map (  struct StrConcatIter_2174  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2173 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2173   into_dash_iter2179 (    struct Map_2173  self796 ) {
    return (  self796 );
}

static  struct Maybe_653   next2184 (    struct StrConcatIter_2177 *  self1500 ) {
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

static  struct Maybe_653   next2183 (    struct StrConcatIter_2176 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2184 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2182 (    struct StrConcatIter_2175 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2183 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next1668 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2181 (    struct StrConcatIter_2174 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2182 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_309   next2180 (    struct Map_2173 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next2181 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_309_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2178 (    struct Map_2173  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_2173  it1099 = ( (  into_dash_iter2179 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next2180 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2185 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2185);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp2186;
    return (  temp2186 );
}

static  int32_t   lam2187 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add311 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum2172 (    struct Map_2173  it1110 ) {
    return ( (  reduce2178 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2187 ) ) );
}

static  struct StrConcatIter_2174   into_dash_iter2189 (    struct StrConcatIter_2174  self1497 ) {
    return (  self1497 );
}

static  struct Map_2173   map2188 (    struct StrConcatIter_2174  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_2174  it808 = ( (  into_dash_iter2189 ) ( (  iterable805 ) ) );
    return ( ( Map_2173_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_2177   into_dash_iter2197 (    struct StrConcat_1703  dref1504 ) {
    return ( (struct StrConcatIter_2177) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1681 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2177   chars2196 (    struct StrConcat_1703  self1515 ) {
    return ( (  into_dash_iter2197 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2176   into_dash_iter2195 (    struct StrConcat_2169  dref1504 ) {
    return ( (struct StrConcatIter_2176) { .f_left = ( (  chars2196 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars655 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2176   chars2194 (    struct StrConcat_2169  self1515 ) {
    return ( (  into_dash_iter2195 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2175   into_dash_iter2193 (    struct StrConcat_2168  dref1504 ) {
    return ( (struct StrConcatIter_2175) { .f_left = ( (  chars2194 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1681 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2175   chars2192 (    struct StrConcat_2168  self1515 ) {
    return ( (  into_dash_iter2193 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2174   into_dash_iter2191 (    struct StrConcat_2167  dref1504 ) {
    return ( (struct StrConcatIter_2174) { .f_left = ( (  chars2192 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2174   chars2190 (    struct StrConcat_2167  self1515 ) {
    return ( (  into_dash_iter2191 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str2198 (    struct Screen_188 *  screen3571 ,    struct StrConcat_2167  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2174  temp2199 =  into_dash_iter2189 ( ( (  chars2190 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond2200 =  next2181 (&temp2199);
        if (  __cond2200 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2200 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2171 (    struct Screen_188 *  screen3587 ,    struct StrConcat_2167  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum2172 ) ( ( (  map2188 ) ( ( (  chars2190 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1003 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str2198 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann2170 (   struct env1911* env ,    struct StrConcat_2167  s4418 ) {
    ( (  draw_dash_str_dash_right2171 ) ( ( env->screen4411 ) ,  (  s4418 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4415 ) ) ) );
    (* env->curline4415 ) = (  op_dash_add311 ( ( * ( env->curline4415 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2203 {
    struct StrConcat_2168  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2203 StrConcat_2203_StrConcat (  struct StrConcat_2168  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2203 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2202 {
    enum Unit_8  (*fun) (  struct env1912*  ,    struct StrConcat_2203  );
    struct env1912 env;
};

struct StrConcatIter_2208 {
    struct StrConcatIter_2175  f_left;
    struct StrViewIter_650  f_right;
};

struct Map_2207 {
    struct StrConcatIter_2208  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2207 Map_2207_Map (  struct StrConcatIter_2208  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2207 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2207   into_dash_iter2210 (    struct Map_2207  self796 ) {
    return (  self796 );
}

static  struct Maybe_653   next2212 (    struct StrConcatIter_2208 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2182 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_309   next2211 (    struct Map_2207 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next2212 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_309_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2209 (    struct Map_2207  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_2207  it1099 = ( (  into_dash_iter2210 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next2211 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2213 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2213);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp2214;
    return (  temp2214 );
}

static  int32_t   lam2215 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add311 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum2206 (    struct Map_2207  it1110 ) {
    return ( (  reduce2209 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2215 ) ) );
}

static  struct StrConcatIter_2208   into_dash_iter2217 (    struct StrConcatIter_2208  self1497 ) {
    return (  self1497 );
}

static  struct Map_2207   map2216 (    struct StrConcatIter_2208  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_2208  it808 = ( (  into_dash_iter2217 ) ( (  iterable805 ) ) );
    return ( ( Map_2207_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct StrConcatIter_2208   into_dash_iter2219 (    struct StrConcat_2203  dref1504 ) {
    return ( (struct StrConcatIter_2208) { .f_left = ( (  chars2192 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars655 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2208   chars2218 (    struct StrConcat_2203  self1515 ) {
    return ( (  into_dash_iter2219 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str2220 (    struct Screen_188 *  screen3571 ,    struct StrConcat_2203  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2208  temp2221 =  into_dash_iter2217 ( ( (  chars2218 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond2222 =  next2212 (&temp2221);
        if (  __cond2222 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2222 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2205 (    struct Screen_188 *  screen3587 ,    struct StrConcat_2203  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum2206 ) ( ( (  map2216 ) ( ( (  chars2218 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1003 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str2220 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann2204 (   struct env1912* env ,    struct StrConcat_2203  s4418 ) {
    ( (  draw_dash_str_dash_right2205 ) ( ( env->screen4411 ) ,  (  s4418 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4415 ) ) ) );
    (* env->curline4415 ) = (  op_dash_add311 ( ( * ( env->curline4415 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion2224 {
    enum Unit_8  (*fun) (  struct env1913*  ,    struct StrConcat_75  );
    struct env1913 env;
};

struct Map_2228 {
    struct StrConcatIter_1330  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2228 Map_2228_Map (  struct StrConcatIter_1330  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2228 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2228   into_dash_iter2230 (    struct Map_2228  self796 ) {
    return (  self796 );
}

static  struct Maybe_309   next2231 (    struct Map_2228 *  dref798 ) {
    struct Maybe_653  dref801 = ( (  next1337 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_653_None_t ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_653_Just_t ) {
            return ( ( Maybe_309_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_653_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2229 (    struct Map_2228  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_2228  it1099 = ( (  into_dash_iter2230 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next2231 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2232 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2232);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp2233;
    return (  temp2233 );
}

static  int32_t   lam2234 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add311 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum2227 (    struct Map_2228  it1110 ) {
    return ( (  reduce2229 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2234 ) ) );
}

static  struct StrConcatIter_1330   into_dash_iter2236 (    struct StrConcatIter_1330  self1497 ) {
    return (  self1497 );
}

static  struct Map_2228   map2235 (    struct StrConcatIter_1330  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrConcatIter_1330  it808 = ( (  into_dash_iter2236 ) ( (  iterable805 ) ) );
    return ( ( Map_2228_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  enum Unit_8   draw_dash_str2237 (    struct Screen_188 *  screen3571 ,    struct StrConcat_75  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_1330  temp2238 =  into_dash_iter2236 ( ( (  chars1351 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond2239 =  next1337 (&temp2238);
        if (  __cond2239 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2239 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2226 (    struct Screen_188 *  screen3587 ,    struct StrConcat_75  s3589 ,    int32_t  x3591 ,    int32_t  y3593 ) {
    int32_t  slen3594 = ( (  sum2227 ) ( ( (  map2235 ) ( ( (  chars1351 ) ( (  s3589 ) ) ) ,  (  rendered_dash_wcwidth1003 ) ) ) ) );
    int32_t  w3595 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3596 = (  op_dash_sub852 ( (  op_dash_sub852 ( (  w3595 ) , (  x3591 ) ) ) , (  slen3594 ) ) );
    ( (  draw_dash_str2237 ) ( (  screen3587 ) ,  (  s3589 ) ,  (  x3596 ) ,  (  y3593 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann2225 (   struct env1913* env ,    struct StrConcat_75  s4418 ) {
    ( (  draw_dash_str_dash_right2226 ) ( ( env->screen4411 ) ,  (  s4418 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4415 ) ) ) );
    (* env->curline4415 ) = (  op_dash_add311 ( ( * ( env->curline4415 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   render_dash_editor1656 (   struct env186* env ,    struct Screen_188 *  screen4411 ,    struct Editor_163 *  ed4413 ) {
    struct ScreenDims_195  screen_dash_dims4414 = ( (struct ScreenDims_195) { .f_from_dash_sx = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub852 ( ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen4411 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub852 ( ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen4411 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
    struct envunion187  temp1659 = ( (struct envunion187){ .fun = (  enum Unit_8  (*) (  struct env123*  ,    struct Screen_188 *  ,    struct Pane_141 *  ,    struct ScreenDims_195  ) )render1660 , .env =  env->envinst123 } );
    ( temp1659.fun ( &temp1659.env ,  (  screen4411 ) ,  ( (  pane1028 ) ( (  ed4413 ) ) ) ,  (  screen_dash_dims4414 ) ) );
    int32_t  temp1904 = (  from_dash_integral56 ( 0 ) );
    int32_t *  curline4415 = ( &temp1904 );
    struct env1905 envinst1905 = {
        .screen4411 =  screen4411 ,
        .curline4415 =  curline4415 ,
    };
    struct env1906 envinst1906 = {
        .screen4411 =  screen4411 ,
        .curline4415 =  curline4415 ,
    };
    struct env1907 envinst1907 = {
        .screen4411 =  screen4411 ,
        .curline4415 =  curline4415 ,
    };
    struct env1908 envinst1908 = {
        .screen4411 =  screen4411 ,
        .curline4415 =  curline4415 ,
    };
    struct env1909 envinst1909 = {
        .screen4411 =  screen4411 ,
        .curline4415 =  curline4415 ,
    };
    struct env1910 envinst1910 = {
        .screen4411 =  screen4411 ,
        .curline4415 =  curline4415 ,
    };
    struct env1911 envinst1911 = {
        .screen4411 =  screen4411 ,
        .curline4415 =  curline4415 ,
    };
    struct env1912 envinst1912 = {
        .screen4411 =  screen4411 ,
        .curline4415 =  curline4415 ,
    };
    struct env1913 envinst1913 = {
        .screen4411 =  screen4411 ,
        .curline4415 =  curline4415 ,
    };
    struct envunion1915  temp1914 = ( (struct envunion1915){ .fun = (  enum Unit_8  (*) (  struct env1905*  ,    struct StrConcat_1916  ) )ann1917 , .env =  envinst1905 } );
    ( temp1914.fun ( &temp1914.env ,  ( ( StrConcat_1916_StrConcat ) ( ( (  from_dash_string257 ) ( ( "mode: " ) ,  ( 6 ) ) ) ,  ( ( ( * (  ed4413 ) ) .f_pane ) .f_mode ) ) ) ) );
    enum CharType_1227  cur_dash_ty4419 = ( (  char_dash_type1229 ) ( ( (  char_dash_at1237 ) ( ( (  pane1028 ) ( (  ed4413 ) ) ) ,  ( ( ( * (  ed4413 ) ) .f_pane ) .f_cursor ) ) ) ) );
    struct envunion1939  temp1938 = ( (struct envunion1939){ .fun = (  enum Unit_8  (*) (  struct env1906*  ,    struct StrConcat_1940  ) )ann1943 , .env =  envinst1906 } );
    ( temp1938.fun ( &temp1938.env ,  ( ( StrConcat_1940_StrConcat ) ( ( ( StrConcat_1941_StrConcat ) ( ( ( StrConcat_1942_StrConcat ) ( ( (  from_dash_string257 ) ( ( "cur: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4413 ) ) .f_pane ) .f_cursor ) ) ) ,  ( (  from_dash_string257 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  (  cur_dash_ty4419 ) ) ) ) );
    struct envunion1993  temp1992 = ( (struct envunion1993){ .fun = (  enum Unit_8  (*) (  struct env1907*  ,    struct StrConcat_1994  ) )ann1995 , .env =  envinst1907 } );
    ( temp1992.fun ( &temp1992.env ,  ( ( StrConcat_1994_StrConcat ) ( ( (  from_dash_string257 ) ( ( "sel: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4413 ) ) .f_pane ) .f_sel ) ) ) ) );
    struct Maybe_2026  cp4422 = ( (  fmap_dash_maybe2029 ) ( ( ( * (  ed4413 ) ) .f_clipboard ) ,  (  lam2030 ) ) );
    struct envunion2040  temp2039 = ( (struct envunion2040){ .fun = (  enum Unit_8  (*) (  struct env1908*  ,    struct StrConcat_2041  ) )ann2042 , .env =  envinst1908 } );
    ( temp2039.fun ( &temp2039.env ,  ( ( StrConcat_2041_StrConcat ) ( ( (  from_dash_string257 ) ( ( "cp: " ) ,  ( 4 ) ) ) ,  (  cp4422 ) ) ) ) );
    struct Maybe_2026  st4425 = ( (  fmap_dash_maybe2084 ) ( ( ( * (  ed4413 ) ) .f_search_dash_term ) ,  (  lam2085 ) ) );
    struct envunion2087  temp2086 = ( (struct envunion2087){ .fun = (  enum Unit_8  (*) (  struct env1908*  ,    struct StrConcat_2041  ) )ann2042 , .env =  envinst1908 } );
    ( temp2086.fun ( &temp2086.env ,  ( ( StrConcat_2041_StrConcat ) ( ( (  from_dash_string257 ) ( ( "st: " ) ,  ( 4 ) ) ) ,  (  st4425 ) ) ) ) );
    struct envunion2089  temp2088 = ( (struct envunion2089){ .fun = (  enum Unit_8  (*) (  struct env1909*  ,    struct StrConcat_2090  ) )ann2091 , .env =  envinst1909 } );
    ( temp2088.fun ( &temp2088.env ,  ( ( StrConcat_2090_StrConcat ) ( ( (  from_dash_string257 ) ( ( "edmode: " ) ,  ( 8 ) ) ) ,  ( ( * (  ed4413 ) ) .f_mode ) ) ) ) );
    struct envunion2131  temp2130 = ( (struct envunion2131){ .fun = (  enum Unit_8  (*) (  struct env1910*  ,    struct StrConcat_2132  ) )ann2133 , .env =  envinst1910 } );
    ( temp2130.fun ( &temp2130.env ,  ( ( StrConcat_2132_StrConcat ) ( ( (  from_dash_string257 ) ( ( "msg: " ) ,  ( 5 ) ) ) ,  ( ( * (  ed4413 ) ) .f_msg ) ) ) ) );
    struct envunion2166  temp2165 = ( (struct envunion2166){ .fun = (  enum Unit_8  (*) (  struct env1911*  ,    struct StrConcat_2167  ) )ann2170 , .env =  envinst1911 } );
    ( temp2165.fun ( &temp2165.env ,  ( ( StrConcat_2167_StrConcat ) ( ( ( StrConcat_2168_StrConcat ) ( ( ( StrConcat_2169_StrConcat ) ( ( ( StrConcat_1703_StrConcat ) ( ( (  from_dash_string257 ) ( ( "sc-off: (" ) ,  ( 9 ) ) ) ,  ( ( ( ( * (  ed4413 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_top ) ) ) ,  ( (  from_dash_string257 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( ( ( ( * (  ed4413 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_left ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    struct envunion2202  temp2201 = ( (struct envunion2202){ .fun = (  enum Unit_8  (*) (  struct env1912*  ,    struct StrConcat_2203  ) )ann2204 , .env =  envinst1912 } );
    ( temp2201.fun ( &temp2201.env ,  ( ( StrConcat_2203_StrConcat ) ( ( ( StrConcat_2168_StrConcat ) ( ( ( StrConcat_2169_StrConcat ) ( ( ( StrConcat_1703_StrConcat ) ( ( (  from_dash_string257 ) ( ( "dims: { " ) ,  ( 8 ) ) ) ,  ( (  screen_dash_dims4414 ) .f_to_dash_sx ) ) ) ,  ( (  from_dash_string257 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  screen_dash_dims4414 ) .f_to_dash_sy ) ) ) ,  ( (  from_dash_string257 ) ( ( " }" ) ,  ( 2 ) ) ) ) ) ) );
    struct envunion2224  temp2223 = ( (struct envunion2224){ .fun = (  enum Unit_8  (*) (  struct env1913*  ,    struct StrConcat_75  ) )ann2225 , .env =  envinst1913 } );
    ( temp2223.fun ( &temp2223.env ,  ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "num actions: " ) ,  ( 13 ) ) ) ,  ( ( ( ( * ( ( ( * (  ed4413 ) ) .f_pane ) .f_buf ) ) .f_actions ) .f_list ) .f_count ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2242 {
    struct StrView_27  field0;
    uint32_t  field1;
};

static struct StrConcat_2242 StrConcat_2242_StrConcat (  struct StrView_27  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2242 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2241 {
    struct StrConcat_2242  field0;
    struct Char_65  field1;
};

static struct StrConcat_2241 StrConcat_2241_StrConcat (  struct StrConcat_2242  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2241 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2246 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2245 {
    struct StrViewIter_650  f_left;
    struct IntStrIter_2246  f_right;
};

struct StrConcatIter_2244 {
    struct StrConcatIter_2245  f_left;
    struct AppendIter_913  f_right;
};

static  struct StrConcatIter_2244   into_dash_iter2247 (    struct StrConcatIter_2244  self1497 ) {
    return (  self1497 );
}

static  uint32_t   op_dash_div2255 (    uint32_t  l245 ,    uint32_t  r247 ) {
    return ( (  l245 ) / (  r247 ) );
}

static  int32_t   count_dash_digits2254 (    uint32_t  self1436 ) {
    if ( (  eq452 ( (  self1436 ) , (  from_dash_integral253 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1437 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp252 ( (  self1436 ) , (  from_dash_integral253 ( 0 ) ) ) == 2 ) ) {
        self1436 = (  op_dash_div2255 ( (  self1436 ) , (  from_dash_integral253 ( 10 ) ) ) );
        digits1437 = (  op_dash_add311 ( (  digits1437 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1437 );
}

static  struct IntStrIter_2246   uint_dash_iter2253 (    uint32_t  int1443 ) {
    return ( (struct IntStrIter_2246) { .f_int = (  int1443 ) , .f_len = ( (  count_dash_digits2254 ) ( (  int1443 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2246   chars2252 (    uint32_t  self1455 ) {
    return ( (  uint_dash_iter2253 ) ( (  self1455 ) ) );
}

static  struct StrConcatIter_2245   into_dash_iter2251 (    struct StrConcat_2242  dref1504 ) {
    return ( (struct StrConcatIter_2245) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2252 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2245   chars2250 (    struct StrConcat_2242  self1515 ) {
    return ( (  into_dash_iter2251 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2244   into_dash_iter2249 (    struct StrConcat_2241  dref1504 ) {
    return ( (struct StrConcatIter_2244) { .f_left = ( (  chars2250 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2244   chars2248 (    struct StrConcat_2241  self1515 ) {
    return ( (  into_dash_iter2249 ) ( (  self1515 ) ) );
}

struct env2262 {
    ;
    uint32_t  base1210;
};

struct envunion2263 {
    uint32_t  (*fun) (  struct env2262*  ,    int32_t  ,    uint32_t  );
    struct env2262 env;
};

static  uint32_t   reduce2261 (    struct Range_726  iterable1093 ,    uint32_t  base1095 ,   struct envunion2263  fun1097 ) {
    uint32_t  x1098 = (  base1095 );
    struct RangeIter_729  it1099 = ( (  into_dash_iter731 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next732 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                struct envunion2263  temp2264 = (  fun1097 );
                x1098 = ( temp2264.fun ( &temp2264.env ,  ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2265 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2265);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp2266;
    return (  temp2266 );
}

static  uint32_t   lam2267 (   struct env2262* env ,    int32_t  item1214 ,    uint32_t  x1216 ) {
    return (  op_dash_mul723 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint32_t   pow2260 (    uint32_t  base1210 ,    int32_t  p1212 ) {
    struct env2262 envinst2262 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce2261 ) ( ( (  to734 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub852 ( (  p1212 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral253 ( 1 ) ) ,  ( (struct envunion2263){ .fun = (  uint32_t  (*) (  struct env2262*  ,    int32_t  ,    uint32_t  ) )lam2267 , .env =  envinst2262 } ) ) );
}

static  uint32_t   op_dash_sub2268 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) - (  r237 ) );
}

static  struct Maybe_653   next2259 (    struct IntStrIter_2246 *  self1428 ) {
    if ( ( ( * (  self1428 ) ) .f_negative ) ) {
        (*  self1428 ) .f_negative = ( false );
        return ( ( Maybe_653_Just ) ( ( (  from_dash_charlike258 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp362 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
    }
    uint32_t  trim_dash_down1429 = ( (  pow2260 ) ( (  from_dash_integral253 ( 10 ) ) ,  (  op_dash_sub852 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint32_t  upper1430 = (  op_dash_div2255 ( ( ( * (  self1428 ) ) .f_int ) , (  trim_dash_down1429 ) ) );
    uint32_t  upper_dash_mask1431 = (  op_dash_mul723 ( (  op_dash_div2255 ( (  upper1430 ) , (  from_dash_integral253 ( 10 ) ) ) ) , (  from_dash_integral253 ( 10 ) ) ) );
    uint8_t  digit1432 = ( ( (  cast256 ) ( (  op_dash_sub2268 ( (  upper1430 ) , (  upper_dash_mask1431 ) ) ) ) ) );
    (*  self1428 ) .f_len = (  op_dash_sub852 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1433 = ( (  from_dash_u8932 ) ( (  op_dash_add822 ( (  digit1432 ) , (  from_dash_integral249 ( 48 ) ) ) ) ) );
    return ( ( Maybe_653_Just ) ( (  digit_dash_char1433 ) ) );
}

static  struct Maybe_653   next2258 (    struct StrConcatIter_2245 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next2259 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2257 (    struct StrConcatIter_2244 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2258 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   draw_dash_str2240 (    struct Screen_188 *  screen3571 ,    struct StrConcat_2241  s3573 ,    int32_t  x3575 ,    int32_t  y3577 ) {
    int32_t  w3578 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp362 ( (  y3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp362 ( (  y3577 ) , ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3571 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3579 = (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3577 ) , (  w3578 ) ) ) , (  x3575 ) ) );
    int32_t  x3580 = ( (  min515 ) ( (  x3575 ) ,  (  w3578 ) ) );
    size_t  max_dash_len3581 = ( (  i32_dash_size299 ) ( (  op_dash_sub852 ( (  w3578 ) , (  x3580 ) ) ) ) );
    int32_t  xx3582 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2244  temp2243 =  into_dash_iter2247 ( ( (  chars2248 ) ( (  s3573 ) ) ) );
    while (true) {
        struct Maybe_653  __cond2256 =  next2257 (&temp2243);
        if (  __cond2256 .tag == 0 ) {
            break;
        }
        struct Char_65  c3584 =  __cond2256 .stuff .Maybe_653_Just_s .field0;
        ( (  put_dash_char1699 ) ( (  screen3571 ) ,  (  c3584 ) ,  (  op_dash_add311 ( (  x3580 ) , (  xx3582 ) ) ) ,  (  y3577 ) ) );
        xx3582 = (  op_dash_add311 ( (  xx3582 ) , ( (  rendered_dash_wcwidth1003 ) ( (  c3584 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct RenderState_2270 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_191  f_fg;
    struct Color_191  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_2275 {
    struct StrConcat_2241  field0;
    uint32_t  field1;
};

static struct StrConcat_2275 StrConcat_2275_StrConcat (  struct StrConcat_2241  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2275 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2274 {
    struct StrConcat_2275  field0;
    struct Char_65  field1;
};

static struct StrConcat_2274 StrConcat_2274_StrConcat (  struct StrConcat_2275  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2274 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2278 {
    struct StrConcatIter_2244  f_left;
    struct IntStrIter_2246  f_right;
};

struct StrConcatIter_2277 {
    struct StrConcatIter_2278  f_left;
    struct AppendIter_913  f_right;
};

static  struct StrConcatIter_2277   into_dash_iter2280 (    struct StrConcatIter_2277  self1497 ) {
    return (  self1497 );
}

static  struct Maybe_653   next2282 (    struct StrConcatIter_2278 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2257 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next2259 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2281 (    struct StrConcatIter_2277 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2282 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2276 (    struct StrConcatIter_2277  iterable1074 ,    enum Unit_8 (*  fun1076 )(    struct Char_65  ) ) {
    struct StrConcatIter_2277  temp2279 = ( (  into_dash_iter2280 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2277 *  it1077 = ( &temp2279 );
    while ( ( true ) ) {
        struct Maybe_653  dref1078 = ( (  next2281 ) ( (  it1077 ) ) );
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

static  struct StrConcatIter_2278   into_dash_iter2286 (    struct StrConcat_2275  dref1504 ) {
    return ( (struct StrConcatIter_2278) { .f_left = ( (  chars2248 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2252 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2278   chars2285 (    struct StrConcat_2275  self1515 ) {
    return ( (  into_dash_iter2286 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2277   into_dash_iter2284 (    struct StrConcat_2274  dref1504 ) {
    return ( (struct StrConcatIter_2277) { .f_left = ( (  chars2285 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2277   chars2283 (    struct StrConcat_2274  self1515 ) {
    return ( (  into_dash_iter2284 ) ( (  self1515 ) ) );
}

static  enum Unit_8   print2273 (    struct StrConcat_2274  s2579 ) {
    ( (  for_dash_each2276 ) ( ( (  chars2283 ) ( (  s2579 ) ) ) ,  (  printf_dash_char241 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_cursor_dash_to2272 (    uint32_t  x2593 ,    uint32_t  y2595 ) {
    uint32_t  x2596 = (  op_dash_add824 ( (  x2593 ) , (  from_dash_integral253 ( 1 ) ) ) );
    uint32_t  y2597 = (  op_dash_add824 ( (  y2595 ) , (  from_dash_integral253 ( 1 ) ) ) );
    ( (  print2273 ) ( ( ( StrConcat_2274_StrConcat ) ( ( ( StrConcat_2275_StrConcat ) ( ( ( StrConcat_2241_StrConcat ) ( ( ( StrConcat_2242_StrConcat ) ( ( (  from_dash_string257 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2597 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2596 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_189   subslice2289 (    struct Slice_189  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    struct Cell_190 *  begin_dash_ptr1788 = ( (  offset_dash_ptr738 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp221 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp221 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_189) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub349 ( ( (  min376 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_189) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

struct SliceIter_2292 {
    struct Slice_189  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2291 {
    struct SliceIter_2292  f_left_dash_it;
    struct SliceIter_2292  f_right_dash_it;
};

struct Tuple2_2293 {
    struct Cell_190  field0;
    struct Cell_190  field1;
};

static struct Tuple2_2293 Tuple2_2293_Tuple2 (  struct Cell_190  field0 ,  struct Cell_190  field1 ) {
    return ( struct Tuple2_2293 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2295 {
    bool (*  fun1135 )(    struct Tuple2_2293  );
};

struct envunion2296 {
    bool  (*fun) (  struct env2295*  ,    struct Tuple2_2293  ,    bool  );
    struct env2295 env;
};

static  struct Zip_2291   into_dash_iter2297 (    struct Zip_2291  self911 ) {
    return (  self911 );
}

struct Maybe_2298 {
    enum {
        Maybe_2298_None_t,
        Maybe_2298_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2293  field0;
        } Maybe_2298_Just_s;
    } stuff;
};

static struct Maybe_2298 Maybe_2298_Just (  struct Tuple2_2293  field0 ) {
    return ( struct Maybe_2298 ) { .tag = Maybe_2298_Just_t, .stuff = { .Maybe_2298_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_743   next2300 (    struct SliceIter_2292 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp221 ( (  op_dash_add269 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_743) { .tag = Maybe_743_None_t } );
    }
    struct Cell_190  elem1831 = ( * ( (  offset_dash_ptr738 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64298 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add269 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_743_Just ) ( (  elem1831 ) ) );
}

static  struct Maybe_2298   next2299 (    struct Zip_2291 *  self914 ) {
    struct Zip_2291  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_743  dref916 = ( (  next2300 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_743_None_t ) {
            return ( (struct Maybe_2298) { .tag = Maybe_2298_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_743_Just_t ) {
                struct Maybe_743  dref918 = ( (  next2300 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_743_None_t ) {
                    return ( (struct Maybe_2298) { .tag = Maybe_2298_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_743_Just_t ) {
                        ( (  next2300 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next2300 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2298_Just ) ( ( ( Tuple2_2293_Tuple2 ) ( ( dref916 .stuff .Maybe_743_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_743_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce2294 (    struct Zip_2291  iterable1093 ,    bool  base1095 ,   struct envunion2296  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_2291  it1099 = ( (  into_dash_iter2297 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_2298  dref1100 = ( (  next2299 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_2298_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_2298_Just_t ) {
                struct envunion2296  temp2301 = (  fun1097 );
                x1098 = ( temp2301.fun ( &temp2301.env ,  ( dref1100 .stuff .Maybe_2298_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2302 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2302);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2303;
    return (  temp2303 );
}

static  bool   lam2304 (   struct env2295* env ,    struct Tuple2_2293  e1137 ,    bool  x1139 ) {
    return ( ( ( env->fun1135 ) ( (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any2290 (    struct Zip_2291  it1133 ,    bool (*  fun1135 )(    struct Tuple2_2293  ) ) {
    struct env2295 envinst2295 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce2294 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion2296){ .fun = (  bool  (*) (  struct env2295*  ,    struct Tuple2_2293  ,    bool  ) )lam2304 , .env =  envinst2295 } ) ) );
}

static  struct SliceIter_2292   into_dash_iter2306 (    struct Slice_189  self1823 ) {
    return ( (struct SliceIter_2292) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2291   zip2305 (    struct Slice_189  left922 ,    struct Slice_189  right924 ) {
    struct SliceIter_2292  left_dash_it925 = ( (  into_dash_iter2306 ) ( (  left922 ) ) );
    struct SliceIter_2292  right_dash_it926 = ( (  into_dash_iter2306 ) ( (  right924 ) ) );
    return ( (struct Zip_2291) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

struct Tuple2_2310 {
    struct Color_191  field0;
    struct Color_191  field1;
};

static struct Tuple2_2310 Tuple2_2310_Tuple2 (  struct Color_191  field0 ,  struct Color_191  field1 ) {
    return ( struct Tuple2_2310 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_192 *   cast2314 (    int32_t *  x356 ) {
    return ( (enum Color8_192 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2312 (    enum Color8_192  x573 ) {
    int32_t  temp2313 = ( (  zeroed895 ) ( ) );
    int32_t *  y574 = ( &temp2313 );
    enum Color8_192 *  yp575 = ( (  cast2314 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq2311 (    enum Color8_192  l2621 ,    enum Color8_192  r2623 ) {
    return (  eq365 ( ( ( (  cast_dash_on_dash_zeroed2312 ) ( (  l2621 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2312 ) ( (  r2623 ) ) ) ) );
}

static  enum Color16_193 *   cast2318 (    int32_t *  x356 ) {
    return ( (enum Color16_193 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2316 (    enum Color16_193  x573 ) {
    int32_t  temp2317 = ( (  zeroed895 ) ( ) );
    int32_t *  y574 = ( &temp2317 );
    enum Color16_193 *  yp575 = ( (  cast2318 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq2315 (    enum Color16_193  l2627 ,    enum Color16_193  r2629 ) {
    return (  eq365 ( ( ( (  cast_dash_on_dash_zeroed2316 ) ( (  l2627 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2316 ) ( (  r2629 ) ) ) ) );
}

static  bool   eq2319 (    struct RGB_194  l2657 ,    struct RGB_194  r2659 ) {
    return ( ( (  eq245 ( ( (  l2657 ) .f_r ) , ( (  r2659 ) .f_r ) ) ) && (  eq245 ( ( (  l2657 ) .f_g ) , ( (  r2659 ) .f_g ) ) ) ) && (  eq245 ( ( (  l2657 ) .f_b ) , ( (  r2659 ) .f_b ) ) ) );
}

static  bool   eq2309 (    struct Color_191  l2680 ,    struct Color_191  r2682 ) {
    return ( {  struct Tuple2_2310  dref2683 = ( ( Tuple2_2310_Tuple2 ) ( (  l2680 ) ,  (  r2682 ) ) ) ; dref2683 .field0.tag == Color_191_ColorDefault_t && dref2683 .field1.tag == Color_191_ColorDefault_t ? ( true ) : dref2683 .field0.tag == Color_191_Color8_t && dref2683 .field1.tag == Color_191_Color8_t ? (  eq2311 ( ( dref2683 .field0 .stuff .Color_191_Color8_s .field0 ) , ( dref2683 .field1 .stuff .Color_191_Color8_s .field0 ) ) ) : dref2683 .field0.tag == Color_191_Color16_t && dref2683 .field1.tag == Color_191_Color16_t ? (  eq2315 ( ( dref2683 .field0 .stuff .Color_191_Color16_s .field0 ) , ( dref2683 .field1 .stuff .Color_191_Color16_s .field0 ) ) ) : dref2683 .field0.tag == Color_191_Color256_t && dref2683 .field1.tag == Color_191_Color256_t ? (  eq245 ( ( dref2683 .field0 .stuff .Color_191_Color256_s .field0 ) , ( dref2683 .field1 .stuff .Color_191_Color256_s .field0 ) ) ) : dref2683 .field0.tag == Color_191_ColorRGB_t && dref2683 .field1.tag == Color_191_ColorRGB_t ? (  eq2319 ( ( dref2683 .field0 .stuff .Color_191_ColorRGB_s .field0 ) , ( dref2683 .field1 .stuff .Color_191_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2308 (    struct Cell_190  l3444 ,    struct Cell_190  r3446 ) {
    if ( ( !  eq448 ( ( (  l3444 ) .f_c ) , ( (  r3446 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2309 ( ( (  l3444 ) .f_fg ) , ( (  r3446 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2309 ( ( (  l3444 ) .f_bg ) , ( (  r3446 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam2307 (    struct Tuple2_2293  dref3500 ) {
    return ( !  eq2308 ( ( dref3500 .field0 ) , ( dref3500 .field1 ) ) );
}

static  enum Unit_8   set_dash_default_dash_fg2322 (  ) {
    ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg82323 (    enum Color8_192  color2632 ) {
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

static  enum Unit_8   set_dash_fg162324 (    enum Color16_193  color2636 ) {
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

struct StrConcat_2328 {
    struct StrView_27  field0;
    uint8_t  field1;
};

static struct StrConcat_2328 StrConcat_2328_StrConcat (  struct StrView_27  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2328 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2327 {
    struct StrConcat_2328  field0;
    struct Char_65  field1;
};

static struct StrConcat_2327 StrConcat_2327_StrConcat (  struct StrConcat_2328  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2327 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2332 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2331 {
    struct StrViewIter_650  f_left;
    struct IntStrIter_2332  f_right;
};

struct StrConcatIter_2330 {
    struct StrConcatIter_2331  f_left;
    struct AppendIter_913  f_right;
};

static  struct StrConcatIter_2330   into_dash_iter2334 (    struct StrConcatIter_2330  self1497 ) {
    return (  self1497 );
}

struct env2340 {
    uint8_t  base1210;
    ;
};

struct envunion2341 {
    uint8_t  (*fun) (  struct env2340*  ,    int32_t  ,    uint8_t  );
    struct env2340 env;
};

static  uint8_t   reduce2339 (    struct Range_726  iterable1093 ,    uint8_t  base1095 ,   struct envunion2341  fun1097 ) {
    uint8_t  x1098 = (  base1095 );
    struct RangeIter_729  it1099 = ( (  into_dash_iter731 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_309  dref1100 = ( (  next732 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_309_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_309_Just_t ) {
                struct envunion2341  temp2342 = (  fun1097 );
                x1098 = ( temp2342.fun ( &temp2342.env ,  ( dref1100 .stuff .Maybe_309_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2343 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2343);
    exit ( 1 );
    ( Unit_8_Unit );
    uint8_t  temp2344;
    return (  temp2344 );
}

static  uint8_t   op_dash_mul2346 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam2345 (   struct env2340* env ,    int32_t  item1214 ,    uint8_t  x1216 ) {
    return (  op_dash_mul2346 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint8_t   pow2338 (    uint8_t  base1210 ,    int32_t  p1212 ) {
    struct env2340 envinst2340 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce2339 ) ( ( (  to734 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub852 ( (  p1212 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral249 ( 1 ) ) ,  ( (struct envunion2341){ .fun = (  uint8_t  (*) (  struct env2340*  ,    int32_t  ,    uint8_t  ) )lam2345 , .env =  envinst2340 } ) ) );
}

static  uint8_t   op_dash_div2347 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast2348 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_653   next2337 (    struct IntStrIter_2332 *  self1428 ) {
    if ( ( ( * (  self1428 ) ) .f_negative ) ) {
        (*  self1428 ) .f_negative = ( false );
        return ( ( Maybe_653_Just ) ( ( (  from_dash_charlike258 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp362 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_653) { .tag = Maybe_653_None_t } );
    }
    uint8_t  trim_dash_down1429 = ( (  pow2338 ) ( (  from_dash_integral249 ( 10 ) ) ,  (  op_dash_sub852 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint8_t  upper1430 = (  op_dash_div2347 ( ( ( * (  self1428 ) ) .f_int ) , (  trim_dash_down1429 ) ) );
    uint8_t  upper_dash_mask1431 = (  op_dash_mul2346 ( (  op_dash_div2347 ( (  upper1430 ) , (  from_dash_integral249 ( 10 ) ) ) ) , (  from_dash_integral249 ( 10 ) ) ) );
    uint8_t  digit1432 = ( ( (  cast2348 ) ( (  op_dash_sub821 ( (  upper1430 ) , (  upper_dash_mask1431 ) ) ) ) ) );
    (*  self1428 ) .f_len = (  op_dash_sub852 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1433 = ( (  from_dash_u8932 ) ( (  op_dash_add822 ( (  digit1432 ) , (  from_dash_integral249 ( 48 ) ) ) ) ) );
    return ( ( Maybe_653_Just ) ( (  digit_dash_char1433 ) ) );
}

static  struct Maybe_653   next2336 (    struct StrConcatIter_2331 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next654 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next2337 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2335 (    struct StrConcatIter_2330 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2336 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2329 (    struct StrConcatIter_2330  iterable1074 ,    enum Unit_8 (*  fun1076 )(    struct Char_65  ) ) {
    struct StrConcatIter_2330  temp2333 = ( (  into_dash_iter2334 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2330 *  it1077 = ( &temp2333 );
    while ( ( true ) ) {
        struct Maybe_653  dref1078 = ( (  next2335 ) ( (  it1077 ) ) );
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

static  int32_t   count_dash_digits2355 (    uint8_t  self1436 ) {
    if ( (  eq245 ( (  self1436 ) , (  from_dash_integral249 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1437 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp262 ( (  self1436 ) , (  from_dash_integral249 ( 0 ) ) ) == 2 ) ) {
        self1436 = (  op_dash_div2347 ( (  self1436 ) , (  from_dash_integral249 ( 10 ) ) ) );
        digits1437 = (  op_dash_add311 ( (  digits1437 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1437 );
}

static  struct IntStrIter_2332   uint_dash_iter2354 (    uint8_t  int1443 ) {
    return ( (struct IntStrIter_2332) { .f_int = (  int1443 ) , .f_len = ( (  count_dash_digits2355 ) ( (  int1443 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2332   chars2353 (    uint8_t  self1461 ) {
    return ( (  uint_dash_iter2354 ) ( (  self1461 ) ) );
}

static  struct StrConcatIter_2331   into_dash_iter2352 (    struct StrConcat_2328  dref1504 ) {
    return ( (struct StrConcatIter_2331) { .f_left = ( (  chars655 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2353 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2331   chars2351 (    struct StrConcat_2328  self1515 ) {
    return ( (  into_dash_iter2352 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2330   into_dash_iter2350 (    struct StrConcat_2327  dref1504 ) {
    return ( (struct StrConcatIter_2330) { .f_left = ( (  chars2351 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2330   chars2349 (    struct StrConcat_2327  self1515 ) {
    return ( (  into_dash_iter2350 ) ( (  self1515 ) ) );
}

static  enum Unit_8   print2326 (    struct StrConcat_2327  s2579 ) {
    ( (  for_dash_each2329 ) ( ( (  chars2349 ) ( (  s2579 ) ) ) ,  (  printf_dash_char241 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2562325 (    uint8_t  color2650 ) {
    ( (  print2326 ) ( ( ( StrConcat_2327_StrConcat ) ( ( ( StrConcat_2328_StrConcat ) ( ( (  from_dash_string257 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2650 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2361 {
    struct StrConcat_2327  field0;
    uint8_t  field1;
};

static struct StrConcat_2361 StrConcat_2361_StrConcat (  struct StrConcat_2327  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2361 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2360 {
    struct StrConcat_2361  field0;
    struct Char_65  field1;
};

static struct StrConcat_2360 StrConcat_2360_StrConcat (  struct StrConcat_2361  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2360 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2359 {
    struct StrConcat_2360  field0;
    uint8_t  field1;
};

static struct StrConcat_2359 StrConcat_2359_StrConcat (  struct StrConcat_2360  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2359 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2358 {
    struct StrConcat_2359  field0;
    struct Char_65  field1;
};

static struct StrConcat_2358 StrConcat_2358_StrConcat (  struct StrConcat_2359  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2358 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2366 {
    struct StrConcatIter_2330  f_left;
    struct IntStrIter_2332  f_right;
};

struct StrConcatIter_2365 {
    struct StrConcatIter_2366  f_left;
    struct AppendIter_913  f_right;
};

struct StrConcatIter_2364 {
    struct StrConcatIter_2365  f_left;
    struct IntStrIter_2332  f_right;
};

struct StrConcatIter_2363 {
    struct StrConcatIter_2364  f_left;
    struct AppendIter_913  f_right;
};

static  struct StrConcatIter_2363   into_dash_iter2368 (    struct StrConcatIter_2363  self1497 ) {
    return (  self1497 );
}

static  struct Maybe_653   next2372 (    struct StrConcatIter_2366 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2335 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next2337 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2371 (    struct StrConcatIter_2365 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2372 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2370 (    struct StrConcatIter_2364 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2371 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next2337 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_653   next2369 (    struct StrConcatIter_2363 *  self1500 ) {
    struct Maybe_653  dref1501 = ( (  next2370 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_653_Just_t ) {
        return ( ( Maybe_653_Just ) ( ( dref1501 .stuff .Maybe_653_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_653_None_t ) {
            return ( (  next939 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2362 (    struct StrConcatIter_2363  iterable1074 ,    enum Unit_8 (*  fun1076 )(    struct Char_65  ) ) {
    struct StrConcatIter_2363  temp2367 = ( (  into_dash_iter2368 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2363 *  it1077 = ( &temp2367 );
    while ( ( true ) ) {
        struct Maybe_653  dref1078 = ( (  next2369 ) ( (  it1077 ) ) );
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

static  struct StrConcatIter_2366   into_dash_iter2380 (    struct StrConcat_2361  dref1504 ) {
    return ( (struct StrConcatIter_2366) { .f_left = ( (  chars2349 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2353 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2366   chars2379 (    struct StrConcat_2361  self1515 ) {
    return ( (  into_dash_iter2380 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2365   into_dash_iter2378 (    struct StrConcat_2360  dref1504 ) {
    return ( (struct StrConcatIter_2365) { .f_left = ( (  chars2379 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2365   chars2377 (    struct StrConcat_2360  self1515 ) {
    return ( (  into_dash_iter2378 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2364   into_dash_iter2376 (    struct StrConcat_2359  dref1504 ) {
    return ( (struct StrConcatIter_2364) { .f_left = ( (  chars2377 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2353 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2364   chars2375 (    struct StrConcat_2359  self1515 ) {
    return ( (  into_dash_iter2376 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2363   into_dash_iter2374 (    struct StrConcat_2358  dref1504 ) {
    return ( (struct StrConcatIter_2363) { .f_left = ( (  chars2375 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2363   chars2373 (    struct StrConcat_2358  self1515 ) {
    return ( (  into_dash_iter2374 ) ( (  self1515 ) ) );
}

static  enum Unit_8   print2357 (    struct StrConcat_2358  s2579 ) {
    ( (  for_dash_each2362 ) ( ( (  chars2373 ) ( (  s2579 ) ) ) ,  (  printf_dash_char241 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg_dash_rgb2356 (    struct RGB_194  c2673 ) {
    ( (  print2357 ) ( ( ( StrConcat_2358_StrConcat ) ( ( ( StrConcat_2359_StrConcat ) ( ( ( StrConcat_2360_StrConcat ) ( ( ( StrConcat_2361_StrConcat ) ( ( ( StrConcat_2327_StrConcat ) ( ( ( StrConcat_2328_StrConcat ) ( ( (  from_dash_string257 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2673 ) .f_r ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2673 ) .f_g ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2673 ) .f_b ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2321 (    struct Color_191  c2694 ) {
    struct Color_191  dref2695 = (  c2694 );
    if ( dref2695.tag == Color_191_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2322 ) ( ) );
    }
    else {
        if ( dref2695.tag == Color_191_Color8_t ) {
            ( (  set_dash_fg82323 ) ( ( dref2695 .stuff .Color_191_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2695.tag == Color_191_Color16_t ) {
                ( (  set_dash_fg162324 ) ( ( dref2695 .stuff .Color_191_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2695.tag == Color_191_Color256_t ) {
                    ( (  set_dash_fg2562325 ) ( ( dref2695 .stuff .Color_191_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2695.tag == Color_191_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2356 ) ( ( dref2695 .stuff .Color_191_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_default_dash_bg2382 (  ) {
    ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg82383 (    enum Color8_192  color2640 ) {
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

static  enum Unit_8   set_dash_bg162384 (    enum Color16_193  color2644 ) {
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

static  enum Unit_8   set_dash_bg2562385 (    uint8_t  color2653 ) {
    ( (  print2326 ) ( ( ( StrConcat_2327_StrConcat ) ( ( ( StrConcat_2328_StrConcat ) ( ( (  from_dash_string257 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2653 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg_dash_rgb2386 (    struct RGB_194  c2676 ) {
    ( (  print2357 ) ( ( ( StrConcat_2358_StrConcat ) ( ( ( StrConcat_2359_StrConcat ) ( ( ( StrConcat_2360_StrConcat ) ( ( ( StrConcat_2361_StrConcat ) ( ( ( StrConcat_2327_StrConcat ) ( ( ( StrConcat_2328_StrConcat ) ( ( (  from_dash_string257 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2676 ) .f_r ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2676 ) .f_g ) ) ) ,  ( (  from_dash_charlike258 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2676 ) .f_b ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2381 (    struct Color_191  c2702 ) {
    struct Color_191  dref2703 = (  c2702 );
    if ( dref2703.tag == Color_191_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2382 ) ( ) );
    }
    else {
        if ( dref2703.tag == Color_191_Color8_t ) {
            ( (  set_dash_bg82383 ) ( ( dref2703 .stuff .Color_191_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2703.tag == Color_191_Color16_t ) {
                ( (  set_dash_bg162384 ) ( ( dref2703 .stuff .Color_191_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2703.tag == Color_191_Color256_t ) {
                    ( (  set_dash_bg2562385 ) ( ( dref2703 .stuff .Color_191_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2703.tag == Color_191_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2386 ) ( ( dref2703 .stuff .Color_191_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  uint32_t   i32_dash_u322387 (    int32_t  x603 ) {
    return ( (uint32_t ) (  x603 ) );
}

static  enum Unit_8   emit_dash_cell2320 (    struct RenderState_2270 *  rs3476 ,    struct Cell_190 *  c3478 ,    uint32_t  x3480 ,    uint32_t  y3482 ) {
    if ( ( ( !  eq452 ( (  x3480 ) , ( ( * (  rs3476 ) ) .f_x ) ) ) || ( !  eq452 ( (  y3482 ) , ( ( * (  rs3476 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to2272 ) ( (  x3480 ) ,  (  y3482 ) ) );
        (*  rs3476 ) .f_x = (  x3480 );
        (*  rs3476 ) .f_y = (  y3482 );
    }
    struct Char_65  char3483 = ( ( * (  c3478 ) ) .f_c );
    struct Color_191  bg3484 = ( ( * (  c3478 ) ) .f_bg );
    if ( (  eq365 ( ( ( * (  c3478 ) ) .f_char_dash_width ) , (  op_dash_neg683 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        char3483 = ( (  from_dash_charlike258 ) ( ( " " ) ,  ( 1 ) ) );
        bg3484 = ( ( Color_191_Color8 ) ( ( Color8_192_Red8 ) ) );
    }
    if ( ( !  eq2309 ( ( ( * (  rs3476 ) ) .f_fg ) , ( ( * (  c3478 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2321 ) ( ( ( * (  c3478 ) ) .f_fg ) ) );
        (*  rs3476 ) .f_fg = ( ( * (  c3478 ) ) .f_fg );
    }
    if ( ( !  eq2309 ( ( ( * (  rs3476 ) ) .f_bg ) , (  bg3484 ) ) ) ) {
        ( (  set_dash_bg2381 ) ( (  bg3484 ) ) );
        (*  rs3476 ) .f_bg = (  bg3484 );
    }
    ( (  print_dash_str240 ) ( (  char3483 ) ) );
    uint32_t  char_dash_width3485 = ( (  i32_dash_u322387 ) ( ( (  max1004 ) ( ( ( * (  c3478 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) ) ) );
    (*  rs3476 ) .f_x = (  op_dash_add824 ( ( ( * (  rs3476 ) ) .f_x ) , (  char_dash_width3485 ) ) );
    return ( Unit_8_Unit );
}

struct Zip_2390 {
    struct SliceIter_2292  f_left_dash_it;
    struct FromIter_303  f_right_dash_it;
};

struct env2391 {
    ;
    struct Slice_189  dest1854;
    ;
};

struct Tuple2_2393 {
    struct Cell_190  field0;
    int32_t  field1;
};

static struct Tuple2_2393 Tuple2_2393_Tuple2 (  struct Cell_190  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2393 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2392 {
    enum Unit_8  (*fun) (  struct env2391*  ,    struct Tuple2_2393  );
    struct env2391 env;
};

static  struct Zip_2390   into_dash_iter2395 (    struct Zip_2390  self911 ) {
    return (  self911 );
}

struct Maybe_2396 {
    enum {
        Maybe_2396_None_t,
        Maybe_2396_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2393  field0;
        } Maybe_2396_Just_s;
    } stuff;
};

static struct Maybe_2396 Maybe_2396_Just (  struct Tuple2_2393  field0 ) {
    return ( struct Maybe_2396 ) { .tag = Maybe_2396_Just_t, .stuff = { .Maybe_2396_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2396   next2397 (    struct Zip_2390 *  self914 ) {
    struct Zip_2390  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_743  dref916 = ( (  next2300 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_743_None_t ) {
            return ( (struct Maybe_2396) { .tag = Maybe_2396_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_743_Just_t ) {
                struct Maybe_309  dref918 = ( (  next310 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_309_None_t ) {
                    return ( (struct Maybe_2396) { .tag = Maybe_2396_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_309_Just_t ) {
                        ( (  next2300 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next310 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2396_Just ) ( ( ( Tuple2_2393_Tuple2 ) ( ( dref916 .stuff .Maybe_743_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_309_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2389 (    struct Zip_2390  iterable1074 ,   struct envunion2392  fun1076 ) {
    struct Zip_2390  temp2394 = ( (  into_dash_iter2395 ) ( (  iterable1074 ) ) );
    struct Zip_2390 *  it1077 = ( &temp2394 );
    while ( ( true ) ) {
        struct Maybe_2396  dref1078 = ( (  next2397 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_2396_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_2396_Just_t ) {
                struct envunion2392  temp2398 = (  fun1076 );
                ( temp2398.fun ( &temp2398.env ,  ( dref1078 .stuff .Maybe_2396_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_2390   zip2399 (    struct Slice_189  left922 ,    struct FromIter_303  right924 ) {
    struct SliceIter_2292  left_dash_it925 = ( (  into_dash_iter2306 ) ( (  left922 ) ) );
    struct FromIter_303  right_dash_it926 = ( (  into_dash_iter315 ) ( (  right924 ) ) );
    return ( (struct Zip_2390) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_8   lam2400 (   struct env2391* env ,    struct Tuple2_2393  dref1855 ) {
    return ( (  set736 ) ( ( env->dest1854 ) ,  ( (  i32_dash_size299 ) ( ( dref1855 .field1 ) ) ) ,  ( dref1855 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to2388 (    struct Slice_189  src1852 ,    struct Slice_189  dest1854 ) {
    if ( (  cmp221 ( ( (  src1852 ) .f_count ) , ( (  dest1854 ) .f_count ) ) == 2 ) ) {
        ( (  panic499 ) ( ( ( StrConcat_500_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_74_StrConcat ) ( ( ( StrConcat_75_StrConcat ) ( ( (  from_dash_string257 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1852 ) .f_count ) ) ) ,  ( (  from_dash_string257 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1854 ) .f_count ) ) ) ,  ( (  from_dash_string257 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2391 envinst2391 = {
        .dest1854 =  dest1854 ,
    };
    ( (  for_dash_each2389 ) ( ( (  zip2399 ) ( (  src1852 ) ,  ( (  from316 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2392){ .fun = (  enum Unit_8  (*) (  struct env2391*  ,    struct Tuple2_2393  ) )lam2400 , .env =  envinst2391 } ) ) );
    return ( Unit_8_Unit );
}

static  uint32_t   render_dash_screen2269 (    struct Screen_188 *  screen3488 ) {
    int32_t  w3489 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3488 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3490 = ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen3488 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_2270  temp2271 = ( (struct RenderState_2270) { .f_x = (  from_dash_integral253 ( 0 ) ) , .f_y = (  from_dash_integral253 ( 0 ) ) , .f_fg = ( (struct Color_191) { .tag = Color_191_ColorDefault_t } ) , .f_bg = ( (struct Color_191) { .tag = Color_191_ColorDefault_t } ) , .f_changes = (  from_dash_integral253 ( 0 ) ) } );
    struct RenderState_2270 *  rs3491 = ( &temp2271 );
    ( (  move_dash_cursor_dash_to2272 ) ( (  from_dash_integral253 ( 0 ) ) ,  (  from_dash_integral253 ( 0 ) ) ) );
    struct RangeIter_729  temp2287 =  into_dash_iter731 ( ( (  to734 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub852 ( (  h3490 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_309  __cond2288 =  next732 (&temp2287);
        if (  __cond2288 .tag == 0 ) {
            break;
        }
        int32_t  y3493 =  __cond2288 .stuff .Maybe_309_Just_s .field0;
        int32_t  x_dash_v3494 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp362 ( (  x_dash_v3494 ) , (  w3489 ) ) == 0 ) ) {
            size_t  i3495 = ( (  i32_dash_size299 ) ( (  op_dash_add311 ( (  op_dash_mul1434 ( (  y3493 ) , (  w3489 ) ) ) , (  x_dash_v3494 ) ) ) ) );
            struct Cell_190 *  cur3496 = ( (  get_dash_ptr737 ) ( ( ( * (  screen3488 ) ) .f_current ) ,  (  i3495 ) ) );
            int32_t  char_dash_width3497 = ( (  max1004 ) ( ( ( * (  cur3496 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            struct Slice_189  curs3498 = ( (  subslice2289 ) ( ( ( * (  screen3488 ) ) .f_current ) ,  (  i3495 ) ,  (  op_dash_add269 ( (  i3495 ) , ( (  i32_dash_size299 ) ( (  char_dash_width3497 ) ) ) ) ) ) );
            struct Slice_189  prevs3499 = ( (  subslice2289 ) ( ( ( * (  screen3488 ) ) .f_previous ) ,  (  i3495 ) ,  (  op_dash_add269 ( (  i3495 ) , ( (  i32_dash_size299 ) ( (  char_dash_width3497 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3488 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any2290 ) ( ( (  zip2305 ) ( (  curs3498 ) ,  (  prevs3499 ) ) ) ,  (  lam2307 ) ) ) ) ) {
                (*  rs3491 ) .f_changes = (  op_dash_add824 ( ( ( * (  rs3491 ) ) .f_changes ) , (  from_dash_integral253 ( 1 ) ) ) );
                ( (  emit_dash_cell2320 ) ( (  rs3491 ) ,  (  cur3496 ) ,  ( (  i32_dash_u322387 ) ( (  x_dash_v3494 ) ) ) ,  ( (  i32_dash_u322387 ) ( (  y3493 ) ) ) ) );
                ( (  copy_dash_to2388 ) ( (  curs3498 ) ,  (  prevs3499 ) ) );
            }
            x_dash_v3494 = (  op_dash_add311 ( (  x_dash_v3494 ) , (  char_dash_width3497 ) ) );
        }
    }
    (*  screen3488 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors657 ) ( ) );
    ( (  flush_dash_stdout660 ) ( ) );
    return ( ( * (  rs3491 ) ) .f_changes );
}

static  void *   cast_dash_ptr2407 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of2408 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed2405 (  ) {
    struct timespec *  temp2406;
    struct timespec *  x570 = (  temp2406 );
    ( ( memset ) ( ( (  cast_dash_ptr2407 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of2408 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct timespec *   null_dash_ptr2404 (  ) {
    return ( (  zeroed2405 ) ( ) );
}

static  enum Unit_8   sync2401 (    struct Tui_81 *  tui3359 ) {
    if ( (  eq452 ( ( ( * (  tui3359 ) ) .f_target_dash_fps ) , (  from_dash_integral253 ( 0 ) ) ) ) ) {
        return ( Unit_8_Unit );
    }
    int64_t  frame_dash_ns3360 = (  op_dash_div929 ( (  from_dash_integral348 ( 1000000000 ) ) , ( (  size_dash_i64298 ) ( ( (  u32_dash_size715 ) ( ( ( * (  tui3359 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2402 = ( (  undefined696 ) ( ) );
    struct timespec *  now3361 = ( &temp2402 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic698 ) ( ) ) ,  (  now3361 ) ) );
    int64_t  elapsed_dash_ns3362 = (  op_dash_add450 ( (  op_dash_mul267 ( (  op_dash_sub931 ( ( ( * (  now3361 ) ) .tv_sec ) , ( ( ( * (  tui3359 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral348 ( 1000000000 ) ) ) ) , (  op_dash_sub931 ( ( ( * (  now3361 ) ) .tv_nsec ) , ( ( ( * (  tui3359 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3363 = (  op_dash_sub931 ( (  frame_dash_ns3360 ) , (  elapsed_dash_ns3362 ) ) );
    if ( (  cmp949 ( (  sleep_dash_ns3363 ) , (  from_dash_integral348 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2403 = ( (struct timespec) { .tv_sec = (  from_dash_integral348 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3363 ) } );
        struct timespec *  ts3364 = ( &temp2403 );
        ( ( nanosleep ) ( (  ts3364 ) ,  ( (  null_dash_ptr2404 ) ( ) ) ) );
    }
    struct timespec  temp2409 = ( (  undefined696 ) ( ) );
    struct timespec *  last_dash_sync3365 = ( &temp2409 );
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

static  void *   cast_dash_ptr2412 (    struct Cell_190 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free2411 (    enum CAllocator_10  dref1960 ,    struct Slice_189  slice1962 ) {
    if (!(  dref1960 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr2412 ) ( ( (  slice1962 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_screen2410 (    struct Screen_188 *  screen3464 ) {
    enum CAllocator_10  al3465 = ( ( * (  screen3464 ) ) .f_al );
    ( (  free2411 ) ( (  al3465 ) ,  ( ( * (  screen3464 ) ) .f_current ) ) );
    ( (  free2411 ) ( (  al3465 ) ,  ( ( * (  screen3464 ) ) .f_previous ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_mouse2414 (  ) {
    ( (  print_dash_str232 ) ( ( (  from_dash_string257 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   show_dash_cursor2415 (  ) {
    ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_cursor_dash_position2416 (  ) {
    ( (  print648 ) ( ( (  from_dash_string257 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_raw_dash_mode2417 (    struct Termios_83 *  og_dash_termios3339 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno586 ) ( ) ) ,  ( (  tcsa_dash_flush646 ) ( ) ) ,  ( (  cast_dash_ptr587 ) ( (  og_dash_termios3339 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   deinit2413 (    struct Tui_81 *  tui3369 ) {
    ( (  disable_dash_mouse2414 ) ( ) );
    ( (  show_dash_cursor2415 ) ( ) );
    ( (  reset_dash_colors657 ) ( ) );
    ( (  clear_dash_screen658 ) ( ) );
    ( (  reset_dash_cursor_dash_position2416 ) ( ) );
    ( (  disable_dash_raw_dash_mode2417 ) ( ( & ( ( * (  tui3369 ) ) .f_orig_dash_termios ) ) ) );
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
        .envinst117 = envinst117 ,
        .envinst135 = envinst135 ,
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
        .envinst148 = envinst148 ,
        .envinst159 = envinst159 ,
        .envinst126 = envinst126 ,
        .envinst150 = envinst150 ,
        .envinst145 = envinst145 ,
        .envinst131 = envinst131 ,
        .envinst133 = envinst133 ,
        .envinst139 = envinst139 ,
        .envinst135 = envinst135 ,
        .envinst155 = envinst155 ,
    };
    struct env177 envinst177 = {
        .envinst161 = envinst161 ,
        .envinst60 = envinst60 ,
        .envinst148 = envinst148 ,
        .envinst67 = envinst67 ,
        .envinst126 = envinst126 ,
        .envinst166 = envinst166 ,
        .envinst129 = envinst129 ,
    };
    struct env186 envinst186 = {
        .envinst123 = envinst123 ,
    };
    enum CAllocator_10  al4426 = ( (  idc196 ) ( ) );
    struct envunion199  temp198 = ( (struct envunion199){ .fun = (  struct TextBuf_99  (*) (  struct env87*  ,    enum CAllocator_10  ,    struct Pos_26  ) )mk200 , .env =  envinst87 } );
    struct TextBuf_99  temp197 = ( temp198.fun ( &temp198.env ,  (  al4426 ) ,  ( (  mk343 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ) );
    struct TextBuf_99 *  tb4427 = ( &temp197 );
    struct Slice_344  args4430 = ( (  get345 ) ( ) );
    if ( (  cmp221 ( ( (  args4430 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        const char*  fname4431 = (  elem_dash_get350 ( (  args4430 ) , (  from_dash_integral0 ( 0 ) ) ) );
        struct envunion358  temp357 = ( (struct envunion358){ .fun = (  enum Unit_8  (*) (  struct env93*  ,    struct TextBuf_99 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action359 , .env =  envinst93 } );
        ( temp357.fun ( &temp357.env ,  (  tb4427 ) ,  ( (  mk343 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( (  mk343 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( (  read_dash_contents551 ) ( (  fname4431 ) ,  (  al4426 ) ) ) ) );
    }
    struct Editor_163  temp576 = ( (struct Editor_163) { .f_running = ( true ) , .f_al = (  al4426 ) , .f_pane = ( (  mk577 ) ( (  al4426 ) ,  (  tb4427 ) ) ) , .f_clipboard = ( (struct Maybe_164) { .tag = Maybe_164_None_t } ) , .f_search_dash_term = ( (struct Maybe_164) { .tag = Maybe_164_None_t } ) , .f_mode = ( (struct EditorMode_165) { .tag = EditorMode_165_Normal_t } ) , .f_msg = ( (struct Maybe_164) { .tag = Maybe_164_None_t } ) } );
    struct Editor_163 *  ed4432 = ( &temp576 );
    struct envunion580  temp579 = ( (struct envunion580){ .fun = (  struct Tui_81  (*) (  struct env77*  ) )mk581 , .env =  envinst77 } );
    struct Tui_81  temp578 = ( temp579.fun ( &temp579.env ) );
    struct Tui_81 *  tui4433 = ( &temp578 );
    struct Screen_188  temp708 = ( (  mk_dash_screen709 ) ( (  tui4433 ) ,  (  al4426 ) ) );
    struct Screen_188 *  screen4434 = ( &temp708 );
    uint32_t  last_dash_redraw_dash_changes4435 = (  from_dash_integral253 ( 0 ) );
    while ( ( ( * (  ed4432 ) ) .f_running ) ) {
        struct env759 envinst759 = {
            .tui4433 =  tui4433 ,
            .envinst79 = envinst79 ,
        };
        struct FunIter_758  temp757 =  into_dash_iter766 ( ( (  from_dash_function767 ) ( ( (struct envunion765){ .fun = (  struct Maybe_761  (*) (  struct env759*  ) )lam768 , .env =  envinst759 } ) ) ) );
        while (true) {
            struct Maybe_761  __cond969 =  next970 (&temp757);
            if (  __cond969 .tag == 0 ) {
                break;
            }
            struct InputEvent_762  ev4437 =  __cond969 .stuff .Maybe_761_Just_s .field0;
            struct InputEvent_762  dref4438 = (  ev4437 );
            if ( dref4438.tag == InputEvent_762_Key_t ) {
                ( (  reset_dash_msg972 ) ( (  ed4432 ) ) );
                struct envunion980  temp979 = ( (struct envunion980){ .fun = (  enum Unit_8  (*) (  struct env177*  ,    struct Editor_163 *  ,    struct Key_184  ) )handle_dash_key981 , .env =  envinst177 } );
                ( temp979.fun ( &temp979.env ,  (  ed4432 ) ,  ( dref4438 .stuff .InputEvent_762_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1639  temp1638 = ( (struct envunion1639){ .fun = (  bool  (*) (  struct env85*  ,    struct Screen_188 *  ) )resize_dash_screen_dash_if_dash_needed1640 , .env =  envinst85 } );
        ( temp1638.fun ( &temp1638.env ,  (  screen4434 ) ) );
        if ( ( (  should_dash_redraw1642 ) ( (  tui4433 ) ) ) ) {
            (*  screen4434 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1643 ) ( (  screen4434 ) ) );
            ( (  set_dash_screen_dash_fg1652 ) ( (  screen4434 ) ,  ( (struct Color_191) { .tag = Color_191_ColorDefault_t } ) ) );
            ( (  set_dash_screen_dash_bg1653 ) ( (  screen4434 ) ,  ( (struct Color_191) { .tag = Color_191_ColorDefault_t } ) ) );
            struct envunion1655  temp1654 = ( (struct envunion1655){ .fun = (  enum Unit_8  (*) (  struct env186*  ,    struct Screen_188 *  ,    struct Editor_163 *  ) )render_dash_editor1656 , .env =  envinst186 } );
            ( temp1654.fun ( &temp1654.env ,  (  screen4434 ) ,  (  ed4432 ) ) );
            ( (  draw_dash_str2240 ) ( (  screen4434 ) ,  ( ( StrConcat_2241_StrConcat ) ( ( ( StrConcat_2242_StrConcat ) ( ( (  from_dash_string257 ) ( ( "REDRAWS[" ) ,  ( 8 ) ) ) ,  (  last_dash_redraw_dash_changes4435 ) ) ) ,  ( (  from_dash_charlike258 ) ( ( "]" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub852 ( ( (  u32_dash_i321657 ) ( ( ( * ( ( * (  screen4434 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
            last_dash_redraw_dash_changes4435 = ( (  render_dash_screen2269 ) ( (  screen4434 ) ) );
        }
        ( (  sync2401 ) ( (  tui4433 ) ) );
    }
    ( (  free_dash_screen2410 ) ( (  screen4434 ) ) );
    ( (  deinit2413 ) ( (  tui4433 ) ) );
}
