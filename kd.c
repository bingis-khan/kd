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
static  size_t   from_dash_integral0 (    size_t  x68 ) {
    return (  x68 );
}

struct env1 {
    ;
    ;
    ;
    size_t  growth_dash_factor2448;
    ;
    ;
    ;
    size_t  starting_dash_size2447;
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
    size_t  growth_dash_factor2448;
    ;
    ;
    ;
    size_t  starting_dash_size2447;
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
    size_t  growth_dash_factor2448;
    ;
    ;
    ;
    size_t  starting_dash_size2447;
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
    size_t  growth_dash_factor2448;
    ;
    ;
    ;
    size_t  starting_dash_size2447;
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
    size_t  growth_dash_factor2448;
    ;
    ;
    ;
    size_t  starting_dash_size2447;
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
    struct env1 envinst1;
    ;
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
    struct env2 envinst2;
    ;
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
    struct env3 envinst3;
    ;
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
    struct env4 envinst4;
    ;
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
    struct env5 envinst5;
    ;
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
    ;
    ;
    ;
    ;
    ;
    struct env6 envinst6;
    ;
    struct env1 envinst1;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env40 {
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor2449;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor2449;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    struct env40 envinst40;
    ;
    ;
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
    ;
};

struct envunion47 {
    enum Unit_8  (*fun) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  );
    struct env6 env;
};

struct env46 {
    ;
    ;
    ;
    ;
    ;
    struct env6 envinst6;
};

struct envunion49 {
    enum Unit_8  (*fun) (  struct env19*  ,    struct List_13 *  ,    uint8_t  );
    struct env19 env;
};

struct env48 {
    ;
    ;
    ;
    ;
    ;
    struct env19 envinst19;
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
    ;
    ;
    ;
    struct env46 envinst46;
};

struct envunion54 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct env53 {
    ;
    ;
    ;
    ;
    ;
    struct env48 envinst48;
};

static  int32_t   from_dash_integral56 (    size_t  x50 ) {
    return ( (int32_t ) (  x50 ) );
}

static  int32_t   lc_dash_ctype55 (  ) {
    return (  from_dash_integral56 ( 0 ) );
}

static  const char*   from_dash_string57 (    uint8_t *  ptr86 ,    size_t  dref87 ) {
    return ( ( (const char* ) (  ptr86 ) ) );
}

struct envunion59 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct env58 {
    ;
    ;
    struct env48 envinst48;
};

struct StrBuilder_62 {
    struct List_13  f_chars;
};

struct envunion61 {
    enum Unit_8  (*fun) (  struct env58*  ,    struct StrBuilder_62 *  ,    struct Slice_14  );
    struct env58 env;
};

struct env60 {
    ;
    struct env58 envinst58;
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
    struct env60 envinst60;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env67 {
    ;
    struct env60 envinst60;
    ;
    ;
    ;
    ;
    ;
};

struct env68 {
    ;
    struct env60 envinst60;
    ;
    ;
    ;
    ;
    ;
};

struct StrConcat_71 {
    struct StrView_27  field0;
    struct Char_65  field1;
};

static struct StrConcat_71 StrConcat_71_StrConcat (  struct StrView_27  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_71 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion70 {
    enum Unit_8  (*fun) (  struct env68*  ,    struct StrBuilder_62 *  ,    struct StrConcat_71  );
    struct env68 env;
};

struct env69 {
    struct env68 envinst68;
    ;
    ;
    ;
    ;
    ;
};

struct Maybe_74 {
    enum {
        Maybe_74_None_t,
        Maybe_74_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_74_Just_s;
    } stuff;
};

static struct Maybe_74 Maybe_74_Just (  uint8_t  field0 ) {
    return ( struct Maybe_74 ) { .tag = Maybe_74_Just_t, .stuff = { .Maybe_74_Just_s = { .field0 = field0 } } };
};

struct envunion73 {
    struct Maybe_74  (*fun) (  struct env44*  ,    struct List_13 *  );
    struct env44 env;
};

struct env72 {
    struct env44 envinst44;
    ;
    ;
};

struct envunion76 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

struct StrConcat_79 {
    struct StrView_27  field0;
    size_t  field1;
};

static struct StrConcat_79 StrConcat_79_StrConcat (  struct StrView_27  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_79 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_78 {
    struct StrConcat_79  field0;
    struct StrView_27  field1;
};

static struct StrConcat_78 StrConcat_78_StrConcat (  struct StrConcat_79  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_78 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion77 {
    enum Unit_8  (*fun) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrConcat_78  );
    struct env63 env;
};

struct env75 {
    ;
    struct env60 envinst60;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env63 envinst63;
    ;
    ;
};

struct envunion81 {
    enum Unit_8  (*fun) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrView_27  );
    struct env66 env;
};

struct env80 {
    struct env60 envinst60;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env66 envinst66;
    ;
};

struct Maybe_85 {
    enum {
        Maybe_85_None_t,
        Maybe_85_Just_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } Maybe_85_Just_s;
    } stuff;
};

static struct Maybe_85 Maybe_85_Just (  struct StrView_27  field0 ) {
    return ( struct Maybe_85 ) { .tag = Maybe_85_Just_t, .stuff = { .Maybe_85_Just_s = { .field0 = field0 } } };
};

struct StrConcat_84 {
    struct StrView_27  field0;
    struct Maybe_85  field1;
};

static struct StrConcat_84 StrConcat_84_StrConcat (  struct StrView_27  field0 ,  struct Maybe_85  field1 ) {
    return ( struct StrConcat_84 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion83 {
    enum Unit_8  (*fun) (  struct env67*  ,    struct StrBuilder_62 *  ,    struct StrConcat_84  );
    struct env67 env;
};

struct env82 {
    ;
    struct env60 envinst60;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env67 envinst67;
    ;
    ;
};

struct Array_88 {
    uint8_t _arr [32];
};

struct Termios_87 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_88  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

struct anon_86 {
    struct Termios_87  f_orig_dash_termios;
    bool  f_should_dash_resize;
};

static  struct Termios_87   undefined90 (  ) {
    struct Termios_87  temp91;
    return (  temp91 );
}

struct env92 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct anon_86 *  tui_dash_global_dash_state3572;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env93 {
    ;
    ;
    struct anon_86 *  tui_dash_global_dash_state3572;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env94 {
    struct anon_86 *  tui_dash_global_dash_state3572;
    ;
    ;
    ;
};

enum ColorPalette_98 {
    ColorPalette_98_Palette8,
    ColorPalette_98_Palette16,
    ColorPalette_98_Palette256,
    ColorPalette_98_PaletteRGB,
};

struct Tui_97 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_98  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    bool  f_should_dash_redraw;
};

struct envunion96 {
    bool  (*fun) (  struct env94*  ,    struct Tui_97 *  );
    struct env94 env;
};

struct env95 {
    struct env94 envinst94;
    ;
};

struct envunion100 {
    bool  (*fun) (  struct env94*  ,    struct Tui_97 *  );
    struct env94 env;
};

struct env99 {
    ;
    ;
    ;
    struct env94 envinst94;
    ;
    ;
};

struct envunion102 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
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
    ;
    ;
    ;
    ;
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
};

struct envunion104 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct env103 {
    ;
    ;
    ;
    ;
    ;
    struct env35 envinst35;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion106 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct env105 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
};

struct envunion108 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct env107 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
};

struct envunion110 {
    struct List_13  (*fun) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  );
    struct env53 env;
};

struct envunion111 {
    enum Unit_8  (*fun) (  struct env37*  ,    struct List_9 *  ,    size_t  ,    struct Line_12  );
    struct env37 env;
};

struct envunion112 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
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
    ;
    ;
    struct env53 envinst53;
    ;
    struct env37 envinst37;
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
};

struct envunion114 {
    enum Unit_8  (*fun) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  );
    struct env6 env;
};

struct envunion115 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

enum ChangesetInputType_119 {
    ChangesetInputType_119_NoChangeset,
    ChangesetInputType_119_InputChangeset,
    ChangesetInputType_119_CustomChangeset,
};

struct Actions_118 {
    struct List_30  f_list;
    size_t  f_cur;
    enum ChangesetInputType_119  f_input_dash_changeset;
};

enum Filetype_120 {
    Filetype_120_Text,
    Filetype_120_KC,
    Filetype_120_Markdown,
    Filetype_120_GCode,
    Filetype_120_Brainfuck,
};

struct TextBuf_117 {
    enum CAllocator_10  f_al;
    struct List_9  f_buf;
    struct Actions_118  f_actions;
    struct Maybe_85  f_filename;
    enum Filetype_120  f_filetype;
};

struct envunion116 {
    int32_t  (*fun) (  struct env109*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env109 env;
};

struct envunion121 {
    enum Unit_8  (*fun) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  );
    struct env40 env;
};

struct envunion122 {
    enum Unit_8  (*fun) (  struct env41*  ,    struct List_9 *  ,    size_t  ,    size_t  );
    struct env41 env;
};

struct env113 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env6 envinst6;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    struct env109 envinst109;
    ;
    struct env40 envinst40;
    struct env41 envinst41;
    ;
    ;
    ;
};

struct envunion124 {
    enum Unit_8  (*fun) (  struct env69*  ,    struct StrBuilder_62 *  ,    struct StrView_27  );
    struct env69 env;
};

struct env123 {
    ;
    ;
    ;
    ;
    ;
    struct env69 envinst69;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct envunion126 {
    struct List_9  (*fun) (  struct env50*  ,    struct Array_52  ,    enum CAllocator_10  );
    struct env50 env;
};

struct env125 {
    ;
    ;
    struct env50 envinst50;
    ;
    ;
    ;
    ;
};

struct envunion128 {
    enum Unit_8  (*fun) (  struct env113*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
    struct env113 env;
};

struct envunion129 {
    struct TextBuf_117  (*fun) (  struct env125*  ,    enum CAllocator_10  );
    struct env125 env;
};

struct env127 {
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
};

struct envunion131 {
    enum Unit_8  (*fun) (  struct env113*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
    struct env113 env;
};

struct env130 {
    ;
    ;
    ;
    ;
    struct env113 envinst113;
};

struct envunion133 {
    enum Unit_8  (*fun) (  struct env113*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
    struct env113 env;
};

struct env132 {
    ;
    ;
    ;
    ;
    struct env113 envinst113;
};

struct envunion135 {
    struct Pos_26  (*fun) (  struct env130*  ,    struct TextBuf_117 *  ,    struct Action_25  );
    struct env130 env;
};

struct env134 {
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
};

struct envunion137 {
    struct Pos_26  (*fun) (  struct env132*  ,    struct TextBuf_117 *  ,    struct Action_25  );
    struct env132 env;
};

struct env136 {
    ;
    ;
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
    ;
};

struct envunion139 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct env138 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
};

struct envunion141 {
    struct Pos_26  (*fun) (  struct env132*  ,    struct TextBuf_117 *  ,    struct Action_25  );
    struct env132 env;
};

struct envunion142 {
    enum Unit_8  (*fun) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  );
    struct env21 env;
};

struct envunion143 {
    enum Unit_8  (*fun) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  );
    struct env28 env;
};

struct envunion144 {
    struct StrView_27  (*fun) (  struct env138*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  );
    struct env138 env;
};

struct env140 {
    ;
    struct env132 envinst132;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    ;
    struct env138 envinst138;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion146 {
    enum Unit_8  (*fun) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  );
    struct env28 env;
};

struct env145 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env28 envinst28;
    ;
    ;
    ;
    ;
    ;
};

struct envunion148 {
    enum Unit_8  (*fun) (  struct env103*  ,    struct List_15 *  ,    struct StrView_27  );
    struct env103 env;
};

struct envunion149 {
    enum Unit_8  (*fun) (  struct env101*  ,    struct List_15 *  ,    struct StrView_27  );
    struct env101 env;
};

struct envunion150 {
    enum Unit_8  (*fun) (  struct env107*  ,    struct List_15 *  ,    struct StrView_27  );
    struct env107 env;
};

struct envunion151 {
    enum Unit_8  (*fun) (  struct env105*  ,    struct List_15 *  ,    struct StrView_27  );
    struct env105 env;
};

struct env147 {
    ;
    ;
    ;
    struct env103 envinst103;
    ;
    struct env101 envinst101;
    ;
    ;
    struct env107 envinst107;
    struct env105 envinst105;
};

struct envunion153 {
    enum Unit_8  (*fun) (  struct env147*  ,    struct TextBuf_117 *  ,    struct Line_12 *  );
    struct env147 env;
};

struct env152 {
    ;
    ;
    ;
    ;
    struct env147 envinst147;
    ;
    ;
    ;
    ;
    ;
    ;
};

enum Color8_155 {
    Color8_155_Black8,
    Color8_155_Red8,
    Color8_155_Green8,
    Color8_155_Yellow8,
    Color8_155_Blue8,
    Color8_155_Magenta8,
    Color8_155_Cyan8,
    Color8_155_White8,
};

enum Color16_156 {
    Color16_156_Black16,
    Color16_156_Red16,
    Color16_156_Green16,
    Color16_156_Yellow16,
    Color16_156_Blue16,
    Color16_156_Magenta16,
    Color16_156_Cyan16,
    Color16_156_White16,
    Color16_156_BrightBlack16,
    Color16_156_BrightRed16,
    Color16_156_BrightGreen16,
    Color16_156_BrightYellow16,
    Color16_156_BrightBlue16,
    Color16_156_BrightMagenta16,
    Color16_156_BrightCyan16,
    Color16_156_BrightWhite16,
};

struct RGB_157 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_154 {
    enum {
        Color_154_ColorDefault_t,
        Color_154_Color8_t,
        Color_154_Color16_t,
        Color_154_Color256_t,
        Color_154_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_155  field0;
        } Color_154_Color8_s;
        struct {
            enum Color16_156  field0;
        } Color_154_Color16_s;
        struct {
            uint8_t  field0;
        } Color_154_Color256_s;
        struct {
            struct RGB_157  field0;
        } Color_154_ColorRGB_s;
    } stuff;
};

static struct Color_154 Color_154_Color8 (  enum Color8_155  field0 ) {
    return ( struct Color_154 ) { .tag = Color_154_Color8_t, .stuff = { .Color_154_Color8_s = { .field0 = field0 } } };
};

static struct Color_154 Color_154_Color16 (  enum Color16_156  field0 ) {
    return ( struct Color_154 ) { .tag = Color_154_Color16_t, .stuff = { .Color_154_Color16_s = { .field0 = field0 } } };
};

static struct Color_154 Color_154_Color256 (  uint8_t  field0 ) {
    return ( struct Color_154 ) { .tag = Color_154_Color256_t, .stuff = { .Color_154_Color256_s = { .field0 = field0 } } };
};

static struct Color_154 Color_154_ColorRGB (  struct RGB_157  field0 ) {
    return ( struct Color_154 ) { .tag = Color_154_ColorRGB_t, .stuff = { .Color_154_ColorRGB_s = { .field0 = field0 } } };
};

static  uint8_t   cast161 (    uint32_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  uint8_t   u32_dash_u8160 (    uint32_t  x741 ) {
    return ( (  cast161 ) ( (  x741 ) ) );
}

static  uint32_t   op_dash_div163 (    uint32_t  l264 ,    uint32_t  r266 ) {
    return ( (  l264 ) / (  r266 ) );
}

struct Range_166 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_166 Range_166_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_166 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env167 {
    uint32_t  base1386;
    ;
};

struct envunion168 {
    uint32_t  (*fun) (  struct env167*  ,    int32_t  ,    uint32_t  );
    struct env167 env;
};

struct RangeIter_169 {
    struct Range_166  field0;
    int32_t  field1;
};

static struct RangeIter_169 RangeIter_169_RangeIter (  struct Range_166  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_169 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_169   into_dash_iter170 (    struct Range_166  dref891 ) {
    return ( ( RangeIter_169_RangeIter ) ( ( ( Range_166_Range ) ( ( dref891 .field0 ) ,  ( dref891 .field1 ) ) ) ,  ( dref891 .field0 ) ) );
}

struct Maybe_171 {
    enum {
        Maybe_171_None_t,
        Maybe_171_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_171_Just_s;
    } stuff;
};

static struct Maybe_171 Maybe_171_Just (  int32_t  field0 ) {
    return ( struct Maybe_171 ) { .tag = Maybe_171_Just_t, .stuff = { .Maybe_171_Just_s = { .field0 = field0 } } };
};

enum Ordering_174 {
    Ordering_174_LT,
    Ordering_174_EQ,
    Ordering_174_GT,
};

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_174   cmp173 (    int32_t  l168 ,    int32_t  r170 ) {
    return ( builtin_int32_tcmp( (  l168 ) , (  r170 ) ) );
}

static  int32_t   op_dash_add175 (    int32_t  l226 ,    int32_t  r228 ) {
    return ( (  l226 ) + (  r228 ) );
}

static  struct Maybe_171   next172 (    struct RangeIter_169 *  self899 ) {
    struct RangeIter_169  dref900 = ( * (  self899 ) );
    if ( true ) {
        if ( (  cmp173 ( ( dref900 .field1 ) , ( dref900 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
        }
        struct Maybe_171  x904 = ( ( Maybe_171_Just ) ( ( dref900 .field1 ) ) );
        (*  self899 ) = ( ( RangeIter_169_RangeIter ) ( ( ( Range_166_Range ) ( ( dref900 .field0 .field0 ) ,  ( dref900 .field0 .field1 ) ) ) ,  (  op_dash_add175 ( ( dref900 .field1 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
        return (  x904 );
    }
}

static  uint32_t   reduce165 (    struct Range_166  iterable1118 ,    uint32_t  base1120 ,   struct envunion168  fun1122 ) {
    uint32_t  x1123 = (  base1120 );
    struct RangeIter_169  it1124 = ( (  into_dash_iter170 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next172 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                struct envunion168  temp176 = (  fun1122 );
                x1123 = ( temp176.fun ( &temp176.env ,  ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp177 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp177);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp178;
    return (  temp178 );
}

static  struct Range_166   to179 (    int32_t  from882 ,    int32_t  to884 ) {
    return ( ( Range_166_Range ) ( (  from882 ) ,  (  to884 ) ) );
}

static  int32_t   op_dash_sub180 (    int32_t  l231 ,    int32_t  r233 ) {
    return ( (  l231 ) - (  r233 ) );
}

static  uint32_t   from_dash_integral181 (    size_t  x53 ) {
    return ( (uint32_t ) (  x53 ) );
}

static  uint32_t   op_dash_mul183 (    uint32_t  l259 ,    uint32_t  r261 ) {
    return ( (  l259 ) * (  r261 ) );
}

static  uint32_t   lam182 (   struct env167* env ,    int32_t  item1390 ,    uint32_t  x1392 ) {
    return (  op_dash_mul183 ( (  x1392 ) , ( env->base1386 ) ) );
}

static  uint32_t   pow164 (    uint32_t  base1386 ,    int32_t  p1388 ) {
    struct env167 envinst167 = {
        .base1386 =  base1386 ,
    };
    return ( (  reduce165 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( (  p1388 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral181 ( 1 ) ) ,  ( (struct envunion168){ .fun = (  uint32_t  (*) (  struct env167*  ,    int32_t  ,    uint32_t  ) )lam182 , .env =  envinst167 } ) ) );
}

static  uint32_t   rshift162 (    uint32_t  x1539 ,    int32_t  am1541 ) {
    return (  op_dash_div163 ( (  x1539 ) , ( (  pow164 ) ( (  from_dash_integral181 ( 2 ) ) ,  (  am1541 ) ) ) ) );
}

static  uint32_t   op_dash_sub185 (    uint32_t  l254 ,    uint32_t  r256 ) {
    return ( (  l254 ) - (  r256 ) );
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_174   cmp186 (    uint32_t  l173 ,    uint32_t  r175 ) {
    return ( builtin_uint32_tcmp( (  l173 ) , (  r175 ) ) );
}

static  uint32_t   op_dash_add187 (    uint32_t  l249 ,    uint32_t  r251 ) {
    return ( (  l249 ) + (  r251 ) );
}

static  uint32_t   mod184 (    uint32_t  l1544 ,    uint32_t  d1546 ) {
    uint32_t  r1547 = (  op_dash_div163 ( (  l1544 ) , (  d1546 ) ) );
    uint32_t  m1548 = (  op_dash_sub185 ( (  l1544 ) , (  op_dash_mul183 ( (  r1547 ) , (  d1546 ) ) ) ) );
    if ( (  cmp186 ( (  m1548 ) , (  from_dash_integral181 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add187 ( (  d1546 ) , (  m1548 ) ) );
    } else {
        return (  m1548 );
    }
}

static  struct RGB_157   rgb_dash_from_dash_hex159 (    uint32_t  n2782 ) {
    return ( (struct RGB_157) { .f_r = ( (  u32_dash_u8160 ) ( ( (  rshift162 ) ( (  n2782 ) ,  (  from_dash_integral56 ( 16 ) ) ) ) ) ) , .f_g = ( (  u32_dash_u8160 ) ( ( (  mod184 ) ( ( (  rshift162 ) ( (  n2782 ) ,  (  from_dash_integral56 ( 8 ) ) ) ) ,  (  from_dash_integral181 ( 256 ) ) ) ) ) ) , .f_b = ( (  u32_dash_u8160 ) ( ( (  mod184 ) ( (  n2782 ) ,  (  from_dash_integral181 ( 256 ) ) ) ) ) ) } );
}

static  struct Color_154   rgb158 (    uint32_t  x4274 ) {
    return ( ( Color_154_ColorRGB ) ( ( (  rgb_dash_from_dash_hex159 ) ( (  x4274 ) ) ) ) );
}

struct Colors_189 {
    struct Color_154  f_fg;
    struct Color_154  f_bg;
};

struct Maybe_192 {
    enum {
        Maybe_192_None_t,
        Maybe_192_Just_t,
    } tag;
    union {
        struct {
            struct Color_154  field0;
        } Maybe_192_Just_s;
    } stuff;
};

static struct Maybe_192 Maybe_192_Just (  struct Color_154  field0 ) {
    return ( struct Maybe_192 ) { .tag = Maybe_192_Just_t, .stuff = { .Maybe_192_Just_s = { .field0 = field0 } } };
};

struct HighlightColors_191 {
    enum HighlightType_18  f_type;
    struct Color_154  f_fg;
    struct Maybe_192  f_bg;
};

struct Slice_190 {
    struct HighlightColors_191 *  f_ptr;
    size_t  f_count;
};

struct Theme_188 {
    struct Colors_189  f_default;
    struct Colors_189  f_cursor;
    struct Colors_189  f_selection;
    struct Colors_189  f_line_dash_num;
    struct Colors_189  f_line_dash_num_dash_hl;
    struct Colors_189  f_overlay;
    struct Slice_190  f_highlights;
};

struct Array_195 {
    struct HighlightColors_191 _arr [13];
};

static  struct HighlightColors_191 *   cast196 (    struct Array_195 *  x395 ) {
    return ( (struct HighlightColors_191 * ) (  x395 ) );
}

static  struct Slice_190   as_dash_slice194 (    struct Array_195 *  arr2052 ) {
    return ( (struct Slice_190) { .f_ptr = ( (  cast196 ) ( (  arr2052 ) ) ) , .f_count = ( (size_t ) ( 13 ) ) } );
}

static  struct Array_195   from_dash_listlike198 (    struct Array_195 *  self369 ) {
    return ( * (  self369 ) );
}

static  struct HighlightColors_191   hlt200 (    enum HighlightType_18  type4268 ,    struct Color_154  fg4270 ) {
    return ( (struct HighlightColors_191) { .f_type = (  type4268 ) , .f_fg = (  fg4270 ) , .f_bg = ( (struct Maybe_192) { .tag = Maybe_192_None_t } ) } );
}

static  void *   cast_dash_ptr209 (    struct HighlightColors_191 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of210 (    struct HighlightColors_191 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct HighlightColors_191 *   zeroed207 (  ) {
    struct HighlightColors_191 *  temp208;
    struct HighlightColors_191 *  x648 = (  temp208 );
    ( ( memset ) ( ( (  cast_dash_ptr209 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of210 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  struct HighlightColors_191 *   null_dash_ptr206 (  ) {
    return ( (  zeroed207 ) ( ) );
}

static  struct Slice_190   empty205 (  ) {
    return ( (struct Slice_190) { .f_ptr = ( (  null_dash_ptr206 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct Tuple2_213 {
    struct StrView_27  field0;
    struct Theme_188 *  field1;
};

static struct Tuple2_213 Tuple2_213_Tuple2 (  struct StrView_27  field0 ,  struct Theme_188 *  field1 ) {
    return ( struct Tuple2_213 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Slice_212 {
    struct Tuple2_213 *  f_ptr;
    size_t  f_count;
};

struct Array_215 {
    struct Tuple2_213 _arr [5];
};

static  struct Tuple2_213 *   cast216 (    struct Array_215 *  x395 ) {
    return ( (struct Tuple2_213 * ) (  x395 ) );
}

static  struct Slice_212   as_dash_slice214 (    struct Array_215 *  arr2052 ) {
    return ( (struct Slice_212) { .f_ptr = ( (  cast216 ) ( (  arr2052 ) ) ) , .f_count = ( (size_t ) ( 5 ) ) } );
}

static  struct Array_215   from_dash_listlike218 (    struct Array_215 *  self369 ) {
    return ( * (  self369 ) );
}

static  struct StrView_27   from_dash_string220 (    uint8_t *  ptr90 ,    size_t  count92 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = (  ptr90 ) , .f_count = (  count92 ) } ) } );
}

struct env221 {
    ;
    ;
    struct Slice_212  all_dash_themes4308;
    ;
    ;
    ;
    ;
};

struct Maybe_224 {
    enum {
        Maybe_224_None_t,
        Maybe_224_Just_t,
    } tag;
    union {
        struct {
            enum HighlightType_18  field0;
        } Maybe_224_Just_s;
    } stuff;
};

static struct Maybe_224 Maybe_224_Just (  enum HighlightType_18  field0 ) {
    return ( struct Maybe_224 ) { .tag = Maybe_224_Just_t, .stuff = { .Maybe_224_Just_s = { .field0 = field0 } } };
};

struct envunion223 {
    struct Maybe_224  (*fun) (  struct env152*  ,    struct TextBuf_117 *  ,    struct Pos_26  );
    struct env152 env;
};

struct env222 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env152 envinst152;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct Maybe_227 {
    enum {
        Maybe_227_None_t,
        Maybe_227_Just_t,
    } tag;
    union {
        struct {
            struct Cursors_33  field0;
        } Maybe_227_Just_s;
    } stuff;
};

static struct Maybe_227 Maybe_227_Just (  struct Cursors_33  field0 ) {
    return ( struct Maybe_227 ) { .tag = Maybe_227_Just_t, .stuff = { .Maybe_227_Just_s = { .field0 = field0 } } };
};

struct envunion226 {
    struct Maybe_227  (*fun) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_227  );
    struct env140 env;
};

struct env225 {
    ;
    ;
    struct env140 envinst140;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion229 {
    struct Maybe_227  (*fun) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_227  );
    struct env140 env;
};

struct env228 {
    ;
    ;
    ;
    struct env140 envinst140;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion231 {
    struct Maybe_227  (*fun) (  struct env134*  ,    struct TextBuf_117 *  );
    struct env134 env;
};

struct env230 {
    struct env134 envinst134;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion233 {
    struct Maybe_227  (*fun) (  struct env136*  ,    struct TextBuf_117 *  );
    struct env136 env;
};

struct env232 {
    struct env136 envinst136;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion235 {
    struct Maybe_227  (*fun) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_227  );
    struct env140 env;
};

struct env234 {
    ;
    ;
    ;
    struct env140 envinst140;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion237 {
    struct Maybe_227  (*fun) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_227  );
    struct env140 env;
};

struct env236 {
    ;
    ;
    ;
    ;
    struct env140 envinst140;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion239 {
    enum Unit_8  (*fun) (  struct env145*  ,    struct TextBuf_117 *  ,    struct Cursors_33  );
    struct env145 env;
};

enum Mode_242 {
    Mode_242_Normal,
    Mode_242_Insert,
    Mode_242_Select,
};

struct ScreenCursorOffset_243 {
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
};

struct Pane_241 {
    struct TextBuf_117 *  f_buf;
    struct Pos_26  f_cursor;
    int32_t  f_vi;
    struct Maybe_34  f_sel;
    enum Mode_242  f_mode;
    struct ScreenCursorOffset_243  f_sc_dash_off;
};

struct envunion240 {
    enum Unit_8  (*fun) (  struct env236*  ,    struct Pane_241 *  ,    int32_t  );
    struct env236 env;
};

struct env238 {
    ;
    ;
    ;
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
    struct env236 envinst236;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion245 {
    struct Maybe_227  (*fun) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_227  );
    struct env140 env;
};

struct envunion246 {
    enum Unit_8  (*fun) (  struct env145*  ,    struct TextBuf_117 *  ,    struct Cursors_33  );
    struct env145 env;
};

struct env244 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env140 envinst140;
    ;
    ;
    ;
    struct env145 envinst145;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion248 {
    enum Unit_8  (*fun) (  struct env236*  ,    struct Pane_241 *  ,    int32_t  );
    struct env236 env;
};

struct env247 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env236 envinst236;
    ;
    ;
    ;
    ;
    ;
};

struct Tuple2_251 {
    struct Pos_26  field0;
    struct Pos_26  field1;
};

static struct Tuple2_251 Tuple2_251_Tuple2 (  struct Pos_26  field0 ,  struct Pos_26  field1 ) {
    return ( struct Tuple2_251 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion250 {
    enum Unit_8  (*fun) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  );
    struct env234 env;
};

struct envunion252 {
    enum Unit_8  (*fun) (  struct env145*  ,    struct TextBuf_117 *  ,    struct Cursors_33  );
    struct env145 env;
};

struct envunion253 {
    enum Unit_8  (*fun) (  struct env225*  ,    struct Pane_241 *  ,    struct StrView_27  );
    struct env225 env;
};

struct env249 {
    ;
    ;
    ;
    ;
    ;
    struct env234 envinst234;
    ;
    ;
    ;
    ;
    ;
    struct env145 envinst145;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env225 envinst225;
    ;
    ;
    ;
    ;
    ;
};

struct envunion255 {
    struct StrView_27  (*fun) (  struct env138*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  );
    struct env138 env;
};

struct env254 {
    ;
    struct env138 envinst138;
    ;
    ;
    ;
    ;
    ;
};

struct envunion257 {
    struct StrView_27  (*fun) (  struct env75*  ,    struct StrConcat_78  ,    enum CAllocator_10  );
    struct env75 env;
};

struct env256 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env75 envinst75;
};

struct envunion259 {
    struct StrView_27  (*fun) (  struct env80*  ,    struct StrView_27  ,    enum CAllocator_10  );
    struct env80 env;
};

struct env258 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env80 envinst80;
};

struct envunion261 {
    struct StrView_27  (*fun) (  struct env82*  ,    struct StrConcat_84  ,    enum CAllocator_10  );
    struct env82 env;
};

struct env260 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env82 envinst82;
};

struct Maybe_264 {
    enum {
        Maybe_264_None_t,
        Maybe_264_Just_t,
    } tag;
    union {
        struct {
            struct Theme_188 *  field0;
        } Maybe_264_Just_s;
    } stuff;
};

static struct Maybe_264 Maybe_264_Just (  struct Theme_188 *  field0 ) {
    return ( struct Maybe_264 ) { .tag = Maybe_264_Just_t, .stuff = { .Maybe_264_Just_s = { .field0 = field0 } } };
};

struct envunion263 {
    struct Maybe_264  (*fun) (  struct env221*  ,    struct StrView_27  );
    struct env221 env;
};

struct env262 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env221 envinst221;
};

struct Editor_267;

struct MenuItem_271 {
    char  f_key;
    struct StrView_27  f_description;
    enum Unit_8 (*  f_action )(    struct Editor_267 *  );
};

struct Slice_270 {
    struct MenuItem_271 *  f_ptr;
    size_t  f_count;
};

struct Menu_269 {
    struct StrView_27  f_name;
    struct Slice_270  f_items;
};

struct EditorMode_268 {
    enum {
        EditorMode_268_Normal_t,
        EditorMode_268_Cmd_t,
        EditorMode_268_Search_t,
        EditorMode_268_Menu_t,
    } tag;
    union {
        struct {
            struct Pos_26  field0;
            struct StrBuilder_62  field1;
        } EditorMode_268_Cmd_s;
        struct {
            struct Pos_26  field0;
            struct StrBuilder_62  field1;
        } EditorMode_268_Search_s;
        struct {
            struct Menu_269  field0;
        } EditorMode_268_Menu_s;
    } stuff;
};

static struct EditorMode_268 EditorMode_268_Cmd (  struct Pos_26  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct EditorMode_268 ) { .tag = EditorMode_268_Cmd_t, .stuff = { .EditorMode_268_Cmd_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct EditorMode_268 EditorMode_268_Search (  struct Pos_26  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct EditorMode_268 ) { .tag = EditorMode_268_Search_t, .stuff = { .EditorMode_268_Search_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct EditorMode_268 EditorMode_268_Menu (  struct Menu_269  field0 ) {
    return ( struct EditorMode_268 ) { .tag = EditorMode_268_Menu_t, .stuff = { .EditorMode_268_Menu_s = { .field0 = field0 } } };
};

struct Config_272 {
    struct Theme_188 *  f_theme;
    bool  f_display_dash_line_dash_numbers;
    bool  f_relative_dash_line_dash_numbers;
};

struct Editor_267 {
    enum CAllocator_10  f_al;
    bool  f_running;
    struct Pane_241  f_pane;
    struct Maybe_85  f_clipboard;
    struct Maybe_85  f_search_dash_term;
    struct EditorMode_268  f_mode;
    struct Maybe_85  f_msg;
    struct Config_272 *  f_cfg;
    struct Theme_188 *  f_og_dash_theme;
};

struct envunion266 {
    enum Unit_8  (*fun) (  struct env258*  ,    struct Editor_267 *  ,    struct StrView_27  );
    struct env258 env;
};

struct envunion273 {
    enum Unit_8  (*fun) (  struct env260*  ,    struct Editor_267 *  ,    struct StrConcat_84  );
    struct env260 env;
};

struct envunion274 {
    enum Unit_8  (*fun) (  struct env256*  ,    struct Editor_267 *  ,    struct StrConcat_78  );
    struct env256 env;
};

struct Maybe_276 {
    enum {
        Maybe_276_None_t,
        Maybe_276_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_276_Just_s;
    } stuff;
};

static struct Maybe_276 Maybe_276_Just (  size_t  field0 ) {
    return ( struct Maybe_276 ) { .tag = Maybe_276_Just_t, .stuff = { .Maybe_276_Just_s = { .field0 = field0 } } };
};

struct envunion275 {
    struct Maybe_276  (*fun) (  struct env123*  ,    struct TextBuf_117 *  ,    struct Maybe_85  );
    struct env123 env;
};

struct env265 {
    ;
    struct env258 envinst258;
    ;
    struct env260 envinst260;
    struct env256 envinst256;
    ;
    ;
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
};

struct Array_278 {
    struct MenuItem_271 _arr [4];
};

static  struct MenuItem_271 *   cast_dash_ptr279 (    struct Array_278 *  p398 ) {
    return ( (struct MenuItem_271 * ) (  p398 ) );
}

static  size_t   i32_dash_size280 (    int32_t  x690 ) {
    return ( (size_t ) ( (int64_t ) (  x690 ) ) );
}

static  struct Slice_270   from_dash_listlike277 (    struct Array_278 *  arr2200 ) {
    return ( (struct Slice_270) { .f_ptr = ( (  cast_dash_ptr279 ) ( (  arr2200 ) ) ) , .f_count = ( (  i32_dash_size280 ) ( ( 4 ) ) ) } );
}

static  bool   eq283 (    size_t  l135 ,    size_t  r137 ) {
    return ( (  l135 ) == (  r137 ) );
}

static  char   from_dash_charlike282 (    uint8_t *  ptr410 ,    size_t  num_dash_bytes412 ) {
    if ( ( !  eq283 ( (  num_dash_bytes412 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp284 = ( (  from_dash_string57 ) ( ( (uint8_t*)"(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp284);
        abort ( );
        ( Unit_8_Unit );
    }
    return ( ( (char ) ( * (  ptr410 ) ) ) );
}

enum CursorMovement_288 {
    CursorMovement_288_NoChanges,
    CursorMovement_288_UpdateVI,
    CursorMovement_288_OverrideSelect,
};

struct Tuple2_290 {
    enum CursorMovement_288  field0;
    enum CursorMovement_288  field1;
};

static struct Tuple2_290 Tuple2_290_Tuple2 (  enum CursorMovement_288  field0 ,  enum CursorMovement_288  field1 ) {
    return ( struct Tuple2_290 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq289 (    enum CursorMovement_288  l4469 ,    enum CursorMovement_288  r4471 ) {
    return ( {  struct Tuple2_290  dref4472 = ( ( Tuple2_290_Tuple2 ) ( (  l4469 ) ,  (  r4471 ) ) ) ;  dref4472 .field0 == CursorMovement_288_NoChanges &&  dref4472 .field1 == CursorMovement_288_NoChanges ? ( true ) :  dref4472 .field0 == CursorMovement_288_UpdateVI &&  dref4472 .field1 == CursorMovement_288_UpdateVI ? ( true ) :  dref4472 .field0 == CursorMovement_288_OverrideSelect &&  dref4472 .field1 == CursorMovement_288_OverrideSelect ? ( true ) : ( false ) ; } );
}

struct StrViewIter_293 {
    struct StrView_27  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_293   into_dash_iter294 (    struct StrViewIter_293  self1315 ) {
    return (  self1315 );
}

static  struct StrViewIter_293   into_dash_iter296 (    struct StrView_27  self1312 ) {
    return ( (struct StrViewIter_293) { .f_ds = (  self1312 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_293   chars295 (    struct StrView_27  self1326 ) {
    return ( (  into_dash_iter296 ) ( (  self1326 ) ) );
}

static  struct StrView_27   from_dash_bytes298 (    struct Slice_14  sl2573 ) {
    return ( (struct StrView_27) { .f_contents = (  sl2573 ) } );
}

static  struct Slice_14   to_dash_slice299 (    struct List_13  l2541 ) {
    uint8_t *  ptr2542 = ( ( (  l2541 ) .f_elements ) .f_ptr );
    return ( (struct Slice_14) { .f_ptr = (  ptr2542 ) , .f_count = ( (  l2541 ) .f_count ) } );
}

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_174   cmp302 (    size_t  l193 ,    size_t  r195 ) {
    return ( builtin_size_tcmp( (  l193 ) , (  r195 ) ) );
}

struct StrConcat_305 {
    struct StrConcat_78  field0;
    size_t  field1;
};

static struct StrConcat_305 StrConcat_305_StrConcat (  struct StrConcat_78  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_305 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_304 {
    struct StrConcat_305  field0;
    struct Char_65  field1;
};

static struct StrConcat_304 StrConcat_304_StrConcat (  struct StrConcat_305  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_304 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_308 {
    struct StrView_27  field0;
    struct StrConcat_304  field1;
};

static struct StrConcat_308 StrConcat_308_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_304  field1 ) {
    return ( struct StrConcat_308 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_307 {
    struct StrConcat_308  field0;
    struct Char_65  field1;
};

static struct StrConcat_307 StrConcat_307_StrConcat (  struct StrConcat_308  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_307 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32311 (    size_t  x711 ) {
    return ( (int32_t ) (  x711 ) );
}

static  enum Unit_8   print_dash_str310 (    struct StrView_27  self1323 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32311 ) ( ( ( (  self1323 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1323 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str316 (    size_t  self1423 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%lu" ) ,  ( 3 ) ) ) ,  (  self1423 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str315 (    struct StrConcat_79  self1302 ) {
    struct StrConcat_79  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str310 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str316 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str314 (    struct StrConcat_78  self1302 ) {
    struct StrConcat_78  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str315 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str310 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str313 (    struct StrConcat_305  self1302 ) {
    struct StrConcat_305  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str314 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str316 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

struct Array_320 {
    uint8_t _arr [4];
};

struct Scalar_322 {
    uint32_t  f_value;
};

struct CharDestructured_321 {
    enum {
        CharDestructured_321_Ref_t,
        CharDestructured_321_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } CharDestructured_321_Ref_s;
        struct {
            struct Scalar_322  field0;
        } CharDestructured_321_Scalar_s;
    } stuff;
};

static struct CharDestructured_321 CharDestructured_321_Ref (  struct Char_65  field0 ) {
    return ( struct CharDestructured_321 ) { .tag = CharDestructured_321_Ref_t, .stuff = { .CharDestructured_321_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_321 CharDestructured_321_Scalar (  struct Scalar_322  field0 ) {
    return ( struct CharDestructured_321 ) { .tag = CharDestructured_321_Scalar_t, .stuff = { .CharDestructured_321_Scalar_s = { .field0 = field0 } } };
};

static  bool   eq324 (    uint8_t  l125 ,    uint8_t  r127 ) {
    return ( (  l125 ) == (  r127 ) );
}

static  uint8_t   size_dash_u8326 (    size_t  x720 ) {
    return ( (uint8_t ) (  x720 ) );
}

static  size_t   op_dash_div327 (    size_t  l304 ,    size_t  r306 ) {
    return ( (  l304 ) / (  r306 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer325 (    uint8_t *  ptr783 ) {
    return ( (  size_dash_u8326 ) ( (  op_dash_div327 ( ( ( (size_t ) (  ptr783 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint8_t   from_dash_integral328 (    size_t  x62 ) {
    return ( (uint8_t ) (  x62 ) );
}

static  uint32_t   size_dash_u32329 (    size_t  x714 ) {
    return ( (uint32_t ) (  x714 ) );
}

static  size_t   cast330 (    uint8_t *  x395 ) {
    return ( (size_t ) (  x395 ) );
}

static  struct CharDestructured_321   destructure323 (    struct Char_65  c1244 ) {
    if ( (  eq324 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer325 ) ( ( (  c1244 ) .f_ptr ) ) ) , (  from_dash_integral328 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_321_Scalar ) ( ( (struct Scalar_322) { .f_value = ( (  size_dash_u32329 ) ( ( ( (  cast330 ) ( ( (  c1244 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_321_Ref ) ( (  c1244 ) ) );
    }
}

static  struct Array_320   from_dash_listlike333 (    struct Array_320 *  self369 ) {
    return ( * (  self369 ) );
}

static  struct Array_320   unscalarize331 (    struct Scalar_322  scalar1247 ) {
    if ( (  cmp186 ( ( (  scalar1247 ) .f_value ) , (  from_dash_integral181 ( 128 ) ) ) == 2 ) ) {
        const char*  temp332 = ( (  from_dash_string57 ) ( ( (uint8_t*)"(unscalarize) non-ascii characters not supported for now" ) ,  ( 56 ) ) );
        printf("%s\n", temp332);
        abort ( );
        ( Unit_8_Unit );
    }
    uint8_t  b1248 = ( (  u32_dash_u8160 ) ( ( (  scalar1247 ) .f_value ) ) );
    struct Array_320  temp334 = ( (struct Array_320) { ._arr = { (  b1248 ) , (  from_dash_integral328 ( 0 ) ) , (  from_dash_integral328 ( 0 ) ) , (  from_dash_integral328 ( 0 ) ) } } );
    return ( (  from_dash_listlike333 ) ( ( &temp334 ) ) );
}

static  uint8_t *   cast_dash_ptr335 (    struct Array_320 *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  struct Char_65   regularize319 (    struct Char_65  c1251 ,    struct Array_320 *  possible_dash_scalar_dash_mem1253 ) {
    struct CharDestructured_321  dref1254 = ( (  destructure323 ) ( (  c1251 ) ) );
    if ( dref1254.tag == CharDestructured_321_Ref_t ) {
        return ( dref1254 .stuff .CharDestructured_321_Ref_s .field0 );
    }
    else {
        if ( dref1254.tag == CharDestructured_321_Scalar_t ) {
            (*  possible_dash_scalar_dash_mem1253 ) = ( (  unscalarize331 ) ( ( dref1254 .stuff .CharDestructured_321_Scalar_s .field0 ) ) );
            return ( (struct Char_65) { .f_ptr = ( (  cast_dash_ptr335 ) ( (  possible_dash_scalar_dash_mem1253 ) ) ) , .f_num_dash_bytes = ( (  c1251 ) .f_num_dash_bytes ) } );
        }
    }
}

static  enum Unit_8   printf_dash_char318 (    struct Char_65  c1259 ) {
    struct Array_320  temp337;
    struct Array_320  temp336 = (  temp337 );
    struct Char_65  c1260 = ( (  regularize319 ) ( (  c1259 ) ,  ( &temp336 ) ) );
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32311 ) ( ( (  c1260 ) .f_num_dash_bytes ) ) ) ,  ( (  c1260 ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str317 (    struct Char_65  self1283 ) {
    ( (  printf_dash_char318 ) ( (  self1283 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str312 (    struct StrConcat_304  self1302 ) {
    struct StrConcat_304  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str313 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str309 (    struct StrConcat_308  self1302 ) {
    struct StrConcat_308  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str310 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str312 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str306 (    struct StrConcat_307  self1302 ) {
    struct StrConcat_307  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str309 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_174   cmp341 (    uint8_t  l178 ,    uint8_t  r180 ) {
    return ( builtin_uint8_tcmp( (  l178 ) , (  r180 ) ) );
}

static  size_t   next_dash_char340 (    uint8_t *  p1263 ) {
    uint8_t  pb1264 = ( * (  p1263 ) );
    if ( (  cmp341 ( (  pb1264 ) , (  from_dash_integral328 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp341 ( (  pb1264 ) , (  from_dash_integral328 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp341 ( (  pb1264 ) , (  from_dash_integral328 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp341 ( (  pb1264 ) , (  from_dash_integral328 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp342 = ( (  from_dash_string57 ) ( ( (uint8_t*)"(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp342);
                    abort ( );
                    ( Unit_8_Unit );
                }
            }
        }
    }
}

static  struct Char_65   scan_dash_from_dash_mem339 (    uint8_t *  p1267 ) {
    size_t  clen1268 = ( (  next_dash_char340 ) ( (  p1267 ) ) );
    if ( (  cmp302 ( (  clen1268 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp343 = ( (  from_dash_string57 ) ( ( (uint8_t*)"UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp343);
        abort ( );
        ( Unit_8_Unit );
    }
    return ( (struct Char_65) { .f_ptr = (  p1267 ) , .f_num_dash_bytes = (  clen1268 ) } );
}

static  struct Char_65   from_dash_charlike338 (    uint8_t *  ptr1271 ,    size_t  num_dash_bytes1273 ) {
    struct Char_65  le_dash_char1274 = ( (  scan_dash_from_dash_mem339 ) ( (  ptr1271 ) ) );
    if ( ( !  eq283 ( ( (  le_dash_char1274 ) .f_num_dash_bytes ) , (  num_dash_bytes1273 ) ) ) ) {
        const char*  temp344 = ( (  from_dash_string57 ) ( ( (uint8_t*)"invalid char given. number of scanned bytes should match the given num-bytes." ) ,  ( 77 ) ) );
        printf("%s\n", temp344);
        abort ( );
        ( Unit_8_Unit );
    }
    return (  le_dash_char1274 );
}

static  enum Unit_8   panic303 (    struct StrConcat_304  errmsg1343 ) {
    ( (  print_dash_str306 ) ( ( ( StrConcat_307_StrConcat ) ( ( ( StrConcat_308_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  int64_t   op_dash_mul347 (    int64_t  l213 ,    int64_t  r215 ) {
    return ( (  l213 ) * (  r215 ) );
}

static  struct Line_12 *   offset_dash_ptr346 (    struct Line_12 *  x377 ,    int64_t  count379 ) {
    struct Line_12  temp348;
    return ( (struct Line_12 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp348 ) ) ) ) ) ) ) ) );
}

static  int64_t   size_dash_i64349 (    size_t  x672 ) {
    return ( (int64_t ) (  x672 ) );
}

static  struct Line_12 *   get_dash_ptr345 (    struct Slice_11  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp302 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_12 *  elem_dash_ptr2173 = ( (  offset_dash_ptr346 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  struct Line_12 *   get_dash_ptr301 (    struct List_9 *  list2406 ,    size_t  i2408 ) {
    if ( ( (  cmp302 ( (  i2408 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2408 ) , ( ( * (  list2406 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2408 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2406 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr345 ) ( ( ( * (  list2406 ) ) .f_elements ) ,  (  i2408 ) ) );
}

static  struct Line_12   get300 (    struct List_9 *  list2416 ,    size_t  i2418 ) {
    return ( * ( (  get_dash_ptr301 ) ( (  list2416 ) ,  (  i2418 ) ) ) );
}

static  struct StrView_27   line297 (    struct TextBuf_117 *  self4041 ,    int32_t  li4043 ) {
    return ( (  from_dash_bytes298 ) ( ( (  to_dash_slice299 ) ( ( ( (  get300 ) ( ( & ( ( * (  self4041 ) ) .f_buf ) ) ,  ( (  i32_dash_size280 ) ( (  li4043 ) ) ) ) ) .f_line ) ) ) ) );
}

struct Maybe_351 {
    enum {
        Maybe_351_None_t,
        Maybe_351_Just_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } Maybe_351_Just_s;
    } stuff;
};

static struct Maybe_351 Maybe_351_Just (  struct Char_65  field0 ) {
    return ( struct Maybe_351 ) { .tag = Maybe_351_Just_t, .stuff = { .Maybe_351_Just_s = { .field0 = field0 } } };
};

static  uint8_t *   offset_dash_ptr353 (    uint8_t *  x377 ,    int64_t  count379 ) {
    uint8_t  temp354;
    return ( (uint8_t * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp354 ) ) ) ) ) ) ) ) );
}

static  uint8_t *   cast355 (    uint8_t *  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  size_t   op_dash_add356 (    size_t  l289 ,    size_t  r291 ) {
    return ( (  l289 ) + (  r291 ) );
}

static  struct Maybe_351   next352 (    struct StrViewIter_293 *  self1318 ) {
    if ( (  cmp302 ( ( ( * (  self1318 ) ) .f_i ) , ( ( ( ( * (  self1318 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    uint8_t *  char_dash_ptr1319 = ( ( (  offset_dash_ptr353 ) ( ( (  cast355 ) ( ( ( ( ( * (  self1318 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64349 ) ( ( ( * (  self1318 ) ) .f_i ) ) ) ) ) );
    struct Char_65  char1320 = ( (  scan_dash_from_dash_mem339 ) ( (  char_dash_ptr1319 ) ) );
    (*  self1318 ) .f_i = (  op_dash_add356 ( ( ( * (  self1318 ) ) .f_i ) , ( (  char1320 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_351_Just ) ( (  char1320 ) ) );
}

static  int32_t   maybe358 (    struct Maybe_85  x1592 ,    int32_t (*  fun1594 )(    struct StrView_27  ) ,    int32_t  default1596 ) {
    return ( {  struct Maybe_85  dref1597 = (  x1592 ) ; dref1597.tag == Maybe_85_Just_t ? ( (  fun1594 ) ( ( dref1597 .stuff .Maybe_85_Just_s .field0 ) ) ) : (  default1596 ) ; } );
}

static  struct Array_320   uninit_dash_buf362 (  ) {
    struct Array_320  temp363;
    return (  temp363 );
}

static  int64_t   from_dash_integral365 (    size_t  x47 ) {
    return ( (int64_t ) (  x47 ) );
}

static  int64_t   op_dash_add366 (    int64_t  l203 ,    int64_t  r205 ) {
    return ( (  l203 ) + (  r205 ) );
}

static  bool   eq360 (    struct Char_65  l1451 ,    struct Char_65  r1453 ) {
    if ( ( !  eq283 ( ( (  l1451 ) .f_num_dash_bytes ) , ( (  r1453 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Array_320  temp361 = ( (  uninit_dash_buf362 ) ( ) );
    struct Char_65  lc1454 = ( (  regularize319 ) ( (  l1451 ) ,  ( &temp361 ) ) );
    struct Array_320  temp364 = ( (  uninit_dash_buf362 ) ( ) );
    struct Char_65  rc1455 = ( (  regularize319 ) ( (  r1453 ) ,  ( &temp364 ) ) );
    int64_t  i1456 = (  from_dash_integral365 ( 0 ) );
    while ( (  cmp302 ( ( (size_t ) (  i1456 ) ) , ( (  lc1454 ) .f_num_dash_bytes ) ) == 0 ) ) {
        if ( ( !  eq324 ( ( * ( (uint8_t * ) ( ( (void*) ( (  lc1454 ) .f_ptr ) ) + (  i1456 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( (  rc1455 ) .f_ptr ) ) + (  i1456 ) ) ) ) ) ) ) {
            return ( false );
        }
        i1456 = (  op_dash_add366 ( (  i1456 ) , (  from_dash_integral365 ( 1 ) ) ) );
    }
    return ( true );
}

static  struct Maybe_85   char_dash_replacement359 (    struct Char_65  c4349 ) {
    if ( (  eq360 ( (  c4349 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_85_Just ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
}

static  size_t   reduce369 (    struct StrViewIter_293  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct StrViewIter_293  it1124 = ( (  into_dash_iter294 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1125 = ( (  next352 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_351_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_351_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp370 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp370);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp371;
    return (  temp371 );
}

static  size_t   lam372 (    struct Char_65  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add356 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count368 (    struct StrViewIter_293  it1129 ) {
    return ( (  reduce369 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam372 ) ) );
}

static  int32_t   lam367 (    struct StrView_27  s4354 ) {
    return ( (  size_dash_i32311 ) ( ( (  count368 ) ( ( (  chars295 ) ( (  s4354 ) ) ) ) ) ) );
}

static  int32_t   max374 (    int32_t  l1372 ,    int32_t  r1374 ) {
    if ( (  cmp173 ( (  l1372 ) , (  r1374 ) ) == 2 ) ) {
        return (  l1372 );
    } else {
        return (  r1374 );
    }
}

static  void *   cast_dash_ptr380 (    wchar_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of381 (    wchar_t  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  wchar_t   zeroed378 (  ) {
    wchar_t  temp379;
    wchar_t  x648 = (  temp379 );
    ( ( memset ) ( ( (  cast_dash_ptr380 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of381 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  char *   cast_dash_ptr382 (    uint8_t *  p398 ) {
    return ( (char * ) (  p398 ) );
}

static  size_t   cast383 (    int64_t  x395 ) {
    return ( (size_t ) (  x395 ) );
}

static  int64_t   op_dash_neg384 (    int64_t  l223 ) {
    return ( (  from_dash_integral365 ( 0 ) ) - (  l223 ) );
}

static  size_t   size_dash_of386 (    uint32_t  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

struct TypeSize_388 {
    size_t  f_size;
};

static  struct TypeSize_388   get_dash_typesize387 (  ) {
    wchar_t  temp389;
    return ( (struct TypeSize_388) { .f_size = ( sizeof( ( (  temp389 ) ) ) ) } );
}

static  wchar_t   cast391 (    uint32_t  x395 ) {
    return ( (wchar_t ) (  x395 ) );
}

static  wchar_t   to_dash_c_dash_wchar376 (    struct Char_65  c1471 ) {
    struct CharDestructured_321  dref1472 = ( (  destructure323 ) ( (  c1471 ) ) );
    if ( dref1472.tag == CharDestructured_321_Ref_t ) {
        wchar_t  temp377 = ( (  zeroed378 ) ( ) );
        wchar_t *  wcp1474 = ( &temp377 );
        size_t  num_dash_chars1475 = ( ( mbstowcs ) ( (  wcp1474 ) ,  ( (  cast_dash_ptr382 ) ( ( ( dref1472 .stuff .CharDestructured_321_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq283 ( (  num_dash_chars1475 ) , ( ( (  cast383 ) ( ( (  op_dash_neg384 ( (  from_dash_integral365 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp385 = ( (  from_dash_string57 ) ( ( (uint8_t*)"could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp385);
            abort ( );
            ( Unit_8_Unit );
        }
        return ( * (  wcp1474 ) );
    }
    else {
        if ( dref1472.tag == CharDestructured_321_Scalar_t ) {
            if ( ( ! (  eq283 ( ( (  size_dash_of386 ) ( ( ( dref1472 .stuff .CharDestructured_321_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize387 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp390 = ( (  from_dash_string57 ) ( ( (uint8_t*)"Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp390);
                abort ( );
                ( Unit_8_Unit );
            }
            return ( (  cast391 ) ( ( ( dref1472 .stuff .CharDestructured_321_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth375 (    struct Char_65  c2699 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar376 ) ( (  c2699 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth373 (    struct Char_65  c3694 ) {
    return ( (  max374 ) ( ( (  wcwidth375 ) ( (  c3694 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width357 (    struct Char_65  c4352 ) {
    return ( (  maybe358 ) ( ( (  char_dash_replacement359 ) ( (  c4352 ) ) ) ,  (  lam367 ) ,  ( (  rendered_dash_wcwidth373 ) ( (  c4352 ) ) ) ) );
}

static  int32_t   pos_dash_vi291 (    struct TextBuf_117 *  self4368 ,    struct Pos_26  pos4370 ) {
    int32_t  bi4371 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi4372 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_293  temp292 =  into_dash_iter294 ( ( (  chars295 ) ( ( (  line297 ) ( (  self4368 ) ,  ( (  pos4370 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_351  __cond350 =  next352 (&temp292);
        if (  __cond350 .tag == 0 ) {
            break;
        }
        struct Char_65  c4374 =  __cond350 .stuff .Maybe_351_Just_s .field0;
        bi4371 = (  op_dash_add175 ( (  bi4371 ) , ( (  size_dash_i32311 ) ( ( (  c4374 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp173 ( ( (  pos4370 ) .f_bi ) , (  bi4371 ) ) == 0 ) ) {
            break;
        }
        vi4372 = (  op_dash_add175 ( (  vi4372 ) , ( (  char_dash_screen_dash_width357 ) ( (  c4374 ) ) ) ) );
    }
    return (  vi4372 );
}

struct Tuple2_394 {
    enum Mode_242  field0;
    enum Mode_242  field1;
};

static struct Tuple2_394 Tuple2_394_Tuple2 (  enum Mode_242  field0 ,  enum Mode_242  field1 ) {
    return ( struct Tuple2_394 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq393 (    enum Mode_242  l4328 ,    enum Mode_242  r4330 ) {
    return ( {  struct Tuple2_394  dref4331 = ( ( Tuple2_394_Tuple2 ) ( (  l4328 ) ,  (  r4330 ) ) ) ;  dref4331 .field0 == Mode_242_Normal &&  dref4331 .field1 == Mode_242_Normal ? ( true ) :  dref4331 .field0 == Mode_242_Insert &&  dref4331 .field1 == Mode_242_Insert ? ( true ) :  dref4331 .field0 == Mode_242_Select &&  dref4331 .field1 == Mode_242_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_8   set_dash_sel392 (    struct Pane_241 *  self4458 ,    struct Maybe_34  sel4460 ) {
    if ( ( !  eq393 ( ( ( * (  self4458 ) ) .f_mode ) , ( Mode_242_Select ) ) ) ) {
        (*  self4458 ) .f_sel = (  sel4460 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_cursors287 (    struct Pane_241 *  self4475 ,    struct Pos_26  cur4477 ,    struct Maybe_34  sel4479 ,    enum CursorMovement_288  cursor_dash_movement_dash_type4481 ) {
    if ( ( !  eq289 ( (  cursor_dash_movement_dash_type4481 ) , ( CursorMovement_288_NoChanges ) ) ) ) {
        (*  self4475 ) .f_vi = ( (  pos_dash_vi291 ) ( ( ( * (  self4475 ) ) .f_buf ) ,  (  cur4477 ) ) );
    }
    (*  self4475 ) .f_cursor = (  cur4477 );
    if ( ( !  eq289 ( (  cursor_dash_movement_dash_type4481 ) , ( CursorMovement_288_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel392 ) ( (  self4475 ) ,  (  sel4479 ) ) );
    } else {
        (*  self4475 ) .f_sel = (  sel4479 );
    }
    return ( Unit_8_Unit );
}

static  size_t   num_dash_bytes396 (    struct StrView_27  self2619 ) {
    return ( ( (  self2619 ) .f_contents ) .f_count );
}

static  enum Unit_8   move_dash_to_dash_end286 (    struct Pane_241 *  self4573 ) {
    struct Pos_26  cur4574 = ( ( * (  self4573 ) ) .f_cursor );
    struct Pos_26  temp395 = (  cur4574 );
    temp395 .  f_bi = ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( ( (  line297 ) ( ( ( * (  self4573 ) ) .f_buf ) ,  ( (  cur4574 ) .f_line ) ) ) ) ) ) );
    ( (  set_dash_cursors287 ) ( (  self4573 ) ,  ( temp395 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  struct Pane_241 *   pane397 (    struct Editor_267 *  ed4722 ) {
    return ( & ( ( * (  ed4722 ) ) .f_pane ) );
}

static  enum Unit_8   lam285 (    struct Editor_267 *  ed4803 ) {
    return ( (  move_dash_to_dash_end286 ) ( ( (  pane397 ) ( (  ed4803 ) ) ) ) );
}

struct TakeWhile_403 {
    struct StrViewIter_293  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_402 {
    struct TakeWhile_403  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_402 Map_402_Map (  struct TakeWhile_403  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_402 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_402   into_dash_iter405 (    struct Map_402  self804 ) {
    return (  self804 );
}

static  struct Maybe_351   next407 (    struct TakeWhile_403 *  self989 ) {
    struct Maybe_351  mx990 = ( (  next352 ) ( ( & ( ( * (  self989 ) ) .f_it ) ) ) );
    struct Maybe_351  dref991 = (  mx990 );
    if ( dref991.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    else {
        if ( dref991.tag == Maybe_351_Just_t ) {
            if ( ( ( ( * (  self989 ) ) .f_pred ) ( ( dref991 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_351_Just ) ( ( dref991 .stuff .Maybe_351_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
            }
        }
    }
}

static  struct Maybe_276   next406 (    struct Map_402 *  dref806 ) {
    struct Maybe_351  dref809 = ( (  next407 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_351_Just_t ) {
            return ( ( Maybe_276_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_351_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce404 (    struct Map_402  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    size_t  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct Map_402  it1124 = ( (  into_dash_iter405 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_276  dref1125 = ( (  next406 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_276_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_276_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_276_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp408 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp408);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp409;
    return (  temp409 );
}

static  size_t   lam410 (    size_t  v1137 ,    size_t  s1139 ) {
    return (  op_dash_add356 ( (  v1137 ) , (  s1139 ) ) );
}

static  size_t   sum401 (    struct Map_402  it1135 ) {
    return ( (  reduce404 ) ( (  it1135 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam410 ) ) );
}

static  struct TakeWhile_403   into_dash_iter412 (    struct TakeWhile_403  self986 ) {
    return (  self986 );
}

static  struct Map_402   map411 (    struct TakeWhile_403  iterable813 ,    size_t (*  fun815 )(    struct Char_65  ) ) {
    struct TakeWhile_403  it816 = ( (  into_dash_iter412 ) ( (  iterable813 ) ) );
    return ( ( Map_402_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct TakeWhile_403   take_dash_while413 (    struct StrView_27  it995 ,    bool (*  pred997 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_403) { .f_it = ( (  into_dash_iter296 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  bool   is_dash_whitespace415 (    struct Char_65  c1500 ) {
    return ( ( (  eq360 ( (  c1500 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) || (  eq360 ( (  c1500 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq360 ( (  c1500 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   lam414 (    struct Char_65  c4553 ) {
    return ( (  is_dash_whitespace415 ) ( (  c4553 ) ) );
}

static  size_t   lam416 (    struct Char_65  c4555 ) {
    return ( (  c4555 ) .f_num_dash_bytes );
}

static  int32_t   indent_dash_at_dash_line400 (    struct Pane_241 *  pane4549 ,    int32_t  line4551 ) {
    return ( (  size_dash_i32311 ) ( ( (  sum401 ) ( ( (  map411 ) ( ( (  take_dash_while413 ) ( ( (  line297 ) ( ( ( * (  pane4549 ) ) .f_buf ) ,  (  line4551 ) ) ) ,  (  lam414 ) ) ) ,  (  lam416 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_to_dash_beginning_dash_indented399 (    struct Pane_241 *  self4568 ) {
    struct Pos_26  cur4569 = ( ( * (  self4568 ) ) .f_cursor );
    int32_t  indent4570 = ( (  indent_dash_at_dash_line400 ) ( (  self4568 ) ,  ( (  cur4569 ) .f_line ) ) );
    struct Pos_26  temp417 = (  cur4569 );
    temp417 .  f_bi = (  indent4570 );
    ( (  set_dash_cursors287 ) ( (  self4568 ) ,  ( temp417 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam398 (    struct Editor_267 *  ed4805 ) {
    return ( (  move_dash_to_dash_beginning_dash_indented399 ) ( ( (  pane397 ) ( (  ed4805 ) ) ) ) );
}

static  enum Unit_8   lam418 (    struct Editor_267 *  ed4807 ) {
    return ( (  set_dash_cursors287 ) ( ( (  pane397 ) ( (  ed4807 ) ) ) ,  ( (struct Pos_26) { .f_line = (  from_dash_integral56 ( 0 ) ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_UpdateVI ) ) );
}

static  size_t   size421 (    struct List_9 *  l2443 ) {
    return ( ( * (  l2443 ) ) .f_count );
}

static  int32_t   num_dash_lines420 (    struct TextBuf_117 *  self4046 ) {
    return ( (  size_dash_i32311 ) ( ( (  size421 ) ( ( & ( ( * (  self4046 ) ) .f_buf ) ) ) ) ) );
}

static  enum Unit_8   lam419 (    struct Editor_267 *  ed4809 ) {
    return ( (  set_dash_cursors287 ) ( ( (  pane397 ) ( (  ed4809 ) ) ) ,  ( (struct Pos_26) { .f_line = ( (  max374 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( ( (  num_dash_lines420 ) ( ( ( * ( (  pane397 ) ( (  ed4809 ) ) ) ) .f_buf ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_UpdateVI ) ) );
}

struct Array_423 {
    struct MenuItem_271 _arr [2];
};

static  struct MenuItem_271 *   cast_dash_ptr424 (    struct Array_423 *  p398 ) {
    return ( (struct MenuItem_271 * ) (  p398 ) );
}

static  struct Slice_270   from_dash_listlike422 (    struct Array_423 *  arr2200 ) {
    return ( (struct Slice_270) { .f_ptr = ( (  cast_dash_ptr424 ) ( (  arr2200 ) ) ) , .f_count = ( (  i32_dash_size280 ) ( ( 2 ) ) ) } );
}

static  enum Unit_8   lam426 (    struct Editor_267 *  ed4812 ) {
    return ( (  move_dash_to_dash_end286 ) ( ( (  pane397 ) ( (  ed4812 ) ) ) ) );
}

static  enum Unit_8   lam427 (    struct Editor_267 *  ed4814 ) {
    return ( Unit_8_Unit );
}

struct envunion429 {
    enum Unit_8  (*fun) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  );
    struct env234 env;
};

struct envunion430 {
    enum Unit_8  (*fun) (  struct env244*  ,    struct Pane_241 *  );
    struct env244 env;
};

struct envunion431 {
    enum Unit_8  (*fun) (  struct env254*  ,    struct Editor_267 *  );
    struct env254 env;
};

struct envunion432 {
    enum Unit_8  (*fun) (  struct env225*  ,    struct Pane_241 *  ,    struct StrView_27  );
    struct env225 env;
};

struct envunion433 {
    enum Unit_8  (*fun) (  struct env238*  ,    struct Pane_241 *  );
    struct env238 env;
};

struct envunion434 {
    enum Unit_8  (*fun) (  struct env256*  ,    struct Editor_267 *  ,    struct StrConcat_78  );
    struct env256 env;
};

struct envunion435 {
    enum Unit_8  (*fun) (  struct env230*  ,    struct Pane_241 *  );
    struct env230 env;
};

struct envunion436 {
    enum Unit_8  (*fun) (  struct env232*  ,    struct Pane_241 *  );
    struct env232 env;
};

struct envunion437 {
    enum Unit_8  (*fun) (  struct env247*  ,    struct Pane_241 *  ,    int32_t  );
    struct env247 env;
};

struct envunion438 {
    enum Unit_8  (*fun) (  struct env249*  ,    struct Pane_241 *  );
    struct env249 env;
};

struct env428 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env234 envinst234;
    ;
    struct env244 envinst244;
    ;
    struct Menu_269  space_dash_menu4815;
    ;
    struct env254 envinst254;
    ;
    ;
    ;
    ;
    struct env225 envinst225;
    ;
    ;
    struct env238 envinst238;
    struct env256 envinst256;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env230 envinst230;
    ;
    ;
    ;
    ;
    struct env232 envinst232;
    ;
    ;
    struct env247 envinst247;
    ;
    ;
    ;
    ;
    ;
    ;
    struct Menu_269  goto_dash_menu4810;
    ;
    ;
    ;
    ;
    struct env249 envinst249;
};

struct envunion440 {
    enum Unit_8  (*fun) (  struct env228*  ,    struct Pane_241 *  );
    struct env228 env;
};

struct envunion441 {
    enum Unit_8  (*fun) (  struct env262*  ,    struct Editor_267 *  ,    struct StrView_27  );
    struct env262 env;
};

struct envunion442 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

struct envunion443 {
    struct Maybe_74  (*fun) (  struct env72*  ,    struct StrBuilder_62 *  );
    struct env72 env;
};

struct envunion444 {
    enum Unit_8  (*fun) (  struct env247*  ,    struct Pane_241 *  ,    int32_t  );
    struct env247 env;
};

struct Key_446 {
    enum {
        Key_446_Escape_t,
        Key_446_Enter_t,
        Key_446_Tab_t,
        Key_446_Backspace_t,
        Key_446_Char_t,
        Key_446_Ctrl_t,
        Key_446_Up_t,
        Key_446_Down_t,
        Key_446_Left_t,
        Key_446_Right_t,
        Key_446_Home_t,
        Key_446_End_t,
        Key_446_PageUp_t,
        Key_446_PageDown_t,
        Key_446_Delete_t,
        Key_446_Insert_t,
        Key_446_F1_t,
        Key_446_F2_t,
        Key_446_F3_t,
        Key_446_F4_t,
        Key_446_F5_t,
        Key_446_F6_t,
        Key_446_F7_t,
        Key_446_F8_t,
        Key_446_F9_t,
        Key_446_F10_t,
        Key_446_F11_t,
        Key_446_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_446_Char_s;
        struct {
            char  field0;
        } Key_446_Ctrl_s;
    } stuff;
};

static struct Key_446 Key_446_Char (  char  field0 ) {
    return ( struct Key_446 ) { .tag = Key_446_Char_t, .stuff = { .Key_446_Char_s = { .field0 = field0 } } };
};

static struct Key_446 Key_446_Ctrl (  char  field0 ) {
    return ( struct Key_446 ) { .tag = Key_446_Ctrl_t, .stuff = { .Key_446_Ctrl_s = { .field0 = field0 } } };
};

struct envunion445 {
    enum Unit_8  (*fun) (  struct env428*  ,    struct Editor_267 *  ,    struct Key_446  );
    struct env428 env;
};

struct envunion447 {
    enum Unit_8  (*fun) (  struct env225*  ,    struct Pane_241 *  ,    struct StrView_27  );
    struct env225 env;
};

struct envunion448 {
    enum Unit_8  (*fun) (  struct env265*  ,    struct Editor_267 *  ,    struct StrView_27  );
    struct env265 env;
};

struct env439 {
    ;
    ;
    ;
    ;
    ;
    struct env228 envinst228;
    ;
    ;
    struct env262 envinst262;
    ;
    ;
    ;
    ;
    struct env60 envinst60;
    ;
    struct env72 envinst72;
    ;
    ;
    ;
    struct env247 envinst247;
    ;
    ;
    struct env428 envinst428;
    ;
    ;
    struct env225 envinst225;
    struct env265 envinst265;
    ;
    ;
};

struct Cell_453 {
    struct Char_65  f_c;
    struct Color_154  f_fg;
    struct Color_154  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_452 {
    struct Cell_453 *  f_ptr;
    size_t  f_count;
};

struct Screen_451 {
    enum CAllocator_10  f_al;
    struct Tui_97 *  f_tui;
    struct Slice_452  f_current;
    struct Slice_452  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_154  f_default_dash_fg;
    struct Color_154  f_default_dash_bg;
};

struct ScreenDims_454 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

struct envunion450 {
    enum Unit_8  (*fun) (  struct env222*  ,    struct Screen_451 *  ,    struct Pane_241 *  ,    struct ScreenDims_454  ,    struct Config_272 *  );
    struct env222 env;
};

struct env449 {
    ;
    struct env222 envinst222;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  enum CAllocator_10   idc455 (  ) {
    return ( CAllocator_10_CAllocator );
}

struct Slice_458 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  const char* *   offset_dash_ptr460 (    const char* *  x377 ,    int64_t  count379 ) {
    const char*  temp461;
    return ( (const char* * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp461 ) ) ) ) ) ) ) ) );
}

static  size_t   op_dash_sub462 (    size_t  l294 ,    size_t  r296 ) {
    return ( (  l294 ) - (  r296 ) );
}

static  struct Slice_458   get459 (  ) {
    return ( (struct Slice_458) { .f_ptr = ( (  offset_dash_ptr460 ) ( ( _global_argv ) ,  (  from_dash_integral365 ( 1 ) ) ) ) , .f_count = (  op_dash_sub462 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

struct ConstStrIter_466 {
    const char*  f_ogstr;
    size_t  f_i;
};

static  struct ConstStrIter_466   into_dash_iter468 (    struct ConstStrIter_466  self1665 ) {
    return (  self1665 );
}

static  uint8_t *   cast470 (    const char*  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  uint8_t   cast471 (    int32_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  struct Maybe_351   next469 (    struct ConstStrIter_466 *  self1668 ) {
    uint8_t *  char_dash_ptr1669 = ( ( (  cast470 ) ( ( ( * (  self1668 ) ) .f_ogstr ) ) ) );
    uint8_t *  optr1670 = ( (  offset_dash_ptr353 ) ( (  char_dash_ptr1669 ) ,  ( (  size_dash_i64349 ) ( ( ( * (  self1668 ) ) .f_i ) ) ) ) );
    if ( (  eq324 ( ( * (  optr1670 ) ) , ( (  cast471 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    struct Char_65  char1671 = ( (  scan_dash_from_dash_mem339 ) ( (  optr1670 ) ) );
    (*  self1668 ) .f_i = (  op_dash_add356 ( ( ( * (  self1668 ) ) .f_i ) , ( (  char1671 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_351_Just ) ( (  char1671 ) ) );
}

static  size_t   reduce467 (    struct ConstStrIter_466  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct ConstStrIter_466  it1124 = ( (  into_dash_iter468 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1125 = ( (  next469 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_351_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_351_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp472 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp472);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp473;
    return (  temp473 );
}

static  size_t   lam474 (    struct Char_65  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add356 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count465 (    struct ConstStrIter_466  it1129 ) {
    return ( (  reduce467 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam474 ) ) );
}

static  struct ConstStrIter_466   into_dash_iter476 (    const char*  self1662 ) {
    return ( (struct ConstStrIter_466) { .f_ogstr = (  self1662 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct ConstStrIter_466   chars475 (    const char*  self1677 ) {
    return ( (  into_dash_iter476 ) ( (  self1677 ) ) );
}

static  size_t   const_dash_str_dash_len464 (    const char*  s1926 ) {
    return ( (  count465 ) ( ( (  chars475 ) ( (  s1926 ) ) ) ) );
}

static  struct StrView_27   from_dash_const_dash_str463 (    const char*  s2557 ) {
    size_t  len2558 = ( (  const_dash_str_dash_len464 ) ( (  s2557 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( (  cast470 ) ( (  s2557 ) ) ) , .f_count = (  len2558 ) } ) } );
}

struct Maybe_480 {
    enum {
        Maybe_480_None_t,
        Maybe_480_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_480_Just_s;
    } stuff;
};

static struct Maybe_480 Maybe_480_Just (  const char*  field0 ) {
    return ( struct Maybe_480 ) { .tag = Maybe_480_Just_t, .stuff = { .Maybe_480_Just_s = { .field0 = field0 } } };
};

static  const char*   undefined481 (  ) {
    const char*  temp482;
    return (  temp482 );
}

static  const char*   or_dash_fail479 (    struct Maybe_480  x1353 ,    struct StrConcat_304  errmsg1355 ) {
    struct Maybe_480  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_480_None_t ) {
        ( (  panic303 ) ( (  errmsg1355 ) ) );
        return ( (  undefined481 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_480_Just_t ) {
            return ( dref1356 .stuff .Maybe_480_Just_s .field0 );
        }
    }
}

static  struct Maybe_480   try_dash_get483 (    struct Slice_458  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp302 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_480) { .tag = Maybe_480_None_t } );
    }
    const char* *  elem_dash_ptr2179 = ( (  offset_dash_ptr460 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_480_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  const char*   get478 (    struct Slice_458  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail479 ) ( ( (  try_dash_get483 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get477 (    struct Slice_458  self2195 ,    size_t  idx2197 ) {
    return ( (  get478 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

struct Maybe_484 {
    enum {
        Maybe_484_None_t,
        Maybe_484_Just_t,
    } tag;
    union {
        struct {
            struct TextBuf_117  field0;
        } Maybe_484_Just_s;
    } stuff;
};

static struct Maybe_484 Maybe_484_Just (  struct TextBuf_117  field0 ) {
    return ( struct Maybe_484 ) { .tag = Maybe_484_Just_t, .stuff = { .Maybe_484_Just_s = { .field0 = field0 } } };
};

struct envunion486 {
    struct Maybe_484  (*fun) (  struct env127*  ,    enum CAllocator_10  ,    struct StrView_27  );
    struct env127 env;
};

static  void *   cast_dash_ptr499 (    struct Line_12 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of500 (    struct Line_12 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Line_12 *   zeroed497 (  ) {
    struct Line_12 *  temp498;
    struct Line_12 *  x648 = (  temp498 );
    ( ( memset ) ( ( (  cast_dash_ptr499 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of500 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  struct Line_12 *   null_dash_ptr496 (  ) {
    return ( (  zeroed497 ) ( ) );
}

static  struct Slice_11   empty495 (  ) {
    return ( (struct Slice_11) { .f_ptr = ( (  null_dash_ptr496 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_9   mk494 (    enum CAllocator_10  al2436 ) {
    struct Slice_11  elements2437 = ( (  empty495 ) ( ) );
    return ( (struct List_9) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env504 {
    struct List_9 *  list2513;
    struct env6 envinst6;
};

struct envunion505 {
    enum Unit_8  (*fun) (  struct env504*  ,    struct Line_12  );
    struct env504 env;
};

struct ArrayIter_506 {
    struct Array_52  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_506   into_dash_iter508 (    struct Array_52  self2102 ) {
    return ( (struct ArrayIter_506) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_509 {
    enum {
        Maybe_509_None_t,
        Maybe_509_Just_t,
    } tag;
    union {
        struct {
            struct Line_12  field0;
        } Maybe_509_Just_s;
    } stuff;
};

static struct Maybe_509 Maybe_509_Just (  struct Line_12  field0 ) {
    return ( struct Maybe_509 ) { .tag = Maybe_509_Just_t, .stuff = { .Maybe_509_Just_s = { .field0 = field0 } } };
};

struct StrConcat_515 {
    struct StrConcat_78  field0;
    int32_t  field1;
};

static struct StrConcat_515 StrConcat_515_StrConcat (  struct StrConcat_78  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_515 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_514 {
    struct StrConcat_515  field0;
    struct Char_65  field1;
};

static struct StrConcat_514 StrConcat_514_StrConcat (  struct StrConcat_515  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_514 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_518 {
    struct StrView_27  field0;
    struct StrConcat_514  field1;
};

static struct StrConcat_518 StrConcat_518_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_514  field1 ) {
    return ( struct StrConcat_518 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_517 {
    struct StrConcat_518  field0;
    struct Char_65  field1;
};

static struct StrConcat_517 StrConcat_517_StrConcat (  struct StrConcat_518  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_517 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str522 (    int32_t  self1417 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%d" ) ,  ( 2 ) ) ) ,  (  self1417 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str521 (    struct StrConcat_515  self1302 ) {
    struct StrConcat_515  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str314 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str522 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str520 (    struct StrConcat_514  self1302 ) {
    struct StrConcat_514  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str521 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str519 (    struct StrConcat_518  self1302 ) {
    struct StrConcat_518  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str310 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str520 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str516 (    struct StrConcat_517  self1302 ) {
    struct StrConcat_517  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str519 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic513 (    struct StrConcat_514  errmsg1343 ) {
    ( (  print_dash_str516 ) ( ( ( StrConcat_517_StrConcat ) ( ( ( StrConcat_518_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Line_12 *   cast_dash_ptr523 (    struct Array_52 *  p398 ) {
    return ( (struct Line_12 * ) (  p398 ) );
}

static  struct Line_12 *   get_dash_ptr512 (    struct Array_52 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp302 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2029 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic513 ) ( ( ( StrConcat_514_StrConcat ) ( ( ( StrConcat_515_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_12 *  p2030 = ( ( (  cast_dash_ptr523 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr346 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct Line_12   get511 (    struct Array_52 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr512 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_509   next510 (    struct ArrayIter_506 *  self2109 ) {
    if ( (  cmp302 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_509) { .tag = Maybe_509_None_t } );
    }
    struct Line_12  e2111 = ( (  get511 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add356 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_509_Just ) ( (  e2111 ) ) );
}

static  enum Unit_8   for_dash_each503 (    struct Array_52  iterable1099 ,   struct envunion505  fun1101 ) {
    struct ArrayIter_506  temp507 = ( (  into_dash_iter508 ) ( (  iterable1099 ) ) );
    struct ArrayIter_506 *  it1102 = ( &temp507 );
    while ( ( true ) ) {
        struct Maybe_509  dref1103 = ( (  next510 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_509_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_509_Just_t ) {
                struct envunion505  temp524 = (  fun1101 );
                ( temp524.fun ( &temp524.env ,  ( dref1103 .stuff .Maybe_509_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct TypeSize_532 {
    size_t  f_size;
};

static  struct TypeSize_532   get_dash_typesize531 (  ) {
    struct Line_12  temp533;
    return ( (struct TypeSize_532) { .f_size = ( sizeof( ( (  temp533 ) ) ) ) } );
}

static  struct Line_12 *   cast_dash_ptr534 (    void *  p398 ) {
    return ( (struct Line_12 * ) (  p398 ) );
}

static  size_t   op_dash_mul535 (    size_t  l299 ,    size_t  r301 ) {
    return ( (  l299 ) * (  r301 ) );
}

static  struct Slice_11   allocate530 (    enum CAllocator_10  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize531 ) ( ) ) ) .f_size );
    struct Line_12 *  ptr2371 = ( (  cast_dash_ptr534 ) ( ( ( malloc ) ( (  op_dash_mul535 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_11) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct env536 {
    ;
    ;
    struct Slice_11  new_dash_slice2453;
};

struct Tuple2_538 {
    struct Line_12  field0;
    int32_t  field1;
};

static struct Tuple2_538 Tuple2_538_Tuple2 (  struct Line_12  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_538 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion537 {
    enum Unit_8  (*fun) (  struct env536*  ,    struct Tuple2_538  );
    struct env536 env;
};

static  enum Unit_8   set540 (    struct Slice_11  slice2187 ,    size_t  i2189 ,    struct Line_12  x2191 ) {
    struct Line_12 *  ep2192 = ( (  get_dash_ptr345 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam539 (   struct env536* env ,    struct Tuple2_538  dref2454 ) {
    return ( (  set540 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size280 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

struct SliceIter_543 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_544 {
    int32_t  f_from;
};

struct Zip_542 {
    struct SliceIter_543  f_left_dash_it;
    struct FromIter_544  f_right_dash_it;
};

static  struct Zip_542   into_dash_iter546 (    struct Zip_542  self936 ) {
    return (  self936 );
}

struct Maybe_547 {
    enum {
        Maybe_547_None_t,
        Maybe_547_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_538  field0;
        } Maybe_547_Just_s;
    } stuff;
};

static struct Maybe_547 Maybe_547_Just (  struct Tuple2_538  field0 ) {
    return ( struct Maybe_547 ) { .tag = Maybe_547_Just_t, .stuff = { .Maybe_547_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_509   next549 (    struct SliceIter_543 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_509) { .tag = Maybe_509_None_t } );
    }
    struct Line_12  elem2258 = ( * ( (  offset_dash_ptr346 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_509_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_171   next550 (    struct FromIter_544 *  dref913 ) {
    int32_t  v915 = ( ( (* dref913 ) ) .f_from );
    (* dref913 ) .f_from = (  op_dash_add175 ( ( ( (* dref913 ) ) .f_from ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( ( Maybe_171_Just ) ( (  v915 ) ) );
}

static  struct Maybe_547   next548 (    struct Zip_542 *  self939 ) {
    struct Zip_542  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_509  dref941 = ( (  next549 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_509_None_t ) {
            return ( (struct Maybe_547) { .tag = Maybe_547_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_509_Just_t ) {
                struct Maybe_171  dref943 = ( (  next550 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_547) { .tag = Maybe_547_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next549 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next550 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_547_Just ) ( ( ( Tuple2_538_Tuple2 ) ( ( dref941 .stuff .Maybe_509_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each541 (    struct Zip_542  iterable1099 ,   struct envunion537  fun1101 ) {
    struct Zip_542  temp545 = ( (  into_dash_iter546 ) ( (  iterable1099 ) ) );
    struct Zip_542 *  it1102 = ( &temp545 );
    while ( ( true ) ) {
        struct Maybe_547  dref1103 = ( (  next548 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_547_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_547_Just_t ) {
                struct envunion537  temp551 = (  fun1101 );
                ( temp551.fun ( &temp551.env ,  ( dref1103 .stuff .Maybe_547_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_543   into_dash_iter553 (    struct Slice_11  self2250 ) {
    return ( (struct SliceIter_543) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_544   into_dash_iter554 (    struct FromIter_544  it911 ) {
    return (  it911 );
}

static  struct Zip_542   zip552 (    struct Slice_11  left947 ,    struct FromIter_544  right949 ) {
    struct SliceIter_543  left_dash_it950 = ( (  into_dash_iter553 ) ( (  left947 ) ) );
    struct FromIter_544  right_dash_it951 = ( (  into_dash_iter554 ) ( (  right949 ) ) );
    return ( (struct Zip_542) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  struct FromIter_544   from555 (    int32_t  f908 ) {
    return ( (struct FromIter_544) { .f_from = (  f908 ) } );
}

static  void *   cast_dash_ptr557 (    struct Line_12 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free556 (    enum CAllocator_10  dref2373 ,    struct Slice_11  slice2375 ) {
    if (!(  dref2373 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr557 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full529 (   struct env1* env ,    struct List_9 *  list2452 ) {
    if ( (  eq283 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate530 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq283 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_11  new_dash_slice2453 = ( (  allocate530 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul535 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env536 envinst536 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion537  fun2457 = ( (struct envunion537){ .fun = (  enum Unit_8  (*) (  struct env536*  ,    struct Tuple2_538  ) )lam539 , .env =  envinst536 } );
            ( (  for_dash_each541 ) ( ( (  zip552 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from555 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free556 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add527 (   struct env6* env ,    struct List_9 *  list2460 ,    struct Line_12  elem2462 ) {
    struct envunion7  temp528 = ( (struct envunion7){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full529 , .env =  env->envinst1 } );
    ( temp528.fun ( &temp528.env ,  (  list2460 ) ) );
    ( (  set540 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add356 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam525 (   struct env504* env ,    struct Line_12  x2517 ) {
    struct envunion47  temp526 = ( (struct envunion47){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add527 , .env =  env->envinst6 } );
    return ( temp526.fun ( &temp526.env ,  ( env->list2513 ) ,  (  x2517 ) ) );
}

static  enum Unit_8   add_dash_all502 (   struct env46* env ,    struct List_9 *  list2513 ,    struct Array_52  it2515 ) {
    struct env504 envinst504 = {
        .list2513 =  list2513 ,
        .envinst6 = env->envinst6 ,
    };
    ( (  for_dash_each503 ) ( (  it2515 ) ,  ( (struct envunion505){ .fun = (  enum Unit_8  (*) (  struct env504*  ,    struct Line_12  ) )lam525 , .env =  envinst504 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_9   from_dash_iter492 (   struct env50* env ,    struct Array_52  iter2548 ,    enum CAllocator_10  al2550 ) {
    struct List_9  temp493 = ( (  mk494 ) ( (  al2550 ) ) );
    struct List_9 *  list2551 = ( &temp493 );
    struct envunion51  temp501 = ( (struct envunion51){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Array_52  ) )add_dash_all502 , .env =  env->envinst46 } );
    ( temp501.fun ( &temp501.env ,  (  list2551 ) ,  (  iter2548 ) ) );
    return ( * (  list2551 ) );
}

static  struct Array_52   from_dash_listlike558 (    struct Array_52 *  self369 ) {
    return ( * (  self369 ) );
}

static  void *   cast_dash_ptr566 (    struct Highlight_17 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of567 (    struct Highlight_17 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Highlight_17 *   zeroed564 (  ) {
    struct Highlight_17 *  temp565;
    struct Highlight_17 *  x648 = (  temp565 );
    ( ( memset ) ( ( (  cast_dash_ptr566 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of567 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  struct Highlight_17 *   null_dash_ptr563 (  ) {
    return ( (  zeroed564 ) ( ) );
}

static  struct Slice_16   empty562 (  ) {
    return ( (struct Slice_16) { .f_ptr = ( (  null_dash_ptr563 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_15   mk561 (    enum CAllocator_10  al2436 ) {
    struct Slice_16  elements2437 = ( (  empty562 ) ( ) );
    return ( (struct List_15) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Line_12   mk_dash_line560 (    struct List_13  initial4019 ) {
    return ( (struct Line_12) { .f_line = (  initial4019 ) , .f_invalidated = ( true ) , .f_highlights = ( (  mk561 ) ( ( (  initial4019 ) .f_al ) ) ) } );
}

static  void *   cast_dash_ptr573 (    uint8_t * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of574 (    uint8_t *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  uint8_t *   zeroed571 (  ) {
    uint8_t *  temp572;
    uint8_t *  x648 = (  temp572 );
    ( ( memset ) ( ( (  cast_dash_ptr573 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of574 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  uint8_t *   null_dash_ptr570 (  ) {
    return ( (  zeroed571 ) ( ) );
}

static  struct Slice_14   empty569 (  ) {
    return ( (struct Slice_14) { .f_ptr = ( (  null_dash_ptr570 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_13   mk568 (    enum CAllocator_10  al2436 ) {
    struct Slice_14  elements2437 = ( (  empty569 ) ( ) );
    return ( (struct List_13) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr581 (    struct Changeset_32 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of582 (    struct Changeset_32 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Changeset_32 *   zeroed579 (  ) {
    struct Changeset_32 *  temp580;
    struct Changeset_32 *  x648 = (  temp580 );
    ( ( memset ) ( ( (  cast_dash_ptr581 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of582 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  struct Changeset_32 *   null_dash_ptr578 (  ) {
    return ( (  zeroed579 ) ( ) );
}

static  struct Slice_31   empty577 (  ) {
    return ( (struct Slice_31) { .f_ptr = ( (  null_dash_ptr578 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_30   mk576 (    enum CAllocator_10  al2436 ) {
    struct Slice_31  elements2437 = ( (  empty577 ) ( ) );
    return ( (struct List_30) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_118   mk_dash_actions575 (    enum CAllocator_10  al4008 ) {
    return ( (struct Actions_118) { .f_list = ( (  mk576 ) ( (  al4008 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( ChangesetInputType_119_NoChangeset ) } );
}

static  struct TextBuf_117   mk490 (   struct env125* env ,    enum CAllocator_10  al4124 ) {
    struct envunion126  temp491 = ( (struct envunion126){ .fun = (  struct List_9  (*) (  struct env50*  ,    struct Array_52  ,    enum CAllocator_10  ) )from_dash_iter492 , .env =  env->envinst50 } );
    struct Array_52  temp559 = ( (struct Array_52) { ._arr = { ( (  mk_dash_line560 ) ( ( (  mk568 ) ( (  al4124 ) ) ) ) ) } } );
    return ( (struct TextBuf_117) { .f_al = (  al4124 ) , .f_buf = ( temp491.fun ( &temp491.env ,  ( (  from_dash_listlike558 ) ( ( &temp559 ) ) ) ,  (  al4124 ) ) ) , .f_actions = ( (  mk_dash_actions575 ) ( (  al4124 ) ) ) , .f_filename = ( (struct Maybe_85) { .tag = Maybe_85_None_t } ) , .f_filetype = ( Filetype_120_Text ) } );
}

static  size_t   min591 (    size_t  l1367 ,    size_t  r1369 ) {
    if ( (  cmp302 ( (  l1367 ) , (  r1369 ) ) == 0 ) ) {
        return (  l1367 );
    } else {
        return (  r1369 );
    }
}

static  struct Slice_14   subslice590 (    struct Slice_14  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    uint8_t *  begin_dash_ptr2209 = ( (  offset_dash_ptr353 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp302 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp302 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_14) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub462 ( ( (  min591 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_14) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct Slice_14   from589 (    struct Slice_14  slice2213 ,    size_t  from2215 ) {
    return ( (  subslice590 ) ( (  slice2213 ) ,  (  from2215 ) ,  ( (  slice2213 ) .f_count ) ) );
}

static  struct StrView_27   byte_dash_substr_dash_from588 (    struct StrView_27  s2614 ,    size_t  from2616 ) {
    return ( (struct StrView_27) { .f_contents = ( (  from589 ) ( ( (  s2614 ) .f_contents ) ,  (  from2616 ) ) ) } );
}

static  struct StrView_27   drop_dash_while585 (    struct StrView_27  sv2643 ,    bool (*  fun2645 )(    struct Char_65  ) ) {
    size_t  from2646 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_293  temp586 =  into_dash_iter294 ( ( (  chars295 ) ( (  sv2643 ) ) ) );
    while (true) {
        struct Maybe_351  __cond587 =  next352 (&temp586);
        if (  __cond587 .tag == 0 ) {
            break;
        }
        struct Char_65  c2648 =  __cond587 .stuff .Maybe_351_Just_s .field0;
        if ( ( ! ( (  fun2645 ) ( (  c2648 ) ) ) ) ) {
            break;
        }
        from2646 = (  op_dash_add356 ( (  from2646 ) , ( (  c2648 ) .f_num_dash_bytes ) ) );
    }
    return ( (  byte_dash_substr_dash_from588 ) ( (  sv2643 ) ,  (  from2646 ) ) );
}

static  bool   lam592 (    struct Char_65  c4031 ) {
    return (  eq360 ( (  c4031 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) );
}

static  uint8_t   undefined596 (  ) {
    uint8_t  temp597;
    return (  temp597 );
}

static  uint8_t   or_dash_fail595 (    struct Maybe_74  x1353 ,    struct StrConcat_304  errmsg1355 ) {
    struct Maybe_74  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_74_None_t ) {
        ( (  panic303 ) ( (  errmsg1355 ) ) );
        return ( (  undefined596 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_74_Just_t ) {
            return ( dref1356 .stuff .Maybe_74_Just_s .field0 );
        }
    }
}

static  struct Maybe_74   try_dash_get598 (    struct Slice_14  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp302 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_74) { .tag = Maybe_74_None_t } );
    }
    uint8_t *  elem_dash_ptr2179 = ( (  offset_dash_ptr353 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_74_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  uint8_t   get594 (    struct Slice_14  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail595 ) ( ( (  try_dash_get598 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   elem_dash_get593 (    struct Slice_14  self2195 ,    size_t  idx2197 ) {
    return ( (  get594 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

static  uint8_t   ascii_dash_u8599 (    char  c1488 ) {
    return ( ( (uint8_t ) (  c1488 ) ) );
}

static  struct StrView_27   byte_dash_substr600 (    struct StrView_27  s2607 ,    size_t  from2609 ,    size_t  to2611 ) {
    return ( (struct StrView_27) { .f_contents = ( (  subslice590 ) ( ( (  s2607 ) .f_contents ) ,  (  from2609 ) ,  (  to2611 ) ) ) } );
}

static  struct Maybe_85   extension584 (    struct StrView_27  path4029 ) {
    struct StrView_27  path4032 = ( (  drop_dash_while585 ) ( (  path4029 ) ,  (  lam592 ) ) );
    size_t  i4033 = ( ( (  path4032 ) .f_contents ) .f_count );
    while ( (  cmp302 ( (  i4033 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        i4033 = (  op_dash_sub462 ( (  i4033 ) , (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq324 ( (  elem_dash_get593 ( ( (  path4032 ) .f_contents ) , (  i4033 ) ) ) , ( (  ascii_dash_u8599 ) ( ( (  from_dash_charlike282 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) ) ) {
            break;
        }
    }
    if ( (  eq283 ( (  i4033 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    struct StrView_27  ext4034 = ( (  byte_dash_substr600 ) ( (  path4032 ) ,  (  op_dash_add356 ( (  i4033 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( ( (  path4032 ) .f_contents ) .f_count ) ) );
    return ( ( Maybe_85_Just ) ( (  ext4034 ) ) );
}

struct Array_602 {
    struct StrView_27 _arr [2];
};

struct env604 {
    ;
    struct StrView_27  x1180;
};

struct envunion605 {
    bool  (*fun) (  struct env604*  ,    struct StrView_27  );
    struct env604 env;
};

struct env607 {
    struct envunion605  fun1160;
};

struct envunion608 {
    bool  (*fun) (  struct env607*  ,    struct StrView_27  ,    bool  );
    struct env607 env;
};

struct ArrayIter_609 {
    struct Array_602  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_609   into_dash_iter610 (    struct Array_602  self2102 ) {
    return ( (struct ArrayIter_609) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr614 (    struct Array_602 *  p398 ) {
    return ( (struct StrView_27 * ) (  p398 ) );
}

static  struct StrView_27 *   offset_dash_ptr615 (    struct StrView_27 *  x377 ,    int64_t  count379 ) {
    struct StrView_27  temp616;
    return ( (struct StrView_27 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp616 ) ) ) ) ) ) ) ) );
}

static  struct StrView_27 *   get_dash_ptr613 (    struct Array_602 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp302 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2029 ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) ) {
        ( (  panic513 ) ( ( ( StrConcat_514_StrConcat ) ( ( ( StrConcat_515_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 2 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2030 = ( ( (  cast_dash_ptr614 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr615 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct StrView_27   get612 (    struct Array_602 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr613 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_85   next611 (    struct ArrayIter_609 *  self2109 ) {
    if ( (  cmp302 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    struct StrView_27  e2111 = ( (  get612 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add356 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_85_Just ) ( (  e2111 ) ) );
}

static  bool   reduce606 (    struct Array_602  iterable1118 ,    bool  base1120 ,   struct envunion608  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_609  it1124 = ( (  into_dash_iter610 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_85  dref1125 = ( (  next611 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_85_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_85_Just_t ) {
                struct envunion608  temp617 = (  fun1122 );
                x1123 = ( temp617.fun ( &temp617.env ,  ( dref1125 .stuff .Maybe_85_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp618 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp618);
    abort ( );
    ( Unit_8_Unit );
    bool  temp619;
    return (  temp619 );
}

static  bool   lam620 (   struct env607* env ,    struct StrView_27  e1162 ,    bool  x1164 ) {
    struct envunion605  temp621 = ( env->fun1160 );
    return ( ( temp621.fun ( &temp621.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any603 (    struct Array_602  it1158 ,   struct envunion605  fun1160 ) {
    struct env607 envinst607 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce606 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion608){ .fun = (  bool  (*) (  struct env607*  ,    struct StrView_27  ,    bool  ) )lam620 , .env =  envinst607 } ) ) );
}

struct SliceIter_627 {
    struct Slice_14  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_626 {
    struct SliceIter_627  f_left_dash_it;
    struct SliceIter_627  f_right_dash_it;
};

struct Tuple2_628 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_628 Tuple2_628_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_628 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env630 {
    bool (*  fun1151 )(    struct Tuple2_628  );
};

struct envunion631 {
    bool  (*fun) (  struct env630*  ,    struct Tuple2_628  ,    bool  );
    struct env630 env;
};

static  struct Zip_626   into_dash_iter632 (    struct Zip_626  self936 ) {
    return (  self936 );
}

struct Maybe_633 {
    enum {
        Maybe_633_None_t,
        Maybe_633_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_628  field0;
        } Maybe_633_Just_s;
    } stuff;
};

static struct Maybe_633 Maybe_633_Just (  struct Tuple2_628  field0 ) {
    return ( struct Maybe_633 ) { .tag = Maybe_633_Just_t, .stuff = { .Maybe_633_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_74   next635 (    struct SliceIter_627 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_74) { .tag = Maybe_74_None_t } );
    }
    uint8_t  elem2258 = ( * ( (  offset_dash_ptr353 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_74_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_633   next634 (    struct Zip_626 *  self939 ) {
    struct Zip_626  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_74  dref941 = ( (  next635 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_74_None_t ) {
            return ( (struct Maybe_633) { .tag = Maybe_633_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_74_Just_t ) {
                struct Maybe_74  dref943 = ( (  next635 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_74_None_t ) {
                    return ( (struct Maybe_633) { .tag = Maybe_633_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_74_Just_t ) {
                        ( (  next635 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next635 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_633_Just ) ( ( ( Tuple2_628_Tuple2 ) ( ( dref941 .stuff .Maybe_74_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_74_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce629 (    struct Zip_626  iterable1118 ,    bool  base1120 ,   struct envunion631  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct Zip_626  it1124 = ( (  into_dash_iter632 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_633  dref1125 = ( (  next634 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_633_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_633_Just_t ) {
                struct envunion631  temp636 = (  fun1122 );
                x1123 = ( temp636.fun ( &temp636.env ,  ( dref1125 .stuff .Maybe_633_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp637 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp637);
    abort ( );
    ( Unit_8_Unit );
    bool  temp638;
    return (  temp638 );
}

static  bool   lam639 (   struct env630* env ,    struct Tuple2_628  e1153 ,    bool  x1155 ) {
    return ( ( ( env->fun1151 ) ( (  e1153 ) ) ) && (  x1155 ) );
}

static  bool   all625 (    struct Zip_626  it1149 ,    bool (*  fun1151 )(    struct Tuple2_628  ) ) {
    struct env630 envinst630 = {
        .fun1151 =  fun1151 ,
    };
    return ( (  reduce629 ) ( (  it1149 ) ,  ( true ) ,  ( (struct envunion631){ .fun = (  bool  (*) (  struct env630*  ,    struct Tuple2_628  ,    bool  ) )lam639 , .env =  envinst630 } ) ) );
}

static  struct SliceIter_627   into_dash_iter641 (    struct Slice_14  self2250 ) {
    return ( (struct SliceIter_627) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_626   zip640 (    struct Slice_14  left947 ,    struct Slice_14  right949 ) {
    struct SliceIter_627  left_dash_it950 = ( (  into_dash_iter641 ) ( (  left947 ) ) );
    struct SliceIter_627  right_dash_it951 = ( (  into_dash_iter641 ) ( (  right949 ) ) );
    return ( (struct Zip_626) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  bool   lam642 (    struct Tuple2_628  dref2290 ) {
    return (  eq324 ( ( dref2290 .field0 ) , ( dref2290 .field1 ) ) );
}

static  bool   eq624 (    struct Slice_14  l2287 ,    struct Slice_14  r2289 ) {
    if ( ( !  eq283 ( ( (  l2287 ) .f_count ) , ( (  r2289 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all625 ) ( ( (  zip640 ) ( (  l2287 ) ,  (  r2289 ) ) ) ,  (  lam642 ) ) );
}

static  bool   eq623 (    struct StrView_27  l2651 ,    struct StrView_27  r2653 ) {
    return (  eq624 ( ( (  l2651 ) .f_contents ) , ( (  r2653 ) .f_contents ) ) );
}

static  bool   lam622 (   struct env604* env ,    struct StrView_27  e1184 ) {
    return (  eq623 ( (  e1184 ) , ( env->x1180 ) ) );
}

static  bool   one_dash_of601 (    struct StrView_27  x1180 ,    struct Array_602  it1182 ) {
    struct env604 envinst604 = {
        .x1180 =  x1180 ,
    };
    return ( (  any603 ) ( (  it1182 ) ,  ( (struct envunion605){ .fun = (  bool  (*) (  struct env604*  ,    struct StrView_27  ) )lam622 , .env =  envinst604 } ) ) );
}

static  struct Array_602   from_dash_listlike643 (    struct Array_602 *  self369 ) {
    return ( * (  self369 ) );
}

static  struct StrView_27   from_dash_charlike646 (    uint8_t *  ptr81 ,    size_t  count83 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = (  ptr81 ) , .f_count = (  count83 ) } ) } );
}

static  enum Filetype_120   detect_dash_filetype_dash_from_dash_filename583 (    struct StrView_27  filename4026 ) {
    struct Maybe_85  mext4035 = ( (  extension584 ) ( (  filename4026 ) ) );
    struct Maybe_85  dref4036 = (  mext4035 );
    if ( dref4036.tag == Maybe_85_None_t ) {
        return ( Filetype_120_Text );
    }
    else {
        if ( dref4036.tag == Maybe_85_Just_t ) {
            struct Array_602  temp644 = ( (struct Array_602) { ._arr = { ( (  from_dash_string220 ) ( ( (uint8_t*)"kc" ) ,  ( 2 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"kkc" ) ,  ( 3 ) ) ) } } );
            if ( ( (  one_dash_of601 ) ( ( dref4036 .stuff .Maybe_85_Just_s .field0 ) ,  ( (  from_dash_listlike643 ) ( ( &temp644 ) ) ) ) ) ) {
                return ( Filetype_120_KC );
            } else {
                if ( (  eq623 ( ( dref4036 .stuff .Maybe_85_Just_s .field0 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"md" ) ,  ( 2 ) ) ) ) ) ) {
                    return ( Filetype_120_Markdown );
                } else {
                    if ( (  eq623 ( ( dref4036 .stuff .Maybe_85_Just_s .field0 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"gcode" ) ,  ( 5 ) ) ) ) ) ) {
                        return ( Filetype_120_GCode );
                    } else {
                        struct Array_602  temp645 = ( (struct Array_602) { ._arr = { ( (  from_dash_string220 ) ( ( (uint8_t*)"bf" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike646 ) ( ( (uint8_t*)"b" ) ,  ( 1 ) ) ) } } );
                        if ( ( (  one_dash_of601 ) ( ( dref4036 .stuff .Maybe_85_Just_s .field0 ) ,  ( (  from_dash_listlike643 ) ( ( &temp645 ) ) ) ) ) ) {
                            return ( Filetype_120_Brainfuck );
                        } else {
                            return ( Filetype_120_Text );
                        }
                    }
                }
            }
        }
    }
}

struct TypeSize_650 {
    size_t  f_size;
};

static  struct TypeSize_650   get_dash_typesize649 (  ) {
    uint8_t  temp651;
    return ( (struct TypeSize_650) { .f_size = ( sizeof( ( (  temp651 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr652 (    void *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  struct Slice_14   allocate648 (    enum CAllocator_10  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize649 ) ( ) ) ) .f_size );
    uint8_t *  ptr2371 = ( (  cast_dash_ptr652 ) ( ( ( malloc ) ( (  op_dash_mul535 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_14) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct StrConcat_655 {
    struct StrConcat_305  field0;
    struct StrView_27  field1;
};

static struct StrConcat_655 StrConcat_655_StrConcat (  struct StrConcat_305  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_655 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_658 {
    struct StrView_27  field0;
    struct StrConcat_655  field1;
};

static struct StrConcat_658 StrConcat_658_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_655  field1 ) {
    return ( struct StrConcat_658 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_657 {
    struct StrConcat_658  field0;
    struct Char_65  field1;
};

static struct StrConcat_657 StrConcat_657_StrConcat (  struct StrConcat_658  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_657 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str660 (    struct StrConcat_655  self1302 ) {
    struct StrConcat_655  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str313 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str310 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str659 (    struct StrConcat_658  self1302 ) {
    struct StrConcat_658  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str310 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str660 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str656 (    struct StrConcat_657  self1302 ) {
    struct StrConcat_657  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str659 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic654 (    struct StrConcat_655  errmsg1343 ) {
    ( (  print_dash_str656 ) ( ( ( StrConcat_657_StrConcat ) ( ( ( StrConcat_658_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct Zip_662 {
    struct SliceIter_627  f_left_dash_it;
    struct FromIter_544  f_right_dash_it;
};

struct env663 {
    ;
    struct Slice_14  dest2281;
    ;
};

struct Tuple2_665 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_665 Tuple2_665_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_665 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion664 {
    enum Unit_8  (*fun) (  struct env663*  ,    struct Tuple2_665  );
    struct env663 env;
};

static  struct Zip_662   into_dash_iter667 (    struct Zip_662  self936 ) {
    return (  self936 );
}

struct Maybe_668 {
    enum {
        Maybe_668_None_t,
        Maybe_668_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_665  field0;
        } Maybe_668_Just_s;
    } stuff;
};

static struct Maybe_668 Maybe_668_Just (  struct Tuple2_665  field0 ) {
    return ( struct Maybe_668 ) { .tag = Maybe_668_Just_t, .stuff = { .Maybe_668_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_668   next669 (    struct Zip_662 *  self939 ) {
    struct Zip_662  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_74  dref941 = ( (  next635 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_74_None_t ) {
            return ( (struct Maybe_668) { .tag = Maybe_668_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_74_Just_t ) {
                struct Maybe_171  dref943 = ( (  next550 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_668) { .tag = Maybe_668_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next635 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next550 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_668_Just ) ( ( ( Tuple2_665_Tuple2 ) ( ( dref941 .stuff .Maybe_74_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each661 (    struct Zip_662  iterable1099 ,   struct envunion664  fun1101 ) {
    struct Zip_662  temp666 = ( (  into_dash_iter667 ) ( (  iterable1099 ) ) );
    struct Zip_662 *  it1102 = ( &temp666 );
    while ( ( true ) ) {
        struct Maybe_668  dref1103 = ( (  next669 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_668_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_668_Just_t ) {
                struct envunion664  temp670 = (  fun1101 );
                ( temp670.fun ( &temp670.env ,  ( dref1103 .stuff .Maybe_668_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_662   zip671 (    struct Slice_14  left947 ,    struct FromIter_544  right949 ) {
    struct SliceIter_627  left_dash_it950 = ( (  into_dash_iter641 ) ( (  left947 ) ) );
    struct FromIter_544  right_dash_it951 = ( (  into_dash_iter554 ) ( (  right949 ) ) );
    return ( (struct Zip_662) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  uint8_t *   get_dash_ptr674 (    struct Slice_14  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp302 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr2173 = ( (  offset_dash_ptr353 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  enum Unit_8   set673 (    struct Slice_14  slice2187 ,    size_t  i2189 ,    uint8_t  x2191 ) {
    uint8_t *  ep2192 = ( (  get_dash_ptr674 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam672 (   struct env663* env ,    struct Tuple2_665  dref2282 ) {
    return ( (  set673 ) ( ( env->dest2281 ) ,  ( (  i32_dash_size280 ) ( ( dref2282 .field1 ) ) ) ,  ( dref2282 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to653 (    struct Slice_14  src2279 ,    struct Slice_14  dest2281 ) {
    if ( (  cmp302 ( ( (  src2279 ) .f_count ) , ( (  dest2281 ) .f_count ) ) == 2 ) ) {
        ( (  panic654 ) ( ( ( StrConcat_655_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2279 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2281 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env663 envinst663 = {
        .dest2281 =  dest2281 ,
    };
    ( (  for_dash_each661 ) ( ( (  zip671 ) ( (  src2279 ) ,  ( (  from555 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion664){ .fun = (  enum Unit_8  (*) (  struct env663*  ,    struct Tuple2_665  ) )lam672 , .env =  envinst663 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t   char_dash_u8675 (    struct Char_65  c1440 ) {
    struct CharDestructured_321  dref1441 = ( (  destructure323 ) ( (  c1440 ) ) );
    if ( dref1441.tag == CharDestructured_321_Ref_t ) {
        return ( * ( ( dref1441 .stuff .CharDestructured_321_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref1441.tag == CharDestructured_321_Scalar_t ) {
            return ( (  u32_dash_u8160 ) ( ( ( dref1441 .stuff .CharDestructured_321_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct StrView_27   clone_dash_0647 (    struct StrView_27  s2576 ,    enum CAllocator_10  al2578 ) {
    size_t  cnt2579 = ( ( (  s2576 ) .f_contents ) .f_count );
    struct Slice_14  nus2580 = ( (  allocate648 ) ( (  al2578 ) ,  (  op_dash_add356 ( (  cnt2579 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to653 ) ( ( (  s2576 ) .f_contents ) ,  (  nus2580 ) ) );
    ( (  set673 ) ( (  nus2580 ) ,  (  cnt2579 ) ,  ( (  char_dash_u8675 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( (  nus2580 ) .f_ptr ) , .f_count = (  cnt2579 ) } ) } );
}

static  const char*   from_dash_charlike677 (    uint8_t *  ptr77 ,    size_t  dref78 ) {
    return ( ( (const char* ) (  ptr77 ) ) );
}

static  void *   cast_dash_ptr682 (    FILE * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of683 (    FILE *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  FILE *   zeroed680 (  ) {
    FILE *  temp681;
    FILE *  x648 = (  temp681 );
    ( ( memset ) ( ( (  cast_dash_ptr682 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of683 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  FILE *   null_dash_ptr679 (  ) {
    return ( (  zeroed680 ) ( ) );
}

static  bool   is_dash_ptr_dash_null678 (    FILE *  p658 ) {
    return ( (  p658 ) == ( (  null_dash_ptr679 ) ( ) ) );
}

static  int32_t   seek_dash_end684 (  ) {
    return (  from_dash_integral56 ( 2 ) );
}

static  int32_t   seek_dash_set685 (  ) {
    return (  from_dash_integral56 ( 0 ) );
}

static  struct Char_65   nullchar686 (  ) {
    return ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_85   try_dash_read_dash_contents676 (    const char*  filename3164 ,    enum CAllocator_10  al3166 ) {
    FILE *  file3167 = ( ( fopen ) ( (  filename3164 ) ,  ( (  from_dash_charlike677 ) ( ( (uint8_t*)"r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null678 ) ( (  file3167 ) ) ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    ( ( fseek ) ( (  file3167 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_end684 ) ( ) ) ) );
    int32_t  file_dash_size3168 = ( ( ftell ) ( (  file3167 ) ) );
    ( ( fseek ) ( (  file3167 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_set685 ) ( ) ) ) );
    struct Slice_14  file_dash_buf3169 = ( ( (  allocate648 ) ( (  al3166 ) ,  (  op_dash_add356 ( ( (  i32_dash_size280 ) ( (  file_dash_size3168 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf3169 ) .f_ptr ) ,  (  file_dash_size3168 ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  file3167 ) ) );
    ( (  set673 ) ( (  file_dash_buf3169 ) ,  ( (  i32_dash_size280 ) ( (  file_dash_size3168 ) ) ) ,  ( (  char_dash_u8675 ) ( ( (  nullchar686 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file3167 ) ) );
    struct StrView_27  str3170 = ( (struct StrView_27) { .f_contents = ( (  subslice590 ) ( (  file_dash_buf3169 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub462 ( ( (  file_dash_buf3169 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_85_Just ) ( (  str3170 ) ) );
}

static  const char*   cast688 (    uint8_t *  x395 ) {
    return ( (const char* ) (  x395 ) );
}

static  const char*   as_dash_const_dash_str687 (    struct StrView_27  s2583 ) {
    return ( (  cast688 ) ( ( ( (  s2583 ) .f_contents ) .f_ptr ) ) );
}

static  void *   cast_dash_ptr691 (    uint8_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free690 (    enum CAllocator_10  dref2373 ,    struct Slice_14  slice2375 ) {
    if (!(  dref2373 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr691 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free689 (    struct StrView_27  s2591 ,    enum CAllocator_10  al2593 ) {
    ( (  free690 ) ( (  al2593 ) ,  ( (struct Slice_14) { .f_ptr = ( ( (  s2591 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_8_Unit );
}

struct Tuple2_693 {
    struct Maybe_74  field0;
    struct Maybe_74  field1;
};

static struct Tuple2_693 Tuple2_693_Tuple2 (  struct Maybe_74  field0 ,  struct Maybe_74  field1 ) {
    return ( struct Tuple2_693 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq692 (    struct Maybe_74  l150 ,    struct Maybe_74  r152 ) {
    struct Tuple2_693  dref153 = ( ( Tuple2_693_Tuple2 ) ( (  l150 ) ,  (  r152 ) ) );
    if ( dref153 .field0.tag == Maybe_74_None_t && dref153 .field1.tag == Maybe_74_None_t ) {
        return ( true );
    }
    else {
        if ( dref153 .field0.tag == Maybe_74_Just_t && dref153 .field1.tag == Maybe_74_Just_t ) {
            return (  eq324 ( ( dref153 .field0 .stuff .Maybe_74_Just_s .field0 ) , ( dref153 .field1 .stuff .Maybe_74_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  enum Ordering_174   cmp697 (    struct Pos_26  l3838 ,    struct Pos_26  r3840 ) {
    enum Ordering_174  dref3841 = ( (  cmp173 ) ( ( (  l3838 ) .f_line ) ,  ( (  r3840 ) .f_line ) ) );
    switch (  dref3841 ) {
        case Ordering_174_EQ : {
            return ( (  cmp173 ) ( ( (  l3838 ) .f_bi ) ,  ( (  r3840 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_174  els3842 =  dref3841;
            return (  els3842 );
            break;
        }
    }
}

static  struct Pos_26   min696 (    struct Pos_26  l1367 ,    struct Pos_26  r1369 ) {
    if ( (  cmp697 ( (  l1367 ) , (  r1369 ) ) == 0 ) ) {
        return (  l1367 );
    } else {
        return (  r1369 );
    }
}

static  struct Pos_26   max698 (    struct Pos_26  l1372 ,    struct Pos_26  r1374 ) {
    if ( (  cmp697 ( (  l1372 ) , (  r1374 ) ) == 2 ) ) {
        return (  l1372 );
    } else {
        return (  r1374 );
    }
}

static  bool   eq700 (    int32_t  l115 ,    int32_t  r117 ) {
    return ( (  l115 ) == (  r117 ) );
}

static  bool   eq699 (    struct Pos_26  l3833 ,    struct Pos_26  r3835 ) {
    return ( (  eq700 ( ( (  l3833 ) .f_line ) , ( (  r3835 ) .f_line ) ) ) && (  eq700 ( ( (  l3833 ) .f_bi ) , ( (  r3835 ) .f_bi ) ) ) );
}

static  enum Unit_8   set704 (    struct List_9 *  list2426 ,    size_t  i2428 ,    struct Line_12  elem2430 ) {
    if ( ( (  cmp302 ( (  i2428 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2428 ) , ( ( * (  list2426 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2428 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2426 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set540 ) ( ( ( * (  list2426 ) ) .f_elements ) ,  (  i2428 ) ,  (  elem2430 ) ) );
    return ( Unit_8_Unit );
}

struct env711 {
    struct List_13 *  list2513;
    struct env19 envinst19;
};

struct envunion712 {
    enum Unit_8  (*fun) (  struct env711*  ,    uint8_t  );
    struct env711 env;
};

static  enum Unit_8   for_dash_each710 (    struct Slice_14  iterable1099 ,   struct envunion712  fun1101 ) {
    struct SliceIter_627  temp713 = ( (  into_dash_iter641 ) ( (  iterable1099 ) ) );
    struct SliceIter_627 *  it1102 = ( &temp713 );
    while ( ( true ) ) {
        struct Maybe_74  dref1103 = ( (  next635 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_74_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_74_Just_t ) {
                struct envunion712  temp714 = (  fun1101 );
                ( temp714.fun ( &temp714.env ,  ( dref1103 .stuff .Maybe_74_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct env720 {
    ;
    ;
    struct Slice_14  new_dash_slice2453;
};

struct envunion721 {
    enum Unit_8  (*fun) (  struct env720*  ,    struct Tuple2_665  );
    struct env720 env;
};

static  enum Unit_8   lam722 (   struct env720* env ,    struct Tuple2_665  dref2454 ) {
    return ( (  set673 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size280 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

static  enum Unit_8   for_dash_each723 (    struct Zip_662  iterable1099 ,   struct envunion721  fun1101 ) {
    struct Zip_662  temp724 = ( (  into_dash_iter667 ) ( (  iterable1099 ) ) );
    struct Zip_662 *  it1102 = ( &temp724 );
    while ( ( true ) ) {
        struct Maybe_668  dref1103 = ( (  next669 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_668_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_668_Just_t ) {
                struct envunion721  temp725 = (  fun1101 );
                ( temp725.fun ( &temp725.env ,  ( dref1103 .stuff .Maybe_668_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full719 (   struct env2* env ,    struct List_13 *  list2452 ) {
    if ( (  eq283 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate648 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq283 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_14  new_dash_slice2453 = ( (  allocate648 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul535 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env720 envinst720 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion721  fun2457 = ( (struct envunion721){ .fun = (  enum Unit_8  (*) (  struct env720*  ,    struct Tuple2_665  ) )lam722 , .env =  envinst720 } );
            ( (  for_dash_each723 ) ( ( (  zip671 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from555 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free690 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add717 (   struct env19* env ,    struct List_13 *  list2460 ,    uint8_t  elem2462 ) {
    struct envunion20  temp718 = ( (struct envunion20){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_13 *  ) )grow_dash_if_dash_full719 , .env =  env->envinst2 } );
    ( temp718.fun ( &temp718.env ,  (  list2460 ) ) );
    ( (  set673 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add356 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam715 (   struct env711* env ,    uint8_t  x2517 ) {
    struct envunion49  temp716 = ( (struct envunion49){ .fun = (  enum Unit_8  (*) (  struct env19*  ,    struct List_13 *  ,    uint8_t  ) )add717 , .env =  env->envinst19 } );
    return ( temp716.fun ( &temp716.env ,  ( env->list2513 ) ,  (  x2517 ) ) );
}

static  enum Unit_8   add_dash_all709 (   struct env48* env ,    struct List_13 *  list2513 ,    struct Slice_14  it2515 ) {
    struct env711 envinst711 = {
        .list2513 =  list2513 ,
        .envinst19 = env->envinst19 ,
    };
    ( (  for_dash_each710 ) ( (  it2515 ) ,  ( (struct envunion712){ .fun = (  enum Unit_8  (*) (  struct env711*  ,    uint8_t  ) )lam715 , .env =  envinst711 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_13   from_dash_iter706 (   struct env53* env ,    struct Slice_14  iter2548 ,    enum CAllocator_10  al2550 ) {
    struct List_13  temp707 = ( (  mk568 ) ( (  al2550 ) ) );
    struct List_13 *  list2551 = ( &temp707 );
    struct envunion54  temp708 = ( (struct envunion54){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all709 , .env =  env->envinst48 } );
    ( temp708.fun ( &temp708.env ,  (  list2551 ) ,  (  iter2548 ) ) );
    return ( * (  list2551 ) );
}

static  struct StrView_27   or_dash_else727 (    struct Maybe_85  self1360 ,    struct StrView_27  alt1362 ) {
    struct Maybe_85  dref1363 = (  self1360 );
    if ( dref1363.tag == Maybe_85_None_t ) {
        return (  alt1362 );
    }
    else {
        if ( dref1363.tag == Maybe_85_Just_t ) {
            return ( dref1363 .stuff .Maybe_85_Just_s .field0 );
        }
    }
}

struct LineIter_729 {
    struct StrView_27  f_og;
    size_t  f_last;
};

static  struct Maybe_85   next730 (    struct LineIter_729 *  self2686 ) {
    if ( (  cmp302 ( ( ( * (  self2686 ) ) .f_last ) , ( ( ( ( * (  self2686 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    size_t  i2687 = ( ( * (  self2686 ) ) .f_last );
    while ( ( (  cmp302 ( (  i2687 ) , ( ( ( ( * (  self2686 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq324 ( ( (  get594 ) ( ( ( ( * (  self2686 ) ) .f_og ) .f_contents ) ,  (  i2687 ) ) ) , ( (  char_dash_u8675 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2687 = (  op_dash_add356 ( (  i2687 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_27  line2688 = ( (  byte_dash_substr600 ) ( ( ( * (  self2686 ) ) .f_og ) ,  ( ( * (  self2686 ) ) .f_last ) ,  (  i2687 ) ) );
    if ( (  cmp302 ( (  i2687 ) , ( ( ( ( * (  self2686 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2687 = (  op_dash_add356 ( (  i2687 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2686 ) .f_last = (  i2687 );
    return ( ( Maybe_85_Just ) ( (  line2688 ) ) );
}

static  struct LineIter_729   into_dash_iter732 (    struct LineIter_729  self2683 ) {
    return (  self2683 );
}

static  struct Maybe_85   head728 (    struct LineIter_729  it1167 ) {
    struct LineIter_729  temp731 = ( (  into_dash_iter732 ) ( (  it1167 ) ) );
    return ( (  next730 ) ( ( &temp731 ) ) );
}

static  struct LineIter_729   lines733 (    struct StrView_27  s2680 ) {
    return ( (struct LineIter_729) { .f_og = (  s2680 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env738 {
    struct Char_65  c2664;
    ;
};

struct envunion739 {
    bool  (*fun) (  struct env738*  ,    struct Char_65  );
    struct env738 env;
};

struct SplitIter_737 {
    struct StrView_27  f_og;
    size_t  f_last;
    struct envunion739  f_fun;
};

struct Drop_736 {
    struct SplitIter_737  field0;
    size_t  field1;
};

static struct Drop_736 Drop_736_Drop (  struct SplitIter_737  field0 ,  size_t  field1 ) {
    return ( struct Drop_736 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_735 {
    struct Drop_736  f_left_dash_it;
    struct FromIter_544  f_right_dash_it;
};

static  struct Zip_735   into_dash_iter740 (    struct Zip_735  self936 ) {
    return (  self936 );
}

static  struct Drop_736   into_dash_iter742 (    struct Drop_736  self853 ) {
    return (  self853 );
}

static  struct Zip_735   zip741 (    struct Drop_736  left947 ,    struct FromIter_544  right949 ) {
    struct Drop_736  left_dash_it950 = ( (  into_dash_iter742 ) ( (  left947 ) ) );
    struct FromIter_544  right_dash_it951 = ( (  into_dash_iter554 ) ( (  right949 ) ) );
    return ( (struct Zip_735) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  struct SplitIter_737   into_dash_iter744 (    struct SplitIter_737  self2669 ) {
    return (  self2669 );
}

static  struct Drop_736   drop743 (    struct SplitIter_737  iterable860 ,    size_t  i862 ) {
    struct SplitIter_737  it863 = ( (  into_dash_iter744 ) ( (  iterable860 ) ) );
    return ( ( Drop_736_Drop ) ( (  it863 ) ,  (  i862 ) ) );
}

static  struct SplitIter_737   split_dash_by_dash_filter746 (    struct StrView_27  s2657 ,   struct envunion739  fun2659 ) {
    return ( (struct SplitIter_737) { .f_og = (  s2657 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2659 ) } );
}

static  bool   lam747 (   struct env738* env ,    struct Char_65  cc2666 ) {
    return (  eq360 ( (  cc2666 ) , ( env->c2664 ) ) );
}

static  struct SplitIter_737   split_dash_by_dash_each745 (    struct StrView_27  s2662 ,    struct Char_65  c2664 ) {
    struct env738 envinst738 = {
        .c2664 =  c2664 ,
    };
    return ( (  split_dash_by_dash_filter746 ) ( (  s2662 ) ,  ( (struct envunion739){ .fun = (  bool  (*) (  struct env738*  ,    struct Char_65  ) )lam747 , .env =  envinst738 } ) ) );
}

struct Tuple2_750 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct Tuple2_750 Tuple2_750_Tuple2 (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_750 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_749 {
    enum {
        Maybe_749_None_t,
        Maybe_749_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_750  field0;
        } Maybe_749_Just_s;
    } stuff;
};

static struct Maybe_749 Maybe_749_Just (  struct Tuple2_750  field0 ) {
    return ( struct Maybe_749 ) { .tag = Maybe_749_Just_t, .stuff = { .Maybe_749_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_85   next753 (    struct SplitIter_737 *  self2672 ) {
    if ( (  cmp302 ( ( ( * (  self2672 ) ) .f_last ) , ( ( ( ( * (  self2672 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    size_t  i2673 = ( ( * (  self2672 ) ) .f_last );
    while ( (  cmp302 ( (  i2673 ) , ( ( ( ( * (  self2672 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2674 = ( (  get_dash_ptr674 ) ( ( ( ( * (  self2672 ) ) .f_og ) .f_contents ) ,  (  i2673 ) ) );
        struct Char_65  c2675 = ( (  scan_dash_from_dash_mem339 ) ( (  ptr2674 ) ) );
        struct envunion739  temp754 = ( ( * (  self2672 ) ) .f_fun );
        if ( ( temp754.fun ( &temp754.env ,  (  c2675 ) ) ) ) {
            break;
        }
        i2673 = (  op_dash_add356 ( (  i2673 ) , ( (  next_dash_char340 ) ( (  ptr2674 ) ) ) ) );
    }
    struct StrView_27  line2676 = ( (  byte_dash_substr600 ) ( ( ( * (  self2672 ) ) .f_og ) ,  ( ( * (  self2672 ) ) .f_last ) ,  (  i2673 ) ) );
    i2673 = (  op_dash_add356 ( (  i2673 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2672 ) .f_last = (  i2673 );
    return ( ( Maybe_85_Just ) ( (  line2676 ) ) );
}

static  struct Maybe_85   next752 (    struct Drop_736 *  dref855 ) {
    while ( (  cmp302 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next753 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
        (* dref855 ) .field1 = (  op_dash_sub462 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next753 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
}

static  struct Maybe_749   next751 (    struct Zip_735 *  self939 ) {
    struct Zip_735  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_85  dref941 = ( (  next752 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_85_None_t ) {
            return ( (struct Maybe_749) { .tag = Maybe_749_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_85_Just_t ) {
                struct Maybe_171  dref943 = ( (  next550 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_749) { .tag = Maybe_749_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next752 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next550 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_749_Just ) ( ( ( Tuple2_750_Tuple2 ) ( ( dref941 .stuff .Maybe_85_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion757 {
    struct List_13  (*fun) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  );
    struct env53 env;
};

static  enum Unit_8   insert759 (   struct env37* env ,    struct List_9 *  list2465 ,    size_t  i2467 ,    struct Line_12  elem2469 ) {
    if ( ( (  cmp302 ( (  i2467 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2467 ) , ( ( * (  list2465 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2467 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2465 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq283 ( ( ( * (  list2465 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion38  temp760 = ( (struct envunion38){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add527 , .env =  env->envinst6 } );
        ( temp760.fun ( &temp760.env ,  (  list2465 ) ,  (  elem2469 ) ) );
        return ( Unit_8_Unit );
    }
    struct envunion39  temp761 = ( (struct envunion39){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full529 , .env =  env->envinst1 } );
    ( temp761.fun ( &temp761.env ,  (  list2465 ) ) );
    size_t  ii2470 = (  op_dash_sub462 ( ( ( * (  list2465 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp302 ( (  ii2470 ) , (  i2467 ) ) != 0 ) ) {
        ( (  set540 ) ( ( ( * (  list2465 ) ) .f_elements ) ,  (  op_dash_add356 ( (  ii2470 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get300 ) ( (  list2465 ) ,  (  ii2470 ) ) ) ) );
        if ( (  eq283 ( (  ii2470 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2470 = (  op_dash_sub462 ( (  ii2470 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set540 ) ( ( ( * (  list2465 ) ) .f_elements ) ,  (  i2467 ) ,  (  elem2469 ) ) );
    (*  list2465 ) .f_count = (  op_dash_add356 ( ( ( * (  list2465 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion763 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

static  enum Unit_8   free765 (    struct List_13 *  list2440 ) {
    ( (  free690 ) ( ( ( * (  list2440 ) ) .f_al ) ,  ( ( * (  list2440 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_line764 (    struct Line_12 *  line4022 ) {
    ( (  free765 ) ( ( & ( ( * (  line4022 ) ) .f_line ) ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   add_dash_to_dash_spot703 (   struct env109* env ,    struct TextBuf_117 *  self4070 ,    struct Pos_26  p4072 ,    struct StrView_27  bytes4074 ) {
    enum CAllocator_10  al4075 = ( ( ( * (  self4070 ) ) .f_buf ) .f_al );
    struct List_9 *  buf4076 = ( & ( ( * (  self4070 ) ) .f_buf ) );
    struct Line_12  extracted_dash_line_dash_buf4077 = ( (  get300 ) ( (  buf4076 ) ,  ( (  i32_dash_size280 ) ( ( (  p4072 ) .f_line ) ) ) ) );
    struct Slice_14  remaining4078 = ( (  from589 ) ( ( (  to_dash_slice299 ) ( ( (  extracted_dash_line_dash_buf4077 ) .f_line ) ) ) ,  ( (  i32_dash_size280 ) ( ( (  p4072 ) .f_bi ) ) ) ) );
    struct envunion110  temp705 = ( (struct envunion110){ .fun = (  struct List_13  (*) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  ) )from_dash_iter706 , .env =  env->envinst53 } );
    ( (  set704 ) ( (  buf4076 ) ,  ( (  i32_dash_size280 ) ( ( (  p4072 ) .f_line ) ) ) ,  ( (  mk_dash_line560 ) ( ( temp705.fun ( &temp705.env ,  ( (  subslice590 ) ( ( (  to_dash_slice299 ) ( ( (  extracted_dash_line_dash_buf4077 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size280 ) ( ( (  p4072 ) .f_bi ) ) ) ) ) ,  (  al4075 ) ) ) ) ) ) );
    struct Line_12 *  last_dash_line4079 = ( (  get_dash_ptr301 ) ( (  buf4076 ) ,  ( (  i32_dash_size280 ) ( ( (  p4072 ) .f_line ) ) ) ) );
    struct envunion112  temp726 = ( (struct envunion112){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all709 , .env =  env->envinst48 } );
    ( temp726.fun ( &temp726.env ,  ( & ( ( * (  last_dash_line4079 ) ) .f_line ) ) ,  ( ( (  or_dash_else727 ) ( ( (  head728 ) ( ( (  lines733 ) ( (  bytes4074 ) ) ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added4080 = (  from_dash_integral56 ( 0 ) );
    struct Zip_735  temp734 =  into_dash_iter740 ( ( (  zip741 ) ( ( (  drop743 ) ( ( (  split_dash_by_dash_each745 ) ( (  bytes4074 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from555 ) ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_749  __cond748 =  next751 (&temp734);
        if (  __cond748 .tag == 0 ) {
            break;
        }
        struct Tuple2_750  dref4081 =  __cond748 .stuff .Maybe_749_Just_s .field0;
        struct envunion757  temp756 = ( (struct envunion757){ .fun = (  struct List_13  (*) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  ) )from_dash_iter706 , .env =  env->envinst53 } );
        struct Line_12  temp755 = ( (  mk_dash_line560 ) ( ( temp756.fun ( &temp756.env ,  ( ( dref4081 .field0 ) .f_contents ) ,  (  al4075 ) ) ) ) );
        struct Line_12 *  nuline4084 = ( &temp755 );
        size_t  next_dash_line4085 = ( (  i32_dash_size280 ) ( (  op_dash_add175 ( ( (  p4072 ) .f_line ) , ( dref4081 .field1 ) ) ) ) );
        struct envunion111  temp758 = ( (struct envunion111){ .fun = (  enum Unit_8  (*) (  struct env37*  ,    struct List_9 *  ,    size_t  ,    struct Line_12  ) )insert759 , .env =  env->envinst37 } );
        ( temp758.fun ( &temp758.env ,  (  buf4076 ) ,  (  next_dash_line4085 ) ,  ( * (  nuline4084 ) ) ) );
        last_dash_line4079 = ( (  get_dash_ptr301 ) ( (  buf4076 ) ,  (  next_dash_line4085 ) ) );
        lines_dash_added4080 = (  op_dash_add175 ( (  lines_dash_added4080 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    struct envunion763  temp762 = ( (struct envunion763){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all709 , .env =  env->envinst48 } );
    ( temp762.fun ( &temp762.env ,  ( & ( ( * (  last_dash_line4079 ) ) .f_line ) ) ,  (  remaining4078 ) ) );
    ( (  free_dash_line764 ) ( ( & (  extracted_dash_line_dash_buf4077 ) ) ) );
    return (  lines_dash_added4080 );
}

static  size_t   size766 (    struct List_13 *  l2443 ) {
    return ( ( * (  l2443 ) ) .f_count );
}

struct StrConcat_772 {
    struct StrConcat_79  field0;
    struct Char_65  field1;
};

static struct StrConcat_772 StrConcat_772_StrConcat (  struct StrConcat_79  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_772 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_771 {
    struct StrConcat_772  field0;
    size_t  field1;
};

static struct StrConcat_771 StrConcat_771_StrConcat (  struct StrConcat_772  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_771 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_770 {
    struct StrConcat_771  field0;
    struct Char_65  field1;
};

static struct StrConcat_770 StrConcat_770_StrConcat (  struct StrConcat_771  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_770 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_775 {
    struct StrView_27  field0;
    struct StrConcat_770  field1;
};

static struct StrConcat_775 StrConcat_775_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_770  field1 ) {
    return ( struct StrConcat_775 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_774 {
    struct StrConcat_775  field0;
    struct Char_65  field1;
};

static struct StrConcat_774 StrConcat_774_StrConcat (  struct StrConcat_775  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_774 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str779 (    struct StrConcat_772  self1302 ) {
    struct StrConcat_772  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str315 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str778 (    struct StrConcat_771  self1302 ) {
    struct StrConcat_771  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str779 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str316 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str777 (    struct StrConcat_770  self1302 ) {
    struct StrConcat_770  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str778 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str776 (    struct StrConcat_775  self1302 ) {
    struct StrConcat_775  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str310 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str777 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str773 (    struct StrConcat_774  self1302 ) {
    struct StrConcat_774  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str776 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic769 (    struct StrConcat_770  errmsg1343 ) {
    ( (  print_dash_str773 ) ( ( ( StrConcat_774_StrConcat ) ( ( ( StrConcat_775_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct Drop_781 {
    struct Zip_662  field0;
    size_t  field1;
};

static struct Drop_781 Drop_781_Drop (  struct Zip_662  field0 ,  size_t  field1 ) {
    return ( struct Drop_781 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env782 {
    ;
    struct List_13 *  list2473;
    ;
    ;
    size_t  num_dash_elems2478;
};

struct envunion783 {
    enum Unit_8  (*fun) (  struct env782*  ,    struct Tuple2_665  );
    struct env782 env;
};

static  struct Drop_781   into_dash_iter785 (    struct Drop_781  self853 ) {
    return (  self853 );
}

static  struct Maybe_668   next786 (    struct Drop_781 *  dref855 ) {
    while ( (  cmp302 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next669 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
        (* dref855 ) .field1 = (  op_dash_sub462 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next669 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each780 (    struct Drop_781  iterable1099 ,   struct envunion783  fun1101 ) {
    struct Drop_781  temp784 = ( (  into_dash_iter785 ) ( (  iterable1099 ) ) );
    struct Drop_781 *  it1102 = ( &temp784 );
    while ( ( true ) ) {
        struct Maybe_668  dref1103 = ( (  next786 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_668_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_668_Just_t ) {
                struct envunion783  temp787 = (  fun1101 );
                ( temp787.fun ( &temp787.env ,  ( dref1103 .stuff .Maybe_668_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_781   drop788 (    struct Zip_662  iterable860 ,    size_t  i862 ) {
    struct Zip_662  it863 = ( (  into_dash_iter667 ) ( (  iterable860 ) ) );
    return ( ( Drop_781_Drop ) ( (  it863 ) ,  (  i862 ) ) );
}

static  struct SliceIter_627   into_dash_iter790 (    struct List_13  self2433 ) {
    return ( (  into_dash_iter641 ) ( ( (  subslice590 ) ( ( (  self2433 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2433 ) .f_count ) ) ) ) );
}

static  struct Zip_662   zip789 (    struct List_13  left947 ,    struct FromIter_544  right949 ) {
    struct SliceIter_627  left_dash_it950 = ( (  into_dash_iter790 ) ( (  left947 ) ) );
    struct FromIter_544  right_dash_it951 = ( (  into_dash_iter554 ) ( (  right949 ) ) );
    return ( (struct Zip_662) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  enum Unit_8   set792 (    struct List_13 *  list2426 ,    size_t  i2428 ,    uint8_t  elem2430 ) {
    if ( ( (  cmp302 ( (  i2428 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2428 ) , ( ( * (  list2426 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2428 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2426 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set673 ) ( ( ( * (  list2426 ) ) .f_elements ) ,  (  i2428 ) ,  (  elem2430 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam791 (   struct env782* env ,    struct Tuple2_665  dref2479 ) {
    return ( (  set792 ) ( ( env->list2473 ) ,  (  op_dash_sub462 ( ( (  i32_dash_size280 ) ( ( dref2479 .field1 ) ) ) , ( env->num_dash_elems2478 ) ) ) ,  ( dref2479 .field0 ) ) );
}

static  enum Unit_8   remove_dash_range768 (   struct env40* env ,    struct List_13 *  list2473 ,    size_t  from2475 ,    size_t  to_dash_excl2477 ) {
    if ( (  cmp302 ( (  to_dash_excl2477 ) , (  from2475 ) ) == 0 ) ) {
        ( (  panic769 ) ( ( ( StrConcat_770_StrConcat ) ( ( ( StrConcat_771_StrConcat ) ( ( ( StrConcat_772_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2475 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2477 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp302 ( (  from2475 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2475 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp302 ( (  to_dash_excl2477 ) , ( ( * (  list2473 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2477 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2478 = (  op_dash_sub462 ( (  to_dash_excl2477 ) , (  from2475 ) ) );
    struct env782 envinst782 = {
        .list2473 =  list2473 ,
        .num_dash_elems2478 =  num_dash_elems2478 ,
    };
    ( (  for_dash_each780 ) ( ( (  drop788 ) ( ( (  zip789 ) ( ( * (  list2473 ) ) ,  ( (  from555 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add356 ( (  from2475 ) , (  num_dash_elems2478 ) ) ) ) ) ,  ( (struct envunion783){ .fun = (  enum Unit_8  (*) (  struct env782*  ,    struct Tuple2_665  ) )lam791 , .env =  envinst782 } ) ) );
    (*  list2473 ) .f_count = (  op_dash_sub462 ( ( ( * (  list2473 ) ) .f_count ) , (  num_dash_elems2478 ) ) );
    size_t  capacity2482 = ( ( ( * (  list2473 ) ) .f_elements ) .f_count );
    if ( (  cmp302 ( (  op_dash_mul535 ( ( ( * (  list2473 ) ) .f_count ) , ( env->shrink_dash_factor2449 ) ) ) , (  capacity2482 ) ) == 0 ) ) {
        if ( (  eq283 ( ( ( * (  list2473 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free690 ) ( ( ( * (  list2473 ) ) .f_al ) ,  ( ( * (  list2473 ) ) .f_elements ) ) );
            (*  list2473 ) .f_elements = ( (  empty569 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2483 = (  op_dash_mul535 ( (  op_dash_add356 ( (  op_dash_div327 ( ( ( * (  list2473 ) ) .f_count ) , ( env->shrink_dash_factor2449 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2449 ) ) );
        struct Slice_14  new_dash_slice2484 = ( (  allocate648 ) ( ( ( * (  list2473 ) ) .f_al ) ,  (  new_dash_size2483 ) ) );
        ( (  copy_dash_to653 ) ( ( (  subslice590 ) ( ( ( * (  list2473 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  (  new_dash_slice2484 ) ) );
        ( (  free690 ) ( ( ( * (  list2473 ) ) .f_al ) ,  ( ( * (  list2473 ) ) .f_elements ) ) );
        (*  list2473 ) .f_elements = (  new_dash_slice2484 );
    }
    return ( Unit_8_Unit );
}

struct envunion794 {
    int32_t  (*fun) (  struct env109*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env109 env;
};

static  enum Unit_8   trim795 (    struct List_13 *  l2530 ,    size_t  new_dash_count2532 ) {
    (*  l2530 ) .f_count = ( (  min591 ) ( (  new_dash_count2532 ) ,  ( ( * (  l2530 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   min796 (    int32_t  l1367 ,    int32_t  r1369 ) {
    if ( (  cmp173 ( (  l1367 ) , (  r1369 ) ) == 0 ) ) {
        return (  l1367 );
    } else {
        return (  r1369 );
    }
}

struct envunion798 {
    int32_t  (*fun) (  struct env109*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env109 env;
};

struct Maybe_800 {
    enum {
        Maybe_800_None_t,
        Maybe_800_Just_t,
    } tag;
    union {
        struct {
            struct Slice_14  field0;
        } Maybe_800_Just_s;
    } stuff;
};

static struct Maybe_800 Maybe_800_Just (  struct Slice_14  field0 ) {
    return ( struct Maybe_800 ) { .tag = Maybe_800_Just_t, .stuff = { .Maybe_800_Just_s = { .field0 = field0 } } };
};

static  struct Slice_14   or_dash_else799 (    struct Maybe_800  self1360 ,    struct Slice_14  alt1362 ) {
    struct Maybe_800  dref1363 = (  self1360 );
    if ( dref1363.tag == Maybe_800_None_t ) {
        return (  alt1362 );
    }
    else {
        if ( dref1363.tag == Maybe_800_Just_t ) {
            return ( dref1363 .stuff .Maybe_800_Just_s .field0 );
        }
    }
}

static  struct Maybe_800   fmap_dash_maybe801 (    struct Maybe_509  x1585 ,    struct Slice_14 (*  fun1587 )(    struct Line_12  ) ) {
    struct Maybe_509  dref1588 = (  x1585 );
    if ( dref1588.tag == Maybe_509_None_t ) {
        return ( (struct Maybe_800) { .tag = Maybe_800_None_t } );
    }
    else {
        if ( dref1588.tag == Maybe_509_Just_t ) {
            return ( ( Maybe_800_Just ) ( ( (  fun1587 ) ( ( dref1588 .stuff .Maybe_509_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_509   try_dash_get802 (    struct List_9 *  list2421 ,    size_t  i2423 ) {
    if ( (  cmp302 ( (  i2423 ) , ( ( * (  list2421 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_509) { .tag = Maybe_509_None_t } );
    }
    return ( ( Maybe_509_Just ) ( ( (  get300 ) ( (  list2421 ) ,  (  i2423 ) ) ) ) );
}

static  struct Slice_14   lam803 (    struct Line_12  line4103 ) {
    return ( (  to_dash_slice299 ) ( ( (  line4103 ) .f_line ) ) );
}

struct StrConcat_808 {
    struct StrView_27  field0;
    struct StrView_27  field1;
};

static struct StrConcat_808 StrConcat_808_StrConcat (  struct StrView_27  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_808 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_807 {
    struct StrConcat_808  field0;
    struct Char_65  field1;
};

static struct StrConcat_807 StrConcat_807_StrConcat (  struct StrConcat_808  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_807 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str809 (    struct StrConcat_808  self1302 ) {
    struct StrConcat_808  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str310 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str310 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str806 (    struct StrConcat_807  self1302 ) {
    struct StrConcat_807  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str809 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert805 (    bool  cond1346 ,    struct StrView_27  msg1348 ) {
    if ( ( ! (  cond1346 ) ) ) {
        ( (  print_dash_str806 ) ( ( ( StrConcat_807_StrConcat ) ( ( ( StrConcat_808_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1348 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct Drop_813 {
    struct Zip_542  field0;
    size_t  field1;
};

static struct Drop_813 Drop_813_Drop (  struct Zip_542  field0 ,  size_t  field1 ) {
    return ( struct Drop_813 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env814 {
    ;
    struct List_9 *  list2473;
    ;
    ;
    size_t  num_dash_elems2478;
};

struct envunion815 {
    enum Unit_8  (*fun) (  struct env814*  ,    struct Tuple2_538  );
    struct env814 env;
};

static  struct Drop_813   into_dash_iter817 (    struct Drop_813  self853 ) {
    return (  self853 );
}

static  struct Maybe_547   next818 (    struct Drop_813 *  dref855 ) {
    while ( (  cmp302 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next548 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
        (* dref855 ) .field1 = (  op_dash_sub462 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next548 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each812 (    struct Drop_813  iterable1099 ,   struct envunion815  fun1101 ) {
    struct Drop_813  temp816 = ( (  into_dash_iter817 ) ( (  iterable1099 ) ) );
    struct Drop_813 *  it1102 = ( &temp816 );
    while ( ( true ) ) {
        struct Maybe_547  dref1103 = ( (  next818 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_547_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_547_Just_t ) {
                struct envunion815  temp819 = (  fun1101 );
                ( temp819.fun ( &temp819.env ,  ( dref1103 .stuff .Maybe_547_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_813   drop820 (    struct Zip_542  iterable860 ,    size_t  i862 ) {
    struct Zip_542  it863 = ( (  into_dash_iter546 ) ( (  iterable860 ) ) );
    return ( ( Drop_813_Drop ) ( (  it863 ) ,  (  i862 ) ) );
}

static  struct Slice_11   subslice823 (    struct Slice_11  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Line_12 *  begin_dash_ptr2209 = ( (  offset_dash_ptr346 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp302 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp302 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub462 ( ( (  min591 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct SliceIter_543   into_dash_iter822 (    struct List_9  self2433 ) {
    return ( (  into_dash_iter553 ) ( ( (  subslice823 ) ( ( (  self2433 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2433 ) .f_count ) ) ) ) );
}

static  struct Zip_542   zip821 (    struct List_9  left947 ,    struct FromIter_544  right949 ) {
    struct SliceIter_543  left_dash_it950 = ( (  into_dash_iter822 ) ( (  left947 ) ) );
    struct FromIter_544  right_dash_it951 = ( (  into_dash_iter554 ) ( (  right949 ) ) );
    return ( (struct Zip_542) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  enum Unit_8   lam824 (   struct env814* env ,    struct Tuple2_538  dref2479 ) {
    return ( (  set704 ) ( ( env->list2473 ) ,  (  op_dash_sub462 ( ( (  i32_dash_size280 ) ( ( dref2479 .field1 ) ) ) , ( env->num_dash_elems2478 ) ) ) ,  ( dref2479 .field0 ) ) );
}

struct env827 {
    ;
    struct Slice_11  dest2281;
    ;
};

struct envunion828 {
    enum Unit_8  (*fun) (  struct env827*  ,    struct Tuple2_538  );
    struct env827 env;
};

static  enum Unit_8   for_dash_each826 (    struct Zip_542  iterable1099 ,   struct envunion828  fun1101 ) {
    struct Zip_542  temp829 = ( (  into_dash_iter546 ) ( (  iterable1099 ) ) );
    struct Zip_542 *  it1102 = ( &temp829 );
    while ( ( true ) ) {
        struct Maybe_547  dref1103 = ( (  next548 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_547_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_547_Just_t ) {
                struct envunion828  temp830 = (  fun1101 );
                ( temp830.fun ( &temp830.env ,  ( dref1103 .stuff .Maybe_547_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam831 (   struct env827* env ,    struct Tuple2_538  dref2282 ) {
    return ( (  set540 ) ( ( env->dest2281 ) ,  ( (  i32_dash_size280 ) ( ( dref2282 .field1 ) ) ) ,  ( dref2282 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to825 (    struct Slice_11  src2279 ,    struct Slice_11  dest2281 ) {
    if ( (  cmp302 ( ( (  src2279 ) .f_count ) , ( (  dest2281 ) .f_count ) ) == 2 ) ) {
        ( (  panic654 ) ( ( ( StrConcat_655_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2279 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2281 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env827 envinst827 = {
        .dest2281 =  dest2281 ,
    };
    ( (  for_dash_each826 ) ( ( (  zip552 ) ( (  src2279 ) ,  ( (  from555 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion828){ .fun = (  enum Unit_8  (*) (  struct env827*  ,    struct Tuple2_538  ) )lam831 , .env =  envinst827 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   remove_dash_range811 (   struct env41* env ,    struct List_9 *  list2473 ,    size_t  from2475 ,    size_t  to_dash_excl2477 ) {
    if ( (  cmp302 ( (  to_dash_excl2477 ) , (  from2475 ) ) == 0 ) ) {
        ( (  panic769 ) ( ( ( StrConcat_770_StrConcat ) ( ( ( StrConcat_771_StrConcat ) ( ( ( StrConcat_772_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2475 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2477 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp302 ( (  from2475 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2475 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp302 ( (  to_dash_excl2477 ) , ( ( * (  list2473 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2477 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2478 = (  op_dash_sub462 ( (  to_dash_excl2477 ) , (  from2475 ) ) );
    struct env814 envinst814 = {
        .list2473 =  list2473 ,
        .num_dash_elems2478 =  num_dash_elems2478 ,
    };
    ( (  for_dash_each812 ) ( ( (  drop820 ) ( ( (  zip821 ) ( ( * (  list2473 ) ) ,  ( (  from555 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add356 ( (  from2475 ) , (  num_dash_elems2478 ) ) ) ) ) ,  ( (struct envunion815){ .fun = (  enum Unit_8  (*) (  struct env814*  ,    struct Tuple2_538  ) )lam824 , .env =  envinst814 } ) ) );
    (*  list2473 ) .f_count = (  op_dash_sub462 ( ( ( * (  list2473 ) ) .f_count ) , (  num_dash_elems2478 ) ) );
    size_t  capacity2482 = ( ( ( * (  list2473 ) ) .f_elements ) .f_count );
    if ( (  cmp302 ( (  op_dash_mul535 ( ( ( * (  list2473 ) ) .f_count ) , ( env->shrink_dash_factor2449 ) ) ) , (  capacity2482 ) ) == 0 ) ) {
        if ( (  eq283 ( ( ( * (  list2473 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free556 ) ( ( ( * (  list2473 ) ) .f_al ) ,  ( ( * (  list2473 ) ) .f_elements ) ) );
            (*  list2473 ) .f_elements = ( (  empty495 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2483 = (  op_dash_mul535 ( (  op_dash_add356 ( (  op_dash_div327 ( ( ( * (  list2473 ) ) .f_count ) , ( env->shrink_dash_factor2449 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2449 ) ) );
        struct Slice_11  new_dash_slice2484 = ( (  allocate530 ) ( ( ( * (  list2473 ) ) .f_al ) ,  (  new_dash_size2483 ) ) );
        ( (  copy_dash_to825 ) ( ( (  subslice823 ) ( ( ( * (  list2473 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  (  new_dash_slice2484 ) ) );
        ( (  free556 ) ( ( ( * (  list2473 ) ) .f_al ) ,  ( ( * (  list2473 ) ) .f_elements ) ) );
        (*  list2473 ) .f_elements = (  new_dash_slice2484 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   change_dash_no_dash_action695 (   struct env113* env ,    struct TextBuf_117 *  self4088 ,    struct Pos_26  from_dash_pos4090 ,    struct Pos_26  to_dash_pos4092 ,    struct StrView_27  bytes4094 ) {
    struct Pos_26  from4095 = ( (  min696 ) ( (  from_dash_pos4090 ) ,  (  to_dash_pos4092 ) ) );
    struct Pos_26  to4096 = ( (  max698 ) ( (  from_dash_pos4090 ) ,  (  to_dash_pos4092 ) ) );
    if ( (  eq699 ( (  to4096 ) , (  from4095 ) ) ) ) {
        enum CAllocator_10  al4097 = ( ( ( * (  self4088 ) ) .f_buf ) .f_al );
        if ( ( (  eq283 ( ( (  size421 ) ( ( & ( ( * (  self4088 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size280 ) ( ( (  from4095 ) .f_line ) ) ) ) ) && (  eq700 ( ( (  from4095 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) ) {
            struct envunion114  temp701 = ( (struct envunion114){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add527 , .env =  env->envinst6 } );
            ( temp701.fun ( &temp701.env ,  ( & ( ( * (  self4088 ) ) .f_buf ) ) ,  ( (  mk_dash_line560 ) ( ( (  mk568 ) ( (  al4097 ) ) ) ) ) ) );
        }
        struct envunion116  temp702 = ( (struct envunion116){ .fun = (  int32_t  (*) (  struct env109*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot703 , .env =  env->envinst109 } );
        ( temp702.fun ( &temp702.env ,  (  self4088 ) ,  (  from4095 ) ,  (  bytes4094 ) ) );
    } else {
        struct List_9 *  lines_dash_buf4098 = ( & ( ( * (  self4088 ) ) .f_buf ) );
        struct Line_12 *  first_dash_line4099 = ( (  get_dash_ptr301 ) ( (  lines_dash_buf4098 ) ,  ( (  i32_dash_size280 ) ( ( (  from4095 ) .f_line ) ) ) ) );
        (*  first_dash_line4099 ) .f_invalidated = ( true );
        if ( ( (  eq700 ( ( (  from4095 ) .f_line ) , ( (  to4096 ) .f_line ) ) ) && (  cmp173 ( ( (  to4096 ) .f_bi ) , (  op_dash_add175 ( ( (  size_dash_i32311 ) ( ( (  size766 ) ( ( & ( ( * (  first_dash_line4099 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion121  temp767 = ( (struct envunion121){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  ) )remove_dash_range768 , .env =  env->envinst40 } );
            ( temp767.fun ( &temp767.env ,  ( & ( ( * (  first_dash_line4099 ) ) .f_line ) ) ,  ( (  i32_dash_size280 ) ( ( (  from4095 ) .f_bi ) ) ) ,  ( (  i32_dash_size280 ) ( ( (  to4096 ) .f_bi ) ) ) ) );
            struct envunion794  temp793 = ( (struct envunion794){ .fun = (  int32_t  (*) (  struct env109*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot703 , .env =  env->envinst109 } );
            ( temp793.fun ( &temp793.env ,  (  self4088 ) ,  (  from4095 ) ,  (  bytes4094 ) ) );
        } else {
            ( (  trim795 ) ( ( & ( ( * (  first_dash_line4099 ) ) .f_line ) ) ,  ( (  i32_dash_size280 ) ( ( (  from4095 ) .f_bi ) ) ) ) );
            struct Line_12 *  last_dash_line4100 = ( (  get_dash_ptr301 ) ( (  lines_dash_buf4098 ) ,  ( (  i32_dash_size280 ) ( ( (  to4096 ) .f_line ) ) ) ) );
            (*  last_dash_line4100 ) .f_invalidated = ( true );
            to4096 .f_bi = ( (  min796 ) ( ( (  to4096 ) .f_bi ) ,  (  op_dash_add175 ( ( (  size_dash_i32311 ) ( ( (  size766 ) ( ( & ( ( * (  last_dash_line4100 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
            if ( (  eq700 ( ( (  to4096 ) .f_bi ) , (  op_dash_add175 ( ( (  size_dash_i32311 ) ( ( (  size766 ) ( ( & ( ( * (  last_dash_line4100 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
                to4096 .f_line = (  op_dash_add175 ( ( (  to4096 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
                to4096 .f_bi = (  from_dash_integral56 ( 0 ) );
            }
            struct envunion798  temp797 = ( (struct envunion798){ .fun = (  int32_t  (*) (  struct env109*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot703 , .env =  env->envinst109 } );
            int32_t  lines_dash_added4101 = ( temp797.fun ( &temp797.env ,  (  self4088 ) ,  (  from4095 ) ,  (  bytes4094 ) ) );
            to4096 .f_line = (  op_dash_add175 ( ( (  to4096 ) .f_line ) , (  lines_dash_added4101 ) ) );
            from4095 .f_line = (  op_dash_add175 ( ( (  from4095 ) .f_line ) , (  lines_dash_added4101 ) ) );
            struct Slice_14  last_dash_line4104 = ( (  or_dash_else799 ) ( ( (  fmap_dash_maybe801 ) ( ( (  try_dash_get802 ) ( (  lines_dash_buf4098 ) ,  ( (  i32_dash_size280 ) ( ( (  to4096 ) .f_line ) ) ) ) ) ,  (  lam803 ) ) ) ,  ( (  empty569 ) ( ) ) ) );
            struct envunion115  temp804 = ( (struct envunion115){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all709 , .env =  env->envinst48 } );
            ( temp804.fun ( &temp804.env ,  ( & ( ( * (  first_dash_line4099 ) ) .f_line ) ) ,  ( (  from589 ) ( (  last_dash_line4104 ) ,  ( (  i32_dash_size280 ) ( ( (  to4096 ) .f_bi ) ) ) ) ) ) );
            ( (  assert805 ) ( (  cmp173 ( ( (  to4096 ) .f_line ) , ( (  from4095 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion122  temp810 = ( (struct envunion122){ .fun = (  enum Unit_8  (*) (  struct env41*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range811 , .env =  env->envinst41 } );
            ( temp810.fun ( &temp810.env ,  ( & ( ( * (  self4088 ) ) .f_buf ) ) ,  ( (  i32_dash_size280 ) ( (  op_dash_add175 ( ( (  from4095 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  op_dash_add356 ( ( (  i32_dash_size280 ) ( ( (  to4096 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   mk832 (    int32_t  line3845 ,    int32_t  bi3847 ) {
    return ( (struct Pos_26) { .f_line = (  line3845 ) , .f_bi = (  bi3847 ) } );
}

static  struct Maybe_484   mk_dash_from_dash_file487 (   struct env127* env ,    enum CAllocator_10  al4127 ,    struct StrView_27  filename4129 ) {
    struct envunion129  temp489 = ( (struct envunion129){ .fun = (  struct TextBuf_117  (*) (  struct env125*  ,    enum CAllocator_10  ) )mk490 , .env =  env->envinst125 } );
    struct TextBuf_117  temp488 = ( temp489.fun ( &temp489.env ,  (  al4127 ) ) );
    struct TextBuf_117 *  tb4130 = ( &temp488 );
    (*  tb4130 ) .f_filetype = ( (  detect_dash_filetype_dash_from_dash_filename583 ) ( (  filename4129 ) ) );
    struct StrView_27  filename04131 = ( (  clone_dash_0647 ) ( (  filename4129 ) ,  (  al4127 ) ) );
    struct Maybe_85  dref4132 = ( (  try_dash_read_dash_contents676 ) ( ( (  as_dash_const_dash_str687 ) ( (  filename04131 ) ) ) ,  (  al4127 ) ) );
    if ( dref4132.tag == Maybe_85_None_t ) {
        ( (  free689 ) ( (  filename04131 ) ,  (  al4127 ) ) );
        return ( (struct Maybe_484) { .tag = Maybe_484_None_t } );
    }
    else {
        if ( dref4132.tag == Maybe_85_Just_t ) {
            if ( (  eq692 ( ( (  try_dash_get598 ) ( ( ( dref4132 .stuff .Maybe_85_Just_s .field0 ) .f_contents ) ,  (  op_dash_sub462 ( ( ( ( dref4132 .stuff .Maybe_85_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) , ( ( Maybe_74_Just ) ( ( (  ascii_dash_u8599 ) ( ( (  from_dash_charlike282 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) {
                dref4132 .stuff .Maybe_85_Just_s .field0 = ( (  byte_dash_substr600 ) ( ( dref4132 .stuff .Maybe_85_Just_s .field0 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub462 ( ( ( ( dref4132 .stuff .Maybe_85_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
            }
            struct envunion128  temp694 = ( (struct envunion128){ .fun = (  enum Unit_8  (*) (  struct env113*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action695 , .env =  env->envinst113 } );
            ( temp694.fun ( &temp694.env ,  (  tb4130 ) ,  ( (  mk832 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( (  mk832 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( dref4132 .stuff .Maybe_85_Just_s .field0 ) ) );
            (*  tb4130 ) .f_filename = ( ( Maybe_85_Just ) ( (  filename04131 ) ) );
            return ( ( Maybe_484_Just ) ( ( * (  tb4130 ) ) ) );
        }
    }
}

struct envunion834 {
    struct TextBuf_117  (*fun) (  struct env125*  ,    enum CAllocator_10  );
    struct env125 env;
};

struct envunion836 {
    struct TextBuf_117  (*fun) (  struct env125*  ,    enum CAllocator_10  );
    struct env125 env;
};

static  struct Pane_241   mk839 (    enum CAllocator_10  al4344 ,    struct TextBuf_117 *  buf4346 ) {
    return ( (struct Pane_241) { .f_buf = (  buf4346 ) , .f_cursor = ( (  mk832 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral56 ( 0 ) ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) , .f_mode = ( Mode_242_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_243) { .f_screen_dash_top = (  from_dash_integral56 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral56 ( 0 ) ) } ) } );
}

struct envunion842 {
    struct Tui_97  (*fun) (  struct env92*  );
    struct env92 env;
};

static  enum Unit_8   for_dash_each846 (    struct StrViewIter_293  iterable1099 ,    enum Unit_8 (*  fun1101 )(    struct Char_65  ) ) {
    struct StrViewIter_293  temp847 = ( (  into_dash_iter294 ) ( (  iterable1099 ) ) );
    struct StrViewIter_293 *  it1102 = ( &temp847 );
    while ( ( true ) ) {
        struct Maybe_351  dref1103 = ( (  next352 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_351_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_351_Just_t ) {
                ( (  fun1101 ) ( ( dref1103 .stuff .Maybe_351_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print845 (    struct StrView_27  s1335 ) {
    ( (  for_dash_each846 ) ( ( (  chars295 ) ( (  s1335 ) ) ) ,  (  printf_dash_char318 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   enable_dash_alternative_dash_screen_dash_buffer844 (  ) {
    ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[?1049h" ) ,  ( 8 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   stdin_dash_fileno850 (  ) {
    return (  from_dash_integral56 ( 0 ) );
}

static  struct termios *   cast_dash_ptr851 (    struct Termios_87 *  p398 ) {
    return ( (struct termios * ) (  p398 ) );
}

static  int32_t   op_dash_neg852 (    int32_t  x246 ) {
    return ( (  from_dash_integral56 ( 0 ) ) - (  x246 ) );
}

static  enum Unit_8   panic853 (    struct StrView_27  errmsg1343 ) {
    ( (  print_dash_str806 ) ( ( ( StrConcat_807_StrConcat ) ( ( ( StrConcat_808_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  uint32_t   u32_dash_and854 (    uint32_t  l2960 ,    uint32_t  r2962 ) {
    return ( (  l2960 ) & (  r2962 ) );
}

static  uint32_t   u32_dash_neg855 (    uint32_t  l2965 ) {
    return ( ~ (  l2965 ) );
}

struct Array_857 {
    uint32_t _arr [4];
};

struct ArrayIter_859 {
    struct Array_857  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_859   into_dash_iter860 (    struct Array_857  self2102 ) {
    return ( (struct ArrayIter_859) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_861 {
    enum {
        Maybe_861_None_t,
        Maybe_861_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_861_Just_s;
    } stuff;
};

static struct Maybe_861 Maybe_861_Just (  uint32_t  field0 ) {
    return ( struct Maybe_861 ) { .tag = Maybe_861_Just_t, .stuff = { .Maybe_861_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr865 (    struct Array_857 *  p398 ) {
    return ( (uint32_t * ) (  p398 ) );
}

static  uint32_t *   offset_dash_ptr866 (    uint32_t *  x377 ,    int64_t  count379 ) {
    uint32_t  temp867;
    return ( (uint32_t * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp867 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr864 (    struct Array_857 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp302 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2029 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic513 ) ( ( ( StrConcat_514_StrConcat ) ( ( ( StrConcat_515_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2030 = ( ( (  cast_dash_ptr865 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr866 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  uint32_t   get863 (    struct Array_857 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr864 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_861   next862 (    struct ArrayIter_859 *  self2109 ) {
    if ( (  cmp302 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_861) { .tag = Maybe_861_None_t } );
    }
    uint32_t  e2111 = ( (  get863 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add356 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_861_Just ) ( (  e2111 ) ) );
}

static  uint32_t   reduce858 (    struct Array_857  iterable1118 ,    uint32_t  base1120 ,    uint32_t (*  fun1122 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1123 = (  base1120 );
    struct ArrayIter_859  it1124 = ( (  into_dash_iter860 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_861  dref1125 = ( (  next862 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_861_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_861_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_861_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp868 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp868);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp869;
    return (  temp869 );
}

static  uint32_t   u32_dash_or870 (    uint32_t  l2952 ,    uint32_t  r2954 ) {
    return ( (  l2952 ) | (  r2954 ) );
}

static  uint32_t   u32_dash_ors856 (    struct Array_857  vals2957 ) {
    return ( (  reduce858 ) ( (  vals2957 ) ,  (  from_dash_integral181 ( 0 ) ) ,  (  u32_dash_or870 ) ) );
}

static  struct Array_857   from_dash_listlike871 (    struct Array_857 *  self369 ) {
    return ( * (  self369 ) );
}

static  uint32_t   echo873 (  ) {
    return (  from_dash_integral181 ( 8 ) );
}

static  uint32_t   icanon874 (  ) {
    return (  from_dash_integral181 ( 2 ) );
}

static  uint32_t   isig875 (  ) {
    return (  from_dash_integral181 ( 1 ) );
}

static  uint32_t   iexten876 (  ) {
    return (  from_dash_integral181 ( 32768 ) );
}

struct Array_878 {
    uint32_t _arr [5];
};

struct ArrayIter_880 {
    struct Array_878  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_880   into_dash_iter881 (    struct Array_878  self2102 ) {
    return ( (struct ArrayIter_880) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr885 (    struct Array_878 *  p398 ) {
    return ( (uint32_t * ) (  p398 ) );
}

static  uint32_t *   get_dash_ptr884 (    struct Array_878 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp302 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2029 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic513 ) ( ( ( StrConcat_514_StrConcat ) ( ( ( StrConcat_515_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2030 = ( ( (  cast_dash_ptr885 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr866 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  uint32_t   get883 (    struct Array_878 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr884 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_861   next882 (    struct ArrayIter_880 *  self2109 ) {
    if ( (  cmp302 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_861) { .tag = Maybe_861_None_t } );
    }
    uint32_t  e2111 = ( (  get883 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add356 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_861_Just ) ( (  e2111 ) ) );
}

static  uint32_t   reduce879 (    struct Array_878  iterable1118 ,    uint32_t  base1120 ,    uint32_t (*  fun1122 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1123 = (  base1120 );
    struct ArrayIter_880  it1124 = ( (  into_dash_iter881 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_861  dref1125 = ( (  next882 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_861_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_861_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_861_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp886 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp886);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp887;
    return (  temp887 );
}

static  uint32_t   u32_dash_ors877 (    struct Array_878  vals2957 ) {
    return ( (  reduce879 ) ( (  vals2957 ) ,  (  from_dash_integral181 ( 0 ) ) ,  (  u32_dash_or870 ) ) );
}

static  struct Array_878   from_dash_listlike888 (    struct Array_878 *  self369 ) {
    return ( * (  self369 ) );
}

static  uint32_t   brkint890 (  ) {
    return (  from_dash_integral181 ( 2 ) );
}

static  uint32_t   icrnl891 (  ) {
    return (  from_dash_integral181 ( 256 ) );
}

static  uint32_t   inpck892 (  ) {
    return (  from_dash_integral181 ( 16 ) );
}

static  uint32_t   istrip893 (  ) {
    return (  from_dash_integral181 ( 32 ) );
}

static  uint32_t   ixon894 (  ) {
    return (  from_dash_integral181 ( 1024 ) );
}

struct Array_896 {
    uint32_t _arr [1];
};

struct ArrayIter_898 {
    struct Array_896  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_898   into_dash_iter899 (    struct Array_896  self2102 ) {
    return ( (struct ArrayIter_898) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr903 (    struct Array_896 *  p398 ) {
    return ( (uint32_t * ) (  p398 ) );
}

static  uint32_t *   get_dash_ptr902 (    struct Array_896 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp302 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2029 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic513 ) ( ( ( StrConcat_514_StrConcat ) ( ( ( StrConcat_515_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2030 = ( ( (  cast_dash_ptr903 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr866 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  uint32_t   get901 (    struct Array_896 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr902 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_861   next900 (    struct ArrayIter_898 *  self2109 ) {
    if ( (  cmp302 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_861) { .tag = Maybe_861_None_t } );
    }
    uint32_t  e2111 = ( (  get901 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add356 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_861_Just ) ( (  e2111 ) ) );
}

static  uint32_t   reduce897 (    struct Array_896  iterable1118 ,    uint32_t  base1120 ,    uint32_t (*  fun1122 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1123 = (  base1120 );
    struct ArrayIter_898  it1124 = ( (  into_dash_iter899 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_861  dref1125 = ( (  next900 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_861_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_861_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_861_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp904 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp904);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp905;
    return (  temp905 );
}

static  uint32_t   u32_dash_ors895 (    struct Array_896  vals2957 ) {
    return ( (  reduce897 ) ( (  vals2957 ) ,  (  from_dash_integral181 ( 0 ) ) ,  (  u32_dash_or870 ) ) );
}

static  struct Array_896   from_dash_listlike906 (    struct Array_896 *  self369 ) {
    return ( * (  self369 ) );
}

static  uint32_t   opost908 (  ) {
    return (  from_dash_integral181 ( 1 ) );
}

static  uint32_t   cs8909 (  ) {
    return (  from_dash_integral181 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr912 (    struct Array_88 *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  uint8_t *   get_dash_ptr911 (    struct Array_88 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp302 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2029 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic513 ) ( ( ( StrConcat_514_StrConcat ) ( ( ( StrConcat_515_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2030 = ( ( (  cast_dash_ptr912 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr353 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  enum Unit_8   set910 (    struct Array_88 *  arr2039 ,    size_t  i2042 ,    uint8_t  e2044 ) {
    uint8_t *  p2045 = ( (  get_dash_ptr911 ) ( (  arr2039 ) ,  (  i2042 ) ) );
    (*  p2045 ) = (  e2044 );
    return ( Unit_8_Unit );
}

static  size_t   vmin913 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime914 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush915 (  ) {
    return (  from_dash_integral56 ( 2 ) );
}

static  struct Termios_87   enable_dash_raw_dash_mode848 (  ) {
    struct Termios_87  temp849 = ( (  undefined90 ) ( ) );
    struct Termios_87 *  orig_dash_termios3561 = ( &temp849 );
    if ( (  eq700 ( ( ( tcgetattr ) ( ( (  stdin_dash_fileno850 ) ( ) ) ,  ( (  cast_dash_ptr851 ) ( (  orig_dash_termios3561 ) ) ) ) ) , (  op_dash_neg852 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        ( (  panic853 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"tcgetattr" ) ,  ( 9 ) ) ) ) );
    }
    struct Termios_87  raw3562 = ( * (  orig_dash_termios3561 ) );
    struct Array_857  temp872 = ( (struct Array_857) { ._arr = { ( (  echo873 ) ( ) ) , ( (  icanon874 ) ( ) ) , ( (  isig875 ) ( ) ) , ( ( (  iexten876 ) ( ) ) ) } } );
    raw3562 .f_c_dash_lflag = ( (  u32_dash_and854 ) ( ( (  raw3562 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg855 ) ( ( (  u32_dash_ors856 ) ( ( (  from_dash_listlike871 ) ( ( &temp872 ) ) ) ) ) ) ) ) );
    struct Array_878  temp889 = ( (struct Array_878) { ._arr = { ( (  brkint890 ) ( ) ) , ( (  icrnl891 ) ( ) ) , ( (  inpck892 ) ( ) ) , ( (  istrip893 ) ( ) ) , ( ( (  ixon894 ) ( ) ) ) } } );
    raw3562 .f_c_dash_iflag = ( (  u32_dash_and854 ) ( ( (  raw3562 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg855 ) ( ( (  u32_dash_ors877 ) ( ( (  from_dash_listlike888 ) ( ( &temp889 ) ) ) ) ) ) ) ) );
    struct Array_896  temp907 = ( (struct Array_896) { ._arr = { ( ( (  opost908 ) ( ) ) ) } } );
    raw3562 .f_c_dash_oflag = ( (  u32_dash_and854 ) ( ( (  raw3562 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg855 ) ( ( (  u32_dash_ors895 ) ( ( (  from_dash_listlike906 ) ( ( &temp907 ) ) ) ) ) ) ) ) );
    raw3562 .f_c_dash_cflag = ( (  u32_dash_or870 ) ( ( (  raw3562 ) .f_c_dash_cflag ) ,  ( (  cs8909 ) ( ) ) ) );
    ( (  set910 ) ( ( & ( (  raw3562 ) .f_c_dash_cc ) ) ,  ( (  vmin913 ) ( ) ) ,  (  from_dash_integral328 ( 0 ) ) ) );
    ( (  set910 ) ( ( & ( (  raw3562 ) .f_c_dash_cc ) ) ,  ( (  vtime914 ) ( ) ) ,  (  from_dash_integral328 ( 0 ) ) ) );
    if ( (  eq700 ( ( ( tcsetattr ) ( ( (  stdin_dash_fileno850 ) ( ) ) ,  ( (  tcsa_dash_flush915 ) ( ) ) ,  ( (  cast_dash_ptr851 ) ( ( & (  raw3562 ) ) ) ) ) ) , (  op_dash_neg852 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        ( (  panic853 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"tcsetattr" ) ,  ( 9 ) ) ) ) );
    }
    return ( * (  orig_dash_termios3561 ) );
}

static  enum Unit_8   hide_dash_cursor916 (  ) {
    ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_colors917 (  ) {
    ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   clear_dash_screen918 (  ) {
    ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   enable_dash_mouse919 (  ) {
    ( (  print_dash_str310 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_stdout920 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr679 ) ( ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   ptr_dash_eq924 (    enum Unit_8 *  l664 ,    enum Unit_8 *  r666 ) {
    return ( (  l664 ) == (  r666 ) );
}

static  enum Unit_8 *   cast925 (    const char*  x395 ) {
    return ( (enum Unit_8 * ) (  x395 ) );
}

static  void *   cast_dash_ptr929 (    enum Unit_8 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of930 (    enum Unit_8 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  enum Unit_8 *   zeroed927 (  ) {
    enum Unit_8 *  temp928;
    enum Unit_8 *  x648 = (  temp928 );
    ( ( memset ) ( ( (  cast_dash_ptr929 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of930 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  enum Unit_8 *   null_dash_ptr926 (  ) {
    return ( (  zeroed927 ) ( ) );
}

static  struct Maybe_480   from_dash_nullable_dash_c_dash_str923 (    const char*  s669 ) {
    if ( ( (  ptr_dash_eq924 ) ( ( (  cast925 ) ( (  s669 ) ) ) ,  ( ( (  null_dash_ptr926 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_480) { .tag = Maybe_480_None_t } );
    } else {
        return ( ( Maybe_480_Just ) ( (  s669 ) ) );
    }
}

static  struct Maybe_480   get922 (    const char*  s2725 ) {
    return ( (  from_dash_nullable_dash_c_dash_str923 ) ( ( ( getenv ) ( (  s2725 ) ) ) ) );
}

static  bool   eq931 (    const char*  l2141 ,    const char*  r2143 ) {
    return (  eq700 ( ( ( strcmp ) ( (  l2141 ) ,  (  r2143 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) );
}

static  enum ColorPalette_98   query_dash_palette921 (  ) {
    struct Maybe_480  colorterm2726 = ( (  get922 ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_480  dref2727 = (  colorterm2726 );
    if ( dref2727.tag == Maybe_480_Just_t ) {
        if ( ( (  eq931 ( ( dref2727 .stuff .Maybe_480_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( (uint8_t*)"truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq931 ( ( dref2727 .stuff .Maybe_480_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( (uint8_t*)"24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_98_PaletteRGB );
        }
    }
    else {
        if ( dref2727.tag == Maybe_480_None_t ) {
        }
    }
    struct Maybe_480  dref2729 = ( (  get922 ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2729.tag == Maybe_480_Just_t ) {
        if ( (  eq931 ( ( dref2729 .stuff .Maybe_480_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( (uint8_t*)"linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_98_Palette8 );
        }
    }
    else {
        if ( dref2729.tag == Maybe_480_None_t ) {
        }
    }
    return ( ColorPalette_98_Palette16 );
}

struct Tuple2_932 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_932 Tuple2_932_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_932 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_934 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr938 (    struct Winsize_934 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of939 (    struct Winsize_934  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Winsize_934   zeroed936 (  ) {
    struct Winsize_934  temp937;
    struct Winsize_934  x648 = (  temp937 );
    ( ( memset ) ( ( (  cast_dash_ptr938 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of939 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  int32_t   stdout_dash_fileno940 (  ) {
    return (  from_dash_integral56 ( 1 ) );
}

static  uint64_t   from_dash_integral942 (    size_t  x65 ) {
    return ( (uint64_t ) (  x65 ) );
}

static  uint64_t   tiocgwinsz941 (  ) {
    return (  from_dash_integral942 ( 21523 ) );
}

static  bool   eq943 (    uint16_t  l130 ,    uint16_t  r132 ) {
    return ( (  l130 ) == (  r132 ) );
}

static  uint16_t   from_dash_integral944 (    size_t  x56 ) {
    return ( (uint16_t ) (  x56 ) );
}

static  void *   cast_dash_ptr950 (    uint32_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  uint32_t   zeroed948 (  ) {
    uint32_t  temp949;
    uint32_t  x648 = (  temp949 );
    ( ( memset ) ( ( (  cast_dash_ptr950 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of386 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  uint16_t *   cast951 (    uint32_t *  x395 ) {
    return ( (uint16_t * ) (  x395 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed946 (    uint16_t  x651 ) {
    uint32_t  temp947 = ( (  zeroed948 ) ( ) );
    uint32_t *  y652 = ( &temp947 );
    uint16_t *  yp653 = ( (  cast951 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  uint32_t   u16_dash_u32945 (    uint16_t  x726 ) {
    return ( (  cast_dash_on_dash_zeroed946 ) ( (  x726 ) ) );
}

static  struct Tuple2_932   get_dash_dimensions933 (  ) {
    struct Winsize_934  temp935 = ( ( (  zeroed936 ) ( ) ) );
    struct Winsize_934 *  ws2712 = ( &temp935 );
    if ( ( (  eq700 ( ( ( ioctl ) ( ( (  stdout_dash_fileno940 ) ( ) ) ,  ( (  tiocgwinsz941 ) ( ) ) ,  (  ws2712 ) ) ) , (  op_dash_neg852 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) || (  eq943 ( ( ( * (  ws2712 ) ) .f_ws_dash_col ) , (  from_dash_integral944 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_932_Tuple2 ) ( (  from_dash_integral181 ( 80 ) ) ,  (  from_dash_integral181 ( 24 ) ) ) );
    }
    return ( ( Tuple2_932_Tuple2 ) ( ( (  u16_dash_u32945 ) ( ( ( * (  ws2712 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32945 ) ( ( ( * (  ws2712 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined954 (  ) {
    struct timespec  temp955;
    return (  temp955 );
}

static  int32_t   clock_dash_monotonic956 (  ) {
    return (  from_dash_integral56 ( 1 ) );
}

static  struct timespec   now952 (  ) {
    struct timespec  temp953 = ( (  undefined954 ) ( ) );
    struct timespec *  t3520 = ( &temp953 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic956 ) ( ) ) ,  (  t3520 ) ) );
    return ( * (  t3520 ) );
}

struct env957 {
    struct anon_86 *  tui_dash_global_dash_state3572;
};

struct envunion958 {
    enum Unit_8  (*fun) (  struct env957*  ,    int32_t  );
    struct env957 env;
};

struct envunion958  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig959 ) {
    struct envunion958  temp960 = _intr_sigarr [  __intr__sig959 ];
    temp960.fun ( &temp960.env ,  __intr__sig959 );
}

static  enum Unit_8  _intr_register_signal (    int32_t  __intr__sig961 ,   struct envunion958  __intr__fun962 ) {
    _intr_sigarr [  __intr__sig961 ] =  __intr__fun962;
    signal(  __intr__sig961 , _intr_sighandle );
    return Unit_8_Unit;
}

static  int32_t   sigwinch963 (  ) {
    return (  from_dash_integral56 ( 28 ) );
}

static  enum Unit_8   lam964 (   struct env957* env ,    int32_t  dref3578 ) {
    (* env->tui_dash_global_dash_state3572 ) .f_should_dash_resize = ( true );
    return ( Unit_8_Unit );
}

static  uint32_t   fst965 (    struct Tuple2_932  dref1563 ) {
    return ( dref1563 .field0 );
}

static  uint32_t   snd966 (    struct Tuple2_932  dref1566 ) {
    return ( dref1566 .field1 );
}

static  struct Tui_97   mk843 (   struct env92* env ) {
    ( (  enable_dash_alternative_dash_screen_dash_buffer844 ) ( ) );
    (* env->tui_dash_global_dash_state3572 ) .f_orig_dash_termios = ( (  enable_dash_raw_dash_mode848 ) ( ) );
    ( (  hide_dash_cursor916 ) ( ) );
    ( (  reset_dash_colors917 ) ( ) );
    ( (  clear_dash_screen918 ) ( ) );
    ( (  enable_dash_mouse919 ) ( ) );
    ( (  flush_dash_stdout920 ) ( ) );
    enum ColorPalette_98  palette3574 = ( (  query_dash_palette921 ) ( ) );
    struct Tuple2_932  dims3575 = ( (  get_dash_dimensions933 ) ( ) );
    uint32_t  fps3576 = (  from_dash_integral181 ( 60 ) );
    struct timespec  last_dash_sync3577 = ( (  now952 ) ( ) );
    struct env957 envinst957 = {
        .tui_dash_global_dash_state3572 = env->tui_dash_global_dash_state3572 ,
    };
    ( _intr_register_signal ( ( (  sigwinch963 ) ( ) ) , ( (struct envunion958){ .fun = (  enum Unit_8  (*) (  struct env957*  ,    int32_t  ) )lam964 , .env =  envinst957 } ) ) );
    return ( (struct Tui_97) { .f_width = ( (  fst965 ) ( (  dims3575 ) ) ) , .f_height = ( (  snd966 ) ( (  dims3575 ) ) ) , .f_target_dash_fps = (  fps3576 ) , .f_actual_dash_fps = (  from_dash_integral181 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3577 ) , .f_fps_dash_ts = (  last_dash_sync3577 ) , .f_fps_dash_count = (  from_dash_integral181 ( 0 ) ) , .f_palette = (  palette3574 ) , .f_should_dash_redraw = ( true ) } );
}

struct TypeSize_971 {
    size_t  f_size;
};

static  struct TypeSize_971   get_dash_typesize970 (  ) {
    struct Cell_453  temp972;
    return ( (struct TypeSize_971) { .f_size = ( sizeof( ( (  temp972 ) ) ) ) } );
}

static  struct Cell_453 *   cast_dash_ptr973 (    void *  p398 ) {
    return ( (struct Cell_453 * ) (  p398 ) );
}

static  struct Slice_452   allocate969 (    enum CAllocator_10  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize970 ) ( ) ) ) .f_size );
    struct Cell_453 *  ptr2371 = ( (  cast_dash_ptr973 ) ( ( ( malloc ) ( (  op_dash_mul535 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_452) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

static  void *   cast_dash_ptr979 (    size_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of980 (    size_t  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  size_t   zeroed977 (  ) {
    size_t  temp978;
    size_t  x648 = (  temp978 );
    ( ( memset ) ( ( (  cast_dash_ptr979 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of980 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  uint32_t *   cast981 (    size_t *  x395 ) {
    return ( (uint32_t * ) (  x395 ) );
}

static  size_t   cast_dash_on_dash_zeroed975 (    uint32_t  x651 ) {
    size_t  temp976 = ( (  zeroed977 ) ( ) );
    size_t *  y652 = ( &temp976 );
    uint32_t *  yp653 = ( (  cast981 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  size_t   u32_dash_size974 (    uint32_t  x732 ) {
    return ( (  cast_dash_on_dash_zeroed975 ) ( (  x732 ) ) );
}

struct env984 {
    struct Slice_452  s2328;
    ;
    struct Cell_453 (*  fun2330 )(    struct Cell_453  );
    ;
    ;
};

struct envunion985 {
    enum Unit_8  (*fun) (  struct env984*  ,    int32_t  );
    struct env984 env;
};

static  enum Unit_8   for_dash_each983 (    struct Range_166  iterable1099 ,   struct envunion985  fun1101 ) {
    struct RangeIter_169  temp986 = ( (  into_dash_iter170 ) ( (  iterable1099 ) ) );
    struct RangeIter_169 *  it1102 = ( &temp986 );
    while ( ( true ) ) {
        struct Maybe_171  dref1103 = ( (  next172 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_171_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_171_Just_t ) {
                struct envunion985  temp987 = (  fun1101 );
                ( temp987.fun ( &temp987.env ,  ( dref1103 .stuff .Maybe_171_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Cell_453 *   offset_dash_ptr991 (    struct Cell_453 *  x377 ,    int64_t  count379 ) {
    struct Cell_453  temp992;
    return ( (struct Cell_453 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp992 ) ) ) ) ) ) ) ) );
}

static  struct Cell_453 *   get_dash_ptr990 (    struct Slice_452  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp302 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_453 *  elem_dash_ptr2173 = ( (  offset_dash_ptr991 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  enum Unit_8   set989 (    struct Slice_452  slice2187 ,    size_t  i2189 ,    struct Cell_453  x2191 ) {
    struct Cell_453 *  ep2192 = ( (  get_dash_ptr990 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_8_Unit );
}

struct Maybe_996 {
    enum {
        Maybe_996_None_t,
        Maybe_996_Just_t,
    } tag;
    union {
        struct {
            struct Cell_453  field0;
        } Maybe_996_Just_s;
    } stuff;
};

static struct Maybe_996 Maybe_996_Just (  struct Cell_453  field0 ) {
    return ( struct Maybe_996 ) { .tag = Maybe_996_Just_t, .stuff = { .Maybe_996_Just_s = { .field0 = field0 } } };
};

static  struct Cell_453   undefined997 (  ) {
    struct Cell_453  temp998;
    return (  temp998 );
}

static  struct Cell_453   or_dash_fail995 (    struct Maybe_996  x1353 ,    struct StrConcat_304  errmsg1355 ) {
    struct Maybe_996  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_996_None_t ) {
        ( (  panic303 ) ( (  errmsg1355 ) ) );
        return ( (  undefined997 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_996_Just_t ) {
            return ( dref1356 .stuff .Maybe_996_Just_s .field0 );
        }
    }
}

static  struct Maybe_996   try_dash_get999 (    struct Slice_452  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp302 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_996) { .tag = Maybe_996_None_t } );
    }
    struct Cell_453 *  elem_dash_ptr2179 = ( (  offset_dash_ptr991 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_996_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  struct Cell_453   get994 (    struct Slice_452  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail995 ) ( ( (  try_dash_get999 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_453   elem_dash_get993 (    struct Slice_452  self2195 ,    size_t  idx2197 ) {
    return ( (  get994 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

static  enum Unit_8   lam988 (   struct env984* env ,    int32_t  i2332 ) {
    return ( (  set989 ) ( ( env->s2328 ) ,  ( (  i32_dash_size280 ) ( (  i2332 ) ) ) ,  ( ( env->fun2330 ) ( (  elem_dash_get993 ( ( env->s2328 ) , ( (  i32_dash_size280 ) ( (  i2332 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map982 (    struct Slice_452  s2328 ,    struct Cell_453 (*  fun2330 )(    struct Cell_453  ) ) {
    struct env984 envinst984 = {
        .s2328 =  s2328 ,
        .fun2330 =  fun2330 ,
    };
    ( (  for_dash_each983 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32311 ) ( (  op_dash_sub462 ( ( (  s2328 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion985){ .fun = (  enum Unit_8  (*) (  struct env984*  ,    int32_t  ) )lam988 , .env =  envinst984 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_453   default_dash_cell1001 (  ) {
    return ( (struct Cell_453) { .f_c = ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_154) { .tag = Color_154_ColorDefault_t } ) , .f_bg = ( (struct Color_154) { .tag = Color_154_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } );
}

static  struct Cell_453   lam1000 (    struct Cell_453  dref3681 ) {
    return ( (  default_dash_cell1001 ) ( ) );
}

struct env1004 {
    struct Slice_452  s2328;
    ;
    struct Cell_453 (*  fun2330 )(    struct Cell_453  );
    ;
    ;
};

struct envunion1005 {
    enum Unit_8  (*fun) (  struct env1004*  ,    int32_t  );
    struct env1004 env;
};

static  enum Unit_8   for_dash_each1003 (    struct Range_166  iterable1099 ,   struct envunion1005  fun1101 ) {
    struct RangeIter_169  temp1006 = ( (  into_dash_iter170 ) ( (  iterable1099 ) ) );
    struct RangeIter_169 *  it1102 = ( &temp1006 );
    while ( ( true ) ) {
        struct Maybe_171  dref1103 = ( (  next172 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_171_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_171_Just_t ) {
                struct envunion1005  temp1007 = (  fun1101 );
                ( temp1007.fun ( &temp1007.env ,  ( dref1103 .stuff .Maybe_171_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1008 (   struct env1004* env ,    int32_t  i2332 ) {
    return ( (  set989 ) ( ( env->s2328 ) ,  ( (  i32_dash_size280 ) ( (  i2332 ) ) ) ,  ( ( env->fun2330 ) ( (  elem_dash_get993 ( ( env->s2328 ) , ( (  i32_dash_size280 ) ( (  i2332 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map1002 (    struct Slice_452  s2328 ,    struct Cell_453 (*  fun2330 )(    struct Cell_453  ) ) {
    struct env1004 envinst1004 = {
        .s2328 =  s2328 ,
        .fun2330 =  fun2330 ,
    };
    ( (  for_dash_each1003 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32311 ) ( (  op_dash_sub462 ( ( (  s2328 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1005){ .fun = (  enum Unit_8  (*) (  struct env1004*  ,    int32_t  ) )lam1008 , .env =  envinst1004 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_453   lam1009 (    struct Cell_453  dref3683 ) {
    return ( (  default_dash_cell1001 ) ( ) );
}

static  struct Screen_451   mk_dash_screen968 (    struct Tui_97 *  tui3677 ,    enum CAllocator_10  al3679 ) {
    struct Slice_452  cur3680 = ( (  allocate969 ) ( (  al3679 ) ,  ( (  u32_dash_size974 ) ( (  op_dash_mul183 ( ( ( * (  tui3677 ) ) .f_width ) , ( ( * (  tui3677 ) ) .f_height ) ) ) ) ) ) );
    ( (  map982 ) ( (  cur3680 ) ,  (  lam1000 ) ) );
    struct Slice_452  prev3682 = ( (  allocate969 ) ( (  al3679 ) ,  ( (  u32_dash_size974 ) ( (  op_dash_mul183 ( ( ( * (  tui3677 ) ) .f_width ) , ( ( * (  tui3677 ) ) .f_height ) ) ) ) ) ) );
    ( (  map1002 ) ( (  prev3682 ) ,  (  lam1009 ) ) );
    return ( (struct Screen_451) { .f_current = (  cur3680 ) , .f_previous = (  prev3682 ) , .f_al = (  al3679 ) , .f_tui = (  tui3677 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_154) { .tag = Color_154_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_154) { .tag = Color_154_ColorDefault_t } ) } );
}

enum MouseButton_1017 {
    MouseButton_1017_MouseLeft,
    MouseButton_1017_MouseMiddle,
    MouseButton_1017_MouseRight,
    MouseButton_1017_ScrollUp,
    MouseButton_1017_ScrollDown,
};

struct MouseEvent_1016 {
    enum MouseButton_1017  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_1015 {
    enum {
        InputEvent_1015_Key_t,
        InputEvent_1015_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_446  field0;
        } InputEvent_1015_Key_s;
        struct {
            struct MouseEvent_1016  field0;
        } InputEvent_1015_Mouse_s;
    } stuff;
};

static struct InputEvent_1015 InputEvent_1015_Key (  struct Key_446  field0 ) {
    return ( struct InputEvent_1015 ) { .tag = InputEvent_1015_Key_t, .stuff = { .InputEvent_1015_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_1015 InputEvent_1015_Mouse (  struct MouseEvent_1016  field0 ) {
    return ( struct InputEvent_1015 ) { .tag = InputEvent_1015_Mouse_t, .stuff = { .InputEvent_1015_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_1014 {
    enum {
        Maybe_1014_None_t,
        Maybe_1014_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_1015  field0;
        } Maybe_1014_Just_s;
    } stuff;
};

static struct Maybe_1014 Maybe_1014_Just (  struct InputEvent_1015  field0 ) {
    return ( struct Maybe_1014 ) { .tag = Maybe_1014_Just_t, .stuff = { .Maybe_1014_Just_s = { .field0 = field0 } } };
};

struct envunion1013 {
    struct Maybe_1014  (*fun) (  struct env95*  ,    struct Tui_97 *  );
    struct env95 env;
};

struct env1012 {
    struct Tui_97 *  tui4912;
    struct env95 envinst95;
};

struct envunion1018 {
    struct Maybe_1014  (*fun) (  struct env1012*  );
    struct env1012 env;
};

struct FunIter_1011 {
    struct envunion1018  f_fun;
    bool  f_finished;
};

static  struct FunIter_1011   into_dash_iter1019 (    struct FunIter_1011  self1053 ) {
    return (  self1053 );
}

static  struct FunIter_1011   from_dash_function1020 (   struct envunion1018  fun1061 ) {
    return ( (struct FunIter_1011) { .f_fun = (  fun1061 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions1025 (   struct env94* env ,    struct Tui_97 *  tui3643 ) {
    if ( ( ! ( ( * ( env->tui_dash_global_dash_state3572 ) ) .f_should_dash_resize ) ) ) {
        return ( false );
    }
    (*  tui3643 ) .f_should_dash_redraw = ( true );
    (* env->tui_dash_global_dash_state3572 ) .f_should_dash_resize = ( false );
    struct Tuple2_932  dim3644 = ( (  get_dash_dimensions933 ) ( ) );
    uint32_t  w3645 = ( (  fst965 ) ( (  dim3644 ) ) );
    uint32_t  h3646 = ( (  snd966 ) ( (  dim3644 ) ) );
    (*  tui3643 ) .f_width = (  w3645 );
    (*  tui3643 ) .f_height = (  h3646 );
    return ( true );
}

static  char   undefined1028 (  ) {
    char  temp1029;
    return (  temp1029 );
}

struct Maybe_1030 {
    enum {
        Maybe_1030_None_t,
        Maybe_1030_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_1030_Just_s;
    } stuff;
};

static struct Maybe_1030 Maybe_1030_Just (  char  field0 ) {
    return ( struct Maybe_1030 ) { .tag = Maybe_1030_Just_t, .stuff = { .Maybe_1030_Just_s = { .field0 = field0 } } };
};

struct Pollfd_1032 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr1033 (    struct Pollfd_1032 *  p398 ) {
    return ( (struct pollfd * ) (  p398 ) );
}

static  void *   cast_dash_ptr1036 (    char *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1037 (    char  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  char   zeroed1034 (  ) {
    char  temp1035;
    char  x648 = (  temp1035 );
    ( ( memset ) ( ( (  cast_dash_ptr1036 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1037 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  struct Maybe_1030   read_dash_byte1031 (    int32_t  timeout_dash_ms3566 ) {
    struct Pollfd_1032  pfd3567 = ( (struct Pollfd_1032) { .f_fd = (  from_dash_integral56 ( 0 ) ) , .f_events = (  from_dash_integral944 ( 1 ) ) , .f_revents = (  from_dash_integral944 ( 0 ) ) } );
    if ( (  cmp173 ( ( ( poll ) ( ( (  cast_dash_ptr1033 ) ( ( & (  pfd3567 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  timeout_dash_ms3566 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_1030) { .tag = Maybe_1030_None_t } );
    }
    char  c3568 = ( ( (  zeroed1034 ) ( ) ) );
    if ( (  cmp173 ( ( ( read ) ( ( (  stdin_dash_fileno850 ) ( ) ) ,  ( (  cast_dash_ptr1036 ) ( ( & (  c3568 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_1030) { .tag = Maybe_1030_None_t } );
    }
    return ( ( Maybe_1030_Just ) ( (  c3568 ) ) );
}

static  char   u8_dash_ascii1038 (    uint8_t  b1491 ) {
    return ( ( (char ) (  b1491 ) ) );
}

static  uint8_t *   cast1042 (    uint32_t *  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed1040 (    uint8_t  x651 ) {
    uint32_t  temp1041 = ( (  zeroed948 ) ( ) );
    uint32_t *  y652 = ( &temp1041 );
    uint8_t *  yp653 = ( (  cast1042 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  uint32_t   u8_dash_u321039 (    uint8_t  x756 ) {
    return ( (  cast_dash_on_dash_zeroed1040 ) ( (  x756 ) ) );
}

struct Map_1045 {
    struct StrViewIter_293  field0;
    uint32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1045 Map_1045_Map (  struct StrViewIter_293  field0 ,  uint32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1045 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1045   into_dash_iter1046 (    struct Map_1045  self804 ) {
    return (  self804 );
}

static  struct Maybe_861   next1047 (    struct Map_1045 *  dref806 ) {
    struct Maybe_351  dref809 = ( (  next352 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_861) { .tag = Maybe_861_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_351_Just_t ) {
            return ( ( Maybe_861_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_351_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce1044 (    struct Map_1045  iterable1118 ,    uint32_t  base1120 ,    uint32_t (*  fun1122 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1123 = (  base1120 );
    struct Map_1045  it1124 = ( (  into_dash_iter1046 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_861  dref1125 = ( (  next1047 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_861_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_861_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_861_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1048 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1048);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp1049;
    return (  temp1049 );
}

static  struct Map_1045   map1050 (    struct StrView_27  iterable813 ,    uint32_t (*  fun815 )(    struct Char_65  ) ) {
    struct StrViewIter_293  it816 = ( (  into_dash_iter296 ) ( (  iterable813 ) ) );
    return ( ( Map_1045_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  uint8_t *   cast1055 (    size_t *  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  size_t   cast_dash_on_dash_zeroed1053 (    uint8_t  x651 ) {
    size_t  temp1054 = ( (  zeroed977 ) ( ) );
    size_t *  y652 = ( &temp1054 );
    uint8_t *  yp653 = ( (  cast1055 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  size_t   u8_dash_size1052 (    uint8_t  x747 ) {
    return ( (  cast_dash_on_dash_zeroed1053 ) ( (  x747 ) ) );
}

struct StrConcat_1058 {
    struct Char_65  field0;
    struct Char_65  field1;
};

static struct StrConcat_1058 StrConcat_1058_StrConcat (  struct Char_65  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1058 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1057 {
    struct StrConcat_1058  field0;
    struct StrView_27  field1;
};

static struct StrConcat_1057 StrConcat_1057_StrConcat (  struct StrConcat_1058  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_1057 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1062 {
    struct StrView_27  field0;
    struct StrConcat_1057  field1;
};

static struct StrConcat_1062 StrConcat_1062_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_1057  field1 ) {
    return ( struct StrConcat_1062 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1061 {
    struct StrConcat_1062  field0;
    struct Char_65  field1;
};

static struct StrConcat_1061 StrConcat_1061_StrConcat (  struct StrConcat_1062  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1061 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str1065 (    struct StrConcat_1058  self1302 ) {
    struct StrConcat_1058  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str317 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1064 (    struct StrConcat_1057  self1302 ) {
    struct StrConcat_1057  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str1065 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str310 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1063 (    struct StrConcat_1062  self1302 ) {
    struct StrConcat_1062  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str310 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str1064 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1060 (    struct StrConcat_1061  self1302 ) {
    struct StrConcat_1061  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str1063 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic1059 (    struct StrConcat_1057  errmsg1343 ) {
    ( (  print_dash_str1060 ) ( ( ( StrConcat_1061_StrConcat ) ( ( ( StrConcat_1062_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  uint8_t   or_dash_fail1056 (    struct Maybe_74  x1353 ,    struct StrConcat_1057  errmsg1355 ) {
    struct Maybe_74  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_74_None_t ) {
        ( (  panic1059 ) ( (  errmsg1355 ) ) );
        return ( (  undefined596 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_74_Just_t ) {
            return ( dref1356 .stuff .Maybe_74_Just_s .field0 );
        }
    }
}

static  enum Ordering_174   cmp1067 (    struct Char_65  l1459 ,    struct Char_65  r1461 ) {
    if ( ( ( !  eq283 ( ( (  l1459 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq283 ( ( (  r1461 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp1068 = ( (  from_dash_string57 ) ( ( (uint8_t*)"(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp1068);
        abort ( );
        ( Unit_8_Unit );
    }
    return ( (  cmp341 ) ( ( (  char_dash_u8675 ) ( (  l1459 ) ) ) ,  ( (  char_dash_u8675 ) ( (  r1461 ) ) ) ) );
}

static  uint8_t   op_dash_sub1069 (    uint8_t  l274 ,    uint8_t  r276 ) {
    return ( (  l274 ) - (  r276 ) );
}

static  uint8_t   op_dash_add1070 (    uint8_t  l269 ,    uint8_t  r271 ) {
    return ( (  l269 ) + (  r271 ) );
}

static  struct Maybe_74   hex_dash_digit1066 (    struct Char_65  c3128 ) {
    if ( ( (  cmp1067 ( (  c3128 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp1067 ( (  c3128 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_74_Just ) ( (  op_dash_sub1069 ( ( (  char_dash_u8675 ) ( (  c3128 ) ) ) , ( (  char_dash_u8675 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp1067 ( (  c3128 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp1067 ( (  c3128 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_74_Just ) ( (  op_dash_add1070 ( (  op_dash_sub1069 ( ( (  char_dash_u8675 ) ( (  c3128 ) ) ) , ( (  char_dash_u8675 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral328 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp1067 ( (  c3128 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp1067 ( (  c3128 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_74_Just ) ( (  op_dash_add1070 ( (  op_dash_sub1069 ( ( (  char_dash_u8675 ) ( (  c3128 ) ) ) , ( (  char_dash_u8675 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral328 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_74) { .tag = Maybe_74_None_t } );
}

static  uint32_t   lam1051 (    struct Char_65  c3133 ) {
    return ( (  from_dash_integral181 ) ( ( (  u8_dash_size1052 ) ( ( (  or_dash_fail1056 ) ( ( (  hex_dash_digit1066 ) ( (  c3133 ) ) ) ,  ( ( StrConcat_1057_StrConcat ) ( ( ( StrConcat_1058_StrConcat ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\"" ) ,  ( 1 ) ) ) ,  (  c3133 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam1071 (    uint32_t  elem3135 ,    uint32_t  b3137 ) {
    return (  op_dash_add187 ( (  op_dash_mul183 ( (  b3137 ) , (  from_dash_integral181 ( 16 ) ) ) ) , (  elem3135 ) ) );
}

static  uint32_t   from_dash_hex1043 (    struct StrView_27  arr3131 ) {
    return ( (  reduce1044 ) ( ( (  map1050 ) ( (  arr3131 ) ,  (  lam1051 ) ) ) ,  (  from_dash_integral181 ( 0 ) ) ,  (  lam1071 ) ) );
}

static  bool   eq1073 (    char  l415 ,    char  r417 ) {
    return ( (  l415 ) == (  r417 ) );
}

struct Array_1074 {
    char _arr [32];
};

static  void *   cast_dash_ptr1078 (    struct Array_1074 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1079 (    struct Array_1074  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Array_1074   zeroed1076 (  ) {
    struct Array_1074  temp1077;
    struct Array_1074  x648 = (  temp1077 );
    ( ( memset ) ( ( (  cast_dash_ptr1078 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1079 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  char *   cast_dash_ptr1083 (    struct Array_1074 *  p398 ) {
    return ( (char * ) (  p398 ) );
}

static  char *   offset_dash_ptr1084 (    char *  x377 ,    int64_t  count379 ) {
    char  temp1085;
    return ( (char * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1085 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr1082 (    struct Array_1074 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp302 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2029 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic513 ) ( ( ( StrConcat_514_StrConcat ) ( ( ( StrConcat_515_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2030 = ( ( (  cast_dash_ptr1083 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr1084 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  enum Unit_8   set1081 (    struct Array_1074 *  arr2039 ,    size_t  i2042 ,    char  e2044 ) {
    char *  p2045 = ( (  get_dash_ptr1082 ) ( (  arr2039 ) ,  (  i2042 ) ) );
    (*  p2045 ) = (  e2044 );
    return ( Unit_8_Unit );
}

struct Slice_1087 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail1090 (    struct Maybe_1030  x1353 ,    struct StrConcat_304  errmsg1355 ) {
    struct Maybe_1030  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_1030_None_t ) {
        ( (  panic303 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1028 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_1030_Just_t ) {
            return ( dref1356 .stuff .Maybe_1030_Just_s .field0 );
        }
    }
}

static  struct Maybe_1030   try_dash_get1091 (    struct Slice_1087  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp302 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1030) { .tag = Maybe_1030_None_t } );
    }
    char *  elem_dash_ptr2179 = ( (  offset_dash_ptr1084 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_1030_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  char   get1089 (    struct Slice_1087  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail1090 ) ( ( (  try_dash_get1091 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get1088 (    struct Slice_1087  self2195 ,    size_t  idx2197 ) {
    return ( (  get1089 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

struct Scanner_1092 {
    struct StrViewIter_293  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_1092   mk_dash_from_dash_str1094 (    struct StrView_27  s3405 ) {
    return ( (struct Scanner_1092) { .f_s = ( (  chars295 ) ( (  s3405 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   offset_dash_ptr_prime_1098 (    uint8_t *  x382 ,    size_t  count384 ) {
    return ( (  offset_dash_ptr353 ) ( (  x382 ) ,  ( (int64_t ) (  count384 ) ) ) );
}

static  struct StrView_27   substr1095 (    struct StrView_27  s2596 ,    size_t  from2598 ,    size_t  to2600 ) {
    size_t  from_dash_bs2601 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_169  temp1096 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( ( (  size_dash_i32311 ) ( (  from2598 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond1097 =  next172 (&temp1096);
        if (  __cond1097 .tag == 0 ) {
            break;
        }
        int32_t  dref2602 =  __cond1097 .stuff .Maybe_171_Just_s .field0;
        if ( (  cmp302 ( (  from_dash_bs2601 ) , ( ( (  s2596 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2601 = (  op_dash_add356 ( (  from_dash_bs2601 ) , ( (  next_dash_char340 ) ( ( (  offset_dash_ptr_prime_1098 ) ( ( ( (  s2596 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2601 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2603 = (  from_dash_bs2601 );
    struct RangeIter_169  temp1099 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( (  op_dash_sub180 ( ( (  size_dash_i32311 ) ( (  to2600 ) ) ) , ( (  size_dash_i32311 ) ( (  from2598 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond1100 =  next172 (&temp1099);
        if (  __cond1100 .tag == 0 ) {
            break;
        }
        int32_t  dref2604 =  __cond1100 .stuff .Maybe_171_Just_s .field0;
        if ( (  cmp302 ( (  to_dash_bs2603 ) , ( ( (  s2596 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2603 = (  op_dash_add356 ( (  to_dash_bs2603 ) , ( (  next_dash_char340 ) ( ( (  offset_dash_ptr_prime_1098 ) ( ( ( (  s2596 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2603 ) ) ) ) ) ) );
    }
    return ( (struct StrView_27) { .f_contents = ( (  subslice590 ) ( ( (  s2596 ) .f_contents ) ,  (  from_dash_bs2601 ) ,  (  to_dash_bs2603 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr1103 (    char *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  struct Slice_14   cast_dash_slice1102 (    struct Slice_1087  s2354 ) {
    return ( (struct Slice_14) { .f_ptr = ( (  cast_dash_ptr1103 ) ( ( (  s2354 ) .f_ptr ) ) ) , .f_count = ( (  s2354 ) .f_count ) } );
}

static  struct StrView_27   from_dash_ascii_dash_slice1101 (    struct Slice_1087  sl2570 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice1102 ) ( (  sl2570 ) ) ) } );
}

struct Maybe_1104 {
    enum {
        Maybe_1104_None_t,
        Maybe_1104_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_1104_Just_s;
    } stuff;
};

static struct Maybe_1104 Maybe_1104_Just (  int64_t  field0 ) {
    return ( struct Maybe_1104 ) { .tag = Maybe_1104_Just_t, .stuff = { .Maybe_1104_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_1106 {
    struct Scanner_1092  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

static  struct Scanner_1092   into_dash_iter1109 (    struct Scanner_1092  self3396 ) {
    return (  self3396 );
}

static  struct Scanner_1092   into_dash_iter1108 (    struct Scanner_1092 *  self793 ) {
    return ( (  into_dash_iter1109 ) ( ( * (  self793 ) ) ) );
}

static  struct TakeWhile_1106   take_dash_while1107 (    struct Scanner_1092 *  it995 ,    bool (*  pred997 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1106) { .f_it = ( (  into_dash_iter1108 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  struct Char_65   min1112 (    struct Char_65  l1367 ,    struct Char_65  r1369 ) {
    if ( (  cmp1067 ( (  l1367 ) , (  r1369 ) ) == 0 ) ) {
        return (  l1367 );
    } else {
        return (  r1369 );
    }
}

static  struct Char_65   max1113 (    struct Char_65  l1372 ,    struct Char_65  r1374 ) {
    if ( (  cmp1067 ( (  l1372 ) , (  r1374 ) ) == 2 ) ) {
        return (  l1372 );
    } else {
        return (  r1374 );
    }
}

static  bool   between1111 (    struct Char_65  c1377 ,    struct Char_65  l1379 ,    struct Char_65  r1381 ) {
    struct Char_65  from1382 = ( (  min1112 ) ( (  l1379 ) ,  (  r1381 ) ) );
    struct Char_65  to1383 = ( (  max1113 ) ( (  l1379 ) ,  (  r1381 ) ) );
    return ( (  cmp1067 ( (  from1382 ) , (  c1377 ) ) != 2 ) && (  cmp1067 ( (  c1377 ) , (  to1383 ) ) != 2 ) );
}

static  bool   is_dash_digit1110 (    struct Char_65  c1506 ) {
    return ( (  eq283 ( ( (  c1506 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1111 ) ( (  c1506 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"9" ) ,  ( 1 ) ) ) ) ) );
}

static  struct Maybe_351   next1117 (    struct Scanner_1092 *  self3391 ) {
    struct Maybe_351  dref3392 = ( (  next352 ) ( ( & ( ( * (  self3391 ) ) .f_s ) ) ) );
    if ( dref3392.tag == Maybe_351_Just_t ) {
        (*  self3391 ) .f_byte_dash_offset = (  op_dash_add356 ( ( ( * (  self3391 ) ) .f_byte_dash_offset ) , ( ( dref3392 .stuff .Maybe_351_Just_s .field0 ) .f_num_dash_bytes ) ) );
        return ( ( Maybe_351_Just ) ( ( dref3392 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref3392.tag == Maybe_351_None_t ) {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
}

static  struct Maybe_351   next1116 (    struct TakeWhile_1106 *  self989 ) {
    struct Maybe_351  mx990 = ( (  next1117 ) ( ( & ( ( * (  self989 ) ) .f_it ) ) ) );
    struct Maybe_351  dref991 = (  mx990 );
    if ( dref991.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    else {
        if ( dref991.tag == Maybe_351_Just_t ) {
            if ( ( ( ( * (  self989 ) ) .f_pred ) ( ( dref991 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_351_Just ) ( ( dref991 .stuff .Maybe_351_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
            }
        }
    }
}

static  struct TakeWhile_1106   into_dash_iter1119 (    struct TakeWhile_1106  self986 ) {
    return (  self986 );
}

static  struct Maybe_351   head1115 (    struct TakeWhile_1106  it1167 ) {
    struct TakeWhile_1106  temp1118 = ( (  into_dash_iter1119 ) ( (  it1167 ) ) );
    return ( (  next1116 ) ( ( &temp1118 ) ) );
}

static  bool   null1114 (    struct TakeWhile_1106  it1176 ) {
    struct Maybe_351  dref1177 = ( (  head1115 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_351_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env1122 {
    struct Scanner_1092 *  it1218;
    ;
};

struct envunion1123 {
    struct Maybe_351  (*fun) (  struct env1122*  ,    int32_t  );
    struct env1122 env;
};

static  enum Unit_8   for_dash_each1121 (    struct Range_166  iterable1099 ,   struct envunion1123  fun1101 ) {
    struct RangeIter_169  temp1124 = ( (  into_dash_iter170 ) ( (  iterable1099 ) ) );
    struct RangeIter_169 *  it1102 = ( &temp1124 );
    while ( ( true ) ) {
        struct Maybe_171  dref1103 = ( (  next172 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_171_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_171_Just_t ) {
                struct envunion1123  temp1125 = (  fun1101 );
                ( temp1125.fun ( &temp1125.env ,  ( dref1103 .stuff .Maybe_171_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_351   lam1126 (   struct env1122* env ,    int32_t  dref1221 ) {
    return ( (  next1117 ) ( ( env->it1218 ) ) );
}

static  enum Unit_8   drop_prime_1120 (    struct Scanner_1092 *  it1218 ,    size_t  n1220 ) {
    struct env1122 envinst1122 = {
        .it1218 =  it1218 ,
    };
    ( (  for_dash_each1121 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 1 ) ) ,  ( (  size_dash_i32311 ) ( (  n1220 ) ) ) ) ) ,  ( (struct envunion1123){ .fun = (  struct Maybe_351  (*) (  struct env1122*  ,    int32_t  ) )lam1126 , .env =  envinst1122 } ) ) );
    return ( Unit_8_Unit );
}

static  size_t   reduce1128 (    struct TakeWhile_1106  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct TakeWhile_1106  it1124 = ( (  into_dash_iter1119 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1125 = ( (  next1116 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_351_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_351_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1129 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1129);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1130;
    return (  temp1130 );
}

static  size_t   lam1131 (    struct Char_65  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add356 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1127 (    struct TakeWhile_1106  it1129 ) {
    return ( (  reduce1128 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1131 ) ) );
}

static  struct TakeWhile_1106   chars1133 (    struct TakeWhile_1106  self1889 ) {
    return (  self1889 );
}

static  struct Maybe_1104   reduce1134 (    struct TakeWhile_1106  iterable1118 ,    struct Maybe_1104  base1120 ,    struct Maybe_1104 (*  fun1122 )(    struct Char_65  ,    struct Maybe_1104  ) ) {
    struct Maybe_1104  x1123 = (  base1120 );
    struct TakeWhile_1106  it1124 = ( (  into_dash_iter1119 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1125 = ( (  next1116 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_351_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_351_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1135 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1135);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_1104  temp1136;
    return (  temp1136 );
}

static  void *   cast_dash_ptr1144 (    int32_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1145 (    int32_t  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  int32_t   zeroed1142 (  ) {
    int32_t  temp1143;
    int32_t  x648 = (  temp1143 );
    ( ( memset ) ( ( (  cast_dash_ptr1144 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1145 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  uint8_t *   cast1146 (    int32_t *  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1140 (    uint8_t  x651 ) {
    int32_t  temp1141 = ( (  zeroed1142 ) ( ) );
    int32_t *  y652 = ( &temp1141 );
    uint8_t *  yp653 = ( (  cast1146 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  int32_t   u8_dash_i321139 (    uint8_t  x753 ) {
    return ( (  cast_dash_on_dash_zeroed1140 ) ( (  x753 ) ) );
}

static  struct Maybe_171   parse_dash_digit1138 (    struct Char_65  c1531 ) {
    if ( ( (  is_dash_digit1110 ) ( (  c1531 ) ) ) ) {
        return ( ( Maybe_171_Just ) ( ( (  u8_dash_i321139 ) ( (  op_dash_sub1069 ( ( (  char_dash_u8675 ) ( (  c1531 ) ) ) , ( (  char_dash_u8675 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
    }
}

static  int64_t   i32_dash_i641147 (    int32_t  x684 ) {
    return ( (int64_t ) (  x684 ) );
}

static  struct Maybe_1104   sequence_dash_maybe1137 (    struct Char_65  e1935 ,    struct Maybe_1104  b1937 ) {
    struct Maybe_1104  dref1938 = (  b1937 );
    if ( dref1938.tag == Maybe_1104_None_t ) {
        return ( (struct Maybe_1104) { .tag = Maybe_1104_None_t } );
    }
    else {
        if ( dref1938.tag == Maybe_1104_Just_t ) {
            struct Maybe_171  dref1940 = ( (  parse_dash_digit1138 ) ( (  e1935 ) ) );
            if ( dref1940.tag == Maybe_171_None_t ) {
                return ( (struct Maybe_1104) { .tag = Maybe_1104_None_t } );
            }
            else {
                if ( dref1940.tag == Maybe_171_Just_t ) {
                    return ( ( Maybe_1104_Just ) ( (  op_dash_add366 ( (  op_dash_mul347 ( ( dref1938 .stuff .Maybe_1104_Just_s .field0 ) , (  from_dash_integral365 ( 10 ) ) ) ) , ( (  i32_dash_i641147 ) ( ( dref1940 .stuff .Maybe_171_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_1104   parse_dash_int1132 (    struct TakeWhile_1106  s1932 ) {
    struct TakeWhile_1106  cs1942 = ( (  chars1133 ) ( (  s1932 ) ) );
    struct Maybe_351  dref1943 = ( (  head1115 ) ( (  cs1942 ) ) );
    if ( dref1943.tag == Maybe_351_Just_t ) {
        return ( (  reduce1134 ) ( (  cs1942 ) ,  ( ( Maybe_1104_Just ) ( (  from_dash_integral365 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1137 ) ) );
    }
    else {
        if ( dref1943.tag == Maybe_351_None_t ) {
            return ( (struct Maybe_1104) { .tag = Maybe_1104_None_t } );
        }
    }
}

static  struct Maybe_1104   scan_dash_int1105 (    struct Scanner_1092 *  sc3411 ) {
    struct TakeWhile_1106  digit_dash_chars3412 = ( (  take_dash_while1107 ) ( (  sc3411 ) ,  (  is_dash_digit1110 ) ) );
    if ( ( (  null1114 ) ( (  digit_dash_chars3412 ) ) ) ) {
        return ( (struct Maybe_1104) { .tag = Maybe_1104_None_t } );
    }
    ( (  drop_prime_1120 ) ( (  sc3411 ) ,  ( (  count1127 ) ( (  digit_dash_chars3412 ) ) ) ) );
    return ( (  parse_dash_int1132 ) ( (  digit_dash_chars3412 ) ) );
}

static  int32_t   i64_dash_i321149 (    int64_t  x699 ) {
    return ( (int32_t ) (  x699 ) );
}

struct StrConcat_1151 {
    struct StrView_27  field0;
    int64_t  field1;
};

static struct StrConcat_1151 StrConcat_1151_StrConcat (  struct StrView_27  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_1151 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1153 {
    struct StrView_27  field0;
    struct StrConcat_1151  field1;
};

static struct StrConcat_1153 StrConcat_1153_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_1151  field1 ) {
    return ( struct StrConcat_1153 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1155 {
    struct StrConcat_1153  field0;
    struct Char_65  field1;
};

static struct StrConcat_1155 StrConcat_1155_StrConcat (  struct StrConcat_1153  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1155 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1160 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1159 {
    struct StrViewIter_293  f_left;
    struct IntStrIter_1160  f_right;
};

struct StrConcatIter_1158 {
    struct StrViewIter_293  f_left;
    struct StrConcatIter_1159  f_right;
};

enum EmptyIter_1162 {
    EmptyIter_1162_EmptyIter,
};

struct AppendIter_1161 {
    enum EmptyIter_1162  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

struct StrConcatIter_1157 {
    struct StrConcatIter_1158  f_left;
    struct AppendIter_1161  f_right;
};

static  struct StrConcatIter_1157   into_dash_iter1164 (    struct StrConcatIter_1157  self1290 ) {
    return (  self1290 );
}

struct env1171 {
    ;
    int64_t  base1386;
};

struct envunion1172 {
    int64_t  (*fun) (  struct env1171*  ,    int32_t  ,    int64_t  );
    struct env1171 env;
};

static  int64_t   reduce1170 (    struct Range_166  iterable1118 ,    int64_t  base1120 ,   struct envunion1172  fun1122 ) {
    int64_t  x1123 = (  base1120 );
    struct RangeIter_169  it1124 = ( (  into_dash_iter170 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next172 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                struct envunion1172  temp1173 = (  fun1122 );
                x1123 = ( temp1173.fun ( &temp1173.env ,  ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1174 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1174);
    abort ( );
    ( Unit_8_Unit );
    int64_t  temp1175;
    return (  temp1175 );
}

static  int64_t   lam1176 (   struct env1171* env ,    int32_t  item1390 ,    int64_t  x1392 ) {
    return (  op_dash_mul347 ( (  x1392 ) , ( env->base1386 ) ) );
}

static  int64_t   pow1169 (    int64_t  base1386 ,    int32_t  p1388 ) {
    struct env1171 envinst1171 = {
        .base1386 =  base1386 ,
    };
    return ( (  reduce1170 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( (  p1388 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral365 ( 1 ) ) ,  ( (struct envunion1172){ .fun = (  int64_t  (*) (  struct env1171*  ,    int32_t  ,    int64_t  ) )lam1176 , .env =  envinst1171 } ) ) );
}

static  int64_t   op_dash_div1177 (    int64_t  l218 ,    int64_t  r220 ) {
    return ( (  l218 ) / (  r220 ) );
}

static  uint8_t   cast1178 (    int64_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  int64_t   op_dash_sub1179 (    int64_t  l208 ,    int64_t  r210 ) {
    return ( (  l208 ) - (  r210 ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer1181 (    uint8_t *  ptr786 ,    uint8_t  b788 ) {
    size_t  s789 = ( ( (size_t ) (  ptr786 ) ) );
    size_t  exp790 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add356 ( (  op_dash_sub462 ( (  s789 ) , ( (  u8_dash_size1052 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer325 ) ( (  ptr786 ) ) ) ) ) ) ) , (  op_dash_mul535 ( (  exp790 ) , ( (  u8_dash_size1052 ) ( (  b788 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast1182 (    size_t  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  struct Char_65   char_dash_from_dash_u81180 (    uint8_t  b1277 ) {
    uint8_t *  ptr1278 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer1181 ) ( ( ( (  cast1182 ) ( ( (  u8_dash_size1052 ) ( (  b1277 ) ) ) ) ) ) ,  (  from_dash_integral328 ( 103 ) ) ) );
    return ( (struct Char_65) { .f_ptr = (  ptr1278 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_351   next1168 (    struct IntStrIter_1160 *  self1399 ) {
    if ( ( ( * (  self1399 ) ) .f_negative ) ) {
        (*  self1399 ) .f_negative = ( false );
        return ( ( Maybe_351_Just ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp173 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    int64_t  trim_dash_down1400 = ( (  pow1169 ) ( (  from_dash_integral365 ( 10 ) ) ,  (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int64_t  upper1401 = (  op_dash_div1177 ( ( ( * (  self1399 ) ) .f_int ) , (  trim_dash_down1400 ) ) );
    int64_t  upper_dash_mask1402 = (  op_dash_mul347 ( (  op_dash_div1177 ( (  upper1401 ) , (  from_dash_integral365 ( 10 ) ) ) ) , (  from_dash_integral365 ( 10 ) ) ) );
    uint8_t  digit1403 = ( ( (  cast1178 ) ( (  op_dash_sub1179 ( (  upper1401 ) , (  upper_dash_mask1402 ) ) ) ) ) );
    (*  self1399 ) .f_len = (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1404 = ( (  char_dash_from_dash_u81180 ) ( (  op_dash_add1070 ( (  digit1403 ) , (  from_dash_integral328 ( 48 ) ) ) ) ) );
    return ( ( Maybe_351_Just ) ( (  digit_dash_char1404 ) ) );
}

static  struct Maybe_351   next1167 (    struct StrConcatIter_1159 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1168 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next1166 (    struct StrConcatIter_1158 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1167 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next1184 (    enum EmptyIter_1162 *  dref800 ) {
    return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
}

static  struct Maybe_351   next1183 (    struct AppendIter_1161 *  self1047 ) {
    struct Maybe_351  dref1048 = ( (  next1184 ) ( ( & ( ( * (  self1047 ) ) .f_it ) ) ) );
    if ( dref1048.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1048 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1048.tag == Maybe_351_None_t ) {
            if ( ( ! ( ( * (  self1047 ) ) .f_appended ) ) ) {
                (*  self1047 ) .f_appended = ( true );
                return ( ( Maybe_351_Just ) ( ( ( * (  self1047 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
}

static  struct Maybe_351   next1165 (    struct StrConcatIter_1157 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next1166 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1183 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1156 (    struct StrConcatIter_1157  iterable1099 ,    enum Unit_8 (*  fun1101 )(    struct Char_65  ) ) {
    struct StrConcatIter_1157  temp1163 = ( (  into_dash_iter1164 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_1157 *  it1102 = ( &temp1163 );
    while ( ( true ) ) {
        struct Maybe_351  dref1103 = ( (  next1165 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_351_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_351_Just_t ) {
                ( (  fun1101 ) ( ( dref1103 .stuff .Maybe_351_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_174   cmp1193 (    int64_t  l163 ,    int64_t  r165 ) {
    return ( builtin_int64_tcmp( (  l163 ) , (  r165 ) ) );
}

static  bool   eq1195 (    int64_t  l110 ,    int64_t  r112 ) {
    return ( (  l110 ) == (  r112 ) );
}

static  int32_t   count_dash_digits1194 (    int64_t  self1407 ) {
    if ( (  eq1195 ( (  self1407 ) , (  from_dash_integral365 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1408 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp1193 ( (  self1407 ) , (  from_dash_integral365 ( 0 ) ) ) == 2 ) ) {
        self1407 = (  op_dash_div1177 ( (  self1407 ) , (  from_dash_integral365 ( 10 ) ) ) );
        digits1408 = (  op_dash_add175 ( (  digits1408 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1408 );
}

static  struct IntStrIter_1160   int_dash_iter1192 (    int64_t  int1411 ) {
    if ( (  cmp1193 ( (  int1411 ) , (  from_dash_integral365 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1160) { .f_int = (  op_dash_neg384 ( (  int1411 ) ) ) , .f_len = ( (  count_dash_digits1194 ) ( (  op_dash_neg384 ( (  int1411 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1160) { .f_int = (  int1411 ) , .f_len = ( (  count_dash_digits1194 ) ( (  int1411 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1160   chars1191 (    int64_t  self1808 ) {
    return ( (  int_dash_iter1192 ) ( (  self1808 ) ) );
}

static  struct StrConcatIter_1159   into_dash_iter1190 (    struct StrConcat_1151  dref1297 ) {
    return ( (struct StrConcatIter_1159) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1191 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1159   chars1189 (    struct StrConcat_1151  self1308 ) {
    return ( (  into_dash_iter1190 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_1158   into_dash_iter1188 (    struct StrConcat_1153  dref1297 ) {
    return ( (struct StrConcatIter_1158) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1189 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1158   chars1187 (    struct StrConcat_1153  self1308 ) {
    return ( (  into_dash_iter1188 ) ( (  self1308 ) ) );
}

static  enum EmptyIter_1162   into_dash_iter1200 (    enum EmptyIter_1162  self798 ) {
    return (  self798 );
}

static  struct AppendIter_1161   append1199 (    enum EmptyIter_1162  it1031 ,    struct Char_65  e1033 ) {
    return ( (struct AppendIter_1161) { .f_it = ( (  into_dash_iter1200 ) ( (  it1031 ) ) ) , .f_elem = (  e1033 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_1161   cons1198 (    enum EmptyIter_1162  it1036 ,    struct Char_65  e1038 ) {
    return ( (  append1199 ) ( (  it1036 ) ,  (  e1038 ) ) );
}

static  enum EmptyIter_1162   nil1201 (  ) {
    return ( EmptyIter_1162_EmptyIter );
}

static  struct AppendIter_1161   single1197 (    struct Char_65  e1041 ) {
    return ( (  cons1198 ) ( ( (  nil1201 ) ( ) ) ,  (  e1041 ) ) );
}

static  struct AppendIter_1161   chars1196 (    struct Char_65  self1286 ) {
    return ( (  single1197 ) ( (  self1286 ) ) );
}

static  struct StrConcatIter_1157   into_dash_iter1186 (    struct StrConcat_1155  dref1297 ) {
    return ( (struct StrConcatIter_1157) { .f_left = ( (  chars1187 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1196 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1157   chars1185 (    struct StrConcat_1155  self1308 ) {
    return ( (  into_dash_iter1186 ) ( (  self1308 ) ) );
}

static  enum Unit_8   print1154 (    struct StrConcat_1155  s1335 ) {
    ( (  for_dash_each1156 ) ( ( (  chars1185 ) ( (  s1335 ) ) ) ,  (  printf_dash_char318 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   println1152 (    struct StrConcat_1153  s1338 ) {
    ( (  print1154 ) ( ( ( StrConcat_1155_StrConcat ) ( (  s1338 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum MouseButton_1017   undefined1202 (  ) {
    enum MouseButton_1017  temp1203;
    return (  temp1203 );
}

static  enum MouseButton_1017   panic_prime_1150 (    struct StrConcat_1151  errmsg2149 ) {
    ( (  println1152 ) ( ( ( StrConcat_1153_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg2149 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1202 ) ( ) );
}

static  enum MouseButton_1017   btn_dash_to_dash_mouse_dash_button1148 (    int64_t  btn3603 ) {
    return ( {  int32_t  dref3604 = ( (  i64_dash_i321149 ) ( (  btn3603 ) ) ) ;  eq700 (  dref3604 ,  from_dash_integral56 ( 0 ) ) ? ( MouseButton_1017_MouseLeft ) :  eq700 (  dref3604 ,  from_dash_integral56 ( 1 ) ) ? ( MouseButton_1017_MouseMiddle ) :  eq700 (  dref3604 ,  from_dash_integral56 ( 2 ) ) ? ( MouseButton_1017_MouseRight ) :  eq700 (  dref3604 ,  from_dash_integral56 ( 64 ) ) ? ( MouseButton_1017_ScrollUp ) :  eq700 (  dref3604 ,  from_dash_integral56 ( 65 ) ) ? ( MouseButton_1017_ScrollDown ) : ( (  panic_prime_1150 ) ( ( ( StrConcat_1151_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3603 ) ) ) ) ) ; } );
}

static  struct Scanner_1092   mk1205 (    struct StrView_27  s3399 ) {
    return ( (struct Scanner_1092) { .f_s = ( (  into_dash_iter296 ) ( (  s3399 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_1014   parse_dash_csi1086 (    struct Slice_1087  seq3610 ) {
    if ( (  eq283 ( ( (  seq3610 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1014) { .tag = Maybe_1014_None_t } );
    }
    char  last3611 = (  elem_dash_get1088 ( (  seq3610 ) , (  op_dash_sub462 ( ( (  seq3610 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq1073 ( (  elem_dash_get1088 ( (  seq3610 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"<" ) ,  ( 1 ) ) ) ) ) && ( (  eq1073 ( (  last3611 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"M" ) ,  ( 1 ) ) ) ) ) || (  eq1073 ( (  last3611 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_1092  temp1093 = ( (  mk_dash_from_dash_str1094 ) ( ( (  substr1095 ) ( ( (  from_dash_ascii_dash_slice1101 ) ( (  seq3610 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3610 ) .f_count ) ) ) ) );
        struct Scanner_1092 *  sc3612 = ( &temp1093 );
        struct Maybe_1104  dref3613 = ( (  scan_dash_int1105 ) ( (  sc3612 ) ) );
        if ( dref3613.tag == Maybe_1104_None_t ) {
            return ( (struct Maybe_1014) { .tag = Maybe_1014_None_t } );
        }
        else {
            if ( dref3613.tag == Maybe_1104_Just_t ) {
                ( (  next1117 ) ( (  sc3612 ) ) );
                struct Maybe_1104  dref3615 = ( (  scan_dash_int1105 ) ( (  sc3612 ) ) );
                if ( dref3615.tag == Maybe_1104_None_t ) {
                    return ( (struct Maybe_1014) { .tag = Maybe_1014_None_t } );
                }
                else {
                    if ( dref3615.tag == Maybe_1104_Just_t ) {
                        ( (  next1117 ) ( (  sc3612 ) ) );
                        struct Maybe_1104  dref3617 = ( (  scan_dash_int1105 ) ( (  sc3612 ) ) );
                        if ( dref3617.tag == Maybe_1104_None_t ) {
                            return ( (struct Maybe_1014) { .tag = Maybe_1014_None_t } );
                        }
                        else {
                            if ( dref3617.tag == Maybe_1104_Just_t ) {
                                return ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Mouse ) ( ( (struct MouseEvent_1016) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1148 ) ( ( dref3613 .stuff .Maybe_1104_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub180 ( ( (  i64_dash_i321149 ) ( ( dref3615 .stuff .Maybe_1104_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_y = (  op_dash_sub180 ( ( (  i64_dash_i321149 ) ( ( dref3617 .stuff .Maybe_1104_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_pressed = (  eq1073 ( (  last3611 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq283 ( ( (  seq3610 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq1073 ( (  last3611 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_Up_t } ) ) ) ) );
        }
        if ( (  eq1073 ( (  last3611 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_Down_t } ) ) ) ) );
        }
        if ( (  eq1073 ( (  last3611 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_Right_t } ) ) ) ) );
        }
        if ( (  eq1073 ( (  last3611 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_Left_t } ) ) ) ) );
        }
        if ( (  eq1073 ( (  last3611 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_Home_t } ) ) ) ) );
        }
        if ( (  eq1073 ( (  last3611 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_1014) { .tag = Maybe_1014_None_t } );
    }
    if ( (  eq1073 ( (  last3611 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_1092  temp1204 = ( (  mk1205 ) ( ( (  from_dash_ascii_dash_slice1101 ) ( (  seq3610 ) ) ) ) );
        struct Scanner_1092 *  sc3619 = ( &temp1204 );
        struct Maybe_1104  dref3620 = ( (  scan_dash_int1105 ) ( (  sc3619 ) ) );
        if ( dref3620.tag == Maybe_1104_None_t ) {
            return ( (struct Maybe_1014) { .tag = Maybe_1014_None_t } );
        }
        else {
            if ( dref3620.tag == Maybe_1104_Just_t ) {
                return ( {  int32_t  dref3622 = ( (  i64_dash_i321149 ) ( ( dref3620 .stuff .Maybe_1104_Just_s .field0 ) ) ) ;  eq700 (  dref3622 ,  from_dash_integral56 ( 1 ) ) ? ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_Home_t } ) ) ) ) ) :  eq700 (  dref3622 ,  from_dash_integral56 ( 2 ) ) ? ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_Insert_t } ) ) ) ) ) :  eq700 (  dref3622 ,  from_dash_integral56 ( 3 ) ) ? ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_Delete_t } ) ) ) ) ) :  eq700 (  dref3622 ,  from_dash_integral56 ( 4 ) ) ? ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_End_t } ) ) ) ) ) :  eq700 (  dref3622 ,  from_dash_integral56 ( 5 ) ) ? ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_PageUp_t } ) ) ) ) ) :  eq700 (  dref3622 ,  from_dash_integral56 ( 6 ) ) ? ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_PageDown_t } ) ) ) ) ) :  eq700 (  dref3622 ,  from_dash_integral56 ( 15 ) ) ? ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_F5_t } ) ) ) ) ) :  eq700 (  dref3622 ,  from_dash_integral56 ( 17 ) ) ? ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_F6_t } ) ) ) ) ) :  eq700 (  dref3622 ,  from_dash_integral56 ( 18 ) ) ? ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_F7_t } ) ) ) ) ) :  eq700 (  dref3622 ,  from_dash_integral56 ( 19 ) ) ? ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_F8_t } ) ) ) ) ) :  eq700 (  dref3622 ,  from_dash_integral56 ( 20 ) ) ? ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_F9_t } ) ) ) ) ) :  eq700 (  dref3622 ,  from_dash_integral56 ( 21 ) ) ? ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_F10_t } ) ) ) ) ) :  eq700 (  dref3622 ,  from_dash_integral56 ( 23 ) ) ? ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_F11_t } ) ) ) ) ) :  eq700 (  dref3622 ,  from_dash_integral56 ( 24 ) ) ? ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_F12_t } ) ) ) ) ) : ( (struct Maybe_1014) { .tag = Maybe_1014_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_1014) { .tag = Maybe_1014_None_t } );
}

static  struct Slice_1087   subslice1206 (    struct Slice_1087  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    char *  begin_dash_ptr2209 = ( (  offset_dash_ptr1084 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp302 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp302 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_1087) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub462 ( ( (  min591 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_1087) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  char *   cast1208 (    struct Array_1074 *  x395 ) {
    return ( (char * ) (  x395 ) );
}

static  struct Slice_1087   as_dash_slice1207 (    struct Array_1074 *  arr2052 ) {
    return ( (struct Slice_1087) { .f_ptr = ( (  cast1208 ) ( (  arr2052 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_1210 {
    enum {
        Maybe_1210_None_t,
        Maybe_1210_Just_t,
    } tag;
    union {
        struct {
            struct Key_446  field0;
        } Maybe_1210_Just_s;
    } stuff;
};

static struct Maybe_1210 Maybe_1210_Just (  struct Key_446  field0 ) {
    return ( struct Maybe_1210 ) { .tag = Maybe_1210_Just_t, .stuff = { .Maybe_1210_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1210   parse_dash_ss31211 (    char  c3607 ) {
    if ( (  eq1073 ( (  c3607 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1210_Just ) ( ( (struct Key_446) { .tag = Key_446_Up_t } ) ) );
    }
    if ( (  eq1073 ( (  c3607 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1210_Just ) ( ( (struct Key_446) { .tag = Key_446_Down_t } ) ) );
    }
    if ( (  eq1073 ( (  c3607 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1210_Just ) ( ( (struct Key_446) { .tag = Key_446_Right_t } ) ) );
    }
    if ( (  eq1073 ( (  c3607 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1210_Just ) ( ( (struct Key_446) { .tag = Key_446_Left_t } ) ) );
    }
    if ( (  eq1073 ( (  c3607 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1210_Just ) ( ( (struct Key_446) { .tag = Key_446_Home_t } ) ) );
    }
    if ( (  eq1073 ( (  c3607 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1210_Just ) ( ( (struct Key_446) { .tag = Key_446_End_t } ) ) );
    }
    if ( (  eq1073 ( (  c3607 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1210_Just ) ( ( (struct Key_446) { .tag = Key_446_F1_t } ) ) );
    }
    if ( (  eq1073 ( (  c3607 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1210_Just ) ( ( (struct Key_446) { .tag = Key_446_F2_t } ) ) );
    }
    if ( (  eq1073 ( (  c3607 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1210_Just ) ( ( (struct Key_446) { .tag = Key_446_F3_t } ) ) );
    }
    if ( (  eq1073 ( (  c3607 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1210_Just ) ( ( (struct Key_446) { .tag = Key_446_F4_t } ) ) );
    }
    return ( (struct Maybe_1210) { .tag = Maybe_1210_None_t } );
}

static  struct Maybe_1014   read_dash_key1026 (  ) {
    char  temp1027 = ( (  undefined1028 ) ( ) );
    char *  ch3624 = ( &temp1027 );
    struct Maybe_1030  dref3625 = ( (  read_dash_byte1031 ) ( (  from_dash_integral56 ( 0 ) ) ) );
    if ( dref3625.tag == Maybe_1030_None_t ) {
        return ( (struct Maybe_1014) { .tag = Maybe_1014_None_t } );
    }
    else {
        if ( dref3625.tag == Maybe_1030_Just_t ) {
            (*  ch3624 ) = ( dref3625 .stuff .Maybe_1030_Just_s .field0 );
        }
    }
    if ( (  eq324 ( ( (  ascii_dash_u8599 ) ( ( * (  ch3624 ) ) ) ) , (  from_dash_integral328 ( 13 ) ) ) ) ) {
        return ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_Enter_t } ) ) ) ) );
    }
    if ( (  eq324 ( ( (  ascii_dash_u8599 ) ( ( * (  ch3624 ) ) ) ) , (  from_dash_integral328 ( 127 ) ) ) ) ) {
        return ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp341 ( ( (  ascii_dash_u8599 ) ( ( * (  ch3624 ) ) ) ) , (  from_dash_integral328 ( 27 ) ) ) == 0 ) && ( !  eq324 ( ( (  ascii_dash_u8599 ) ( ( * (  ch3624 ) ) ) ) , (  from_dash_integral328 ( 9 ) ) ) ) ) ) {
        char  letter3627 = ( (  u8_dash_ascii1038 ) ( ( (  u32_dash_u8160 ) ( ( (  u32_dash_or870 ) ( ( (  u8_dash_u321039 ) ( ( (  ascii_dash_u8599 ) ( ( * (  ch3624 ) ) ) ) ) ) ,  ( (  from_dash_hex1043 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( ( Key_446_Ctrl ) ( (  letter3627 ) ) ) ) ) ) );
    }
    if ( ( !  eq324 ( ( (  ascii_dash_u8599 ) ( ( * (  ch3624 ) ) ) ) , (  from_dash_integral328 ( 27 ) ) ) ) ) {
        if ( (  cmp341 ( ( (  ascii_dash_u8599 ) ( ( * (  ch3624 ) ) ) ) , (  from_dash_integral328 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key1026 ) ( ) );
        } else {
            return ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( ( Key_446_Char ) ( ( * (  ch3624 ) ) ) ) ) ) ) );
        }
    }
    char  temp1072 = ( (  undefined1028 ) ( ) );
    char *  ch23628 = ( &temp1072 );
    struct Maybe_1030  dref3629 = ( (  read_dash_byte1031 ) ( (  from_dash_integral56 ( 50 ) ) ) );
    if ( dref3629.tag == Maybe_1030_None_t ) {
        return ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3629.tag == Maybe_1030_Just_t ) {
            (*  ch23628 ) = ( dref3629 .stuff .Maybe_1030_Just_s .field0 );
        }
    }
    if ( (  eq1073 ( ( * (  ch23628 ) ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_1074  temp1075 = ( ( (  zeroed1076 ) ( ) ) );
        struct Array_1074 *  seq3631 = ( &temp1075 );
        int32_t  slen3632 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp173 ( (  slen3632 ) , (  from_dash_integral56 ( 31 ) ) ) == 0 ) ) {
            char  temp1080 = ( (  undefined1028 ) ( ) );
            char *  sc3633 = ( &temp1080 );
            struct Maybe_1030  dref3634 = ( (  read_dash_byte1031 ) ( (  from_dash_integral56 ( 50 ) ) ) );
            if ( dref3634.tag == Maybe_1030_None_t ) {
                break;
            }
            else {
                if ( dref3634.tag == Maybe_1030_Just_t ) {
                    (*  sc3633 ) = ( dref3634 .stuff .Maybe_1030_Just_s .field0 );
                }
            }
            ( (  set1081 ) ( (  seq3631 ) ,  ( (  i32_dash_size280 ) ( (  slen3632 ) ) ) ,  ( * (  sc3633 ) ) ) );
            slen3632 = (  op_dash_add175 ( (  slen3632 ) , (  from_dash_integral56 ( 1 ) ) ) );
            if ( ( (  cmp341 ( ( (  ascii_dash_u8599 ) ( ( * (  sc3633 ) ) ) ) , (  from_dash_integral328 ( 64 ) ) ) != 0 ) && (  cmp341 ( ( (  ascii_dash_u8599 ) ( ( * (  sc3633 ) ) ) ) , (  from_dash_integral328 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi1086 ) ( ( (  subslice1206 ) ( ( (  as_dash_slice1207 ) ( (  seq3631 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size280 ) ( (  slen3632 ) ) ) ) ) ) );
    }
    if ( (  eq1073 ( ( * (  ch23628 ) ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp1209 = ( (  undefined1028 ) ( ) );
        char *  sc3636 = ( &temp1209 );
        struct Maybe_1030  dref3637 = ( (  read_dash_byte1031 ) ( (  from_dash_integral56 ( 50 ) ) ) );
        if ( dref3637.tag == Maybe_1030_None_t ) {
            return ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3637.tag == Maybe_1030_Just_t ) {
                (*  sc3636 ) = ( dref3637 .stuff .Maybe_1030_Just_s .field0 );
            }
        }
        struct Maybe_1210  dref3639 = ( (  parse_dash_ss31211 ) ( ( * (  sc3636 ) ) ) );
        if ( dref3639.tag == Maybe_1210_None_t ) {
            return ( (struct Maybe_1014) { .tag = Maybe_1014_None_t } );
        }
        else {
            if ( dref3639.tag == Maybe_1210_Just_t ) {
                return ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( dref3639 .stuff .Maybe_1210_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_1014_Just ) ( ( ( InputEvent_1015_Key ) ( ( (struct Key_446) { .tag = Key_446_Escape_t } ) ) ) ) );
}

static  struct Maybe_1014   read_dash_event1023 (   struct env95* env ,    struct Tui_97 *  tui3649 ) {
    struct envunion96  temp1024 = ( (struct envunion96){ .fun = (  bool  (*) (  struct env94*  ,    struct Tui_97 *  ) )update_dash_dimensions1025 , .env =  env->envinst94 } );
    ( temp1024.fun ( &temp1024.env ,  (  tui3649 ) ) );
    struct Maybe_1014  dref3650 = ( (  read_dash_key1026 ) ( ) );
    if ( dref3650.tag == Maybe_1014_None_t ) {
        return ( (struct Maybe_1014) { .tag = Maybe_1014_None_t } );
    }
    else {
        if ( dref3650.tag == Maybe_1014_Just_t ) {
            (*  tui3649 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_1014_Just ) ( ( dref3650 .stuff .Maybe_1014_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_1014   lam1021 (   struct env1012* env ) {
    struct envunion1013  temp1022 = ( (struct envunion1013){ .fun = (  struct Maybe_1014  (*) (  struct env95*  ,    struct Tui_97 *  ) )read_dash_event1023 , .env =  env->envinst95 } );
    return ( temp1022.fun ( &temp1022.env ,  ( env->tui4912 ) ) );
}

static  struct Maybe_1014   next1213 (    struct FunIter_1011 *  self1056 ) {
    if ( ( ( * (  self1056 ) ) .f_finished ) ) {
        return ( (struct Maybe_1014) { .tag = Maybe_1014_None_t } );
    }
    struct envunion1018  temp1214 = ( ( * (  self1056 ) ) .f_fun );
    struct Maybe_1014  dref1057 = ( temp1214.fun ( &temp1214.env ) );
    if ( dref1057.tag == Maybe_1014_Just_t ) {
        return ( ( Maybe_1014_Just ) ( ( dref1057 .stuff .Maybe_1014_Just_s .field0 ) ) );
    }
    else {
        if ( dref1057.tag == Maybe_1014_None_t ) {
            (*  self1056 ) .f_finished = ( true );
            return ( (struct Maybe_1014) { .tag = Maybe_1014_None_t } );
        }
    }
}

struct env1217 {
    struct Editor_267 *  ed4734;
    ;
};

struct envunion1218 {
    enum Unit_8  (*fun) (  struct env1217*  ,    struct StrView_27  );
    struct env1217 env;
};

static  enum Unit_8   if_dash_just1216 (    struct Maybe_85  x1601 ,   struct envunion1218  fun1603 ) {
    struct Maybe_85  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_85_Just_t ) {
        struct envunion1218  temp1219 = (  fun1603 );
        ( temp1219.fun ( &temp1219.env ,  ( dref1604 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1220 (   struct env1217* env ,    struct StrView_27  msg4736 ) {
    ( (  free689 ) ( (  msg4736 ) ,  ( ( * ( env->ed4734 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_msg1215 (    struct Editor_267 *  ed4734 ) {
    struct env1217 envinst1217 = {
        .ed4734 =  ed4734 ,
    };
    ( (  if_dash_just1216 ) ( ( ( * (  ed4734 ) ) .f_msg ) ,  ( (struct envunion1218){ .fun = (  enum Unit_8  (*) (  struct env1217*  ,    struct StrView_27  ) )lam1220 , .env =  envinst1217 } ) ) );
    (*  ed4734 ) .f_msg = ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    return ( Unit_8_Unit );
}

struct envunion1222 {
    enum Unit_8  (*fun) (  struct env439*  ,    struct Editor_267 *  ,    struct Key_446  );
    struct env439 env;
};

static  size_t   clamp1228 (    size_t  x1648 ,    size_t  mn1650 ,    size_t  mx1652 ) {
    if ( (  cmp302 ( (  x1648 ) , (  mn1650 ) ) == 0 ) ) {
        return (  mn1650 );
    } else {
        if ( (  cmp302 ( (  x1648 ) , (  mx1652 ) ) == 2 ) ) {
            return (  mx1652 );
        } else {
            return (  x1648 );
        }
    }
}

static  size_t   sync_dash_char1230 (    uint8_t *  p1429 ) {
    size_t  i1430 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb1431 = ( * ( (uint8_t * ) ( ( (void*) (  p1429 ) ) + (  op_dash_neg384 ( ( (  size_dash_i64349 ) ( (  i1430 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp341 ( (  pb1431 ) , (  from_dash_integral328 ( 128 ) ) ) != 0 ) && (  cmp341 ( (  pb1431 ) , (  op_dash_add1070 ( (  from_dash_integral328 ( 128 ) ) , (  from_dash_integral328 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i1430 );
        }
        i1430 = (  op_dash_add356 ( (  i1430 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char1229 (    uint8_t *  p1434 ) {
    return (  op_dash_add356 ( ( (  sync_dash_char1230 ) ( ( (  offset_dash_ptr353 ) ( (  p1434 ) ,  (  op_dash_neg384 ( (  from_dash_integral365 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_26   left_dash_pos1227 (    struct TextBuf_117 *  self4062 ,    struct Pos_26  pos4064 ) {
    if ( (  eq699 ( (  pos4064 ) , ( (  mk832 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk832 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    if ( (  eq700 ( ( (  pos4064 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        ( (  assert805 ) ( (  cmp173 ( ( (  pos4064 ) .f_line ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk832 ) ( (  op_dash_sub180 ( ( (  pos4064 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( ( (  line297 ) ( (  self4062 ) ,  (  op_dash_sub180 ( ( (  pos4064 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_27  line4065 = ( (  line297 ) ( (  self4062 ) ,  ( (  pos4064 ) .f_line ) ) );
    size_t  pos_dash_bi4066 = ( (  clamp1228 ) ( ( (  i32_dash_size280 ) ( ( (  pos4064 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes396 ) ( (  line4065 ) ) ) ) );
    size_t  off4067 = ( (  previous_dash_char1229 ) ( ( (  offset_dash_ptr353 ) ( ( ( (  line4065 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  pos_dash_bi4066 ) ) ) ) ) ) );
    return ( (  mk832 ) ( ( (  pos4064 ) .f_line ) ,  ( (  size_dash_i32311 ) ( (  op_dash_sub462 ( (  pos_dash_bi4066 ) , (  off4067 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_left1226 (    struct Pane_241 *  self4487 ) {
    ( (  set_dash_cursors287 ) ( (  self4487 ) ,  ( (  left_dash_pos1227 ) ( ( ( * (  self4487 ) ) .f_buf ) ,  ( ( * (  self4487 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  struct Pos_26   right_dash_pos1232 (    struct TextBuf_117 *  self4054 ,    struct Pos_26  pos4056 ) {
    if ( (  cmp173 ( ( (  pos4056 ) .f_line ) , ( (  num_dash_lines420 ) ( (  self4054 ) ) ) ) != 0 ) ) {
        return ( (  mk832 ) ( ( (  num_dash_lines420 ) ( (  self4054 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    struct StrView_27  line4057 = ( (  line297 ) ( (  self4054 ) ,  ( (  pos4056 ) .f_line ) ) );
    int64_t  bi4058 = ( (  i32_dash_i641147 ) ( ( (  pos4056 ) .f_bi ) ) );
    if ( (  cmp1193 ( (  bi4058 ) , ( (  size_dash_i64349 ) ( ( (  num_dash_bytes396 ) ( (  line4057 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp173 ( (  op_dash_add175 ( ( (  pos4056 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines420 ) ( (  self4054 ) ) ) ) != 0 ) ) {
            return ( (  mk832 ) ( ( (  pos4056 ) .f_line ) ,  ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( (  line4057 ) ) ) ) ) ) );
        }
        return ( (  mk832 ) ( (  op_dash_add175 ( ( (  pos4056 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    int32_t  off4059 = ( (  size_dash_i32311 ) ( ( (  next_dash_char340 ) ( ( (  offset_dash_ptr353 ) ( ( ( (  line4057 ) .f_contents ) .f_ptr ) ,  (  bi4058 ) ) ) ) ) ) );
    return ( (  mk832 ) ( ( (  pos4056 ) .f_line ) ,  (  op_dash_add175 ( ( (  pos4056 ) .f_bi ) , (  off4059 ) ) ) ) );
}

static  enum Unit_8   move_dash_right1231 (    struct Pane_241 *  self4484 ) {
    ( (  set_dash_cursors287 ) ( (  self4484 ) ,  ( (  right_dash_pos1232 ) ( ( ( * (  self4484 ) ) .f_buf ) ,  ( ( * (  self4484 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   vi_dash_bi1234 (    struct TextBuf_117 *  self4357 ,    int32_t  ln4359 ,    int32_t  vx4361 ) {
    int32_t  bi4362 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi4363 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_293  temp1235 =  into_dash_iter294 ( ( (  chars295 ) ( ( (  line297 ) ( (  self4357 ) ,  (  ln4359 ) ) ) ) ) );
    while (true) {
        struct Maybe_351  __cond1236 =  next352 (&temp1235);
        if (  __cond1236 .tag == 0 ) {
            break;
        }
        struct Char_65  c4365 =  __cond1236 .stuff .Maybe_351_Just_s .field0;
        vi4363 = (  op_dash_add175 ( (  vi4363 ) , ( (  char_dash_screen_dash_width357 ) ( (  c4365 ) ) ) ) );
        if ( (  cmp173 ( (  vx4361 ) , (  vi4363 ) ) == 0 ) ) {
            break;
        }
        bi4362 = (  op_dash_add175 ( (  bi4362 ) , ( (  size_dash_i32311 ) ( ( (  c4365 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi4362 );
}

static  enum Unit_8   move_dash_down1233 (    struct Pane_241 *  self4490 ,    int32_t  amnt4492 ) {
    struct Pos_26  cur4493 = ( ( * (  self4490 ) ) .f_cursor );
    int32_t  nu_dash_line4494 = ( (  min796 ) ( (  op_dash_add175 ( ( (  cur4493 ) .f_line ) , (  amnt4492 ) ) ) ,  (  op_dash_sub180 ( ( (  num_dash_lines420 ) ( ( ( * (  self4490 ) ) .f_buf ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  vci4495 = ( ( * (  self4490 ) ) .f_vi );
    int32_t  bi4496 = ( (  vi_dash_bi1234 ) ( ( ( * (  self4490 ) ) .f_buf ) ,  (  nu_dash_line4494 ) ,  (  vci4495 ) ) );
    ( (  set_dash_cursors287 ) ( (  self4490 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4494 ) , .f_bi = (  bi4496 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_up1237 (    struct Pane_241 *  self4499 ,    int32_t  amnt4501 ) {
    struct Pos_26  cur4502 = ( ( * (  self4499 ) ) .f_cursor );
    int32_t  nu_dash_line4503 = ( (  max374 ) ( (  op_dash_sub180 ( ( (  cur4502 ) .f_line ) , (  amnt4501 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  vci4504 = ( ( * (  self4499 ) ) .f_vi );
    int32_t  bi4505 = ( (  vi_dash_bi1234 ) ( ( ( * (  self4499 ) ) .f_buf ) ,  (  nu_dash_line4503 ) ,  (  vci4504 ) ) );
    ( (  set_dash_cursors287 ) ( (  self4499 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4503 ) , .f_bi = (  bi4505 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_insert_dash_action1239 (    struct TextBuf_117 *  self4160 ) {
    (*  self4160 ) .f_actions .f_input_dash_changeset = ( ChangesetInputType_119_NoChangeset );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_mode1238 (    struct Pane_241 *  self4463 ,    enum Mode_242  mode4465 ) {
    if ( (  eq393 ( (  mode4465 ) , ( Mode_242_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action1239 ) ( ( ( * (  self4463 ) ) .f_buf ) ) );
    }
    (*  self4463 ) .f_mode = (  mode4465 );
    return ( Unit_8_Unit );
}

struct SliceIter_1247 {
    struct Slice_31  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1246 {
    struct SliceIter_1247  field0;
    size_t  field1;
};

static struct Drop_1246 Drop_1246_Drop (  struct SliceIter_1247  field0 ,  size_t  field1 ) {
    return ( struct Drop_1246 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1246   into_dash_iter1248 (    struct Drop_1246  self853 ) {
    return (  self853 );
}

static  struct SliceIter_1247   into_dash_iter1251 (    struct Slice_31  self2250 ) {
    return ( (struct SliceIter_1247) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Changeset_32 *   offset_dash_ptr1253 (    struct Changeset_32 *  x377 ,    int64_t  count379 ) {
    struct Changeset_32  temp1254;
    return ( (struct Changeset_32 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1254 ) ) ) ) ) ) ) ) );
}

static  struct Slice_31   subslice1252 (    struct Slice_31  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Changeset_32 *  begin_dash_ptr2209 = ( (  offset_dash_ptr1253 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp302 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp302 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub462 ( ( (  min591 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct SliceIter_1247   into_dash_iter1250 (    struct List_30  self2433 ) {
    return ( (  into_dash_iter1251 ) ( ( (  subslice1252 ) ( ( (  self2433 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2433 ) .f_count ) ) ) ) );
}

static  struct Drop_1246   drop1249 (    struct List_30  iterable860 ,    size_t  i862 ) {
    struct SliceIter_1247  it863 = ( (  into_dash_iter1250 ) ( (  iterable860 ) ) );
    return ( ( Drop_1246_Drop ) ( (  it863 ) ,  (  i862 ) ) );
}

struct Maybe_1256 {
    enum {
        Maybe_1256_None_t,
        Maybe_1256_Just_t,
    } tag;
    union {
        struct {
            struct Changeset_32  field0;
        } Maybe_1256_Just_s;
    } stuff;
};

static struct Maybe_1256 Maybe_1256_Just (  struct Changeset_32  field0 ) {
    return ( struct Maybe_1256 ) { .tag = Maybe_1256_Just_t, .stuff = { .Maybe_1256_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1256   next1258 (    struct SliceIter_1247 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1256) { .tag = Maybe_1256_None_t } );
    }
    struct Changeset_32  elem2258 = ( * ( (  offset_dash_ptr1253 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1256_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_1256   next1257 (    struct Drop_1246 *  dref855 ) {
    while ( (  cmp302 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1258 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
        (* dref855 ) .field1 = (  op_dash_sub462 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1258 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
}

struct env1261 {
    enum CAllocator_10  al3995;
    ;
};

struct envunion1262 {
    enum Unit_8  (*fun) (  struct env1261*  ,    struct Action_25  );
    struct env1261 env;
};

struct SliceIter_1263 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1263   into_dash_iter1266 (    struct Slice_24  self2250 ) {
    return ( (struct SliceIter_1263) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_25 *   offset_dash_ptr1268 (    struct Action_25 *  x377 ,    int64_t  count379 ) {
    struct Action_25  temp1269;
    return ( (struct Action_25 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1269 ) ) ) ) ) ) ) ) );
}

static  struct Slice_24   subslice1267 (    struct Slice_24  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Action_25 *  begin_dash_ptr2209 = ( (  offset_dash_ptr1268 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp302 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp302 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub462 ( ( (  min591 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct SliceIter_1263   into_dash_iter1265 (    struct List_23  self2433 ) {
    return ( (  into_dash_iter1266 ) ( ( (  subslice1267 ) ( ( (  self2433 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2433 ) .f_count ) ) ) ) );
}

struct Maybe_1270 {
    enum {
        Maybe_1270_None_t,
        Maybe_1270_Just_t,
    } tag;
    union {
        struct {
            struct Action_25  field0;
        } Maybe_1270_Just_s;
    } stuff;
};

static struct Maybe_1270 Maybe_1270_Just (  struct Action_25  field0 ) {
    return ( struct Maybe_1270 ) { .tag = Maybe_1270_Just_t, .stuff = { .Maybe_1270_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1270   next1271 (    struct SliceIter_1263 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1270) { .tag = Maybe_1270_None_t } );
    }
    struct Action_25  elem2258 = ( * ( (  offset_dash_ptr1268 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1270_Just ) ( (  elem2258 ) ) );
}

static  enum Unit_8   for_dash_each1260 (    struct List_23  iterable1099 ,   struct envunion1262  fun1101 ) {
    struct SliceIter_1263  temp1264 = ( (  into_dash_iter1265 ) ( (  iterable1099 ) ) );
    struct SliceIter_1263 *  it1102 = ( &temp1264 );
    while ( ( true ) ) {
        struct Maybe_1270  dref1103 = ( (  next1271 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_1270_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_1270_Just_t ) {
                struct envunion1262  temp1272 = (  fun1101 );
                ( temp1272.fun ( &temp1272.env ,  ( dref1103 .stuff .Maybe_1270_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_action1274 (    struct Action_25  action3988 ,    enum CAllocator_10  al3990 ) {
    ( (  free689 ) ( ( (  action3988 ) .f_fwd ) ,  (  al3990 ) ) );
    ( (  free689 ) ( ( (  action3988 ) .f_bwd ) ,  (  al3990 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1273 (   struct env1261* env ,    struct Action_25  a3997 ) {
    return ( (  free_dash_action1274 ) ( (  a3997 ) ,  ( env->al3995 ) ) );
}

static  void *   cast_dash_ptr1277 (    struct Action_25 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free1276 (    enum CAllocator_10  dref2373 ,    struct Slice_24  slice2375 ) {
    if (!(  dref2373 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr1277 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free1275 (    struct List_23 *  list2440 ) {
    ( (  free1276 ) ( ( ( * (  list2440 ) ) .f_al ) ,  ( ( * (  list2440 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_changeset1259 (    struct Changeset_32  chs3993 ,    enum CAllocator_10  al3995 ) {
    struct env1261 envinst1261 = {
        .al3995 =  al3995 ,
    };
    ( (  for_dash_each1260 ) ( ( (  chs3993 ) .f_parts ) ,  ( (struct envunion1262){ .fun = (  enum Unit_8  (*) (  struct env1261*  ,    struct Action_25  ) )lam1273 , .env =  envinst1261 } ) ) );
    ( (  free1275 ) ( ( & ( (  chs3993 ) .f_parts ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1278 (    struct List_30 *  l2530 ,    size_t  new_dash_count2532 ) {
    (*  l2530 ) .f_count = ( (  min591 ) ( (  new_dash_count2532 ) ,  ( ( * (  l2530 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim_dash_actions1244 (    struct Actions_118 *  actions4011 ) {
    enum CAllocator_10  al4012 = ( ( ( * (  actions4011 ) ) .f_list ) .f_al );
    size_t  cur4013 = ( ( * (  actions4011 ) ) .f_cur );
    struct Drop_1246  temp1245 =  into_dash_iter1248 ( ( (  drop1249 ) ( ( ( * (  actions4011 ) ) .f_list ) ,  (  cur4013 ) ) ) );
    while (true) {
        struct Maybe_1256  __cond1255 =  next1257 (&temp1245);
        if (  __cond1255 .tag == 0 ) {
            break;
        }
        struct Changeset_32  action4015 =  __cond1255 .stuff .Maybe_1256_Just_s .field0;
        ( (  free_dash_changeset1259 ) ( (  action4015 ) ,  (  al4012 ) ) );
    }
    ( (  trim1278 ) ( ( & ( ( * (  actions4011 ) ) .f_list ) ) ,  (  cur4013 ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   clone1279 (    struct StrView_27  s2586 ,    enum CAllocator_10  al2588 ) {
    return ( (  clone_dash_0647 ) ( (  s2586 ) ,  (  al2588 ) ) );
}

static  struct Maybe_85   head1281 (    struct SplitIter_737  it1167 ) {
    struct SplitIter_737  temp1282 = ( (  into_dash_iter744 ) ( (  it1167 ) ) );
    return ( (  next753 ) ( ( &temp1282 ) ) );
}

static  struct Maybe_85   head1284 (    struct Drop_736  it1167 ) {
    struct Drop_736  temp1285 = ( (  into_dash_iter742 ) ( (  it1167 ) ) );
    return ( (  next752 ) ( ( &temp1285 ) ) );
}

static  bool   null1283 (    struct Drop_736  it1176 ) {
    struct Maybe_85  dref1177 = ( (  head1284 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_85_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Tuple2_750   undefined1287 (  ) {
    struct Tuple2_750  temp1288;
    return (  temp1288 );
}

static  struct Tuple2_750   or_dash_fail1286 (    struct Maybe_749  x1353 ,    struct StrView_27  errmsg1355 ) {
    struct Maybe_749  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_749_None_t ) {
        ( (  panic853 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1287 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_749_Just_t ) {
            return ( dref1356 .stuff .Maybe_749_Just_s .field0 );
        }
    }
}

static  struct Maybe_749   reduce1290 (    struct Zip_735  iterable1118 ,    struct Maybe_749  base1120 ,    struct Maybe_749 (*  fun1122 )(    struct Tuple2_750  ,    struct Maybe_749  ) ) {
    struct Maybe_749  x1123 = (  base1120 );
    struct Zip_735  it1124 = ( (  into_dash_iter740 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_749  dref1125 = ( (  next751 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_749_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_749_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_749_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1291 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1291);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_749  temp1292;
    return (  temp1292 );
}

static  struct Maybe_749   lam1293 (    struct Tuple2_750  e1172 ,    struct Maybe_749  dref1173 ) {
    return ( ( Maybe_749_Just ) ( (  e1172 ) ) );
}

static  struct Maybe_749   last1289 (    struct Zip_735  it1170 ) {
    return ( (  reduce1290 ) ( (  it1170 ) ,  ( (struct Maybe_749) { .tag = Maybe_749_None_t } ) ,  (  lam1293 ) ) );
}

static  struct Pos_26   pos_dash_after_dash_str1280 (    struct TextBuf_117 *  self4146 ,    struct StrView_27  bytes4148 ,    struct Pos_26  from4150 ) {
    struct SplitIter_737  lines4151 = ( (  split_dash_by_dash_each745 ) ( (  bytes4148 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_27  first_dash_line4152 = ( (  or_dash_else727 ) ( ( (  head1281 ) ( (  lines4151 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
    struct Drop_736  headless4153 = ( (  drop743 ) ( (  lines4151 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1283 ) ( (  headless4153 ) ) ) ) {
        struct Pos_26  next_dash_pos4154 = ( (  mk832 ) ( ( (  from4150 ) .f_line ) ,  (  op_dash_add175 ( ( (  from4150 ) .f_bi ) , ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( (  first_dash_line4152 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos4154 );
    } else {
        struct Tuple2_750  dref4155 = ( (  or_dash_fail1286 ) ( ( (  last1289 ) ( ( (  zip741 ) ( (  headless4153 ) ,  ( (  from555 ) ( (  op_dash_add175 ( ( (  from4150 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"should not happen" ) ,  ( 17 ) ) ) ) );
        
        return ( (  mk832 ) ( ( dref4155 .field1 ) ,  ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( ( dref4155 .field0 ) ) ) ) ) ) );
    }
}

struct envunion1299 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion1303 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion1305 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion1307 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

static  struct StrView_27   str_dash_between1295 (   struct env138* env ,    struct TextBuf_117 *  self4180 ,    struct Pos_26  from4182 ,    struct Pos_26  to4184 ) {
    enum CAllocator_10  al4185 = ( ( ( * (  self4180 ) ) .f_buf ) .f_al );
    if ( (  eq700 ( ( (  from4182 ) .f_line ) , ( (  to4184 ) .f_line ) ) ) ) {
        if ( (  eq700 ( ( (  from4182 ) .f_line ) , ( (  num_dash_lines420 ) ( (  self4180 ) ) ) ) ) ) {
            return ( (  clone1279 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  (  al4185 ) ) );
        }
        size_t  from_dash_bi4186 = ( (  i32_dash_size280 ) ( ( (  min796 ) ( ( (  from4182 ) .f_bi ) ,  ( (  to4184 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi4187 = ( (  i32_dash_size280 ) ( ( (  max374 ) ( ( (  from4182 ) .f_bi ) ,  ( (  to4184 ) .f_bi ) ) ) ) );
        return ( (  clone1279 ) ( ( (  byte_dash_substr600 ) ( ( (  line297 ) ( (  self4180 ) ,  ( (  from4182 ) .f_line ) ) ) ,  (  from_dash_bi4186 ) ,  (  to_dash_bi4187 ) ) ) ,  (  al4185 ) ) );
    } else {
        struct Pos_26  from_dash_pos4188 = ( (  min696 ) ( (  from4182 ) ,  (  to4184 ) ) );
        struct Pos_26  to_dash_pos4189 = ( (  max698 ) ( (  from4182 ) ,  (  to4184 ) ) );
        struct List_13  temp1296 = ( (  mk568 ) ( (  al4185 ) ) );
        struct List_13 *  sb4190 = ( &temp1296 );
        struct StrView_27  first_dash_line4191 = ( (  line297 ) ( (  self4180 ) ,  ( (  from_dash_pos4188 ) .f_line ) ) );
        struct envunion139  temp1297 = ( (struct envunion139){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all709 , .env =  env->envinst48 } );
        ( temp1297.fun ( &temp1297.env ,  (  sb4190 ) ,  ( ( (  byte_dash_substr600 ) ( (  first_dash_line4191 ) ,  ( (  i32_dash_size280 ) ( ( (  from_dash_pos4188 ) .f_bi ) ) ) ,  ( (  num_dash_bytes396 ) ( (  first_dash_line4191 ) ) ) ) ) .f_contents ) ) );
        struct envunion1299  temp1298 = ( (struct envunion1299){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all709 , .env =  env->envinst48 } );
        ( temp1298.fun ( &temp1298.env ,  (  sb4190 ) ,  ( ( ( (  from_dash_charlike646 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_169  temp1300 =  into_dash_iter170 ( ( (  to179 ) ( (  op_dash_add175 ( ( (  from_dash_pos4188 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  op_dash_sub180 ( ( (  to_dash_pos4189 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_171  __cond1301 =  next172 (&temp1300);
            if (  __cond1301 .tag == 0 ) {
                break;
            }
            int32_t  i4193 =  __cond1301 .stuff .Maybe_171_Just_s .field0;
            struct envunion1303  temp1302 = ( (struct envunion1303){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all709 , .env =  env->envinst48 } );
            ( temp1302.fun ( &temp1302.env ,  (  sb4190 ) ,  ( ( (  line297 ) ( (  self4180 ) ,  (  i4193 ) ) ) .f_contents ) ) );
            struct envunion1305  temp1304 = ( (struct envunion1305){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all709 , .env =  env->envinst48 } );
            ( temp1304.fun ( &temp1304.env ,  (  sb4190 ) ,  ( ( ( (  from_dash_charlike646 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1307  temp1306 = ( (struct envunion1307){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all709 , .env =  env->envinst48 } );
        ( temp1306.fun ( &temp1306.env ,  (  sb4190 ) ,  ( ( (  byte_dash_substr600 ) ( ( (  line297 ) ( (  self4180 ) ,  ( (  to_dash_pos4189 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size280 ) ( ( (  to_dash_pos4189 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes298 ) ( ( (  to_dash_slice299 ) ( ( * (  sb4190 ) ) ) ) ) );
    }
}

static  bool   is_dash_none1308 (    struct Maybe_227  m1574 ) {
    struct Maybe_227  dref1575 = (  m1574 );
    if ( dref1575.tag == Maybe_227_None_t ) {
        return ( true );
    }
    else {
        if ( dref1575.tag == Maybe_227_Just_t ) {
            return ( false );
        }
    }
}

struct Tuple2_1310 {
    enum ChangesetInputType_119  field0;
    enum ChangesetInputType_119  field1;
};

static struct Tuple2_1310 Tuple2_1310_Tuple2 (  enum ChangesetInputType_119  field0 ,  enum ChangesetInputType_119  field1 ) {
    return ( struct Tuple2_1310 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1309 (    enum ChangesetInputType_119  l4001 ,    enum ChangesetInputType_119  r4003 ) {
    return ( {  struct Tuple2_1310  dref4004 = ( ( Tuple2_1310_Tuple2 ) ( (  l4001 ) ,  (  r4003 ) ) ) ;  dref4004 .field0 == ChangesetInputType_119_NoChangeset &&  dref4004 .field1 == ChangesetInputType_119_NoChangeset ? ( true ) :  dref4004 .field0 == ChangesetInputType_119_InputChangeset &&  dref4004 .field1 == ChangesetInputType_119_InputChangeset ? ( true ) :  dref4004 .field0 == ChangesetInputType_119_CustomChangeset &&  dref4004 .field1 == ChangesetInputType_119_CustomChangeset ? ( true ) : ( false ) ; } );
}

static  struct Changeset_32 *   get_dash_ptr1312 (    struct Slice_31  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp302 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_32 *  elem_dash_ptr2173 = ( (  offset_dash_ptr1253 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  struct Changeset_32 *   last_dash_ptr1311 (    struct Slice_31  s2360 ) {
    if ( (  eq283 ( ( (  s2360 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic853 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1312 ) ( (  s2360 ) ,  (  op_dash_sub462 ( ( (  s2360 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_31   to_dash_slice1313 (    struct List_30  l2541 ) {
    struct Changeset_32 *  ptr2542 = ( ( (  l2541 ) .f_elements ) .f_ptr );
    return ( (struct Slice_31) { .f_ptr = (  ptr2542 ) , .f_count = ( (  l2541 ) .f_count ) } );
}

struct TypeSize_1320 {
    size_t  f_size;
};

static  struct TypeSize_1320   get_dash_typesize1319 (  ) {
    struct Action_25  temp1321;
    return ( (struct TypeSize_1320) { .f_size = ( sizeof( ( (  temp1321 ) ) ) ) } );
}

static  struct Action_25 *   cast_dash_ptr1322 (    void *  p398 ) {
    return ( (struct Action_25 * ) (  p398 ) );
}

static  struct Slice_24   allocate1318 (    enum CAllocator_10  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize1319 ) ( ) ) ) .f_size );
    struct Action_25 *  ptr2371 = ( (  cast_dash_ptr1322 ) ( ( ( malloc ) ( (  op_dash_mul535 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_24) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct env1323 {
    ;
    ;
    struct Slice_24  new_dash_slice2453;
};

struct Tuple2_1325 {
    struct Action_25  field0;
    int32_t  field1;
};

static struct Tuple2_1325 Tuple2_1325_Tuple2 (  struct Action_25  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1325 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1324 {
    enum Unit_8  (*fun) (  struct env1323*  ,    struct Tuple2_1325  );
    struct env1323 env;
};

static  struct Action_25 *   get_dash_ptr1328 (    struct Slice_24  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp302 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_25 *  elem_dash_ptr2173 = ( (  offset_dash_ptr1268 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  enum Unit_8   set1327 (    struct Slice_24  slice2187 ,    size_t  i2189 ,    struct Action_25  x2191 ) {
    struct Action_25 *  ep2192 = ( (  get_dash_ptr1328 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1326 (   struct env1323* env ,    struct Tuple2_1325  dref2454 ) {
    return ( (  set1327 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size280 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

struct Zip_1330 {
    struct SliceIter_1263  f_left_dash_it;
    struct FromIter_544  f_right_dash_it;
};

static  struct Zip_1330   into_dash_iter1332 (    struct Zip_1330  self936 ) {
    return (  self936 );
}

struct Maybe_1333 {
    enum {
        Maybe_1333_None_t,
        Maybe_1333_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1325  field0;
        } Maybe_1333_Just_s;
    } stuff;
};

static struct Maybe_1333 Maybe_1333_Just (  struct Tuple2_1325  field0 ) {
    return ( struct Maybe_1333 ) { .tag = Maybe_1333_Just_t, .stuff = { .Maybe_1333_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1333   next1334 (    struct Zip_1330 *  self939 ) {
    struct Zip_1330  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_1270  dref941 = ( (  next1271 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_1270_None_t ) {
            return ( (struct Maybe_1333) { .tag = Maybe_1333_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_1270_Just_t ) {
                struct Maybe_171  dref943 = ( (  next550 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_1333) { .tag = Maybe_1333_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next1271 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next550 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1333_Just ) ( ( ( Tuple2_1325_Tuple2 ) ( ( dref941 .stuff .Maybe_1270_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1329 (    struct Zip_1330  iterable1099 ,   struct envunion1324  fun1101 ) {
    struct Zip_1330  temp1331 = ( (  into_dash_iter1332 ) ( (  iterable1099 ) ) );
    struct Zip_1330 *  it1102 = ( &temp1331 );
    while ( ( true ) ) {
        struct Maybe_1333  dref1103 = ( (  next1334 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_1333_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_1333_Just_t ) {
                struct envunion1324  temp1335 = (  fun1101 );
                ( temp1335.fun ( &temp1335.env ,  ( dref1103 .stuff .Maybe_1333_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1330   zip1336 (    struct Slice_24  left947 ,    struct FromIter_544  right949 ) {
    struct SliceIter_1263  left_dash_it950 = ( (  into_dash_iter1266 ) ( (  left947 ) ) );
    struct FromIter_544  right_dash_it951 = ( (  into_dash_iter554 ) ( (  right949 ) ) );
    return ( (struct Zip_1330) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  enum Unit_8   grow_dash_if_dash_full1317 (   struct env3* env ,    struct List_23 *  list2452 ) {
    if ( (  eq283 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate1318 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq283 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_24  new_dash_slice2453 = ( (  allocate1318 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul535 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env1323 envinst1323 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion1324  fun2457 = ( (struct envunion1324){ .fun = (  enum Unit_8  (*) (  struct env1323*  ,    struct Tuple2_1325  ) )lam1326 , .env =  envinst1323 } );
            ( (  for_dash_each1329 ) ( ( (  zip1336 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from555 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free1276 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1315 (   struct env21* env ,    struct List_23 *  list2460 ,    struct Action_25  elem2462 ) {
    struct envunion22  temp1316 = ( (struct envunion22){ .fun = (  enum Unit_8  (*) (  struct env3*  ,    struct List_23 *  ) )grow_dash_if_dash_full1317 , .env =  env->envinst3 } );
    ( temp1316.fun ( &temp1316.env ,  (  list2460 ) ) );
    ( (  set1327 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add356 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr1343 (    struct Action_25 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1344 (    struct Action_25 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Action_25 *   zeroed1341 (  ) {
    struct Action_25 *  temp1342;
    struct Action_25 *  x648 = (  temp1342 );
    ( ( memset ) ( ( (  cast_dash_ptr1343 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1344 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  struct Action_25 *   null_dash_ptr1340 (  ) {
    return ( (  zeroed1341 ) ( ) );
}

static  struct Slice_24   empty1339 (  ) {
    return ( (struct Slice_24) { .f_ptr = ( (  null_dash_ptr1340 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_23   mk1338 (    enum CAllocator_10  al2436 ) {
    struct Slice_24  elements2437 = ( (  empty1339 ) ( ) );
    return ( (struct List_23) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_33   or_dash_else1345 (    struct Maybe_227  self1360 ,    struct Cursors_33  alt1362 ) {
    struct Maybe_227  dref1363 = (  self1360 );
    if ( dref1363.tag == Maybe_227_None_t ) {
        return (  alt1362 );
    }
    else {
        if ( dref1363.tag == Maybe_227_Just_t ) {
            return ( dref1363 .stuff .Maybe_227_Just_s .field0 );
        }
    }
}

struct envunion1347 {
    enum Unit_8  (*fun) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  );
    struct env21 env;
};

struct TypeSize_1354 {
    size_t  f_size;
};

static  struct TypeSize_1354   get_dash_typesize1353 (  ) {
    struct Changeset_32  temp1355;
    return ( (struct TypeSize_1354) { .f_size = ( sizeof( ( (  temp1355 ) ) ) ) } );
}

static  struct Changeset_32 *   cast_dash_ptr1356 (    void *  p398 ) {
    return ( (struct Changeset_32 * ) (  p398 ) );
}

static  struct Slice_31   allocate1352 (    enum CAllocator_10  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize1353 ) ( ) ) ) .f_size );
    struct Changeset_32 *  ptr2371 = ( (  cast_dash_ptr1356 ) ( ( ( malloc ) ( (  op_dash_mul535 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_31) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct env1357 {
    ;
    ;
    struct Slice_31  new_dash_slice2453;
};

struct Tuple2_1359 {
    struct Changeset_32  field0;
    int32_t  field1;
};

static struct Tuple2_1359 Tuple2_1359_Tuple2 (  struct Changeset_32  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1359 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1358 {
    enum Unit_8  (*fun) (  struct env1357*  ,    struct Tuple2_1359  );
    struct env1357 env;
};

static  enum Unit_8   set1361 (    struct Slice_31  slice2187 ,    size_t  i2189 ,    struct Changeset_32  x2191 ) {
    struct Changeset_32 *  ep2192 = ( (  get_dash_ptr1312 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1360 (   struct env1357* env ,    struct Tuple2_1359  dref2454 ) {
    return ( (  set1361 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size280 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

struct Zip_1363 {
    struct SliceIter_1247  f_left_dash_it;
    struct FromIter_544  f_right_dash_it;
};

static  struct Zip_1363   into_dash_iter1365 (    struct Zip_1363  self936 ) {
    return (  self936 );
}

struct Maybe_1366 {
    enum {
        Maybe_1366_None_t,
        Maybe_1366_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1359  field0;
        } Maybe_1366_Just_s;
    } stuff;
};

static struct Maybe_1366 Maybe_1366_Just (  struct Tuple2_1359  field0 ) {
    return ( struct Maybe_1366 ) { .tag = Maybe_1366_Just_t, .stuff = { .Maybe_1366_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1366   next1367 (    struct Zip_1363 *  self939 ) {
    struct Zip_1363  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_1256  dref941 = ( (  next1258 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_1256_None_t ) {
            return ( (struct Maybe_1366) { .tag = Maybe_1366_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_1256_Just_t ) {
                struct Maybe_171  dref943 = ( (  next550 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_1366) { .tag = Maybe_1366_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next1258 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next550 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1366_Just ) ( ( ( Tuple2_1359_Tuple2 ) ( ( dref941 .stuff .Maybe_1256_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1362 (    struct Zip_1363  iterable1099 ,   struct envunion1358  fun1101 ) {
    struct Zip_1363  temp1364 = ( (  into_dash_iter1365 ) ( (  iterable1099 ) ) );
    struct Zip_1363 *  it1102 = ( &temp1364 );
    while ( ( true ) ) {
        struct Maybe_1366  dref1103 = ( (  next1367 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_1366_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_1366_Just_t ) {
                struct envunion1358  temp1368 = (  fun1101 );
                ( temp1368.fun ( &temp1368.env ,  ( dref1103 .stuff .Maybe_1366_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1363   zip1369 (    struct Slice_31  left947 ,    struct FromIter_544  right949 ) {
    struct SliceIter_1247  left_dash_it950 = ( (  into_dash_iter1251 ) ( (  left947 ) ) );
    struct FromIter_544  right_dash_it951 = ( (  into_dash_iter554 ) ( (  right949 ) ) );
    return ( (struct Zip_1363) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  void *   cast_dash_ptr1371 (    struct Changeset_32 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free1370 (    enum CAllocator_10  dref2373 ,    struct Slice_31  slice2375 ) {
    if (!(  dref2373 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr1371 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1351 (   struct env4* env ,    struct List_30 *  list2452 ) {
    if ( (  eq283 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate1352 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq283 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_31  new_dash_slice2453 = ( (  allocate1352 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul535 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env1357 envinst1357 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion1358  fun2457 = ( (struct envunion1358){ .fun = (  enum Unit_8  (*) (  struct env1357*  ,    struct Tuple2_1359  ) )lam1360 , .env =  envinst1357 } );
            ( (  for_dash_each1362 ) ( ( (  zip1369 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from555 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free1370 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1349 (   struct env28* env ,    struct List_30 *  list2460 ,    struct Changeset_32  elem2462 ) {
    struct envunion29  temp1350 = ( (struct envunion29){ .fun = (  enum Unit_8  (*) (  struct env4*  ,    struct List_30 *  ) )grow_dash_if_dash_full1351 , .env =  env->envinst4 } );
    ( temp1350.fun ( &temp1350.env ,  (  list2460 ) ) );
    ( (  set1361 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add356 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Pos_26   action_dash_fwd1373 (   struct env132* env ,    struct TextBuf_117 *  self4141 ,    struct Action_25  action4143 ) {
    struct envunion133  temp1374 = ( (struct envunion133){ .fun = (  enum Unit_8  (*) (  struct env113*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action695 , .env =  env->envinst113 } );
    ( temp1374.fun ( &temp1374.env ,  (  self4141 ) ,  ( (  action4143 ) .f_from ) ,  ( (  action4143 ) .f_to_dash_bwd ) ,  ( (  action4143 ) .f_fwd ) ) );
    return ( (  action4143 ) .f_to_dash_fwd );
}

static  struct Maybe_227   change1243 (   struct env140* env ,    struct TextBuf_117 *  self4210 ,    struct Pos_26  from4212 ,    struct Pos_26  to4214 ,    struct StrView_27  bytes4216 ,    struct Maybe_227  before_dash_cursors4218 ) {
    struct Pos_26  from_dash_pos4219 = ( (  min696 ) ( (  from4212 ) ,  (  to4214 ) ) );
    struct Pos_26  to_dash_pos4220 = ( (  max698 ) ( (  from4212 ) ,  (  to4214 ) ) );
    struct Actions_118 *  actions4221 = ( & ( ( * (  self4210 ) ) .f_actions ) );
    ( (  trim_dash_actions1244 ) ( (  actions4221 ) ) );
    struct envunion144  temp1294 = ( (struct envunion144){ .fun = (  struct StrView_27  (*) (  struct env138*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1295 , .env =  env->envinst138 } );
    struct Action_25  action4222 = ( (struct Action_25) { .f_from = (  from4212 ) , .f_fwd = ( (  clone1279 ) ( (  bytes4216 ) ,  ( ( * (  self4210 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1280 ) ( (  self4210 ) ,  (  bytes4216 ) ,  (  from_dash_pos4219 ) ) ) , .f_bwd = ( temp1294.fun ( &temp1294.env ,  (  self4210 ) ,  (  from_dash_pos4219 ) ,  (  to_dash_pos4220 ) ) ) , .f_to_dash_bwd = (  to_dash_pos4220 ) } );
    enum CAllocator_10  al4223 = ( ( ( * (  actions4221 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in4224 = ( (  is_dash_none1308 ) ( (  before_dash_cursors4218 ) ) );
    if ( ( (  eq1309 ( ( ( ( * (  self4210 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_119_CustomChangeset ) ) ) || ( (  eq1309 ( ( ( ( * (  self4210 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_119_InputChangeset ) ) ) && (  is_dash_typed_dash_in4224 ) ) ) ) {
        struct Changeset_32 *  last_dash_changeset4225 = ( (  last_dash_ptr1311 ) ( ( (  to_dash_slice1313 ) ( ( ( * (  actions4221 ) ) .f_list ) ) ) ) );
        struct envunion142  temp1314 = ( (struct envunion142){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1315 , .env =  env->envinst21 } );
        ( temp1314.fun ( &temp1314.env ,  ( & ( ( * (  last_dash_changeset4225 ) ) .f_parts ) ) ,  (  action4222 ) ) );
    } else {
        struct Changeset_32  temp1337 = ( (struct Changeset_32) { .f_parts = ( (  mk1338 ) ( (  al4223 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1345 ) ( (  before_dash_cursors4218 ) ,  ( (struct Cursors_33) { .f_cur = (  from4212 ) , .f_sel = ( (  eq699 ( (  from4212 ) , (  to4214 ) ) ) ? ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) : ( ( Maybe_34_Just ) ( (  to4214 ) ) ) ) } ) ) ) } );
        struct Changeset_32 *  changeset4226 = ( &temp1337 );
        struct envunion1347  temp1346 = ( (struct envunion1347){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1315 , .env =  env->envinst21 } );
        ( temp1346.fun ( &temp1346.env ,  ( & ( ( * (  changeset4226 ) ) .f_parts ) ) ,  (  action4222 ) ) );
        struct envunion143  temp1348 = ( (struct envunion143){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1349 , .env =  env->envinst28 } );
        ( temp1348.fun ( &temp1348.env ,  ( & ( ( * (  actions4221 ) ) .f_list ) ) ,  ( * (  changeset4226 ) ) ) );
        (*  actions4221 ) .f_input_dash_changeset = ( (  is_dash_typed_dash_in4224 ) ? ( ChangesetInputType_119_InputChangeset ) : ( ChangesetInputType_119_NoChangeset ) );
        (*  actions4221 ) .f_cur = (  op_dash_add356 ( ( ( * (  actions4221 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion141  temp1372 = ( (struct envunion141){ .fun = (  struct Pos_26  (*) (  struct env132*  ,    struct TextBuf_117 *  ,    struct Action_25  ) )action_dash_fwd1373 , .env =  env->envinst132 } );
    struct Pos_26  to_dash_fwd4227 = ( temp1372.fun ( &temp1372.env ,  (  self4210 ) ,  (  action4222 ) ) );
    if ( (  cmp302 ( ( (  num_dash_bytes396 ) ( ( (  action4222 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd4228 = ( (  left_dash_pos1227 ) ( (  self4210 ) ,  (  to_dash_fwd4227 ) ) );
        return ( ( Maybe_227_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd4228 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  action4222 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_227_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd4227 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

static  enum Unit_8   add_dash_str_dash_at_dash_char1241 (   struct env225* env ,    struct Pane_241 *  self4586 ,    struct StrView_27  s4588 ) {
    struct Pos_26  cur4589 = ( ( * (  self4586 ) ) .f_cursor );
    struct envunion226  temp1242 = ( (struct envunion226){ .fun = (  struct Maybe_227  (*) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_227  ) )change1243 , .env =  env->envinst140 } );
    ( temp1242.fun ( &temp1242.env ,  ( ( * (  self4586 ) ) .f_buf ) ,  (  cur4589 ) ,  (  cur4589 ) ,  (  s4588 ) ,  ( (struct Maybe_227) { .tag = Maybe_227_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at1380 (   struct env236* env ,    struct Pane_241 *  self4625 ,    int32_t  line4627 ) {
    struct envunion237  temp1381 = ( (struct envunion237){ .fun = (  struct Maybe_227  (*) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_227  ) )change1243 , .env =  env->envinst140 } );
    ( temp1381.fun ( &temp1381.env ,  ( ( * (  self4625 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4627 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4627 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (  from_dash_charlike646 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_227) { .tag = Maybe_227_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at_dash_current1376 (   struct env247* env ,    struct Pane_241 *  self4646 ,    int32_t  indent4648 ) {
    struct RangeIter_169  temp1377 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  indent4648 ) ) ) );
    while (true) {
        struct Maybe_171  __cond1378 =  next172 (&temp1377);
        if (  __cond1378 .tag == 0 ) {
            break;
        }
        int32_t  dref4649 =  __cond1378 .stuff .Maybe_171_Just_s .field0;
        struct envunion248  temp1379 = ( (struct envunion248){ .fun = (  enum Unit_8  (*) (  struct env236*  ,    struct Pane_241 *  ,    int32_t  ) )indent_dash_at1380 , .env =  env->envinst236 } );
        ( temp1379.fun ( &temp1379.env ,  (  self4646 ) ,  ( ( ( * (  self4646 ) ) .f_cursor ) .f_line ) ) );
        ( (  move_dash_right1231 ) ( (  self4646 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_beginning1382 (    struct Pane_241 *  self4565 ) {
    struct Pos_26  temp1383 = ( ( * (  self4565 ) ) .f_cursor );
    temp1383 .  f_bi = (  from_dash_integral56 ( 0 ) );
    ( (  set_dash_cursors287 ) ( (  self4565 ) ,  ( temp1383 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

struct envunion1385 {
    enum Unit_8  (*fun) (  struct env225*  ,    struct Pane_241 *  ,    struct StrView_27  );
    struct env225 env;
};

struct envunion1387 {
    enum Unit_8  (*fun) (  struct env247*  ,    struct Pane_241 *  ,    int32_t  );
    struct env247 env;
};

enum MoveDirection_1389 {
    MoveDirection_1389_MoveFwd,
    MoveDirection_1389_MoveBwd,
};

enum MoveTarget_1390 {
    MoveTarget_1390_NextWordStart,
    MoveTarget_1390_NextWordEnd,
};

static  struct Pos_26   own1392 (    struct Pos_26  x1561 ) {
    return (  x1561 );
}

struct env1393 {
    enum MoveDirection_1389  dir4528;
    ;
    struct Pos_26 *  prev4531;
    struct Pane_241 *  pane4526;
    ;
};

static  bool   is_dash_at_dash_line_dash_end1395 (    struct Pane_241 *  pane4508 ,    struct Pos_26  pos4510 ) {
    return (  eq283 ( ( (  i32_dash_size280 ) ( ( (  pos4510 ) .f_bi ) ) ) , ( (  num_dash_bytes396 ) ( ( (  line297 ) ( ( ( * (  pane4508 ) ) .f_buf ) ,  ( (  pos4510 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1394 (    struct Pane_241 *  pane4513 ) {
    return ( (  is_dash_at_dash_line_dash_end1395 ) ( (  pane4513 ) ,  ( ( * (  pane4513 ) ) .f_cursor ) ) );
}

struct envunion1397 {
    enum Unit_8  (*fun) (  struct env1393*  );
    struct env1393 env;
};

static  enum Unit_8   advance1398 (   struct env1393* env ) {
    (* env->prev4531 ) = ( ( * ( env->pane4526 ) ) .f_cursor );
    enum MoveDirection_1389  dref4533 = ( env->dir4528 );
    switch (  dref4533 ) {
        case MoveDirection_1389_MoveFwd : {
            ( (  move_dash_right1231 ) ( ( env->pane4526 ) ) );
            break;
        }
        case MoveDirection_1389_MoveBwd : {
            ( (  move_dash_left1226 ) ( ( env->pane4526 ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

enum CharType_1402 {
    CharType_1402_CharSpace,
    CharType_1402_CharWord,
    CharType_1402_CharPunctuation,
};

struct Tuple2_1403 {
    enum CharType_1402  field0;
    enum CharType_1402  field1;
};

static struct Tuple2_1403 Tuple2_1403_Tuple2 (  enum CharType_1402  field0 ,  enum CharType_1402  field1 ) {
    return ( struct Tuple2_1403 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1401 (    enum CharType_1402  l3857 ,    enum CharType_1402  r3859 ) {
    struct Tuple2_1403  dref3860 = ( ( Tuple2_1403_Tuple2 ) ( (  l3857 ) ,  (  r3859 ) ) );
    if (  dref3860 .field0 == CharType_1402_CharSpace &&  dref3860 .field1 == CharType_1402_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3860 .field0 == CharType_1402_CharWord &&  dref3860 .field1 == CharType_1402_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3860 .field0 == CharType_1402_CharPunctuation &&  dref3860 .field1 == CharType_1402_CharPunctuation ) {
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

static  bool   is_dash_alpha1406 (    struct Char_65  c1497 ) {
    return ( ( (  cmp302 ( ( (  c1497 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between1111 ) ( (  c1497 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1111 ) ( (  c1497 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1405 (    struct Char_65  c1518 ) {
    return ( ( (  is_dash_alpha1406 ) ( (  c1518 ) ) ) || ( (  is_dash_digit1110 ) ( (  c1518 ) ) ) );
}

static  enum CharType_1402   char_dash_type1404 (    struct Char_65  c3863 ) {
    if ( ( ( ( (  is_dash_alphanumeric1405 ) ( (  c3863 ) ) ) || (  eq360 ( (  c3863 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) ) ) || (  eq360 ( (  c3863 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1402_CharWord );
    } else {
        if ( ( (  is_dash_whitespace415 ) ( (  c3863 ) ) ) ) {
            return ( CharType_1402_CharSpace );
        } else {
            return ( CharType_1402_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1400 (    struct Char_65  l3866 ,    struct Char_65  r3868 ) {
    return ( !  eq1401 ( ( (  char_dash_type1404 ) ( (  l3866 ) ) ) , ( (  char_dash_type1404 ) ( (  r3868 ) ) ) ) );
}

static  struct Char_65   or_dash_else1408 (    struct Maybe_351  self1360 ,    struct Char_65  alt1362 ) {
    struct Maybe_351  dref1363 = (  self1360 );
    if ( dref1363.tag == Maybe_351_None_t ) {
        return (  alt1362 );
    }
    else {
        if ( dref1363.tag == Maybe_351_Just_t ) {
            return ( dref1363 .stuff .Maybe_351_Just_s .field0 );
        }
    }
}

static  struct Maybe_351   head1409 (    struct StrViewIter_293  it1167 ) {
    struct StrViewIter_293  temp1410 = ( (  into_dash_iter294 ) ( (  it1167 ) ) );
    return ( (  next352 ) ( ( &temp1410 ) ) );
}

static  struct Char_65   char_dash_at1407 (    struct Pane_241 *  pane4377 ,    struct Pos_26  pos4379 ) {
    struct StrView_27  line4380 = ( (  line297 ) ( ( ( * (  pane4377 ) ) .f_buf ) ,  ( (  pos4379 ) .f_line ) ) );
    return ( (  or_dash_else1408 ) ( ( (  head1409 ) ( ( (  chars295 ) ( ( (  byte_dash_substr600 ) ( (  line4380 ) ,  ( (  i32_dash_size280 ) ( ( (  pos4379 ) .f_bi ) ) ) ,  ( (  num_dash_bytes396 ) ( (  line4380 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
}

struct StrConcatIter_1415 {
    struct StrViewIter_293  f_left;
    struct AppendIter_1161  f_right;
};

static  struct StrConcatIter_1415   into_dash_iter1417 (    struct StrConcatIter_1415  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_351   next1418 (    struct StrConcatIter_1415 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1183 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1414 (    struct StrConcatIter_1415  iterable1099 ,    enum Unit_8 (*  fun1101 )(    struct Char_65  ) ) {
    struct StrConcatIter_1415  temp1416 = ( (  into_dash_iter1417 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_1415 *  it1102 = ( &temp1416 );
    while ( ( true ) ) {
        struct Maybe_351  dref1103 = ( (  next1418 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_351_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_351_Just_t ) {
                ( (  fun1101 ) ( ( dref1103 .stuff .Maybe_351_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_1415   into_dash_iter1420 (    struct StrConcat_71  dref1297 ) {
    return ( (struct StrConcatIter_1415) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1196 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1415   chars1419 (    struct StrConcat_71  self1308 ) {
    return ( (  into_dash_iter1420 ) ( (  self1308 ) ) );
}

static  enum Unit_8   print1413 (    struct StrConcat_71  s1335 ) {
    ( (  for_dash_each1414 ) ( ( (  chars1419 ) ( (  s1335 ) ) ) ,  (  printf_dash_char318 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   println1412 (    struct StrView_27  s1338 ) {
    ( (  print1413 ) ( ( ( StrConcat_71_StrConcat ) ( (  s1338 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   undefined1421 (  ) {
    bool  temp1422;
    return (  temp1422 );
}

static  bool   todo1411 (  ) {
    ( (  println1412 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"todo" ) ,  ( 4 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1421 ) ( ) );
}

static  bool   reached_dash_target1399 (    struct Pane_241 *  pane4518 ,    enum MoveTarget_1390  target4520 ,    struct Pos_26  prev4522 ) {
    return ( {  enum MoveTarget_1390  dref4523 = (  target4520 ) ;  dref4523 == MoveTarget_1390_NextWordStart ? ( ( (  is_dash_word_dash_boundary1400 ) ( ( (  char_dash_at1407 ) ( (  pane4518 ) ,  (  prev4522 ) ) ) ,  ( (  char_dash_at1407 ) ( (  pane4518 ) ,  ( ( * (  pane4518 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1401 ( ( (  char_dash_type1404 ) ( ( (  char_dash_at1407 ) ( (  pane4518 ) ,  ( ( * (  pane4518 ) ) .f_cursor ) ) ) ) ) , ( CharType_1402_CharSpace ) ) ) ) ) :  dref4523 == MoveTarget_1390_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1400 ) ( ( (  char_dash_at1407 ) ( (  pane4518 ) ,  (  prev4522 ) ) ) ,  ( (  char_dash_at1407 ) ( (  pane4518 ) ,  ( ( * (  pane4518 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1401 ( ( (  char_dash_type1404 ) ( ( (  char_dash_at1407 ) ( (  pane4518 ) ,  (  prev4522 ) ) ) ) ) , ( CharType_1402_CharSpace ) ) ) ) ) : ( (  todo1411 ) ( ) ) ; } );
}

struct envunion1424 {
    enum Unit_8  (*fun) (  struct env1393*  );
    struct env1393 env;
};

struct envunion1426 {
    enum Unit_8  (*fun) (  struct env1393*  );
    struct env1393 env;
};

static  enum Unit_8   advance_dash_word1388 (    struct Pane_241 *  pane4526 ,    enum MoveDirection_1389  dir4528 ,    enum MoveTarget_1390  target4530 ) {
    struct Pos_26  temp1391 = ( (  own1392 ) ( ( ( * (  pane4526 ) ) .f_cursor ) ) );
    struct Pos_26 *  prev4531 = ( &temp1391 );
    struct env1393 envinst1393 = {
        .dir4528 =  dir4528 ,
        .prev4531 =  prev4531 ,
        .pane4526 =  pane4526 ,
    };
    struct Pos_26  sel4534 = ( ( * (  pane4526 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4535 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1394 ) ( (  pane4526 ) ) );
    struct envunion1397  temp1396 = ( (struct envunion1397){ .fun = (  enum Unit_8  (*) (  struct env1393*  ) )advance1398 , .env =  envinst1393 } );
    ( temp1396.fun ( &temp1396.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4535 ) || ( (  reached_dash_target1399 ) ( (  pane4526 ) ,  (  target4530 ) ,  ( * (  prev4531 ) ) ) ) ) ) {
        sel4534 = ( ( * (  pane4526 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1394 ) ( (  pane4526 ) ) ) ) {
        if ( (  eq699 ( ( ( * (  pane4526 ) ) .f_cursor ) , ( * (  prev4531 ) ) ) ) ) {
            return ( Unit_8_Unit );
        }
        struct envunion1424  temp1423 = ( (struct envunion1424){ .fun = (  enum Unit_8  (*) (  struct env1393*  ) )advance1398 , .env =  envinst1393 } );
        ( temp1423.fun ( &temp1423.env ) );
        sel4534 = ( ( * (  pane4526 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1426  temp1425 = ( (struct envunion1426){ .fun = (  enum Unit_8  (*) (  struct env1393*  ) )advance1398 , .env =  envinst1393 } );
        ( temp1425.fun ( &temp1425.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1394 ) ( (  pane4526 ) ) ) || ( (  reached_dash_target1399 ) ( (  pane4526 ) ,  (  target4530 ) ,  ( * (  prev4531 ) ) ) ) ) ) {
            enum MoveDirection_1389  dref4536 = (  dir4528 );
            switch (  dref4536 ) {
                case MoveDirection_1389_MoveFwd : {
                    ( (  move_dash_left1226 ) ( (  pane4526 ) ) );
                    break;
                }
                case MoveDirection_1389_MoveBwd : {
                    ( (  move_dash_right1231 ) ( (  pane4526 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq699 ( ( * (  prev4531 ) ) , ( ( * (  pane4526 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel392 ) ( (  pane4526 ) ,  ( ( Maybe_34_Just ) ( (  sel4534 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  size_t   size1431 (    struct List_30 *  l2443 ) {
    return ( ( * (  l2443 ) ) .f_count );
}

static  struct Changeset_32 *   get_dash_ptr1434 (    struct List_30 *  list2406 ,    size_t  i2408 ) {
    if ( ( (  cmp302 ( (  i2408 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2408 ) , ( ( * (  list2406 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2408 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2406 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1312 ) ( ( ( * (  list2406 ) ) .f_elements ) ,  (  i2408 ) ) );
}

static  struct Changeset_32   get1433 (    struct List_30 *  list2416 ,    size_t  i2418 ) {
    return ( * ( (  get_dash_ptr1434 ) ( (  list2416 ) ,  (  i2418 ) ) ) );
}

static  struct Changeset_32   elem_dash_get1432 (    struct List_30  self2492 ,    size_t  k2494 ) {
    return ( (  get1433 ) ( ( & (  self2492 ) ) ,  (  k2494 ) ) );
}

static  struct Action_25   undefined1443 (  ) {
    struct Action_25  temp1444;
    return (  temp1444 );
}

static  struct Action_25   or_dash_fail1442 (    struct Maybe_1270  x1353 ,    struct StrConcat_304  errmsg1355 ) {
    struct Maybe_1270  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_1270_None_t ) {
        ( (  panic303 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1443 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_1270_Just_t ) {
            return ( dref1356 .stuff .Maybe_1270_Just_s .field0 );
        }
    }
}

static  struct Maybe_1270   try_dash_get1445 (    struct Slice_24  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp302 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1270) { .tag = Maybe_1270_None_t } );
    }
    struct Action_25 *  elem_dash_ptr2179 = ( (  offset_dash_ptr1268 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_1270_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  struct Action_25   get1441 (    struct Slice_24  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail1442 ) ( ( (  try_dash_get1445 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_25   elem_dash_get1440 (    struct Slice_24  self2195 ,    size_t  idx2197 ) {
    return ( (  get1441 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

static  struct Action_25   last1439 (    struct Slice_24  s2357 ) {
    if ( (  eq283 ( ( (  s2357 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic853 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1440 ( (  s2357 ) , (  op_dash_sub462 ( ( (  s2357 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_24   to_dash_slice1446 (    struct List_23  l2541 ) {
    struct Action_25 *  ptr2542 = ( ( (  l2541 ) .f_elements ) .f_ptr );
    return ( (struct Slice_24) { .f_ptr = (  ptr2542 ) , .f_count = ( (  l2541 ) .f_count ) } );
}

static  struct Maybe_227   redo1430 (   struct env136* env ,    struct TextBuf_117 *  self4170 ) {
    ( (  flush_dash_insert_dash_action1239 ) ( (  self4170 ) ) );
    struct Actions_118 *  actions4171 = ( & ( ( * (  self4170 ) ) .f_actions ) );
    if ( (  cmp302 ( ( ( * (  actions4171 ) ) .f_cur ) , ( (  size1431 ) ( ( & ( ( * (  actions4171 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_227) { .tag = Maybe_227_None_t } );
    }
    struct Changeset_32  changeset4172 = (  elem_dash_get1432 ( ( ( * (  actions4171 ) ) .f_list ) , ( ( * (  actions4171 ) ) .f_cur ) ) );
    struct Pos_26  temp1435;
    struct Pos_26  to_dash_fwd4173 = (  temp1435 );
    struct SliceIter_1263  temp1436 =  into_dash_iter1265 ( ( (  changeset4172 ) .f_parts ) );
    while (true) {
        struct Maybe_1270  __cond1437 =  next1271 (&temp1436);
        if (  __cond1437 .tag == 0 ) {
            break;
        }
        struct Action_25  action4175 =  __cond1437 .stuff .Maybe_1270_Just_s .field0;
        struct envunion137  temp1438 = ( (struct envunion137){ .fun = (  struct Pos_26  (*) (  struct env132*  ,    struct TextBuf_117 *  ,    struct Action_25  ) )action_dash_fwd1373 , .env =  env->envinst132 } );
        to_dash_fwd4173 = ( temp1438.fun ( &temp1438.env ,  (  self4170 ) ,  (  action4175 ) ) );
    }
    (*  actions4171 ) .f_cur = (  op_dash_add356 ( ( ( * (  actions4171 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_25  last_dash_action4176 = ( (  last1439 ) ( ( (  to_dash_slice1446 ) ( ( (  changeset4172 ) .f_parts ) ) ) ) );
    if ( (  cmp302 ( ( (  num_dash_bytes396 ) ( ( (  last_dash_action4176 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd4177 = ( (  left_dash_pos1227 ) ( (  self4170 ) ,  (  to_dash_fwd4173 ) ) );
        return ( ( Maybe_227_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd4177 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  last_dash_action4176 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_227_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd4173 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

struct env1448 {
    struct Pane_241 *  self4602;
    ;
};

struct envunion1449 {
    enum Unit_8  (*fun) (  struct env1448*  ,    struct Cursors_33  );
    struct env1448 env;
};

static  enum Unit_8   if_dash_just1447 (    struct Maybe_227  x1601 ,   struct envunion1449  fun1603 ) {
    struct Maybe_227  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_227_Just_t ) {
        struct envunion1449  temp1450 = (  fun1603 );
        ( temp1450.fun ( &temp1450.env ,  ( dref1604 .stuff .Maybe_227_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_227_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1451 (   struct env1448* env ,    struct Cursors_33  cursors4605 ) {
    ( (  set_dash_cursors287 ) ( ( env->self4602 ) ,  ( (  cursors4605 ) .f_cur ) ,  ( (  cursors4605 ) .f_sel ) ,  ( CursorMovement_288_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   redo1428 (   struct env232* env ,    struct Pane_241 *  self4602 ) {
    struct envunion233  temp1429 = ( (struct envunion233){ .fun = (  struct Maybe_227  (*) (  struct env136*  ,    struct TextBuf_117 *  ) )redo1430 , .env =  env->envinst136 } );
    struct Maybe_227  mcursors4603 = ( temp1429.fun ( &temp1429.env ,  ( ( * (  self4602 ) ) .f_buf ) ) );
    struct env1448 envinst1448 = {
        .self4602 =  self4602 ,
    };
    ( (  if_dash_just1447 ) ( (  mcursors4603 ) ,  ( (struct envunion1449){ .fun = (  enum Unit_8  (*) (  struct env1448*  ,    struct Cursors_33  ) )lam1451 , .env =  envinst1448 } ) ) );
    return ( Unit_8_Unit );
}

struct SliceReversedIter_1457 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1457   into_dash_iter1458 (    struct SliceReversedIter_1457  self2321 ) {
    return (  self2321 );
}

static  struct SliceReversedIter_1457   reversed1459 (    struct Slice_24  slice2318 ) {
    return ( (struct SliceReversedIter_1457) { .f_slice = (  slice2318 ) , .f_current_dash_offset = ( (  slice2318 ) .f_count ) } );
}

static  struct Maybe_1270   next1461 (    struct SliceReversedIter_1457 *  self2324 ) {
    size_t  off2325 = ( ( * (  self2324 ) ) .f_current_dash_offset );
    if ( (  eq283 ( (  off2325 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1270) { .tag = Maybe_1270_None_t } );
    }
    (*  self2324 ) .f_current_dash_offset = (  op_dash_sub462 ( (  off2325 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1270_Just ) ( (  elem_dash_get1440 ( ( ( * (  self2324 ) ) .f_slice ) , ( ( * (  self2324 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_26   action_dash_bwd1463 (   struct env130* env ,    struct TextBuf_117 *  self4136 ,    struct Action_25  action4138 ) {
    struct envunion131  temp1464 = ( (struct envunion131){ .fun = (  enum Unit_8  (*) (  struct env113*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action695 , .env =  env->envinst113 } );
    ( temp1464.fun ( &temp1464.env ,  (  self4136 ) ,  ( (  action4138 ) .f_from ) ,  ( (  action4138 ) .f_to_dash_fwd ) ,  ( (  action4138 ) .f_bwd ) ) );
    return ( (  action4138 ) .f_to_dash_bwd );
}

static  struct Maybe_227   undo1455 (   struct env134* env ,    struct TextBuf_117 *  self4163 ) {
    ( (  flush_dash_insert_dash_action1239 ) ( (  self4163 ) ) );
    struct Actions_118 *  actions4164 = ( & ( ( * (  self4163 ) ) .f_actions ) );
    if ( (  eq283 ( ( ( * (  actions4164 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_227) { .tag = Maybe_227_None_t } );
    }
    (*  actions4164 ) .f_cur = (  op_dash_sub462 ( ( ( * (  actions4164 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_32  changeset4165 = (  elem_dash_get1432 ( ( ( * (  actions4164 ) ) .f_list ) , ( ( * (  actions4164 ) ) .f_cur ) ) );
    struct SliceReversedIter_1457  temp1456 =  into_dash_iter1458 ( ( (  reversed1459 ) ( ( (  to_dash_slice1446 ) ( ( (  changeset4165 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1270  __cond1460 =  next1461 (&temp1456);
        if (  __cond1460 .tag == 0 ) {
            break;
        }
        struct Action_25  action4167 =  __cond1460 .stuff .Maybe_1270_Just_s .field0;
        struct envunion135  temp1462 = ( (struct envunion135){ .fun = (  struct Pos_26  (*) (  struct env130*  ,    struct TextBuf_117 *  ,    struct Action_25  ) )action_dash_bwd1463 , .env =  env->envinst130 } );
        ( temp1462.fun ( &temp1462.env ,  (  self4163 ) ,  (  action4167 ) ) );
    }
    return ( ( Maybe_227_Just ) ( ( (  changeset4165 ) .f_before_dash_cursors ) ) );
}

struct env1466 {
    ;
    struct Pane_241 *  self4596;
};

struct envunion1467 {
    enum Unit_8  (*fun) (  struct env1466*  ,    struct Cursors_33  );
    struct env1466 env;
};

static  enum Unit_8   if_dash_just1465 (    struct Maybe_227  x1601 ,   struct envunion1467  fun1603 ) {
    struct Maybe_227  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_227_Just_t ) {
        struct envunion1467  temp1468 = (  fun1603 );
        ( temp1468.fun ( &temp1468.env ,  ( dref1604 .stuff .Maybe_227_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_227_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1469 (   struct env1466* env ,    struct Cursors_33  cursors4599 ) {
    ( (  set_dash_cursors287 ) ( ( env->self4596 ) ,  ( (  cursors4599 ) .f_cur ) ,  ( (  cursors4599 ) .f_sel ) ,  ( CursorMovement_288_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undo1453 (   struct env230* env ,    struct Pane_241 *  self4596 ) {
    struct envunion231  temp1454 = ( (struct envunion231){ .fun = (  struct Maybe_227  (*) (  struct env134*  ,    struct TextBuf_117 *  ) )undo1455 , .env =  env->envinst134 } );
    struct Maybe_227  mcursors4597 = ( temp1454.fun ( &temp1454.env ,  ( ( * (  self4596 ) ) .f_buf ) ) );
    struct env1466 envinst1466 = {
        .self4596 =  self4596 ,
    };
    ( (  if_dash_just1465 ) ( (  mcursors4597 ) ,  ( (struct envunion1467){ .fun = (  enum Unit_8  (*) (  struct env1466*  ,    struct Cursors_33  ) )lam1469 , .env =  envinst1466 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_251   minmax1473 (    struct Pos_26  l1634 ,    struct Pos_26  r1636 ) {
    return ( (  cmp697 ( (  l1634 ) , (  r1636 ) ) == 0 ) ? ( ( Tuple2_251_Tuple2 ) ( (  l1634 ) ,  (  r1636 ) ) ) : ( ( Tuple2_251_Tuple2 ) ( (  r1636 ) ,  (  l1634 ) ) ) );
}

static  struct Pos_26   or_dash_else1474 (    struct Maybe_34  self1360 ,    struct Pos_26  alt1362 ) {
    struct Maybe_34  dref1363 = (  self1360 );
    if ( dref1363.tag == Maybe_34_None_t ) {
        return (  alt1362 );
    }
    else {
        if ( dref1363.tag == Maybe_34_Just_t ) {
            return ( dref1363 .stuff .Maybe_34_Just_s .field0 );
        }
    }
}

static  struct Pos_26   fst1475 (    struct Tuple2_251  dref1563 ) {
    return ( dref1563 .field0 );
}

static  struct Pos_26   snd1476 (    struct Tuple2_251  dref1566 ) {
    return ( dref1566 .field1 );
}

static  struct Tuple2_251   selection1472 (    struct Pane_241 *  self4608 ) {
    struct Tuple2_251  from_dash_to4609 = ( (  minmax1473 ) ( ( (  or_dash_else1474 ) ( ( ( * (  self4608 ) ) .f_sel ) ,  ( ( * (  self4608 ) ) .f_cursor ) ) ) ,  ( ( * (  self4608 ) ) .f_cursor ) ) );
    struct Pos_26  from4610 = ( (  fst1475 ) ( (  from_dash_to4609 ) ) );
    struct Pos_26  to4611 = ( (  right_dash_pos1232 ) ( ( ( * (  self4608 ) ) .f_buf ) ,  ( (  snd1476 ) ( (  from_dash_to4609 ) ) ) ) );
    return ( ( Tuple2_251_Tuple2 ) ( (  from4610 ) ,  (  to4611 ) ) );
}

struct env1479 {
    struct Editor_267 *  ed4725;
    ;
};

struct envunion1480 {
    enum Unit_8  (*fun) (  struct env1479*  ,    struct StrView_27  );
    struct env1479 env;
};

static  enum Unit_8   if_dash_just1478 (    struct Maybe_85  x1601 ,   struct envunion1480  fun1603 ) {
    struct Maybe_85  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_85_Just_t ) {
        struct envunion1480  temp1481 = (  fun1603 );
        ( temp1481.fun ( &temp1481.env ,  ( dref1604 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1482 (   struct env1479* env ,    struct StrView_27  cp4731 ) {
    ( (  free689 ) ( (  cp4731 ) ,  ( ( * ( env->ed4725 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   copy_dash_selection_dash_to_dash_clipboard1471 (   struct env254* env ,    struct Editor_267 *  ed4725 ) {
    struct Tuple2_251  dref4726 = ( (  selection1472 ) ( ( (  pane397 ) ( (  ed4725 ) ) ) ) );
    
    struct envunion255  temp1477 = ( (struct envunion255){ .fun = (  struct StrView_27  (*) (  struct env138*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1295 , .env =  env->envinst138 } );
    struct StrView_27  cpd4729 = ( temp1477.fun ( &temp1477.env ,  ( ( ( * (  ed4725 ) ) .f_pane ) .f_buf ) ,  ( dref4726 .field0 ) ,  ( dref4726 .field1 ) ) );
    struct env1479 envinst1479 = {
        .ed4725 =  ed4725 ,
    };
    ( (  if_dash_just1478 ) ( ( ( * (  ed4725 ) ) .f_clipboard ) ,  ( (struct envunion1480){ .fun = (  enum Unit_8  (*) (  struct env1479*  ,    struct StrView_27  ) )lam1482 , .env =  envinst1479 } ) ) );
    (*  ed4725 ) .f_clipboard = ( ( Maybe_85_Just ) ( (  cpd4729 ) ) );
    return ( Unit_8_Unit );
}

struct env1487 {
    ;
    struct Pane_241 *  self4614;
};

struct envunion1488 {
    enum Unit_8  (*fun) (  struct env1487*  ,    struct Cursors_33  );
    struct env1487 env;
};

static  enum Unit_8   if_dash_just1486 (    struct Maybe_227  x1601 ,   struct envunion1488  fun1603 ) {
    struct Maybe_227  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_227_Just_t ) {
        struct envunion1488  temp1489 = (  fun1603 );
        ( temp1489.fun ( &temp1489.env ,  ( dref1604 .stuff .Maybe_227_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_227_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1490 (   struct env1487* env ,    struct Cursors_33  cursors4622 ) {
    ( (  set_dash_cursors287 ) ( ( env->self4614 ) ,  ( (  cursors4622 ) .f_cur ) ,  ( (  cursors4622 ) .f_sel ) ,  ( CursorMovement_288_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   replace_dash_selection1484 (   struct env234* env ,    struct Pane_241 *  self4614 ,    struct Tuple2_251  dref4615 ,    struct StrView_27  cp4619 ) {
    struct envunion235  temp1485 = ( (struct envunion235){ .fun = (  struct Maybe_227  (*) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_227  ) )change1243 , .env =  env->envinst140 } );
    struct Maybe_227  mcursors4620 = ( temp1485.fun ( &temp1485.env ,  ( ( * (  self4614 ) ) .f_buf ) ,  ( dref4615 .field0 ) ,  ( dref4615 .field1 ) ,  (  cp4619 ) ,  ( ( Maybe_227_Just ) ( ( (struct Cursors_33) { .f_cur = ( ( * (  self4614 ) ) .f_cursor ) , .f_sel = ( ( * (  self4614 ) ) .f_sel ) } ) ) ) ) );
    struct env1487 envinst1487 = {
        .self4614 =  self4614 ,
    };
    ( (  if_dash_just1486 ) ( (  mcursors4620 ) ,  ( (struct envunion1488){ .fun = (  enum Unit_8  (*) (  struct env1487*  ,    struct Cursors_33  ) )lam1490 , .env =  envinst1487 } ) ) );
    return ( Unit_8_Unit );
}

struct envunion1492 {
    enum Unit_8  (*fun) (  struct env254*  ,    struct Editor_267 *  );
    struct env254 env;
};

struct envunion1494 {
    enum Unit_8  (*fun) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  );
    struct env234 env;
};

struct envunion1496 {
    enum Unit_8  (*fun) (  struct env254*  ,    struct Editor_267 *  );
    struct env254 env;
};

static  struct StrBuilder_62   mk1502 (    enum CAllocator_10  al2909 ) {
    return ( (struct StrBuilder_62) { .f_chars = ( (  mk568 ) ( (  al2909 ) ) ) } );
}

struct IntStrIter_1508 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1507 {
    struct StrViewIter_293  f_left;
    struct IntStrIter_1508  f_right;
};

struct StrConcatIter_1506 {
    struct StrConcatIter_1507  f_left;
    struct StrViewIter_293  f_right;
};

struct env1509 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2877;
};

struct envunion1510 {
    enum Unit_8  (*fun) (  struct env1509*  ,    struct Char_65  );
    struct env1509 env;
};

static  struct StrConcatIter_1506   into_dash_iter1512 (    struct StrConcatIter_1506  self1290 ) {
    return (  self1290 );
}

struct env1518 {
    size_t  base1386;
    ;
};

struct envunion1519 {
    size_t  (*fun) (  struct env1518*  ,    int32_t  ,    size_t  );
    struct env1518 env;
};

static  size_t   reduce1517 (    struct Range_166  iterable1118 ,    size_t  base1120 ,   struct envunion1519  fun1122 ) {
    size_t  x1123 = (  base1120 );
    struct RangeIter_169  it1124 = ( (  into_dash_iter170 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next172 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                struct envunion1519  temp1520 = (  fun1122 );
                x1123 = ( temp1520.fun ( &temp1520.env ,  ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1521 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1521);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1522;
    return (  temp1522 );
}

static  size_t   lam1523 (   struct env1518* env ,    int32_t  item1390 ,    size_t  x1392 ) {
    return (  op_dash_mul535 ( (  x1392 ) , ( env->base1386 ) ) );
}

static  size_t   pow1516 (    size_t  base1386 ,    int32_t  p1388 ) {
    struct env1518 envinst1518 = {
        .base1386 =  base1386 ,
    };
    return ( (  reduce1517 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( (  p1388 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1519){ .fun = (  size_t  (*) (  struct env1518*  ,    int32_t  ,    size_t  ) )lam1523 , .env =  envinst1518 } ) ) );
}

static  uint8_t   cast1524 (    size_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  struct Maybe_351   next1515 (    struct IntStrIter_1508 *  self1399 ) {
    if ( ( ( * (  self1399 ) ) .f_negative ) ) {
        (*  self1399 ) .f_negative = ( false );
        return ( ( Maybe_351_Just ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp173 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    size_t  trim_dash_down1400 = ( (  pow1516 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    size_t  upper1401 = (  op_dash_div327 ( ( ( * (  self1399 ) ) .f_int ) , (  trim_dash_down1400 ) ) );
    size_t  upper_dash_mask1402 = (  op_dash_mul535 ( (  op_dash_div327 ( (  upper1401 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1403 = ( ( (  cast1524 ) ( (  op_dash_sub462 ( (  upper1401 ) , (  upper_dash_mask1402 ) ) ) ) ) );
    (*  self1399 ) .f_len = (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1404 = ( (  char_dash_from_dash_u81180 ) ( (  op_dash_add1070 ( (  digit1403 ) , (  from_dash_integral328 ( 48 ) ) ) ) ) );
    return ( ( Maybe_351_Just ) ( (  digit_dash_char1404 ) ) );
}

static  struct Maybe_351   next1514 (    struct StrConcatIter_1507 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1515 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next1513 (    struct StrConcatIter_1506 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next1514 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1505 (    struct StrConcatIter_1506  iterable1099 ,   struct envunion1510  fun1101 ) {
    struct StrConcatIter_1506  temp1511 = ( (  into_dash_iter1512 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_1506 *  it1102 = ( &temp1511 );
    while ( ( true ) ) {
        struct Maybe_351  dref1103 = ( (  next1513 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_351_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_351_Just_t ) {
                struct envunion1510  temp1525 = (  fun1101 );
                ( temp1525.fun ( &temp1525.env ,  ( dref1103 .stuff .Maybe_351_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits1532 (    size_t  self1407 ) {
    if ( (  eq283 ( (  self1407 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1408 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp302 ( (  self1407 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1407 = (  op_dash_div327 ( (  self1407 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1408 = (  op_dash_add175 ( (  digits1408 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1408 );
}

static  struct IntStrIter_1508   uint_dash_iter1531 (    size_t  int1414 ) {
    return ( (struct IntStrIter_1508) { .f_int = (  int1414 ) , .f_len = ( (  count_dash_digits1532 ) ( (  int1414 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1508   chars1530 (    size_t  self1426 ) {
    return ( (  uint_dash_iter1531 ) ( (  self1426 ) ) );
}

static  struct StrConcatIter_1507   into_dash_iter1529 (    struct StrConcat_79  dref1297 ) {
    return ( (struct StrConcatIter_1507) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1530 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1507   chars1528 (    struct StrConcat_79  self1308 ) {
    return ( (  into_dash_iter1529 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_1506   into_dash_iter1527 (    struct StrConcat_78  dref1297 ) {
    return ( (struct StrConcatIter_1506) { .f_left = ( (  chars1528 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars295 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1506   chars1526 (    struct StrConcat_78  self1308 ) {
    return ( (  into_dash_iter1527 ) ( (  self1308 ) ) );
}

static  enum Unit_8   write_dash_slice1537 (   struct env58* env ,    struct StrBuilder_62 *  builder2867 ,    struct Slice_14  s2869 ) {
    struct envunion59  temp1538 = ( (struct envunion59){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all709 , .env =  env->envinst48 } );
    ( temp1538.fun ( &temp1538.env ,  ( & ( ( * (  builder2867 ) ) .f_chars ) ) ,  (  s2869 ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_14   as_dash_u8_dash_slice1539 (    struct Char_65  c1465 ,    struct Array_320 *  buf1467 ) {
    struct Char_65  cc1468 = ( (  regularize319 ) ( (  c1465 ) ,  (  buf1467 ) ) );
    return ( (struct Slice_14) { .f_ptr = ( (  cc1468 ) .f_ptr ) , .f_count = ( (  cc1468 ) .f_num_dash_bytes ) } );
}

static  enum Unit_8   write_dash_char1535 (   struct env60* env ,    struct StrBuilder_62 *  builder2872 ,    struct Char_65  c2874 ) {
    struct envunion61  temp1536 = ( (struct envunion61){ .fun = (  enum Unit_8  (*) (  struct env58*  ,    struct StrBuilder_62 *  ,    struct Slice_14  ) )write_dash_slice1537 , .env =  env->envinst58 } );
    struct Array_320  temp1541;
    struct Array_320  temp1540 = (  temp1541 );
    ( temp1536.fun ( &temp1536.env ,  (  builder2872 ) ,  ( (  as_dash_u8_dash_slice1539 ) ( (  c2874 ) ,  ( &temp1540 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1533 (   struct env1509* env ,    struct Char_65  c2881 ) {
    struct envunion64  temp1534 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1535 , .env =  env->envinst60 } );
    return ( temp1534.fun ( &temp1534.env ,  ( env->builder2877 ) ,  (  c2881 ) ) );
}

static  enum Unit_8   write1504 (   struct env63* env ,    struct StrBuilder_62 *  builder2877 ,    struct StrConcat_78  s2879 ) {
    struct env1509 envinst1509 = {
        .envinst60 = env->envinst60 ,
        .builder2877 =  builder2877 ,
    };
    ( (  for_dash_each1505 ) ( ( (  chars1526 ) ( (  s2879 ) ) ) ,  ( (struct envunion1510){ .fun = (  enum Unit_8  (*) (  struct env1509*  ,    struct Char_65  ) )lam1533 , .env =  envinst1509 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t *   cast_dash_ptr1545 (    uint8_t *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  struct Slice_14   cast_dash_slice1544 (    struct Slice_14  s2354 ) {
    return ( (struct Slice_14) { .f_ptr = ( (  cast_dash_ptr1545 ) ( ( (  s2354 ) .f_ptr ) ) ) , .f_count = ( (  s2354 ) .f_count ) } );
}

static  struct StrView_27   as_dash_str1543 (    struct StrBuilder_62 *  builder2915 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice1544 ) ( ( (  subslice590 ) ( ( ( ( * (  builder2915 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2915 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_27   mk_dash_dyn_dash_str1500 (   struct env75* env ,    struct StrConcat_78  s2935 ,    enum CAllocator_10  al2937 ) {
    struct StrBuilder_62  temp1501 = ( (  mk1502 ) ( (  al2937 ) ) );
    struct StrBuilder_62 *  sb2938 = ( &temp1501 );
    struct envunion77  temp1503 = ( (struct envunion77){ .fun = (  enum Unit_8  (*) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrConcat_78  ) )write1504 , .env =  env->envinst63 } );
    ( temp1503.fun ( &temp1503.env ,  (  sb2938 ) ,  (  s2935 ) ) );
    struct envunion76  temp1542 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1535 , .env =  env->envinst60 } );
    ( temp1542.fun ( &temp1542.env ,  (  sb2938 ) ,  ( (  nullchar686 ) ( ) ) ) );
    struct StrView_27  dynstr2939 = ( (  as_dash_str1543 ) ( (  sb2938 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2939 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub462 ( ( ( (  dynstr2939 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1498 (   struct env256* env ,    struct Editor_267 *  ed4739 ,    struct StrConcat_78  s4741 ) {
    ( (  reset_dash_msg1215 ) ( (  ed4739 ) ) );
    struct envunion257  temp1499 = ( (struct envunion257){ .fun = (  struct StrView_27  (*) (  struct env75*  ,    struct StrConcat_78  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1500 , .env =  env->envinst75 } );
    (*  ed4739 ) .f_msg = ( ( Maybe_85_Just ) ( ( temp1499.fun ( &temp1499.env ,  (  s4741 ) ,  ( ( * (  ed4739 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion1548 {
    enum Unit_8  (*fun) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  );
    struct env234 env;
};

struct env1547 {
    ;
    struct Editor_267 *  ed4818;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env234 envinst234;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion1549 {
    enum Unit_8  (*fun) (  struct env1547*  ,    struct StrView_27  );
    struct env1547 env;
};

static  enum Unit_8   if_dash_just1546 (    struct Maybe_85  x1601 ,   struct envunion1549  fun1603 ) {
    struct Maybe_85  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_85_Just_t ) {
        struct envunion1549  temp1550 = (  fun1603 );
        ( temp1550.fun ( &temp1550.env ,  ( dref1604 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   max_dash_pos1552 (    struct Pane_241 *  pane4544 ) {
    return ( {  struct Maybe_34  dref4545 = ( ( * (  pane4544 ) ) .f_sel ) ; dref4545.tag == Maybe_34_Just_t ? ( (  max698 ) ( ( ( * (  pane4544 ) ) .f_cursor ) ,  ( dref4545 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4544 ) ) .f_cursor ) ; } );
}

static  struct StrView_27   own1553 (    struct StrView_27  x1561 ) {
    return (  x1561 );
}

static  uint8_t   last1554 (    struct Slice_14  s2357 ) {
    if ( (  eq283 ( ( (  s2357 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic853 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get593 ( (  s2357 ) , (  op_dash_sub462 ( ( (  s2357 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1555 (    int32_t  x1648 ,    int32_t  mn1650 ,    int32_t  mx1652 ) {
    if ( (  cmp173 ( (  x1648 ) , (  mn1650 ) ) == 0 ) ) {
        return (  mn1650 );
    } else {
        if ( (  cmp173 ( (  x1648 ) , (  mx1652 ) ) == 2 ) ) {
            return (  mx1652 );
        } else {
            return (  x1648 );
        }
    }
}

struct envunion1558 {
    enum Unit_8  (*fun) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  );
    struct env234 env;
};

static  enum Unit_8   lam1551 (   struct env1547* env ,    struct StrView_27  cp4829 ) {
    struct Pos_26  start4830 = ( (  max_dash_pos1552 ) ( ( (  pane397 ) ( ( env->ed4818 ) ) ) ) );
    struct StrView_27  cp4831 = ( (  own1553 ) ( (  cp4829 ) ) );
    if ( (  eq324 ( ( (  last1554 ) ( ( (  cp4831 ) .f_contents ) ) ) , ( (  ascii_dash_u8599 ) ( ( (  from_dash_charlike282 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        int32_t  max_dash_lines4832 = ( (  num_dash_lines420 ) ( ( ( * ( (  pane397 ) ( ( env->ed4818 ) ) ) ) .f_buf ) ) );
        struct Pos_26  start4833 = ( (struct Pos_26) { .f_line = ( (  clamp1555 ) ( (  op_dash_add175 ( ( (  start4830 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  max_dash_lines4832 ) ) ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } );
        if ( (  eq700 ( ( (  start4833 ) .f_line ) , (  max_dash_lines4832 ) ) ) ) {
            cp4831 = ( (  byte_dash_substr600 ) ( (  cp4831 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub462 ( ( ( (  cp4831 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
        struct envunion1548  temp1556 = ( (struct envunion1548){ .fun = (  enum Unit_8  (*) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  ) )replace_dash_selection1484 , .env =  env->envinst234 } );
        ( temp1556.fun ( &temp1556.env ,  ( (  pane397 ) ( ( env->ed4818 ) ) ) ,  ( ( Tuple2_251_Tuple2 ) ( (  start4833 ) ,  (  start4833 ) ) ) ,  (  cp4831 ) ) );
    } else {
        struct Pos_26  start4834 = ( (  right_dash_pos1232 ) ( ( ( ( * ( env->ed4818 ) ) .f_pane ) .f_buf ) ,  (  start4830 ) ) );
        struct envunion1558  temp1557 = ( (struct envunion1558){ .fun = (  enum Unit_8  (*) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  ) )replace_dash_selection1484 , .env =  env->envinst234 } );
        ( temp1557.fun ( &temp1557.env ,  ( (  pane397 ) ( ( env->ed4818 ) ) ) ,  ( ( Tuple2_251_Tuple2 ) ( (  start4834 ) ,  (  start4834 ) ) ) ,  (  cp4831 ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1561 {
    enum Unit_8  (*fun) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  );
    struct env234 env;
};

struct env1560 {
    ;
    ;
    struct Editor_267 *  ed4818;
    ;
    ;
    ;
    ;
    ;
    struct env234 envinst234;
};

struct envunion1562 {
    enum Unit_8  (*fun) (  struct env1560*  ,    struct StrView_27  );
    struct env1560 env;
};

static  enum Unit_8   if_dash_just1559 (    struct Maybe_85  x1601 ,   struct envunion1562  fun1603 ) {
    struct Maybe_85  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_85_Just_t ) {
        struct envunion1562  temp1563 = (  fun1603 );
        ( temp1563.fun ( &temp1563.env ,  ( dref1604 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   min_dash_pos1565 (    struct Pane_241 *  pane4539 ) {
    return ( {  struct Maybe_34  dref4540 = ( ( * (  pane4539 ) ) .f_sel ) ; dref4540.tag == Maybe_34_Just_t ? ( (  min696 ) ( ( ( * (  pane4539 ) ) .f_cursor ) ,  ( dref4540 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4539 ) ) .f_cursor ) ; } );
}

static  enum Unit_8   lam1564 (   struct env1560* env ,    struct StrView_27  cp4836 ) {
    struct Pos_26  start4837 = ( (  min_dash_pos1565 ) ( ( (  pane397 ) ( ( env->ed4818 ) ) ) ) );
    if ( (  eq324 ( ( (  last1554 ) ( ( (  cp4836 ) .f_contents ) ) ) , ( (  ascii_dash_u8599 ) ( ( (  from_dash_charlike282 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_26  temp1566 = (  start4837 );
        temp1566 .  f_bi = (  from_dash_integral56 ( 0 ) );
        start4837 = ( temp1566 );
    }
    struct envunion1561  temp1567 = ( (struct envunion1561){ .fun = (  enum Unit_8  (*) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  ) )replace_dash_selection1484 , .env =  env->envinst234 } );
    ( temp1567.fun ( &temp1567.env ,  ( (  pane397 ) ( ( env->ed4818 ) ) ) ,  ( ( Tuple2_251_Tuple2 ) ( (  start4837 ) ,  (  start4837 ) ) ) ,  (  cp4836 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1570 {
    enum Unit_8  (*fun) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  );
    struct env234 env;
};

struct env1569 {
    ;
    ;
    struct Editor_267 *  ed4818;
    ;
    ;
    ;
    struct env234 envinst234;
};

struct envunion1571 {
    enum Unit_8  (*fun) (  struct env1569*  ,    struct StrView_27  );
    struct env1569 env;
};

static  enum Unit_8   if_dash_just1568 (    struct Maybe_85  x1601 ,   struct envunion1571  fun1603 ) {
    struct Maybe_85  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_85_Just_t ) {
        struct envunion1571  temp1572 = (  fun1603 );
        ( temp1572.fun ( &temp1572.env ,  ( dref1604 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1573 (   struct env1569* env ,    struct StrView_27  cp4839 ) {
    struct Pos_26  start4840 = ( (  min_dash_pos1565 ) ( ( (  pane397 ) ( ( env->ed4818 ) ) ) ) );
    struct Pos_26  end4841 = ( (  max_dash_pos1552 ) ( ( (  pane397 ) ( ( env->ed4818 ) ) ) ) );
    struct envunion1570  temp1574 = ( (struct envunion1570){ .fun = (  enum Unit_8  (*) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  ) )replace_dash_selection1484 , .env =  env->envinst234 } );
    struct Pos_26  temp1575 = (  end4841 );
    temp1575 .  f_bi = (  op_dash_add175 ( ( (  end4841 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( temp1574.fun ( &temp1574.env ,  ( (  pane397 ) ( ( env->ed4818 ) ) ) ,  ( ( Tuple2_251_Tuple2 ) ( (  start4840 ) ,  ( temp1575 ) ) ) ,  (  cp4839 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   expand1576 (    struct Pane_241 *  pane4558 ) {
    struct Pos_26  min_dash_pos4559 = ( (  min_dash_pos1565 ) ( (  pane4558 ) ) );
    struct Pos_26  max_dash_pos4560 = ( (  max_dash_pos1552 ) ( (  pane4558 ) ) );
    int32_t  max_dash_pos_dash_max4561 = ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( ( (  line297 ) ( ( ( * (  pane4558 ) ) .f_buf ) ,  ( (  max_dash_pos4560 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq700 ( ( (  min_dash_pos4559 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) && (  eq700 ( ( (  max_dash_pos4560 ) .f_bi ) , (  max_dash_pos_dash_max4561 ) ) ) ) ) ) {
        struct Pos_26  temp1577 = (  min_dash_pos4559 );
        temp1577 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4558 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1577 ) ) );
        struct Pos_26  temp1578 = (  max_dash_pos4560 );
        temp1578 .  f_bi = (  max_dash_pos_dash_max4561 );
        (*  pane4558 ) .f_cursor = ( temp1578 );
    } else {
        if ( (  cmp173 ( (  op_dash_add175 ( ( (  max_dash_pos4560 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines420 ) ( ( ( * (  pane4558 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_8_Unit );
        }
        struct Pos_26  temp1579 = (  min_dash_pos4559 );
        temp1579 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4558 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1579 ) ) );
        int32_t  next_dash_line4562 = (  op_dash_add175 ( ( (  max_dash_pos4560 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
        (*  pane4558 ) .f_cursor = ( (struct Pos_26) { .f_line = (  next_dash_line4562 ) , .f_bi = ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( ( (  line297 ) ( ( ( * (  pane4558 ) ) .f_buf ) ,  (  next_dash_line4562 ) ) ) ) ) ) ) } );
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_none1580 (    struct Maybe_34  m1574 ) {
    struct Maybe_34  dref1575 = (  m1574 );
    if ( dref1575.tag == Maybe_34_None_t ) {
        return ( true );
    }
    else {
        if ( dref1575.tag == Maybe_34_Just_t ) {
            return ( false );
        }
    }
}

struct Maybe_1582 {
    enum {
        Maybe_1582_None_t,
        Maybe_1582_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_251  field0;
        } Maybe_1582_Just_s;
    } stuff;
};

static struct Maybe_1582 Maybe_1582_Just (  struct Tuple2_251  field0 ) {
    return ( struct Maybe_1582 ) { .tag = Maybe_1582_Just_t, .stuff = { .Maybe_1582_Just_s = { .field0 = field0 } } };
};

struct env1584 {
    ;
    ;
    struct Pane_241 *  pane4667;
    ;
    ;
    struct StrView_27  query4671;
};

struct envunion1586 {
    struct Maybe_276  (*fun) (  struct env1584*  ,    struct Pos_26  );
    struct env1584 env;
};

static  struct Maybe_276   find_dash_slice1588 (    struct Slice_14  haystack2335 ,    struct Slice_14  needle2337 ) {
    struct RangeIter_169  temp1589 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( ( (  size_dash_i32311 ) ( ( (  haystack2335 ) .f_count ) ) ) , ( (  size_dash_i32311 ) ( ( (  needle2337 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond1590 =  next172 (&temp1589);
        if (  __cond1590 .tag == 0 ) {
            break;
        }
        int32_t  i2339 =  __cond1590 .stuff .Maybe_171_Just_s .field0;
        if ( (  eq624 ( ( (  subslice590 ) ( (  haystack2335 ) ,  ( (  i32_dash_size280 ) ( (  i2339 ) ) ) ,  (  op_dash_add356 ( ( (  i32_dash_size280 ) ( (  i2339 ) ) ) , ( (  needle2337 ) .f_count ) ) ) ) ) , (  needle2337 ) ) ) ) {
            return ( ( Maybe_276_Just ) ( ( (  i32_dash_size280 ) ( (  i2339 ) ) ) ) );
        }
    }
    return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
}

static  struct Maybe_276   search_dash_on_dash_line1587 (   struct env1584* env ,    struct Pos_26  pos4674 ) {
    return ( (  find_dash_slice1588 ) ( ( ( (  byte_dash_substr_dash_from588 ) ( ( (  line297 ) ( ( ( * ( env->pane4667 ) ) .f_buf ) ,  ( (  pos4674 ) .f_line ) ) ) ,  ( (  i32_dash_size280 ) ( ( (  pos4674 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4671 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1596 (    int32_t  l241 ,    int32_t  r243 ) {
    return ( (  l241 ) / (  r243 ) );
}

static  int32_t   op_dash_mul1597 (    int32_t  l236 ,    int32_t  r238 ) {
    return ( (  l236 ) * (  r238 ) );
}

static  int32_t   mod1595 (    int32_t  l1544 ,    int32_t  d1546 ) {
    int32_t  r1547 = (  op_dash_div1596 ( (  l1544 ) , (  d1546 ) ) );
    int32_t  m1548 = (  op_dash_sub180 ( (  l1544 ) , (  op_dash_mul1597 ( (  r1547 ) , (  d1546 ) ) ) ) );
    if ( (  cmp173 ( (  m1548 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add175 ( (  d1546 ) , (  m1548 ) ) );
    } else {
        return (  m1548 );
    }
}

struct envunion1599 {
    struct Maybe_276  (*fun) (  struct env1584*  ,    struct Pos_26  );
    struct env1584 env;
};

static  struct Maybe_1582   search_dash_from1583 (    struct Pane_241 *  pane4667 ,    struct Pos_26  pos4669 ,    struct StrView_27  query4671 ) {
    struct env1584 envinst1584 = {
        .pane4667 =  pane4667 ,
        .query4671 =  query4671 ,
    };
    struct envunion1586  temp1585 = ( (struct envunion1586){ .fun = (  struct Maybe_276  (*) (  struct env1584*  ,    struct Pos_26  ) )search_dash_on_dash_line1587 , .env =  envinst1584 } );
    struct Maybe_276  dref4675 = ( temp1585.fun ( &temp1585.env ,  (  pos4669 ) ) );
    if ( dref4675.tag == Maybe_276_Just_t ) {
        struct Pos_26  temp1591 = (  pos4669 );
        temp1591 .  f_bi = (  op_dash_add175 ( ( (  pos4669 ) .f_bi ) , ( (  size_dash_i32311 ) ( ( dref4675 .stuff .Maybe_276_Just_s .field0 ) ) ) ) );
        struct Pos_26  sel_dash_pos4677 = ( temp1591 );
        struct Pos_26  temp1592 = (  pos4669 );
        temp1592 .  f_bi = (  op_dash_sub180 ( (  op_dash_add175 ( ( (  pos4669 ) .f_bi ) , ( (  size_dash_i32311 ) ( (  op_dash_add356 ( ( dref4675 .stuff .Maybe_276_Just_s .field0 ) , ( (  num_dash_bytes396 ) ( (  query4671 ) ) ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4678 = ( temp1592 );
        return ( ( Maybe_1582_Just ) ( ( ( Tuple2_251_Tuple2 ) ( (  sel_dash_pos4677 ) ,  (  cur_dash_pos4678 ) ) ) ) );
    }
    else {
        if ( dref4675.tag == Maybe_276_None_t ) {
            int32_t  num_dash_lines4679 = ( (  num_dash_lines420 ) ( ( ( * (  pane4667 ) ) .f_buf ) ) );
            struct RangeIter_169  temp1593 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4679 ) ) ) );
            while (true) {
                struct Maybe_171  __cond1594 =  next172 (&temp1593);
                if (  __cond1594 .tag == 0 ) {
                    break;
                }
                int32_t  i4681 =  __cond1594 .stuff .Maybe_171_Just_s .field0;
                int32_t  line4682 = ( (  mod1595 ) ( (  op_dash_add175 ( ( (  pos4669 ) .f_line ) , (  i4681 ) ) ) ,  (  num_dash_lines4679 ) ) );
                struct envunion1599  temp1598 = ( (struct envunion1599){ .fun = (  struct Maybe_276  (*) (  struct env1584*  ,    struct Pos_26  ) )search_dash_on_dash_line1587 , .env =  envinst1584 } );
                struct Maybe_276  dref4683 = ( temp1598.fun ( &temp1598.env ,  ( (struct Pos_26) { .f_line = (  line4682 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) );
                if ( dref4683.tag == Maybe_276_Just_t ) {
                    struct Pos_26  sel_dash_pos4685 = ( (struct Pos_26) { .f_line = (  line4682 ) , .f_bi = ( (  size_dash_i32311 ) ( ( dref4683 .stuff .Maybe_276_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4686 = ( (struct Pos_26) { .f_line = (  line4682 ) , .f_bi = (  op_dash_sub180 ( ( (  size_dash_i32311 ) ( (  op_dash_add356 ( ( dref4683 .stuff .Maybe_276_Just_s .field0 ) , ( (  num_dash_bytes396 ) ( (  query4671 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1582_Just ) ( ( ( Tuple2_251_Tuple2 ) ( (  sel_dash_pos4685 ) ,  (  cur_dash_pos4686 ) ) ) ) );
                }
                else {
                    if ( dref4683.tag == Maybe_276_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1582) { .tag = Maybe_1582_None_t } );
        }
    }
}

static  enum Unit_8   next_dash_match1581 (    struct Editor_267 *  ed4783 ) {
    struct Maybe_85  dref4784 = ( ( * (  ed4783 ) ) .f_search_dash_term );
    if ( dref4784.tag == Maybe_85_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4784.tag == Maybe_85_Just_t ) {
            struct Maybe_1582  dref4786 = ( (  search_dash_from1583 ) ( ( (  pane397 ) ( (  ed4783 ) ) ) ,  ( (  max_dash_pos1552 ) ( ( (  pane397 ) ( (  ed4783 ) ) ) ) ) ,  ( dref4784 .stuff .Maybe_85_Just_s .field0 ) ) );
            if ( dref4786.tag == Maybe_1582_None_t ) {
            }
            else {
                if ( dref4786.tag == Maybe_1582_Just_t ) {
                    ( (  set_dash_cursors287 ) ( ( (  pane397 ) ( (  ed4783 ) ) ) ,  ( dref4786 .stuff .Maybe_1582_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4786 .stuff .Maybe_1582_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_288_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

struct DownToRange_1605 {
    int32_t  f_from;
    int32_t  f_to;
};

struct DownToIter_1604 {
    struct DownToRange_1605  f_dtrange;
    int32_t  f_i;
};

static  struct DownToIter_1604   into_dash_iter1606 (    struct DownToRange_1605  self925 ) {
    return ( (struct DownToIter_1604) { .f_dtrange = (  self925 ) , .f_i = ( (  self925 ) .f_from ) } );
}

static  struct DownToRange_1605   down_dash_to1607 (    int32_t  from920 ,    int32_t  to922 ) {
    return ( (struct DownToRange_1605) { .f_from = (  from920 ) , .f_to = (  to922 ) } );
}

static  struct Maybe_171   next1609 (    struct DownToIter_1604 *  self931 ) {
    if ( (  cmp173 ( ( ( * (  self931 ) ) .f_i ) , ( ( ( * (  self931 ) ) .f_dtrange ) .f_to ) ) == 0 ) ) {
        return ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
    }
    struct Maybe_171  x932 = ( ( Maybe_171_Just ) ( ( ( * (  self931 ) ) .f_i ) ) );
    (*  self931 ) .f_i = (  op_dash_sub180 ( ( ( * (  self931 ) ) .f_i ) , (  from_dash_integral56 ( 1 ) ) ) );
    return (  x932 );
}

static  struct Maybe_276   find_dash_last_dash_occurence_dash_of_dash_slice1602 (    struct Slice_14  haystack2342 ,    struct Slice_14  needle2344 ) {
    struct DownToIter_1604  temp1603 =  into_dash_iter1606 ( ( (  down_dash_to1607 ) ( (  op_dash_sub180 ( ( (  size_dash_i32311 ) ( ( (  haystack2342 ) .f_count ) ) ) , ( (  size_dash_i32311 ) ( ( (  needle2344 ) .f_count ) ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond1608 =  next1609 (&temp1603);
        if (  __cond1608 .tag == 0 ) {
            break;
        }
        int32_t  i2346 =  __cond1608 .stuff .Maybe_171_Just_s .field0;
        if ( (  eq624 ( ( (  subslice590 ) ( (  haystack2342 ) ,  ( (  i32_dash_size280 ) ( (  i2346 ) ) ) ,  (  op_dash_add356 ( ( (  i32_dash_size280 ) ( (  i2346 ) ) ) , ( (  needle2344 ) .f_count ) ) ) ) ) , (  needle2344 ) ) ) ) {
            return ( ( Maybe_276_Just ) ( ( (  i32_dash_size280 ) ( (  i2346 ) ) ) ) );
        }
    }
    return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
}

static  struct Maybe_1582   search_dash_back1601 (    struct Pane_241 *  pane4689 ,    struct Pos_26  pos4691 ,    struct StrView_27  query4693 ) {
    struct Maybe_276  dref4694 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1602 ) ( ( ( (  byte_dash_substr600 ) ( ( (  line297 ) ( ( ( * (  pane4689 ) ) .f_buf ) ,  ( (  pos4691 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size280 ) ( ( (  pos4691 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4693 ) .f_contents ) ) );
    if ( dref4694.tag == Maybe_276_Just_t ) {
        struct Pos_26  temp1610 = (  pos4691 );
        temp1610 .  f_bi = ( (  size_dash_i32311 ) ( ( dref4694 .stuff .Maybe_276_Just_s .field0 ) ) );
        struct Pos_26  sel_dash_pos4696 = ( temp1610 );
        struct Pos_26  temp1611 = (  pos4691 );
        temp1611 .  f_bi = (  op_dash_sub180 ( ( (  size_dash_i32311 ) ( (  op_dash_add356 ( ( dref4694 .stuff .Maybe_276_Just_s .field0 ) , ( (  num_dash_bytes396 ) ( (  query4693 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4697 = ( temp1611 );
        return ( ( Maybe_1582_Just ) ( ( ( Tuple2_251_Tuple2 ) ( (  sel_dash_pos4696 ) ,  (  cur_dash_pos4697 ) ) ) ) );
    }
    else {
        if ( dref4694.tag == Maybe_276_None_t ) {
            int32_t  num_dash_lines4698 = ( (  num_dash_lines420 ) ( ( ( * (  pane4689 ) ) .f_buf ) ) );
            struct RangeIter_169  temp1612 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4698 ) ) ) );
            while (true) {
                struct Maybe_171  __cond1613 =  next172 (&temp1612);
                if (  __cond1613 .tag == 0 ) {
                    break;
                }
                int32_t  i4700 =  __cond1613 .stuff .Maybe_171_Just_s .field0;
                int32_t  line4701 = ( (  mod1595 ) ( (  op_dash_sub180 ( ( (  pos4691 ) .f_line ) , (  i4700 ) ) ) ,  (  num_dash_lines4698 ) ) );
                struct Maybe_276  dref4702 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1602 ) ( ( ( (  line297 ) ( ( ( * (  pane4689 ) ) .f_buf ) ,  (  line4701 ) ) ) .f_contents ) ,  ( (  query4693 ) .f_contents ) ) );
                if ( dref4702.tag == Maybe_276_Just_t ) {
                    struct Pos_26  sel_dash_pos4704 = ( (struct Pos_26) { .f_line = (  line4701 ) , .f_bi = ( (  size_dash_i32311 ) ( ( dref4702 .stuff .Maybe_276_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4705 = ( (struct Pos_26) { .f_line = (  line4701 ) , .f_bi = (  op_dash_sub180 ( ( (  size_dash_i32311 ) ( (  op_dash_add356 ( ( dref4702 .stuff .Maybe_276_Just_s .field0 ) , ( (  num_dash_bytes396 ) ( (  query4693 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1582_Just ) ( ( ( Tuple2_251_Tuple2 ) ( (  sel_dash_pos4704 ) ,  (  cur_dash_pos4705 ) ) ) ) );
                }
                else {
                    if ( dref4702.tag == Maybe_276_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1582) { .tag = Maybe_1582_None_t } );
        }
    }
}

static  enum Unit_8   prev_dash_match1600 (    struct Editor_267 *  ed4791 ) {
    struct Maybe_85  dref4792 = ( ( * (  ed4791 ) ) .f_search_dash_term );
    if ( dref4792.tag == Maybe_85_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4792.tag == Maybe_85_Just_t ) {
            struct Maybe_1582  dref4794 = ( (  search_dash_back1601 ) ( ( (  pane397 ) ( (  ed4791 ) ) ) ,  ( (  min_dash_pos1565 ) ( ( (  pane397 ) ( (  ed4791 ) ) ) ) ) ,  ( dref4792 .stuff .Maybe_85_Just_s .field0 ) ) );
            if ( dref4794.tag == Maybe_1582_None_t ) {
            }
            else {
                if ( dref4794.tag == Maybe_1582_Just_t ) {
                    ( (  set_dash_cursors287 ) ( ( (  pane397 ) ( (  ed4791 ) ) ) ,  ( dref4794 .stuff .Maybe_1582_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4794 .stuff .Maybe_1582_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_288_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   begin_dash_changeset1617 (   struct env145* env ,    struct TextBuf_117 *  self4231 ,    struct Cursors_33  before_dash_cursors4233 ) {
    struct Actions_118 *  actions4234 = ( & ( ( * (  self4231 ) ) .f_actions ) );
    ( (  trim_dash_actions1244 ) ( (  actions4234 ) ) );
    ( (  flush_dash_insert_dash_action1239 ) ( (  self4231 ) ) );
    ( (  assert805 ) ( (  eq1309 ( ( ( ( * (  self4231 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_119_NoChangeset ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"expect no changeset bruh" ) ,  ( 24 ) ) ) ) );
    enum CAllocator_10  al4235 = ( ( * (  self4231 ) ) .f_al );
    struct Changeset_32  temp1618 = ( (struct Changeset_32) { .f_parts = ( (  mk1338 ) ( (  al4235 ) ) ) , .f_before_dash_cursors = (  before_dash_cursors4233 ) } );
    struct Changeset_32 *  changeset4236 = ( &temp1618 );
    struct envunion146  temp1619 = ( (struct envunion146){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1349 , .env =  env->envinst28 } );
    ( temp1619.fun ( &temp1619.env ,  ( & ( ( * (  actions4234 ) ) .f_list ) ) ,  ( * (  changeset4236 ) ) ) );
    (*  actions4234 ) .f_input_dash_changeset = ( ChangesetInputType_119_CustomChangeset );
    (*  actions4234 ) .f_cur = (  op_dash_add356 ( ( ( * (  actions4234 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_1270   head1625 (    struct List_23  it1167 ) {
    struct SliceIter_1263  temp1626 = ( (  into_dash_iter1265 ) ( (  it1167 ) ) );
    return ( (  next1271 ) ( ( &temp1626 ) ) );
}

static  bool   null1624 (    struct List_23  it1176 ) {
    struct Maybe_1270  dref1177 = ( (  head1625 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_1270_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   end_dash_changeset1623 (    struct TextBuf_117 *  self4239 ) {
    ( (  flush_dash_insert_dash_action1239 ) ( (  self4239 ) ) );
    struct Actions_118 *  actions4240 = ( & ( ( * (  self4239 ) ) .f_actions ) );
    if ( ( (  null1624 ) ( ( ( * ( (  last_dash_ptr1311 ) ( ( (  to_dash_slice1313 ) ( ( ( * (  actions4240 ) ) .f_list ) ) ) ) ) ) .f_parts ) ) ) ) {
        (*  actions4240 ) .f_cur = (  op_dash_sub462 ( ( ( * (  actions4240 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
        (*  actions4240 ) .f_input_dash_changeset = ( ChangesetInputType_119_NoChangeset );
        ( (  trim_dash_actions1244 ) ( (  actions4240 ) ) );
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_34   fmap_dash_maybe1628 (    struct Maybe_34  x1585 ,    struct Pos_26 (*  fun1587 )(    struct Pos_26  ) ) {
    struct Maybe_34  dref1588 = (  x1585 );
    if ( dref1588.tag == Maybe_34_None_t ) {
        return ( (struct Maybe_34) { .tag = Maybe_34_None_t } );
    }
    else {
        if ( dref1588.tag == Maybe_34_Just_t ) {
            return ( ( Maybe_34_Just ) ( ( (  fun1587 ) ( ( dref1588 .stuff .Maybe_34_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_26   lam1629 (    struct Pos_26  sel4634 ) {
    struct Pos_26  temp1630 = (  sel4634 );
    temp1630 .  f_bi = (  op_dash_add175 ( ( (  sel4634 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( temp1630 );
}

static  enum Unit_8   indent_dash_selection1615 (   struct env238* env ,    struct Pane_241 *  self4630 ) {
    struct envunion239  temp1616 = ( (struct envunion239){ .fun = (  enum Unit_8  (*) (  struct env145*  ,    struct TextBuf_117 *  ,    struct Cursors_33  ) )begin_dash_changeset1617 , .env =  env->envinst145 } );
    ( temp1616.fun ( &temp1616.env ,  ( ( * (  self4630 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4630 ) ) .f_cursor ) , .f_sel = ( ( * (  self4630 ) ) .f_sel ) } ) ) );
    struct RangeIter_169  temp1620 =  into_dash_iter170 ( ( (  to179 ) ( ( ( (  min_dash_pos1565 ) ( (  self4630 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1552 ) ( (  self4630 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_171  __cond1621 =  next172 (&temp1620);
        if (  __cond1621 .tag == 0 ) {
            break;
        }
        int32_t  line4632 =  __cond1621 .stuff .Maybe_171_Just_s .field0;
        struct envunion240  temp1622 = ( (struct envunion240){ .fun = (  enum Unit_8  (*) (  struct env236*  ,    struct Pane_241 *  ,    int32_t  ) )indent_dash_at1380 , .env =  env->envinst236 } );
        ( temp1622.fun ( &temp1622.env ,  (  self4630 ) ,  (  line4632 ) ) );
    }
    ( (  end_dash_changeset1623 ) ( ( ( * (  self4630 ) ) .f_buf ) ) );
    struct Pos_26  temp1627 = ( ( * (  self4630 ) ) .f_cursor );
    temp1627 .  f_bi = (  op_dash_add175 ( ( ( ( * (  self4630 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( (  set_dash_cursors287 ) ( (  self4630 ) ,  ( temp1627 ) ,  ( (  fmap_dash_maybe1628 ) ( ( ( * (  self4630 ) ) .f_sel ) ,  (  lam1629 ) ) ) ,  ( CursorMovement_288_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

struct env1641 {
    ;
    bool  last_dash_char_dash_was_dash_tab4639;
    ;
};

struct envunion1642 {
    struct Pos_26  (*fun) (  struct env1641*  ,    struct Pos_26  );
    struct env1641 env;
};

static  struct Maybe_34   fmap_dash_maybe1640 (    struct Maybe_34  x1585 ,   struct envunion1642  fun1587 ) {
    struct Maybe_34  dref1588 = (  x1585 );
    if ( dref1588.tag == Maybe_34_None_t ) {
        return ( (struct Maybe_34) { .tag = Maybe_34_None_t } );
    }
    else {
        if ( dref1588.tag == Maybe_34_Just_t ) {
            struct envunion1642  temp1643 = (  fun1587 );
            return ( ( Maybe_34_Just ) ( ( temp1643.fun ( &temp1643.env ,  ( dref1588 .stuff .Maybe_34_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_26   lam1644 (   struct env1641* env ,    struct Pos_26  sel4643 ) {
    struct Pos_26  temp1645 = (  sel4643 );
    temp1645 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4639 ) ? (  op_dash_sub180 ( ( (  sel4643 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( (  sel4643 ) .f_bi ) );
    return ( temp1645 );
}

static  enum Unit_8   dedent_dash_selection1632 (   struct env244* env ,    struct Pane_241 *  self4637 ) {
    struct envunion246  temp1633 = ( (struct envunion246){ .fun = (  enum Unit_8  (*) (  struct env145*  ,    struct TextBuf_117 *  ,    struct Cursors_33  ) )begin_dash_changeset1617 , .env =  env->envinst145 } );
    ( temp1633.fun ( &temp1633.env ,  ( ( * (  self4637 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4637 ) ) .f_cursor ) , .f_sel = ( ( * (  self4637 ) ) .f_sel ) } ) ) );
    struct Pos_26  temp1634 = ( (  min_dash_pos1565 ) ( (  self4637 ) ) );
    temp1634 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4638 = (  eq360 ( ( (  char_dash_at1407 ) ( (  self4637 ) ,  ( temp1634 ) ) ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_26  temp1635 = ( (  max_dash_pos1552 ) ( (  self4637 ) ) );
    temp1635 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4639 = (  eq360 ( ( (  char_dash_at1407 ) ( (  self4637 ) ,  ( temp1635 ) ) ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_169  temp1636 =  into_dash_iter170 ( ( (  to179 ) ( ( ( (  min_dash_pos1565 ) ( (  self4637 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1552 ) ( (  self4637 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_171  __cond1637 =  next172 (&temp1636);
        if (  __cond1637 .tag == 0 ) {
            break;
        }
        int32_t  line4641 =  __cond1637 .stuff .Maybe_171_Just_s .field0;
        if ( (  eq360 ( ( (  char_dash_at1407 ) ( (  self4637 ) ,  ( (struct Pos_26) { .f_line = (  line4641 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion245  temp1638 = ( (struct envunion245){ .fun = (  struct Maybe_227  (*) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_227  ) )change1243 , .env =  env->envinst140 } );
            ( temp1638.fun ( &temp1638.env ,  ( ( * (  self4637 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4641 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4641 ) , .f_bi = (  from_dash_integral56 ( 1 ) ) } ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_227) { .tag = Maybe_227_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1623 ) ( ( ( * (  self4637 ) ) .f_buf ) ) );
    struct Pos_26  temp1639 = ( ( * (  self4637 ) ) .f_cursor );
    temp1639 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4638 ) ? (  op_dash_sub180 ( ( ( ( * (  self4637 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( ( ( * (  self4637 ) ) .f_cursor ) .f_bi ) );
    struct env1641 envinst1641 = {
        .last_dash_char_dash_was_dash_tab4639 =  last_dash_char_dash_was_dash_tab4639 ,
    };
    ( (  set_dash_cursors287 ) ( (  self4637 ) ,  ( temp1639 ) ,  ( (  fmap_dash_maybe1640 ) ( ( ( * (  self4637 ) ) .f_sel ) ,  ( (struct envunion1642){ .fun = (  struct Pos_26  (*) (  struct env1641*  ,    struct Pos_26  ) )lam1644 , .env =  envinst1641 } ) ) ) ,  ( CursorMovement_288_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   enmenue1646 (    struct Editor_267 *  ed4799 ,    struct Menu_269  menu4801 ) {
    (*  ed4799 ) .f_mode = ( ( EditorMode_268_Menu ) ( (  menu4801 ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   undefined1650 (  ) {
    int32_t  temp1651;
    return (  temp1651 );
}

static  int32_t   or_dash_fail1649 (    struct Maybe_171  x1353 ,    struct StrView_27  errmsg1355 ) {
    struct Maybe_171  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_171_None_t ) {
        ( (  panic853 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1650 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_171_Just_t ) {
            return ( dref1356 .stuff .Maybe_171_Just_s .field0 );
        }
    }
}

struct env1654 {
    ;
    struct Pane_241 *  self4652;
};

struct envunion1655 {
    int32_t  (*fun) (  struct env1654*  ,    int32_t  );
    struct env1654 env;
};

struct Map_1653 {
    struct RangeIter_169  field0;
    struct envunion1655  field1;
};

static struct Map_1653 Map_1653_Map (  struct RangeIter_169  field0 , struct envunion1655  field1 ) {
    return ( struct Map_1653 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1653   into_dash_iter1657 (    struct Map_1653  self804 ) {
    return (  self804 );
}

static  struct Maybe_171   next1658 (    struct Map_1653 *  dref806 ) {
    struct Maybe_171  dref809 = ( (  next172 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_171_None_t ) {
        return ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_171_Just_t ) {
            struct envunion1655  temp1659 = ( (* dref806 ) .field1 );
            return ( ( Maybe_171_Just ) ( ( temp1659.fun ( &temp1659.env ,  ( dref809 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_171   reduce1656 (    struct Map_1653  iterable1118 ,    struct Maybe_171  base1120 ,    struct Maybe_171 (*  fun1122 )(    int32_t  ,    struct Maybe_171  ) ) {
    struct Maybe_171  x1123 = (  base1120 );
    struct Map_1653  it1124 = ( (  into_dash_iter1657 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next1658 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1660 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1660);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_171  temp1661;
    return (  temp1661 );
}

struct env1664 {
    int32_t  x1553;
    ;
};

struct envunion1665 {
    struct Maybe_171  (*fun) (  struct env1664*  ,    int32_t  );
    struct env1664 env;
};

static  struct Maybe_171   maybe1663 (    struct Maybe_171  x1592 ,   struct envunion1665  fun1594 ,    struct Maybe_171  default1596 ) {
    struct envunion1665  temp1666 = (  fun1594 );
    return ( {  struct Maybe_171  dref1597 = (  x1592 ) ; dref1597.tag == Maybe_171_Just_t ? ( temp1666.fun ( &temp1666.env ,  ( dref1597 .stuff .Maybe_171_Just_s .field0 ) ) ) : (  default1596 ) ; } );
}

static  struct Maybe_171   lam1667 (   struct env1664* env ,    int32_t  lm1622 ) {
    return ( ( Maybe_171_Just ) ( ( (  min796 ) ( (  lm1622 ) ,  ( env->x1553 ) ) ) ) );
}

static  struct Maybe_171   lam1662 (    int32_t  x1553 ,    struct Maybe_171  last_dash_min1555 ) {
    struct env1664 envinst1664 = {
        .x1553 =  x1553 ,
    };
    return ( (  maybe1663 ) ( (  last_dash_min1555 ) ,  ( (struct envunion1665){ .fun = (  struct Maybe_171  (*) (  struct env1664*  ,    int32_t  ) )lam1667 , .env =  envinst1664 } ) ,  ( ( Maybe_171_Just ) ( (  x1553 ) ) ) ) );
}

static  struct Maybe_171   minimum1652 (    struct Map_1653  it1551 ) {
    return ( (  reduce1656 ) ( (  it1551 ) ,  ( (struct Maybe_171) { .tag = Maybe_171_None_t } ) ,  (  lam1662 ) ) );
}

static  struct Map_1653   map1668 (    struct Range_166  iterable813 ,   struct envunion1655  fun815 ) {
    struct RangeIter_169  it816 = ( (  into_dash_iter170 ) ( (  iterable813 ) ) );
    return ( ( Map_1653_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  int32_t   lam1669 (   struct env1654* env ,    int32_t  ln4656 ) {
    return ( (  indent_dash_at_dash_line400 ) ( ( env->self4652 ) ,  (  ln4656 ) ) );
}

struct env1671 {
    ;
    struct Pane_241 *  self4652;
    ;
};

struct envunion1672 {
    bool  (*fun) (  struct env1671*  ,    int32_t  );
    struct env1671 env;
};

struct env1674 {
    struct envunion1672  fun1151;
};

struct envunion1675 {
    bool  (*fun) (  struct env1674*  ,    int32_t  ,    bool  );
    struct env1674 env;
};

static  bool   reduce1673 (    struct Range_166  iterable1118 ,    bool  base1120 ,   struct envunion1675  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct RangeIter_169  it1124 = ( (  into_dash_iter170 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next172 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                struct envunion1675  temp1676 = (  fun1122 );
                x1123 = ( temp1676.fun ( &temp1676.env ,  ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1677 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1677);
    abort ( );
    ( Unit_8_Unit );
    bool  temp1678;
    return (  temp1678 );
}

static  bool   lam1679 (   struct env1674* env ,    int32_t  e1153 ,    bool  x1155 ) {
    struct envunion1672  temp1680 = ( env->fun1151 );
    return ( ( temp1680.fun ( &temp1680.env ,  (  e1153 ) ) ) && (  x1155 ) );
}

static  bool   all1670 (    struct Range_166  it1149 ,   struct envunion1672  fun1151 ) {
    struct env1674 envinst1674 = {
        .fun1151 =  fun1151 ,
    };
    return ( (  reduce1673 ) ( (  it1149 ) ,  ( true ) ,  ( (struct envunion1675){ .fun = (  bool  (*) (  struct env1674*  ,    int32_t  ,    bool  ) )lam1679 , .env =  envinst1674 } ) ) );
}

static  bool   is_dash_just1682 (    struct Maybe_1582  m1570 ) {
    struct Maybe_1582  dref1571 = (  m1570 );
    if ( dref1571.tag == Maybe_1582_None_t ) {
        return ( false );
    }
    else {
        if ( dref1571.tag == Maybe_1582_Just_t ) {
            return ( true );
        }
    }
}

static  bool   lam1684 (    struct Char_65  c4583 ) {
    return ( ( !  eq360 ( (  c4583 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) && ( (  is_dash_whitespace415 ) ( (  c4583 ) ) ) );
}

static  struct Maybe_1582   line_dash_begins_dash_with_dash_comment1683 (    struct Pane_241 *  self4577 ,    int32_t  line4579 ) {
    int32_t  indent4580 = ( (  indent_dash_at_dash_line400 ) ( (  self4577 ) ,  (  line4579 ) ) );
    if ( (  eq360 ( ( (  char_dash_at1407 ) ( (  self4577 ) ,  ( (  mk832 ) ( (  line4579 ) ,  (  indent4580 ) ) ) ) ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
        int32_t  i4581 = (  op_dash_add175 ( (  indent4580 ) , (  from_dash_integral56 ( 1 ) ) ) );
        while ( ( (  lam1684 ) ( ( (  char_dash_at1407 ) ( (  self4577 ) ,  ( (  mk832 ) ( (  line4579 ) ,  (  i4581 ) ) ) ) ) ) ) ) {
            i4581 = (  op_dash_add175 ( (  i4581 ) , (  from_dash_integral56 ( 1 ) ) ) );
        }
        return ( ( Maybe_1582_Just ) ( ( ( Tuple2_251_Tuple2 ) ( ( (  mk832 ) ( (  line4579 ) ,  (  indent4580 ) ) ) ,  ( (  mk832 ) ( (  line4579 ) ,  (  i4581 ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_1582) { .tag = Maybe_1582_None_t } );
    }
}

static  bool   lam1681 (   struct env1671* env ,    int32_t  ln4659 ) {
    return ( (  is_dash_just1682 ) ( ( (  line_dash_begins_dash_with_dash_comment1683 ) ( ( env->self4652 ) ,  (  ln4659 ) ) ) ) );
}

static  struct Tuple2_251   undefined1690 (  ) {
    struct Tuple2_251  temp1691;
    return (  temp1691 );
}

static  struct Tuple2_251   or_dash_fail1689 (    struct Maybe_1582  x1353 ,    struct StrView_27  errmsg1355 ) {
    struct Maybe_1582  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_1582_None_t ) {
        ( (  panic853 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1690 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_1582_Just_t ) {
            return ( dref1356 .stuff .Maybe_1582_Just_s .field0 );
        }
    }
}

static  enum Unit_8   toggle_dash_comment1648 (   struct env249* env ,    struct Pane_241 *  self4652 ) {
    int32_t  from_dash_line4653 = ( ( (  min_dash_pos1565 ) ( (  self4652 ) ) ) .f_line );
    int32_t  to_dash_line4654 = ( ( (  max_dash_pos1552 ) ( (  self4652 ) ) ) .f_line );
    struct env1654 envinst1654 = {
        .self4652 =  self4652 ,
    };
    int32_t  min_dash_indent4657 = ( (  or_dash_fail1649 ) ( ( (  minimum1652 ) ( ( (  map1668 ) ( ( (  to179 ) ( (  from_dash_line4653 ) ,  (  to_dash_line4654 ) ) ) ,  ( (struct envunion1655){ .fun = (  int32_t  (*) (  struct env1654*  ,    int32_t  ) )lam1669 , .env =  envinst1654 } ) ) ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"no lines what??" ) ,  ( 15 ) ) ) ) );
    struct env1671 envinst1671 = {
        .self4652 =  self4652 ,
    };
    bool  all_dash_have_dash_comment4660 = ( (  all1670 ) ( ( (  to179 ) ( (  from_dash_line4653 ) ,  (  to_dash_line4654 ) ) ) ,  ( (struct envunion1672){ .fun = (  bool  (*) (  struct env1671*  ,    int32_t  ) )lam1681 , .env =  envinst1671 } ) ) );
    struct envunion252  temp1685 = ( (struct envunion252){ .fun = (  enum Unit_8  (*) (  struct env145*  ,    struct TextBuf_117 *  ,    struct Cursors_33  ) )begin_dash_changeset1617 , .env =  env->envinst145 } );
    ( temp1685.fun ( &temp1685.env ,  ( ( * (  self4652 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4652 ) ) .f_cursor ) , .f_sel = ( ( * (  self4652 ) ) .f_sel ) } ) ) );
    struct RangeIter_169  temp1686 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_line4653 ) ,  (  to_dash_line4654 ) ) ) );
    while (true) {
        struct Maybe_171  __cond1687 =  next172 (&temp1686);
        if (  __cond1687 .tag == 0 ) {
            break;
        }
        int32_t  line4662 =  __cond1687 .stuff .Maybe_171_Just_s .field0;
        struct Char_65  comment_dash_str4663 = ( (  from_dash_charlike338 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) );
        if ( ( ! (  all_dash_have_dash_comment4660 ) ) ) {
            ( (  set_dash_cursors287 ) ( (  self4652 ) ,  ( (  mk832 ) ( (  line4662 ) ,  (  min_dash_indent4657 ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_NoChanges ) ) );
            struct envunion253  temp1688 = ( (struct envunion253){ .fun = (  enum Unit_8  (*) (  struct env225*  ,    struct Pane_241 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1241 , .env =  env->envinst225 } );
            ( temp1688.fun ( &temp1688.env ,  (  self4652 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"# " ) ,  ( 2 ) ) ) ) );
        } else {
            struct Tuple2_251  comment_dash_pos4664 = ( (  or_dash_fail1689 ) ( ( (  line_dash_begins_dash_with_dash_comment1683 ) ( (  self4652 ) ,  (  line4662 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"(Pane.toggle-comment) impossiburu" ) ,  ( 33 ) ) ) ) );
            struct envunion250  temp1692 = ( (struct envunion250){ .fun = (  enum Unit_8  (*) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  ) )replace_dash_selection1484 , .env =  env->envinst234 } );
            ( temp1692.fun ( &temp1692.env ,  (  self4652 ) ,  (  comment_dash_pos4664 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
        }
    }
    ( (  end_dash_changeset1623 ) ( ( ( * (  self4652 ) ) .f_buf ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   handle_dash_normal_dash_key1225 (   struct env428* env ,    struct Editor_267 *  ed4818 ,    struct Key_446  key4820 ) {
    struct Key_446  dref4821 = (  key4820 );
    if ( dref4821.tag == Key_446_Char_t ) {
        if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4818 ) .f_running = ( false );
        } else {
            if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left1226 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ) );
            } else {
                if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right1231 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ) );
                } else {
                    if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down1233 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                    } else {
                        if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up1237 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                        } else {
                            if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode1238 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ,  ( Mode_242_Insert ) ) );
                            } else {
                                if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"I" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  move_dash_to_dash_beginning_dash_indented399 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ) );
                                    ( (  set_dash_mode1238 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ,  ( Mode_242_Insert ) ) );
                                } else {
                                    if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  move_dash_to_dash_end286 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ) );
                                        ( (  set_dash_mode1238 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ,  ( Mode_242_Insert ) ) );
                                    } else {
                                        if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                                            struct Pane_241 *  pane4823 = ( (  pane397 ) ( (  ed4818 ) ) );
                                            int32_t  indent4824 = ( (  indent_dash_at_dash_line400 ) ( (  pane4823 ) ,  ( ( ( * (  pane4823 ) ) .f_cursor ) .f_line ) ) );
                                            ( (  move_dash_to_dash_end286 ) ( (  pane4823 ) ) );
                                            struct envunion432  temp1240 = ( (struct envunion432){ .fun = (  enum Unit_8  (*) (  struct env225*  ,    struct Pane_241 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1241 , .env =  env->envinst225 } );
                                            ( temp1240.fun ( &temp1240.env ,  (  pane4823 ) ,  ( (  from_dash_charlike646 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                                            ( (  move_dash_right1231 ) ( (  pane4823 ) ) );
                                            struct envunion437  temp1375 = ( (struct envunion437){ .fun = (  enum Unit_8  (*) (  struct env247*  ,    struct Pane_241 *  ,    int32_t  ) )indent_dash_at_dash_current1376 , .env =  env->envinst247 } );
                                            ( temp1375.fun ( &temp1375.env ,  (  pane4823 ) ,  (  indent4824 ) ) );
                                            ( (  set_dash_mode1238 ) ( (  pane4823 ) ,  ( Mode_242_Insert ) ) );
                                        } else {
                                            if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"O" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct Pane_241 *  pane4825 = ( (  pane397 ) ( (  ed4818 ) ) );
                                                int32_t  indent4826 = ( (  indent_dash_at_dash_line400 ) ( (  pane4825 ) ,  ( ( ( * (  pane4825 ) ) .f_cursor ) .f_line ) ) );
                                                ( (  move_dash_to_dash_beginning1382 ) ( (  pane4825 ) ) );
                                                struct envunion1385  temp1384 = ( (struct envunion1385){ .fun = (  enum Unit_8  (*) (  struct env225*  ,    struct Pane_241 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1241 , .env =  env->envinst225 } );
                                                ( temp1384.fun ( &temp1384.env ,  (  pane4825 ) ,  ( (  from_dash_charlike646 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                                                struct envunion1387  temp1386 = ( (struct envunion1387){ .fun = (  enum Unit_8  (*) (  struct env247*  ,    struct Pane_241 *  ,    int32_t  ) )indent_dash_at_dash_current1376 , .env =  env->envinst247 } );
                                                ( temp1386.fun ( &temp1386.env ,  (  pane4825 ) ,  (  indent4826 ) ) );
                                                ( (  set_dash_mode1238 ) ( (  pane4825 ) ,  ( Mode_242_Insert ) ) );
                                            } else {
                                                if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  advance_dash_word1388 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ,  ( MoveDirection_1389_MoveFwd ) ,  ( MoveTarget_1390_NextWordStart ) ) );
                                                } else {
                                                    if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"e" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  advance_dash_word1388 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ,  ( MoveDirection_1389_MoveFwd ) ,  ( MoveTarget_1390_NextWordEnd ) ) );
                                                    } else {
                                                        if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  advance_dash_word1388 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ,  ( MoveDirection_1389_MoveBwd ) ,  ( MoveTarget_1390_NextWordEnd ) ) );
                                                        } else {
                                                            if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"U" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion436  temp1427 = ( (struct envunion436){ .fun = (  enum Unit_8  (*) (  struct env232*  ,    struct Pane_241 *  ) )redo1428 , .env =  env->envinst232 } );
                                                                ( temp1427.fun ( &temp1427.env ,  ( (  pane397 ) ( (  ed4818 ) ) ) ) );
                                                            } else {
                                                                if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"u" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct envunion435  temp1452 = ( (struct envunion435){ .fun = (  enum Unit_8  (*) (  struct env230*  ,    struct Pane_241 *  ) )undo1453 , .env =  env->envinst230 } );
                                                                    ( temp1452.fun ( &temp1452.env ,  ( (  pane397 ) ( (  ed4818 ) ) ) ) );
                                                                } else {
                                                                    if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"d" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct envunion431  temp1470 = ( (struct envunion431){ .fun = (  enum Unit_8  (*) (  struct env254*  ,    struct Editor_267 *  ) )copy_dash_selection_dash_to_dash_clipboard1471 , .env =  env->envinst254 } );
                                                                        ( temp1470.fun ( &temp1470.env ,  (  ed4818 ) ) );
                                                                        struct envunion429  temp1483 = ( (struct envunion429){ .fun = (  enum Unit_8  (*) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  ) )replace_dash_selection1484 , .env =  env->envinst234 } );
                                                                        ( temp1483.fun ( &temp1483.env ,  ( (  pane397 ) ( (  ed4818 ) ) ) ,  ( (  selection1472 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
                                                                        ( (  set_dash_mode1238 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ,  ( Mode_242_Normal ) ) );
                                                                    } else {
                                                                        if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"c" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct envunion1492  temp1491 = ( (struct envunion1492){ .fun = (  enum Unit_8  (*) (  struct env254*  ,    struct Editor_267 *  ) )copy_dash_selection_dash_to_dash_clipboard1471 , .env =  env->envinst254 } );
                                                                            ( temp1491.fun ( &temp1491.env ,  (  ed4818 ) ) );
                                                                            struct envunion1494  temp1493 = ( (struct envunion1494){ .fun = (  enum Unit_8  (*) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  ) )replace_dash_selection1484 , .env =  env->envinst234 } );
                                                                            ( temp1493.fun ( &temp1493.env ,  ( (  pane397 ) ( (  ed4818 ) ) ) ,  ( (  selection1472 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
                                                                            ( (  set_dash_mode1238 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ,  ( Mode_242_Insert ) ) );
                                                                        } else {
                                                                            if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                struct envunion1496  temp1495 = ( (struct envunion1496){ .fun = (  enum Unit_8  (*) (  struct env254*  ,    struct Editor_267 *  ) )copy_dash_selection_dash_to_dash_clipboard1471 , .env =  env->envinst254 } );
                                                                                ( temp1495.fun ( &temp1495.env ,  (  ed4818 ) ) );
                                                                                size_t  bytes_dash_yanked4827 = ( (  num_dash_bytes396 ) ( ( (  or_dash_else727 ) ( ( ( * (  ed4818 ) ) .f_clipboard ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) ) ) );
                                                                                struct envunion434  temp1497 = ( (struct envunion434){ .fun = (  enum Unit_8  (*) (  struct env256*  ,    struct Editor_267 *  ,    struct StrConcat_78  ) )set_dash_msg1498 , .env =  env->envinst256 } );
                                                                                ( temp1497.fun ( &temp1497.env ,  (  ed4818 ) ,  ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4827 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)" bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    struct env1547 envinst1547 = {
                                                                                        .ed4818 =  ed4818 ,
                                                                                        .envinst234 = env->envinst234 ,
                                                                                    };
                                                                                    ( (  if_dash_just1546 ) ( ( ( * (  ed4818 ) ) .f_clipboard ) ,  ( (struct envunion1549){ .fun = (  enum Unit_8  (*) (  struct env1547*  ,    struct StrView_27  ) )lam1551 , .env =  envinst1547 } ) ) );
                                                                                } else {
                                                                                    if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        struct env1560 envinst1560 = {
                                                                                            .ed4818 =  ed4818 ,
                                                                                            .envinst234 = env->envinst234 ,
                                                                                        };
                                                                                        ( (  if_dash_just1559 ) ( ( ( * (  ed4818 ) ) .f_clipboard ) ,  ( (struct envunion1562){ .fun = (  enum Unit_8  (*) (  struct env1560*  ,    struct StrView_27  ) )lam1564 , .env =  envinst1560 } ) ) );
                                                                                    } else {
                                                                                        if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            struct env1569 envinst1569 = {
                                                                                                .ed4818 =  ed4818 ,
                                                                                                .envinst234 = env->envinst234 ,
                                                                                            };
                                                                                            ( (  if_dash_just1568 ) ( ( ( * (  ed4818 ) ) .f_clipboard ) ,  ( (struct envunion1571){ .fun = (  enum Unit_8  (*) (  struct env1569*  ,    struct StrView_27  ) )lam1573 , .env =  envinst1569 } ) ) );
                                                                                        } else {
                                                                                            if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  expand1576 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ) );
                                                                                            } else {
                                                                                                if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  set_dash_mode1238 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ,  ( Mode_242_Select ) ) );
                                                                                                    if ( ( (  is_dash_none1580 ) ( ( ( ( * (  ed4818 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                                        (*  ed4818 ) .f_pane .f_sel = ( ( Maybe_34_Just ) ( ( ( ( * (  ed4818 ) ) .f_pane ) .f_cursor ) ) );
                                                                                                    }
                                                                                                } else {
                                                                                                    if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        (*  ed4818 ) .f_mode = ( ( EditorMode_268_Cmd ) ( ( ( * ( (  pane397 ) ( (  ed4818 ) ) ) ) .f_cursor ) ,  ( (  mk1502 ) ( ( ( * (  ed4818 ) ) .f_al ) ) ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            (*  ed4818 ) .f_mode = ( ( EditorMode_268_Search ) ( ( ( * ( (  pane397 ) ( (  ed4818 ) ) ) ) .f_cursor ) ,  ( (  mk1502 ) ( ( ( * (  ed4818 ) ) .f_al ) ) ) ) );
                                                                                                        } else {
                                                                                                            if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                ( (  next_dash_match1581 ) ( (  ed4818 ) ) );
                                                                                                            } else {
                                                                                                                if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                    ( (  prev_dash_match1600 ) ( (  ed4818 ) ) );
                                                                                                                } else {
                                                                                                                    if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                        struct envunion433  temp1614 = ( (struct envunion433){ .fun = (  enum Unit_8  (*) (  struct env238*  ,    struct Pane_241 *  ) )indent_dash_selection1615 , .env =  env->envinst238 } );
                                                                                                                        ( temp1614.fun ( &temp1614.env ,  ( (  pane397 ) ( (  ed4818 ) ) ) ) );
                                                                                                                    } else {
                                                                                                                        if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                            struct envunion430  temp1631 = ( (struct envunion430){ .fun = (  enum Unit_8  (*) (  struct env244*  ,    struct Pane_241 *  ) )dedent_dash_selection1632 , .env =  env->envinst244 } );
                                                                                                                            ( temp1631.fun ( &temp1631.env ,  ( (  pane397 ) ( (  ed4818 ) ) ) ) );
                                                                                                                        } else {
                                                                                                                            if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"g" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                                ( (  enmenue1646 ) ( (  ed4818 ) ,  ( env->goto_dash_menu4810 ) ) );
                                                                                                                            } else {
                                                                                                                                if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                                    ( (  enmenue1646 ) ( (  ed4818 ) ,  ( env->space_dash_menu4815 ) ) );
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
        }
    }
    else {
        if ( dref4821.tag == Key_446_Escape_t ) {
            ( (  set_dash_mode1238 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ,  ( Mode_242_Normal ) ) );
        }
        else {
            if ( dref4821.tag == Key_446_Ctrl_t ) {
                if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Ctrl_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"c" ) ,  ( 1 ) ) ) ) ) ) {
                    struct envunion438  temp1647 = ( (struct envunion438){ .fun = (  enum Unit_8  (*) (  struct env249*  ,    struct Pane_241 *  ) )toggle_dash_comment1648 , .env =  env->envinst249 } );
                    ( temp1647.fun ( &temp1647.env ,  ( (  pane397 ) ( (  ed4818 ) ) ) ) );
                } else {
                    if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Ctrl_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"u" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_up1237 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
                    } else {
                        if ( (  eq1073 ( ( dref4821 .stuff .Key_446_Ctrl_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"d" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_down1233 ) ( ( (  pane397 ) ( (  ed4818 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
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

struct envunion1694 {
    enum Unit_8  (*fun) (  struct env428*  ,    struct Editor_267 *  ,    struct Key_446  );
    struct env428 env;
};

static  enum Unit_8   backspace1698 (   struct env228* env ,    struct Pane_241 *  self4592 ) {
    struct Pos_26  prev_dash_cur4593 = ( ( * (  self4592 ) ) .f_cursor );
    ( (  move_dash_left1226 ) ( (  self4592 ) ) );
    struct envunion229  temp1699 = ( (struct envunion229){ .fun = (  struct Maybe_227  (*) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_227  ) )change1243 , .env =  env->envinst140 } );
    ( temp1699.fun ( &temp1699.env ,  ( ( * (  self4592 ) ) .f_buf ) ,  ( ( * (  self4592 ) ) .f_cursor ) ,  (  prev_dash_cur4593 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_227) { .tag = Maybe_227_None_t } ) ) );
    return ( Unit_8_Unit );
}

struct Array_1701 {
    char _arr [1];
};

static  char *   cast1702 (    struct Array_1701 *  x395 ) {
    return ( (char * ) (  x395 ) );
}

static  struct Slice_1087   as_dash_slice1700 (    struct Array_1701 *  arr2052 ) {
    return ( (struct Slice_1087) { .f_ptr = ( (  cast1702 ) ( (  arr2052 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1701   from_dash_listlike1704 (    struct Array_1701 *  self369 ) {
    return ( * (  self369 ) );
}

struct envunion1707 {
    enum Unit_8  (*fun) (  struct env225*  ,    struct Pane_241 *  ,    struct StrView_27  );
    struct env225 env;
};

struct Scanner_1710 {
    struct StrView_27  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_1710   mk_dash_from_dash_strview1712 (    struct StrView_27  s3402 ) {
    return ( (struct Scanner_1710) { .f_s = (  s3402 ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct TakeWhile_1718 {
    struct StrViewIter_293  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1717 {
    struct TakeWhile_1718  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1717 Map_1717_Map (  struct TakeWhile_1718  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1717 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1717   into_dash_iter1720 (    struct Map_1717  self804 ) {
    return (  self804 );
}

static  struct Maybe_351   next1722 (    struct TakeWhile_1718 *  self989 ) {
    struct Maybe_351  mx990 = ( (  next352 ) ( ( & ( ( * (  self989 ) ) .f_it ) ) ) );
    struct Maybe_351  dref991 = (  mx990 );
    if ( dref991.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    else {
        if ( dref991.tag == Maybe_351_Just_t ) {
            if ( ( ( ( * (  self989 ) ) .f_pred ) ( ( dref991 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_351_Just ) ( ( dref991 .stuff .Maybe_351_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
            }
        }
    }
}

static  struct Maybe_276   next1721 (    struct Map_1717 *  dref806 ) {
    struct Maybe_351  dref809 = ( (  next1722 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_351_Just_t ) {
            return ( ( Maybe_276_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_351_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1719 (    struct Map_1717  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    size_t  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct Map_1717  it1124 = ( (  into_dash_iter1720 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_276  dref1125 = ( (  next1721 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_276_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_276_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_276_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1723 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1723);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1724;
    return (  temp1724 );
}

static  size_t   lam1725 (    size_t  v1137 ,    size_t  s1139 ) {
    return (  op_dash_add356 ( (  v1137 ) , (  s1139 ) ) );
}

static  size_t   sum1716 (    struct Map_1717  it1135 ) {
    return ( (  reduce1719 ) ( (  it1135 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1725 ) ) );
}

static  struct TakeWhile_1718   into_dash_iter1727 (    struct TakeWhile_1718  self986 ) {
    return (  self986 );
}

static  struct Map_1717   map1726 (    struct TakeWhile_1718  iterable813 ,    size_t (*  fun815 )(    struct Char_65  ) ) {
    struct TakeWhile_1718  it816 = ( (  into_dash_iter1727 ) ( (  iterable813 ) ) );
    return ( ( Map_1717_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct TakeWhile_1718   take_dash_while1728 (    struct StrViewIter_293  it995 ,    bool (*  pred997 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1718) { .f_it = ( (  into_dash_iter294 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  size_t   lam1729 (    struct Char_65  c2636 ) {
    return ( (  c2636 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1715 (    struct StrView_27  self2632 ,    bool (*  fun2634 )(    struct Char_65  ) ) {
    size_t  bi2637 = ( (  sum1716 ) ( ( (  map1726 ) ( ( (  take_dash_while1728 ) ( ( (  chars295 ) ( (  self2632 ) ) ) ,  (  fun2634 ) ) ) ,  (  lam1729 ) ) ) ) );
    return ( (  byte_dash_substr600 ) ( (  self2632 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2637 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1714 (    struct Scanner_1710 *  sc3482 ,    bool (*  fun3484 )(    struct Char_65  ) ) {
    struct StrView_27  s3485 = ( (  take_dash_while1715 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  (  fun3484 ) ) );
    (*  sc3482 ) .f_s = ( (  byte_dash_substr_dash_from588 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  ( (  num_dash_bytes396 ) ( (  s3485 ) ) ) ) );
    return (  s3485 );
}

static  enum Unit_8   drop_dash_str_dash_while1713 (    struct Scanner_1710 *  sc3488 ,    bool (*  fun3490 )(    struct Char_65  ) ) {
    ( (  take_dash_str_dash_while1714 ) ( (  sc3488 ) ,  (  fun3490 ) ) );
    return ( Unit_8_Unit );
}

struct TakeWhile_1734 {
    struct StrViewIter_293  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1733 {
    struct TakeWhile_1734  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1733 Map_1733_Map (  struct TakeWhile_1734  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1733 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1733   into_dash_iter1736 (    struct Map_1733  self804 ) {
    return (  self804 );
}

static  struct Maybe_351   next1738 (    struct TakeWhile_1734 *  self989 ) {
    struct Maybe_351  mx990 = ( (  next352 ) ( ( & ( ( * (  self989 ) ) .f_it ) ) ) );
    struct Maybe_351  dref991 = (  mx990 );
    if ( dref991.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    else {
        if ( dref991.tag == Maybe_351_Just_t ) {
            if ( ( ( ( * (  self989 ) ) .f_pred ) ( ( dref991 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_351_Just ) ( ( dref991 .stuff .Maybe_351_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
            }
        }
    }
}

static  struct Maybe_276   next1737 (    struct Map_1733 *  dref806 ) {
    struct Maybe_351  dref809 = ( (  next1738 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_351_Just_t ) {
            return ( ( Maybe_276_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_351_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1735 (    struct Map_1733  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    size_t  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct Map_1733  it1124 = ( (  into_dash_iter1736 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_276  dref1125 = ( (  next1737 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_276_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_276_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_276_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1739 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1739);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1740;
    return (  temp1740 );
}

static  size_t   lam1741 (    size_t  v1137 ,    size_t  s1139 ) {
    return (  op_dash_add356 ( (  v1137 ) , (  s1139 ) ) );
}

static  size_t   sum1732 (    struct Map_1733  it1135 ) {
    return ( (  reduce1735 ) ( (  it1135 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1741 ) ) );
}

static  struct TakeWhile_1734   into_dash_iter1743 (    struct TakeWhile_1734  self986 ) {
    return (  self986 );
}

static  struct Map_1733   map1742 (    struct TakeWhile_1734  iterable813 ,    size_t (*  fun815 )(    struct Char_65  ) ) {
    struct TakeWhile_1734  it816 = ( (  into_dash_iter1743 ) ( (  iterable813 ) ) );
    return ( ( Map_1733_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct TakeWhile_1734   take_dash_while1744 (    struct StrViewIter_293  it995 ,    bool (*  pred997 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1734) { .f_it = ( (  into_dash_iter294 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  size_t   lam1745 (    struct Char_65  c2636 ) {
    return ( (  c2636 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1731 (    struct StrView_27  self2632 ,    bool (*  fun2634 )(    struct Char_65  ) ) {
    size_t  bi2637 = ( (  sum1732 ) ( ( (  map1742 ) ( ( (  take_dash_while1744 ) ( ( (  chars295 ) ( (  self2632 ) ) ) ,  (  fun2634 ) ) ) ,  (  lam1745 ) ) ) ) );
    return ( (  byte_dash_substr600 ) ( (  self2632 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2637 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1730 (    struct Scanner_1710 *  sc3482 ,    bool (*  fun3484 )(    struct Char_65  ) ) {
    struct StrView_27  s3485 = ( (  take_dash_while1731 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  (  fun3484 ) ) );
    (*  sc3482 ) .f_s = ( (  byte_dash_substr_dash_from588 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  ( (  num_dash_bytes396 ) ( (  s3485 ) ) ) ) );
    return (  s3485 );
}

static  bool   is_dash_not_dash_whitespace1746 (    struct Char_65  c1503 ) {
    return ( ! ( (  is_dash_whitespace415 ) ( (  c1503 ) ) ) );
}

static  struct Maybe_351   head1748 (    struct StrView_27  it1167 ) {
    struct StrViewIter_293  temp1749 = ( (  into_dash_iter296 ) ( (  it1167 ) ) );
    return ( (  next352 ) ( ( &temp1749 ) ) );
}

static  bool   null1747 (    struct StrView_27  it1176 ) {
    struct Maybe_351  dref1177 = ( (  head1748 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_351_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env1753 {
    ;
    enum CAllocator_10  al4110;
};

struct envunion1754 {
    struct StrView_27  (*fun) (  struct env1753*  ,    struct StrView_27  );
    struct env1753 env;
};

static  struct Maybe_85   fmap_dash_maybe1752 (    struct Maybe_85  x1585 ,   struct envunion1754  fun1587 ) {
    struct Maybe_85  dref1588 = (  x1585 );
    if ( dref1588.tag == Maybe_85_None_t ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    else {
        if ( dref1588.tag == Maybe_85_Just_t ) {
            struct envunion1754  temp1755 = (  fun1587 );
            return ( ( Maybe_85_Just ) ( ( temp1755.fun ( &temp1755.env ,  ( dref1588 .stuff .Maybe_85_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrView_27   lam1756 (   struct env1753* env ,    struct StrView_27  s4112 ) {
    return ( (  clone_dash_0647 ) ( (  s4112 ) ,  ( env->al4110 ) ) );
}

static  struct Maybe_85   maybe1757 (    struct Maybe_85  x1592 ,    struct Maybe_85 (*  fun1594 )(    struct StrView_27  ) ,    struct Maybe_85  default1596 ) {
    return ( {  struct Maybe_85  dref1597 = (  x1592 ) ; dref1597.tag == Maybe_85_Just_t ? ( (  fun1594 ) ( ( dref1597 .stuff .Maybe_85_Just_s .field0 ) ) ) : (  default1596 ) ; } );
}

static  bool   is_dash_none1758 (    struct Maybe_85  m1574 ) {
    struct Maybe_85  dref1575 = (  m1574 );
    if ( dref1575.tag == Maybe_85_None_t ) {
        return ( true );
    }
    else {
        if ( dref1575.tag == Maybe_85_Just_t ) {
            return ( false );
        }
    }
}

struct env1767 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2877;
};

struct envunion1768 {
    enum Unit_8  (*fun) (  struct env1767*  ,    struct Char_65  );
    struct env1767 env;
};

static  enum Unit_8   for_dash_each1766 (    struct StrConcatIter_1415  iterable1099 ,   struct envunion1768  fun1101 ) {
    struct StrConcatIter_1415  temp1769 = ( (  into_dash_iter1417 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_1415 *  it1102 = ( &temp1769 );
    while ( ( true ) ) {
        struct Maybe_351  dref1103 = ( (  next1418 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_351_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_351_Just_t ) {
                struct envunion1768  temp1770 = (  fun1101 );
                ( temp1770.fun ( &temp1770.env ,  ( dref1103 .stuff .Maybe_351_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1771 (   struct env1767* env ,    struct Char_65  c2881 ) {
    struct envunion64  temp1772 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1535 , .env =  env->envinst60 } );
    return ( temp1772.fun ( &temp1772.env ,  ( env->builder2877 ) ,  (  c2881 ) ) );
}

static  enum Unit_8   write1765 (   struct env68* env ,    struct StrBuilder_62 *  builder2877 ,    struct StrConcat_71  s2879 ) {
    struct env1767 envinst1767 = {
        .envinst60 = env->envinst60 ,
        .builder2877 =  builder2877 ,
    };
    ( (  for_dash_each1766 ) ( ( (  chars1419 ) ( (  s2879 ) ) ) ,  ( (struct envunion1768){ .fun = (  enum Unit_8  (*) (  struct env1767*  ,    struct Char_65  ) )lam1771 , .env =  envinst1767 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   writeln1763 (   struct env69* env ,    struct StrBuilder_62 *  builder2884 ,    struct StrView_27  s2886 ) {
    struct envunion70  temp1764 = ( (struct envunion70){ .fun = (  enum Unit_8  (*) (  struct env68*  ,    struct StrBuilder_62 *  ,    struct StrConcat_71  ) )write1765 , .env =  env->envinst68 } );
    return ( temp1764.fun ( &temp1764.env ,  (  builder2884 ) ,  ( ( StrConcat_71_StrConcat ) ( (  s2886 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrView_27   undefined1774 (  ) {
    struct StrView_27  temp1775;
    return (  temp1775 );
}

static  struct StrView_27   or_dash_fail1773 (    struct Maybe_85  x1353 ,    struct StrView_27  errmsg1355 ) {
    struct Maybe_85  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_85_None_t ) {
        ( (  panic853 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1774 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_85_Just_t ) {
            return ( dref1356 .stuff .Maybe_85_Just_s .field0 );
        }
    }
}

static  struct StrViewIter_293   chars1778 (    struct StrBuilder_62  s2929 ) {
    return ( (  into_dash_iter296 ) ( ( (  as_dash_str1543 ) ( ( & (  s2929 ) ) ) ) ) );
}

static  struct StrViewIter_293   chars1777 (    struct StrBuilder_62 *  self1754 ) {
    return ( (  chars1778 ) ( ( * (  self1754 ) ) ) );
}

static  int32_t   fprintf_dash_char1779 (    FILE *  file1479 ,    struct Char_65  c1481 ) {
    struct Array_320  temp1781;
    struct Array_320  temp1780 = (  temp1781 );
    struct Char_65  c1482 = ( (  regularize319 ) ( (  c1481 ) ,  ( &temp1780 ) ) );
    return ( ( fprintf ) ( (  file1479 ) ,  ( (  from_dash_string57 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32311 ) ( ( (  c1482 ) .f_num_dash_bytes ) ) ) ,  ( (  c1482 ) .f_ptr ) ) );
}

static  bool   unreachable1782 (  ) {
    ( (  println1412 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1421 ) ( ) );
}

static  bool   try_dash_write_dash_contents1776 (    const char*  filename3178 ,    struct StrBuilder_62 *  contents3180 ) {
    FILE *  file3181 = ( ( fopen ) ( (  filename3178 ) ,  ( (  from_dash_charlike677 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null678 ) ( (  file3181 ) ) ) ) {
        return ( false );
    }
    struct StrViewIter_293  it3182 = ( (  chars1777 ) ( (  contents3180 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref3183 = ( (  next352 ) ( ( & (  it3182 ) ) ) );
        if ( dref3183.tag == Maybe_351_None_t ) {
            ( ( fclose ) ( (  file3181 ) ) );
            return ( true );
        }
        else {
            if ( dref3183.tag == Maybe_351_Just_t ) {
                int32_t  chars_dash_written3185 = ( (  fprintf_dash_char1779 ) ( (  file3181 ) ,  ( dref3183 .stuff .Maybe_351_Just_s .field0 ) ) );
                if ( (  cmp173 ( (  chars_dash_written3185 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
                    return ( false );
                }
            }
        }
    }
    return ( (  unreachable1782 ) ( ) );
}

static  enum Unit_8   free1783 (    struct StrBuilder_62 *  builder2921 ) {
    ( (  free765 ) ( ( & ( ( * (  builder2921 ) ) .f_chars ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   is_dash_just1784 (    struct Maybe_85  m1570 ) {
    struct Maybe_85  dref1571 = (  m1570 );
    if ( dref1571.tag == Maybe_85_None_t ) {
        return ( false );
    }
    else {
        if ( dref1571.tag == Maybe_85_Just_t ) {
            return ( true );
        }
    }
}

static  struct Maybe_276   write_dash_to_dash_file1751 (   struct env123* env ,    struct TextBuf_117 *  self4107 ,    struct Maybe_85  altname4109 ) {
    enum CAllocator_10  al4110 = ( ( * (  self4107 ) ) .f_al );
    struct env1753 envinst1753 = {
        .al4110 =  al4110 ,
    };
    struct Maybe_85  nu_dash_filename4113 = ( (  fmap_dash_maybe1752 ) ( (  altname4109 ) ,  ( (struct envunion1754){ .fun = (  struct StrView_27  (*) (  struct env1753*  ,    struct StrView_27  ) )lam1756 , .env =  envinst1753 } ) ) );
    struct Maybe_85  filename4114 = ( (  maybe1757 ) ( (  altname4109 ) ,  ( Maybe_85_Just ) ,  ( ( * (  self4107 ) ) .f_filename ) ) );
    if ( ( (  is_dash_none1758 ) ( (  filename4114 ) ) ) ) {
        return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
    }
    struct StrBuilder_62  temp1759 = ( (  mk1502 ) ( (  al4110 ) ) );
    struct StrBuilder_62 *  sb4115 = ( &temp1759 );
    struct RangeIter_169  temp1760 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( ( (  num_dash_lines420 ) ( (  self4107 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond1761 =  next172 (&temp1760);
        if (  __cond1761 .tag == 0 ) {
            break;
        }
        int32_t  ln4117 =  __cond1761 .stuff .Maybe_171_Just_s .field0;
        struct envunion124  temp1762 = ( (struct envunion124){ .fun = (  enum Unit_8  (*) (  struct env69*  ,    struct StrBuilder_62 *  ,    struct StrView_27  ) )writeln1763 , .env =  env->envinst69 } );
        ( temp1762.fun ( &temp1762.env ,  (  sb4115 ) ,  ( (  line297 ) ( (  self4107 ) ,  (  ln4117 ) ) ) ) );
    }
    const char*  filename04118 = ( (  as_dash_const_dash_str687 ) ( ( (  or_dash_fail1773 ) ( (  filename4114 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"expect filename (we should've quit earlier.)" ) ,  ( 44 ) ) ) ) ) ) );
    bool  result4119 = ( (  try_dash_write_dash_contents1776 ) ( (  filename04118 ) ,  (  sb4115 ) ) );
    ( (  free1783 ) ( (  sb4115 ) ) );
    if ( ( ! (  result4119 ) ) ) {
        return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
    }
    if ( ( (  is_dash_just1784 ) ( (  altname4109 ) ) ) ) {
        struct Maybe_85  dref4120 = ( ( * (  self4107 ) ) .f_filename );
        if ( dref4120.tag == Maybe_85_Just_t ) {
            ( (  free689 ) ( ( dref4120 .stuff .Maybe_85_Just_s .field0 ) ,  (  al4110 ) ) );
        }
        else {
            if ( dref4120.tag == Maybe_85_None_t ) {
            }
        }
        (*  self4107 ) .f_filename = (  altname4109 );
    }
    return ( ( Maybe_276_Just ) ( ( (  num_dash_bytes396 ) ( ( (  as_dash_str1543 ) ( (  sb4115 ) ) ) ) ) ) );
}

struct env1793 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2877;
};

struct envunion1794 {
    enum Unit_8  (*fun) (  struct env1793*  ,    struct Char_65  );
    struct env1793 env;
};

static  enum Unit_8   for_dash_each1792 (    struct StrViewIter_293  iterable1099 ,   struct envunion1794  fun1101 ) {
    struct StrViewIter_293  temp1795 = ( (  into_dash_iter294 ) ( (  iterable1099 ) ) );
    struct StrViewIter_293 *  it1102 = ( &temp1795 );
    while ( ( true ) ) {
        struct Maybe_351  dref1103 = ( (  next352 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_351_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_351_Just_t ) {
                struct envunion1794  temp1796 = (  fun1101 );
                ( temp1796.fun ( &temp1796.env ,  ( dref1103 .stuff .Maybe_351_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1797 (   struct env1793* env ,    struct Char_65  c2881 ) {
    struct envunion64  temp1798 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1535 , .env =  env->envinst60 } );
    return ( temp1798.fun ( &temp1798.env ,  ( env->builder2877 ) ,  (  c2881 ) ) );
}

static  enum Unit_8   write1791 (   struct env66* env ,    struct StrBuilder_62 *  builder2877 ,    struct StrView_27  s2879 ) {
    struct env1793 envinst1793 = {
        .envinst60 = env->envinst60 ,
        .builder2877 =  builder2877 ,
    };
    ( (  for_dash_each1792 ) ( ( (  chars295 ) ( (  s2879 ) ) ) ,  ( (struct envunion1794){ .fun = (  enum Unit_8  (*) (  struct env1793*  ,    struct Char_65  ) )lam1797 , .env =  envinst1793 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1788 (   struct env80* env ,    struct StrView_27  s2935 ,    enum CAllocator_10  al2937 ) {
    struct StrBuilder_62  temp1789 = ( (  mk1502 ) ( (  al2937 ) ) );
    struct StrBuilder_62 *  sb2938 = ( &temp1789 );
    struct envunion81  temp1790 = ( (struct envunion81){ .fun = (  enum Unit_8  (*) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrView_27  ) )write1791 , .env =  env->envinst66 } );
    ( temp1790.fun ( &temp1790.env ,  (  sb2938 ) ,  (  s2935 ) ) );
    struct envunion76  temp1799 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1535 , .env =  env->envinst60 } );
    ( temp1799.fun ( &temp1799.env ,  (  sb2938 ) ,  ( (  nullchar686 ) ( ) ) ) );
    struct StrView_27  dynstr2939 = ( (  as_dash_str1543 ) ( (  sb2938 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2939 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub462 ( ( ( (  dynstr2939 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1786 (   struct env258* env ,    struct Editor_267 *  ed4739 ,    struct StrView_27  s4741 ) {
    ( (  reset_dash_msg1215 ) ( (  ed4739 ) ) );
    struct envunion259  temp1787 = ( (struct envunion259){ .fun = (  struct StrView_27  (*) (  struct env80*  ,    struct StrView_27  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1788 , .env =  env->envinst80 } );
    (*  ed4739 ) .f_msg = ( ( Maybe_85_Just ) ( ( temp1787.fun ( &temp1787.env ,  (  s4741 ) ,  ( ( * (  ed4739 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcatIter_1811 {
    struct StrViewIter_293  f_left;
    struct StrViewIter_293  f_right;
};

struct StrConcatIter_1810 {
    struct StrConcatIter_1811  f_left;
    struct AppendIter_1161  f_right;
};

struct StrCaseIter_1809 {
    enum {
        StrCaseIter_1809_StrCaseIter1_t,
        StrCaseIter_1809_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_293  field0;
        } StrCaseIter_1809_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1810  field0;
        } StrCaseIter_1809_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1809 StrCaseIter_1809_StrCaseIter1 (  struct StrViewIter_293  field0 ) {
    return ( struct StrCaseIter_1809 ) { .tag = StrCaseIter_1809_StrCaseIter1_t, .stuff = { .StrCaseIter_1809_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1809 StrCaseIter_1809_StrCaseIter2 (  struct StrConcatIter_1810  field0 ) {
    return ( struct StrCaseIter_1809 ) { .tag = StrCaseIter_1809_StrCaseIter2_t, .stuff = { .StrCaseIter_1809_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1808 {
    struct StrViewIter_293  f_left;
    struct StrCaseIter_1809  f_right;
};

struct env1812 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2877;
};

struct envunion1813 {
    enum Unit_8  (*fun) (  struct env1812*  ,    struct Char_65  );
    struct env1812 env;
};

static  struct StrConcatIter_1808   into_dash_iter1815 (    struct StrConcatIter_1808  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_351   next1819 (    struct StrConcatIter_1811 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next1818 (    struct StrConcatIter_1810 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next1819 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1183 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next1817 (    struct StrCaseIter_1809 *  self1730 ) {
    struct StrCaseIter_1809 *  dref1731 = (  self1730 );
    if ( (* dref1731 ).tag == StrCaseIter_1809_StrCaseIter1_t ) {
        return ( (  next352 ) ( ( & ( (* dref1731 ) .stuff .StrCaseIter_1809_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1731 ).tag == StrCaseIter_1809_StrCaseIter2_t ) {
            return ( (  next1818 ) ( ( & ( (* dref1731 ) .stuff .StrCaseIter_1809_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_351   next1816 (    struct StrConcatIter_1808 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1817 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1807 (    struct StrConcatIter_1808  iterable1099 ,   struct envunion1813  fun1101 ) {
    struct StrConcatIter_1808  temp1814 = ( (  into_dash_iter1815 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_1808 *  it1102 = ( &temp1814 );
    while ( ( true ) ) {
        struct Maybe_351  dref1103 = ( (  next1816 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_351_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_351_Just_t ) {
                struct envunion1813  temp1820 = (  fun1101 );
                ( temp1820.fun ( &temp1820.env ,  ( dref1103 .stuff .Maybe_351_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct StrCase_1824 {
    enum {
        StrCase_1824_StrCase1_t,
        StrCase_1824_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_1824_StrCase1_s;
        struct {
            struct StrConcat_807  field0;
        } StrCase_1824_StrCase2_s;
    } stuff;
};

static struct StrCase_1824 StrCase_1824_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_1824 ) { .tag = StrCase_1824_StrCase1_t, .stuff = { .StrCase_1824_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1824 StrCase_1824_StrCase2 (  struct StrConcat_807  field0 ) {
    return ( struct StrCase_1824 ) { .tag = StrCase_1824_StrCase2_t, .stuff = { .StrCase_1824_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1811   into_dash_iter1831 (    struct StrConcat_808  dref1297 ) {
    return ( (struct StrConcatIter_1811) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars295 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1811   chars1830 (    struct StrConcat_808  self1308 ) {
    return ( (  into_dash_iter1831 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_1810   into_dash_iter1829 (    struct StrConcat_807  dref1297 ) {
    return ( (struct StrConcatIter_1810) { .f_left = ( (  chars1830 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1196 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1810   chars1828 (    struct StrConcat_807  self1308 ) {
    return ( (  into_dash_iter1829 ) ( (  self1308 ) ) );
}

static  struct StrCaseIter_1809   into_dash_iter1827 (    struct StrCase_1824  self1736 ) {
    struct StrCase_1824  dref1737 = (  self1736 );
    if ( dref1737.tag == StrCase_1824_StrCase1_t ) {
        return ( ( StrCaseIter_1809_StrCaseIter1 ) ( ( (  chars295 ) ( ( dref1737 .stuff .StrCase_1824_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1737.tag == StrCase_1824_StrCase2_t ) {
            return ( ( StrCaseIter_1809_StrCaseIter2 ) ( ( (  chars1828 ) ( ( dref1737 .stuff .StrCase_1824_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1809   chars1826 (    struct StrCase_1824  self1748 ) {
    return ( (  into_dash_iter1827 ) ( (  self1748 ) ) );
}

static  struct StrCaseIter_1809   chars1823 (    struct Maybe_85  self1762 ) {
    struct StrCase_1824  temp1825;
    struct StrCase_1824  c1763 = (  temp1825 );
    struct Maybe_85  dref1764 = (  self1762 );
    if ( dref1764.tag == Maybe_85_None_t ) {
        c1763 = ( ( StrCase_1824_StrCase1 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1764.tag == Maybe_85_Just_t ) {
            c1763 = ( ( StrCase_1824_StrCase2 ) ( ( ( StrConcat_807_StrConcat ) ( ( ( StrConcat_808_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Just(" ) ,  ( 5 ) ) ) ,  ( dref1764 .stuff .Maybe_85_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1826 ) ( (  c1763 ) ) );
}

static  struct StrConcatIter_1808   into_dash_iter1822 (    struct StrConcat_84  dref1297 ) {
    return ( (struct StrConcatIter_1808) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1823 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1808   chars1821 (    struct StrConcat_84  self1308 ) {
    return ( (  into_dash_iter1822 ) ( (  self1308 ) ) );
}

static  enum Unit_8   lam1832 (   struct env1812* env ,    struct Char_65  c2881 ) {
    struct envunion64  temp1833 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1535 , .env =  env->envinst60 } );
    return ( temp1833.fun ( &temp1833.env ,  ( env->builder2877 ) ,  (  c2881 ) ) );
}

static  enum Unit_8   write1806 (   struct env67* env ,    struct StrBuilder_62 *  builder2877 ,    struct StrConcat_84  s2879 ) {
    struct env1812 envinst1812 = {
        .envinst60 = env->envinst60 ,
        .builder2877 =  builder2877 ,
    };
    ( (  for_dash_each1807 ) ( ( (  chars1821 ) ( (  s2879 ) ) ) ,  ( (struct envunion1813){ .fun = (  enum Unit_8  (*) (  struct env1812*  ,    struct Char_65  ) )lam1832 , .env =  envinst1812 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1803 (   struct env82* env ,    struct StrConcat_84  s2935 ,    enum CAllocator_10  al2937 ) {
    struct StrBuilder_62  temp1804 = ( (  mk1502 ) ( (  al2937 ) ) );
    struct StrBuilder_62 *  sb2938 = ( &temp1804 );
    struct envunion83  temp1805 = ( (struct envunion83){ .fun = (  enum Unit_8  (*) (  struct env67*  ,    struct StrBuilder_62 *  ,    struct StrConcat_84  ) )write1806 , .env =  env->envinst67 } );
    ( temp1805.fun ( &temp1805.env ,  (  sb2938 ) ,  (  s2935 ) ) );
    struct envunion76  temp1834 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1535 , .env =  env->envinst60 } );
    ( temp1834.fun ( &temp1834.env ,  (  sb2938 ) ,  ( (  nullchar686 ) ( ) ) ) );
    struct StrView_27  dynstr2939 = ( (  as_dash_str1543 ) ( (  sb2938 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2939 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub462 ( ( ( (  dynstr2939 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1801 (   struct env260* env ,    struct Editor_267 *  ed4739 ,    struct StrConcat_84  s4741 ) {
    ( (  reset_dash_msg1215 ) ( (  ed4739 ) ) );
    struct envunion261  temp1802 = ( (struct envunion261){ .fun = (  struct StrView_27  (*) (  struct env82*  ,    struct StrConcat_84  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1803 , .env =  env->envinst82 } );
    (*  ed4739 ) .f_msg = ( ( Maybe_85_Just ) ( ( temp1802.fun ( &temp1802.env ,  (  s4741 ) ,  ( ( * (  ed4739 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undefined1837 (  ) {
    enum Unit_8  temp1838;
    return (  temp1838 );
}

static  enum Unit_8   todo1836 (  ) {
    ( (  println1412 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"todo" ) ,  ( 4 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1837 ) ( ) );
}

struct Tuple2_1842 {
    struct Maybe_351  field0;
    struct Maybe_351  field1;
};

static struct Tuple2_1842 Tuple2_1842_Tuple2 (  struct Maybe_351  field0 ,  struct Maybe_351  field1 ) {
    return ( struct Tuple2_1842 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   begins_dash_with1839 (    struct StrView_27  s1947 ,    struct StrView_27  beg1949 ) {
    struct StrViewIter_293  temp1840 = ( (  chars295 ) ( (  s1947 ) ) );
    struct StrViewIter_293 *  scs1950 = ( &temp1840 );
    struct StrViewIter_293  temp1841 = ( (  chars295 ) ( (  beg1949 ) ) );
    struct StrViewIter_293 *  begcs1951 = ( &temp1841 );
    while ( ( true ) ) {
        struct Tuple2_1842  dref1952 = ( ( Tuple2_1842_Tuple2 ) ( ( (  next352 ) ( (  scs1950 ) ) ) ,  ( (  next352 ) ( (  begcs1951 ) ) ) ) );
        if ( dref1952 .field0.tag == Maybe_351_Just_t && dref1952 .field1.tag == Maybe_351_Just_t ) {
            if ( ( !  eq360 ( ( dref1952 .field0 .stuff .Maybe_351_Just_s .field0 ) , ( dref1952 .field1 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else {
            if ( dref1952 .field0.tag == Maybe_351_None_t && dref1952 .field1.tag == Maybe_351_Just_t ) {
                return ( false );
            }
            else {
                if ( true ) {
                    return ( true );
                }
            }
        }
    }
}

struct SliceAddressIter_1845 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_1845   into_dash_iter1846 (    struct SliceAddressIter_1845  self2271 ) {
    return (  self2271 );
}

static  struct SliceAddressIter_1845   addresses1848 (    struct Slice_11  slice2268 ) {
    return ( (struct SliceAddressIter_1845) { .f_slice = (  slice2268 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Slice_11   to_dash_slice1849 (    struct List_9  l2541 ) {
    struct Line_12 *  ptr2542 = ( ( (  l2541 ) .f_elements ) .f_ptr );
    return ( (struct Slice_11) { .f_ptr = (  ptr2542 ) , .f_count = ( (  l2541 ) .f_count ) } );
}

static  struct SliceAddressIter_1845   addresses1847 (    struct List_9  l2545 ) {
    return ( (  addresses1848 ) ( ( (  to_dash_slice1849 ) ( (  l2545 ) ) ) ) );
}

struct Maybe_1851 {
    enum {
        Maybe_1851_None_t,
        Maybe_1851_Just_t,
    } tag;
    union {
        struct {
            struct Line_12 *  field0;
        } Maybe_1851_Just_s;
    } stuff;
};

static struct Maybe_1851 Maybe_1851_Just (  struct Line_12 *  field0 ) {
    return ( struct Maybe_1851 ) { .tag = Maybe_1851_Just_t, .stuff = { .Maybe_1851_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1851   next1852 (    struct SliceAddressIter_1845 *  self2274 ) {
    size_t  off2275 = ( ( * (  self2274 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2275 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2274 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1851) { .tag = Maybe_1851_None_t } );
    }
    struct Line_12 *  elem2276 = ( (  offset_dash_ptr346 ) ( ( ( ( * (  self2274 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2275 ) ) ) ) );
    (*  self2274 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2275 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1851_Just ) ( (  elem2276 ) ) );
}

static  enum Unit_8   set_dash_filetype1843 (    struct TextBuf_117 *  self4243 ,    enum Filetype_120  type4245 ) {
    (*  self4243 ) .f_filetype = (  type4245 );
    struct SliceAddressIter_1845  temp1844 =  into_dash_iter1846 ( ( (  addresses1847 ) ( ( ( * (  self4243 ) ) .f_buf ) ) ) );
    while (true) {
        struct Maybe_1851  __cond1850 =  next1852 (&temp1844);
        if (  __cond1850 .tag == 0 ) {
            break;
        }
        struct Line_12 *  line4247 =  __cond1850 .stuff .Maybe_1851_Just_s .field0;
        (*  line4247 ) .f_invalidated = ( true );
    }
    return ( Unit_8_Unit );
}

struct envunion1854 {
    enum Unit_8  (*fun) (  struct env258*  ,    struct Editor_267 *  ,    struct StrView_27  );
    struct env258 env;
};

struct env1857 {
    bool (*  fun1151 )(    struct Char_65  );
};

struct envunion1858 {
    bool  (*fun) (  struct env1857*  ,    struct Char_65  ,    bool  );
    struct env1857 env;
};

static  bool   reduce1856 (    struct StrView_27  iterable1118 ,    bool  base1120 ,   struct envunion1858  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct StrViewIter_293  it1124 = ( (  into_dash_iter296 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1125 = ( (  next352 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_351_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_351_Just_t ) {
                struct envunion1858  temp1859 = (  fun1122 );
                x1123 = ( temp1859.fun ( &temp1859.env ,  ( dref1125 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1860 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1860);
    abort ( );
    ( Unit_8_Unit );
    bool  temp1861;
    return (  temp1861 );
}

static  bool   lam1862 (   struct env1857* env ,    struct Char_65  e1153 ,    bool  x1155 ) {
    return ( ( ( env->fun1151 ) ( (  e1153 ) ) ) && (  x1155 ) );
}

static  bool   all1855 (    struct StrView_27  it1149 ,    bool (*  fun1151 )(    struct Char_65  ) ) {
    struct env1857 envinst1857 = {
        .fun1151 =  fun1151 ,
    };
    return ( (  reduce1856 ) ( (  it1149 ) ,  ( true ) ,  ( (struct envunion1858){ .fun = (  bool  (*) (  struct env1857*  ,    struct Char_65  ,    bool  ) )lam1862 , .env =  envinst1857 } ) ) );
}

struct envunion1864 {
    enum Unit_8  (*fun) (  struct env258*  ,    struct Editor_267 *  ,    struct StrView_27  );
    struct env258 env;
};

static  enum Unit_8   run_dash_cmd1709 (   struct env265* env ,    struct Editor_267 *  ed4758 ,    struct StrView_27  s4760 ) {
    struct Scanner_1710  temp1711 = ( (  mk_dash_from_dash_strview1712 ) ( (  s4760 ) ) );
    struct Scanner_1710 *  sc4761 = ( &temp1711 );
    ( (  drop_dash_str_dash_while1713 ) ( (  sc4761 ) ,  (  is_dash_whitespace415 ) ) );
    struct StrView_27  cmd4762 = ( (  take_dash_str_dash_while1730 ) ( (  sc4761 ) ,  (  is_dash_not_dash_whitespace1746 ) ) );
    ( (  drop_dash_str_dash_while1713 ) ( (  sc4761 ) ,  (  is_dash_whitespace415 ) ) );
    if ( (  eq623 ( (  cmd4762 ) , ( (  from_dash_charlike646 ) ( ( (uint8_t*)"q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4758 ) .f_running = ( false );
    } else {
        if ( (  eq623 ( (  cmd4762 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq623 ( (  cmd4762 ) , ( (  from_dash_charlike646 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) ) ) {
                struct StrView_27  filename4763 = ( (  take_dash_str_dash_while1730 ) ( (  sc4761 ) ,  (  is_dash_not_dash_whitespace1746 ) ) );
                struct Maybe_85  filename4764 = ( ( (  null1747 ) ( (  filename4763 ) ) ) ? ( (struct Maybe_85) { .tag = Maybe_85_None_t } ) : ( ( Maybe_85_Just ) ( (  filename4763 ) ) ) );
                struct envunion275  temp1750 = ( (struct envunion275){ .fun = (  struct Maybe_276  (*) (  struct env123*  ,    struct TextBuf_117 *  ,    struct Maybe_85  ) )write_dash_to_dash_file1751 , .env =  env->envinst123 } );
                struct Maybe_276  write_dash_result4765 = ( temp1750.fun ( &temp1750.env ,  ( ( * ( (  pane397 ) ( (  ed4758 ) ) ) ) .f_buf ) ,  (  filename4764 ) ) );
                struct Maybe_276  dref4766 = (  write_dash_result4765 );
                if ( dref4766.tag == Maybe_276_None_t ) {
                    if ( ( (  is_dash_none1758 ) ( (  filename4764 ) ) ) ) {
                        struct envunion266  temp1785 = ( (struct envunion266){ .fun = (  enum Unit_8  (*) (  struct env258*  ,    struct Editor_267 *  ,    struct StrView_27  ) )set_dash_msg1786 , .env =  env->envinst258 } );
                        ( temp1785.fun ( &temp1785.env ,  (  ed4758 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"could not save changes (filename not set!!)" ) ,  ( 43 ) ) ) ) );
                    } else {
                        struct envunion273  temp1800 = ( (struct envunion273){ .fun = (  enum Unit_8  (*) (  struct env260*  ,    struct Editor_267 *  ,    struct StrConcat_84  ) )set_dash_msg1801 , .env =  env->envinst260 } );
                        ( temp1800.fun ( &temp1800.env ,  (  ed4758 ) ,  ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"could not write to file " ) ,  ( 24 ) ) ) ,  (  filename4764 ) ) ) ) );
                    }
                }
                else {
                    if ( dref4766.tag == Maybe_276_Just_t ) {
                        struct envunion274  temp1835 = ( (struct envunion274){ .fun = (  enum Unit_8  (*) (  struct env256*  ,    struct Editor_267 *  ,    struct StrConcat_78  ) )set_dash_msg1498 , .env =  env->envinst256 } );
                        ( temp1835.fun ( &temp1835.env ,  (  ed4758 ) ,  ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"written " ) ,  ( 8 ) ) ) ,  ( dref4766 .stuff .Maybe_276_Just_s .field0 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)" bytes" ) ,  ( 6 ) ) ) ) ) ) );
                    }
                }
            } else {
                if ( (  eq623 ( (  cmd4762 ) , ( (  from_dash_charlike646 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  todo1836 ) ( ) );
                } else {
                    if ( (  eq623 ( (  cmd4762 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"ln" ) ,  ( 2 ) ) ) ) ) ) {
                        struct StrView_27  what4768 = ( (  take_dash_str_dash_while1730 ) ( (  sc4761 ) ,  (  is_dash_not_dash_whitespace1746 ) ) );
                        if ( (  eq623 ( (  what4768 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"on" ) ,  ( 2 ) ) ) ) ) ) {
                            (* (*  ed4758 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( true );
                        } else {
                            if ( (  eq623 ( (  what4768 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"off" ) ,  ( 3 ) ) ) ) ) ) {
                                (* (*  ed4758 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( false );
                            } else {
                                if ( ( (  cmp302 ( ( (  count368 ) ( ( (  chars295 ) ( (  what4768 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with1839 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"absolute" ) ,  ( 8 ) ) ) ,  (  what4768 ) ) ) ) ) {
                                    (* (*  ed4758 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( false );
                                } else {
                                    if ( ( (  cmp302 ( ( (  count368 ) ( ( (  chars295 ) ( (  what4768 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with1839 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"relative" ) ,  ( 8 ) ) ) ,  (  what4768 ) ) ) ) ) {
                                        (* (*  ed4758 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( true );
                                    }
                                }
                            }
                        }
                    } else {
                        if ( (  eq623 ( (  cmd4762 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"ft" ) ,  ( 2 ) ) ) ) ) ) {
                            struct StrView_27  type4769 = ( (  take_dash_str_dash_while1730 ) ( (  sc4761 ) ,  (  is_dash_not_dash_whitespace1746 ) ) );
                            struct TextBuf_117 *  tb4770 = ( ( * ( (  pane397 ) ( (  ed4758 ) ) ) ) .f_buf );
                            if ( (  eq623 ( (  type4769 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"text" ) ,  ( 4 ) ) ) ) ) ) {
                                ( (  set_dash_filetype1843 ) ( (  tb4770 ) ,  ( Filetype_120_Text ) ) );
                            } else {
                                if ( (  eq623 ( (  type4769 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"kc" ) ,  ( 2 ) ) ) ) ) ) {
                                    ( (  set_dash_filetype1843 ) ( (  tb4770 ) ,  ( Filetype_120_KC ) ) );
                                } else {
                                    if ( (  eq623 ( (  type4769 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"md" ) ,  ( 2 ) ) ) ) ) ) {
                                        ( (  set_dash_filetype1843 ) ( (  tb4770 ) ,  ( Filetype_120_Markdown ) ) );
                                    } else {
                                        struct envunion1854  temp1853 = ( (struct envunion1854){ .fun = (  enum Unit_8  (*) (  struct env258*  ,    struct Editor_267 *  ,    struct StrView_27  ) )set_dash_msg1786 , .env =  env->envinst258 } );
                                        ( temp1853.fun ( &temp1853.env ,  (  ed4758 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"unknown file type" ) ,  ( 17 ) ) ) ) );
                                    }
                                }
                            }
                        } else {
                            if ( (  eq623 ( (  cmd4762 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"testerror" ) ,  ( 9 ) ) ) ) ) ) {
                                ( (  panic853 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"test error" ) ,  ( 10 ) ) ) ) );
                            } else {
                                if ( (  eq623 ( (  cmd4762 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"theme" ) ,  ( 5 ) ) ) ) ) ) {
                                } else {
                                    if ( ( (  all1855 ) ( (  cmd4762 ) ,  (  is_dash_digit1110 ) ) ) ) {
                                    } else {
                                        struct envunion1864  temp1863 = ( (struct envunion1864){ .fun = (  enum Unit_8  (*) (  struct env258*  ,    struct Editor_267 *  ,    struct StrView_27  ) )set_dash_msg1786 , .env =  env->envinst258 } );
                                        ( temp1863.fun ( &temp1863.env ,  (  ed4758 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"unknown command" ) ,  ( 15 ) ) ) ) );
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Char_65   from_dash_u81867 (    uint8_t  b1485 ) {
    return ( (  char_dash_from_dash_u81180 ) ( (  b1485 ) ) );
}

static  struct Char_65   ascii_dash_char1866 (    char  c1494 ) {
    return ( (  from_dash_u81867 ) ( ( (  ascii_dash_u8599 ) ( (  c1494 ) ) ) ) );
}

static  struct Maybe_1104   reduce1871 (    struct StrViewIter_293  iterable1118 ,    struct Maybe_1104  base1120 ,    struct Maybe_1104 (*  fun1122 )(    struct Char_65  ,    struct Maybe_1104  ) ) {
    struct Maybe_1104  x1123 = (  base1120 );
    struct StrViewIter_293  it1124 = ( (  into_dash_iter294 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1125 = ( (  next352 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_351_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_351_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1872 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1872);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_1104  temp1873;
    return (  temp1873 );
}

static  struct Maybe_1104   sequence_dash_maybe1874 (    struct Char_65  e1935 ,    struct Maybe_1104  b1937 ) {
    struct Maybe_1104  dref1938 = (  b1937 );
    if ( dref1938.tag == Maybe_1104_None_t ) {
        return ( (struct Maybe_1104) { .tag = Maybe_1104_None_t } );
    }
    else {
        if ( dref1938.tag == Maybe_1104_Just_t ) {
            struct Maybe_171  dref1940 = ( (  parse_dash_digit1138 ) ( (  e1935 ) ) );
            if ( dref1940.tag == Maybe_171_None_t ) {
                return ( (struct Maybe_1104) { .tag = Maybe_1104_None_t } );
            }
            else {
                if ( dref1940.tag == Maybe_171_Just_t ) {
                    return ( ( Maybe_1104_Just ) ( (  op_dash_add366 ( (  op_dash_mul347 ( ( dref1938 .stuff .Maybe_1104_Just_s .field0 ) , (  from_dash_integral365 ( 10 ) ) ) ) , ( (  i32_dash_i641147 ) ( ( dref1940 .stuff .Maybe_171_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_1104   parse_dash_int1870 (    struct StrView_27  s1932 ) {
    struct StrViewIter_293  cs1942 = ( (  chars295 ) ( (  s1932 ) ) );
    struct Maybe_351  dref1943 = ( (  head1409 ) ( (  cs1942 ) ) );
    if ( dref1943.tag == Maybe_351_Just_t ) {
        return ( (  reduce1871 ) ( (  cs1942 ) ,  ( ( Maybe_1104_Just ) ( (  from_dash_integral365 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1874 ) ) );
    }
    else {
        if ( dref1943.tag == Maybe_351_None_t ) {
            return ( (struct Maybe_1104) { .tag = Maybe_1104_None_t } );
        }
    }
}

struct TakeWhile_1880 {
    struct StrViewIter_293  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1879 {
    struct TakeWhile_1880  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1879 Map_1879_Map (  struct TakeWhile_1880  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1879 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1879   into_dash_iter1882 (    struct Map_1879  self804 ) {
    return (  self804 );
}

static  struct Maybe_351   next1884 (    struct TakeWhile_1880 *  self989 ) {
    struct Maybe_351  mx990 = ( (  next352 ) ( ( & ( ( * (  self989 ) ) .f_it ) ) ) );
    struct Maybe_351  dref991 = (  mx990 );
    if ( dref991.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    else {
        if ( dref991.tag == Maybe_351_Just_t ) {
            if ( ( ( ( * (  self989 ) ) .f_pred ) ( ( dref991 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_351_Just ) ( ( dref991 .stuff .Maybe_351_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
            }
        }
    }
}

static  struct Maybe_276   next1883 (    struct Map_1879 *  dref806 ) {
    struct Maybe_351  dref809 = ( (  next1884 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_351_Just_t ) {
            return ( ( Maybe_276_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_351_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1881 (    struct Map_1879  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    size_t  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct Map_1879  it1124 = ( (  into_dash_iter1882 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_276  dref1125 = ( (  next1883 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_276_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_276_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_276_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1885 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1885);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1886;
    return (  temp1886 );
}

static  size_t   lam1887 (    size_t  v1137 ,    size_t  s1139 ) {
    return (  op_dash_add356 ( (  v1137 ) , (  s1139 ) ) );
}

static  size_t   sum1878 (    struct Map_1879  it1135 ) {
    return ( (  reduce1881 ) ( (  it1135 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1887 ) ) );
}

static  struct TakeWhile_1880   into_dash_iter1889 (    struct TakeWhile_1880  self986 ) {
    return (  self986 );
}

static  struct Map_1879   map1888 (    struct TakeWhile_1880  iterable813 ,    size_t (*  fun815 )(    struct Char_65  ) ) {
    struct TakeWhile_1880  it816 = ( (  into_dash_iter1889 ) ( (  iterable813 ) ) );
    return ( ( Map_1879_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct TakeWhile_1880   take_dash_while1890 (    struct StrViewIter_293  it995 ,    bool (*  pred997 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1880) { .f_it = ( (  into_dash_iter294 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  size_t   lam1891 (    struct Char_65  c2636 ) {
    return ( (  c2636 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1877 (    struct StrView_27  self2632 ,    bool (*  fun2634 )(    struct Char_65  ) ) {
    size_t  bi2637 = ( (  sum1878 ) ( ( (  map1888 ) ( ( (  take_dash_while1890 ) ( ( (  chars295 ) ( (  self2632 ) ) ) ,  (  fun2634 ) ) ) ,  (  lam1891 ) ) ) ) );
    return ( (  byte_dash_substr600 ) ( (  self2632 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2637 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1876 (    struct Scanner_1710 *  sc3482 ,    bool (*  fun3484 )(    struct Char_65  ) ) {
    struct StrView_27  s3485 = ( (  take_dash_while1877 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  (  fun3484 ) ) );
    (*  sc3482 ) .f_s = ( (  byte_dash_substr_dash_from588 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  ( (  num_dash_bytes396 ) ( (  s3485 ) ) ) ) );
    return (  s3485 );
}

struct TakeWhile_1896 {
    struct StrViewIter_293  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1895 {
    struct TakeWhile_1896  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1895 Map_1895_Map (  struct TakeWhile_1896  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1895 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1895   into_dash_iter1898 (    struct Map_1895  self804 ) {
    return (  self804 );
}

static  struct Maybe_351   next1900 (    struct TakeWhile_1896 *  self989 ) {
    struct Maybe_351  mx990 = ( (  next352 ) ( ( & ( ( * (  self989 ) ) .f_it ) ) ) );
    struct Maybe_351  dref991 = (  mx990 );
    if ( dref991.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    else {
        if ( dref991.tag == Maybe_351_Just_t ) {
            if ( ( ( ( * (  self989 ) ) .f_pred ) ( ( dref991 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_351_Just ) ( ( dref991 .stuff .Maybe_351_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
            }
        }
    }
}

static  struct Maybe_276   next1899 (    struct Map_1895 *  dref806 ) {
    struct Maybe_351  dref809 = ( (  next1900 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_351_Just_t ) {
            return ( ( Maybe_276_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_351_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1897 (    struct Map_1895  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    size_t  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct Map_1895  it1124 = ( (  into_dash_iter1898 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_276  dref1125 = ( (  next1899 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_276_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_276_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_276_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1901 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1901);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1902;
    return (  temp1902 );
}

static  size_t   lam1903 (    size_t  v1137 ,    size_t  s1139 ) {
    return (  op_dash_add356 ( (  v1137 ) , (  s1139 ) ) );
}

static  size_t   sum1894 (    struct Map_1895  it1135 ) {
    return ( (  reduce1897 ) ( (  it1135 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1903 ) ) );
}

static  struct TakeWhile_1896   into_dash_iter1905 (    struct TakeWhile_1896  self986 ) {
    return (  self986 );
}

static  struct Map_1895   map1904 (    struct TakeWhile_1896  iterable813 ,    size_t (*  fun815 )(    struct Char_65  ) ) {
    struct TakeWhile_1896  it816 = ( (  into_dash_iter1905 ) ( (  iterable813 ) ) );
    return ( ( Map_1895_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct TakeWhile_1896   take_dash_while1906 (    struct StrViewIter_293  it995 ,    bool (*  pred997 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1896) { .f_it = ( (  into_dash_iter294 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  size_t   lam1907 (    struct Char_65  c2636 ) {
    return ( (  c2636 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1893 (    struct StrView_27  self2632 ,    bool (*  fun2634 )(    struct Char_65  ) ) {
    size_t  bi2637 = ( (  sum1894 ) ( ( (  map1904 ) ( ( (  take_dash_while1906 ) ( ( (  chars295 ) ( (  self2632 ) ) ) ,  (  fun2634 ) ) ) ,  (  lam1907 ) ) ) ) );
    return ( (  byte_dash_substr600 ) ( (  self2632 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2637 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1892 (    struct Scanner_1710 *  sc3482 ,    bool (*  fun3484 )(    struct Char_65  ) ) {
    struct StrView_27  s3485 = ( (  take_dash_while1893 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  (  fun3484 ) ) );
    (*  sc3482 ) .f_s = ( (  byte_dash_substr_dash_from588 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  ( (  num_dash_bytes396 ) ( (  s3485 ) ) ) ) );
    return (  s3485 );
}

static  bool   lam1908 (    struct Char_65  c4754 ) {
    return ( ! ( (  is_dash_whitespace415 ) ( (  c4754 ) ) ) );
}

static  struct Theme_188 *   or_dash_else1909 (    struct Maybe_264  self1360 ,    struct Theme_188 *  alt1362 ) {
    struct Maybe_264  dref1363 = (  self1360 );
    if ( dref1363.tag == Maybe_264_None_t ) {
        return (  alt1362 );
    }
    else {
        if ( dref1363.tag == Maybe_264_Just_t ) {
            return ( dref1363 .stuff .Maybe_264_Just_s .field0 );
        }
    }
}

struct SliceIter_1915 {
    struct Slice_212  f_slice;
    size_t  f_current_dash_offset;
};

struct env1916 {
    ;
    struct StrView_27  name4311;
};

struct envunion1917 {
    bool  (*fun) (  struct env1916*  ,    struct Tuple2_213  );
    struct env1916 env;
};

struct Filter_1914 {
    struct SliceIter_1915  f_og;
    struct envunion1917  f_fun;
};

struct Map_1913 {
    struct Filter_1914  field0;
    struct Theme_188 * (*  field1 )(    struct Tuple2_213  );
};

static struct Map_1913 Map_1913_Map (  struct Filter_1914  field0 ,  struct Theme_188 * (*  field1 )(    struct Tuple2_213  ) ) {
    return ( struct Map_1913 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_1919 {
    enum {
        Maybe_1919_None_t,
        Maybe_1919_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_213  field0;
        } Maybe_1919_Just_s;
    } stuff;
};

static struct Maybe_1919 Maybe_1919_Just (  struct Tuple2_213  field0 ) {
    return ( struct Maybe_1919 ) { .tag = Maybe_1919_Just_t, .stuff = { .Maybe_1919_Just_s = { .field0 = field0 } } };
};

static  struct Tuple2_213 *   offset_dash_ptr1922 (    struct Tuple2_213 *  x377 ,    int64_t  count379 ) {
    struct Tuple2_213  temp1923;
    return ( (struct Tuple2_213 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1923 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_1919   next1921 (    struct SliceIter_1915 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1919) { .tag = Maybe_1919_None_t } );
    }
    struct Tuple2_213  elem2258 = ( * ( (  offset_dash_ptr1922 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1919_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_1919   next1920 (    struct Filter_1914 *  self841 ) {
    while ( ( true ) ) {
        struct Maybe_1919  dref842 = ( (  next1921 ) ( ( & ( ( * (  self841 ) ) .f_og ) ) ) );
        if ( dref842.tag == Maybe_1919_None_t ) {
            return ( (struct Maybe_1919) { .tag = Maybe_1919_None_t } );
        }
        else {
            if ( dref842.tag == Maybe_1919_Just_t ) {
                struct envunion1917  temp1924 = ( ( * (  self841 ) ) .f_fun );
                if ( ( temp1924.fun ( &temp1924.env ,  ( dref842 .stuff .Maybe_1919_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_1919_Just ) ( ( dref842 .stuff .Maybe_1919_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_1919  temp1925;
    return (  temp1925 );
}

static  struct Maybe_264   next1918 (    struct Map_1913 *  dref806 ) {
    struct Maybe_1919  dref809 = ( (  next1920 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_1919_None_t ) {
        return ( (struct Maybe_264) { .tag = Maybe_264_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_1919_Just_t ) {
            return ( ( Maybe_264_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_1919_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Map_1913   into_dash_iter1927 (    struct Map_1913  self804 ) {
    return (  self804 );
}

static  struct Maybe_264   head1912 (    struct Map_1913  it1167 ) {
    struct Map_1913  temp1926 = ( (  into_dash_iter1927 ) ( (  it1167 ) ) );
    return ( (  next1918 ) ( ( &temp1926 ) ) );
}

static  struct Filter_1914   into_dash_iter1929 (    struct Filter_1914  self838 ) {
    return (  self838 );
}

static  struct Map_1913   map1928 (    struct Filter_1914  iterable813 ,    struct Theme_188 * (*  fun815 )(    struct Tuple2_213  ) ) {
    struct Filter_1914  it816 = ( (  into_dash_iter1929 ) ( (  iterable813 ) ) );
    return ( ( Map_1913_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct SliceIter_1915   into_dash_iter1931 (    struct Slice_212  self2250 ) {
    return ( (struct SliceIter_1915) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_1914   filter1930 (    struct Slice_212  iterable846 ,   struct envunion1917  fun848 ) {
    struct SliceIter_1915  it849 = ( (  into_dash_iter1931 ) ( (  iterable846 ) ) );
    return ( (struct Filter_1914) { .f_og = (  it849 ) , .f_fun = (  fun848 ) } );
}

static  bool   lam1932 (   struct env1916* env ,    struct Tuple2_213  dref4312 ) {
    return ( (  begins_dash_with1839 ) ( ( dref4312 .field0 ) ,  ( env->name4311 ) ) );
}

static  struct Theme_188 *   snd1933 (    struct Tuple2_213  dref1566 ) {
    return ( dref1566 .field1 );
}

static  struct Maybe_264   match_dash_theme1911 (   struct env221* env ,    struct StrView_27  name4311 ) {
    if ( ( (  null1747 ) ( (  name4311 ) ) ) ) {
        return ( (struct Maybe_264) { .tag = Maybe_264_None_t } );
    }
    struct env1916 envinst1916 = {
        .name4311 =  name4311 ,
    };
    return ( (  head1912 ) ( ( (  map1928 ) ( ( (  filter1930 ) ( ( env->all_dash_themes4308 ) ,  ( (struct envunion1917){ .fun = (  bool  (*) (  struct env1916*  ,    struct Tuple2_213  ) )lam1932 , .env =  envinst1916 } ) ) ) ,  (  snd1933 ) ) ) ) );
}

static  enum Unit_8   live_dash_cmd1869 (   struct env262* env ,    struct Editor_267 *  ed4744 ,    struct StrView_27  cmd4746 ) {
    struct Maybe_1104  dref4747 = ( (  parse_dash_int1870 ) ( (  cmd4746 ) ) );
    if ( dref4747.tag == Maybe_1104_Just_t ) {
        int32_t  line4749 = ( (  clamp1555 ) ( ( (  i64_dash_i321149 ) ( ( dref4747 .stuff .Maybe_1104_Just_s .field0 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  ( (  num_dash_lines420 ) ( ( ( * ( (  pane397 ) ( (  ed4744 ) ) ) ) .f_buf ) ) ) ) );
        int32_t  line4750 = (  op_dash_sub180 ( (  line4749 ) , (  from_dash_integral56 ( 1 ) ) ) );
        ( (  set_dash_cursors287 ) ( ( (  pane397 ) ( (  ed4744 ) ) ) ,  ( (struct Pos_26) { .f_line = (  line4750 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_NoChanges ) ) );
    }
    else {
        if ( dref4747.tag == Maybe_1104_None_t ) {
            struct Scanner_1710  temp1875 = ( (  mk_dash_from_dash_strview1712 ) ( (  cmd4746 ) ) );
            struct Scanner_1710 *  sc4751 = ( &temp1875 );
            struct StrView_27  cmd4752 = ( (  take_dash_str_dash_while1876 ) ( (  sc4751 ) ,  (  is_dash_alpha1406 ) ) );
            if ( (  eq623 ( (  cmd4752 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"theme" ) ,  ( 5 ) ) ) ) ) ) {
                ( (  drop_dash_str_dash_while1713 ) ( (  sc4751 ) ,  (  is_dash_whitespace415 ) ) );
                struct StrView_27  theme_dash_name4755 = ( (  take_dash_str_dash_while1892 ) ( (  sc4751 ) ,  (  lam1908 ) ) );
                struct envunion263  temp1910 = ( (struct envunion263){ .fun = (  struct Maybe_264  (*) (  struct env221*  ,    struct StrView_27  ) )match_dash_theme1911 , .env =  env->envinst221 } );
                (* (*  ed4744 ) .f_cfg ) .f_theme = ( (  or_dash_else1909 ) ( ( temp1910.fun ( &temp1910.env ,  (  theme_dash_name4755 ) ) ) ,  ( ( * (  ed4744 ) ) .f_og_dash_theme ) ) );
            } else {
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrViewIter_293   into_dash_iter1937 (    struct StrBuilder_62  self2932 ) {
    return ( (  chars1778 ) ( (  self2932 ) ) );
}

static  struct Maybe_351   head1935 (    struct StrBuilder_62  it1167 ) {
    struct StrViewIter_293  temp1936 = ( (  into_dash_iter1937 ) ( (  it1167 ) ) );
    return ( (  next352 ) ( ( &temp1936 ) ) );
}

static  bool   null1934 (    struct StrBuilder_62  it1176 ) {
    struct Maybe_351  dref1177 = ( (  head1935 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_351_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  uint8_t *   get_dash_ptr1944 (    struct List_13 *  list2406 ,    size_t  i2408 ) {
    if ( ( (  cmp302 ( (  i2408 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2408 ) , ( ( * (  list2406 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2408 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2406 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr674 ) ( ( ( * (  list2406 ) ) .f_elements ) ,  (  i2408 ) ) );
}

static  uint8_t   get1943 (    struct List_13 *  list2416 ,    size_t  i2418 ) {
    return ( * ( (  get_dash_ptr1944 ) ( (  list2416 ) ,  (  i2418 ) ) ) );
}

static  struct Maybe_74   last1942 (    struct List_13 *  list2503 ) {
    if ( (  eq283 ( ( ( * (  list2503 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_74) { .tag = Maybe_74_None_t } );
    } else {
        return ( ( Maybe_74_Just ) ( ( (  get1943 ) ( (  list2503 ) ,  (  op_dash_sub462 ( ( (  size766 ) ( (  list2503 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) );
    }
}

static  enum Unit_8   remove1946 (   struct env42* env ,    struct List_13 *  list2487 ,    size_t  i2489 ) {
    struct envunion43  temp1947 = ( (struct envunion43){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  ) )remove_dash_range768 , .env =  env->envinst40 } );
    ( temp1947.fun ( &temp1947.env ,  (  list2487 ) ,  (  i2489 ) ,  (  op_dash_add356 ( (  i2489 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_74   pop1941 (   struct env44* env ,    struct List_13 *  list2506 ) {
    if ( (  eq283 ( ( ( * (  list2506 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic853 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct Maybe_74  last_dash_elem2507 = ( (  last1942 ) ( (  list2506 ) ) );
    struct envunion45  temp1945 = ( (struct envunion45){ .fun = (  enum Unit_8  (*) (  struct env42*  ,    struct List_13 *  ,    size_t  ) )remove1946 , .env =  env->envinst42 } );
    ( temp1945.fun ( &temp1945.env ,  (  list2506 ) ,  (  op_dash_sub462 ( ( ( * (  list2506 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return (  last_dash_elem2507 );
}

static  struct Maybe_74   pop1939 (   struct env72* env ,    struct StrBuilder_62 *  sb2895 ) {
    struct envunion73  temp1940 = ( (struct envunion73){ .fun = (  struct Maybe_74  (*) (  struct env44*  ,    struct List_13 *  ) )pop1941 , .env =  env->envinst44 } );
    return ( temp1940.fun ( &temp1940.env ,  ( & ( ( * (  sb2895 ) ) .f_chars ) ) ) );
}

struct envunion1949 {
    enum Unit_8  (*fun) (  struct env262*  ,    struct Editor_267 *  ,    struct StrView_27  );
    struct env262 env;
};

struct env1951 {
    struct Editor_267 *  ed4845;
    ;
};

struct envunion1952 {
    enum Unit_8  (*fun) (  struct env1951*  ,    struct StrView_27  );
    struct env1951 env;
};

static  enum Unit_8   if_dash_just1950 (    struct Maybe_85  x1601 ,   struct envunion1952  fun1603 ) {
    struct Maybe_85  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_85_Just_t ) {
        struct envunion1952  temp1953 = (  fun1603 );
        ( temp1953.fun ( &temp1953.env ,  ( dref1604 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1954 (   struct env1951* env ,    struct StrView_27  st4862 ) {
    ( (  free689 ) ( (  st4862 ) ,  ( ( * ( env->ed4845 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

struct envunion1956 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

static  enum Unit_8   live_dash_search1957 (    struct Editor_267 *  ed4773 ,    struct Pos_26  begin_dash_pos4775 ,    struct StrView_27  query4777 ) {
    if ( ( ! ( (  null1747 ) ( (  query4777 ) ) ) ) ) {
        struct Maybe_1582  dref4778 = ( (  search_dash_from1583 ) ( ( (  pane397 ) ( (  ed4773 ) ) ) ,  (  begin_dash_pos4775 ) ,  (  query4777 ) ) );
        if ( dref4778.tag == Maybe_1582_Just_t ) {
            ( (  set_dash_cursors287 ) ( ( (  pane397 ) ( (  ed4773 ) ) ) ,  ( dref4778 .stuff .Maybe_1582_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4778 .stuff .Maybe_1582_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_288_NoChanges ) ) );
        }
        else {
            if ( dref4778.tag == Maybe_1582_None_t ) {
                ( (  set_dash_cursors287 ) ( ( (  pane397 ) ( (  ed4773 ) ) ) ,  (  begin_dash_pos4775 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors287 ) ( ( (  pane397 ) ( (  ed4773 ) ) ) ,  (  begin_dash_pos4775 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_NoChanges ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1959 {
    struct Maybe_74  (*fun) (  struct env72*  ,    struct StrBuilder_62 *  );
    struct env72 env;
};

struct SliceIter_1961 {
    struct Slice_270  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1961   into_dash_iter1962 (    struct Slice_270  self2250 ) {
    return ( (struct SliceIter_1961) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_1964 {
    enum {
        Maybe_1964_None_t,
        Maybe_1964_Just_t,
    } tag;
    union {
        struct {
            struct MenuItem_271  field0;
        } Maybe_1964_Just_s;
    } stuff;
};

static struct Maybe_1964 Maybe_1964_Just (  struct MenuItem_271  field0 ) {
    return ( struct Maybe_1964 ) { .tag = Maybe_1964_Just_t, .stuff = { .Maybe_1964_Just_s = { .field0 = field0 } } };
};

static  struct MenuItem_271 *   offset_dash_ptr1966 (    struct MenuItem_271 *  x377 ,    int64_t  count379 ) {
    struct MenuItem_271  temp1967;
    return ( (struct MenuItem_271 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1967 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_1964   next1965 (    struct SliceIter_1961 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1964) { .tag = Maybe_1964_None_t } );
    }
    struct MenuItem_271  elem2258 = ( * ( (  offset_dash_ptr1966 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1964_Just ) ( (  elem2258 ) ) );
}

static  enum Unit_8   handle_dash_key1223 (   struct env439* env ,    struct Editor_267 *  ed4845 ,    struct Key_446  key4847 ) {
    struct EditorMode_268 *  dref4848 = ( & ( ( * (  ed4845 ) ) .f_mode ) );
    if ( (* dref4848 ).tag == EditorMode_268_Normal_t ) {
        enum Mode_242  dref4849 = ( ( ( * (  ed4845 ) ) .f_pane ) .f_mode );
        switch (  dref4849 ) {
            case Mode_242_Normal : {
                struct envunion445  temp1224 = ( (struct envunion445){ .fun = (  enum Unit_8  (*) (  struct env428*  ,    struct Editor_267 *  ,    struct Key_446  ) )handle_dash_normal_dash_key1225 , .env =  env->envinst428 } );
                ( temp1224.fun ( &temp1224.env ,  (  ed4845 ) ,  (  key4847 ) ) );
                break;
            }
            case Mode_242_Select : {
                struct envunion1694  temp1693 = ( (struct envunion1694){ .fun = (  enum Unit_8  (*) (  struct env428*  ,    struct Editor_267 *  ,    struct Key_446  ) )handle_dash_normal_dash_key1225 , .env =  env->envinst428 } );
                ( temp1693.fun ( &temp1693.env ,  (  ed4845 ) ,  (  key4847 ) ) );
                break;
            }
            case Mode_242_Insert : {
                struct Key_446  dref4850 = (  key4847 );
                if ( dref4850.tag == Key_446_Escape_t ) {
                    ( (  set_dash_mode1238 ) ( ( (  pane397 ) ( (  ed4845 ) ) ) ,  ( Mode_242_Normal ) ) );
                }
                else {
                    if ( dref4850.tag == Key_446_Enter_t ) {
                        int32_t  indent4851 = ( (  indent_dash_at_dash_line400 ) ( ( (  pane397 ) ( (  ed4845 ) ) ) ,  ( ( ( * ( (  pane397 ) ( (  ed4845 ) ) ) ) .f_cursor ) .f_line ) ) );
                        struct envunion447  temp1695 = ( (struct envunion447){ .fun = (  enum Unit_8  (*) (  struct env225*  ,    struct Pane_241 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1241 , .env =  env->envinst225 } );
                        ( temp1695.fun ( &temp1695.env ,  ( (  pane397 ) ( (  ed4845 ) ) ) ,  ( (  from_dash_charlike646 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right1231 ) ( ( (  pane397 ) ( (  ed4845 ) ) ) ) );
                        struct envunion444  temp1696 = ( (struct envunion444){ .fun = (  enum Unit_8  (*) (  struct env247*  ,    struct Pane_241 *  ,    int32_t  ) )indent_dash_at_dash_current1376 , .env =  env->envinst247 } );
                        ( temp1696.fun ( &temp1696.env ,  ( (  pane397 ) ( (  ed4845 ) ) ) ,  (  indent4851 ) ) );
                    }
                    else {
                        if ( dref4850.tag == Key_446_Backspace_t ) {
                            struct envunion440  temp1697 = ( (struct envunion440){ .fun = (  enum Unit_8  (*) (  struct env228*  ,    struct Pane_241 *  ) )backspace1698 , .env =  env->envinst228 } );
                            ( temp1697.fun ( &temp1697.env ,  ( (  pane397 ) ( (  ed4845 ) ) ) ) );
                        }
                        else {
                            if ( dref4850.tag == Key_446_Char_t ) {
                                struct Array_1701  temp1705 = ( (struct Array_1701) { ._arr = { ( dref4850 .stuff .Key_446_Char_s .field0 ) } } );
                                struct Array_1701  temp1703 = ( (  from_dash_listlike1704 ) ( ( &temp1705 ) ) );
                                struct StrView_27  s4853 = ( (  from_dash_ascii_dash_slice1101 ) ( ( (  as_dash_slice1700 ) ( ( &temp1703 ) ) ) ) );
                                struct envunion1707  temp1706 = ( (struct envunion1707){ .fun = (  enum Unit_8  (*) (  struct env225*  ,    struct Pane_241 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1241 , .env =  env->envinst225 } );
                                ( temp1706.fun ( &temp1706.env ,  ( (  pane397 ) ( (  ed4845 ) ) ) ,  (  s4853 ) ) );
                                ( (  move_dash_right1231 ) ( ( (  pane397 ) ( (  ed4845 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4848 ).tag == EditorMode_268_Cmd_t ) {
            struct Key_446  dref4856 = (  key4847 );
            if ( dref4856.tag == Key_446_Escape_t ) {
                ( (  set_dash_cursors287 ) ( ( (  pane397 ) ( (  ed4845 ) ) ) ,  ( (* dref4848 ) .stuff .EditorMode_268_Cmd_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_UpdateVI ) ) );
                (*  ed4845 ) .f_mode = ( (struct EditorMode_268) { .tag = EditorMode_268_Normal_t } );
                (* (*  ed4845 ) .f_cfg ) .f_theme = ( ( * (  ed4845 ) ) .f_og_dash_theme );
            }
            else {
                if ( dref4856.tag == Key_446_Enter_t ) {
                    struct envunion448  temp1708 = ( (struct envunion448){ .fun = (  enum Unit_8  (*) (  struct env265*  ,    struct Editor_267 *  ,    struct StrView_27  ) )run_dash_cmd1709 , .env =  env->envinst265 } );
                    ( temp1708.fun ( &temp1708.env ,  (  ed4845 ) ,  ( (  as_dash_str1543 ) ( ( & ( (* dref4848 ) .stuff .EditorMode_268_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1783 ) ( ( & ( (* dref4848 ) .stuff .EditorMode_268_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors287 ) ( ( (  pane397 ) ( (  ed4845 ) ) ) ,  ( ( * ( (  pane397 ) ( (  ed4845 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_UpdateVI ) ) );
                    (*  ed4845 ) .f_mode = ( (struct EditorMode_268) { .tag = EditorMode_268_Normal_t } );
                    (*  ed4845 ) .f_og_dash_theme = ( ( * ( ( * (  ed4845 ) ) .f_cfg ) ) .f_theme );
                }
                else {
                    if ( dref4856.tag == Key_446_Char_t ) {
                        struct envunion442  temp1865 = ( (struct envunion442){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1535 , .env =  env->envinst60 } );
                        ( temp1865.fun ( &temp1865.env ,  ( & ( (* dref4848 ) .stuff .EditorMode_268_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1866 ) ( ( dref4856 .stuff .Key_446_Char_s .field0 ) ) ) ) );
                        struct envunion441  temp1868 = ( (struct envunion441){ .fun = (  enum Unit_8  (*) (  struct env262*  ,    struct Editor_267 *  ,    struct StrView_27  ) )live_dash_cmd1869 , .env =  env->envinst262 } );
                        ( temp1868.fun ( &temp1868.env ,  (  ed4845 ) ,  ( (  as_dash_str1543 ) ( ( & ( (* dref4848 ) .stuff .EditorMode_268_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4856.tag == Key_446_Backspace_t ) {
                            if ( ( ! ( (  null1934 ) ( ( (* dref4848 ) .stuff .EditorMode_268_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion443  temp1938 = ( (struct envunion443){ .fun = (  struct Maybe_74  (*) (  struct env72*  ,    struct StrBuilder_62 *  ) )pop1939 , .env =  env->envinst72 } );
                                ( temp1938.fun ( &temp1938.env ,  ( & ( (* dref4848 ) .stuff .EditorMode_268_Cmd_s .field1 ) ) ) );
                            }
                            struct envunion1949  temp1948 = ( (struct envunion1949){ .fun = (  enum Unit_8  (*) (  struct env262*  ,    struct Editor_267 *  ,    struct StrView_27  ) )live_dash_cmd1869 , .env =  env->envinst262 } );
                            ( temp1948.fun ( &temp1948.env ,  (  ed4845 ) ,  ( (  as_dash_str1543 ) ( ( & ( (* dref4848 ) .stuff .EditorMode_268_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref4848 ).tag == EditorMode_268_Search_t ) {
                struct Key_446  dref4860 = (  key4847 );
                if ( dref4860.tag == Key_446_Escape_t ) {
                    ( (  set_dash_cursors287 ) ( ( (  pane397 ) ( (  ed4845 ) ) ) ,  ( (* dref4848 ) .stuff .EditorMode_268_Search_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_UpdateVI ) ) );
                    (*  ed4845 ) .f_mode = ( (struct EditorMode_268) { .tag = EditorMode_268_Normal_t } );
                }
                else {
                    if ( dref4860.tag == Key_446_Enter_t ) {
                        ( (  set_dash_cursors287 ) ( ( (  pane397 ) ( (  ed4845 ) ) ) ,  ( ( * ( (  pane397 ) ( (  ed4845 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane397 ) ( (  ed4845 ) ) ) ) .f_sel ) ,  ( CursorMovement_288_UpdateVI ) ) );
                        struct env1951 envinst1951 = {
                            .ed4845 =  ed4845 ,
                        };
                        ( (  if_dash_just1950 ) ( ( ( * (  ed4845 ) ) .f_search_dash_term ) ,  ( (struct envunion1952){ .fun = (  enum Unit_8  (*) (  struct env1951*  ,    struct StrView_27  ) )lam1954 , .env =  envinst1951 } ) ) );
                        if ( ( ! ( (  null1934 ) ( ( (* dref4848 ) .stuff .EditorMode_268_Search_s .field1 ) ) ) ) ) {
                            struct Pos_26  to4863 = ( ( * ( (  pane397 ) ( (  ed4845 ) ) ) ) .f_cursor );
                            struct Pos_26  from4864 = ( (  or_dash_else1474 ) ( ( ( * ( (  pane397 ) ( (  ed4845 ) ) ) ) .f_sel ) ,  (  to4863 ) ) );
                            (*  ed4845 ) .f_search_dash_term = ( ( Maybe_85_Just ) ( ( (  as_dash_str1543 ) ( ( & ( (* dref4848 ) .stuff .EditorMode_268_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4845 ) .f_search_dash_term = ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
                        }
                        (*  ed4845 ) .f_mode = ( (struct EditorMode_268) { .tag = EditorMode_268_Normal_t } );
                    }
                    else {
                        if ( dref4860.tag == Key_446_Char_t ) {
                            struct envunion1956  temp1955 = ( (struct envunion1956){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1535 , .env =  env->envinst60 } );
                            ( temp1955.fun ( &temp1955.env ,  ( & ( (* dref4848 ) .stuff .EditorMode_268_Search_s .field1 ) ) ,  ( (  ascii_dash_char1866 ) ( ( dref4860 .stuff .Key_446_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1957 ) ( (  ed4845 ) ,  ( (* dref4848 ) .stuff .EditorMode_268_Search_s .field0 ) ,  ( (  as_dash_str1543 ) ( ( & ( (* dref4848 ) .stuff .EditorMode_268_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4860.tag == Key_446_Backspace_t ) {
                                if ( ( ! ( (  null1934 ) ( ( (* dref4848 ) .stuff .EditorMode_268_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1959  temp1958 = ( (struct envunion1959){ .fun = (  struct Maybe_74  (*) (  struct env72*  ,    struct StrBuilder_62 *  ) )pop1939 , .env =  env->envinst72 } );
                                    ( temp1958.fun ( &temp1958.env ,  ( & ( (* dref4848 ) .stuff .EditorMode_268_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1957 ) ( (  ed4845 ) ,  ( (* dref4848 ) .stuff .EditorMode_268_Search_s .field0 ) ,  ( (  as_dash_str1543 ) ( ( & ( (* dref4848 ) .stuff .EditorMode_268_Search_s .field1 ) ) ) ) ) );
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
                if ( (* dref4848 ).tag == EditorMode_268_Menu_t ) {
                    struct Key_446  dref4867 = (  key4847 );
                    if ( dref4867.tag == Key_446_Char_t ) {
                        struct SliceIter_1961  temp1960 =  into_dash_iter1962 ( ( ( (* dref4848 ) .stuff .EditorMode_268_Menu_s .field0 ) .f_items ) );
                        while (true) {
                            struct Maybe_1964  __cond1963 =  next1965 (&temp1960);
                            if (  __cond1963 .tag == 0 ) {
                                break;
                            }
                            struct MenuItem_271  menu_dash_item4870 =  __cond1963 .stuff .Maybe_1964_Just_s .field0;
                            if ( (  eq1073 ( ( (  menu_dash_item4870 ) .f_key ) , ( dref4867 .stuff .Key_446_Char_s .field0 ) ) ) ) {
                                ( ( (  menu_dash_item4870 ) .f_action ) ( (  ed4845 ) ) );
                            }
                        }
                        (*  ed4845 ) .f_mode = ( (struct EditorMode_268) { .tag = EditorMode_268_Normal_t } );
                    }
                    else {
                        if ( dref4867.tag == Key_446_Escape_t ) {
                            (*  ed4845 ) .f_mode = ( (struct EditorMode_268) { .tag = EditorMode_268_Normal_t } );
                        }
                        else {
                            if ( true ) {
                            }
                        }
                    }
                }
                else {
                    if ( true ) {
                        ( (  todo1836 ) ( ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1969 {
    bool  (*fun) (  struct env99*  ,    struct Screen_451 *  );
    struct env99 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1970 (   struct env99* env ,    struct Screen_451 *  screen3727 ) {
    struct Tui_97 *  tui3728 = ( ( * (  screen3727 ) ) .f_tui );
    struct envunion100  temp1971 = ( (struct envunion100){ .fun = (  bool  (*) (  struct env94*  ,    struct Tui_97 *  ) )update_dash_dimensions1025 , .env =  env->envinst94 } );
    bool  updated_dash_dimensions3729 = ( temp1971.fun ( &temp1971.env ,  (  tui3728 ) ) );
    if ( ( ! (  updated_dash_dimensions3729 ) ) ) {
        return ( false );
    }
    (*  screen3727 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3730 = ( ( * ( ( * (  screen3727 ) ) .f_tui ) ) .f_width );
    uint32_t  h3731 = ( ( * ( ( * (  screen3727 ) ) .f_tui ) ) .f_height );
    size_t  nusz3732 = ( (  u32_dash_size974 ) ( (  op_dash_mul183 ( (  w3730 ) , (  h3731 ) ) ) ) );
    if ( (  cmp302 ( (  nusz3732 ) , ( ( ( * (  screen3727 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_451  nuscreen3733 = ( (  mk_dash_screen968 ) ( (  tui3728 ) ,  ( ( * (  screen3727 ) ) .f_al ) ) );
    (*  screen3727 ) .f_current = ( (  nuscreen3733 ) .f_current );
    (*  screen3727 ) .f_previous = ( (  nuscreen3733 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1972 (    struct Tui_97 *  tui3654 ) {
    bool  redraw3655 = ( ( * (  tui3654 ) ) .f_should_dash_redraw );
    (*  tui3654 ) .f_should_dash_redraw = ( false );
    return (  redraw3655 );
}

struct env1976 {
    struct Slice_452  s2328;
    ;
    struct Cell_453 (*  fun2330 )(    struct Cell_453  );
    ;
    ;
};

struct envunion1977 {
    enum Unit_8  (*fun) (  struct env1976*  ,    int32_t  );
    struct env1976 env;
};

static  enum Unit_8   for_dash_each1975 (    struct Range_166  iterable1099 ,   struct envunion1977  fun1101 ) {
    struct RangeIter_169  temp1978 = ( (  into_dash_iter170 ) ( (  iterable1099 ) ) );
    struct RangeIter_169 *  it1102 = ( &temp1978 );
    while ( ( true ) ) {
        struct Maybe_171  dref1103 = ( (  next172 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_171_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_171_Just_t ) {
                struct envunion1977  temp1979 = (  fun1101 );
                ( temp1979.fun ( &temp1979.env ,  ( dref1103 .stuff .Maybe_171_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1980 (   struct env1976* env ,    int32_t  i2332 ) {
    return ( (  set989 ) ( ( env->s2328 ) ,  ( (  i32_dash_size280 ) ( (  i2332 ) ) ) ,  ( ( env->fun2330 ) ( (  elem_dash_get993 ( ( env->s2328 ) , ( (  i32_dash_size280 ) ( (  i2332 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map1974 (    struct Slice_452  s2328 ,    struct Cell_453 (*  fun2330 )(    struct Cell_453  ) ) {
    struct env1976 envinst1976 = {
        .s2328 =  s2328 ,
        .fun2330 =  fun2330 ,
    };
    ( (  for_dash_each1975 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32311 ) ( (  op_dash_sub462 ( ( (  s2328 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1977){ .fun = (  enum Unit_8  (*) (  struct env1976*  ,    int32_t  ) )lam1980 , .env =  envinst1976 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_453   lam1981 (    struct Cell_453  dref3691 ) {
    return ( (  default_dash_cell1001 ) ( ) );
}

static  enum Unit_8   clear_dash_screen1973 (    struct Screen_451 *  screen3690 ) {
    ( (  map1974 ) ( ( ( * (  screen3690 ) ) .f_current ) ,  (  lam1981 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_fg1982 (    struct Screen_451 *  screen3736 ,    struct Color_154  c3738 ) {
    (*  screen3736 ) .f_default_dash_fg = (  c3738 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_bg1983 (    struct Screen_451 *  screen3741 ,    struct Color_154  c3743 ) {
    (*  screen3741 ) .f_default_dash_bg = (  c3743 );
    return ( Unit_8_Unit );
}

static  int32_t   cast1987 (    uint32_t  x395 ) {
    return ( (int32_t ) (  x395 ) );
}

static  int32_t   u32_dash_i321986 (    uint32_t  x744 ) {
    return ( (  cast1987 ) ( (  x744 ) ) );
}

struct Maybe_1992 {
    enum {
        Maybe_1992_None_t,
        Maybe_1992_Just_t,
    } tag;
    union {
        struct {
            struct Cell_453 *  field0;
        } Maybe_1992_Just_s;
    } stuff;
};

static struct Maybe_1992 Maybe_1992_Just (  struct Cell_453 *  field0 ) {
    return ( struct Maybe_1992 ) { .tag = Maybe_1992_Just_t, .stuff = { .Maybe_1992_Just_s = { .field0 = field0 } } };
};

static  struct Cell_453 *   undefined1993 (  ) {
    struct Cell_453 *  temp1994;
    return (  temp1994 );
}

static  struct Cell_453 *   or_dash_fail1991 (    struct Maybe_1992  x1353 ,    struct StrView_27  errmsg1355 ) {
    struct Maybe_1992  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_1992_None_t ) {
        ( (  panic853 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1993 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_1992_Just_t ) {
            return ( dref1356 .stuff .Maybe_1992_Just_s .field0 );
        }
    }
}

static  struct Maybe_1992   get_dash_cell_dash_ptr1995 (    struct Screen_451 *  screen3757 ,    int32_t  x3759 ,    int32_t  y3761 ) {
    int32_t  w3762 = ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3757 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  x3759 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  x3759 ) , (  w3762 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1992) { .tag = Maybe_1992_None_t } );
    }
    if ( ( (  cmp173 ( (  y3761 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3761 ) , ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3757 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1992) { .tag = Maybe_1992_None_t } );
    }
    size_t  i3763 = ( (  i32_dash_size280 ) ( (  op_dash_add175 ( (  op_dash_mul1597 ( (  y3761 ) , (  w3762 ) ) ) , (  x3759 ) ) ) ) );
    return ( ( Maybe_1992_Just ) ( ( (  get_dash_ptr990 ) ( ( ( * (  screen3757 ) ) .f_current ) ,  (  i3763 ) ) ) ) );
}

static  enum Unit_8   fill_dash_default1984 (    struct Screen_451 *  screen3766 ) {
    struct RangeIter_169  temp1985 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3766 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond1988 =  next172 (&temp1985);
        if (  __cond1988 .tag == 0 ) {
            break;
        }
        int32_t  y3768 =  __cond1988 .stuff .Maybe_171_Just_s .field0;
        struct RangeIter_169  temp1989 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3766 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_171  __cond1990 =  next172 (&temp1989);
            if (  __cond1990 .tag == 0 ) {
                break;
            }
            int32_t  x3770 =  __cond1990 .stuff .Maybe_171_Just_s .field0;
            struct Cell_453 *  cell3771 = ( (  or_dash_fail1991 ) ( ( (  get_dash_cell_dash_ptr1995 ) ( (  screen3766 ) ,  (  x3770 ) ,  (  y3768 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"no cell??" ) ,  ( 9 ) ) ) ) );
            (*  cell3771 ) .f_bg = ( ( * (  screen3766 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1997 {
    enum Unit_8  (*fun) (  struct env449*  ,    struct Screen_451 *  ,    struct Editor_267 *  );
    struct env449 env;
};

struct IntStrIter_2002 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

static  struct IntStrIter_2002   into_dash_iter2004 (    struct IntStrIter_2002  self1396 ) {
    return (  self1396 );
}

struct env2008 {
    int32_t  base1386;
    ;
};

struct envunion2009 {
    int32_t  (*fun) (  struct env2008*  ,    int32_t  ,    int32_t  );
    struct env2008 env;
};

static  int32_t   reduce2007 (    struct Range_166  iterable1118 ,    int32_t  base1120 ,   struct envunion2009  fun1122 ) {
    int32_t  x1123 = (  base1120 );
    struct RangeIter_169  it1124 = ( (  into_dash_iter170 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next172 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                struct envunion2009  temp2010 = (  fun1122 );
                x1123 = ( temp2010.fun ( &temp2010.env ,  ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2011 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2011);
    abort ( );
    ( Unit_8_Unit );
    int32_t  temp2012;
    return (  temp2012 );
}

static  int32_t   lam2013 (   struct env2008* env ,    int32_t  item1390 ,    int32_t  x1392 ) {
    return (  op_dash_mul1597 ( (  x1392 ) , ( env->base1386 ) ) );
}

static  int32_t   pow2006 (    int32_t  base1386 ,    int32_t  p1388 ) {
    struct env2008 envinst2008 = {
        .base1386 =  base1386 ,
    };
    return ( (  reduce2007 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( (  p1388 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  ( (struct envunion2009){ .fun = (  int32_t  (*) (  struct env2008*  ,    int32_t  ,    int32_t  ) )lam2013 , .env =  envinst2008 } ) ) );
}

static  struct Maybe_351   next2005 (    struct IntStrIter_2002 *  self1399 ) {
    if ( ( ( * (  self1399 ) ) .f_negative ) ) {
        (*  self1399 ) .f_negative = ( false );
        return ( ( Maybe_351_Just ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp173 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    int32_t  trim_dash_down1400 = ( (  pow2006 ) ( (  from_dash_integral56 ( 10 ) ) ,  (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  upper1401 = (  op_dash_div1596 ( ( ( * (  self1399 ) ) .f_int ) , (  trim_dash_down1400 ) ) );
    int32_t  upper_dash_mask1402 = (  op_dash_mul1597 ( (  op_dash_div1596 ( (  upper1401 ) , (  from_dash_integral56 ( 10 ) ) ) ) , (  from_dash_integral56 ( 10 ) ) ) );
    uint8_t  digit1403 = ( ( (  cast471 ) ( (  op_dash_sub180 ( (  upper1401 ) , (  upper_dash_mask1402 ) ) ) ) ) );
    (*  self1399 ) .f_len = (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1404 = ( (  char_dash_from_dash_u81180 ) ( (  op_dash_add1070 ( (  digit1403 ) , (  from_dash_integral328 ( 48 ) ) ) ) ) );
    return ( ( Maybe_351_Just ) ( (  digit_dash_char1404 ) ) );
}

static  size_t   reduce2003 (    struct IntStrIter_2002  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct IntStrIter_2002  it1124 = ( (  into_dash_iter2004 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1125 = ( (  next2005 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_351_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_351_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2014 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2014);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp2015;
    return (  temp2015 );
}

static  size_t   lam2016 (    struct Char_65  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add356 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2001 (    struct IntStrIter_2002  it1129 ) {
    return ( (  reduce2003 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2016 ) ) );
}

static  int32_t   count_dash_digits2019 (    int32_t  self1407 ) {
    if ( (  eq700 ( (  self1407 ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1408 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp173 ( (  self1407 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ) {
        self1407 = (  op_dash_div1596 ( (  self1407 ) , (  from_dash_integral56 ( 10 ) ) ) );
        digits1408 = (  op_dash_add175 ( (  digits1408 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1408 );
}

static  struct IntStrIter_2002   int_dash_iter2018 (    int32_t  int1411 ) {
    if ( (  cmp173 ( (  int1411 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_2002) { .f_int = (  op_dash_neg852 ( (  int1411 ) ) ) , .f_len = ( (  count_dash_digits2019 ) ( (  op_dash_neg852 ( (  int1411 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_2002) { .f_int = (  int1411 ) , .f_len = ( (  count_dash_digits2019 ) ( (  int1411 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_2002   chars2017 (    int32_t  self1420 ) {
    return ( (  int_dash_iter2018 ) ( (  self1420 ) ) );
}

static  int32_t   screen_dash_width2021 (    struct ScreenDims_454  sd4391 ) {
    return (  op_dash_add175 ( (  op_dash_sub180 ( ( (  sd4391 ) .f_to_dash_sx ) , ( (  sd4391 ) .f_from_dash_sx ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height2022 (    struct ScreenDims_454  sd4394 ) {
    return (  op_dash_add175 ( (  op_dash_sub180 ( ( (  sd4394 ) .f_to_dash_sy ) , ( (  sd4394 ) .f_from_dash_sy ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  enum Unit_8   update_dash_screen_dash_offset2020 (    struct Pane_241 *  pane4397 ,    struct ScreenDims_454  sd4399 ) {
    struct Pos_26  cur4400 = ( ( * (  pane4397 ) ) .f_cursor );
    int32_t  cur_dash_sx4401 = ( (  pos_dash_vi291 ) ( ( ( * (  pane4397 ) ) .f_buf ) ,  (  cur4400 ) ) );
    struct ScreenCursorOffset_243  sc_dash_off4402 = ( ( * (  pane4397 ) ) .f_sc_dash_off );
    int32_t  sw4403 = (  op_dash_sub180 ( ( (  screen_dash_width2021 ) ( (  sd4399 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  sh4404 = (  op_dash_sub180 ( ( (  screen_dash_height2022 ) ( (  sd4399 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  margin4405 = (  from_dash_integral56 ( 5 ) );
    int32_t  csi4406 = ( (  pos_dash_vi291 ) ( ( ( * (  pane4397 ) ) .f_buf ) ,  (  cur4400 ) ) );
    int32_t  csx4407 = (  op_dash_sub180 ( (  csi4406 ) , ( (  sc_dash_off4402 ) .f_screen_dash_left ) ) );
    int32_t  csy4408 = (  op_dash_sub180 ( ( (  cur4400 ) .f_line ) , ( (  sc_dash_off4402 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left4409 = ( (  sc_dash_off4402 ) .f_screen_dash_left );
    if ( (  cmp173 ( (  csx4407 ) , (  margin4405 ) ) == 0 ) ) {
        nu_dash_screen_dash_left4409 = (  op_dash_sub180 ( (  csi4406 ) , (  margin4405 ) ) );
    } else {
        if ( (  cmp173 ( (  csx4407 ) , (  op_dash_sub180 ( (  sw4403 ) , (  margin4405 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left4409 = (  op_dash_sub180 ( (  csi4406 ) , (  op_dash_sub180 ( (  sw4403 ) , (  margin4405 ) ) ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left4410 = ( (  max374 ) ( (  nu_dash_screen_dash_left4409 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top4411 = ( (  sc_dash_off4402 ) .f_screen_dash_top );
    if ( (  cmp173 ( (  csy4408 ) , (  margin4405 ) ) == 0 ) ) {
        nu_dash_screen_dash_top4411 = (  op_dash_sub180 ( ( (  cur4400 ) .f_line ) , (  margin4405 ) ) );
    } else {
        if ( (  cmp173 ( (  csy4408 ) , (  op_dash_sub180 ( (  sh4404 ) , (  margin4405 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top4411 = (  op_dash_sub180 ( ( (  cur4400 ) .f_line ) , (  op_dash_sub180 ( (  sh4404 ) , (  margin4405 ) ) ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top4412 = ( (  max374 ) ( (  nu_dash_screen_dash_top4411 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    (*  pane4397 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_243) { .f_screen_dash_top = (  nu_dash_screen_dash_top4412 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left4410 ) } );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_colors2027 (    struct Screen_451 *  screen3746 ,    struct Color_154  fg3748 ,    struct Color_154  bg3750 ) {
    (*  screen3746 ) .f_default_dash_fg = (  fg3748 );
    (*  screen3746 ) .f_default_dash_bg = (  bg3750 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_colors2026 (    struct Screen_451 *  screen4415 ,    struct Colors_189  colors4417 ) {
    ( (  set_dash_screen_dash_colors2027 ) ( (  screen4415 ) ,  ( (  colors4417 ) .f_fg ) ,  ( (  colors4417 ) .f_bg ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   abs2028 (    int32_t  x1639 ) {
    return ( (  cmp173 ( (  x1639 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ? (  x1639 ) : (  op_dash_neg852 ( (  x1639 ) ) ) );
}

struct Map_2031 {
    struct IntStrIter_2002  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2031 Map_2031_Map (  struct IntStrIter_2002  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2031 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2031   into_dash_iter2033 (    struct Map_2031  self804 ) {
    return (  self804 );
}

static  struct Maybe_171   next2034 (    struct Map_2031 *  dref806 ) {
    struct Maybe_351  dref809 = ( (  next2005 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_351_Just_t ) {
            return ( ( Maybe_171_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_351_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2032 (    struct Map_2031  iterable1118 ,    int32_t  base1120 ,    int32_t (*  fun1122 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1123 = (  base1120 );
    struct Map_2031  it1124 = ( (  into_dash_iter2033 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next2034 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2035 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2035);
    abort ( );
    ( Unit_8_Unit );
    int32_t  temp2036;
    return (  temp2036 );
}

static  int32_t   lam2037 (    int32_t  v1137 ,    int32_t  s1139 ) {
    return (  op_dash_add175 ( (  v1137 ) , (  s1139 ) ) );
}

static  int32_t   sum2030 (    struct Map_2031  it1135 ) {
    return ( (  reduce2032 ) ( (  it1135 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2037 ) ) );
}

static  struct Map_2031   map2038 (    struct IntStrIter_2002  iterable813 ,    int32_t (*  fun815 )(    struct Char_65  ) ) {
    struct IntStrIter_2002  it816 = ( (  into_dash_iter2004 ) ( (  iterable813 ) ) );
    return ( ( Map_2031_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  enum Unit_8   put_dash_char2042 (    struct Screen_451 *  screen3774 ,    struct Char_65  c3776 ,    int32_t  x3778 ,    int32_t  y3780 ) {
    int32_t  w3781 = ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3774 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp173 ( (  x3778 ) , (  w3781 ) ) != 0 ) || (  cmp173 ( (  y3780 ) , ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3774 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp173 ( (  x3778 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) || (  cmp173 ( (  y3780 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    size_t  i3782 = ( (  i32_dash_size280 ) ( (  op_dash_add175 ( (  op_dash_mul1597 ( (  y3780 ) , (  w3781 ) ) ) , (  x3778 ) ) ) ) );
    struct Color_154  fg3783 = ( ( * (  screen3774 ) ) .f_default_dash_fg );
    struct Color_154  bg3784 = ( ( * (  screen3774 ) ) .f_default_dash_bg );
    struct Char_65  c3785 = (  c3776 );
    int32_t  char_dash_width3786 = ( (  wcwidth375 ) ( (  c3785 ) ) );
    if ( ( (  cmp173 ( (  x3778 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) && (  cmp173 ( ( (  elem_dash_get993 ( ( ( * (  screen3774 ) ) .f_current ) , (  op_dash_sub462 ( (  i3782 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral56 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_453  pc3787 = (  elem_dash_get993 ( ( ( * (  screen3774 ) ) .f_current ) , (  op_dash_sub462 ( (  i3782 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set989 ) ( ( ( * (  screen3774 ) ) .f_current ) ,  (  op_dash_sub462 ( (  i3782 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_453) { .f_c = ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3787 ) .f_fg ) , .f_bg = ( (  pc3787 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    ( (  set989 ) ( ( ( * (  screen3774 ) ) .f_current ) ,  (  i3782 ) ,  ( (struct Cell_453) { .f_c = (  c3785 ) , .f_fg = (  fg3783 ) , .f_bg = (  bg3784 ) , .f_char_dash_width = (  char_dash_width3786 ) } ) ) );
    struct RangeIter_169  temp2043 =  into_dash_iter170 ( ( (  to179 ) ( (  op_dash_add175 ( (  x3778 ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min796 ) ( (  op_dash_sub180 ( (  op_dash_add175 ( (  x3778 ) , (  char_dash_width3786 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  w3781 ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond2044 =  next172 (&temp2043);
        if (  __cond2044 .tag == 0 ) {
            break;
        }
        int32_t  xx3789 =  __cond2044 .stuff .Maybe_171_Just_s .field0;
        size_t  i3790 = ( (  i32_dash_size280 ) ( (  op_dash_add175 ( (  op_dash_mul1597 ( (  y3780 ) , (  w3781 ) ) ) , (  xx3789 ) ) ) ) );
        ( (  set989 ) ( ( ( * (  screen3774 ) ) .f_current ) ,  (  i3790 ) ,  ( (struct Cell_453) { .f_c = ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = (  fg3783 ) , .f_bg = (  bg3784 ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str2039 (    struct Screen_451 *  screen3793 ,    int32_t  s3795 ,    int32_t  x3797 ,    int32_t  y3799 ) {
    int32_t  w3800 = ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  y3799 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3799 ) , ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3801 = (  op_dash_add175 ( (  op_dash_mul1597 ( (  y3799 ) , (  w3800 ) ) ) , (  x3797 ) ) );
    int32_t  x3802 = ( (  min796 ) ( (  x3797 ) ,  (  w3800 ) ) );
    size_t  max_dash_len3803 = ( (  i32_dash_size280 ) ( (  op_dash_sub180 ( (  w3800 ) , (  x3802 ) ) ) ) );
    int32_t  xx3804 = (  from_dash_integral56 ( 0 ) );
    struct IntStrIter_2002  temp2040 =  into_dash_iter2004 ( ( (  chars2017 ) ( (  s3795 ) ) ) );
    while (true) {
        struct Maybe_351  __cond2041 =  next2005 (&temp2040);
        if (  __cond2041 .tag == 0 ) {
            break;
        }
        struct Char_65  c3806 =  __cond2041 .stuff .Maybe_351_Just_s .field0;
        ( (  put_dash_char2042 ) ( (  screen3793 ) ,  (  c3806 ) ,  (  op_dash_add175 ( (  x3802 ) , (  xx3804 ) ) ) ,  (  y3799 ) ) );
        xx3804 = (  op_dash_add175 ( (  xx3804 ) , ( (  rendered_dash_wcwidth373 ) ( (  c3806 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2029 (    struct Screen_451 *  screen3809 ,    int32_t  s3811 ,    int32_t  x3813 ,    int32_t  y3815 ) {
    int32_t  slen3816 = ( (  sum2030 ) ( ( (  map2038 ) ( ( (  chars2017 ) ( (  s3811 ) ) ) ,  (  rendered_dash_wcwidth373 ) ) ) ) );
    int32_t  w3817 = ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3809 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3818 = (  op_dash_sub180 ( (  op_dash_sub180 ( (  w3817 ) , (  x3813 ) ) ) , (  slen3816 ) ) );
    ( (  draw_dash_str2039 ) ( (  screen3809 ) ,  (  s3811 ) ,  (  x3818 ) ,  (  y3815 ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2046 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct StrConcat_2046 StrConcat_2046_StrConcat (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_2046 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2049 {
    struct StrView_27  field0;
    struct StrConcat_2046  field1;
};

static struct StrConcat_2049 StrConcat_2049_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_2046  field1 ) {
    return ( struct StrConcat_2049 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2048 {
    struct StrConcat_2049  field0;
    struct Char_65  field1;
};

static struct StrConcat_2048 StrConcat_2048_StrConcat (  struct StrConcat_2049  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2048 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str2051 (    struct StrConcat_2046  self1302 ) {
    struct StrConcat_2046  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str310 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str522 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str2050 (    struct StrConcat_2049  self1302 ) {
    struct StrConcat_2049  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str310 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str2051 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str2047 (    struct StrConcat_2048  self1302 ) {
    struct StrConcat_2048  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str2050 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert2045 (    bool  cond1346 ,    struct StrConcat_2046  msg1348 ) {
    if ( ( ! (  cond1346 ) ) ) {
        ( (  print_dash_str2047 ) ( ( ( StrConcat_2048_StrConcat ) ( ( ( StrConcat_2049_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1348 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct AppendIter_2053 {
    struct StrViewIter_293  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

static  struct AppendIter_2053   into_dash_iter2054 (    struct AppendIter_2053  self1044 ) {
    return (  self1044 );
}

static  struct AppendIter_2053   append2055 (    struct StrViewIter_293  it1031 ,    struct Char_65  e1033 ) {
    return ( (struct AppendIter_2053) { .f_it = ( (  into_dash_iter294 ) ( (  it1031 ) ) ) , .f_elem = (  e1033 ) , .f_appended = ( false ) } );
}

static  struct Maybe_351   next2057 (    struct AppendIter_2053 *  self1047 ) {
    struct Maybe_351  dref1048 = ( (  next352 ) ( ( & ( ( * (  self1047 ) ) .f_it ) ) ) );
    if ( dref1048.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1048 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1048.tag == Maybe_351_None_t ) {
            if ( ( ! ( ( * (  self1047 ) ) .f_appended ) ) ) {
                (*  self1047 ) .f_appended = ( true );
                return ( ( Maybe_351_Just ) ( ( ( * (  self1047 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
}

static  bool   between2059 (    struct Pos_26  c1377 ,    struct Pos_26  l1379 ,    struct Pos_26  r1381 ) {
    struct Pos_26  from1382 = ( (  min696 ) ( (  l1379 ) ,  (  r1381 ) ) );
    struct Pos_26  to1383 = ( (  max698 ) ( (  l1379 ) ,  (  r1381 ) ) );
    return ( (  cmp697 ( (  from1382 ) , (  c1377 ) ) != 2 ) && (  cmp697 ( (  c1377 ) , (  to1383 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection2058 (    struct Pane_241 *  pane4383 ,    struct Pos_26  pos4385 ) {
    return ( {  struct Maybe_34  dref4386 = ( ( * (  pane4383 ) ) .f_sel ) ; dref4386.tag == Maybe_34_Just_t ? ( (  between2059 ) ( (  pos4385 ) ,  ( ( * (  pane4383 ) ) .f_cursor ) ,  ( dref4386 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct env2061 {
    ;
    struct Theme_188 *  theme4427;
    struct Screen_451 *  screen4420;
    ;
};

struct envunion2062 {
    enum Unit_8  (*fun) (  struct env2061*  ,    enum HighlightType_18  );
    struct env2061 env;
};

static  enum Unit_8   if_dash_just2060 (    struct Maybe_224  x1601 ,   struct envunion2062  fun1603 ) {
    struct Maybe_224  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_224_Just_t ) {
        struct envunion2062  temp2063 = (  fun1603 );
        ( temp2063.fun ( &temp2063.env ,  ( dref1604 .stuff .Maybe_224_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_224_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim2068 (    struct List_15 *  l2530 ,    size_t  new_dash_count2532 ) {
    (*  l2530 ) .f_count = ( (  min591 ) ( (  new_dash_count2532 ) ,  ( ( * (  l2530 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_351   head2073 (    struct Scanner_1092 *  it1167 ) {
    struct Scanner_1092  temp2074 = ( (  into_dash_iter1108 ) ( (  it1167 ) ) );
    return ( (  next1117 ) ( ( &temp2074 ) ) );
}

static  bool   null2072 (    struct Scanner_1092 *  it1176 ) {
    struct Maybe_351  dref1177 = ( (  head2073 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_351_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_351   peek2075 (    struct Scanner_1092 *  sc3421 ) {
    return ( (  head1409 ) ( ( ( * (  sc3421 ) ) .f_s ) ) );
}

static  bool   eq2077 (    struct Maybe_351  l150 ,    struct Maybe_351  r152 ) {
    struct Tuple2_1842  dref153 = ( ( Tuple2_1842_Tuple2 ) ( (  l150 ) ,  (  r152 ) ) );
    if ( dref153 .field0.tag == Maybe_351_None_t && dref153 .field1.tag == Maybe_351_None_t ) {
        return ( true );
    }
    else {
        if ( dref153 .field0.tag == Maybe_351_Just_t && dref153 .field1.tag == Maybe_351_Just_t ) {
            return (  eq360 ( ( dref153 .field0 .stuff .Maybe_351_Just_s .field0 ) , ( dref153 .field1 .stuff .Maybe_351_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  bool   try_dash_char2076 (    struct Scanner_1092 *  sc3424 ,    struct Char_65  char3426 ) {
    if ( (  eq2077 ( ( (  peek2075 ) ( (  sc3424 ) ) ) , ( ( Maybe_351_Just ) ( (  char3426 ) ) ) ) ) ) {
        ( (  drop_prime_1120 ) ( (  sc3424 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        return ( true );
    }
    return ( false );
}

static  bool   is_dash_just2080 (    struct Maybe_351  m1570 ) {
    struct Maybe_351  dref1571 = (  m1570 );
    if ( dref1571.tag == Maybe_351_None_t ) {
        return ( false );
    }
    else {
        if ( dref1571.tag == Maybe_351_Just_t ) {
            return ( true );
        }
    }
}

static  struct Maybe_351   char_dash_satisfies_prime_2081 (    struct Scanner_1092 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1409 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1120 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_351_Just ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_351_None_t ) {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2079 (    struct Scanner_1092 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2080 ) ( ( (  char_dash_satisfies_prime_2081 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2078 (    struct Scanner_1092 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2079 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2082 (    struct Char_65  c3889 ) {
    return ( !  eq360 ( (  c3889 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"]" ) ,  ( 1 ) ) ) ) );
}

struct TypeSize_2089 {
    size_t  f_size;
};

static  struct TypeSize_2089   get_dash_typesize2088 (  ) {
    struct Highlight_17  temp2090;
    return ( (struct TypeSize_2089) { .f_size = ( sizeof( ( (  temp2090 ) ) ) ) } );
}

static  struct Highlight_17 *   cast_dash_ptr2091 (    void *  p398 ) {
    return ( (struct Highlight_17 * ) (  p398 ) );
}

static  struct Slice_16   allocate2087 (    enum CAllocator_10  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize2088 ) ( ) ) ) .f_size );
    struct Highlight_17 *  ptr2371 = ( (  cast_dash_ptr2091 ) ( ( ( malloc ) ( (  op_dash_mul535 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_16) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct env2092 {
    ;
    ;
    struct Slice_16  new_dash_slice2453;
};

struct Tuple2_2094 {
    struct Highlight_17  field0;
    int32_t  field1;
};

static struct Tuple2_2094 Tuple2_2094_Tuple2 (  struct Highlight_17  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2094 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2093 {
    enum Unit_8  (*fun) (  struct env2092*  ,    struct Tuple2_2094  );
    struct env2092 env;
};

static  struct Highlight_17 *   offset_dash_ptr2098 (    struct Highlight_17 *  x377 ,    int64_t  count379 ) {
    struct Highlight_17  temp2099;
    return ( (struct Highlight_17 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp2099 ) ) ) ) ) ) ) ) );
}

static  struct Highlight_17 *   get_dash_ptr2097 (    struct Slice_16  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp302 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Highlight_17 *  elem_dash_ptr2173 = ( (  offset_dash_ptr2098 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  enum Unit_8   set2096 (    struct Slice_16  slice2187 ,    size_t  i2189 ,    struct Highlight_17  x2191 ) {
    struct Highlight_17 *  ep2192 = ( (  get_dash_ptr2097 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam2095 (   struct env2092* env ,    struct Tuple2_2094  dref2454 ) {
    return ( (  set2096 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size280 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

struct SliceIter_2102 {
    struct Slice_16  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2101 {
    struct SliceIter_2102  f_left_dash_it;
    struct FromIter_544  f_right_dash_it;
};

static  struct Zip_2101   into_dash_iter2104 (    struct Zip_2101  self936 ) {
    return (  self936 );
}

struct Maybe_2105 {
    enum {
        Maybe_2105_None_t,
        Maybe_2105_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2094  field0;
        } Maybe_2105_Just_s;
    } stuff;
};

static struct Maybe_2105 Maybe_2105_Just (  struct Tuple2_2094  field0 ) {
    return ( struct Maybe_2105 ) { .tag = Maybe_2105_Just_t, .stuff = { .Maybe_2105_Just_s = { .field0 = field0 } } };
};

struct Maybe_2107 {
    enum {
        Maybe_2107_None_t,
        Maybe_2107_Just_t,
    } tag;
    union {
        struct {
            struct Highlight_17  field0;
        } Maybe_2107_Just_s;
    } stuff;
};

static struct Maybe_2107 Maybe_2107_Just (  struct Highlight_17  field0 ) {
    return ( struct Maybe_2107 ) { .tag = Maybe_2107_Just_t, .stuff = { .Maybe_2107_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2107   next2108 (    struct SliceIter_2102 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2107) { .tag = Maybe_2107_None_t } );
    }
    struct Highlight_17  elem2258 = ( * ( (  offset_dash_ptr2098 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2107_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_2105   next2106 (    struct Zip_2101 *  self939 ) {
    struct Zip_2101  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_2107  dref941 = ( (  next2108 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_2107_None_t ) {
            return ( (struct Maybe_2105) { .tag = Maybe_2105_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_2107_Just_t ) {
                struct Maybe_171  dref943 = ( (  next550 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_2105) { .tag = Maybe_2105_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next2108 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next550 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2105_Just ) ( ( ( Tuple2_2094_Tuple2 ) ( ( dref941 .stuff .Maybe_2107_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2100 (    struct Zip_2101  iterable1099 ,   struct envunion2093  fun1101 ) {
    struct Zip_2101  temp2103 = ( (  into_dash_iter2104 ) ( (  iterable1099 ) ) );
    struct Zip_2101 *  it1102 = ( &temp2103 );
    while ( ( true ) ) {
        struct Maybe_2105  dref1103 = ( (  next2106 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_2105_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_2105_Just_t ) {
                struct envunion2093  temp2109 = (  fun1101 );
                ( temp2109.fun ( &temp2109.env ,  ( dref1103 .stuff .Maybe_2105_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_2102   into_dash_iter2111 (    struct Slice_16  self2250 ) {
    return ( (struct SliceIter_2102) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2101   zip2110 (    struct Slice_16  left947 ,    struct FromIter_544  right949 ) {
    struct SliceIter_2102  left_dash_it950 = ( (  into_dash_iter2111 ) ( (  left947 ) ) );
    struct FromIter_544  right_dash_it951 = ( (  into_dash_iter554 ) ( (  right949 ) ) );
    return ( (struct Zip_2101) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  void *   cast_dash_ptr2113 (    struct Highlight_17 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free2112 (    enum CAllocator_10  dref2373 ,    struct Slice_16  slice2375 ) {
    if (!(  dref2373 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr2113 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full2086 (   struct env5* env ,    struct List_15 *  list2452 ) {
    if ( (  eq283 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate2087 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq283 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_16  new_dash_slice2453 = ( (  allocate2087 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul535 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env2092 envinst2092 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion2093  fun2457 = ( (struct envunion2093){ .fun = (  enum Unit_8  (*) (  struct env2092*  ,    struct Tuple2_2094  ) )lam2095 , .env =  envinst2092 } );
            ( (  for_dash_each2100 ) ( ( (  zip2110 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from555 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free2112 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add2084 (   struct env35* env ,    struct List_15 *  list2460 ,    struct Highlight_17  elem2462 ) {
    struct envunion36  temp2085 = ( (struct envunion36){ .fun = (  enum Unit_8  (*) (  struct env5*  ,    struct List_15 *  ) )grow_dash_if_dash_full2086 , .env =  env->envinst5 } );
    ( temp2085.fun ( &temp2085.env ,  (  list2460 ) ) );
    ( (  set2096 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add356 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion2115 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_351   char_dash_satisfies_prime_2118 (    struct Scanner_1092 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1409 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1120 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_351_Just ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_351_None_t ) {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2117 (    struct Scanner_1092 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2080 ) ( ( (  char_dash_satisfies_prime_2118 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2116 (    struct Scanner_1092 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2117 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2119 (    struct Char_65  c3892 ) {
    return ( ( !  eq360 ( (  c3892 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) && ( !  eq360 ( (  c3892 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\\" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2121 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_351   char_dash_satisfies_prime_2123 (    struct Scanner_1092 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1409 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1120 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_351_Just ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_351_None_t ) {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2122 (    struct Scanner_1092 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2080 ) ( ( (  char_dash_satisfies_prime_2123 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  struct Maybe_351   char_dash_satisfies_prime_2126 (    struct Scanner_1092 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1409 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1120 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_351_Just ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_351_None_t ) {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2125 (    struct Scanner_1092 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2080 ) ( ( (  char_dash_satisfies_prime_2126 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2124 (    struct Scanner_1092 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2125 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2127 (    struct Char_65  c3895 ) {
    return ( (  eq1401 ( ( (  char_dash_type1404 ) ( (  c3895 ) ) ) , ( CharType_1402_CharWord ) ) ) || (  eq360 ( (  c3895 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2129 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct env2131 {
    struct Scanner_1092 *  sc3885;
    ;
};

struct envunion2132 {
    bool  (*fun) (  struct env2131*  ,    struct StrView_27  );
    struct env2131 env;
};

struct env2134 {
    struct envunion2132  fun1160;
};

struct envunion2135 {
    bool  (*fun) (  struct env2134*  ,    struct StrView_27  ,    bool  );
    struct env2134 env;
};

static  bool   reduce2133 (    struct Array_602  iterable1118 ,    bool  base1120 ,   struct envunion2135  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_609  it1124 = ( (  into_dash_iter610 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_85  dref1125 = ( (  next611 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_85_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_85_Just_t ) {
                struct envunion2135  temp2136 = (  fun1122 );
                x1123 = ( temp2136.fun ( &temp2136.env ,  ( dref1125 .stuff .Maybe_85_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2137 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2137);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2138;
    return (  temp2138 );
}

static  bool   lam2139 (   struct env2134* env ,    struct StrView_27  e1162 ,    bool  x1164 ) {
    struct envunion2132  temp2140 = ( env->fun1160 );
    return ( ( temp2140.fun ( &temp2140.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2130 (    struct Array_602  it1158 ,   struct envunion2132  fun1160 ) {
    struct env2134 envinst2134 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2133 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2135){ .fun = (  bool  (*) (  struct env2134*  ,    struct StrView_27  ,    bool  ) )lam2139 , .env =  envinst2134 } ) ) );
}

static  struct StrViewIter_293   own2146 (    struct StrViewIter_293  x1561 ) {
    return (  x1561 );
}

static  bool   matches_dash_str2143 (    struct Scanner_1092 *  sc3441 ,    struct StrView_27  s3443 ) {
    size_t  skip3444 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_293  temp2144 = ( (  chars295 ) ( (  s3443 ) ) );
    struct StrViewIter_293 *  ss3445 = ( &temp2144 );
    struct StrViewIter_293  temp2145 = ( (  own2146 ) ( ( ( * (  sc3441 ) ) .f_s ) ) );
    struct StrViewIter_293 *  sccp3446 = ( &temp2145 );
    while ( ( true ) ) {
        struct Tuple2_1842  dref3447 = ( ( Tuple2_1842_Tuple2 ) ( ( (  next352 ) ( (  sccp3446 ) ) ) ,  ( (  next352 ) ( (  ss3445 ) ) ) ) );
        if ( dref3447 .field1.tag == Maybe_351_None_t ) {
            ( (  drop_prime_1120 ) ( (  sc3441 ) ,  (  skip3444 ) ) );
            return ( true );
        }
        else {
            if ( dref3447 .field0.tag == Maybe_351_Just_t && dref3447 .field1.tag == Maybe_351_Just_t ) {
                if ( ( !  eq360 ( ( dref3447 .field0 .stuff .Maybe_351_Just_s .field0 ) , ( dref3447 .field1 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
                    return ( false );
                }
                skip3444 = (  op_dash_add356 ( (  skip3444 ) , (  from_dash_integral0 ( 1 ) ) ) );
            }
            else {
                if ( true ) {
                    return ( false );
                }
            }
        }
    }
}

static  bool   lam2142 (   struct env2131* env ,    struct StrView_27  sym3898 ) {
    return ( (  matches_dash_str2143 ) ( ( env->sc3885 ) ,  (  sym3898 ) ) );
}

struct envunion2148 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct Array_2150 {
    struct StrView_27 _arr [12];
};

struct env2151 {
    struct Scanner_1092 *  sc3885;
    ;
};

struct envunion2152 {
    bool  (*fun) (  struct env2151*  ,    struct StrView_27  );
    struct env2151 env;
};

struct env2154 {
    struct envunion2152  fun1160;
};

struct envunion2155 {
    bool  (*fun) (  struct env2154*  ,    struct StrView_27  ,    bool  );
    struct env2154 env;
};

struct ArrayIter_2156 {
    struct Array_2150  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2156   into_dash_iter2157 (    struct Array_2150  self2102 ) {
    return ( (struct ArrayIter_2156) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2161 (    struct Array_2150 *  p398 ) {
    return ( (struct StrView_27 * ) (  p398 ) );
}

static  struct StrView_27 *   get_dash_ptr2160 (    struct Array_2150 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp302 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2029 ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) ) {
        ( (  panic513 ) ( ( ( StrConcat_514_StrConcat ) ( ( ( StrConcat_515_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 12 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2030 = ( ( (  cast_dash_ptr2161 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr615 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct StrView_27   get2159 (    struct Array_2150 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr2160 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_85   next2158 (    struct ArrayIter_2156 *  self2109 ) {
    if ( (  cmp302 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    struct StrView_27  e2111 = ( (  get2159 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add356 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_85_Just ) ( (  e2111 ) ) );
}

static  bool   reduce2153 (    struct Array_2150  iterable1118 ,    bool  base1120 ,   struct envunion2155  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_2156  it1124 = ( (  into_dash_iter2157 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_85  dref1125 = ( (  next2158 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_85_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_85_Just_t ) {
                struct envunion2155  temp2162 = (  fun1122 );
                x1123 = ( temp2162.fun ( &temp2162.env ,  ( dref1125 .stuff .Maybe_85_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2163 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2163);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2164;
    return (  temp2164 );
}

static  bool   lam2165 (   struct env2154* env ,    struct StrView_27  e1162 ,    bool  x1164 ) {
    struct envunion2152  temp2166 = ( env->fun1160 );
    return ( ( temp2166.fun ( &temp2166.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2149 (    struct Array_2150  it1158 ,   struct envunion2152  fun1160 ) {
    struct env2154 envinst2154 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2153 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2155){ .fun = (  bool  (*) (  struct env2154*  ,    struct StrView_27  ,    bool  ) )lam2165 , .env =  envinst2154 } ) ) );
}

static  struct Array_2150   from_dash_listlike2167 (    struct Array_2150 *  self369 ) {
    return ( * (  self369 ) );
}

static  bool   lam2169 (   struct env2151* env ,    struct StrView_27  sym3902 ) {
    return ( (  matches_dash_str2143 ) ( ( env->sc3885 ) ,  (  sym3902 ) ) );
}

struct envunion2171 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_351   char_dash_satisfies_prime_2174 (    struct Scanner_1092 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1409 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1120 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_351_Just ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_351_None_t ) {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2173 (    struct Scanner_1092 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2080 ) ( ( (  char_dash_satisfies_prime_2174 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2172 (    struct Scanner_1092 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2173 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2175 (    struct Char_65  c3906 ) {
    return ( (  eq1401 ( ( (  char_dash_type1404 ) ( (  c3906 ) ) ) , ( CharType_1402_CharWord ) ) ) || (  eq360 ( (  c3906 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   maybe2176 (    struct Maybe_351  x1592 ,    bool (*  fun1594 )(    struct Char_65  ) ,    bool  default1596 ) {
    return ( {  struct Maybe_351  dref1597 = (  x1592 ) ; dref1597.tag == Maybe_351_Just_t ? ( (  fun1594 ) ( ( dref1597 .stuff .Maybe_351_Just_s .field0 ) ) ) : (  default1596 ) ; } );
}

static  bool   is_dash_upper2177 (    struct Char_65  c1521 ) {
    return ( (  eq283 ( ( (  c1521 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1111 ) ( (  c1521 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"Z" ) ,  ( 1 ) ) ) ) ) );
}

struct Array_2178 {
    struct StrView_27 _arr [6];
};

static  struct Array_2178   from_dash_listlike2179 (    struct Array_2178 *  self369 ) {
    return ( * (  self369 ) );
}

struct Array_2181 {
    struct StrView_27 _arr [16];
};

static  struct Array_2181   from_dash_listlike2182 (    struct Array_2181 *  self369 ) {
    return ( * (  self369 ) );
}

struct env2185 {
    ;
    struct StrView_27  ident3910;
};

struct envunion2186 {
    bool  (*fun) (  struct env2185*  ,    struct StrView_27  );
    struct env2185 env;
};

struct env2188 {
    struct envunion2186  fun1160;
};

struct envunion2189 {
    bool  (*fun) (  struct env2188*  ,    struct StrView_27  ,    bool  );
    struct env2188 env;
};

struct ArrayIter_2190 {
    struct Array_2178  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2190   into_dash_iter2191 (    struct Array_2178  self2102 ) {
    return ( (struct ArrayIter_2190) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2195 (    struct Array_2178 *  p398 ) {
    return ( (struct StrView_27 * ) (  p398 ) );
}

static  struct StrView_27 *   get_dash_ptr2194 (    struct Array_2178 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp302 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2029 ) , ( (size_t ) ( 6 ) ) ) != 0 ) ) ) {
        ( (  panic513 ) ( ( ( StrConcat_514_StrConcat ) ( ( ( StrConcat_515_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 6 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2030 = ( ( (  cast_dash_ptr2195 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr615 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct StrView_27   get2193 (    struct Array_2178 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr2194 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_85   next2192 (    struct ArrayIter_2190 *  self2109 ) {
    if ( (  cmp302 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 6 ) ) ) != 0 ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    struct StrView_27  e2111 = ( (  get2193 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add356 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_85_Just ) ( (  e2111 ) ) );
}

static  bool   reduce2187 (    struct Array_2178  iterable1118 ,    bool  base1120 ,   struct envunion2189  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_2190  it1124 = ( (  into_dash_iter2191 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_85  dref1125 = ( (  next2192 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_85_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_85_Just_t ) {
                struct envunion2189  temp2196 = (  fun1122 );
                x1123 = ( temp2196.fun ( &temp2196.env ,  ( dref1125 .stuff .Maybe_85_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2197 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2197);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2198;
    return (  temp2198 );
}

static  bool   lam2199 (   struct env2188* env ,    struct StrView_27  e1162 ,    bool  x1164 ) {
    struct envunion2186  temp2200 = ( env->fun1160 );
    return ( ( temp2200.fun ( &temp2200.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2184 (    struct Array_2178  it1158 ,   struct envunion2186  fun1160 ) {
    struct env2188 envinst2188 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2187 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2189){ .fun = (  bool  (*) (  struct env2188*  ,    struct StrView_27  ,    bool  ) )lam2199 , .env =  envinst2188 } ) ) );
}

static  bool   lam2201 (   struct env2185* env ,    struct StrView_27  kw3914 ) {
    return (  eq623 ( (  kw3914 ) , ( env->ident3910 ) ) );
}

struct env2203 {
    ;
    struct StrView_27  ident3910;
};

struct envunion2204 {
    bool  (*fun) (  struct env2203*  ,    struct StrView_27  );
    struct env2203 env;
};

struct env2206 {
    struct envunion2204  fun1160;
};

struct envunion2207 {
    bool  (*fun) (  struct env2206*  ,    struct StrView_27  ,    bool  );
    struct env2206 env;
};

struct ArrayIter_2208 {
    struct Array_2181  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2208   into_dash_iter2209 (    struct Array_2181  self2102 ) {
    return ( (struct ArrayIter_2208) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2213 (    struct Array_2181 *  p398 ) {
    return ( (struct StrView_27 * ) (  p398 ) );
}

static  struct StrView_27 *   get_dash_ptr2212 (    struct Array_2181 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp302 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2029 ) , ( (size_t ) ( 16 ) ) ) != 0 ) ) ) {
        ( (  panic513 ) ( ( ( StrConcat_514_StrConcat ) ( ( ( StrConcat_515_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 16 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2030 = ( ( (  cast_dash_ptr2213 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr615 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct StrView_27   get2211 (    struct Array_2181 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr2212 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_85   next2210 (    struct ArrayIter_2208 *  self2109 ) {
    if ( (  cmp302 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 16 ) ) ) != 0 ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    struct StrView_27  e2111 = ( (  get2211 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add356 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_85_Just ) ( (  e2111 ) ) );
}

static  bool   reduce2205 (    struct Array_2181  iterable1118 ,    bool  base1120 ,   struct envunion2207  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_2208  it1124 = ( (  into_dash_iter2209 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_85  dref1125 = ( (  next2210 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_85_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_85_Just_t ) {
                struct envunion2207  temp2214 = (  fun1122 );
                x1123 = ( temp2214.fun ( &temp2214.env ,  ( dref1125 .stuff .Maybe_85_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2215 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2215);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2216;
    return (  temp2216 );
}

static  bool   lam2217 (   struct env2206* env ,    struct StrView_27  e1162 ,    bool  x1164 ) {
    struct envunion2204  temp2218 = ( env->fun1160 );
    return ( ( temp2218.fun ( &temp2218.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2202 (    struct Array_2181  it1158 ,   struct envunion2204  fun1160 ) {
    struct env2206 envinst2206 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2205 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2207){ .fun = (  bool  (*) (  struct env2206*  ,    struct StrView_27  ,    bool  ) )lam2217 , .env =  envinst2206 } ) ) );
}

static  bool   lam2219 (   struct env2203* env ,    struct StrView_27  kw3916 ) {
    return (  eq623 ( (  kw3916 ) , ( env->ident3910 ) ) );
}

struct envunion2221 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_1104   int2222 (    struct Scanner_1092 *  sc3415 ) {
    return ( (  scan_dash_int1105 ) ( (  sc3415 ) ) );
}

static  struct Maybe_351   char_dash_satisfies_prime_2225 (    struct Scanner_1092 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1409 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1120 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_351_Just ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_351_None_t ) {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2224 (    struct Scanner_1092 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2080 ) ( ( (  char_dash_satisfies_prime_2225 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2223 (    struct Scanner_1092 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2224 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_hex2226 (    struct Char_65  c1509 ) {
    return ( (  eq283 ( ( (  c1509 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( ( ( (  is_dash_digit1110 ) ( (  c1509 ) ) ) || ( (  between1111 ) ( (  c1509 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"f" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1111 ) ( (  c1509 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2228 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   skip_dash_while2229 (    struct Scanner_1092 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2122 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2231 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_351   char_dash_satisfies_prime_2234 (    struct Scanner_1092 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1409 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1120 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_351_Just ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_351_None_t ) {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2233 (    struct Scanner_1092 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2080 ) ( ( (  char_dash_satisfies_prime_2234 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2232 (    struct Scanner_1092 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2233 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_octal2235 (    struct Char_65  c1515 ) {
    return ( (  eq283 ( ( (  c1515 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1111 ) ( (  c1515 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"7" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2237 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_351   char_dash_satisfies_prime_2240 (    struct Scanner_1092 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1409 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1120 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_351_Just ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_351_None_t ) {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2239 (    struct Scanner_1092 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2080 ) ( ( (  char_dash_satisfies_prime_2240 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2238 (    struct Scanner_1092 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2239 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2242 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_351   char_dash_satisfies_prime_2245 (    struct Scanner_1092 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1409 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1120 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_351_Just ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_351_None_t ) {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2244 (    struct Scanner_1092 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2080 ) ( ( (  char_dash_satisfies_prime_2245 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2243 (    struct Scanner_1092 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2244 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_binary2246 (    struct Char_65  c1512 ) {
    return ( (  eq283 ( ( (  c1512 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  eq360 ( (  c1512 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) || (  eq360 ( (  c1512 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"1" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2248 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2250 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2252 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2254 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   kc2070 (   struct env101* env ,    struct List_15 *  hls3882 ,    struct StrView_27  line_dash_sv3884 ) {
    struct Scanner_1092  temp2071 = ( (  mk_dash_from_dash_str1094 ) ( (  line_dash_sv3884 ) ) );
    struct Scanner_1092 *  sc3885 = ( &temp2071 );
    while ( ( ! ( (  null2072 ) ( (  sc3885 ) ) ) ) ) {
        int32_t  from_dash_off3886 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
        struct Maybe_351  first_dash_char3887 = ( (  peek2075 ) ( (  sc3885 ) ) );
        if ( ( (  try_dash_char2076 ) ( (  sc3885 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
            if ( ( (  try_dash_char2076 ) ( (  sc3885 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  skip_dash_while2078 ) ( (  sc3885 ) ,  (  lam2082 ) ) );
                ( (  drop_prime_1120 ) ( (  sc3885 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                int32_t  to_dash_off3890 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                struct envunion102  temp2083 = ( (struct envunion102){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
                ( temp2083.fun ( &temp2083.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( (  line_dash_sv3884 ) ) ) ) ) , .f_type = ( HighlightType_18_Special3 ) } ) ) );
            } else {
                struct envunion2115  temp2114 = ( (struct envunion2115){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
                ( temp2114.fun ( &temp2114.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( (  line_dash_sv3884 ) ) ) ) ) , .f_type = ( HighlightType_18_Comment ) } ) ) );
            }
            break;
        } else {
            if ( ( (  try_dash_char2076 ) ( (  sc3885 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) ) {
                while ( ( true ) ) {
                    ( (  skip_dash_while2116 ) ( (  sc3885 ) ,  (  lam2119 ) ) );
                    if ( (  eq2077 ( ( (  peek2075 ) ( (  sc3885 ) ) ) , ( ( Maybe_351_Just ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\\" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                        ( (  drop_prime_1120 ) ( (  sc3885 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        if ( (  eq2077 ( ( (  peek2075 ) ( (  sc3885 ) ) ) , ( ( Maybe_351_Just ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                            ( (  drop_prime_1120 ) ( (  sc3885 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        } else {
                        }
                    } else {
                        ( (  drop_prime_1120 ) ( (  sc3885 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        break;
                    }
                }
                int32_t  cur_dash_off3893 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                struct envunion2121  temp2120 = ( (struct envunion2121){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
                ( temp2120.fun ( &temp2120.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3893 ) , .f_type = ( HighlightType_18_String ) } ) ) );
            } else {
                if ( ( (  try_dash_char2076 ) ( (  sc3885 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"@" ) ,  ( 1 ) ) ) ) ) ) {
                    if ( ( (  char_dash_satisfies2122 ) ( (  sc3885 ) ,  (  is_dash_alpha1406 ) ) ) ) {
                        ( (  skip_dash_while2124 ) ( (  sc3885 ) ,  (  lam2127 ) ) );
                        int32_t  cur_dash_off3896 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2129  temp2128 = ( (struct envunion2129){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
                        ( temp2128.fun ( &temp2128.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3896 ) , .f_type = ( HighlightType_18_Ident3 ) } ) ) );
                    } else {
                    }
                } else {
                    struct Array_602  temp2141 = ( (struct Array_602) { ._arr = { ( (  from_dash_string220 ) ( ( (uint8_t*)"==" ) ,  ( 2 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"/=" ) ,  ( 2 ) ) ) } } );
                    struct env2131 envinst2131 = {
                        .sc3885 =  sc3885 ,
                    };
                    if ( ( (  any2130 ) ( ( (  from_dash_listlike643 ) ( ( &temp2141 ) ) ) ,  ( (struct envunion2132){ .fun = (  bool  (*) (  struct env2131*  ,    struct StrView_27  ) )lam2142 , .env =  envinst2131 } ) ) ) ) {
                        int32_t  cur_dash_off3899 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                        enum HighlightType_18  type3900 = ( HighlightType_18_Special2 );
                        struct envunion2148  temp2147 = ( (struct envunion2148){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
                        ( temp2147.fun ( &temp2147.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3899 ) , .f_type = (  type3900 ) } ) ) );
                    } else {
                        struct Array_2150  temp2168 = ( (struct Array_2150) { ._arr = { ( (  from_dash_string220 ) ( ( (uint8_t*)"<&" ) ,  ( 2 ) ) ) , ( ( (  from_dash_charlike646 ) ( ( (uint8_t*)"=" ) ,  ( 1 ) ) ) ) , ( (  from_dash_charlike646 ) ( ( (uint8_t*)"&" ) ,  ( 1 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"->" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike646 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike646 ) ( ( (uint8_t*)"(" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike646 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike646 ) ( ( (uint8_t*)"{" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike646 ) ( ( (uint8_t*)"}" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike646 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike646 ) ( ( (uint8_t*)"]" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike646 ) ( ( (uint8_t*)"," ) ,  ( 1 ) ) ) } } );
                        struct env2151 envinst2151 = {
                            .sc3885 =  sc3885 ,
                        };
                        if ( ( (  any2149 ) ( ( (  from_dash_listlike2167 ) ( ( &temp2168 ) ) ) ,  ( (struct envunion2152){ .fun = (  bool  (*) (  struct env2151*  ,    struct StrView_27  ) )lam2169 , .env =  envinst2151 } ) ) ) ) {
                            int32_t  cur_dash_off3903 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                            enum HighlightType_18  type3904 = ( HighlightType_18_Special1 );
                            struct envunion2171  temp2170 = ( (struct envunion2171){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
                            ( temp2170.fun ( &temp2170.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3903 ) , .f_type = (  type3904 ) } ) ) );
                        } else {
                            if ( ( (  char_dash_satisfies2122 ) ( (  sc3885 ) ,  (  is_dash_alpha1406 ) ) ) ) {
                                ( (  skip_dash_while2172 ) ( (  sc3885 ) ,  (  lam2175 ) ) );
                                int32_t  cur_dash_off3907 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                bool  first_dash_char_dash_uppercase3908 = ( (  maybe2176 ) ( (  first_dash_char3887 ) ,  (  is_dash_upper2177 ) ,  ( false ) ) );
                                enum HighlightType_18  type3909 = ( (  first_dash_char_dash_uppercase3908 ) ? ( HighlightType_18_Ident2 ) : ( HighlightType_18_Ident1 ) );
                                struct StrView_27  ident3910 = ( ( (  byte_dash_substr600 ) ( (  line_dash_sv3884 ) ,  ( (  i32_dash_size280 ) ( (  from_dash_off3886 ) ) ) ,  ( (  i32_dash_size280 ) ( (  cur_dash_off3907 ) ) ) ) ) );
                                struct Array_2178  temp2180 = ( (struct Array_2178) { ._arr = { ( (  from_dash_string220 ) ( ( (uint8_t*)"fn" ) ,  ( 2 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"class" ) ,  ( 5 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"inst" ) ,  ( 4 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"external" ) ,  ( 8 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"use" ) ,  ( 3 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"export" ) ,  ( 6 ) ) ) } } );
                                struct Array_2178  keywords13911 = ( (  from_dash_listlike2179 ) ( ( &temp2180 ) ) );
                                struct Array_2181  temp2183 = ( (struct Array_2181) { ._arr = { ( (  from_dash_string220 ) ( ( (uint8_t*)"if" ) ,  ( 2 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"elif" ) ,  ( 4 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"else" ) ,  ( 4 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"case" ) ,  ( 4 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"for" ) ,  ( 3 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"in" ) ,  ( 2 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"while" ) ,  ( 5 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"pass" ) ,  ( 4 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"break" ) ,  ( 5 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"continue" ) ,  ( 8 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"as" ) ,  ( 2 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"or" ) ,  ( 2 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"and" ) ,  ( 3 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"not" ) ,  ( 3 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"return" ) ,  ( 6 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"let" ) ,  ( 3 ) ) ) } } );
                                struct Array_2181  keywords23912 = ( (  from_dash_listlike2182 ) ( ( &temp2183 ) ) );
                                struct env2185 envinst2185 = {
                                    .ident3910 =  ident3910 ,
                                };
                                if ( ( (  any2184 ) ( (  keywords13911 ) ,  ( (struct envunion2186){ .fun = (  bool  (*) (  struct env2185*  ,    struct StrView_27  ) )lam2201 , .env =  envinst2185 } ) ) ) ) {
                                    type3909 = ( HighlightType_18_Keyword1 );
                                } else {
                                    struct env2203 envinst2203 = {
                                        .ident3910 =  ident3910 ,
                                    };
                                    if ( ( (  any2202 ) ( (  keywords23912 ) ,  ( (struct envunion2204){ .fun = (  bool  (*) (  struct env2203*  ,    struct StrView_27  ) )lam2219 , .env =  envinst2203 } ) ) ) ) {
                                        type3909 = ( HighlightType_18_Keyword2 );
                                    } else {
                                        if ( ( ( ! (  first_dash_char_dash_uppercase3908 ) ) && (  eq2077 ( ( (  peek2075 ) ( (  sc3885 ) ) ) , ( ( Maybe_351_Just ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"(" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
                                            type3909 = ( HighlightType_18_Ident4 );
                                        }
                                    }
                                }
                                struct envunion2221  temp2220 = ( (struct envunion2221){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
                                ( temp2220.fun ( &temp2220.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3907 ) , .f_type = (  type3909 ) } ) ) );
                            } else {
                                struct Maybe_1104  dref3917 = ( (  int2222 ) ( (  sc3885 ) ) );
                                if ( dref3917.tag == Maybe_1104_Just_t ) {
                                    int32_t  cur_dash_off3919 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                    enum HighlightType_18  type3920 = ( HighlightType_18_Number );
                                    if ( (  eq1195 ( ( dref3917 .stuff .Maybe_1104_Just_s .field0 ) , (  from_dash_integral365 ( 0 ) ) ) ) ) {
                                        if ( ( (  try_dash_char2076 ) ( (  sc3885 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"x" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  skip_dash_while2223 ) ( (  sc3885 ) ,  (  is_dash_hex2226 ) ) );
                                            int32_t  cur_dash_off3921 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                            struct envunion2228  temp2227 = ( (struct envunion2228){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
                                            ( temp2227.fun ( &temp2227.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3921 ) , .f_type = (  type3920 ) } ) ) );
                                            ( (  skip_dash_while2229 ) ( (  sc3885 ) ,  (  is_dash_alpha1406 ) ) );
                                            int32_t  invalid_dash_off3922 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                            if ( ( !  eq700 ( (  cur_dash_off3921 ) , (  invalid_dash_off3922 ) ) ) ) {
                                                struct envunion2231  temp2230 = ( (struct envunion2231){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
                                                ( temp2230.fun ( &temp2230.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off3921 ) , .f_to = (  invalid_dash_off3922 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                            }
                                        } else {
                                            if ( ( (  try_dash_char2076 ) ( (  sc3885 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                                                ( (  skip_dash_while2232 ) ( (  sc3885 ) ,  (  is_dash_octal2235 ) ) );
                                                int32_t  cur_dash_off3923 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                                struct envunion2237  temp2236 = ( (struct envunion2237){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
                                                ( temp2236.fun ( &temp2236.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3923 ) , .f_type = (  type3920 ) } ) ) );
                                                ( (  skip_dash_while2238 ) ( (  sc3885 ) ,  (  is_dash_digit1110 ) ) );
                                                int32_t  invalid_dash_off3924 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                                if ( ( !  eq700 ( (  cur_dash_off3923 ) , (  invalid_dash_off3924 ) ) ) ) {
                                                    struct envunion2242  temp2241 = ( (struct envunion2242){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
                                                    ( temp2241.fun ( &temp2241.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off3923 ) , .f_to = (  invalid_dash_off3924 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                                }
                                            } else {
                                                if ( ( (  try_dash_char2076 ) ( (  sc3885 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"b" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  skip_dash_while2243 ) ( (  sc3885 ) ,  (  is_dash_binary2246 ) ) );
                                                    int32_t  cur_dash_off3925 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                                    struct envunion2248  temp2247 = ( (struct envunion2248){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
                                                    ( temp2247.fun ( &temp2247.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3925 ) , .f_type = (  type3920 ) } ) ) );
                                                    ( (  skip_dash_while2238 ) ( (  sc3885 ) ,  (  is_dash_digit1110 ) ) );
                                                    int32_t  invalid_dash_off3926 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                                    if ( ( !  eq700 ( (  cur_dash_off3925 ) , (  invalid_dash_off3926 ) ) ) ) {
                                                        struct envunion2250  temp2249 = ( (struct envunion2250){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
                                                        ( temp2249.fun ( &temp2249.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off3925 ) , .f_to = (  invalid_dash_off3926 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                                    }
                                                } else {
                                                    struct envunion2252  temp2251 = ( (struct envunion2252){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
                                                    ( temp2251.fun ( &temp2251.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3919 ) , .f_type = (  type3920 ) } ) ) );
                                                }
                                            }
                                        }
                                    } else {
                                        struct envunion2254  temp2253 = ( (struct envunion2254){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
                                        ( temp2253.fun ( &temp2253.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3919 ) , .f_type = (  type3920 ) } ) ) );
                                    }
                                }
                                else {
                                    if ( dref3917.tag == Maybe_1104_None_t ) {
                                        ( (  drop_prime_1120 ) ( (  sc3885 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

struct envunion2259 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_351   char_dash_satisfies_prime_2262 (    struct Scanner_1092 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1409 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1120 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_351_Just ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_351_None_t ) {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2261 (    struct Scanner_1092 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2080 ) ( ( (  char_dash_satisfies_prime_2262 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2260 (    struct Scanner_1092 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2261 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2265 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2267 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   markdown2256 (   struct env103* env ,    struct List_15 *  hls3929 ,    struct StrView_27  line_dash_sv3931 ) {
    struct Scanner_1092  temp2257 = ( (  mk_dash_from_dash_str1094 ) ( (  line_dash_sv3931 ) ) );
    struct Scanner_1092 *  sc3932 = ( &temp2257 );
    if ( ( (  try_dash_char2076 ) ( (  sc3932 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
        struct envunion2259  temp2258 = ( (struct envunion2259){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
        ( temp2258.fun ( &temp2258.env ,  (  hls3929 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_integral56 ( 0 ) ) , .f_to = ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( (  line_dash_sv3931 ) ) ) ) ) , .f_type = ( HighlightType_18_Keyword1 ) } ) ) );
    } else {
        ( (  skip_dash_while2260 ) ( (  sc3932 ) ,  (  is_dash_whitespace415 ) ) );
        int32_t  from_dash_off3933 = ( (  size_dash_i32311 ) ( ( ( * (  sc3932 ) ) .f_byte_dash_offset ) ) );
        if ( ( (  try_dash_char2076 ) ( (  sc3932 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) ) ) {
            int32_t  to_dash_off3934 = ( (  size_dash_i32311 ) ( ( ( * (  sc3932 ) ) .f_byte_dash_offset ) ) );
            struct envunion104  temp2263 = ( (struct envunion104){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
            ( temp2263.fun ( &temp2263.env ,  (  hls3929 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3933 ) , .f_to = (  to_dash_off3934 ) , .f_type = ( HighlightType_18_Special1 ) } ) ) );
            ( (  skip_dash_while2260 ) ( (  sc3932 ) ,  (  is_dash_whitespace415 ) ) );
            int32_t  from_dash_off3935 = ( (  size_dash_i32311 ) ( ( ( * (  sc3932 ) ) .f_byte_dash_offset ) ) );
            if ( ( (  matches_dash_str2143 ) ( (  sc3932 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"[ ]" ) ,  ( 3 ) ) ) ) ) ) {
                int32_t  to_dash_off3936 = ( (  size_dash_i32311 ) ( ( ( * (  sc3932 ) ) .f_byte_dash_offset ) ) );
                struct envunion2265  temp2264 = ( (struct envunion2265){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
                ( temp2264.fun ( &temp2264.env ,  (  hls3929 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3935 ) , .f_to = (  to_dash_off3936 ) , .f_type = ( HighlightType_18_Keyword1 ) } ) ) );
            } else {
                if ( ( ( (  matches_dash_str2143 ) ( (  sc3932 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"[x]" ) ,  ( 3 ) ) ) ) ) || ( (  matches_dash_str2143 ) ( (  sc3932 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"[X]" ) ,  ( 3 ) ) ) ) ) ) ) {
                    int32_t  to_dash_off3937 = ( (  size_dash_i32311 ) ( ( ( * (  sc3932 ) ) .f_byte_dash_offset ) ) );
                    struct envunion2267  temp2266 = ( (struct envunion2267){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
                    ( temp2266.fun ( &temp2266.env ,  (  hls3929 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3935 ) , .f_to = (  to_dash_off3937 ) , .f_type = ( HighlightType_18_Keyword2 ) } ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_351   char_dash_satisfies_prime_2272 (    struct Scanner_1092 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1409 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1120 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_351_Just ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_351_None_t ) {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2271 (    struct Scanner_1092 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2080 ) ( ( (  char_dash_satisfies_prime_2272 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  struct Maybe_351   char_dash_satisfies_prime_2275 (    struct Scanner_1092 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1409 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1120 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_351_Just ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_351_None_t ) {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2274 (    struct Scanner_1092 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2080 ) ( ( (  char_dash_satisfies_prime_2275 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2273 (    struct Scanner_1092 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2274 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   gcode_dash_keyword_dash_char2276 (    struct Char_65  c3940 ) {
    return ( ( (  is_dash_not_dash_whitespace1746 ) ( (  c3940 ) ) ) && ( !  eq360 ( (  c3940 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) );
}

static  uint8_t   char_dash_case_dash_diff2278 (  ) {
    return (  op_dash_sub1069 ( ( (  char_dash_u8675 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) ) , ( (  char_dash_u8675 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Char_65   to_dash_lower2277 (    struct Char_65  c1528 ) {
    if ( ( (  is_dash_upper2177 ) ( (  c1528 ) ) ) ) {
        ( (  assert805 ) ( (  eq283 ( ( (  c1528 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"(to-lower) utf8 not yet supported." ) ,  ( 34 ) ) ) ) );
        return ( (  from_dash_u81867 ) ( (  op_dash_add1070 ( ( (  char_dash_u8675 ) ( (  c1528 ) ) ) , ( (  char_dash_case_dash_diff2278 ) ( ) ) ) ) ) );
    }
    return (  c1528 );
}

struct StrConcat_2284 {
    struct StrView_27  field0;
    struct StrConcat_772  field1;
};

static struct StrConcat_2284 StrConcat_2284_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_772  field1 ) {
    return ( struct StrConcat_2284 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2283 {
    struct StrConcat_2284  field0;
    struct Char_65  field1;
};

static struct StrConcat_2283 StrConcat_2283_StrConcat (  struct StrConcat_2284  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2283 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str2285 (    struct StrConcat_2284  self1302 ) {
    struct StrConcat_2284  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str310 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str779 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str2282 (    struct StrConcat_2283  self1302 ) {
    struct StrConcat_2283  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str2285 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic2281 (    struct StrConcat_772  errmsg1343 ) {
    ( (  print_dash_str2282 ) ( ( ( StrConcat_2283_StrConcat ) ( ( ( StrConcat_2284_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Char_65   undefined2286 (  ) {
    struct Char_65  temp2287;
    return (  temp2287 );
}

static  struct Char_65   or_dash_fail2280 (    struct Maybe_351  x1353 ,    struct StrConcat_772  errmsg1355 ) {
    struct Maybe_351  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_351_None_t ) {
        ( (  panic2281 ) ( (  errmsg1355 ) ) );
        return ( (  undefined2286 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_351_Just_t ) {
            return ( dref1356 .stuff .Maybe_351_Just_s .field0 );
        }
    }
}

static  struct Char_65   char_dash_at_dash_offset2279 (    struct StrView_27  self2627 ,    size_t  i2629 ) {
    return ( (  or_dash_fail2280 ) ( ( (  head1409 ) ( ( (  chars295 ) ( ( (struct StrView_27) { .f_contents = ( (  from589 ) ( ( (  self2627 ) .f_contents ) ,  (  i2629 ) ) ) } ) ) ) ) ) ,  ( ( StrConcat_772_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"(StrView.char-at-offset) off too great for this StrView (" ) ,  ( 57 ) ) ) ,  (  i2629 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2290 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_351   char_dash_satisfies_prime_2292 (    struct Scanner_1092 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1409 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1120 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_351_Just ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_351_None_t ) {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2291 (    struct Scanner_1092 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2080 ) ( ( (  char_dash_satisfies_prime_2292 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  bool   lam2293 (    struct Char_65  c3954 ) {
    return ( !  eq360 ( (  c3954 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) );
}

struct envunion2295 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   gcode2269 (   struct env105* env ,    struct List_15 *  hls3943 ,    struct StrView_27  line_dash_sv3945 ) {
    struct Scanner_1092  temp2270 = ( (  mk_dash_from_dash_str1094 ) ( (  line_dash_sv3945 ) ) );
    struct Scanner_1092 *  sc3946 = ( &temp2270 );
    ( (  skip_dash_while2260 ) ( (  sc3946 ) ,  (  is_dash_whitespace415 ) ) );
    int32_t  first_dash_from_dash_off3947 = ( (  size_dash_i32311 ) ( ( ( * (  sc3946 ) ) .f_byte_dash_offset ) ) );
    if ( ( (  char_dash_satisfies2271 ) ( (  sc3946 ) ,  (  is_dash_alphanumeric1405 ) ) ) ) {
        ( (  skip_dash_while2273 ) ( (  sc3946 ) ,  (  gcode_dash_keyword_dash_char2276 ) ) );
        int32_t  first_dash_to_dash_off3948 = ( (  size_dash_i32311 ) ( ( ( * (  sc3946 ) ) .f_byte_dash_offset ) ) );
        enum HighlightType_18  type3949 = ( HighlightType_18_Invalid );
        struct Char_65  first_dash_char3950 = ( (  to_dash_lower2277 ) ( ( (  char_dash_at_dash_offset2279 ) ( (  line_dash_sv3945 ) ,  ( (  i32_dash_size280 ) ( (  first_dash_from_dash_off3947 ) ) ) ) ) ) );
        if ( (  eq360 ( (  first_dash_char3950 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) {
            type3949 = ( HighlightType_18_Keyword1 );
        } else {
            if ( (  eq360 ( (  first_dash_char3950 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"g" ) ,  ( 1 ) ) ) ) ) ) {
                type3949 = ( HighlightType_18_Ident1 );
            }
        }
        struct envunion106  temp2288 = ( (struct envunion106){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
        ( temp2288.fun ( &temp2288.env ,  (  hls3943 ) ,  ( (struct Highlight_17) { .f_from = (  first_dash_from_dash_off3947 ) , .f_to = (  first_dash_to_dash_off3948 ) , .f_type = (  type3949 ) } ) ) );
        ( (  skip_dash_while2260 ) ( (  sc3946 ) ,  (  is_dash_whitespace415 ) ) );
        int32_t  from_dash_off3951 = ( (  size_dash_i32311 ) ( ( ( * (  sc3946 ) ) .f_byte_dash_offset ) ) );
        while ( ( (  char_dash_satisfies2271 ) ( (  sc3946 ) ,  (  is_dash_alphanumeric1405 ) ) ) ) {
            ( (  skip_dash_while2273 ) ( (  sc3946 ) ,  (  gcode_dash_keyword_dash_char2276 ) ) );
            int32_t  to_dash_off3952 = ( (  size_dash_i32311 ) ( ( ( * (  sc3946 ) ) .f_byte_dash_offset ) ) );
            ( (  skip_dash_while2260 ) ( (  sc3946 ) ,  (  is_dash_whitespace415 ) ) );
            struct envunion2290  temp2289 = ( (struct envunion2290){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
            ( temp2289.fun ( &temp2289.env ,  (  hls3943 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3951 ) , .f_to = (  to_dash_off3952 ) , .f_type = ( HighlightType_18_Ident4 ) } ) ) );
        }
    }
    while ( ( (  char_dash_satisfies2291 ) ( (  sc3946 ) ,  (  lam2293 ) ) ) ) {
    }
    int32_t  from_dash_off3955 = ( (  size_dash_i32311 ) ( ( ( * (  sc3946 ) ) .f_byte_dash_offset ) ) );
    if ( ( (  try_dash_char2076 ) ( (  sc3946 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ) {
        struct envunion2295  temp2294 = ( (struct envunion2295){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
        ( temp2294.fun ( &temp2294.env ,  (  hls3943 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3955 ) , .f_to = ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( (  line_dash_sv3945 ) ) ) ) ) , .f_type = ( HighlightType_18_Comment ) } ) ) );
    }
    return ( Unit_8_Unit );
}

struct Tuple2_2300 {
    struct Char_65  field0;
    enum HighlightType_18  field1;
};

static struct Tuple2_2300 Tuple2_2300_Tuple2 (  struct Char_65  field0 ,  enum HighlightType_18  field1 ) {
    return ( struct Tuple2_2300 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Slice_2299 {
    struct Tuple2_2300 *  f_ptr;
    size_t  f_count;
};

struct Array_2302 {
    struct Tuple2_2300 _arr [8];
};

static  struct Tuple2_2300 *   cast_dash_ptr2303 (    struct Array_2302 *  p398 ) {
    return ( (struct Tuple2_2300 * ) (  p398 ) );
}

static  struct Slice_2299   from_dash_listlike2301 (    struct Array_2302 *  arr2200 ) {
    return ( (struct Slice_2299) { .f_ptr = ( (  cast_dash_ptr2303 ) ( (  arr2200 ) ) ) , .f_count = ( (  i32_dash_size280 ) ( ( 8 ) ) ) } );
}

struct env2305 {
    ;
    struct Slice_2299  bf_dash_chars3962;
    ;
    ;
    ;
};

struct envunion2306 {
    bool  (*fun) (  struct env2305*  ,    struct Char_65  );
    struct env2305 env;
};

struct SliceIter_2310 {
    struct Slice_2299  f_slice;
    size_t  f_current_dash_offset;
};

struct Map_2309 {
    struct SliceIter_2310  field0;
    struct Char_65 (*  field1 )(    struct Tuple2_2300  );
};

static struct Map_2309 Map_2309_Map (  struct SliceIter_2310  field0 ,  struct Char_65 (*  field1 )(    struct Tuple2_2300  ) ) {
    return ( struct Map_2309 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2311 {
    ;
    struct Char_65  c3964;
};

struct envunion2312 {
    bool  (*fun) (  struct env2311*  ,    struct Char_65  );
    struct env2311 env;
};

struct env2314 {
    struct envunion2312  fun1160;
};

struct envunion2315 {
    bool  (*fun) (  struct env2314*  ,    struct Char_65  ,    bool  );
    struct env2314 env;
};

static  struct Map_2309   into_dash_iter2316 (    struct Map_2309  self804 ) {
    return (  self804 );
}

struct Maybe_2318 {
    enum {
        Maybe_2318_None_t,
        Maybe_2318_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2300  field0;
        } Maybe_2318_Just_s;
    } stuff;
};

static struct Maybe_2318 Maybe_2318_Just (  struct Tuple2_2300  field0 ) {
    return ( struct Maybe_2318 ) { .tag = Maybe_2318_Just_t, .stuff = { .Maybe_2318_Just_s = { .field0 = field0 } } };
};

static  struct Tuple2_2300 *   offset_dash_ptr2320 (    struct Tuple2_2300 *  x377 ,    int64_t  count379 ) {
    struct Tuple2_2300  temp2321;
    return ( (struct Tuple2_2300 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp2321 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2318   next2319 (    struct SliceIter_2310 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2318) { .tag = Maybe_2318_None_t } );
    }
    struct Tuple2_2300  elem2258 = ( * ( (  offset_dash_ptr2320 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2318_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_351   next2317 (    struct Map_2309 *  dref806 ) {
    struct Maybe_2318  dref809 = ( (  next2319 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_2318_None_t ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_2318_Just_t ) {
            return ( ( Maybe_351_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_2318_Just_s .field0 ) ) ) ) );
        }
    }
}

static  bool   reduce2313 (    struct Map_2309  iterable1118 ,    bool  base1120 ,   struct envunion2315  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct Map_2309  it1124 = ( (  into_dash_iter2316 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1125 = ( (  next2317 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_351_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_351_Just_t ) {
                struct envunion2315  temp2322 = (  fun1122 );
                x1123 = ( temp2322.fun ( &temp2322.env ,  ( dref1125 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2323 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2323);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2324;
    return (  temp2324 );
}

static  bool   lam2325 (   struct env2314* env ,    struct Char_65  e1162 ,    bool  x1164 ) {
    struct envunion2312  temp2326 = ( env->fun1160 );
    return ( ( temp2326.fun ( &temp2326.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2308 (    struct Map_2309  it1158 ,   struct envunion2312  fun1160 ) {
    struct env2314 envinst2314 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2313 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2315){ .fun = (  bool  (*) (  struct env2314*  ,    struct Char_65  ,    bool  ) )lam2325 , .env =  envinst2314 } ) ) );
}

static  struct SliceIter_2310   into_dash_iter2328 (    struct Slice_2299  self2250 ) {
    return ( (struct SliceIter_2310) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Map_2309   map2327 (    struct Slice_2299  iterable813 ,    struct Char_65 (*  fun815 )(    struct Tuple2_2300  ) ) {
    struct SliceIter_2310  it816 = ( (  into_dash_iter2328 ) ( (  iterable813 ) ) );
    return ( ( Map_2309_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct Char_65   fst2329 (    struct Tuple2_2300  dref1563 ) {
    return ( dref1563 .field0 );
}

static  bool   lam2330 (   struct env2311* env ,    struct Char_65  eq3966 ) {
    return (  eq360 ( (  eq3966 ) , ( env->c3964 ) ) );
}

static  bool   lam2307 (   struct env2305* env ,    struct Char_65  c3964 ) {
    struct env2311 envinst2311 = {
        .c3964 =  c3964 ,
    };
    return ( (  any2308 ) ( ( (  map2327 ) ( ( env->bf_dash_chars3962 ) ,  (  fst2329 ) ) ) ,  ( (struct envunion2312){ .fun = (  bool  (*) (  struct env2311*  ,    struct Char_65  ) )lam2330 , .env =  envinst2311 } ) ) );
}

struct env2332 {
    ;
    struct Slice_2299  bf_dash_chars3962;
    ;
    ;
    ;
};

struct envunion2333 {
    bool  (*fun) (  struct env2332*  ,    struct Char_65  );
    struct env2332 env;
};

static  struct Maybe_351   char_dash_satisfies_prime_2331 (    struct Scanner_1092 *  sc3429 ,   struct envunion2333  condition3431 ) {
    struct Maybe_351  dref3432 = ( (  head1409 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        struct envunion2333  temp2334 = (  condition3431 );
        if ( ( temp2334.fun ( &temp2334.env ,  ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1120 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_351_Just ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_351_None_t ) {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
}

struct env2337 {
    struct Char_65  c3970;
    ;
};

struct envunion2338 {
    bool  (*fun) (  struct env2337*  ,    struct Char_65  );
    struct env2337 env;
};

struct env2340 {
    struct envunion2338  fun1160;
};

struct envunion2341 {
    bool  (*fun) (  struct env2340*  ,    struct Char_65  ,    bool  );
    struct env2340 env;
};

static  bool   reduce2339 (    struct Map_2309  iterable1118 ,    bool  base1120 ,   struct envunion2341  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct Map_2309  it1124 = ( (  into_dash_iter2316 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1125 = ( (  next2317 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_351_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_351_Just_t ) {
                struct envunion2341  temp2342 = (  fun1122 );
                x1123 = ( temp2342.fun ( &temp2342.env ,  ( dref1125 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2343 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2343);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2344;
    return (  temp2344 );
}

static  bool   lam2345 (   struct env2340* env ,    struct Char_65  e1162 ,    bool  x1164 ) {
    struct envunion2338  temp2346 = ( env->fun1160 );
    return ( ( temp2346.fun ( &temp2346.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2336 (    struct Map_2309  it1158 ,   struct envunion2338  fun1160 ) {
    struct env2340 envinst2340 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2339 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2341){ .fun = (  bool  (*) (  struct env2340*  ,    struct Char_65  ,    bool  ) )lam2345 , .env =  envinst2340 } ) ) );
}

static  bool   lam2347 (   struct env2337* env ,    struct Char_65  ec3972 ) {
    return (  eq360 ( (  ec3972 ) , ( env->c3970 ) ) );
}

static  bool   lam2335 (   struct env2332* env ,    struct Char_65  c3970 ) {
    struct env2337 envinst2337 = {
        .c3970 =  c3970 ,
    };
    return ( (  any2336 ) ( ( (  map2327 ) ( ( env->bf_dash_chars3962 ) ,  (  fst2329 ) ) ) ,  ( (struct envunion2338){ .fun = (  bool  (*) (  struct env2337*  ,    struct Char_65  ) )lam2347 , .env =  envinst2337 } ) ) );
}

static  enum HighlightType_18   snd2348 (    struct Tuple2_2300  dref1566 ) {
    return ( dref1566 .field1 );
}

static  struct Tuple2_2300   undefined2350 (  ) {
    struct Tuple2_2300  temp2351;
    return (  temp2351 );
}

static  struct Tuple2_2300   or_dash_fail2349 (    struct Maybe_2318  x1353 ,    struct StrView_27  errmsg1355 ) {
    struct Maybe_2318  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_2318_None_t ) {
        ( (  panic853 ) ( (  errmsg1355 ) ) );
        return ( (  undefined2350 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_2318_Just_t ) {
            return ( dref1356 .stuff .Maybe_2318_Just_s .field0 );
        }
    }
}

struct env2354 {
    ;
    struct Char_65  cc3974;
};

struct envunion2355 {
    bool  (*fun) (  struct env2354*  ,    struct Tuple2_2300  );
    struct env2354 env;
};

struct Filter_2353 {
    struct SliceIter_2310  f_og;
    struct envunion2355  f_fun;
};

static  struct Maybe_2318   next2356 (    struct Filter_2353 *  self841 ) {
    while ( ( true ) ) {
        struct Maybe_2318  dref842 = ( (  next2319 ) ( ( & ( ( * (  self841 ) ) .f_og ) ) ) );
        if ( dref842.tag == Maybe_2318_None_t ) {
            return ( (struct Maybe_2318) { .tag = Maybe_2318_None_t } );
        }
        else {
            if ( dref842.tag == Maybe_2318_Just_t ) {
                struct envunion2355  temp2357 = ( ( * (  self841 ) ) .f_fun );
                if ( ( temp2357.fun ( &temp2357.env ,  ( dref842 .stuff .Maybe_2318_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_2318_Just ) ( ( dref842 .stuff .Maybe_2318_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_2318  temp2358;
    return (  temp2358 );
}

static  struct Filter_2353   into_dash_iter2360 (    struct Filter_2353  self838 ) {
    return (  self838 );
}

static  struct Maybe_2318   head2352 (    struct Filter_2353  it1167 ) {
    struct Filter_2353  temp2359 = ( (  into_dash_iter2360 ) ( (  it1167 ) ) );
    return ( (  next2356 ) ( ( &temp2359 ) ) );
}

static  struct Filter_2353   filter2361 (    struct Slice_2299  iterable846 ,   struct envunion2355  fun848 ) {
    struct SliceIter_2310  it849 = ( (  into_dash_iter2328 ) ( (  iterable846 ) ) );
    return ( (struct Filter_2353) { .f_og = (  it849 ) , .f_fun = (  fun848 ) } );
}

static  bool   lam2362 (   struct env2354* env ,    struct Tuple2_2300  dref3975 ) {
    return (  eq360 ( ( dref3975 .field0 ) , ( env->cc3974 ) ) );
}

struct env2365 {
    struct envunion2306  is_dash_bf_dash_char3967;
};

struct envunion2366 {
    bool  (*fun) (  struct env2365*  ,    struct Char_65  );
    struct env2365 env;
};

static  struct Maybe_351   char_dash_satisfies_prime_2368 (    struct Scanner_1092 *  sc3429 ,   struct envunion2366  condition3431 ) {
    struct Maybe_351  dref3432 = ( (  head1409 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        struct envunion2366  temp2369 = (  condition3431 );
        if ( ( temp2369.fun ( &temp2369.env ,  ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1120 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_351_Just ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_351_None_t ) {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2367 (    struct Scanner_1092 *  sc3436 ,   struct envunion2366  condition3438 ) {
    return ( (  is_dash_just2080 ) ( ( (  char_dash_satisfies_prime_2368 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2364 (    struct Scanner_1092 *  sc3452 ,   struct envunion2366  condition3454 ) {
    while ( ( (  char_dash_satisfies2367 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2370 (   struct env2365* env ,    struct Char_65  c3981 ) {
    struct envunion2306  temp2371 = ( env->is_dash_bf_dash_char3967 );
    return ( ! ( temp2371.fun ( &temp2371.env ,  (  c3981 ) ) ) );
}

struct envunion2373 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   brainfuck2297 (   struct env107* env ,    struct List_15 *  hls3958 ,    struct StrView_27  line_dash_sv3960 ) {
    struct Scanner_1092  temp2298 = ( (  mk_dash_from_dash_str1094 ) ( (  line_dash_sv3960 ) ) );
    struct Scanner_1092 *  sc3961 = ( &temp2298 );
    ( (  skip_dash_while2260 ) ( (  sc3961 ) ,  (  is_dash_whitespace415 ) ) );
    struct Array_2302  temp2304 = ( (struct Array_2302) { ._arr = { ( ( Tuple2_2300_Tuple2 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special1 ) ) ) , ( ( Tuple2_2300_Tuple2 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"]" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special1 ) ) ) , ( ( Tuple2_2300_Tuple2 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"+" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special2 ) ) ) , ( ( Tuple2_2300_Tuple2 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special2 ) ) ) , ( ( Tuple2_2300_Tuple2 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"<" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special3 ) ) ) , ( ( Tuple2_2300_Tuple2 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)">" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special3 ) ) ) , ( ( Tuple2_2300_Tuple2 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"," ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Keyword1 ) ) ) , ( ( Tuple2_2300_Tuple2 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Keyword2 ) ) ) } } );
    struct Slice_2299  bf_dash_chars3962 = ( ( (  from_dash_listlike2301 ) ( ( &temp2304 ) ) ) );
    struct env2305 envinst2305 = {
        .bf_dash_chars3962 =  bf_dash_chars3962 ,
    };
    struct envunion2306  is_dash_bf_dash_char3967 = ( (struct envunion2306){ .fun = (  bool  (*) (  struct env2305*  ,    struct Char_65  ) )lam2307 , .env =  envinst2305 } );
    while ( ( ! ( (  null2072 ) ( (  sc3961 ) ) ) ) ) {
        while ( ( true ) ) {
            int32_t  from_dash_off3968 = ( (  size_dash_i32311 ) ( ( ( * (  sc3961 ) ) .f_byte_dash_offset ) ) );
            struct env2332 envinst2332 = {
                .bf_dash_chars3962 =  bf_dash_chars3962 ,
            };
            struct Maybe_351  dref3973 = ( (  char_dash_satisfies_prime_2331 ) ( (  sc3961 ) ,  ( (struct envunion2333){ .fun = (  bool  (*) (  struct env2332*  ,    struct Char_65  ) )lam2335 , .env =  envinst2332 } ) ) );
            if ( dref3973.tag == Maybe_351_Just_t ) {
                struct env2354 envinst2354 = {
                    .cc3974 = dref3973 .stuff .Maybe_351_Just_s .field0 ,
                };
                enum HighlightType_18  hl3977 = ( (  snd2348 ) ( ( (  or_dash_fail2349 ) ( ( (  head2352 ) ( ( (  filter2361 ) ( (  bf_dash_chars3962 ) ,  ( (struct envunion2355){ .fun = (  bool  (*) (  struct env2354*  ,    struct Tuple2_2300  ) )lam2362 , .env =  envinst2354 } ) ) ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"could not find matched char (it should not happen)" ) ,  ( 50 ) ) ) ) ) ) );
                int32_t  to_dash_off3978 = ( (  size_dash_i32311 ) ( ( ( * (  sc3961 ) ) .f_byte_dash_offset ) ) );
                struct envunion108  temp2363 = ( (struct envunion108){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
                ( temp2363.fun ( &temp2363.env ,  (  hls3958 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3968 ) , .f_to = (  to_dash_off3978 ) , .f_type = (  hl3977 ) } ) ) );
            }
            else {
                if ( dref3973.tag == Maybe_351_None_t ) {
                    break;
                }
            }
        }
        int32_t  from_dash_off3979 = ( (  size_dash_i32311 ) ( ( ( * (  sc3961 ) ) .f_byte_dash_offset ) ) );
        struct env2365 envinst2365 = {
            .is_dash_bf_dash_char3967 =  is_dash_bf_dash_char3967 ,
        };
        ( (  skip_dash_while2364 ) ( (  sc3961 ) ,  ( (struct envunion2366){ .fun = (  bool  (*) (  struct env2365*  ,    struct Char_65  ) )lam2370 , .env =  envinst2365 } ) ) );
        int32_t  to_dash_off3982 = ( (  size_dash_i32311 ) ( ( ( * (  sc3961 ) ) .f_byte_dash_offset ) ) );
        if ( (  cmp173 ( (  to_dash_off3982 ) , (  from_dash_off3979 ) ) == 2 ) ) {
            struct envunion2373  temp2372 = ( (struct envunion2373){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2084 , .env =  env->envinst35 } );
            ( temp2372.fun ( &temp2372.env ,  (  hls3958 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3979 ) , .f_to = (  to_dash_off3982 ) , .f_type = ( HighlightType_18_Comment ) } ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   recompute_dash_highlights_dash_at_dash_line2067 (   struct env147* env ,    struct TextBuf_117 *  self4250 ,    struct Line_12 *  line4252 ) {
    if ( ( ! ( ( * (  line4252 ) ) .f_invalidated ) ) ) {
        return ( Unit_8_Unit );
    }
    struct List_15 *  hls4253 = ( & ( ( * (  line4252 ) ) .f_highlights ) );
    ( (  trim2068 ) ( (  hls4253 ) ,  (  from_dash_integral0 ( 0 ) ) ) );
    struct StrView_27  line_dash_sv4254 = ( (  from_dash_bytes298 ) ( ( (  to_dash_slice299 ) ( ( ( * (  line4252 ) ) .f_line ) ) ) ) );
    enum Filetype_120  dref4255 = ( ( * (  self4250 ) ) .f_filetype );
    switch (  dref4255 ) {
        case Filetype_120_Text : {
            break;
        }
        case Filetype_120_KC : {
            struct envunion149  temp2069 = ( (struct envunion149){ .fun = (  enum Unit_8  (*) (  struct env101*  ,    struct List_15 *  ,    struct StrView_27  ) )kc2070 , .env =  env->envinst101 } );
            ( temp2069.fun ( &temp2069.env ,  (  hls4253 ) ,  (  line_dash_sv4254 ) ) );
            break;
        }
        case Filetype_120_Markdown : {
            struct envunion148  temp2255 = ( (struct envunion148){ .fun = (  enum Unit_8  (*) (  struct env103*  ,    struct List_15 *  ,    struct StrView_27  ) )markdown2256 , .env =  env->envinst103 } );
            ( temp2255.fun ( &temp2255.env ,  (  hls4253 ) ,  (  line_dash_sv4254 ) ) );
            break;
        }
        case Filetype_120_GCode : {
            struct envunion151  temp2268 = ( (struct envunion151){ .fun = (  enum Unit_8  (*) (  struct env105*  ,    struct List_15 *  ,    struct StrView_27  ) )gcode2269 , .env =  env->envinst105 } );
            ( temp2268.fun ( &temp2268.env ,  (  hls4253 ) ,  (  line_dash_sv4254 ) ) );
            break;
        }
        case Filetype_120_Brainfuck : {
            struct envunion150  temp2296 = ( (struct envunion150){ .fun = (  enum Unit_8  (*) (  struct env107*  ,    struct List_15 *  ,    struct StrView_27  ) )brainfuck2297 , .env =  env->envinst107 } );
            ( temp2296.fun ( &temp2296.env ,  (  hls4253 ) ,  (  line_dash_sv4254 ) ) );
            break;
        }
    }
    (*  line4252 ) .f_invalidated = ( false );
    return ( Unit_8_Unit );
}

static  struct Slice_16   subslice2376 (    struct Slice_16  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Highlight_17 *  begin_dash_ptr2209 = ( (  offset_dash_ptr2098 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp302 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp302 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_16) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub462 ( ( (  min591 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_16) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct SliceIter_2102   into_dash_iter2375 (    struct List_15  self2433 ) {
    return ( (  into_dash_iter2111 ) ( ( (  subslice2376 ) ( ( (  self2433 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2433 ) .f_count ) ) ) ) );
}

static  bool   between2378 (    int32_t  c1377 ,    int32_t  l1379 ,    int32_t  r1381 ) {
    int32_t  from1382 = ( (  min796 ) ( (  l1379 ) ,  (  r1381 ) ) );
    int32_t  to1383 = ( (  max374 ) ( (  l1379 ) ,  (  r1381 ) ) );
    return ( (  cmp173 ( (  from1382 ) , (  c1377 ) ) != 2 ) && (  cmp173 ( (  c1377 ) , (  to1383 ) ) != 2 ) );
}

static  struct Maybe_224   highlight_dash_at2065 (   struct env152* env ,    struct TextBuf_117 *  self4258 ,    struct Pos_26  pos4260 ) {
    struct Line_12 *  line4261 = ( (  get_dash_ptr301 ) ( ( & ( ( * (  self4258 ) ) .f_buf ) ) ,  ( (  i32_dash_size280 ) ( ( (  pos4260 ) .f_line ) ) ) ) );
    struct envunion153  temp2066 = ( (struct envunion153){ .fun = (  enum Unit_8  (*) (  struct env147*  ,    struct TextBuf_117 *  ,    struct Line_12 *  ) )recompute_dash_highlights_dash_at_dash_line2067 , .env =  env->envinst147 } );
    ( temp2066.fun ( &temp2066.env ,  (  self4258 ) ,  (  line4261 ) ) );
    struct SliceIter_2102  temp2374 =  into_dash_iter2375 ( ( ( * (  line4261 ) ) .f_highlights ) );
    while (true) {
        struct Maybe_2107  __cond2377 =  next2108 (&temp2374);
        if (  __cond2377 .tag == 0 ) {
            break;
        }
        struct Highlight_17  hl4263 =  __cond2377 .stuff .Maybe_2107_Just_s .field0;
        if ( ( (  between2378 ) ( ( (  pos4260 ) .f_bi ) ,  ( (  hl4263 ) .f_from ) ,  (  op_dash_sub180 ( ( (  hl4263 ) .f_to ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
            return ( ( Maybe_224_Just ) ( ( (  hl4263 ) .f_type ) ) );
        }
        if ( (  cmp173 ( ( (  pos4260 ) .f_bi ) , ( (  hl4263 ) .f_from ) ) == 0 ) ) {
            return ( (struct Maybe_224) { .tag = Maybe_224_None_t } );
        }
    }
    return ( (struct Maybe_224) { .tag = Maybe_224_None_t } );
}

struct Maybe_2382 {
    enum {
        Maybe_2382_None_t,
        Maybe_2382_Just_t,
    } tag;
    union {
        struct {
            struct HighlightColors_191  field0;
        } Maybe_2382_Just_s;
    } stuff;
};

static struct Maybe_2382 Maybe_2382_Just (  struct HighlightColors_191  field0 ) {
    return ( struct Maybe_2382 ) { .tag = Maybe_2382_Just_t, .stuff = { .Maybe_2382_Just_s = { .field0 = field0 } } };
};

struct env2383 {
    ;
    struct Theme_188 *  theme4317;
};

struct envunion2384 {
    struct Colors_189  (*fun) (  struct env2383*  ,    struct HighlightColors_191  );
    struct env2383 env;
};

static  struct Colors_189   maybe2381 (    struct Maybe_2382  x1592 ,   struct envunion2384  fun1594 ,    struct Colors_189  default1596 ) {
    struct envunion2384  temp2385 = (  fun1594 );
    return ( {  struct Maybe_2382  dref1597 = (  x1592 ) ; dref1597.tag == Maybe_2382_Just_t ? ( temp2385.fun ( &temp2385.env ,  ( dref1597 .stuff .Maybe_2382_Just_s .field0 ) ) ) : (  default1596 ) ; } );
}

struct SliceIter_2388 {
    struct Slice_190  f_slice;
    size_t  f_current_dash_offset;
};

struct env2389 {
    ;
    enum HighlightType_18  hltype4319;
};

struct envunion2390 {
    bool  (*fun) (  struct env2389*  ,    struct HighlightColors_191  );
    struct env2389 env;
};

struct Filter_2387 {
    struct SliceIter_2388  f_og;
    struct envunion2390  f_fun;
};

static  struct HighlightColors_191 *   offset_dash_ptr2393 (    struct HighlightColors_191 *  x377 ,    int64_t  count379 ) {
    struct HighlightColors_191  temp2394;
    return ( (struct HighlightColors_191 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp2394 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2382   next2392 (    struct SliceIter_2388 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2382) { .tag = Maybe_2382_None_t } );
    }
    struct HighlightColors_191  elem2258 = ( * ( (  offset_dash_ptr2393 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2382_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_2382   next2391 (    struct Filter_2387 *  self841 ) {
    while ( ( true ) ) {
        struct Maybe_2382  dref842 = ( (  next2392 ) ( ( & ( ( * (  self841 ) ) .f_og ) ) ) );
        if ( dref842.tag == Maybe_2382_None_t ) {
            return ( (struct Maybe_2382) { .tag = Maybe_2382_None_t } );
        }
        else {
            if ( dref842.tag == Maybe_2382_Just_t ) {
                struct envunion2390  temp2395 = ( ( * (  self841 ) ) .f_fun );
                if ( ( temp2395.fun ( &temp2395.env ,  ( dref842 .stuff .Maybe_2382_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_2382_Just ) ( ( dref842 .stuff .Maybe_2382_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_2382  temp2396;
    return (  temp2396 );
}

static  struct Filter_2387   into_dash_iter2398 (    struct Filter_2387  self838 ) {
    return (  self838 );
}

static  struct Maybe_2382   head2386 (    struct Filter_2387  it1167 ) {
    struct Filter_2387  temp2397 = ( (  into_dash_iter2398 ) ( (  it1167 ) ) );
    return ( (  next2391 ) ( ( &temp2397 ) ) );
}

static  struct SliceIter_2388   into_dash_iter2400 (    struct Slice_190  self2250 ) {
    return ( (struct SliceIter_2388) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_2387   filter2399 (    struct Slice_190  iterable846 ,   struct envunion2390  fun848 ) {
    struct SliceIter_2388  it849 = ( (  into_dash_iter2400 ) ( (  iterable846 ) ) );
    return ( (struct Filter_2387) { .f_og = (  it849 ) , .f_fun = (  fun848 ) } );
}

static  bool   eq2403 (    uint32_t  l120 ,    uint32_t  r122 ) {
    return ( (  l120 ) == (  r122 ) );
}

static  enum HighlightType_18 *   cast2406 (    uint32_t *  x395 ) {
    return ( (enum HighlightType_18 * ) (  x395 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed2404 (    enum HighlightType_18  x651 ) {
    uint32_t  temp2405 = ( (  zeroed948 ) ( ) );
    uint32_t *  y652 = ( &temp2405 );
    enum HighlightType_18 *  yp653 = ( (  cast2406 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  bool   eq2402 (    enum HighlightType_18  l3876 ,    enum HighlightType_18  r3878 ) {
    return (  eq2403 ( ( ( (  cast_dash_on_dash_zeroed2404 ) ( (  l3876 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2404 ) ( (  r3878 ) ) ) ) );
}

static  bool   lam2401 (   struct env2389* env ,    struct HighlightColors_191  hlc4321 ) {
    return (  eq2402 ( ( (  hlc4321 ) .f_type ) , ( env->hltype4319 ) ) );
}

static  struct Color_154   or_dash_else2408 (    struct Maybe_192  self1360 ,    struct Color_154  alt1362 ) {
    struct Maybe_192  dref1363 = (  self1360 );
    if ( dref1363.tag == Maybe_192_None_t ) {
        return (  alt1362 );
    }
    else {
        if ( dref1363.tag == Maybe_192_Just_t ) {
            return ( dref1363 .stuff .Maybe_192_Just_s .field0 );
        }
    }
}

static  struct Colors_189   lam2407 (   struct env2383* env ,    struct HighlightColors_191  hlc4323 ) {
    return ( (struct Colors_189) { .f_fg = ( (  hlc4323 ) .f_fg ) , .f_bg = ( (  or_dash_else2408 ) ( ( (  hlc4323 ) .f_bg ) ,  ( ( ( * ( env->theme4317 ) ) .f_default ) .f_bg ) ) ) } );
}

static  struct Colors_189   find_dash_colors_dash_for_dash_highlight2380 (    struct Theme_188 *  theme4317 ,    enum HighlightType_18  hltype4319 ) {
    struct env2389 envinst2389 = {
        .hltype4319 =  hltype4319 ,
    };
    struct env2383 envinst2383 = {
        .theme4317 =  theme4317 ,
    };
    return ( (  maybe2381 ) ( ( (  head2386 ) ( ( (  filter2399 ) ( ( ( * (  theme4317 ) ) .f_highlights ) ,  ( (struct envunion2390){ .fun = (  bool  (*) (  struct env2389*  ,    struct HighlightColors_191  ) )lam2401 , .env =  envinst2389 } ) ) ) ) ) ,  ( (struct envunion2384){ .fun = (  struct Colors_189  (*) (  struct env2383*  ,    struct HighlightColors_191  ) )lam2407 , .env =  envinst2383 } ) ,  ( ( * (  theme4317 ) ) .f_default ) ) );
}

static  enum Unit_8   lam2379 (   struct env2061* env ,    enum HighlightType_18  type4450 ) {
    ( (  set_dash_colors2026 ) ( ( env->screen4420 ) ,  ( (  find_dash_colors_dash_for_dash_highlight2380 ) ( ( env->theme4427 ) ,  (  type4450 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   todo2412 (  ) {
    ( (  println1412 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"todo" ) ,  ( 4 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1774 ) ( ) );
}

static  struct StrView_27   short_dash_mode_dash_name2411 (    enum Mode_242  mode4338 ) {
    return ( {  enum Mode_242  dref4339 = (  mode4338 ) ;  dref4339 == Mode_242_Normal ? ( (  from_dash_string220 ) ( ( (uint8_t*)"NOR" ) ,  ( 3 ) ) ) :  dref4339 == Mode_242_Insert ? ( (  from_dash_string220 ) ( ( (uint8_t*)"INS" ) ,  ( 3 ) ) ) :  dref4339 == Mode_242_Select ? ( (  from_dash_string220 ) ( ( (uint8_t*)"SEL" ) ,  ( 3 ) ) ) : ( (  todo2412 ) ( ) ) ; } );
}

struct StrConcat_2415 {
    struct Char_65  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2415 StrConcat_2415_StrConcat (  struct Char_65  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2415 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2414 {
    struct StrConcat_2415  field0;
    struct Char_65  field1;
};

static struct StrConcat_2414 StrConcat_2414_StrConcat (  struct StrConcat_2415  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2414 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2418 {
    struct AppendIter_1161  f_left;
    struct StrViewIter_293  f_right;
};

struct StrConcatIter_2417 {
    struct StrConcatIter_2418  f_left;
    struct AppendIter_1161  f_right;
};

static  struct StrConcatIter_2417   into_dash_iter2419 (    struct StrConcatIter_2417  self1290 ) {
    return (  self1290 );
}

static  struct StrConcatIter_2418   into_dash_iter2423 (    struct StrConcat_2415  dref1297 ) {
    return ( (struct StrConcatIter_2418) { .f_left = ( (  chars1196 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars295 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2418   chars2422 (    struct StrConcat_2415  self1308 ) {
    return ( (  into_dash_iter2423 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2417   into_dash_iter2421 (    struct StrConcat_2414  dref1297 ) {
    return ( (struct StrConcatIter_2417) { .f_left = ( (  chars2422 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1196 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2417   chars2420 (    struct StrConcat_2414  self1308 ) {
    return ( (  into_dash_iter2421 ) ( (  self1308 ) ) );
}

static  struct Maybe_351   next2426 (    struct StrConcatIter_2418 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next1183 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2425 (    struct StrConcatIter_2417 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2426 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1183 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   draw_dash_str2413 (    struct Screen_451 *  screen3793 ,    struct StrConcat_2414  s3795 ,    int32_t  x3797 ,    int32_t  y3799 ) {
    int32_t  w3800 = ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  y3799 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3799 ) , ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3801 = (  op_dash_add175 ( (  op_dash_mul1597 ( (  y3799 ) , (  w3800 ) ) ) , (  x3797 ) ) );
    int32_t  x3802 = ( (  min796 ) ( (  x3797 ) ,  (  w3800 ) ) );
    size_t  max_dash_len3803 = ( (  i32_dash_size280 ) ( (  op_dash_sub180 ( (  w3800 ) , (  x3802 ) ) ) ) );
    int32_t  xx3804 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2417  temp2416 =  into_dash_iter2419 ( ( (  chars2420 ) ( (  s3795 ) ) ) );
    while (true) {
        struct Maybe_351  __cond2424 =  next2425 (&temp2416);
        if (  __cond2424 .tag == 0 ) {
            break;
        }
        struct Char_65  c3806 =  __cond2424 .stuff .Maybe_351_Just_s .field0;
        ( (  put_dash_char2042 ) ( (  screen3793 ) ,  (  c3806 ) ,  (  op_dash_add175 ( (  x3802 ) , (  xx3804 ) ) ) ,  (  y3799 ) ) );
        xx3804 = (  op_dash_add175 ( (  xx3804 ) , ( (  rendered_dash_wcwidth373 ) ( (  c3806 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render2000 (   struct env222* env ,    struct Screen_451 *  screen4420 ,    struct Pane_241 *  pane4422 ,    struct ScreenDims_454  sd4424 ,    struct Config_272 *  cfg4426 ) {
    struct Theme_188 *  theme4427 = ( ( * (  cfg4426 ) ) .f_theme );
    bool  display_dash_line_dash_numbers4428 = ( ( * (  cfg4426 ) ) .f_display_dash_line_dash_numbers );
    bool  relative_dash_line_dash_numbers4429 = ( ( * (  cfg4426 ) ) .f_relative_dash_line_dash_numbers );
    int32_t  max_dash_line_dash_num_dash_chars4430 = ( (  size_dash_i32311 ) ( ( (  count2001 ) ( ( (  chars2017 ) ( ( (  num_dash_lines420 ) ( ( ( * (  pane4422 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin4431 = (  from_dash_integral56 ( 2 ) );
    int32_t  num_dash_back_dash_margin4432 = (  from_dash_integral56 ( 2 ) );
    int32_t  total_dash_margin4433 = ( (  display_dash_line_dash_numbers4428 ) ? (  op_dash_add175 ( (  op_dash_add175 ( (  max_dash_line_dash_num_dash_chars4430 ) , (  num_dash_front_dash_margin4431 ) ) ) , (  num_dash_back_dash_margin4432 ) ) ) : (  from_dash_integral56 ( 0 ) ) );
    struct ScreenDims_454  temp2023 = (  sd4424 );
    temp2023 .  f_from_dash_sx = (  op_dash_add175 ( ( (  sd4424 ) .f_from_dash_sx ) , (  total_dash_margin4433 ) ) );
    ( (  update_dash_screen_dash_offset2020 ) ( (  pane4422 ) ,  ( temp2023 ) ) );
    struct ScreenCursorOffset_243  sc_dash_off4434 = ( ( * (  pane4422 ) ) .f_sc_dash_off );
    struct RangeIter_169  temp2024 =  into_dash_iter170 ( ( (  to179 ) ( (  op_dash_add175 ( ( (  sc_dash_off4434 ) .f_screen_dash_top ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min796 ) ( ( (  num_dash_lines420 ) ( ( ( * (  pane4422 ) ) .f_buf ) ) ) ,  (  op_dash_add175 ( ( (  sc_dash_off4434 ) .f_screen_dash_top ) , ( (  screen_dash_height2022 ) ( (  sd4424 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond2025 =  next172 (&temp2024);
        if (  __cond2025 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num4436 =  __cond2025 .stuff .Maybe_171_Just_s .field0;
        int32_t  ybi4437 = (  op_dash_sub180 ( (  line_dash_num4436 ) , (  from_dash_integral56 ( 1 ) ) ) );
        int32_t  xbi4438 = ( (  vi_dash_bi1234 ) ( ( ( * (  pane4422 ) ) .f_buf ) ,  (  ybi4437 ) ,  ( (  sc_dash_off4434 ) .f_screen_dash_left ) ) );
        struct StrView_27  line_dash_content4439 = ( (  line297 ) ( ( ( * (  pane4422 ) ) .f_buf ) ,  (  ybi4437 ) ) );
        int32_t  ys4440 = (  op_dash_sub180 ( (  op_dash_sub180 ( (  op_dash_add175 ( ( (  sd4424 ) .f_from_dash_sy ) , (  line_dash_num4436 ) ) ) , ( (  sc_dash_off4434 ) .f_screen_dash_top ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers4428 ) ) {
            if ( (  eq700 ( ( ( ( * (  pane4422 ) ) .f_cursor ) .f_line ) , (  ybi4437 ) ) ) ) {
                ( (  set_dash_colors2026 ) ( (  screen4420 ) ,  ( ( * (  theme4427 ) ) .f_line_dash_num_dash_hl ) ) );
            } else {
                ( (  set_dash_colors2026 ) ( (  screen4420 ) ,  ( ( * (  theme4427 ) ) .f_line_dash_num ) ) );
            }
            int32_t  line_dash_display4441 = ( ( ( ! (  relative_dash_line_dash_numbers4429 ) ) || (  eq700 ( ( ( ( * (  pane4422 ) ) .f_cursor ) .f_line ) , (  ybi4437 ) ) ) ) ? (  line_dash_num4436 ) : ( (  abs2028 ) ( (  op_dash_sub180 ( ( ( ( * (  pane4422 ) ) .f_cursor ) .f_line ) , (  ybi4437 ) ) ) ) ) );
            ( (  draw_dash_str_dash_right2029 ) ( (  screen4420 ) ,  (  line_dash_display4441 ) ,  (  op_dash_add175 ( (  op_dash_sub180 ( (  op_dash_sub180 ( ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen4420 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd4424 ) .f_from_dash_sx ) ) ) , (  total_dash_margin4433 ) ) ) , (  num_dash_back_dash_margin4432 ) ) ) ,  (  ys4440 ) ) );
            ( (  set_dash_colors2026 ) ( (  screen4420 ) ,  ( ( * (  theme4427 ) ) .f_default ) ) );
        }
        int32_t  vx4442 = (  op_dash_sub180 ( ( (  pos_dash_vi291 ) ( ( ( * (  pane4422 ) ) .f_buf ) ,  ( (  mk832 ) ( (  ybi4437 ) ,  (  xbi4438 ) ) ) ) ) , ( (  sc_dash_off4434 ) .f_screen_dash_left ) ) );
        ( (  assert2045 ) ( (  cmp173 ( (  vx4442 ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_2046_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx4442 ) ) ) ) );
        int32_t  left_dash_offset4443 = (  op_dash_add175 ( ( (  sd4424 ) .f_from_dash_sx ) , (  total_dash_margin4433 ) ) );
        struct AppendIter_2053  temp2052 =  into_dash_iter2054 ( ( (  append2055 ) ( ( (  chars295 ) ( ( (  byte_dash_substr_dash_from588 ) ( (  line_dash_content4439 ) ,  ( (  i32_dash_size280 ) ( (  xbi4438 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_351  __cond2056 =  next2057 (&temp2052);
            if (  __cond2056 .tag == 0 ) {
                break;
            }
            struct Char_65  c4445 =  __cond2056 .stuff .Maybe_351_Just_s .field0;
            if ( (  cmp173 ( (  vx4442 ) , ( (  sd4424 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_26  curpos4446 = ( (  mk832 ) ( (  ybi4437 ) ,  (  xbi4438 ) ) );
            bool  is_dash_cursor4447 = (  eq699 ( (  curpos4446 ) , ( ( * (  pane4422 ) ) .f_cursor ) ) );
            bool  in_dash_selection4448 = ( (  is_dash_in_dash_selection2058 ) ( (  pane4422 ) ,  ( (  mk832 ) ( (  ybi4437 ) ,  (  xbi4438 ) ) ) ) );
            if ( (  is_dash_cursor4447 ) ) {
                ( (  set_dash_colors2026 ) ( (  screen4420 ) ,  ( ( * (  theme4427 ) ) .f_cursor ) ) );
            } else {
                if ( (  in_dash_selection4448 ) ) {
                    ( (  set_dash_colors2026 ) ( (  screen4420 ) ,  ( ( * (  theme4427 ) ) .f_selection ) ) );
                } else {
                    struct envunion223  temp2064 = ( (struct envunion223){ .fun = (  struct Maybe_224  (*) (  struct env152*  ,    struct TextBuf_117 *  ,    struct Pos_26  ) )highlight_dash_at2065 , .env =  env->envinst152 } );
                    struct env2061 envinst2061 = {
                        .theme4427 =  theme4427 ,
                        .screen4420 =  screen4420 ,
                    };
                    ( (  if_dash_just2060 ) ( ( temp2064.fun ( &temp2064.env ,  ( ( * (  pane4422 ) ) .f_buf ) ,  (  curpos4446 ) ) ) ,  ( (struct envunion2062){ .fun = (  enum Unit_8  (*) (  struct env2061*  ,    enum HighlightType_18  ) )lam2379 , .env =  envinst2061 } ) ) );
                }
            }
            struct Maybe_85  dref4451 = ( (  char_dash_replacement359 ) ( (  c4445 ) ) );
            if ( dref4451.tag == Maybe_85_None_t ) {
                if ( ( ! ( (  cmp173 ( (  vx4442 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  op_dash_sub180 ( (  op_dash_add175 ( (  vx4442 ) , ( (  char_dash_screen_dash_width357 ) ( (  c4445 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  sd4424 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char2042 ) ( (  screen4420 ) ,  (  c4445 ) ,  (  op_dash_add175 ( (  left_dash_offset4443 ) , (  vx4442 ) ) ) ,  (  ys4440 ) ) );
                }
                vx4442 = (  op_dash_add175 ( (  vx4442 ) , ( (  char_dash_screen_dash_width357 ) ( (  c4445 ) ) ) ) );
            }
            else {
                if ( dref4451.tag == Maybe_85_Just_t ) {
                    struct StrViewIter_293  temp2409 =  into_dash_iter294 ( ( (  chars295 ) ( ( dref4451 .stuff .Maybe_85_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_351  __cond2410 =  next352 (&temp2409);
                        if (  __cond2410 .tag == 0 ) {
                            break;
                        }
                        struct Char_65  c4454 =  __cond2410 .stuff .Maybe_351_Just_s .field0;
                        if ( (  cmp173 ( (  vx4442 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char2042 ) ( (  screen4420 ) ,  (  c4454 ) ,  (  op_dash_add175 ( (  left_dash_offset4443 ) , (  vx4442 ) ) ) ,  (  ys4440 ) ) );
                        }
                        vx4442 = (  op_dash_add175 ( (  vx4442 ) , ( (  char_dash_screen_dash_width357 ) ( (  c4454 ) ) ) ) );
                    }
                }
            }
            ( (  set_dash_colors2026 ) ( (  screen4420 ) ,  ( ( * (  theme4427 ) ) .f_default ) ) );
            xbi4438 = (  op_dash_add175 ( (  xbi4438 ) , ( (  size_dash_i32311 ) ( ( (  c4445 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    ( (  set_dash_colors2026 ) ( (  screen4420 ) ,  ( ( * (  theme4427 ) ) .f_overlay ) ) );
    struct StrView_27  modename4455 = ( (  short_dash_mode_dash_name2411 ) ( ( ( * (  pane4422 ) ) .f_mode ) ) );
    ( (  draw_dash_str2413 ) ( (  screen4420 ) ,  ( ( StrConcat_2414_StrConcat ) ( ( ( StrConcat_2415_StrConcat ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ,  (  modename4455 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ,  ( (  sd4424 ) .f_from_dash_sx ) ,  ( (  sd4424 ) .f_to_dash_sy ) ) );
    return ( Unit_8_Unit );
}

struct env2428 {
    ;
    struct Screen_451 *  screen4873;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion2429 {
    enum Unit_8  (*fun) (  struct env2428*  ,    struct StrView_27  );
    struct env2428 env;
};

static  enum Unit_8   if_dash_just2427 (    struct Maybe_85  x1601 ,   struct envunion2429  fun1603 ) {
    struct Maybe_85  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_85_Just_t ) {
        struct envunion2429  temp2430 = (  fun1603 );
        ( temp2430.fun ( &temp2430.env ,  ( dref1604 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam2431 (   struct env2428* env ,    struct StrView_27  msg4878 ) {
    int32_t  num_dash_chars4879 = ( (  size_dash_i32311 ) ( ( (  count368 ) ( ( (  chars295 ) ( (  msg4878 ) ) ) ) ) ) );
    ( (  draw_dash_str2413 ) ( ( env->screen4873 ) ,  ( ( StrConcat_2414_StrConcat ) ( ( ( StrConcat_2415_StrConcat ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ,  (  msg4878 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ,  (  op_dash_div1596 ( (  op_dash_sub180 ( ( (  u32_dash_i321986 ) ( ( ( * ( ( * ( env->screen4873 ) ) .f_tui ) ) .f_width ) ) ) , (  num_dash_chars4879 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  op_dash_sub180 ( ( (  u32_dash_i321986 ) ( ( ( * ( ( * ( env->screen4873 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2434 {
    struct StrView_27  field0;
    struct StrBuilder_62  field1;
};

static struct StrConcat_2434 StrConcat_2434_StrConcat (  struct StrView_27  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct StrConcat_2434 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2433 {
    struct StrConcat_2434  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2433 StrConcat_2433_StrConcat (  struct StrConcat_2434  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2433 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2432 {
    struct StrConcat_2433  field0;
    struct Char_65  field1;
};

static struct StrConcat_2432 StrConcat_2432_StrConcat (  struct StrConcat_2433  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2432 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2437 {
    struct StrConcatIter_1811  f_left;
    struct StrViewIter_293  f_right;
};

struct StrConcatIter_2436 {
    struct StrConcatIter_2437  f_left;
    struct AppendIter_1161  f_right;
};

static  struct StrConcatIter_2436   into_dash_iter2439 (    struct StrConcatIter_2436  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_351   next2441 (    struct StrConcatIter_2437 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next1819 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2440 (    struct StrConcatIter_2436 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2441 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1183 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2438 (    struct StrConcatIter_2436  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct StrConcatIter_2436  it1124 = ( (  into_dash_iter2439 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1125 = ( (  next2440 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_351_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_351_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2442 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2442);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp2443;
    return (  temp2443 );
}

static  size_t   lam2444 (    struct Char_65  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add356 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2435 (    struct StrConcatIter_2436  it1129 ) {
    return ( (  reduce2438 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2444 ) ) );
}

static  struct StrConcatIter_1811   into_dash_iter2450 (    struct StrConcat_2434  dref1297 ) {
    return ( (struct StrConcatIter_1811) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1778 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1811   chars2449 (    struct StrConcat_2434  self1308 ) {
    return ( (  into_dash_iter2450 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2437   into_dash_iter2448 (    struct StrConcat_2433  dref1297 ) {
    return ( (struct StrConcatIter_2437) { .f_left = ( (  chars2449 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars295 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2437   chars2447 (    struct StrConcat_2433  self1308 ) {
    return ( (  into_dash_iter2448 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2436   into_dash_iter2446 (    struct StrConcat_2432  dref1297 ) {
    return ( (struct StrConcatIter_2436) { .f_left = ( (  chars2447 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1196 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2436   chars2445 (    struct StrConcat_2432  self1308 ) {
    return ( (  into_dash_iter2446 ) ( (  self1308 ) ) );
}

static  enum Unit_8   draw_dash_str2451 (    struct Screen_451 *  screen3793 ,    struct StrConcat_2432  s3795 ,    int32_t  x3797 ,    int32_t  y3799 ) {
    int32_t  w3800 = ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  y3799 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3799 ) , ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3801 = (  op_dash_add175 ( (  op_dash_mul1597 ( (  y3799 ) , (  w3800 ) ) ) , (  x3797 ) ) );
    int32_t  x3802 = ( (  min796 ) ( (  x3797 ) ,  (  w3800 ) ) );
    size_t  max_dash_len3803 = ( (  i32_dash_size280 ) ( (  op_dash_sub180 ( (  w3800 ) , (  x3802 ) ) ) ) );
    int32_t  xx3804 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2436  temp2452 =  into_dash_iter2439 ( ( (  chars2445 ) ( (  s3795 ) ) ) );
    while (true) {
        struct Maybe_351  __cond2453 =  next2440 (&temp2452);
        if (  __cond2453 .tag == 0 ) {
            break;
        }
        struct Char_65  c3806 =  __cond2453 .stuff .Maybe_351_Just_s .field0;
        ( (  put_dash_char2042 ) ( (  screen3793 ) ,  (  c3806 ) ,  (  op_dash_add175 ( (  x3802 ) , (  xx3804 ) ) ) ,  (  y3799 ) ) );
        xx3804 = (  op_dash_add175 ( (  xx3804 ) , ( (  rendered_dash_wcwidth373 ) ( (  c3806 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2454 {
    struct StrConcat_2433  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2454 StrConcat_2454_StrConcat (  struct StrConcat_2433  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2454 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2456 {
    struct StrConcatIter_2437  f_left;
    struct StrViewIter_293  f_right;
};

static  struct StrConcatIter_2456   into_dash_iter2458 (    struct StrConcatIter_2456  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_351   next2459 (    struct StrConcatIter_2456 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2441 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2457 (    struct StrConcatIter_2456  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct StrConcatIter_2456  it1124 = ( (  into_dash_iter2458 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1125 = ( (  next2459 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_351_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_351_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2460 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2460);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp2461;
    return (  temp2461 );
}

static  size_t   lam2462 (    struct Char_65  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add356 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2455 (    struct StrConcatIter_2456  it1129 ) {
    return ( (  reduce2457 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2462 ) ) );
}

static  struct StrConcatIter_2456   into_dash_iter2464 (    struct StrConcat_2454  dref1297 ) {
    return ( (struct StrConcatIter_2456) { .f_left = ( (  chars2447 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars295 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2456   chars2463 (    struct StrConcat_2454  self1308 ) {
    return ( (  into_dash_iter2464 ) ( (  self1308 ) ) );
}

static  enum Unit_8   draw_dash_str2465 (    struct Screen_451 *  screen3793 ,    struct StrConcat_2454  s3795 ,    int32_t  x3797 ,    int32_t  y3799 ) {
    int32_t  w3800 = ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  y3799 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3799 ) , ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3801 = (  op_dash_add175 ( (  op_dash_mul1597 ( (  y3799 ) , (  w3800 ) ) ) , (  x3797 ) ) );
    int32_t  x3802 = ( (  min796 ) ( (  x3797 ) ,  (  w3800 ) ) );
    size_t  max_dash_len3803 = ( (  i32_dash_size280 ) ( (  op_dash_sub180 ( (  w3800 ) , (  x3802 ) ) ) ) );
    int32_t  xx3804 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2456  temp2466 =  into_dash_iter2458 ( ( (  chars2463 ) ( (  s3795 ) ) ) );
    while (true) {
        struct Maybe_351  __cond2467 =  next2459 (&temp2466);
        if (  __cond2467 .tag == 0 ) {
            break;
        }
        struct Char_65  c3806 =  __cond2467 .stuff .Maybe_351_Just_s .field0;
        ( (  put_dash_char2042 ) ( (  screen3793 ) ,  (  c3806 ) ,  (  op_dash_add175 ( (  x3802 ) , (  xx3804 ) ) ) ,  (  y3799 ) ) );
        xx3804 = (  op_dash_add175 ( (  xx3804 ) , ( (  rendered_dash_wcwidth373 ) ( (  c3806 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str2468 (    struct Screen_451 *  screen3793 ,    struct StrView_27  s3795 ,    int32_t  x3797 ,    int32_t  y3799 ) {
    int32_t  w3800 = ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  y3799 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3799 ) , ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3801 = (  op_dash_add175 ( (  op_dash_mul1597 ( (  y3799 ) , (  w3800 ) ) ) , (  x3797 ) ) );
    int32_t  x3802 = ( (  min796 ) ( (  x3797 ) ,  (  w3800 ) ) );
    size_t  max_dash_len3803 = ( (  i32_dash_size280 ) ( (  op_dash_sub180 ( (  w3800 ) , (  x3802 ) ) ) ) );
    int32_t  xx3804 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_293  temp2469 =  into_dash_iter294 ( ( (  chars295 ) ( (  s3795 ) ) ) );
    while (true) {
        struct Maybe_351  __cond2470 =  next352 (&temp2469);
        if (  __cond2470 .tag == 0 ) {
            break;
        }
        struct Char_65  c3806 =  __cond2470 .stuff .Maybe_351_Just_s .field0;
        ( (  put_dash_char2042 ) ( (  screen3793 ) ,  (  c3806 ) ,  (  op_dash_add175 ( (  x3802 ) , (  xx3804 ) ) ) ,  (  y3799 ) ) );
        xx3804 = (  op_dash_add175 ( (  xx3804 ) , ( (  rendered_dash_wcwidth373 ) ( (  c3806 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct Zip_2472 {
    struct SliceIter_1961  f_left_dash_it;
    struct FromIter_544  f_right_dash_it;
};

static  struct Zip_2472   into_dash_iter2473 (    struct Zip_2472  self936 ) {
    return (  self936 );
}

static  struct Zip_2472   zip2474 (    struct Slice_270  left947 ,    struct FromIter_544  right949 ) {
    struct SliceIter_1961  left_dash_it950 = ( (  into_dash_iter1962 ) ( (  left947 ) ) );
    struct FromIter_544  right_dash_it951 = ( (  into_dash_iter554 ) ( (  right949 ) ) );
    return ( (struct Zip_2472) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

struct Tuple2_2477 {
    struct MenuItem_271  field0;
    int32_t  field1;
};

static struct Tuple2_2477 Tuple2_2477_Tuple2 (  struct MenuItem_271  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2477 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_2476 {
    enum {
        Maybe_2476_None_t,
        Maybe_2476_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2477  field0;
        } Maybe_2476_Just_s;
    } stuff;
};

static struct Maybe_2476 Maybe_2476_Just (  struct Tuple2_2477  field0 ) {
    return ( struct Maybe_2476 ) { .tag = Maybe_2476_Just_t, .stuff = { .Maybe_2476_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2476   next2478 (    struct Zip_2472 *  self939 ) {
    struct Zip_2472  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_1964  dref941 = ( (  next1965 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_1964_None_t ) {
            return ( (struct Maybe_2476) { .tag = Maybe_2476_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_1964_Just_t ) {
                struct Maybe_171  dref943 = ( (  next550 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_2476) { .tag = Maybe_2476_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next1965 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next550 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2476_Just ) ( ( ( Tuple2_2477_Tuple2 ) ( ( dref941 .stuff .Maybe_1964_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct StrConcat_2481 {
    char  field0;
    struct Char_65  field1;
};

static struct StrConcat_2481 StrConcat_2481_StrConcat (  char  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2481 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2480 {
    struct StrConcat_2481  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2480 StrConcat_2480_StrConcat (  struct StrConcat_2481  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2480 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2484 {
    struct AppendIter_1161  f_left;
    struct AppendIter_1161  f_right;
};

struct StrConcatIter_2483 {
    struct StrConcatIter_2484  f_left;
    struct StrViewIter_293  f_right;
};

static  struct StrConcatIter_2483   into_dash_iter2485 (    struct StrConcatIter_2483  self1290 ) {
    return (  self1290 );
}

static  struct AppendIter_1161   chars2490 (    char  self1658 ) {
    return ( (  single1197 ) ( ( (  ascii_dash_char1866 ) ( (  self1658 ) ) ) ) );
}

static  struct StrConcatIter_2484   into_dash_iter2489 (    struct StrConcat_2481  dref1297 ) {
    return ( (struct StrConcatIter_2484) { .f_left = ( (  chars2490 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1196 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2484   chars2488 (    struct StrConcat_2481  self1308 ) {
    return ( (  into_dash_iter2489 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2483   into_dash_iter2487 (    struct StrConcat_2480  dref1297 ) {
    return ( (struct StrConcatIter_2483) { .f_left = ( (  chars2488 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars295 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2483   chars2486 (    struct StrConcat_2480  self1308 ) {
    return ( (  into_dash_iter2487 ) ( (  self1308 ) ) );
}

static  struct Maybe_351   next2493 (    struct StrConcatIter_2484 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next1183 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1183 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2492 (    struct StrConcatIter_2483 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2493 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   draw_dash_str2479 (    struct Screen_451 *  screen3793 ,    struct StrConcat_2480  s3795 ,    int32_t  x3797 ,    int32_t  y3799 ) {
    int32_t  w3800 = ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  y3799 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3799 ) , ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3801 = (  op_dash_add175 ( (  op_dash_mul1597 ( (  y3799 ) , (  w3800 ) ) ) , (  x3797 ) ) );
    int32_t  x3802 = ( (  min796 ) ( (  x3797 ) ,  (  w3800 ) ) );
    size_t  max_dash_len3803 = ( (  i32_dash_size280 ) ( (  op_dash_sub180 ( (  w3800 ) , (  x3802 ) ) ) ) );
    int32_t  xx3804 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2483  temp2482 =  into_dash_iter2485 ( ( (  chars2486 ) ( (  s3795 ) ) ) );
    while (true) {
        struct Maybe_351  __cond2491 =  next2492 (&temp2482);
        if (  __cond2491 .tag == 0 ) {
            break;
        }
        struct Char_65  c3806 =  __cond2491 .stuff .Maybe_351_Just_s .field0;
        ( (  put_dash_char2042 ) ( (  screen3793 ) ,  (  c3806 ) ,  (  op_dash_add175 ( (  x3802 ) , (  xx3804 ) ) ) ,  (  y3799 ) ) );
        xx3804 = (  op_dash_add175 ( (  xx3804 ) , ( (  rendered_dash_wcwidth373 ) ( (  c3806 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct env2495 {
    ;
    struct Screen_451 *  screen4873;
    ;
    ;
    ;
    int32_t *  curline4897;
    ;
    ;
};

struct env2496 {
    ;
    struct Screen_451 *  screen4873;
    ;
    ;
    ;
    int32_t *  curline4897;
    ;
    ;
};

struct StrConcat_2499 {
    struct StrView_27  field0;
    enum Mode_242  field1;
};

static struct StrConcat_2499 StrConcat_2499_StrConcat (  struct StrView_27  field0 ,  enum Mode_242  field1 ) {
    return ( struct StrConcat_2499 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2498 {
    enum Unit_8  (*fun) (  struct env2495*  ,    struct StrConcat_2499  );
    struct env2495 env;
};

struct Map_2503 {
    struct StrConcatIter_1811  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2503 Map_2503_Map (  struct StrConcatIter_1811  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2503 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2503   into_dash_iter2505 (    struct Map_2503  self804 ) {
    return (  self804 );
}

static  struct Maybe_171   next2506 (    struct Map_2503 *  dref806 ) {
    struct Maybe_351  dref809 = ( (  next1819 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_351_Just_t ) {
            return ( ( Maybe_171_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_351_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2504 (    struct Map_2503  iterable1118 ,    int32_t  base1120 ,    int32_t (*  fun1122 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1123 = (  base1120 );
    struct Map_2503  it1124 = ( (  into_dash_iter2505 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next2506 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2507 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2507);
    abort ( );
    ( Unit_8_Unit );
    int32_t  temp2508;
    return (  temp2508 );
}

static  int32_t   lam2509 (    int32_t  v1137 ,    int32_t  s1139 ) {
    return (  op_dash_add175 ( (  v1137 ) , (  s1139 ) ) );
}

static  int32_t   sum2502 (    struct Map_2503  it1135 ) {
    return ( (  reduce2504 ) ( (  it1135 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2509 ) ) );
}

static  struct StrConcatIter_1811   into_dash_iter2511 (    struct StrConcatIter_1811  self1290 ) {
    return (  self1290 );
}

static  struct Map_2503   map2510 (    struct StrConcatIter_1811  iterable813 ,    int32_t (*  fun815 )(    struct Char_65  ) ) {
    struct StrConcatIter_1811  it816 = ( (  into_dash_iter2511 ) ( (  iterable813 ) ) );
    return ( ( Map_2503_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct StrViewIter_293   chars2514 (    enum Mode_242  self4334 ) {
    return ( (  chars295 ) ( ( {  enum Mode_242  dref4335 = (  self4334 ) ;  dref4335 == Mode_242_Normal ? ( (  from_dash_string220 ) ( ( (uint8_t*)"Normal" ) ,  ( 6 ) ) ) :  dref4335 == Mode_242_Insert ? ( (  from_dash_string220 ) ( ( (uint8_t*)"Insert" ) ,  ( 6 ) ) ) :  dref4335 == Mode_242_Select ? ( (  from_dash_string220 ) ( ( (uint8_t*)"Select" ) ,  ( 6 ) ) ) : ( (  todo2412 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1811   into_dash_iter2513 (    struct StrConcat_2499  dref1297 ) {
    return ( (struct StrConcatIter_1811) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2514 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1811   chars2512 (    struct StrConcat_2499  self1308 ) {
    return ( (  into_dash_iter2513 ) ( (  self1308 ) ) );
}

static  enum Unit_8   draw_dash_str2515 (    struct Screen_451 *  screen3793 ,    struct StrConcat_2499  s3795 ,    int32_t  x3797 ,    int32_t  y3799 ) {
    int32_t  w3800 = ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  y3799 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3799 ) , ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3801 = (  op_dash_add175 ( (  op_dash_mul1597 ( (  y3799 ) , (  w3800 ) ) ) , (  x3797 ) ) );
    int32_t  x3802 = ( (  min796 ) ( (  x3797 ) ,  (  w3800 ) ) );
    size_t  max_dash_len3803 = ( (  i32_dash_size280 ) ( (  op_dash_sub180 ( (  w3800 ) , (  x3802 ) ) ) ) );
    int32_t  xx3804 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_1811  temp2516 =  into_dash_iter2511 ( ( (  chars2512 ) ( (  s3795 ) ) ) );
    while (true) {
        struct Maybe_351  __cond2517 =  next1819 (&temp2516);
        if (  __cond2517 .tag == 0 ) {
            break;
        }
        struct Char_65  c3806 =  __cond2517 .stuff .Maybe_351_Just_s .field0;
        ( (  put_dash_char2042 ) ( (  screen3793 ) ,  (  c3806 ) ,  (  op_dash_add175 ( (  x3802 ) , (  xx3804 ) ) ) ,  (  y3799 ) ) );
        xx3804 = (  op_dash_add175 ( (  xx3804 ) , ( (  rendered_dash_wcwidth373 ) ( (  c3806 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2501 (    struct Screen_451 *  screen3809 ,    struct StrConcat_2499  s3811 ,    int32_t  x3813 ,    int32_t  y3815 ) {
    int32_t  slen3816 = ( (  sum2502 ) ( ( (  map2510 ) ( ( (  chars2512 ) ( (  s3811 ) ) ) ,  (  rendered_dash_wcwidth373 ) ) ) ) );
    int32_t  w3817 = ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3809 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3818 = (  op_dash_sub180 ( (  op_dash_sub180 ( (  w3817 ) , (  x3813 ) ) ) , (  slen3816 ) ) );
    ( (  draw_dash_str2515 ) ( (  screen3809 ) ,  (  s3811 ) ,  (  x3818 ) ,  (  y3815 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann2500 (   struct env2495* env ,    struct StrConcat_2499  s4900 ) {
    ( (  draw_dash_str_dash_right2501 ) ( ( env->screen4873 ) ,  (  s4900 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4897 ) ) ) );
    (* env->curline4897 ) = (  op_dash_add175 ( ( * ( env->curline4897 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2520 {
    struct StrView_27  field0;
    struct Maybe_34  field1;
};

static struct StrConcat_2520 StrConcat_2520_StrConcat (  struct StrView_27  field0 ,  struct Maybe_34  field1 ) {
    return ( struct StrConcat_2520 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2519 {
    enum Unit_8  (*fun) (  struct env2496*  ,    struct StrConcat_2520  );
    struct env2496 env;
};

struct StrConcatIter_2532 {
    struct AppendIter_1161  f_left;
    struct IntStrIter_2002  f_right;
};

struct StrConcatIter_2531 {
    struct StrConcatIter_2532  f_left;
    struct StrViewIter_293  f_right;
};

struct StrConcatIter_2530 {
    struct StrConcatIter_2531  f_left;
    struct IntStrIter_2002  f_right;
};

struct StrConcatIter_2529 {
    struct StrConcatIter_2530  f_left;
    struct AppendIter_1161  f_right;
};

struct StrConcatIter_2528 {
    struct StrViewIter_293  f_left;
    struct StrConcatIter_2529  f_right;
};

struct StrConcatIter_2527 {
    struct StrConcatIter_2528  f_left;
    struct AppendIter_1161  f_right;
};

struct StrCaseIter_2526 {
    enum {
        StrCaseIter_2526_StrCaseIter1_t,
        StrCaseIter_2526_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_293  field0;
        } StrCaseIter_2526_StrCaseIter1_s;
        struct {
            struct StrConcatIter_2527  field0;
        } StrCaseIter_2526_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_2526 StrCaseIter_2526_StrCaseIter1 (  struct StrViewIter_293  field0 ) {
    return ( struct StrCaseIter_2526 ) { .tag = StrCaseIter_2526_StrCaseIter1_t, .stuff = { .StrCaseIter_2526_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_2526 StrCaseIter_2526_StrCaseIter2 (  struct StrConcatIter_2527  field0 ) {
    return ( struct StrCaseIter_2526 ) { .tag = StrCaseIter_2526_StrCaseIter2_t, .stuff = { .StrCaseIter_2526_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_2525 {
    struct StrViewIter_293  f_left;
    struct StrCaseIter_2526  f_right;
};

struct Map_2524 {
    struct StrConcatIter_2525  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2524 Map_2524_Map (  struct StrConcatIter_2525  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2524 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2524   into_dash_iter2534 (    struct Map_2524  self804 ) {
    return (  self804 );
}

static  struct Maybe_351   next2543 (    struct StrConcatIter_2532 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next1183 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next2005 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2542 (    struct StrConcatIter_2531 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2543 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2541 (    struct StrConcatIter_2530 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2542 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next2005 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2540 (    struct StrConcatIter_2529 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2541 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1183 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2539 (    struct StrConcatIter_2528 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next2540 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2538 (    struct StrConcatIter_2527 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2539 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1183 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2537 (    struct StrCaseIter_2526 *  self1730 ) {
    struct StrCaseIter_2526 *  dref1731 = (  self1730 );
    if ( (* dref1731 ).tag == StrCaseIter_2526_StrCaseIter1_t ) {
        return ( (  next352 ) ( ( & ( (* dref1731 ) .stuff .StrCaseIter_2526_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1731 ).tag == StrCaseIter_2526_StrCaseIter2_t ) {
            return ( (  next2538 ) ( ( & ( (* dref1731 ) .stuff .StrCaseIter_2526_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_351   next2536 (    struct StrConcatIter_2525 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next2537 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_171   next2535 (    struct Map_2524 *  dref806 ) {
    struct Maybe_351  dref809 = ( (  next2536 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_351_Just_t ) {
            return ( ( Maybe_171_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_351_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2533 (    struct Map_2524  iterable1118 ,    int32_t  base1120 ,    int32_t (*  fun1122 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1123 = (  base1120 );
    struct Map_2524  it1124 = ( (  into_dash_iter2534 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next2535 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2544 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2544);
    abort ( );
    ( Unit_8_Unit );
    int32_t  temp2545;
    return (  temp2545 );
}

static  int32_t   lam2546 (    int32_t  v1137 ,    int32_t  s1139 ) {
    return (  op_dash_add175 ( (  v1137 ) , (  s1139 ) ) );
}

static  int32_t   sum2523 (    struct Map_2524  it1135 ) {
    return ( (  reduce2533 ) ( (  it1135 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2546 ) ) );
}

static  struct StrConcatIter_2525   into_dash_iter2548 (    struct StrConcatIter_2525  self1290 ) {
    return (  self1290 );
}

static  struct Map_2524   map2547 (    struct StrConcatIter_2525  iterable813 ,    int32_t (*  fun815 )(    struct Char_65  ) ) {
    struct StrConcatIter_2525  it816 = ( (  into_dash_iter2548 ) ( (  iterable813 ) ) );
    return ( ( Map_2524_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

struct StrConcat_2554 {
    struct StrView_27  field0;
    struct Pos_26  field1;
};

static struct StrConcat_2554 StrConcat_2554_StrConcat (  struct StrView_27  field0 ,  struct Pos_26  field1 ) {
    return ( struct StrConcat_2554 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2553 {
    struct StrConcat_2554  field0;
    struct Char_65  field1;
};

static struct StrConcat_2553 StrConcat_2553_StrConcat (  struct StrConcat_2554  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2553 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_2552 {
    enum {
        StrCase_2552_StrCase1_t,
        StrCase_2552_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_2552_StrCase1_s;
        struct {
            struct StrConcat_2553  field0;
        } StrCase_2552_StrCase2_s;
    } stuff;
};

static struct StrCase_2552 StrCase_2552_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_2552 ) { .tag = StrCase_2552_StrCase1_t, .stuff = { .StrCase_2552_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_2552 StrCase_2552_StrCase2 (  struct StrConcat_2553  field0 ) {
    return ( struct StrCase_2552 ) { .tag = StrCase_2552_StrCase2_t, .stuff = { .StrCase_2552_StrCase2_s = { .field0 = field0 } } };
};

struct StrConcat_2567 {
    struct Char_65  field0;
    int32_t  field1;
};

static struct StrConcat_2567 StrConcat_2567_StrConcat (  struct Char_65  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_2567 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2566 {
    struct StrConcat_2567  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2566 StrConcat_2566_StrConcat (  struct StrConcat_2567  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2566 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2565 {
    struct StrConcat_2566  field0;
    int32_t  field1;
};

static struct StrConcat_2565 StrConcat_2565_StrConcat (  struct StrConcat_2566  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_2565 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2564 {
    struct StrConcat_2565  field0;
    struct Char_65  field1;
};

static struct StrConcat_2564 StrConcat_2564_StrConcat (  struct StrConcat_2565  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2564 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_2532   into_dash_iter2574 (    struct StrConcat_2567  dref1297 ) {
    return ( (struct StrConcatIter_2532) { .f_left = ( (  chars1196 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2017 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2532   chars2573 (    struct StrConcat_2567  self1308 ) {
    return ( (  into_dash_iter2574 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2531   into_dash_iter2572 (    struct StrConcat_2566  dref1297 ) {
    return ( (struct StrConcatIter_2531) { .f_left = ( (  chars2573 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars295 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2531   chars2571 (    struct StrConcat_2566  self1308 ) {
    return ( (  into_dash_iter2572 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2530   into_dash_iter2570 (    struct StrConcat_2565  dref1297 ) {
    return ( (struct StrConcatIter_2530) { .f_left = ( (  chars2571 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2017 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2530   chars2569 (    struct StrConcat_2565  self1308 ) {
    return ( (  into_dash_iter2570 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2529   into_dash_iter2568 (    struct StrConcat_2564  dref1297 ) {
    return ( (struct StrConcatIter_2529) { .f_left = ( (  chars2569 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1196 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2529   chars2563 (    struct StrConcat_2564  self1308 ) {
    return ( (  into_dash_iter2568 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2529   chars2562 (    struct Pos_26  self3850 ) {
    return ( (  chars2563 ) ( ( ( StrConcat_2564_StrConcat ) ( ( ( StrConcat_2565_StrConcat ) ( ( ( StrConcat_2566_StrConcat ) ( ( ( StrConcat_2567_StrConcat ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"(" ) ,  ( 1 ) ) ) ,  ( (  self3850 ) .f_line ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)", " ) ,  ( 2 ) ) ) ) ) ,  ( (  self3850 ) .f_bi ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrConcatIter_2528   into_dash_iter2561 (    struct StrConcat_2554  dref1297 ) {
    return ( (struct StrConcatIter_2528) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2562 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2528   chars2560 (    struct StrConcat_2554  self1308 ) {
    return ( (  into_dash_iter2561 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2527   into_dash_iter2559 (    struct StrConcat_2553  dref1297 ) {
    return ( (struct StrConcatIter_2527) { .f_left = ( (  chars2560 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1196 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2527   chars2558 (    struct StrConcat_2553  self1308 ) {
    return ( (  into_dash_iter2559 ) ( (  self1308 ) ) );
}

static  struct StrCaseIter_2526   into_dash_iter2557 (    struct StrCase_2552  self1736 ) {
    struct StrCase_2552  dref1737 = (  self1736 );
    if ( dref1737.tag == StrCase_2552_StrCase1_t ) {
        return ( ( StrCaseIter_2526_StrCaseIter1 ) ( ( (  chars295 ) ( ( dref1737 .stuff .StrCase_2552_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1737.tag == StrCase_2552_StrCase2_t ) {
            return ( ( StrCaseIter_2526_StrCaseIter2 ) ( ( (  chars2558 ) ( ( dref1737 .stuff .StrCase_2552_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_2526   chars2556 (    struct StrCase_2552  self1748 ) {
    return ( (  into_dash_iter2557 ) ( (  self1748 ) ) );
}

static  struct StrCaseIter_2526   chars2551 (    struct Maybe_34  self1762 ) {
    struct StrCase_2552  temp2555;
    struct StrCase_2552  c1763 = (  temp2555 );
    struct Maybe_34  dref1764 = (  self1762 );
    if ( dref1764.tag == Maybe_34_None_t ) {
        c1763 = ( ( StrCase_2552_StrCase1 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1764.tag == Maybe_34_Just_t ) {
            c1763 = ( ( StrCase_2552_StrCase2 ) ( ( ( StrConcat_2553_StrConcat ) ( ( ( StrConcat_2554_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Just(" ) ,  ( 5 ) ) ) ,  ( dref1764 .stuff .Maybe_34_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars2556 ) ( (  c1763 ) ) );
}

static  struct StrConcatIter_2525   into_dash_iter2550 (    struct StrConcat_2520  dref1297 ) {
    return ( (struct StrConcatIter_2525) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2551 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2525   chars2549 (    struct StrConcat_2520  self1308 ) {
    return ( (  into_dash_iter2550 ) ( (  self1308 ) ) );
}

static  enum Unit_8   draw_dash_str2575 (    struct Screen_451 *  screen3793 ,    struct StrConcat_2520  s3795 ,    int32_t  x3797 ,    int32_t  y3799 ) {
    int32_t  w3800 = ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  y3799 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3799 ) , ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3801 = (  op_dash_add175 ( (  op_dash_mul1597 ( (  y3799 ) , (  w3800 ) ) ) , (  x3797 ) ) );
    int32_t  x3802 = ( (  min796 ) ( (  x3797 ) ,  (  w3800 ) ) );
    size_t  max_dash_len3803 = ( (  i32_dash_size280 ) ( (  op_dash_sub180 ( (  w3800 ) , (  x3802 ) ) ) ) );
    int32_t  xx3804 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2525  temp2576 =  into_dash_iter2548 ( ( (  chars2549 ) ( (  s3795 ) ) ) );
    while (true) {
        struct Maybe_351  __cond2577 =  next2536 (&temp2576);
        if (  __cond2577 .tag == 0 ) {
            break;
        }
        struct Char_65  c3806 =  __cond2577 .stuff .Maybe_351_Just_s .field0;
        ( (  put_dash_char2042 ) ( (  screen3793 ) ,  (  c3806 ) ,  (  op_dash_add175 ( (  x3802 ) , (  xx3804 ) ) ) ,  (  y3799 ) ) );
        xx3804 = (  op_dash_add175 ( (  xx3804 ) , ( (  rendered_dash_wcwidth373 ) ( (  c3806 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2522 (    struct Screen_451 *  screen3809 ,    struct StrConcat_2520  s3811 ,    int32_t  x3813 ,    int32_t  y3815 ) {
    int32_t  slen3816 = ( (  sum2523 ) ( ( (  map2547 ) ( ( (  chars2549 ) ( (  s3811 ) ) ) ,  (  rendered_dash_wcwidth373 ) ) ) ) );
    int32_t  w3817 = ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3809 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3818 = (  op_dash_sub180 ( (  op_dash_sub180 ( (  w3817 ) , (  x3813 ) ) ) , (  slen3816 ) ) );
    ( (  draw_dash_str2575 ) ( (  screen3809 ) ,  (  s3811 ) ,  (  x3818 ) ,  (  y3815 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   ann2521 (   struct env2496* env ,    struct StrConcat_2520  s4900 ) {
    ( (  draw_dash_str_dash_right2522 ) ( ( env->screen4873 ) ,  (  s4900 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( * ( env->curline4897 ) ) ) );
    (* env->curline4897 ) = (  op_dash_add175 ( ( * ( env->curline4897 ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   render_dash_editor1998 (   struct env449* env ,    struct Screen_451 *  screen4873 ,    struct Editor_267 *  ed4875 ) {
    struct ScreenDims_454  screen_dash_dims4876 = ( (struct ScreenDims_454) { .f_from_dash_sx = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub180 ( ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen4873 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub180 ( ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen4873 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
    struct envunion450  temp1999 = ( (struct envunion450){ .fun = (  enum Unit_8  (*) (  struct env222*  ,    struct Screen_451 *  ,    struct Pane_241 *  ,    struct ScreenDims_454  ,    struct Config_272 *  ) )render2000 , .env =  env->envinst222 } );
    ( temp1999.fun ( &temp1999.env ,  (  screen4873 ) ,  ( (  pane397 ) ( (  ed4875 ) ) ) ,  (  screen_dash_dims4876 ) ,  ( ( * (  ed4875 ) ) .f_cfg ) ) );
    struct env2428 envinst2428 = {
        .screen4873 =  screen4873 ,
    };
    ( (  if_dash_just2427 ) ( ( ( * (  ed4875 ) ) .f_msg ) ,  ( (struct envunion2429){ .fun = (  enum Unit_8  (*) (  struct env2428*  ,    struct StrView_27  ) )lam2431 , .env =  envinst2428 } ) ) );
    struct EditorMode_268  dref4880 = ( ( * (  ed4875 ) ) .f_mode );
    if ( dref4880.tag == EditorMode_268_Normal_t ) {
    }
    else {
        if ( dref4880.tag == EditorMode_268_Cmd_t ) {
            int32_t  num_dash_chars4882 = ( (  size_dash_i32311 ) ( ( (  count368 ) ( ( (  chars1778 ) ( ( dref4880 .stuff .EditorMode_268_Cmd_s .field1 ) ) ) ) ) ) );
            struct StrView_27  pad4883 = ( (  eq700 ( ( (  mod1595 ) ( (  num_dash_chars4882 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) ) ? ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike646 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) );
            int32_t  num_dash_chars4884 = (  op_dash_add175 ( (  num_dash_chars4882 ) , ( (  mod1595 ) ( (  num_dash_chars4882 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) ) );
            struct StrConcat_2432  full_dash_str4885 = ( ( StrConcat_2432_StrConcat ) ( ( ( StrConcat_2433_StrConcat ) ( ( ( StrConcat_2434_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)" \xe2\x8c\xa8\xef\xb8\x8f " ) ,  ( 8 ) ) ) ,  ( dref4880 .stuff .EditorMode_268_Cmd_s .field1 ) ) ) ,  (  pad4883 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) );
            int32_t  full_dash_chars4886 = ( (  size_dash_i32311 ) ( ( (  count2435 ) ( ( (  chars2445 ) ( (  full_dash_str4885 ) ) ) ) ) ) );
            ( (  draw_dash_str2451 ) ( (  screen4873 ) ,  (  full_dash_str4885 ) ,  (  op_dash_div1596 ( (  op_dash_sub180 ( ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen4873 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4886 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
        }
        else {
            if ( dref4880.tag == EditorMode_268_Search_t ) {
                int32_t  num_dash_chars4888 = ( (  size_dash_i32311 ) ( ( (  count368 ) ( ( (  chars1778 ) ( ( dref4880 .stuff .EditorMode_268_Search_s .field1 ) ) ) ) ) ) );
                struct StrView_27  pad4889 = ( (  eq700 ( ( (  mod1595 ) ( (  num_dash_chars4888 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) ) ? ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike646 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) );
                int32_t  num_dash_chars4890 = (  op_dash_add175 ( (  num_dash_chars4888 ) , ( (  mod1595 ) ( (  num_dash_chars4888 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) ) );
                struct StrConcat_2454  full_dash_str4891 = ( ( StrConcat_2454_StrConcat ) ( ( ( StrConcat_2433_StrConcat ) ( ( ( StrConcat_2434_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)" \xf0\x9f\x94\x8e  " ) ,  ( 7 ) ) ) ,  ( dref4880 .stuff .EditorMode_268_Search_s .field1 ) ) ) ,  (  pad4889 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"  " ) ,  ( 2 ) ) ) ) );
                int32_t  full_dash_chars4892 = ( (  size_dash_i32311 ) ( ( (  count2455 ) ( ( (  chars2463 ) ( (  full_dash_str4891 ) ) ) ) ) ) );
                ( (  draw_dash_str2465 ) ( (  screen4873 ) ,  (  full_dash_str4891 ) ,  (  op_dash_div1596 ( (  op_dash_sub180 ( ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen4873 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4892 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            }
            else {
                if ( dref4880.tag == EditorMode_268_Menu_t ) {
                    ( (  draw_dash_str2468 ) ( (  screen4873 ) ,  ( ( dref4880 .stuff .EditorMode_268_Menu_s .field0 ) .f_name ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
                    struct Zip_2472  temp2471 =  into_dash_iter2473 ( ( (  zip2474 ) ( ( ( dref4880 .stuff .EditorMode_268_Menu_s .field0 ) .f_items ) ,  ( (  from555 ) ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
                    while (true) {
                        struct Maybe_2476  __cond2475 =  next2478 (&temp2471);
                        if (  __cond2475 .tag == 0 ) {
                            break;
                        }
                        struct Tuple2_2477  dref4894 =  __cond2475 .stuff .Maybe_2476_Just_s .field0;
                        ( (  draw_dash_str2479 ) ( (  screen4873 ) ,  ( ( StrConcat_2480_StrConcat ) ( ( ( StrConcat_2481_StrConcat ) ( ( ( dref4894 .field0 ) .f_key ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ,  ( ( dref4894 .field0 ) .f_description ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( dref4894 .field1 ) ) );
                    }
                }
                else {
                    if ( true ) {
                        ( (  todo1836 ) ( ) );
                    }
                }
            }
        }
    }
    int32_t  temp2494 = (  from_dash_integral56 ( 0 ) );
    int32_t *  curline4897 = ( &temp2494 );
    struct env2495 envinst2495 = {
        .screen4873 =  screen4873 ,
        .curline4897 =  curline4897 ,
    };
    struct env2496 envinst2496 = {
        .screen4873 =  screen4873 ,
        .curline4897 =  curline4897 ,
    };
    struct envunion2498  temp2497 = ( (struct envunion2498){ .fun = (  enum Unit_8  (*) (  struct env2495*  ,    struct StrConcat_2499  ) )ann2500 , .env =  envinst2495 } );
    ( temp2497.fun ( &temp2497.env ,  ( ( StrConcat_2499_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"mode: " ) ,  ( 6 ) ) ) ,  ( ( ( * (  ed4875 ) ) .f_pane ) .f_mode ) ) ) ) );
    struct envunion2519  temp2518 = ( (struct envunion2519){ .fun = (  enum Unit_8  (*) (  struct env2496*  ,    struct StrConcat_2520  ) )ann2521 , .env =  envinst2496 } );
    ( temp2518.fun ( &temp2518.env ,  ( ( StrConcat_2520_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"sel: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4875 ) ) .f_pane ) .f_sel ) ) ) ) );
    return ( Unit_8_Unit );
}

struct RenderState_2579 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_154  f_fg;
    struct Color_154  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_2586 {
    struct StrView_27  field0;
    uint32_t  field1;
};

static struct StrConcat_2586 StrConcat_2586_StrConcat (  struct StrView_27  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2586 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2585 {
    struct StrConcat_2586  field0;
    struct Char_65  field1;
};

static struct StrConcat_2585 StrConcat_2585_StrConcat (  struct StrConcat_2586  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2585 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2584 {
    struct StrConcat_2585  field0;
    uint32_t  field1;
};

static struct StrConcat_2584 StrConcat_2584_StrConcat (  struct StrConcat_2585  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2584 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2583 {
    struct StrConcat_2584  field0;
    struct Char_65  field1;
};

static struct StrConcat_2583 StrConcat_2583_StrConcat (  struct StrConcat_2584  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2583 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2592 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2591 {
    struct StrViewIter_293  f_left;
    struct IntStrIter_2592  f_right;
};

struct StrConcatIter_2590 {
    struct StrConcatIter_2591  f_left;
    struct AppendIter_1161  f_right;
};

struct StrConcatIter_2589 {
    struct StrConcatIter_2590  f_left;
    struct IntStrIter_2592  f_right;
};

struct StrConcatIter_2588 {
    struct StrConcatIter_2589  f_left;
    struct AppendIter_1161  f_right;
};

static  struct StrConcatIter_2588   into_dash_iter2594 (    struct StrConcatIter_2588  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_351   next2599 (    struct IntStrIter_2592 *  self1399 ) {
    if ( ( ( * (  self1399 ) ) .f_negative ) ) {
        (*  self1399 ) .f_negative = ( false );
        return ( ( Maybe_351_Just ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp173 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    uint32_t  trim_dash_down1400 = ( (  pow164 ) ( (  from_dash_integral181 ( 10 ) ) ,  (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint32_t  upper1401 = (  op_dash_div163 ( ( ( * (  self1399 ) ) .f_int ) , (  trim_dash_down1400 ) ) );
    uint32_t  upper_dash_mask1402 = (  op_dash_mul183 ( (  op_dash_div163 ( (  upper1401 ) , (  from_dash_integral181 ( 10 ) ) ) ) , (  from_dash_integral181 ( 10 ) ) ) );
    uint8_t  digit1403 = ( ( (  cast161 ) ( (  op_dash_sub185 ( (  upper1401 ) , (  upper_dash_mask1402 ) ) ) ) ) );
    (*  self1399 ) .f_len = (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1404 = ( (  char_dash_from_dash_u81180 ) ( (  op_dash_add1070 ( (  digit1403 ) , (  from_dash_integral328 ( 48 ) ) ) ) ) );
    return ( ( Maybe_351_Just ) ( (  digit_dash_char1404 ) ) );
}

static  struct Maybe_351   next2598 (    struct StrConcatIter_2591 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next2599 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2597 (    struct StrConcatIter_2590 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2598 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1183 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2596 (    struct StrConcatIter_2589 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2597 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next2599 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2595 (    struct StrConcatIter_2588 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2596 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1183 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2587 (    struct StrConcatIter_2588  iterable1099 ,    enum Unit_8 (*  fun1101 )(    struct Char_65  ) ) {
    struct StrConcatIter_2588  temp2593 = ( (  into_dash_iter2594 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_2588 *  it1102 = ( &temp2593 );
    while ( ( true ) ) {
        struct Maybe_351  dref1103 = ( (  next2595 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_351_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_351_Just_t ) {
                ( (  fun1101 ) ( ( dref1103 .stuff .Maybe_351_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2610 (    uint32_t  self1407 ) {
    if ( (  eq2403 ( (  self1407 ) , (  from_dash_integral181 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1408 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp186 ( (  self1407 ) , (  from_dash_integral181 ( 0 ) ) ) == 2 ) ) {
        self1407 = (  op_dash_div163 ( (  self1407 ) , (  from_dash_integral181 ( 10 ) ) ) );
        digits1408 = (  op_dash_add175 ( (  digits1408 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1408 );
}

static  struct IntStrIter_2592   uint_dash_iter2609 (    uint32_t  int1414 ) {
    return ( (struct IntStrIter_2592) { .f_int = (  int1414 ) , .f_len = ( (  count_dash_digits2610 ) ( (  int1414 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2592   chars2608 (    uint32_t  self1796 ) {
    return ( (  uint_dash_iter2609 ) ( (  self1796 ) ) );
}

static  struct StrConcatIter_2591   into_dash_iter2607 (    struct StrConcat_2586  dref1297 ) {
    return ( (struct StrConcatIter_2591) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2608 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2591   chars2606 (    struct StrConcat_2586  self1308 ) {
    return ( (  into_dash_iter2607 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2590   into_dash_iter2605 (    struct StrConcat_2585  dref1297 ) {
    return ( (struct StrConcatIter_2590) { .f_left = ( (  chars2606 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1196 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2590   chars2604 (    struct StrConcat_2585  self1308 ) {
    return ( (  into_dash_iter2605 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2589   into_dash_iter2603 (    struct StrConcat_2584  dref1297 ) {
    return ( (struct StrConcatIter_2589) { .f_left = ( (  chars2604 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2608 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2589   chars2602 (    struct StrConcat_2584  self1308 ) {
    return ( (  into_dash_iter2603 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2588   into_dash_iter2601 (    struct StrConcat_2583  dref1297 ) {
    return ( (struct StrConcatIter_2588) { .f_left = ( (  chars2602 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1196 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2588   chars2600 (    struct StrConcat_2583  self1308 ) {
    return ( (  into_dash_iter2601 ) ( (  self1308 ) ) );
}

static  enum Unit_8   print2582 (    struct StrConcat_2583  s1335 ) {
    ( (  for_dash_each2587 ) ( ( (  chars2600 ) ( (  s1335 ) ) ) ,  (  printf_dash_char318 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_cursor_dash_to2581 (    uint32_t  x2704 ,    uint32_t  y2706 ) {
    uint32_t  x2707 = (  op_dash_add187 ( (  x2704 ) , (  from_dash_integral181 ( 1 ) ) ) );
    uint32_t  y2708 = (  op_dash_add187 ( (  y2706 ) , (  from_dash_integral181 ( 1 ) ) ) );
    ( (  print2582 ) ( ( ( StrConcat_2583_StrConcat ) ( ( ( StrConcat_2584_StrConcat ) ( ( ( StrConcat_2585_StrConcat ) ( ( ( StrConcat_2586_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[" ) ,  ( 2 ) ) ) ,  (  y2708 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  (  x2707 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_452   subslice2613 (    struct Slice_452  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Cell_453 *  begin_dash_ptr2209 = ( (  offset_dash_ptr991 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp302 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp302 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_452) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub462 ( ( (  min591 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_452) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

struct SliceIter_2616 {
    struct Slice_452  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2615 {
    struct SliceIter_2616  f_left_dash_it;
    struct SliceIter_2616  f_right_dash_it;
};

struct Tuple2_2617 {
    struct Cell_453  field0;
    struct Cell_453  field1;
};

static struct Tuple2_2617 Tuple2_2617_Tuple2 (  struct Cell_453  field0 ,  struct Cell_453  field1 ) {
    return ( struct Tuple2_2617 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2619 {
    bool (*  fun1160 )(    struct Tuple2_2617  );
};

struct envunion2620 {
    bool  (*fun) (  struct env2619*  ,    struct Tuple2_2617  ,    bool  );
    struct env2619 env;
};

static  struct Zip_2615   into_dash_iter2621 (    struct Zip_2615  self936 ) {
    return (  self936 );
}

struct Maybe_2622 {
    enum {
        Maybe_2622_None_t,
        Maybe_2622_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2617  field0;
        } Maybe_2622_Just_s;
    } stuff;
};

static struct Maybe_2622 Maybe_2622_Just (  struct Tuple2_2617  field0 ) {
    return ( struct Maybe_2622 ) { .tag = Maybe_2622_Just_t, .stuff = { .Maybe_2622_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_996   next2624 (    struct SliceIter_2616 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_996) { .tag = Maybe_996_None_t } );
    }
    struct Cell_453  elem2258 = ( * ( (  offset_dash_ptr991 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_996_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_2622   next2623 (    struct Zip_2615 *  self939 ) {
    struct Zip_2615  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_996  dref941 = ( (  next2624 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_996_None_t ) {
            return ( (struct Maybe_2622) { .tag = Maybe_2622_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_996_Just_t ) {
                struct Maybe_996  dref943 = ( (  next2624 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_996_None_t ) {
                    return ( (struct Maybe_2622) { .tag = Maybe_2622_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_996_Just_t ) {
                        ( (  next2624 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next2624 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2622_Just ) ( ( ( Tuple2_2617_Tuple2 ) ( ( dref941 .stuff .Maybe_996_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_996_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce2618 (    struct Zip_2615  iterable1118 ,    bool  base1120 ,   struct envunion2620  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct Zip_2615  it1124 = ( (  into_dash_iter2621 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_2622  dref1125 = ( (  next2623 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_2622_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_2622_Just_t ) {
                struct envunion2620  temp2625 = (  fun1122 );
                x1123 = ( temp2625.fun ( &temp2625.env ,  ( dref1125 .stuff .Maybe_2622_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2626 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2626);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2627;
    return (  temp2627 );
}

static  bool   lam2628 (   struct env2619* env ,    struct Tuple2_2617  e1162 ,    bool  x1164 ) {
    return ( ( ( env->fun1160 ) ( (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2614 (    struct Zip_2615  it1158 ,    bool (*  fun1160 )(    struct Tuple2_2617  ) ) {
    struct env2619 envinst2619 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2618 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2620){ .fun = (  bool  (*) (  struct env2619*  ,    struct Tuple2_2617  ,    bool  ) )lam2628 , .env =  envinst2619 } ) ) );
}

static  struct SliceIter_2616   into_dash_iter2630 (    struct Slice_452  self2250 ) {
    return ( (struct SliceIter_2616) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2615   zip2629 (    struct Slice_452  left947 ,    struct Slice_452  right949 ) {
    struct SliceIter_2616  left_dash_it950 = ( (  into_dash_iter2630 ) ( (  left947 ) ) );
    struct SliceIter_2616  right_dash_it951 = ( (  into_dash_iter2630 ) ( (  right949 ) ) );
    return ( (struct Zip_2615) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

struct Tuple2_2634 {
    struct Color_154  field0;
    struct Color_154  field1;
};

static struct Tuple2_2634 Tuple2_2634_Tuple2 (  struct Color_154  field0 ,  struct Color_154  field1 ) {
    return ( struct Tuple2_2634 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_155 *   cast2638 (    int32_t *  x395 ) {
    return ( (enum Color8_155 * ) (  x395 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2636 (    enum Color8_155  x651 ) {
    int32_t  temp2637 = ( (  zeroed1142 ) ( ) );
    int32_t *  y652 = ( &temp2637 );
    enum Color8_155 *  yp653 = ( (  cast2638 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  bool   eq2635 (    enum Color8_155  l2734 ,    enum Color8_155  r2736 ) {
    return (  eq700 ( ( ( (  cast_dash_on_dash_zeroed2636 ) ( (  l2734 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2636 ) ( (  r2736 ) ) ) ) );
}

static  enum Color16_156 *   cast2642 (    int32_t *  x395 ) {
    return ( (enum Color16_156 * ) (  x395 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2640 (    enum Color16_156  x651 ) {
    int32_t  temp2641 = ( (  zeroed1142 ) ( ) );
    int32_t *  y652 = ( &temp2641 );
    enum Color16_156 *  yp653 = ( (  cast2642 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  bool   eq2639 (    enum Color16_156  l2740 ,    enum Color16_156  r2742 ) {
    return (  eq700 ( ( ( (  cast_dash_on_dash_zeroed2640 ) ( (  l2740 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2640 ) ( (  r2742 ) ) ) ) );
}

static  bool   eq2643 (    struct RGB_157  l2770 ,    struct RGB_157  r2772 ) {
    return ( ( (  eq324 ( ( (  l2770 ) .f_r ) , ( (  r2772 ) .f_r ) ) ) && (  eq324 ( ( (  l2770 ) .f_g ) , ( (  r2772 ) .f_g ) ) ) ) && (  eq324 ( ( (  l2770 ) .f_b ) , ( (  r2772 ) .f_b ) ) ) );
}

static  bool   eq2633 (    struct Color_154  l2792 ,    struct Color_154  r2794 ) {
    return ( {  struct Tuple2_2634  dref2795 = ( ( Tuple2_2634_Tuple2 ) ( (  l2792 ) ,  (  r2794 ) ) ) ; dref2795 .field0.tag == Color_154_ColorDefault_t && dref2795 .field1.tag == Color_154_ColorDefault_t ? ( true ) : dref2795 .field0.tag == Color_154_Color8_t && dref2795 .field1.tag == Color_154_Color8_t ? (  eq2635 ( ( dref2795 .field0 .stuff .Color_154_Color8_s .field0 ) , ( dref2795 .field1 .stuff .Color_154_Color8_s .field0 ) ) ) : dref2795 .field0.tag == Color_154_Color16_t && dref2795 .field1.tag == Color_154_Color16_t ? (  eq2639 ( ( dref2795 .field0 .stuff .Color_154_Color16_s .field0 ) , ( dref2795 .field1 .stuff .Color_154_Color16_s .field0 ) ) ) : dref2795 .field0.tag == Color_154_Color256_t && dref2795 .field1.tag == Color_154_Color256_t ? (  eq324 ( ( dref2795 .field0 .stuff .Color_154_Color256_s .field0 ) , ( dref2795 .field1 .stuff .Color_154_Color256_s .field0 ) ) ) : dref2795 .field0.tag == Color_154_ColorRGB_t && dref2795 .field1.tag == Color_154_ColorRGB_t ? (  eq2643 ( ( dref2795 .field0 .stuff .Color_154_ColorRGB_s .field0 ) , ( dref2795 .field1 .stuff .Color_154_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2632 (    struct Cell_453  l3666 ,    struct Cell_453  r3668 ) {
    if ( ( !  eq360 ( ( (  l3666 ) .f_c ) , ( (  r3668 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2633 ( ( (  l3666 ) .f_fg ) , ( (  r3668 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2633 ( ( (  l3666 ) .f_bg ) , ( (  r3668 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam2631 (    struct Tuple2_2617  dref3722 ) {
    return ( !  eq2632 ( ( dref3722 .field0 ) , ( dref3722 .field1 ) ) );
}

static  enum Unit_8   set_dash_default_dash_fg2646 (  ) {
    ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg82647 (    enum Color8_155  color2745 ) {
    enum Color8_155  dref2746 = (  color2745 );
    switch (  dref2746 ) {
        case Color8_155_Black8 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Red8 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Green8 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Yellow8 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Blue8 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Magenta8 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Cyan8 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_White8 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg162648 (    enum Color16_156  color2749 ) {
    enum Color16_156  dref2750 = (  color2749 );
    switch (  dref2750 ) {
        case Color16_156_Black16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Red16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Green16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Yellow16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Blue16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Magenta16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Cyan16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_White16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightBlack16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightRed16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightGreen16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightYellow16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightBlue16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightMagenta16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightCyan16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightWhite16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2652 {
    struct StrView_27  field0;
    uint8_t  field1;
};

static struct StrConcat_2652 StrConcat_2652_StrConcat (  struct StrView_27  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2652 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2651 {
    struct StrConcat_2652  field0;
    struct Char_65  field1;
};

static struct StrConcat_2651 StrConcat_2651_StrConcat (  struct StrConcat_2652  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2651 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2656 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2655 {
    struct StrViewIter_293  f_left;
    struct IntStrIter_2656  f_right;
};

struct StrConcatIter_2654 {
    struct StrConcatIter_2655  f_left;
    struct AppendIter_1161  f_right;
};

static  struct StrConcatIter_2654   into_dash_iter2658 (    struct StrConcatIter_2654  self1290 ) {
    return (  self1290 );
}

struct env2664 {
    uint8_t  base1386;
    ;
};

struct envunion2665 {
    uint8_t  (*fun) (  struct env2664*  ,    int32_t  ,    uint8_t  );
    struct env2664 env;
};

static  uint8_t   reduce2663 (    struct Range_166  iterable1118 ,    uint8_t  base1120 ,   struct envunion2665  fun1122 ) {
    uint8_t  x1123 = (  base1120 );
    struct RangeIter_169  it1124 = ( (  into_dash_iter170 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next172 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                struct envunion2665  temp2666 = (  fun1122 );
                x1123 = ( temp2666.fun ( &temp2666.env ,  ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2667 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2667);
    abort ( );
    ( Unit_8_Unit );
    uint8_t  temp2668;
    return (  temp2668 );
}

static  uint8_t   op_dash_mul2670 (    uint8_t  l279 ,    uint8_t  r281 ) {
    return ( (  l279 ) * (  r281 ) );
}

static  uint8_t   lam2669 (   struct env2664* env ,    int32_t  item1390 ,    uint8_t  x1392 ) {
    return (  op_dash_mul2670 ( (  x1392 ) , ( env->base1386 ) ) );
}

static  uint8_t   pow2662 (    uint8_t  base1386 ,    int32_t  p1388 ) {
    struct env2664 envinst2664 = {
        .base1386 =  base1386 ,
    };
    return ( (  reduce2663 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( (  p1388 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral328 ( 1 ) ) ,  ( (struct envunion2665){ .fun = (  uint8_t  (*) (  struct env2664*  ,    int32_t  ,    uint8_t  ) )lam2669 , .env =  envinst2664 } ) ) );
}

static  uint8_t   op_dash_div2671 (    uint8_t  l284 ,    uint8_t  r286 ) {
    return ( (  l284 ) / (  r286 ) );
}

static  uint8_t   cast2672 (    uint8_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  struct Maybe_351   next2661 (    struct IntStrIter_2656 *  self1399 ) {
    if ( ( ( * (  self1399 ) ) .f_negative ) ) {
        (*  self1399 ) .f_negative = ( false );
        return ( ( Maybe_351_Just ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp173 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    uint8_t  trim_dash_down1400 = ( (  pow2662 ) ( (  from_dash_integral328 ( 10 ) ) ,  (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint8_t  upper1401 = (  op_dash_div2671 ( ( ( * (  self1399 ) ) .f_int ) , (  trim_dash_down1400 ) ) );
    uint8_t  upper_dash_mask1402 = (  op_dash_mul2670 ( (  op_dash_div2671 ( (  upper1401 ) , (  from_dash_integral328 ( 10 ) ) ) ) , (  from_dash_integral328 ( 10 ) ) ) );
    uint8_t  digit1403 = ( ( (  cast2672 ) ( (  op_dash_sub1069 ( (  upper1401 ) , (  upper_dash_mask1402 ) ) ) ) ) );
    (*  self1399 ) .f_len = (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1404 = ( (  char_dash_from_dash_u81180 ) ( (  op_dash_add1070 ( (  digit1403 ) , (  from_dash_integral328 ( 48 ) ) ) ) ) );
    return ( ( Maybe_351_Just ) ( (  digit_dash_char1404 ) ) );
}

static  struct Maybe_351   next2660 (    struct StrConcatIter_2655 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next2661 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2659 (    struct StrConcatIter_2654 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2660 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1183 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2653 (    struct StrConcatIter_2654  iterable1099 ,    enum Unit_8 (*  fun1101 )(    struct Char_65  ) ) {
    struct StrConcatIter_2654  temp2657 = ( (  into_dash_iter2658 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_2654 *  it1102 = ( &temp2657 );
    while ( ( true ) ) {
        struct Maybe_351  dref1103 = ( (  next2659 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_351_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_351_Just_t ) {
                ( (  fun1101 ) ( ( dref1103 .stuff .Maybe_351_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2679 (    uint8_t  self1407 ) {
    if ( (  eq324 ( (  self1407 ) , (  from_dash_integral328 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1408 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp341 ( (  self1407 ) , (  from_dash_integral328 ( 0 ) ) ) == 2 ) ) {
        self1407 = (  op_dash_div2671 ( (  self1407 ) , (  from_dash_integral328 ( 10 ) ) ) );
        digits1408 = (  op_dash_add175 ( (  digits1408 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1408 );
}

static  struct IntStrIter_2656   uint_dash_iter2678 (    uint8_t  int1414 ) {
    return ( (struct IntStrIter_2656) { .f_int = (  int1414 ) , .f_len = ( (  count_dash_digits2679 ) ( (  int1414 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2656   chars2677 (    uint8_t  self1802 ) {
    return ( (  uint_dash_iter2678 ) ( (  self1802 ) ) );
}

static  struct StrConcatIter_2655   into_dash_iter2676 (    struct StrConcat_2652  dref1297 ) {
    return ( (struct StrConcatIter_2655) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2677 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2655   chars2675 (    struct StrConcat_2652  self1308 ) {
    return ( (  into_dash_iter2676 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2654   into_dash_iter2674 (    struct StrConcat_2651  dref1297 ) {
    return ( (struct StrConcatIter_2654) { .f_left = ( (  chars2675 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1196 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2654   chars2673 (    struct StrConcat_2651  self1308 ) {
    return ( (  into_dash_iter2674 ) ( (  self1308 ) ) );
}

static  enum Unit_8   print2650 (    struct StrConcat_2651  s1335 ) {
    ( (  for_dash_each2653 ) ( ( (  chars2673 ) ( (  s1335 ) ) ) ,  (  printf_dash_char318 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2562649 (    uint8_t  color2763 ) {
    ( (  print2650 ) ( ( ( StrConcat_2651_StrConcat ) ( ( ( StrConcat_2652_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2763 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2685 {
    struct StrConcat_2651  field0;
    uint8_t  field1;
};

static struct StrConcat_2685 StrConcat_2685_StrConcat (  struct StrConcat_2651  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2685 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2684 {
    struct StrConcat_2685  field0;
    struct Char_65  field1;
};

static struct StrConcat_2684 StrConcat_2684_StrConcat (  struct StrConcat_2685  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2684 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2683 {
    struct StrConcat_2684  field0;
    uint8_t  field1;
};

static struct StrConcat_2683 StrConcat_2683_StrConcat (  struct StrConcat_2684  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2683 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2682 {
    struct StrConcat_2683  field0;
    struct Char_65  field1;
};

static struct StrConcat_2682 StrConcat_2682_StrConcat (  struct StrConcat_2683  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2682 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2690 {
    struct StrConcatIter_2654  f_left;
    struct IntStrIter_2656  f_right;
};

struct StrConcatIter_2689 {
    struct StrConcatIter_2690  f_left;
    struct AppendIter_1161  f_right;
};

struct StrConcatIter_2688 {
    struct StrConcatIter_2689  f_left;
    struct IntStrIter_2656  f_right;
};

struct StrConcatIter_2687 {
    struct StrConcatIter_2688  f_left;
    struct AppendIter_1161  f_right;
};

static  struct StrConcatIter_2687   into_dash_iter2692 (    struct StrConcatIter_2687  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_351   next2696 (    struct StrConcatIter_2690 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2659 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next2661 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2695 (    struct StrConcatIter_2689 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2696 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1183 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2694 (    struct StrConcatIter_2688 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2695 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next2661 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2693 (    struct StrConcatIter_2687 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2694 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1183 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2686 (    struct StrConcatIter_2687  iterable1099 ,    enum Unit_8 (*  fun1101 )(    struct Char_65  ) ) {
    struct StrConcatIter_2687  temp2691 = ( (  into_dash_iter2692 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_2687 *  it1102 = ( &temp2691 );
    while ( ( true ) ) {
        struct Maybe_351  dref1103 = ( (  next2693 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_351_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_351_Just_t ) {
                ( (  fun1101 ) ( ( dref1103 .stuff .Maybe_351_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_2690   into_dash_iter2704 (    struct StrConcat_2685  dref1297 ) {
    return ( (struct StrConcatIter_2690) { .f_left = ( (  chars2673 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2677 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2690   chars2703 (    struct StrConcat_2685  self1308 ) {
    return ( (  into_dash_iter2704 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2689   into_dash_iter2702 (    struct StrConcat_2684  dref1297 ) {
    return ( (struct StrConcatIter_2689) { .f_left = ( (  chars2703 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1196 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2689   chars2701 (    struct StrConcat_2684  self1308 ) {
    return ( (  into_dash_iter2702 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2688   into_dash_iter2700 (    struct StrConcat_2683  dref1297 ) {
    return ( (struct StrConcatIter_2688) { .f_left = ( (  chars2701 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2677 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2688   chars2699 (    struct StrConcat_2683  self1308 ) {
    return ( (  into_dash_iter2700 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2687   into_dash_iter2698 (    struct StrConcat_2682  dref1297 ) {
    return ( (struct StrConcatIter_2687) { .f_left = ( (  chars2699 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1196 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2687   chars2697 (    struct StrConcat_2682  self1308 ) {
    return ( (  into_dash_iter2698 ) ( (  self1308 ) ) );
}

static  enum Unit_8   print2681 (    struct StrConcat_2682  s1335 ) {
    ( (  for_dash_each2686 ) ( ( (  chars2697 ) ( (  s1335 ) ) ) ,  (  printf_dash_char318 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg_dash_rgb2680 (    struct RGB_157  c2785 ) {
    ( (  print2681 ) ( ( ( StrConcat_2682_StrConcat ) ( ( ( StrConcat_2683_StrConcat ) ( ( ( StrConcat_2684_StrConcat ) ( ( ( StrConcat_2685_StrConcat ) ( ( ( StrConcat_2651_StrConcat ) ( ( ( StrConcat_2652_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2785 ) .f_r ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2785 ) .f_g ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2785 ) .f_b ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2645 (    struct Color_154  c2806 ) {
    struct Color_154  dref2807 = (  c2806 );
    if ( dref2807.tag == Color_154_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2646 ) ( ) );
    }
    else {
        if ( dref2807.tag == Color_154_Color8_t ) {
            ( (  set_dash_fg82647 ) ( ( dref2807 .stuff .Color_154_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2807.tag == Color_154_Color16_t ) {
                ( (  set_dash_fg162648 ) ( ( dref2807 .stuff .Color_154_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2807.tag == Color_154_Color256_t ) {
                    ( (  set_dash_fg2562649 ) ( ( dref2807 .stuff .Color_154_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2807.tag == Color_154_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2680 ) ( ( dref2807 .stuff .Color_154_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_default_dash_bg2706 (  ) {
    ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg82707 (    enum Color8_155  color2753 ) {
    enum Color8_155  dref2754 = (  color2753 );
    switch (  dref2754 ) {
        case Color8_155_Black8 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Red8 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Green8 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Yellow8 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Blue8 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Magenta8 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Cyan8 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_White8 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg162708 (    enum Color16_156  color2757 ) {
    enum Color16_156  dref2758 = (  color2757 );
    switch (  dref2758 ) {
        case Color16_156_Black16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Red16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Green16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Yellow16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Blue16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Magenta16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Cyan16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_White16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightBlack16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightRed16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightGreen16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightYellow16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightBlue16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightMagenta16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightCyan16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightWhite16 : {
            ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2562709 (    uint8_t  color2766 ) {
    ( (  print2650 ) ( ( ( StrConcat_2651_StrConcat ) ( ( ( StrConcat_2652_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2766 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg_dash_rgb2710 (    struct RGB_157  c2788 ) {
    ( (  print2681 ) ( ( ( StrConcat_2682_StrConcat ) ( ( ( StrConcat_2683_StrConcat ) ( ( ( StrConcat_2684_StrConcat ) ( ( ( StrConcat_2685_StrConcat ) ( ( ( StrConcat_2651_StrConcat ) ( ( ( StrConcat_2652_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2788 ) .f_r ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2788 ) .f_g ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2788 ) .f_b ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2705 (    struct Color_154  c2814 ) {
    struct Color_154  dref2815 = (  c2814 );
    if ( dref2815.tag == Color_154_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2706 ) ( ) );
    }
    else {
        if ( dref2815.tag == Color_154_Color8_t ) {
            ( (  set_dash_bg82707 ) ( ( dref2815 .stuff .Color_154_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2815.tag == Color_154_Color16_t ) {
                ( (  set_dash_bg162708 ) ( ( dref2815 .stuff .Color_154_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2815.tag == Color_154_Color256_t ) {
                    ( (  set_dash_bg2562709 ) ( ( dref2815 .stuff .Color_154_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2815.tag == Color_154_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2710 ) ( ( dref2815 .stuff .Color_154_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  uint32_t   i32_dash_u322711 (    int32_t  x681 ) {
    return ( (uint32_t ) (  x681 ) );
}

static  enum Unit_8   emit_dash_cell2644 (    struct RenderState_2579 *  rs3698 ,    struct Cell_453 *  c3700 ,    uint32_t  x3702 ,    uint32_t  y3704 ) {
    if ( ( ( !  eq2403 ( (  x3702 ) , ( ( * (  rs3698 ) ) .f_x ) ) ) || ( !  eq2403 ( (  y3704 ) , ( ( * (  rs3698 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to2581 ) ( (  x3702 ) ,  (  y3704 ) ) );
        (*  rs3698 ) .f_x = (  x3702 );
        (*  rs3698 ) .f_y = (  y3704 );
    }
    struct Char_65  char3705 = ( ( * (  c3700 ) ) .f_c );
    struct Color_154  bg3706 = ( ( * (  c3700 ) ) .f_bg );
    if ( (  eq700 ( ( ( * (  c3700 ) ) .f_char_dash_width ) , (  op_dash_neg852 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        char3705 = ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) );
        bg3706 = ( ( Color_154_Color8 ) ( ( Color8_155_Red8 ) ) );
    }
    if ( ( !  eq2633 ( ( ( * (  rs3698 ) ) .f_fg ) , ( ( * (  c3700 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2645 ) ( ( ( * (  c3700 ) ) .f_fg ) ) );
        (*  rs3698 ) .f_fg = ( ( * (  c3700 ) ) .f_fg );
    }
    if ( ( !  eq2633 ( ( ( * (  rs3698 ) ) .f_bg ) , (  bg3706 ) ) ) ) {
        ( (  set_dash_bg2705 ) ( (  bg3706 ) ) );
        (*  rs3698 ) .f_bg = (  bg3706 );
    }
    ( (  print_dash_str317 ) ( (  char3705 ) ) );
    uint32_t  char_dash_width3707 = ( (  i32_dash_u322711 ) ( ( (  max374 ) ( ( ( * (  c3700 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) ) ) );
    (*  rs3698 ) .f_x = (  op_dash_add187 ( ( ( * (  rs3698 ) ) .f_x ) , (  char_dash_width3707 ) ) );
    return ( Unit_8_Unit );
}

struct Zip_2714 {
    struct SliceIter_2616  f_left_dash_it;
    struct FromIter_544  f_right_dash_it;
};

struct env2715 {
    ;
    struct Slice_452  dest2281;
    ;
};

struct Tuple2_2717 {
    struct Cell_453  field0;
    int32_t  field1;
};

static struct Tuple2_2717 Tuple2_2717_Tuple2 (  struct Cell_453  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2717 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2716 {
    enum Unit_8  (*fun) (  struct env2715*  ,    struct Tuple2_2717  );
    struct env2715 env;
};

static  struct Zip_2714   into_dash_iter2719 (    struct Zip_2714  self936 ) {
    return (  self936 );
}

struct Maybe_2720 {
    enum {
        Maybe_2720_None_t,
        Maybe_2720_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2717  field0;
        } Maybe_2720_Just_s;
    } stuff;
};

static struct Maybe_2720 Maybe_2720_Just (  struct Tuple2_2717  field0 ) {
    return ( struct Maybe_2720 ) { .tag = Maybe_2720_Just_t, .stuff = { .Maybe_2720_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2720   next2721 (    struct Zip_2714 *  self939 ) {
    struct Zip_2714  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_996  dref941 = ( (  next2624 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_996_None_t ) {
            return ( (struct Maybe_2720) { .tag = Maybe_2720_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_996_Just_t ) {
                struct Maybe_171  dref943 = ( (  next550 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_2720) { .tag = Maybe_2720_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next2624 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next550 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2720_Just ) ( ( ( Tuple2_2717_Tuple2 ) ( ( dref941 .stuff .Maybe_996_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2713 (    struct Zip_2714  iterable1099 ,   struct envunion2716  fun1101 ) {
    struct Zip_2714  temp2718 = ( (  into_dash_iter2719 ) ( (  iterable1099 ) ) );
    struct Zip_2714 *  it1102 = ( &temp2718 );
    while ( ( true ) ) {
        struct Maybe_2720  dref1103 = ( (  next2721 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_2720_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_2720_Just_t ) {
                struct envunion2716  temp2722 = (  fun1101 );
                ( temp2722.fun ( &temp2722.env ,  ( dref1103 .stuff .Maybe_2720_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_2714   zip2723 (    struct Slice_452  left947 ,    struct FromIter_544  right949 ) {
    struct SliceIter_2616  left_dash_it950 = ( (  into_dash_iter2630 ) ( (  left947 ) ) );
    struct FromIter_544  right_dash_it951 = ( (  into_dash_iter554 ) ( (  right949 ) ) );
    return ( (struct Zip_2714) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  enum Unit_8   lam2724 (   struct env2715* env ,    struct Tuple2_2717  dref2282 ) {
    return ( (  set989 ) ( ( env->dest2281 ) ,  ( (  i32_dash_size280 ) ( ( dref2282 .field1 ) ) ) ,  ( dref2282 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to2712 (    struct Slice_452  src2279 ,    struct Slice_452  dest2281 ) {
    if ( (  cmp302 ( ( (  src2279 ) .f_count ) , ( (  dest2281 ) .f_count ) ) == 2 ) ) {
        ( (  panic654 ) ( ( ( StrConcat_655_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2279 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2281 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2715 envinst2715 = {
        .dest2281 =  dest2281 ,
    };
    ( (  for_dash_each2713 ) ( ( (  zip2723 ) ( (  src2279 ) ,  ( (  from555 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2716){ .fun = (  enum Unit_8  (*) (  struct env2715*  ,    struct Tuple2_2717  ) )lam2724 , .env =  envinst2715 } ) ) );
    return ( Unit_8_Unit );
}

static  uint32_t   render_dash_screen2578 (    struct Screen_451 *  screen3710 ) {
    int32_t  w3711 = ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3710 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3712 = ( (  u32_dash_i321986 ) ( ( ( * ( ( * (  screen3710 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_2579  temp2580 = ( (struct RenderState_2579) { .f_x = (  from_dash_integral181 ( 0 ) ) , .f_y = (  from_dash_integral181 ( 0 ) ) , .f_fg = ( (struct Color_154) { .tag = Color_154_ColorDefault_t } ) , .f_bg = ( (struct Color_154) { .tag = Color_154_ColorDefault_t } ) , .f_changes = (  from_dash_integral181 ( 0 ) ) } );
    struct RenderState_2579 *  rs3713 = ( &temp2580 );
    ( (  move_dash_cursor_dash_to2581 ) ( (  from_dash_integral181 ( 0 ) ) ,  (  from_dash_integral181 ( 0 ) ) ) );
    struct RangeIter_169  temp2611 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( (  h3712 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond2612 =  next172 (&temp2611);
        if (  __cond2612 .tag == 0 ) {
            break;
        }
        int32_t  y3715 =  __cond2612 .stuff .Maybe_171_Just_s .field0;
        int32_t  x_dash_v3716 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp173 ( (  x_dash_v3716 ) , (  w3711 ) ) == 0 ) ) {
            size_t  i3717 = ( (  i32_dash_size280 ) ( (  op_dash_add175 ( (  op_dash_mul1597 ( (  y3715 ) , (  w3711 ) ) ) , (  x_dash_v3716 ) ) ) ) );
            struct Cell_453 *  cur3718 = ( (  get_dash_ptr990 ) ( ( ( * (  screen3710 ) ) .f_current ) ,  (  i3717 ) ) );
            int32_t  char_dash_width3719 = ( (  max374 ) ( ( ( * (  cur3718 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            struct Slice_452  curs3720 = ( (  subslice2613 ) ( ( ( * (  screen3710 ) ) .f_current ) ,  (  i3717 ) ,  (  op_dash_add356 ( (  i3717 ) , ( (  i32_dash_size280 ) ( (  char_dash_width3719 ) ) ) ) ) ) );
            struct Slice_452  prevs3721 = ( (  subslice2613 ) ( ( ( * (  screen3710 ) ) .f_previous ) ,  (  i3717 ) ,  (  op_dash_add356 ( (  i3717 ) , ( (  i32_dash_size280 ) ( (  char_dash_width3719 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3710 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any2614 ) ( ( (  zip2629 ) ( (  curs3720 ) ,  (  prevs3721 ) ) ) ,  (  lam2631 ) ) ) ) ) {
                (*  rs3713 ) .f_changes = (  op_dash_add187 ( ( ( * (  rs3713 ) ) .f_changes ) , (  from_dash_integral181 ( 1 ) ) ) );
                ( (  emit_dash_cell2644 ) ( (  rs3713 ) ,  (  cur3718 ) ,  ( (  i32_dash_u322711 ) ( (  x_dash_v3716 ) ) ) ,  ( (  i32_dash_u322711 ) ( (  y3715 ) ) ) ) );
                ( (  copy_dash_to2712 ) ( (  curs3720 ) ,  (  prevs3721 ) ) );
            }
            x_dash_v3716 = (  op_dash_add175 ( (  x_dash_v3716 ) , (  char_dash_width3719 ) ) );
        }
    }
    (*  screen3710 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors917 ) ( ) );
    ( (  flush_dash_stdout920 ) ( ) );
    return ( ( * (  rs3713 ) ) .f_changes );
}

static  void *   cast_dash_ptr2731 (    struct timespec * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of2732 (    struct timespec *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct timespec *   zeroed2729 (  ) {
    struct timespec *  temp2730;
    struct timespec *  x648 = (  temp2730 );
    ( ( memset ) ( ( (  cast_dash_ptr2731 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of2732 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  struct timespec *   null_dash_ptr2728 (  ) {
    return ( (  zeroed2729 ) ( ) );
}

static  enum Unit_8   sync2725 (    struct Tui_97 *  tui3581 ) {
    if ( (  eq2403 ( ( ( * (  tui3581 ) ) .f_target_dash_fps ) , (  from_dash_integral181 ( 0 ) ) ) ) ) {
        return ( Unit_8_Unit );
    }
    int64_t  frame_dash_ns3582 = (  op_dash_div1177 ( (  from_dash_integral365 ( 1000000000 ) ) , ( (  size_dash_i64349 ) ( ( (  u32_dash_size974 ) ( ( ( * (  tui3581 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2726 = ( (  undefined954 ) ( ) );
    struct timespec *  now3583 = ( &temp2726 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic956 ) ( ) ) ,  (  now3583 ) ) );
    int64_t  elapsed_dash_ns3584 = (  op_dash_add366 ( (  op_dash_mul347 ( (  op_dash_sub1179 ( ( ( * (  now3583 ) ) .tv_sec ) , ( ( ( * (  tui3581 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral365 ( 1000000000 ) ) ) ) , (  op_dash_sub1179 ( ( ( * (  now3583 ) ) .tv_nsec ) , ( ( ( * (  tui3581 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3585 = (  op_dash_sub1179 ( (  frame_dash_ns3582 ) , (  elapsed_dash_ns3584 ) ) );
    if ( (  cmp1193 ( (  sleep_dash_ns3585 ) , (  from_dash_integral365 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2727 = ( (struct timespec) { .tv_sec = (  from_dash_integral365 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3585 ) } );
        struct timespec *  ts3586 = ( &temp2727 );
        ( ( nanosleep ) ( (  ts3586 ) ,  ( (  null_dash_ptr2728 ) ( ) ) ) );
    }
    struct timespec  temp2733 = ( (  undefined954 ) ( ) );
    struct timespec *  last_dash_sync3587 = ( &temp2733 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic956 ) ( ) ) ,  (  last_dash_sync3587 ) ) );
    (*  tui3581 ) .f_last_dash_sync = ( * (  last_dash_sync3587 ) );
    (*  tui3581 ) .f_fps_dash_count = (  op_dash_add187 ( ( ( * (  tui3581 ) ) .f_fps_dash_count ) , (  from_dash_integral181 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3588 = (  op_dash_add366 ( (  op_dash_mul347 ( (  op_dash_sub1179 ( ( ( ( * (  tui3581 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3581 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral365 ( 1000 ) ) ) ) , (  op_dash_div1177 ( (  op_dash_sub1179 ( ( ( ( * (  tui3581 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3581 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral365 ( 1000000 ) ) ) ) ) );
    if ( (  cmp1193 ( (  fps_dash_elapsed_dash_ms3588 ) , (  from_dash_integral365 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3581 ) .f_actual_dash_fps = ( ( * (  tui3581 ) ) .f_fps_dash_count );
        (*  tui3581 ) .f_fps_dash_count = (  from_dash_integral181 ( 0 ) );
        (*  tui3581 ) .f_fps_dash_ts = ( ( * (  tui3581 ) ) .f_last_dash_sync );
    }
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr2736 (    struct Cell_453 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free2735 (    enum CAllocator_10  dref2373 ,    struct Slice_452  slice2375 ) {
    if (!(  dref2373 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr2736 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_screen2734 (    struct Screen_451 *  screen3686 ) {
    enum CAllocator_10  al3687 = ( ( * (  screen3686 ) ) .f_al );
    ( (  free2735 ) ( (  al3687 ) ,  ( ( * (  screen3686 ) ) .f_current ) ) );
    ( (  free2735 ) ( (  al3687 ) ,  ( ( * (  screen3686 ) ) .f_previous ) ) );
    return ( Unit_8_Unit );
}

struct envunion2738 {
    enum Unit_8  (*fun) (  struct env93*  ,    struct Tui_97 *  );
    struct env93 env;
};

static  enum Unit_8   disable_dash_mouse2740 (  ) {
    ( (  print_dash_str310 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_raw_dash_mode2741 (    struct Termios_87 *  orig_dash_termios3559 ) {
    if ( (  eq700 ( ( ( tcsetattr ) ( ( (  stdin_dash_fileno850 ) ( ) ) ,  ( (  tcsa_dash_flush915 ) ( ) ) ,  ( (  cast_dash_ptr851 ) ( (  orig_dash_termios3559 ) ) ) ) ) , (  op_dash_neg852 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        ( (  panic853 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"tcsetattr" ) ,  ( 9 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   show_dash_cursor2742 (  ) {
    ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_cursor_dash_position2743 (  ) {
    ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_alternative_dash_screen_dash_buffer2744 (  ) {
    ( (  print845 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[?1049l" ) ,  ( 8 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   deinit2739 (   struct env93* env ,    struct Tui_97 *  tui3591 ) {
    ( (  disable_dash_mouse2740 ) ( ) );
    ( (  disable_dash_raw_dash_mode2741 ) ( ( & ( ( * ( env->tui_dash_global_dash_state3572 ) ) .f_orig_dash_termios ) ) ) );
    ( (  show_dash_cursor2742 ) ( ) );
    ( (  reset_dash_colors917 ) ( ) );
    ( (  clear_dash_screen918 ) ( ) );
    ( (  reset_dash_cursor_dash_position2743 ) ( ) );
    ( (  disable_dash_alternative_dash_screen_dash_buffer2744 ) ( ) );
    ( (  flush_dash_stdout920 ) ( ) );
    return ( Unit_8_Unit );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size2447 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor2448 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor2449 = ( (  from_dash_integral0 ( 8 ) ) );
    struct env1 envinst1 = {
        .growth_dash_factor2448 =  growth_dash_factor2448 ,
        .starting_dash_size2447 =  starting_dash_size2447 ,
    };
    struct env2 envinst2 = {
        .growth_dash_factor2448 =  growth_dash_factor2448 ,
        .starting_dash_size2447 =  starting_dash_size2447 ,
    };
    struct env3 envinst3 = {
        .growth_dash_factor2448 =  growth_dash_factor2448 ,
        .starting_dash_size2447 =  starting_dash_size2447 ,
    };
    struct env4 envinst4 = {
        .growth_dash_factor2448 =  growth_dash_factor2448 ,
        .starting_dash_size2447 =  starting_dash_size2447 ,
    };
    struct env5 envinst5 = {
        .growth_dash_factor2448 =  growth_dash_factor2448 ,
        .starting_dash_size2447 =  starting_dash_size2447 ,
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
        .shrink_dash_factor2449 =  shrink_dash_factor2449 ,
    };
    struct env41 envinst41 = {
        .shrink_dash_factor2449 =  shrink_dash_factor2449 ,
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
    ( ( setlocale ) ( ( (  lc_dash_ctype55 ) ( ) ) ,  ( (  from_dash_string57 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
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
        .envinst60 = envinst60 ,
    };
    struct env68 envinst68 = {
        .envinst60 = envinst60 ,
    };
    struct env69 envinst69 = {
        .envinst68 = envinst68 ,
    };
    struct env72 envinst72 = {
        .envinst44 = envinst44 ,
    };
    struct env75 envinst75 = {
        .envinst60 = envinst60 ,
        .envinst63 = envinst63 ,
    };
    struct env80 envinst80 = {
        .envinst60 = envinst60 ,
        .envinst66 = envinst66 ,
    };
    struct env82 envinst82 = {
        .envinst60 = envinst60 ,
        .envinst67 = envinst67 ,
    };
    struct anon_86  temp89 = ( (struct anon_86) { .f_orig_dash_termios = ( (  undefined90 ) ( ) ) , .f_should_dash_resize = ( false ) } );
    struct anon_86 *  tui_dash_global_dash_state3572 = ( &temp89 );
    struct env92 envinst92 = {
        .tui_dash_global_dash_state3572 =  tui_dash_global_dash_state3572 ,
    };
    struct env93 envinst93 = {
        .tui_dash_global_dash_state3572 =  tui_dash_global_dash_state3572 ,
    };
    struct env94 envinst94 = {
        .tui_dash_global_dash_state3572 =  tui_dash_global_dash_state3572 ,
    };
    struct env95 envinst95 = {
        .envinst94 = envinst94 ,
    };
    struct env99 envinst99 = {
        .envinst94 = envinst94 ,
    };
    struct env101 envinst101 = {
        .envinst35 = envinst35 ,
    };
    struct env103 envinst103 = {
        .envinst35 = envinst35 ,
    };
    struct env105 envinst105 = {
        .envinst35 = envinst35 ,
    };
    struct env107 envinst107 = {
        .envinst35 = envinst35 ,
    };
    struct env109 envinst109 = {
        .envinst53 = envinst53 ,
        .envinst37 = envinst37 ,
        .envinst48 = envinst48 ,
    };
    struct env113 envinst113 = {
        .envinst6 = envinst6 ,
        .envinst48 = envinst48 ,
        .envinst109 = envinst109 ,
        .envinst40 = envinst40 ,
        .envinst41 = envinst41 ,
    };
    struct env123 envinst123 = {
        .envinst69 = envinst69 ,
    };
    struct env125 envinst125 = {
        .envinst50 = envinst50 ,
    };
    struct env127 envinst127 = {
        .envinst113 = envinst113 ,
        .envinst125 = envinst125 ,
    };
    struct env130 envinst130 = {
        .envinst113 = envinst113 ,
    };
    struct env132 envinst132 = {
        .envinst113 = envinst113 ,
    };
    struct env134 envinst134 = {
        .envinst130 = envinst130 ,
    };
    struct env136 envinst136 = {
        .envinst132 = envinst132 ,
    };
    struct env138 envinst138 = {
        .envinst48 = envinst48 ,
    };
    struct env140 envinst140 = {
        .envinst132 = envinst132 ,
        .envinst21 = envinst21 ,
        .envinst28 = envinst28 ,
        .envinst138 = envinst138 ,
    };
    struct env145 envinst145 = {
        .envinst28 = envinst28 ,
    };
    struct env147 envinst147 = {
        .envinst103 = envinst103 ,
        .envinst101 = envinst101 ,
        .envinst107 = envinst107 ,
        .envinst105 = envinst105 ,
    };
    struct env152 envinst152 = {
        .envinst147 = envinst147 ,
    };
    struct Color_154  camel4275 = ( (  rgb158 ) ( (  from_dash_integral181 ( 11766360 ) ) ) );
    struct Color_154  olive4276 = ( (  rgb158 ) ( (  from_dash_integral181 ( 7303983 ) ) ) );
    struct Color_154  tea_dash_green4277 = ( (  rgb158 ) ( (  from_dash_integral181 ( 14875064 ) ) ) );
    struct Color_154  chocolate4278 = ( (  rgb158 ) ( (  from_dash_integral181 ( 13721620 ) ) ) );
    struct Color_154  muted_dash_olive4279 = ( (  rgb158 ) ( (  from_dash_integral181 ( 12308106 ) ) ) );
    struct Color_154  palm_dash_leaf4280 = ( (  rgb158 ) ( (  from_dash_integral181 ( 9674588 ) ) ) );
    struct Color_154  lime_dash_green4281 = ( (  rgb158 ) ( (  from_dash_integral181 ( 3263232 ) ) ) );
    struct Color_154  forest_dash_green4282 = ( (  rgb158 ) ( (  from_dash_integral181 ( 1153058 ) ) ) );
    struct Color_154  green4283 = ( (  rgb158 ) ( (  from_dash_integral181 ( 2781729 ) ) ) );
    struct Color_154  dark_dash_spruce4284 = ( (  rgb158 ) ( (  from_dash_integral181 ( 1983518 ) ) ) );
    struct Color_154  evergreen4285 = ( (  rgb158 ) ( (  from_dash_integral181 ( 1386004 ) ) ) );
    struct Array_195  temp199 = ( (struct Array_195) { ._arr = { ( (  hlt200 ) ( ( HighlightType_18_Number ) ,  (  green4283 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_String ) ,  (  camel4275 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_Comment ) ,  (  dark_dash_spruce4284 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_Ident1 ) ,  (  lime_dash_green4281 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_Ident2 ) ,  (  muted_dash_olive4279 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_Ident3 ) ,  (  tea_dash_green4277 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_Ident4 ) ,  (  palm_dash_leaf4280 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_Keyword1 ) ,  (  tea_dash_green4277 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_Keyword2 ) ,  (  chocolate4278 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_Special1 ) ,  (  olive4276 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_Special2 ) ,  (  forest_dash_green4282 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_Special3 ) ,  (  camel4275 ) ) ) , ( (struct HighlightColors_191) { .f_type = ( HighlightType_18_Invalid ) , .f_fg = (  evergreen4285 ) , .f_bg = ( ( Maybe_192_Just ) ( ( ( Color_154_Color8 ) ( ( Color8_155_Red8 ) ) ) ) ) } ) } } );
    struct Array_195  temp197 = ( (  from_dash_listlike198 ) ( ( &temp199 ) ) );
    struct Theme_188  temp193 = ( (struct Theme_188) { .f_default = ( (struct Colors_189) { .f_bg = (  evergreen4285 ) , .f_fg = (  lime_dash_green4281 ) } ) , .f_cursor = ( (struct Colors_189) { .f_bg = (  lime_dash_green4281 ) , .f_fg = (  evergreen4285 ) } ) , .f_selection = ( (struct Colors_189) { .f_bg = (  forest_dash_green4282 ) , .f_fg = (  evergreen4285 ) } ) , .f_line_dash_num = ( (struct Colors_189) { .f_bg = (  evergreen4285 ) , .f_fg = (  forest_dash_green4282 ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_189) { .f_bg = (  evergreen4285 ) , .f_fg = (  tea_dash_green4277 ) } ) , .f_overlay = ( (struct Colors_189) { .f_bg = (  dark_dash_spruce4284 ) , .f_fg = (  lime_dash_green4281 ) } ) , .f_highlights = ( (  as_dash_slice194 ) ( ( &temp197 ) ) ) } );
    struct Theme_188 *  goblin_dash_ultra4286 = ( &temp193 );
    struct Color_154  gb_dash_fg4287 = ( (  rgb158 ) ( (  from_dash_integral181 ( 15457202 ) ) ) );
    struct Color_154  gb_dash_bg4288 = ( (  rgb158 ) ( (  from_dash_integral181 ( 2631720 ) ) ) );
    struct Color_154  gb_dash_cfg4289 = ( (  rgb158 ) ( (  from_dash_integral181 ( 3946550 ) ) ) );
    struct Color_154  gb_dash_cbg4290 = ( (  rgb158 ) ( (  from_dash_integral181 ( 12430995 ) ) ) );
    struct Color_154  gb_dash_sfg4291 = (  gb_dash_fg4287 );
    struct Color_154  gb_dash_sbg4292 = ( (  rgb158 ) ( (  from_dash_integral181 ( 5261637 ) ) ) );
    struct Color_154  gb_dash_lnfg4293 = ( (  rgb158 ) ( (  from_dash_integral181 ( 6708308 ) ) ) );
    struct Color_154  gb_dash_lnhlfg4294 = ( (  rgb158 ) ( (  from_dash_integral181 ( 16432431 ) ) ) );
    struct Color_154  gb_dash_ofg4295 = (  gb_dash_fg4287 );
    struct Color_154  gb_dash_obg4296 = (  gb_dash_cfg4289 );
    struct Color_154  gb_dash_gray4297 = ( (  rgb158 ) ( (  from_dash_integral181 ( 9601908 ) ) ) );
    struct Color_154  gb_dash_green14298 = ( (  rgb158 ) ( (  from_dash_integral181 ( 12106534 ) ) ) );
    struct Color_154  gb_dash_purple04299 = ( (  rgb158 ) ( (  from_dash_integral181 ( 11625094 ) ) ) );
    struct Color_154  gb_dash_purple14300 = ( (  rgb158 ) ( (  from_dash_integral181 ( 13862555 ) ) ) );
    struct Color_154  gb_dash_yellow14301 = ( (  rgb158 ) ( (  from_dash_integral181 ( 16432431 ) ) ) );
    struct Color_154  gb_dash_red14302 = ( (  rgb158 ) ( (  from_dash_integral181 ( 16468276 ) ) ) );
    struct Color_154  gb_dash_aqua14303 = ( (  rgb158 ) ( (  from_dash_integral181 ( 9355388 ) ) ) );
    struct Array_195  temp203 = ( (struct Array_195) { ._arr = { ( (  hlt200 ) ( ( HighlightType_18_Number ) ,  (  gb_dash_purple14300 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_String ) ,  (  gb_dash_green14298 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_Comment ) ,  (  gb_dash_gray4297 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_Ident1 ) ,  (  gb_dash_fg4287 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_Ident2 ) ,  (  gb_dash_yellow14301 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_Ident3 ) ,  (  gb_dash_purple04299 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_Ident4 ) ,  (  gb_dash_green14298 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_Keyword1 ) ,  (  gb_dash_aqua14303 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_Keyword2 ) ,  (  gb_dash_red14302 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_Special1 ) ,  (  gb_dash_purple14300 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_Special2 ) ,  (  gb_dash_purple14300 ) ) ) , ( (  hlt200 ) ( ( HighlightType_18_Special3 ) ,  (  gb_dash_aqua14303 ) ) ) , ( (struct HighlightColors_191) { .f_type = ( HighlightType_18_Invalid ) , .f_fg = (  evergreen4285 ) , .f_bg = ( ( Maybe_192_Just ) ( ( ( Color_154_Color8 ) ( ( Color8_155_Red8 ) ) ) ) ) } ) } } );
    struct Array_195  temp202 = ( (  from_dash_listlike198 ) ( ( &temp203 ) ) );
    struct Theme_188  temp201 = ( (struct Theme_188) { .f_default = ( (struct Colors_189) { .f_bg = (  gb_dash_bg4288 ) , .f_fg = (  gb_dash_fg4287 ) } ) , .f_cursor = ( (struct Colors_189) { .f_bg = (  gb_dash_cbg4290 ) , .f_fg = (  gb_dash_cfg4289 ) } ) , .f_selection = ( (struct Colors_189) { .f_bg = (  gb_dash_sbg4292 ) , .f_fg = (  gb_dash_sfg4291 ) } ) , .f_line_dash_num = ( (struct Colors_189) { .f_bg = (  gb_dash_bg4288 ) , .f_fg = (  gb_dash_lnfg4293 ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_189) { .f_bg = (  gb_dash_bg4288 ) , .f_fg = (  gb_dash_lnhlfg4294 ) } ) , .f_overlay = ( (struct Colors_189) { .f_bg = (  gb_dash_obg4296 ) , .f_fg = (  gb_dash_ofg4295 ) } ) , .f_highlights = ( (  as_dash_slice194 ) ( ( &temp202 ) ) ) } );
    struct Theme_188 *  gruvbox4304 = ( &temp201 );
    struct Theme_188  temp204 = ( (struct Theme_188) { .f_default = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color8 ) ( ( Color8_155_Black8 ) ) ) , .f_fg = ( ( Color_154_Color8 ) ( ( Color8_155_White8 ) ) ) } ) , .f_cursor = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color8 ) ( ( Color8_155_White8 ) ) ) , .f_fg = ( ( Color_154_Color8 ) ( ( Color8_155_Black8 ) ) ) } ) , .f_selection = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color16 ) ( ( Color16_156_BrightWhite16 ) ) ) , .f_fg = ( ( Color_154_Color16 ) ( ( Color16_156_Black16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color8 ) ( ( Color8_155_Black8 ) ) ) , .f_fg = ( ( Color_154_Color8 ) ( ( Color8_155_White8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color8 ) ( ( Color8_155_White8 ) ) ) , .f_fg = ( ( Color_154_Color8 ) ( ( Color8_155_Black8 ) ) ) } ) , .f_overlay = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color8 ) ( ( Color8_155_White8 ) ) ) , .f_fg = ( ( Color_154_Color8 ) ( ( Color8_155_Black8 ) ) ) } ) , .f_highlights = ( (  empty205 ) ( ) ) } );
    struct Theme_188 *  dark_dash_theme4305 = ( &temp204 );
    struct Theme_188  temp211 = ( (struct Theme_188) { .f_default = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color16 ) ( ( Color16_156_BrightWhite16 ) ) ) , .f_fg = ( ( Color_154_Color8 ) ( ( Color8_155_Black8 ) ) ) } ) , .f_cursor = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color8 ) ( ( Color8_155_Black8 ) ) ) , .f_fg = ( ( Color_154_Color16 ) ( ( Color16_156_BrightWhite16 ) ) ) } ) , .f_selection = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color16 ) ( ( Color16_156_White16 ) ) ) , .f_fg = ( ( Color_154_Color16 ) ( ( Color16_156_BrightWhite16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color16 ) ( ( Color16_156_BrightWhite16 ) ) ) , .f_fg = ( ( Color_154_Color8 ) ( ( Color8_155_Black8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color8 ) ( ( Color8_155_Black8 ) ) ) , .f_fg = ( ( Color_154_Color16 ) ( ( Color16_156_BrightWhite16 ) ) ) } ) , .f_overlay = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color8 ) ( ( Color8_155_Black8 ) ) ) , .f_fg = ( ( Color_154_Color16 ) ( ( Color16_156_BrightWhite16 ) ) ) } ) , .f_highlights = ( (  empty205 ) ( ) ) } );
    struct Theme_188 *  light_dash_theme4306 = ( &temp211 );
    struct Theme_188 *  default4307 = (  gruvbox4304 );
    struct Array_215  temp219 = ( (struct Array_215) { ._arr = { ( ( Tuple2_213_Tuple2 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"default" ) ,  ( 7 ) ) ) ,  (  default4307 ) ) ) , ( ( Tuple2_213_Tuple2 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"goblin-ultra" ) ,  ( 12 ) ) ) ,  (  goblin_dash_ultra4286 ) ) ) , ( ( Tuple2_213_Tuple2 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"gruvbox" ) ,  ( 7 ) ) ) ,  (  gruvbox4304 ) ) ) , ( ( Tuple2_213_Tuple2 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"dark-mono" ) ,  ( 9 ) ) ) ,  (  dark_dash_theme4305 ) ) ) , ( ( Tuple2_213_Tuple2 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"light-mono" ) ,  ( 10 ) ) ) ,  (  light_dash_theme4306 ) ) ) } } );
    struct Array_215  temp217 = ( (  from_dash_listlike218 ) ( ( &temp219 ) ) );
    struct Slice_212  all_dash_themes4308 = ( (  as_dash_slice214 ) ( ( &temp217 ) ) );
    struct env221 envinst221 = {
        .all_dash_themes4308 =  all_dash_themes4308 ,
    };
    struct env222 envinst222 = {
        .envinst152 = envinst152 ,
    };
    struct env225 envinst225 = {
        .envinst140 = envinst140 ,
    };
    struct env228 envinst228 = {
        .envinst140 = envinst140 ,
    };
    struct env230 envinst230 = {
        .envinst134 = envinst134 ,
    };
    struct env232 envinst232 = {
        .envinst136 = envinst136 ,
    };
    struct env234 envinst234 = {
        .envinst140 = envinst140 ,
    };
    struct env236 envinst236 = {
        .envinst140 = envinst140 ,
    };
    struct env238 envinst238 = {
        .envinst145 = envinst145 ,
        .envinst236 = envinst236 ,
    };
    struct env244 envinst244 = {
        .envinst140 = envinst140 ,
        .envinst145 = envinst145 ,
    };
    struct env247 envinst247 = {
        .envinst236 = envinst236 ,
    };
    struct env249 envinst249 = {
        .envinst234 = envinst234 ,
        .envinst145 = envinst145 ,
        .envinst225 = envinst225 ,
    };
    struct env254 envinst254 = {
        .envinst138 = envinst138 ,
    };
    struct env256 envinst256 = {
        .envinst75 = envinst75 ,
    };
    struct env258 envinst258 = {
        .envinst80 = envinst80 ,
    };
    struct env260 envinst260 = {
        .envinst82 = envinst82 ,
    };
    struct env262 envinst262 = {
        .envinst221 = envinst221 ,
    };
    struct env265 envinst265 = {
        .envinst258 = envinst258 ,
        .envinst260 = envinst260 ,
        .envinst256 = envinst256 ,
        .envinst123 = envinst123 ,
    };
    struct Array_278  temp281 = ( (struct Array_278) { ._arr = { ( (struct MenuItem_271) { .f_key = ( (  from_dash_charlike282 ) ( ( (uint8_t*)"l" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string220 ) ( ( (uint8_t*)"move to end of line" ) ,  ( 19 ) ) ) , .f_action = (  lam285 ) } ) , ( (struct MenuItem_271) { .f_key = ( (  from_dash_charlike282 ) ( ( (uint8_t*)"h" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string220 ) ( ( (uint8_t*)"move to beginning of line" ) ,  ( 25 ) ) ) , .f_action = (  lam398 ) } ) , ( (struct MenuItem_271) { .f_key = ( (  from_dash_charlike282 ) ( ( (uint8_t*)"g" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string220 ) ( ( (uint8_t*)"move up yah" ) ,  ( 11 ) ) ) , .f_action = (  lam418 ) } ) , ( (struct MenuItem_271) { .f_key = ( (  from_dash_charlike282 ) ( ( (uint8_t*)"e" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string220 ) ( ( (uint8_t*)"move dauwn" ) ,  ( 10 ) ) ) , .f_action = (  lam419 ) } ) } } );
    struct Menu_269  goto_dash_menu4810 = ( ( (struct Menu_269) { .f_name = ( (  from_dash_string220 ) ( ( (uint8_t*)"goto" ) ,  ( 4 ) ) ) , .f_items = ( (  from_dash_listlike277 ) ( ( &temp281 ) ) ) } ) );
    struct Array_423  temp425 = ( (struct Array_423) { ._arr = { ( (struct MenuItem_271) { .f_key = ( (  from_dash_charlike282 ) ( ( (uint8_t*)"f" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string220 ) ( ( (uint8_t*)"open dir bruh" ) ,  ( 13 ) ) ) , .f_action = (  lam426 ) } ) , ( (struct MenuItem_271) { .f_key = ( (  from_dash_charlike282 ) ( ( (uint8_t*)"y" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string220 ) ( ( (uint8_t*)"copy to system clipboard" ) ,  ( 24 ) ) ) , .f_action = (  lam427 ) } ) } } );
    struct Menu_269  space_dash_menu4815 = ( ( (struct Menu_269) { .f_name = ( (  from_dash_string220 ) ( ( (uint8_t*)"space" ) ,  ( 5 ) ) ) , .f_items = ( (  from_dash_listlike422 ) ( ( &temp425 ) ) ) } ) );
    struct env428 envinst428 = {
        .envinst234 = envinst234 ,
        .envinst244 = envinst244 ,
        .space_dash_menu4815 =  space_dash_menu4815 ,
        .envinst254 = envinst254 ,
        .envinst225 = envinst225 ,
        .envinst238 = envinst238 ,
        .envinst256 = envinst256 ,
        .envinst230 = envinst230 ,
        .envinst232 = envinst232 ,
        .envinst247 = envinst247 ,
        .goto_dash_menu4810 =  goto_dash_menu4810 ,
        .envinst249 = envinst249 ,
    };
    struct env439 envinst439 = {
        .envinst228 = envinst228 ,
        .envinst262 = envinst262 ,
        .envinst60 = envinst60 ,
        .envinst72 = envinst72 ,
        .envinst247 = envinst247 ,
        .envinst428 = envinst428 ,
        .envinst225 = envinst225 ,
        .envinst265 = envinst265 ,
    };
    struct env449 envinst449 = {
        .envinst222 = envinst222 ,
    };
    enum CAllocator_10  al4901 = ( (  idc455 ) ( ) );
    struct TextBuf_117  temp457;
    struct TextBuf_117  temp456 = (  temp457 );
    struct TextBuf_117 *  tb4902 = ( &temp456 );
    struct Slice_458  args4905 = ( (  get459 ) ( ) );
    struct Maybe_85  initial_dash_message4906 = ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    if ( (  cmp302 ( ( (  args4905 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct StrView_27  fname4907 = ( (  from_dash_const_dash_str463 ) ( (  elem_dash_get477 ( (  args4905 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) );
        struct envunion486  temp485 = ( (struct envunion486){ .fun = (  struct Maybe_484  (*) (  struct env127*  ,    enum CAllocator_10  ,    struct StrView_27  ) )mk_dash_from_dash_file487 , .env =  envinst127 } );
        struct Maybe_484  dref4908 = ( temp485.fun ( &temp485.env ,  (  al4901 ) ,  (  fname4907 ) ) );
        if ( dref4908.tag == Maybe_484_None_t ) {
            struct envunion834  temp833 = ( (struct envunion834){ .fun = (  struct TextBuf_117  (*) (  struct env125*  ,    enum CAllocator_10  ) )mk490 , .env =  envinst125 } );
            (*  tb4902 ) = ( temp833.fun ( &temp833.env ,  (  al4901 ) ) );
            (*  tb4902 ) .f_filename = ( ( Maybe_85_Just ) ( ( (  clone_dash_0647 ) ( (  fname4907 ) ,  (  al4901 ) ) ) ) );
        }
        else {
            if ( dref4908.tag == Maybe_484_Just_t ) {
                (*  tb4902 ) = ( dref4908 .stuff .Maybe_484_Just_s .field0 );
            }
        }
    } else {
        struct envunion836  temp835 = ( (struct envunion836){ .fun = (  struct TextBuf_117  (*) (  struct env125*  ,    enum CAllocator_10  ) )mk490 , .env =  envinst125 } );
        (*  tb4902 ) = ( temp835.fun ( &temp835.env ,  (  al4901 ) ) );
    }
    struct Config_272  temp837 = ( (struct Config_272) { .f_theme = (  default4307 ) , .f_display_dash_line_dash_numbers = ( true ) , .f_relative_dash_line_dash_numbers = ( false ) } );
    struct Config_272 *  cfg4910 = ( &temp837 );
    struct Editor_267  temp838 = ( (struct Editor_267) { .f_running = ( true ) , .f_al = (  al4901 ) , .f_pane = ( (  mk839 ) ( (  al4901 ) ,  (  tb4902 ) ) ) , .f_clipboard = ( (struct Maybe_85) { .tag = Maybe_85_None_t } ) , .f_search_dash_term = ( (struct Maybe_85) { .tag = Maybe_85_None_t } ) , .f_mode = ( (struct EditorMode_268) { .tag = EditorMode_268_Normal_t } ) , .f_msg = (  initial_dash_message4906 ) , .f_cfg = (  cfg4910 ) , .f_og_dash_theme = (  default4307 ) } );
    struct Editor_267 *  ed4911 = ( &temp838 );
    struct envunion842  temp841 = ( (struct envunion842){ .fun = (  struct Tui_97  (*) (  struct env92*  ) )mk843 , .env =  envinst92 } );
    struct Tui_97  temp840 = ( temp841.fun ( &temp841.env ) );
    struct Tui_97 *  tui4912 = ( &temp840 );
    struct Screen_451  temp967 = ( (  mk_dash_screen968 ) ( (  tui4912 ) ,  (  al4901 ) ) );
    struct Screen_451 *  screen4913 = ( &temp967 );
    uint32_t  last_dash_redraw_dash_changes4914 = (  from_dash_integral181 ( 0 ) );
    while ( ( ( * (  ed4911 ) ) .f_running ) ) {
        struct env1012 envinst1012 = {
            .tui4912 =  tui4912 ,
            .envinst95 = envinst95 ,
        };
        struct FunIter_1011  temp1010 =  into_dash_iter1019 ( ( (  from_dash_function1020 ) ( ( (struct envunion1018){ .fun = (  struct Maybe_1014  (*) (  struct env1012*  ) )lam1021 , .env =  envinst1012 } ) ) ) );
        while (true) {
            struct Maybe_1014  __cond1212 =  next1213 (&temp1010);
            if (  __cond1212 .tag == 0 ) {
                break;
            }
            struct InputEvent_1015  ev4916 =  __cond1212 .stuff .Maybe_1014_Just_s .field0;
            struct InputEvent_1015  dref4917 = (  ev4916 );
            if ( dref4917.tag == InputEvent_1015_Key_t ) {
                ( (  reset_dash_msg1215 ) ( (  ed4911 ) ) );
                struct envunion1222  temp1221 = ( (struct envunion1222){ .fun = (  enum Unit_8  (*) (  struct env439*  ,    struct Editor_267 *  ,    struct Key_446  ) )handle_dash_key1223 , .env =  envinst439 } );
                ( temp1221.fun ( &temp1221.env ,  (  ed4911 ) ,  ( dref4917 .stuff .InputEvent_1015_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1969  temp1968 = ( (struct envunion1969){ .fun = (  bool  (*) (  struct env99*  ,    struct Screen_451 *  ) )resize_dash_screen_dash_if_dash_needed1970 , .env =  envinst99 } );
        ( temp1968.fun ( &temp1968.env ,  (  screen4913 ) ) );
        if ( ( (  should_dash_redraw1972 ) ( (  tui4912 ) ) ) ) {
            (*  screen4913 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1973 ) ( (  screen4913 ) ) );
            struct Theme_188 *  theme4919 = ( ( * ( ( * (  ed4911 ) ) .f_cfg ) ) .f_theme );
            ( (  set_dash_screen_dash_fg1982 ) ( (  screen4913 ) ,  ( ( ( * (  theme4919 ) ) .f_default ) .f_fg ) ) );
            ( (  set_dash_screen_dash_bg1983 ) ( (  screen4913 ) ,  ( ( ( * (  theme4919 ) ) .f_default ) .f_bg ) ) );
            ( (  fill_dash_default1984 ) ( (  screen4913 ) ) );
            struct envunion1997  temp1996 = ( (struct envunion1997){ .fun = (  enum Unit_8  (*) (  struct env449*  ,    struct Screen_451 *  ,    struct Editor_267 *  ) )render_dash_editor1998 , .env =  envinst449 } );
            ( temp1996.fun ( &temp1996.env ,  (  screen4913 ) ,  (  ed4911 ) ) );
            last_dash_redraw_dash_changes4914 = ( (  render_dash_screen2578 ) ( (  screen4913 ) ) );
        }
        ( (  sync2725 ) ( (  tui4912 ) ) );
    }
    ( (  free_dash_screen2734 ) ( (  screen4913 ) ) );
    struct envunion2738  temp2737 = ( (struct envunion2738){ .fun = (  enum Unit_8  (*) (  struct env93*  ,    struct Tui_97 *  ) )deinit2739 , .env =  envinst93 } );
    ( temp2737.fun ( &temp2737.env ,  (  tui4912 ) ) );
}
